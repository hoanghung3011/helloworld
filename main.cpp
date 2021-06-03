#include <iostream>

using namespace std;

int main()
{  float a,b,x;
    cout<<"Nhap a"<<endl;
    cin>>a;
    cout<<"Nhap b"<<endl;
    cin>>b;
    if (a==0)
    {
        if (b==0)
        {
            cout<<"Phuong trinh vo so nghiem"<<endl;
        }
        else {cout<<"Phuong trinh vo nghiem"<<endl;}
    }
    else{x=-b/a;
    cout<<"Phuong trinh co nghiem duy nhat :"<<x;}
    return 0;
}
