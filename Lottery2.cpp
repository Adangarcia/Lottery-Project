#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits>

using namespace std;

void lines (int counter, int numbers [] [7]);
void checking ( int counter, int numbers [] [7]);
void pickthree ( int counter, int numbers [] [7]);
void pickfive  ( int counter, int numbers [] [7]);
void userinput (int counter, int numbers [] [7], int highest, int lowest, int bonus, char answer, int balls);
void checkuser (int counter, int numbers [] [7], int & balls, int& highest, int& bonus, char& answer);


/*void checking ( int z, int a [] [7]);
{ 
    for ( int x=0; z>x; x++){ //counter=Number of lines
      for ( int y=0; y<3; y++){ //Amount of numbers
           if (a [x][y]== a[x][y+1] || a [x][y] == a[x][y+2])
              {
                rand () % 9+1;
              }
          }
}
*/





//Pickthree is the user letting the computer pick three number at random between 1 & 9

void pickthree (int counter, int a [] [7])
{

    srand (time(NULL));
    
    for (int x=0; counter > x; x++)
    {
         for (int y=0; y<3; y++)
	  {
              a [x][y] =rand () % 9+1;
              
               if (a [x][y]== a [x][y-1]){
                 
                   a [x][y]= rand () %9+1;
                }
                 // checking (counter, a);
                 
           }  }
}


int main ()
{

  srand (time (NULL));
  int counter;
  int numbers [10] [7];
  char choice;
  int user;
  int size [3];
  int bonus;

  do{


    cout<< "What game would you like to choose??"<<endl;
    cout <<" \n1. PICK 3";
    cout <<" \n2.Lottery (Pick 5)";
    cout <<"\n3. MegaMillions (Pick 5 + Powerball)";
    cout <<"\n4. Pick a range of Numbers.";
    cout <<"\n5.Quit\n";
    cin>>user;

	while (user<1 || user>5)
	     { 

               
		std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
              std::cout<< "Please enter a number between 1-5";
              cin>> user;
             }

       switch (user){

        case 1: cout<<"Howm any lines would you like?";
                 cin>> counter;

              while (counter <1 || counter>10 && !(cin>>counter) ){

                    
                    cin.ignore (numeric_limits<streamsize> ::max(), '\n');
                    cout<< "Please enter a number between 1-10:";
                    cin>> counter;   
                   };
               pickthree (counter, numbers);
               break;

       case 5: 
         cout<<"Good bye!";
         return 0;
         break;
        default:
         cout<<"Not valid choice";
         break;

       }

     cout<<"\nDo you want to play again? :";
     cout<<"\n Y or N"<<endl;
     cin>>choice;
         while (choice != 'Y' && choice != 'y' && choice != 'n' && choice != 'N')
          {
             cin.ignore ();
                 cout<<"Please choose Y for Yes or N for No:";
                 cin>>choice;
          }
 
    cout<<'\n';

}   
   while (choice!='N' && choice!= 'n');
       
return 0;
}
