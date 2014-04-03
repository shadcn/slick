<?php

/**
 * @file
 * Default views template for displaying a Slick carousel.
 *
 * - $view: The View object.
 * - $options: Settings for the active style.
 * - $rows: The rows output from the View.
 * - $title: The title of this group of rows. May be empty.
 *
 * @ingroup views_templates
 */
?>
<div class="slick">
  <?php foreach ($rows as $row): ?>
    <div class="views-row">
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</div>
