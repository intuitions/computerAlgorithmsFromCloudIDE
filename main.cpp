#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bigIntegersMultiplication()
{
    unsigned int length1 = 0;
    unsigned int length2 = 0;
    vector<int> str2int1 = {0};
    vector<int> str2int2 = {0};
    string str1 = "";
    string str2 = "";
    cout << "please input two integers in string" << endl;
    cin >> str1;
    cout << "str1:" << str1 << endl;
    cin >> str2;
    cout << "str2:" << str2 << endl;
    
    vector<int> buffer(str1.size() + str2.size(),0);
    //string to integer
    cout << "str1:";
    length1 = str1.size();
    for(unsigned int i = 0;i < length1;i++)
    {
        str2int1[i] = str1[length1 - i - 1] - '0';
//        str2int1[i] = str1[i] - '0';
        cout << str2int1[i];
    }
    cout << endl;
    cout << "str2:";
    length2 = str2.size();
    for(unsigned int i = 0;i < length2;i++)
    {
        str2int2[i] = str2[length2 - i - 1] - '0';
//        str2int2[i] = str2[i] - '0';
        cout << str2int2[i];
    }
    cout << endl;
//    cout << "str2int1:" << str2int1 << endl;

    cout << "solve" << endl;
    //求解两数相乘的结果
    for(unsigned int i = 0;i < length1;i++)
    {
        for(unsigned int j = 0;j < length2;j++)
        {
            unsigned int k = i + j;//
            buffer[k] += str2int1[i] * str2int2[j];//对应位数字相乘
            while(buffer[k] > 9)//有进位
            {
                buffer[k + 1] += buffer[k] / 10;
                buffer[k] %= 10;
                k++;
            }
        }
    }
    
    cout << "output result" << endl;
    unsigned int high = 0;
    high = length1 + length2;
    cout << "total wide:" << high << endl;
    cout << "buffer:" << buffer.size() << endl;

    while((0 == buffer[high]) && (high > 0))//高位非零首位下标
    {
        high--;
    }

    cout << "products:";
    for(unsigned int i = high;i > 0;--i)
    {
        cout << buffer[i];
    }
    cout << buffer[0] << endl;
    
    return;
}


int main()
{
    unsigned int cycle = 0;
    bigIntegersMultiplication();
    cout << "hello! cloud IDE!" << endl;
    return 0;
}
