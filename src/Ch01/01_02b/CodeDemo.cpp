// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// #include <iostream>

// int main(){
//     std::cout << "Hello world" << std::endl;
//     std::cout << std::endl << std::endl;

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////

// #include <iostream>

// int add(int a, int b){
//     return a + b;
// }

// int main(){
//     int result = add(5,3);
//     std::cout << "The sum is " << result << std::endl;
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age ";
    std::cin >> age;
    std::cout << "Your age is " << age << std::endl;
    return 0;
}