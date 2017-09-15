#include <iostream>
#include "boost\multiprecision\cpp_int.hpp"

using namespace std;
using namespace boost::multiprecision;

typedef number<cpp_int_backend<2048, 2048, signed_magnitude, unchecked, void> >  int2048_t;

const string nums[]    = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
const string tens[]    = { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
const string illions[] = { "",
                           " thousand",
                           " million",
                           " billion",
                           " trillion",
                           " quadrillion",
                           " quintillion",
                           " sextillion",
                           " septillion",
                           " octillion",
                           " nonillion",
                           " decillion",
                           " undecillion",
                           " duodecillion",
                           " tredecillion",
                           " quattuordecillion",
                           " quindecillion",
                           " sexdecillion",
                           " septendecillion",
                           " octadecillion",
                           " novemdecillion",
                           " vigintillion",
                           " unvigintillion",
                           " duovigintillion",
                           " trevigintillion",
                           " quattuorvigintillion",
                           " quinvigintillion",
                           " sexvigintillion",
                           " septenvigintillion",
                           " octavigintillion",
                           " novemvigintillion",
                           " trigintillion",
                           " untrigintillion",
                           " duotrigintillion",
                           " tretrigintillion",
                           " quattuortrigintillion",
                           " quintrigintillion",
                           " sextrigintillion",
                           " septentrigintillion",
                           " octatrigintillion",
                           " novemtrigintillion",
                           " quadragintillion",
                           " unquadragintillion",
                           " duoquadragintillion",
                           " trequadragintillion",
                           " quattuorquadragintillion",
                           " quinquadragintillion",
                           " sexquadragintillion",
                           " septenquadragintillion",
                           " octaquadragintillion",
                           " novemquadragintillion",
                           " quinquagintillion",
                           " unquinquagintillion",
                           " duoquinquagintillion",
                           " trequinquagintillion",
                           " quattuorquinquagintillion",
                           " quinquinquagintillion",
                           " sexquinquagintillion",
                           " septenquinquagintillion",
                           " octaquinquagintillion",
                           " novemquinquagintillion",
                           " sexagintillion",
                           " unsexagintillion",
                           " duosexagintillion",
                           " tresexagintillion",
                           " quattuorsexagintillion",
                           " quinsexagintillion",
                           " sexsexagintillion",
                           " septensexagintillion",
                           " octasexagintillion",
                           " novemsexagintillion",
                           " septuagintillion",
                           " unseptuagintillion",
                           " duoseptuagintillion",
                           " treseptuagintillion",
                           " quattuorseptuagintillion",
                           " quinseptuagintillion",
                           " sexseptuagintillion",
                           " septenseptuagintillion",
                           " octaseptuagintillion",
                           " novemseptuagintillion",
                           " octagintillion",
                           " unoctogintillion",
                           " duooctogintillion",
                           " treoctogintillion",
                           " quattuoroctogintillion",
                           " quinoctogintillion",
                           " sexoctogintillion",
                           " septenoctogintillion",
                           " octaoctogintillion",
                           " novemoctogintillion",
                           " nonagintillion",
                           " unnonagintillion",
                           " duononagintillion",
                           " trenonagintillion",
                           " quattuornonagintillion",
                           " quinnonagintillion",
                           " sexnonagintillion",
                           " septennonagintillion",
                           " octanonagintillion",
                           " novemnonagintillion",
                           " centillion",
                           " cenuntillion",
                           " cendotillion",
                           " centretillion",
                           " cenquattuortillion",
                           " cenquintillion",
                           " censextillion",
                           " censeptentillion",
                           " cenoctotillion",
                           " cennovemtillion",
                           " cendecillion",
                           " cenundecillion",
                           " cendodecillion",
                           " centredecillion",
                           " cenquattuordecillion",
                           " cenquindecillion",
                           " censexdecillion",
                           " censeptendecillion",
                           " cenoctodecillion",
                           " cennovemdecillion",
                           " cenvigintillion",
                           " cenunvigintillion",
                           " cendovigintillion",
                           " centrevigintillion",
                           " cenquattuorvigintillion",
                           " cenquinvigintillion",
                           " censexvigintillion",
                           " censeptenvigintillion",
                           " cenoctovigintillion",
                           " cennovemvigintillion",
                           " centrigintillion",
                           " cenuntrigintillion",
                           " cendotrigintillion",
                           " centretrigintillion",
                           " cenquattuortrigintillion",
                           " cenquintrigintillion",
                           " censextrigintillion",
                           " censeptentrigintillion",
                           " cenoctotrigintillion",
                           " cennovemtrigintillion",
                           " cenquadragintillion",
                           " cenunquadragintillion",
                           " cendoquadragintillion",
                           " centrequadragintillion",
                           " cenquattuorquadragintillion",
                           " cenquinquadragintillion",
                           " censexquadragintillion",
                           " censeptenquadragintillion",
                           " cenoctoquadragintillion",
                           " cennovemquadragintillion",
                           " cenquinquagintillion",
                           " cenunquinquagintillion",
                           " cendoquinquagintillion",
                           " centrequinquagintillion",
                           " cenquattuorquinquagintillion",
                           " cenquinquinquagintillion",
                           " censexquinquagintillion",
                           " censeptenquinquagintillion",
                           " cenoctoquinquagintillion",
                           " cennovemquinquagintillion",
                           " censexagintillion",
                           " cenunsexagintillion",
                           " cendosexagintillion",
                           " centresexagintillion",
                           " cenquattuorsexagintillion",
                           " cenquinsexagintillion",
                           " censexsexagintillion",
                           " censeptensexagintillion",
                           " cenoctosexagintillion",
                           " cennovemsexagintillion",
                           " censeptuagintillion",
                           " cenunseptuagintillion",
                           " cendoseptuagintillion",
                           " centreseptuagintillion",
                           " cenquattuorseptuagintillion",
                           " cenquinseptuagintillion",
                           " censexseptuagintillion",
                           " censeptenseptuagintillion",
                           " cenoctoseptuagintillion",
                           " cennovemseptuagintillion",
                           " cenoctogintillion",
                           " cenunoctogintillion",
                           " cendooctogintillion",
                           " centreoctogintillion",
                           " cenquattuoroctogintillion",
                           " cenquinoctogintillion",
                           " censexoctogintillion",
                           " censeptenoctogintillion",
                           " cenoctooctogintillion",
                           " cennovemoctogintillion",
                           " cennonagintillion",
                           " cenunnonagintillion",
                           " cendononagintillion",
                           " centrenonagintillion",
                           " cenquattuornonagintillion",
                           " cenquinnonagintillion",
                           " censexnonagintillion",
                           " censeptennonagintillion",
                           " cenoctononagintillion",
                           " cennovemnonagintillion",
                           " duocentillion",
                           " duocenuntillion",
                           " duocendotillion",
                           " duocentretillion",
                           " duocenquattuortillion",
                           " duocenquintillion",
};

const int illionsSize = sizeof(illions) / sizeof(string);

// takes a number in the range 000-999 and returns the name string
string ThreeDigitsToString(const int input)
{
    string numstr = "";
    if (input >= 100)
    {
        numstr += nums[input / 100] + " hundred";
        if (input % 100 != 0)
            numstr += " ";
    }
    if (input % 100 >= 20)
    {
        numstr += tens[(input % 100) / 10 - 2];
        if (input % 10 != 0)
            numstr += "-" + nums[input % 10];
    }
    else
    {
        if (input % 100 == 0)
        {
            if (input == 0)
                numstr = nums[0];
        }
        else
            numstr += nums[input % 100];
    }
    return numstr;
}

// takes a number in the range -(2^2048 - 1) to (2^2048 - 1) and returns the name string
string NumberToString(const int2048_t input)
{
    string numstr = (input < 0 ? "negative " : "");

    if (input == 0)
        numstr = ThreeDigitsToString(0);
    else
    {
        int2048_t copy = abs(input);
        vector<int> threeDigitsVector;
        while (copy != 0)
        {
            int threeDigits = (int)(copy % 1000);
            copy /= 1000;
            threeDigitsVector.push_back(threeDigits);
        }
        int latinPower = threeDigitsVector.size() - 1;
        for (int i = 0; i <= latinPower; i++)
        {
            if (threeDigitsVector[latinPower - i] != 0)
                numstr += ThreeDigitsToString(threeDigitsVector[latinPower - i]) + illions[latinPower - i];
            if (i < latinPower && threeDigitsVector[latinPower - i - 1] != 0)
                numstr += " ";
        }
    }
    return numstr;
}

int main()
{
    int2048_t input;
    while (true)
    {
        input = 0;
        cout << "Input an integer.\n";
        cin >> input;
        cout << NumberToString(input) << "\n\n\n";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    return 0;
}
