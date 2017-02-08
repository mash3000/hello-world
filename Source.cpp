#include <iostream>
#include <string>
#include <vector>
#include "Cake.h"
using namespace std;
int linearSearch(auto data, auto key);//prototype
int main() {

vector <Cake> Cakes;
Cake cakeObj;
string ingredient;
string ingredients[10];
string flav;
string search_key = "Vanilla";
int result;

for(int i = 0; i<4;i++) {
Cakes.push_back(cakeObj);
}

for (auto u : ingredients) {
u="";
}

cout << "Enter the ingredient and type information for the four cakes \n" << endl;

for (int o =0; o<4;o++){
cout << "\nEnter each ingredient for the cake (Max 10 ingredients). A '-' (dash) indicates no more ingredients\n" << endl;

for (int x =1;x<11;x++){
cout << "Ingredient " <<x<<":";
cin >> ingredient;

if(ingredient == "-") {
cin.ignore();
break;
}
else {
ingredients[x-1] = ingredient;
cin.ignore();
}
}
Cakes[o].gatherIngredients(ingredients);
cout << "Please enter the type of cake you are making" << endl;
getline(cin,flav);
Cakes[o].setCakeFlavour(flav);
}
 
    while(search_key != "#")//perform searches until sentinel entered
    {
       
        result = linearSearch(Cakes,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}

int linearSearch(auto data,auto key){
for(int i=0;i<data.size();i++){
if(data[i].getCakeFlavour() == key) {
return i;
}//endif
}//endfor 
return -1; //not found
}
