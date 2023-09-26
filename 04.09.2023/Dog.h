#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;

class Dog {
private:
    string name;
    int age;
    float weight;
    int satiety;

public:
    Dog();

    void SetName(const string& dogName);

    void SetAge(int dogAge);

    void SetWeight(float dogWeight);

    // Другие сеттеры для характеристик собаки

    void About();

    void SleepDog();

    void Walk();

    void Play();

    void Eat();
};

