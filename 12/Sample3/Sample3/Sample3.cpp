#include <iostream>
using namespace std;

//CarŬ������ ����
class Car{
    private:
        int num;
        double gas;
    public:
        int getNum(){return num;}
        double getGas(){return gas;}
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

//buy�Լ� ����
void buy(Car c);

int main()
{
    Car car1;
    
    car1.setNumGas(1234, 20.5);

    buy(car1);

    return 0;
}

//buy�Լ��� ����
void buy(Car c)
{
    int n = c.getNum();
    double g = c.getGas();
    cout << "���� ��ȣ " << n << " ������ �� " << g << "�� �ڵ����� �����߽��ϴ�.\n";
}