#include "Library.cpp"

int main()
{
    Library book;
    char author;
    string books;
    char answer;
    string removal;

    //displays a menu of all books
    std::cout << "Here is a list of all of the books we have: " << endl << endl;
    std::cout << "Author: R.L. Steins " << endl << "Night of the Living Dummy" << endl;
    std::cout << "Monster Blood" << endl << "The New Girl" << endl << "The Haunted Mask" << endl << endl;
    std::cout << "Author: Dr. Suess" << endl << "The Cat and the Hat" << endl << "Green Eggs and Ham" << endl;
    std::cout << "How the Grinch Stole Christmas" << endl << "The Lorax" << endl << endl;
    std::cout << "Author: Jeff Kinney" << endl << "Diary of a Wimpy Kid Dog Days" << endl;
    std::cout << "Diary of a Wimpy Kid Cabin Fever" << endl << "Diary of a Wimpy Kid Rodrick Rules" << endl;
    std::cout << "Diary of a Wimpy Kid The Ugly Truth" << endl << endl;

    //asks which author, then which book and adds it to the list
    std::cout << "Which author would you like to read from? " << endl;
    std::cout << "A. R.L. Steins" << endl << "B. Dr. Suess" << endl << "C. Jeff Kinney" << endl;
    std::cin >> author;

    if (author == 'A')
    {
        std::cout << "Which book? " << endl;
        std::cin >> books;

        if (books == "Night of the Living Dummy")
        {
            book.append("Night of the Living Dummy");
        }
        if (books == "Monster Blood")
        {
            book.append("Monster Blood");
        }
        if (books == "The New Girl")
        {
            book.append("The New Girl");
        }
        if (books == "The Haunted Mask")
        {
            book.append("The Haunted Mas");
        }
    }

    if (author == 'B')
    {
        std::cout << "Which book? " << endl;
        std::cin >> books;

        if (books == "The Cat and the Hat")
        {
            book.append("The Cat and the Hat");
        }
        if (books == "Green Eggs and Ham")
        {
            book.append("Green Eggs and Ham");
        }
        if (books == "How the Grinch Stole Christmas")
        {
            book.append("How the Grinch Stole Christmas");
        }
        if (books == "The Lorax")
        {
            book.append("The Lorax");
        }
        
    }


    if (author == 'C')
    {
        std::cout << "Which book? " << endl;
        std::cin >> books;

        if (books == "Diary of a Wimpy Kid Dog Days")
        {
            book.append("Diary of a Wimpy Kid Dog Days");
        }
        if (books == "Diary of a Wimpy Kid Cabin Fever")
        {
            book.append("Diary of a Wimpy Kid Cabin Fever");
        }
        if (books == "Diary of a Wimpy Kid Rodrick Rules")
        {
            book.append("Diary of a Wimpy Kid Rodrick Rules");
        }
        if (books == "Diary of a Wimpy Kid The Ugly Truth")
        {
            book.append("Diary of a Wimpy Kid The Ugly Truth");
        }
       
        
    }
    //prints a menu to display, remove, or exit program
    std::cout << "Menu: " << endl << "Press 'D' to display books" << endl;
    std::cout << "Press 'R' to remove a book" << endl;
    std::cout << "Press 'E' to exit program " << endl;
    std::cin >> answer;

    if (answer == 'D')
    {
        book.display(cout);
    }

    if (answer == 'R')
    {
        std::cout << "Which book would you like to remove? " << endl;
        std::cin >> removal;
        if (removal == "Night of the Living Dummy")
        {
        book.remove("Night of the Living Dummy");
        }
        if (removal == "Monster Blood")
        {
        book.remove("Monster Blood");
        }
        if (removal == "The New Girl")
        {
        book.remove("The New Girl");
        }
        if (removal == "The Haunted Mask")
        {
        book.remove("The Haunted Mask");
        }
        if (removal == "The Cat and the Hat")
        {
        book.remove("The Cat and the Hat");
        }
        if (removal == "Green Eggs and Ham")
        {
        book.remove("Green Eggs and Ham");
        }
        if (removal == "How the Grinch Stole Christmas")
        {
        book.remove("How the Grinch Stole Christmas");
        }
        if (removal == "The Lorax")
        {
        book.remove("The Lorax");
        }
        if (removal == "Diary of a Wimpy Kid Dog Days")
        {
        book.remove("Diary of a Wimpy Kid Dog Days");
        }
        if (removal == "Diary of a Wimpy Kid Cabin Fever")
        {
        book.remove("Diary of a Wimpy Kid Cabin Fever");
        }
        if (removal == "Diary of a Wimpy Kid Rodrick Rules")
        {
        book.remove("Diary of a Wimpy Kid Rodrick Rules");
        }
        if (removal == "Diary of a Wimpy Kid The Ugly Truth")
        {
        book.remove("Diary of a Wimpy Kid The Ugly Truth");
        }

        if (answer == 'E')
        {
            return 0;
        }
    }
}
    

