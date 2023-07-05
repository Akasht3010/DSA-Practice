#include <iostream>

using namespace std;
class info
{
    public:
    char Name;
    int Roll_No;
    void get_data(){
        cin>>Name;
        cin>>Roll_No;
    }
};
class print:public info
{public:
void print_data(){
    cout<<"Name is "<<Name<<"\nRoll No.is "<<Roll_No<<endl;
}};
int main()
{
print p;
p.get_data();
p.print_data();

    return 0;
}