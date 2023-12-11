//A recursive function/calculates a factorial

#include <iostream>

int factorial(int num){
    if (num < 2) return 1;

    return num * factorial (num - 1);
}

int main() {

    int num;

    std::cout <<"Enter a number: " <<std::endl;
    std::cin >> num;

    std::cout << num << " is equal to " << factorial(num) <<std::endl;
   
    return 0;

}
