#include <iostream>
#include<string>

using namespace std;



class AnimeCatalog
{

public:

    void favoriteGenre(string genreName){
    cout<<"MY FAVORITE ANIME GENRE IS\n"<<genreName<<endl;
    }
};

int main()
{
    string genreName;
    AnimeCatalog myAnime;

    cout<<"ENTER A GENRE"<<endl;
    getline(cin,genreName);
    cout<<endl;
    myAnime.favoriteGenre(genreName);

     return 0;
}
