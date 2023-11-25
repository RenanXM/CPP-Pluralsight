#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"

// COMENTÁRIO IMPORTANTE LÁ PRA BAIXO (aviso pro futuro)
int main()
{   
    // References

    int a = 3;
    cout << "a is " << a << endl;

    int& rA = a;
    rA = 5;
    cout << "a is " << a << endl;

    Person Kate("Kate", "Gregory", 123);
    Person& rKate = Kate;
    rKate.SetNumber(345);
    cout << "r:Kate: " << rKate.GetName() << " " << rKate.GetNumber() << endl;

    //int& badReference;
    //badReference = 3;


    // Pointers

    int* pA = &a;
    *pA = 4;
    cout << "a is" << a << endl;
    
    int b = 100;
    pA = &b;
    (*pA)++;
    cout << "a " << a << ", *pA " << *pA << endl;

    Person* pKate = &Kate;
    (*pKate).SetNumber(235);
    pKate->SetNumber(236);
    cout << "Kate: " << Kate.GetName() << " " << Kate.GetNumber() << endl;

    //int* badPointer;
    // if i want a pointer that is not pointing to nothing,
    // I would do: int* badPointer = nullptr;

    //*badPointer = 3;
    //cout << *badPointer << endl;


    return 0;

}

// DETALHE IMPORTANTE QUANTO A PERFORMANCE:
/*
- Eu posso receber um parãmetro por referência ou por valor.
- Eu vou escolher isso levando em conta se o parâmetro
- É "tranquilo" de se receber por valor, como int, double, string
  etc. Mas, se o parâmetro for um objeto complexo,
  vale a pena passar por referência pq o custo computacional da 
  cópia do objeto pode ser alto.

- Nesse sentido, qnd passar algo por referência, o default é 
  passar por const reference. Já que se eu tô fazendo isso 
  por performance e não quero alterar o valor(se esse fosse o
  caso eu passava o parâmetro por valor), escreveria assim:

  int something(Person const& p);
*/