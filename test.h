#include "OP.h"
#include "JC_Parameter.h"

void test();



void test()
{
        std::ifstream infile("./data/QNosave.txt");

        if(!infile)
        {
                std::cerr<<"the file QNosave.txt doesn't open!"<<std::endl;
                return;
        }


        JC_Parameter para(infile);
        infile.close();

        OP a(para, Eye);


        a.show();


}