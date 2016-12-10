  var wsUri = "ws://localhost:8080";
    var output;
	  var websocket;
      function init() {
    
        runWebSocket();
      }
	
      function runWebSocket() {
      websocket = new WebSocket(wsUri,'echo-pro');
      runLogin()
      
       
      }
	
    function onOpen(evt) {
         $("#serverStatus").html("<p id=\"textLogin\">Połączono z serwerem</p>");
      }
    
      function getUsers()
      {
         websocket.send("GETUSERS");
      }

      function show(text)
      {
          $("#serverStatus").html("<p id=\"textLogin\">"+text+"</p>");
      }

      function zaloguj()
      {
         if($("#login").val()=="")   $("#serverStatus").html("<p id=\"textLogin\">Podaj login</p>");
         else if($("#pass").val()=="")   $("#serverStatus").html("<p id=\"textLogin\">Podaj hasło</p>");
         else{var msg = $("#wiadomosc").val();
          
            websocket.send("#"+$("#login").val()+"#"+$("#pass").val());
      
      }
      }


	
      window.addEventListener("load", init, false);
   