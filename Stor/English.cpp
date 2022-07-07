#include <iostream>
#include <map>
#include "english.h"

using namespace::std;

English::English()
{
    English::setWords();
}

void English::setWords() {
    Language::languageDic["sign_up"] = "Sign Up";
    Language::languageDic["sign_in"] = "Sign in";
    Language::languageDic["exit"] = "Exit";
    Language::languageDic["admin"] = "Admin";
    Language::languageDic["client"] = "Client";
    Language::languageDic["customer"] = "Customer";
    Language::languageDic["first_name"] = "First Name:";
    Language::languageDic["last_name"] = "Last Name";
    Language::languageDic["username"] = "Username";
    Language::languageDic["password"] = "Password";
    Language::languageDic["confirm_pass"] = "Confirm password";
    Language::languageDic["show_pass"] = "Show password";
    Language::languageDic["email"] = "Email";
    Language::languageDic["address"] = "Address";
    Language::languageDic["mobile"] = "Mobile";
    Language::languageDic["laptop"] = "Laptop";
    Language::languageDic["book"] = "Book";
    Language::languageDic["clothes"] = "Clothes";
    Language::languageDic["health"] = "Health";
    Language::languageDic["car"] = "Car";
    Language::languageDic["supermarket"] = "Supermarket";
    Language::languageDic["furniture"] = "Furniture";
    Language::languageDic["toy"] = "Toy";
    Language::languageDic["price"] = "Price";
    Language::languageDic["number"] = "Number";
    Language::languageDic["book_name"] = "Book Name";
    Language::languageDic["series_type"] = "Series Type";
    Language::languageDic["jeld_type"] = "Jeld Type";
    Language::languageDic["lang"] = "Language";
    Language::languageDic["awards"] = "Awards";
    Language::languageDic["literature"] = "Literature";
    Language::languageDic["comedy"] = "Comdey";
    Language::languageDic["comic"] = "Comic";
    Language::languageDic["mystery"] = "Mystery";
    Language::languageDic["romance"] = "Romance";
    Language::languageDic["biography"] = "Biography";
    Language::languageDic["auto_biography"] = "Auto biography";
    Language::languageDic["type_1"] = "Type1";
    Language::languageDic["type_2"] = "Type1";
    Language::languageDic["car_n"] = "Car Name";
    Language::languageDic["steering_wheel"] = "Steering Wheel";
    Language::languageDic["feul_type"] = "Feul type";
    Language::languageDic["petrol"] = "Petrol";
    Language::languageDic["gasoline"] = "Gasoline";
    Language::languageDic["car_class"] = "Car class";
    Language::languageDic["sport"] = "Sport";
    Language::languageDic["super_sport"] = "Super sport";
    Language::languageDic["cloth_name"] = "Cloth name";
    Language::languageDic["collar"] = "Collar";
    Language::languageDic["circle"] = "Circle";
    Language::languageDic["v"] = "V";
    Language::languageDic["sleeves"] = "Sleeves";
    Language::languageDic["short"] = "Short";
    Language::languageDic["long"] = "Long";
    Language::languageDic["tarh"] = "Tarh";
    Language::languageDic["use"] = "Use";
    Language::languageDic["furniture_name"] = "Furniture name";
    Language::languageDic["garantee"] = "Garantee";
    Language::languageDic["about"] = "About";
    Language::languageDic["laptop_name"] = "Laptop Name";
    Language::languageDic["processor_series"] = "Processor series";
    Language::languageDic["limit_ram"] = "Limit RAM(GB)";
    Language::languageDic["memory_type"] = "Memory Type";
    Language::languageDic["graphic_constructor"] = "Graphic constructor";
    Language::languageDic["screen_size"] = "Screen size";
    Language::languageDic["memory"] = "Memory(GB)";
    Language::languageDic["screen_tech"] = "Screen tech";
    Language::languageDic["feul_type"] = "Feul type";
    Language::languageDic["networks"] = "Networks";
    Language::languageDic["rezoloution"] = "Rezoloution(MPx)";
    Language::languageDic["operating_system"] = "Operating System";
    Language::languageDic["good_name"] = "Good name";
    Language::languageDic["uses"] = "Uses";
    Language::languageDic["type"] = "Type";
    Language::languageDic["operating_system"] = "Operating System";
}
