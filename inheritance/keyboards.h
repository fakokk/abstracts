//выполнила Фролова Анастасия, ВМК-20

//класс клавишных инструментов
//заголовочный файл

#pragma once
#include <iostream>
#include "musical_instruments.h"

using namespace std;

class Keyboard: public Instrument //класс струнных инструментов
{
private:
    int n_key;          //количество клавиш
    bool electricity;   //возможность подключения к сети
    bool pedal;         //наличие педали
public:

    //конструкторы
    Keyboard();
    Keyboard(int, bool, bool);

    //сеттеры и геттеры
    int get_n_key();
    void set_n_key(int);

    bool get_el();
    void set_el(bool);

    bool get_pedal();
    void set_pedal(bool);

    string capability(bool); //вспомогательная функция для перевода в строку
    string to_string();      //перевод в строку

};

