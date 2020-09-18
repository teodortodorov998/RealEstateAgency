using System;
using System.Collections.Generic;
using System.Text;

namespace RealEstateAgencyCS
{
    class House : Property
    {
        private int numberOfRooms;
        private int numberOfFloors;
        private int yardArea;

        public House() : base()
        {
            numberOfRooms = 0;
            numberOfFloors = 0;
            yardArea = 0;
        }

        public House(int numberOfRooms, int numberOfFloors, int yardArea, string address, string owner, double price, int area) : base(address, owner, price, area)
        {
            this.numberOfRooms = numberOfRooms;
            this.numberOfFloors = numberOfFloors;
            this.yardArea = yardArea;
        }

        public House(House h) : base(h)
        {
            this.numberOfRooms = h.numberOfRooms;
            this.numberOfFloors = h.numberOfFloors;
            this.yardArea = h.yardArea;
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
            Console.WriteLine($"Number of floors: {numberOfFloors}");
            Console.WriteLine($"Yard area: {yardArea}");
            base.PropertyPrint();
        }

    }
}
