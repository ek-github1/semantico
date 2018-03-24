#ifndef DIC_H
#define DIC_H

#include <iostream>
#include <fstream>

#define MEMORY 250
#define DICT 2
using namespace std;


class dic
{
    public:
        string dicS[DICT] = {"int", "float"};
        string defined[MEMORY];
        
        bool declaredVar(string);
        bool isINT(string);
        
    protected:

    private:
};

bool dic::declaredVar(string var){
    bool returnVar = false;
    int pos = var.find(" ");
    string pos1 = var.substr(0, pos);
    string pos2 = var.substr(pos, (var.find(";")-1));
    for(int i = 0; i<=DICT; i++){
        if(pos1 == dicS[i]){
            returnVar = true;
            for(int j = 0; j<=MEMORY; j++){
                if(defined[j] == ""){
                    defined[j] = var;
                    break;
                }
            }
        }

    }
    return returnVar;
}

bool dic::isINT(string var){
    ifstream codigo("code.txt");
    bool returnVar = false;
    
    return returnVar;
}
#endif // DIC_H
