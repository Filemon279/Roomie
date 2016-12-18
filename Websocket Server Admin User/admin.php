<!DOCTYPE html>
<html>
   <meta charset = "utf-8" />
   <title>Roomie - Admin</title>
   <head> 
      <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
      <link rel="stylesheet" type="text/css" href="./AdminPage.css">
      <link rel="stylesheet" href="css/font-awesome.min.css">
      <link href='http://fonts.googleapis.com/css?family=Hammersmith+One&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
   </head>
   
   
  <body id="container">
  <script language = "javascript" type ="text/javascript" src="./Client_login.js"></script>
  <script language = "javascript" type ="text/javascript" src="./Client_admin.js"></script>




<div id="mySidenav" class="sidenav">
  <a href="javascript:void(0)" id="closeMenu" class="closebtn" onclick="closeNav()">&times;</a>
  <a href="#" class="openCreator">Zamelduj Gościa</a>
  <a href="#">Zarządzaj Pokojami</a>
  <a href="#">Wyślij wiadomość</a>
  <a onclick="loadAllReq()">Odśwież Bazę</a>
  <a></a>
  <a></a>
  <a href="./">Wyloguj</a>
</div>


<div id="main">

<div class="requestsPanel">  </div>

 <div class="topContainer">

  <span id="showMenuSpan" onclick="openNav()"><i class="fa fa-bars" aria-hidden="true"></i></span>

  <p id="infoTitle">Użytkowników: </p><p id="users_count">001</p>
  <p id="infoTitle">Zalogowanych: </p><p id="rooms_connected">001</p> 
  <p id="infoTitle">Niezalogowani: </p><p id="rooms_unconnected">000</p>
  <p id="infoTitle">Aktywne polecenia: </p><p id="request_pending">001</p>
  <p id="infoTitle">Wykonane polecenia: </p><p id="request_done">001</p>
  <p id="infoTitle">Status MySql: </p><p id="mysql_status">-</p>
  </div>


 
  
</div>


 

    <div class="popupInfo">
    <a href="javascript:void(0)" id="closeMenu" class="closebtn" onclick="bPopup.close();">&times;</a>
    <p id="title">Tytuł</p>
    <p id="room">001 - Imię Nazwisko</p>
    <p id="info">Info info info info info info info info info
    Info info info info info info info info info
    Info info info info info info info info info
    Info info info info info info info info info
    Info info info info info info info info info
    Info info info info info info info info info</p>
    <div id="infoAction"><button id="deleteReq" onclick="bPopup.close();">Usuń Prośbę</button><button id="responseReq" onclick="bPopup.close();">Wyślij odpowiedź</button></div>  
    <p id="infoFooter">ID#xxxx</p>
    </div>


    <div class="popupResponse">
    <a href="javascript:void(0)" id="closeMenu" class="closebtn" onclick="bPopup.close();">&times;</a>
    <p id="title">Odpowiedź </p>
    <p id="room">001 - Imię Nazwisko</p>
    <p id="info"><textarea id="textResponse" placeholder="Max 80 chars" maxlength="80" rows="4" cols="50">Twoja prośba jest w trakcie realizacji, Pozdrawiamy.</textarea></p>
    <div id="infoAction"><button id="closeResponse" onclick="bPopup.close();">Zamknij</button><button id="sendResponse" onclick="bPopup.close();">Wyślij</button></div>  
    <p id="infoFooter">ID#xxxx</p>
    </div>


 
    <div class="createAccount">
    <p id="title">Utwórz Nowe Konto</p>
    <div id="createInfo">Konto utworzone poprawnie</div>
    <p id="numberPass">Numer i Hasło:</p>
    <form onsubmit='crtAcc();return false;'>
    <div class="numberPassArea">
    <center> 
    <p class="in" style="display: inline-block;"><i class="fa fa-key" aria-hidden="true"></i><input autocomplete="off" id="numberField" maxlength="3" onkeypress='return event.charCode >= 48 && event.charCode <= 57' Placeholder="Numer" required></p> 
    <p class="in" style="display: inline-block;"><i class="fa fa-lock" aria-hidden="true"></i><input autocomplete="off" id="passField" maxlength="10" type="password" Placeholder="Hasło" required></p>
    </center></div>

    <p id="nameSurname">Imię Nazwisko:</p>
    <div class="nameSurnameArea">
    <center> 
    <p class="in" style="display: inline-block;"><i class="fa fa-address-card-o" aria-hidden="true"></i><input autocomplete="off" maxlength="20" id="nameField" type="text" Placeholder="Imię" required></p>
    <p class="in" style="display: inline-block;"><i class="fa fa-address-card-o" aria-hidden="true"></i><input autocomplete="off" maxlength="30" id="surnameField" type="text" Placeholder="Nazwisko" required></p>
    </center>
    </div>
    <p id="checkInOut">CheckIn/checkOut:</p>
    <div class="checkInOutArea">
    <center> 
    <p class="in" style="display: inline-block;"><i class="fa fa-arrow-circle-down" aria-hidden="true"></i><input autocomplete="off" id="checkINField" type="date" Placeholder="Check In" required> </p> 
    <p class="in" style="display: inline-block;"><i class="fa fa-arrow-circle-up" aria-hidden="true"></i><input autocomplete="off" id="checkOUTField" type="date" Placeholder="Check Out" required>  </p>
    </center>  
    </div>
    <p id="others">Inne:</p>

    <div class="othersArea">
    <center> 
    <p class="in"><i class="fa fa-user" aria-hidden="true"></i><input autocomplete="off" id="othersField" type="text" value="brak" Placeholder="Inne" required>  </p>
    </center>
    </div>
  
    <div id="infoAction"><button id="closeCreator" onclick="bPopup.close();">Zamknij</button><button autocomplete="off" id="createAccount"  type="submit" >Zamelduj</button></div>  
    </form>
    </div>
 



  </body>

<script>

document.getElementById('checkINField').valueAsDate = new Date();
document.getElementById('checkOUTField').valueAsDate = new Date();
$('#contactForm').submit(function () {
 sendContactForm();
 return false;
});
var bPopup;

$('body').on('click', '.openCreator', function(){
  $.getScript('./js/jquery.bpopup.min.js', function()
  {   
  bPopup = $('.createAccount').bPopup();
  });
});



$('body').on('click', '#deleteReq', function(){
  var id = $("#infoFooter").html();
  var dane = id.split("#");
  deleteReq(dane[3]);
  console.log("delete: "+dane[3]);
  loadAllReq();
});

$('body').on('click', '#responseReq', function(){
bPopup.close();
bPopup = $('.popupResponse').bPopup();
});


$('body').on('click', '#sendResponse', function(){
  requestActive.css("background-color","#ffffff");
  var id = $("#infoFooter").html();
  var dane = id.split("#");
  response(dane[2],$("#textResponse").val());
  console.log("response: "+dane[2]);
});


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


var requestActive;
$('body').on('click', '.request', function(){
  requestActive=$(this);
      var id = $(this).attr("ID");
      $(this).css("background-color","#202020");
  $.getScript('./js/jquery.bpopup.min.js', function()
  {   
  requestInfo(id);
  bPopup = $('.popupInfo').bPopup();
  });
});


  </script>


</script>

  </html>