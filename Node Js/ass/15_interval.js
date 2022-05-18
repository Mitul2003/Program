var a=0,b=1,c;
function fib() {
    c=a+b;

    console.log(c);
    a=b;
    b=c;
  }
  var s = setInterval(fib,1000);
  setTimeout(() => {
    clearInterval(s)
  }, 4000);
