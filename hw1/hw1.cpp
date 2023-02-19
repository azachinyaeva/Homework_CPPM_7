#include <iostream>
#define MODE 1
#ifndef MODE
#error You need to define MODE
#endif

int main()
{
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки \n";
#elif MODE == 1
    std::cout << "Работаю в боевом режиме \n";
    int x, y;
    std::cout << "Введите число 1: ";
    std::cin >> x;
    std::cout << "Введите число 2: ";
    std::cin >> y;
    int sum(int x, int y);
    std::cout << "Результат сложения: " << sum(x, y);

#else 
    std::cout << "Неизвестный режим. Завершение работы \n";
#endif
}

int sum(int x, int y) {
    return x + y;
}

