#include <iostream>

int main(){

    int from;
    int to;
    int divider;

    std::cout << "[===================================================================]" << '\n';

    std::cout << "from what number do you want to look: ";
    std::cin >> from;
    std::cout << "to what number do you want to look: ";
    std::cin >> to;
    std::cout << "you want to look for numbers divisible by: ";
    std::cin >> divider;

    if(to >= 2147483647 || from <= -2147483647){
        throw std::runtime_error("range is to big");
    }
    if(from > to){
        throw std::runtime_error("invalid range");
    }

    for(int i = from; i <= to; i++){

        if(i % divider == 0){
            std::cout << i << '\n';
        }
    }

    std::cout << "[===================================================================]" << '\n';

    return 0;
}