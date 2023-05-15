// BANK MANAGEMET SYSTEM: SPECIFICATION FILE

// getFunction
// Classes
// Header File (Specification and Implementation Files)
// Constructors
// static and const functions/data members
// Hierarchical inheritance // base classes saving account and checking account 
// Virtual Functions and Overriding
// Arrays of Pointers to Object
// for loop, do-while loop
// if, else if, else statements
// Functions
// Access Specifiers (private,public and protected)

#include<iostream>
#include<iomanip>
#include<cstdlib> // To use rand()
#include<string>

using namespace std;

class account {
protected:
	int acc_no;
	string name;
	int deposit;
	string acc_type;
	static int T_acc; // Static Data Member to Calculate The total Number of Accounts
public:
	account(int aNo = 0, string n = "Nil", int dep = 0, string Atype = "Nil") {
		acc_no = aNo;
		name = n;
		deposit = dep;
		acc_type = Atype;
		T_acc++;
	}
	void create_account(string);                // The create_account function creates a new account with the provided details.
	void show_account(int) const;               // The show_account function displays the details of a specific account.
	void modify(string, int);
	void close(int);
	void deposits(int, int);                    // The deposits function allows depositing money into an account.
	virtual void withdraws(int, int);
	void display() const;                       // The display function displays the account details.
	int getA_no() const;                        // The getA_no function returns the account number.
	int getDep() const;                         // The getDep function returns the deposit amount.
	string getType() const;                     // The getType function returns the account type.
	static int getT_acc();
};
class Checking_acc : public account {
	int draft;
public:
	Checking_acc() {
		draft = 100000;
	}
	void withdraws(int, int);
};
class Saving_acc : public account {
public:
	Saving_acc() {}
	void withdraws(int, int);
};
void Main_Menu();
