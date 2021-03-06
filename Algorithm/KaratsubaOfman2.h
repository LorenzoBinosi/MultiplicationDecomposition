#ifndef KARATSUBAOFMAN2_H
#define KARATSUBAOFMAN2_H

#include "Algorithm.h"
#include "../ArithmeticUnit/MultiplicationUnit/Multiplier/Multiplier.h"

using namespace std;

/*****************************************************************************/
/* Class that provides multiplication trees following the Karatsuba-Ofman    */
/* idea. Multiplication trees follow the two-part splitting.                 */
/*****************************************************************************/

class KaratsubaOfman2 : public Algorithm
{
    private:
        vector<Multiplier> multipliers;
        bool LUT_solution;
        bool sign_operations_included;
        vector<MultiplicationTree> dispose(int, int, Multiplier);
        MultiplicationTree notRecursiveDisposition(int, int, Multiplier);
        vector<MultiplicationTree> recursiveDisposition(int, int, Multiplier);

    public: 
        KaratsubaOfman2(vector<Multiplier>);
        KaratsubaOfman2(vector<Multiplier>, bool);
        bool isSignOperationsIncluded();
        void setSignOperationsIncluded(bool);
        vector<MultiplicationTree> dispositions(int, int);
        virtual ~KaratsubaOfman2() = default;
};

#endif
