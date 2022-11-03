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
int l_wejsciowa_wyswietlana = 1234;
int l_wejsciowa = 1234;
int l_tysiecy = 0;
int l_setek = 0;
int l_dziesiatek = 0;
int l_jednosci = 0;
bool petla = true;
void c1 (){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  delay(czaswylaczeniacyfry);
}
void c2 (){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  delay(czaswylaczeniacyfry);
}
void c3(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segA, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segD, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segD, LOW);
  delay(czaswylaczeniacyfry);
}
void c4(){//BCGF
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segF, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  delay(czaswylaczeniacyfry);
}
void c5(){
  digitalWrite(segF, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segA, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segD, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segF, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segD, LOW);
  delay(czaswylaczeniacyfry);
}
void c6(){//ACDEFG
  digitalWrite(segA, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segA, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  delay(czaswylaczeniacyfry);
}
void c7(){//ABC
  digitalWrite(segA, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segA, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  delay(czaswylaczeniacyfry);
}
void c8(){//ABCDEFG
  digitalWrite(segA, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segA, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  delay(czaswylaczeniacyfry);
}
void c9(){//ABCDFG
  digitalWrite(segA, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segD, HIGH);;
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segA, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  delay(czaswylaczeniacyfry);
}
void c0(){//ABCDEF
  digitalWrite(segA, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segD, HIGH);;
  digitalWrite(segF, HIGH);
  digitalWrite(segE, HIGH);
  delay(czaswlaczeniacyfry);
  digitalWrite(segA, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segE, LOW);
  delay(czaswylaczeniacyfry);
}
void dtys(int l_tysiecy){
  if (l_tysiecy == 1){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c1();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 2){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c2();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 3){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c3();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 4){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c4();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 5){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c5();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 6){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c6();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 7){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c7();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 8){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c8();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 9){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c9();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_tysiecy == 0){
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c0();
    delay(czaspouruchomienufn);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
}
void dset(int l_setek){
  if (l_setek == 1){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c1();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 2){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c2();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 3){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c3();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 4){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c4();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 5){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c5();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 6){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c6();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 7){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c7();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 8){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c8();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 9){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c9();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_setek == 0){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit3, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c0();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
}
void ddzies(int l_dziesiatek){
  if (l_dziesiatek == 1){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c1();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 2){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c2();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 3){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c3();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 4){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c4();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 5){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c5();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 6){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c6();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 7){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c7();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 8){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c8();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 9){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c9();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_dziesiatek == 0){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit4, HIGH);
    delay(czaspowlaczeniucyfry);
    c0();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit4, LOW);
    delay(czaspowylaczeniucyfry);
  }
}
void djedn(int l_jednosci){
  if (l_jednosci == 1){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c1();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 2){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c2();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 3){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c3();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 4){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c4();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 5){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c5();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 6){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c6();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 7){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c7();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 8){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c8();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 9){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c9();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }
  else if (l_jednosci == 0){
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, HIGH);
    digitalWrite(digit3, HIGH);
    delay(czaspowlaczeniucyfry);
    c0();
    delay(czaspouruchomienufn);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    delay(czaspowylaczeniucyfry);
  }

}

void setup() {
  // put your setup code here, to run once:
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

    Serial.println(l_wejsciowa);
    l_jednosci = l_wejsciowa%10;
    l_dziesiatek = (l_wejsciowa/10)%10;
    l_setek = (l_wejsciowa/100)%10;
    l_tysiecy = (l_wejsciowa/1000)%10;
    Serial.println(l_jednosci);
    Serial.println(l_dziesiatek);
    Serial.println(l_setek);
    Serial.println(l_tysiecy);
    petla = true;
    while(petla){
    dtys(l_tysiecy);
    delay(czaspomiedzyposzczegolnymiliczbami);
    dset(l_setek);
    delay(czaspomiedzyposzczegolnymiliczbami);
    ddzies(l_dziesiatek);
    delay(czaspomiedzyposzczegolnymiliczbami);
    djedn(l_jednosci);
    delay(czaspomiedzyposzczegolnymiliczbami);
    if(Serial.available()>0){
      l_wejsciowa = (Serial.readString()).toInt();
    }
      if (l_wejsciowa != l_wejsciowa_wyswietlana){
        l_wejsciowa_wyswietlana = l_wejsciowa;
        petla = false;
        
      }
    }
}