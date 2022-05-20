#include "Employee.h"
#include "cstring"
#include <iostream>
using namespace std;

Employee::Employee(){
  empID = 0;
  strcpy(empUserName,"no name");
  strcpy(empPassword,"no password");
  strcpy(empJobRole,"no job");
}

Employee::Employee(int ID,const char uName[],const char Pass[],const char role[]){
  empID = ID;
  strcpy(empUserName,uName);
  strcpy(empPassword,Pass);
  strcpy(empJobRole,role);
  
}

int Employee::getEmployeeID(){
  return empID;
}

void Employee::displayDetails(){
  
  cout<<"EmployeeID ID is ; "<<empID<<endl;
  cout<<"Employee userName is ; "<<empUserName<<endl;
  cout<<"AEployee Password is ; "<<empPassword<<endl;
  cout<<"Employee JobRole is ; "<<empJobRole<<endl;
}

Employee::~Employee(){
  cout<<"Employee Destroy"<<endl;
}