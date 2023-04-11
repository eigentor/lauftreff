<?php

/**
 * @file
 * header_slideshow.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function header_slideshow_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-header_slideshow_par-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'header_slideshow_par-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lauftreff' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff',
        'weight' => 0,
      ),
      'lauftreff_fresh' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'lauftreff_fresh',
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
