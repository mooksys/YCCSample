#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    cout << "short int ���� ũ��� " << sizeof(short int) << "����Ʈ �Դϴ�.\n";
    cout << "int ���� ũ��� " << sizeof(int) << "����Ʈ �Դϴ�.\n";
    cout << "long int ���� ũ��� " << sizeof(long int) << "����Ʈ �Դϴ�.\n";
    cout << "float ���� ũ���" << sizeof(float) << "����Ʈ �Դϴ�.\n";
    cout <<"double ���� ũ��� " << sizeof(double) << "����Ʈ �Դϴ�.\n";
    cout << "long double ���� ũ��� " << sizeof(long double) << "����Ʈ �Դϴ�.\n";
    cout << "���� a�� ũ��� " << sizeof(a) << "����Ʈ �Դϴ�.\n";
    cout << "��a + b�� ũ��� " << sizeof(a + b) <<  "����Ʈ �Դϴ�.\n";

    return 0;
}