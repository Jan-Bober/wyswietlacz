#include <vector>

using namespace std;

#define digit1 5
#define digit2 4
#define digit3 3
#define digit4 2

#define segA 6
#define segB 7
#define segC 8
#define segD 9
#define segE 10
#define segF 11
#define segG 12

#define czaswlaczeniacyfry 1
#define czaswylaczeniacyfry 1
#define czaspowlaczeniucyfry 1
#define czaspouruchomienufn 1
#define czaspowylaczeniucyfry 1
#define czaspomiedzyposzczegolnymiliczbami 1

vector<vector<int>> cyfry = {
  {
    segA, segC, segB, segD, segF, segE
  },
  {
    segB, segC
  },
  {
    segA, segB, segG, segE, segD
  },
  {
    segB, segC, segA, segG, segD
  },
  {
    segC, segB, segG, segF
  },
  {
    segF, segC, segA, segG, segD
  },
  {
    segA, segC, segD, segE, segF, segG
  },
  {
    segA, segB, segC
  },
  {
    segA, segC, segB, segD, segE, segF, segG
  },
  {
    segA, segB, segC, segD, segE, segF
  }
};

vector<vector<int>> pinyCyfr = {
  {},
  {
    digit1, digit2, digit3
  },
  {
    digit1, digit2, digit4
  },
  {
    digit1, digit3, digit4
  },
  {
    digit2, digit3, digit4
  }
};

void wyswietlPojedynczaCyfre(int pojedynczaCyfra) {
  auto zcyfry = cyfry[pojedynczaCyfra];
  for(int i = 0; i < zcyfry.size(); i++) {
    digitalWrite(cyfry[i], HIGH);
  }

  delay(czaswlaczeniacyfry);

  for(int i = 0; i < zcyfry.size(); i++) {
    digitalWrite(cyfry[i], LOW);
  }

  delay(czaswylaczeniacyfry);
}

void dD(int cyfra, int pozycja) {
  auto pinyDlaPozycji = pinyCyfr[pozycja];

  for(int i = 0; i < pinyDlaPozycji.size(); i++) {
    digitalWrite(pinyDlaPozycji[i], HIGH);
  }
  delay(czaspowlaczeniucyfry);

  wyswietlPojedynczaCyfre(cyfra);

  delay(czaspouruchomienufn);
  for(int i = 0; i < pinyDlaPozycji.size(); i++) {
    digitalWrite(pinyDlaPozycji[i], LOW);
  }
  delay(czaspowylaczeniucyfry);
}

vector<int> rozlozLiczbeNaCyfry(int liczba) {
  if(liczba == 0) {
    return { 0 };
  }

  vector<int> rozlozoneCyfry = {};

  while(liczba > 0) {
    rozlozoneCyfry.push_back(liczba % 10);
    liczba = liczba / 10;
  }

  return rozlozoneCyfry;
}

void wyswietlLiczbe(int liczba) {
    auto rozlozoneCyfry = rozlozLiczbeNaCyfry(liczba);
    if(rozlozoneCyfry.size() > pinyCyfr.size()) {
      return;
    }

    for(int i = 0; i < rozlozoneCyfry.size(); i++) {
      dD(rozlozoneCyfry[i], pinyCyfr.size() - i);
      delay(czaspomiedzyposzczegolnymiliczbami);
    }
}

void setup() {
    Serial.begin(9600);

    pinMode(digit1, OUTPUT);
    pinMode(digit2, OUTPUT);
    pinMode(digit3, OUTPUT);
    pinMode(digit4, OUTPUT);

    pinMode(segA, OUTPUT);
    pinMode(segB, OUTPUT);
    pinMode(segC, OUTPUT);
    pinMode(segD, OUTPUT);
    pinMode(segE, OUTPUT);
    pinMode(segF, OUTPUT);
    pinMode(segG, OUTPUT);
}

void loop() {
    int liczba_wejscowa_wyswietlana = 1234;
    int liczba_wejsciowa = 1234;

    bool wPetli = true;

    Serial.println(liczba_wejsciowa);

    while(wPetli){
      wyswietlLiczbe(liczba_wejsciowa);

      if(Serial.available()>0){
        liczba_wejsciowa = (Serial.readString()).toInt();
      }

      if (liczba_wejsciowa != liczba_wejscowa_wyswietlana){
        liczba_wejscowa_wyswietlana = liczba_wejsciowa;
        wPetli = false;
      }
    }
}