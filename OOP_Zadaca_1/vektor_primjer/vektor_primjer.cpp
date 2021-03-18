#include<iostream>
#include<vector>
#include<algorithm>




//Funkcja je testna
//void ispis (std::vector<int>& vec){
//    for(auto i=0;i<vec.size();i++){
//        std::cout<<vec.at(i)<<' ';
//    }
//    std::cout<<std::endl;
//}


int main(){
    std::vector<int> niz_brojeva;
    double prosjecna_vrijednost=0;
    double median;
    int privremeni; 
    std::cout<<"Unesite niz brojeva: "<<std::endl;
    while(std::cin>>privremeni){
        niz_brojeva.push_back(privremeni);
        prosjecna_vrijednost+=privremeni;
    }
    if(niz_brojeva.size()==0){
        std::cout<<"Niz je prazan"<<std::endl;
    }
    else{
        prosjecna_vrijednost=prosjecna_vrijednost/niz_brojeva.size();
        //std::cout<<"Prije sortiranja: "<<std::endl;
        //ispis(niz_brojeva);
        std::sort(niz_brojeva.begin(),niz_brojeva.end());
        //std::cout<<"Nakon sortiranja"<<std::endl;
        //ispis(niz_brojeva);
        if(niz_brojeva.size()%2==0){
            double prvi, drugi;
            prvi=niz_brojeva.at(niz_brojeva.size()/2-1);
            drugi=niz_brojeva.at(niz_brojeva.size()/2);
            median=(prvi+drugi)/2;
    }
        else{
            median=niz_brojeva.at(niz_brojeva.size()/2);
        }
        std::cout<<"Prosjecna vrijednost je: "<<prosjecna_vrijednost<<std::endl;
        std::cout<<"Median je: "<<median<<std::endl;
    }
    return 0;
}