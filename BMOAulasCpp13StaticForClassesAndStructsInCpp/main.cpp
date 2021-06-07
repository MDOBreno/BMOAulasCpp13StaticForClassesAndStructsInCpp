//
//  main.cpp
//  BMOAulasCpp13StaticForClassesAndStructsInCpp
//
//  Created by Breno Medeiros on 06/06/21.
//

#include <iostream>


//Conclusoes dessa aula:
// 1. Variáveis estáticas que estão dentro de uma classe são compartilhadas entre as instâncias de classe 0:29,
//   como variáveis globais para a classe
// 2. Os métodos estáticos podem ser usados sem precisar instanciar a classe 1:10
// 3. Os métodos estáticos não podem acessar variáveis não estáticas 5:35


struct Entidade { //Obs: Ele escolheu usar Struct em vez de Classe para não ter que escrever 'public'
                  // nos metodos/atributos, visto que em Structs ser publico é o padrao, e na classe o contrario
    //int x, y;
    static int x, y; //Definimos esses dois atributos como estaticos
    
    
    static void Print() {
        std::cout << x << ", " << y << std::endl;
    }
    
    
    
    int xNaoEstatico, yNaoEstatico;
    // Descomentar o metodo abaixo da erro: Pois metodos 'static' somente enxergam atributos que sejam estaticos...
    /*static void PrintDeAtributosNaoEstaticos() {
        std::cout << xNaoEstatico << ", " << yNaoEstatico << std::endl;
    }*/
    // ... No entanto, uma forma de fazer isso seria passanto uma instancia dessa classe como parametro: ...
    static void PrintDeAtributosNaoEstaticosEscritoCorretamente(Entidade e) {
        std::cout << e.xNaoEstatico << ", " << e.yNaoEstatico << std::endl;
    }
    // ... Mas mesmo assim nao é bom fazer isso, pois alem de ser uma gambiarra, na pratica esse metodo nao esta
    // sendo 'static' de verdade. Sendo assim nesse caso o melhor é ter escrito ele como um metodo nao estatico.
};

// Como todo atributo/metodo publico precisa de uma declaracao se for estatico, entao declaramos:
int Entidade::x;
int Entidade::y;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    Entidade e;//Nas duas linha abaixo definiremos os valores 2 e 3 para as variaveis estaticas x e y:
    e.x = 2;
    e.y = 3;
    
    Entidade e1;//Tambem definiremos os valores das variaveis estaticas x e y so que na entidade e1:
    e1.x = 5;
    e1.y = 8;
    
    e.Print();  //Como as entidades 'e' e 'e1' sao da mesma classe, entao suas variavei estaticas usam a mesma...
    e1.Print(); //... posicao de memoria compartilhada, ou seja, tanto em 'e' quanto em 'e1': x=5 e y=8 ...
                //... pois esses foram os ultimos valores que definimos para eles.
    
    // Isso é tao verdade que nao precisamos sequer instanciar a struct/classe para alterar atributos estaticos:
    Entidade::x = 10;
    Entidade::y = 11;
    // E o mesmo ocorre com os metodos estaticos:
    Entidade::Print();
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
