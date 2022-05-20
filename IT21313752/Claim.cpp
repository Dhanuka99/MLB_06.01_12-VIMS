#include<iostream>
#include<string>
using namespace std;

class Claim {
private:
  int claimID;
  char claimDate;

public:

  void setClaim(int claimID,char claimDate);
  void displayClaim();

};
