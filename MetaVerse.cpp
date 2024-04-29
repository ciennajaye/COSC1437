#include <iostream>

using namespace std;


//class #1
class Spiderman
{
    //attributes
    private:
        string earth;
        bool anomaly;
        

    public:

    //Spiderman Constructor
    Spiderman(string e, bool a)
    {
        earth = e;
        anomaly = a;
    }

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
    private:
        int intelligenceLevel;
        string sidekickName;
    
    public:

        //Batman Constructor
        Batman(int iL, string skn)
        {
            intelligenceLevel = iL;
            sidekickName = skn;
        }

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
    private:
        int age;
        bool raygun;
        

    public:

    //Mermaid Constructor
    MermaidMan(int a, bool ra)
    {
        age = a;
        raygun = ra;
    }

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
    MermaidMan Ernie(100,false);

    //contructing Batman Object
    Batman Bruce (89,"Nightwing");

    //constructing Spiderman Object
    Spiderman Miles("Earth-42",false);
    
    
    
    return 0;
}





