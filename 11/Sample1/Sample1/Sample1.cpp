#include <iostream>
using namespace std;

//������  Week�� ����
enum Week{ SUN, MON, TUE, WED, THU, FRI, SAT };

int main()
{
    Week w;
    w = SUN;

    switch(w){
        case SUN: cout << "�Ͽ��� �Դϴ�.\n"; break;
        case MON: cout << "������ �Դϴ�.\n"; break;
        case TUE: cout << "ȭ���� �Դϴ�.\n"; break;
        case WED: cout << "�������Դϴ�.\n"; break;
        case THU: cout << "������Դϴ�.\n"; break;
        case FRI: cout << "�ݿ����Դϴ�.\n"; break;
        case SAT: cout << "������Դϴ�.\n"; break;
        default: cout << "���� �������� �� �� �����ϴ�.\n"; break;
    }

    return 0;
}