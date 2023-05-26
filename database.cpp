#include <iostream>
#include <fstream>
using namespace std;
add(const string& data){
	string name, phone, address;
	cout<<"Enter name: "; cin>>name;
	cout<<"Enter Ph No: "; cin>>phone;
	cout<<"Enter address: "; cin>>address;
	
	ofstream out("E:/data.txt", ios::app);
	if(out.is_open()){
		out<<name<<" , "<<phone<<" , "<<address<<endl<<endl;
		out.close();
		cout<<"Added successfuly: "<<endl<<endl;
	}
	else{
		cout<<"File not found"<<endl;
	}
}
	display(const string& data){
		ifstream in("E:/data.txt");
		if(in.is_open()){
			string line;
			while(getline(in,line)){
				cout<<line<<endl;
			}
			in.close();
			
		}
		else{
			cout<<"Error"<<endl;
		}
	}
	int main(){
		cout<<"***** Database Management *****"<<endl<<endl;
		int choice;
		while(true){
			cout<<"1. for add"<<endl;
			cout<<"2. for display"<<endl;
			cout<<"0. for exit"<<endl;
			cout<<"Enter choice: "; cin>>choice;
			
			if(choice==1){
				add("E:/data.txt");
			}
			else if(choice==2){system("cls");
				display("E:/data.txt");
			}
			else if(choice==0){
				exit(0);
			}
			else{system("cls");
				cout<<"Invalid input"<<endl<<endl;
			}
		}
	}
