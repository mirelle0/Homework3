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