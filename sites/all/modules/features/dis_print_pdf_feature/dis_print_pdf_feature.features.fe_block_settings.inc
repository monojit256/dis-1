<?php
/**
 * @file
 * dis_print_pdf_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function dis_print_pdf_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['print_ui-print-links'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'print-links',
    'module' => 'print_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dis_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dis_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
