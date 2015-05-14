#include <iostream>
using namespace std;

//CarŬ���� ����
class Car{
    private:
        int num;
        double gas;
    public:
        static int sum;
        Car();
        void setCar(int n, double g);
        void show();
    static void showSum();
};

//CarŬ���� ��� �Լ��� ����
Car::Car()
{
    num = 0;
    gas = 0.0;
    sum++;
    cout << "�ڵ����� ����������ϴ�.\n";
}
void Car::setCar(int n, double g)
{
    num = n;
    gas = g;
    cout << "���� ��ȣ��" << num << "����, ���ᷮ��" << gas << " ���� �ٲپ����ϴ�.\n";
}
void Car::showSum()
{
    cout << "�ڵ����� ��� " << sum << " �� �ֽ��ϴ�.\n";
}
void Car::show()
{
    cout << "���� ��ȣ��" << num << "�Դϴ�.\n";
    cout << "���ᷮ��" << gas << "�Դϴ�.\n";
}

int Car::sum = 0;

//CarŬ������ �̿�
int main()
{
    Car::showSum();

    Car car1;
    car1.setCar(1234, 20.5);

    Car::showSum();

    Car car2;
    car2.setCar(4567, 30.5);
    
    Car::showSum();

    return 0;
}