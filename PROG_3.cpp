#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
  
    string fName;
    string lName;
    
    cout<<"Enter your First Name : ";
    cin>>fName;
    cout<<"Enter your Last Name : ";
    cin>>lName;
    
    // Concatenation 
     string fullName = fName + " " + lName; 
     cout<<"After Concatenation : "<<fullName<<endl;
     
   //converting to uppercase  
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper); 
     cout<<"After Converting to UpperCase : " << fullName << endl; 
     
   // converting to lowercase 
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower); 
     cout<<"After Converting to LowerCase : " << fullName << endl;
     
    //String Length 
    cout << "Length of String : " << fullName.size()<<endl;
    
    //Space Remove in String
      fullName.erase(remove(fullName.begin(), fullName.end(), ' '), fullName.end());
    cout << "After Space Removal : " << fullName;
     
     return 0; 
} 

