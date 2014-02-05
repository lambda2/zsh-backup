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
  <link rel="stylesheet" href="css/app.css">
  
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


            <div class="clear-30"></div>

            <div class="container matchbox-home">
              <div class="clear-10"></div>

              <h2 style="text-align:left; margin-left:40px; float:left;" class="matches-header">Mr Untel Bidule 
                <br /> 53 rue du Paumage 85120 Villeperdue
                <br />
              </h2>
              <div style="float:right; margin-right:40px; text-align:right;">
                  <img src="Icons/48/Facebook.png" height="30" />
                  <div class="clear"></div>
                  <img src="Icons/48/Twitter.png" height="30" />
                  <div class="clear"></div>
                  <img src="Icons/48/Google-Plus.png" height="30" />
                  <div class="clear"></div>
                  <img src="Icons/48/Linkedin.png" height="30" />
              </div>

            <div class="clear-10"></div>
              <!-- Example row of columns -->
              <div class="matchboxes-home" id="mainContainer" >

                <!-- formulaire de budget -->
                <div class="row match-home" id="contentBudget">
              <div class="clear-10"></div>

                  <div class="col-lg-12">
                    <button type="button" class="btn btn-primary btn-lg btn-primary btn-block">Budget</button>
                  </div>

                  <div class="clear-10"></div>

                  <div class="col-lg-12">

                    <p>
                      <input type="text" id="amount" style="border:0; margin:auto; text-align:center; display:block; font-size: 3em; color:#f6931f; font-weight:bold;">
                    </p>

                    <div id="slider-range"></div>
                  </div>

                </div>

                <div class="clear-10"></div>

                <div class="matchboxes-home">

                  <!-- formulaire de risques -->
                  <div class="row match-home" id="contentRisques">
                    <div class="col-lg-12">
                      <button type="button" class="btn btn-lg btn-primary btn-block">Risques</button>
                    </div>
                    <div class="col-lg-12">
                      <div class="content">
                          <div class="form-group">
                              <input type="text" class="form-control" id="inputRisques" placeholder="Décrivez les risques">
                          </div>
                      </div>
                    </div>
                  </div>
                </div>


                  <div class="clear-10"></div>

                  <div class="matchboxes-home">

                    <!-- projets -->
                      <div class="row match-home" id="contentProjets">
                        <div class="col-lg-12">
                          <button class="btn btn-lg btn-primary btn-block">Projets</button>
                        </div>
                        <div class="clear-10"></div>
                        <div class="col-lg-12">
                          <div class="content" >
                            <div class="form-group">
                              <select class="form-control">
                                <option>Construire une maison</option>
                                <option>Se faire une epargne retraite</option>
                                <option>Assurance vie</option>
                                <option>Acheter une voiture</option>
                                <option>Ameliorer sa santé</option>
                                <option>Créer son entreprise</option>
                              </select>
                            </div>
                          </div>
                        </div>
                        </div>
                    </div>

                    <div class="clear-10"></div>

                    <div class="matchboxes-home" id="contentProduits">

                    	<!-- Produits -->
                    	<div class="row match-home">
                    		<div class="col-lg-12">
                    			<button type="button" class="btn btn-lg btn-primary btn-block">Produits</button>
                    		</div>
                    	</div>

                    	<!-- page des produits -->
                    	<div class="row" id="produitsContainer" style="display: none; width:90%; margin:auto;">
                    		<div class="products_body">


                    		<div class="row">
                    			<div class="col-xs-6 col-md-3">
                    				<a href="#" class="thumbnail product_box">
                    					<img src="Icons/axa1.jpg" alt="...">
                    				</a>
                    			</div>

                    			<div class="col-xs-6 col-md-3">
                    				<a href="#" class="thumbnail product_box">
                    					<img src="Icons/axa2.jpg" alt="...">
                    				</a>
                    			</div>

                    			<div class="col-xs-6 col-md-3">
                    				<a href="#" class="thumbnail product_box">
                    					<img src="Icons/axa3.jpg" alt="...">
                    				</a>
                    			</div>
                    		</div>

                    		<div class="row">
                    			<div class="col-xs-6 col-md-3">
                    				<a href="#" class="thumbnail product_box">
                    					<img src="Icons/axa4.jpg" alt="...">
                    				</a>
                    			</div>

                    			<div class="col-xs-6 col-md-3">
                    				<a href="#" class="thumbnail product_box">
                    					<img src="Icons/axa5.jpg" alt="...">
                    				</a>
                    			</div>

                    			<div class="col-xs-6 col-md-3">
                    				<a href="#" class="thumbnail product_box">
                    					<img src="Icons/axa6.jpg" alt="...">
                    				</a>
                    			</div>
                    		</div>

                    		<div class="row">

                    			<div class="col-xs-6 col-md-3">
                    				<a href="#" class="thumbnail product_box">
                    					<img src="Icons/axa7.jpg" alt="...">
                    				</a>
                    			</div>
                    		</div>

                    	</div>






                    		<div class="products_elements">
                    			<div id="draggable1box">
                    				<div id="draggable1" class="draggable ui-widget-content">
                    					<p>Interesse</p>
                    				</div>
                    			</div>


                    			<div id="draggable2" class="draggable ui-widget-content">
                    				<p>Contrat</p>
                    			</div>


                    			<div id="draggable3" class="draggable ui-widget-content">
                    				<p>Informations</p>
                    			</div>

                    		</div>


                    		<div class="clear-10"></div>


                    	</div>



                    </div>

                    <div class="clear-10"></div>

                    <div class="matchboxes-home" id="contentCalendrier">

                  <!-- Calendrier -->
                      <div class="row match-home">
                        <div class="col-lg-12">
                          <button type="button" class="btn btn-lg btn-primary btn-block">Calendrier</button>
                        </div>
                      </div>


                  <div class="row" id="calendrierContainer" style="display:none; width:90%; margin:auto;">
                    <div class="calendar_elements">
                        <div id="caldraggable1" class="draggable ui-widget-content">
                          <p>Rendez-vous</p>
                        </div>


                      <div id="caldraggable2" class="draggable ui-widget-content">
                        <p>RDV Tel</p>
                      </div>


                      <div id="caldraggable3" class="draggable ui-widget-content">
                        <p>Echeance</p>
                      </div>


                      <div id="caldraggable4" class="draggable ui-widget-content">
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
                  </div>


                    </div>


                    <div class="clear-10"></div>

                    <div class="matchboxes-home" id="contentNotes">


                  <!-- Contacts -->
                      <div class="row match-home">
                        <div class="col-lg-12">
                          <button type="button" class="btn btn-lg btn-primary btn-block">Contacts</button>
                        </div>
                      </div>
                    </div>


                    <div class="clear-10"></div>

                    <div class="matchboxes-home" id="contentNotes">

                <!-- Notes -->
                      <div class="row match-home">
                        <div class="col-lg-12">
                          <button type="button" class="btn btn-lg btn-primary btn-block">Notes</button>
                        </div>
                      </div>
                    </div>
                      <div class="row match-home">
                        <div class="col-lg-12">
                          <button type="button" id="endButton" class="btn btn-warning btn-lg btn-primary btn-block">Valider</button>
                        </div>
                      </div>
                  </div>
              <div class="clear-30"></div>
              </div>


            <!-- page des notes -->
            <div class="container" id="notesContainer" style="display: none;">
              <div class="matchbox-home">
                <h2 class="matches-header">Notes</h2>
                <div class="row">
                <!-- 

                CONTENT .... textarea + drag&drop ??

                -->
                </div>
                <div class="row">
                  <div class="col-lg-12">
                    <button data-action="close" type="button" class="btn btn-warning btn-lg btn-primary btn-block">Valider</button>
                  </div>
                </div>
              </div>

            </div> <!-- /container -->     


            <div class="container">
              <hr>
              <footer>
                <p>&copy; Axathon 2014</p>
              </footer>
            </div>

            <script src="//ajax.googleapis.com/ajax/libs/jquery/1.10.1/jquery.min.js"></script>
            <script>window.jQuery || document.write('<script src="js/vendor/jquery-1.10.1.min.js"><\/script>')</script>

            <script src="js/vendor/holder.js"></script>
            <script src="js/vendor/bootstrap.min.js"></script>
            <script src="http://code.jquery.com/ui/1.10.3/jquery-ui.js"></script>

            <script src="js/main.js"></script>

            <script>
              var _gaq=[['_setAccount','UA-XXXXX-X'],['_trackPageview']];
              (function(d,t){var g=d.createElement(t),s=d.getElementsByTagName(t)[0];
                g.src='//www.google-analytics.com/ga.js';
                s.parentNode.insertBefore(g,s)}(document,'script'));
            </script>


            <script>
              $(function() {
                $( "#date" ).datepicker();
              });
            </script>

          </body>
          </html>
