#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "���� ������� ���� ���Ͻðڽ��ϱ�?\n";

    cin >> num;

    for (int i = 1; i <= num; i++){
        sum += i;
    }
	
    cout << "1����" << num << " ������ ���� " << sum << "�Դϴ�.\n";

    return 0;
}