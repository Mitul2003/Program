// var http = require('http');
// var fs = require('fs');
// http.createServer(function (req, res) {
//   fs.readFile('/Node Js/demofile.html', function(err, data) {
//     res.writeHead(200, {'Content-Type': 'text/html'});
//     res.write(data);
//     return res.end();
//   });
// }).listen(8030);

var fs = require('fs');
// var file = require('fs')

fs.appendFile('mynewfile1.txt', 'Hello content!', function (err) {
  if (err) throw err;
  console.log('Saved!');
});

var fs = require('fs');
fs.readFile('Node Js/demofile.html','utf-8',function(err,data){
  if(err) throw err;
  console.log(data)
})