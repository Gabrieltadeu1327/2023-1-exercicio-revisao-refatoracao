#include "Video.hpp"
#include <iostream>

Video::Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep)
    : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao), n_temp(n_temp), total_ep(total_ep) {}

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

void Video::print_info(int id) {
    std::cout << (subtipo == "Filme" ? "Filme " : "Série ") << id << ": " << nome << " (" << ano << "), " << genero;
    if (subtipo == "Filme") {
        std::cout << ", " << filme_duracao << " min";
    } else if (subtipo == "Série") {
        std::cout << ", " << n_temp << " temporada(s), " << total_ep << " episódio(s)";
    }
    std::cout << ", nota: " << get_media_avaliacao() << std::endl;
}

Video::~Video() {
    // Nenhum recurso a ser liberado neste caso
}
