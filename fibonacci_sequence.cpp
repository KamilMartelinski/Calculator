#include <iostream>

int main(){

    std::cout << "[===================================================================]" << '\n';

    int iterations;
    //getting user input
    std::cout << "how many iterations do you want to go thro: ";
    std::cin >> iterations;

    int first = 1;
    int secund = 0;
    int temp = 0;
    //edge cases
    if(iterations >= 1){
        std::cout << "1." <<secund << '\n';
    }
    if(iterations >= 2){
        std::cout << "2." << first << '\n';
    }

    if (iterations >= 3){//getting output

        for(int i = 3; i <= iterations; i++){
            temp = first;
            first = first + secund;
            secund = temp;
            std::cout << i << "." << first << "\n";//output
        }
    }

    std::cout << "[===================================================================]" << '\n';

    return 0;
}