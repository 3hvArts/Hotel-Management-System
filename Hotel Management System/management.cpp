#include <iostream>
using namespace std;

int main()
{
	int quant;
	int choice;

	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0; //Quantity

	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0; //Food items sold

	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0; //Total proce of items

	cout << "\n\t Quantity of items we have";
	cout << "\n Rooms available: ";
	cin >> Qrooms;
	cout << "\n Quantity of Pasta : ";
	cin >> Qpasta;
	cout << "\n Quantity of Burger :";
	cin >> Qburger;
	cout << "\n Quantity of Noodles :";
	cin >> Qnoodles;
	cout << "\n Quantity of Shake :";
	cin >> Qshake;
	cout << "\n Quantity of Chicken :";
	cin >> Qchicken;

	cout << "\n\t\t\t Please select from the menu option";
	cout << "\n\n1) Rooms ";
	cout << "\n2) Pasta";
	cout << "\n3) Burger";
	cout << "\n4) Noodles";
	cout << "\n5) Shake";
	cout << "\n6) Chicken";
	cout << "\n7) Information regarding sales and collection";
	cout << "\n8) Exit";

	cout << "\n\n Please enter your choice! ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "\n\n Enter the numbers of room you want : ";

			cin >> quant;
			if (Qrooms - Srooms >= quant)
			{
				Srooms = Srooms + quant;
				Total_rooms = Total_rooms + quant * 1200;
				cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";

			}
			else
			{
				cout << "\n\tOnly" << Qrooms - Srooms << "Rooms remaining in hotel";
				break;
			}
		case 2:
			cout << "\n\n Enter Pasta Quantity : ";

			cin >> quant;
			if (Qpasta - Spasta >= quant)
			{
				Qpasta = Spasta + quant;
				Total_pasta = Total_pasta + quant * 250;
				cout << "\n\n\t\t" << quant << "Your Pasta is on Cooking!";

			}
			else
			{
				cout << "\n\tOnly" << Qpasta - Spasta << "Remaining Pasta on menu ";
				break;
			}
		case 3:
			cout << "\n\n Enter Burger Quantity : ";

			cin >> quant;
			if (Qburger - Sburger >= quant)
			{
				Qburger = Sburger + quant;
				Total_burger = Total_burger + quant * 250;
				cout << "\n\n\t\t" << quant << "Your Buger is on Cooking!";
			}
			else
			{
				cout << "\n\tOnly" << Qburger - Sburger << "Remaining Burger on Menu";
				break;
			}
		case 4:
			cout << "\n\n Enter Noodles Quantity : ";

			cin >> quant;
			if (Qnoodles - Snoodles >= quant)
			{
				Qnoodles - Snoodles + quant;
				Total_noodles = Total_noodles + quant * 250;
				cout << "\n\n\t\t" << quant << "Your Noodles is on Cooking!";
			}
			else
			{
				cout << "\n\tOnly" << Qnoodles - Snoodles << "Remaining Noodles on Menu";
				break;
			}
		case 5:
			cout << "\n\n Enter Shake Quantity :";

			cin >> quant;
			if (Qshake - Sshake >= quant)
			{
				Qshake - Sshake + quant;
				Total_shake = Total_shake + quant * 250;
				cout << "\n\n\t\t" << quant << "Your Shake is on Going!";
			}
			else
			{
				cout << "\n\tOnly" << Qshake - Sshake << "Remaining Shakes on Menu";
				break;
			}
		case 6:
			cout << "\n\n Enter Chicken Quantity : ";

			cin >> quant;
			if (Qchicken - Schicken >= quant)
			{
				Qchicken - Schicken + quant;
				Total_chicken = Total_chicken + quant * 250;
				cout << "\n\n\t\t" << quant << "Your Chicken is on Cooking!";
			}
			else
			{
				cout << "\n\tOnly" << Qchicken - Schicken << "Remaining Chicken on Menu";
				break;
			}
		case 7:
			cout << "\n\tDetails of sales and collection";
			cout << "\n\n Numbers of rooms we had :" << Qrooms;
			cout << "\n\n Numbers of rooms we gave for rent" << Srooms;
			cout << "\n\n Remaining rooms" << Qpasta - Spasta;
			cout << "\n\n Total rooms collection for the day : " << Total_rooms;

	
			cout << "\n\n Numbers of Pasta we had :" << Qpasta;
			cout << "\n\n Numbers of Pasta we gave for sold" << Spasta;
			cout << "\n\n Remaining Pasta" << Qpasta - Spasta;
			cout << "\n\n Total Pasta collection for the day : " << Total_pasta;

			
			cout << "\n\n Numbers of Burger we had :" << Qburger;
			cout << "\n\n Numbers of Burger we gave for sold" << Sburger;
			cout << "\n\n Remaining Burger" << Qburger - Sburger;
			cout << "\n\n Total Burger collection for the day : " << Total_burger;

			cout << "\n\n Numbers of Noodles we had :" << Qnoodles;
			cout << "\n\n Numbers of Noodles we gave for sold" << Snoodles;
			cout << "\n\n Remaining Noodles" << Qnoodles - Snoodles;
			cout << "\n\n Total Noodles collection for the day : " << Total_noodles;

			cout << "\n\n Numbers of Shakes we had :" << Qshake;
			cout << "\n\n Numbers of Shakes we gave for sold" << Sshake;
			cout << "\n\n Remaining Shakes" << Qshake - Sshake;
			cout << "\n\n Total Shakes collection for the day : " << Total_shake;

			cout << "\n\n Numbers of Chicken we had :" << Qchicken;
			cout << "\n\n Numbers of Chicken we gave for sold" << Schicken;
			cout << "\n\n Remaining Chicken" << Qchicken - Schicken;
			cout << "\n\n Total Chicken collection for the day : " << Total_chicken;

			cout << "\n\n\n Total Collection for the day!: " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
			break;

		case 8:
			exit(0);

		default:
			cout << "\n Please select the number mentioned above!";
	}
	
}