#include <iostream>
using namespace std;

//avg�Լ��� ����
double avg(int t[]);

int main()
{
    int test[5];

    cout << "5���� ���� ������ �Է��Ͻʽÿ�.\n";
    for(int i=0; i<5; i++){
        cin >> test[i];
    }
    double ans = avg(test);
    cout << "5 ���� ��� ������ " << ans << " ���Դϴ�.\n";
	
    return 0;
}

//avg�Լ��� ����
double avg(int t[])
{
    double sum = 0;
    for (int i = 0; i<5; i++){
        sum += t[i];
    }
    return sum / 5;
}