#include <iostream>
#include <math.h>

using namespace std;


//project 11
/*
int main()
{
    double num1 = 1.13e3, num2 = 411e-4;
    cout << num1 << "\t" << num2 << endl;

    return 0;
}
*/

//project 12
/*
int main()
{
    int totalStudents, groups;
    cout<<"Enter total number of students: ";
    cin>>totalStudents;
    cout<<"Enter number of groups: ";
    cin>>groups;

    int firstGroup = totalStudents/groups, lastGroup = totalStudents%groups;

    cout<<"In first group: "<<firstGroup<<endl;
    cout<<"In last group: "<<lastGroup<<endl;

    return 0;
}
*/

//project 13
/*
int main()
{
    double side, formula;

    cout << "Enter the side of the hexagon: ";
    cin >> side;

    formula  = 3*sqrt(3)/2*pow(side,2);

    cout << formula << endl;

    return 0;
}
*/

//project 14
/*
int main()
{

    int num = 31;

    num++;
    num = num * 3;
    num = num -14;
    num = num/4;
    num =  num - 1;
    num = num%9;


    cout << num << endl;

    return 0;

}
*/

//project 15
/*
int main()
{
    char a, h,e,l,o,symbol;
    a = 'A';
    h = a + 7;
    e = a + 4;
    l = a + 11;
    o = a + 14;
    symbol = a - 32;

    cout << h << e << l << l << o << symbol << endl;

return 0;
}
*/

//project 16
/*
int main()
{
    float x = 17;
    float y = 1;

    double z = (x+(x++))/(3*2);

    cout << z << endl;
    return 0;
}
*/

//project 17
/*
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << (num1 == num2) << endl;

    return 0;
}
*/

//project 18
/*
int main()
{

    int a, b;
    cout << "Enter numbers: ";
    cin>>a>>b;

    cout<< ((a < 140) && (a < b)) <<endl;

    return 0;
}
*/

//project 19
/*
int main()
{

    int a,b,c;
    cout<<"Enter a,b,c values:";
    cin>>a>>b>>c;

    cout<< ((a > b) && (a > c)) <<endl;
    return 0;
}
*/

//project 20
/*
int main()
{

    int a,b,c,d,e;
    cout<<"Enter a,b,c, d, e values:";
    cin>>a>>b>>c>>d>>e;

    cout<< ((a >= 0) || (b >= 0) || (c >= 0) || (d >= 0) || (e >= 0)) <<endl;

    return 0;
}
*/

//project 21
/*
int main()
{

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << (((num1 + num2) > 30) && ((num1 * num2) > 30));
    cout << (((num1 + (num2-10)) > 30) || ((num1 * (num2- 10)) > 30));
    cout << (num1 > 30 || num2 > 30) << endl;

    return 0;
}
*/

//product 22
int main()
{

    int SardorHeight, MikeHeight;
    double ft = 30.48;

    cout << "Enter Sardor's Height in ft: ";
    cin >> SardorHeight;
    cout << "Enter Mike's Height in ft: ";
    cin >> MikeHeight;

    cout << (SardorHeight*ft < MikeHeight*ft) << endl;


    return 0;
}
