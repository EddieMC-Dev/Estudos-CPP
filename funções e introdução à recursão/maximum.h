// Figura 6.26: maximum.h
// Definição do template de função maximum.

template <class T>
T maximum(T value1, T value2, T value3)
{
   T maximumValue = value1; // pressupõe que value1 é máximo

   // determina se value2 é maior que maximumValue
   if (value2 > maximumValue) 
      maximumValue = value2;

   // determina se value3 é maior que maximumValue
   if (value3 > maximumValue)
      maximumValue = value3;
   
   return maximumValue;
} // fim do template de função maximum