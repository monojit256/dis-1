<?php
/**
 * @file
 * dis_pdc_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dis_pdc_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create pdc content'.
  $permissions['create pdc content'] = array(
    'name' => 'create pdc content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create pdc_utilization content'.
  $permissions['create pdc_utilization content'] = array(
    'name' => 'create pdc_utilization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any pdc content'.
  $permissions['delete any pdc content'] = array(
    'name' => 'delete any pdc content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any pdc_utilization content'.
  $permissions['delete any pdc_utilization content'] = array(
    'name' => 'delete any pdc_utilization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own pdc content'.
  $permissions['delete own pdc content'] = array(
    'name' => 'delete own pdc content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own pdc_utilization content'.
  $permissions['delete own pdc_utilization content'] = array(
    'name' => 'delete own pdc_utilization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any pdc content'.
  $permissions['edit any pdc content'] = array(
    'name' => 'edit any pdc content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any pdc_utilization content'.
  $permissions['edit any pdc_utilization content'] = array(
    'name' => 'edit any pdc_utilization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own pdc content'.
  $permissions['edit own pdc content'] = array(
    'name' => 'edit own pdc content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own pdc_utilization content'.
  $permissions['edit own pdc_utilization content'] = array(
    'name' => 'edit own pdc_utilization content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
