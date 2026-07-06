#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>

class Counter {
private:
    int value; // приватное поле для хранения значения счётчика

public:
    // Конструктор по умолчанию (начальное значение 1)
    Counter();
    
    // Конструктор с параметром (инициализация начальным значением)
    Counter(int initialValue);
    
    // Метод для увеличения на 1
    void increment();
    
    // Метод для уменьшения на 1
    void decrement();
    
    // Метод для получения текущего значения
    int getValue() const;
};

#endif // COUNTER_H
