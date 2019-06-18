/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: a2104679
 *
 * Created on 18 de Junho de 2019, 13:58
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct{

}lista;

typedef struct{
    int cor;
    int entrada;
    int fechada;
    int pai;
    lista adj;
}infoV;









int analizaQuantVertices(FILE *arq){
    int quant;
    
    
    return quant;
}








/*
 * 
 */
int main(int argc, char** argv) {
    FILE * arq;
    arq = fopen("entradaGrafo.txt", "r");
    
    int quantVertices;
    quantVertices = analizaQuantVertices(&arq);
    
    infoV grafo[quantVertices];
    
    
    return (EXIT_SUCCESS);
}

