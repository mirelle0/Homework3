# Домашнее задание к работе 2

## Условие задачи

Написать и отладить программу стоимости поездки, исходя из известного расстояния и стоимости бензина.

## 1. Алгоритм и блок-схема

### Алгоритм
```
1. Начало.
2. Объявить константу fuel_consumption = 8 (л/100 км) — средний расход топлива автомобиля.
3. Ввести исходные данные:
   - distance — расстояние поездки (км).
   - fuel_price — стоимость 1 литра бензина (руб.).
4. Вычислить количество израсходованного топлива:
   fuel_used = distance * fuel_consumption / 100
5. Вычислить стоимость поездки:
   trip_cost = fuel_used * fuel_price
6. Вывести результаты расчётов с подстановкой всех значений в текст.
7. Конец.
```
### Блок-схема
Ссылка на блок-схему: https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=shema1.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22qFkHWc6aGw5R859BmC5K%22%3E7VvbbuM2EP2WPhhoCyjQ1XYebSfZdNEsig3aPha0RcvcUKKWomKnX7%2FDi2zRkTZyNgqwiRzAJmd4Ec8M54hDZBQs0t0HjvLNDYsxHfluvBsFFyPf90IvhB8pedCSSeRpQcJJbBodBLfkf2yErpGWJMaF1VAwRgXJbeGKZRleCUuGOGdbu9maUXvWHCX4keB2hehj6b8kFhstnUbuQX6NSbKpZvZco0lR1dgIig2K2bYmCi5HwYIzJnQp3S0wleBVuOh%2BVy3a%2FYNxnIkuHfLFbPbpI7relF9vP19eh8H2fuk0jGJEhXioMIBxAG6ozLcbIvBtjlZSswWLg2wjUgo1D4qwxBz%2FkRVgMiPRY90jWpqxjABzgXe1%2Bcwjf8AsxYI%2FQJNNDdWxgXB7sIBXWcCMElT1B9t%2FkLF%2Fsh%2F5ABEUDEonIOZ3QQwWJ2xompArBGd3eMEo4yDMWCYhXhNKj0SIkiSD6gpmxCCfS%2FgI%2BOjMKFISx3LqOWdlFmP5%2BG4j%2BCA%2Bv5Dfc3cEjzWdVGX4nqvvy2cZKHhsoPGRfc4jyz5%2B1JN9grfq0eOgL5cOf3aXnhnXld%2FavSPl3uNXcuZx2Jc3R11MY%2FurJhkJVoyKzR657ogrn5eCXSI5%2FUzTqK9%2F5bBy1e7ZWBYlIKGai3CgX8LkSAUrJXDzjInVptVwL7RtgsgyTehOLdNM%2Bto04y6WqaCEVohSTBkgmgIaOeYEHkPawdb9dVCcHprWZIerV6iXC1VhQ6iaHu2HwN4PXm%2BhavLzhKo1y0Q1FJVwOjHid7%2BOIL6oz8gHCIKrifz7rdlaYyrXUeQosxY4%2FlrKl0Y1g7NGKaGA%2Bwya3OCMMjWue8MytDLlBcsKRsEWqgb9USoBMKMsULFCMUG6EztWN3f6e1lmojypywX%2Bgv6RXW5RVpzU80%2ByxByp4HJKt49YzDkiJ052RThSmMG2auywYGVBwDMae39mSybYSRPCeJyAY%2FnuJ7xtnVI3kZUC4HMKiBNrU38oBE6dkqjmrnKKQgUB6RJekO%2B0Qu4KxzjzTPkT4noKV20Pp9D7Q%2Bpyjh2zTaC2RKu7RDm3s9IOLdsIDg9SbcT5wSuhlCjvLDH9D45lRZnmxnbKe2WA1o4NEUD7tu7wYtHp8YvU2WvFp%2Bk7ZoX9O32FuxfYr%2Fy9oX7%2BjlEPjt5N%2FdD29aA31Ksj9ruE3Z%2Fazr6vG9jD%2FmDvlLN5o7BHvu3t3sQ%2BJEf9wd4p8TMcxdqPYl5vZzGvU9JnsE27bfo7J3udskuDbdptE%2FRnmyG99IO2CfuzTacE02CbdttE%2Fdnm7aWh1Oe7aaic41FrFsqIZV4gYzxFtJaMuEecIAlTo1amKhwUfymLfQu13kpPUZaUKMEOgwVz9crZOM4d5hnJEq1FpWA1HcsVUnKutiZrjETJsVNgIaBN8b21SF9%2FqiGYFast0Lro4%2FwMJRl2Ko%2BXKnC%2BXf0Jh0TfkOirJfrkflhTGZZtd34imbdlPHaWHKM7rVVFB1HjnjmK4%2F0e8cYdkocp4gkxYhfa%2B%2B4vJM0ZF6glMaiu7NTF3dyvXdyFeoiYwNjZysCukog5J7K%2BTxqqSPQDOcOGC76nc1d93fB5nVKGA5cMXDJwycAlA5c0XDKVBUSo6nbpwB%2Fu7xWBHN1CQbyG55Hhqk9KeTox3xuldLoPGShloJSBUgZKGSjFphTBSQ6MAfu9opQ6yew55TUOJY%2FuGO1DSdgbg1S3bAODDAwyMMjAIAODPCfB5Y2m89PTXPu6dWrZSzUPyWqNqPpkocjzz2we8ibB2cQ%2BzETPoCKoHv77Selq%2F0MWXH4D%3C%2Fdiagram%3E%3C%2Fmxfile%3E

## 2. Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");

    float fuel_consumption = 8.0f;
    float distance;
    float fuel_price;
    float fuel_used;
    float trip_cost;

    printf("Введите расстояние поездки (в км): ");
    scanf("%f", &distance);

    printf("Введите стоимость 1 литра бензина (в руб.): ");
    scanf("%f", &fuel_price);

    fuel_used = distance * fuel_consumption / 100.0f;
    trip_cost = fuel_used * fuel_price;

    printf("Результаты:\n");
    printf("Расстояние поездки:        %.2f км\n", distance);
    printf("Расход топлива:            %.2f л/100 км\n", fuel_consumption);
    printf("Стоимость 1 литра бензина: %.2f руб.\n", fuel_price);
    printf("Израсходовано топлива:     %.2f л\n", fuel_used);
    printf("Стоимость поездки:         %.2f руб.\n", trip_cost);
}
```
### 3. Результаты работы программы
```
Введите расстояние поездки (в км): 150
Введите стоимость 1 литра бензина (в руб.): 55

--- Результаты ---
Расстояние поездки:        150.00 км
Расход топлива:            8.00 л/100 км
Стоимость 1 литра бензина: 55.00 руб.
Израсходовано топлива:     12.00 л
Стоимость поездки:         660.00 руб.
```
### 4. Информация о разработчике

Дегтярева Полина, бИЦТ-262
