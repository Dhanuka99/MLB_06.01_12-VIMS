#include <iostream>
#include <string>
using namespace std;

int main(){}

class vehicle {
private:

  string vehicleNo;
  string vehicleColour;
  string vehicleModel;

public:

  void setvehicledetails();
  void displayvehicleDetails(string vehNo,string vehModel,string vehColour);
  void getvehicleNo();
  string getvehicle();
  
};