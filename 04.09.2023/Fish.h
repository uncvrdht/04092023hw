#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;

class Fish {
private:
    string name;
    int age;
    float weight;
    int satiety;

public:
    Fish();

void SetName(const string& fishName);

void SetAge(int fishAge);

void SetWeight(float fishWeight);

    // ������ ������� ��� ������������� ����

void About();

void Swim();

void Eat();
};

