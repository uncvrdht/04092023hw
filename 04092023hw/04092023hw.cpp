#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <vector>
#include <algorithm>
using namespace std;

class Cat { //делаем котика на С++
public:
    // свойства (поля класса, переменные класса)
    double tail_length = 0.5; // длина хвостика :3
    int ears_count = 2; // ушки :3
    string fur_color = "white"; // цвет шорстки :3
    string eyes_color = "blue"; // цвет глазок :3
    string nick = "Barsyk"; // имя котика :3

    // поведение (методы класса, функции класса)
    void MakeMeow() {
        cout << "Meow)" << endl;
    }
    void Walk() {
        cout << "котик ходит)))" << endl;
    }
    void Eat(string meal) {
        cout << "котик кушает" << meal << endl;
    };
};

class Human {
public: 
    //свойства
    string name = "Степан"; //имя человека
    int age = 27;// возраст человека
    string sex = "Мужской"; // пол человека
    float height = 172.5; // рост человека
    float weight = 65.3; // вес человека
    //поведение
    void Breathe() {
        cout << "Степашка дышит... Пока что)" << endl;
    }
    void HumanEat(){
        cout << "Кажется степашка что то кушает..." << endl;
    }
    void StandStraight()
    {
        cout << "Степашка стоит как солдатик..." << endl;
    }
    void Run()
    {
        cout << "Степашка бежит..." << endl;
    }
    void Swim() {
        cout << "Степашка как минимум не тонет..." << endl;
    }
};

class Room 
{
public:
    float square = 19; //площадь комнаты
    float temperature = 21.3; //температура в комнате
    float airHumidity = 75; //влажность воздуха
    bool isOccupied = false; //есть ли кто то в комнате?
    int happinessLevel = 55; //уровень счастья

    //методы

    //метод для изменения температуры в комнате
    void setTemperature(float newTemperature) {
        temperature = newTemperature;
    }
    // метод для изменения уровня влажности в комнатеъ
    void setAirHumidity(float newHumidity) {
        airHumidity = newHumidity;
    }
    // метод для заполнения комнаты гостями
    void checkIn() {
        isOccupied = true;
    }

    // Метод для освобождения комнаты от гостей
    void checkOut() {
        isOccupied = false;
    }
    // Метод реакция на уровень счастья
    void cry() {
        if (happinessLevel <= 49) {
            cout << "О нет! Уровень счастья: " << happinessLevel << "." << endl;
        }
        else
            cout << "Счастье впорядке! Уровень счастья: " << happinessLevel << "." << endl;
    }
};

class Phone {
public: 
    int batteryPercantage = 71;//уровень заряда батареи
    int simUsed = 2;//количество симкарт
    float height = 9.5; //высота
    float width = 3.5;//ширина
    float weight = 120; //вес

    //метод вызова абонента
    void outcomingCall(string number) {
        cout << "Вызываем абонента: " << number << endl;
        for (int i = 0; i < 3; ++i) {
            Sleep(1000);
            cout << "Гудки..." << endl;
        }
        cout << "Абонент ответил!" << endl;
    }

    //метод входящий звонок
    void incomingCall(string number) {
        cout << "Вам звонит: " << number << endl;
    }

    //метод разрядился
    void deadBatteries() {
        cout << "Батарея разряжена, подключите зарядное устройство." << endl;
    }

    //метод заряжается
    void charging() {
        cout << "Зарядное устройство подключено." << endl;
    }

    //музычка
    void music(string track) {
        cout << "Сейчас играет: " << track << endl;
    }
    

};

class Car {
public:
    string color = "Красный"; // цвет
    string model = "Хонда Цивик"; //модель
    float engineCapacity = 1599.9;// объем
    float maxSpeed = 210;// топ спид
    float fuelConsumption = 9.2; //расход

    //снятие с сигнализации
    void disableAlarm(bool alertstatus = 0) {
        cout << "Пик-пик!" << endl;
    }

    //постановка на сигнализацию
    void activateAlarm(bool alertstatus = 1) {
        cout << "Пик-пик!" << endl;
    }

    //разгон
    void acceleration(bool accelerationStatus = 1) {
        cout << "Вжжжжьььь.." << endl;
    }

    //торможение
    void applyBrakes(bool brakesStatus = 1) {
        cout << "*визг тормозов*" << endl;
    }

    //бак пуст
    void empty(float tankCapacity = 0) {
        cout << "*двигатель заглох*" << endl;
        cout << "*на приборной панели горит лампочка возле уровня топлива*" << endl;
        
    }
};

class birb {
public:
    string birdName = "Стриж"; //марка птицы)
    float wingspan = 0.7;//размах крыльев
    string color = "Бело-черный";// цвет
    string habitat = "Пригород";//место обитания
    bool isFlying = false;//находится ли в полете?

    //пение
    void sing() {
        cout << "Чик чирик" << endl;
    }
    
    //полет
    void fly(bool isFlying = true) {
        cout << "Ухты летает" << endl;

    }

    //уплыла, всьо
    void migrate() {
        cout << "Птица начала миграцию в поисках теплых мест..." << endl;
    }

    //inf o pti4ke
    void displayInfo() {
        cout << "Информация о птице:" << endl;
        cout << "Название: " << birdName << endl;
        cout << "Размах крыльев: " << wingspan << " метра" << endl;
        cout << "Цвет: " << color << endl;
        cout << "Место обитания: " << habitat << endl;

        if (isFlying) {
            cout << "В полете: Да" << endl;
        }
        else {
            cout << "В полете: Нет" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "russian");
    

    return 0;
}