#include "Serie.hpp"
#include <iostream>

Serie::Serie(std::string nome, int ano, std::string genero, int n_temporadas, int total_episodios)
    : Video(nome, ano, genero), n_temporadas(n_temporadas), total_episodios(total_episodios) {}

void Serie::print_info(int id) {
    std::cout << "Série " << id << ": " << nome << " (" << ano << "), " << genero << ", " << n_temporadas << " temporadas, " << total_episodios << " episódios, nota: " << get_media_avaliacao() << std::endl;
}
