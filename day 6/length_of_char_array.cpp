#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "Enter your name : " << endl;
    cin >> name;

    cout << "Your name is : " << name << endl;

    cout << "Length of your name is : " << getlength(name) << endl;

    return 0;
}