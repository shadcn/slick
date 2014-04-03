(function($) {
  Drupal.behaviors.slick = {
    attach: function(context, settings) {
      settings.slick = settings.slick || Drupal.settings.slick;

      // Function to prepare all the options for the slick() call.
      var getElementOptions = function(element) {
        // var options = $.extend({}, settings.slick);
        var options = {};
        var data = $(element).data();

        for (name in data) {
          var value = data[name];

          // Handle 0 and 1 to bool conversion.
          if (settings.slick[name].type == 'boolean') {
            value = (value == 1) ? true : false;
          }

          // Get proper js settings name from attribute.
          name = getSettingsNameFromDataAttributeName(name);
          options[name] = value;
        }

        // Set views-row as slide element
        options.slide = '> div.views-row';

        return options;
      }

      // Returns the proper settings name from the data attribute name.
      // Example 'slidestoshow' will return 'slidesToShow'.
      var getSettingsNameFromDataAttributeName = function(name) {
        return settings.slick[name].name;
      }

      $('.slick', context).once('slick', function() {
        options = getElementOptions(this);
        $(this).slick(options);
      });
    }
  };
})(jQuery);
