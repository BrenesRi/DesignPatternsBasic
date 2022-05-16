//
// Created by Maikol Guzman Alan on 4/8/22.
//
#define CATCH_CONFIG_MAIN

#include "../lib/catch2/catch.hpp"
#include "../src/HumanoideManager.h"
#include "../src/Alien.h"
#include "../src/Predator.h"
#include <sstream>
using namespace std;

TEST_CASE("Revisa los métodos de Policia", "[Policia]"){
    Policia policia;
    policia.setNombre("Policia Especial");

    stringstream toString;
    toString << policia;

    REQUIRE( toString.str() == "[Policia] nombre: Policia Especial");
    REQUIRE( policia.aprende() == "Aprendo como un policia." );
    REQUIRE( policia.aplicaJusticia() == "Aplico la justicia como un policia." );
    REQUIRE( policia.ayuda() == "Ayudo a la gente como a un policia." );
}

TEST_CASE("Revisa los datos de Robot", "[Robot]"){
    Robot robot;

    stringstream toString;
    toString << robot;

    REQUIRE( toString.str() == "[Robot] nivelDeBateria: 100, numSensores: 2000");
    REQUIRE( robot.getNivelDeBateria() == 100 );
    REQUIRE( robot.getNumSensores() == 2000 );
    REQUIRE( robot.seConfigura() == "Yo, como robot me puedo configurar.");
    REQUIRE( robot.seRecarga() == "Yo, como robot busco como recargar la bateria");
}

TEST_CASE("Revisa que las funciones de Armadura funcionen adecuadamente", "[Armadura]") {
    Armadura armadura;

    REQUIRE( armadura.tipoDeMetal(1) == "Aluminio");
    REQUIRE( armadura.tipoDeMetal(2) == "Titanio");
    REQUIRE( armadura.tipoDeMetal(3) == "Acero");
    REQUIRE( armadura.tipoDeMetal(4) == "Oro");

    REQUIRE( armadura.nivelDeResistenciaMax(1) == 50);
    REQUIRE( armadura.nivelDeResistenciaMax(2) == 95);
    REQUIRE( armadura.nivelDeResistenciaMax(3) == 85);
    REQUIRE( armadura.nivelDeResistenciaMax(4) == 70);

    REQUIRE( armadura.valorEnDolares(1) == 2.5);
    REQUIRE( armadura.valorEnDolares(2) == 3.4);
    REQUIRE( armadura.valorEnDolares(3) == 2.9);
    REQUIRE( armadura.valorEnDolares(4) == 1.7);
}

TEST_CASE("Revisa los datos de RoboCop", "[RoboCop]"){
    RoboCop roboCop;
    roboCop.setNombre("Matrix");
    roboCop.setNumSerie("ABC12345");
    roboCop.setNivelDeDano(50);
    roboCop.setCodigoDeArmadura(1);

    stringstream toString;
    toString << roboCop;

    REQUIRE( roboCop.dispara() == "Como Robocop, me encanta disparar a los malos");
    REQUIRE( roboCop.detiene() == "Como Robocop, me encanta detener a los malos");
    REQUIRE( toString.str() == "[Policia] nombre: Matrix [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: "
                               "[Tipo de metal: Aluminio, Nivel de resistencia: 50, Valor en dólares: 2.5] , "
                               "numSerie: ABC12345, nivelDeDano: 50, codigoDeArmadura: 1");
}

TEST_CASE("El RoboCop se auto configura", "[RoboCop]"){
    RoboCop roboCop;
    roboCop.setNombre("Matrix");
    roboCop.setNumSerie("ABC12345");
    roboCop.setNivelDeDano(90);
    roboCop.setCodigoDeArmadura(1);

    REQUIRE( roboCop.seConfigura() == "El Robot se Autoconfigura");
}

TEST_CASE("El RoboCop se se recarga", "[RoboCop]"){
    RoboCop roboCop;
    roboCop.setNombre("Matrix");
    roboCop.setNumSerie("ABC12345");
    roboCop.setNivelDeDano(90);
    roboCop.setCodigoDeArmadura(1);

    REQUIRE( roboCop.seRecarga() == "El Robot se Auto Recarga a: 100.000000");
}

TEST_CASE("Revisa los datos de Guerrero", "[Guerrero]") {
    Guerrero guerrero;

    stringstream toString;
    toString << guerrero;

    REQUIRE( toString.str() == "[Guerrero] color: Negro plateado");
    REQUIRE( guerrero.seDefiende() == "Como guerrero me defiendo como gato panza arriba." );
    REQUIRE( guerrero.ataca() == "Como guerrero me encanta atacar.");
    REQUIRE( guerrero.muere() == "Ahhhhhh, muero, hoy es buen día para morir.");
}

TEST_CASE("Revisa los detalles de Alien", "[Alien]") {
    Alien alien;
    alien.setNombre("Alien 1");
    alien.setNumSerie("ABC12345");
    alien.setNivelDeDano(45);
    alien.setCodigoDeArmadura(1);
    alien.setColor("Azul");
    alien.setVelocidad(100);
    alien.setEstatura(2);

    stringstream toString;
    toString << alien;

    REQUIRE( alien.corre() == "Como humanoide, me gusta correr a una velocidad de 100.000000 km/s.");
    REQUIRE( alien.setValor(11) == 11 );
    REQUIRE( alien.toString() == "[Policia] nombre: Alien 1 [Robot] nivelDeBateria: 100, numSensores: 2000, "
                               "armadura: [Tipo de metal: Aluminio, Nivel de resistencia: 50, "
                               "Valor en dólares: 2.5] , numSerie: ABC12345, nivelDeDano: 45, "
                               "codigoDeArmadura: 1 [Guerrero] color: Azul, velocidad: 100, estatura: 2");
}

TEST_CASE("Revisa los detalles de Predator", "[Predator]") {
    Predator predator;
    predator.setNombre("Predator 1");
    predator.setNumSerie("FER12333");
    predator.setNivelDeDano(50);
    predator.setCodigoDeArmadura(4);
    predator.setColor("Negro");
    predator.setVelocidad(234);
    predator.setPeso(4);

    stringstream toString;
    toString << predator;

    REQUIRE( predator.corre() == "Como humanoide, me gusta correr a una velocidad de 234.000000 km/s.");
    REQUIRE( predator.toString() == "[--------------------------------------Soy Predator---------------------------]");
    REQUIRE( predator.setValor(99) == 99 );
    REQUIRE( toString.str() == "[Policia] nombre: Predator 1 [Robot] nivelDeBateria: 100, numSensores: 2000, "
                               "armadura: [Tipo de metal: Oro, Nivel de resistencia: 70, Valor en dólares: 1.7]"
                               " , numSerie: FER12333, nivelDeDano: 50, codigoDeArmadura: 4 "
                               "[Guerrero] color: Negro, velocidad: 234, peso: 4");
}


TEST_CASE( "Revisa que el método ingresar Humanoides sirva", "[Humanoide Manager]" ) {

    Alien alien1;
    Alien alien2;
    Alien alien3;
    Predator predator1;
    Predator predator2;

    HumanoideManager humanoideManager;
    humanoideManager.ingresaHumanoide(&alien1);
    humanoideManager.ingresaHumanoide(&alien2);
    humanoideManager.ingresaHumanoide(&alien3);
    humanoideManager.ingresaHumanoide(&predator1);
    humanoideManager.ingresaHumanoide(&predator2);

    REQUIRE( humanoideManager.getHumanoideLista().size() == 5 );
}

TEST_CASE("Imprime el listado de todos los humanoides", "[Humanoide Manager]") {
    Alien alien1;
    alien1.setNombre("Alien 1");
    alien1.setNumSerie("ABC12345");
    alien1.setNivelDeDano(45);
    alien1.setCodigoDeArmadura(1);
    alien1.setColor("Azul");
    alien1.setVelocidad(100);
    alien1.setEstatura(2);

    Alien alien2;
    alien2.setNombre("Alien 2");
    alien2.setNumSerie("DES12345");
    alien2.setNivelDeDano(50);
    alien2.setCodigoDeArmadura(2);
    alien2.setColor("Amarillo");
    alien2.setVelocidad(200);
    alien2.setEstatura(2.75);

    Alien alien3;
    alien3.setNombre("Alien 3");
    alien3.setNumSerie("QWE34534");
    alien3.setNivelDeDano(85);
    alien3.setCodigoDeArmadura(3);
    alien3.setColor("Verde");
    alien3.setVelocidad(180);
    alien3.setEstatura(1.75);

    Predator predator1;
    predator1.setNombre("Predator 1");
    predator1.setNumSerie("FER12333");
    predator1.setNivelDeDano(50);
    predator1.setCodigoDeArmadura(4);
    predator1.setColor("Negro");
    predator1.setVelocidad(234);
    predator1.setPeso(4);

    Predator predator2;
    predator2.setNombre("Predator 2");
    predator2.setNumSerie("WWE43243");
    predator2.setNivelDeDano(80);
    predator2.setCodigoDeArmadura(2);
    predator2.setColor("Rojo");
    predator2.setVelocidad(123);
    predator2.setPeso(3.8);

    HumanoideManager humanoideManager;
    humanoideManager.ingresaHumanoide(&alien1);
    humanoideManager.ingresaHumanoide(&alien2);
    humanoideManager.ingresaHumanoide(&alien3);
    humanoideManager.ingresaHumanoide(&predator1);
    humanoideManager.ingresaHumanoide(&predator2);

    REQUIRE( humanoideManager.retornaSoloAliens() == "[Policia] nombre: Alien 1 [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: [Tipo de metal: Aluminio, Nivel de resistencia: 50, Valor en dólares: 2.5] , numSerie: ABC12345, nivelDeDano: 45, codigoDeArmadura: 1 [Guerrero] color: Azul, velocidad: 100, estatura: 2---"
                                                     "[Policia] nombre: Alien 2 [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: [Tipo de metal: Titanio, Nivel de resistencia: 95, Valor en dólares: 3.4] , numSerie: DES12345, nivelDeDano: 50, codigoDeArmadura: 2 [Guerrero] color: Amarillo, velocidad: 200, estatura: 2.75---"
                                                     "[Policia] nombre: Alien 3 [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: [Tipo de metal: Acero, Nivel de resistencia: 85, Valor en dólares: 2.9] , numSerie: QWE34534, nivelDeDano: 85, codigoDeArmadura: 3 [Guerrero] color: Verde, velocidad: 180, estatura: 1.75---");

    REQUIRE( humanoideManager.retornaTodos() == "[Policia] nombre: Alien 1 [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: [Tipo de metal: Aluminio, Nivel de resistencia: 50, Valor en dólares: 2.5] , numSerie: ABC12345, nivelDeDano: 45, codigoDeArmadura: 1 [Guerrero] color: Azul, velocidad: 100, estatura: 2---"
                                                "[Policia] nombre: Alien 2 [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: [Tipo de metal: Titanio, Nivel de resistencia: 95, Valor en dólares: 3.4] , numSerie: DES12345, nivelDeDano: 50, codigoDeArmadura: 2 [Guerrero] color: Amarillo, velocidad: 200, estatura: 2.75---"
                                                "[Policia] nombre: Alien 3 [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: [Tipo de metal: Acero, Nivel de resistencia: 85, Valor en dólares: 2.9] , numSerie: QWE34534, nivelDeDano: 85, codigoDeArmadura: 3 [Guerrero] color: Verde, velocidad: 180, estatura: 1.75---"
                                                "[Policia] nombre: Predator 1 [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: [Tipo de metal: Oro, Nivel de resistencia: 70, Valor en dólares: 1.7] , numSerie: FER12333, nivelDeDano: 50, codigoDeArmadura: 4 [Guerrero] color: Negro, velocidad: 234, peso: 4---"
                                                "[Policia] nombre: Predator 2 [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: [Tipo de metal: Titanio, Nivel de resistencia: 95, Valor en dólares: 3.4] , numSerie: WWE43243, nivelDeDano: 80, codigoDeArmadura: 2 [Guerrero] color: Rojo, velocidad: 123, peso: 3.8---");
}
