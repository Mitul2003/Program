// stream file
        // mainly foure event fire thai
        // 1.data
        // 2.end
        // 3.err
        // 3.finish

const fs = require("fs");
const http = require("http");

// const server = http.createServer((req,res)=> {
//         res.write("resss")
//         res.end();
// });

const server = http.createServer();

server.on("request", (req,res) => {

//***Second Wayy */
    // const strr = fs.createReadStream("ReadWrite.txt");
    // strr.pipe(res)
    
//***First Way */
    const str = fs.createReadStream("ReadWrite.txt");
    
    str.on("data",(mydata) => {
        res.write(mydata);
    });
    str.on("end",() => {
        res.end();
    })

})

server.listen(8585,() => {
    console.log("lisnigg")
});


//  ***** Different Method
// var fs = require("fs");  
// var data = '';  
// // Create a readable stream  
// var readerStream = fs.createReadStream('ReadWrite.txt');  
// // Set the encoding to be utf8.   
// readerStream.setEncoding('UTF8');  
// // Handle stream events --> data, end, and error  
// readerStream.on('data', function(chunk) {  
//    data += chunk;  
// });  
// readerStream.on('end',function(){  
//    console.log(data);  
// });  
// readerStream.on('error', function(err){  
//    console.log(err.stack);  
// });  
// console.log("Program Ended");  