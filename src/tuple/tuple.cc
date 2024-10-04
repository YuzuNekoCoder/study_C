// タプル

#include <string>
#include <iostream>

int main()
{
    // タプル
    std::tuple<std::string, int> person1{"Bob", 20};
    std::tuple<std::string, int> person2("Mike", 21);
    std::tuple<std::string, int> person3 = std::make_tuple("Anna", 19);

    std::cout << "name =" << std::get<0>(person1) << " " << "age =" << std::get<1>(person1) << std::endl;

    // まとめて代入する
    std::tuple<std::string, int, std::string> person{"Tom", 20, "USA"};

    std::string name;
    int age;
    std::string country;

    std::tie(name, age, country) = person; // name: "Bob", age: 20, country: "USA"

    std::cout << "name =" << std::get<0>(person) << " " << "age =" << std::get<1>(person) << " " << "country =" << std::get<2>(person) << std::endl;

    return 0;
}