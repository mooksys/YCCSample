#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    vector<int> vt;

    cout << "�� ���� ���� �����͸� �Է� �Ͻðڽ��ϱ�?\n";
    cin >> num;

    for(int i=0; i<num;i++){
        int data;
        cout << "������ �Է��Ͻʽÿ�.\n";
        cin >> data; vt.push_back(data);
    }

    cout << "ǥ���մϴ�.\n";
    vector<int>::iterator it = vt.begin();
    while(it != vt.end()){
        cout << *it; cout << "-"; it++;
    }
    cout << "\n";
}