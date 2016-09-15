//TryThis16.cpp - displays a pattern of asterisks
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
    int num1 = 1;
	int num2 = 1;
	int num3 =0;
	int count2 =0;
	cout <<num1<< endl;
	cout <<num2<< endl;
	for (int count=1; count<9; count+=1){
		num3= num1 +num2;
		cout <<num3<< endl;
		num1=num2;
		num2=num3;
	}
	num1=1;
	num2=1;
	cout <<num1<< endl;
	cout <<num2<< endl;
		while(count2<8) {
			num3= num1 +num2;
			cout <<num3<< endl;
			num1=num2;
			num2=num3;
			count2+=1;
		}
}