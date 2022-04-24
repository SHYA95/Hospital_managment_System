////////////////////// HOSBITAL MANAGEMENT SYSTEM//////////////////////
///////////////////////////////HEADER FILES////// /////////////////////
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<conio.h>
#include<windows.h> 
/////////////////////////////FUCTION DECLARATION//////////////////////
void menu();
void pascode();
void cpascode ();

using namespace std;
////////////////////////////class one ////////////////////////////////
class one 
{
	public:
		virtual void get()=0;
			virtual void show ()=0;
					
};
///////////////////////////class information /////////////////////////
class info:public one
 {
public:
char name [50], time [50]; 
int num,age ;
void get ()
{
system ("cls");
cin.sync();
cout<<"\n ENTER THE PATIENT NAME ="	;
cin.getline(name,50);
cout<<"\n ENTER AGE =";
cin>>age;
cout<<"\nENTER APPOINMENT NO =" ;
cin>>num;
}
 void show()
 {
 	cout<<"\n NAME ="<<name;
 	cout<<"\n AGE ="<<age;
 	cout <<"\n NO ="<<num;
 	cout<<"\nTIME ="<<time;
	 }	
};

////////////////////////////////class shrouk ////////////////////////////////
class shrouk:public info
{
	public:
		info a1;
		void get()
		{
			system ("cls");
			ofstream out ("shrouk.txt",ios::app |ios ::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"Your Entry Has been saved";
			getch();
			menu();
		}
		void show ()
		{
			ifstream in("shrouk.txt");
			if(in==NULL)
			{
				cout<<"\n\n DATA IN THE FILE ";
				cout<<"\n\n\tPRESS ANY KEY TO CONTINUE : ";
				getch();
				menu();
			}
			else{
				while (!in.eof())
				{
					in.read((char*)&a1,sizeof(a1));
					a1.show ();
				}
				in.close();
				getch();
				menu();
			}
		}
		
};
///////////////////////////////////////class Dr.YASSER ////////////////////////////
class yasser:public info
{
		public:
		info a1;
		void get()
		{
			system ("cls");
			ofstream out ("yasser.txt",ios::app |ios ::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"Your Entry Has been saved";
			getch();
			menu();
		}
		void show ()
		{
			ifstream in("yasser.txt");
			if(in==NULL)
			{
				cout<<"\n\n DATA IN THE FILE ";
				cout<<"\n\n\tPRESS ANY KEY TO CONTINUE : ";
				getch();
				menu();
			}
			else{
				while (!in.eof())
				{
					in.read((char*)&a1,sizeof(a1));
					a1.show ();
				}
				in.close();
			
			}
		}
	
	
	
	
	
};
//////////////////////////////////////class Dr.AHMAD///////////////////////////////
class Ahmad:public info
{
	public:
		info a1;
		void get()
		{
			system ("cls");
			ofstream out ("Ahmad.txt",ios::app |ios ::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"Your Entry Has been saved";
			getch();
			menu();
		}
		void show ()
		{
			ifstream in("Ahmad.txt");
			if(in==NULL)
			{
				cout<<"\n\n DATA IN THE FILE ";
				cout<<"\n\n\tPRESS ANY KEY TO CONTINUE : ";
				getch();
				menu();
			}
			else{
				while (!in.eof())
				{
					in.read((char*)&a1,sizeof(a1));
					a1.show ();
				}
				in.close();
				
			}
		}	
	
	
	
};
////////////////////////////////////class staff/////////////////////////////////
class staff :public one
 {
 		public:
	 
	 char all[999];
	 char name [50],age[20],sal[30],pos[20];
		void get()
		{
			
			ofstream out ("shrouk.txt",ios::app |ios ::binary);
			{
			system ("cls");
			cin.sync();
			cout<<"\n ENTER NAME =";
			cin.getline(name,50);	
			cout<<"ENTER AGE = ";
			cin.getline(age,20);
			cout<<"\nENTER SALARY=";
			cin.getline(sal,30);
			cout<<"\nENTER WORKING POSITION =";
			cin.getline(pos,20) ;
			}
			cout<<"\n NAME"<<name<<"\nAGE"<<age<<"\nSALARY"<<sal<<"\nworking position\n"<<pos;
			out.close();
			cout<<"\n\n YOUR INFORMATION HAS BEEN SAVED :\n\t\t\tPress any key to continue ";
			getch();
			menu();
		}
		void show ()
		{
			ifstream in("staff.txt");
			if(in==NULL)
			{
				cout<<" FILE open Error ";
			
			}
				while (!in.eof())
				{
					in.getline(all,999);
					cout<<all<<endl; 
				}
				in.close();
				cout<<"\n\n\t\t\tPress Any Key to continue :";
				getch();
				menu();
			}
			
 	
};
////////////////////////////////////class information///////////////////////////////
class information 
{
	public:
	void drinfo()
	{
		system("cls");
		system("color F3");
		cout<<"\n.........................................................\n";
		cout<<"\n\n\t\t(THREE DOCTORS Available ) \n\n \t\t [Information and Timing Are Given Below]\n";
		
		cout<<"-----------------------------------------------------------/n";
		cout<<"\t\t Available :\n";
		cout<<"\t\t Dr.Shrouk (skin specialist)\n\n";
		cout<<"\t\t\t [[Timing]]:\n\n";
		cout<<"MONDAY TO thruthday \t\t9 AM TO 5PM\n ";
		cout<<"\t Satarday        \t\t 9AM TO 5PM\n";
		cout<<"\tFRIDAY            \t\t OFF \n";
		
		cout<<"-----------------------------------------------------------/n";
		cout<<"\t\t Available :\n";
		cout<<"\t\t Dr.Yasser ( child specialist)\n\n";
		cout<<"\t\t\t [[Timing]]:\n\n";
		cout<<"MONDAY TO thruthday \t\t2 AM TO 10PM\n ";
		cout<<"\t Satarday        \t\t 8AM TO 1PM\n";
		cout<<"\tFRIDAY            \t\t OFF \n";
		
		cout<<"-----------------------------------------------------------/n";
		cout<<"\t\t Available :\n";
		cout<<"\t\t Dr.Ahmad(DVM)\n\n";
		cout<<"\t\t\t [[Timing]]:\n\n";
		cout<<"MONDAY TO thruthday \t\t8 AM TO 5PM\n ";
		cout<<"\t Satarday        \t\t 10AM TO 1PM\n";
		cout<<"\tFRIDAY            \t\t OFF \n";
		
			cout<<"-----------------------------------------------------------/n";
			cout<<"\n Press Any Key For Continue :";
				getch();
				menu();
			
	}
};
 void call_dr()
 {
 	system("cls");
 	int choice;
 	cout<<"\n\n\n\t\tPress 1 for Dr.Shrouk \n\n\t\t Press 2 for Dr.Yasser \n\n\t\t Press 3 for Dr.Ahmad";
 	cin>>choice;
 	
 	one*ptr;
 	shrouk s3;
 	yasser s4;
 	Ahmad s5;
 	if (choice==1)
	 {
 		ptr=&s3;
 		ptr->get();
 		
	 }
	 if (choice==2)
	 {
 		ptr=&s4;
 		ptr->get();
 	}
 	if (choice==3)
	 {
 		ptr=&s5;
 		ptr->get();
 	}
 	else
	 {
	 	cout<<"Sorry Invalid Choice :";
 		getch();
				menu();	
	 }	
 }
 void menu()
 {
 	system("cls");
 	system("color FC");
 	cout<<"\n";
 		cout<<"\n";
 		cout<<"\t\t     |+++++++++     MAIN MENU     +++++++++|\n";
 		cout<<"\t\t     |      HOSPITAL MANAGMENT SYSTEM      |\n";
 		cout<<"\t\t     |-------------------------------------|\n";
 		
 	cout<<"\n-------------------------------------------------------------\n";
 		cout<<"\t\t    PLEASE SELECT ANY OPTION                \n";
 		
 			cout<<"\n\t1-\tPress 1 For Available Doctor Information \n" ;
 			cout<<"\n\t2-\tPress 2 FOR Doctor Appoinment       \n";
 			cout<<"\n\t3-\tPress 3 FOR Saving Staff Information  \n";
 			cout<<"\n\t4-\tPress 4 FOR Checking Patient Appointment Menu: \n";	
 			cout<<"\n\t5-\tPress 5 FOR Checking Staff Information Menu: \n";
 			cout<<"\n\t6-\tPress 6 FOR Change pasword or create pasword  : \n";
 			cout<<"\n\t7-\tPress 7 FOR logout    ]\n";
 			cout<<"\n-------------------------------------------------------------\n";
 			cout<<"\n\t\tPLEASE ENTER YOUR CHOICE :        \n";
 			information a1;
 			one *ptr;
 			staff a2;
 			int a;
 			cin>>a;
 			if(a==1)
 			{
 				a1.drinfo();
			 }
			 else if (a==2)
			 {
			 	call_dr();
			 	
			 }
			 else if (a==3)
			 {
			 	ptr=&a2;
			 	ptr->get();
			 	
			 }
			 else if (a==4)
			 {
			 info show();
			 }
			 else if (a==5)
			 {
			 ptr=&a2;
			 ptr->show();	
			 }
			 else if (a==6)
			 {
			 	cpascode();
			 	
			 }
			 else if (a==7)
			 {
			 	pascode();
			 }
			 else
			 {
			 	cout<<"sorry invalid choice : ";
			 }
 }
 void pascode()
{
	system("cls");
	char p1[50],p2[50],p3[50];
	system("color Fc");
	ifstream in("password.txt");
	{
		cin.sync();
		cout<<"\n\n\n\n\t\t\t\t ENTER THE PASSWORD : ";
		cin.getline(p1,50);
		in.getline(p2,50);
		if(strcmp(p2,p1)==0)
		{
			menu();	
	}
	else
	{ 
	cout<<"\n\n\t\tIncorrect Passcode Please Try Again \n";
	Sleep(999);
	pascode();
		
	}
}
 in.close();
}
 
 void cpascode()
 {
 	char n[50];
 	system ("cls");
 	ofstream out("password.txt");
 	{
 		cin.sync();
 		cout<<"\n\n\n\n\t\t\t\t Enter THE NEW PASSWORD ";
 		cin.getline(n,50);
 		cout<<n;
 		
	 }
	 out.close();
	 cout<<"\n\n Your password has been saved : ";
	 getch();
	 menu();
	 
 }
 int main ()
 {
 	pascode();
 	system ("pause");
 }
