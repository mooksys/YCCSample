#include <iostream>
using namespace std;

//buy�Լ��� ����
void buy(int x)
{
    cout << x << "���� ¥�� ������ �����߽��ϴ�.\n";
}

//buy�Լ��� ȣ��
int main()
{
    int num;

    cout << "ù ��°�� �����ϴ� ������ ������ ���Դϱ�?\n";
    cin >> num;

    buy(num);

    cout << "�� ��°�� �����ϴ� ������ ������ ���Դϱ�?\n";
    cin >> num;

    buy(num);

    return 0;
}