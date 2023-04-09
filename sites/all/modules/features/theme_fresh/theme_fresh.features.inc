<?php

/**
 * @file
 * theme_fresh.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theme_fresh_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
