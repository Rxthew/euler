
function sumMultiples (){
    const threshold = 1000;
    let sum = 0;
    for(let i = 0;i<threshold;i++){
        if(i % 3 === 0 || i % 5 === 0){
            sum += i 
        }
    }
    return sum
}
console.log(sumMultiples())

