Question:

### Write a C++ program to input basic salary of an employee and Calculate it's Gross salary according to following

<table>
<tr>
<td>Basic Salary < 25000 : </td>
<td>HRA = 20%</td>
<td>DA = 80%</td>

</tr>
<tr>
<td>Basic Salary >= 25000 : </td>
<td>HRA = 25%</td>
<td>DA = 90%</td>
</tr>

<tr>
<td>Basic Salary >= 40000 : </td>
<td>HRA = 30%</td>
<td>DA = 95%</td>
</tr>

</table>

### Solution

```cpp
#include <iostream>
using namespace std;
int main()
{

    float basic, gross, da, hra;

    cout << "Enter basic salary of an employess : ";
    cin >> basic;

    if (basic < 25000)
    {
        da = basic * 80 / 100;
        hra = basic * 20 / 100;
    }
    else if (basic >= 25000 && basic < 40000)
    {
        da = basic * 90 / 100;
        hra = basic * 25 / 100;
    }
    else if (basic < 40000)
    {
        da = basic * 95 / 100;
        hra = basic * 30 / 100;
    }
    gross = hra + da + basic;
    cout << "\n\t Basic Pay - " << basic << endl;
    cout << "\t Dearness Allowance - " << da << endl;
    cout << "\t House Rent Allowance - " << hra << endl;
    cout << "\t------------------------------\n";
    cout << "\t Gross salary - " << gross << endl;
    cout << "\t------------------------------";
}

```

### Output

<img src='./OutPut.JPG'></img>
