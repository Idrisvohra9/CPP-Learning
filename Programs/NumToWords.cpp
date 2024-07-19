#include <iostream>
#include <string>
using namespace std;

string NumToWord(int i)
{
    string str = to_string(i);
    string result;
    for (auto &&c : str)
    {
        switch (c)
        {
            case '0':
                result += "Zero ";
                break;
            case '1':
                result += "One ";
                break;
            case '2':
                result += "Two ";
                break;
            case '3':
                result += "Three ";
                break;
            case '4':
                result += "Four ";
                break;
            case '5':
                result += "Five ";
                break;
            case '6':
                result += "Six ";
                break;
            case '7':
                result += "Seven ";
                break;
            case '8':
                result += "Eight ";
                break;
            case '9':
                result += "Nine ";
                break;
            default:
                return "Not a number";
        }
    }

    return result;
}

int main(int argc, char const *argv[])
{
    cout << NumToWord(99) << endl;
    return 0;
}
