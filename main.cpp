#include <iostream>

using namespace std;

int main()
{
    //CHAPTER 2
    //This is how u print to console
    cout<<"Hi"<<endl;

    //Math:
    //adding
    cout<<10+5<<endl;

    //subtracting
    cout<<10-5<<endl;

    //muliplying
    cout<<10*5<<endl;

    //dividing
    cout<<10/5<<endl;

    //using brackets
    cout<<(5+5)/5<<endl;

    // \t = the tab button or 4 spaces
    cout<<"Hi\tyou"<<endl;

    // (\\ = \)
    cout<<"\\"<<endl;

    // (\" = ")
    cout<<"\""<<endl;

    //CHAPTER 3
    //this is a number variable
    int numbervariable = 200;
    cout<<numbervariable<<endl;

    //this is a text variable
    string textvariable = "wow";
    cout<<textvariable<<endl;

    //a variable can = another variable
    int numb;
    numb = numbervariable;
    cout<<numb<<endl;

    //you can add, times, subtract, and divide variables by numbers, numbers by variables, and variables by variables
    int total = 5 + numb;
    cout<<total<<endl;

    //to add 1 = ++ substract 1 = --
    total--;
    cout<<total<<endl;
    total++;
    cout<<total<<endl;

    //to add, times, subtract, or divide a variable and store the answer in the variable put the sign in fron of =
    total -= 195;
    cout<<total<<endl;

    //you can get the remainder of a divistion with %
    cout<<5/2<<endl;
    cout<<5%2<<endl;

    //a character variable can only hold 1 character...
    char charactervariable = 'p';
    cout<<charactervariable<<endl;

    //to access a character in a string (0 is the first character)
    string thatone = "abcdef";
    cout<<thatone<<endl;
    cout<<thatone[1]<<endl;

    //you can replace a character in a string
    thatone[3] = 'm';
    cout<<thatone<<endl;

    //you can add strings and string variables
    cout<<thatone+"ghijklmnopqrstuvwxyz";

    //Equal or not
    string equals;
    int one,two;
    one = 27;
    two = 26;
    equals = (one == two) ? "equal" : "not equal";
    cout<<equals<<endl;

    //a Boolean variqble is a true/1 or false/0
    bool booleanvariable = true;
    cout<<booleanvariable<<endl;

    //cin is user input, it can be a string or int
    string name;
    cout<<"Type your name: ";
    cin >> name;
    cout<<"Your name is "<<name<<endl;

    //CHAPTER 4
    // (== = equal to) (< = Less than) (> = Greater than) ( != = not equal to)
    //If whatever in the brackets is true then it does whats in the {}
    int x = 10;
    if (x == 10)
    {
        cout<<"x is 10"<<endl;
    }

    //if if is not true it moves to (else if) if thats not true then to (else)
    if (x == 8)
    {
        x = 3;
    }
    else if (x == 9)
    {
        x = 2;
    }
    else
    {
        x = 1;
    }

    //loops for (for (x=0; x<10; x++) { }) while (while (x < 10) { }) do-while (do { } while (x < 10))
    //you can put loops in loops
    x = 0;
    int i;
    for (i = 1; i <= 100; i++)
    {
        x += i;
    }
    cout << x << endl;

    return 0;
}
