#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Restuarant{
	private: 
	  	int burger;
	  	int roll;
	  	int biryani;
	  	int sandwitch;
		int hotshot;
		int bill;
		
		int dealA;
		int dealB;		
		int dealC;
			
	public:
		Restuarant(){
			burger=0;
	 		roll=0;
	 		biryani=0;
	 		sandwitch=0;
	 		hotshot=0;
	 		bill=0;
			dealA=0;
			dealB=0;
			dealC=0;
		
		}
	
	void menu(){
		system("cls");
		cout<<"\t\t\t\t==================================\n";
		cout<<"\t\t\t\t+++++++++++++ORDER AN ITEM++++++++++++\n";
		cout<<"\t\t\t\t==================================\n";
		cout<<"\t\t\t\t1-Burger Rs.200\n"
			<<"\t\t\t\t2-Roll   Rs.120\n"
			<<"\t\t\t\t3-Hot Shot   Rs.200 \n"
			<<"\t\t\t\t4-Biryani   Rs.150 \n"
			<<"\t\t\t\t5-Sandwitch  Rs.130 \n";
		cout<<"\t\t\t\tPress any key to continue...";
		getch();
	}
	
	void orderplace(){
		do{
			int sel;
			system("cls");
			cout<<"\t\t\t\t==================================\n";
			cout<<"\t\t\t\t+++++++++++++ORDER AN ITEM++++++++++++\n";
			cout<<"\t\t\t\t==================================\n";
			cout<<"\t\t\t\t1-Burger \n"
				<<"\t\t\t\t2-Roll\n"
				<<"\t\t\t\t3-Hot Shot\n"
				<<"\t\t\t\t4-Biryani \n"
				<<"\t\t\t\t5-Sandwitch\n"
				<<"\t\t\t\t6-Exit:\n"
				<<"\t\t\t\tSelect item for order: ";
			cin>>sel;
			
			if(sel==1){
				cout<<"\t\t\t\tEnter Burger quantity: ";
				cin>>burger;
				bill+=burger*200;						
			}
			else if(sel==2){
				cout<<"\t\t\t\tEnter roll quantity: ";
				cin>>roll;
				bill+=roll*120;						
			}
			else if(sel==3){
				cout<<"\t\t\t\tEnter hotshot quantity: ";
				cin>>hotshot;
				bill+=hotshot*200;
			}
			else if(sel==4){
				cout<<"\t\t\t\tEnter biryani quantity: ";
				cin>>biryani;
				bill+=biryani*150;
			}
			else if(sel==5){
				cout<<"\t\t\t\tEnter Sandwitch quantity: ";
				cin>>sandwitch;
				bill+=sandwitch*130;
			}
		
			else
				break;	
			cout<<"\t\t\t\tPress any key to continue....";
			getch();
		}while(true);
	
	}//orderplace function
	 
	void receipt(){
		system("cls");
				
		if(bill!=0){
			int orderno=0;
			cout<<"\t\t\t\t==================================\n";
			cout<<"\t\t\t\t-------------Your order------------\n";
			cout<<"\t\t\t\t==================================\n";
			
			if(dealC!=0){
				orderno++;
				cout<<"\t\t\t\t"<<orderno<<": Deal C "<< "quatity: "<<dealC<<" Prize: "<<dealC*1200<<endl;							
			}
			if(dealB!=0){
				orderno++;
				cout<<"\t\t\t\t"<<orderno<<": Deal B "<< "quatity: "<<dealB<<" Prize: "<<dealB*600<<endl;							
			}
			if(dealA!=0){
				orderno++;
				cout<<"\t\t\t\t"<<orderno<<": Deal A "<< "quatity: "<<dealA<<" Prize: "<<dealA*300<<endl;							
			}
			if(biryani!=0){
				orderno++;
				cout<<"\t\t\t\t"<<orderno<<": Biryani "<< "quatity: "<<biryani<<" Prize: "<<biryani*150<<endl;							
			}
			if(burger!=0){
				orderno++;
				cout<<"\t\t\t\t"<<orderno<<": Burger "<< "quatity: "<<burger<<" Prize: "<<burger*200<<endl;							
			}
			if(roll!=0){
				orderno++;
				cout<<"\t\t\t\t"<<orderno<<": Roll "<< "quatity: "<<roll<<" Prize: "<<roll*120<<endl;
			}
			if(sandwitch!=0){
				orderno++;
				cout<<"\t\t\t\t"<<orderno<<": Sandwitch "<< "quatity: "<<sandwitch<<" Prize: "<<sandwitch*130<<endl;
			}
			if(hotshot!=0){
				orderno++;
				cout<<"\t\t\t\t"<<orderno<<": Hotshot "<< "quatity: "<<hotshot<<" Prize: "<<hotshot*200<<endl;
			}
		
			cout<<"\t\t\t\t-------------------------\n"
				<<"\t\t\t\tTotal bill is: "<<bill<<endl;		
		}
		else 
			cout<<"\t\t\t\tYou order nothing";	
			cout<<"\t\t\t\tPress any key to continue.....";
			getch();
	} 
	
	void deals(){
		system("cls");
		int sel;
		do{
			cout<<"\t\t\t\t==================================\n";
			cout<<"\t\t\t\t----------Deals section------------\n";
			cout<<"\t\t\t\t==================================\n"
				<<"\t\t\t\t 1- View Deals.\n"	
				<<"\t\t\t\t 2- Order Deal.\n"
				<<"\t\t\t\t 3- Exit.\n";
				cout<<"\t\t\t\tEnter Selection.";
				cin>>sel;
			
			if(sel==1){
				system("cls");
				cout<<"\t\t\t\t=======================================================\n";
				cout<<"\t\t\t\t-----------------------23 Batch Deal-------------------\n";
				cout<<"\t\t\t\t=======================================================\n"
					<<"\t\t\t\t 1- Deal A (meal for 4 students) Rs.300.\n"	
					<<"\t\t\t\t 2- Deal B (meal for 8 students with 2 stings) Rs.600\n"
					<<"\t\t\t\t 2- Deal C (meal for 8 students with 8 stings) Rs.1200\n"
					<<"\t\t\t\t 3- Exit.\n";
				
				cout<<"\t\t\t\tPress any key to continue..\n";
				getch();
			}//end if 1
		
			if(sel==2){
				system("cls");
				int deal;
				cout<<"\t\t\t\t==================================\n";
				cout<<"\t\t\t\t----------Order a Deal-----------\n";
				cout<<"\t\t\t\t==================================\n"
				<<"\t\t\t\t 1- Deal A Rs.300.\n"	
				<<"\t\t\t\t 2- Deal B Rs.600.\n"
				<<"\t\t\t\t 3- Deal C Rs.1200.\n"
				<<"\t\t\t\t 4- Exit.\n";
				cout<<"\t\t\t\tSelect any deal.";
				cin>>deal;
				
				if(deal==1)	{
					dealA+=1;
					bill+=300;
				}
				if(deal==2){
					dealB+=1;
					bill+=600;
				}	
				if(deal==3)	{
					dealC+=1;
					bill+=1200;
				}
				
			}//end if 2	
//			if(dealA!=0) bill+=dealA*300;
//			if(dealB!=0) bill+=dealB*600;
//			if(dealC!=0) bill+=dealC*1200;
//			
		}while(sel!=3);
		
	}//end deals
	 
};

int main(){
	Restuarant rest;
	
	int sel;
	do{
		system("cls");
		cout<<"\t\t\t\t==================================\n";
		cout<<"\t\t\t\t------  Hilltop Restuarant  -------\n";
		cout<<"\t\t\t\t==================================\n"
			<<"\t\t\t\t1: Menu Card. \n"
			<<"\t\t\t\t2: Place your order.\n"
			<<"\t\t\t\t3: Bill. \n"
			<<"\t\t\t\t4: Deals. \n"
			<<"\t\t\t\t5: Exit. \n"
			<<"\t\t\t\tWhat do you want to do: ";
		cin>>sel;	
		
		if(sel==1) rest.menu();
		if(sel==2) rest.orderplace();	
		if(sel==3) rest.receipt();	
		if(sel==4) rest.deals();
									
		}while(sel!=5);	
	
	return 0;	
}//end main