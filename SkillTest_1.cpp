#include <iostream>
#include <string>
using namespace std;

int main ()
 {
	double Rate,Hour,net,rem,pbond;
	int bond;

 cout<<"Input pay rate per hour: "<<endl;
 cin>> Rate;
 cout<<"Input number of hours worked per week: "<<endl;
 cin>> Hour;
	cout<<"Gross Income: $"<<5*Hour*Rate<<endl;
	cout<<"Net Income: $"<<((5*Hour*Rate)-(5*Hour*Rate*0.14))<<endl;
		net=((5*Hour*Rate)-(5*Hour*Rate*0.14));
	cout<<"Money spent on Clothes and accessories: $"<<net*0.1<<endl;
	cout<<"Money spent on School supplies: $"<<net*0.01<<endl;
		rem=net-((net*0.1)+(net*0.01));
	 cout<<"Money spent for savings bonds: $"<<(0.25*rem)<<endl;
	 bond=(0.25*rem);	
	 pbond=bond*0.50;
	cout<<"Money spent by parents for additional savings bonds: $"<<pbond<<endl;
 
 system("pause");
	 return 0;
}