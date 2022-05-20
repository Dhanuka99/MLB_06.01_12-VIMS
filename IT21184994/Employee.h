class Employee{
protected:
int empID;
char empUserName[15];
char empPassword[15];
char empJobRole[15];
public:
Employee();
Employee(int eID,const char uName[],const char Pass[],const char role[]);
~Employee();
int getEmployeeID();
void displayDetails();
};