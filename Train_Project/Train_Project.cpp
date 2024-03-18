

#include <iostream>
#include <string>
#include <Windows.h>
#include "train.h"

using namespace std;



int main() 
{
   
    int arr_distance[] = { 100,200,300,400,500,600 };
    int arr_weight[] = { 30,60,90,120,150,170,190,210,230,250,260,270,280,290,300 };
    int distance = 0;
    int x=0;
    float y = 0;
    double weight;
    string station1, station2, type, train;
    string A, B, C, D, E, F, G, H, I, J, K, L, M, N, P, Q, R, S, T, a, b, c, d, e, f, g, h, i, j, k, l, m, n, p, q, r, s, t;
    system("color 03");
    cout << "\t\t\t\t\t\tDistance between stations";
    cout << "\n\n\n\t\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\tK\tL\tM";
    cout << "\n\n\tA\t-\t13km\t21km\t398km\t39km\t386km\t138km\t117km\t270km\t129km\t31km\t161km\t69km";
    cout << "\n\n\tB\t13km\t-\t10km\t406km\t48km\t393km\t149km\t134km\t278km\t114km\t40km\t169km\t34km";
    cout << "\n\n\tC\t21km\t10km\t-\t385km\t56km\t406km\t173km\t132km\t277km\t98km\t50km\t182km\t24km";
    cout << "\n\n\tD\t398km\t406km\t385km\t-\t330km\t21km\t269km\t322km\t332km\t525km\t336km\t253km\t407km";
    cout << "\n\n\tE\t39km\t48km\t56km\t330km\t-\t352km\t105km\t114km\t248km\t169km\t6km\t138km\t84km";
    cout << "\n\n\tF\t386km\t393km\t406km\t21km\t352km\t-\t260km\t303km\t222km\t493km\t357km\t232km\t424km";
    cout << "\n\n\tG\t138km\t149km\t173km\t269km\t105km\t260km\t-\t130km\t180km\t260km\t111km\t139km\t189km";
    cout << "\n\n\tH\t117km\t134km\t132km\t322km\t114km\t303km\t130km\t-\t182km\t224km\t105km\t69km\t158km";
    cout << "\n\n\tI\t270km\t278km\t277km\t332km\t248km\t222km\t180km\t182km\t-\t367km\t241km\t111km\t301km";
    cout << "\n\n\tJ\t129km\t114km\t98km\t525km\t169km\t493km\t260km\t224km\t367km\t-\t154km\t257km\t82km";
    cout << "\n\n\tK\t31km\t40km\t50km\t336km\t6km\t357km\t111km\t105km\t241km\t154km\t-\t129km\t84km";
    cout << "\n\n\tL\t161km\t169km\t182km\t253km\t138km\t232km\t139km\t69km\t111km\t257km\t129km\t-\t188km";
    cout << "\n\n\tM\t69km\t34km\t24km\t407km\t84km\t424km\t189km\t158km\t301km\t82km\t84km\t188km\t-";
    string opt = "y";
    
    float sum = 0;
    do {
        cout << "\n\n\n\t Please Select your Stations From The Table" << endl;
        cout << "\n\n\t\tStation\t\t\tOption";
        cout << "\n\n\t\tColombo\t\t\tA";
        cout << "\n\t\tMount-Lavinia\t\tB";
        cout << "\n\t\tMoratuwa\t\tC";
        cout << "\n\t\tJaffna\t\t\tD";
        cout << "\n\t\tNegombo\t\t\tE";
        cout << "\n\t\tChavakachcheri\t\tF";
        cout << "\n\t\tPuttalam\t\tG";
        cout << "\n\t\tKandy\t\t\tH";
        cout << "\n\t\tTrincomalee\t\tI";
        cout << "\n\t\tGalle\t\t\tJ";
        cout << "\n\t\tKatunayake\t\tK";
        cout << "\n\t\tDambulla\t\tL";
        cout << "\n\t\tKalutura\t\tM";

        cout << "\n\n\tFIND YOUR DISTANCE AND PARCEL TRANSPORT COST";
        cout << "\n\nFROM : ";
        string arr[] = { "A","a","B","b","C","c","D","d","E","e","F","f","G","g","H","h","i","I","J","j","k","K","L","l","M","m" };


        int size = 26;
        station1 = " ";
        station2 = " ";

        while (!(find(arr, arr + size, station1) != arr + size))
        {

            cin >> station1;
            if (!(find(arr, arr + size, station1) != arr + size))cout << "Please enter an valid input!!" << endl;
        }
        cout << "\n\nTO : ";
        while (!(find(arr, arr + size, station2) != arr + size))
        {

            cin >> station2;
            if (!(find(arr, arr + size, station2) != arr + size))cout << "Please enter an valid input!!" << endl;
        }










        if (((station1 == "A") || (station1 == "a")) && ((station2 == "B") || (station2 == "b")) || ((station1 == "B") || (station1 == "b")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 13;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "C") || (station2 == "c")) || ((station1 == "C") || (station1 == "c")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 21;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "D") || (station2 == "d")) || ((station1 == "D") || (station1 == "d")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 398;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "C") || (station2 == "c")) || ((station1 == "C") || (station1 == "c")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 10;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "E") || (station2 == "e")) || ((station1 == "E") || (station1 == "e")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 39;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "D") || (station2 == "d")) || ((station1 == "D") || (station1 == "d")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 406;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "F") || (station2 == "f")) || ((station1 == "F") || (station1 == "f")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 386;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "E") || (station2 == "e")) || ((station1 == "E") || (station1 == "e")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 48;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "D") || (station2 == "d")) || ((station1 == "D") || (station1 == "d")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 385;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "G") || (station2 == "g")) || ((station1 == "G") || (station1 == "g")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 138;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "F") || (station2 == "f")) || ((station1 == "F") || (station1 == "f")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 393;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "E") || (station2 == "e")) || ((station1 == "E") || (station1 == "e")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 56;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "H") || (station2 == "h")) || ((station1 == "H") || (station1 == "h")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 117;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "I") || (station2 == "i")) || ((station1 == "I") || (station1 == "i")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 270;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 129;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 31;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 161;
        }
        else if (((station1 == "A") || (station1 == "a")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "A") || (station2 == "a")))
        {
            distance = 69;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "G") || (station2 == "g")) || ((station1 == "G") || (station1 == "g")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 149;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "H") || (station2 == "h")) || ((station1 == "H") || (station1 == "h")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 134;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "I") || (station2 == "i")) || ((station1 == "I") || (station1 == "i")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 278;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 114;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 40;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 169;
        }
        else if (((station1 == "B") || (station1 == "b")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "B") || (station2 == "b")))
        {
            distance = 34;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "F") || (station2 == "f")) || ((station1 == "F") || (station1 == "f")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 406;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "G") || (station2 == "g")) || ((station1 == "G") || (station1 == "g")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 173;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "H") || (station2 == "h")) || ((station1 == "H") || (station1 == "h")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 132;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "I") || (station2 == "i")) || ((station1 == "I") || (station1 == "i")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 277;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 98;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 50;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 182;
        }
        else if (((station1 == "C") || (station1 == "c")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "C") || (station2 == "c")))
        {
            distance = 24;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "E") || (station2 == "e")) || ((station1 == "E") || (station1 == "e")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 330;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "F") || (station2 == "f")) || ((station1 == "F") || (station1 == "f")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 21;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "G") || (station2 == "g")) || ((station1 == "G") || (station1 == "g")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 269;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "H") || (station2 == "h")) || ((station1 == "H") || (station1 == "h")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 322;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "I") || (station2 == "i")) || ((station1 == "I") || (station1 == "i")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 332;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 525;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 336;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 253;
        }
        else if (((station1 == "D") || (station1 == "d")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "D") || (station2 == "d")))
        {
            distance = 407;
        }
        else if (((station1 == "E") || (station1 == "e")) && ((station2 == "F") || (station2 == "f")) || ((station1 == "F") || (station1 == "f")) && ((station2 == "E") || (station2 == "e")))
        {
            distance = 352;
        }
        else if (((station1 == "E") || (station1 == "e")) && ((station2 == "G") || (station2 == "g")) || ((station1 == "G") || (station1 == "g")) && ((station2 == "E") || (station2 == "e")))
        {
            distance = 105;
        }
        else if (((station1 == "E") || (station1 == "e")) && ((station2 == "H") || (station2 == "h")) || ((station1 == "H") || (station1 == "h")) && ((station2 == "E") || (station2 == "e")))
        {
            distance = 114;
        }
        else if (((station1 == "E") || (station1 == "e")) && ((station2 == "I") || (station2 == "i")) || ((station1 == "I") || (station1 == "i")) && ((station2 == "E") || (station2 == "e")))
        {
            distance = 248;
        }
        else if (((station1 == "E") || (station1 == "e")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "E") || (station2 == "e")))
        {
            distance = 169;
        }
        else if (((station1 == "E") || (station1 == "e")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "E") || (station2 == "e")))
        {
            distance = 6;
        }
        else if (((station1 == "E") || (station1 == "e")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "E") || (station2 == "e")))
        {
            distance = 138;
        }
        else if (((station1 == "E") || (station1 == "e")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "E") || (station2 == "e")))
        {
            distance = 84;
        }
        else if (((station1 == "F") || (station1 == "f")) && ((station2 == "G") || (station2 == "g")) || ((station1 == "G") || (station1 == "g")) && ((station2 == "F") || (station2 == "f")))
        {
            distance = 260;
        }
        else if (((station1 == "F") || (station1 == "f")) && ((station2 == "H") || (station2 == "h")) || ((station1 == "H") || (station1 == "h")) && ((station2 == "F") || (station2 == "f")))
        {
            distance = 303;
        }
        else if (((station1 == "F") || (station1 == "f")) && ((station2 == "I") || (station2 == "i")) || ((station1 == "I") || (station1 == "i")) && ((station2 == "F") || (station2 == "f")))
        {
            distance = 222;
        }
        else if (((station1 == "F") || (station1 == "f")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "F") || (station2 == "f")))
        {
            distance = 493;
        }
        else if (((station1 == "F") || (station1 == "f")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "F") || (station2 == "f")))
        {
            distance = 357;
        }
        else if (((station1 == "F") || (station1 == "f")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "F") || (station2 == "f")))
        {
            distance = 232;
        }
        else if (((station1 == "F") || (station1 == "f")) && ((station2 == "M") || (station2 == "g")) || ((station1 == "G") || (station1 == "g")) && ((station2 == "F") || (station2 == "f")))
        {
            distance = 424;
        }
        else if (((station1 == "G") || (station1 == "g")) && ((station2 == "H") || (station2 == "h")) || ((station1 == "H") || (station1 == "h")) && ((station2 == "G") || (station2 == "g")))
        {
            distance = 130;
        }
        else if (((station1 == "G") || (station1 == "g")) && ((station2 == "I") || (station2 == "i")) || ((station1 == "I") || (station1 == "i")) && ((station2 == "G") || (station2 == "g")))
        {
            distance = 180;
        }
        else if (((station1 == "G") || (station1 == "g")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "G") || (station2 == "g")))
        {
            distance = 260;
        }
        else if (((station1 == "G") || (station1 == "g")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "G") || (station2 == "g")))
        {
            distance = 111;
        }
        else if (((station1 == "G") || (station1 == "g")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "G") || (station2 == "g")))
        {
            distance = 139;
        }
        else if (((station1 == "G") || (station1 == "g")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "G") || (station2 == "g")))
        {
            distance = 189;
        }
        else if (((station1 == "H") || (station1 == "h")) && ((station2 == "I") || (station2 == "i")) || ((station1 == "I") || (station1 == "i")) && ((station2 == "H") || (station2 == "h")))
        {
            distance = 182;
        }
        else if (((station1 == "H") || (station1 == "h")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "H") || (station2 == "h")))
        {
            distance = 224;
        }
        else if (((station1 == "H") || (station1 == "h")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "H") || (station2 == "h")))
        {
            distance = 105;
        }
        else if (((station1 == "H") || (station1 == "h")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "H") || (station2 == "h")))
        {
            distance = 69;
        }
        else if (((station1 == "H") || (station1 == "h")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "H") || (station2 == "h")))
        {
            distance = 158;
        }
        else if (((station1 == "I") || (station1 == "i")) && ((station2 == "J") || (station2 == "j")) || ((station1 == "J") || (station1 == "j")) && ((station2 == "I") || (station2 == "i")))
        {
            distance = 367;
        }
        else if (((station1 == "I") || (station1 == "i")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "I") || (station2 == "i")))
        {
            distance = 241;
        }
        else if (((station1 == "I") || (station1 == "i")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "I") || (station2 == "i")))
        {
            distance = 111;
        }
        else if (((station1 == "I") || (station1 == "i")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "I") || (station2 == "i")))
        {
            distance = 301;
        }
        else if (((station1 == "J") || (station1 == "j")) && ((station2 == "K") || (station2 == "k")) || ((station1 == "K") || (station1 == "k")) && ((station2 == "J") || (station2 == "j")))
        {
            distance = 154;
        }
        else if (((station1 == "J") || (station1 == "j")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "J") || (station2 == "j")))
        {
            distance = 257;
        }
        else if (((station1 == "J") || (station1 == "j")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "J") || (station2 == "j")))
        {
            distance = 82;
        }
        else if (((station1 == "K") || (station1 == "k")) && ((station2 == "L") || (station2 == "l")) || ((station1 == "L") || (station1 == "l")) && ((station2 == "K") || (station2 == "k")))
        {
            distance = 129;
        }
        else if (((station1 == "K") || (station1 == "k")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "K") || (station2 == "k")))
        {
            distance = 84;
        }
        else if (((station1 == "L") || (station1 == "l")) && ((station2 == "M") || (station2 == "m")) || ((station1 == "M") || (station1 == "m")) && ((station2 == "L") || (station2 == "l")))
        {
            distance = 188;
        }
        else
        {
            distance = 0;
        }

        cout << "\n\nEnter the weight in kg: ";
        while (1) {
            if (cin >> weight) {
                break;
            }
            else {
                cout << "Invalid input!!! please enter a numerical value." << endl;
                cin.clear();
                while (cin.get() != '\n');
            }
        }

        cout << "\n\n\n\t Please Select the Train type From The Table" << endl;
        cout << "\n\n\t\tTrains\t\t\tOption";
        cout << "\n\n\t\tNormal\t\t\tN";
        cout << "\n\t\tExpress\t\t\tT";

        cout << "\n\nEnter the Train type: ";
        string arr2[] = { "N","n","T","t" };

        int size2 = 4;

        train = " ";

        while (!(find(arr2, arr2 + size2, train) != arr2 + size2)) {

            cin >> train;
            if (!(find(arr2, arr2 + size2, train) != arr2 + size2))cout << "Please enter an valid input!!" << endl;
        }



        if ((train == "N") || (train == "n"))
        {
            x = 20;
        }
        else if ((train == "T") || (train == "t"))
        {
            x = 10;
        }
        else
        {
            cout << "\nInvalid Input. Please Try Again";
        }

        cout << "\n\n\n\t Please Select your Parcel type From The Table" << endl;
        cout << "\n\n\t\tItems\t\t\t\tOption";
        cout << "\n\n\t\tFurniture\t\t\tO";
        cout << "\n\t\tLetters\t\t\t\tP";
        cout << "\n\t\tElectronic Items\t\tQ";
        cout << "\n\t\tMachinery\t\t\tR";
        cout << "\n\t\tOther\t\t\t\tS";

        cout << "\n\nEnter the type: ";

        string arr3[] = { "O","o","P","p","Q","q","R","r","S","s" };

        int size3 = 10;

        type = " ";

        while (!(find(arr3, arr3 + size3, type) != arr3 + size3)) {

            cin >> type;
            if (!(find(arr3, arr3 + size3, type) != arr3 + size3))cout << "Please enter an valid input!!" << endl;
        }




        if ((type == "O") || (type == "o") || (type == "P") || (type == "p") || (type == "S") || (type == "s"))
        {
            y = 1.1;
        }
        else if ((type == "Q") || (type == "q") || (type == "R") || (type == "r"))
        {
            y = 1.2;
        }
        else
        {
            cout << "\nInvalid Input. Please Try Again";
        }

        int new_distance = DistanceRange(distance, 6, arr_distance);
        int new_weight = WeightRange(weight, 10, arr_weight);

        float z = Calculate_Charge(new_distance, new_weight, y, x);
        cout << "\n\nDelivery Charge : " << z << "/=" << endl;

        cout << "\n\nDo you need to proceed again press 'Y' otherwise press 'N' " << endl;
        cin >> opt;
        sum += z;

    }while (opt == "y" || opt == "Y");
    cout << "\n\nYour total cost is " << sum << endl;
}

