<?php
/**
 * @file
 * dis_permits_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dis_permits_feature_taxonomy_default_vocabularies() {
  return array(
    'permit_remarks' => array(
      'name' => 'Permit Remarks',
      'machine_name' => 'permit_remarks',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
