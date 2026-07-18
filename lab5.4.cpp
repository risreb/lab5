#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    string pol, znak;

    int vozrast;

    cout << "Введите пол: ";

    cin >> pol;

    cout << "Введите знак зодиака: ";

    cin >> znak;

    cout << "Введите возраст: ";

    cin >> vozrast;

    cout << "Ваше предсказание: ";

    if (pol == "мужчина" && (znak == "рак" || znak == "скорпион" || znak == "рыбы") && vozrast < 40)

    {

        cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";

    }

    else if (pol == "женщина" &&

        (znak == "телец" || znak == "дева" || znak == "козерог") &&

        vozrast >= 15 && vozrast <= 30)

    {

        cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.";

    }

    else

    {

        cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";

    }

    return 0;
}