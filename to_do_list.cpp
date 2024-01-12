#include<iostream>
#include<string>
using namespace std;
int main(){
int option;
string add;
int i=1;
int n;
int view;
string t1;
string temp;
int inde;
int del;
cout<<"WELCOME TO TO-DO LIST"<<endl;
cout<<"1.Add the tasks"<<endl;
cout<<"2.View the tasks"<<endl;
cout<<"3.Mark as completed the tasks"<<endl;
cout<<"4.Delete the tasks"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter the option"<<endl;
cin>> option;
if(option == 1){
	cout<<"Enter the number of tasks"<<endl;
	cin>>n;
	cout<<"ENTER THE TASKS HERE:"<<endl;
    while(i<=n){
    	cout<<i<<".";
    	cin>>t1;
    	i=i+1;
	}
	
}
cout<<"\n\n\n";

cout<<"1.Add the tasks"<<endl;
cout<<"2.View the tasks"<<endl;
cout<<"3.Mark as completed the tasks"<<endl;
cout<<"4.Delete the tasks"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter the option"<<endl;
cin>> option;
if(option ==2){
	cout<<"VIEW THE TASKS"<<endl;
	cout<<"There are "<<i-1<<" tasks"<<endl;
	}

cout<<"\n\n\n";
cout<<"1.Add the tasks"<<endl;
cout<<"2.View the tasks"<<endl;
cout<<"3.Mark as completed the tasks"<<endl;
cout<<"4.Delete the tasks"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter the option"<<endl;
cin>> option;
if(option ==3){
	cout<<"MARK THE TASKS AS COMPLETED"<<endl;
	cout<<"Enter the index of the task completed : ";
	cin>>inde;
	if(inde<=n){
		cout<<"Invalid input"<<endl;
	
	cout<<"Task "<< inde<<" has been successfully marked complete"<<endl;
}
else{
	cout<<"Invalid entry"<<endl;
}
}
	
cout<<"\n\n\n";
cout<<"1.Add the tasks"<<endl;
cout<<"2.View the tasks"<<endl;
cout<<"3.Mark as completed the tasks"<<endl;
cout<<"4.Delete the tasks"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter the option"<<endl;
cin>> option;
if(option == 4){
	cout<<"DELETE THE TASKS"<<endl;
	cout<<"Enter the index of the task to be deleted: ";
	cin>>del;
	if(del<=n){
	
	cout<<"The task "<<del<<" has been deleted"<<endl;
}
else{
	cout<<"Invalid entry"<<endl;
}
}
cout<<"\n\n\n";
cout<<"1.Add the tasks"<<endl;
cout<<"2.View the tasks"<<endl;
cout<<"3.Mark as completed the tasks"<<endl;
cout<<"4.Delete the tasks"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter the option"<<endl;
cin>> option;
if(option == 5){
	cout<<"Exit"<<endl;
}
}



