#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using string = std::string;
void pets();
void pets(string pet);
void pets(int num);

//using std::string;
int main() {
    print= &std::cout;

    string greeting = "Hello there worms.";
    cout<< greeting<<'\n';
    cout << "Hello, World!" << std::endl;
    string word;
    char letter;




   /* cout<<"enter a word"<<'\n';
    cin>>word;
    cout<<"enter a letter"<<'\n';
    cin>>letter;


    int i=0;
    std::vector <int> temp;

    for (char j :word)
    {
        if(j==letter){

            temp.push_back(i);
        }
        cout<<word[i]<<'\n';
        i++;
    }
    cout<<"found your letter at positions "<<'\n';
    for (int n:temp){
        cout<<n<<" ";
    } */


pets("Luffy");
    pets("Roger");
    pets(2);


    return 0;
}
void pets(){
    cout<<"I love my pets!\n";

}
void pets(int num){
    cout<<"I love my "<< num <<" pets!\n";

}

void pets(string pet){
    cout<<"I love "+ pet+"!\n";

}