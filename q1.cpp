/*Q.No 1. Bookshop Management System
File handling has been effectively used for each feature of this project
Operations
1. Add Book Records:
2. Show Book Records:
3. Check Availability:
4. Modify Book Records:
5. Delete Book Records:*/
#include<iostream>
#include<fstream>
 using namespace std;
 int main()
 {
 	string name; 
	string aut;
 	int price;
 	cout<<"Enter book name, authour, price of book";
 	cin>>name>>aut>>price;
 	ofstream out("bookstore.txt");//add
 	out<<"\nname"<<name<<"\nauthor"<<aut<<"\nprice"<<price;
 	out.close();
 	ifstream in("bookstore.txt");//show
 	in>>name>>aut>>price;
 	in.close();
 	string line;
 	ofstream out1;
 	out1.open("bookstore.txt", ios::app);//modify records
 	cout<<"TO GET OUT SIDE FROM FILE ENTER 'QUIT'";
 	while(getline(cin,line))
 	{
 	if(line=='quit'||line=='QUIT')
 	{
	 break;
    }
    else
    out<<"\n"<<line;
	}
 	out1.close();
 	string line3;
 	ifstream in3("bookstore.txt");// to read
 	while(in.is_open())
 	{
 	if(getline(in3,line3))	
 	{
 	in3<<"\n"<<line3;	
	 }
	 else
	 {
	 cout<<"file is no present in file";	
	 }
	}
	ofstream out4("bookstore.txt");//delete 
 	out4<<"\nname"<<name<<"\nauthor"<<aut<<"\nprice"<<price;
 	out4.close();
 	ifstream in4("bookstore.txt");//show
 	in4>>name>>aut>>price;
 	in4.close();
 	return 0;
 	}