using System;

namespace RealEstateAgencyCS
{
    class Program
    {
        static void Main(string[] args)
        {
            Agency RealEstate = new Agency();
            Apartment[] a = new Apartment[3];
            House[] h = new House[2];
            Parcel[] p = new Parcel[2];

            a[0] = new Apartment(2, 2, "Hollywood 22", "John Wick", 19999.00, 120);
            a[1] = new Apartment(1, 3, "Summerville 12", "Tony Stark", 12987.00, 60);
            a[2] = new Apartment(3, 4, "Glastonbury 3", "Rick Flair", 34598.00, 180);
            h[0] = new House(5, 2, 30, "Greensville 5", "Dylan Jones", 189000.99, 500);
            h[1] = new House(6, 2, 40, "Gaston 2", "Steve Ross", 249000.00, 600);
            p[0] = new Parcel(true, true, true, "Richmond 67", "Rick Morris", 40897.00, 200);
            p[1] = new Parcel(true, true, false, "Fridwick 34", "Hunter Grimson", 23897.00, 150);

            RealEstate.AddApartment(a[0]);
            RealEstate.AddApartment(a[1]);
            RealEstate.AddApartment(a[2]);
            RealEstate.AddHouse(h[0]);
            RealEstate.AddHouse(h[1]);
            RealEstate.AddParcel(p[0]);
            RealEstate.AddParcel(p[1]);
            RealEstate.PrintProperties("Apartments");
            RealEstate.RemoveProperty("Summerville 12");
            Console.WriteLine("Properties after removal: ");
            RealEstate.PrintProperties("Apartments");
            RealEstate.FindByPrice(189000.99);

        }
    }
}
