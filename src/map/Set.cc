// std::set はキーでソートしてデータを管理するのに対し、 std::unordered_set はキーから計算するハッシュと呼ばれる値でデータを管理します。
// キーの順番を保持したい場合を除いて、パフォーマンスは常に std::unordered_set の方が優れています。

#include <iostream>
#include <set>
#include <unordered_set>

int main()
{
    std::set<std::string> persons = {
        "Alice",
        "Bob"};

    std::unordered_set<std::string> persons2 = {
        "Alice",
        "Bob"};

    // 要素の追加
    persons.insert("Eve");

    // 要素の削除
    persons.erase("Bob");
}