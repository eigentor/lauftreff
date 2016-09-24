<?php
/**
 * @file
 * lauftreff_news_content_type_und_view.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function lauftreff_news_content_type_und_view_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'submitted_by' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function lauftreff_news_content_type_und_view_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'submitted_by',
        1 => 'field_tags',
        2 => 'field_image',
        3 => 'body',
        4 => 'field_blog_bildergalerie',
      ),
    ),
    'fields' => array(
      'submitted_by' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_image' => 'ds_content',
      'body' => 'ds_content',
      'field_blog_bildergalerie' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|default'] = $ds_layout;

  return $export;
}
