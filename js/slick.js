(function($) {
  Drupal.behaviors.slick = {
    attach: function(context, settings) {
      settings.slick = settings.slick || Drupal.settings.chosen;

      // Function to prepare all the options for the slick() call.
      var getElementOptions = function(element) {
        var options = $.extend({}, settings.slick);

        // Set views-row as slide element
        options.slide = '> div.views-row';

        console.log(options);

        return options;
      }

      $('.slick', context).once('slick', function() {
        options = getElementOptions(this);
        $(this).slick(options);
      });
    }
  };
})(jQuery);
