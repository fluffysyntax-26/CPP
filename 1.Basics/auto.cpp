#include <iostream>
#include <vector>

using namespace std;

int main() {
   
   auto var1 {"c"}; 
   auto var2 {10}; 
   auto var3 {10.5f};
   auto var5 {11.4545737};
   auto var4 {true};

   //int modifier suffixes 
    auto var6 {10u}; // unsigned int
    auto var7 {10l}; // long
    auto var8 {10ll}; // long long
    auto var9 {10ul}; // unsigned long

    cout << "var1 : " << sizeof(var1) << " Bytes" << endl;
    cout << "var2 : " << sizeof(var2) << " Bytes" << endl;
    cout << "var3 : " << sizeof(var3) << " Bytes" << endl;
    cout << "var4 : " << sizeof(var4) << " Bytes" << endl;
    cout << "var5 : " << sizeof(var5) << " Bytes" << endl;
    cout << "var6 : " << sizeof(var6) << " Bytes" << endl;
    cout << "var7 : " << sizeof(var7) << " Bytes" << endl;
    cout << "var8 : " << sizeof(var8) << " Bytes" << endl;
    cout << "var9 : " << sizeof(var9) << " Bytes" << endl;

}