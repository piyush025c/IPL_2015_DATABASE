//HEADER FILES USED.
//--------------------

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>

//--------------------

//CLASS DEFINITION FOR PREVIOUS MATCH DETAILS.

//--------------------------------------------

class m1
    {
     public:

     char d[50],m[50],v[50],w[50];

     void input()
	 {

	   cout<<"Date   :";
	   cin>>d;

	   cout<<"Match  :";
	   cin>>m;

	   cout<<"Venue  :";
	   cin>>v;

	   cout<<"Winner :";
	   cin>>w;


	  }


     void output()
	 {

	   cout<<"Date : "<<d;

	   cout<<"  Match : "<<m;

	   cout<<"  Venue : "<<v;

	   cout<<"  Winner : "<<w;


	  }

    }A;
//--------------------------------------------

//FUNCTION TO CREATE A BINARY FILE FOR PREVIOUS MATCH DETAILS.

//--------------------------------------------

void c()
    {
     clrscr();
     cout<<"\n\nENTER PREVIOUS MATCH DETAILS:-\n\n";
     char ch;

     ofstream f1("p.dat",ios::binary|ios::app);

     A.input();

     f1.write((char *)&A,sizeof(A));

     f1.close();

     cout<<"\nAny more entry:";
     cin>>ch;

     if(ch=='y'||ch=='Y')
     c();

     }

//--------------------------------------------

//FUNCTION TO DISPLAY CONTENTS OF BINARY FILE "p.dat".

//--------------------------------------------

void disp()
    {
	cout<<"\n\nPREVIOUS MATCH DETAILS:-\n";

       cout<<"\n*************************************************************************\n\n";

       ifstream f1("p.dat",ios::binary);

     while(f1.read((char * )&A,sizeof(A)))
	  {
	    A.output();
	    cout<<"\n\n";

	  }
	    f1.close();

       cout<<"*************************************************************************\n";

    }

//--------------------------------------------

//FUNCTION TO DELETE RECORDS FROM "p.dat".

//--------------------------------------------


void del1()
    {
     int k;

     ifstream f1("p.dat",ios::binary);
     ofstream f2("temp.dat",ios::binary|ios::app);

      cout<<"Enter record number to be deleted:";
      cin>>k;

      int i=0,m=0;

      while(f1.read((char * )&A,sizeof(A)))
	 {
	  if(i!=k-1)
	  f2.write((char *)&A,sizeof(A));

	     i++;
	   if(i==k-1)
	   m=1;

	 }

	f1.close();
	f2.close();

       remove("p.dat");
       rename("temp.dat","p.dat");

       if(m==1)
	 {	delay(300);
	  gotoxy(23,10);
	cout<<"Deletion complete!";
	}

	else
	  {
	   gotoxy(23,10);
	   cout<<"Record does not exist!!";

	   }
     }

//--------------------------------------------

//CLASS DEFINITION FOR FUTURE MATCH DETAILS.

//--------------------------------------------

class m2

     {
       public:

       char d[50],m[50],v[50];

       void input()
	   {
	     cout<<"Date   :";
	     cin>>d;

	     cout<<"Match  :";
	     cin>>m;

	     cout<<"Venue  :";
	     gets(v);
	   }

       void output()
	   {

	     cout<<"Date : "<<d;

	     cout<<"  Match : "<<m;

	     cout<<"  Venue : "<<v;

	   }


    }B;

//--------------------------------------------

//FUNCTION TO CREATE BINARY FILE FOR FUTURE MATCH DETAILS.

//--------------------------------------------

void c2()
    {
     clrscr();
     cout<<"\n\nENTER FUTURE MATCH DETAILS:-\n\n";
     char ch;

     ofstream f1("p1.dat",ios::binary|ios::app);

     B.input();

     f1.write((char *)&B,sizeof(B));

     f1.close();

     cout<<"\nAny more entry:";
     cin>>ch;

     if(ch=='y'||ch=='Y')

     c2();

    }

//--------------------------------------------

//FUNCTION TO DISPLAY CONENTS OF BINARY FILE "p1.dat".

//--------------------------------------------

void disp2()
    {

     cout<<"\nFUTURE MATCH DETAILS:-\n";

     cout<<"\n********************************************************\n\n";
     ifstream f1("p1.dat",ios::binary);

     while(f1.read((char * )&B,sizeof(B)))
	 {

	  B.output();
	  cout<<"\n\n";

	 }

       f1.close();

       cout<<"*********************************************************\n";

     }

//--------------------------------------------

//FUNCTION TO DELETE RECORDS FROM "p1.dat".

//--------------------------------------------

void del2()
    {
     int k;

     ifstream f1("p1.dat",ios::binary);
     ofstream f2("temp.dat",ios::binary|ios::app);

     cout<<"Enter record number to be deleted:";
     cin>>k;

     int i=0,m=0;

     while(f1.read((char * )&B,sizeof(B)))
	 {

	  if(i!=k-1)
	  f2.write((char *)&B,sizeof(B));

	  if(i==k-1)
	  m=1;

	  i++;

	  }

     f1.close();
     f2.close();

       remove("p1.dat");
       rename("temp.dat","p1.dat");

       if(m==1)
	 {	delay(300);
	  gotoxy(23,10);
	cout<<"Deletion complete!";
	}

	else
	  {
	   gotoxy(23,10);
	   cout<<"Record does not exist!!";

	   }



    }

//--------------------------------------------

//CLASS DEFINITION FOR PLAYER DETAILS.

//--------------------------------------------

class pldt
     {
      public:

      char name[50],type[50],dob[50],team[50];

      int runs,wickets,matches;

      void input()
	  {

	   cout<<"\n\nEnter details:\n\n";

	   cout<<"Name:";
	   gets(name);

	   cout<<"Date of birth:";
	   gets(dob);

	   cout<<"Matches played:";
	   cin>>matches;

	   cout<<"Genuine role:";
	   gets(type);

	   cout<<"Current team:";
	   gets(team);

	   cout<<"Runs:";
	   cin>>runs;

	   cout<<"wickets:";
	   cin>>wickets;

	  }

      void output()
	  {
	    clrscr();

	for(int i=0;i<15;i++)
	    {
	    gotoxy(20,i+10);
	    cout<<"*";
	    }

	    gotoxy(20,25);

       for(i=0;i<20;i++)
	   {
	    cout<<"* ";
	   }


       for( i=0;i<15;i++)
	   {
	    gotoxy(58,i+10);
	    cout<<"*";

	    }

	    gotoxy(20,10);

	for(i=0;i<20;i++)
	    {
	    cout<<"* ";
	     }

	gotoxy(30,7);

	cout<<"Required player details:";

	gotoxy(30,11);
	cout<<"Name:";
	cout<<name;

	gotoxy(30,13);
	cout<<"Date of birth:"<<dob;

	gotoxy(30,15);
	cout<<"Career matches:";
	cout<<matches;

	gotoxy(30,17);
	cout<<"Genuine role:";
	cout<<type;

	gotoxy(30,19);
	cout<<"Current team:";
	cout<<team;

	gotoxy(30,21);
	cout<<"Runs:";
	cout<<runs;

	gotoxy(30,23);
	cout<<"Wickets:";
	cout<<wickets;

     }


    }C;

//--------------------------------------------

//FUNCTION TO CTREATE BINARY FILE FOR PLAYER DETAILS.

//--------------------------------------------


void c3()
   {

    clrscr();

    char ch;

    ofstream f1("p2.dat",ios::binary|ios::app);

    C.input();

    f1.write((char *)&C,sizeof(C));

    f1.close();

    cout<<"\nAny more entry:";
    cin>>ch;

    if(ch=='y'||ch=='Y')

    c3();


   }
//--------------------------------------------

//FUNCTION TO GET PLAYER DETAILS.

//--------------------------------------------

void det()
    {
       ifstream f1("p2.dat",ios::binary);

       int k=-1;

       char ch[100];

       cout<<"\nEnter player name to get required details:";
       gets(ch);

       while(f1.read((char *)&C,sizeof(C)))
	    {
	     if(strcmpi(ch,C.name)==0)
	       {
		C.output();

		k=0;

		}
	    }

	f1.close();

	if(k!=0)
	cout<<"Details Unavailable!!";


   }

//--------------------------------------------

//FUNCTION TO DELETE RECORDS FROM BINARY FILE "p2.dat".

//--------------------------------------------

void del3()
    {
     char ch[100];

     ifstream f1("p2.dat",ios::binary);
     ofstream f2("temp.dat",ios::binary|ios::app);

     cout<<"Enter player name to be deleted:";
     gets(ch);

     int i=0;

     while(f1.read((char * )&C,sizeof(C)))
	 {
	  if(strcmpi(ch,C.name)!=0)
	 {
	 f2.write((char *)&C,sizeof(C));

	  }

	   if(strcmpi(ch,C.name)==0)
	   i=1;

	 }

	f1.close();
	f2.close();

	if(i!=1)
	{ gotoxy(23,10);
	 cout<<"Player not found!";
       }
       else
	 {	delay(300);
	  gotoxy(23,10);
	cout<<"Deletion complete!";
	}
       remove("p2.dat");
       rename("temp.dat","p2.dat");



    }

//--------------------------------------------

//CLASS DEFINITION FOR POINTS TABLE.

//--------------------------------------------

class ptstb
   {
     public:

     char team[20];

     int matw;

     void input()
	 {

	   cout<<"Team:";
	   cin>>team;

	   cout<<"Matches won:";
	   cin>>matw;

	 }

     void output()
	 {
	   cout<<team<<"    "<<matw<<"      "<<matw*2<<"\n";

	  }

   }D;

//--------------------------------------------

//FUNCTION TO CREATE BINARY FILE FOR POINTS TABLE.

//--------------------------------------------

void c4()
    {
     cout<<"Enter 8 team match details:\n";

     for(int i=0;i<8;i++)
	{
	 ofstream f1("p3.dat",ios::binary|ios::app);

	 D.input();

	 f1.write((char *)&D,sizeof(D));

	 f1.close();


	}

     }

//--------------------------------------------

//FUNCTION TO DISPLAY POINTS TABLE.

//--------------------------------------------

void pttbl()
    {
	clrscr();

	cout<<"\n                         POINTS TABLE:-\n";

	gotoxy(22,4);
	cout<<"TEAM       "<<"WINS     "<<"POINTS";

	ifstream f1("p3.dat",ios::binary);
	int i=0;

     while(f1.read((char *)&D,sizeof(D)))
	  {
	   gotoxy(22,7+i);
	   cout<<D.team;

	   gotoxy(32,7+i);
	   cout<<D.matw;

	   gotoxy(42,7+i);
	   cout<<2*D.matw;

	   i++;

	   }

       f1.close();

      for(i=0;i<12;i++)
	 {
	  gotoxy(20,i+3);
	  cout<<"*";

	  }

     gotoxy(20,15);
     for(i=0;i<16;i++)
	 { cout<<"* "; }


      for(i=0;i<12;i++)
	 {
	  gotoxy(50,i+3);
	  cout<<"*";

	  }

      gotoxy(20,3);
      for(i=0;i<15;i++)
	  { cout<<"* "; }

      for(i=0;i<12;i++)
	 {
	  gotoxy(40,i+3);
	  cout<<"*";
	 }


      for(i=0;i<12;i++)
	 {
	   gotoxy(30,i+3);
	   cout<<"*";

	 }

       for( i=0;i<15;i++)
	  {
	   gotoxy(20+2*i,5);
	   cout<<"*";

	   }


    }

//--------------------------------------------

//FUNCTION TO EDIT POINTS TABLE.

//--------------------------------------------

void edit()
    {
      clrscr();

      fstream f("p3.dat",ios::binary|ios::in|ios::out);

      char ch[100];
      int n,k=0;

      cout<<"\nEnter Team to edit points:";
      cin>>ch;

      cout<<"Number of matches won:";
      cin>>n;

      while(f.read((char*)&D,sizeof(D)))
	   {
	    if(strcmp(ch,D.team)==0)
	      {
		k=1;
		D.matw=n;
		f.seekg(f.tellg()-sizeof(D));
		f.write((char*)&D,sizeof(D));
	       }
	    }

      f.close();

      if(k==0)
      cout<<"INVAILD ENTRY.";


    }

//--------------------------------------------

//FUNCTION TO CREATE A TABLE.

//--------------------------------------------

void table()
    {
     clrscr();

     for(int i=0;i<19;i++)
	{

	gotoxy(20,i+7);
	cout<<"*";

	}

       gotoxy(20,25);

      for(i=0;i<19;i++)
	 {
	 cout<<"* ";

	 }


      for( i=0;i<19;i++)
	 {
	  gotoxy(58,i+7);
	  cout<<"*";

	  }

	  gotoxy(20,6);

      for(i=0;i<20;i++)
	 {
	 cout<<"* ";

	 }

    }

//--------------------------------------------

//MAIN FUNCTION.

//--------------------------------------------

void main()

    {
      clrscr();

     gotoxy(22,12);

     delay(200); cout<<"WELCOME";

     delay(200);  cout<<" TO ";

     delay(200);cout<<"IPL ";

     delay(200);  cout<<"2015 ";

     delay(200);  cout<<"DATA ";

     delay(200); cout<<"BASE.";


     gotoxy(15,20);
     cout<<"-By";

     gotoxy(17,22);
     cout<<"PIYUSH CHOWDHARY.";

     gotoxy(17,23);
     cout<<"ALLEN CARVALLO.";

     gotoxy(17,24);
     cout<<"SHAD ALI.";

     char ch,ch1;

  do
   {

     getch();

     table();

     gotoxy(27,9);

     cout<<"1. Create Database.";
     gotoxy(27,11);

     cout<<"2. Display.";
     gotoxy(27,13);

     cout<<"3. Delete.";
     gotoxy(27,15);

     cout<<"4. Edit points table.";
     gotoxy(27,17);

     cout<<"5. Exit.";
     gotoxy(27,19);

     cout<<"Enter Choice:";
     cin>>ch;

if(ch=='1')
  {
    clrscr();

    table();

    gotoxy(30,9);
    cout<<" Entry Screen ";

    gotoxy(25,11);
    cout<<"1.  Previous match details";

    gotoxy(25,13);
    cout<<"2. Future match details";

    gotoxy(25,15);
    cout<<"3. Player Details ";

    gotoxy(25,17);
    cout<<"4. Points Table";

    gotoxy(25,19);
    cout<<"Enter choice:";
    cin>>ch1;

      if(ch1=='1')
	{
	 clrscr();
	 c();
	}

      else if(ch1=='2')
	{
	 clrscr();
	 c2();

	}

      else if(ch1=='3')
	{
	clrscr();
	c3();

	}

      else if(ch1=='4')
	{
	 clrscr();
	 c4();

	}

      else cout<<"Invalid choice.";

  }

else if(ch=='2')
 {
      table();

      gotoxy(27,9);
      cout<<"1.Previous match details.\n";

      gotoxy(27,12);
      cout<<"2.Future match details.\n";

      gotoxy(27,15);
      cout<<"3.Player details.\n";

      gotoxy(27,18);
      cout<<"4.Points table.\n";

      gotoxy(28,21);
      cout<<"Enter choice:";
      cin>>ch1;


      if(ch1=='1')
	{
	 clrscr();
	 disp();

	 }

      else if(ch1=='2')
	{
	 clrscr();
	 disp2();

	 }

      else if(ch1=='3')
	{
	 clrscr();
	 det();

	 }

      else if(ch1=='4')
	{
	 clrscr();
	 pttbl();

	 }


      else
      { gotoxy(27,23);
       cout<<"Invalid choice!.";
      }
 }

else if(ch=='3')

 {

     table();

     gotoxy(27,5);
     cout<<"DELETE RECORDS FROM:\n";


     gotoxy(27,9);
     cout<<"1.Previous match details.\n";

     gotoxy(27,12);
     cout<<"2.Future match details.\n";

     gotoxy(27,15);
     cout<<"3.Player details.\n";

     gotoxy(27,18);
     cout<<"Enter choice:";
     cin>>ch1;

     if(ch1=='1')
       {
	clrscr();
	del1();

	}

      else if(ch1=='2')
	{
	 clrscr();
	 del2();


	 }

      else if(ch1=='3')
	{
	 clrscr();
	 del3();




	}

      else
	{
	gotoxy(28,21);
	cout<<"Invalid choice!.";
	}

 }

else if(ch=='4')
	edit();


else if(ch=='5')
  {
      clrscr();
      cout<<"\nPress ENTER TO Confirm EXIT.";

  }


else

  {
    gotoxy(27,23);
    cout<<"INVALID CHOICE!.";

    }

getch();

    }while(ch!='5');

    }