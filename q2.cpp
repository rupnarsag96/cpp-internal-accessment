/*Q.2Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. 
(Use Default values for Pay_Rate Rs. 500 per hours)*/


#include<iostream>
 using namespace std;
 class emp
 {
 	private:
 		int hr,sal,p;
 		string n;
 	public:
 		
 		void get_info(string x,int y,int z=500)
 		{
 			n=x;
 			hr=y;
 			p=z;
 		}
		 void print_info()
		 {
		 sal=p*hr;
		 cout<<"\nname="<<n<<"\nhours="<<hr<<"\nsalary="<<sal;
	     }
	   
		
};
int main()
{
	int hours;
	string name;
	cin>>hours;
	cin>>name;
	emp e;
	e.get_info(name,hours);
	e.print_info();
	return 0;
}
 