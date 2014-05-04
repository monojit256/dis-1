<?php
/**
 * @file
 * dis_core_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dis_core_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'clear outward_invoice_importer feeds'.
  $permissions['clear outward_invoice_importer feeds'] = array(
    'name' => 'clear outward_invoice_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create associate_executive_mapping content'.
  $permissions['create associate_executive_mapping content'] = array(
    'name' => 'create associate_executive_mapping content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create business_associate content'.
  $permissions['create business_associate content'] = array(
    'name' => 'create business_associate content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create company content'.
  $permissions['create company content'] = array(
    'name' => 'create company content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create company_executive content'.
  $permissions['create company_executive content'] = array(
    'name' => 'create company_executive content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create delivery_confirmation content'.
  $permissions['create delivery_confirmation content'] = array(
    'name' => 'create delivery_confirmation content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dispatch content'.
  $permissions['create dispatch content'] = array(
    'name' => 'create dispatch content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create division content'.
  $permissions['create division content'] = array(
    'name' => 'create division content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_quarter'.
  $permissions['create field_quarter'] = array(
    'name' => 'create field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_status'.
  $permissions['create field_status'] = array(
    'name' => 'create field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create inward_invoice content'.
  $permissions['create inward_invoice content'] = array(
    'name' => 'create inward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create outward_invoice content'.
  $permissions['create outward_invoice content'] = array(
    'name' => 'create outward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create packing content'.
  $permissions['create packing content'] = array(
    'name' => 'create packing content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create receipt_details content'.
  $permissions['create receipt_details content'] = array(
    'name' => 'create receipt_details content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create transporter content'.
  $permissions['create transporter content'] = array(
    'name' => 'create transporter content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any associate_executive_mapping content'.
  $permissions['delete any associate_executive_mapping content'] = array(
    'name' => 'delete any associate_executive_mapping content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any business_associate content'.
  $permissions['delete any business_associate content'] = array(
    'name' => 'delete any business_associate content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any company content'.
  $permissions['delete any company content'] = array(
    'name' => 'delete any company content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any company_executive content'.
  $permissions['delete any company_executive content'] = array(
    'name' => 'delete any company_executive content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any delivery_confirmation content'.
  $permissions['delete any delivery_confirmation content'] = array(
    'name' => 'delete any delivery_confirmation content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dispatch content'.
  $permissions['delete any dispatch content'] = array(
    'name' => 'delete any dispatch content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any division content'.
  $permissions['delete any division content'] = array(
    'name' => 'delete any division content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any inward_invoice content'.
  $permissions['delete any inward_invoice content'] = array(
    'name' => 'delete any inward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any outward_invoice content'.
  $permissions['delete any outward_invoice content'] = array(
    'name' => 'delete any outward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any packing content'.
  $permissions['delete any packing content'] = array(
    'name' => 'delete any packing content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any receipt_details content'.
  $permissions['delete any receipt_details content'] = array(
    'name' => 'delete any receipt_details content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any transporter content'.
  $permissions['delete any transporter content'] = array(
    'name' => 'delete any transporter content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own associate_executive_mapping content'.
  $permissions['delete own associate_executive_mapping content'] = array(
    'name' => 'delete own associate_executive_mapping content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own business_associate content'.
  $permissions['delete own business_associate content'] = array(
    'name' => 'delete own business_associate content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own company content'.
  $permissions['delete own company content'] = array(
    'name' => 'delete own company content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own company_executive content'.
  $permissions['delete own company_executive content'] = array(
    'name' => 'delete own company_executive content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own delivery_confirmation content'.
  $permissions['delete own delivery_confirmation content'] = array(
    'name' => 'delete own delivery_confirmation content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dispatch content'.
  $permissions['delete own dispatch content'] = array(
    'name' => 'delete own dispatch content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own division content'.
  $permissions['delete own division content'] = array(
    'name' => 'delete own division content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own inward_invoice content'.
  $permissions['delete own inward_invoice content'] = array(
    'name' => 'delete own inward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own outward_invoice content'.
  $permissions['delete own outward_invoice content'] = array(
    'name' => 'delete own outward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own packing content'.
  $permissions['delete own packing content'] = array(
    'name' => 'delete own packing content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own receipt_details content'.
  $permissions['delete own receipt_details content'] = array(
    'name' => 'delete own receipt_details content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own transporter content'.
  $permissions['delete own transporter content'] = array(
    'name' => 'delete own transporter content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any associate_executive_mapping content'.
  $permissions['edit any associate_executive_mapping content'] = array(
    'name' => 'edit any associate_executive_mapping content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any business_associate content'.
  $permissions['edit any business_associate content'] = array(
    'name' => 'edit any business_associate content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any company content'.
  $permissions['edit any company content'] = array(
    'name' => 'edit any company content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any company_executive content'.
  $permissions['edit any company_executive content'] = array(
    'name' => 'edit any company_executive content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any delivery_confirmation content'.
  $permissions['edit any delivery_confirmation content'] = array(
    'name' => 'edit any delivery_confirmation content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dispatch content'.
  $permissions['edit any dispatch content'] = array(
    'name' => 'edit any dispatch content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any division content'.
  $permissions['edit any division content'] = array(
    'name' => 'edit any division content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any inward_invoice content'.
  $permissions['edit any inward_invoice content'] = array(
    'name' => 'edit any inward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any outward_invoice content'.
  $permissions['edit any outward_invoice content'] = array(
    'name' => 'edit any outward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any packing content'.
  $permissions['edit any packing content'] = array(
    'name' => 'edit any packing content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any receipt_details content'.
  $permissions['edit any receipt_details content'] = array(
    'name' => 'edit any receipt_details content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any transporter content'.
  $permissions['edit any transporter content'] = array(
    'name' => 'edit any transporter content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_quarter'.
  $permissions['edit field_quarter'] = array(
    'name' => 'edit field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_status'.
  $permissions['edit field_status'] = array(
    'name' => 'edit field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own associate_executive_mapping content'.
  $permissions['edit own associate_executive_mapping content'] = array(
    'name' => 'edit own associate_executive_mapping content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own business_associate content'.
  $permissions['edit own business_associate content'] = array(
    'name' => 'edit own business_associate content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own company content'.
  $permissions['edit own company content'] = array(
    'name' => 'edit own company content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own company_executive content'.
  $permissions['edit own company_executive content'] = array(
    'name' => 'edit own company_executive content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own delivery_confirmation content'.
  $permissions['edit own delivery_confirmation content'] = array(
    'name' => 'edit own delivery_confirmation content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dispatch content'.
  $permissions['edit own dispatch content'] = array(
    'name' => 'edit own dispatch content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own division content'.
  $permissions['edit own division content'] = array(
    'name' => 'edit own division content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_quarter'.
  $permissions['edit own field_quarter'] = array(
    'name' => 'edit own field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_status'.
  $permissions['edit own field_status'] = array(
    'name' => 'edit own field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own inward_invoice content'.
  $permissions['edit own inward_invoice content'] = array(
    'name' => 'edit own inward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own outward_invoice content'.
  $permissions['edit own outward_invoice content'] = array(
    'name' => 'edit own outward_invoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own packing content'.
  $permissions['edit own packing content'] = array(
    'name' => 'edit own packing content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own receipt_details content'.
  $permissions['edit own receipt_details content'] = array(
    'name' => 'edit own receipt_details content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own transporter content'.
  $permissions['edit own transporter content'] = array(
    'name' => 'edit own transporter content',
    'roles' => array(
      'administrator' => 'administrator',
      'supervisor' => 'supervisor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import outward_invoice_importer feeds'.
  $permissions['import outward_invoice_importer feeds'] = array(
    'name' => 'import outward_invoice_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use Rules component rules_redirect_edit_invoice'.
  $permissions['use Rules component rules_redirect_edit_invoice'] = array(
    'name' => 'use Rules component rules_redirect_edit_invoice',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_set_invoice_reversed'.
  $permissions['use Rules component rules_set_invoice_reversed'] = array(
    'name' => 'use Rules component rules_set_invoice_reversed',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_update_dispatch'.
  $permissions['use Rules component rules_update_dispatch'] = array(
    'name' => 'use Rules component rules_update_dispatch',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_update_packing'.
  $permissions['use Rules component rules_update_packing'] = array(
    'name' => 'use Rules component rules_update_packing',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'view field_quarter'.
  $permissions['view field_quarter'] = array(
    'name' => 'view field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_status'.
  $permissions['view field_status'] = array(
    'name' => 'view field_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_quarter'.
  $permissions['view own field_quarter'] = array(
    'name' => 'view own field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_status'.
  $permissions['view own field_status'] = array(
    'name' => 'view own field_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
