<?php
/**
 * @file
 * dis_pdc_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dis_pdc_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'customer_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customer List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_associate' => 'business_associate',
  );
  /* Filter criterion: Content: Associate Type (field_associate_type) */
  $handler->display->display_options['filters']['field_associate_type_value']['id'] = 'field_associate_type_value';
  $handler->display->display_options['filters']['field_associate_type_value']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['filters']['field_associate_type_value']['field'] = 'field_associate_type_value';
  $handler->display->display_options['filters']['field_associate_type_value']['value'] = array(
    'Customer' => 'Customer',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['customer_list'] = $view;

  $view = new view();
  $view->name = 'manage_pdcs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage PDCs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cheque_no' => 'field_cheque_no',
    'field_customer' => 'field_customer',
    'field_bank' => 'field_bank',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cheque_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['id'] = 'reverse_field_pdc_node';
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['field'] = 'reverse_field_pdc_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Bank */
  $handler->display->display_options['fields']['field_bank']['id'] = 'field_bank';
  $handler->display->display_options['fields']['field_bank']['table'] = 'field_data_field_bank';
  $handler->display->display_options['fields']['field_bank']['field'] = 'field_bank';
  /* Field: Content: Cheque No */
  $handler->display->display_options['fields']['field_cheque_no']['id'] = 'field_cheque_no';
  $handler->display->display_options['fields']['field_cheque_no']['table'] = 'field_data_field_cheque_no';
  $handler->display->display_options['fields']['field_cheque_no']['field'] = 'field_cheque_no';
  /* Field: Content: PDC Status */
  $handler->display->display_options['fields']['field_pdc_status']['id'] = 'field_pdc_status';
  $handler->display->display_options['fields']['field_pdc_status']['table'] = 'field_data_field_pdc_status';
  $handler->display->display_options['fields']['field_pdc_status']['field'] = 'field_pdc_status';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid_1]/edit/[nid]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pdc' => 'pdc',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'pdc_utilization' => 'pdc_utilization',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['manage_pdcs'] = $view;

  $view = new view();
  $view->name = 'pdc_register';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PDC Register';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PDC Register';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['id'] = 'reverse_field_pdc_node';
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['field'] = 'reverse_field_pdc_node';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_map_invoices_to_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_invoice' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_pdc' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Edit PDC Details',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_invoice_reversed' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_utilize_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Bank */
  $handler->display->display_options['fields']['field_bank']['id'] = 'field_bank';
  $handler->display->display_options['fields']['field_bank']['table'] = 'field_data_field_bank';
  $handler->display->display_options['fields']['field_bank']['field'] = 'field_bank';
  /* Field: Content: Cheque No */
  $handler->display->display_options['fields']['field_cheque_no']['id'] = 'field_cheque_no';
  $handler->display->display_options['fields']['field_cheque_no']['table'] = 'field_data_field_cheque_no';
  $handler->display->display_options['fields']['field_cheque_no']['field'] = 'field_cheque_no';
  /* Field: Content: PDC Status */
  $handler->display->display_options['fields']['field_pdc_status']['id'] = 'field_pdc_status';
  $handler->display->display_options['fields']['field_pdc_status']['table'] = 'field_data_field_pdc_status';
  $handler->display->display_options['fields']['field_pdc_status']['field'] = 'field_pdc_status';
  /* Field: Content: Cheque Date */
  $handler->display->display_options['fields']['field_cheque_date']['id'] = 'field_cheque_date';
  $handler->display->display_options['fields']['field_cheque_date']['table'] = 'field_data_field_cheque_date';
  $handler->display->display_options['fields']['field_cheque_date']['field'] = 'field_cheque_date';
  $handler->display->display_options['fields']['field_cheque_date']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['fields']['field_cheque_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Cheque Amount */
  $handler->display->display_options['fields']['field_cheque_amount']['id'] = 'field_cheque_amount';
  $handler->display->display_options['fields']['field_cheque_amount']['table'] = 'field_data_field_cheque_amount';
  $handler->display->display_options['fields']['field_cheque_amount']['field'] = 'field_cheque_amount';
  $handler->display->display_options['fields']['field_cheque_amount']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['fields']['field_cheque_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Deposit Date */
  $handler->display->display_options['fields']['field_deposit_date']['id'] = 'field_deposit_date';
  $handler->display->display_options['fields']['field_deposit_date']['table'] = 'field_data_field_deposit_date';
  $handler->display->display_options['fields']['field_deposit_date']['field'] = 'field_deposit_date';
  $handler->display->display_options['fields']['field_deposit_date']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['fields']['field_deposit_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_pdc_invoices']['id'] = 'field_pdc_invoices';
  $handler->display->display_options['fields']['field_pdc_invoices']['table'] = 'field_data_field_pdc_invoices';
  $handler->display->display_options['fields']['field_pdc_invoices']['field'] = 'field_pdc_invoices';
  $handler->display->display_options['fields']['field_pdc_invoices']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['fields']['field_pdc_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_pdc_invoices']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pdc_invoices']['multi_type'] = 'ul';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pdc' => 'pdc',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pdc-register';
  $export['pdc_register'] = $view;

  $view = new view();
  $view->name = 'utilize_pdc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Utilize PDC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Utilize PDC';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_map_invoices_to_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_invoice' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_pdc' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_invoice_reversed' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_utilize_pdc' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Division */
  $handler->display->display_options['fields']['field_division']['id'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['table'] = 'field_data_field_division';
  $handler->display->display_options['fields']['field_division']['field'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['label'] = 'Customer';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoice No */
  $handler->display->display_options['fields']['field_invoice_no']['id'] = 'field_invoice_no';
  $handler->display->display_options['fields']['field_invoice_no']['table'] = 'field_data_field_invoice_no';
  $handler->display->display_options['fields']['field_invoice_no']['field'] = 'field_invoice_no';
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Invoice Value */
  $handler->display->display_options['fields']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['table'] = 'field_data_field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  /* Filter criterion: Content: Outward Type (field_outward_type) */
  $handler->display->display_options['filters']['field_outward_type_value']['id'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['filters']['field_outward_type_value']['field'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['value'] = array(
    'Sales Invoice' => 'Sales Invoice',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Division (field_division) */
  $handler->display->display_options['filters']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['filters']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator_id'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['label'] = 'Division';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['identifier'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Customer';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Invoice Date (field_invoice_date) */
  $handler->display->display_options['filters']['field_invoice_date_value']['id'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['filters']['field_invoice_date_value']['field'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_invoice_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator_id'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['label'] = 'Invoice Date';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['identifier'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_invoice_date_value']['form_type'] = 'date_popup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'utilize-pdc';
  $export['utilize_pdc'] = $view;

  return $export;
}
