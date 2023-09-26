#include "Fish.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;


    Fish::Fish() {
        name = "Unnamed";
        age = 2;
        weight = 0.1;
        satiety = 95; // Начальный уровень сытости
    }

    void Fish::SetName(const string& fishName) {
        name = fishName;
    }

    void Fish::SetAge(int fishAge) {
        age = fishAge;
    }

    void Fish::SetWeight(float fishWeight) {
        weight = fishWeight;
    }

    // Другие сеттеры для характеристик рыбы

    void Fish::About() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << " год(а)" << endl;
        cout << "Вес: " << weight << " кг" << endl;
        cout << "Уровень сытости: " << satiety << "%" << endl;
    }

    void Fish::Swim() {
        cout << name << " плавает..." << endl;
        satiety -= 4; // Уровень сытости уменьшается во время плавания
        weight -= 0.01; // Вес уменьшается во время активности
        Sleep(1000); // Имитация плавания
    }

    void Fish::Eat() {
        cout << name << " кушает..." << endl;
        satiety += 10; // Уровень сытости увеличивается после еды
        weight += 0.03; // Вес увеличивается после еды
        Sleep(1000); // Имитация приема пищи
    }
