#include <iostream>
#include <string.h>
using namespace std;

bool isUnique(string _str)
{
        bool char_set[256];
        int len = _str.length();

        memset(char_set, '\0', 256);
        for(int i = 0; i < len; ++i)
        {
            int val = _str[i];
            if(char_set[val])
            {
                return false;
            }
            char_set[val] = true;
        }

        return true;
    }

    int main()
    {
        cout<<"Value: "<<isUnique("bcd")<<endl;
        return 0;
    }
