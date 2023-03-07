#ifndef CART_H
#define CART_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class Cart {
private:
  std::string filename;

public:
  Cart(std::string filename) : filename(filename) {}

  void add_item(std::string name, double price, int quantity) {
    std::ofstream file(filename, std::ios_base::app);
    if (file.is_open()) {
      file << name << "," << price << "," << quantity << "\n";
      file.close();
    } else {
      std::cerr << "Error: failed to open file " << filename << std::endl;
    }
  }

  void display() {
    std::ifstream file(filename);
    if (file.is_open()) {
      std::string line;
      double price;
      int quantity;
      while (getline(file, line)) {
        std::string name;
        std::istringstream iss(line);
        getline(iss, name, ',');
        iss >> price;
        iss.ignore();
        iss >> quantity;
        std::cout << name << "\t\t" << quantity << "\t\t" << price << std::endl;
      }
      file.close();
    } else {
      std::cerr << "Error: failed to open file " << filename << std::endl;
    }
  }
};

#endif // CART_H
