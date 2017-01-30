#include <iostream>
#include <string>
#include <vector>
#include "Cake.h"
using namespace std;

int main() {
vector <Cake> Cakes;
Cake cakeObj;
string ingredient;
string ingredients[10];
string flav;
for(int i = 0; i<4;i++) {
Cakes.push_back(cakeObj);
}
for (auto u : ingredients) {
u="";
}
cout << "Enter the ingredient and type information for the four cakes \n" << endl;
for (int o =0; o<4;o++){
cout << "\nEnter each ingredient for the cake (Max 10 ingredients). A '-' (dash) indicates no more ingredients\n" << endl;

for (int x =1;x<11;.x++){

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
cout << "The details for the four cakes are as follows:\n" << endl;
int y=1
for (int r=0;r<4;r++){
cout MM "\nCake "<<y<<"\nIngredients:" << endl;
Cakes[r].displayIngredients();Cakes[r].getCakeFlavour();
y++;
}
system("pause");
}
