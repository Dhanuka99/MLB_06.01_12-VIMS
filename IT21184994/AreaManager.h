#include "Employee.h"
class AreaManager : public Employee{
private:

char areaManagerName[20];
char location[20];

public:

AreaManager();
AreaManager(const char name[],const char area[],int ID,const char uName[],const char pass[],char const role[]);
~AreaManager();
void displayDetails();
};