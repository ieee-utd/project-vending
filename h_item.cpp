#include<iostream>
#include<string>
#include<map>
using namespace std;

class Item{
    private:
        const int DEFAULT_STEP_SIZE = 9999;
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

        //GET METHODS TO RETRIEVE OBJECT PARAMETERS
        string get_name(){return name;}
        int get_id(){return id;}
        int get_step_size(){return step_size;}

        //SET METHODS TO SET OBJECT PARAMETERS
        void set_name(string name_temp){name = name_temp;}
        void set_id(int id_temp){id = id_temp;}
        void set_step_size(int step_size_temp){step_size = step_size_temp;}

                
};

class Order_info{
    public:
        int order_id;
        map<int, int> map_productID_quantity;
        map<int, string> map_productID_name;
        bool order_check, payment_check;
    
        Order_info(int order_id_temp, map<int,int> map_id_quantity, map<int,string> map_id_name, bool order_check_temp, bool payment_check_temp){
            order_id = order_id_temp;
            map_productID_quantity = map_id_quantity;
            map_productID_name = map_id_name;
            order_check = order_check_temp;
            payment_check = payment_check_temp;
        }
};

class Server_check{
    // TODO: Add server information needed to fetch data.
    private:
        int order_id, pin;

    public:
        Order_info fetch_info(int order_id_temp, int pin_temp){
            order_id = order_id_temp;
            pin = pin_temp;
            bool order_check, payment_check;
            
            //TODO:
            // REPLACE THE NEXT BLOCK WITH CODE TO FETCH INFO FROM THE SERVER, PARSE RESPONSE AND FILL IN REQUIRED INFO
            // pin=0 to simulate order and payment ok condition
            if (pin == 0){order_check = true; payment_check=true;}
            // pin=1 to simulate order ok, payment not ok condition
            else if (pin == 1){order_check = true; payment_check=false;}
            //any other value for pin simulates order not found/failed
            else{order_check = false; payment_check=false;}
    
            map<int, string> map_id_name;
            map_id_name.insert(pair<int,string>(2, "resistor_10k"));
            map_id_name.insert(pair<int,string>(11, "capacitor_10u"));
            map_id_name.insert(pair<int,string>(0, "raspberry_pi_3b"));
            map_id_name.insert(pair<int,string>(7, "transistor_n101"));
            map<int,int> map_id_quantity;
            map_id_quantity.insert(pair<int,int>(2, 3));
            map_id_quantity.insert(pair<int,int>(11, 2));
            map_id_quantity.insert(pair<int,int>(0, 1));
            map_id_quantity.insert(pair<int,int>(7, 1));
            Order_info order_info(order_id, map_id_quantity, map_id_name, order_check, payment_check);            

            return order_info;
        }

};