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
  $items['rules_pdc_deposit_email'] = entity_import('rules_config', '{ "rules_pdc_deposit_email" : {
      "LABEL" : "PDC Deposit Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis", "dis_pdc", "rules", "mimemail" ],
      "ON" : {
        "node_insert--pdc_utilization" : { "bundle" : "pdc_utilization" },
        "node_update--pdc_utilization" : { "bundle" : "pdc_utilization" }
      },
      "DO" : [
        { "dis_ruleaction_get_email_recipients" : {
            "USING" : { "packing" : [ "node:field-pdc-invoices" ] },
            "PROVIDE" : { "recipients" : { "recipients" : "Recipients" } }
          }
        },
        { "dis_ruleaction_get_first_node_in_list" : {
            "USING" : { "node_list" : [ "node:field-pdc-invoices" ] },
            "PROVIDE" : { "first_node" : { "first_node" : "First Node" } }
          }
        },
        { "dis_pdc_ruleaction_get_PDC_invoices_data" : {
            "USING" : { "invoices" : [ "node:field-pdc-invoices" ] },
            "PROVIDE" : {
              "html_table" : { "html_table" : "HTML Table" },
              "total_value" : { "total_value" : "Total Value" }
            }
          }
        },
        { "drupal_message" : { "message" : [ "html-table:summary" ] } },
        { "mimemail" : {
            "key" : "pdc-deposit-email",
            "to" : [ "recipients" ],
            "subject" : "[first-node:field-consignee]: Deposit of Cheque No [node:field-pdc:field-cheque-no] of Rs. [node:field-cheque-amount]",
            "body" : "We will be depositing your Cheque No [node:field-pdc:field-cheque-no] dated [node:field-cheque-date] of Rs. [node:field-cheque-amount] on [node:field-deposit-date] against the following invoices:\\r\\n\\r\\n\\u003Ctable\\u003E\\r\\n        \\u003Cthead\\u003E\\r\\n        \\u003Ctr\\u003E\\r\\n        \\u003Cth\\u003EDivision Name\\u003C\\/th\\u003E\\r\\n        \\u003Cth\\u003EInvoice No\\u003C\\/th\\u003E\\r\\n        \\u003Cth\\u003EInvoice Date\\u003C\\/th\\u003E\\r\\n        \\u003Cth\\u003EInvoice Amount (Rs)\\u003C\\/th\\u003E\\r\\n        \\u003C\\/tr\\u003E\\u003C\\/thead\\u003E\\u003C\\/table\\u003E\\r\\n\\r\\n[html_table:value]\\r\\n\\r\\nTotal value of Invoices: \\u003Cb\\u003ERs. [total_value:value]\\u003C\\/b\\u003E\\r\\n\\r\\nRemarks: \\u003Cb\\u003E[node:field-remarks]\\u003C\\/b\\u003E\\r\\n\\r\\n\\u003Ci\\u003EThis is a system generated email. Please do not reply to this email.\\u003C\\/i\\u003E",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "PDC Deposit Mail sent to: [recipients:value]" } }
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
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "invoices" : { "label" : "Invoices", "type" : "list\\u003Cnode\\u003E" },
        "pdc" : { "label" : "PDC", "type" : "node" },
        "cheque_date" : { "label" : "Cheque Date", "type" : "date" },
        "cheque_amount" : { "label" : "Cheque Amount", "type" : "decimal" },
        "deposit_date" : { "label" : "Deposit Date", "type" : "date" },
        "remarks" : { "label" : "Remarks", "type" : "text" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "pdc" ], "field" : "field_company" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "pdc_utilization",
              "param_title" : "PDC Utilization",
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
        { "data_set" : {
            "data" : [ "entity-created:field-cheque-amount" ],
            "value" : [ "cheque-amount" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-cheque-date" ],
            "value" : [ "cheque-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-deposit-date" ],
            "value" : [ "deposit-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-pdc-invoices" ],
            "value" : [ "invoices" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-pdc" ], "value" : [ "pdc" ] } },
        { "data_set" : { "data" : [ "entity-created:field-remarks" ], "value" : [ "remarks" ] } },
        { "entity_save" : { "data" : [ "entity-created" ] } }
      ]
    }
  }');
  return $items;
}
