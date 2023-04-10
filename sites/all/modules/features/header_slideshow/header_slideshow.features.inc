<?php

/**
 * @file
 * header_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function header_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function header_slideshow_node_info() {
  $items = array(
    'header_slideshow' => array(
      'name' => t('Header Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function header_slideshow_paragraphs_info() {
  $items = array(
    'header_slideshow_image' => array(
      'name' => 'Header Slideshow Bild',
      'bundle' => 'header_slideshow_image',
      'locked' => '1',
    ),
  );
  return $items;
}
