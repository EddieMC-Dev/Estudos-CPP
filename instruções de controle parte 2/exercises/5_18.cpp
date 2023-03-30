// Exercise 5.18: 5_18.cpp
// Imprimindo uma tabela de binários, octais e hexadecimais
// Autor: Edgard Mac Fadden
// Data: 13/03/2023

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
   int binNum; // número pra auxiliar na exibição do binário
   int octNum; // número pra auxiliar na exibição do octal
   int hexNum; // número pra auxiliar na exibição do hexadecimal
   int hexBox; // uma caixa pra guardar cálculo de hexadecimal
   
   cout << "Decimal" << setw(16) << "Binário" << setw(17) << "Octal"
      << setw(17) << "Hexadecimal" << endl;

   for (int decimalNum = 1; decimalNum <= 256; decimalNum++)
   {
      cout << setw(5) << decimalNum << setw(10);

      binNum = decimalNum;
      octNum = decimalNum;
      hexNum = decimalNum;
      
      for (int digitBinary = 256; digitBinary >= 1; digitBinary /= 2)
      {
         if (binNum >= digitBinary)
         {
            cout << '1';
            binNum -= digitBinary;
         }
         else
            cout << '0';
      }

      cout << setw(13);

      for (int digitOctal = 64; digitOctal >= 1; digitOctal /= 8)
      {
         if (octNum >= digitOctal)
         {
            cout << octNum / digitOctal;
            octNum %= digitOctal;
         }
         else
            cout << '0';
      }

      cout << setw(13);

      for (int digitHex = 256; digitHex >= 1; digitHex /= 16)
      {
        
         hexBox = hexNum / digitHex;
         hexNum %= digitHex;
         
         switch (hexBox)
         {
            case 10:
               cout << 'A';
               break;

            case 11:
               cout << 'B';
               break;
               
            case 12:
               cout << 'C';
               break;
               
            case 13:
               cout << 'D';
               break;

            case 14:
               cout << 'E';
               break;

            case 15:
               cout << 'F';
               break;
            
            case 0:
               cout << '0';
               break;

            default:
               cout << hexBox;
               break;
         }

      }

      cout << endl; 
      
   }

   return 0;
}