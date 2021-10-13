#include <string>
#include <iostream>
#include "phonebook.hpp"

void    add_contact(phonebook&   Annuaire_telephonique)
{
    std::string input;
    static int i;
    if (i == 8)
        i = 0;
    /*---------------SETTING_FIRST_NAME----------------*/
    std::cout << "FIRST_NAME : ";
    while(1)
    {
        std::getline(std::cin, input);
        if (input == "")
        {
            std::cout << "This Field must not be left empty-->";
            continue;
        }
        else
            break ;
    }
    Annuaire_telephonique.get_array(i).set_first_name(input);
    /*---------------SETTING_FIRST_NAME----------------*/
    /*---------------SETTING_LAST_NAME----------------*/
    std::cout << "LAST_NAME : ";
    while(1)
    {
        std::getline(std::cin, input);
        if (input == "")
        {
            std::cout << "This Field must not be left empty-->";
            continue;
        }
        else
            break ;
    }
    Annuaire_telephonique.get_array(i).set_last_name(input);
    /*---------------SETTING_LAST_NAME----------------*/
    /*---------------SETTING_NICK_NAME----------------*/
    std::cout << "NICK_NAME : ";
    while(1)
    {
        std::getline(std::cin, input);
        if (input == "")
        {
            std::cout << "This Field must not be left empty-->";
            continue;
        }
        else
            break ;
    }
    Annuaire_telephonique.get_array(i).set_nick_name(input);
    /*---------------SETTING_NICK_NAME----------------*/
    /*---------------SETTING_PHONE_NUMBER----------------*/
    std::cout << "PHONE_NUMBER : ";
    while(1)
    {
        std::getline(std::cin, input);
        if (input == "")
        {
            std::cout << "This Field must not be left empty-->";
            continue;
        }
        else
            break ;
    }
    
    Annuaire_telephonique.get_array(i).set_phone_number(input);
    /*---------------SETTING_PHONE_NUMBER----------------*/
    /*---------------SETTING_DARKEST_SECRET----------------*/
    std::cout << "DARKEST_SECRET : ";
    while(1)
    {
        std::getline(std::cin, input);
        if (input == "")
        {
            std::cout << "This Field must not be left empty-->";
            continue;
        }
        else
            break ;
    }
    Annuaire_telephonique.get_array(i).set_darkest_secret(input);
    /*---------------SETTING_DARKEST_SECRET----------------*/
    /*---------------INCREMENT------------------*/
    //std::cout << "status = "<< Annuaire_telephonique.get_array(i).get_status() << std::endl;
    Annuaire_telephonique.get_array(i).set_status(1);
    i++;
    /*---------------INCREMENT------------------*/
}

void    print_keda(std::string   content)
{
    int i;
    int length;

    i = 0;
    length = content.length();
    if (length >= 10)
    {
       while(i < 9)
           std::cout << content[i++];
       std::cout << ".";
    }
    else if (length <= 9)
    {
        i = 10 - length;
        std::cout << content;
        while(i-- != 0)
            std::cout << " ";
    }
}

int     check_input_authenticity(std::string s)//0 incorrect, 1 correct 
{
    int i;
    i = 0;

    while(s[i] != 0)
    {
        if (isdigit(s[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}

void    search_contact(phonebook   Annuaire_telephonique)
{
    int i;
    std::string s;
    i = 0;
    std::cout << "index     " << "|" << "first name"<< "|" << "last name " << "|" << "nick name |" << std::endl;
    if(i <= 7 && Annuaire_telephonique.get_array(i).get_status() == 1)
    {
        while (i <= 7 && Annuaire_telephonique.get_array(i).get_status() == 1)
        {
            print_keda(std::to_string(i));
            std::cout << "|";
            print_keda(Annuaire_telephonique.get_array(i).get_first_name());
            std::cout << "|";
            print_keda(Annuaire_telephonique.get_array(i).get_last_name());
            std::cout << "|";
            print_keda(Annuaire_telephonique.get_array(i).get_nick_name());
            std::cout << "|";
            std::cout << std::endl;
            i++;
        }
        while(1)
        {
            std::cout << "TYPE DESIRED INDEX : ";
            std::cin >> s;
            if (check_input_authenticity(s) == 0)
            {
                std::cout << "INVALID INPUT--TRY AGAIN." << std::endl;
                continue ;
            }
            i = std::stoi(s);
            if (i >= 0 && i <= 7 && Annuaire_telephonique.get_array(i).get_status() == 1)
            {    
                std::cout << "INDEX : ";
                print_keda(std::to_string(i));
                std::cout << "" << std::endl;
                std::cout << "FIRST NAME : ";
                print_keda(Annuaire_telephonique.get_array(i).get_first_name());
                std::cout << "" << std::endl;
                std::cout << "LAST NAME : ";
                print_keda(Annuaire_telephonique.get_array(i).get_last_name());
                std::cout << "" << std::endl;
                std::cout << "NICK NAME : ";
                print_keda(Annuaire_telephonique.get_array(i).get_nick_name());
                std::cout << std::endl;
                break ;
            }
            else
                std::cout << "INVALID INDEX--TRY AGAIN." << std::endl; 
        }
    }
}

int     main()
{
    std::string input;
    phonebook   Annuaire_telephonique;

    while(1)
    {
        std::getline(std::cin, input);
        if (input == "EXIT")
            return 0;
        else if (input == "ADD")
            add_contact(Annuaire_telephonique);
        else if (input == "SEARCH")
            search_contact(Annuaire_telephonique);
    }
}