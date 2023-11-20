
#include <iostream>
using namespace std;


//Задание 1
int wok1()
{
    setlocale(0, "");
    system("title Проверка таблицы умножения.");

    cout << "Введите первое число" << endl;
    int pere1;
    cin >> pere1;
    system("cls");

    cout << "Введите второе число" << endl;
    int pere2;
    cin >> pere2;
    system("cls");

    cout << "Введите ответ (Произведение 2-х чисел)" << endl;
    int pere3;
    cin >> pere3;
    system("cls");

    if (pere3 == pere1 * pere2)
    {
        cout << "Правильно! Ответ "<< pere3 << endl;
        system("pause");
        exit;
    }

    else
    {
        cout << "Ответ "<< pere3 << " неправильный!" << endl;
        cout << "Правильный ответ " << pere1 * pere2 << endl;
        system("pause");
        exit;
    }

    exit;
    return 0;
}

//Задание2
int wok2()
{
    setlocale(0, "");
    system("title Расписание на неделю");

    cout << "* Введите номер для недели *" << endl;
    cout << "[1] Понедельник" << endl;
    cout << "[2] Вторник" << endl;
    cout << "[3] Среда" << endl;
    cout << "[4] Четверг" << endl;
    cout << "[5] Пятница" << endl;
    cout << "[6] Суббота" << endl;
    cout << "[7] Воскресенье" << endl;
    int pere1;
    cin >> pere1;
    system("cls");

    switch (pere1) {

        case 1: 
            cout << "Матемтика" << endl;
            cout << "Физ-ра" << endl;
            cout << "основы проектирования БД" << endl;
            cout << "Архитектура аппаратных средств" << endl;
            cout << " " << endl;

            system("pause");
            system("cls");
            wok2();

        case 2:
            cout << "Физ-ра" << endl;
            cout << "Основы алгоритмизации и программирования" << endl;
            cout << "Основы проектирования БД" << endl;
            cout << " " << endl;

            system("pause");
            system("cls");
            wok2();

        case 3:
            cout << "Математика" << endl;
            cout << "Русский язык" << endl;
            cout << "Сетевое прораммирование" << endl;
            cout << "Основы проектирования БД" << endl;
            cout << "Физ-ра" << endl;
            cout << " " << endl;

            system("pause");
            system("cls");
            wok2();

        case 4:
            cout << "Основы алгоритмизации и программирования" << endl;
            cout << "Русский язык" << endl;
            cout << "Сетевое программирование" << endl;
            cout << "Английский язык" << endl;
            cout << " " << endl;

            system("pause");
            system("cls");
            wok2();

        case 5:
            cout << "История" << endl;
            cout << "Английский язык" << endl;
            cout << " " << endl;

            system("pause");
            system("cls");
            wok2();

        case 6:
            cout << "Нет пар" << endl;
            cout << "-" << endl;
            cout << "-" << endl;
            cout << "-" << endl;
            cout << " " << endl;

            system("pause");
            system("cls");
            wok2();

        case 7:
            cout << "Нет пар" << endl;
            cout << "-" << endl;
            cout << "-" << endl;
            cout << "-" << endl;
            cout << " " << endl;

            system("pause");
            system("cls");
            wok2();



        default:
            cout << "Похоже вы ввели неверную команду. Попробуйте еще раз" << endl;
            system("pause");
            system("cls");
            wok2();

    }



    exit;
    return 0;
}

int wok3()
{
    setlocale(0, "");
    system("title Сумма чётных чисел в массиве");
    
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    int num6 = 6;
    int num7 = 7;
    int num8 = 8;
    int num9 = 9;
    int num10 = 10;

    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        if ( num1% 2 != 0)
        {
            sum += num1;
            

        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num2 % 2 != 0)
        {
            sum += num2;


        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num3 % 2 != 0)
        {
            sum += num3;


        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num4 % 2 != 0)
        {
            sum += num4;


        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num5 % 2 != 0)
        {
            sum += num5;


        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num6 % 2 != 0)
        {
            sum += num6;


        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num7 % 2 != 0)
        {
            sum += num7;


        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num8 % 2 != 0)
        {
            sum += num8;


        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num9 % 2 != 0)
        {
            sum += num9;


        }
        else
        {
            //Место для вашей рекламы.
        }
        if (num10 % 2 != 0)
        {
            sum += num10;


        }
        else
        {
            //Место для вашей рекламы.
        }
    }
    system("pause");
    cout << "Сумма нечетных чисел равна : " << sum << endl;
    exit;
    return 0;
}



int main()
{
    setlocale(0, "");

    //wok1();
    //wok2();
    wok3;
}

