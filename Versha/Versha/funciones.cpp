#include <iostream>
#include <string>
#include <windows.h>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <cstdlib>
#include <fstream>

using namespace std;

void menu();

//---------------------------------------------------------------------------------------------
//Funciones de los logos del juego
void Logo1(){
    cout<<"\n\n\n\n\n\n\n\n\n"
        <<"\t\t\t\t\t\t     ##   \n"
        <<"\t\t\t\t\t\t   ####   \n"
        <<"\t\t\t\t\t\t     ##   \n"
        <<"\t\t\t\t\t\t     ##   \n"
        <<"\t\t\t\t\t\t     ##   \n"
        <<"\t\t\t\t\t\t     ##   \n"
        <<"\t\t\t\t\t\t   ###### \n"
        <<"\n ";

}

void Logo2(){
    cout<<"\n\n\n\n\n\n\n\n\n"
        <<"\t\t\t\t\t\t   #######  \n"
        <<"\t\t\t\t\t\t  ##     ## \n"
        <<"\t\t\t\t\t\t         ## \n"
        <<"\t\t\t\t\t\t   #######  \n"
        <<"\t\t\t\t\t\t  ##        \n"
        <<"\t\t\t\t\t\t  ##        \n"
        <<"\t\t\t\t\t\t  ######### \n"
        <<"\n";
}

void Logo3(){
    cout<<"\n\n\n\n\n\n\n\n\n"
        <<"\t\t\t\t\t\t   #######  \n "
        <<"\t\t\t\t\t\t  ##     ## \n "
        <<"\t\t\t\t\t\t         ## \n "
        <<"\t\t\t\t\t\t   #######  \n "
        <<"\t\t\t\t\t\t         ## \n "
        <<"\t\t\t\t\t\t  ##     ## \n "
        <<"\t\t\t\t\t\t   #######  \n "
        <<"\n";
}

void LogoGo(){
    cout<<"\n\n\n\n\n\n\n\n\n"
        <<"\t\t\t\t\t\t   ######    #######  #### \n"
        <<"\t\t\t\t\t\t  ##    ##  ##     ## #### \n"
        <<"\t\t\t\t\t\t  ##        ##     ## #### \n"
        <<"\t\t\t\t\t\t  ##   #### ##     ##  ##  \n"
        <<"\t\t\t\t\t\t  ##    ##  ##     ##      \n"
        <<"\t\t\t\t\t\t  ##    ##  ##     ## #### \n"
        <<"\t\t\t\t\t\t   ######    #######  #### \n"
        <<"\n";
}

void Personaje(){
cout<<"\n"
    <<"\t\t\t            ;+++          \n"
    <<"\t\t\t          +$$$$$X+        \n"
    <<"\t\t\t         +$xXXXX+$:       \n"
    <<"\t\t\t         ++::::::X:       \n"
    <<"\t\t\t         ;;;+::+:;        \n"
    <<"\t\t\t         :+::::::+        \n"
    <<"\t\t\t          +$X;+$$:        \n"
    <<"\t\t\t           ;X$$+:         \n"
    <<"\t\t\t        ::;+;..++;::      \n"
    <<"\t\t\t       ;XXXX; .+XXXX+:    \n"
    <<"\t\t\t       xXXXX; .+XXXXX;    \n"
    <<"\t\t\t      :;++++:..;+++++;    \n"
   <<"\n";
}

void LogoPuntaje(){
cout<<"\n"
    <<"\t\t--------------------------------------------------------------------------------\n"
    <<"\t\t    ########  ##     ## ##    ## ########    ###          ## ########  ######  \n"
    <<"\t\t    ##     ## ##     ## ###   ##    ##      ## ##         ## ##       ##    ## \n"
    <<"\t\t    ##     ## ##     ## ####  ##    ##     ##   ##        ## ##       ##       \n"
    <<"\t\t    ########  ##     ## ## ##.##    ##    ##     ##       ## ######    ######  \n"
    <<"\t\t    ##        ##     ## ##  ####    ##    ######### ##    ## ##             ## \n"
    <<"\t\t    ##        ##     ## ##   ###    ##    ##     ## ##    ## ##       ##    ## \n"
    <<"\t\t    ##         #######  ##    ##    ##    ##     ##  ######  ########  ######  \n"
    <<"\t\t--------------------------------------------------------------------------------\n"
    <<"\n";
}

void logoQuien(){
cout<<"\n\n\n\n\n\n\n\n\n"
    <<"\t\t        #######   ##     ##  ####  ########  ##    ##       \n"
    <<"\t\t       ##     ##  ##     ##   ##   ##        ###   ##       \n"
    <<"\t\t       ##     ##  ##     ##   ##   ##        ####  ##       \n"
    <<"\t\t       ##     ##  ##     ##   ##   ######    ## ## ##       \n"
    <<"\t\t       ##  ## ##  ##     ##   ##   ##        ##  ####       \n"
    <<"\t\t       ##    ##   ##     ##   ##   ##        ##   ###       \n"
    <<"\t\t        ##### ##   #######   ####  ########  ##    ##       \n"
    <<"  \n";
}

void logoQuiere(){
cout<<"\n\n\n\n\n\n\n\n\n"
    <<"\t\t        #######   ##     ##  ####  ########  ########   ########       \n"
    <<"\t\t       ##     ##  ##     ##   ##   ##        ##     ##  ##             \n"
    <<"\t\t       ##     ##  ##     ##   ##   ##        ##     ##  ##             \n"
    <<"\t\t       ##     ##  ##     ##   ##   ######    ########   ######         \n"
    <<"\t\t       ##  ## ##  ##     ##   ##   ##        ##   ##    ##             \n"
    <<"\t\t       ##    ##   ##     ##   ##   ##        ##    ##   ##             \n"
    <<"\t\t        ##### ##   #######   ####  ########  ##     ##  ########       \n"
    <<"  \n";
}

void logoSer(){
cout<<"\n\n\n\n\n\n\n\n\n"
    <<"\t\t\t        ######   ########  ########      \n"
    <<"\t\t\t       ##    ##  ##        ##     ##     \n"
    <<"\t\t\t       ##        ##        ##     ##     \n"
    <<"\t\t\t        ######   ######    ########      \n"
    <<"\t\t\t             ##  ##        ##   ##      \n"
    <<"\t\t\t       ##    ##  ##        ##    ##      \n"
    <<"\t\t\t        ######   ########  ##     ##     \n"
    <<"  \n";
}

void logoMillonario(){
cout<<"\n\n\n\n\n\n\n\n\n"
    <<"\t  ##     ## #### ##       ##        #######  ##    ##    ###    ########  ####  #######   #######  \n"
    <<"\t  ###   ###  ##  ##       ##       ##     ## ###   ##   ## ##   ##     ##  ##  ##     ## ##     ## \n"
    <<"\t  #### ####  ##  ##       ##       ##     ## ####  ##  ##   ##  ##     ##  ##  ##     ##       ##  \n"
    <<"\t  ## ### ##  ##  ##       ##       ##     ## ## ## ## ##     ## ########   ##  ##     ##     ###   \n"
    <<"\t  ##     ##  ##  ##       ##       ##     ## ##  #### ######### ##   ##    ##  ##     ##    ##     \n"
    <<"\t  ##     ##  ##  ##       ##       ##     ## ##   ### ##     ## ##    ##   ##  ##     ##           \n"
    <<"\t  ##     ## #### ######## ########  #######  ##    ## ##     ## ##     ## ####  #######     ##     \n"
    <<"  \n";
}

void LogoPrincipal(){


    cout<<"\033[0;32m"
    <<"                                                                                                         \n"
    <<"                                                     +++                                                 \n"
    <<"                                         +++++++++++++--+++++++++++++                                    \n"
    <<"             ++                +++++++++++--.---++---....--+++---.--+++++++++++                 +        \n"
    <<"            -.-              +++----------......----......--+-.....-+++++-----+++              +.-       \n"
    <<"            -..-            +++--.....---+-....------....------...--++--.....--+++           #-.--       \n"
    <<"           --+...-+##+++++++--+++-.....-----+++#####+....+#####+++-----.....-++++++++++++###-.---+-      \n"
    <<"           +..+-....++++-....---+++----+############+....+############+---++++--.....-++++..---#-.-      \n"
    <<"           -+-..-#+----.--......---+#########+--..............--+#########+---......--..---+#+..-+-      \n"
    <<"           +..-+-..-++++---...--+##########-........-....-........-##########+---..---++++-..-+-..+      \n"
    <<"           +-++..-+++----+#++--+--...-+###-......-###...-###+-....-####+-...--+--++#+-..-+++-.--+-+      \n"
    <<"             -----+#++--+++#++.---++++-.-#-.......+##...-############+..+#++--..-+#++---++#+-----+       \n"
    <<"             +--+++++++++++++++-----++---##+............-+###########+--++--...-++++++++-++++++-+        \n"
    <<"                +----++++++---++..--+++--+####+-.......-------.-+####--+#+-...-#+---+++++-----+          \n"
    <<"                +---+++++++----+#+---+++#############----.----------###++--.-##+----++++++++-+           \n"
    <<"                +++#+-----+++++++++##++++############----###+--------++++###++++++++++---+#+++           \n"
    <<"              ++++---.....---++#+-+++++++-------#####----####+----+--++#++++-+#+++--......--++++         \n"
    <<"             +++----.....--++++++++++++##---+-+---###--++##+--+++++-+##++++++++#+++--.....----+++        \n"
    <<"                +++++++--....--+###########+--++++++++++++++++++-++###########++-.....-+++++++           \n"
    <<"                   +++--.....--+--+#############+----++++---++#############++-++-......-++++             \n"
    <<"                  +++++--++--.....---++##############-+++##############++---.....--+--++++++             \n"
    <<"                       ++++--.....--------++++#######++++#########++--------......--+++                  \n"
    <<"                        +++-++++++-......-++--------+++++++++-----++-......-++++++++++                   \n"
    <<"                              ++++--..--+--......-+--....--+-......--+--...-+++                          \n"
    <<"                                ++++++++++--...--++--....--++--...--++++++++++                           \n"
    <<"                                         +++-++++++++----++++++++-+++                                    \n"
    <<"                                                     ++++                                                \n"
    <<"                                                                                                         \n"
    <<"\033[0m ";

    Sleep(3000);
    system("cls");
    cout;
    logoQuien();
    Sleep(700);
    system("cls");
    logoQuiere();
    Sleep(700);
    system("cls");
    logoSer();
    Sleep(700);
    system("cls");
    logoMillonario();
    Sleep(700);
    system("cls");
}

void LogoMenu(){
    cout<<"\n"
        <<"\t\t--------------------------------------------------------------------------------\n"
        <<"\t\t\t\t  ##     ##  ########  ##    ##  ##     ## \n"
        <<"\t\t\t\t  ###   ###  ##        ###   ##  ##     ## \n"
        <<"\t\t\t\t  #### ####  ##        ####  ##  ##     ## \n"
        <<"\t\t\t\t  ## ### ##  ######    ## ## ##  ##     ## \n"
        <<"\t\t\t\t  ##     ##  ##        ##  ####  ##     ## \n"
        <<"\t\t\t\t  ##     ##  ##        ##   ###  ##     ## \n"
        <<"\t\t\t\t  ##     ##  ########  ##    ##   #######  \n"
        <<"\t\t--------------------------------------------------------------------------------\n"
        <<"\n";
}

void LogoSalir(){
cout<<" \n\n\n\n\n\n"
    <<"\t\t--------------------------------------------------------------------------------\n"
    <<"\t\t  ######      ###     ##        ####  ########  ##    ##  ########    #######  \n"
    <<"\t\t ##    ##    ## ##    ##         ##   ##        ###   ##  ##     ##  ##     ## \n"
    <<"\t\t ##         ##   ##   ##         ##   ##        ####  ##  ##     ##  ##     ## \n"
    <<"\t\t  ######   ##     ##  ##         ##   ######    ## ## ##  ##     ##  ##     ## \n"
    <<"\t\t       ##  #########  ##         ##   ##        ##  ####  ##     ##  ##     ## \n"
    <<"\t\t ##    ##  ##     ##  ##         ##   ##        ##   ###  ##     ##  ##     ## \n"
    <<"\t\t  ######   ##     ##  ########  ####  ########  ##    ##  ########    #######  \n"
    <<"\t\t--------------------------------------------------------------------------------\n"
    <<"\n";
}

void LogoCreditos(){
    cout<<"\n"
        <<"\t\t--------------------------------------------------------------------------------\n"
        <<"\t\t      ######  ########  ######## ########  #### ########  #######   ######  \n"
        <<"\t\t     ##    ## ##     ## ##       ##     ##  ##     ##    ##     ## ##    ## \n"
        <<"\t\t     ##       ##     ## ##       ##     ##  ##     ##    ##     ## ##       \n"
        <<"\t\t     ##       ########  ######   ##     ##  ##     ##    ##     ##  ######  \n"
        <<"\t\t     ##       ##   ##   ##       ##     ##  ##     ##    ##     ##       ## \n"
        <<"\t\t     ##    ## ##    ##  ##       ##     ##  ##     ##    ##     ## ##    ## \n"
        <<"\t\t      ######  ##     ## ######## ########  ####    ##     #######   ######  \n"
        <<"\t\t--------------------------------------------------------------------------------\n"
        <<"\n ";
}

void LogoOpcionA(){

    cout<<"\n"
        <<"\t\t .--------.                                      \n"
        <<"\t\t |********|                                      \n"
        <<"\t\t |********|                                      \n"
        <<"\t\t |********|                                      \n"
        <<"\t\t |********|  .--------.                          \n"
        <<"\t\t |********|  |********|  .--------.              \n"
        <<"\t\t |********|  |********|  |********|              \n"
        <<"\t\t |********|  |********|  |********|  .--------.  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t ----------------------------------------------  \n"
        <<"\t\t     a           b           c           d       \n"
        <<"\n";
}

void LogoOpcionB(){

    cout<<"\n"
        <<"\t\t             .--------.                          \n"
        <<"\t\t             |********|                          \n"
        <<"\t\t             |********|                          \n"
        <<"\t\t             |********|                          \n"
        <<"\t\t             |********|                          \n"
        <<"\t\t .--------.  |********|                          \n"
        <<"\t\t |********|  |********|  .--------.              \n"
        <<"\t\t |********|  |********|  |********|  .--------.  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t ----------------------------------------------  \n"
        <<"\t\t     a           b           c           d       \n"
        <<"\n";
}

void LogoOpcionC(){

    cout<<"\n"
        <<"\t\t                         .--------.              \n"
        <<"\t\t                         |********|              \n"
        <<"\t\t                         |********|              \n"
        <<"\t\t                         |********|              \n"
        <<"\t\t                         |********|  .--------.  \n"
        <<"\t\t .--------.              |********|  |********|  \n"
        <<"\t\t |********|              |********|  |********|  \n"
        <<"\t\t |********|  .--------.  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t ----------------------------------------------  \n"
        <<"\t\t     a           b           c           d       \n"
        <<"\n";
}

void LogoOpcionD(){

    cout<<"\n"
        <<"\t\t                                      --------   \n"
        <<"\t\t                                     |********|  \n"
        <<"\t\t                         .--------.  |********|  \n"
        <<"\t\t             .--------.  |********|  |********|  \n"
        <<"\t\t .--------.  |********|  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t |********|  |********|  |********|  |********|  \n"
        <<"\t\t ----------------------------------------------  \n"
        <<"\t\t     a           b           c           d       \n"
        <<"\n";
}

void LogoLLamada(){
    cout<<"\n "
    <<"\t\t         +#####++          \n"
    <<"\t\t   +###        ++##+       \n"
    <<"\t\t +######  +####++  +#+     \n"
    <<"\t\t #######+       +##  +#    \n"
    <<"\t\t ########   ###+  +#+ +#+  \n"
    <<"\t\t +#####+        ##  #+ +#  \n"
    <<"\t\t  #####          #+ +#  ## \n"
    <<"\t\t   +####+            #  +# \n"
    <<"\t\t    +#####+              # \n"
    <<"\t\t      +######  +#####+     \n"
    <<"\t\t        +###############   \n"
    <<"\t\t          +############+   \n"
    <<"\t\t             ++######+     \n"
    <<"\n";
}

//Funciones de animaciones
void AnimacionCreditos(){
    //Simula un parpadeo
    for(int i = 0; i<=2; i++){
        system("cls");
        cout;
        LogoCreditos();

        Sleep(700);
    }
}

void AnimacionSalir(){
    //Simula un parpadeo
    for(int i = 0; i<=2; i++){
        system("cls");
        cout;
        LogoSalir();

        Sleep(700);
    }
}

void AnimacionIniciarJuego(){
    // Códigos de escape ANSI para colores
    cout<<"\n"<<endl;
    system("cls");
    cout;
    Logo3();
    Sleep(700);
    system("cls");
    Logo2();
    Sleep(700);
    system("cls");
    Logo1();
    Sleep(700);
    system("cls");
    LogoGo();
    Sleep(700);
    system("cls");

    Personaje();
}

void AnimacionPuntaje(){
    // Códigos de escape ANSI para colores

    //Simula un parpadeo
    for(int i = 0; i<=2; i++){
        system("cls");
        cout;
        LogoPuntaje();

        Sleep(700);
    }
}


//Funciones para mostrar en pantalla
void MostrarCreditos(){



    AnimacionCreditos();
    cout<<"\n"<<endl;
    cout<<"\t\t\t------------------------------------------------------------------ "<<endl;
    cout<<"\t\t\t|                   Cristhian Carrillo                           |" <<endl;
    cout<<"\t\t\t------------------------------------------------------------------ "<<endl;
    cout<<"\t\t\t|                      Joel Velez                                |"<<endl;
    cout<<"\t\t\t------------------------------------------------------------------ \n"<<endl;

    system("pause");
    system("cls");
    menu();
}

void MostrarPuntaje(int id){


    AnimacionPuntaje();
    string puntajes;
    ifstream posiciones("tabla_Pos.txt");
    cout<<"\n"<<endl;
    for (int i=0;i<id+2;i++) {
        getline(posiciones,puntajes);
        cout<<"\t\t\t\t\t"<<puntajes<<endl;
        cout<<"\t\t\t------------------------------------------------------------------ "<<endl;
    }
    cout<<"\n";
    system("pause");
    system("cls");
    menu();
}

void MostrarOpcionA(){
    char wordu = 163;
    cout<<"\t\t\t Respuesta del p"<<wordu<< "blico: "<<endl;
    LogoOpcionA();
    Sleep(700);
    system("pause");
}

void MostrarOpcionB(){
    char wordu = 163;
    cout<<"\t\t\t Respuesta del p"<<wordu<< "blico: "<<endl;
    LogoOpcionB();
    Sleep(700);
    system("pause");
}

void MostrarOpcionC(){
    char wordu = 163;
    cout<<"\t\t\t Respuesta del p"<<wordu<< "blico: "<<endl;
    LogoOpcionC();
    Sleep(700);
    system("pause");
}

void MostrarOpcionD(){
    char wordu = 163;
    cout<<"\t\t\t Respuesta del p"<<wordu<< "blico: "<<endl;
    LogoOpcionD();
    Sleep(700);
    system("pause");
}


//Funcion salir del juego
void SalirJuego(){
    AnimacionSalir();
    cout<<"\t\t\t\t\t Gracias por jugar"<<endl;
    Sleep(2000);
    exit(1);
}

//Funcion de inicizalizar el juego
void InicarJuego(){
    system("cls");
    AnimacionIniciarJuego();
}
