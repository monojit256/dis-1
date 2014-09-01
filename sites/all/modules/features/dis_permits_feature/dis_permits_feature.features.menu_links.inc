<?php
/**
 * @file
 * dis_permits_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dis_permits_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-associate-inward-permit:add-associate-inward-permit
  $menu_links['main-menu_add-associate-inward-permit:add-associate-inward-permit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-associate-inward-permit',
    'router_path' => 'add-associate-inward-permit',
    'link_title' => 'Add Associate Inward Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-associate-inward-permit:add-associate-inward-permit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_associate-inward-permit:associate-inward-permit',
  );
  // Exported menu link: main-menu_add-inward-permit:add-inward-permit
  $menu_links['main-menu_add-inward-permit:add-inward-permit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-inward-permit',
    'router_path' => 'add-inward-permit',
    'link_title' => 'Add Inward Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-inward-permit:add-inward-permit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_inward-permit:inward-permit',
  );
  // Exported menu link: main-menu_associate-inward-permit:associate-inward-permit
  $menu_links['main-menu_associate-inward-permit:associate-inward-permit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'associate-inward-permit',
    'router_path' => 'associate-inward-permit',
    'link_title' => 'Associate Inward Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_associate-inward-permit:associate-inward-permit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_permit:permits',
  );
  // Exported menu link: main-menu_inward-permit:inward-permit
  $menu_links['main-menu_inward-permit:inward-permit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'inward-permit',
    'router_path' => 'inward-permit',
    'link_title' => 'Inward Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_inward-permit:inward-permit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_permit:permits',
  );
  // Exported menu link: main-menu_permit:permits
  $menu_links['main-menu_permit:permits'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'permits',
    'router_path' => 'permits',
    'link_title' => 'Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_permit:permits',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_miscellaneous:miscellaneous',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Associate Inward Permit');
  t('Add Inward Permit');
  t('Associate Inward Permit');
  t('Inward Permit');
  t('Permit');


  return $menu_links;
}
