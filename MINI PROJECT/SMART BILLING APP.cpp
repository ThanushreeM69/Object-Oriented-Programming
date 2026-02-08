#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){
	string ItemName;
	int quantity,choice;
	float price,itemTotal,Grandtotal=0;
	float GSTRate=0.18;
	float TaxAmount,FinalAmount;
	
	cout<<"___________________________________________"<<endl;
	cout<<"      SMART BILLING CONSOLE APP             "<<endl;
	cout<<"____________________________________________"<<endl;
	
	do{
		cout<<"1.Add New Item\n";
		cout<<"2.Generate final bill &Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"Enter Item Name:";
				cin.ignore();
				getline(cin, ItemName);
				
				cout<<"Enter Qunantity:";
				cin>>quantity;
				
				cout<<"ENter Price:";
				cin>>price;
				
				itemTotal=quantity*price;
				Grandtotal+=itemTotal;
				
				cout<<fixed<<setprecision(2);
				cout<<">>"<<ItemName<<"added.Subtotal:Rs"<<itemTotal<<endl;
				break;
				
				case 2:
					
					TaxAmount=Grandtotal*GSTRate;
					FinalAmount=Grandtotal+TaxAmount;
					
					cout<<"Subtotal: Rs"<<Grandtotal<<endl;
					cout<<"GST(18):  Rs"<<TaxAmount<<endl;
					cout<<"_____________________________________________"<<endl;
					cout<<"GrandTotal:Rs"<<FinalAmount<<endl;
					
					cout<<"\n__________________________________________"<<endl;
					cout<<"******************FINAL BILL***************"<<endl;
					cout<<"Grand Total:Rs"<<Grandtotal<<endl;
					cout<<"_____________________________________________"<<endl;
					cout<<"**************THANK YOU FOR SHOPPING!!************"<<endl;
					
					break;
					
					default:
						cout<<"*********INVALID CHOICE!! PLEASE TRY AGAIN***********"<<endl;
						}
						
		}while(choice!=2);
		
		return 0;
}
