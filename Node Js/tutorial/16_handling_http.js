const http = require("http");

const server = http.createServer((req,res) => {
    // console.log(req.url);
    if(req.url == "/")
    { res.end("Hello from the home side");
    }
    else if(req.url == "/about") {  
        res.end("Hello from the about side");
    }
    else {
        res.writeHead(404)
        res.end(" <h1> 404 Error </h1>")
    }
    
})

server.listen(5554 , () => {
    console.log("server listeneddd..")
})