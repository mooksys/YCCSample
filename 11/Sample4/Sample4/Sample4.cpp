#include <iostream>
using namespace std;

//����ü��  Car�� ����
struct Car{
    int num;
    double gas;
};

//show�Լ� ����
void show(Car c);

int main()
{
    Car car1 = {0, 0.0};

    cout << "���� ��ȣ�� �Է��Ͻʽÿ�.\n";
    cin >> car1.num;

    cout << "���� ���� �Է��Ͻʽÿ�.\n";
    cin >> car1.gas;

    show(car1);

    return 0;
}

//show�Լ��� ����
void show(Car c)
{
    cout << "���� ��ȣ�� " << c.num << " ������ ���� " << c.gas << " �Դϴ�.\n";
}