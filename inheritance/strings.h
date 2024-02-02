//выполнила Фролова Анастасия, ВМК-20

//класс струнных инструментов
//заголовочный файл

#pragma once
#include <iostream>
#include "musical_instruments.h"

using namespace std;

class Strings: public Instrument//класс струнных инструментов
{
private:
    int  n_strings;             //количество струн
    int  n_fret;                //количество ладов
    string material_string;     //материал струн (металл, нейлон, ...)

public:
    //конструкторы
    Strings();
    Strings(int, int, string);

    //сеттеры и геттеры
    int get_n_strings();
    void set_n_strings(int);

    int get_n_fret();
    void set_n_fret(int);

    string get_material_string();
    void set_material_string(string);

    string to_string();     //перевод в строку

};
