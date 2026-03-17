////Given a roman numeral(string), convert it to an integer.

int wartosc(char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}

int romanToInt(char* s) {
    int wynik = 0;
    
    for(int i=0; s[i]!='\0'; i++){  ///dopoki nie dojdziemy do konca
        int biezaca = wartosc(s[i]);
        int nastepna = wartosc(s[i+1]);
        if(biezaca<nastepna){
            wynik-=biezaca;   ////IV = -1+5
        } else{
            wynik+=biezaca;
        }
    }
    return wynik;
}
