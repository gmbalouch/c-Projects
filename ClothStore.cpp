//PROJECT On CLOTH STORE MANAGEMENT SYSTEM//
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

struct logIn{
	string userName;
	string pass;
};

class Cloth{
	private:
		string Item;
		int price, quantity;
		vector<Cloth> ve;
	public:
	add(){
		Cloth cloth;
	
		int choice;
		while(choice!=0 || choice==1){
			cout<<"Enter name of clothing item: ";
			cin>>cloth.Item;
			cout<<"Enter price of clothing item: ";
			cin>>cloth.price;
			cout<<"Enter quantity of clothing item: ";
			cin>>cloth.quantity;
			ve.push_back(cloth);
		
			cout<<"Clothing item added: "<<endl;
			cout<<"Enter 1 for add more or 0 for exist: ";
			cin>>choice;		
		
		}     	
	}	
		 display(){
		 	for(int i=0; i<ve.size(); i++){
				cout<<"Name of clothing item: "<<ve[i].Item<<endl;
	 			cout<<"Price of clothing item: "<<ve[i].price<<endl;
				cout<<"Quantity of clothing item: "<<ve[i].quantity<<endl<<endl;
		
			}
	 	}
	 	
	 	deleteCloth(){
	 		system("cls");
	 		string n;
	 		cout<<"Enter name of item for delete: ";
	 		cin>>n;
	 		for(int i=0; i<ve.size(); i++){
	 			if(n==ve[i].Item){
	 			ve.erase(ve.begin()+i);
	 			cout<<"Clothing item deleted"<<endl<<endl;
				}
			}
	 	}
	 
	bool SignUp(){
	 	bool cond=false;
		logIn log;
	 	
		string username;
	 	string password;
	 	
		cout<<"Enter New Username: ";
	 	cin>>log.userName;
	 	cout<<"Enter New Password: ";
	 	cin>>log.pass;
	 	
	 	cout<<"You registered..\n";
	 	
	 	cout<<"***LOGIN YOURSELF**\n";
	 	cout<<"Enter Username: ";
	 	cin>>username;
	 	cout<<"Enter Password: ";
	 	cin>>password;
	 	
	 	if(username==log.userName && password==log.pass){
	 		cout<<"You are login...\n";
			cond=true;
		}
	
	 return cond;	
	}
		 
};

int main(){
	Cloth cloth;
	int choice;
	char cond;
	
	do{
		cout<<"** SIGN UP **"<<endl<<endl;
		if(cloth.SignUp()){
			cout<<"** CLOTH STORE **"<<endl<<endl;
		
			while(true){
				cout<<"1. for add clothing item: "<<endl;
				cout<<"2. for display clothing item: "<<endl;
				cout<<"3. for delete clothing item: "<<endl;
				cout<<"0. for exist from program: "<<endl;
				cout<<"Enter choice: ";	cin>>choice;
		
				if(choice==1)	cloth.add();
				else if(choice==2){
					system("cls");
					cloth.display();
				}
				else if(choice==3){
					system("cls");
					cloth.deleteCloth();
				}
				else if(choice==0){
					exit(0) ;
				}
				else{ 
					system("cls");
					cout<<"INVALID INPUT "<<endl<<endl;
				}
			}//while
		}//end login
	
		else {
			cout<<"Invalid username or password...\n";
		}
		
		cout<<"Sign again(y)\nexit(n): \n";
		cond=getch();
	}while(cond=='y');
	
	return 0;
}
