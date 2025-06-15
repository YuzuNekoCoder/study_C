#include <iostream>

template <typename T>
using vec = std::vector<T>; // using 型の名前を変えることができる

struct Person2
{
    int age;
    int heigth;
    int weight;
};

int divide(int a, int b, int *ptr)
{
    int ret = a / b;
    // 値の書き換え(amari)
    *ptr = a % b;
    return ret;
}

void func(int *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        // char a = *(array + i);
        // arrayを配列として扱う
        int a = array[i];
        std::cout << "array = " << a << std::endl;
    }
}

void clearPerson(Person2 *ptr)
{
    ptr->age = 0;
    ptr->heigth = 0;
    ptr->weight = 0;
}

int main()
{

    // 構造体
    struct Person
    {
        int age;
        long heigth;
        short weight;
    };

    struct Point
    {
        int x;
        int y;
    };

    // 構造体の配列
    Point pt[] = {
        {10, 20}, // pt[0]
        {30, 40}, // pt[1]
        {50, 60}, // pt[2]
    };

    // 構造体の変数宣言
    Person taro;
    Person hanako;
    Person2 bob;

    taro.age = 20;
    taro.heigth = 170;
    taro.weight = 60;

    // ポインタ
    // 変数の型 *変数名;
    int num = 120;
    // ポインタ変数の作成
    int *ptr;
    // 変数のアドレスを取得（値ではなく場所）
    ptr = &num;

    // 変数のアドレスを渡し、値を書き換える
    int amari;
    int answer = divide(10, 3, &amari);

    // ポインタの配列操作
    int data[] = {11, 12, 13, 14, 15};
    // char *ptr = &data[0]; // 先頭アドレスの取得 0番目のアドレス
    // int *top = data; // 先頭アドレスの取得 こちらの方が一般的

    // 配列の先頭アドレスを渡せば配列として扱うことができる
    func(data, 5);

    // 構造体のポインタ
    bob.age = 20;
    bob.heigth = 170;
    bob.weight = 60;
    std::cout << "----------------------------------------------------------" << std::endl;
    std::cout << "age = " << bob.age << std::endl;
    std::cout << "height = " << bob.heigth << std::endl;
    std::cout << "weight = " << bob.weight << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;

    // 構造体のポインタの取り方
    // Person2 *ptr = &bob;
    // 構造体のポインタからメンバ変数へアクセスする（アロー演算子を使う）
    // ptr->age = 30;

    clearPerson(&bob);

    // 十進数
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    // 10

    // 二進数(2になったら桁上がりする)
    // 0, 1
    // 10, 11
    // 100, 101, 110, 111

    // 十進数を二進数に変換
    // 22 を変換
    // 二進数（割り算の答えが0になった時、余りを下から） : 10110
    // 22 / 2 = 11 ... 0
    // 11 / 2 = 5  ... 1
    //  5 / 2 = 2  ... 1
    //  2 / 2 = 1  ... 0
    //  1 / 2 = 0  ... 1

    // 十六進数(16になったら桁が上がる)
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f
    // 10

    // 十進数を十六進数に変換
    // 22 を変換
    // 十六進数：16
    // 22 / 16 = 1 ... 6
    //  1 / 16 = 0 ... 1

    std::cout << "----------------------------------------------------------" << std::endl;
    std::cout << "age = " << taro.age << std::endl;
    std::cout << "height = " << taro.heigth << std::endl;
    std::cout << "weight = " << taro.weight << std::endl;
    std::cout << "pt0 = " << pt << std::endl;
    // アドレスの参照
    std::cout << "ptr = " << ptr << std::endl;
    // 値の参照
    std::cout << "ptr = " << *ptr << std::endl;
    // 値の書き換え
    *ptr = 30;
    std::cout << "ptr = " << *ptr << std::endl;

    std::cout << "answer = " << answer << std::endl;
    std::cout << "amari = " << amari << std::endl;

    std::cout << "Hello World" << std::endl;

    std::cout << "age = " << bob.age << std::endl;
    std::cout << "height = " << bob.heigth << std::endl;
    std::cout << "weight = " << bob.weight << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;
    return 0;
}