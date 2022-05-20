#include "Employee.h"
class Administrator : public Employee{
private:
char adminName[15];
public:
Administrator();
Administrator(const char name[],int id,const char uname[],const char pass[],const char role[]);
~Administrator();
void displayDetails();
};