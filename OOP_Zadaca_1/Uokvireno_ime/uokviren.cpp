#include<iostream>
#include<string>


int main(){
    std::string ime;
    std::cout<<"Unesite ime: ";
    std::cin>>ime;
    std::cout<<std::string(11,'*')<<std::string(ime.size(),'*')<<std::string(2,'*')<<std::endl;
    std::cout<<'*'<<std::string(11+ime.size(),' ')<<'*'<<std::endl;
    std::cout<<"* "<<"Pozdrav, "<<ime<<" *"<<std::endl;
    std::cout<<'*'<<std::string(11+ime.size(),' ')<<'*'<<std::endl;
    std::cout<<std::string(11,'*')<<std::string(ime.size(),'*')<<std::string(2,'*')<<std::endl;
    return 0;
}