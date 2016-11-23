#ifndef OP_H
#define OP_H

#include "Parameter.h"
#include <utility>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <vector>
#include <Eigen/Eigenvalues>
#include <Eigen/Dense>



struct classcom
{
        size_t operator()(const std::pair<int, int>& l) const
        {
                return (size_t) ((l.first<<20) ^l.second);
        }
};


enum OP_modes{Eye, Creation, Annihilation};
enum Spin{SpinEye, SpinCreation, SpinAnnihilation, SpinZ};//1/2 spin.

using namespace Eigen;

class OP
{
private:
        std::unordered_map<int, int> _QDim;
        std::unordered_map<int, int> _RLQ;
        std::map<int, MatrixXd> _QMat;

        
public:
        static int Max;//used for the maximum quantum number.
        OP();
        ~OP();

        std::unordered_map<int, int> QDim()const{return _QDim;};
        std::unordered_map<int, int> RLQ()const{return _RLQ;};
        std::map<int, MatrixXd> QMat()const{return _QMat;};

        OP(const Spin& type);

        OP(const Parameter& para, const OP_modes& type);



        void show()const;
};



#endif

OP operator*(const double& x, OP& a);




