  function runLogin() {
   websocket.onopen = function(evt) {
         onOpen(evt)
      };

         websocket.onclose = function(evt) {
        $(".connectionInfo .info").attr("id","disconnected");
        $(".connectionInfo .info").html("Rozłączono")
      };
      websocket.onerror = function(evt) {
        $(".connectionInfo .info").attr("id","disconnected");
        $(".connectionInfo .info").html("Niepołączono");
      };
   	   websocket.onmessage = function(evt) {
         if(evt.data=="#USER#" || evt.data=="#ADMIN#") 
         {
             $( "#container" ).animate({
                  opacity: .0,
                 }, {
                   duration: 1000,
                   specialEasing: {
                     width: "linear",
                     height: "easeOutBounce"
                   },
                   complete: function() 
                   {
                      if(evt.data=="#USER#"){
                      $("#container").load("/Roomie/User.php");
                      $( "#container").animate({opacity: 1,},1000,function() {runUser();});
                      }
                      if(evt.data=="#ADMIN#"){
                      $("#container").load("/Roomie/Admin.php");
                      runAdmin();
                      $( "#container" ).animate({opacity: 1,},1000,function() { websocket.send("GET_SERWER_STATUS"); });
                      }
                   }
                 });
           
         }

         
         else show(evt.data);
      };

  

      
    }