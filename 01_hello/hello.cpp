#include <iostream>

int main() {
    system("chcp 65001");
    std::cout << "hello" << std::endl;
    std::cout << "你好" << std::endl;

    int i = 20;
    int *p = &i;
    int t = *p;
    return 0;
}