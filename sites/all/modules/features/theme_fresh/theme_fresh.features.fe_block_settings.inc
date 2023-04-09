<?php

/**
 * @file
 * theme_fresh.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function theme_fresh_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['backup_migrate-quick_backup'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'quick_backup',
    'module' => 'backup_migrate',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['comment-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff_fresh',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-editor'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'editor',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['eu_cookie_compliance-cookie_settings_button'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'cookie_settings_button',
    'module' => 'eu_cookie_compliance',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'masquerade',
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lauftreff' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'lauftreff',
        'weight' => 0,
      ),
      'lauftreff_fresh' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'lauftreff_fresh',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -11,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff_fresh',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'lauftreff' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff',
        'weight' => -1,
      ),
      'lauftreff_fresh' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff_fresh',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lauftreff' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'lauftreff',
        'weight' => 0,
      ),
      'lauftreff_fresh' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'lauftreff_fresh',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lauftreff' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lauftreff',
        'weight' => 0,
      ),
      'lauftreff_fresh' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lauftreff_fresh',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
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
        'region' => '',
        'status' => 0,
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

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'lauftreff' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff',
        'weight' => -9,
      ),
      'lauftreff_fresh' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff_fresh',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
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
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff_fresh',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff_fresh',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
        'theme' => 'lauftreff_fresh',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'article',
    ),
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
        'region' => '',
        'status' => 0,
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

  $export['views-blog-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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

  $export['views-termine-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'termine-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'termine',
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
        'region' => '',
        'status' => 0,
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
    'visibility' => 1,
  );

  $export['views-termine-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'termine-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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
