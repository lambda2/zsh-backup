<!DOCTYPE html>
<!--[if lt IE 7]>      <html class="no-js lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
<!--[if IE 7]>         <html class="no-js lt-ie9 lt-ie8"> <![endif]-->
<!--[if IE 8]>         <html class="no-js lt-ie9"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js"> <!--<![endif]-->
    <head>
        <meta charset="utf-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
        <title></title>
        <meta name="description" content="">
        <meta name="viewport" content="width=device-width">

        <link rel="stylesheet" href="css/bootstrap.min.css">
        <link rel="stylesheet" href="css/main.css">
        <link rel="stylesheet" href="http://code.jquery.com/ui/1.10.3/themes/smoothness/jquery-ui.css">
  
        <style>
            body {
                padding-top: 50px;
                padding-bottom: 20px;
            }
        </style>
        <link rel="stylesheet" href="css/bootstrap-theme.min.css">
        <link rel="stylesheet" href="css/main.css">

        <script src="js/vendor/modernizr-2.6.2-respond-1.1.0.min.js"></script>
    </head>
    <body>
        <!--[if lt IE 7]>
            <p class="chromeframe">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> or <a href="http://www.google.com/chromeframe/?redirect=true">activate Google Chrome Frame</a> to improve your experience.</p>
        <![endif]-->
    <div class="navbar navbar-inverse navbar-fixed-top">
      <div class="container">
        <div class="navbar-header">
          <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
        </div>
        <div class="navbar-collapse collapse">
          <ul class="nav navbar-nav">
            <li class="active"><a href="#">Accueil</a></li>
            <li><a href="#about">A propos</a></li>
            <li><a href="#contact">Contact</a></li>
          </ul>
        </div><!--/.navbar-collapse -->
      </div>
    </div>

    <!-- Main jumbotron for a primary marketing message or call to action -->

    <div id="calendar" class="container matchbox-home">
        <div class="calendar_elements">
            <div id="draggable1box">
            <div id="draggable1" class="draggable ui-widget-content">
              <p>Rendez-vous</p>
            </div>
            </div>


            <div id="draggable2" class="draggable ui-widget-content">
              <p>RDV Tel</p>
            </div>


            <div id="draggable3" class="draggable ui-widget-content">
              <p>Echeance</p>
            </div>


            <div id="draggable4" class="draggable ui-widget-content">
              <p>Autre</p>
            </div>
 
        </div>

        <div class="calendar_body">
            <center>
                <h3>Mars 2014</h3>
            </center>
            
            <div class="calendar_daysblock">
            <?php
            for ($i = 1; $i < 15; $i++)
            {
                echo '<div id="snaptarget" class="day ui-widget-header">';
                    echo '<div class="float:left;">'.$i.'</div>';
                echo "</div>";
            }
            ?>
            </div>


            <div class="calendar_daysblock">
            <?php
            for ($i = 16; $i < 31; $i++)
            {
                echo '<div id="snaptarget" class="day ui-widget-header">';
                    echo '<div class="float:left;">'.$i.'</div>';
                echo "</div>";
            }
            ?>
            </div>


        </div>

    <div class="clear-10"></div>

    <center>
      <button type="button" class="btn-success" value="Valider">Valider</button>
    </center>

    </div> <!-- /container -->     

    <div class="container">
      <hr>
      <footer>
        <p>&copy; Axathon 2014</p>
      </footer>
    </div>

    <script src="//ajax.googleapis.com/ajax/libs/jquery/1.10.1/jquery.min.js"></script>
        <script>window.jQuery || document.write('<script src="js/vendor/jquery-1.10.1.min.js"><\/script>')</script>

        <script src="js/vendor/bootstrap.min.js"></script>
        <script src="http://code.jquery.com/ui/1.10.3/jquery-ui.js"></script>

        <script src="js/main.js"></script>

        <script>
            var _gaq=[['_setAccount','UA-XXXXX-X'],['_trackPageview']];
            (function(d,t){var g=d.createElement(t),s=d.getElementsByTagName(t)[0];
            g.src='//www.google-analytics.com/ga.js';
            s.parentNode.insertBefore(g,s)}(document,'script'));

            $( document ).on("click", ".kill", function() {
                var parent;
                parent = $(this).parent();
                parent.remove();
            });

            $( ".day" ).droppable({
              accept: "#draggable1, #draggable2, #draggable3, #draggable4",
              activeClass: "ui-state-default",
              drop: function( event, ui ) {
                     var draggableId = ui.draggable.attr("id");
                     if (draggableId == 'draggable1')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>RDV<br /><input type="time" /></p></div>');
                     }

                     if (draggableId == 'draggable2')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>RDV Tel<br /><input type="time" /></p></div>');
                     }

                     if (draggableId == 'draggable3')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>Echeance<br /><input type="text" /></p></div>');
                     }

                     if (draggableId == 'draggable4')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>Autre<br /><input type="text" /></p></div>');
                     }
                }

            });

            $( "#draggable1" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".day"
            });

            $( "#draggable2" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".day"
            });

            $( "#draggable3" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".day"
            });

            $( "#draggable4" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".day"
            });
        </script>
    </body>
</html>
