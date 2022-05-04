#include <iostream>
#include <ctime>

using namespace std;

long calc()
{

    unsigned int start = clock();

    long a = 0;
    int b = 3;
    int c = 3;
    long repCount = 100000000;

    for (long i = 0; i < repCount; i++)
    {
        a += b * 2 + c - i;
    }

    unsigned int end = clock();
    int t = (end - start);

    cout << "Время работы программы на C++: " << t << " миллисекунд";
    cout << "Результат работы: " << a;

    return a;
}

int main()
{

    long s = calc();

    return 0;
}