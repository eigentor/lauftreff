<?php
/**
 * @file
 * lauftreff_news_content_type_und_view.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lauftreff_news_content_type_und_view_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'neueste_news_block';
  $context->description = '';
  $context->tag = 'Lauftreff';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'laufblog' => 'laufblog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
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
  $export['neueste_news_block'] = $context;

  return $export;
}
