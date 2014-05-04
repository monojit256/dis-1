<?php
/**
 * @file
 * dis_core_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dis_core_feature_user_default_roles() {
  $roles = array();

  // Exported role: supervisor.
  $roles['supervisor'] = array(
    'name' => 'supervisor',
    'weight' => 2,
  );

  return $roles;
}
