#include <iostream>


int add(int x, int y) {

    return x + y;
}



int main() {

    std::cout << "OOP Calculator Application" << std::endl;
    int x, y;

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    int sum = add(x, y);

    printf("Sum = %d", sum);
    return 0;
}
