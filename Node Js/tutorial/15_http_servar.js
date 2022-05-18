const http = require("http");
// req => requiest
// res => respons
const server = http.createServer((req , res) => {
    res.end("hello from the other side...");
})

server.listen(5556 , () => {
    console.log("listinng to the port no 5556....")
})