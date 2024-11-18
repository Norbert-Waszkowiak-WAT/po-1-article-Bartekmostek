#ifndef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H
#include <iostream>
#include <string>
#include "author.cpp"

class Article{
private:
    std:: string title;
    Author author;
    int publicationYear;
    std:: string jurnal;
public:
    Article()
    :title(""), Author(author()), publicationYear(0),jurnal(jurnal)();
    Article(std::string articleTitle, Author articleauthor,int publicationYear,std:: string jurnalName)
    :title(articleTitle), author(articleAuthor),publicationYear (articlePublicationYear), jurnal (articleJUrnal)
    Article(Article,&other)
    :title (other.Title), other (other.Author), other (other.PublicationYear), other (other.Jurnal)

int getPublicationYear(){
    return publicationYear
}
std::string getTitle(){
    return title;
}
std::string getAuthor(){
    return author;
}
void displayInfo(){
    std::cout<<"skibidi mostek";
}
}   
#endif