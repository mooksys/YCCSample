#include <iostream>
using namespace std;

//CarŬ���� ����
class Car{
    private:
        int num;
        double gas;
    public:
        Car(int n=0, double g=0);
        void show();
};

//CarŬ���� ��� �Լ��� ����
Car::Car(int n, double g)
{
    num = n;
    gas = g;
    cout << "���� ��ȣ�� " << num << " �̸�, ���� ���� " << gas << "�� �ڵ����� ����������ϴ�.\n";
}
void Car::show()
{
    cout << "���� ��ȣ��" << num << "�Դϴ�.\n";
    cout << "���ᷮ��" << gas << "�Դϴ�.\n";
}
int main()
{
    Car car1;
    Car car2(1234, 20.5);

    return 0;
}