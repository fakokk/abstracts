//выполнила Фролова Анастасия, ВМК-20

//класс клавишных инструментов
//файл с реализацией методов

#include "keyboards.h"

Keyboard::Keyboard()
{
    n_key = 0;          //количество клавиш
    electricity = 0;   //возможность подключения к сети
    pedal = 0;         //наличие педали
}

Keyboard::Keyboard(int n, bool e, bool p)
{
    if (n > 0)
        {n_key = n;}
    else
        {throw invalid_argument("Invalid n_key ");}

    if (e == 1 or e == 0 or e == false or e == true)
        {electricity = e;}
    else
        {throw invalid_argument("Invalid electricity ");}

    if (p == 1 or p == 0 or p == false or p == true)
        {pedal = p;}
    else
        {throw invalid_argument("Invalid pedal ");}

}

int Keyboard::get_n_key() {return n_key;};
void Keyboard::set_n_key(int s)
{
    if (s > 0)
        {n_key = s;}
    else
        {throw invalid_argument("Invalid n_key ");}
}

bool Keyboard::get_el() {return electricity;};
void Keyboard::set_el(bool e)
{
    if (e == 1 or e == 0 or e == false or e == true)
        {electricity = e;}
    else
        {throw invalid_argument("Invalid electricity ");}
}

bool Keyboard::get_pedal() {return pedal;};
void Keyboard::set_pedal(bool p)
{
    if (p == 1 or p == 0 or p == false or p == true)
        {pedal = p;}
    else
        {throw invalid_argument("Invalid pedal ");}
}

string Keyboard::capability(bool a)
{
    string f;
    if (a==1 or a==true)
        f = "да";
    else
        f = "нет";
    return f;
}

string Keyboard::to_string()
{
    string full = Instrument::to_string() + "\n" +
                  "Количество клавиш: " + std::to_string(n_key) + "\n" +
                  "Возможность подключения к сети: " + capability(electricity) + "\n" +
                  "Наличие педали: " + capability(pedal);

    return full;
}
