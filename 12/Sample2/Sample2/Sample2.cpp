#include <iostream>
using namespace std;

//CarŬ������ ����
class Car{
    private:
        int num;
        double gas;
    public:
        void show();
        void setNumGas(int n, double g);
};

//CarŬ���� ��� �Լ��� ����
void Car::show()
{
    cout << "���� ��ȣ��" << num << "�Դϴ�.\n";
    cout << "���ᷮ��" << gas << "�Դϴ�.\n";
}

void Car::setNumGas(int n, double g)
{
    if(g > 0 && g < 1000){
        num = n;
        gas = g;
        cout << "���� ��ȣ��" << num << "����, ���ᷮ��" << gas << " ���� �ٲپ����ϴ�.\n";
    }
    else{
        cout << g << "�� �ùٸ� ���ᷮ�� �ƴմϴ�.\n";
        cout << "���ᷮ�� �ٲ� �� �����ϴ�.\n";
    }
}

int main()
{
    Car car1;
    
    //�̷��� ������ �Ұ����ϰ� �˴ϴ�.
    //car1.num = 1234;
    //car1.gas = 20.5;

    car1.setNumGas(1234, 20.5);
    car1.show();

    cout << "�߸��� ���� �� (-10.0)�� ���� �� ���ڽ��ϴ� ....\n";
    car1.setNumGas(1234, -10.0);
    car1.show();

    return 0;
}