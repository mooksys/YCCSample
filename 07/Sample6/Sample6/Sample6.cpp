#include <iostream>
using namespace std;

//buy�Լ��� ����
int buy(int x, int y)
{
    int z;

    cout << x << " ���� ¥��, " << y << " ���� ¥�� ������ �����߽��ϴ�.\n";

    z = x + y;

    return z;
}

//buy�Լ��� ȣ��
int main()
{
    int num1, num2, sum;

    cout << "�����Ͻô� ������ ������ ���Դϱ�?\n";
    cin >> num1;

    cout << "�����Ͻô� ������ ������ ���Դϱ�?\n";
    cin >> num2;

    sum = buy(num1, num2);

    cout << "�հ� �ݾ��� " << sum << "���� �Դϴ�.\n";

    return 0;
}