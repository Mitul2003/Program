const fs = require("fs");

fs.writeFile("read.txt","hmmmmm hellllooo",/* call back function*/(err) =>{
    console.log("File createdd..")
    console.log(err)
});

fs.appendFile("read.txt","ohhhhoo",(err) => {
    console.log("ho gayaaas")
    console.log(err)
});

fs.readFile("read.txt","utf8",(err,data) =>{
    console.log(data);
})