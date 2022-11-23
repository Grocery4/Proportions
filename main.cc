#include <iostream>
using namespace std;




int main() {

    int check;
        cout<<"Welcome to Scale Converter"<<endl;
    do {
        cout<<"What would you like to do?"<<endl;
        cout<<"1 \t Convert"<<endl;
        cout<<"2 \t End Program"<<endl;
        cin>>check;

        switch (check)
        {
        case 1:
            int unit;
            cout<<"Convert:\t";
                cout<<"|1 Time| \t";
                cout<<"|2 Length| \t";
                cout<<"|3 Mass| \t";
                cout<<"|4 Temperature|"<<endl;

                cout<<"Unit: ";
                cin>>unit;
            break;
        
        case 2:
            cout<<"Ending program..."<<endl;
            break;
        
        default:
            cout<<"Invalid option! Try again";
            break;
        }

    } while(check != 2);




    return 0;
}