#include<iostream>
#include<string>
using namespace std;

class Item{
    private:
        const int DEFAULT_STEP_SIZE = 999;
        const string DEFAULT_NAME = "None";
        const int DEFAULT_ID = 99999;

        string name;
        int id, step_size;
    
    public:
        // CONSTRUCTOR TO INITIALIZE ITEM WITH NAME, ID AND STEP SIZE
        Item(string  name_temp, int id_temp, int step_size_temp){
            name = name_temp;
            id = id_temp;
            step_size = step_size_temp;
        }
        
        // CONSTRUCTOR TO INITIALIZE ITEM WITH NAME AND ID, STEP SIZE IS TAKEN AS DEFAULT_STEP_SIZE
        Item(string  name_temp, int id_temp){
            name = name_temp;
            id = id_temp;
            step_size = DEFAULT_STEP_SIZE;
        }

        // CONSTRUCTOR TO INITIALIZE ITEM WITH NO PARAMETERS, ALL PARAMETERS ARE ASSIGNED TO DEFAULT VALUES
        Item(){
            name = DEFAULT_NAME;
            id = DEFAULT_ID;
            step_size = DEFAULT_STEP_SIZE;
        }

        //NO CONSTRUCTOR DEFINED FOR Item(name) since we expect every product name to be associated with an ID.

        //GET METHODS TO RETRIEVE OBJECT PARAMETERS
        string get_name(){return name;}
        int get_id(){return id;}
        int get_step_size(){return step_size;}

        //SET METHODS TO SET OBJECT PARAMETERS
        //No seperate set_name and set_id implemented to ensure that every object has a name and an ID, unless they are both default/unintialized.
        void set_name_id(string name_temp, int id_temp){name = name_temp; id=id_temp;}
        void set_step_size(int step_size_temp){step_size = step_size_temp;}     
                
};
