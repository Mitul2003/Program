    const add = (a,b) => {
    return a+b;
}

const sub = (a,b) => {
    return a-b;
}

class redy{
    constructor(){
        console.log("class");
    }
    get()
    {
        console.log("class Function");
    }
}

const name = "Mitul";

// module.exports.add = add;
// module.exports.sub = sub;

module.exports = {add , sub , name , redy}