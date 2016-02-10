(function ($) {
  // Scripte als Drupal Behaviors hinzufuegen statt als document.ready.
  // Funktioniert dann auch bei Ajax Reloads.
  Drupal.behaviors.lauftreff = {
    attach: function (context, settings) {
      var height_left = $('.front .front-left').outerHeight(true) + $('.front h1#page-title').outerHeight(true);
      console.log(height_left);
      $('.front .front-right').outerHeight(height_left);

    } // end of attach function
  };
})(jQuery);