//
//  Log.hpp
//  BMOAulasCpp13StaticForClassesAndStructsInCpp
//
//  Created by Breno Medeiros on 06/06/21.
//

// As duas linhas abaixo(e tambem a linha "#endif" equivalem ao "Pragma Once" de headers .h
#ifndef Log_hpp     //Se ainda não definiu um simbolo chamado "Log_hpp" nesse projeto então
#define Log_hpp     // defina ele, e ele valerá tudo o que estiver escrito até a linha "#endif"



#include <stdio.h>  // Igual a: #include <cstdio>.
//Obs: Sempre que houver .h é bliblioteca de C, e quando não houver é de Cpp
void Log(const char* mensagem);
void InitLog();
struct player{};



#endif /* Log_hpp */

//Em .hpp o codigo acima ja vem escritos por padrao, mas em .h o
// que vem escrito é somente a linha "#pragma once", que significa
// essencialmente uma instrucao para o preprocessamento de que
// basta incluir o atual arquivo .h em um unico arquivo de
// transicao(Arquivo de objeto .o), mesmo que incluamos ele em
// varios arquivos .cpp .E o motivo disso é que nos poderemos
// adquiri multiplos erros, por incluir aquele arquivo multiplas
// vezes, além de deixar os arquivos mais pesados. Isso ocasionaria
// erro, por exemplo, se escrevessimos a seguinte linha:
//        struct player{};
//E a causa do erro seria por definir o mesmo struct(estrutura) em
// mais de um lugar. Porem, como optamos por escolher header .hpp,
// não precisamos da linha "#pragma once", e definir tal struct não
// gera erro algum, contanto que ponhamos entre o "#ifndef" e "#endif"




