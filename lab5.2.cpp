#include <iostream >
#include <string>
#include <Windows.h>

using namespace std;
string chislo(int x)

{

    if (x < 0)

        return "минус " + chislo(-x);

    if (x == 100)

        return "сто";

    switch (x)

    {

    case 0: return "ноль";

    case 1: return "один";

    case 2: return "два";

    case 3: return "три";

    case 4: return "четыре";

    case 5: return "пять";

    case 6: return "шесть";

    case 7: return "семь";

    case 8: return "восемь";

    case 9: return "девять";

    case 10: return "десять";

    case 11: return "одиннадцать";

    case 12: return "двенадцать";

    case 13: return "тринадцать";

    case 14: return "четырнадцать";

    case 15: return "пятнадцать";

    case 16: return "шестнадцать";

    case 17: return "семнадцать";

    case 18: return "восемнадцать";

    case 19: return "девятнадцать";

    }

    if (x >= 20 && x <= 29)

    {

        if (x == 20) return "двадцать";

        return "двадцать " + chislo(x % 10);

    }

    if (x >= 30 && x <= 39)

    {

        if (x == 30) return "тридцать";

        return "тридцать " + chislo(x % 10);

    }

    if (x >= 40 && x <= 49)

    {

        if (x == 40) return "сорок";

        return "сорок " + chislo(x % 10);

    }

    if (x >= 50 && x <= 59)

    {

        if (x == 50) return "пятьдесят";

        return "пятьдесят " + chislo(x % 10);

    }

    if (x >= 60 && x <= 69)

    {

        if (x == 60) return "шестьдесят";

        return "шестьдесят " + chislo(x % 10);

    }

    if (x >= 70 && x <= 79)

    {

        if (x == 70) return "семьдесят";

        return "семьдесят " + chislo(x % 10);

    }

    if (x >= 80 && x <= 89)

    {

        if (x == 80) return "восемьдесят";

        return "восемьдесят " + chislo(x % 10);

    }

    if (x >= 90 && x <= 99)

    {

        if (x == 90) return "девяносто";

        return "девяносто " + chislo(x % 10);

    }
    return "Число вне диапозона";
}

    int main()
    {

        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        int a, b;

        cout << "Введите целое число: ";
        cin >> a;

        cout << "Введите целое число: ";
        cin >> b;
        
        if (a < -100 || a > 100 || b < -100 || b > 100)

        {
            cout << "Ошибка! Одно из чисел вне диапазона.";
            return 0;
        }

        if (a > b)
        {
            cout << chislo(a) << " больше " << chislo(b);
        }
        else if (a < b)
        {
            cout << chislo(a) << " меньше " << chislo(b);
        }
        else
        {
            cout << chislo(a) << " равно " << chislo(b);
        }
        return 0;
    }