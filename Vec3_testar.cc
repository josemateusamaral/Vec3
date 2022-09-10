#include <iostream>
#include "Vec3.h"
using namespace std;

int main(int argc, char *argv[])
{
    Vec3 a{1, 2, 3};
    cout << "A = " << a << endl; // exibir o vetor a

    double pontoA[3] = {3,4,5};
    double pontoB[3] = {2,3,1};
    Vec3 b{pontoA,pontoB};
    cout << "B = " << b << endl; // exibir o vetor b
    
    cout << "A + B = " << a + b << endl; // exibir o vetor c = a + b

    cout << "A - B = " << a - b << endl; // exibir o vetor c = a - b

    cout << "A * B = " << a.produto_escalar(b) << endl; // exibir produto escalar de a e b

    cout << "|A| = " << a.modulo() << endl; // exibir modulo do vetor c

    Vec3 versorA = a.versor();
    cout << "versorA = " << versorA << endl; // exibir produto escalar de a e b
    
    cout << "|versorA| = " << versorA.modulo() << endl; // exibir modulo do versor de A
    


    cout << endl;

    Vec3 d{5,4,3};
    cout << "D = " << d << endl; // exibir o vetor d

    Vec3 e{1,0,1};
    cout << "E = " << e << endl; // exibir o vetor e

    cout << "D X E = " << d.produto_vetorial(e) << endl;
    cout << "E X D = " << e.produto_vetorial(d) << endl;

    Vec3 f{10,8,6};
    cout << "F = " << f << endl; // exibir o vetor f

    if(f.verificar_proporcionalidade(e)){ //verificar proporcionalidade entre f e e
        cout << "F e E são proporcionais" << endl;
    }else{
        cout << "F e E não são proporcionais" << endl;
    }

    if(f.verificar_proporcionalidade(d)){ //verificar proporcionalidade entre f e e
        cout << "F e D são proporcionais" << endl;
    }else{
        cout << "F e D não são proporcionais" << endl;
    }

    Vec3 g{1,1,4}; 
    cout << endl << "G = " << g << endl; // exibir o vetor g

    Vec3 h{-1,2,2}; 
    cout << "H = " << h << endl; // exibir o vetor h

    cout << "angulo entre G e H = " << g.angulo_entre_vetores(h) << "° graus" << endl; //exibir angulo entre os vetores g e h em graus

    cout << "(E,F,G) = " << e.produto_misto(f,g) << endl; // exibir o produto misto entre e,f e g

    Vec3 u{2,3,4};
    cout << endl << "U = " << u << endl; // exibir o vetor h

    Vec3 v(1,-1,0);
    cout << "V = " << v << endl; // exibir o vetor h

    cout << "projeção de U em V = " << u.projetar(v) << endl;

    return 0;
}
