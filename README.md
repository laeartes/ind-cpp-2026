# Mykolas Meidus cpp 2026

## Individualus cpp darbas

## Pasirinkta esybė (tematika)
### RPG veikėjas (character)

Projektas modeliuoja kompiuterinio žaidimo veikėją, turinį konkrečią būseną (apimančią gyvybes, lygį ir pan.) bei galintį atlikti visokius veiksmus (pašokti, mirti ir t.t.).


## U0 - pasirengimas

- [x] Sukurtas GitLab projektas **ind-cpp-2026**
- [x] Į Maintainer pridėtas Viktoras Golubevas
- [x] Sukurtas README.md failas
- [x] Pasirinkta projekto tematika


## U1 - Klasė. Laukai ir metodai
Įgyvendinama klasė `Character`

### Funkcionalumai

- [x] Kiekvienas objektas turi unikalų ID.
- [x] Atmintyje sekamas gyvų objektų kiekis.
- [x] Aprašyti konstruktorius ir destruktorius
- [x] Realizuoti veikėjo būseną keičiantys metodai.

### Laukai

- [x] `ID` - veikėjo identifikatorius
- [x] `name` - veikėjo vardas
- [x] `health` - gyvybių kiekis
- [x] `level` - veikėjo lygis
- [x] `aliveCount` - skaitliukas sekti gyvų kiekį
- [x] `nextID` - ID generatorius

### Metodai

- [x] `takeDamage(int)`
- [x] `heal(int)`
- [x] `levelUp()`
- [x] `die()`
- [x] `printStatus()`
- [x] `getAliveCount()`
- [x] `getHealth()`
- [x] `getLevel()`

### Testavimas

- [x] tests.cpp

## U2 - Kompozicija

- [ ] Realizaciją atskirti į atskirą klasę panaudojant pimpl idiomą.
- [ ] Antraštės faile naudoti išankstinę deklaraciją (forward declaration).
- [ ] Realizacijos objektą kurti dinaminėje atmintyje.
- [ ] Įgyvendinti gilų kopijavimą (deep copy) korektiškam klasės veikimui.
- [x] Išskaidyti kodą į antraštės (.h), realizacijos (.cpp) ir testo (main()) failus.
- [ ] Parašyti Makefile, palaikantį all, .o failų kūrimą, .exe kūrimą, clean bei build komandas.
- [ ] Numatyti išimtines situacijas, panaudoti throw sakinius ir sukurti savo išimties klasę.
- [ ] Ištestuoti tiek sėkmingus atvejus, tiek pačias išimtis (patikrinant jų tipą).
- [ ] Testų rezultatus išvesti tiek į ekraną, tiek į tekstinį failą.


## Projekto progresas

| Užduotis | Statusas |
| -------- | -------- |
| U0       | DONE       |
| U1       | DONE       |
| U2       | IN PROGRESS        |
| U3       | NOT STARTED        |
