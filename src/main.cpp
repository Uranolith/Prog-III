#include <iostream>

int main() {

    //const type name = value;		    Konstante vom Typ type
    //type * const name = value;		konstanter Zeiger auf eine Variable vom Typ type
    //const type *name = value;		    (variabler) Zeiger auf eine Konstante vom Typ type
    //const type * const name = value;	konstanter Zeiger auf eine Konstante vom Typ type


    int i;                              //  Variable i vom Typ int
    int *ip;                            //  (variabler) Zeiger ip auf eine Variable vom Typ int
    int *const cp = &i;                 //  Definition eines konstanten Zeigers cp auf eine Variable vom Typ int
    const int ci = 7;                   //  Definition einer Konstanten ci vom Typ int mit dem Wert 7
    const int *cip;                     //  (variabler) Zeiger cip auf ein Konstante vom Typ int
    const int *const cicp = &ci;        //  Definition eines konstanten Zeigers cicp auf eine konstante vom Typ int


            i = ci;                     //  TRUE
         // ci = 8;                     //  FALSE                    
            *cp = ci;                   //  TRUE
         // cp = &ci;                   //  FALSE
            cip = &ci;                  //  TRUE
            cip = cicp;                 //  TRUE
         // *cip = 7;                   //  FALSE
         // ip = cip;                   //  FALSE
         
    return 0;
}


