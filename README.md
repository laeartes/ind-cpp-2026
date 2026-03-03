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

- [ ] Kiekvienas objektas turi unikalų ID.
- [ ] Atmintyje sekamas gyvų objektų kiekis.
- [ ] Aprašyti konstruktorius ir destruktorius
- [ ] Realizuoti veikėjo būseną keičiantys metodai.

### Laukai

- [ ] `ID` - veikėjo identifikatorius
- [ ] `name` - veikėjo vardas
- [ ] `health` - gyvybių kiekis
- [ ] `level` - veikėjo lygis
- [ ] `aliveCount` - skaitliukas sekti gyvų kiekė
- [ ] `nextID` - ID generatorius

### Metodai

- [ ] `takeDamage(int)`
- [ ] `heal(int)`
- [ ] `levelUp()`
- [ ] `die()`
- [ ] `printStatus()`
- [ ] `getAliveCount()`

### Testavimas

- [ ] /shrug