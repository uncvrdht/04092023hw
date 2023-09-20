#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Cat {
private:
    double tail_length = 0.5;
    int ears_count = 2;
    string fur_color = "white";
    string eyes_color = "blue";
    string nick = "Barsyk";
    int age = 1;
    int paws = 4;
    int satiety;

public:
    double GetTailLength() const {
        return this->tail_length;
    }

    void SetTailLength(double tail_length) {
        this->tail_length = tail_length;
    }

    int GetEarsCount() const {
        return this->ears_count;
    }

    void SetEarsCount(int ears_count) {
        this->ears_count = ears_count;
    }

    string GetFurColor() const {
        return this->fur_color;
    }

    void SetFurColor(const string& fur_color) {
        this->fur_color = fur_color;
    }

    string GetEyesColor() const {
        return this->eyes_color;
    }

    void SetEyesColor(const string& eyes_color) {
        this->eyes_color = eyes_color;
    }

    string GetNick() const {
        return this->nick;
    }

    void SetNick(const string& nick) {
        this->nick = nick;
    }

    int GetAge() const {
        return this->age;
    }

    void SetAge(int age) {
        this->age = age;
    }

    int GetPaws() const {
        return this->paws;
    }

    void SetPaws(int paws) {
        this->paws = paws;
    }

    int GetSatiety() const {
        return this->satiety;
    }

    void SetSatiety(int satiety) {
        this->satiety = satiety;
    }

    void MakeMeow() {
        cout << "Meow)" << endl;
    }

    void Walk() {
        if (this->paws == 4) {
            cout << "котик ходит)))" << endl;
        }
        else if (this->paws > 4) {
            cout << ".....";
        }
        else {
            cout << "Котик не может ходить по причине малолапия...";
        }
    }

    void Eat(string meal) {
        cout << "котик кушает " << meal << endl;
        this->satiety += 30;
    }

    void ChangeFurColor(const string& new_color) {
        this->fur_color = new_color;
        cout << "Цвет шерсти котика изменен на " << new_color << endl;
    }
};

class Human {
private:
    string name = "Степан";
    int age = 27;
    string sex = "Мужской";
    float height = 172.5;
    float weight = 65.3;
    bool isStudent = false;
    bool isEmployed = false;

public:
    string GetName() const {
        return this->name;
    }

    void SetName(const string& name) {
        this->name = name;
    }

    int GetAge() const {
        return this->age;
    }

    void SetAge(int age) {
        this->age = age;
    }

    string GetSex() const {
        return this->sex;
    }

    void SetSex(const string& sex) {
        this->sex = sex;
    }

    float GetHeight() const {
        return this->height;
    }

    void SetHeight(float height) {
        this->height = height;
    }

    float GetWeight() const {
        return this->weight;
    }

    void SetWeight(float weight) {
        this->weight = weight;
    }

    bool IsStudent() const {
        return this->isStudent;
    }

    void SetIsStudent(bool isStudent) {
        this->isStudent = isStudent;
    }

    bool IsEmployed() const {
        return this->isEmployed;
    }

    void SetIsEmployed(bool isEmployed) {
        this->isEmployed = isEmployed;
    }

    void Breathe() {
        cout << this->name << " дышит... Пока что)" << endl;
    }

    void HumanEat() {
        cout << this->name << " что-то кушает..." << endl;
    }

    void StandStraight() {
        cout << this->name << " стоит как солдатик..." << endl;
    }

    void Run() {
        cout << this->name << " бежит..." << endl;
    }

    void Swim() {
        cout << this->name << " как минимум не тонет..." << endl;
    }
};

class Room {
private:
    float square = 19;
    float temperature = 21.3;
    float airHumidity = 75;
    bool isOccupied = false;
    int happinessLevel = 55;
    string roomName = "Гостинная";

public:
    float GetSquare() const {
        return this->square;
    }

    void SetSquare(float square) {
        this->square = square;
    }

    float GetTemperature() const {
        return this->temperature;
    }

    void SetTemperature(float temperature) {
        this->temperature = temperature;
    }

    float GetAirHumidity() const {
        return this->airHumidity;
    }

    void SetAirHumidity(float airHumidity) {
        this->airHumidity = airHumidity;
    }

    bool IsOccupied() const {
        return this->isOccupied;
    }

    void SetIsOccupied(bool isOccupied) {
        this->isOccupied = isOccupied;
    }

    int GetHappinessLevel() const {
        return this->happinessLevel;
    }

    void SetHappinessLevel(int happinessLevel) {
        this->happinessLevel = happinessLevel;
    }

    string GetRoomName() const {
        return this->roomName;
    }

    void SetRoomName(const string& roomName) {
        this->roomName = roomName;
    }

    void Cry() {
        if (this->happinessLevel <= 49) {
            cout << "О нет! Уровень счастья в " << this->roomName << ": " << this->happinessLevel << "." << endl;
        }
        else {
            cout << "Счастье впорядке в " << this->roomName << "! Уровень счастья: " << this->happinessLevel << "." << endl;
        }
    }

    void ThrowParty() {
        this->happinessLevel += 10;
        cout << "Вечеринка в " << this->roomName << "! Уровень счастья повышен до " << this->happinessLevel << "." << endl;
    }
};

class Phone {
private:
    int batteryPercentage = 71;
    int simUsed = 2;
    float height = 9.5;
    float width = 3.5;
    float weight = 120;
    string brand = "Unknown";

public:
    int GetBatteryPercentage() const {
        return this->batteryPercentage;
    }

    void SetBatteryPercentage(int batteryPercentage) {
        this->batteryPercentage = batteryPercentage;
    }

    int GetSimUsed() const {
        return this->simUsed;
    }

    void SetSimUsed(int simUsed) {
        this->simUsed = simUsed;
    }

    float GetHeight() const {
        return this->height;
    }

    void SetHeight(float height) {
        this->height = height;
    }

    float GetWidth() const {
        return this->width;
    }

    void SetWidth(float width) {
        this->width = width;
    }

    float GetWeight() const {
        return this->weight;
    }

    void SetWeight(float weight) {
        this->weight = weight;
    }

    string GetBrand() const {
        return this->brand;
    }

    void SetBrand(const string& brand) {
        this->brand = brand;
    }

    void OutgoingCall(string number) {
        if (this->batteryPercentage < 10) {
            cout << "Недостаточно заряда. Батарея разряжена." << endl;
            return;
        }

        if (this->simUsed == 0) {
            cout << "Сим-карта не вставлена. Вставьте сим-карту, прежде чем звонить." << endl;
            return;
        }

        cout << "Вызываем абонента: " << number << endl;
        for (int i = 0; i < 3; ++i) {
            Sleep(1000);
            cout << "Гудки..." << endl;
        }
        cout << "Абонент ответил!" << endl;
        this->batteryPercentage -= 10;
    }

    void IncomingCall(string number) {
        if (this->simUsed == 0) {
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
        if (this->batteryPercentage < 20) {
            cout << "Недостаточно заряда. Воспроизведение музыки невозможно." << endl;
            return;
        }

        cout << "Сейчас играет: " << track << endl;
        this->batteryPercentage -= 5;
    }
};

class Car {
private:
    string color = "Красный";
    string model = "Хонда Цивик";
    float engineCapacity = 1599.9;
    float maxSpeed = 210;
    float fuelConsumption = 9.2;
    bool isLocked = false;
    float currentFuel = 50.0;

public:
    string GetColor() const {
        return this->color;
    }

    void SetColor(const string& color) {
        this->color = color;
    }

    string GetModel() const {
        return this->model;
    }

    void SetModel(const string& model) {
        this->model = model;
    }

    float GetEngineCapacity() const {
        return this->engineCapacity;
    }

    void SetEngineCapacity(float engineCapacity) {
        this->engineCapacity = engineCapacity;
    }

    float GetMaxSpeed() const {
        return this->maxSpeed;
    }

    void SetMaxSpeed(float maxSpeed) {
        this->maxSpeed = maxSpeed;
    }

    float GetFuelConsumption() const {
        return this->fuelConsumption;
    }

    void SetFuelConsumption(float fuelConsumption) {
        this->fuelConsumption = fuelConsumption;
    }

    bool IsLocked() const {
        return this->isLocked;
    }

    void SetIsLocked(bool isLocked) {
        this->isLocked = isLocked;
    }

    float GetCurrentFuel() const {
        return this->currentFuel;
    }

    void SetCurrentFuel(float currentFuel) {
        this->currentFuel = currentFuel;
    }

    void DisableAlarm(bool alertStatus = false) {
        if (this->isLocked) {
            cout << "Пик-пик! Сигнализация снята." << endl;
            this->isLocked = false;
        }
        else {
            cout << "Машина уже разблокирована." << endl;
        }
    }

    void ActivateAlarm(bool alertStatus = true) {
        if (!this->isLocked) {
            cout << "Пик-пик! Сигнализация установлена." << endl;
            this->isLocked = true;
        }
        else {
            cout << "Машина уже заблокирована." << endl;
        }
    }

    void Acceleration(bool accelerationStatus = true) {
        if (this->currentFuel > 0) {
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
        if (this->currentFuel <= 0) {
            cout << "*двигатель заглох*" << endl;
            cout << "*на приборной панели горит лампочка возле уровня топлива*" << endl;
        }
        else {
            cout << "Бак не пуст. Текущий уровень топлива: " << this->currentFuel << " литров." << endl;
        }
    }
};

class Bird {
private:
    string birdName = "Стриж";
    float wingspan = 0.7;
    string color = "Бело-черный";
    string habitat = "Пригород";
    bool isFlying = false;
    int age = 1;
    bool isSinging = false;

public:
    string GetBirdName() const {
        return this->birdName;
    }

    void SetBirdName(const string& birdName) {
        this->birdName = birdName;
    }

    float GetWingspan() const {
        return this->wingspan;
    }

    void SetWingspan(float wingspan) {
        this->wingspan = wingspan;
    }

    string GetColor() const {
        return this->color;
    }

    void SetColor(const string& color) {
        this->color = color;
    }

    string GetHabitat() const {
        return this->habitat;
    }

    void SetHabitat(const string& habitat) {
        this->habitat = habitat;
    }

    bool IsFlying() const {
        return this->isFlying;
    }

    void SetIsFlying(bool isFlying) {
        this->isFlying = isFlying;
    }

    int GetAge() const {
        return this->age;
    }

    void SetAge(int age) {
        this->age = age;
    }

    bool IsSinging() const {
        return this->isSinging;
    }

    void SetIsSinging(bool isSinging) {
        this->isSinging = isSinging;
    }

    void Fly() {
        if (!this->isFlying) {
            cout << this->birdName << " взлетел в небо!" << endl;
            this->isFlying = true;
        }
        else {
            cout << this->birdName << " уже летает." << endl;
        }
    }

    void Land() {
        if (this->isFlying) {
            cout << this->birdName << " приземлился." << endl;
            this->isFlying = false;
        }
        else {
            cout << this->birdName << " и так на земле." << endl;
        }
    }

    void Sing() {
        if (!this->isSinging) {
            cout << this->birdName << " запел свою песню." << endl;
            this->isSinging = true;
        }
        else {
            cout << this->birdName << " уже поет." << endl;
        }
    }

    void StopSinging() {
        if (this->isSinging) {
            cout << this->birdName << " прекратил пение." << endl;
            this->isSinging = false;
        }
        else {
            cout << this->birdName << " и так молчит." << endl;
        }
    }
};

int main() {
    // Пример использования классов
    Cat myCat;
    myCat.SetFurColor("черный");
    myCat.SetNick("Мурзик");
    myCat.MakeMeow();
    myCat.Eat("рыбу");
    myCat.Walk();

    Human myHuman;
    myHuman.SetName("Иван");
    myHuman.SetAge(30);
    myHuman.Breathe();
    myHuman.Run();

    Room myRoom;
    myRoom.SetRoomName("Спальня");
    myRoom.ThrowParty();
    myRoom.Cry();

    Phone myPhone;
    myPhone.SetBrand("Samsung");
    myPhone.OutgoingCall("123-456-789");
    myPhone.IncomingCall("987-654-321");

    Car myCar;
    myCar.SetColor("Синий");
    myCar.DisableAlarm();
    myCar.ActivateAlarm();
    myCar.Acceleration();
    myCar.ApplyBrakes();
    myCar.Empty();

    Bird myBird;
    myBird.Fly();
    myBird.Sing();
    myBird.Land();
    myBird.StopSinging();

    return 0;
}
