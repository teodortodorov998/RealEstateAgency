using System;
using System.Collections.Generic;
using System.Text;

namespace RealEstateAgencyCS
{
    class Parcel : Property
    {
        private bool isThereWater;
        private bool isThereElectricity;
        private bool isItCloseToARoad;

        public Parcel() : base()
        {
            isThereWater = false;
            isThereElectricity = false;
            isItCloseToARoad = false;
        }

        public Parcel(bool isThereWater, bool isThereElectricity, bool isItCloseToARoad, string address, string owner, double price, int area) : base(address, owner, price, area)
        {
            this.isThereWater = isThereWater;
            this.isThereElectricity = isThereElectricity;
            this.isItCloseToARoad = isItCloseToARoad;
        }

        public Parcel(Parcel p) : base(p)
        {
            this.isThereWater = p.isThereWater;
            this.isThereElectricity = p.isThereElectricity;
            this.isItCloseToARoad = p.isItCloseToARoad;
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
            if (isThereWater == true)
            {
                Console.WriteLine("There is water.");

            }
            else if (isThereWater == false)
            {
                Console.WriteLine("There is no water.");
            }

            if (isThereElectricity == true)
            {
                Console.WriteLine("There is electricity.");

            }
            else if (isThereElectricity == false)
            {
                Console.WriteLine("There is no electricity.");
            }

            if (isItCloseToARoad == true)
            {
                Console.WriteLine("It is close to a road.");

            }
            else if (isItCloseToARoad == false)
            {
                Console.WriteLine("It's not close to a road.");
            }


            base.PropertyPrint();
        }

    }
}
