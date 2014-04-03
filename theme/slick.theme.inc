<?php

/**
 * @file
 * Hooks and preprocess functions for slick module.
 */

/**
 * Implements template_preprocess_slick().
 */
function template_preprocess_slick(&$variables) {
  $options = $variables['options'];
  $slick_options = slick_get_options();
  $settings = array_intersect_key($options, $slick_options);

  // Add libraries.
  drupal_add_library('slick', 'slick');
  drupal_add_library('slick', 'drupal.slick');

  // Add row classes.
  $rows = $variables['rows'];
  foreach ($rows as $index => $row) {
    $row_classes = array();

    // Add default row class.
    if ($options['default_row_class']) {
      $row_classes[] = 'views-row';
      $row_classes[] = 'views-row-' . $index;
    }

    // Add special classes.
    if ($options['row_class_special']) {
      // Add zebra classes.
      $row_classes[] = ($index % 2 == 0) ? 'even' : 'odd';

      // Add first/last classes.
      if ($index == 0) {
        $row_classes[] = 'first';
      }
      if ($index == count($rows) - 1) {
        $row_classes[] = 'last';
      }
    }

    // Add custom row class.
    if ($options['row_class']) {
      $row_classes[] = $options['row_class'];
    }

    $variables['row_classes'][$index] = implode(" ", $row_classes);
  }

  // Add slick attributes.
  $variables['classes_array'][] = 'slick';

  // Set settings as data attributes.
  foreach ($settings as $key => $value) {
    $variables['attributes_array']['data-' . $key] = $value;
  }

  // Add slick options to js.
  drupal_add_js(array('slick' => $slick_options), 'setting');
}
