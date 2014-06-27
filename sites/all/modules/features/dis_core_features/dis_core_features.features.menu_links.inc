<?php
/**
 * @file
 * dis_core_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dis_core_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-associate-executive-mapping:add-associate-executive-mapping
  $menu_links['main-menu_add-associate-executive-mapping:add-associate-executive-mapping'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-associate-executive-mapping',
    'router_path' => 'add-associate-executive-mapping',
    'link_title' => 'Add Associate Executive Mapping',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-associate-executive-mapping:add-associate-executive-mapping',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-business-associate:node/add/business-associate
  $menu_links['main-menu_add-business-associate:node/add/business-associate'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/business-associate',
    'router_path' => 'node/add/business-associate',
    'link_title' => 'Add Business Associate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-business-associate:node/add/business-associate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-company-executive:node/add/company-executive
  $menu_links['main-menu_add-company-executive:node/add/company-executive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/company-executive',
    'router_path' => 'node/add/company-executive',
    'link_title' => 'Add Company Executive',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-company-executive:node/add/company-executive',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-company:node/add/company
  $menu_links['main-menu_add-company:node/add/company'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/company',
    'router_path' => 'node/add/company',
    'link_title' => 'Add Company',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-company:node/add/company',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-division:node/add/division
  $menu_links['main-menu_add-division:node/add/division'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/division',
    'router_path' => 'node/add/division',
    'link_title' => 'Add Division',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-division:node/add/division',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-outward-invoice:add-outward-invoice
  $menu_links['main-menu_add-outward-invoice:add-outward-invoice'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-outward-invoice',
    'router_path' => 'add-outward-invoice',
    'link_title' => 'Add Outward Invoice',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-outward-invoice:add-outward-invoice',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_add-transporter:node/add/transporter
  $menu_links['main-menu_add-transporter:node/add/transporter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/transporter',
    'router_path' => 'node/add/transporter',
    'link_title' => 'Add Transporter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-transporter:node/add/transporter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_admin-home:admin-home
  $menu_links['main-menu_admin-home:admin-home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin-home',
    'router_path' => 'admin-home',
    'link_title' => 'Admin Home',
    'options' => array(
      'identifier' => 'main-menu_admin-home:admin-home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_goods-inward:goods-inward
  $menu_links['main-menu_goods-inward:goods-inward'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'goods-inward',
    'router_path' => 'goods-inward',
    'link_title' => 'Goods Inward',
    'options' => array(
      'identifier' => 'main-menu_goods-inward:goods-inward',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_goods-outward:goods-outward
  $menu_links['main-menu_goods-outward:goods-outward'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'goods-outward',
    'router_path' => 'goods-outward',
    'link_title' => 'Goods Outward',
    'options' => array(
      'identifier' => 'main-menu_goods-outward:goods-outward',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_import-associate-executive-mappings:import/associate_executive_mapping_importer
  $menu_links['main-menu_import-associate-executive-mappings:import/associate_executive_mapping_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/associate_executive_mapping_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Associate Executive Mappings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-associate-executive-mappings:import/associate_executive_mapping_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-business-associates:import/business_associate_importer
  $menu_links['main-menu_import-business-associates:import/business_associate_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/business_associate_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Business Associates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-business-associates:import/business_associate_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-companies:import/company_importer
  $menu_links['main-menu_import-companies:import/company_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/company_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Companies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-companies:import/company_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-company-executives:import/company_executive_importer
  $menu_links['main-menu_import-company-executives:import/company_executive_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/company_executive_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Company Executives',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-company-executives:import/company_executive_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-divisions:import/division_importer
  $menu_links['main-menu_import-divisions:import/division_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/division_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Divisions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-divisions:import/division_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-transporters:import/transporter_importer
  $menu_links['main-menu_import-transporters:import/transporter_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/transporter_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Transporters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-transporters:import/transporter_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_master-data:master-data
  $menu_links['main-menu_master-data:master-data'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'master-data',
    'router_path' => 'master-data',
    'link_title' => 'Master Data',
    'options' => array(
      'identifier' => 'main-menu_master-data:master-data',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_upload-outward-invoices:import/outward_invoice_importer
  $menu_links['main-menu_upload-outward-invoices:import/outward_invoice_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/outward_invoice_importer',
    'router_path' => 'import/%',
    'link_title' => 'Upload Outward Invoices',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_upload-outward-invoices:import/outward_invoice_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Associate Executive Mapping');
  t('Add Business Associate');
  t('Add Company');
  t('Add Company Executive');
  t('Add Division');
  t('Add Outward Invoice');
  t('Add Transporter');
  t('Admin Home');
  t('Goods Inward');
  t('Goods Outward');
  t('Home');
  t('Import Associate Executive Mappings');
  t('Import Business Associates');
  t('Import Companies');
  t('Import Company Executives');
  t('Import Divisions');
  t('Import Transporters');
  t('Master Data');
  t('Upload Outward Invoices');


  return $menu_links;
}
