#include<iostream>
using namespace std;

float Sum(float,float);
float Subst(float,float);
float Multi(float,float);
float Division(float,float);

int main()
{
	float num1,num2;
	float result;
	char optr;
	cout<<"Enter your number1: ";
	cin>>num1;
	cout<<"Enter your operator: ";
	cin>>optr;
	cout<<"Enter your number2: ";
	cin>>num2;
	switch(optr)
	{
		case '+' :
			{
				result = Sum(num1,num2);
				cout<<"The result is: "<<result<<endl;
				break;
			}
		case '-' :
			{
			    result = Subst(num1,num2);
			    cout<<"The result is: "<<result<<endl;
				break;
		   }
		case '*' :
			{
				result = Multi(num1,num2);
				cout<<"The result: "<<result<<endl;
				break;
			}
		case '/' :
		{
			result = Division(num1,num2);
			cout<<"The result is: "<<result<<endl;
			break;
		}
		
		default :
			cout<<"Wrong operation you entered:"<<endl;
	}
	//loop is start.
	for(int i = 0; i<=5; i++)
	{
		cout<<"Enter your operator: ";
		cin>>optr;
		cout<<"Enter your number: ";
		cin>>num2;
	switch(optr)
	{
		case '+' :
			{
				result = Sum(result,num2);
				cout<<"The result is: "<<result<<endl;
				break;
			}
		case '-' :
			{
				result = Subst(result,num2);
				cout<<"The result is: "<<result<<endl;
				break;
		   }
		case '*' :
			{
				result = Multi(result,num2);
				cout<<"The result is: "<<result<<endl;
				break;
			}
		case '/' :
		{
			result = Division(result,num2);
			cout<<"The result is: "<<result<<endl;
			break;
		}
		
		default :
			cout<<"Wrong operation you entered:"<<endl;
	}
	}
	return 0;
}

//Sum function.
float Sum(float operend_1, float operend_2)
{
	return (operend_1 + operend_2);
}

//substraction function.
float Subst(float operend_1, float operend_2)
{
	return (operend_1 - operend_2);
}

//Multiplication function.
float Multi(float operend_1, float operend_2)
{
	return (operend_1 * operend_2);
}

//Division function.
float Division(float operend_1, float operend_2)
{
	return (operend_1 / operend_2);
}