#include <iostream>
using namespace std;

//CarŬ���� ����
class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        void show();
};

//CarŬ���� ��� �Լ��� ����
Car::Car()
{
    num = 0;
    gas = 0.0;
    cout << "�ڵ����� ����������ϴ�.\n";
}
void Car::show()
{
    cout << "���� ��ȣ��" << num << "�Դϴ�.\n";
    cout << "���� ����" << gas << "�Դϴ�.\n";
}

int main()
{
    Car car1;

    car1.show();

    return 0;
}