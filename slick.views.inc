<?php

/**
 * @file
 * Plugins for Views.
 */

/**
 * Implements hook_views_plugins().
 */
function slick_views_plugins() {
  return array(
    'style' => array(
      'slick' => array(
        'title' => t('Slick'),
        'help' => t('Display the results in a Slick carousel.'),
        'handler' => 'slick_plugin_style_slick',
        'uses options' => TRUE,
        'uses row plugin' => TRUE,
        'uses grouping' => FALSE,
        'uses row class' => TRUE,
        'type' => 'normal',
        'path' => drupal_get_path('module', 'slick'),
        'theme' => 'slick',
        'theme path' => drupal_get_path('module', 'slick') . '/theme',
        'theme file' => 'slick.theme.inc',
      ),
    ),
  );
}
