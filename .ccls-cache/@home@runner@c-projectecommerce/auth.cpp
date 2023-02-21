#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
using namespace std;
void login();
void registr();
void forgot();
//Code block to choose the options just after login
class choose_option{
    public:
        void main_screen(){
            system("cls");
            int ch;
            cout<<"\n=======================Deepak ki Dukaan===============\n";
            cout<<"Please choose any one from below\n";
            cout<<"1.Buy product\n";
            cout<<"2.View cart\n";
            cout<<"3.Exit\n";
            cout<<"Please enter your choice: ";
            cin>>ch;

            switch (ch)
            {
            case 1: cout<<"Buy\n";
                break;
            case 2: cout<<"View\n";
                break;
            case 3:system("cls");
            cout<<"Thanks for using the application\n"; 
            exit(0);
                break;
            default: cout<<"Please enter valid value\n";
                break;
            }
        }
};
//........................................................................................
main()
{
    int choice;
    cout<<"======================Welcome to Deepak ki dukaan=====================";
    cout<<"\n1.Login";
    cout<<"\n2.Register";
    cout<<"\n3.Forgot";
    cout<<"\n4.Exit";
    cout<<"\n----------------------------------------------------------------------\n";
    cout<<"Please enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1: login();
        break;
        case 2: registr();
        break;
        case 3: forgot();
        break;
        case 4: system("cls");
        cout<<"Thanks for using the application";
        exit(0);
        break;
        default: cout<<"Please enter valid choice\n";
        main();
    }
}
void registr(){
    string rusr,rpas;
    system("cls");
    cout<<"Please enter the username: ";
    cin>>rusr;
    cout<<"Please enter the password: ";
    cin>>rpas;

    ofstream reg("password.txt", ios::app);
    reg<<rusr<<" "<<rpas<<endl;
    system("cls");
    cout<<"Congratulations! You are successfully registered\n";
    main();
}

void login(){
    int exist=0;
    string user,pass,u,p;
    system("cls");
    cout<<"Please enter the username: ";
    cin>>user;
    cout<<"Please enter the password: ";
    cin>>pass;

    ifstream input("password.txt");
    while(input>>u>>p){
        if(u==user && p==pass){
            exist=1;
        }
    }
    input.close();
    if(exist ==1){
        choose_option *maindis = new choose_option();
        maindis->main_screen();
    }
    else
    {
        cout<<"Invalid username or password\n";
        system("cls");
        main();
    }
}

void forgot(){
    int ch;
    system("cls");
    cout<<"1.Search your account by username\n";
    cout<<"2.Search your account by password\n";
    cout<<"3.Main menu\n";
    cout<<"Please enter your choice: ";
    cin>>ch;

    switch(ch)
    {
        case 1:{
            int ex=0;
            string suser,su,sp;
            cout<<"Enter the username you remember: ";
            cin>>suser;

            ifstream susr("password.txt");
            while(susr>>su>>sp)
            {
                if(su==suser)
                {
                    ex=1;
                    break;
                }
            }
            susr.close();
            if(ex==1)
            {
                cout<<"Your account has been found\n";
                cout<<"Your password is "<<sp;
                cout<<"\n";
                main();
            }
            else
            {
                cout<<"Account does not exist with current user name\n";
                main();
            }
            break;
        }
        case 2:{
            int exi=0;
            string spas,su2,sp2;
            cout<<"Enter the password you remember: ";
            cin>>spas;

            ifstream spass("password.txt");
            while(spass>>su2>>sp2){
                if(sp2==spas){
                    exi=1;
                }
            }
            spass.close();
            if(exi==1)
            {
                cout<<"Your account has been found\n";
                cout<<"Your userID is "<<su2;
                cout<<"\n";
                main();
            }
            else
            {
                cout<<"Account does not exist with current password\n";
                main();
            }
            break;
        }
        case 3:
            main();
            break;

        default: cout<<"Please choose the right option";
        forgot();
    }
}