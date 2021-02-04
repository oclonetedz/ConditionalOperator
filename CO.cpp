#include<iostream>
using namespace std;
int main()
{
	int sj1,sj2,sj3,mid,final;
	cout<<"==========QUIZZES================"<<endl;
	cout<<"Enter first quizz (10) :";
	cin>>sj1;
	cout<<"Enter second quizz(10) :";
	cin>>sj2;
	cout<<"Enter third quizz (10) :";
	cin>>sj3;
	cout<<"==========MID-TERM=============="<<endl;
	cout<<"Enter mid-term (40) : ";
	cin>>mid;
	cout<<"===========FINAL================"<<endl;
	cout<<"Enter final (50) :";
	cin>>final;
	float total1 = static_cast<float>(sj1+sj2+sj3)/3;
	cout<<"Quizz Total:"<<total1<<endl;
	cout<<"Mid term:"<<mid<<endl;
	cout<<"Final:"<<final<<endl;
	float total2 = total1+mid+final;
	cout<<"Total:"<<total2<<endl;
	cout << "Your score is" << ((total2>=50) ? "PASS " : "FALED ")<<endl;
return(0);
}