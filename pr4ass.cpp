#include <iostream>
#include <ctime>

using namespace std;

long calc()
{

    unsigned int start = clock();

    float a = 0;
    int b = 3;
    int c = 3;
    long repCount = 100000000;
    long res = 0;

    for (long i = 0; i < repCount; i++)
    {
        res = 0;
        __asm {
                MOV AX, 0
                MOV BX, b
                SHL BX, 1
                MOV DX, j
                MOV ECX, counter
                L1:
                    ADD AX, BX
                    ADD AX, c
                    SUB AX, DX
                    LOOP L1
                MOV res, AX
        }
        a += res;
    }

    unsigned int end = clock();
    int t = (end - start);

    cout << "Время работы программы на C++: " << t << " миллисекунд ";
    cout << "Результат работы: " << a;

    return a;
}

int main()
{

    long s = calc();

    return 0;
}