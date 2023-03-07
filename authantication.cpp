#include "cart.h"
#include <fstream>
#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string>
using namespace std;
void login();
void registr();
void forgot();
int billAmount = 0;
Cart cart("cart.txt");
// Second Screen Code
class Second_Screen {
public:
  int returnInterfade() {
    int c, a, money;
    int item, driver_value;
    cout << "============Welcome to Deepak ki Dukaan==========" << endl;
    // cout<<"Please press 1 to go ahead for shopping your favourite
    // items"<<endl; start: cin>>c; if(c==1)
    //{
  items:
    cout << "Please select your Choice" << endl;
    cout << "1.Buy Items\n2.View Cart\n3.Checkout\n4.Exit" << endl;
    cin >> item;
    if (item == 1) {
      system("cls");
      driver_value = 1;
      Second_Screen *nxt = new Second_Screen();
      a = nxt->returTotalBill();
    } else if (item == 2) {
      cout << "\n========================Cart==========================\n";
      cout << "Item\t\tQuantity\t\tCost\n";
      cart.display();
      cout << "\n----------------------------------------------------------";
      cout << "\nTotal cart value is $" << billAmount << "\n";
      cout << "\n=======================================================\n";
    } else if (item == 3) {
      cout << "\n========================Cart==========================\n";
      cout << "Item\t\tQuantity\t\tCost\n";
      cart.display();
      cout << "\n----------------------------------------------------------";
      cout << "\nTotal cart value is $" << billAmount << "\n";
      cout << "\n=======================================================\n";
      cout << "Please do the payment: ";
      cin >> money;
      while (billAmount != money) {
        if (money > billAmount) {
          system("cls");
          cout << "Oops you paid extra\n";
          cout << "Your extra payment will be credited back to your account "
                  "within 24 hours\n";
          cout << "Thanks for shopping";
          exit(0);
        }
        billAmount = billAmount - money;
        cout << "Please pay the remaining amount of $" << billAmount << "\n";
        cin >> money;
      }
      billAmount = 0;
      std::ofstream ofs;
      ofs.open("cart.txt", std::ofstream::out | std::ofstream::trunc);
      ofs.close();
      system("cls");
      return 7;
    } else if (item == 4) {
      system("cls");
      cout << "Thanks for using the application\n";
      exit(0);
      //}
    }
    return 0;
  }
  int returTotalBill() {
    int c;
    int qty;
    int item;
    char electronicDevice;
    char books;
    char sports;
    char healthcare;
    char selectAgain;
    Cart cart("cart.txt");
    cout << "============Welcome to Deepak ki Dukaan==========" << endl;
    cout << "Please press 1 to go ahead for shopping your favourite items"
         << endl;
  start:
    cin >> c;
    if (c == 1) {
    items:
      cout << "Please select ypur Choice" << endl;
      cout << "1.Electronics\n2.Books\n3.Sports\n4.Healthcare" << endl;
      cin >> item;
      if (item == 1) {
        system("cls");
      electronicdeviceList:
        cout << "Please select 1,2,3,4,5,6,7,8,9 as per your choice" << endl;
        cout << "======================================================\n";
        cout << "1.Dell XPS 13           :   Price:$-999.99\n";
        cout << "------------------------------------------------------\n";
        cout << "2.Macbook Pro           :   Price:$-1,299.99\n";
        cout << "------------------------------------------------------\n";
        cout << "3.HP Spectre x360       :   Price:$-1,099.99\n";
        cout << "------------------------------------------------------\n";
        cout << "4.Lenovo ThinkPad       :   Price:$-1,001.99\n";
        cout << "------------------------------------------------------\n";
        cout << "5.Asus ZenBook          :   Price:$-899.99\n";
        cout << "------------------------------------------------------\n";
        cout << "6.Samsung Galaxy S21    :   Price:$-859.99\n";
        cout << "------------------------------------------------------\n";
        cout << "7.iPhone 12             :   Price:$-909.99\n";
        cout << "------------------------------------------------------\n";
        cout << "8.Sony Bravia TV        :   Price:$-939.99\n";
        cout << "------------------------------------------------------\n";
        cout << "9.Bose QuietComfort 35  :   Price:$-959.99\n";
        cout << "======================================================\n";
        cin >> electronicDevice;
        if (electronicDevice == '1') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (electronicDevice == '2') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (electronicDevice == '3') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (electronicDevice == '4') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (electronicDevice == '5') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (electronicDevice == '6') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (electronicDevice == '7') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (electronicDevice == '8') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (electronicDevice == '9') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else {
          cout << "You have entered wrong value,please press correct value"
               << endl;
          goto electronicdeviceList;
        }
        cout << "Press \"y\" to add more items" << endl;
        cin >> selectAgain;
        if (selectAgain == 'y') {
          goto items;
        } else {
          return billAmount;
        }
      } else if (item == 2) {
        system("cls");
      booksList:
        cout << "Please select 1,2,3,4,5,6,7,8,9 as per your choice" << endl;
        cout << "======================================================\n";
        cout << "1.Tum Pahle Kyu Nhi Aaye           :   Price:$3\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "2.Harry Potter                     :   Price:$5\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "3.The adventure of Tin Tin         :   Price:$2\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "4.Data Structures and algorithms   :   Price:$4\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "5.Constitution of India            :   Price:$4.5\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "6.The Hunger games                 :   Price:$7\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "7.Marvel Legacy                    :   Price:$9\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "8.The great legacy of India        :   Price:$11\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "9.Marketing stratigies             :   Price:$3.5\n" << endl;
        cout << "======================================================\n";
        cin >> books;
        if (books == '1') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (books == '2') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (books == '3') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (books == '4') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (books == '5') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (books == '6') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (books == '7') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (books == '8') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (books == '9') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else {
          cout << "You have entered wrong value,please press correct value!!!!!"
               << endl;
          goto booksList;
        }
        cout << "Press \"y\" to add more items" << endl;
        cin >> selectAgain;
        if (selectAgain == 'y') {
          goto items;
        } else {
          return billAmount;
        }

      } else if (item == 3) {
        system("cls");
      sportsList:
        cout << "Please select 1,2,3,4,5,6,7,8,9 as per your choice" << endl;
        cout << "======================================================\n";
        cout << "1.Football                           :   Price:$50\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "2.Cricket Bat                        :   Price:$35\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "3.Golf Club                          :   Price:$100\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "4.Table Tennis kit                   :   Price:$55\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "5.Cosco Badminton                    :   Price:$95\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "6.Shuttle pack                       :   Price:$45\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "7.Basket Ball                        :   Price:$10\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "8.Sports Shoes                       :   Price:$80\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "9.Cricket Kit                        :   Price:$75\n" << endl;
        cout << "======================================================\n";
        cin >> sports;
        if (sports == '1') {
          cout << "Enter Quantity: : ";
          cin >> qty;
          billAmount = billAmount + (qty * 50);
          cart.add_item("Football", (qty * 50), qty);
        } else if (sports == '2') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 35);
          cart.add_item("Football", (qty * 50), qty);
        } else if (sports == '3') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 100);
          cart.add_item("Football", (qty * 50), qty);
        } else if (sports == '4') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 55);
          cart.add_item("Football", (qty * 50), qty);
        } else if (sports == '5') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 95);
          cart.add_item("Football", (qty * 50), qty);
        } else if (sports == '6') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 45);
          cart.add_item("Football", (qty * 50), qty);
        } else if (sports == '7') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 10);
          cart.add_item("Football", (qty * 50), qty);
        } else if (sports == '8') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 80);
          cart.add_item("Football", (qty * 50), qty);
        } else if (sports == '9') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else {
          cout << "You have entered wrong value,please press correct value!!!!!"
               << endl;
          goto sportsList;
        }
        cout << "Add more items,y or n?" << endl;
        cin >> selectAgain;
        if (selectAgain == 'y') {
          goto items;
        } else {
          return billAmount;
        }

      } else if (item == 4) {
        system("cls");
      healthcareList:
        cout << "Please select 1,2,3,4,5 as per your choice" << endl;
        cout << "======================================================\n";
        cout << "1.Thermometer                    :   Price:$100\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "2.Stethoscope                    :   Price:$150\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "3.Blood pressure monitor         :   Price:$115\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "4.pulse oximeter                 :   Price:$200\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "5.Glucometer                     :   Price:$80\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "6.Antihistamines                 :   Price:$130\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "7.Alcohol swabs                  :   Price:$175\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "8.Nebulizer                      :   Price:$400\n" << endl;
        cout << "------------------------------------------------------\n";
        cout << "9.First-aid kit                  :   Price:$70\n" << endl;
        cout << "======================================================\n";
        cin >> healthcare;
        if (healthcare == '1') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (healthcare == '2') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (healthcare == '3') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (healthcare == '4') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (healthcare == '5') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (healthcare == '6') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (healthcare == '7') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (healthcare == '8') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else if (healthcare == '9') {
          cout << "Enter Quantity: ";
          cin >> qty;
          billAmount = billAmount + (qty * 75);
          cart.add_item("Football", (qty * 50), qty);
        } else {
          cout << "You have entered wrong value,please press correct value!!!!!"
               << endl;
          goto healthcareList;
        }
        cout << "Press y to add more items or n to end?" << endl;
        cin >> selectAgain;
        if (selectAgain == 'y') {
          goto items;
        } else {
          return billAmount;
        }

      } else {
        cout << "We Appreciate your Excitation for shopping,Unfortunately "
                "Entered WRONG INPUT,Please Try AGAIN!"
             << endl;
        goto items;
      }

    } else {
      cout << "You have entered wrong value,please press 1" << endl;
      goto start;
    }
    return billAmount;
  }
};
//===============================================================================
main() {
  int choice;
  std::ofstream ofs;
  ofs.open("cart.txt", std::ofstream::out | std::ofstream::trunc);
  ofs.close();
  // Cart cart("cart.txt");
  cout << "======================Welcome to Deepak ki "
          "dukaan=====================";
  cout << "\n1.Login";
  cout << "\n2.Register";
  cout << "\n3.Forgot";
  cout << "\n4.Exit";
  cout << "\n------------------------------------------------------------------"
          "----\n";
  cout << "Please enter your choice: ";
  cin >> choice;
  switch (choice) {
  case 1:
    login();
    break;
  case 2:
    registr();
    break;
  case 3:
    forgot();
    break;
  case 4:
    system("cls");
    cout << "Thanks for using the application";
    exit(0);
    break;
  default:
    cout << "Please enter valid choice\n";
    main();
  }
}
void registr() {
  string rusr, rpas;
  system("cls");
  cout << "Please enter the username: ";
  cin >> rusr;
  cout << "Please enter the password: ";
  cin >> rpas;

  ofstream reg("password.txt", ios::app);
  reg << rusr << " " << rpas << endl;
  system("cls");
  cout << "Congratulations! You are successfully registered\n";
  main();
}

void login() {
  int exist = 0, a, b;
  string user, pass, u, p;
  system("cls");
  cout << "Please enter the username: ";
  cin >> user;
  cout << "Please enter the password: ";
  cin >> pass;

  ifstream input("password.txt");
  while (input >> u >> p) {
    if (u == user && p == pass) {
      exist = 1;
    }
  }
  input.close();
  if (exist == 1) {
    system("cls");
    cout << "Welcome " << u;
    cout << "\n";
    Second_Screen *nxt = new Second_Screen();
    while (1) {
      b = nxt->returnInterfade();
      if (b == 7) {
        cout << "Thanks for shopping\n";
      }
    }
  } else {
    system("cls");
    cout << "Invalid username or password\n";
    main();
  }
}

void forgot() {
  int ch;
  system("cls");
  cout << "Please select one of the following ways to retrive password or to "
          "go back\n";
  cout << "--------------------------------------------------------------------"
          "-------\n";
  cout << "1.Search your account by username\n";
  cout << "2.Search your account by password\n";
  cout << "3.Main menu\n";
  cout << "Please enter your choice: ";
  cin >> ch;

  switch (ch) {
  case 1: {
    system("cls");
    int ex = 0;
    string suser, su, sp;
    cout << "Enter the username you remember: ";
    cin >> suser;

    ifstream susr("password.txt");
    while (susr >> su >> sp) {
      if (su == suser) {
        ex = 1;
        break;
      }
    }
    susr.close();
    if (ex == 1) {
      cout << "Your account has been found\n";
      cout << "Your password is " << sp;
      cout << "\n";
      main();
    } else {
      cout << "Account does not exist with current user name\n";
      main();
    }
    break;
  }
  case 2: {
    system("cls");
    int exi = 0;
    string spas, su2, sp2;
    cout << "Enter the password you remember: ";
    cin >> spas;

    ifstream spass("password.txt");
    while (spass >> su2 >> sp2) {
      if (sp2 == spas) {
        exi = 1;
      }
    }
    spass.close();
    if (exi == 1) {
      cout << "Your account has been found\n";
      cout << "Your userID is " << su2;
      cout << "\n";
      main();
    } else {
      cout << "Account does not exist with current password\n";
      main();
    }
    break;
  }
  case 3:
    system("cls");
    main();
    break;

  default:
    cout << "Please choose the right option";
    forgot();
  }
}
