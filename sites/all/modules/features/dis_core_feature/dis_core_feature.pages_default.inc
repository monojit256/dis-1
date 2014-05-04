<?php
/**
 * @file
 * dis_core_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dis_core_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Edit Packing',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'packing' => 'packing',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '05d89d1a-0ab2-451a-a61d-50bcffb2e681';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e1b9d1f-6cf2-4d10-8a24-969568b163da';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e1b9d1f-6cf2-4d10-8a24-969568b163da';
    $display->content['new-3e1b9d1f-6cf2-4d10-8a24-969568b163da'] = $pane;
    $display->panels['center'][0] = 'new-3e1b9d1f-6cf2-4d10-8a24-969568b163da';
    $pane = new stdClass();
    $pane->pid = 'new-8c82b038-c1d0-48f9-bb12-25f182cf1b69';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'manage_invoices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_node_edit_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8c82b038-c1d0-48f9-bb12-25f182cf1b69';
    $display->content['new-8c82b038-c1d0-48f9-bb12-25f182cf1b69'] = $pane;
    $display->panels['center'][1] = 'new-8c82b038-c1d0-48f9-bb12-25f182cf1b69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Edit Dispatch',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Packing [field_packing])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_packing-node-node',
        'delta' => 0,
        'context' => 'argument_node_edit_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node edit form from node',
        'keyword' => 'node_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'relationship_entity_from_field:field_packing-node-node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dispatch' => 'dispatch',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'testing' => array(
        'corner_location' => 'panel',
      ),
      'invoices' => NULL,
      'center' => NULL,
    ),
    'testing' => array(
      'style' => 'rounded_corners',
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '05d89d1a-0ab2-451a-a61d-50bcffb2e681';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0943243f-ca49-404d-abd8-c6488dbba4d5';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0943243f-ca49-404d-abd8-c6488dbba4d5';
    $display->content['new-0943243f-ca49-404d-abd8-c6488dbba4d5'] = $pane;
    $display->panels['center'][0] = 'new-0943243f-ca49-404d-abd8-c6488dbba4d5';
    $pane = new stdClass();
    $pane->pid = 'new-e05d067d-81cb-41fd-961c-58bdaa24cdd0';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'update_dispatch-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_packing-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e05d067d-81cb-41fd-961c-58bdaa24cdd0';
    $display->content['new-e05d067d-81cb-41fd-961c-58bdaa24cdd0'] = $pane;
    $display->panels['center'][1] = 'new-e05d067d-81cb-41fd-961c-58bdaa24cdd0';
    $pane = new stdClass();
    $pane->pid = 'new-5a065b75-a72f-4f70-999d-b6c303a7f771';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'manage_invoices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_packing-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5a065b75-a72f-4f70-999d-b6c303a7f771';
    $display->content['new-5a065b75-a72f-4f70-999d-b6c303a7f771'] = $pane;
    $display->panels['center'][2] = 'new-5a065b75-a72f-4f70-999d-b6c303a7f771';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Edit Delivery Confirmation',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Dispatch [field_dispatch])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_dispatch-node-node',
        'delta' => 0,
        'context' => 'argument_node_edit_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Packing [field_packing])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_packing-node-node',
        'delta' => 0,
        'context' => 'relationship_entity_from_field:field_dispatch-node-node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Node edit form from Dispatch',
        'keyword' => 'node_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'relationship_entity_from_field:field_dispatch-node-node_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Node edit form from Packing',
        'keyword' => 'node_form_2',
        'name' => 'node_edit_form_from_node',
        'context' => 'relationship_entity_from_field:field_packing-node-node_1',
        'id' => 2,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'delivery_confirmation' => 'delivery_confirmation',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '05d89d1a-0ab2-451a-a61d-50bcffb2e681';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d621c7a-8e5c-48d1-ba7b-ae352cdd27be';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d621c7a-8e5c-48d1-ba7b-ae352cdd27be';
    $display->content['new-1d621c7a-8e5c-48d1-ba7b-ae352cdd27be'] = $pane;
    $display->panels['center'][0] = 'new-1d621c7a-8e5c-48d1-ba7b-ae352cdd27be';
    $pane = new stdClass();
    $pane->pid = 'new-08bf481e-4a49-4c3b-abee-17f71ea002c4';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'update_delivery_confirmation-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_dispatch-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '08bf481e-4a49-4c3b-abee-17f71ea002c4';
    $display->content['new-08bf481e-4a49-4c3b-abee-17f71ea002c4'] = $pane;
    $display->panels['center'][1] = 'new-08bf481e-4a49-4c3b-abee-17f71ea002c4';
    $pane = new stdClass();
    $pane->pid = 'new-b222c05a-9946-46f4-83ef-e092bc6cd768';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'update_dispatch-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_packing-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b222c05a-9946-46f4-83ef-e092bc6cd768';
    $display->content['new-b222c05a-9946-46f4-83ef-e092bc6cd768'] = $pane;
    $display->panels['center'][2] = 'new-b222c05a-9946-46f4-83ef-e092bc6cd768';
    $pane = new stdClass();
    $pane->pid = 'new-0b5372a7-8487-408c-9cf1-8be3173bbd76';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'manage_invoices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_packing-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0b5372a7-8487-408c-9cf1-8be3173bbd76';
    $display->content['new-0b5372a7-8487-408c-9cf1-8be3173bbd76'] = $pane;
    $display->panels['center'][3] = 'new-0b5372a7-8487-408c-9cf1-8be3173bbd76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function dis_core_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'admin_home';
  $page->task = 'page';
  $page->admin_title = 'Admin Home';
  $page->admin_description = '';
  $page->path = 'admin-home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Admin Home',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_admin_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'admin_home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Admin Home';
  $display->uuid = '69938739-410c-4074-86ea-1d0877722517';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['admin_home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'goods_inward';
  $page->task = 'page';
  $page->admin_title = 'Goods Inward';
  $page->admin_description = '';
  $page->path = 'goods-inward';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Goods Inward',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_goods_inward_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'goods_inward';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Goods Inward';
  $display->uuid = 'fd75392b-6e6c-473e-978e-0d89187d3d69';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['goods_inward'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'goods_outward';
  $page->task = 'page';
  $page->admin_title = 'Goods Outward';
  $page->admin_description = '';
  $page->path = 'goods-outward';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Goods Outward',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_goods_outward_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'goods_outward';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Goods Outward';
  $display->uuid = '287d6be2-7011-406d-985b-caad2c4a2e12';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['goods_outward'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'master_data';
  $page->task = 'page';
  $page->admin_title = 'Master Data';
  $page->admin_description = '';
  $page->path = 'master-data';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Master Data',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_master_data_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'master_data';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Master Data';
  $display->uuid = '4931a7c2-55a2-40e8-a01c-a8c93b1544bc';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['master_data'] = $page;

  return $pages;

}
