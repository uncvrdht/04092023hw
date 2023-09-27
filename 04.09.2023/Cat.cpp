#include "Cat.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std;

Cat::Cat() : Cat("Unnamed", 1, 1.0) {
    
}

Cat::Cat(const string& catName, int catAge, float catWeight) {
    name = catName;
    age = catAge;
    weight = catWeight;
    satiety = 100;
}

Cat::Cat(const string& catName) : Cat(catName, 1, 1.0) {
   
}

Cat::Cat(int catAge) : Cat("Unnamed", catAge, 1.0) {
   
}

Cat::Cat(float catWeight) : Cat("Unnamed", 1, catWeight) {
  
}

// Остальные методы класса Cat остаются без изменений

void Cat::About() {
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << " год(а)" << endl;
    cout << "Вес: " << weight << " кг" << endl;
    cout << "Уровень сытости: " << satiety << "%" << endl;
}

void Cat::SleepCat() {
    cout << name << " спит..." << endl;
    satiety -= 5;
    Sleep(2000);
}

void Cat::Walk() {
    cout << name << " идет на прогулку..." << endl;
    satiety -= 10;
    weight -= 0.1;
    Sleep(3000);
}

void Cat::Play() {
    cout << name << " играет с мячом..." << endl;
    satiety -= 15;
    weight -= 0.2;
    Sleep(2000);
}

void Cat::Hunt() {
    cout << name << " выходит на охоту..." << endl;
    satiety -= 20;
    weight -= 0.3;
    Sleep(4000);
}

void Cat::Eat() {
    cout << name << " кушает..." << endl;
    satiety += 30;
    weight += 0.15;
    Sleep(1500);
}
