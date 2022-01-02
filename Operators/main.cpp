#include<iostream>
#include<string>


void relationalOperators()
{
    //instead of printing 0 and 1, create an array where 
    //0 = False, 1 = True
    std::string TorF[] = { "False", "True" };

    int a = 100;
    int b = 33;
    int c = 33;

    //Print out the string values of each relational operation
    std::cout << "a < b is " << TorF[a < b];
    std::cout << "\na > b is " << TorF[a > b];
    std::cout << "\na != b is " << TorF[a != b];
    std::cout << "\nc >= b is " << TorF[c >= b];
    std::cout << "\nc <= b is " << TorF[c <= b];
}

void logicOperators()
{
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;

    std::string TorF[] = { "False", "True" };

    //The && operator
    std::cout << "A == C is " << TorF[A == C];
    std::cout << "\n(B == D) is " << TorF[B == D];
    std::cout << "\n(B > D) is " << TorF[B > D];
    //A true && false = false
    std::cout << "\n\n(A ==C) && (B == D) is " << TorF[(A == C) && (B == D)];
    //A true and true = true
    std::cout << "\n(A ==C) && (B > D) is " << TorF[(A == C) && (B > D)];

    //The || operator
    //A true || false = true
    std::cout << "\n\n(A ==C) || (B == D) is " << TorF[(A == C) || (B == D)];
    //A true || true = true
    std::cout << "\n(A ==C) || (B > D) is " << TorF[(A == C) || (B > D)];

    //The 'Not' operator
    std::cout << "\n\nA < B is " << TorF[A < B];
    std::cout << "\n!(A < B) is " << TorF[!(A < B)];

    std::cout << "\n\nA == C is " << TorF[A == C];
    std::cout << "\n!(A == C) is " << TorF[!(A == C)];
}

void quiz()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q

    //Use this output format
    std::cout << "A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";

    int A = 0;
    int B = 0;
    int C = 0;
    
    int Q = (A && B && C) || (A && (!B || !C));
    std::cout << A<<"\t"<<B<<"\t"<<C<<"\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A && (!B || !C))<<"\t\t"<<Q<<"\n";

    A = 1;
    B = 0;
    C = 0;

    Q = (A && B && C) || (A && (!B || !C));
    std::cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 0;
    B = 1;
    C = 0;

    Q = (A && B && C) || (A && (!B || !C));
    std::cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 0;
    B = 0;
    C = 1;

    Q = (A && B && C) || (A && (!B || !C));
    std::cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 1;
    B = 1;
    C = 0;

    Q = (A && B && C) || (A && (!B || !C));
    std::cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 1;
    B = 0;
    C = 1;

    Q = (A && B && C) || (A && (!B || !C));
    std::cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 0;
    B = 1;
    C = 1;

    Q = (A && B && C) || (A && (!B || !C));
    std::cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 1;
    B = 1;
    C = 1;

    Q = (A && B && C) || (A && (!B || !C));
    std::cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

}


int main()
{
    //relationalOperators();
    //logicOperators();
    quiz();
    return 0;
}