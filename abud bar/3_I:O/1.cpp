#include "iostream"
#include <fstream>
using namespace std;
int main()
{
    // ofstream ofs("one.txt", ios::trunc);
    // ofs << "sourabh" << endl;
    // ofs << "23\n";
    // ofs.close();

    ifstream ifs;
    ifs.open("one.txt");
    string str;
    int x;
    ifs >> str >> x;
    ifs.close();
    cout<<str<<" "<<x;
    return 0;
}