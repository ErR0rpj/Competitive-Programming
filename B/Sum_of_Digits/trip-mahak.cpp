#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
using namespace std;
char a[100000+10];
int main(){
	int answer=0,sum=0,total=0;
	cin>>a;
		
	for(int i=0;i<strlen(a);i++){
		sum+=a[i]-'0';
	}
	total+=1;

	while(sum>=10){            //when sum becomes less than 10 then number becomes one-digit
		answer=0;
		total++;
		while(sum>0){
			int t=sum%10;
			sum/=10;
			answer+=t;
		}
		sum=answer;
	}
	if(strlen(a)==1)        //if number is already one digit 
		total=0;
	
	cout<<total<<endl;
	return 0;
}
