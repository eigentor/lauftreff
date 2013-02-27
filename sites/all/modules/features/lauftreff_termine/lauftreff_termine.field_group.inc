<?php
/**
 * @file
 * lauftreff_termine.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lauftreff_termine_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_time|node|termin|default';
  $field_group->group_name = 'group_date_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_logo_termin';
  $field_group->data = array(
    'label' => 'Termin und Uhrzeit',
    'weight' => '1',
    'children' => array(
      0 => 'field_datum',
      1 => 'field_uhrzeit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Termin und Uhrzeit',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_date_time|node|termin|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logo_termin|node|termin|default';
  $field_group->group_name = 'group_logo_termin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logo und Termin',
    'weight' => '1',
    'children' => array(
      0 => 'field_bild_termin',
      1 => 'group_date_time',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Logo und Termin',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_logo_termin|node|termin|default'] = $field_group;

  return $export;
}
