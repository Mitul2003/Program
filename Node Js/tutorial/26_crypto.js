const crypto = require("crypto")
const key = "What the fuck"

const hash = crypto.createHmac("sha256", key)
    .update("Welcome to second")
    .digest("hex");
    

console.log(hash)


const cipher = crypto.createCipher("aes192", "a password"); //Advanced Encryption Standard
var encrypted = cipher.update("hello NodeJs", "utf8", "hex");
encrypted += cipher.final("hex");
console.log(encrypted);