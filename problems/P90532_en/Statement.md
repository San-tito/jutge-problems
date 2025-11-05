# Countries and provinces (1)

UN wants to store information about the organization of its member
countries and the provinces that these contain, attached with their GDP
(gross domestic product)

The information about a determined province is stored in the following
struct:

        struct Province {
            string name;
            string capital;
            int population;
            int area;   
            double gdp;
        };

The information about a determined country is stored in the following
struct:

        struct Country {
            string name;
            string capital;
            vector<Province> provs;
        };

The information about all the countries is stored in a vector of
countries:

        typedef vector<Country> Countries;

Using the previous definitions, implement the function

        double gdp(const Countries& p, char c, double d);

that returns the sum of the gross domestic products of all the provinces
with density stricty greater than \@d@ of all the countries in \@p@ that
starts with the letter \@c@.

## Observation

You only need to submit the required classes; your main program will be
ignored.

Strictly obey the type definitions of the statement.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

