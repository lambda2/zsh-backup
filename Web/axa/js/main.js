
$(function()
{
	var refreshEvents = function()
	{
		$(".btn-primary.btn-lg").click(function()
		{
			$(this).parent().parent().find(".content").toggle();
		});
	};

	// Le slider du formulaire de budget
	$( "#slider-range" ).slider(
	{
		range: true,
		min: 0,
		max: 50000,
		values: [ 1000, 5000 ],
		slide: function( event, ui )
		{
			$( "#amount" ).val( "" + ui.values[ 0 ] + "€ - " + ui.values[ 1 ] + "€");
		}
	});
	$( "#amount" ).val( "" + $( "#slider-range" ).slider( "values", 0 ) +
		"€ - " + $( "#slider-range" ).slider( "values", 1 ) + "€") ;

	$("#contentProduits button").click(function()
	{
		$("#calendrierContainer").hide( "blind", {direction: "up" }, 500);
		$("#produitsContainer").show( "slide", {direction: "up" });
	})

	$("#contentCalendrier button").click(function()
	{
		$("#produitsContainer").hide( "blind", {direction: "up" }, 500);
		$("#calendrierContainer").show( "slide", {direction: "up" });
	})






            $( document ).on("click", ".kill", function() {
                var parent;
                parent = $(this).parent();
                parent.remove();
            });

            $( ".day" ).droppable({
              accept: "#caldraggable1, #caldraggable2, #caldraggable3, #caldraggable4",
              activeClass: "ui-state-default",
              drop: function( event, ui ) {
                     var draggableId = ui.draggable.attr("id");
                     if (draggableId == 'caldraggable1')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>RDV<br /><input type="time" /></p></div>');
                     }

                     if (draggableId == 'caldraggable2')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>RDV Tel<br /><input type="time" /></p></div>');
                     }

                     if (draggableId == 'caldraggable3')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>Echeance<br /><input type="text" /></p></div>');
                     }

                     if (draggableId == 'caldraggable4')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>Autre<br /><input type="text" /></p></div>');
                     }
                }

            });

            $( "#caldraggable1" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".day"
            });

            $( "#caldraggable2" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".day"
            });

            $( "#caldraggable3" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".day"
            });

            $( "#caldraggable4" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".day"
            });






            
            $( ".thumbnail" ).droppable({
              accept: "#draggable1, #draggable2, #draggable3, #draggable4",
              activeClass: "ui-state-default",
              drop: function( event, ui ) {
                     var draggableId = ui.draggable.attr("id");
                     if (draggableId == 'draggable1')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>Interesse<br /><input type="time" /></p></div>');
                     }

                     if (draggableId == 'draggable2')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>Contrat<br /><input type="time" /></p></div>');
                     }

                     if (draggableId == 'draggable3')
                     {
                        $( this )
                            .append('<div class="element_posted"><span class="kill">x</span><p>Informations<br /><input type="text" /></p></div>');
                     }
                }

            });

            $( "#draggable1" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".thumbnail"
            });

            $( "#draggable2" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".thumbnail"
            });

            $( "#draggable3" ).draggable({
                revert: "valid",
                containment: "#calendar",
                snap: ".thumbnail"
            });

});