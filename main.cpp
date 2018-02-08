//Author: aralmheiri
#include<iostream>

using namespace std;

int main()
{
char A;
  cout<<"What character do you want to know about?\n";
 cin>>A; 
 
 
 if (A>='A' && A<='Z')
 {

 
 //when user's entry is between A-Z...
  cout<<A<<" is an upper case letter!\n";
}


else if (A>='a' && A<='z')
{
  //when user's entr is between a-z...
  cout<<A<<" is a lower case letter!\n";
}

else {

//in all other cases...
  cout<<A<<"?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int)A<<endl;

  return 0;
}
