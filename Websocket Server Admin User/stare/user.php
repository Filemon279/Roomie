<!DOCTYPE html>
<html>
   <meta charset = "utf-8" />
   <title>WebSocket Test</title>
   <head> 
      <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
        
        <link rel="stylesheet" type="text/css" href="userPage.css">
        <link rel="stylesheet" href="css/font-awesome.min.css">
      <link href='http://fonts.googleapis.com/css?family=Hammersmith+One&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
   </head> 
   
   <body>

        <div id="top"><p id="userPanel"><i class="fa fa-bed fa-lg" aria-hidden="true"></i>   Twój pokój: <b>222</b></p><center><img id="logo" src="img/logo/roomie_logo.png" width="130px"></center></div>
       
   <div class="requestsPanel"><center>

   <div id="CLEAN" class="request"><i class="fa fa-bed fa-5x" aria-hidden="true"></i><br>Sprzątanie </div> 
   <div id="FOOD" class="request"><i class="fa fa-cutlery fa-5x" aria-hidden="true"></i><br>Posiłki</div>
   <div id="REPAIR" class="request"><i class="fa fa-wrench fa-5x" aria-hidden="true"></i><br>Naprawa  </div> 
   <div id="MAP" class="request"><i class="fa fa-globe fa-5x" aria-hidden="true"></i><br>Okolice  </div> 
   <div id="TRANSPORT" class="request"><i class="fa fa-bus fa-5x" aria-hidden="true"></i><br>Transport  </div> 
   <div id="HELP" class="request"><i class="fa fa-medkit fa-5x" aria-hidden="true"></i><br>Pomoc  </div> </center>
   
   </div>
   
   <div id="setting"><i class="fa fa-cog fa-2x" aria-hidden="true"></i>
   <div class="dropdown-setting">
      <a href="#">Moje Konto</a>
      <a href="#">Ustawienia</a>
      <a id="separator"></a>
      <a href="#">Wyloguj</a>
   </div></div>

   <div id="menu"><i class="fa fa-bars fa-2x" aria-hidden="true"></i>
   <div class="dropdown-menu">
      <a href="#">O Hotelu</a>
      <a href="#">O Wrocławiu</a>
      <a href="#">Restauracja</a>
      <a href="#">Warto odwiedzić</a>
      <a href="#">Polecamy</a>
   </div></div>

   <div id="messages"><i class="fa fa-list-alt fa-2x" aria-hidden="true"></i>
   <div class="AllMessages"><p class="noMessagesInfo">Brak nowych wiadomości</p></div>
   </div>

   <div class="popupInfo">
    <p id="title">Sprzątanie</p>
    <p id="info">
    Godzina<br><input id="godzina"><br><br>
    Dzień<br><input id="dzien"><br><br>
    Uwagi<br><input id="uwagi"><br>
    </p>  
    <p id="infoFooter"><button onclick="sendClean()">Wyślij</button></p>
    </div>

  <script language = "javascript" type ="text/javascript" src="client_user.js"></script>




   </body>


   <script>

    $('.request').mousedown(function(){
      var id = $(this).attr("id");
    
     
           $.getScript('./js/jquery.bpopup.min', function()
         {   
         if(id=="CLEAN")
         {
            $('.popupInfo #title').html("Sprzątanie");
            $('.popupInfo #infoFooter button').attr("onclick","sendClean()");
               $('.popupInfo').bPopup();
         }       
         else if(id=="REPAIR")
         {
               $('.popupInfo #title').html("Naprawa");
               $('.popupInfo #infoFooter button').attr("onclick","sendRepair()");
               $('.popupInfo').bPopup();
         }  
                 if(id=="FOOD")
         {
            $('.popupInfo #title').html("Posiłki");
                 $('.popupInfo #infoFooter button').attr("onclick","sendFood()");
               $('.popupInfo').bPopup();
         }       
         else if(id=="TRANSPORT")
         {
               $('.popupInfo #title').html("Transport");
                    $('.popupInfo #infoFooter button').attr("onclick","sendTransport()");
               $('.popupInfo').bPopup();
         } 
                 if(id=="MAP")
         {
            $('.popupInfo #title').html("Okolice");
               $('.popupInfo #infoFooter button').attr("onclick","sendMap()");
               $('.popupInfo').bPopup();
         }       
         else if(id=="HELP")
         {
               $('.popupInfo #title').html("Pomoc");
               $('.popupInfo #infoFooter button').attr("onclick","sendHelp()");
               $('.popupInfo').bPopup();
         }   
         });
    });





   var setting = 0;
   var menu = 0;
   var messages = 0;


   $("#setting").mousedown(function() {
   if(!setting){
      $( ".dropdown-menu" ).slideUp(300);
      menu=0;
      $( ".AllMessages" ).slideUp(300);
      messages=0;
      $( ".dropdown-setting" ).slideDown(300);
      setting=1;
   }
   else if(setting){
         $( ".dropdown-setting" ).slideUp(300);
      setting=0;
   }
   });

      $("#messages").mousedown(function() { 
        if(!messages){
          $( ".dropdown-menu" ).slideUp(300);
      menu=0;
       $( ".dropdown-setting" ).slideUp(300);
      setting=0;
      $( ".AllMessages" ).slideDown(300);
         messages=1;
   }
   else if(messages){
         $( ".AllMessages" ).slideUp(300);
      messages=0;
   }  
   });


   $("#menu").mousedown(function() {
   if(!  menu){
      $( ".dropdown-setting" ).slideUp(300);
      setting=0;
      $( ".AllMessages" ).slideUp(300);
      messages=0;
      $( ".dropdown-menu" ).slideDown(300);
         menu=1;
   }
   else if(menu){
         $( ".dropdown-menu" ).slideUp(300);
      menu=0;
   }
   });


   </script>

</html>