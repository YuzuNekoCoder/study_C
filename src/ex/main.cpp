#include <iostream>
#include "Person.h"

// using namespace MyApp;

int main()
{

    MyApp::Person::setName("Static Alice");
    MyApp::Person::age = 40;

    std::cout << "Name: " << MyApp::Person::getName() << std::endl;
    std::cout << "Age: " << MyApp::Person::age << std::endl;

    return 0;

    // クラスインスタンスを生成する方法
    // Person p;
    // p.setName("Alice");
    // p.age = 30; // ← public変数なので直接アクセスできる

    // std::cout << "Name: " << p.getName() << std::endl;
    // std::cout << "Age: " << p.age << std::endl;

    // return 0;

    // 直接インスタンスを生成せずに、sharedPersonを使う
    // MyApp::sharedPerson.setName("Shared Alice");
    // MyApp::sharedPerson.age = 25;

    // std::cout << "Name: " << MyApp::sharedPerson.getName() << std::endl;
    // std::cout << "Age: " << MyApp::sharedPerson.age << std::endl;
}