#include "Person.h"

namespace MyApp
{

    // staticメンバ変数の定義（必須）
    // コンストラクタとかで定義すればOK
    std::string Person::name = "";
    int Person::age = 0;

    void Person::setName(const std::string &n)
    {
        name = n;
    }

    std::string Person::getName()
    {
        return name;
    }

    // 共有インスタンスの定義（1回だけ）
    // Person sharedPerson;
}