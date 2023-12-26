// AA Project II.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main() {

    ifstream ip("student(1).csv");

    if (!ip.is_open()) std::cout << "Error: File Open" << '\n';

    string icnum;
    string fullname;
    string department;

    while (ip.peek() != EOF)

    {
        getline(ip,icnum, ',');
        //getline(ip, icnum, ',');
       // getline(ip, icnum, ',');

        std::cout << "IC Number: " << icnum << '\n';
        std::cout << "______________________________"  << '\n';
    }
    ip.close();
    /*
    // Create a Book object
    Book* book = xlCreateBook();

    // Open the Excel file
    if (book->load(L"student.xlsx")) {
        // Get the first sheet
        Sheet* sheet = book->getSheet(0);

        // Iterate through rows and columns to read data
        for (int row = 0; row < sheet->lastRow(); ++row) {
            for (int col = 0; col < sheet->lastCol(); ++col) {
                // Get cell value
                const wchar_t* value = sheet->readStr(row, col);

                // Do something with the value
                wprintf(L"(%d, %d): %s\n", row + 1, col + 1, value);
            }
        }
    }
    else {
        wprintf(L"Error loading the workbook\n");
    }

    // Release resources
    book->release();

    return 0;
    */
}
