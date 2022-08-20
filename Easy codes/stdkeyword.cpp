#include <iostream>

int main()
{
   std::cout << "endl is working with std" << std::endl;
   //output will new empty line
   std::cout << "Hello world";
   //Hello world will display
   
   std::string name="surafel";

   std::cout<<std::endl;
   
   std::cout<<name;
   
   int age;
   std::cout<<"enter your age";
   
   std::cin>>age;
   std::cout<<"your age is \n"<<age;

   
   return 0;
}
