#include "Lion.h"

using namespace std;


    Lion::Lion() {
        name = "Unnamed";
        age = 5;
        weight = 180.0;
        satiety = 80; // Начальный уровень сытости
    }

    void Lion::SetName(const string& lionName) {
        name = lionName;
    }

    void Lion::SetAge(int lionAge) {
        age = lionAge;
    }

    void Lion::SetWeight(float lionWeight) {
        weight = lionWeight;
    }

    // Другие сеттеры для характеристик льва

    void Lion::About() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << " год(а)" << endl;
        cout << "Вес: " << weight << " кг" << endl;
        cout << "Уровень сытости: " << satiety << "%" << endl;
    }

    void Lion::SleepLion() {
        cout << name << " спит..." << endl;
        satiety -= 10; // Уровень сытости уменьшается во время сна
        Sleep(4000); // Имитация сна
    }

    void Lion::Roar() {
        cout << name << " рычит..." << endl;
        satiety -= 5; // Уровень сытости уменьшается во время рычания
        Sleep(3000); // Имитация рычания
    }

    void Lion::Eat() {
        cout << name << " кушает..." << endl;
        satiety += 40; // Уровень сытости увеличивается после еды
        weight += 5.0; // Вес увеличивается после еды
        Sleep(2000); // Имитация приема пищи
    }
