#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string fizzBuzz(unsigned int n);

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        cout << "Error: expected 1 argument, got " << argc - 1 << endl;
        return 1;
    }

    stringstream s(argv[1]);

    unsigned int goal;
    s >> goal;

    for (unsigned int n = 1; n <= goal; n++)
    {
        cout << fizzBuzz(n) << endl;
    }

    return 0;
}

string fizzBuzz(unsigned int n)
{

    string result;
    bool set = false;
    if (n % 3 == 0)
    {
        result += "Fizz";
        set = true;
    }
    if (n % 5 == 0)
    {
        result += "Buzz";
        set = true;
    }
    if (!set)
    {
        stringstream c;
        c << n;
        result = "";
        c >> result;
    }

    return result;
}