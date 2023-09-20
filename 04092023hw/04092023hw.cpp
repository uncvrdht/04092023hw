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
    Cat() {
        name = "Unnamed";
        age = 1;
        weight = 1.0;
        satiety = 100; // Начальный уровень сытости
    }

    void SetName(const string& catName) {
        name = catName;
    }

    void SetAge(int catAge) {
        age = catAge;
    }

    void SetWeight(float catWeight) {
        weight = catWeight;
    }

    // Другие сеттеры для характеристик котика

    void About() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << " год(а)" << endl;
        cout << "Вес: " << weight << " кг" << endl;
        cout << "Уровень сытости: " << satiety << "%" << endl;
    }

    void SleepCat() {
        cout << name << " спит..." << endl;
        satiety -= 5; // Уровень сытости уменьшается во время сна
        Sleep(2000); // Имитация сна
    }

    void Walk() {
        cout << name << " идет на прогулку..." << endl;
        satiety -= 10; // Уровень сытости уменьшается во время прогулки
        Sleep(3000); // Имитация прогулки
    }

    void Play() {
        cout << name << " играет с мячом..." << endl;
        satiety -= 15; // Уровень сытости уменьшается во время игры
        Sleep(2000); // Имитация игры
    }

    void Hunt() {
        cout << name << " выходит на охоту..." << endl;
        satiety -= 20; // Уровень сытости уменьшается во время охоты
        Sleep(4000); // Имитация охоты
    }

    void Eat() {
        cout << name << " кушает..." << endl;
        satiety += 30; // Уровень сытости увеличивается после еды
        Sleep(1500); // Имитация приема пищи
    }
};

int main() {
    setlocale(LC_ALL, "russian");

    Cat cat;
    cat.SetName("Barsik");
    cat.SetAge(2);
    cat.SetWeight(4.5);

    while (true) {
        cat.SleepCat();
        cat.Walk();
        cat.Play();
        cat.Hunt();
        cat.Eat();
        cat.About();
        cout << endl;
    }

    return 0;
}
