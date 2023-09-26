#include "Parrot.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;


    Parrot::Parrot() {
        name = "Unnamed";
        age = 1;
        weight = 0.2;
        satiety = 90; // ��������� ������� �������
    }

    void Parrot::SetName(const string& parrotName) {
        name = parrotName;
    }

    void Parrot::SetAge(int parrotAge) {
        age = parrotAge;
    }

    void Parrot::SetWeight(float parrotWeight) {
        weight = parrotWeight;
    }

    // ������ ������� ��� ������������� �������

    void Parrot::About() {
        cout << "���: " << name << endl;
        cout << "�������: " << age << " ���(�)" << endl;
        cout << "���: " << weight << " ��" << endl;
        cout << "������� �������: " << satiety << "%" << endl;
    }

    void Parrot::SleepParrot() {
        cout << name << " ����..." << endl;
        satiety -= 5; // ������� ������� ����������� �� ����� ���
        Sleep(2000); // �������� ���
    }

    void Parrot::Speak() {
        cout << name << " �������..." << endl;
        satiety -= 3; // ������� ������� ����������� �� ����� ���������
        Sleep(2000); // �������� ���������
    }

    void Parrot::Eat() {
        cout << name << " ������..." << endl;
        satiety += 15; // ������� ������� ������������� ����� ���
        weight += 0.02; // ��� ������������� ����� ���
        Sleep(1000); // �������� ������ ����
    }

