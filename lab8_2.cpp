#include <iostream>
using namespace std;

int main(){
    string n,c,d,e,id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,n);
    cout << "Fahsai: Wow!!! "<< n <<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << n << ": ";
    getline(cin,id);
    cout << "Fahsai: I think you may be GEAR "<< ((int(id[0]-'0')*10)+int(id[1]-'0'))-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!! \nFahsai: What movie do you want to watch?\n";
    cout << n << ": ";
    getline(cin,c);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << n << ": ";
    getline(cin,d);    
    cout << "Fahsai: "<< d <<"....that is OK!!! I'm looking forward to watching "<< c <<" with you.\n";
    cout << n << ": ";
    getline(cin,e);
    cout << "Fahsai: 555+ see you "<< d <<". Bye Bye \\(^ ^)/";
}