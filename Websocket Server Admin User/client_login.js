  function runLogin() {
   websocket.onopen = function(evt) {
         onOpen(evt)
      };
         websocket.onclose = function(evt) {
            $("#serverStatus").html("<p id=\"textLogin\">Połączenie zerwane</p>");
      };
   	   websocket.onmessage = function(evt) {
         if(evt.data=="#USER#") 
         {
             $( "#container" ).animate({
                  opacity: .0,
                 }, {
                   duration: 1000,
                   specialEasing: {
                     width: "linear",
                     height: "easeOutBounce"
                   },
                   complete: function() {
                     $("#container").load("/Roomie/user.php");

                      $( "#container").animate({opacity: 1,},1000,function() {                
                            runUser();
                        });
                   }
                 });
           
         }
         if(evt.data=="#ADMIN#") {
             $( "#container" ).animate({
                  opacity: .0,
                 }, {
                   duration: 1000,
                   specialEasing: {
                     width: "linear",
                     height: "easeOutBounce"
                   },
                   complete: function() {
                     $("#container").load("/Roomie/admin.php");
                      runAdmin();
                      $( "#container" ).animate({opacity: 1,},1000,function() {
                            
                             websocket.send("GET_SERWER_STATUS");
                        });
                 
                   }
                 });
            //Ladujemy info z serwera
             
         }
         dane = evt.data.split("#");
         if(dane[0]=="USER_COUNT") {
            alert($("sr2")[0].val());
            $(".users_count").append("<p id=\"textLogin\">Połączono z serwerem</p>");
            console.log(dane[1]);
         }
         else show(evt.data);
      };

  

      
    }