#include <iostream>
#include <string>
#include "Agency.h"

using namespace std;


int main()
{
    Agency RealEstate;

    Apartment a[3];
    House h[2];
    Parcel p[2];

    a[0] = Apartment(2, 2, "Hollywood 22", "John Wick", 19999.00, 120);
    a[1] = Apartment(1, 3, "Summerville 12", "Tony Stark", 12987.00, 60);
    a[2] = Apartment(3, 4, "Glastonbury 3", "Rick Flair", 34598.00, 180);
    h[0] = House(5, 2, 30, "Greensville 5", "Dylan Jones", 189000.99, 500);
    h[1] = House(6, 2, 40, "Gaston 2", "Steve Ross", 249000.00, 600);
    p[0] = Parcel(true, true, true, "Richmond 67", "Rick Morris", 40897.00, 200);
    p[1] = Parcel(true, true, false, "Fridwick 34", "Hunter Grimson", 23897.00, 150);

    RealEstate.AddApartment(a[0]);
    RealEstate.AddApartment(a[1]);
    RealEstate.AddApartment(a[2]);
    RealEstate.AddHouse(h[0]);
    RealEstate.AddHouse(h[1]);
    RealEstate.AddParcel(p[0]);
    RealEstate.AddParcel(p[1]);
    RealEstate.PrintProperties("Apartments");
    RealEstate.RemoveProperty("Summerville 12");
    cout << "Properties after removal: " << endl;
    RealEstate.PrintProperties("Apartments");
    RealEstate.FindByPrice(189000.99);
    
    
}


