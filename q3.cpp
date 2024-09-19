/* Q3. Write a program create employee class with members variable as EmpId,Name 
of Employee and Salary. For 10 Employees Print list of all employees.
Print list of employee who got heights salary.*/
 
 #include<iostream>
 using namespace std;
 class emp
 {
 	private:
 		int id[100],sal[100];
 		string n[100];
 	public:
 		void get_info(int x[],string y[] ,int z[])
 		{
 		 for(int i=0;i<10;i++)
		  {
			id[i]=x[i];
 			n[i]=y[i];
 			sal[i]=z[i];
 		}
		 }
		 void print_info()
		 {
		 	for(int i=0;i<10;i++)
		 	{
			 
		 	cout<<"\nid"<<id<<"\nname"<<"\nsalary"<<n<<sal;
		    }
		 compare(sal);
		 }
		 
	int compare(int sal[])
 	    {
 	 	int max=0;
 		for(int i=0;i<10;i++)
 		{
 		 if(max<sal[i])
 		 {
 		 	max=sal[i];
		  }
 		}
 		cout<<"max sal of employee"<<max;
	 }
};
int main()
{
	int id1[100],sal1[100],i;
	char n1[100];
	cout<<"\nEnter id name and salary of employee ";
	for(i=0;i<10;i++)
	{
	cin>>id1[i]>>n1>>sal1[i];
	emp s[10];
	s[i].get_info(id1,sal1);
	s[i].print_info();
   }
   
	return 0;
}
 