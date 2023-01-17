#include <iostream>
using namespace std;

class Mr_Santa {
protected:
    char color_of_beard[15];
    int age;
    bool fur_coat;
    bool cap;

public:
    Mr_Santa() {
        strcpy(color_of_beard, "white");
        age = 1871;
        fur_coat = 1;
        cap = 1;
    }
    
    virtual void DisplayInfo() {
        cout << "Mr_Santa object: " << endl;
        cout << "Color of beard: " << color_of_beard << endl;
        cout << "Age: " << age << endl;
        cout << "Fur coat: " << fur_coat << endl;
        cout << "Cap: " << cap << endl;
    }
};

class Snowgirl : public Mr_Santa {
public:
    char name[30];
    int age;
    bool fur_coat;
    bool cap;
    Snowgirl() {
        strcpy(name, "снегурочка");
        age = 100;
        fur_coat = 1;
        cap = 1;
    }

    void DisplayInfo() {
        cout << "Snowgirl object: " << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Fur coat: " << fur_coat << endl;
        cout << "Cap: " << cap << endl;
    }
};

class Bonesman {
protected:
    int age;
    bool fur_coat;
    bool cap;
    char color_of_crown[20];
public:
    Bonesman() {
        strcpy(color_of_crown, "yellow");
        age = 327;
        fur_coat = 1;
        cap = 1;
    }
    
    virtual void DisplayInfo() {
        cout << "Bonesman object: " << endl;
        cout << "Color of crown: " << color_of_crown << endl;
        cout << "Age: " << age << endl;
        cout << "Fur coat: " << fur_coat << endl;
        cout << "Cap: " << cap << endl;
    }
};

class Bones_helpers : public Bonesman {
public:
    char amount[6];
    int age;
    bool fur_coat;
    bool cap;
    Bones_helpers() {
        strcpy(amount, "6");
        age = 100;
        fur_coat = 1;
        cap = 1;
    }
    
    void DisplayInfo() {
        cout << "Bones_helpers object: " << endl;
        cout << "Amount: " << amount << endl;
        cout << "Age: " << age << endl;
        cout << "Fur coat: " << fur_coat << endl;
        cout << "Cap: " << cap << endl;
    }
};


int main() {
    Mr_Santa mr_santa;
    Snowgirl snowgirl;
    Bonesman bonesman;
    Bones_helpers bones_helpers;

    mr_santa.DisplayInfo();
    snowgirl.DisplayInfo();
    bonesman.DisplayInfo();
    bones_helpers.DisplayInfo();

    return 0;
}