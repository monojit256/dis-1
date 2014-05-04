<?php
/**
 * @file
 * dis_core_features.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function dis_core_features_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'outward_invoice_importer';
  $feeds_importer->config = array(
    'name' => 'Outward Invoice Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Invoice Date',
            'target' => 'field_invoice_date:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Company',
            'target' => 'field_company:etid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Consignee',
            'target' => 'field_consignee:etid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Invoice Value',
            'target' => 'field_invoice_value',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Outward Type',
            'target' => 'field_outward_type',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Division',
            'target' => 'field_division:etid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Invoice No',
            'target' => 'field_invoice_no',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'outward_invoice',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['outward_invoice_importer'] = $feeds_importer;

  return $export;
}
