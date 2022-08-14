#include <iostream>
using namespace std;

int main() {
  // description
  cout << endl << endl;
  cout << "------------------------------------------------------" << endl;
  cout << "|          **TRANSPORTATION CALCULATOR**             |" << endl;
  cout << "|                                                    |" << endl;
  cout << "| Calculate the Bus last trip empty seats based on a |" << endl;
  cout << "| total number of Bus seats and Passengers.          |" << endl;
  cout << "------------------------------------------------------" << endl;
  
  int totalSeats;
  int totalPassengers;
  int emptySeats;
  int isContinue;

  do {
    // ask input for total bus seats
    cout << endl << "Enter the total number of Bus seats: ";
    cin >> totalSeats;

    // ask input for total passengers
    cout << "Enter the total number of Passengers: ";
    cin >> totalPassengers;
    
    if (totalPassengers < totalSeats) {
      // if passengers less than total seats
      emptySeats = totalSeats - totalPassengers;
      cout << "Total empty seats: " << emptySeats << endl << endl;
      
      // ask if want to continue
      cout << "Do you want to continue (1 - yes, 0 = no)?: ";
      cin >> isContinue;
    } else {
      emptySeats = totalPassengers % totalSeats;
      
      if (emptySeats == 0) {
        // if total seats is divisible by total passengers
        cout << "Total empty seats: " << emptySeats << endl << endl;

        // ask if want to continue
        cout << "Do you want to continue (1 - yes, 0 = no)?: ";      
        cin >> isContinue;
      } else {
        // if total seats are not divisible by total passengers
        emptySeats = totalSeats - emptySeats;
        cout << "Total empty seats: " << emptySeats << endl << endl;
        
        // ask if want to continue
        cout << "Do you want to continue (1 - yes, 0 = no)?: ";      
        cin >> isContinue;
      }
    }
  } while (isContinue != 0);

  cout << endl << "**THANK YOU FOR USING**" << endl;

  return 0;
}
