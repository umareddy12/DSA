//codeforces problem:cinema line
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int cash_25,cash_50,cash_100,temp;
	cash_25=0;
	cash_50=0;
	cash_100=0;
                              int count=1;
	while(n--)
	{
	cin>>temp;
	if(temp==25)
	{
	cash_25++;
	}
	else if(temp==50){
	if(cash_25>0)
	{
	cash_25--;
	cash_50++;
	}
	else{
	count=0;
	}
	}
	else if(temp==100)
	{
	if(cash_50>0&&cash_25>0)
	{
	cash_50--;
	cash_25--;
	}
	else if(cash_25>2){
	cash_25=cash_25-3;
	}
	else {
	count=0;
	}
	}
	}
	if(count==1){
                              cout<<"YES\n";
	}
	else{
	cout<<"NO";
	}

return 0;
	
}
