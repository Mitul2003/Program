// core modual is inbuilt modual
// sync mean : jya sudhi ek kam puru na thai tyaa sudhi biju kam start na thai


const fs = require("fs");


// fs.writeFileSync('read.txt',"Wlcome to my program");
fs.writeFileSync('read.txt',"Wlcome to my program");


fs.appendFileSync("read.txt"," hello how are you..")

const buf_data = fs.readFileSync("read.txt")
console.log(buf_data.toString())

org_data = buf_data.toString();
// console.log(org_data)

//rename(oldfile,newfile)
fs.renameSync("read.txt","ReadWrite.txt")

