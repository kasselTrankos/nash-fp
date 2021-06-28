#include<stdio.h>
#include <iostream>
#include <functional>

// Getting the function reference using std::function<>
std::function<int(int)> add = [](int x)->int{ 
    return x + 1;
};
auto sum(int x) {
  return [=](int y) {
    return x + y;
  };
}
auto func = [] () { std::cout << "Hello world lambda" << std::endl; };
/* demo.c:  My first C program on a Linux */
int main(void)
{
    std::cout << "Hello! This is a test prgoram.\n" << std::endl;
    // Calling the lambda function here
    int retLambda = add(10);
    int g = sum(1)(9);
    func();

    std::cout << retLambda <<std::endl;
    std::cout << sum(11)(9) <<std::endl;
 return 0;
}
