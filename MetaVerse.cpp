#include <iostream>

using namespace std;


//class #1
class Spiderman
{
    //attributes
    public:
        string earth;
        bool anomaly;
        

    public:

    //accessor and mutator Methods for Earth
    string getEarth()
    {
        return earth;
    }

    void setEarth(string et)
    {
        earth = et;
    }

    //accessor and mutator Methods for Anomaly
    bool getAnomaly()
    {
        return anomaly;
    }

    void setAnomaly(bool anom)
    {
        anomaly = anom;
    }

    //Is the Spiderman Miles Morales? function
    bool milesMorales()
    {
        if (earth == "Earth-1610" && anomaly == true)
        {
            return true;
        }
        return false;
    }
};

//class #2
class Batman
{
    //attributes
    public:
        int intelligenceLevel;
        string sidekickName;
    
    public:

    //accessor and mutator Methods for Intelligence Level
    int getIntelligenceLevel()
    {
        return intelligenceLevel;
    }

    void setIntelligenceLevel(int lv)
    {
        intelligenceLevel = lv;
    }

    //accessor and mutator Methods for Side Kick Name
    string getSideKickName()
    {
        return sidekickName;
    }

    void setSideKickName(string side)
    {
        sidekickName = side;
    }

    //Can Batman Solve a Crime? function
    bool crimeSolver()
    {
        if (intelligenceLevel >= 99)
        {
            return true;
        }
        return false;
        
    }
    
};

//class #3
class MermaidMan
{
    //attributes
    public:
        int age;
        bool raygun;
        

    public:

    //accessor and mutator Methods for age
    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }

    //accessor and mutator Methods for raygun
    bool getRayGun()
    {
        return raygun;
    }

    void setRayGun(bool r)
    {
        raygun = r;
    }

    //Can MermaidMan defeat the Dirty Bubble? function
    bool defeatDirtyBubble()
    {
        if (age >= 70 && raygun == true)
        {
            return true;
        }
        return false;
    }
};



int main()
{
    //constructing MermaindMan Object
    MermaidMan Ernie;
    Ernie.setAge(100);
    Ernie.setRayGun(false);

    //contructing Batman Object
    Batman Bruce;
    Bruce.setIntelligenceLevel(89);
    Bruce.setSideKickName("NightWing");

    //constructing Spiderman Object
    Spiderman Miles;
    Miles.setEarth("Earth-42");
    Miles.setAnomaly(false);
    
    
    return 0;
}





