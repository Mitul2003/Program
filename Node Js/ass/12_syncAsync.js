//Synchronous
const fs=require('fs');
fs.writeFileSync("quotes.txt","The scientist discovers a new type of material or energy, and the engineer discovers a new use for it.");
fs.appendFileSync("quotes.txt","IT is not just another department in an organization. It’s pervasive, like electricity.");

//Asynchronous
//const fs=require('fs');
fs.writeFile("quotes1.txt","The scientist discovers a new type of material or energy, and the engineer discovers a new use for it.",function (err, data) {
    console.log("Write in file");});
fs.appendFile("quotes1.txt","IT is not just another department in an organization. It’s pervasive, like electricity.",function (err, data) {
    console.log("Write in file");});