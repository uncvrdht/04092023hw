#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std;

class Cat {
private:
    string name;
    int age;
    float weight;
    int satiety;

public:
    Cat();

    void SetName(const string& catName);

    void SetAge(int catAge);

    void SetWeight(float catWeight);

    // Другие сеттеры для характеристик котика

    void About();

    void SleepCat();

    void Walk();

    void Play();

    void Hunt();

    void Eat();
};

