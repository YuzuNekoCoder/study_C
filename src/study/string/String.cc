// 文字列の扱い方
// std::string の型を使用

#include <string>
#include <iostream>

int main()
{

    std::string str = "Hello";
    std::string str2 = "World";

    auto size = str.size();

    std::cout << str << " " << str2 << std::endl;
    std::cout << "size = " << size << std::endl;
    std::cout << "1 = " << str[0] << std::endl;
    std::cout << "2 = " << str[1] << std::endl;
    std::cout << "3 = " << str[2] << std::endl;
    std::cout << "4 = " << str[3] << std::endl;
    std::cout << "5 = " << str[4] << std::endl;

    return 0;
}