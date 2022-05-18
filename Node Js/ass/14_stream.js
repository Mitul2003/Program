var fs = require("fs");  
const http = require("http");
var data = 'A Solution of Technology';  
// Create a writable stream  
var writerStream = fs.createWriteStream('output.txt');  
// Write the data to stream with encoding to be utf8  
writerStream.write(data,'UTF8');  
// Mark the end of file  
writerStream.end();  
// Handle stream events --> finish, and error  
writerStream.on('finish', function() {  
    console.log("Write completed.");  
});  
writerStream.on('error', function(err){  
   console.log(err.stack);  
});  
console.log("Program Ended");


// const ser = http.createServer();
// ser.on("request", function (req, res) {
//   const rs = fs.createReadStream("output.txt");
//   rs.on("data", (chunk) => {
//     res.write(chunk);
//   });
//   rs.on("end", function () {
//     res.end();
//   });
//   rs.on("err", function () {
//     res.end("File not found");
//   });
// });

// ser.listen(5000);
var data = '';  
// Create a readable stream  
var readerStream = fs.createReadStream('output.txt');  
// Set the encoding to be utf8.   
// readerStream.setEncoding('UTF8');  
// Handle stream events --> data, end, and error  
readerStream.on('data', function(chunk) {  
   data += chunk;  
});  
readerStream.on('end',function(){  
   console.log(data);  
});  
readerStream.on('error', function(err){  
   console.log(err.stack);  
});  
console.log("Program Ended");  