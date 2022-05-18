var nodemailer = require("nodemailer");
var transporter = nodemailer.createTransport({
    service:'gmail',
    auth:{
        user:'mituldudhat43@gmail.com',
        pass:'Mitul@12345'
    }
})


// send out mail
var mailoptions = {
    from:'mituldudhat43@gmail.com',
    to:'mituldudhat42@gmail.com',
    subject:'this is test mail for node js',
    Text:'hello How Are you...!!!'
    
}

transporter.sendMail(mailoptions, (err,info) => {
    if(err) console.log(err);
    else console.log("Email Sent : " + info.response);
})