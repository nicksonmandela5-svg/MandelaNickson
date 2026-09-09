#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

// Function to add the correct ordinal suffix (st, nd, rd, th)
string getOrdinal(int day)
{
    if (day >= 11 && day <= 13)
        return "th";

    switch (day % 10)
    {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}

int main()
{
    // Variables for student information
    string firstName, lastName, program, academicYear;

    // Get student information
    cout << "Enter student's first name: ";
    getline(cin, firstName);

    cout << "Enter student's last name: ";
    getline(cin, lastName);

    cout << "Enter study program: ";
    getline(cin, program);

    cout << "Enter academic year: ";
    getline(cin, academicYear);

    // Get the current date automatically
    time_t currentTime = time(nullptr);
    tm *localTime = localtime(&currentTime);

    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1;
    int year = localTime->tm_year + 1900;

    // Array containing month names
    string months[] = {
        "", "January", "February", "March", "April",
        "May", "June", "July", "August", "September",
        "October", "November", "December"
    };

    // Display acceptance letter
    cout << "\n\n";
    cout << "=============================================\n";
    cout << "          MAKERERE UNIVERSITY\n";
    cout << "             ACCEPTANCE LETTER\n";
    cout << "=============================================\n\n";

    cout << "Date: " << day << getOrdinal(day) << " "
         << months[month] << " " << year << "\n\n";

    cout << "To: " << firstName << " " << lastName << ",\n\n";

    cout << "Dear " << firstName << ",\n\n";

    cout << "CONGRATULATIONS!\n\n";

    cout << "I am pleased to inform you that the Makerere University "
         << "Admissions Board has approved your application for admission "
         << "to the " << academicYear << " academic year.\n\n";

    cout << "You have been offered a place for the following course:\n";
    cout << "PROGRAM: " << program << "\n\n";

    cout << "As a student of Makerere University, you will be part of a "
         << "historic institution dedicated to academic excellence and "
         << "innovation. Please ensure that you report to the Academic "
         << "Registrar's office with your original academic documents "
         << "for verification during the orientation week.\n\n";

    cout << "We look forward to welcoming you to Makerere University.\n\n";

    cout << "Yours sincerely,\n\n\n";

    cout << "John Doe\n";
    cout << "Registrar\n";

    return 0;
}