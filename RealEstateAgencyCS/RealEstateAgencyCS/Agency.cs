using System;
using System.Collections.Generic;
using System.Text;

namespace RealEstateAgencyCS
{
    class Agency
    {
        private static int apartmentCound = 0;
        private static int houseCount = 0;
        private static int parcelCount = 0;
        private static int propertyCount;
        private static string agencyName;
        Apartment[] apartments = new Apartment[5];
        House[] houses = new House[5];
        Parcel[] parcels = new Parcel[5];

        public Agency()
        {
            for (int i = 0; i < 5; i++)
            {
                apartments[i] = new Apartment();
                houses[i] = new House();
                parcels[i] = new Parcel();
            }
        }

        public int AddApartment(Apartment a)
        {
            apartments[apartmentCound++] = a;
            return 1;
        }

        public int AddHouse(House h)
        {
            houses[houseCount++] = h;
            return 1;
        }

        public int AddParcel(Parcel p)
        {
            parcels[parcelCount++] = p;
            return 1;
        }

        public int RemoveProperty(string anAddress)
        {
            for (int i = 0; i < 5; i++)
            {
                if (apartments[i].GetAddress() == anAddress)
                {
                    apartments[i] = new Apartment();
                    return 1;
                }

                if (houses[i].GetAddress() == anAddress)
                {
                    houses[i] = new House();
                    return 1;
                }

                if (parcels[i].GetAddress() == anAddress)
                {
                    parcels[i] = new Parcel();
                    return 1;
                }
            }
            return 0;
        }

        public void FindByPrice(double aPrice)
        {
            for (int i = 0; i < 5; i++)
            {
                if (apartments[i].GetPrice() == aPrice)
                {
                    Console.WriteLine($"The property with a price of {apartments[i].GetPrice()} is: ");
                    apartments[i].PropertyPrint();
                }

                if (houses[i].GetPrice() == aPrice)
                {
                    Console.WriteLine($"The property with a price of {houses[i].GetPrice()} is: ");
                    houses[i].PropertyPrint();
                }

                if (parcels[i].GetPrice() == aPrice)
                {
                    Console.WriteLine($"The property with a price of {parcels[i].GetPrice()} is: ");
                    parcels[i].PropertyPrint();
                }
            }
            Console.WriteLine();
        }

        public void PrintProperties(string typeOfProperty)
        {
            string apartment = "Apartments";
            string house = "Houses";
            string parcel = "Parcels";
            Apartment tempA;
            House tempH;
            Parcel tempP;

            if (apartment == typeOfProperty)
            {
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (apartments[j].GetPrice() > apartments[j + 1].GetPrice())
                        {
                            tempA = apartments[j];
                            apartments[j] = apartments[j + 1];
                            apartments[j + 1] = tempA;
                        }
                    }
                }
                for (int i = 0; i < 5; i++)
                {
                    apartments[i].PropertyPrint();
                }
            }

            if (house == typeOfProperty)
            {
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (houses[j].GetPrice() > houses[j + 1].GetPrice())
                        {
                            tempH = houses[j];
                            houses[j] = houses[j + 1];
                            houses[j + 1] = tempH;
                        }
                    }
                }
                for (int i = 0; i < 5; i++)
                {
                    houses[i].PropertyPrint();
                }
            }

            if (parcel == typeOfProperty)
            {
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (parcels[j].GetPrice() > parcels[j + 1].GetPrice())
                        {
                            tempP = parcels[j];
                            parcels[j] = parcels[j + 1];
                            parcels[j + 1] = tempP;
                        }
                    }
                }
                for (int i = 0; i < 5; i++)
                {
                    parcels[i].PropertyPrint();
                }
            }

        }


    }
}
