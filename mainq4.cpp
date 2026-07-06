#include <iostream>
#include <string>
#include "counter.h"

int main() {
    Counter counter;
    std::string answer;
    int initialValue;
    
    // Спрашиваем пользователя о начальном значении
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;
    
    // Приводим ответ к нижнему регистру для удобства сравнения
    for (char& c : answer) {
        c = tolower(c);
    }
    
    if (answer == "да" || answer == "yes" || answer == "д") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }
    // Если пользователь не хочет указывать, используем значение по умолчанию (1)
    
    char command;
    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
    
    // Цикл обработки команд
    while (std::cin >> command) {
        switch (command) {
            case '+':
                counter.increment();
                std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
                break;
                
            case '-':
                counter.decrement();
                std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
                break;
                
            case '=':
                std::cout << counter.getValue() << std::endl;
                std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
                break;
                
            case 'x':
                std::cout << "До свидания!" << std::endl;
                return 0;
                
            default:
                std::cout << "Неизвестная команда. Используйте '+', '-', '=' или 'x'" << std::endl;
                std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
                break;
        }
    }
    
    return 0;
}
