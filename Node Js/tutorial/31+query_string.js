
/*Convert query string into JSON object
The querystring.parse() method is used to parse the URL query string
into an object that contains the key value pair.

The syntax for the method is below.

querystring.parse( str[, sep[, eq[, options]]]) )
As seen from the above syntax the method accepts four parameters, and they are described below.

str: This is the only required string field and it specifies the query string that has to 
        be parsed.
sep: It is an optional string field, which if given specifies the substring used to delimit 
    the key and value pairs in the query string. The default value which is generally 
    used is “&”.
eq: It is an optional string field that specifies the substring used to delimit keys and 
    values in the query string. The default value which is generally used is “=”.
options: It is an optional object field which is used to modify the behaviour of the method. 
        It can have the following parameters:

    maxKeys: It is the number which specifies the maximum number of keys that should be parsed. 
             A value of “0” would remove all the counting limits, and it can parse any number of keys. 
            The default value is set at “1000”.
*/
// Import the querystring module
// const qs = require("querystring");
// const obj1 = qs.parse("name=XYZ&collage=KSSBM");
// console.log("Parsed Query 1:", obj1);

// // Specify the URL query string to be parsed
// let qstr = "name=XYZ&collage=KSSBM&Year=Second";
// // Use the parse() method on the string
// let obj2 = qs.parse(qstr);
// console.log("Parsed Query 2:", obj2);

// // Use the parse() method on the string with sep as `&&` and eq as `-`
// qstr1 = "name-abc&&age-24&&year-second";
// obj3 = qs.parse(qstr1, "&&", "-");
// obj3 = qs.parse(qstr1,);
// console.log("\nParsed Query 3:", obj3);

// // Specify a new URL query string to be parsed
// qstr2 = "name=XYZ&collage=KSSBM&Year=Second";
// // Use the parse() method on the string with maxKeys set to 1
// obj4 = qs.parse(qstr2, "&", "=", { maxKeys: 1 });
// console.log("\nParsed Query 4:", obj4);

// // Use the parse() method on the string with maxKeys set to 2
// obj4 = qs.parse(qstr2, "&", "=", { maxKeys: 2 });
// console.log("\nParsed Query 5:", obj4);

// // Use the parse() method on the string with maxKeys set to 0 (no limits)
// obj4 = qs.parse(qstr2, "&", "=", { maxKeys: 0 });
// console.log("\nParsed Query 6:", obj4);



// ******prectis

var q = require("querystring");

var obj = q.parse("name==mitul&&&age==28&&&hobbis==nothig","&&&","==",{maxKeys : 0});
var js = q.stringify(obj,"&&&","==")
console.log(obj)
console.log(js)