#include <iostream>
using namespace std;




int main() {

    int check;
    do {
        cout<<"Welcome to Scale Converter"<<endl;
        cout<<"What would you like to do?"<<endl;
        cout<<"1 \t Choose conversion units"<<endl;
        cout<<"2 \t Convert"<<endl;
        cout<<"3 \t End program"<<endl;
        cin>>check;

        switch (check)
        {
        case 1:

            break;
        
        case 2:
            break;

        case 3:
            cout<<"Ending program..."<<endl;
            break;
        
        default:
            cout<<"Invalid option! Try again";
            break;
        }

    } while(check != 3);




    return 0;
}