#include <iostream>
#include <vector>

using namespace std;

class Mammal
{
protected:
    string address = "N/A";

public:
    string name = "N/A";
    string species = "unknown";
    int age = 0;
    int appendages = 0;
    double weight = 0;
    int id = 0;
    bool tail = false;

    Mammal()
        : name("No Name"), age(1), appendages(4), weight(10), id(1)
    {
    }

    Mammal(const string& Name, const string& Species, const int Age, const int Appendages, const double Weight,
           const int ID, const bool Tail)
        : name(Name), species(Species), age(Age), appendages(Appendages), weight(Weight), id(ID), tail(Tail)
    {
    }

    // virtual ~Mammal() = default;

    void printType()
    {
        cout << "I am an object of type Mammal" << endl;
    }

    virtual void printInfo()
    {
        cout << "Hello my name is " << name << " and I am a " << age << " year old " << species << "\n";
    }
};

class Cat final : public Mammal
{
public:
    const string species = "Cat";
    bool tail = true;
    bool adopted = false;
    string breed = "Tabby";
    string favFood = "N/A";

    Cat()
        : Mammal("No Name", "Cat", 0, 4, 0, 0, true)
    {
    }

    Cat(const string& Name, const int Age, const int Appendages, const double Weight, const int ID, const string& Breed,
        const string& Food)
        : Mammal(Name, "Cat", Age, Appendages, Weight, ID, true), breed(Breed), favFood(Food)
    {
    }

    void printType()
    {
        cout << "I am an object of type Cat" << endl;
    }

    void printInfo() override
    {
        cout << "Hello, my name is " << name
            << " and I am a " << age << "-year-old " << species << ".\n"
            << "I weigh " << weight << " kg and have " << appendages << " appendages.\n"
            << "Breed: " << breed << ", Favorite Food: " << favFood << ".\n"
            << "Adopted: " << (adopted ? "Yes" : "No") << ", Tail: " << (tail ? "Yes" : "No") << ".\n";
    }
};

class Human final : public Mammal
{
public:
    vector<string> languages;
    int height{};
    string eyeColor;

    Human()
        : Mammal("No Name", "Human", 0, 4, 0, 0, false)
    {
    }

    Human(const string& Name, const int Age, const int Height, const string& Address, const string& EyeColor,
          const vector<string>& Languages)
        : Mammal(Name, "Human", Age, 4, 0, 0, false), languages(Languages), height(Height), eyeColor(EyeColor)
    {
        address = Address;
    }

    void printType()
    {
        cout << "I am an object of type Human" << endl;
    }

    void speak() const
    {
        cout << name << " speaks ";

        if (languages.empty())
        {
            cout << "no languages" << endl;
            return;
        }

        for (int i = 0; i < languages.size(); ++i)
        {
            cout << languages[i];
            if (i < languages.size() - 1)
                cout << ", ";
        }
        cout << "." << endl;
    }


    void printInfo() override
    {
        cout << "Hello, my name is " << name << " and I am " << age << " years old.\n"
            << "I am " << height << " cm tall and have " << eyeColor << " eyes.\n"
            << "I live at " << address << ".\n";
    }
};

int main()
{
    Cat Mittens("MR.Mittens", 3, 4, 7, 1, "Tabby", "Fish");
    Mittens.printInfo();
    Mittens.printType();

    cout << endl;

    Mammal* mptr = &Mittens;
    mptr->printInfo();
    mptr->printType();

    cout << endl;

    Human human("Onur", 21, 194, "Peterborough", "Hazel", {"English,Turkish,German"});
    human.printInfo();
    human.speak();
    human.printType();
}
