const EventEmitter = require("events")  // call class
const event = new EventEmitter(); // create an object


event.on('sayMyName', () => {              // event defination
    console.log("My Name is Mitul...")
})
event.on('sayMyName', () => {              // event defination
    console.log("My Name is Mitul Dudhat...")
})
event.on('sayMyName', fun1 = () => {              // event defination
    console.log("My Name is Mitul N Dudhat...")
})

// event.removeListener("sayMyName",fun1);
event.emit("sayMyName");   // create new Event

////********Exam. 2 */

event.on("chekpage",(sc,msg) => {
    console.log(`status cod is ${sc} and the page is ${msg}`)
})

event.emit("chekpage",200,"ok");

const ev = require("events");
const e = new ev();

e.on('say',(name) => {
    console.log(`My Name is ${name} Dudhat`);
})

e.emit("say","mitul")
