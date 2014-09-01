<?php
/**
 * @file
 * dis_permits_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dis_permits_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create associate_inward_permit content'.
  $permissions['create associate_inward_permit content'] = array(
    'name' => 'create associate_inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create inward_permit content'.
  $permissions['create inward_permit content'] = array(
    'name' => 'create inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any associate_inward_permit content'.
  $permissions['delete any associate_inward_permit content'] = array(
    'name' => 'delete any associate_inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any inward_permit content'.
  $permissions['delete any inward_permit content'] = array(
    'name' => 'delete any inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own associate_inward_permit content'.
  $permissions['delete own associate_inward_permit content'] = array(
    'name' => 'delete own associate_inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own inward_permit content'.
  $permissions['delete own inward_permit content'] = array(
    'name' => 'delete own inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any associate_inward_permit content'.
  $permissions['edit any associate_inward_permit content'] = array(
    'name' => 'edit any associate_inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any inward_permit content'.
  $permissions['edit any inward_permit content'] = array(
    'name' => 'edit any inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own associate_inward_permit content'.
  $permissions['edit own associate_inward_permit content'] = array(
    'name' => 'edit own associate_inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own inward_permit content'.
  $permissions['edit own inward_permit content'] = array(
    'name' => 'edit own inward_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
