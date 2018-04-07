//
// Created by armin on 12/5/2017.
//

#ifndef PROJECT_8_INTERPRETER_A_CLASSES_H
#define PROJECT_8_INTERPRETER_A_CLASSES_H

#include "String.h"
class Expression{
    int length;
    int Space;

public:
    String* variables{};

    Expression(){
        length = 0;
        Space = 10;
        variables = new String[Space];
    }

    ~Expression(){
        delete[]variables;
    }

    void Isfull(){
        if (length == Space){
            Space = Space*2;
            auto * New_Space = new String[Space];
            for(int i =0; i< length; i++){
                New_Space[i] = variables[i];
            }
            delete[]variables;
            variables = New_Space;
        }
    }

    void add(const String &New_variable){
        variables[length] = New_variable;
        length++;
    }
};

struct Convert {
    Expression *word;
};
#endif //PROJECT_8_INTERPRETER_A_CLASSES_H
