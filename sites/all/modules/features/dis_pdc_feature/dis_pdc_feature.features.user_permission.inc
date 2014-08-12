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

  // Exported permission: 'create field_pdc_status'.
  $permissions['create field_pdc_status'] = array(
    'name' => 'create field_pdc_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create pdc content'.
  $permissions['create pdc content'] = array(
    'name' => 'create pdc content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create pdc_utilization content'.
  $permissions['create pdc_utilization content'] = array(
    'name' => 'create pdc_utilization content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any pdc content'.
  $permissions['delete any pdc content'] = array(
    'name' => 'delete any pdc content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any pdc_utilization content'.
  $permissions['delete any pdc_utilization content'] = array(
    'name' => 'delete any pdc_utilization content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own pdc content'.
  $permissions['delete own pdc content'] = array(
    'name' => 'delete own pdc content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own pdc_utilization content'.
  $permissions['delete own pdc_utilization content'] = array(
    'name' => 'delete own pdc_utilization content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any pdc content'.
  $permissions['edit any pdc content'] = array(
    'name' => 'edit any pdc content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any pdc_utilization content'.
  $permissions['edit any pdc_utilization content'] = array(
    'name' => 'edit any pdc_utilization content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_pdc_status'.
  $permissions['edit field_pdc_status'] = array(
    'name' => 'edit field_pdc_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pdc_status'.
  $permissions['edit own field_pdc_status'] = array(
    'name' => 'edit own field_pdc_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own pdc content'.
  $permissions['edit own pdc content'] = array(
    'name' => 'edit own pdc content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own pdc_utilization content'.
  $permissions['edit own pdc_utilization content'] = array(
    'name' => 'edit own pdc_utilization content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_pdc_status'.
  $permissions['view field_pdc_status'] = array(
    'name' => 'view field_pdc_status',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pdc_status'.
  $permissions['view own field_pdc_status'] = array(
    'name' => 'view own field_pdc_status',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
