(function ($) {
  // Scripte als Drupal Behaviors hinzufuegen statt als document.ready.
  // Funktioniert dann auch bei Ajax Reloads.
  Drupal.behaviors.lauftreff = {
    attach: function (context, settings) {

      function resize_contact_front() {
        var height_left = $('.front .front-left').outerHeight(true) + $('.front h1#page-title').outerHeight(true);
        $('.front .front-right').height(height_left);
        console.log(height_left);
      };

      resize_contact_front();
      $(window).resize(function(){
        resize_contact_front();
      });

    } // end of attach function
  };
})(jQuery);