#include "Utilisateur.h"


Utilisateur::Utilisateur() {

}

Utilisateur::~Utilisateur() {

}

const Application &Utilisateur::get_application() {
    return this->application;
}

const long Utilisateur::set_application(const Application &application) {
    this->application = application;
}
