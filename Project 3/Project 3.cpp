// This program will merge file 1 and file 2. It will run it through an algorithm which will sort it alphabetically before closing it.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file1("C:/Users/sb0s/source/repos/file1.txt");
    ifstream file2("C:/Users/sb0s/source/repos/file2.txt");
    ofstream outputFile("C:/Users/sb0s/source/repos/output.txt");

    string line1, line2;


    getline(file1, line1);
    getline(file2, line2);


    while (!file1.eof() || !file2.eof())
    {

        if ((line1 < line2 && !file1.eof()) || file2.eof())
        {
            outputFile << line1 << endl;
            getline(file1, line1);
        }
        else 
        {
            outputFile << line2 << endl;
            getline(file2, line2);
        }
    }

    file1.close();
    file2.close();
    outputFile.close();

    cout << "Merged and sorted files successfully." << endl;

    return 0;
}
