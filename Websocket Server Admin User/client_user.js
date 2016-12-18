  function runUser() {   

  websocket.send("USER_CONNECTED");
   websocket.onopen = function(evt) {
         onOpen(evt)
      };
         websocket.onclose = function(evt) {
            $("b").html("Połączenie zerwane");
      };
   	   websocket.onmessage = function(evt) {
        
         dane = evt.data.split("#");
        
        if(dane[0]=="USER_DATA")
        {
           $("#user_number").html(dane[1]);           //#1 Numer
            $("#user_name").html(dane[2]);             //#2 Imie
            $("#user_surname").html(dane[3]);             //#3 Nazwisko
            $("#user_checkIn").html(dane[4]);             //#4 checkIN
            $("#user_checkOut").html(dane[5]);             //#5 checkOUT
        }
        else if(dane[0]=="MSG")
        {
      
        console.log(dane[1]);

           $(".infoPanelTitle").after("<div class=\"info_msg\" id=\"not-seen\"><p>"+dane[1]+"</p></div>");
           $(".info_msg").first().effect( "shake", {times:2,distance:40,direction:"up"}, 1000);
        }
         //show(evt.data);
      }; 
    }

   /*blink();
    function blink()
    {
    $(".informacja[id='not-seen']").each(function(index, element){
        $(element).click(function()
        {
            $(this).attr("id","seen");
        })
        $(element).fadeOut(2500,function(){
        $(element).fadeIn(2500);
    });
    });
    setInterval('blink()',5000);
    }*/

    function sendClean()
    {
     var info = "CLEAN#Proszę "+$('#dzien').val()+" o sprzątanie na godzinę: "+$('#godzina').val()+".\n";
     info+="Inne: "+$('#uwagi').val();
     console.log(info);
     websocket.send(info);
    }

     function sendFood()
    {
    var info = "FOOD#Proszę "+$('#dzien').val()+" o jedzenie na godzinę: "+$('#godzina').val()+".\n";
     info+="Inne: "+$('#uwagi').val();
     console.log(info);
     websocket.send(info);
    }
     function sendRepair()
    {
     var info = "REPAIR#Proszę "+$('#dzien').val()+" o naprawę na godzinę: "+$('#godzina').val()+".\n";
     info+="Inne: "+$('#uwagi').val();
     console.log(info);
     websocket.send(info);
    }
     function sendMap()
    {
     var info = "MAP#Proszę "+$('#dzien').val()+" o mape na godzinę: "+$('#godzina').val()+".\n";
     info+="Inne: "+$('#uwagi').val();
     console.log(info);
     websocket.send(info);
    }
     function sendTransport()
    {
     var info = "TRANSPORT#Proszę "+$('#dzien').val()+" o transport na godzinę: "+$('#godzina').val()+".\n";
     info+="Inne: "+$('#uwagi').val();
     console.log(info);
     websocket.send(info);
    }
     function sendHelp()
    {
     var info = "HELP#Proszę "+$('#dzien').val()+" o pomoc na godzinę: "+$('#godzina').val()+".\n";
     info+="Inne: "+$('#uwagi').val();
     console.log(info);
     websocket.send(info);
    }

