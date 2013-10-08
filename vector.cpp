vector
======
#include <iostream>
#include   <vector>


int main(int argc, const char * argv[])
{
    using namespace std;
    
    std::vector<int> vector1(10);
    vector1[0]=4;
    vector1[1]=8;
    vector1[2]=7;
    vector1[3]=12;
    vector1[4]=0;
    vector1[5]=0;
    vector1[6]=0;
    vector1[7]=0;
    vector1[8]=0;
    vector1[9]=0;
    
    std::vector<int> vector2(10);
    vector2[0]=3;
    vector2[1]=6;
    vector2[2]=0;
    vector2[3]=0;
    vector2[4]=0;
    vector2[5]=0;
    vector2[6]=0;
    vector2[7]=0;
    vector2[8]=0;
    vector2[9]=0;
    
    int resultat = 0;
    for ( size_t i = 0, size = vector1.size(); i < size; ++i )
    {
        int el1 = vector1[i];
        for ( size_t j = 0, size = vector2.size(); j < size; ++j )
        {
            int el2 = vector2[j];
            resultat +=  el1*el2;
        }
    }
    printf("%d",resultat );
    
    
    
    return 0;
}

