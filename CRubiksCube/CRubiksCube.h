#ifndef RUBIK__S_CUBE_CRUBIKSCUBE_H
#define RUBIK__S_CUBE_CRUBIKSCUBE_H

#include "../CSmallCube/CSmallCube.h"
#include <fstream>

class CRubiksCube {
public:
    std::vector<std::vector<std::vector<CSmallCube>>> cube;

    CRubiksCube();

    CRubiksCube &operator=(const CRubiksCube &other);

    void default_colors();

    void positionCubes(char side);//Расстановка позиций для кубика

    void printCube();

    void turn_up_clockwise();

    void turn_down_clockwise();

    void turn_right_clockwise();

    void turn_left_clockwise();

    void turn_front_clockwise();

    void turn_back_clockwise();

    void random_turn();

    void turn_counterclockwise(char side);

    void writing_file();//Запись состояния в файл
    void read_file(); //Считывание состояния с файла

    std::vector<std::vector<std::vector<CSmallCube>>> getVector();

    void setVector(std::vector<std::vector<std::vector<CSmallCube>>> process);
};


#endif //RUBIK__S_CUBE_CRUBIKSCUBE_H
