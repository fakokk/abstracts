//выполнила Фролова Анастасия ВМК-20

//класс музыкальных инструментов (базовый)
//файл с реализацией методов класса

#include <iostream>
#include "musical_instruments.h"

using namespace std;

//конструктор по умолчанию
Instrument::Instrument()
{
    name = " - ";       //название
    producer = " - ";   //производитель
    price = 0;         //цена
    weight = 0;
}

//конструктор с параметрами
Instrument::Instrument(string n, string prod, int prc, int w)
{
    if (!n.empty())
        {name = n;}
    else
        {throw invalid_argument("Invalid name ");}

    if (!prod.empty())
        {producer = prod;}
    else
        {throw invalid_argument("Invalid producer ");}

    if (prc > 0)
        {price = prc;}
    else
        {throw invalid_argument("Invalid price ");}

    if (w > 0)
        {price = w;}
    else
        {throw invalid_argument("Invalid weight ");}

}

//геттеры и сеттеры для названия
string Instrument::get_name() {return name;};
void Instrument::set_name(string s)
{
    if (!s.empty())
        {name = s;}
    else
        {throw invalid_argument("Invalid name ");}
}

//геттер и сеттер для производителя
string Instrument::get_producer() {return producer;};
void Instrument::set_producer(string s)
{
    if (!s.empty())
        {producer = s;}
    else
        {throw invalid_argument("Invalid producer ");}
}

//геттер и сеттер для цены
int Instrument::get_price() {return price;};
void Instrument::set_price(int s)
{
    if (s > 0)
        {price = s;}
    else
        {throw invalid_argument("Invalid price ");}
}

int Instrument::get_weight() {return price;};
void Instrument::set_weight(int s)
{
    if (s > 0)
        {weight = s;}
    else
        {throw invalid_argument("Invalid weight ");}
}

void Instrument::add_price(int p)
{
    if (price + p > 0)
        {price += p;}
    else
        {throw invalid_argument("Invalid price ");}
}

void Instrument::sub_price(int p)
{
    if (price - p > 0)
        {price -= p;}
    else
        {throw invalid_argument("Invalid price ");}
};

string Instrument::to_string()
{
    string full = "Название: " + name + "\n"
        + "Производитель: " + producer + "\n"
        + "Цена: " + std::to_string(price);
    return full;
};
