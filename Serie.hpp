#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
public:
    int n_temporadas;
    int total_episodios;

    Serie(std::string nome, int ano, std::string genero, int n_temporadas, int total_episodios);
    void print_info(int id) override;
};

#endif
