#include<iostream>
using namespace std;

bool registeredPatient()
{
    string reg;
    cout<<"\nIs the patient registered? (yes/no): \n";
    cin>>reg;
    return reg == "yes";
}

void availableNurse()
{
    cout<<"\nIs the nurse available?(yes/no)\n";
    string nurse;
    cin>>nurse;
    if(nurse=="yes")
    {
        cout<<"\n Nurse is available.\n";
        cout<<"\nNurse is recodring the patient conditions.\n";
        // availableDoctor();
    }     
    else
    {
        cout<<"\nNurse is not available.\n";
        cout<<"\nPlease wait for the nurse to be available.\n";
        availableNurse();
    }                 
}


int main()
{
    cout<<"\nPatient arrives\n";
    if(registeredPatient())
    {
        cout<<"\nPatient is registered.\n";
        cout<<"\nChecking for available nurse...\n";
        availableNurse();
    }
    else
    {
        cout<<"\nPatient is not registered.\n";
        cout<<"\nPlease register the patient.\n";
        registeredPatient();
    }
}