<?php
/**
 * @file
 * lauftreff_termine.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lauftreff_termine_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == 'field_group' && $api == 'field_group') {
    return array('version' => 1);
  } 
}

/**
 * Implements hook_views_api().
 */
function lauftreff_termine_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lauftreff_termine_node_info() {
  $items = array(
    'termin' => array(
      'name' => t('Termin'),
      'base' => 'node_content',
      'description' => t('Laufveranstaltungen usw.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
