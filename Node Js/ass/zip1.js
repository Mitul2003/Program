const zlib = require("zlib");
console.log(1);
const fs = require("fs");
const gzip = zlib.createGzip();
const inp = fs.createReadStream("input1.txt");
const out = fs.createWriteStream("input1.txt.gz");
inp.pipe(gzip).pipe(out);

