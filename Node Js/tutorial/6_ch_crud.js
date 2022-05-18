const fs = require("fs");

// fs.mkdirSync("Mitul");

// fs.writeFileSync("bio.txt","Helloo bhai log...");

const new_data = fs.readFileSync("Mitul/bio.txt","utf8");
console.log(new_data);



// fs.renameSync("Mitul/bio.txt","Mitul/mybio.txt");

// fs.unlinkSync("Mitul/mybio.txt")

// fs.rmdirSync("Mitul");