#include "../Struktura.h"
#include <gtest/gtest.h>
#include <vector>
#include <sstream>

// Testavimas konstruktoriaus
TEST(StudentasTest, Constructor) {
    std::vector<double> nd = {10, 9, 8};
    Studentas studentas("Jonas", "Jonaitis", nd, 9.5, 8.5, 9.0);
    EXPECT_EQ(studentas.getVardas(), "Jonas");
    EXPECT_EQ(studentas.getPavarde(), "Jonaitis");
    EXPECT_EQ(studentas.getNd(), nd);
    EXPECT_EQ(studentas.getEg(), 9.5);
    EXPECT_EQ(studentas.getGalutinis(), 8.5);
    EXPECT_EQ(studentas.getMediana(), 9.0);
}

// Testavimas kopijavimo konstruktoriaus
TEST(StudentasTest, CopyConstructor) {
    std::vector<double> nd = {10, 9, 8};
    Studentas studentas1("Jonas", "Jonaitis", nd, 9.5, 8.5, 9.0);
    Studentas studentas2(studentas1);
    EXPECT_EQ(studentas2.getVardas(), "Jonas");
    EXPECT_EQ(studentas2.getPavarde(), "Jonaitis");
    EXPECT_EQ(studentas2.getNd(), nd);
    EXPECT_EQ(studentas2.getEg(), 9.5);
    EXPECT_EQ(studentas2.getGalutinis(), 8.5);
    EXPECT_EQ(studentas2.getMediana(), 9.0);
}

// Testavimas kopijavimo priskyrimo operatoriaus
TEST(StudentasTest, CopyAssignmentOperator) {
    std::vector<double> nd = {10, 9, 8};
    Studentas studentas1("Jonas", "Jonaitis", nd, 9.5, 8.5, 9.0);
    Studentas studentas2;
    studentas2 = studentas1;
    EXPECT_EQ(studentas2.getVardas(), "Jonas");
    EXPECT_EQ(studentas2.getPavarde(), "Jonaitis");
    EXPECT_EQ(studentas2.getNd(), nd);
    EXPECT_EQ(studentas2.getEg(), 9.5);
    EXPECT_EQ(studentas2.getGalutinis(), 8.5);
    EXPECT_EQ(studentas2.getMediana(), 9.0);
}

// Testavimas judėjimo konstruktoriaus
TEST(StudentasTest, MoveConstructor) {
    std::vector<double> nd = {10, 9, 8};
    Studentas studentas1("Jonas", "Jonaitis", nd, 9.5, 8.5, 9.0);
    Studentas studentas2(std::move(studentas1));
    EXPECT_EQ(studentas2.getVardas(), "Jonas");
    EXPECT_EQ(studentas2.getPavarde(), "Jonaitis");
    EXPECT_EQ(studentas2.getNd(), nd);
    EXPECT_EQ(studentas2.getEg(), 9.5);
    EXPECT_EQ(studentas2.getGalutinis(), 8.5);
    EXPECT_EQ(studentas2.getMediana(), 9.0);
}

// Testavimas judėjimo priskyrimo operatoriaus
TEST(StudentasTest, MoveAssignmentOperator) {
    std::vector<double> nd = {10, 9, 8};
    Studentas studentas1("Jonas", "Jonaitis", nd, 9.5, 8.5, 9.0);
    Studentas studentas2;
    studentas2 = std::move(studentas1);
    EXPECT_EQ(studentas2.getVardas(), "Jonas");
    EXPECT_EQ(studentas2.getPavarde(), "Jonaitis");
    EXPECT_EQ(studentas2.getNd(), nd);
    EXPECT_EQ(studentas2.getEg(), 9.5);
    EXPECT_EQ(studentas2.getGalutinis(), 8.5);
    EXPECT_EQ(studentas2.getMediana(), 9.0);
}

// Testavimas ndvid skaičiavimo funkcijos
TEST(StudentasTest, CalculateNdVid) {
    Studentas studentas;
    std::vector<double> nd = {10, 9, 8};
    studentas.setNd(nd);
    studentas.calculateNdVid();
    EXPECT_EQ(studentas.getNdvid(), 9.0);
}

// Testavimas medianos skaičiavimo funkcijos
TEST(StudentasTest, MedianCalculation) {
    std::vector<double> nd = {10, 9, 8, 7, 6};
    double mediana = median(nd);
    EXPECT_EQ(mediana, 8.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
