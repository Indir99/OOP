#include<iostream>
#include<math.h>

//Potrebno je koristiti namespace, medjutim rijetko se koriste u praksi

int main(){
while(true){
    std::cout<<"Welcome to Unit converter. Please eneter one of the following options:"<<std::endl;
    std::cout<<"1. Temperature"<<std::endl;
    std::cout<<"2. Speed"<<std::endl;
    std::cout<<"3. Length"<<std::endl;
    std::cout<<"4. Weight"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Your choice: ";
    int i;
    std::cin>>i;
//Temperature converter
    if(i==1){
        std::cout<<"Welcome to temperature converter. Chose one of the following options"<<std::endl;
        std::cout<<"1. Celsius to Kelvin"<<std::endl;
        std::cout<<"2. Celsius to Farenheit"<<std::endl;
        std::cout<<"3. Kelvin to Celsius"<<std::endl;
        std::cout<<"4. Kelvin to Farenheit"<<std::endl;
        std::cout<<"5. Fahreneit to Celsius"<<std::endl;
        std::cout<<"6. Fahrenheit to Kelvin"<<std::endl;
        std::cout<<"Your choice: "; 
        int j;
        std::cin>>j;
 //Celsius to Kelvin       
        if(j==1){
            std::cout<<"Please eneter temperature in degrees Celsius: ";
            double cels,kelvin;            
            std::cin>>cels;
            if(cels<-273.15){
                std::cout<<"Temperature can't be below apsoulute zero (<-273.15 degrees Celsius)"<<std::endl;
            } 
            else{
                kelvin=cels+273.15;
                std::cout<<"Temperature in Kelvin is: "<<kelvin<<std::endl;
            }
        }
//Celsius to Fahrenhelut
        else if(j==2){
            std::cout<<"Please eneter temperature in degrees Celsius: ";
            double cels, fahrenheit;  
            std::cin>>cels;
            if(cels<-273.15){
                std::cout<<"Temperature can't be below apsolute zero (<-273.15 degrees Celsius)"<<std::endl;
            }
            else{
                fahrenheit=(9./5)*cels+32;
                std::cout<<"Temperature in degrees Fahrenheit is: "<<fahrenheit<<std::endl;
            }
        }
//Kelvin to Celsius
        else if(j==3){
            std::cout<<"Please enter temperature in Kelvin: ";
            double kelvin, cels; 
            std::cin>>kelvin;
            if(kelvin<0){
                std::cout<<"Temperature can't be below apsolute zero( < 0 Kelvin)"<<std::endl;
            }
            else{
                cels=kelvin-273.15;
                std::cout<<"Temperature in degrees Celsius is: "<<cels<<std::endl;
            }
        }
//Kelvin to Fahrenheit
        else if(j==4){
            std::cout<<"Please enter temperature in Kelvin: ";
            double kelvin, fahrenheit; 
            std::cin>>kelvin;
            if(kelvin<0){
                std::cout<<"Temperature can't be below apsolute zero( < 0 Kelvin)"<<std::endl;
            }
            else{
                fahrenheit=kelvin*9./5-459.67;
                std::cout<<"Temperature in degrees Celsius is: "<<fahrenheit<<std::endl;
            }
        }
//Fahrenheit to Celius
        else if(j==5){
            std::cout<<"Enter temperature in degrees Fahrenheit: ";
            double fahrenheit, cels; 
            std::cin>>fahrenheit;
            if(fahrenheit<-459.67){
                std::cout<<"Temperature can't be below apsolute zero (<-459.67 degrees Fahrenheit)"<<std::endl;
            }
            else{
                cels=5./9*(fahrenheit-32);
                std::cout<<"Temperature in degrees Celsius is: "<<cels<<std::endl;
            }
        }
//Fahrenheit to Kelvin
        else if(j==6){
            std::cout<<"Eneter temperature in Fahrenheit: ";
            double fahrenheit, kelvin; 
            std::cin>>fahrenheit;
            if(fahrenheit<-459.67){
                std::cout<<"Temperature can't be below apsolute zero (<-459.67 degrees Fahrenheit)"<<std::endl;
            }
            else{
                kelvin=5./9*(fahrenheit+459.67);
                std::cout<<"Temperature in Kelvin is: "<<kelvin<<std::endl;
            }
        }
        else{
            std::cout<<"Error. Wrong input"<<std::endl;
        }

    }
//Speed converter
    else if(i==2){
        std::cout<<"Welcome to speed coneverter. Please cohse one of the fooloeing options: "<<std::endl;
        std::cout<<"1. Kilometer per hour (kmph) to Mile per hour (mph)"<<std::endl;
        std::cout<<"2. Mile per hour (mph) to kilometer per hour (kmph)"<<std::endl;
        std::cout<<"Your choice: ";
        int j;
        std::cin>>j;
//kmph to mph
        if(j==1){
            std::cout<<"Please eneter speed in km/h: ";
            double kmph, mph; 
            std::cin>>kmph;
            if(kmph<0){
                std::cout<<"Speed can't be below 0 km/h"<<std::endl;
            }
            else{
                mph=kmph/0.62137;
                std::cout<<"Speed in mph is: "<<mph<<std::endl;
            }
        }
//mph to kmph
        else if(j==2){
            std::cout<<"Please eneter temperature in mph: ";
            double kmph, mph; 
            std::cin>>mph;
            if(mph<0){
                std::cout<<"Speed can't be beloq 0 mph"<<std::endl;
            }
            else{
                kmph=0.62137*mph;
                std::cout<<"Speed in km/h is: "<<kmph<<std::endl;
            }

        }
        else{
            std::cout<<"Error. Wrong input."<<std::endl;
        }
    }
//Length converter
    else if(i==3){
        std::cout<<"Welcome to Length converter. Please cohse one ot the following options:"<<std::endl;
        std::cout<<"1. Light year to kilometer"<<std::endl;
        std::cout<<"2. Kilometer to Light year"<<std::endl;
        std::cout<<"3. Centimeter to inch"<<std::endl;
        std::cout<<"4. Inch to centimeter"<<std::endl;
        std::cout<<"5. Feet to meter"<<std::endl;
        std::cout<<"6. Meter to feet"<<std::endl;
        std::cout<<"Your choice: ";
        int j;
        std::cin>>j;
//Light year to kilomter
        if(j==1){
            std::cout<<"Please enter length in Light years: ";
            double light_year;
            unsigned long km; 
            std::cin>>light_year;
            if(light_year<0){
                std::cout<<"Invalid input. Length can't be below 0"<<std::endl;
            }
            else{
                km=light_year*9.4605284*pow(10,12);
                std::cout<<"Length in kilometers is: "<<km<<std::endl;

            }
        }
//Kilometer to light year
        else if(j==2){
            std::cout<<"Please enter length in kilometers: ";
            unsigned long km; 
            double light_year;
            std::cin>>km;
            if(km<0){
                std::cout<<"Invalid input. Length can't be below 0"<<std::endl;
            }
            else{
                light_year=km*1.05702341*pow(100,-13);
                std::cout<<"Length in light_years is: "<<light_year<<std::endl;
            }
        }
//Centimeters to inch
        else if(j==3){
            std::cout<<"Please enter length in centimeters: ";
            double cm, inch; 
            std::cin>>cm;
            if(cm<0){
                std::cout<<"Ivalid input. Length can't be below 0"<<std::endl;
            }
            else{
                inch=cm*0.393700787;
                std::cout<<"Length in inches is: "<<inch<<std::endl;
            }
        }
//Inch to centimeters
        else if(j==4){
            std::cout<<"Please enter length in inches: ";
            double inch,cm; 
            std::cin>>inch;
            if(inch<0){
                std::cout<<"Length can't be below 0"<<std::endl;
            }
            else{
                cm=inch*(1/0.393700787);
                std::cout<<"Length in centimeters: "<<cm<<std::endl;
            }
        }
//Feets to meters
        else if(j==5){
            std::cout<<"Please eneter length in feets: ";
            double meters, feets; 
            std::cin>>feets;
            if(meters<0){
                std::cout<<"Invalid input. Length can't be below 0"<<std::endl;
            }
            else{
                meters=0.3048*feets;
                std::cout<<"Length in meters is: "<<feets<<std::endl;
            }

        }
//Meters to feets
        else if(j==6){
            std::cout<<"Please eneter length in meters: ";
            double meters, feets; 
            std::cin>>meters;
            if(meters<0){
                std::cout<<"Invalid input. Length can't be below 0"<<std::endl;
            }
            else{
                feets=3.2808399*meters;
                std::cout<<"Length in feet is: "<<feets<<std::endl;
            }

        }
        else{
            std::cout<<"Error. Wrong input."<<std::endl;
        }
    }
//Weight converter
    else if(i==4){
        std::cout<<"Welcome to Weight converter. Please cohse one of the following options:"<<std::endl;
        std::cout<<"1. Kilograms to pounds"<<std::endl;
        std::cout<<"2. Pounds to kilograms"<<std::endl;
        std::cout<<"Your cohice: ";
        int j;
        std::cin>>j;
//Kilograms to pounds
        if(j==1){
            std::cout<<"Please eneter weight in kilograms: ";
            double kilos, pounds; 
            std::cin>>kilos;
            if(kilos<0){
                std::cout<<"Invalid input. Weight can't be below 0."<<std::endl;
            }
            else{
                pounds=kilos*2.20462262;
                std::cout<<"Weight in pounds is: "<<pounds<<std::endl;
            }
        }
//Pounds to kilograms
        else if(j==2){
            std::cout<<"Please enter weight in pounds: ";
            double kilos, pounds; 
            std::cin>>pounds;
            if(pounds<0){
                std::cout<<"Invalid input. Weight can't be below 0"<<std::endl;
            }
            else{
                kilos=0.45359237*pounds;
                std::cout<<"Weight in kilogram is: "<<kilos<<std::endl;
            }
        }
        else{
            std::cout<<"Error.Wrong input"<<std::endl;
        }
    }
//Error
    else{
        std::cout<<"Error. Wrong number"<<std::endl;
    }
    std::cout<<std::endl;
}
    return 0;
}