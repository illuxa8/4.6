// Lab_04_6.cpp
// Мельничук Ілля
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 15
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double result = 0;
    cout << "For(++):" << endl;
    for (int n = 1; n <= 18; n++)
    {
        for (int k = n; k <= 20; k++)
        {
            result += sqrt(abs(1 - k / n)) / 2 * pow(n, 2) + pow(k, 2);
        }
    }
    cout << "Result = " << result << endl;
    result = 0;
    int n = 1;
    int k = 1;

    cout << "While:" << endl;
    while (n <= 18)
    {
        k = n;
        while (k <= 20)
        {
            result += sqrt(abs(1 - k / n)) / 2 * pow(n, 2) + pow(k, 2);
            k++;
        }
        n++;
    }
    cout << "Result = " << result << endl;

    result = 0;
    n = 1;
    k = 1;

    cout << "Do While:" << endl;
    do
    {
        k = n;
        do
        {
            result += sqrt(abs(1 - k / n)) / 2 * pow(n, 2) + pow(k, 2);
            k++;
        } while (k <= 20);
        n++;
    } while (n <= 18);
    cout << "Result = " << result << endl;

    result = 0;

    cout << "For(--):" << endl;
    for (int i = 18; i >= 1; i--)
    {
        for (int j = 20; j >= i; j--)
        {
            result += sqrt(abs(1 - j / i)) / 2 * pow(i, 2) + pow(j, 2);
        }
    }
    cout << "Result = " << result << endl;
    return 0;
}