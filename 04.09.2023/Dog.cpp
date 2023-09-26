#include "Dog.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

    Dog::Dog() {
        name = "Unnamed";
        age = 1;
        weight = 5.0;
        satiety = 80; // Начальный уровень сытости
    }

    void Dog::SetName(const string& dogName) {
        name = dogName;
    }

    void Dog::SetAge(int dogAge) {
        age = dogAge;
    }

    void Dog::SetWeight(float dogWeight) {
        weight = dogWeight;
    }

    // Другие сеттеры для характеристик собаки

    void Dog::About() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << " год(а)" << endl;
        cout << "Вес: " << weight << " кг" << endl;
        cout << "Уровень сытости: " << satiety << "%" << endl;
    }

    void Dog::SleepDog() {
        cout << name << " спит..." << endl;
        satiety -= 5; // Уровень сытости уменьшается во время сна
        Sleep(2000); // Имитация сна
    }

    void Dog::Walk() {
        cout << name << " идет на прогулку..." << endl;
        satiety -= 8; // Уровень сытости уменьшается во время прогулки
        weight -= 0.2; // Вес уменьшается во время активности
        Sleep(3000); // Имитация прогулки
    }

    void Dog::Play() {
        cout << name << " играет с мячом..." << endl;
        satiety -= 12; // Уровень сытости уменьшается во время игры
        weight -= 0.3; // Вес уменьшается во время активности
        Sleep(2000); // Имитация игры
    }

    void Dog::Eat() {
        cout << name << " кушает..." << endl;
        satiety += 25; // Уровень сытости увеличивается после еды
        weight += 0.2; // Вес увеличивается после еды
        Sleep(1500); // Имитация приема пищи
    }
