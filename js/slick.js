(function($) {
  Drupal.behaviors.slick = {
    attach: function(context, settings) {

      // Function to prepare all the options for the slick() call.
      var getElementOptions = function(element) {
        var options = $.extend({});

        // Set views-row as slide element
        options.slide = '> div.views-row';

        return options;
      }

      $('.slick', context).once('slick', function() {
        options = getElementOptions(this);
        $(this).slick(options);
      });
    }
  };
})(jQuery);
