#include <iostream> 
using namespace std;

int main()
{
    double pi = 3.141592; 
    int num;

    cout << "�������� ����մϴ�. \n";
    cout << "�Ҽ��� �� ��° �ڸ����� ����Ͻðڽ��ϱ�? (1 ~ 7)\n"; 
    cin >> num;
 
    cout.precision(num);

    cout << "�������� " << pi << " �Դϴ�. \n";

    return 0;
}