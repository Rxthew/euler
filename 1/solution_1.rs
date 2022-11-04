fn sum_multiples() -> u32{
    const _THRESHOLD: u32 = 1000;
    let mut sum = 0u32;
    for i in 1.._THRESHOLD{
       if i % 3 == 0 || i % 5 == 0{
            sum += i
       }
    }
    sum

}

fn main(){
    println!("{}", sum_multiples())
    
}