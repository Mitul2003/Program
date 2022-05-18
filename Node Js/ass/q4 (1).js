const fs=require("fs");

fs.writeFile("quotes.txt","The scientist discoversa new type of material or energy and the engineer discovers a new use for it.",(err)=>{
    console.log("fill created!!");
});
fs.appendFile("quotes.txt","\nIT is not just another department in an organization. It’s pervasive, likeelectricity",(err)=>{
    console.log("data append!!");
});
