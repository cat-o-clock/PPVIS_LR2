#pragma once
using namespace std;
#include <iostream>

class Transport {
public:
	virtual string MakeSignal() = 0;
};

class GroundTransport : virtual public Transport {
public:
	virtual string MakeSignal() = 0;
};

class UnderGroundTransport : virtual  public Transport {
public:
	virtual string MakeSignal() = 0;
};

class AirTransport : virtual  public Transport {
public:
	virtual string MakeSignal() = 0;
};

class WaterTransport :virtual public Transport {
public:
	virtual string MakeSignal() = 0;
};

// 

class MetroI : public UnderGroundTransport {
public:
	virtual string MakeSignal() = 0;
};

class Metro : public MetroI {
public:
	string MakeSignal() override; 
};

class PlaneI : public AirTransport {
public:
	virtual string MakeSignal() = 0 ;
};

class Plane : public PlaneI {
public:
	string MakeSignal() override;
};

class HelicopterI : public AirTransport {
public:
	virtual string MakeSignal() = 0;
};

class Helicopter : public HelicopterI {
public:
	string MakeSignal() override;
};

class LinerI : public WaterTransport {
public:
	virtual string MakeSignal() = 0 ;
};

class Liner : public LinerI {
public:
	string MakeSignal() override;
};

class YachtI : public WaterTransport {
public:
	virtual string MakeSignal() = 0;
};

class Yacht : public YachtI {
public:
	string MakeSignal() override;
};

class TrainI : public GroundTransport {
public:
	virtual string MakeSignal()= 0;
};

class Train : public TrainI {
public:
	string MakeSignal() override;
};

class BicycleI : public GroundTransport {
public:
	virtual string MakeSignal() = 0;
};

class Bicycle : public BicycleI {
public:
	string MakeSignal() override;
};

class BusI : public GroundTransport {
public:
	virtual string MakeSignal() = 0 ;
};

class Bus : public BusI {
public:
	string MakeSignal() override;
};

class carI : public GroundTransport {
public:
	virtual string MakeSignal() = 0 ;
};

class car : public carI {
public:
	string MakeSignal() override;
};

//
class FlyingcarI : public carI, public  AirTransport{
public:
	virtual string MakeSignal() = 0;
};

class Flyingcar :public FlyingcarI {
public:
	string MakeSignal() override ;
};