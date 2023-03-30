// Template da função min pro exercício 6.58
template <class T>
T min(T value1, T value2)
{
    T minValue = value1; 

    if (minValue > value2)
        minValue = value2;
    
    return minValue;
}