<?php

/**
 * @file
 * Plugin for the Slick style.
 */

/**
 * Style plugin for the slick carousel.
 *
 * @ingroup views_style_plugins
 */
class slick_plugin_style_slick extends views_plugin_style {

  // Set default options
  function option_definition() {
    $options = parent::option_definition();

    return $options;
  }

  // Build the settings form for the view.
  function options_form(&$form, &$form_state) {
    // Include ctools dependent support
    ctools_include('dependent');
    parent::options_form($form, $form_state);

    $form['foo'] = array(
      '#type' => 'textfield',
      '#title' => t('Foo'),
      '#default_value' => $this->options['foo'],
    );
  }

  // Run any necessary actions on submit.
  function options_submit(&$form, &$form_state) {

  }
}
