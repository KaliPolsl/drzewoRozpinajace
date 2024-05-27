#include "Interfejs.h"
#include "KasetaAudio.h"
#include "KasetaWideo.h"
#include "PlytaMuzyczna.h"
#include <iostream>
#include <fstream>

void Interfejs::wyswietlMenu() {
    int opcja;
    do {
        std::cout << "===== MENU =====\n";
        std::cout << "1. Zarzadzaj kasetami audio\n";
        std::cout << "2. Zarzadzaj kasetami wideo\n";
        std::cout << "3. Zarzadzaj plytami muzycznymi\n";
        std::cout << "4. Wyswietl wszystkie pozycje\n";
        std::cout << "5. Zapisz baze danych do pliku\n";
        std::cout << "6. Wczytaj bazê danych z pliku\n";
        std::cout << "7. Wyszukaj po roku wydania\n";
        std::cout << "8. Wyjdz z programu\n";
        std::cout << "================\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> opcja;
        std::cin.ignore(); // Ignore newline character

        switch (opcja) {
        case 1:
            zarzadzajKasetamiAudio();
            break;
        case 2:
            zarzadzajKasetamiWideo();
            break;
        case 3:
            zarzadzajPlytamiMuzycznymi();
            break;
        case 4:
            baza.wyswietlWszystkie();
            break;
        case 5:
            zapiszDoPliku();
            break;
        case 6:
            wczytajZPliku();
            break;
        case 7:
            wyszukajPoRoku();
            break;
        case 8:
            std::cout << "Zamykanie programu...\n";
            break;
        default:
            std::cout << "Nieznana opcja, spróbuj ponownie.\n";
        }
    } while (opcja != 8);
}


void Interfejs::zarzadzajKasetamiAudio() {
    int opcja;
    std::cout << "Zarz¹dzaj kasetami audio:\n";
    std::cout << "1. Dodaj kasete audio\n";
    std::cout << "2. Edytuj kasete audio\n";
    std::cout << "3. Usuñ kasete audio\n";
    std::cout << "Wybierz opcje: ";
    std::cin >> opcja;
    std::cin.ignore(); // Ignore newline character

    switch (opcja) {
    case 1: {
        std::string tytul;
        int rok;
        std::cout << "Podaj tytu³: ";
        std::getline(std::cin, tytul);
        std::cout << "Podaj rok wydania: ";
        std::cin >> rok;
        baza.dodajPozycje(new KasetaAudio(tytul, rok));
        break;
    }
    case 2:
        // Implementacja edycji kasety audio
        break;
    case 3:
        // Implementacja usuwania kasety audio
        break;
    default:
        std::cout << "Nieznana opcja.\n";
    }
}

void Interfejs::zarzadzajKasetamiWideo() {
    int opcja;
    std::cout << "Zarz¹dzaj kasetami wideo:\n";
    std::cout << "1. Dodaj kasete wideo\n";
    std::cout << "2. Edytuj kasete wideo\n";
    std::cout << "3. Usun kasete wideo\n";
    std::cout << "Wybierz opcje: ";
    std::cin >> opcja;
    std::cin.ignore(); // Ignore newline character

    switch (opcja) {
    case 1: {
        std::string tytul;
        int rok;
        std::cout << "Podaj tytul: ";
        std::getline(std::cin, tytul);
        std::cout << "Podaj rok wydania: ";
        std::cin >> rok;
        baza.dodajPozycje(new KasetaWideo(tytul, rok));
        break;
    }
    case 2:
        // Implementacja edycji kasety wideo
        break;
    case 3:
        // Implementacja usuwania kasety wideo
        break;
    default:
        std::cout << "Nieznana opcja.\n";
    }
}

void Interfejs::zarzadzajPlytamiMuzycznymi() {
    int opcja;
    std::cout << "Zarzadzaj plytami muzycznymi:\n";
    std::cout << "1. Dodaj plyte muzyczna\n";
    std::cout << "2. Edytuj plyte muzyczna\n";
    std::cout << "3. Usuñ plyte muzyczna\n";
    std::cout << "Wybierz opcje: ";
    std::cin >> opcja;
    std::cin.ignore(); // Ignore newline character

    switch (opcja) {
    case 1: {
        std::string tytul;
        int rok;
        std::cout << "Podaj tytue: ";
        std::getline(std::cin, tytul);
        std::cout << "Podaj rok wydania: ";
        std::cin >> rok;
        baza.dodajPozycje(new PlytaMuzyczna(tytul, rok));
        break;
    }
    case 2:
        // Implementacja edycji p³yty muzycznej
        break;
    case 3:
        // Implementacja usuwania p³yty muzycznej
        break;
    default:
        std::cout << "Nieznana opcja.\n";
    }
}

void Interfejs::zapiszDoPliku() {
    std::ofstream plik("baza_danych.txt");
    if (plik.is_open()) {
        for (const auto& p : baza.pozycje) {
            // Implementacja zapisu pozycji do pliku (w zale¿noœci od typu)
            // np. plik << "Audio: " << p->tytul << ", " << p->rok_wydania << "\n";
        }
        plik.close();
        std::cout << "Baza danych zosta³a zapisana do pliku.\n";
    }
    else {
        std::cout << "Nie mo¿na otworzyæ pliku do zapisu.\n";
    }
}

void Interfejs::wczytajZPliku() {
    std::ifstream plik("baza_danych.txt");
    if (plik.is_open()) {
        std::string linia;
        while (std::getline(plik, linia)) {
            // Implementacja wczytywania pozycji z pliku
            // np. rozpoznawanie typu pozycji i dodanie do bazy danych
        }
        plik.close();
        std::cout << "Baza danych zosta³a wczytana z pliku.\n";
    }
    else {
        std::cout << "Nie mo¿na otworzyæ pliku do odczytu.\n";
    }
}

void Interfejs::wyszukajPoRoku() {
    int rok;
    std::cout << "Podaj rok wydania: ";
    std::cin >> rok;
    baza.wyszukajPoRoku(rok);
}
