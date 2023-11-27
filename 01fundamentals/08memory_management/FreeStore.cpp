#include "Resource.h"
#include <string>
using std::string;


int main()
{

    /*
    Demo 1
    {
        Resource localResource ("local");
        string localString = localResource.GetName();
    }

    Resource* pResource = new Resource("created with new");
    string newString = pResource->GetName();
    int j = 3;
    delete pResource;

    // Cant use pointer pResource because it was deleted. (BIG PROBLEM)
    string string3 = pResource->GetName();

    return 0;

    */

    {
        Resource localResource ("local");
        string localString = localResource.GetName();
    }

    Resource* pResource = new Resource("created with new");
    string newString = pResource->GetName();
    int j = 3;

    // Se eu colocasse um pedaço de código aqui que acabasse a função main
    // if (j == 3) { return 0;}
    // Essa linha iria acabar com a função e, consequentemente, não iriamos
    // executar a linha que deleta "pResource". E não vai ser possível
    // limpar essa memória da Free Store


    // Fazendo uma cópia do ponteiro pResource e colocando em p2.
    // Isso não copia nem recurso, apenas o ponteiro. Então eu tenho
    // agora dois ponteiros apontando pro mesmo lugar.
    Resource* p2 = pResource;
    
    // Deletendo pResource, eu não vou conseguir usar p2 também! 
    // Depois dessa linha p2, vai apontar pra um lugar deletado!
    // (BIG PROBLEM!)
    delete pResource;

    // Não consigo.
    //string string2 = p2->GetName(); 

    // Deletando pResource duas vezes? (BIG PROBLEM!)
    delete pResource;
    // Algumas pessoas, depois de deletar, fazem isso:
    // pResource = nullptr; Pq uma exception dessa é mais fácil
    // de detectar.

    // Essa memória já foi deletada através do ponteiro pResource..
    // (BIG PROBLEM!)
    delete p2;

    //string string3 = pResource->GetName();

    return 0;





}