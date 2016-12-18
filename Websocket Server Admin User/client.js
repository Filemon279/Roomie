  var wsUri = "ws://91.185.191.213:8279";
    var output;
	  var websocket;
      function init() {
    
        runWebSocket();
      }
	
      function runWebSocket() {
      websocket = new WebSocket(wsUri);
      runLogin();
      
       
      }

	
    function onOpen(evt) {
        $(".connectionInfo .info").attr("id","connected");
        $(".connectionInfo .info").html("Połączonoo")
      }
    
      function getUsers()
      {
         websocket.send("GETUSERS");
      }

      function show(text)
      {
        
      }

      function zaloguj()
      {
        console.log("#"+$("#loginField").val()+"#"+$("#passField").val());
        websocket.send("#"+$("#loginField").val()+"#"+$("#passField").val());
      }


	
      window.addEventListener("load", init, false);
   