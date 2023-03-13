switch (state)
{
case 0:
{
    if (inputchar[i] == ',')
    {
        i++;
        state = 0;
        error = false;
    }
    else if (inputchar[i] == '?')
    {
        i++;
        state = 0;
        error = false;
    }
    else if (inputchar[i] == '\t' || inputchar[i] == ' ')
    {
        i++;
        state = 0;
        error = false;
    }
    else if (inputchar[i] == 'a')
    {
        i++;
        state = 4;
        error = false;
    }
    else if (inputchar[i] == 'm')
    {
        i++;
        state = 7;
        error = false;
    }
    else if (inputchar[i] == 'k')
    {
        i++;
        state = 12;
        error = false;
    }
    else if (inputchar[i] == 'c')
    {
        i++;
        state = 19;
        error = false;
    }
    else if (inputchar[i] == 'b')
    {
        i++;
        state = 25;
        error = false;
    }
    else if (inputchar[i] == 'n')
    {
        i++;
        state = 29;
        error = false;
    }
    else if (inputchar[i] == 'd')
    {
        i++;
        state = 35;
        error = false;
    }
    else if (inputchar[i] == 's')
    {
        i++;
        state = 39;
        error = false;
    }
    else if (inputchar[i] == 'y')
    {
        i++;
        state = 44;
        error = false;
    }
    else if (inputchar[i] == 'h')
    {
        i++;
        state = 46;
        error = false;
    }
    else if (inputchar[i] >= '0' && inputchar[i] <= '9')
    {
        i++;
        state = 48;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
} // end of case 0
case 1:
{
    cout << inputchar[i - 1] << endl; // return seperator
    error = false;
    break;
}
case 2:
{
    cout << inputchar[i - 1] << endl; // return EOI
    error = false;
    break;
}
case 3:
{
    cout << inputchar[i - 1] << endl; // return whitespace
    error = false;
    break;
}
case 4:
{
    if (inputchar[i] == 'u')
    {
        i++;
        state = 5;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 5:
{
    if (inputchar[i] == 'r')
    {
        i++;
        state = 6;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 6:
{
    cout << inputchar[i - 1] << endl; // return aur
    error = false;
    break;
}
case 7:
{
    if (inputchar[i] == 'e')
    {
        i++;
        state = 8;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 8:
{
    if (inputchar[i] == 's')
    {
        i++;
        state = 9;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 9:
{
    if (inputchar[i] == 'e')
    {
        i++;
        state = 10;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 11:
{
    cout << inputchar[i - 1] << endl; // return mese
    error = false;
    break;
}
case 12:
{
    if (inputchar[i] == 'o')
    {
        i++;
        state = 13;
        error = false;
    }
    else if (inputchar[i] == 'y')
    {
        i++;
        state = 16;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 13:
{
    if (inputchar[i] == 'n')
    {
        i++;
        state = 14;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 14:
{
    if (inputchar[i] == 's')
    {
        i++;
        state = 15;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 15:
{
    if (inputchar[i] == 'a')
    {
        i++;
        state = 16;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 16:
{
    cout << inputchar[i - 1] << endl; // return konsa
    error = false;
    break;
}
case 16:
{
    if (inputchar[i] == 'y')
    {
        i++;
        state = 17;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 17:
{
    if (inputchar[i] == 'a')
    {
        i++;
        state = 18;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 18:
{
    cout << inputchar[i - 1] << endl; // return kya
    error = false;
    break;
}
case 19:
{
    if (inputchar[i] == 'h')
    {
        i++;
        state = 20;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 20:
{
    if (inputchar[i] == 'h')
    {
        i++;
        state = 21;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 21:
{
    if (inputchar[i] == 'o')
    {
        i++;
        state = 22;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 22:
{
    if (inputchar[i] == 't')
    {
        i++;
        state = 23;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 23:
{
    if (inputchar[i] == 'a')
    {
        i++;
        state = 24;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 24:
{
    cout << inputchar[i - 1] << endl; // return chhota
    error = false;
    break;
}
case 25:
{
    if (inputchar[i] == 'a')
    {
        i++;
        state = 26;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 26:
{
    if (inputchar[i] == 'd')
    {
        i++;
        state = 27;
        error = false;
    }
    else

    {
        error = true;
    }
    break;
}
case 27:

{
    if (inputchar[i] == 'a')

    {
        i++;
        state = 28;
        error = false;
    }
    else

    {
        error = true;
    }
    break;
}
case 28:
{
    cout << inputchar[i - 1] << endl; // return bada
    error = false;
    break;
}
case 29:
{
    if (inputchar[i] == 'u')
    {
        i++;
        state = 30 error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 30:
{
    if (inputchar[i] == 'm')
    {
        i++;
        state = 31;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 31 {
    if (inputchar[i] == 'b'){
        i++;
        state = 32 error = false;} else {
        error = true;} break;} case 32 {
    if (inputchar[i] == 'e'){
        i++;
        state = 33 error = false;} else {
        error = true;} break;} case 33 {
    if (inputchar[i] == 'r'){
        i++;
        state = 34 error = false;} else {
        error = true;} break;} case 34:
{
    cout << inputchar[i - 1] << endl; // return number
    error = false;
    break;
}
case 35:
{
    if (inputchar[i] == 'o')
    {
        i++;
        state = 36;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 36:
{
    if (inputchar[i] == 'n')
    {
        i++;
        state = 37 error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 37:
{
    if (inputchar[i] == 'o')
    {
        i++;
        state = 38 error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 38:
{
    cout << inputchar[i - 1] << endl; // return dono
    error = false;
    break;
}
case 39:
{
    if (inputchar[i] == 'a')
    {
        i++;
        state = 40;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 40:
{
    if (inputchar[i] == 'm')
    {
        i++;
        state = 41;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 41:
{
    if (inputchar[i] == 'a')
    {
        i++;
        state = 42;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 42:
{
    if (inputchar[i] == 'n')
    {
        i++;
        state = 43;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 43:
{
    cout << inputchar[i - 1] << endl; // return saman
    error = false;
    break;
}
case 44:
{
    if (inputchar[i] == 'a')
    {
        i++;
        state = 45;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 45:
{
    cout << inputchar[i - 1] << endl; // return ya
    error = false;
    break;
}
case 46:
{
    if (inputchar[i] == 'e')
    {
        i++;
        state = 47;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 47:
{
    cout << inputchar[i - 1] << endl; // return ya
    error = false;
    break;
}
case 48:
{
    if (inputchar[i] >= '0' && inputchar[i] <= '9')
    {
        i++;
        state = 48;
        error = false;
    }
    else if (inputchar[i] == ' ')
    {
        i++;
        error = false;
        state = 51;
    }
    else if (inputchar[i] == '.')
    {
        i++;
        error = false;
        state = 49;
    }
    else
    {
        error = true;
    }
    break;
}
case 49:
{
    if (inputchar[i] >= '0' && inputchar[i] <= '9')
    {
        i++;
        state = 49;
        error = false;
    }
    else if (inputchar[i] == ' ')
    {
        i++;
        state = 50;
        error = false;
    }
    else
    {
        error = true;
    }
    break;
}
case 50:
{
    cout << "FLOAT" << endl; // return float
    error = false;
    break;
}
case 51:
{
    cout << "INT" << endl; // return INT
    error = false;
    break;
}
default:
    break;
}
