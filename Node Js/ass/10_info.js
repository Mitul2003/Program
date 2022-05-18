function basic() {  
    var id=1001,name="abc";
    console.log("ID: ",id);
    console.log("Name: ",name);
}
function subject() {
    var s1=25,s2=10,s3=30;
    if(s1+s2+s3>70)
    console.log("Pass");
    else
    console.log("Fail");
  }
  module.exports.basic=basic;
  module.exports.subject=subject;