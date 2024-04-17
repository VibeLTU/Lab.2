#ifndef STRUKTURA_H_INCLUDED
#define STRUKTURA_H_INCLUDED

#include <string>
#include <deque>

struct Duomenys {
    std::string vardas;
    std::string pavarde;
    std::deque<double> nd;
    double eg;
    double ndvid;
    double galutinis;
    double mediana;
};

double median(const std::deque<double>& arr);
void generuotiBalus(std::deque<double>& nd_rezultatai, double& eg);
void atspausdintiDuomenis(const std::deque<Duomenys>& A, bool iFaila = false);
void rikiuotiPagalVarda(std::deque<Duomenys>& A);
void rikiuotiPagalPavarde(std::deque<Duomenys>& A);
void rikiuotiPagalGalutiniVidurki(std::deque<Duomenys>& A);
void rikiuotiPagalMediana(std::deque<Duomenys>& A);
void skaitytiIsFailo(std::deque<Duomenys>& A, const std::string& failoPavadinimas);
void generuotiFailaSuStudentais(int irasu_skaicius);
void rikiuotiStudentus(std::deque<Duomenys>& geri_studentai, std::deque<Duomenys>& blogi_studentai);

#endif // STRUKTURA_DEQUE_H_INCLUDED

