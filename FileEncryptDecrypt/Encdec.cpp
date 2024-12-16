#include "Encdec.h"
#include <fstream>
void Encdec::Encrypt()
{
    cout<<"Enter key\n";
    cin>>key;

    fstream fin, fout;
    fin.open(file, fstream::in);
    fout.open("encrypt.txt",fstream::out);

    while(fin>>noskipws>>c)
    {
        int temp = (c+key);
        fout<<char(temp);
    }
    fin.close();
    fout.close();
}

void Encdec::Decrypt()
{
    cout<<"Enter Key\n";
    cin>>key;

    fstream fin, fout;
    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);

    while(fin>>noskipws>>c)
    {
        int temp = (c-key);
        fout<<char(temp);
    }
    fin.close();
    fout.close();
    
}
