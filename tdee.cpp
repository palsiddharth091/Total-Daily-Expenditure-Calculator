#include<bits/stdc++.h>
using namespace std;
float tdee(float b,float a)
{
    return b*a;
}
int main()
{
    string name;
    float bmr,af,TDEE;
    char gender,menu;
	cout<<"Please enter your name : ";
	getline(cin, name);
	cout<<"Please enter your BMR : ";
	cin>>bmr;
	cout<<"Please enter your gender (M/F) : ";
	cin>>gender;
	if(gender=='f'||gender=='m')
	gender=gender-32;
	menuu:
    cout<<"\n\nSelect your activity level\n[A] Resting (Sleeping, Reclining)\n[B] Sedentary (Restricted Mobility)\n[C] Light (Sitting, Standing\n[D] Moderate (Light Manual labour, Dancing, Riding Bike)\n[E] Very Active (Team Sports, Hard Manual Labour)\n[F] Extremely Active (Full-time Athlete, Heavy Manual Labour)\n";
    cout<<"\n\nEnter the letter corresponding to your activity level: ";
    cin>>menu;
    if(menu>90)
    {
        menu=menu-32;
    }
    switch(menu)
    {
        case 'A': if(gender=='M')
        {
            af=1.0;
            TDEE= tdee(bmr,af);
        }
        if(gender=='F')
        {
            af=1.0;
            TDEE= tdee(bmr,af);
        }
        break;
        case 'B': if(gender=='M')
        {
            af=1.3;
            TDEE= tdee(bmr,af);
        }
        if(gender=='F')
        {
            af=1.3;
            TDEE= tdee(bmr,af);
        }
        break;
        case 'C': if(gender=='M')
        {
            af=1.6;
            TDEE= tdee(bmr,af);
        }
        if(gender=='F')
        {
            af=1.5;
            TDEE= tdee(bmr,af);
        }
        break;
        case 'D': if(gender=='M')
        {
            af=1.7;
            TDEE= tdee(bmr,af);
        }
        if(gender=='F')
        {
            af=1.6;
            TDEE= tdee(bmr,af);
        }
        break;
        case 'E': if(gender=='M')
        {
            af=2.1;
            TDEE= tdee(bmr,af);
        }
        if(gender=='F')
        {
            af=1.9;
            TDEE= tdee(bmr,af);
        }
        break;
        case 'F': if(gender=='M')
        {
            af=2.4;
            TDEE= tdee(bmr,af);
        }
        if(gender=='F')
        {
            af=2.2;
            TDEE= tdee(bmr,af);
        }
        break;
        default: cout<<"Wrong Meny Chosen. Sending you back to menu";
        goto menuu;
        break;
    }
    cout<<"\n\nYour results:\n\nName: "<<name<<" \t\tGender: "<<gender<<"\nBMR: "<<bmr<<".0 \t\tActivity Factor: "<<af<<"\nTDEE: "<<TDEE<<" calories\n";
    
}
