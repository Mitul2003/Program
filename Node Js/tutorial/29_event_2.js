
const EventEmitter = require("events");
var event1 = new EventEmitter(); //Emitter instances
var event2 = new EventEmitter();

//max listener : will return the max listeners value set by setMaxListeners() or
//default value 10.
console.log("Default max listener for event1 is: ", event1.getMaxListeners());
console.log("Default max listener for event2 is: ", event2.getMaxListeners());

// To change the default value for all EventEmitter instances
EventEmitter.defaultMaxListeners = 2;

// Getting max listener
console.log(
  "After a changing a default max listener value for event1: ",
  event1.getMaxListeners()
);
console.log(
  "After a changing a default max listener value for event2: ",
  event2.getMaxListeners()
);

// Set max listener of event1 to 5
event1.setMaxListeners(5);

// Getting max listener
console.log("Default max listener for event1 is: ", event1.getMaxListeners());
console.log("Default max listener for event2 is: ", event2.getMaxListeners());

var fun1 = (name) => {
  console.log(name, "is First year student");
};

var fun2 = (name) => {
  console.log(name, "is Second year student");
};
// Listening to student1 with 14 instance of fun1
for (var i = 0; i < 14; i++) {
  event1.on("event1", () => {console.log("hello")
});
}

// Listening to student2 with 3 instance of fun2
for (var i = 0; i < 3; i++) {
  event2.on("event2", fun2);
}

event1.emit("event1");
event2.emit("event2", "PQR");


