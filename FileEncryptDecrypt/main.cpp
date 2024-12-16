#include "Encdec.h"

int main()
{
    Encdec en;
    char c;
    cout<<"Enter your choice\n";
    cout<<"1. Encrypt 2.Decrypt";
    cin>>c;

    switch (c)
    {
        case '1': en.Encrypt();
                    break;
        case '2': en.Decrypt();
                    break;
        
    }
    return 0;
}