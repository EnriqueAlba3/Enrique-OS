#include <iostream>
using namespace std;

int main() {
cout << " Booting ... \n" ;
cout << " Booting ... \n" ;
cout << " Booting ... \n" ;

string usr = ""; //user
string psd = ""; //password


cout << "Welcome to Enrique OS";
cout << "Please enter the username and password";
cout << "<Username> = Admin \n";
cout << "Enter Username\n";
cin >> usr;
cout << "<password> = Pass \n";
cout << "Enter Password\n";
cin >> psd;

if (usr == "Admin"  && psd == "Pass"){
    cout << "Login was successful! ";
}
else{
    cout << "wrong input please leave";
    return 0;
}
int ans1;
cout << "Time to run some programs choose from the selection. Results in not picking one of the options will turn to termination \n";
cout << "1.cloud counter\n";

cin >> ans1;

int cloudans;
int cloudcount = 0;

if (ans1 == 1){
    int loop1 = 1;
    while (loop1 == 1){
        int cloudans;
        cout << "Enter 1 to continue counting clouds, enter 2 to change terminate this program.\n";
        cin >> cloudans;
        if (cloudans == 1){
            cloudcount += 1 ;
            cout << cloudcount << "\n";
        }
        else if (cloudans == 2){
            loop1 = 2;
            cout << "Cloud counter has ended \n";
        }
        else{
            return 0;
        }
    }
}
cout << "Thank you for using Enrique OS";
return 0;
}
