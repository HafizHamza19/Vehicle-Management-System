#include<iostream>
#include<conio.h>
#include <string>
#include <stdio.h>
using namespace std;
void main(void)
{
	cout <<"===========Welcome to Suzuki Company Motors Buy Online==========="<<endl<<endl;
	int opt;
	printf("Please Enter What Do You Want To Buy (1)Car/(2)Ravi /(3)Bolan: ");
	scanf("%d",&opt);
	switch (opt)
	{
	case (1):
		int price;
		cout <<endl<<"Enter Your Range In $USD: ";
		cin  >>price;
		if (price>=16207.97)
		{
			cout <<"You have Option To Buy"<<endl<<" \t\tCiaz Manual=16207.97$"<<endl<<"\t\tCiaz Automatic=17543.53$"<<endl<<endl;

		}
		if (price>=33293 && price<16207.53 )
			{
				cout <<"You have Option To Buy"<<endl<<"\t\tVitara GL+=33293.59$"<<endl<<"\t\tVitara GLX=36155.50$"<<endl;
		
		}

		if (price>=9816 && price<33293)
			{
			cout <<"You have Option To Buy"<<endl<<"\t\tWagon-R VXR	=9816.38$"<<endl<<"\t\tWagon-R VXL=10197.95$"<<endl;

		}
		if (price>=12659 && price<9816)
			{
			cout <<"You have Option To Buy"<<endl<<"\t\tSwift Auto Navi = 14414.50$"<<endl<<"\t\tSwift Automatic = 13956.60$"<<endl<<endl<<"\t\tSwift 1.3 DLX Navi = 13117.10$"<<endl<<"\t\tSwift 1.3 DLX=12659.20$"<<endl;
		}
		
		if (price>=6200 && price<7374.20)
			{
			cout <<"You have Option To Buy"<<endl<<"\t\tMehran VX = 6200.81$"<<endl<<"\t\tMehran VXR = 6706.42$"<<endl<<endl<<"\t\tMehran VX CNG = 6868.59$"<<endl<<"\t\tMehran VXR CNG=7374.20$"<<endl;
		}
	
	case (2):
		cout <<"\t\t\tHere Is Only One Model Of Ravi"<<endl;
		cout <<"\t\t\t======Price Of Ravi=====";
		cout <<"\n\t\t\tRavi EURO II = 6362.99$";
			break;
	case (3):
		cout <<"\t\t\tHere Is Two Model Of Bolan"<<endl;
		cout <<"\t\t\t======Price Of Bolan=====";
		cout <<"\n\t\t\tBolan VX EURO II = 6916.29$"<<endl<<"\t\t\tCargo Van EURO II = 6639.64"<<endl;
		break;
	default :
        cout <<"\n Code is out of range: "<<endl;
	}
	     
	        char b;
			cout <<endl<<"If You Want To Buy This Car Please Press Y If No Press N :";
			cin>>b;
			if (b=='N')
			{ cout <<"Thanks For Visit Suzuki Company Motors Buy Online";
			}
			else if (b =='Y')
			{
				char name[20];
				cout<<endl<<"Enter Your Name :";
				cin >> name;
				string nic;
				cout<<"\nEnter Your NIC No :";
				cin >> nic;
				string cc;
				cout<<"\nEnter Your Credit Card No :";
				cin >> cc;
				string ad;
				cout <<"\nEnter Your Adress :";
				cin >> ad;
			    string cell;
				cout <<"\nEnter Cell No : ";
				cin >> cell;
				string email;
				cout <<"\nEnter Email Adress : ";
				cin >> email;
			    cout <<endl<<"\nThanks For Buy";
				cout <<endl<<"\nAfter Complete Process I Will Send Email For Conformation"<<endl;
			}





	getch();

	
	}