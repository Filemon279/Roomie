<!DOCTYPE html>
<html>
   <meta charset = "utf-8" />
   <title>WebSocket Test</title>
   <head> 
      <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
        <link rel="stylesheet" type="text/css" href="UserPage.css">
        <link rel="stylesheet" href="css/font-awesome.min.css">
      <link href='http://fonts.googleapis.com/css?family=Hammersmith+One&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
   </head> 
   
   <body>

 <script language = "javascript" type ="text/javascript" src="Client_login.js"></script>
  <script language = "javascript" type ="text/javascript" src="Client_user.js"></script>




<div id="mySidenav" class="sidenav">
  <a href="javascript:void(0)" id="closeMenu" class="closebtn" onclick="closeNav()">&times;</a>
  <a href="#" id="test">Moje Dane</a>
  <a href="#">Moje Zamówienia</a>
  <a href="#">O Hotelu</a>
  <a href="#">O Wrocławiu</a>
  <a href="#">Wyślij wiadomość</a>
  <a href="#">Ustawienia</a>
  <a></a>
  <a></a>
  <a href="./">Wyloguj</a>
</div>


<div id="main">

 

 <div class="topContainer">

  <span id="showMenuSpan" onclick="openNav()"><i class="fa fa-bars" aria-hidden="true"></i></span>

  <p id="infoTitle">Mój numer pokoju: </p><p id="user_number">001</p>
  <p id="infoTitle">Imię: </p><p id="user_name">ISSP</p> 
  <p id="infoTitle">Nazwisko: </p><p id="user_surname">Wrocław</p>
  <p id="infoTitle">Check In: </p><p id="user_checkIn">12.03.2017</p>
  <p id="infoTitle">Check Out: </p><p id="user_checkOut">19.03.2017</p>
  </div>

 <div class="requestsPanel"><center>
  <div class="requestTitle">PANEL ZARZĄDZANIA</div>

   <div id="CLEAN" class="request"><i class="fa fa-bed fa-5x" aria-hidden="true"></i><br>Sprzątanie </div> 
   <div id="FOOD" class="request"><i class="fa fa-cutlery fa-5x" aria-hidden="true"></i><br>Posiłki</div>
   <div id="REPAIR" class="request"><i class="fa fa-wrench fa-5x" aria-hidden="true"></i><br>Naprawa  </div> 
   <div id="MAP" class="request"><i class="fa fa-globe fa-5x" aria-hidden="true"></i><br>Okolice  </div> 
   <div id="TRANSPORT" class="request"><i class="fa fa-bus fa-5x" aria-hidden="true"></i><br>Transport  </div> 
   <div id="HELP" class="request"><i class="fa fa-medkit fa-5x" aria-hidden="true"></i><br>Pomoc  </div> </center>
   
   </div>

<div class="infoPanel"><center>
  <div class="infoPanelTitle">INFORMACJE</div>

  <div class="informacja"><p>Chociaż psy zostały udomowione około 33 tysięcy lat temu, to do dziś zachowały swoje pierwotne instynkty - wyją do księżyca i zbierają się w stada.</p></div>
  <div class="informacja"><p>Psy odróżniają kolory, ale o wiele gorzej niż człowiek. Mogą odróżnić żółty i niebieski, ale czerwony i zielony widzą jako żółto-szary.</p></div>
  <div class="informacja"><p>Wilgotność nosa ma dla psa ogromne znaczenie. To właśnie dzięki wilgotności potrafi on określić skąd dobiega zapach. Im pies ma dłuższy nos, tym bardziej efektywny jest jego system schładzania.</p></div>
  <div class="informacja"><p>Witamy w Hotelu. Wszystkie ważne informacje będą dodawane z tym panelu. Życzymy miłego pobytu</p></div>
 
   
   </div>
 
  
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

   </body>
<script>

//Boczne MENU
var opened = 0
function openNav() {
  if(!opened)
    {
      document.getElementById("mySidenav").style.width = "250px";
      document.getElementById("main").style.marginLeft = "250px";
      opened=1;
    }
    else if(opened)
    {
      document.getElementById("mySidenav").style.width = "0";
      document.getElementById("main").style.marginLeft = "0";
      opened=0;
    }
}


function closeNav() {
    document.getElementById("mySidenav").style.width = "0";
    document.getElementById("main").style.marginLeft = "0";
      opened=0;
}

</script>
 <script>
var bPopup;
    $('.request').mousedown(function(){
      var id = $(this).attr("id");
    
     
           $.getScript('./js/jquery.bpopup.min', function()
         {   
         if(id=="CLEAN")
         {  
         
            $('.popupInfo #title').html("Sprzątanie");
            bPopup = $('.popupInfo').bPopup();
            
            $('.popupInfo #infoFooter button').attr("onclick","sendClean();bPopup.close();");
            
         }       
         else if(id=="REPAIR")
         {
               $('.popupInfo #title').html("Naprawa");
                bPopup = $('.popupInfo').bPopup();
               $('.popupInfo #infoFooter button').attr("onclick","sendRepair();bPopup.close();");
             
         }  
                 if(id=="FOOD")
         {
            $('.popupInfo #title').html("Posiłki");
               bPopup = $('.popupInfo').bPopup();
               $('.popupInfo #infoFooter button').attr("onclick","sendFood();bPopup.close();");
             
         }       
         else if(id=="TRANSPORT")
         {
               $('.popupInfo #title').html("Transport");
              bPopup = $('.popupInfo').bPopup();
               $('.popupInfo #infoFooter button').attr("onclick","sendTransport();bPopup.close();");
              
         } 
                 if(id=="MAP")
         {
            $('.popupInfo #title').html("Okolice");
            bPopup = $('.popupInfo').bPopup();
            $('.popupInfo #infoFooter button').attr("onclick","sendMap();bPopup.close();");
            
         }       
         else if(id=="HELP")
         {
               $('.popupInfo #title').html("Pomoc");
                 bPopup = $('.popupInfo').bPopup();
               $('.popupInfo #infoFooter button').attr("onclick","sendHelp();bPopup.close();");
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
<!--
        <div id="top"><p id="userPanel"><i class="fa fa-bed fa-lg" aria-hidden="true"></i>   Twój pokój: <b>222</b></p><center><img id="logo" src="img/logo/roomie_logo.png" width="130px"></center></div>

 



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
-->
</html>