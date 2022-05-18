const fs = require("fs");

// const data = fs.readFileSync("read.txt","utf8");
// console.log(data)
// console.log("heeloo brother")

fs.readFile("read.txt","utf8",(err,data) => {
    console.log(data);
})

console.log("gggggg")