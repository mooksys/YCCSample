#include <iostream>
using namespace std;

//CarŬ���� ����
class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        Car(int n, double g);
        void setCar(int n, double g);
        void show();
};

//RacingCarŬ���� ����
class RacingCar : public Car{
    private:
        int course;
    public:
        RacingCar();
        RacingCar(int n, double g, int c);
        void setCourse(int c);
};

//CarŬ���� ��� �Լ��� ����
Car::Car()
{
    num = 0;
    gas = 0.0;
    cout << "�ڵ����� ����������ϴ�.\n";
}
Car::Car(int n, double g)
{
    num = n;
    gas = g;
    cout << "���� ��ȣ�� " << num << " �̰�, ���ᷮ�� " << gas << "�� �ڵ����� ����������ϴ�.\n";
}
void Car::setCar(int n, double g)
{
    num = n;
    gas = g;
    cout << "���� ��ȣ��" << num << "����, ���ᷮ��" << gas << " ���� �ٲپ����ϴ�.\n";
}
void Car::show()
{
    cout << "���� ��ȣ��" << num << "�Դϴ�.\n";
    cout << "���ᷮ��" << gas << "�Դϴ�.\n";
}

// RacingCar Ŭ���� ��� �Լ��� ����
RacingCar :: RacingCar()
{
    course = 0;
    cout << "���̽� ī�� ����������ϴ�.\n";
}
RacingCar::RacingCar(int n, double g, int c) : Car(n, g)
{
    course = c;
    cout << "�ڽ� ��ȣ�� " << course << " �� ���̽� ī�� ����� �����ϴ�.\n";
}
void RacingCar::setCourse(int c)
{
    course = c;
    cout << "�ڽ� ��ȣ�� " << course  << " �� �߽��ϴ�.\n";
}

int main()
{
    RacingCar rccar1(1234, 20.5, 5);

    return 0;
}