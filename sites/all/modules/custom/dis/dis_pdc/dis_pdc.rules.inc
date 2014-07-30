<?php

/**
 * @file
 * Provides Rules integration for custom actions.
 */
/*
 * Implement hook_rules_action_info()
 */
function dis_pdc_rules_action_info() {
    return array(
    	'dis_pdc_ruleaction_redirect_edit_pdc' => array(
            'label' => t('Redirect Edit PDC'),
            'group' => 'DIS PDC',
            'parameter' => array(
                'pdc' => array(
                    'label' => t('PDC'),
                    'type' => 'node',
                ),
            ),
            'module' => 'dis_pdc',
        ),
  );       
}


function dis_pdc_ruleaction_redirect_edit_pdc($pdc){
        
        $nid = $pdc->vid;
        $status = $pdc->field_pdc_status['und'][0]['value'];
        $q = array();
        $redirect_nid = $nid;  

        if($status == 'Utilized'){
            $pdc_utilization_query = new EntityFieldQuery();
            $pdc_utilization_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'pdc_utilization')
                    ->fieldCondition('field_pdc', 'target_id', $redirect_nid, '=');
            $pdc_utilization_result = $pdc_utilization_query->execute();
            if (!empty($pdc_utilization_result)) {
                $redirect_nid = array_shift($pdc_utilization_result['node'])->nid;
            }
        }

        drupal_goto('node/' . $redirect_nid . '/edit', array('query' => $q));
}