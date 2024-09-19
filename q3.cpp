/* Q3. Write a program create employee class with members variable as EmpId,Name 
of Employee and Salary. For 10 Employees Print list of all employees.
Print list of employee who got heights salary.*/
 
#include<iostream>
using namespace std;
class employee
{
	private:
		
		int eno,sal;
		char name[20];
		public:
	void get()
	{
	cout<<"\n enter eno name and salary\n";
	cin>>eno>>name>>sal;
		
	}	
	void show()
	{
	cout<<"\neno="<<eno<<"\name="<<name<<"\nsalary="<<sal;
	
	}
	int salary()
	{
		return(sal);
    }
};
main()
{
	employee emp_obj[20];
	int max=0,i;
	for( i=0;i<3;i++)
	{
	emp_obj[i].get();
	emp_obj[i].show();
		}
	
	for( i=0;i<3;i++)
	{
		if(emp_obj[i].salary()>max)
		max=emp_obj[i].salary();
	}
	cout<<"\n highest salary of employee="<<max;
}
	

	
	
