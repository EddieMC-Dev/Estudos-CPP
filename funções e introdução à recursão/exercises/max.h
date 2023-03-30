// Template de função para o exercício 6.59
template <class T>
T max(T value1, T value2, T value3)
{
    T maxValue = value1;

    if (maxValue < value2)
        maxValue = value2;
    
    if (maxValue < value3)
        maxValue = value3;

    return maxValue;
}