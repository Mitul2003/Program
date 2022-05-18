const buffer = Buffer.alloc(8);
console.log(buffer);
buffer.write("hello");
console.log(buffer.toString());

// *****

// const buffer = Buffer.alloc(9);
// buffer.write("Heellfonjgv")
// console.log(buffer.toString())

var ex1 = Buffer.from([8, 2, 1, 5, 8]);  // 	Creates a Buffer object from an object (string/array/buffer)
// console.log(ex1);
// console.log("ex1: " + ex1);
// console.log(ex1.toString());
console.log(ex1.toJSON());


// var ex2 = Buffer.from("I'm a string!", "utf-8");
// console.log(ex2);
// console.log("ex2: " + ex2);

//***Copy buffer.. */
// var buf1 = Buffer.alloc(24);
// var buf2 = Buffer.from("students!!!", "utf-8");
// buf1.write("Hello  ", "utf-8");
// buf2.copy(buf1, 11);
// // buf1.toString("utf-8", 0, 22);
// console.log("Buffer 2 data copied from buffer 1: " + buf1);
// console.log(buf1.length + " " +buf2.length)


// reading buffering...

// const buffer = Buffer.alloc(26);
// for (var i = 0; i < 26; i++) {
//   buffer[i] = i+97;
// }
// console.log(buffer.toString("ascii")); // outputs: abcdefghijklmnopqrstuvwxyz
// console.log(buffer.toString("ascii", 0, 5)); // outputs: abcde
// console.log(buffer.toString("utf8", 0, 6)); // outputs: abcdef
// console.log(buffer.toString(undefined, 0, 5)); // encoding defaults to 'utf8', outputs abcde  z

//check length for buffer
// console.log(buffer.length);


// var buff = Buffer.alloc(26);

// for(i = 0 ; i < 26; i++)
// {
//   buff[i] = i + 97;
// }
// console.log(buff.toString("utf-8"))