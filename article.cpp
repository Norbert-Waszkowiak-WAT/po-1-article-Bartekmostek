#ifndef ARTICLE
#define ARTICLE
#include <iostream>
#include <string>
#include "author.cpp"

class Article{
private:
    std:: string title;
    Author author;
    int publicationYear;
    std:: string journal;
public:
    Article()
    :title(""), author(Author()), publicationYear(0),journal(""){};
    Article(std::string articleTitle, Author articleAuthor, int articlePublicationYear, std::string journal)
    :title(articleTitle), author(articleAuthor),publicationYear (articlePublicationYear), journal (journal){};
    Article(Article &other)
    :title (other.title), author (other.author), publicationYear (other.publicationYear), journal (other.journal){};

int getPublicationYear(){
    return publicationYear;
};
std::string getTitle(){
    return title;
};
Author getAuthor(){
    return author;
};
std::string getJournal(){
    return journal;
};
void displayInfo(){
    std::cout<<"skibidi mostek";
};
}   ;
#endif