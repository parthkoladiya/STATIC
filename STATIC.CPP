#include<iostream.h>
#include<conio.h>
#include<string.h>
class Company {
private:
    static char companyName[50];
    char employeeName[50];
    char address[100];
    char area[50];
    char city[50];
    char state[50];
    char department[50];
    float salary;
    int age;
    int experience;
    int yearsSpendInCompany;

public:
    static void setCompanyName(const char* name) {
	strcpy(companyName, name);
    }

    static const char* getCompanyName() {
	return companyName;
    }

    void setEmployeeData()
    {
	cout << "Enter Employee Name: ";
	cin >> employeeName;

	cout << "Enter Address: ";
	cin >> address;

	cout << "Enter Area: ";
	cin >> area;

	cout << "Enter City: ";
	cin >> city;

	cout << "Enter State: ";
	cin >> state;

	cout << "Enter Department: ";
	cin >> department;

	cout << "Enter Salary: ";
	cin >> salary;

	cout << "Enter Age: ";
	cin >> age;

	cout << "Enter Experience: ";
	cin >> experience;

	cout << "Enter Years Spent in the Company: ";
	cin >> yearsSpendInCompany;
    }

    void displayEmployeeData()
    {
	cout << "Company Name: " << companyName << endl;
	cout << "Employee Name: " << employeeName << endl;
	cout << "Address: " << address << endl;
	cout << "Area: " << area << endl;
	cout << "City: " << city << endl;
	cout << "State: " << state << endl;
	cout << "Department: " << department << endl;
	cout << "Salary: " << salary << endl;
	cout << "Age: " << age << endl;
	cout << "Experience: " << experience << " years" << endl;
	cout << "Years Spent in Company: " << yearsSpendInCompany << " years" << endl;
    }
};

char Company::companyName[50] = "";

void main()
{
    clrscr();

    Company::setCompanyName("Your Company Namey");

    Company employee1;
    employee1.setEmployeeData();

    cout << "\nEmployee Information:\n";
    employee1.displayEmployeeData();

    getch();
}
