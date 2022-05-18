const fs=require('fs')
const url=require('url')
const http=require('http')

//creatind file
fs.writeFile('Sunder_Pichai.txt', 'Pichai Sundararajan (born June 10, 1972[1][4][5]), better known as Sundar Pichai (/ˈsʊndɑːr pɪˈtʃaɪ/), is an Indian-born American business executive.[6] He is the chief executive officer (CEO) of Alphabet Inc. and its subsidiary Google.', (err) => {
    console.log("Sunder_Pichai.txt creted Succesfully")
});

fs.writeFile('Satya_Nadella.txt', 'Nadella was born in Hyderabad of present-day Telangana, India[7] into a Telugu-speaking Hindu family.[8][9][10] His mother Prabhavati was a Sanskrit lecturer[11] and his father, Bukkapuram Nadella Yugandhar, was an Indian Administrative Service officer of the 1962 batch', (err) => {
    console.log("Satya_Nadella.txt creted Succesfully")
});

const server = http.createServer(function(req,res){
    const urlobject = url.parse(req.url,true)
    const filename = "."+urlobject.pathname;

    fs.readFile(filename,function(err,data){
        if(err)
        {
            res.writeHead(404,{'Context-Type':'text/html'})
            return res.end("404 not found")
        }

        res.writeHead(200,{'Context-Type':'text/html'})
        res.write(data)
        res.end()
    })
 })

 server.listen(8000,()=>{
     console.log("Server is running")
 })