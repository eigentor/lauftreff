<?php
/**
 * @file
 * lauftreff_news_content_type_und_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lauftreff_news_content_type_und_view_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lauftreff_news_content_type_und_view_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function lauftreff_news_content_type_und_view_image_default_styles() {
  $styles = array();

  // Exported image style: blog_main_image.
  $styles['blog_main_image'] = array(
    'name' => 'blog_main_image',
    'effects' => array(
      3 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '640',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '-10',
      ),
      4 => array(
        'label' => 'Zuschneiden',
        'help' => 'Das Zuschneiden wird Teile von einem Bild entfernen, um es an die angegebene Größe anpassen zu können.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '640',
          'height' => '250',
          'anchor' => 'center-center',
        ),
        'weight' => '-8',
      ),
    ),
  );

  // Exported image style: news_thumbnail.
  $styles['news_thumbnail'] = array(
    'name' => 'news_thumbnail',
    'effects' => array(
      5 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '100',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function lauftreff_news_content_type_und_view_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
