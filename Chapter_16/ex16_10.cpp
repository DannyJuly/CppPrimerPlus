#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review{
    std::string title;
    int rating;
    double price;
};
bool operator<(const std::shared_ptr<Review> & p1, const std::shared_ptr<Review> & p2);
bool RatingAsc(const std::shared_ptr<Review> &,const std::shared_ptr<Review> &);
bool PriceAsc(const std::shared_ptr<Review> &,const std::shared_ptr<Review> &);
bool PriceDesc(const std::shared_ptr<Review> &,const std::shared_ptr<Review> &);
bool FileReview(std::shared_ptr<Review> &);
void ShowMenu();
void ShowReview(const std::shared_ptr<Review> & rptr);
int main(){
    using namespace std;
    vector<shared_ptr<Review> > books;

    //initialize books
    shared_ptr<Review> temp_ptr;
    while(FileReview(temp_ptr))
        books.push_back(temp_ptr);
    if(books.size() > 0){
        ShowMenu();
        char choice;
        while(cin >> choice && choice != '6'){
            vector<shared_ptr<Review> > books_cpy(books);
            switch(choice){
                case '1':
                    cout << "Original order:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    for_each(books_cpy.begin(), books_cpy.end(), ShowReview);
                    break;
                case '2':
                    cout << "Alphabet order:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books_cpy.begin(),books_cpy.end());
                    for_each(books_cpy.begin(), books_cpy.end(), ShowReview);
                    break;
                case '3':
                    cout << "Rating ascending:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books_cpy.begin(), books_cpy.end(), RatingAsc);
                    for_each(books_cpy.begin(), books_cpy.end(), ShowReview);
                    break;
                case '4':
                    cout << "Price ascending:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books_cpy.begin(), books_cpy.end(), PriceAsc);
                    for_each(books_cpy.begin(), books_cpy.end(), ShowReview);
                    break;
                case '5':
                    cout << "Price descending:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books_cpy.begin(), books_cpy.end(), PriceDesc);
                    for_each(books_cpy.begin(), books_cpy.end(), ShowReview);
                    break;


            }

            ShowMenu();
        }
    }else
    {
        cout << "No entries. ";
    }
    cout << "Bye.\n";
    return 0;


}

bool FileReview(std::shared_ptr<Review> & rptr){
    rptr = std::shared_ptr<Review>(new Review);

    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin,rptr->title);
    if(rptr->title == "quit")
        return false;
    
    std::cout << "Enter book rating: ";
    std::cin >> rptr->rating;
    if(!std::cin)
        return false;
    
    std::cout << "Enter book price: ";
    std::cin >> rptr->price;
    if(!std::cin)
        return false;
    //get rid of reset of input char until \n
    while(std::cin.get() != '\n')
        continue;

    return true;
}

void ShowMenu(){
    using namespace std;
    cout << "---------------------------------------------------------" << endl;
    cout << "1.original order   2.alphabet order    3.rating ascending" << endl;
    cout << "4.price ascending  5.price descending  6.quit" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Your choice: ";
}


void ShowReview(const std::shared_ptr<Review> & rptr)
{
    std::cout << rptr->rating << "\t" << rptr->title << "\t" << rptr->price << std::endl; 
}
bool operator<(const std::shared_ptr<Review> & p1, const std::shared_ptr<Review> & p2)
{
    return p1->title < p2->title;
}

bool RatingAsc(const std::shared_ptr<Review> & p1, const std::shared_ptr<Review> & p2)
{
    return p1->rating < p2->rating;
}

bool PriceAsc(const std::shared_ptr<Review> & p1, const std::shared_ptr<Review> & p2)
{
    return p1->price < p2->price;
}

bool PriceDesc(const std::shared_ptr<Review> & p1, const std::shared_ptr<Review> & p2)
{
    return p1->price > p2->price;
}

