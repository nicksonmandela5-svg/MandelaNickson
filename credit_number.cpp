#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string card;
    vector<int> digits;

    cout << "Enter the credit card number: ";
    cin >> card;

    // Put each digit into the vector
    for (int i = 0; i < card.length(); i++)
    {
        digits.push_back(card[i] - '0');
    }

    // Check number of digits
    if (digits.size() < 13 || digits.size() > 16)
    {
        cout << "Invalid card number" << endl;
        return 0;
    }

    // Check the first digit
    if (digits[0] != 4 &&
        digits[0] != 5 &&
        digits[0] != 6 &&
        !(digits[0] == 3 && digits[1] == 7))
    {
        cout << "Invalid card number" << endl;
        return 0;
    }

    int sum = 0;

    // Step 1: Double every second digit from the right
    for (int i = digits.size() - 2; i >= 0; i -= 2)
    {
        int doubled = digits[i] * 2;

        if (doubled >= 10)
        {
            doubled = doubled / 10 + doubled % 10;
        }

        sum = sum + doubled;
    }

    // Step 2: Add the digits in the odd places
    for (int i = digits.size() - 1; i >= 0; i -= 2)
    {
        sum = sum + digits[i];
    }

    // Step 3: Check whether the total is divisible by 10
    if (sum % 10 == 0)
    {
        cout << "The card number is valid." << endl;
    }
    else
    {
        cout << "The card number is invalid." << endl;
    }

    return 0;
}