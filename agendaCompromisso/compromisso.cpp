#include "compromisso.h"




compromisso::compromisso(){
    compromisso::data = "";
    compromisso::titulo = "";
    compromisso::local = "";
    compromisso::hora = "";
}

compromisso::compromisso( QString titulo,  QString data,  QString hora,  QString local){

    compromisso::data = data;
    compromisso::titulo = titulo;
    compromisso::local = local;
    compromisso::hora = hora;
}
