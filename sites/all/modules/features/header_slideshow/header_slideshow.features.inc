<?php

/**
 * @file
 * header_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function header_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function header_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function header_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: header_slideshow.
  $styles['header_slideshow'] = array(
    'label' => 'Header Slideshow',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 700,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_slideshow_responsivecustom_user_desktop_1x.
  $styles['header_slideshow_responsivecustom_user_desktop_1x'] = array(
    'label' => 'header_slideshow_responsivecustom_user_desktop_1x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 700,
          'style_name' => 'header_slideshow_responsivecustom_user_desktop_1x',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_slideshow_responsivecustom_user_desktop_narrow_1x.
  $styles['header_slideshow_responsivecustom_user_desktop_narrow_1x'] = array(
    'label' => 'header_slideshow_responsivecustom_user_desktop_narrow_1x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 700,
          'style_name' => 'header_slideshow_responsivecustom_user_desktop_narrow_1x',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_slideshow_responsivecustom_user_tablet_1x.
  $styles['header_slideshow_responsivecustom_user_tablet_1x'] = array(
    'label' => 'header_slideshow_responsivecustom_user_tablet_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 700,
          'style_name' => 'header_slideshow_responsivecustom_user_tablet_1x',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_slideshow_responsivecustom_user_tablet_portrait_1x.
  $styles['header_slideshow_responsivecustom_user_tablet_portrait_1x'] = array(
    'label' => 'header_slideshow_responsivecustom_user_tablet_portrait_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 700,
          'style_name' => 'header_slideshow_responsivecustom_user_tablet_portrait_1x',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_slideshow_responsivemodule_picture_empty_srcset_1x.
  $styles['header_slideshow_responsivemodule_picture_empty_srcset_1x'] = array(
    'label' => 'header_slideshow_responsivemodule_picture_empty_srcset_1x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 700,
          'style_name' => 'header_slideshow_responsivemodule_picture_empty_srcset_1x',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
      'label' => 'Header Slideshow Bild',
      'description' => '',
      'locked' => '1',
    ),
  );
  return $items;
}
