function ispalindrome() 
  { 
    var n=121;
    var temp=n;
    var r,rev=0;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n/=10;   
    }
    if(temp==rev)
    console.log("palindrome");
    else
    console.log("Not Palindrome");

  }
console.time();
ispalindrome();
console.timeEnd();