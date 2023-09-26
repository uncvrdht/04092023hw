#include "Lion.h"

using namespace std;


    Lion::Lion() {
        name = "Unnamed";
        age = 5;
        weight = 180.0;
        satiety = 80; // ��������� ������� �������
    }

    void Lion::SetName(const string& lionName) {
        name = lionName;
    }

    void Lion::SetAge(int lionAge) {
        age = lionAge;
    }

    void Lion::SetWeight(float lionWeight) {
        weight = lionWeight;
    }

    // ������ ������� ��� ������������� ����

    void Lion::About() {
        cout << "���: " << name << endl;
        cout << "�������: " << age << " ���(�)" << endl;
        cout << "���: " << weight << " ��" << endl;
        cout << "������� �������: " << satiety << "%" << endl;
    }

    void Lion::SleepLion() {
        cout << name << " ����..." << endl;
        satiety -= 10; // ������� ������� ����������� �� ����� ���
        Sleep(4000); // �������� ���
    }

    void Lion::Roar() {
        cout << name << " �����..." << endl;
        satiety -= 5; // ������� ������� ����������� �� ����� �������
        Sleep(3000); // �������� �������
    }

    void Lion::Eat() {
        cout << name << " ������..." << endl;
        satiety += 40; // ������� ������� ������������� ����� ���
        weight += 5.0; // ��� ������������� ����� ���
        Sleep(2000); // �������� ������ ����
    }
