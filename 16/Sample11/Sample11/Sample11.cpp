#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream fout("test1.txt");
    if(!fout){
        cout << "������ �� �� �����ϴ�.\n";
        return 1;
    }
    else
        cout << "������ �������ϴ�.\n";

    fout << "Hello!\n";
    fout << "Goodbye!\n";
    cout << "���Ͽ� ����߽��ϴ�.\n";

    fout.close();
    cout << "������ �ݾҽ��ϴ�.\n";
    return 0;
}