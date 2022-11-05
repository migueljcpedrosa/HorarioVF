//
// Created by m3ped on 03/11/2022.
//

#include <algorithm>
#include <iostream>
#include "Estudante.h"

Estudante::Estudante(string name, string upCode)
{
    this->name=name;
    this->upCode=upCode;
}

string Estudante::getName() const
{
    return this->name;
}
string Estudante::getUpCode() const
{
    return this->upCode;
}

void Estudante::displayUpClasses()
{
    cout << "Student " << this->name << "; " << this->upCode << "\n";
    for (int i = 0; i < vectorUcClass.size(); i++)
    {
        cout << vectorUcClass[i].first << "; " << vectorUcClass[i].second << endl;
    }

    cout << "\n";
}


void Estudante::displaySchedule(map<pair<string,string>, Slot>& mapUcClassTimeSlot)
{
    cout << "Student " << this->name << ";" << this->upCode << "\n";
    for (int i = 0; i < vectorUcClass.size(); i++)
    {
        cout << vectorUcClass[i].first << "; " << vectorUcClass[i].second << ": ";
        auto it = mapUcClassTimeSlot.find({vectorUcClass[i].first, vectorUcClass[i].second});
        cout << it->second.getWeekDay() << "; " << it->second.getBegin() << "; " << it->second.getDuration() << "; " << it->second.getClassType() << "\n";
    }

    cout << "\n";
}
/*
void Estudante::readStudent(const string& filename){

    ifstream in(filename); // Opens the file.
    string upCode, name, skipline;

    getline(in, skipline); //skips first line


    while(!in.eof()){
        getline(in, upCode, ',');
        getline(in, name, ',');
        cout << upCode << ' ' << name << endl;
    }

    //in.close(); // Closing the file.
}
*/
