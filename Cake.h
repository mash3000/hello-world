#include <iostream>
#include <string>
using namespace std;

class Cake{
public:
  Cake(){
for auto i : ingredients){
i="";
}
cakeFlavour = "Vanilla";
}
void gatherIngredients(string ing[10]){
for (int i=0;i < 10;i++){
ingredients[i] = ing[i];
}
}
void displayIngredients(){

for(auto i: ingredients) {
cout << i << endl;
}
}
void setCakeFlavour(string flavour){
cakeFlavour = flavour;
}
void getCakeFlavour(){
cout << "The cake's flavour is " << cakeFalvour << endl;
}
private:
string ingredients[10];
string cakeFlavour;
};
