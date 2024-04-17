
# Airidas

## Kompiuterio parametrai
AMD Ryzen 7 5700G  
WDC PC SN530 SSD  
NVIDIA GeForce RTX 3060 Ti  

## Kodo paleidimo instrukcija
Atsisiusti Source code(zip)  
Kompiliuoti pasirinktą main.cpp kaip jums patogu
Spausti ant sugeneruoto exe failo
Jeigu neveikia, tuomet pažiūrėkite šį video ir pagal jį susikurkite projektus (kiekvienam projektui yra 3 failai, 2cpp ir 1h)  
https://www.youtube.com/watch?v=_NethtgMc64&ab_channel=ProgrammingKnowledge2  (kaip pasiruošti codeblocks)  
https://www.youtube.com/watch?v=c9WT8revSJY&ab_channel=StudyKorner  (kaip pasidaryti projektus)  
### Testavimas vyko su:
1tūkst. studentų  
10tūkst. studentų  
100tūkst. studentų  
1mil. studentų  
10mil. studentų  
## v0.4
## 1 Testas (Failų kūrimas ir jų uždarymas)   
1000 įrašų failo generacija užtruko 0.0060138 s   
10000 įrašų failo generacija užtruko 0.0418468 s   
100000 įrašų failo generacija užtruko 0.45358 s   
1000000 įrašų failo generacija užtruko 4.84666 s   
10000000 įrašų failo generacija užtruko 45.4129 s   
   
## 2 Testas (Duomenu apdorojimas)   
### Duomenu nuskaitymas is failo   
1000 įrašų failo nuskaitymas užtruko 0.0390084 s   
10000 įrašų failo nuskaitymas užtruko 0.42876 s   
100000 įrašų failo nuskaitymas užtruko 4.22791 s   
1000000 įrašų failo nuskaitymas užtruko 42.3082 s   
10000000 įrašų failo nuskaitymas užtruko 427.19 s   
### Studentų rūšiavimas į dvi grupes   
1000 studentų rūšiavimas užtruko 0s.   
10000 studentų rūšiavimas užtruko 0.0030001 s.   
100000 studentų rūšiavimas užtruko 0.0310067 s.   
1000000 studentų rūšiavimas užtruko 0.298552 s.   
10000000 studentų rūšiavimas užtruko 2.96067 s.   
### Studentų išvedimas į du naujus failus   
   
#### Studentų rūšiavimas į gerus   
Geri studentai isvesti i faila Geri_studentai.txt   
Tai uztruko: 0.0040007 s   
Geri studentai isvesti i faila Geri_studentai.txt   
Tai uztruko: 0.0300068 s   
Geri studentai isvesti i faila Geri_studentai.txt   
Tai uztruko: 0.302068 s   
Geri studentai isvesti i faila Geri_studentai.txt   
Tai uztruko: 3.09814 s   
Geri studentai isvesti i faila Geri_studentai.txt   
Tai uztruko: 30.6174 s   
#### Studentų rūšiavimas į blogus   
Blogi studentai isvesti i faila Blogi_studentai.txt   
Tai uztruko: 0.0010003 s   
Blogi studentai isvesti i faila Blogi_studentai.txt   
Tai uztruko: 0.0070016 s   
Blogi studentai isvesti i faila Blogi_studentai.txt   
Tai uztruko: 0.0760182 s   
Blogi studentai isvesti i faila Blogi_studentai.txt   
Tai uztruko: 0.829187 s   
Blogi studentai isvesti i faila Blogi_studentai.txt   
Tai uztruko: 8.09913 s   
   
## v 1.0   
## NUSKAITYMAS   
   
### Duomenų nuskaitymas iš failo (vector)   
1000 studentų - 0.0494249 s.   
10000 studentų - 0.46234 s.   
100000 studentų - 3.90874 s.   
1000000 studentų - 41.7636 s.   
10000000 studentų - 411.602 s.   
### Duomenų nuskaitymas iš failo (deque)   
1000 studentų - 0.0449971 s.   
10000 studentų - 0.407091 s.   
100000 studentų - 4.19994 s.   
1000000 studentų - 41.9037 s.   
10000000 studentų - 428.905 s.   
### Duomenų nuskaitymas iš failo (list)   
1000 studentų - 0.0450092 s.   
10000 studentų - 0.409093 s.   
100000 studentų - 4.21859 s.   
1000000 studentų - 40.867 s.   
10000000 studentų - 419.606 s.   
   
## RUŠIAVIMAS   
### Duomenų rūšiavimas (vector)   
1000 studentų - 0.0010133 s.   
10000 studentų - 0.0110048 s.   
100000 studentų - 0.138026 s.   
1000000 studentų - 1.7704 s.   
10000000 studentų - 22.2593 s.   
### Duomenų rūšiavimas (deque)   
1000 studentų - 0.0019997 s.   
10000 studentų - 0.0230049 s.   
100000 studentų - 0.310573 s.   
1000000 studentų - 4.26306 s.   
10000000 studentų - 53.5313 s.   
### Duomenų rūšiavimas (list)   
1000 studentų - 0.0010003 s.   
10000 studentų - 0.0050026 s.   
100000 studentų - 0.0640137 s.   
1000000 studentų - 1.00983 s.   
10000000 studentų - 15.0728 s.   
   
## SKIRSTYMAS   
## 1 Strategija   
### Studentų rūšiavimas į dvi grupes (vector)   
1000 studentų rūšiavimas užtruko 0.0010002 s.   
10000 studentų rūšiavimas užtruko 0.004011 s.   
100000 studentų rūšiavimas užtruko 0.0320086 s.   
1000000 studentų rūšiavimas užtruko 0.299066 s.   
10000000 studentų rūšiavimas užtruko 3.08369 s.   
### Studentų rūšiavimas į dvi grupes (deque)   
1000 studentų rūšiavimas užtruko 0.0010004 s.   
10000 studentų rūšiavimas užtruko 0.0079918 s.   
100000 studentų rūšiavimas užtruko 0.074017 s.   
1000000 studentų rūšiavimas užtruko 0.768067 s.   
10000000 studentų rūšiavimas užtruko 28.6062 s.   
### Studentų rūšiavimas į dvi grupes (list)   
1000 studentų rūšiavimas užtruko 0 s.   
10000 studentų rūšiavimas užtruko 0.0030008 s.   
100000 studentų rūšiavimas užtruko 0.0360088 s.   
1000000 studentų rūšiavimas užtruko 0.369082 s.   
10000000 studentų rūšiavimas užtruko 3.8897 s.   
   
## 2 Strategija   
### Studentų rūšiavimas į dvi grupes (vector)   
1000 studentų rūšiavimas užtruko 0.0070017 s.   
10000 studentų rūšiavimas užtruko 0.720665 s.   
100000 studentų rūšiavimas užtruko 76.2236 s.   
1000000 studentų rūšiavimas užtruko DNF.   
10000000 studentų rūšiavimas užtruko DNF.   
### Studentų rūšiavimas į dvi grupes (deque)   
1000 studentų rūšiavimas užtruko 0.0070015 s.   
10000 studentų rūšiavimas užtruko 0.693167 s.   
100000 studentų rūšiavimas užtruko 78.7791 s.   
1000000 studentų rūšiavimas užtruko DNF.   
10000000 studentų rūšiavimas užtruko  DNF.   
### Studentų rūšiavimas į dvi grupes (list)   
1000 studentų rūšiavimas užtruko 0 s.   
10000 studentų rūšiavimas užtruko 0.0020004 s.   
100000 studentų rūšiavimas užtruko 0.0120028 s.   
1000000 studentų rūšiavimas užtruko 0.11769 s.   
10000000 studentų rūšiavimas užtruko 1.36499 s.   
   
## 3 Strategija   
### Studentų rūšiavimas į dvi grupes (vector)   
1000 studentų rūšiavimas užtruko 0 s.   
10000 studentų rūšiavimas užtruko 0.0040018 s.   
100000 studentų rūšiavimas užtruko 0.0370103 s.   
1000000 studentų rūšiavimas užtruko 0.341065 s.   
10000000 studentų rūšiavimas užtruko 3.40776 s.   
### Studentų rūšiavimas į dvi grupes (deque)   
1000 studentų rūšiavimas užtruko 0.0010012 s.   
10000 studentų rūšiavimas užtruko 0.0080029 s.   
100000 studentų rūšiavimas užtruko 0.0860204 s.   
1000000 studentų rūšiavimas užtruko 0.901202 s.   
10000000 studentų rūšiavimas užtruko 30.1226 s.   
### Studentų rūšiavimas į dvi grupes (list)   
1000 studentų rūšiavimas užtruko 0 s.   
10000 studentų rūšiavimas užtruko 0.004 s.   
100000 studentų rūšiavimas užtruko 0.0450113 s.   
1000000 studentų rūšiavimas užtruko 0.45709 s.   
10000000 studentų rūšiavimas užtruko 4.57462 s.   
