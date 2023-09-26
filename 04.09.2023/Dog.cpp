#include "Dog.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

    Dog::Dog() {
        name = "Unnamed";
        age = 1;
        weight = 5.0;
        satiety = 80; // ��������� ������� �������
    }

    void Dog::SetName(const string& dogName) {
        name = dogName;
    }

    void Dog::SetAge(int dogAge) {
        age = dogAge;
    }

    void Dog::SetWeight(float dogWeight) {
        weight = dogWeight;
    }

    // ������ ������� ��� ������������� ������

    void Dog::About() {
        cout << "���: " << name << endl;
        cout << "�������: " << age << " ���(�)" << endl;
        cout << "���: " << weight << " ��" << endl;
        cout << "������� �������: " << satiety << "%" << endl;
    }

    void Dog::SleepDog() {
        cout << name << " ����..." << endl;
        satiety -= 5; // ������� ������� ����������� �� ����� ���
        Sleep(2000); // �������� ���
    }

    void Dog::Walk() {
        cout << name << " ���� �� ��������..." << endl;
        satiety -= 8; // ������� ������� ����������� �� ����� ��������
        weight -= 0.2; // ��� ����������� �� ����� ����������
        Sleep(3000); // �������� ��������
    }

    void Dog::Play() {
        cout << name << " ������ � �����..." << endl;
        satiety -= 12; // ������� ������� ����������� �� ����� ����
        weight -= 0.3; // ��� ����������� �� ����� ����������
        Sleep(2000); // �������� ����
    }

    void Dog::Eat() {
        cout << name << " ������..." << endl;
        satiety += 25; // ������� ������� ������������� ����� ���
        weight += 0.2; // ��� ������������� ����� ���
        Sleep(1500); // �������� ������ ����
    }
