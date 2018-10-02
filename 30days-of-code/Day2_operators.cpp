#include <iostream>
#include <math.h>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double totalCost=meal_cost;
    totalCost +=  (meal_cost*tax_percent)/100+(meal_cost*tip_percent)/100;
    cout <<  "The total meal cost is " << round(totalCost) << " dollars."<<endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
