#include "Cat.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;


    Cat::Cat() {
        name = "Unnamed";
        age = 1;
        weight = 1.0;
        satiety = 100; // Начальный уровень сытости
    }

    void Cat::SetName(const string& catName) {
        name = catName;
    }

    void Cat::SetAge(int catAge) {
        age = catAge;
    }

    void Cat::SetWeight(float catWeight) {
        weight = catWeight;
    }

    // Другие сеттеры для характеристик котика

    void Cat::About() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << " год(а)" << endl;
        cout << "Вес: " << weight << " кг" << endl;
        cout << "Уровень сытости: " << satiety << "%" << endl;
    }

    void Cat::SleepCat() {
        cout << name << " спит..." << endl;
        satiety -= 5; // Уровень сытости уменьшается во время сна
        Sleep(2000); // Имитация сна
    }

    void Cat::Walk() {
        cout << name << " идет на прогулку..." << endl;
        satiety -= 10; // Уровень сытости уменьшается во время прогулки
        weight -= 0.1; // Вес уменьшается во время активности
        Sleep(3000); // Имитация прогулки
    }

    void Cat::Play() {
        cout << name << " играет с мячом..." << endl;
        satiety -= 15; // Уровень сытости уменьшается во время игры
        weight -= 0.2; // Вес уменьшается во время активности
        Sleep(2000); // Имитация игры
    }

    void Cat::Hunt() {
        cout << name << " выходит на охоту..." << endl;
        satiety -= 20; // Уровень сытости уменьшается во время охоты
        weight -= 0.3; // Вес уменьшается во время активности
        Sleep(4000); // Имитация охоты
    }

    void Cat::Eat() {
        cout << name << " кушает..." << endl;
        satiety += 30; // Уровень сытости увеличивается после еды
        weight += 0.15; // Вес увеличивается после еды
        Sleep(1500); // Имитация приема пищи
    }
