const url = require('url');


var address = "https://www.semrush.com/blog/url-parameters/?name=Mitul&id=2261"

var data = url.parse(address,true);

console.log("hostName : "+ data.host)
console.log("pathname  : "+ data.pathname)
console.log("Search : "+ data.search)

var temp = data.query;
console.log("data: " + JSON.stringify(temp));
console.log("id : " + temp.name)
