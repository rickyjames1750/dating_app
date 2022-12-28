#include <iostream>
#include "profile.hpp"

int main() {

    Profile ricardo("Don Ricardo De Jose El Jimenez", 20, "San José", "California", "he/him");
    ricardo.add_hobby("Minalism, Mixed Martial Arts at UFC GYM and Crypto Investing");
    ricardo.add_hobby("Salsa Dancing and Creative Writing via Metaverse World Building");
    ricardo.add_hobby("Linguist, Video Editing, Painting, EDM Music Production");
    ricardo.add_hobby("Meditation, Sport Electric Vehicles, Aerospace Engineering"); 
    std::cout << ricardo.view_profile();




}