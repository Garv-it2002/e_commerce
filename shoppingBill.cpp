#include<iostream>

using namespace std;
int main()
{
    int returTotalBill(void);
    int totalBill=returTotalBill();
    cout<<"\nYour total bill amount is\n"<<totalBill;
    cout<<"\nThank You for your Order\n"<<endl;
    
}

int returTotalBill()
{
    int c;
    int item;
    char electronicDevice;
    char books;
    char sports;
    char healthcare;
    int billAmount=0;
    char selectAgain;
    cout<<"============Welcome to Deepak ki Dukaan=========="<<endl;
    cout<<"Please press 1 to go ahead for shopping your favourite items"<<endl;
    start:
    cin>>c;
    if(c==1)
    {
        items:
        cout<<"Please select your Choice"<<endl;
        cout<<"1.Electronics\n2.Books\n3.Sports\n4.Healthcare"<<endl;
        cin>>item;
        if(item==1)
        {
             electronicdeviceList:
            cout<<"Please select 1,2,3,4,5,6,7,8,9 as per your choice"<<endl;
            cout<<"======================================================\n";
            cout<<"1.Dell XPS 13           :   Price:$-999.99\n";
            cout<<"------------------------------------------------------\n";
            cout<<"2.Macbook Pro           :   Price:$-1,299.99\n";
            cout<<"------------------------------------------------------\n";
            cout<<"3.HP Spectre x360       :   Price:$-1,099.99\n";
            cout<<"------------------------------------------------------\n";
            cout<<"4.Lenovo ThinkPad       :   Price:$-1,001.99\n";
            cout<<"------------------------------------------------------\n";
            cout<<"5.Asus ZenBook          :   Price:$-899.99\n";
            cout<<"------------------------------------------------------\n";
            cout<<"6.Samsung Galaxy S21    :   Price:$-859.99\n";
            cout<<"------------------------------------------------------\n";
            cout<<"7.iPhone 12             :   Price:$-909.99\n";
            cout<<"------------------------------------------------------\n";
            cout<<"8.Sony Bravia TV        :   Price:$-939.99\n";
            cout<<"------------------------------------------------------\n";
            cout<<"9.Bose QuietComfort 35  :   Price:$-959.99\n";
            cout<<"======================================================\n";
            cin>>electronicDevice;
            if(electronicDevice=='1')
            {
                billAmount=billAmount+999.99;
            }
            else if(electronicDevice=='2')
            {
                billAmount=billAmount+1299.99;
            }
            else if(electronicDevice=='3')
            {
                billAmount=billAmount+1099.99;
            }
            else if(electronicDevice=='4')
            {
                billAmount=billAmount+1001.99;
            }
            else if(electronicDevice=='5')
            {
                billAmount=billAmount+899.99;
            }
            else if(electronicDevice=='6')
            {
                billAmount=billAmount+859.99;
            }
            else if(electronicDevice=='7')
            {
                billAmount=billAmount+909.99;
            }
            else if(electronicDevice=='8')
            {
                billAmount=billAmount+939.99;
            }
            else if(electronicDevice=='9')
            {
                billAmount=billAmount+959.99;
            }
            else
            {
                cout<<"You have entered wrong value,please press correct value" <<endl;
                goto electronicdeviceList;
            }
            cout<<"Add more items,y or no?"<<endl;
            cin>>selectAgain;
            if(selectAgain=='y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }
        }
        else if(item==2)
        {
        
             booksList:
            cout<<"Please select 1,2,3,4,5,6,7,8,9 as per your choice"<<endl;
            cout<<"(1)Tum Pahle Kyu Nhi Aaye           :   Price:$3\n" <<endl;
            cout<<"(2)                                 :   Price:$5\n" <<endl;
            cout<<"(3)                                 :   Price:$2\n" <<endl;
            cout<<"(4)                                 :   Price:$4\n" <<endl;
            cout<<"(5)                                 :   Price:$4.5\n" <<endl;
            cout<<"(6)                                 :   Price:$7\n" <<endl;
            cout<<"(7)                                 :   Price:$9\n" <<endl;
            cout<<"(8)                                 :   Price:$11\n" <<endl;
            cout<<"(9)                                 :   Price:$3.5\n" <<endl;
            cin>>books;
            if(books=='1')
            {
                billAmount=billAmount+3;
            }
            else if(books=='2')
            {
                billAmount=billAmount+5;
            }
            else if(books=='3')
            {
                billAmount=billAmount+2;
            }
            else if(books=='4')
            {
                billAmount=billAmount+4;
            }
            else if(books=='5')
            {
                billAmount=billAmount+4.5;
            }
            else if(books=='6')
            {
                billAmount=billAmount+7;
            }
            else if(books=='7')
            {
                billAmount=billAmount+9;
            }
            else if(books=='8')
            {
                billAmount=billAmount+11;
            }
            else if(books=='9')
            {
                billAmount=billAmount+3.5;
            }
            else
            {
                cout<<"You have entered wrong value,please press correct value!!!!!" <<endl;
                goto booksList;
            }
            cout<<"Add more items,y or no?"<<endl;
            cin>>selectAgain;
            if(selectAgain=='y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }
            
        }
        else if(item==3)
        {
        
            sportsList:
            cout<<"Please select 1,2,3,4,5,6,7,8,9 as per your choice"<<endl;
            cout<<"(1)                                  :   Price:$50\n" <<endl;
            cout<<"(2)                                  :   Price:$35\n" <<endl;
            cout<<"(3)                                  :   Price:$100\n" <<endl;
            cout<<"(4)                                  :   Price:$55\n" <<endl;
            cout<<"(5)                                  :   Price:$95\n" <<endl;
            cout<<"(6)                                  :   Price:$45\n" <<endl;
            cout<<"(7)                                  :   Price:$10\n" <<endl;
            cout<<"(8)                                  :   Price:$80\n" <<endl;
            cout<<"(9)                                  :   Price:$75\n" <<endl;
            cin>>sports;
            if(sports=='1')
            {
                billAmount=billAmount+50;
            }
            else if(sports=='2')
            {
                billAmount=billAmount+35;
            }
            else if(sports=='3')
            {
                billAmount=billAmount+100;
            }
            else if(sports=='4')
            {
                billAmount=billAmount+55;
            }
            else if(sports=='5')
            {
                billAmount=billAmount+95;
            }
            else if(sports=='6')
            {
                billAmount=billAmount+45;
            }
            else if(sports=='7')
            {
                billAmount=billAmount+10;
            }
            else if(sports=='8')
            {
                billAmount=billAmount+80;
            }
            else if(sports=='9')
            {
                billAmount=billAmount+75;
            }
            else
            {
                cout<<"You have entered wrong value,please press correct value!!!!!" <<endl;
                goto sportsList;
            }
            cout<<"Add more items,y or n?"<<endl;
            cin>>selectAgain;
            if(selectAgain=='y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }
            
        }
        else if(item==4)
        {
        
            healthcareList:
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1)                                   :   Price:$100\n" <<endl;
            cout<<"(2)                                   :   Price:$150\n" <<endl;
            cout<<"(3)                                   :   Price:$115\n" <<endl;
            cout<<"(4)                                   :   Price:$200\n" <<endl;
            cout<<"(5)                                   :   Price:$80\n" <<endl;
            cout<<"(6)                                   :   Price:$130\n" <<endl;
            cout<<"(7)                                   :   Price:$175\n" <<endl;
            cout<<"(8)                                   :   Price:$400\n" <<endl;
            cout<<"(9)                                   :   Price:$70\n" <<endl;
            cin>>healthcare;
            if(healthcare=='1')
            {
                billAmount=billAmount+100;
            }
            else if(healthcare=='2')
            {
                billAmount=billAmount+150;
            }
            else if(healthcare=='3')
            {
                billAmount=billAmount+115;
            }
            else if(healthcare=='4')
            {
                billAmount=billAmount+200;
            }
            else if(healthcare=='5')
            {
                billAmount=billAmount+80;
            }
            else if(healthcare=='6')
            {
                billAmount=billAmount+130;
            }
            else if(healthcare=='7')
            {
                billAmount=billAmount+175;
            }
            else if(healthcare=='8')
            {
                billAmount=billAmount+400;
            }
            else if(healthcare=='9')
            {
                billAmount=billAmount+70;
            }
            else
            {
                cout<<"You have entered wrong value,please press correct value!!!!!" <<endl;
                goto healthcareList;
            }
            cout<<"Press y to add more items or n to end?"<<endl;
            cin>>selectAgain;
            if(selectAgain=='y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }
            
        }
        else
        {
            cout<<"We Appreciate your Excitation for shopping,Unfortunately Entered WRONG INPUT,Please Try AGAIN!" <<endl;
            goto items;
        }
        
    }
    else
    {
       cout<<"You have entered wrong value,please press 1" <<endl;
       goto start;
    } 
    return billAmount;
    
}