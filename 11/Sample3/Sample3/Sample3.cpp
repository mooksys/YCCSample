#include <iostream>
using namespace std;

//����ü��  Car�� ����
struct Car{
    int num;
    double gas;
};

int main()
{
    Car car1 = {1234, 25.5};
    Car car2 = {4567, 52.2};

    cout << "car1�� ���� ��ȣ�� " << car1.num << " ������ ���� " << car1.gas << " �Դϴ�.\n";
    cout << "car2�� ���� ��ȣ�� " << car2.num << " ������ ���� " << car2.gas << " �Դϴ�.\n";
	
    car2 = car1;
	
    cout << "car1�� car2�� �����߽��ϴ�.\n";
	
    cout << "car2�� ���� ��ȣ�� " << car2.num << " ���� ���� " << car2.gas << " �Դϴ�.\n";
	
    return 0;
}