#include "Video.hpp"
#include <iostream>

Video::Video(std::string nome, int ano, std::string genero)
    : nome(nome), ano(ano), genero(genero) {}

Video::~Video() {
    // Nenhum recurso a ser liberado neste caso
}

float Video::get_media_avaliacao() {
    float soma = 0;
    for (int nota : avaliacoes) {
        soma += nota;
    }
    return avaliacoes.empty() ? 0 : soma / avaliacoes.size();
}

void Video::avaliar(int nota) {
    avaliacoes.push_back(nota);
}
