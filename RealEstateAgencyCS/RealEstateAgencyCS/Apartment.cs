using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using System.Text;

namespace RealEstateAgencyCS
{
    class Apartment : Property
    { 
        private int numberOfRooms;
        private int floor;

        public Apartment():base()
        {
            numberOfRooms = 0;
            floor = 0;
        }

        public Apartment(int numberOfRooms, int floor, string anAddress, string anOwner, double aPrice, int anArea) : base(anAddress, anOwner, aPrice, anArea)
        {
            this.numberOfRooms = numberOfRooms;
            this.floor = floor;
        }

        public Apartment(Apartment a) : base(a)
        {
            this.numberOfRooms = a.numberOfRooms;
            this.floor = a.floor;
        }

        public override string GetAddress()
        {
            return base.GetAddress();
        }

        public override double GetPrice()
        {
            return base.GetPrice();
        }

        public override void PropertyPrint()
        {
            Console.WriteLine($"Number of rooms: {numberOfRooms}");
            Console.WriteLine($"Floor: {floor}");
            base.PropertyPrint();
            Console.WriteLine();
        }

    }
}
