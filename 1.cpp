#include<iostream>
using namespace std;

int main(){
	int distance,speed,time;
	cout<<"Enter speed: ";
	cin>>speed;
	cout<<"\nEnter time: ";
	cin>>time;
	for(int i = 1;i<=time;i++){
		distance = speed * i;
		cout<<i<<" : "<<distance<<"\n";
	}
	return 0;
}
