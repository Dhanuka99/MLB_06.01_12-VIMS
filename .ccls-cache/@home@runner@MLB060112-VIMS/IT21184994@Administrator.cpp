#include "Administrator.h"
#include "cstring"
#include <iostream>
using namespace std;

Administrator::Administrator(){
  strcpy(adminName,"no name");
}

Administrator::Administrator(const char name[],int id,const char uname[],const char pass[],const char role[]){
  strcpy(adminName,name);
  empID = id;
  strcpy(empUserName,uname);
  strcpy(empPassword,pass);
  strcpy(empJobRole,role);
}

Administrator::~Administrator(){
  cout<<"Administrator Destroy"<<endl;
}

void Administrator::displayDetails(){
  cout<<"Admin Name is : "<<adminName<<endl;
  cout<<"Admin ID is ; "<<empID<<endl;
  cout<<"Admin userName is ; "<<empUserName<<endl;
  cout<<"Admin Password is ; "<<empPassword<<endl;
  cout<<"Admin JobRole is ; "<<empJobRole<<endl;
}
