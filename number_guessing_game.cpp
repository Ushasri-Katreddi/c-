#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

int user_hint;
cout<<"Welcome to guess the number game"<<endl;
cout<<"just guess a random number with hints given below"<<endl;
cout<<"You will have 5 chances to guess the correct number"<<endl;
srand(time(0));
        int secretNumber = 1 + (rand() % 100);
int guess;
int choice;
int replay;
int again;
int again1;
int i;
cout<<"Type '1' inorder to get hints"<<endl;
cin>>user_hint;
if(user_hint == 1){
	cout<<"the number is between "<< secretNumber-10<<" and "<<secretNumber+13<<endl;
}
cout<<"guess the number"<<endl;
cin>>guess;
for(i=0;i<=5;i++){
	if (guess == secretNumber){
		cout<<"Well played!!! you have found the secret number"<<endl;
	    break;
}
	else if(guess>secretNumber){
		cout<<"the number is less than the guessed number"<<endl;
		cout<<"the number is between "<<secretNumber-5<<" and "<<secretNumber+6<<endl;
		cout<<"enter the number again"<<endl;
		cin>>guess;
		if (guess == secretNumber){
		cout<<"Well played!!! you have found the secret number"<<endl;
		break;
    }
}
	else if(guess<secretNumber){
		cout<<"the number is greater than the guessed number"<<endl;
		cout<<"the number is between "<<secretNumber-5<<" and "<<secretNumber+6<<endl;
		cout<<"enter the number again"<<endl;
		cin>>guess;
		if (guess == secretNumber){
		cout<<"Well played!!! you have found the secret number"<<endl;
		break;
	}
}
	else{
		cout<<"invalid input"<<endl;
	}
	while(i==5){
		cout<<"You are out of chances!! Play again"<<endl;
	}
	}
		
	}
	


