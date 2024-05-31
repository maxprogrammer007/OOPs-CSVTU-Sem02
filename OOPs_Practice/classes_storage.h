//
// Created by Administrator on 31-May-24.
//

#ifndef OOPS_CSVTU_SEM02_CLASSES_STORAGE_H
#define OOPS_CSVTU_SEM02_CLASSES_STORAGE_H

#include<cstring>
#include<iostream>

class Hero {
    public:
    char name[20];
    int health;
    void setName(char n[]) {
        strcpy(name, n);
    }
    void printName() {
        std::cout << name << std::endl;
    }
    void printHealth() {
        std::cout << health << std::endl;
    }
    void setLevel(int l) {
        level = l;
    }
    int getLevel() {
        return level;
    }
    private:
    int level;

};

class Enemy {
    char name[20];
    int health;
    int level;
};

#endif //OOPS_CSVTU_SEM02_CLASSES_STORAGE_H
