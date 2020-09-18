using System;
using System.Collections.Generic;
using System.Text;

namespace RealEstateAgencyCS
{
    class Property
    {
        protected string address;
        protected string owner;
        protected double price;
        protected int area;

        public Property()
        {
            address = "";
            owner = "";
            price = 0.00;
            area = 0;
        }
        
        public Property(string address, string owner, double price, int area)
        {
            this.address = address;
            this.owner = owner;
            this.price = price;
            this.area = area;

        }

        public Property(Property pr)
        {
            this.address = pr.address;
            this.owner = pr.owner;
            this.price = pr.price;
            this.area = pr.area;
        }

        virtual public string GetAddress()
        {
            return address;
        }

        virtual public double GetPrice()
        {
            return price;
        }

        public void SetPriority(string address, string owner, double price, int area)
        {
            this.address = address;
            this.owner = owner;
            this.price = price;
            this.area = area;
        }

        virtual public void PropertyPrint()
        {
            Console.WriteLine($"Address: {address}");
            Console.WriteLine($"Owner: {owner}");
            Console.WriteLine($"Price: {price}");
            Console.WriteLine($"Area: {area}");
        }

        


            
    }
}
