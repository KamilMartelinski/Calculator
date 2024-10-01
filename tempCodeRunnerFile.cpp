

    int iterations;

    std::cout << "how many iterations do you want to go thro: ";
    std::cin >> iterations;

    int first = 1;
    int secund = 0;
    int temp = 0;

    for(int i = 0; i <= iterations - 2; i++){

        if(temp == 0){
            std::cout << secund << "\n";
            std::cout << first << "\n";
        }
        temp = first;
        first = first + secund;
        secund = temp;

        std::cout << first << "\n";
    }

    std::cout << "[===================================================================]" << '\n';