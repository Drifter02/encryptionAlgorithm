#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int M=10;
char my[]="GUOMINGXUE";
char mw1[]="ABCDEFGHIGKLMNOPQRSTUVWXYZ";

void MW(char mw2[])
{
	int i,j,t=0,b;
	for(i=0;i<M;i++)
	{
		b=1;
		for(j=0;j<t;j++)
		{
			if(my[i]==mw2[j])
			{
				b=0;
				break;
			}
		}
		if(b==1)
		{
			mw2[t]=my[i];
			t++;
		}
	}
	for(i=0;i<26;i++)
	{
		b=1;
		for(j=0;j<t;j++)
		{
			if(mw1[i]==mw2[j])
			{
				b=0;
				break;
			}
		}
		if(b==1)
		{
			mw2[t]=mw1[i];
			t++;
		}
	}


}

main()
{
	char mw2[26],sr[26];
	MW(mw2);
	string a;
	int i,j,p,q;
	while(1)
	{
		cout<<"1.��������"<<endl;
		cout<<"2.��������"<<endl;
		cin>>i;
		if(i==1)
		{
			cout<<"����������:";
			cin>>sr;
			j=strlen(sr);
			cout<<"����Ϊ��";
			for(p=0;p<j;p++)
			{
				for(q=0;q<26;q++)
				{
					if(sr[p]==mw1[q])
					{
						cout<<mw2[q];
						break;
					}
						
				}
			}
			cout<<endl;

		}
		else if(i==2)
		{
			cout<<"����������:";
			cin>>sr;
			j=strlen(sr);
			cout<<"����Ϊ��";
			for(p=0;p<j;p++)
			{
				for(q=0;q<26;q++)
				{
					if(sr[p]==mw2[q])
					{
						cout<<mw1[q];
						break;
					}
						
				}
			}
			cout<<endl;
		}
	}
	
}
