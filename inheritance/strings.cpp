//выполнила Фролова Анастасия, ВМК-20

//класс струнных инструментов
//файл с реализацией методов класса

#include <iostream>
#include "strings.h"

Strings::Strings()
{
    n_strings = 0;        //количество струн
    n_fret = 0;    //количество ладов
    material_string = " - ";          //материал струн (металл, нейлон, ...)
}

Strings::Strings(int s, int f, string m)
{
    if (s > 0)
        {n_strings = s;}
    else
        {throw invalid_argument("Invalid n_strings ");}

    if (f > 0)
        {n_fret = f;}
    else
        {throw invalid_argument("Invalid n_fret ");}

    if (!m.empty())
        {material_string = m;}
    else
        {throw invalid_argument("Invalid material_string ");}
}

//геттер и сеттер для количества струн
int Strings::get_n_strings() {return n_strings;};
void Strings::set_n_strings(int s)
{
    if (s > 0)
        {n_strings = s;}
    else
        {throw invalid_argument("Invalid n_strings ");};
};

//геттер и сеттер для количества ладов
int Strings::get_n_fret() {return n_fret;};
void Strings::set_n_fret(int s)
{
    if (s > 0)
        {n_fret = s;}
    else
        {throw invalid_argument("Invalid n_fret ");};
};

//геттер и сеттер для производителя
string Strings::get_material_string() {return material_string;};
void Strings::set_material_string(string s)
{
    if (!s.empty())
        {material_string = s;}
    else
        {throw invalid_argument("Invalid material_string ");}
}

//перевод в строку
string Strings::to_string()
{
    string full = Instrument::to_string() + "\n" +
                  "Количество струн: " + std::to_string(n_strings) + "\n" +
                  "Количество ладов: " + std::to_string(n_fret) + "\n" +
                  "Материал струн: " + material_string;

    return full;
}
