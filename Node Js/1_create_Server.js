var http = require('http');   // Bulit in modul

//create a server object:
http.createServer(function (req, res) {
    res.write('Hello World!'); //write a response to the client
    res.end(); //end the response
  }).listen(8010); //the server object listens on port 8080


