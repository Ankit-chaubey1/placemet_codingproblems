#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int tickets;
    char refreshment, coupon, circle;

    // Input: Number of tickets
    cout << "Enter the no of ticket:" << endl;
    cin >> tickets;

    // Ticket range check
    if (tickets < 5 || tickets > 40) {
        cout << "Minimum of 5 and Maximum of 40 Tickets" << endl;
        return 0;
    }

    // Input for other details
    cout << "Do you want refreshment:" << endl;
    cin >> refreshment;

    cout << "Do you have coupon code:" << endl;
    cin >> coupon;

    cout << "Enter the circle:" << endl;
    cin >> circle;

    // Validate circle
    if (circle != 'k' && circle != 'q') {
        cout << "Invalid Input" << endl;
        return 0;
    }

    // Determine base price
    float ticketCost = (circle == 'k') ? 75 : 150;
    float totalCost = ticketCost * tickets;

    // Bulk discount (10%) if more than 20 tickets
    if (tickets > 20) {
        totalCost -= totalCost * 0.10;
    }

    // Coupon discount (2%)
    if (coupon == 'y' || coupon == 'Y') {
        totalCost -= totalCost * 0.02;
    }

    // Refreshment charge (?50 per ticket)
    if (refreshment == 'y' || refreshment == 'Y') {
        totalCost += tickets * 50;
    }

    // Output final cost with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Ticket cost:" << totalCost << endl;

    return 0;
}

