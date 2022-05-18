const crypto=require('crypto');
var cipher=crypto.createCipher("aes192","a password");
var encrypted=cipher.update("ashvi shah");
encrypted+=cipher.final("hex");
console.log(encrypted);
var decipher=crypto.createDecipher("aes192","a password");
var decrypted=decipher.update(encrypted,"hex","utf-8");
decrypted+=decipher.final("utf-8");
console.log(decrypted);