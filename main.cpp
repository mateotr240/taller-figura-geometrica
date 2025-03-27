
#include <iostream>

int main()
{
    int tipodeataque;
    int escudo;
    int dañototal;
    int daño;
    int a;
    std::cout << "valor del Escudo"<<std::endl;
    std::cin >> escudo;  
    std::cout << "valor del daño"<<std::endl;
    std::cin >> daño;
    std::cout << "tipo de ataque (1)plasmas (2)infernal)"<<std::endl;
    std::cin >> tipodeataque;
    //primera "condicion escudo es mayor a 70 y el ataque es de plasma (1)"//
    if((escudo>=70)&&(tipodeataque==1)){
        dañototal=daño/2+daño;
        if(dañototal>=escudo)
        //posibles respuestas//
        {
            escudo=0;
        std::cout << "¡Sobre carga de escudo! daño aumentado" <<std::endl;
        std::cout << "daño recibido: "<< dañototal<<std::endl;
        std::cout << "escudo restante: " <<escudo<< std::endl;
        std::cout << "¡Modo de ira activado! El siguiente ataque será más fuerte." <<std::endl;
        }
        else{
        std::cout << "¡Sobre carga de escudo! daño aumentado" <<std::endl;
        std::cout << "daño recibido: "<< dañototal<<std::endl;
        std::cout << "escudo restante: " <<escudo- dañototal << std::endl;
    }
    }
    //segunda condicion "escudo es menor a 30 y el ataque es de fuego infernal (2)"//
    else if((escudo<=30)&&(tipodeataque==2)){
        dañototal=(daño -(daño*0.4));
        a=escudo - dañototal;
    //posibles respuestas//
        if(a<=0){
            escudo=0;
            std::cout << "daño recibido: "<< dañototal<<std::endl;
            std::cout << "escudo restante: " <<escudo<< std::endl;
            std::cout << "¡Protección infernal activada! Daño reducido." <<std::endl;
            std::cout << "¡Modo de ira activado! El siguiente ataque será más fuerte." <<std::endl;
        }
        else{
            std::cout << "daño recibido: "<<dañototal<<std::endl;
            std::cout << "escudo restante: " <<a<< std::endl;
            std::cout << "¡Protección infernal activada! Daño reducido." <<std::endl;
        }
    //tercera condicion "Si el escudo se reduce a 0"//    
    }else if(escudo<=0){
        std::cout << "¡Modo de ira activado! El siguiente ataque será más fuerte." <<std::endl;
        std::cout << "daño recibido: "<< daño<<std::endl;
        std::cout << "escudo restante: " <<escudo<< std::endl;
    }
    //si ninguna de las condiciones anteriores se cumplen//
    else{
        //posibles respuestas//
        if(escudo>=daño){
    std::cout << "daño recibido: "<< daño<<std::endl;
    std::cout << "escudo restante: " <<escudo-daño<< std::endl;
        }
    else{
        escudo=0;
    std::cout << "daño recibido: "<< daño<<std::endl;
    std::cout << "escudo restante: " <<escudo<< std::endl;
    }
    }
}
