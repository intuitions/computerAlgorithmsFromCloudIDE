#include <iostream>
#include <string>

using namespace std;

//big integer multiplication

string bigIntegerMultiplication(string &x,string &y)
{
    string multiResult = "9876543210";
    multiResult = x + y;
    return multiResult;
}



int main()
{
/*    
    unsigned int cycle = 0;
    cout << "please input cycle:" <<endl;
    cin >> cycle;
    for(unsigned int i = 0;i < cycle ;i++)
    {
        cout << "hello world!" <<endl;
    }
*/
    string x = "12345";
    string y = "67890";
    string resultStr = "0";
    resultStr = bigIntegerMultiplication(x,y);
    cout << "resultStr:" << resultStr <<endl;
    return 0;
}

