// Exercise 5.27: 5_27.cpp
// Imprimindo a canção The Twelve Days of Christmas
// Autor: Edgard Mac Fadden
// Data: 15/03/2023

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
   string dayOrder; // dia de Christmas. Ex: first, second, third  

   cout << "--------------------------------" << endl;
   cout << "| The Twelve days of Christmas |" << endl;
   cout << "--------------------------------" << endl << endl;

   for (int verse = 1; verse <= 12; verse++)
   {
      switch (verse)
      {
         case 1:
            dayOrder = "first";
            break;
         
         case 2:
            dayOrder = "second";
            break;

         case 3:
            dayOrder = "third";
            break;

         case 4:
            dayOrder = "fourth";
            break;

         case 5:
            dayOrder = "fifth";
            break;

         case 6:
            dayOrder = "sixth";
            break;

         case 7: 
            dayOrder = "seventh";
            break;

         case 8:
            dayOrder = "eighth";
            break;

         case 9:
            dayOrder = "ninth";
            break;

         case 10:
            dayOrder = "tenth";
            break;

         case 11:
            dayOrder = "eleventh";
            break;

         case 12:
            dayOrder = "twelfth";
            break;
      }

      cout << "On the " << dayOrder << " day of Christmas" << endl
         << "my true love sent to me:" << endl;

      switch (verse)
      {
         case 1:
            cout << "A Partridge in a Pear Tree" << endl;
            break;

         case 12:
            cout << "12 Drummers Drumming" << endl;

         case 11:
            cout << "Eleven Pipers Piping" << endl;

         case 10:
            cout << "Ten Lords a Leaping" << endl;

         case 9:
            cout << "Nine Ladies Dancing" << endl;

         case 8:
            cout << "Eight Maids a Milking" << endl;
 
         case 7:
            cout << "Seven Swans a Swimming" << endl;
         
         case 6:
            cout << "Six Geese a Laying" << endl;

         case 5:
            cout << "Five Golden Rings" << endl;

         case 4:
            cout << "Four Calling Birds" << endl;

         case 3:
            cout << "Three French Hens" << endl;

         case 2:
            cout << "Two Turtle Doves\nand a Partridge in a Pear Tree" 
               << endl;
      }
   
      cout << endl;
   }

   return 0;
}