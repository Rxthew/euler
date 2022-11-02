#include <iostream>

using namespace std;

int main () {
    const unsigned int threshold = 1000;
    unsigned int sum = 0;
    for(int i = 0;i<1000;++i){
        if(i % 3 == 0 || i % 5 == 0){
            sum = sum + i;

        }
    }
    cout << sum;

    return 0;
    } 