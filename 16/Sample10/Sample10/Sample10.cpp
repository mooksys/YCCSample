#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream fout("test0.txt");
    if(!fout){
        cout << "������ �� �� �����ϴ�.\n";
        return 1;
    }
    else
        cout << "������ �������ϴ�.\n";
    fout.close();
    cout << "������ �ݾҽ��ϴ�.\n";

    return 0;
}