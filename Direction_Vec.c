#include "fai.c"
#include "GHZ_State.c"

#define left L
#define right R 
#define vector Vec

void Add(){
    char L_Vec1 = "<a| + |b>";
    char R_Vec1 = "<c| + |d>";
    char L_Vec2 = "<e| + |f>";
    char R_Vec2 = "<g| + |h>";
    return "L_Vec1 + R_Vec1 = L_Vec2 + R_Vec2"; 
}

#define Front F
#define Back B
void Minus(){
    char F_Vec3 = "<i| - |j>";
    char B_Vec3 = "<k| - |l>";
    char F_Vec4 = "<m| - |n>";
    char B_Vec4 = "<o| - |p>";
    return "F_Vec3 - B_Vec3 = F_Vec4 - B_Vec4"; 
}

#define up U
#define down D
void multiple(){
    char U_Vec5 = "<q| * |r>";
    char D_Vec5 = "<s| * |t>";
    char U_Vec6 = "<u| * |v>";
    char D_Vec6 = "<w| * |x>";
    char Extra_Vec = "<y| + |z>";
    return "U_Vec5 * D_Vec5 = U_Vec6 *  D_Vec6";
    return Extra_Vec;
}

void Switch(){
    case1:"Add + Add";
    case2:"Minus - Minus";
    case3:"multiple * mutiple";

    case4:"Add / mutiple";

    case5:"Minus +- Add";
    case6:"Add +- Minus";    
    return 1,2,3,4,5,6;
}
