#include "Fish.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;


    Fish::Fish() {
        name = "Unnamed";
        age = 2;
        weight = 0.1;
        satiety = 95; // ��������� ������� �������
    }

    void Fish::SetName(const string& fishName) {
        name = fishName;
    }

    void Fish::SetAge(int fishAge) {
        age = fishAge;
    }

    void Fish::SetWeight(float fishWeight) {
        weight = fishWeight;
    }

    // ������ ������� ��� ������������� ����

    void Fish::About() {
        cout << "���: " << name << endl;
        cout << "�������: " << age << " ���(�)" << endl;
        cout << "���: " << weight << " ��" << endl;
        cout << "������� �������: " << satiety << "%" << endl;
    }

    void Fish::Swim() {
        cout << name << " �������..." << endl;
        satiety -= 4; // ������� ������� ����������� �� ����� ��������
        weight -= 0.01; // ��� ����������� �� ����� ����������
        Sleep(1000); // �������� ��������
    }

    void Fish::Eat() {
        cout << name << " ������..." << endl;
        satiety += 10; // ������� ������� ������������� ����� ���
        weight += 0.03; // ��� ������������� ����� ���
        Sleep(1000); // �������� ������ ����
    }
