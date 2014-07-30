<?php
/**
 * @file
 * dis_pdc_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dis_pdc_feature_default_rules_configuration() {
  $items = array();
  $items['rules_map_invoices_to_pdc'] = entity_import('rules_config', '{ "rules_map_invoices_to_pdc" : {
      "LABEL" : "Map Invoices To PDC",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_url_argument", "rules", "rules_conditional" ],
      "USES VARIABLES" : { "invoices" : { "label" : "Invoices", "type" : "list\\u003Cnode\\u003E" } },
      "DO" : [
        { "rules_url_argument_rules_action_get_argument_from_url" : {
            "USING" : { "type" : "integer", "argument_name" : "pdc" },
            "PROVIDE" : { "argument_from_url" : { "argument_from_url" : "Argument from URL" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "argument-from-url" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_has_field" : { "entity" : [ "entity-fetched" ], "field" : "field_pdc_invoices" } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "entity-fetched:field-pdc-invoices" ],
                    "value" : [ "invoices" ]
                  }
                }
              ]
            }
          ]
        },
        { "entity_save" : { "data" : [ "entity-fetched" ] } }
      ]
    }
  }');
  $items['rules_pdc_status_rule_utilization_creation'] = entity_import('rules_config', '{ "rules_pdc_status_rule_utilization_creation" : {
      "LABEL" : "PDC Status Rule - Utilization Creation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--pdc_utilization" : { "bundle" : "pdc_utilization" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node:field-pdc" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-pdc:field-pdc-status" ], "value" : "Utilized" } }
      ]
    }
  }');
  $items['rules_pdc_status_rule_utilization_deletion'] = entity_import('rules_config', '{ "rules_pdc_status_rule_utilization_deletion" : {
      "LABEL" : "PDC Status Rule - Utilization Deletion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_delete--pdc_utilization" : { "bundle" : "pdc_utilization" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node:field-pdc" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-pdc:field-pdc-status" ], "value" : "Unused" } }
      ]
    }
  }');
  $items['rules_redirect_edit_pdc'] = entity_import('rules_config', '{ "rules_redirect_edit_pdc" : {
      "LABEL" : "Redirect Edit PDC",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis_pdc" ],
      "USES VARIABLES" : { "pdc" : { "label" : "PDC", "type" : "node" } },
      "ACTION SET" : [ { "dis_pdc_ruleaction_redirect_edit_pdc" : { "pdc" : [ "pdc" ] } } ]
    }
  }');
  $items['rules_utilize_pdc'] = entity_import('rules_config', '{ "rules_utilize_pdc" : {
      "LABEL" : "Utilize PDC",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : {
        "pdc" : { "label" : "PDC", "type" : "node" },
        "cheque_date" : { "label" : "Cheque Date", "type" : "date" },
        "cheque_amount" : { "label" : "Cheque Amount", "type" : "decimal" },
        "deposit_date" : { "label" : "Deposit Date", "type" : "date" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "pdc" ], "field" : "field_company" } },
        { "entity_has_field" : { "entity" : [ "pdc" ], "field" : "field_customer" } },
        { "entity_has_field" : { "entity" : [ "pdc" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "pdc:field-pdc-status" ], "value" : "Unused" } },
              "DO" : [
                { "entity_create" : {
                    "USING" : {
                      "type" : "node",
                      "param_type" : "pdc_utilization",
                      "param_title" : [ "pdc:title" ],
                      "param_author" : [ "site:current-user" ]
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-company" ],
                    "value" : [ "pdc:field-company" ]
                  }
                },
                { "data_set" : { "data" : [ "entity-created:field-pdc" ], "value" : [ "pdc" ] } },
                { "data_set" : {
                    "data" : [ "entity-created:field-cheque-date" ],
                    "value" : [ "cheque-date" ]
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-cheque-amount" ],
                    "value" : [ "cheque-amount" ]
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-deposit-date" ],
                    "value" : [ "deposit-date" ]
                  }
                },
                { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
                { "redirect" : { "url" : "map-pdc-invoices\\/[pdc:field-company:nid]\\/[pdc:field-customer:nid]?pdc=[entity-created:nid]\\u0026destination=pdc-register" } }
              ]
            },
            { "ELSE" : [
                { "drupal_message" : {
                    "message" : "The selected PDC has already been utilized. Please select another PDC.",
                    "type" : "error"
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
