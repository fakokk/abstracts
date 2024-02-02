//выполнила Фролова Анастасия, ВМК-20

//наследование показано на примере трёх классов
//тема - музыкальные инструменты
//базовый класс - музыкальные инструменты
//производные классы - струнные и клавишные

#include <iostream>
#include "musical_instruments.h"
#include "keyboards.h"
#include "strings.h"

using namespace std;

int main()
{
    setlocale(0, "");

    //создание объектов разных классов
    Instrument a("piano", "YAMAXA", 200, 35);   //вызов конструктора с параметрами
    Keyboard b;     //вызов конструктора без параметров
    Strings c;




    return 0;
}
