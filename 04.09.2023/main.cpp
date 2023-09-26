#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Lion.h"
#include "Fish.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");

    Cat cat;
    cat.SetName("Barsik");
    cat.SetAge(2);
    cat.SetWeight(4.5);

    Dog dog;
    dog.SetName("Rex");
    dog.SetAge(3);
    dog.SetWeight(10.0);

    Parrot parrot;
    parrot.SetName("Polly");
    parrot.SetAge(1);
    parrot.SetWeight(0.3);

    Lion lion;
    lion.SetName("Simba");
    lion.SetAge(7);
    lion.SetWeight(180.0);

    Fish fish;
    fish.SetName("Nemo");
    fish.SetAge(1);
    fish.SetWeight(0.05);

    while (true) {
        cat.SleepCat();
        cat.Walk();
        cat.Play();
        cat.Hunt();
        cat.Eat();
        cat.About();
        cout << endl;

        dog.SleepDog();
        dog.Walk();
        dog.Play();
        dog.Eat();
        dog.About();
        cout << endl;

        parrot.SleepParrot();
        parrot.Speak();
        parrot.Eat();
        parrot.About();
        cout << endl;

        lion.SleepLion();
        lion.Roar();
        lion.Eat();
        lion.About();
        cout << endl;

        fish.Swim();
        fish.Eat();
        fish.About();
        cout << endl;
    }

    return 0;
}