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
              "IF" : { "entity_has_field" : { "entity" : [ "entity-fetched" ], "field" : "field_outward_invoices" } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "entity-fetched:field-outward-invoices" ],
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
  $items['rules_utilize_pdc'] = entity_import('rules_config', '{ "rules_utilize_pdc" : {
      "LABEL" : "Utilize PDC",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "pdc" : { "label" : "PDC", "type" : "node" },
        "cheque_date" : { "label" : "Cheque Date", "type" : "date" },
        "cheque_amount" : { "label" : "Cheque Amount", "type" : "decimal" },
        "deposit_date" : { "label" : "Deposit Date", "type" : "date" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "pdc" ], "field" : "field_company" } },
        { "entity_has_field" : { "entity" : [ "pdc" ], "field" : "field_customer" } }
      ],
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
        { "redirect" : { "url" : "map-pdc-invoices\\/[pdc:field-company:nid]\\/[pdc:field-customer:nid]?pdc=[entity-created:nid]\\u0026destination=utilize-pdc" } }
      ]
    }
  }');
  return $items;
}
