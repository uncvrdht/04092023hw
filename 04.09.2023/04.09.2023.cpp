#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Cat {
private:
    double tail_length = 0.5; // длина хвостика :3
    int ears_count = 2; // ушки :3
    string fur_color = "white"; // цвет шерсти :3
    string eyes_color = "blue"; // цвет глазок :3
    string nick = "Barsyk"; // имя котика :3
    int age = 1; // возраст котика :3
    int paws = 4;
    int satiety;

public:
    // Геттеры и сеттеры для полей класса Cat
    double GetTailLength() const {
        return tail_length;
    }

    void SetTailLength(double length) {
        tail_length = length;
    }

    int GetEarsCount() const {
        return ears_count;
    }

    void SetEarsCount(int count) {
        ears_count = count;
    }

    string GetFurColor() const {
        return fur_color;
    }

    void SetFurColor(const string& color) {
        fur_color = color;
    }

    string GetEyesColor() const {
        return eyes_color;
    }

    void SetEyesColor(const string& color) {
        eyes_color = color;
    }

    string GetNick() const {
        return nick;
    }

    void SetNick(const string& name) {
        nick = name;
    }

    int GetAge() const {
        return age;
    }

    void SetAge(int catAge) {
        age = catAge;
    }

    int GetPaws() const {
        return paws;
    }

    void SetPaws(int pawCount) {
        paws = pawCount;
    }

    int GetSatiety() const {
        return satiety;
    }

    void SetSatiety(int level) {
        satiety = level;
    }

    // Остальные методы класса Cat
    void MakeMeow() {
        cout << "Meow)" << endl;
    }

    void Walk() {
        if (paws == 4) {
            cout << "котик ходит)))" << endl;
        }
        else if (paws > 4) {
            cout << ".....";
        }
        else {
            cout << "Котик не может ходить по причине малолапия...";
        }
    }

    void Eat(string meal) {
        cout << "котик кушает " << meal << endl;
        satiety += 30;
    }

    void ChangeFurColor(const string& new_color) {
        fur_color = new_color;
        cout << "Цвет шерсти котика изменен на " << new_color << endl;
    }
};

class Human {
private:
    string name = "Степан"; // имя человека
    int age = 27; // возраст человека
    string sex = "Мужской"; // пол человека
    float height = 172.5; // рост человека
    float weight = 65.3; // вес человека
    bool isStudent = false; // учится ли человек
    bool isEmployed = false; // работает ли человек

public:
    // Геттеры и сеттеры для полей класса Human
    string GetName() const {
        return name;
    }

    void SetName(const string& humanName) {
        name = humanName;
    }

    int GetAge() const {
        return age;
    }

    void SetAge(int humanAge) {
        age = humanAge;
    }

    string GetSex() const {
        return sex;
    }

    void SetSex(const string& humanSex) {
        sex = humanSex;
    }

    float GetHeight() const {
        return height;
    }

    void SetHeight(float humanHeight) {
        height = humanHeight;
    }

    float GetWeight() const {
        return weight;
    }

    void SetWeight(float humanWeight) {
        weight = humanWeight;
    }

    bool IsStudent() const {
        return isStudent;
    }

    void SetIsStudent(bool studentStatus) {
        isStudent = studentStatus;
    }

    bool IsEmployed() const {
        return isEmployed;
    }

    void SetIsEmployed(bool employedStatus) {
        isEmployed = employedStatus;
    }

    // Остальные методы класса Human
    void Breathe() {
        cout << name << " дышит... Пока что)" << endl;
    }

    void HumanEat() {
        cout << name << " что-то кушает..." << endl;
    }

    void StandStraight() {
        cout << name << " стоит как солдатик..." << endl;
    }

    void Run() {
        cout << name << " бежит..." << endl;
    }

    void Swim() {
        cout << name << " как минимум не тонет..." << endl;
    }
};

class Room {
private:
    float square = 19; // площадь комнаты
    float temperature = 21.3; // температура в комнате
    float airHumidity = 75; // влажность воздуха
    bool isOccupied = false; // есть ли кто-то в комнате?
    int happinessLevel = 55; // уровень счастья
    string roomName = "Гостинная"; // имя комнаты

public:
    // Геттеры и сеттеры для полей класса Room
    float GetSquare() const {
        return square;
    }

    void SetSquare(float roomSquare) {
        square = roomSquare;
    }

    float GetTemperature() const {
        return temperature;
    }

    void SetTemperature(float roomTemperature) {
        temperature = roomTemperature;
    }

    float GetAirHumidity() const {
        return airHumidity;
    }

    void SetAirHumidity(float humidity) {
        airHumidity = humidity;
    }

    bool IsOccupied() const {
        return isOccupied;
    }

    void SetIsOccupied(bool occupiedStatus) {
        isOccupied = occupiedStatus;
    }

    int GetHappinessLevel() const {
        return happinessLevel;
    }

    void SetHappinessLevel(int level) {
        happinessLevel = level;
    }

    string GetRoomName() const {
        return roomName;
    }

    void SetRoomName(const string& name) {
        roomName = name;
    }

    // Остальные методы класса Room
    void Cry() {
        if (happinessLevel <= 49) {
            cout << "О нет! Уровень счастья в " << roomName << ": " << happinessLevel << "." << endl;
        }
        else {
            cout << "Счастье впорядке в " << roomName << "! Уровень счастья: " << happinessLevel << "." << endl;
        }
    }

    void ThrowParty() {
        happinessLevel += 10;
        cout << "Вечеринка в " << roomName << "! Уровень счастья повышен до " << happinessLevel << "." << endl;
    }
};

class Phone {
private:
    int batteryPercentage = 71; // уровень заряда батареи
    int simUsed = 2; // количество сим-карт
    float height = 9.5; // высота
    float width = 3.5; // ширина
    float weight = 120; // вес
    string brand = "Unknown"; // бренд телефона

public:
    // Геттеры и сеттеры для полей класса Phone
    int GetBatteryPercentage() const {
        return batteryPercentage;
    }

    void SetBatteryPercentage(int percentage) {
        batteryPercentage = percentage;
    }

    int GetSimUsed() const {
        return simUsed;
    }

    void SetSimUsed(int simCount) {
        simUsed = simCount;
    }

    float GetHeight() const {
        return height;
    }

    void SetHeight(float phoneHeight) {
        height = phoneHeight;
    }

    float GetWidth() const {
        return width;
    }

    void SetWidth(float phoneWidth) {
        width = phoneWidth;
    }

    float GetWeight() const {
        return weight;
    }

    void SetWeight(float phoneWeight) {
        weight = phoneWeight;
    }

    string GetBrand() const {
        return brand;
    }

    void SetBrand(const string& phoneBrand) {
        brand = phoneBrand;
    }

    // Остальные методы класса Phone
    void OutgoingCall(string number) {
        if (batteryPercentage < 10) {
            cout << "Недостаточно заряда. Батарея разряжена." << endl;
            return;
        }

        if (simUsed == 0) {
            cout << "Сим-карта не вставлена. Вставьте сим-карту, прежде чем звонить." << endl;
            return;
        }

        cout << "Вызываем абонента: " << number << endl;
        for (int i = 0; i < 3; ++i) {
            Sleep(1000);
            cout << "Гудки..." << endl;
        }
        cout << "Абонент ответил!" << endl;
        batteryPercentage -= 10;
    }

    void IncomingCall(string number) {
        if (simUsed == 0) {
            cout << "Сим-карта не вставлена. Невозможно принять звонок." << endl;
            return;
        }

        cout << "Вам звонит: " << number << endl;
    }

    void DeadBattery() {
        cout << "Батарея разряжена, подключите зарядное устройство." << endl;
    }

    void Charging() {
        cout << "Зарядное устройство подключено." << endl;
    }

    void Music(string track) {
        if (batteryPercentage < 20) {
            cout << "Недостаточно заряда. Воспроизведение музыки невозможно." << endl;
            return;
        }

        cout << "Сейчас играет: " << track << endl;
        batteryPercentage -= 5;
    }
};

class Car {
private:
    string color = "Красный"; // цвет
    string model = "Хонда Цивик"; // модель
    float engineCapacity = 1599.9; // объем
    float maxSpeed = 210; // топ спид
    float fuelConsumption = 9.2; // расход
    bool isLocked = false; // заблокирована ли машина
    float currentFuel = 50.0; // текущий уровень топлива в литрах

public:
    // Геттеры и сеттеры для полей класса Car
    string GetColor() const {
        return color;
    }

    void SetColor(const string& carColor) {
        color = carColor;
    }

    string GetModel() const {
        return model;
    }

    void SetModel(const string& carModel) {
        model = carModel;
    }

    float GetEngineCapacity() const {
        return engineCapacity;
    }

    void SetEngineCapacity(float capacity) {
        engineCapacity = capacity;
    }

    float GetMaxSpeed() const {
        return maxSpeed;
    }

    void SetMaxSpeed(float speed) {
        maxSpeed = speed;
    }

    float GetFuelConsumption() const {
        return fuelConsumption;
    }

    void SetFuelConsumption(float consumption) {
        fuelConsumption = consumption;
    }

    bool IsLocked() const {
        return isLocked;
    }

    void SetIsLocked(bool lockedStatus) {
        isLocked = lockedStatus;
    }

    float GetCurrentFuel() const {
        return currentFuel;
    }

    void SetCurrentFuel(float fuelLevel) {
        currentFuel = fuelLevel;
    }

    // Остальные методы класса Car
    void DisableAlarm(bool alertStatus = false) {
        if (isLocked) {
            cout << "Пик-пик! Сигнализация снята." << endl;
            isLocked = false;
        }
        else {
            cout << "Машина уже разблокирована." << endl;
        }
    }

    void ActivateAlarm(bool alertStatus = true) {
        if (!isLocked) {
            cout << "Пик-пик! Сигнализация установлена." << endl;
            isLocked = true;
        }
        else {
            cout << "Машина уже заблокирована." << endl;
        }
    }

    void Acceleration(bool accelerationStatus = true) {
        if (currentFuel > 0) {
            cout << "Вжжжжьььь.." << endl;
        }
        else {
            cout << "Невозможно разогнаться, бак пуст." << endl;
        }
    }

    void ApplyBrakes(bool brakesStatus = true) {
        cout << "*визг тормозов*" << endl;
    }

    void Empty(float tankCapacity = 0) {
        if (currentFuel <= 0) {
            cout << "*двигатель заглох*" << endl;
            cout << "*на приборной панели горит лампочка возле уровня топлива*" << endl;
        }
        else {
            cout << "Бак не пуст. Текущий уровень топлива: " << currentFuel << " литров." << endl;
        }
    }
};

class Bird {
private:
    string birdName = "Стриж"; // марка птицы
    float wingspan = 0.7; // размах крыльев
    string color = "Бело-черный"; // цвет
    string habitat = "Пригород"; // место обитания
    bool isFlying = false; // находится ли в полете?
    int age = 1; // возраст птицы
    bool isSinging = false; // поет ли птица

public:
    // Геттеры и сеттеры для полей класса Bird
    string GetBirdName() const {
        return birdName;
    }

    void SetBirdName(const string& name) {
        birdName = name;
    }

    float GetWingspan() const {
        return wingspan;
    }

    void SetWingspan(float span) {
        wingspan = span;
    }

    string GetColor() const {
        return color;
    }

    void SetColor(const string& birdColor) {
        color = birdColor;
    }

    string GetHabitat() const {
        return habitat;
    }

    void SetHabitat(const string& birdHabitat) {
        habitat = birdHabitat;
    }

    bool IsFlying() const {
        return isFlying;
    }

    void SetIsFlying(bool flyingStatus) {
        isFlying = flyingStatus;
    }

    int GetAge() const {
        return age;
    }

    bool IsSinging() const {
        return isSinging;
    }

    void SetIsSinging(bool singingStatus) {
        isSinging = singingStatus;
    }

    // Остальные методы класса Bird
    void Sing() {
        if (isSinging) {
            cout << "Птица уже поет." << endl;
        }
        else {
            cout << "Чик чирик" << endl;
            isSinging = true;
        }
    }

    void StopSinging() {
        if (isSinging) {
            cout << "Птица перестала петь." << endl;
            isSinging = false;
        }
        else {
            cout << "Птица уже не поет." << endl;
        }
    }

    void Fly(bool isFlyingStatus = true) {
        cout << "Ухты летает" << endl;
        isFlying = isFlyingStatus;
    }

    void Migrate() {
        cout << "Птица начала миграцию в поисках теплых мест..." << endl;
    }

    void DisplayInfo() {
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

        cout << "Возраст: " << age << " год(а)" << endl;

        if (isSinging) {
            cout << "Пение: Да" << endl;
        }
        else {
            cout << "Пение: Нет" << endl;
        }
    }

    void SetAge1(int newAge) {
        age = newAge;
        cout << "Возраст птицы установлен на " << newAge << " год(а)" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "russian");

    return 0;
}