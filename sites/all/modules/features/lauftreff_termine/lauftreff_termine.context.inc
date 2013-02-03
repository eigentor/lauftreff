<?php
/**
 * @file
 * lauftreff_termine.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lauftreff_termine_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'neueste_termine_block';
  $context->description = '';
  $context->tag = 'Lauftreff';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'termin' => 'termin',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'termine' => 'termine',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-termine-block_2' => array(
          'module' => 'views',
          'delta' => 'termine-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Lauftreff');
  $export['neueste_termine_block'] = $context;

  return $export;
}
