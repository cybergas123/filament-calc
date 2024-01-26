#include <iostream>
#include <string>

using std::cout;

using std::string;

using std::cin;
 
int main(){
    //variables
    //filament full weight
    float filament_weight = 0;
    //price of filament - before
    float filament_price_before = 0;
    //filament used
    float filament_used;
    //currency
    string currency; 
    //welcome text - filament weight
    cout << "Please enter the weight of filament in grams : ";
    cin >> filament_weight;
    
    //price - 
    cout << "Please enter the price of filament (without currency): ";
    cin >> filament_price_before;

    //filament used 
    cout << "Please enter how much filament you used in grams : ";
    cin >> filament_used;
    //currency
    cout << "Please enter currency : ";
    cin >> currency;

    // calculating
    float price_for_filament_used = (filament_used * filament_price_before) / filament_weight;

    cout << "\nprice for filament you used is :  " << price_for_filament_used << " " << currency  << "\n" ;
   

}
