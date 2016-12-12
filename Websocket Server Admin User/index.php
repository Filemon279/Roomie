<!DOCTYPE html>
<html>
   <meta charset = "utf-8" />
   <title>Roomie</title>
   <head> 
      <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
      <script language = "javascript" type ="text/javascript" src="Client.js"> </script>
      <link rel="stylesheet" type="text/css" href="LoginPage.css">
      <link rel="stylesheet" href="css/font-awesome.min.css">
      <link href='http://fonts.googleapis.com/css?family=Hammersmith+One&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
    <script type="text/javascript" src="js/jquery.bpopup.min"></script>
   </head> 
   <body id="container">
  <script language = "javascript" type ="text/javascript" src="Client_login.js"></script>
  <script language = "javascript" type ="text/javascript" src="Client_admin.js"></script>
<div class="main">
   <div class="container">
      <center>
         <div class="middle">
            <div id="login">

            <form action="javascript:void(0);" method="get">
               <fieldset class="clearfix">
               <p><span class="fa fa-user"></span><input type="text" id="loginField"  Placeholder="Numer pokoju" required></p> 
               <p><span class="fa fa-lock"></span><input type="password" id="passField" Placeholder="Hasło" required></p> 
               <div>
               <span style="width:48%; text-align:left;  display: inline-block;"><a class="small-text" href="#">Zapomniałes hasła?</a></span>
               <span style="width:50%; text-align:right;  display: inline-block;"><button type="submit" onclick="zaloguj()">Zaloguj</button></span>
               </div>
               </fieldset>
               <div class="clearfix"></div>
            </form>
            <div class="clearfix"></div>
            </div> <!-- end login -->
            <div class="logo"><img id="logo" src="img/logo/roomie_logo.png" width="130px">
            <div class="clearfix"></div>
            </div>
         </div>
      </center>
      <div class="connectionInfo" align="rigth"><p>Połączenie:</p><p class="info" id="connected">-</p></div>
   </div>
</div>
   </body>
</html>