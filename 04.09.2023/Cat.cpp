#include "Cat.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;


    Cat::Cat() {
        name = "Unnamed";
        age = 1;
        weight = 1.0;
        satiety = 100; // ��������� ������� �������
    }

    void Cat::SetName(const string& catName) {
        name = catName;
    }

    void Cat::SetAge(int catAge) {
        age = catAge;
    }

    void Cat::SetWeight(float catWeight) {
        weight = catWeight;
    }

    // ������ ������� ��� ������������� ������

    void Cat::About() {
        cout << "���: " << name << endl;
        cout << "�������: " << age << " ���(�)" << endl;
        cout << "���: " << weight << " ��" << endl;
        cout << "������� �������: " << satiety << "%" << endl;
    }

    void Cat::SleepCat() {
        cout << name << " ����..." << endl;
        satiety -= 5; // ������� ������� ����������� �� ����� ���
        Sleep(2000); // �������� ���
    }

    void Cat::Walk() {
        cout << name << " ���� �� ��������..." << endl;
        satiety -= 10; // ������� ������� ����������� �� ����� ��������
        weight -= 0.1; // ��� ����������� �� ����� ����������
        Sleep(3000); // �������� ��������
    }

    void Cat::Play() {
        cout << name << " ������ � �����..." << endl;
        satiety -= 15; // ������� ������� ����������� �� ����� ����
        weight -= 0.2; // ��� ����������� �� ����� ����������
        Sleep(2000); // �������� ����
    }

    void Cat::Hunt() {
        cout << name << " ������� �� �����..." << endl;
        satiety -= 20; // ������� ������� ����������� �� ����� �����
        weight -= 0.3; // ��� ����������� �� ����� ����������
        Sleep(4000); // �������� �����
    }

    void Cat::Eat() {
        cout << name << " ������..." << endl;
        satiety += 30; // ������� ������� ������������� ����� ���
        weight += 0.15; // ��� ������������� ����� ���
        Sleep(1500); // �������� ������ ����
    }
