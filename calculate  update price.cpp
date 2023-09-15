#include <iostream>

using namespace std;

float calculate_updated_price(float current_price) {
  const float increase_percentage = 15;
  float increase_amount = (increase_percentage / 100) * current_price;
  float updated_price = current_price + increase_amount;
  return updated_price;
}

int main() {
  try {
    float current_price;
    cout << "Enter the current price of the product: ";
    cin >> current_price;
    float updated_price = calculate_updated_price(current_price);
    cout << "The updated price after a 15% increase is: " << updated_price << endl;
  } catch (exception& e) {
    cout << "Please enter a valid number for the current price." << endl;
  }
  return 0;
}
