// タプル

#include <string>
#include <iostream>
#include <utility>

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

    // ペア utilityのinclude必要
    // タプル同様まとめて取り扱うことが可能

    std::pair<std::string, int> personalInfo{"Bob", 20};

    // 参照方法は以下のどちらか
    auto get0 = std::get<0>(personalInfo); // "Bob"
    auto get1 = std::get<1>(personalInfo); // 20

    auto personalFirst = personalInfo.first;   // "Bob"
    auto personalSecond = personalInfo.second; // 20

    std::cout << "name =" << get0 << " " << "age =" << get1 << std::endl;
    std::cout << "name =" << personalFirst << " " << "age =" << personalSecond << std::endl;

    // 初期化のバリエーション
    // std::pair<std::string, int> person{"Bob", 20};
    // std::pair<std::string, int> person("Bob", 20);
    // std::pair<std::string, int> person = std::make_pair("Bob", 20);

    // まとめて代入
    // std::tie() を使用

    // std::pair<std::string, int> person{"Bob", 20};

    // std::string name;
    // int age;

    // std::tie(name, age) = person; // name: "Bob", age: 20

    return 0;
}