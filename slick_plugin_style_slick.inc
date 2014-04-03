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

    // Add slick options.
    $slick_options = slick_get_options();
    foreach ($slick_options as $name => $values) {
      $options[$name] = array('default' => $values['default']);
    }

    return $options;
  }

  // Build the settings form for the view.
  function options_form(&$form, &$form_state) {
    // Include ctools dependent support
    ctools_include('dependent');
    parent::options_form($form, $form_state);

    // Build slick options as form elements.
    $options = slick_get_options();
    $form['slick_settings'] = array(
      '#title' => t('Settings'),
      '#type' => 'fieldset',
      '#collapsible' => FALSE,
    );

    foreach ($options as $name => $values) {
      $form['slick_settings'][$name] = array(
        '#title' => $values['title'],
        '#description' => $values['description'],
        '#type' => ($values['type'] == 'boolean') ? 'checkbox' : 'textfield',
        '#default_value' => $this->options[$name],
      );
    }
  }

  // Run any necessary actions on submit.
  function options_submit(&$form, &$form_state) {

  }
}
