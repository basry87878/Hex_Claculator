// C++ program to convert hexadecimal to decimal
#include<iostream>
#include<string.h>
#include<math.h>
#include <conio.h>
#include<math.h>
using namespace std;

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(char hexValue[])
{

    int len = strlen(hexValue);

    // Initializing base value to 1, i.e 16^0
    int exponent = 0;

    int dec_value = 0;

    // Extracting characters as digits from last character
    for (int i=len-1; i>=0; i--)
    {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value.
        if (hexValue[i]>='0' && hexValue[i]<='9')
        {
            dec_value += (hexValue[i] - 48)* pow(16,exponent);

            // incrementing base by power
            exponent++ ;
        }


        else if (hexValue[i]>='A' && hexValue[i]<='F')
        {
            dec_value += (hexValue[i] - 55)* pow(16,exponent);

            // incrementing base by power
            exponent++ ;
        }

        else if (hexValue[i]>='a' && hexValue[i]<='f')
        {
            dec_value += (hexValue[i] - 87)* pow(16,exponent);

            // incrementing base by power
            exponent++ ;
        }
        else
        {
            cout<<"wrong input!"<<endl;
        }

    }

    return dec_value;
}

    int DecimalToHex(int num)
    {
        int temp, i = 1, j, r;
        char hex[50];
        temp = num;
        while (temp != 0)
        {
            r = temp % 16;
            if (r < 10)
            hex[i++] = r + 48;
            else
            hex[i++] = r + 55;
            temp = temp / 16;
        }
        cout << "\nHexadecimal equivalent of " << num << " is : ";
        for (j = i; j > 0; j--)
        cout << hex[j];
    }

int main()
{
    char hexNum1[999],hexNum2[999];
    cout << " enter 2 hex numbers ";
    cin>>hexNum1;
    cin>>hexNum2;
    int additionValue= hexadecimalToDecimal(hexNum1)+ hexadecimalToDecimal(hexNum2);
    //int submissionValue= hexadecimalToDecimal(hexNum1)- hexadecimalToDecimal(hexNum2);
    //int multiplyValue= hexadecimalToDecimal(hexNum1)* hexadecimalToDecimal(hexNum2);
    //int divisionValue= hexadecimalToDecimal(hexNum1)/ hexadecimalToDecimal(hexNum2);
    cout <<"the dicimal addition value:"<< additionValue << endl;


    int num, temp, i = 1, j, r;
    char hex[50];
    num=additionValue;
    temp = num;
    while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            hex[i++] = r + 48;
        else
            hex[i++] = r + 55;
        temp = temp / 16;
    }
    cout << "\nHexadecimal equivalent of " << num << " is : ";
    for (j = i; j > 0; j--)
        cout << hex[j];
    return 0;

}

