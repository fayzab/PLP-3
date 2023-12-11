//A function that tests whether C++ is pass-by-reference or pass-by-value


#include <iostream>

void print(int &x);//Use & for Pass by refrence

int main() {
    int number = 50;
    std::cout << number << std::endl;
    print(number);
    std::cout << number << std::endl;

    return 0;
}

void print(int &x) { //Use & for Pass by refrence
    x = 5;
    std::cout << x << std::endl;
}

