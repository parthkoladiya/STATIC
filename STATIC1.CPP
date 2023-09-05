#include <iostream.h>
#include <conio.h>

class Billing
{
private:
    int i,itemCode, quantity;
    char itemName[50];
    float itemPrice,total;



public:
    void inputItem()
    {
	cout << "Enter Item Code: ";
	cin >> itemCode;

	cout << "Enter Item Name: ";
	cin.ignore();
	cin.getline(itemName, 50);

	cout << "Enter Item Price: ";
	cin >> itemPrice;

	cout << "Enter Quantity: ";
	cin >> quantity;

	total = itemPrice * quantity;
    }

    void displayItem()
    {
	cout << "Item Code: " << itemCode << endl;
	cout << "Item Name: " << itemName << endl;
	cout << "Item Price: " << itemPrice << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Total: " << total << endl;
    }
};

void main()
{
    int n;
    clrscr();
    cout << "Enter the number of items: ";
    cin >> n;

    Billing *bill = new Billing[n];

    for (int i = 0; i < n; i++)
    {
	cout << "\nEnter details for Item " << i + 1 << ":" << endl;
	bill[i].inputItem();
    }

    cout << "\nBilling Details:" << endl;
    for ( i = 0; i < n; i++)
    {
        cout << "\nItem " << i + 1 << ":" << endl;
        bill[i].displayItem();
    }

    delete[] bill;

   getch();
}
