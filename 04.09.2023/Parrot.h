#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std; 

class Parrot {
private:
    string name;
    int age;
    float weight;
    int satiety;

public:
    Parrot();

void SetName(const string& parrotName);

void SetAge(int parrotAge);

void SetWeight(float parrotWeight);

    // Другие сеттеры для характеристик попугая

void About();

void SleepParrot();

void Speak();

void Eat();
};
