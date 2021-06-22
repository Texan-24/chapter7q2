#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::setprecision;

int main() {
  float interest_rate= 0.0;
  float principal = 0.0;

  cout << "Enter interest rate: ";
  cin >> interest_rate;

  cout << "Enter principal: ";
  cin >> principal;

  // ensure rate is between 1-18
  if ( interest_rate < 1 || interest_rate > 18 ) {
    cout << "Interest rate is invalid.\n";
    return 0;
  } 

  if ( principal < 100 || principal > 1000 ) {
    cout << "Loan principal is invalid.\n";
    return 0;
  }

  float loan_fee = 0.0;
  if ( principal < 500) {
    loan_fee = 20;
  } else {
    loan_fee = 25;
  }
  
  float total_interest = principal * (interest_rate / 100) ;
  
  cout << "Interest rate:     " << interest_rate << "%\n";
  cout << "Principal:         $" << principal << "\n";
  cout << "Interest + fees:   $" << setprecision (4) << (loan_fee + total_interest) << "\n";
}
