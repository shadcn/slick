(function($) {
  Drupal.behaviors.slick = {
    attach: function(context, settings) {

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
