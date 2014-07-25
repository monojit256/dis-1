<?php
/**
 * @file
 * dis_print_pdf_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dis_print_pdf_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(),
    'module' => 'print_ui',
  );

  return $permissions;
}
