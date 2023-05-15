#include <iostream>

using namespace std;

int age;

int main() {
    cout << "How old are you?" << endl;
    cin>>age;

    if (age<18)
        {
            cout<<"You are underage and you can't run for president." <<endl;
        }
    else if ((age>=18) && (age<35))
        {
            cout<<"You're an adult but you can't run for president." <<endl;
        }
    else
        {
            cout<<"You are an adult and you can run for president" <<endl;
        }

    return 0;
}

for ()
