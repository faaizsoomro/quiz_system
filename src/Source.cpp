#include<conio.h>
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<time.h>
using namespace std ;
void question(int);
void optionA (int);
void optionB (int);
void optionC (int);
void optionD (int);
string key(int);
int login();
void answer(string);
int score;
const int SIZE=5;
string userName;
string password;
string name[SIZE]={"faaiz","Arslan","Mujahid","Israr","Sagar"};
string pass[SIZE]={"1","ali","MH1","Aamir","hussain"};
void main()

{   srand(time(0));
	string corAns="A";
	int n = 15, r, result;
	int getRandNum[15];
	int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int z=0;
	for(int s=1;s<=79;s++)
	{cout<<"*";}             
	cout<<"\n               ENTRY TEST \n               BY *FAAIZ AHMED SOOMRO && *ARSLAN ALI BHUTTO\n";
	for(int s=1;s<=79;s++)
	{cout<<"*";}
	while(z!=1)
		{
			z= login();
			if(z==0)
			{cout<<"\nPLease Enter The Correct Username and Password\n";}
		}
	if(z==1)
	{		
	cout<<"Select any one of the four options:\n";
	for (int x = 0; x < 15; ++x)
		{	
			result = r = 0;	
			r = rand() % n;	
			result = arr[r];	
			getRandNum[x] = arr[result];
			arr[r] = arr[n-1];	
			n--;
			cout<<"Q"<<"("<<x+1<<")"<<".";
			question (result);
			cout<<endl;
			optionA (result);
			optionB (result);
			optionC (result);
			optionD (result);
			corAns=key	(result);
			answer(corAns);
			
			
		}		
	}
	if(score>=10)
		cout<<"Congrats You are selected ! Your score is :  "<<::score<<endl;
	else
		cout<<"You are Failed to Pass this Test\n Passing Marks are 10/15 \n Your Score is : "<<::score<<"\n Better Luck Next Time";
		getch();

}
int login(){
	    cout<<"\nEnter User Name: \n";
		cin>>userName;
		cout<<"Enter Password:  \n";
		cin>>password;

		int f=0;
		for(int i=0; i<SIZE; i++){
		if(name[i].compare(userName)==0&&pass[i].compare(password)==0)
		{
		f=1;
		break;
		}}
return f;
}

void question(int r)

	{	string question;
	  ifstream input;
	  input.open("question.txt");
	
	  if(input.fail())
		cout<<"sorry ! file can not be opened";
	  else;

	  int counter=0;
	while (getline(input, question))
    {   ++counter;
		if(counter==r)
			break;	}  
	cout<<question;
}
void optionA (int r)
{

	string optionA;
	  ifstream input;

	 input.open("optionA.txt");
	  if(input.fail())
		  cout<<"sorry ! file can not be opened";
	  else cout<<"\n";
	  int counter=0;
	while (getline(input, optionA))
    {   ++counter;
		if(counter==r)
			break;	}  
	cout<<optionA;


}
void optionB (int r)
{ 

	  string optionB;
	  ifstream input;

	 input.open("optionB.txt");
	  if(input.fail())
		  cout<<"sorry ! file can not be opened";
	  else cout<<"\n";
	  int counter=0;
	while (getline(input, optionB))
    {   ++counter;
		if(counter==r)
			break;	}  
	cout<<optionB;


}

void optionC (int r)
{ 

		string optionC;
		ifstream input;

		input.open("optionC.txt");
		if(input.fail())
		cout<<"sorry ! file can not be opened";
		else cout<<"\n";
		int counter=0;
		while (getline(input, optionC))
		{++counter;
		if(counter==r)
			break;	}  
		cout<<optionC;
}

void optionD (int r)
{       string optionD;
		ifstream input;

		input.open("optionD.txt");
		if(input.fail())
		cout<<"sorry ! file can not be opened";
		else cout<<"\n";
		int counter=0;
		while (getline(input, optionD))
		{++counter;
		if(counter==r)
			break;	}  
		cout<<optionD;
}
string key(int r)
{		string k;
		ifstream input;
		input.open("key.txt");
	
		if(input.fail())
		cout<<"sorry ! file can not be opened";
		else;

		int counter=0;
		while (getline(input, k))
		{++counter;
		if(counter==r)
			break;	} 
		return k;
}
void answer(string word)
{
	char answerChoice;
	int length=word.length();
	int y=0;
	int score=0;
	cout<<"\nyour answer is :   ";
	while(y!=1)
	{
	cin>>answerChoice;
	answerChoice=tolower(answerChoice);		
		if(answerChoice=='a' || answerChoice=='A')
			for(int i=0;i<length;i++)
			{if(answerChoice==word[i])
				{cout<<"Correct\n";
				y++;
				::score++;}
			else
			{cout<<"InCorrect\n";
			y++;}}
	else if(answerChoice=='b' || answerChoice=='B')
			for(int i=0;i<length;i++)
			{if(answerChoice==word[i])
				{cout<<"Correct\n";
				y++;
				::score++;}
			else
				{cout<<"InCorrect\n";
				y++;}}
	else if(answerChoice=='c' || answerChoice=='C')
			for(int i=0;i<length;i++)
			{if(answerChoice==word[i])
			{cout<<"Correct\n";
			y++;
			::score++;}
			else
			{cout<<"InCorrect\n";
			y++;}}
	else if(answerChoice=='d' || answerChoice=='D')
			for(int i=0;i<length;i++)
			{if(answerChoice==word[i])
			{cout<<"Correct\n";
			y++;
			::score++;}
			else
			{cout<<"InCorrect\n";
			y++;}}
	else
			cout<<"Wrong Key Please Enter One Of Given Options:  \n";
	}

		
}