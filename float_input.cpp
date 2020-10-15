#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string i {};
	int j {},k {0},l {0};
	float m {0.0};
	bool flag=true;
	while(flag)
	{
		cout<<"Enter value"<<endl;
		getline(cin,i);
		for(j=0;i[j]!='\0';j++)
		{
			if(int(i[j]==46))
				continue;
			if((int(i[j])<48||int(i[j])>57))
			{	
				flag=true;
				k=1;
				break;
			}
		}
		if(k!=1)
		{
			l=1;
			flag=false;
		}
		k=0;
	}
	if(l==1)
	{
		stringstream ss;
		ss<<i;
		ss>>m;
	}
	cout<<"Double value : "<<m<<endl;	
	return 0;
}
