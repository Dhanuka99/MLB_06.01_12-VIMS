#include "AreaManager.h"
#include "cstring"
#include <iostream>
using namespace std;

AreaManager::AreaManager(){
  strcpy(areaManagerName," No name ");
  strcpy(location,"no location");
}

AreaManager::AreaManager(const char name[],const char area[],int ID,const char uName[],const char pass[],char const role[]){
  strcpy(areaManagerName,name);
  strcpy(location,area);
  empID = ID;
  strcpy(empUserName,uName);
  strcpy(empPassword,pass);
  strcpy(empJobRole,role);
}

void AreaManager::displayDetails(){
  cout<<"Area Manager Name is : "<<areaManagerName<<endl;
  cout<<"Area Manager working location is : "<<location<<endl;
  cout<<"Area Manager ID is ; "<<empID<<endl;
  cout<<"Area Manager userName is ; "<<empUserName<<endl;
  cout<<"Area Manager Password is ; "<<empPassword<<endl;
  cout<<"Area Manager JobRole is ; "<<empJobRole<<endl;
}

AreaManager::~AreaManager(){
  cout<<"Area Manager destroy"<<endl;
}



