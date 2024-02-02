//выполнила Фролова Анастасия, ВМК-20

//класс музыкальных инструментов (базовый)
//заголовочный файл

#pragma once
#include <iostream>
using namespace std;

class Instrument
{
private:
    string name;        //название
    string producer;    //производитель
    int price;          //цена
    int weight;         //вес

public:
    //конструкторы
    Instrument();
    Instrument(string, string, int, int);

    //сеттеры и геттеры
    string get_name();
    void set_name(string);

    string get_producer();
    void set_producer(string);

    int get_price();
    void set_price(int);

    int get_weight();
    void set_weight(int);

    //изменение цены
    void add_price(int p);
    void sub_price(int p);

    //перевод в строку
    virtual string to_string();

};
