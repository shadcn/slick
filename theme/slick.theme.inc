<?php

/**
 * @file
 * Hooks and preprocess functions for slick module.
 */

/**
 * Implements template_preprocess_slick().
 */
function template_preprocess_slick(&$variables) {

  dpm(libraries_load('slick'));

  // Add libraries.
  drupal_add_library('slick', 'slick');
  drupal_add_library('slick', 'drupal.slick');
}
