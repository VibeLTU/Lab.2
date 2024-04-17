#ifndef STRUKTURA_H_INCLUDED
#define STRUKTURA_H_INCLUDED

#include <string>
#include <vector>
#include <list> // Pridedame list biblioteką

struct Duomenys {
    std::string vardas;
    std::string pavarde;
    std::vector<double> nd;
    double eg;
    double ndvid;
    double galutinis;
    double mediana;
};

double median(const std::vector<double>& arr); // Pakeičiame vektorių į sąrašą
void generuotiBalus(std::vector<double>& nd_rezultatai, double& eg); // Pakeičiame vektorių į sąrašą
void atspausdintiDuomenis(const std::list<Duomenys>& A, bool iFaila = false); // Pakeičiame vektorių į sąrašą
void rikiuotiPagalVarda(std::list<Duomenys>& A); // Pakeičiame vektorių į sąrašą
void rikiuotiPagalPavarde(std::list<Duomenys>& A); // Pakeičiame vektorių į sąrašą
void rikiuotiPagalGalutiniVidurki(std::list<Duomenys>& A); // Pakeičiame vektorių į sąrašą
void rikiuotiPagalMediana(std::list<Duomenys>& A); // Pakeičiame vektorių į sąrašą
void skaitytiIsFailo(std::list<Duomenys>& A, const std::string& failoPavadinimas); // Pakeičiame vektorių į sąrašą
void generuotiFailaSuStudentais(int irasu_skaicius);
void rikiuotiStudentus(std::list<Duomenys>& geri_studentai, std::list<Duomenys>& blogi_studentai); // Pakeičiame vektorių į sąrašą

#endif // STRUKTURA_LIST_H_INCLUDED
