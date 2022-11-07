package main

import "fmt"

func sumMultiples() int {
	const threshold = 1000
	var sum = 0
	for i := 0; i < threshold; i++ {
		if i% 3 == 0 || i%5 == 0 {
			sum += i
		}
	}
	return sum 
}

func main(){
	fmt.Println(sumMultiples())
}