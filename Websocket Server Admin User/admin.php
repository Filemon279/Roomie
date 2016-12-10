<!DOCTYPE html>
<html>
   <meta charset = "utf-8" />
   <title>WebSocket Test</title>
   <head> 
    

      <link rel="stylesheet" type="text/css" href="adminPage.css">
          <link rel="stylesheet" href="css/font-awesome.min.css">
        <link href='http://fonts.googleapis.com/css?family=Hammersmith+One&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
     
   </head>
   
   
   <body id="container">
  

  <div class="requestsPanel"> <div id="req#2046" class="request" reqID="1"><i class="fa fa-bed fa-5x" aria-hidden="true"></i><br>Sprzątanie </div> </div>


      <div id="top"><p id="adminPanel">ADMIN PANEL</p><center><img id="logo" src="img/logo/roomie_logo.png" width="130px"></center></div>

      <div class="serverSettings">  
      <center><p>ZARZĄDZANIE</p></center>   
      <div class="123"><center><p>Zarejestruj pokój</p><br><p><button id="rejestruj">Zarejestruj</button>   </p></center></div>
      <div class="123"><center><p>Zarządzaj pokojami</p><br><p><button id="zarzadzaj">Zarejestruj</button>     </p></center></div>
      <div class="123"><center><p>Polecenia</p><br><p><button onclick="loadAllReq()" id="zarzadzaj">Odsiweż</button>     </p></center></div>
      <div class="123"><center><p>Wyslij wiadomość</p><br><p><button id="wyslij">Zarejestruj</button>  </p></center></div>
      </div>


      <div class="serverInfo">  
      <center><p>INFORMACJE O SERWERZE</p></center>   
      <div class="users_count"><center><p>Liczba użytkowników</p><br><p>005</p></center></div>
      <div class="rooms_connected"><center><p>Połączone pokoje</p><br><p>005</p></center></div>
      <div class="rooms_unconnected"><center><p>Niepołączone pokoje</p><br><p>005</p></center></div>
      <div class="request_pending"><center><p>Oczekujące polecenia</p><br><p>005</p></center></div>
      <div class="request_done"><center><p>Polecenia wykonane</p><br><p>005</p></center></div>
      <div class="mysql_status"><center><p>Stan Mysql</p><br><p>005</p></center></div>
      </div>



    <div class="popupInfo">
    <p id="title">Tytuł</p>
    <p id="room">001 - Monika Michalska</p>
    <p id="info">Info info info info info info info info info
    Info info info info info info info info info
    Info info info info info info info info info
    Info info info info info info info info info
    Info info info info info info info info info
    Info info info info info info info info info</p>  
    <p id="infoFooter">ID: 2000</p>
    </div>

  
  <script language = "javascript" type ="text/javascript" src="client_admin.js"></script>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.js"></script>
  
   </body>
   <script type="text/javascript">
loadAllReq();
$('body').on('click', '.request', function(){
      var id = $(this).attr("reqID");
  //    id = id.split("#");
           $.getScript('./js/jquery.bpopup.min', function()
{       requestInfo(id);
      //  $('.popupInfo #infoFooter').html("ID: "+id);
        $('.popupInfo').bPopup();
   
});
 })   ; 
 

  </script>
  </html>