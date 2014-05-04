<?php
/**
 * @file
 * dis_core_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dis_core_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'manage_invoices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage Invoices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Invoices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Outward Type */
  $handler->display->display_options['fields']['field_outward_type']['id'] = 'field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['field'] = 'field_outward_type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Invoice No';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'dis_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
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
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Associate Type */
  $handler->display->display_options['fields']['field_associate_type']['id'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['field'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['fields']['field_associate_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit?field_company=[nid_1]&field_associate_type=[field_associate_type]';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
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
    'outward_invoice' => 'outward_invoice',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'packing' => 'packing',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['path'] = 'manage-invoices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Invoices';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['id'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['field'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'packing' => 'packing',
  );
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
  $export['manage_invoices'] = $view;

  $view = new view();
  $view->name = 'outward_register';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Outward Register';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Outward Register';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['id'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['field'] = 'reverse_field_outward_invoices_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_packing_node']['id'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['field'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['relationship'] = 'reverse_field_outward_invoices_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['id'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['field'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['relationship'] = 'reverse_field_packing_node';
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
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Edit Invoice Details',
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
      'selected' => 1,
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
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Outward Type */
  $handler->display->display_options['fields']['field_outward_type']['id'] = 'field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['field'] = 'field_outward_type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Invoice No';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
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
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Packing Date */
  $handler->display->display_options['fields']['field_packing_date']['id'] = 'field_packing_date';
  $handler->display->display_options['fields']['field_packing_date']['table'] = 'field_data_field_packing_date';
  $handler->display->display_options['fields']['field_packing_date']['field'] = 'field_packing_date';
  $handler->display->display_options['fields']['field_packing_date']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['fields']['field_packing_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['relationship'] = 'reverse_field_packing_node';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Delivery Date */
  $handler->display->display_options['fields']['field_delivery_date']['id'] = 'field_delivery_date';
  $handler->display->display_options['fields']['field_delivery_date']['table'] = 'field_data_field_delivery_date';
  $handler->display->display_options['fields']['field_delivery_date']['field'] = 'field_delivery_date';
  $handler->display->display_options['fields']['field_delivery_date']['relationship'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['fields']['field_delivery_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'outward-register';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Outward Register';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['outward_register'] = $view;

  $view = new view();
  $view->name = 'update_delivery_confirmation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update Delivery Confirmation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update Delivery Confirmation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_packing_target_id']['id'] = 'field_packing_target_id';
  $handler->display->display_options['relationships']['field_packing_target_id']['table'] = 'field_data_field_packing';
  $handler->display->display_options['relationships']['field_packing_target_id']['field'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['id'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['field'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['relationship'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['id'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['field'] = 'reverse_field_dispatch_node';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dispatch Mode */
  $handler->display->display_options['fields']['field_dispatch_mode']['id'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['table'] = 'field_data_field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['field'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Vehicle No / Delivery Person */
  $handler->display->display_options['fields']['field_vehicle_no']['id'] = 'field_vehicle_no';
  $handler->display->display_options['fields']['field_vehicle_no']['table'] = 'field_data_field_vehicle_no';
  $handler->display->display_options['fields']['field_vehicle_no']['field'] = 'field_vehicle_no';
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Update Delivery Confirmation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Update';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/delivery-confirmation?field_company=[nid_1]&field_dispatch=[nid]';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
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
    'dispatch' => 'dispatch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Content: LR Date (field_lr_date) */
  $handler->display->display_options['filters']['field_lr_date_value']['id'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['filters']['field_lr_date_value']['field'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['operator'] = 'not empty';
  /* Filter criterion: Content: LR No (field_lr_no) */
  $handler->display->display_options['filters']['field_lr_no_value']['id'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['filters']['field_lr_no_value']['field'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Update Delivery Confirmation';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'update-delivery-confirmation';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Update Delivery Confirmation';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Dispatch';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dispatch Mode */
  $handler->display->display_options['fields']['field_dispatch_mode']['id'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['table'] = 'field_data_field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['field'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Vehicle No / Delivery Person */
  $handler->display->display_options['fields']['field_vehicle_no']['id'] = 'field_vehicle_no';
  $handler->display->display_options['fields']['field_vehicle_no']['table'] = 'field_data_field_vehicle_no';
  $handler->display->display_options['fields']['field_vehicle_no']['field'] = 'field_vehicle_no';
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Update Delivery Confirmation';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Update';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/delivery-confirmation?field_company=[nid_1]&field_dispatch=[nid]';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'dispatch' => 'dispatch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'Manage Dispatch';
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
  $export['update_delivery_confirmation'] = $view;

  $view = new view();
  $view->name = 'update_dispatch';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update Dispatch';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update Dispatch';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['id'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['field'] = 'field_outward_invoices_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_packing_node']['id'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['field'] = 'reverse_field_packing_node';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '20';
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
      'selected' => 1,
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
  );
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['field_company_name']['label'] = 'Company';
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_outward_invoices']['multi_type'] = 'ul';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Packing';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Packing';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
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
    'packing' => 'packing',
  );
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '20';
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
      'selected' => 1,
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
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_outward_invoices']['multi_type'] = 'ul';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'update-dispatch';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Update Dispatch';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Packing';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_outward_invoices']['multi_type'] = 'ul';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'packing' => 'packing',
  );
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['pane_title'] = 'Manage Packing';
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
  $export['update_dispatch'] = $view;

  $view = new view();
  $view->name = 'update_lr_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update LR Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update LR Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_packing_target_id']['id'] = 'field_packing_target_id';
  $handler->display->display_options['relationships']['field_packing_target_id']['table'] = 'field_data_field_packing';
  $handler->display->display_options['relationships']['field_packing_target_id']['field'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['id'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['field'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['relationship'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Update LR Details';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Update LR Details';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
    'dispatch' => 'dispatch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Content: LR No (field_lr_no) */
  $handler->display->display_options['filters']['field_lr_no_value']['id'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['filters']['field_lr_no_value']['field'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_lr_no_value']['group'] = 2;
  /* Filter criterion: Content: LR Date (field_lr_date) */
  $handler->display->display_options['filters']['field_lr_date_value']['id'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['filters']['field_lr_date_value']['field'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_lr_date_value']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'update-lr-details';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Update LR Details';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['update_lr_details'] = $view;

  $view = new view();
  $view->name = 'update_lr_value';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update LR Value';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update LR Value';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_packing_target_id']['id'] = 'field_packing_target_id';
  $handler->display->display_options['relationships']['field_packing_target_id']['table'] = 'field_data_field_packing';
  $handler->display->display_options['relationships']['field_packing_target_id']['field'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['id'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['field'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['relationship'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Update LR Value';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Update LR Value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
    'dispatch' => 'dispatch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Content: LR Value (field_lr_value) */
  $handler->display->display_options['filters']['field_lr_value_value']['id'] = 'field_lr_value_value';
  $handler->display->display_options['filters']['field_lr_value_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['filters']['field_lr_value_value']['field'] = 'field_lr_value_value';
  $handler->display->display_options['filters']['field_lr_value_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_lr_value_value']['group'] = 2;
  /* Filter criterion: Content: LR Value (field_lr_value) */
  $handler->display->display_options['filters']['field_lr_value_value_1']['id'] = 'field_lr_value_value_1';
  $handler->display->display_options['filters']['field_lr_value_value_1']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['filters']['field_lr_value_value_1']['field'] = 'field_lr_value_value';
  $handler->display->display_options['filters']['field_lr_value_value_1']['value']['value'] = '0.00';
  $handler->display->display_options['filters']['field_lr_value_value_1']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'update-lr-value';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Update LR Value';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['update_lr_value'] = $view;

  $view = new view();
  $view->name = 'update_packing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update Packing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update Packing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['id'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['field'] = 'reverse_field_outward_invoices_node';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '30';
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
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
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
  /* Field: Content: Outward Type */
  $handler->display->display_options['fields']['field_outward_type']['id'] = 'field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['field'] = 'field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['label'] = 'Invoice Type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Invoice No';
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'dis_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Associate Type */
  $handler->display->display_options['fields']['field_associate_type']['id'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['field'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['fields']['field_associate_type']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit?field_company=[nid_1]&field_associate_type=[field_associate_type]';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
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
    'outward_invoice' => 'outward_invoice',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Reversed' => 'Reversed',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'update-packing';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Update Packing';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['update_packing'] = $view;

  return $export;
}
