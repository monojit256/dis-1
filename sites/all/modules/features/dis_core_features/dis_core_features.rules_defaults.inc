<?php
/**
 * @file
 * dis_core_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dis_core_features_default_rules_configuration() {
  $items = array();
  $items['rules_invoice_status_rule_node_creation'] = entity_import('rules_config', '{ "rules_invoice_status_rule_node_creation" : {
      "LABEL" : "Invoice Status Rule - Node Creation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : {
        "node_insert--packing" : { "bundle" : "packing" },
        "node_insert--dispatch" : { "bundle" : "dispatch" },
        "node_insert--delivery_confirmation" : { "bundle" : "delivery_confirmation" }
      },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode\\u003E" },
            "PROVIDE" : { "variable_added" : { "invoices_list" : "List of invoices" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text" },
            "PROVIDE" : { "variable_added" : { "new_status" : "New Status" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "packing" : "packing" } } } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "invoices-list" ],
                    "value" : [ "node:field-outward-invoices" ]
                  }
                },
                { "data_set" : { "data" : [ "new-status" ], "value" : "Packed" } }
              ]
            },
            {
              "ELSE IF" : { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "dispatch" : "dispatch" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : {
                          "entity" : [ "node:field-packing" ],
                          "field" : "field_outward_invoices"
                        }
                      },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "invoices-list" ],
                            "value" : [ "node:field-packing:field-outward-invoices" ]
                          }
                        },
                        { "data_set" : { "data" : [ "new-status" ], "value" : "Dispatched" } }
                      ]
                    }
                  ]
                }
              ]
            },
            {
              "ELSE IF" : { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "delivery_confirmation" : "delivery_confirmation" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : { "entity" : [ "node:field-dispatch" ], "field" : "field_packing" } },
                      "DO" : [
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "entity_has_field" : {
                                  "entity" : [ "node:field-dispatch:field-packing" ],
                                  "field" : "field_outward_invoices"
                                }
                              },
                              "DO" : [
                                { "data_set" : {
                                    "data" : [ "invoices-list" ],
                                    "value" : [ "node:field-dispatch:field-packing:field-outward-invoices" ]
                                  }
                                },
                                { "data_set" : { "data" : [ "new-status" ], "value" : "Delivered" } }
                              ]
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "LOOP" : {
            "USING" : { "list" : [ "invoices-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_has_field" : { "entity" : [ "list-item" ], "field" : "field_status" } },
                    "DO" : [
                      { "data_set" : { "data" : [ "list-item:field-status" ], "value" : [ "new-status" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_invoice_status_rule_node_deletion'] = entity_import('rules_config', '{ "rules_invoice_status_rule_node_deletion" : {
      "LABEL" : "Invoice Status Rule - Node Deletion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : {
        "node_delete--packing" : { "bundle" : "packing" },
        "node_delete--dispatch" : { "bundle" : "dispatch" },
        "node_delete--delivery_confirmation" : { "bundle" : "delivery_confirmation" }
      },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode\\u003E" },
            "PROVIDE" : { "variable_added" : { "invoices_list" : "List of invoices" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text" },
            "PROVIDE" : { "variable_added" : { "new_status" : "New Status" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "packing" : "packing" } } } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "invoices-list" ],
                    "value" : [ "node:field-outward-invoices" ]
                  }
                },
                { "data_set" : { "data" : [ "new-status" ], "value" : "Created" } }
              ]
            },
            {
              "ELSE IF" : { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "dispatch" : "dispatch" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : {
                          "entity" : [ "node:field-packing" ],
                          "field" : "field_outward_invoices"
                        }
                      },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "invoices-list" ],
                            "value" : [ "node:field-packing:field-outward-invoices" ]
                          }
                        },
                        { "data_set" : { "data" : [ "new-status" ], "value" : "Packed" } }
                      ]
                    }
                  ]
                }
              ]
            },
            {
              "ELSE IF" : { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "delivery_confirmation" : "delivery_confirmation" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : { "entity" : [ "node:field-dispatch" ], "field" : "field_packing" } },
                      "DO" : [
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "entity_has_field" : {
                                  "entity" : [ "node:field-dispatch:field-packing" ],
                                  "field" : "field_outward_invoices"
                                }
                              },
                              "DO" : [
                                { "data_set" : {
                                    "data" : [ "invoices-list" ],
                                    "value" : [ "node:field-dispatch:field-packing:field-outward-invoices" ]
                                  }
                                },
                                { "data_set" : { "data" : [ "new-status" ], "value" : "Dispatched" } }
                              ]
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "LOOP" : {
            "USING" : { "list" : [ "invoices-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_has_field" : { "entity" : [ "list-item" ], "field" : "field_status" } },
                    "DO" : [
                      { "data_set" : { "data" : [ "list-item:field-status" ], "value" : [ "new-status" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_redirect_edit_invoice'] = entity_import('rules_config', '{ "rules_redirect_edit_invoice" : {
      "LABEL" : "Redirect Edit Invoice",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "invoice" : { "label" : "Invoice", "type" : "node" } },
      "ACTION SET" : [ { "dis_ruleaction_redirect_edit_invoice" : [] } ]
    }
  }');
  $items['rules_send_lr_email'] = entity_import('rules_config', '{ "rules_send_lr_email" : {
      "LABEL" : "Send LR Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "dis", "mimemail" ],
      "ON" : { "node_update--dispatch" : { "bundle" : "dispatch" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node:field-packing" ], "field" : "field_cases" } },
        { "entity_has_field" : { "entity" : [ "node:field-packing" ], "field" : "field_transporter" } },
        { "entity_has_field" : {
            "entity" : [ "node:field-packing" ],
            "field" : "field_outward_invoices"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "node:field-packing:field-outward-invoices:0" ],
            "field" : "field_consignee"
          }
        },
        { "OR" : [
            { "data_is_empty" : { "data" : [ "node-unchanged:field-lr-date" ] } },
            { "data_is_empty" : { "data" : [ "node-unchanged:field-lr-no" ] } }
          ]
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-lr-no" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-lr-date" ] } }
      ],
      "DO" : [
        { "dis_ruleaction_get_LR_email_recipients" : {
            "USING" : { "packing" : [ "node:field-packing" ] },
            "PROVIDE" : { "recipients" : { "recipients" : "Recipients" } }
          }
        },
        { "drupal_message" : { "message" : "Mail Sent to [recipients:value]" } },
        { "mimemail" : {
            "key" : "lr_email",
            "to" : [ "recipients" ],
            "subject" : "[node:field-packing:field-outward-invoices:0:field-consignee:field-name]: [node:field-packing:field-cases] c\\/s dispatched through [node:field-packing:field-transporter] LR No [node:field-lr-no] dt: [node:field-lr-date]",
            "body" : "The above consignment has been dispatched. \\r\\n\\r\\nPlease acknowledge its receipt. In case of any issues, please contact us.\\r\\n\\r\\nThanks\\r\\nApollo Medi-Services Pvt Ltd\\r\\n\\r\\n\\u003Ci\\u003EThis is a system generated email. Please do not reply to this email.\\u003C\\/i\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_set_invoice_reversed'] = entity_import('rules_config', '{ "rules_set_invoice_reversed" : {
      "LABEL" : "Set Invoice Reversed",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "invoice" : { "label" : "Invoice", "type" : "node" },
        "reason" : { "label" : "Reason for reversal", "type" : "text" }
      },
      "ACTION SET" : [
        { "dis_ruleaction_set_invoice_reversed" : { "invoice" : [ "invoice" ], "reason" : [ "reason" ] } }
      ]
    }
  }');
  $items['rules_set_quarter_and_financial_year'] = entity_import('rules_config', '{ "rules_set_quarter_and_financial_year" : {
      "LABEL" : "Set Quarter and Financial Year",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis", "rules" ],
      "ON" : {
        "node_insert--outward_invoice" : { "bundle" : "outward_invoice" },
        "node_update--outward_invoice" : { "bundle" : "outward_invoice" }
      },
      "DO" : [
        { "dis_ruleaction_get_quarter_fy" : {
            "USING" : { "invoice_date" : [ "node:field-invoice-date" ] },
            "PROVIDE" : {
              "quarter" : { "quarter" : "Quarter" },
              "financial_year" : { "financial_year" : "Financial Year" }
            }
          }
        },
        { "data_set" : { "data" : [ "node:field-quarter" ], "value" : [ "quarter" ] } },
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_term", "id" : [ "financial-year" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-financial-year" ],
            "value" : [ "entity-fetched" ]
          }
        },
        { "entity_save" : { "data" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_update_dispatch'] = entity_import('rules_config', '{ "rules_update_dispatch" : {
      "LABEL" : "Update Dispatch",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "packings" : { "label" : "Packings", "type" : "list\\u003Cnode\\u003E" },
        "dispatch_date" : { "label" : "Dispatch Date", "type" : "date" },
        "dispatch_mode" : { "label" : "Dispatch Mode", "type" : "list\\u003Ctext\\u003E" },
        "vehicle_no" : { "label" : "Vehicle No \\/ Delivery Person", "type" : "text" }
      },
      "ACTION SET" : [
        { "dis_ruleaction_update_dispatch" : {
            "packings" : [ "packings" ],
            "dispatch_date" : [ "dispatch_date" ],
            "dispatch_mode" : [ "dispatch_mode" ],
            "vehicle_no" : [ "vehicle_no" ]
          }
        }
      ]
    }
  }');
  $items['rules_update_packing'] = entity_import('rules_config', '{ "rules_update_packing" : {
      "LABEL" : "Update Packing",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "invoices" : { "label" : "Invoices", "type" : "list\\u003Cnode\\u003E" } },
      "ACTION SET" : [
        { "dis_ruleaction_redirect_packing_page" : { "invoices" : [ "invoices" ] } }
      ]
    }
  }');
  return $items;
}
