#include <iostream>
using namespace std;

int fibonacciEvenSum(){
    unsigned int greatest = 89;
    unsigned int second = 55;
    unsigned int sum = 44;

    while(greatest <= 4000000){
        unsigned int newGreatest = greatest + sum;
        if(newGreatest % 2 == 0){
            sum += newGreatest;
        }
        second = greatest;
        greatest = newGreatest;
    }
    return sum;
};

int main(){
    cout << fibonacciEvenSum();
};

