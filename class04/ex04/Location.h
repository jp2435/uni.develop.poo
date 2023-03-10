#ifndef LOCATION_H
#define LOCATION_H


class Location {
private:
    float latitude_;
    float longitude_;
public:
    explicit Location(float latitude=0.00,float longitude=0.00): latitude_(latitude), longitude_(longitude){};

    // Setter Member Functions
    void setLatitude(const float & latitude);
    void setLongitude(const float& longitude);
    // Getter Member Functions
    float getLatitude() const;
    float getLongitude() const;
};


#endif
