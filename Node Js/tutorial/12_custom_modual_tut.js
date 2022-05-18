// const add = require("./owen_modual");
// console.log(add(5,4))


// const operat =  require("./owen_modual");
// console.log(operat.add(4,6));
// console.log(operat.sub(4,6));

const {add , sub , name, redy} = require("./owen_modual");
console.log(add(4,6))
console.log(sub(4,6))
console.log(name)
const reddy = new redy();
console.log(reddy.get())

const http = require("http");
const server = http.createServer((req,res) => {
    res.end("addition is" + add(5,6));
});




server.listen(5552)


