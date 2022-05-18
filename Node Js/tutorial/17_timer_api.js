//**** */ settimeuot => dalay the function after given second

// setTimeout(() => {
//     console.log("heeoll word..")
// }, 4000);

// const myfun = () => {
//     console.log("delay in 4sec ...")
// }
// setTimeout(myfun,4000)

// const myfun = (peramitar1,per2) => {
//     console.log(peramitar1 + " delay in 4sec ... " + per2)
// }
// setTimeout(myfun,4000,"first","second")


// **************//

//  var timeout = setTimeout(()=> {
//     console.log("Run  1 sec..");
// },4000)                       // 4 sec dealy
// setTimeout(()=>{
//     clearTimeout(timeout)    // 1 sec ma j object remove kari dey che
// },1000)



// *** setintarval => like loop

// setInterval(() => {
//     console.log("hello every 4")
// },4000)

// var clear = setInterval(() => {
//     console.log("hello world..")
// },1000)
// setTimeout(() => {
//     clearInterval(clear)  // clear interval(interval no object)
// },5000)

// // *** setimmediate   => Excute given function immediat
setImmediate(()=> {
    console.log("hello world")
})
