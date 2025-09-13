#include <iostream>
using namespace std;

int main()
{
	const int maxCustomers = 10, maxLength = 50;

	// Arrays for individual products
	int productStock1 = 20, productStock2 = 15, productStock3 = 10, productStock4 = 8, productStock5 = 5;
	int productStock6 = 25, productStock7 = 12, productStock8 = 18, productStock9 = 7, productStock10 = 22;
	int productStock11 = 11, productStock12 = 16, productStock13 = 19, productStock14 = 21, productStock15 = 13;
	int productStock16 = 14, productStock17 = 9, productStock18 = 6, productStock19 = 24, productStock20 = 17;
	//Indiviual Product Prices:
	float productPrice1 = 50.0, productPrice2 = 30.0, productPrice3 = 25.0, productPrice4 = 40.0, productPrice5 = 15.0;
	float productPrice6 = 60.0, productPrice7 = 35.0, productPrice8 = 45.0, productPrice9 = 20.0, productPrice10 = 55.0;
	float productPrice11 = 27.0, productPrice12 = 33.0, productPrice13 = 48.0, productPrice14 = 38.0, productPrice15 = 28.0;
	float productPrice16 = 36.0, productPrice17 = 23.0, productPrice18 = 19.0, productPrice19 = 58.0, productPrice20 = 32.0;

	char customerName[maxCustomers * maxLength] = {};
	char customerContact[maxCustomers * maxLength] = {};
	int customerID[maxCustomers] = {};
	int customerAge[maxCustomers] = {};
	int customerCount = 0;

	while (true)
	{
		// Displlaying Menu:
		cout << endl << "--- Grocery Shop Management System ---" << endl;
		cout << "1. Display Products." << endl;
		cout << "2- Add Customer." << endl;
		cout << "3- Sell Products." << endl;
		cout << "4- Restock Products." << endl;
		cout << "5- Search Products" << endl;
		cout << "6- View Customers." << endl;
		cout << "7- Generate Low Stock Report." << endl;
		cout << "8- Exit" << endl;
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;

		if (choice == 1)
		{
		//Displaying Products detail
			cout << endl << "Product List" << endl;
			cout << "ID: 1, Name: Apple, Price: $" << productPrice1 << ", Stock: " << productStock1 << endl;
			cout << "ID: 2, Name: Banana, Price: $" << productPrice2 << ", Stock: " << productStock2 << endl;
			cout << "ID: 3, Name: Orange, Price: $" << productPrice3 << ", Stock: " << productStock3 << endl;
			cout << "ID: 4, Name: Mango, Price: $" << productPrice4 << ", Stock: " << productStock4 << endl;
			cout << "ID: 5, Name: Grapes, Price: $" << productPrice5 << ", Stock: " << productStock5 << endl;
			cout << "ID: 6, Name: Potato, Price: $" << productPrice6 << ", Stock: " << productStock6 << endl;
			cout << "ID: 7, Name: Tomato, Price: $" << productPrice7 << ", Stock: " << productStock7 << endl;
			cout << "ID: 8, Name: Onion, Price: $" << productPrice8 << ", Stock: " << productStock8 << endl;
			cout << "ID: 9, Name: Cucumber, Price: $" << productPrice9 << ", Stock: " << productStock9 << endl;
			cout << "ID: 10, Name: Carrot, Price: $" << productPrice10 << ", Stock: " << productStock10 << endl;
			cout << "ID: 11, Name: Milk, Price: $" << productPrice11 << ", Stock: " << productStock11 << endl;
			cout << "ID: 12, Name: Eggs, Price: $" << productPrice12 << ", Stock: " << productStock12 << endl;
			cout << "ID: 13, Name: Bread, Price: $" << productPrice13 << ", Stock: " << productStock13 << endl;
			cout << "ID: 14, Name: Rice, Price: $" << productPrice14 << ", Stock: " << productStock14 << endl;
			cout << "ID: 15, Name: Sugar, Price: $" << productPrice15 << ", Stock: " << productStock15 << endl;
			cout << "ID: 16, Name: Salt, Price: $" << productPrice16 << ", Stock: " << productStock16 << endl;
			cout << "ID: 17, Name: Tea, Price: $" << productPrice17 << ", Stock: " << productStock17 << endl;
			cout << "ID: 18, Name: Oil, Price: $" << productPrice18 << ", Stock: " << productStock18 << endl;
			cout << "ID: 19, Name: Chicken, Price: $" << productPrice19 << ", Stock: " << productStock19 << endl;
			cout << "ID: 20, Name: Fish, Price: $" << productPrice20 << ", Stock: " << productStock20 << endl;
		}
		else if (choice == 2)
		{
			if (customerCount >= maxCustomers)
			{
				//Adding Customer or Customer information
				cout << "Customer limit reached!" << endl;
			}
			else
			{
				int index = customerCount * maxLength;
				cout << "Enter Customer Name: ";
				cin >> ws;
				
				cin>>(customerName + index);
				cout << "Enter Customer Age: ";
				cin >> customerAge[customerCount];
				cout << "Enter Customer Contact Information: ";
				cin >> ws;
				cin>>(customerContact + index);
				customerID[customerCount] = customerCount + 1;
				cout << "Customer added successfully with ID: " << customerID[customerCount] << endl;
				customerCount++;
			}
		}
		else if (choice == 3)
		{
			//Selliing Products:
			cout << "Enter Customer ID: ";
			int custID, prodID, quantity;
			cin >> custID;
			if (custID <= 0 || custID > customerCount)
			{
				cout << "Invalid Customer ID!\n";
			}
			else
			{
				cout << "Enter Product ID (1-20): ";
				cin >> prodID;
				cout << "Enter Quantity: ";
				cin >> quantity;
				if (prodID < 1 || prodID > 20 || quantity <= 0)
				{
					cout << "Invalid Product ID or Quantity!\n";
				}
				else
				{
					// Checking product ID and reducing stock
					if (prodID == 1 && quantity <= productStock1)
					{
						productStock1 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 2 && quantity <= productStock2)
					{
						productStock2 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 3 && quantity <= productStock3)
					{
						productStock3 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 4 && quantity <= productStock4)
					{
						productStock4 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 5 && quantity <= productStock5)
					{
						productStock5 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 6 && quantity <= productStock6)
					{
						productStock6 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 7 && quantity <= productStock7)
					{
						productStock7 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 8 && quantity <= productStock8)
					{
						productStock8 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 9 && quantity <= productStock9)
					{
						productStock9 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 10 && quantity <= productStock10)
					{
						productStock10 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 11 && quantity <= productStock11)
					{
						productStock11 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 12 && quantity <= productStock12)
					{
						productStock12 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 13 && quantity <= productStock13)
					{
						productStock13 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 14 && quantity <= productStock14)
					{
						productStock14 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 15 && quantity <= productStock15)
					{
						productStock15 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 16 && quantity <= productStock16)
					{
						productStock16 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 17 && quantity <= productStock17)
					{
						productStock17 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 18 && quantity <= productStock18)
					{
						productStock18 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 19 && quantity <= productStock19)
					{
						productStock19 -= quantity;
						cout << "Purchase successful!\n";
					}
					else if (prodID == 20 && quantity <= productStock20)
					{
						productStock20 -= quantity;
						cout << "Purchase successful!\n";
					}
					else
					{
						cout << "Insufficient stock or invalid product ID!\n";
					}
				}
			}
		}
		else if (choice == 4)
		{
			//Restocking Products
			cout << "Enter Product ID (1-20) to Restock: ";
			int prodID, quantity;
			cin >> prodID;
			cout << "Enter Quantity to Add: ";
			cin >> quantity;
			if (prodID < 1 || prodID > 20 || quantity <= 0)
			{
				cout << "Invalid Product ID or Quantity!\n";
			}
			else
			{
				if (prodID == 1)
				{
					productStock1 += quantity;
				}
				else if (prodID == 2)
				{
					productStock2 += quantity;
				}
				else if (prodID == 3)
				{
					productStock3 += quantity;
				}
				else if (prodID == 4)
				{
					productStock4 += quantity;
				}
				else if (prodID == 5)
				{
					productStock5 += quantity;
				}
				else if (prodID == 6)
				{
					productStock6 += quantity;
				}
				else if (prodID == 7)
				{
					productStock7 += quantity;
				}
				else if (prodID == 8)
				{
					productStock8 += quantity;
				}
				else if (prodID == 9)
				{
					productStock9 += quantity;
				}
				else if (prodID == 10)
				{
					productStock10 += quantity;
				}
				else if (prodID == 11)
				{
					productStock11 += quantity;
				}
				else if (prodID == 12)
				{
					productStock12 += quantity;
				}
				else if (prodID == 13)
				{
					productStock13 += quantity;
				}
				else if (prodID == 14)
				{
					productStock14 += quantity;
				}
				else if (prodID == 15)
				{
					productStock15 += quantity;
				}
				else if (prodID == 16)
				{
					productStock16 += quantity;
				}
				else if (prodID == 17)
				{
					productStock17 += quantity;
				}
				else if (prodID == 18)
				{
					productStock18 += quantity;
				}
				else if (prodID == 19)
				{
					productStock19 += quantity;
				}
				else if (prodID == 20)
				{
					productStock20 += quantity;
				}
				cout << "Restocking successful!\n";
			}
		}
		else if (choice == 5)
		{
			//Adding new features soon...
			cout << "Search Products Feature Coming Soon!\n";
		}
		else if (choice == 6)
		{
			cout << endl << "Customer List: " << endl;
			for (int i = 0; i < customerCount; i++)
			{
				int index = i * maxLength;
				cout << "ID: " << customerID[i] << ", Name: " << customerName + index << ", Age: " << customerAge[i] << ", Contact: " << customerContact + index << endl;
			}
		}
		else if (choice == 7)
		{
			//Displaying out of stock items:
			cout << "Low Stock Report: " << endl;
			if (productStock1 < 5) cout << "Product 1 - Apple is low in stock!" << endl;
			if (productStock2 < 5) cout << "Product 2 - Banana is low in stock!" << endl;
			if (productStock3 < 5) cout << "Product 3 - Orange is low in stock!" << endl;
			if (productStock4 < 5) cout << "Product 4 - Mango is low in stock!" << endl;
			if (productStock5 < 5) cout << "Product 5 - Grapes is low in stock!" << endl;
			if (productStock6 < 5) cout << "Product 6 - Potato is low in stock!" << endl;
			if (productStock7 < 5) cout << "Product 7 - Tomato is low in stock!" << endl;
			if (productStock8 < 5) cout << "Product 8 - Onion is low in stock!" << endl;
			if (productStock9 < 5) cout << "Product 9 - Cucumber is low in stock!" << endl;
			if (productStock10 < 5) cout << "Product 10 - Carrot is low in stock!" << endl;
			if (productStock11 < 5) cout << "Product 11 - Milk is low in stock!" << endl;
			if (productStock12 < 5) cout << "Product 12 - Eggs is low in stock!" << endl;
			if (productStock13 < 5) cout << "Product 13 - Bread is low in stock!" << endl;
			if (productStock14 < 5) cout << "Product 14 - Rice is low in stock!" << endl;
			if (productStock15 < 5) cout << "Product 15 - Sugar is low in stock!" << endl;
			if (productStock16 < 5) cout << "Product 16 - Salt is low in stock!" << endl;
			if (productStock17 < 5) cout << "Product 17 - Tea is low in stock!" << endl;
			if (productStock18 < 5) cout << "Product 18 - Oil is low in stock!" << endl;
			if (productStock19 < 5) cout << "Product 19 - Chicken is low in stock!" << endl;
			if (productStock20 < 5) cout << "Product 20 - Fish is low in stock!" << endl;
		}
		else if (choice == 8)
		{
			//Terminal Point
			cout << "You quit the menu!";
			break;
		}
	}

	return 0;
}