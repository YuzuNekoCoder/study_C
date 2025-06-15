#ifndef PERSON_H
#define PERSON_H

#include <string>

namespace MyApp
{
    // extern Person sharedPerson; // グローバルにアクセスできるPersonインスタンスの宣言

    class Person
    {
    private:
        static std::string name;

    public:
        // int age; // ←はクラスのインスタンスを生成して参照する
        static int age; // staticなメンバ変数

        static void setName(const std::string &n);
        static std::string getName();
    };

} // namespace MyApp

#endif