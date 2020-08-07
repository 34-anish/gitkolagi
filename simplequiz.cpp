#include <iostream>
#include <conio.h>
#include <time.h>  
#include <unistd.h>
#include <stdlib.h>
#include <cmath>
#include <windows.h>
//test change 123
static int level; //level is made global
using namespace std;
class question{
	string q[10];
	char a[10];
	int i;

	public:
	void question_creator() //10 questions are written along with the appropriate answer
		{
			q[0]="Which is the brightest planet in the solar system? \n a. sun \n b. jupiter \n c. venus \n d.mars \n";
			a[0]='c';
			q[1]="What is the name of Nepal's 2nd president \na. KP OLI \n b. Ram Baran yadav \n c. Bidhya Devi Bhandari \n d. Sishir Bastola \n";
			a[1]='c';
			q[2]="Which is the highest mountain in the world \n a. Sagarmatha \n b. Kanchanjung \n c. K2 \n d. Cho Olo \n";
			a[2]='a';
			q[3]="How many rings are present on the logo of Olympic \na. 5\n b.6 \n c. 7 \n d. 8 \n";
			a[3]='a';
			q[4]="Which is the most populated country in the world? \na. India \n b. Russia \n c. USA \n d. China";
			a[4]='d';
			q[5]="What is the SI unit of magnetic flux? \n a. Gauss \n b. Watt \n c. Ampere \n d. Gauss \n";
			a[5]='d';
			q[6]="Which team won EPL 2019-20? \n a. Chelsea \n b. Liverpool \n c. Totenham \n d. Manchester United \n";
			a[6]='b';
			q[7]="What is the pH value of Water at normal temperature? \n a. 6 \n b. 7 \n c. 8\n d.9 \n" ;
			a[7]='b';
			q[8]="Who is known as father of science? \n a. Albert Einstein \n b. Issac Newton \n c. Gallileo Gallielo \n d. Charles Babbage \n";
			a[8]='c';
			q[9]="Who wrote the first hello world program? \n a.Brian Kernighan \n b. Bjarne Stroutsop \n c. Wang Lee \n d. Dennis Ritchie \n";
			a[9]='a';			
			
			
		  
  		srand (time(NULL));
  		this->i=rand()%10; //gives a random no. to i

			cout << q[i] <<endl;
	
		}
		void answer_checkor(char opt)
		{
			
			if (opt == a[i])
			{
				cout << "Correct Option" <<endl;
			cout<<"Score is:" <<score(level);

			}
			else 
			{

				cout <<"Wrong Option" <<endl;
								exit(0);
			}
			
		}
		int score(int level)
		{
			return (pow(2,level)*100);
		}
};
class question1{
	string q[10];
	char a[10];
	int i;
	public:

		void question_creator()
		{
			q[0]="Which is the brightest planet in the solar system? \n a. sun \n b. jupiter \n c. venus \n d.mars \n";
			a[0]='c';
			q[1]="What is the name of Nepal's 2nd president \na. KP OLI \n b. Ram Baran yadav \n c. Bidhya Devi Bhandari \n d. Sishir Bastola \n";
			a[1]='c';
			q[2]="Which is the highest mountain in the world \n a. Sagarmatha \n b. Kanchanjung \n c. K2 \n d. Cho Olo \n";
			a[2]='a';
			q[3]="How many rings are present on the logo of Olympic \na. 5\n b.6 \n c. 7 \n d. 8 \n";
			a[3]='a';
			q[4]="Which is the most populated country in the world? \na. India \n b. Russia \n c. USA \n d. China";
			a[4]='d';
			q[5]="What is the SI unit of magnetic flux? \n a. Gauss \n b. Watt \n c. Ampere \n d. Gauss \n";
			a[5]='d';
			q[6]="Which team won EPL 2019-20? \n a. Chelsea \n b. Liverpool \n c. Totenham \n d. Manchester United \n";
			a[6]='b';
			q[7]="What is the pH value of Water at normal temperature? \n a. 6 \n b. 7 \n c. 8\n d.9 \n" ;
			a[7]='b';
			q[8]="Who is known as father of science? \n a. Albert Einstein \n b. Issac Newton \n c. Gallileo Gallielo \n d. Charles Babbage \n";
			a[8]='c';
			q[9]="Who wrote the first hello world program? \n a.Brian Kernighan \n b. Bjarne Stroutsop \n c. Wang Lee \n d. Dennis Ritchie \n";
			a[9]='a';			
			
			
		  
  		srand (time(NULL));
  		this->i=rand()%10;

			cout << q[i] <<endl;
	
		}
		void answer_checkor(char opt)
		{
			
			if (opt == a[i])
			{
		
				cout << "Correct Option" <<endl;
			cout<<"Score is:" <<score(level);

			}
			else 
			{

				cout <<"Wrong Option" <<endl;
				exit(0);
			}
			
		}
			int score(int level)
		{
			return (pow(2,level)*100);
		}
		
};
int main(void){
	
question first; 
char opt;
first.question_creator();
cin >> opt;
first.answer_checkor(opt);
Sleep(1000);
			system("cls");
			level++;
question1 second;
second.question_creator();
cin >> opt;
second.answer_checkor(opt);

}

