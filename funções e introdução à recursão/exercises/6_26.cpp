// Exercise 6.26: 6_26.cpp
// Calculando segundos
// Autor: Edgard Mac Fadden
// Data: 21/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int timeInSeconds(int, int minutes = 0, int seconds = 0);

int main()
{
    int timeHours, timeMinutes, timeSeconds;

    cout << "Hours: ";
    cin >> timeHours;
    cout << "Minutes: ";
    cin >> timeMinutes;
    cout << "Seconds: ";
    cin >> timeSeconds;

    cout << "Total seconds since noon: " 
        << timeInSeconds(timeHours, timeMinutes, timeSeconds) << endl;
    return 0;
}

// função que recebe a hora retorna o tempo em segundos desde a última vez 
// que o relógio deu 12 horas.
int timeInSeconds(int hours, int minutes, int seconds)
{
    int totalSeconds; // total de segundo desde ás últimas 12 horas
    int totalHours = 0; // total de horas desde às últimas 12 horas
    int totalMinutes = 0; // total de minutos desde a última hora

    if (seconds >= 60)
    {
        minutes += seconds / 60;
        seconds %= 60;
    }

    if (minutes >= 0 && minutes < 60) // se os minutos entre 0 e 60 segs
        totalMinutes = minutes;
    else if (minutes >= 60) // se os minutos igual ou acima de 60 segs
    {
        totalHours += minutes / 60;
        totalMinutes += minutes % 60; 
    }

    if (hours >= 0 && hours < 12)  // se meia noite ou abaixo das 12 horas,
        totalHours += hours + 12;   
    else if (hours >= 12 && hours < 24) // Se entre 12 horas e meia noite
        totalHours += hours - 12; 

    totalSeconds = (totalHours * 3600) + (totalMinutes * 60) + seconds;
    return totalSeconds;
}
