
# inc guard //двойное подключение 
Во избежание ошибок при наложении заголовочных файлов используется **#include guard**, иначе называемая защитой подключения. Данная конструкция состоит из директив **#ifndef** и **#define**:

    #ifndef H_BMW     // Проверка наличия макроса H_BMW, а если его нет
    #define H_BWM     // То определяется макрос и подключается код
    int name() {
        // Исполняемый код...
    }
    #endif  // Граница исполняемого директивой #ifndef кода

Итак, если заголовочный файл был подключён, его повторное подключение не вызовет ошибки. Аналогично **#ifndef** используется **#pragma once**:
    
    #pragma once // Определяется только в начале
    int name() {
        // Исполняемый код...
    }

Следующий фрагмент кода на языке Си демонстрирует потенциальные проблемы, которые могут возникнуть, если пропустить #include guards:
```C++
Файл grandfather.h
 struct foo {
     int member;
 };
Файл father.h
 #include "grandfather.h"
 
Файл child.c
 #include "grandfather.h"
 #include "father.h"
Здесь к файлу «child.c» напрямую подключаются две копии заголовочного файла «grandfather.h». Это может вызвать ошибку компиляции, так как структура типа foo явным образом определяется дважды.

Применение #include guards
Файл grandfather.h
 #pragma once
 #ifndef H_GRANDFATHER
 #define H_GRANDFATHER

 struct foo
 {
     int member;
 };

 #endif
Файл father.h
 #include "grandfather.h"
Файл child.c
 #include "grandfather.h"
 #include "father.h"
 ```
В данном примере первое включение файла «grandfather.h» делает идентификатор макроса H_GRANDFATHER определённым. Далее, когда к «child.c» подключается «grandfather.h» второй раз, проверка этого идентификатора на неопределенность директивой #ifndef не проходит, и препроцессор пропускает всё вплоть до директивы #endif, таким образом избегая второго определения struct foo. В результате программа компилируется корректно. <br>

## pragma once 
Привеняется для тех- же целей

Источники: <br> 


- [Что такое защита подключения?](https://ru.wikipedia.org/wiki/Include_guard)
- [Что такое макрос?](https://www.opennet.ru/docs/RUS/cpp/cpp-5.html)
- [Для чего нужна директива #ifndef?](http://www.c-cpp.ru/books/ifdef-u-ifndef)
- [Для чего нужна директива #define?](http://www.c-cpp.ru/books/define)
- [Видео](https://www.youtube.com/watch?v=ZwaE-JM7smI&ab_channel=%23SimpleCode)
