#include<iostream>
using namespace std;
void availableNurse();  
void registeredPatient()
{
    string reg;
    cout<<"\nIs the patient registered? (yes/no): \n";
    cin>>reg;
    if(reg == "yes")
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

void needMedication()
{
    cout<<"\nDoes the patient need medication? (yes/no): \n";
    string medication;
    cin>>medication;
    if(medication == "yes")
    {
        cout<<"\nGives the patient prescription\n";
    }
    else
    {
        cout<<"\nNo medication needed.\n";
    }
}

void followupDoctor()
{
    cout<<"\nNeed for follow-up? (yes/no): \n";
    string followup;
    cin>>followup;
    if(followup == "yes")
    {
        cout<<"\nAppointment has been arranged for the patient.\n";
        needMedication();
    }
    else
    {
        cout<<"\nNo follow-up needed.\n";
        needMedication();
    }
}

void availableDoctor()
{
    cout<<"\nIs the doctor available?(yes/no)\n";
    string doctor;
    cin>>doctor;
    if(doctor=="yes")
    {
        cout<<"\nDoctor is available.\n";
        cout<<"\nAssing patient to doctor.\n";
        followupDoctor();
    }     
    else
    {
        cout<<"\nDoctor is not available.\n";
        cout<<"\nPlease wait for the doctor to be available.\n";
        availableDoctor();
    }                 
}

void availableNurse()
{
    cout<<"\nIs the nurse available?(yes/no)\n";
    string nurse;
    cin>>nurse;
    if(nurse=="yes")
    {
        cout<<"\nNurse is available.\n";
        cout<<"\nNurse is recodring the patient conditions.\n";
        availableDoctor();
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
    // if(registeredPatient())
    // {
    //     cout<<"\nPatient is registered.\n";
    //     cout<<"\nChecking for available nurse...\n";
    //     availableNurse();
    // }
    // else
    // {
    //     cout<<"\nPatient is not registered.\n";
    //     cout<<"\nPlease register the patient.\n";
    //     registeredPatient();
    // }
    registeredPatient();
    cout<<"\nPatient leaves\n";
}