# include <iostream>
#include <vector>
using namespace std;
#include "string"
void main()
{
   vector<double> vec;
   std::string str("23.58 62.72 12.36");
   std::string str1 ("23.5");
   std::string::size_type sz;     // alias of size_t
   std::string a = "aaa";
   std::string b = a;
   double earth = std::stod(str);
   
   //vec.push_back(str.begin(), str.end(), std::stoi(str.substr(0,4)));
  
   //double earth = std::stod(str, & (std::string::size_type sz));
   double moon = std::stod(str.substr(8));
   std::cout << "sz="<< str.size()<<" earth="<<earth<<" moon=" << moon << endl;
   //vector<int> vec;
   for (int i = 0; i < str.size(); i+=6)
   {
      double abc = std::stod(str.substr(i, 5));
      vec.push_back(abc);
      std::cout << "abc="<<abc << endl;
   }

   auto pertr = &vec;
   std::cout << "pertr=" << pertr << endl;
   enum StrengthType
   {
      StrengthType_Off, StrengthType_Hard, StrengthType_Soft,
      StrengthType_Valid, StrengthType_Invalid, StrengthType_Preferable, StrengthType_NonPreferable
   };
   for (int constr = StrengthType_Valid; constr <= StrengthType_NonPreferable; constr++)
   {
      if (StrengthType(constr) == StrengthType_Preferable)
      {
         std::cout << "yes" << std::endl;
      }
   }
}