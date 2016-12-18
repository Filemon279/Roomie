  function runAdmin() {
   
 loadAllReq();
   websocket.onopen = function(evt) {
    
      };
         websocket.onclose = function(evt) {
            $(".users_count").append("<p id=\"textLogin\">Połączenie zerwane</p>");
      };
   	   websocket.onmessage = function(evt) {

        
         dane = evt.data.split("#");
       //  console.log(dane);
         if(dane[0]=="SERWER_STATUS") {  
         // console.log(dane[1]+"nowy");   
           $("#users_count").html(("00" + dane[1]).slice(-3));
            $("#rooms_connected").html(("00" + dane[2]).slice(-3));
             $("#rooms_unconnected").html(("00" + dane[3]).slice(-3));
            $("#request_pending").html(("00" + dane[4]).slice(-3));
            $("#request_done").html(("00" + dane[5]).slice(-3));
            $("#mysql_status").html(dane[6]);
           
         }
          else if(dane[0]=="UPTADE_USER_COUNT") {     
           $(".users_count p:nth-of-type(2)").html(("00" + dane[1]).slice(-3));
            $(".rooms_connected p:nth-of-type(2)").html(("00" + dane[2]).slice(-3));
          $(".rooms_unconnected p:nth-of-type(2)").html(("00" + dane[3]).slice(-3));
          //  console.log(dane[1]);
         }

         else if(dane[0]=="CLEAN") {     
          $(".requestsPanel").append("<div class=\"request\" ID="+dane[0]+"#"+dane[1]+" style=\"color: #3333ff;\"><i class=\"fa fa-bed fa-5x\" aria-hidden=\"true\"></i><br>Sprzątanie<br>"+("00"+dane[1]).slice(-3)+" </div>");
         }

         else if(dane[0]=="REPAIR") {     
          $(".requestsPanel").append("<div class=\"request\" ID="+dane[0]+"#"+dane[1]+" style=\"color: #cc0000;\"><i class=\"fa fa-wrench fa-5x\" aria-hidden=\"true\"></i><br>Naprawa<br>"+("00"+dane[1]).slice(-3)+" </div>");
         }
        else if(dane[0]=="FOOD") {     
          $(".requestsPanel").append("<div class=\"request\" ID="+dane[0]+"#"+dane[1]+" style=\"color: #ff9900;\"><i class=\"fa fa-cutlery fa-5x\" aria-hidden=\"true\"></i><br>Posiłki<br>"+("00"+dane[1]).slice(-3)+" </div>");
         }
        else if(dane[0]=="MAP") {     
          $(".requestsPanel").append("<div class=\"request\" ID="+dane[0]+"#"+dane[1]+" style=\"color: #00cc00;\"><i class=\"fa fa-globe fa-5x\" aria-hidden=\"true\"></i><br>Mapa<br>"+("00"+dane[1]).slice(-3)+" </div>");
         }
        else if(dane[0]=="TRANSPORT") {     
          $(".requestsPanel").append("<div class=\"request\" ID="+dane[0]+"#"+dane[1]+" style=\"color: #ffff66;\"><i class=\"fa fa-bus fa-5x\" aria-hidden=\"true\"></i><br>Transport<br>"+("00"+dane[1]).slice(-3)+" </div>");
         }
        else if(dane[0]=="HELP") {     
          $(".requestsPanel").append("<div class=\"request\" ID="+dane[0]+"#"+dane[1]+" style=\"color: #800000;\"><i class=\"fa fa-medkit fa-5x\" aria-hidden=\"true\"></i><br>Pomoc<br>"+("00"+dane[1]).slice(-3)+" </div>");
         }
        else if(dane[0]=="ROOM") {     
          $(".requestsPanel").append("<div class=\"request\" ID="+dane[0]+"#"+dane[1]+" style=\"color: #800000;\"><i class=\"fa fa-lightbulb-o fa-5x\" aria-hidden=\"true\"></i><br>Wyposażenie<br>"+("00"+dane[1]).slice(-3)+" </div>");
         }
         else if(dane[0]=="UPTADE_REQUESTS") 
          { 
         // console.log("updReq");    
            $(".request_pending p:nth-of-type(2)").html(("00" + dane[1]).slice(-3));
           $(".request_done p:nth-of-type(2)").html(("00" + dane[2]).slice(-3)); 
         }

         else if(dane[0]=="ALERT") 
         { 
            $("#createInfo").css("color","red");
            $("#createInfo").html(dane[1]);
            $("#createInfo").fadeIn(200);
         }
         else if(dane[0]=="ACCOUNT_CREATED") 
         { 
            $("#createInfo").css("color","green");
            $("#createInfo").html("Konto utworzone poprawnie");
            $("#createInfo").fadeIn(400);
            $("#createInfo").fadeOut(1500,function(){
               bPopup.close();
          });
            $("#numberField").val("");
            $("#passField").val("");
            $("#nameField").val("");
            $("#surnameField").val("");
            $("#othersField").val("");
            document.getElementById('checkINField').valueAsDate = new Date();
            document.getElementById('checkOUTField').valueAsDate = new Date();
         }
         else if(dane[0]=="REQINFO") {     
             //#1 Numer
             //#2 ID
             //#3 Info
             //#4 Imie i Nazwisko
             //#5 ReqID
         $('.popupInfo #title').html(dane[2]);
         $('.popupInfo #room').html(("00" + dane[1]).slice(-3)+" - "+dane[4]);
         $('.popupInfo #info').html(dane[3]);
         $('.popupInfo #infoFooter').html(dane[2]+"#ID#"+dane[1]+"#"+dane[5]);
         }
      };

    }

    function requestInfo(request)
    {
        websocket.send("REQINFO#"+request);
      //  console.log("REQINFO#"+request);
    }

    function response(numer,response)
    {
      websocket.send("RESPONSE#"+numer+"#"+response);
    }

    function deleteReq(id)
    {
      if(id>0) websocket.send("DELETE_REQ#"+id);

    }

    function loadAllReq()
    {
      $(".requestsPanel").html("");
      websocket.send("loadAllReq");
    }

    function crtAcc()
    {
    var checkIN = Date.parse($("#checkINField").val());
    var checkOUT = Date.parse($("#checkOUTField").val());
    if ( checkIN < checkOUT ) {
   var info="CREATE_ACCOUNT#"+$("#numberField").val();
      info+="#"+$("#passField").val();
      info+="#"+$("#nameField").val();
      info+="#"+$("#surnameField").val();
      info+="#"+$("#checkINField").val();
      info+="#"+$("#checkOUTField").val();
      info+="#"+$("#othersField").val();
    //console.log(info);
    websocket.send(info);
    }
   else{
    $("#createInfo").css("color","red");
    $("#createInfo").html("Check Out nie może być wcześniej niż Check In");
    $("#createInfo").fadeIn(400);
   }

    
      
    }