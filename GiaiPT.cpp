#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>

using namespace std;

void menu()
{
	cout<<"--------------------MENU--------------------\n";
	cout<<"1. Giai phuong trinh bac nhat a*x + b = 0\n";
	cout<<"2. Giai phuong trinh bac hai a*x*x + b*x + c = 0\n";
	cout<<"3. Thoat\n";
	cout<<"--------------------------------------------";
}
void giaibac1()
{
	double a,b;
	double x;
	cout<<"Nhap a,b:";
	cin>>a>>b;
	cout<<"Phuong trinh co dang "<<a<<"*x + "<<b<<" = 0"<<endl;
	if ((a==0)&&(b==0))
		cout<<"Phuong trinh vo so nghiem.";
	else if ((a==0)&&(b!=0))
		cout<<"Phuong trinh vo nghiem.";
	else
	{
		x=(-b)/a;
		cout<<"Nghiem phuong trinh: X= "<<x<<endl;
	}
}
void giaibac2()
{
	double a,b,c,k;
	cout<<"Nhap a,b,c:";
	cin>>a>>b>>c;
	double x1,x2;
	cout<<"Phuong trinh co dang "<<a<<"*x*x + "<<b<<"*x + "<<c<<" = 0"<<endl;
	k=b*b-4*a*c;
	if (k<0)
	 cout<<"Phuong trinh vo nghiem.";
	else if (k>0)
	{
		x1=(-b+sqrt(k))/(2*a);
		x2=(-b-sqrt(k))/(2*a);
		cout<<"Phuong trinh co 2 nghiem: X1= "<<x1<<endl;
		cout<<"                          X2= "<<x2;
	}
	else if (k==0)
	{
	 	x1=(-b)/(2*a);
		cout<<"Nghiem phuong trinh: X= "<<x1;
	}
}
int ChonMenu()
{
	int n = 0;
	cout << "\n\nMoi chon menu: ";
	cin >> n;
	if (n < 1 || n > 3 )
	{
		cout<<"Chon sai!!!!! Moi chon lai..";
		return ChonMenu();
	}
}
void XuLyMenu() 
{
	int chon = ChonMenu();
	switch (chon)
	{
	case 1:		
		cout << "1. Giai phuong trinh bac nhat\n";
		giaibac1();
		break;
	case 2:
		cout << "2. Giai phuong trinh bac hai\n";
		giaibac2();
		break;
	case 3:
		cout << "3. Thoat\n";
		exit(0);
	}
}
int main()
{
	cout << std::setprecision(3);
	menu();
	while (true)
	{	
		XuLyMenu();
	}
}
