#include "Parrot.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;


    Parrot::Parrot() {
        name = "Unnamed";
        age = 1;
        weight = 0.2;
        satiety = 90; // Начальный уровень сытости
    }

    void Parrot::SetName(const string& parrotName) {
        name = parrotName;
    }

    void Parrot::SetAge(int parrotAge) {
        age = parrotAge;
    }

    void Parrot::SetWeight(float parrotWeight) {
        weight = parrotWeight;
    }

    // Другие сеттеры для характеристик попугая

    void Parrot::About() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << " год(а)" << endl;
        cout << "Вес: " << weight << " кг" << endl;
        cout << "Уровень сытости: " << satiety << "%" << endl;
    }

    void Parrot::SleepParrot() {
        cout << name << " спит..." << endl;
        satiety -= 5; // Уровень сытости уменьшается во время сна
        Sleep(2000); // Имитация сна
    }

    void Parrot::Speak() {
        cout << name << " говорит..." << endl;
        satiety -= 3; // Уровень сытости уменьшается во время разговора
        Sleep(2000); // Имитация разговора
    }

    void Parrot::Eat() {
        cout << name << " кушает..." << endl;
        satiety += 15; // Уровень сытости увеличивается после еды
        weight += 0.02; // Вес увеличивается после еды
        Sleep(1000); // Имитация приема пищи
    }

