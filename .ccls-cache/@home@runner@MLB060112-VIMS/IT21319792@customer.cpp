#include<iostream>
#include<string>
using namespace std;

class customer{

private:
int customerID;
char customerNIC;
char customerName;

public:
void setCustomerID(customerID);
void getCustomerID();
void displaydetails();
}