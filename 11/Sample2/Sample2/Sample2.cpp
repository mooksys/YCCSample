#include <iostream>
using namespace std;

//����ü��  Car�� ����
struct Car{
    int num;
    double gas;
};

int main()
{
    Car car1;

    cout << "���� ��ȣ�� �Է��Ͻʽÿ�.\n";
    cin >> car1.num;

    cout << "���� ���� �Է��Ͻʽÿ�.\n";
    cin >> car1.gas;

    cout << "���� ��ȣ�� " << car1.num << "������ ���� " << car1.gas << " �Դϴ�.\n";
	
    return 0;
}