#include<iostream>
using namespace std;
class phanso
{
	private:
		int tuso;
		int mauso;
	public:
		void nhap();
		void xuat();;	
};
void phanso::nhap()
{
	cout<<"Nhap tu so : ";
	cin>>tuso;
	do
		{
			cout<<"Nhap mau so : ";
			cin>>mauso;
			if(mauso==0)
				{
					cout<<"Xin vui long nhap mau so khac 0 !!!"<<endl;
				}
		}
	while(mauso==0);
}
void phanso::xuat()
{
	cout<<"Phan so : "<<tuso<<"/"<<mauso;
}
int main()
{
	phanso ps;
	ps.nhap();
	ps.xuat();
	return 0;
}
