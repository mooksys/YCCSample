#include <iostream>
using namespace std;

//VehicleŬ������ ����
class Vehicle{
    protected:
        int speed;
    public:
        void setSpeed(int s);
        virtual void show() = 0;
};

//CarŬ������ ����
class Car : public Vehicle{
    private:
        int num;
        double gas;
    public:
        Car(int n, double g);
        void show();
};

//PlaneŬ������ ����
class Plane : public Vehicle{
    private:
        int flight;
    public:
        Plane(int f);
        void show();
};

//VehicleŬ���� ��� �Լ��� ����
void Vehicle::setSpeed(int s)
{
    speed = s;
    cout << "�ӵ��� " << speed << " �� �����߽��ϴ�.\n";
}

//CarŬ���� ��� �Լ��� ����
Car::Car(int n, double g)
{
    num = n;
    gas = g;
    cout << "���� ��ȣ�� " << num << " �̰�, ���ᷮ�� " << gas << "�� �ڵ����� ����������ϴ�.\n";
}
void Car::show()
{

    cout << "���� ��ȣ�� " << num << " �Դϴ�.\n";
    cout << "���ᷮ�� " << gas << " �Դϴ�.\n";
    cout << "�ӵ��� " << speed << " �Դϴ�.\n";
}

//PlaneŬ���� ��� �Լ��� ����
Plane::Plane(int f)
{
    flight = f;
    cout << "����� ��ȣ�� " << flight << " �� ����Ⱑ ����������ϴ�.\n";
}
void Plane::show()
{
    cout << "����� ��ȣ�� " << flight << " �Դϴ�.\n";
    cout << "�ӵ��� " << speed << " �Դϴ�.\n";
}

int main()
{
    Vehicle* pVc[2];

    Car car1(1234, 20.5);
    pVc[0] = &car1;
    pVc[0]->setSpeed(60);

    Plane pln1(232);
    pVc[1] = &pln1;
    pVc[1]->setSpeed(500);

    for(int i=0; i<2 ;i++){
        pVc[i]->show();
    }
}