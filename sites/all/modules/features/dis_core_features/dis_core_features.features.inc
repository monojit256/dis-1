<?php
/**
 * @file
 * dis_core_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dis_core_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "property_validation" && $api == "default_property_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function dis_core_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dis_core_features_node_info() {
  $items = array(
    'associate_executive_mapping' => array(
      'name' => t('Associate Executive Mapping'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'business_associate' => array(
      'name' => t('Business Associate'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'company' => array(
      'name' => t('Company'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company Code'),
      'help' => '',
    ),
    'company_executive' => array(
      'name' => t('Company Executive'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'delivery_confirmation' => array(
      'name' => t('Delivery Confirmation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dispatch' => array(
      'name' => t('Dispatch'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'division' => array(
      'name' => t('Division'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Division Code'),
      'help' => '',
    ),
    'inward_invoice' => array(
      'name' => t('Inward Invoice'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'outward_invoice' => array(
      'name' => t('Outward Invoice'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'packing' => array(
      'name' => t('Packing'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'receipt_details' => array(
      'name' => t('Receipt Details'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'transporter' => array(
      'name' => t('Transporter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
