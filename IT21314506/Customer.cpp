#include <iostream>
#include <string>
using namespace std;

int main(){}

class customer {
private:

  int custId;
  int custNIC;
  string custName ;

public:

  void setcustID();
  void displayDetails(int cID,string          cName,int cNIC);
  int getcustNIC();
  void getcustID();
  string getcustName();
  
};

