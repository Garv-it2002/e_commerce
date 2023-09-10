import os
import sys

total_price = 0

class CartRemove:
    def __init__(self, filename):
        self.filename = filename

    def removeAndgetPrice(self, itemname):
        global total_price
        try:
            if not os.path.exists(self.filename):
                print("Invalid filename")
                sys.exit(0)
            
            with open(self.filename, 'r') as f:
                lines = f.readlines()
            
            found_item = False

            with open(self.filename, 'w') as f:
                for line in lines:
                    l1 = line.split(',')
                    if l1[0] == itemname:
                        found_item = True
                        item_price = float(l1[1])
                        total_price -= item_price
                    else:
                        f.write(line)

            if found_item:
                print(f"{itemname} has been removed from the cart.")
            else:
                print(f"{itemname} not found in the cart.")
        
        except IOError as e:
            print(f"An IO error occurred: {e}")


class Second_Screen:
    def __init__(self):
        self.billAmount = 0
        self.cart = Cart("cart.txt")

    def return_interface(self):
        while True:
            print("============Welcome to Marketplace==========")
            print("Please select your Choice")
            print("1.Buy Items\n2.View Cart\n3.Checkout\n4.Exit")
            print("---------------------------------------------------")

            item = int(input())
            if item == 1:
                self.billAmount = self.return_total_bill()
            elif item == 2:
                self.view_cart()
            elif item == 3:
                self.checkout()
            elif item == 4:
                print("Thanks for using the application")
                exit()
            else:
                print("Please enter a valid value")

    def return_total_bill(self):
        while True:
            print("============Welcome to Marketplace==========")
            print("Please press 1 to go ahead for shopping your favorite items")
            c = int(input())

            if c == 1:
                return self.shop_items()
            else:
                print("You have entered the wrong value, please press 1")

    def shop_items(self):
        while True:
            print("=======================================================================")
            print("Please select your Choice")
            print("1.Electronics\n2.Books\n3.Sports\n4.Healthcare\n5.Go back")
            print("=======================================================================")
            item = int(input())

            if item == 1:
                self.shop_electronics()
            elif item == 2:
                self.shop_books()
            elif item == 3:
                self.shop_sports()
            elif item == 4:
                self.shop_healthcare()
            elif item == 5:
                break
            else:
                print("You have entered the wrong value, please press a correct value")

    def shop_electronics(self):
        while True:
            print("======================================================")
            print("Please select 1,2,3,4,5,6,7,8,9 as per your choice")
            print("======================================================")
            print("1.Dell XPS 13           :   Price:$999.99")
            print("2.Macbook Pro           :   Price:$1,299.99")
            print("3.HP Spectre x360       :   Price:$1,099.99")
            print("4.Lenovo ThinkPad       :   Price:$1,001.99")
            print("5.Asus ZenBook          :   Price:$899.99")
            print("6.Samsung Galaxy S21    :   Price:$859.99")
            print("7.iPhone 12             :   Price:$909.99")
            print("8.Sony Bravia TV        :   Price:$939.99")
            print("9.Bose QuietComfort 35  :   Price:$959.99")
            print("======================================================")
            electronicDevice = int(input())

            if 1 <= electronicDevice <= 9:
                qty = int(input("Enter Quantity: "))
                prices = [999.99, 1299.99, 1099.99, 1001.99, 899.99, 859.99, 909.99, 939.99, 959.99]
                self.billAmount += qty * prices[electronicDevice - 1]
                product_name = [
                    "Dell XPS 13",
                    "Macbook Pro",
                    "HP Spectre x360",
                    "Lenovo ThinkPad",
                    "Asus ZenBook",
                    "Samsung Galaxy S21",
                    "iPhone 12",
                    "Sony Bravia TV",
                    "Bose QuietComfort 35",
                ]
                self.cart.add_item(product_name[electronicDevice - 1], qty * prices[electronicDevice - 1], qty)
                select_again = input("Press 'y' to add more items or any key to end: ").lower()
                if select_again != 'y':
                    return self.billAmount
            else:
                print("You have entered the wrong value, please press the correct value")

    def shop_books(self):
        while True:
            print("======================================================")
            print("Please select 1,2,3,4,5,6,7,8,9 as per your choice")
            print("======================================================")
            print("1.Tum Pahle Kyu Nhi Aaye           :   Price:$3")
            print("2.Harry Potter                     :   Price:$5")
            print("3.The adventure of Tin Tin         :   Price:$2")
            print("4.Data Structures and algorithms   :   Price:$4")
            print("5.Constitution of India            :   Price:$4.5")
            print("6.The Hunger games                 :   Price:$7")
            print("7.Marvel Legacy                    :   Price:$9")
            print("8.The great legacy of India        :   Price:$11")
            print("9.Marketing stratigies             :   Price:$3.5")
            print("======================================================")
            books = int(input())

            if 1 <= books <= 9:
                qty = int(input("Enter Quantity: "))
                prices = [3, 5, 2, 4, 4.5, 7, 9, 11, 3.5]
                self.billAmount += qty * prices[books - 1]
                product_name = [
                    "Tum Pahle Kyu Nhi Aaye",
                    "Harry Potter",
                    "The adventure of Tin Tin",
                    "Data Structures and algorithms",
                    "Constitution of India",
                    "The Hunger games",
                    "Marvel Legacy",
                    "The great legacy of India",
                    "Marketing stratigies",
                ]
                self.cart.add_item(product_name[books - 1], qty * prices[books - 1], qty)
                select_again = input("Press 'y' to add more items or any key to end: ").lower()
                if select_again != 'y':
                    return self.billAmount
            else:
                print("You have entered the wrong value, please press the correct value")

    def shop_sports(self):
        while True:
            print("======================================================")
            print("Please select 1,2,3,4,5,6,7,8,9 as per your choice")
            print("======================================================")
            print("1.Football                           :   Price:$50")
            print("2.Cricket Bat                        :   Price:$35")
            print("3.Golf Club                          :   Price:$100")
            print("4.Table Tennis kit                   :   Price:$55")
            print("5.Cosco Badminton                    :   Price:$95")
            print("6.Shuttle pack                       :   Price:$45")
            print("7.Basket Ball                        :   Price:$10")
            print("8.Sports Shoes                       :   Price:$80")
            print("9.Cricket Kit                        :   Price:$75")
            print("======================================================")
            sports = int(input())

            if 1 <= sports <= 9:
                qty = int(input("Enter Quantity: "))
                prices =[50, 35, 100, 55, 95, 45, 10, 80, 75]
                self.billAmount += qty * prices[sports - 1]
                product_name = [
                    "Football",
                    "Cricket Bat",
                    "Golf Club",
                    "Table Tennis kit",
                    "Cosco Badminton",
                    "Shuttle pack",
                    "Basket Ball",
                    "Sports Shoes",
                    "Cricket Kit",
                ]
                self.cart.add_item(product_name[sports - 1], qty * prices[sports - 1], qty)
                select_again = input("Press 'y' to add more items or any key to end: ").lower()
                if select_again != 'y':
                    return self.billAmount
            else:
                print("You have entered the wrong value, please press the correct value")

    def shop_healthcare(self):
        while True:
            print("======================================================")
            print("Please select 1,2,3,4,5 as per your choice")
            print("======================================================")
            print("1.Thermometer                    :   Price:$100")
            print("2.Stethoscope                    :   Price:$150")
            print("3.Blood pressure monitor         :   Price:$115")
            print("4.Pulse oximeter                 :   Price:$200")
            print("5.Glucometer                     :   Price:$80")
            print("6.Antihistamines                 :   Price:$130")
            print("7.Alcohol swabs                  :   Price:$175")
            print("8.Nebulizer                      :   Price:$400")
            print("9.First-aid kit                  :   Price:$70")
            print("======================================================")
            healthcare = int(input())

            if 1 <= healthcare <= 9:
                qty = int(input("Enter Quantity: "))
                prices = [100, 150, 115, 200, 80, 130, 175, 400, 70]
                self.billAmount += qty * prices[healthcare - 1]
                product_name = [
                    "Thermometer",
                    "Stethoscope",
                    "Blood pressure monitor",
                    "Pulse oximeter",
                    "Glucometer",
                    "Antihistamines",
                    "Alcohol swabs",
                    "Nebulizer",
                    "First-aid kit",
                ]
                self.cart.add_item(product_name[healthcare - 1], qty * prices[healthcare - 1], qty)
                select_again = input("Press 'y' to add more items or any key to end: ").lower()
                if select_again != 'y':
                    return self.billAmount
            else:
                print("You have entered the wrong value, please press the correct value")

    def view_cart(self):
        while True:
            print("\n========================Cart==========================")
            print("Item\t\tQuantity\t\tCost")
            self.cart.display()
            print("\n----------------------------------------------------------")
            print(f"Total cart value is ${self.billAmount}\n")
            print("=======================================================\n")
            print("Please select any one option")
            print("1.Remove items from cart\n2.Go back")
            print("=======================================================\n")

            citem = int(input())
            if citem == 1:
                product = input("Enter name of product to remove: ")
                price = self.cart.remove_item_and_get_price(product)
                if price == 0:
                    print(f"{product} is not in your cart")
                else:
                    print(f"{product} has been removed from cart")
                    self.billAmount -= price
            elif citem == 2:
                break
            else:
                print("Enter a valid value")

    def checkout(self):
        print("\n========================Cart==========================")
        print("Item\t\tQuantity\t\tCost")
        self.cart.display()
        print("\n----------------------------------------------------------")
        print(f"Total cart value is ${self.billAmount}\n")
        print("=======================================================\n")
        print("Press")
        print("1.Proceed to payment\n2.Go back")
        print("----------------------------------------------------------")
        p = int(input())
        if p == 1:
            money = int(input("Please do the payment: "))
            while self.billAmount != money:
                if money > self.billAmount:
                    print("Oops, you paid extra")
                    print("Your extra payment will be credited back to your account within 24 hours")
                    print("Thanks for shopping")
                    exit(0)
                self.billAmount -= money
                print(f"Please pay the remaining amount of ${self.billAmount}")
                money = int(input())
            self.billAmount = 0
            with open("cart.txt", "w") as ofs:
                ofs.truncate(0)
            print("Thanks for shopping")
            exit(0)
        elif p == 2:
            self.return_interface()
        else:
            print("You have chosen the wrong option, please try again")

class Cart:
    def __init__(self, filename):
        self.filename = filename
        self.items = []

    def add_item(self, name, price, quantity):
        self.items.append({"name": name, "price": price, "quantity": quantity})
        with open(self.filename, "a") as cart_file:
            cart_file.write(f"{name},{price},{quantity}\n")

    def remove_item_and_get_price(self, name):
        for item in self.items:
            if item["name"] == name:
                price = item["price"]
                self.items.remove(item)
                with open(self.filename, "r") as cart_file:
                    lines = cart_file.readlines()
                with open(self.filename, "w") as cart_file:
                    for line in lines:
                        if not line.startswith(name):
                            cart_file.write(line)
                return price
        return 0

    def display(self):
        for item in self.items:
            print(f"{item['name']}\t\t{item['quantity']}\t\t${item['price']}")



import os

def main():
    choice = 0
    with open("cart.txt", "w") as ofs:
        pass

    while True:
        print("======================Welcome to Deepak ki dukaan=====================")
        print("1. Login")
        print("2. Register")
        print("3. Forgot")
        print("4. Exit")
        print("---------------------------------------------------------------------")
        choice = int(input("Please enter your choice: "))

        if choice == 1:
            os.system("cls")
            login()
        elif choice == 2:
            os.system("cls")
            registr()
        elif choice == 3:
            os.system("cls")
            forgot()
        elif choice == 4:
            os.system("cls")
            print("Thanks for using the application")
            exit(0)
        else:
            print("Please enter a valid choice")

def registr():
    rusr = ""
    rpas = ""
    u = ""
    exist = 0
    os.system("cls")

    while True:
        exist = 0
        rusr = input("Please enter the username: ")
        rpas = input("Please enter the password: ")

        with open("password.txt", "r") as input_file:
            lines = input_file.readlines()
            for line in lines:
                u = line.split()[0]
                if u == rusr:
                    exist = 1
                    break

        if exist == 0:
            break
        else:
            os.system("cls")
            print("User name already exists. Please try another username")

    with open("password.txt", "a") as reg:
        reg.write(f"{rusr} {rpas}\n")
    
    os.system("cls")
    print("Congratulations! You are successfully registered")
    main()

def login():
    exist = 0
    user = ""
    passw = ""
    u = ""
    p = ""
    os.system("cls")

    user = input("Please enter the username: ")
    passw = input("Please enter the password: ")

    with open("password.txt", "r") as input_file:
        lines = input_file.readlines()
        for line in lines:
            u, p = line.split()
            if u == user and p == passw:
                exist = 1
                break

    if exist == 1:
        os.system("cls")
        print(f"Welcome {u}\n")
        shopping_app = Second_Screen()
        while True:
            b = shopping_app.return_interface()
            if b == 7:
                print("Thanks for shopping")
    else:
        os.system("cls")
        print("Invalid username or password")
        main()

def forgot():
    ch = 0
    print("Please select one of the following ways to retrieve the password or go back")
    print("-------------------------------------------------------------------------")
    print("1. Search your account by username")
    print("2. Search your account by password")
    print("3. Main menu")
    print("-------------------------------------------------------------------------")
    ch = int(input("Please enter your choice: "))

    if ch == 1:
        os.system("cls")
        ex = 0
        suser = ""
        su = ""
        sp = ""
        suser = input("Enter the username you remember: ")

        with open("password.txt", "r") as susr:
            lines = susr.readlines()
            for line in lines:
                su, sp = line.split()
                if su == suser:
                    ex = 1
                    break

        if ex == 1:
            print("Your account has been found")
            print(f"Your password is {sp}\n")
            main()
        else:
            print("Account does not exist with the current username\n")
            main()
        os.system("cls")

    elif ch == 2:
        os.system("cls")
        exi = 0
        spas = ""
        su2 = ""
        sp2 = ""
        spas = input("Enter the password you remember: ")

        with open("password.txt", "r") as spass:
            lines = spass.readlines()
            for line in lines:
                su2, sp2 = line.split()
                if sp2 == spas:
                    exi = 1
                    break

        if exi == 1:
            print("Your account has been found")
            print(f"Your userID is {su2}\n")
            main()
        else:
            print("Account does not exist with the current password\n")
            main()
        os.system("cls")

    elif ch == 3:
        os.system("cls")
        main()
    else:
        os.system("cls")
        print("Please choose the right option\n")
        forgot()

if __name__ == "__main__":
    main()
