Drupal module for Slick
==========
Drupal module for Ken Wheeler's Slick carousel. See http://kenwheeler.github.io/slick.

* Fully responsive. Scales with its container.
* Uses CSS3 when available. Fully functional when not.
* Swipe enabled. Or disabled, if you prefer.
* Desktop mouse dragging
* Fully accessible with arrow key navigation
* Autoplay, pagers, arrows, etc...
* Works with Views.

## Views

Slick works with Views and is available as a style plugin. Select slick as the format. Adjust the settings as needed.

## Programmatically

    <?php
    // Add items.
    $items = array();
    $items[] = array('#markup' => '<img src="https://drupal.org/files/One.gif" />');
    $items[] = array('#markup' => '<img src="https://drupal.org/files/Two.gif" />');
    $items[] = array('#markup' => '<img src="https://drupal.org/files/Three.gif" />');
    
    // Add options.
    $options = array(
      'autoplay' => TRUE,
      'dots' => TRUE,
      'arrows' => FALSE,
    );
    
    print theme('slick_carousel', array('items' => $items, 'options' => $options));
    ?>
