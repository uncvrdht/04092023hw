#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;

class Lion {
private:
    string name;
    int age;
    float weight;
    int satiety;

public:
    Lion();

    void SetName(const string& lionName);

    void SetAge(int lionAge);

    void SetWeight(float lionWeight);

    // Другие сеттеры для характеристик льва

    void About();

    void SleepLion();

    void Roar();

    void Eat();
};
