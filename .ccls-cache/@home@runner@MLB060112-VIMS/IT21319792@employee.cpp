#include<iostream>
#include<string>
using namespace std;

class employee{

private:
int employeeID;
char UserName;
char password;
char JobRole;

public:
void setEmpDetails(int employeeID, char UserName, char jobrole);
void displayEmployeeDetails ();
};
