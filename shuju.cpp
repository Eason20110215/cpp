#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a=1;
	float pingjun=0,zhongwei=0,fangcha=0;
	cout<<"���������ݵĸ���:";
	cin>>n;
	cout << endl; 
	const int n1=n;
	float shuju[n1];
	while(a<=n)
	{
		cout <<"�������"<<a<<"�����ݣ�"; 
		cin >> shuju[a-1];
		pingjun=pingjun+shuju[a-1];
		cout<<endl;
		a++;
	}
	pingjun=pingjun/n;
	cout<<"ƽ����Ϊ"<<pingjun<<endl;
	if(n%2==0)
	{
		zhongwei=(shuju[n/2]+shuju[(n/2)+1])/2;
	}
	else
	{
		zhongwei=shuju[(n-1)/2];
	}
	cout << "��λ��Ϊ"<<zhongwei<<endl;
	a=1;
	while(a<=n)
	{
		fangcha=fangcha+pow((shuju[a-1]-pingjun),2);
		a++;
	}
	fangcha=(1/n)*fangcha;
	cout << "����Ϊ"<<fangcha<<endl;
	return 0;
}
