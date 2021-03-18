#include <bitset>
#include <iostream>

// Poziv funkcije printBits rezultovace sa ispisom
// proslijedjenog broja u binarnoj formi.
//
// Primjer:
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// unsigned short s = 5;
// printBits(s);
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Ispis:
// 0000000000000101
// 
void printBits(unsigned short reg) {
  std::bitset<16> bits(reg);
  std::cout << bits << std::endl;
  std::cout<<std::endl;
}


int main() {
  unsigned short reg=0;
  while(true) {
  std::cout << "1. Print register" << std::endl;
  std::cout << "2. Set bit in register" << std::endl;
  std::cout << "3. Reset bit in register" << std::endl;
  std::cout << "4. Exit" << std::endl;
  std::cout << "Enter option: ";
  int option;
  std::cin >> option;
  std::cout<<std::endl;
    if (option == 1) {
        printBits(reg);
    } else if (option == 2) {
        std::cout<<"Enter bit number: ";
        int number;
        std::cin>>number;
        reg=reg | (1<<number);
        std::cout<<"New register value: "<<reg<<std::endl;
        printBits(reg);
    } else if (option == 3) {
        std::cout<<"Enter bit number: ";
        int number;
        std::cin>>number;
        unsigned short reg2=0;
        reg2=reg2 | (1<<number);
        unsigned short reg3=reg xor reg2;
        if(reg3<=reg){
            reg=reg3;
        }
        std::cout<<"New register value: "<<reg<<std::endl;
        printBits(reg);
    } else if (option == 4) {
      break;
    }
    std::cout << std::endl;
  }

  return 0;
}
