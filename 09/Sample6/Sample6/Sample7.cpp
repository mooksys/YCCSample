#include <iostream>
using namespace std;

int main()
{
    int test[5] = { 80, 60, 55, 22, 75 };

    cout << "test[0]�� ���� " << test[0] << " �Դϴ�.\n";
    cout << "test[0]�� �ּҴ� " << &test[0] << " �Դϴ�.\n";
    cout << "test�� ���� " << test << " �Դϴ�.\n";
    cout << "test+1�� ���� " << test + 1 << " �Դϴ�.\n";
    cout << "*(test+1)�� ���� " << *(test + 1) << " �Դϴ�.\n";

    return 0;
}