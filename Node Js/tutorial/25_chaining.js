const fs = require("fs");
const zlib = require("zlib");

// create zip file
// const stream = fs.createReadStream("output.txt")
//     .pipe(zlib.createGzip())
//     .pipe(fs.createWriteStream("output.txt.gz"));

// make unzip file

// const str = fs.createReadStream("output.txt.gz")
//     .pipe(zlib.createGunzip())
//     .pipe(fs.createWriteStream("outputt.txt"));

const stream = fs.createReadStream("output.txt");
stream.pipe(zlib.createGzip());
stream.pipe(fs.createWriteStream("oo.txt.gz"))
