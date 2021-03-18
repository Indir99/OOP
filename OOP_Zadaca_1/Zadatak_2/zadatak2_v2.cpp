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

unsigned short operate(unsigned short reg);

void printReg(unsigned short reg1,unsigned short reg2){
    std::cout<<"Reg1: ";
    printBits(reg1);
    std::cout<<"Reg2: ";
    printBits(reg2);
    }

int main() {
  unsigned short first_reg=0;
  unsigned short second_reg=0;
  while(true) {
  std::cout<<"Enter option: "<<std::endl;
  std::cout<<"1. Register 1"<<std::endl;
  std::cout<<"2. Register 2"<<std::endl;
  std::cout<<"3. Swap registers"<<std::endl;
  std::cout<<"Your choice: ";
  int choice;
  std::cin>>choice;
    if(choice==1){
      std::cout<<"Operating on Register 1"<<std::endl;
      first_reg=operate(first_reg);
  }
    else if(choice==2){
      std::cout<<"Operating on Register 2"<<std::endl;
      second_reg=operate(second_reg);
    }
    else if(choice==3){
        std::cout<<"Before swaping: "<<std::endl;
        printReg(first_reg,second_reg);
        std::swap(first_reg,second_reg);
        std::cout<<"After swaping: "<<std::endl;
        printReg(first_reg,second_reg);
    }
    else{
        std::cout<<"Wrong input"<<std::endl;
    }
  }
  return 0;
}

unsigned short operate(unsigned short reg){
while(true){
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
    std::cout << std::endl;
    }
    else if(option == 4){
        break;while(true){
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
    std::cout << std::endl;
    }
    else if(option == 4){
        break;
    }
}
  return reg;   
}
    }
    }
    return reg;
}