#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int predmeti=0;
    cout<<"Unesite broj predmeta ";
    cin>>predmeti;
    string ocj [predmeti]={};
    cout<<"Unesite naziv predmeta ";
    for(int i=0;i<predmeti;i++){
        string pr="";
        cin>>pr;
        ocj[i]=pr;
    }
    ofstream tekst;
    tekst.open("predmeti.txt");
    for(int i = 0; i < predmeti; i++){
        tekst << ocj[i] << endl;
    }
    return 0;
}
