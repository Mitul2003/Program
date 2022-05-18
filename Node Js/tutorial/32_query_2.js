
/* The querystring.stringify() : method is used to produce a query string from a given object,
                                 which contains a key value pair. It is exactly the opposite of 
                                 querystring.parse() Method.


Syntax for the method is below.

querystring. stringify( obj[, sep[, eq[, options]]]) )
As from the above syntax the method accepts four parameters, and they are described below.

obj: This is the only required object field and it specifies the object that has to be serialized.
sep: It is an optional string field, which if given specifies the substring used to delimit the key and value pairs in the query string. The default value which is generally used is “&”.
eq: It is an optional string field that specifies the substring used to delimit keys and values in the query string. The default value which is generally used is “=”.
options: It is an optional object field which is used to modify the behaviour of the method. It can have the following parameters:
*/

//Convert JSON object into query string
const qs = require("querystring");
obj = {
  name: "abc",
  age: 24,
  role: ["Students", "CR"],
};

const obj1 = qs.stringify(obj);   
console.log(obj1);

//Use the stringify() method on the object with sep as `, ` and eq as `:`
const obj2 = qs.stringify(obj, ", ", ":");
console.log("Query String 2:", obj2);

// Use the stringify() method on the object with sep as `&&&` and eq as `==`
obj3 = qs.stringify(obj, "&&&", "==");
console.log("\nQuery String 3:", obj3);