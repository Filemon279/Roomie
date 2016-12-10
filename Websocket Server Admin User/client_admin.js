  function runAdmin() {
   
 
   websocket.onopen = function(evt) {
    
      };
         websocket.onclose = function(evt) {
            $(".users_count").append("<p id=\"textLogin\">Połączenie zerwane</p>");
      };
   	   websocket.onmessage = function(evt) {

        
         dane = evt.data.split("#");
         console.log(dane);
         if(dane[0]=="SERWER_STATUS") {     
           $(".users_count p:nth-of-type(2)").html(("00" + dane[1]).slice(-3));
            $(".rooms_connected p:nth-of-type(2)").html(("00" + dane[2]).slice(-3));
             $(".rooms_unconnected p:nth-of-type(2)").html(("00" + dane[3]).slice(-3));
            $(".request_pending p:nth-of-type(2)").html(("00" + dane[4]).slice(-3));
             $(".request_done p:nth-of-type(2)").html(("00" + dane[5]).slice(-3));
            $(".mysql_status p:nth-of-type(2)").html(dane[6]);
            console.log(dane[1]);
         }
          else if(dane[0]=="UPTADE_USER_COUNT") {     
           $(".users_count p:nth-of-type(2)").html(("00" + dane[1]).slice(-3));
            $(".rooms_connected p:nth-of-type(2)").html(("00" + dane[2]).slice(-3));
          $(".rooms_unconnected p:nth-of-type(2)").html(("00" + dane[3]).slice(-3));
            console.log(dane[1]);
         }

         else if(dane[0]=="CLEAN") {     
          $(".requestsPanel").append("<div class=\"request\" reqID="+dane[0]+"#"+dane[1]+"><i class=\"fa fa-bed fa-5x\" aria-hidden=\"true\"></i><br>Sprzątanie </div>");
         }

         else if(dane[0]=="REPAIR") {     
          $(".requestsPanel").append("<div class=\"request\" reqID="+dane[0]+"#"+dane[1]+"><i class=\"fa fa-wrench fa-5x\" aria-hidden=\"true\"></i><br>Naprawa </div>");
         }
        else if(dane[0]=="FOOD") {     
          $(".requestsPanel").append("<div class=\"request\" reqID="+dane[0]+"#"+dane[1]+"><i class=\"fa fa-cutlery fa-5x\" aria-hidden=\"true\"></i><br>Posiłki </div>");
         }
        else if(dane[0]=="MAP") {     
          $(".requestsPanel").append("<div class=\"request\" reqID="+dane[0]+"#"+dane[1]+"><i class=\"fa fa-globe fa-5x\" aria-hidden=\"true\"></i><br>Mapa </div>");
         }
        else if(dane[0]=="TRANSPORT") {     
          $(".requestsPanel").append("<div class=\"request\" reqID="+dane[0]+"#"+dane[1]+"><i class=\"fa fa-bus fa-5x\" aria-hidden=\"true\"></i><br>Transport </div>");
         }
        else if(dane[0]=="HELP") {     
          $(".requestsPanel").append("<div class=\"request\" reqID="+dane[0]+"#"+dane[1]+"><i class=\"fa fa-medkit fa-5x\" aria-hidden=\"true\"></i><br>Pomoc </div>");
         }
         else if(dane[0]=="UPTADE_REQUESTS") 
          { 
          console.log("updReq");    
            $(".request_pending p:nth-of-type(2)").html(("00" + dane[1]).slice(-3));
           $(".request_done p:nth-of-type(2)").html(("00" + dane[2]).slice(-3)); 
         }
         else if(dane[0]=="REQINFO") {     
         console.log(dane[1].Info);
         $('.popupInfo #title').html(dane[2]);
         $('.popupInfo #room').html(("00" + dane[1]).slice(-3)+" - "+dane[4]);
         $('.popupInfo #info').html(dane[3]);
         $('.popupInfo #infoFooter').html("ID: "+dane[5]);
         }

        // else show(evt.data);
      };

    }

    function requestInfo(request)
    {
        websocket.send("REQINFO#"+request);
    }

    function loadAllReq()
    {
      $(".requestsPanel").html("");
      websocket.send("loadAllReq");
    }