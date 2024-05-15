#ifndef STRUKTURA_H_INCLUDED
#define STRUKTURA_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <chrono>
#include <random>
#include <sstream>

class Studentas {
private:
    std::string vardas;
    std::string pavarde;
    std::vector<double> nd;
    double eg;
    double ndvid;
    double galutinis;
    double mediana;

public:
    // Constructors
    Studentas() = default;
    Studentas(const std::string& vardas1, const std::string& pavarde1, const std::vector<double>& nd1, double eg1) : vardas(vardas1), pavarde(pavarde1), nd(nd1), eg(eg1), ndvid(0), galutinis(0), mediana(0) {}

    // Destructor
    ~Studentas() = default;

    // Copy Constructor
    Studentas(const Studentas& other) : vardas(other.vardas), pavarde(other.pavarde), nd(other.nd), eg(other.eg), ndvid(other.ndvid), galutinis(other.galutinis), mediana(other.mediana) {}

    // Copy Assignment Operator
    Studentas& operator=(const Studentas& other) {
        if (this != &other) {
            vardas = other.vardas;
            pavarde = other.pavarde;
            nd = other.nd;
            eg = other.eg;
            ndvid = other.ndvid;
            galutinis = other.galutinis;
            mediana = other.mediana;
        }
        return *this;
    }

    // Move Constructor
    Studentas(Studentas&& other) noexcept : vardas(std::move(other.vardas)), pavarde(std::move(other.pavarde)), nd(std::move(other.nd)), eg(other.eg), ndvid(other.ndvid), galutinis(other.galutinis), mediana(other.mediana) {}

    // Move Assignment Operator
    Studentas& operator=(Studentas&& other) noexcept {
        if (this != &other) {
            vardas = std::move(other.vardas);
            pavarde = std::move(other.pavarde);
            nd = std::move(other.nd);
            eg = other.eg;
            ndvid = other.ndvid;
            galutinis = other.galutinis;
            mediana = other.mediana;
        }
        return *this;
    }
    void setVardas( std::string vardas1){
        vardas = vardas1;
    };
    std::string getVardas(){
        return vardas;
    };


    void setPavarde( std::string pavarde1){
        pavarde = pavarde1;
    };
    std::string getPavarde(){
        return pavarde;
    };

    void setNd( std::vector<double> nd1){
        nd = nd1;
    };
    std::vector<double> getNd() {
        return nd;
    };

    void addNd( double nd1){
        nd.push_back(nd1);
    };

    void setEg( double eg1){
        eg = eg1;
    };
    double getEg(){
        return eg;
    };

    void setNdvid( double ndvid1){
        ndvid = ndvid1;
    };
    double getNdvid(){
        return ndvid;
    };

    void setGalutinis( double galutinis1){
        galutinis = galutinis1;
    };
    double getGalutinis(){
        return galutinis;
    };

    void setMediana( double mediana1){
        mediana = mediana1;
    };
    double getMediana(){
        return mediana;
    };

    void setEgzFromNd(){
    if (!nd.empty()) {
        eg = nd.back();
        nd.pop_back();
        }
        }
    void calculateNdVid(){
        ndvid = 0;
        for (size_t j = 0; j < nd.size(); j++) {
        ndvid += nd[j];
        }
        ndvid /= nd.size();
    }
    friend std::ostream& operator<<(std::ostream& os, const Studentas& studentas) {
        os << studentas.vardas << ' ' << studentas.pavarde << ' ';
        for (auto& grade : studentas.nd) {
            os << grade << ' ';
        }
        os << studentas.eg;
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Studentas& studentas) {
        is >> studentas.vardas >> studentas.pavarde;
        double grade;
        while (is >> grade) {
            studentas.nd.push_back(grade);
        }
        return is;
    }
};

double median(std::vector<double>& arr);
void generuotiBalus(Studentas& studentas);
void skaitytiIsFailo(std::vector<Studentas>& A,  std::string& failoPavadinimas);
void rikiuotiPagalVarda(std::vector<Studentas>& A);
void rikiuotiPagalPavarde(std::vector<Studentas>& A);
void rikiuotiPagalGalutiniVidurki(std::vector<Studentas>& A);
void rikiuotiPagalMediana(std::vector<Studentas>& A);
void atspausdintiDuomenis( std::vector<Studentas>& A, bool iFaila = false);
void generuotiFailaSuStudentais(int irasuSkaicius);
void rikiuotiStudentus(std::vector<Studentas>& geri_studentai, std::vector<Studentas>& blogi_studentai);

#endif // STRUKTURA_H_INCLUDED
