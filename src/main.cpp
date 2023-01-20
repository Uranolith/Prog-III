#include <iostream>
#include "x.h"

int main() {
    X tmp(5);

    return 0;
}

//  •	Die Klassendefinition ist	        ■  korrekt 	    □ nicht korrekt

//  Beurteilen Sie die folgenden Definitionen. Begründen Sie nicht korrekte Fälle.
//  •	X::~X() { delete a;}; 	            □  korrekt 	    ■ nicht korrekt
//  •	X::~X() { delete d;}; 	            □  korrekt 	    ■ nicht korrekt
//  •	X::~X() { delete [] d;}; 	        □  korrekt 	    ■ nicht korrekt
//  •	X::X(int e):a(e) { c=a;}; 	        ■  korrekt 	    □ nicht korrekt
//  •	X::X(int e):a(e) { b=&e;}; 	        ■  korrekt 	    □ nicht korrekt
//  •	X::X() { a=0;}; 		            □  korrekt 	    ■ nicht korrekt
//  Weitere Fragen:
//  •	Jede Klasse
//  -	besitzt einen Defaultkonstruktor	□  korrekt 	    ■ nicht korrekt
//  -   hat einen Destruktor	 	        ■  korrekt 	    □ nicht korrekt
