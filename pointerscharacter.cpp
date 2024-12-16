#include <iostream>
using namespace std;

void validate(char **p)
{
    char s[]="shruthi";
    *p = s;
    cout<<"Validate: "<<*p;
}
void validate2(char **q)
{
    char * des = NULL;
    validate(&des);
    *q = des;
    //cout<<"Validate2:"<<*&des;
    
}
int main()
{
    char *t= NULL;
    validate2(&t);
   cout<<t;

}