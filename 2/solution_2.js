const fibonacciEvenSum = function(){
    let greatestNumber = 89;
    let second = 55;
    let sum = 44;
    while(greatestNumber <= 4000000){
        let newGreatest = greatestNumber + second;
        if(newGreatest % 2 === 0){
            sum += newGreatest
        }
        second = greatestNumber
        greatestNumber = newGreatest
    }
    return sum
}

console.log(fibonacciEvenSum())