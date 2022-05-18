
/*
eventEmitter.listeners(): It returns an array of listeners for the 
                            specified event.
Syntax:

eventEmitter.listeners(event)

eventEmitter.listenerCount(): It returns the number of listeners 
                            listening to the specified event.
Syntax:

eventEmitter.listenerCount(event)

eventEmitter.prependOnceListener(): It will add the one-time listener to 
                                    the beginning of the array.
Syntax:

eventEmitter.prependOnceListener(event, listener)

eventEmitter.prependListener(): It will add the listener to the 
                                beginning of the array.
Syntax:

eventEmitter.prependListener(event, listener)

*/

// Importing events
const EventEmitter = require("events");

// Initializing event emitter instances
var event = new EventEmitter();

var fun1 = (name) => {
  console.log(name, "is First year student");
};

var fun2 = (name) => {
  console.log(name, "is Second year student");
};
// Listening to myEvent with fun1 and fun2
event.on("student1", fun1); //[fun2,fun1]

// fun2 will be inserted in front of listeners array
event.prependListener("student1", fun2);

// Listing listeners
// console.log(event.listeners("student1"));

// // Count the listeners registered to myEvent
// console.log(event.listenerCount("student1"));

// Triggering myEvent
event.emit("student1", "ABC");