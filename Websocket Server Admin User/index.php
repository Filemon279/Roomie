<!DOCTYPE html>
<html>
   <meta charset = "utf-8" />
   <title>WebSocket Test</title>
   <head> 
      <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
      <script language = "javascript" type ="text/javascript" src="client.js"> </script>
      <link rel="stylesheet" type="text/css" href="loginPage.css">
   <link href='http://fonts.googleapis.com/css?family=Hammersmith+One&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
    <script type="text/javascript" src="js/jquery.bpopup.min"></script>
   </head>
   
   <body id="container">
    <script language = "javascript" type ="text/javascript" src="client_login.js"></script>
    <script language = "javascript" type ="text/javascript" src="client_admin.js"></script>
   <script language = "javascript" type ="text/javascript" src="client_user.js"></script>
      <div id="top"><center><img id="logo" src="img/logo/roomie_logo.png" width="130px"></center></div>
      <div id="loginDiv">  <div id="loginDivTop">
      <p id="textLogin">ZALOGUJ SIĘ</p></div>
      <div id="loginFields">

      <div id="loginArea">
      <center><p id="fieldsLabel">Numer Pokoju:</p> </center>
      <input id="login" ></div>
      <div id="passArea">
      <center><p id="fieldsLabel">Hasło:</p> </center>
      <input id="pass" type="password" align="rigth"></div>
      <hr>
      <center><button id="zaloguj" onclick="zaloguj()">Zaloguj</button></center>
      </div>
      <div id="serverStatus">
         
      </div>
     
      </div>
   
   </body>


</html>