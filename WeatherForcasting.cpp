
/*
              USER MANUAL OF THIS CODE :: 
Introduction :: 
Welcome to the Weather and Location Management System! This application allows you to manage locations, track various weather parameters, fetch weather forecasts, historical weather data, and air quality information. Designed to be versatile and user-friendly, this system helps you stay informed about the weather and air quality for multiple locations around the world.

Features :: 

Manage Locations ::
Add Locations: Add new locations with names, latitudes, and longitudes.
Remove Locations: Remove locations from the system by name.
List Locations: View all locations stored in the system.

Weather Variables :: 
Add Weather Variables: Define various weather parameters like temperature, wind speed, and humidity.
List Weather Variables: View all defined weather variables.

Weather Forecasting :: 
Fetch Weather Data: Retrieve current weather data for any location.
Display Weather Data: View the latest weather forecast.

Historical Weather Data :: 
Fetch Historical Data: Get historical weather data for a location.
Display Historical Data: View historical weather data.

Air Quality Forecasting :: 
Fetch Air Quality Data: Retrieve air quality index (AQI) data for any location.
Display Air Quality Data: View the current air quality information.

*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


//class location......
class Location 
{
public:
    Location(const string& name, double latitude, double longitude)
        : name(name), latitude(latitude), longitude(longitude) {}

    string getName() const 
    { 
       return name; 
    }
    double getLatitude() const 
    { 
       return latitude; 
    }
    double getLongitude() const 
    { 
       return longitude; 
    }

private:
    string name;
    double latitude;
    double longitude;
};


//class location manager...
class LocationManager 
{
public:
    void addLocation(const Location& location) 
    {
        locations.push_back(location);
    }

    void removeLocation(const string& name) 
    {
        locations.erase(
            remove_if(locations.begin(), locations.end(),
                      [&name](const Location& loc) { return loc.getName() == name; }),
            locations.end());
    }

    void listLocations() const 
    {
        cout << "\n\t \033[1;4;32m Locations :\033[0m " << endl;
        for (const auto& loc : locations) 
        {
            cout << " Name : " << loc.getName() << '\t'
                 << ", Latitude : " << loc.getLatitude() << '\t'
                 << ", Longitude : " << loc.getLongitude() << endl;
        }
    }

//private:
    vector<Location> locations;
};


//class weather variable....
class WeatherVariable 
{
public:
    WeatherVariable(const string& name, double value)
        : name(name), value(value) {}
    
    //gettors....
    string getName() const 
    { 
       return name; 
    }
    double getValue() const 
    { 
       return value; 
    }

private:
    string name;
    double value;
};


//class w variable manager....
class WeatherVariableManager 
{
public:
    void addVariable(const WeatherVariable& variable) 
    {
        variables.push_back(variable);
    }

    void listVariables() const 
    {
        cout << "\n\t \033[1;4;31mWeather Variables :\033[0m " << endl;
        for (const auto& var : variables) 
        {
            cout << " Name : " << var.getName() << ", Value : " << var.getValue() << endl;
        }
    }

private:
    vector<WeatherVariable> variables;
};


//w. forcast system...
class WeatherForecastingSystem 
{
public:
    void fetchWeatherData(const Location& location) 
    {
        // Placeholder for API interaction
        weatherData = " Weather Forecast For \033[1;33m" + location.getName() + "\033[0m : " 
                      + to_string(15 + rand() % 10) + "°C, "
                      + to_string(rand() % 100) + "% humidity, "
                      + to_string(rand() % 20) + " km/h wind speed.";
    }

    //const display funct
    void displayWeatherData() const 
    {
        cout << weatherData << endl;
    }

private:
    string weatherData;
};

//class historical w. system...
class HistoricalWeatherSystem 
{
public:
    void fetchHistoricalData(const Location& location) 
    {
        //placeholder for API interaction....
        historicalData = " Historical Weather Data For \033[1;33m" + location.getName() + "\033[0m : "
                          + to_string(10 + rand() % 15) + "°C average temperature.";
    }

    void displayHistoricalData() const 
    {
        cout << historicalData << endl;
    }

private:
    string historicalData;
};

//class air quality forcast system...
class AirQualityForecastingSystem 
{
public:
    void fetchAirQualityData(const Location& location) 
    {
        //placeholder for API interaction....
        airQualityData = " Air Quality Data For \033[1;33m" + location.getName() + "\033[0m : "
                          + to_string(rand() % 200) + " AQI (Air Quality Index).";
    }

    void displayAirQualityData() const 
    {
        cout << airQualityData << endl;
    }

private:
    string airQualityData;
};

// main.cpp
int main() 
{
    //craetion of objects....
    LocationManager locationManager;
    WeatherVariableManager weatherVariableManager;
    WeatherForecastingSystem weatherSystem;
    HistoricalWeatherSystem historicalSystem;
    AirQualityForecastingSystem airQualitySystem;

    //added locations by myself...
    locationManager.addLocation(Location("New York", 40.7128, -74.0060));
    locationManager.addLocation(Location("Los Angeles", 34.0522, -118.2437));
    locationManager.addLocation(Location("London", 51.5074, -0.1278));
    locationManager.addLocation(Location("Tokyo", 35.6824, 139.7590));
    locationManager.addLocation(Location("Sydney", -33.8688, 151.2093));

    //list locations...
    locationManager.listLocations();

    //add weather variables...
    weatherVariableManager.addVariable(WeatherVariable("Temperature", 25.0));
    weatherVariableManager.addVariable(WeatherVariable("Wind Speed", 5.0));
    weatherVariableManager.addVariable(WeatherVariable("Humidity", 60.0));

    //list/dispaly weather variables....
    weatherVariableManager.listVariables();

    //fetch and display weather data for each location....
    cout << "\n\t \033[1;4;34m WEATHER DATA : \033[0m " << endl ;
    for (const auto& loc : locationManager.locations) 
    {
        //cout << loc.getName() << " : " << endl;
        weatherSystem.fetchWeatherData(loc);
        weatherSystem.displayWeatherData();
        cout << endl;
    }

    //fetch and display historical weather data for each location....
    cout << "\n\t \033[1;4;35m HISTORICAL WEATHER DATA : \033[0m " << endl ;
    for (const auto& loc : locationManager.locations) 
    {
        //<< loc.getName() << endl;
        historicalSystem.fetchHistoricalData(loc);
        historicalSystem.displayHistoricalData();
        cout << endl;
    }

    //fetch and display air quality data for each location.....
    cout << "\n\t \033[1;4;36m AIR QUALITY DATA : \033[0m " << endl ;
    for (const auto& loc : locationManager.locations) 
    {
        //<< loc.getName() << endl;
        airQualitySystem.fetchAirQualityData(loc);
        airQualitySystem.displayAirQualityData();
        cout << endl;
    }

    cout << "\n\n";
    return 0;
}

