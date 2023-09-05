#include<iostream.h>
#include<conio.h>
class Bank
{
 static int bank_balance;
 int id,number,pincord,w,amount,balance,diposit;
 char name[20];
 public:
		void setdata()
		{
		  cout<<"Enter your id:";
		  cin>>id;
		  cout<<"Enter your Name: ";
		  cin>>name;
		  cout<<"Enter your mobile number";
		  cin>>number;
		  cout<<"Enter your pincord";
		  cin>>pincord;
		}
		void get_Balance()
		{
		 cout<<"Enter your amount ";
		 cin>>balance;
		/* balance=balance+amount;
		 bank_balance=bank_balance+amount;*/
		}
		void APK()
		{
		  cout<<"Enter your diposit valae";
		  cin>>diposit;
		  balance = balance + diposit;
		  bank_balance = bank_balance + diposit;
		  cout<<balance;
		}
		void PPT()
		{
		  cout<<"Enter your whitdraw amount";
		  cin>>w;
		  balance = balance - w;
		  bank_balance = bank_balance - w;
		  cout<<balance;
		  if (balance<=w)
		  {
		    cout<<"Re enter your value";
		  }
		  else
		  {
		    cout<<"Your amount is whitdraw";
		  }
		}
		void display()
		{
		  cout<<"Your id ==> "<<id;
		  cout<<endl<<"Your name ==> "<<name;
		  cout<<endl<<"Your mobile Number ==> "<<number;
		  cout<<endl<<"Your pincord ==> "<<pincord;
		  cout<<endl<<"Your balance ==> "<<balance;
		  cout<<" bank_balance ==> "<<bank_balance;
		}

};
int Bank :: bank_balance=500;
void main()
{
  Bank obj;
  int choose;
  clrscr();
  obj.setdata();
  obj.get_Balance();
  obj.display();
  cout<<"\n 1 for deposit and 2 for whitdraw ";
  cin>>choose;
  if(choose==1)
  {
    obj.APK();
  }
  else if(choose == 2)
  {
   obj.PPT();
  }
 /* else
  {
   cout<<"invalide value";
  }           */
 // obj.result();
  getch();
}