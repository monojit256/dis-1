<?php
/**
 * @file
 * dis_pdc_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dis_pdc_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-pdc:add-pdc
  $menu_links['main-menu_add-pdc:add-pdc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-pdc',
    'router_path' => 'add-pdc',
    'link_title' => 'Add PDC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-pdc:add-pdc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pdc:pdc',
  );
  // Exported menu link: main-menu_pdc-register:pdc-register
  $menu_links['main-menu_pdc-register:pdc-register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pdc-register',
    'router_path' => 'pdc-register',
    'link_title' => 'PDC Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pdc-register:pdc-register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pdc:pdc',
  );
  // Exported menu link: main-menu_pdc:pdc
  $menu_links['main-menu_pdc:pdc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pdc',
    'router_path' => 'pdc',
    'link_title' => 'PDC',
    'options' => array(
      'identifier' => 'main-menu_pdc:pdc',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_miscellaneous:miscellaneous',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add PDC');
  t('PDC');
  t('PDC Register');


  return $menu_links;
}
