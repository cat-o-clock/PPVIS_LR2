//**@page ������������ ���� ��� ������ ���������
#pragma once
using namespace std;
#include <iostream>
/**
@brief ����������� ����� "����������"
*/
class Transport {
public:
	virtual string MakeSignal() = 0;
};

/**
@brief ����������� ����� "��������� ���� ����������"
@detailed ����������� ���������� �� ������ ���������.
*/
class GroundTransport : virtual public Transport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief ����������� ����� "���������� ���� ����������"
@detailed ����������� ���������� �� ������ ���������.
*/
class UnderGroundTransport : virtual  public Transport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief ����������� ����� "���������� ���� ����������"
@detailed ����������� ���������� �� ������ ���������.
*/
class AirTransport : virtual  public Transport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief ����������� ����� "������� ���� ����������"
@detailed ����������� ���������� �� ������ ���������.
*/
class WaterTransport :virtual public Transport {
public:
	virtual string MakeSignal() = 0;
};

// 

/**
@brief ����� ��������� ��� ������ "�����"
@detailed ����������� �� ������ ������������������.
*/
class MetroI : public UnderGroundTransport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief ����� "�����"
@detailed ����������� �� ������ ��������������.
*/
class Metro : public MetroI {
public:
	string MakeSignal() override; 
};

/**
@brief ����� ��������� ��� ������ "�������"
@detailed ����������� �� ������ ������������������.
*/
class PlaneI : public AirTransport {
public:
	virtual string MakeSignal() = 0 ;
};
/**
@brief ����� "�������"
@detailed ����������� �� ������ ����������������.
*/
class Plane : public PlaneI {
public:
	string MakeSignal() override;
};

/**
@brief ����� ��������� ��� ������ "��������"
@detailed ����������� �� ������ ������������������.
*/
class HelicopterI : public AirTransport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief ����� "��������"
@detailed ����������� �� ������ �����������������.
*/
class Helicopter : public HelicopterI {
public:
	string MakeSignal() override;
};

/**
@brief ����� ��������� ��� ������ "������"
@detailed ����������� �� ������ ���������������.
*/
class LinerI : public WaterTransport {
public:
	virtual string MakeSignal() = 0 ;
};
/**
@brief ����� "������"
@detailed ����������� �� ������ ���������������.
*/
class Liner : public LinerI {
public:
	string MakeSignal() override;
};

/**
@brief ����� ��������� ��� ������ "����"
@detailed ����������� �� ������ ���������������.
*/
class YachtI : public WaterTransport {
public:
	virtual string MakeSignal() = 0;
};

/**
@brief ����� "����"
@detailed ����������� �� ������ �������������.
*/
class Yacht : public YachtI {
public:
	string MakeSignal() override;
};

/**
@brief ����� ��������� ��� ������ "�����"
@detailed ����������� �� ������ �����������������.
*/
class TrainI : public GroundTransport {
public:
	virtual string MakeSignal()= 0;
};
/**
@brief ����� "�����"
@detailed ����������� �� ������ ��������������.
*/
class Train : public TrainI {
public:
	string MakeSignal() override;
};

/**
@brief ����� ��������� ��� ������ "���������"
@detailed ����������� �� ������ �����������������.
*/
class BicycleI : public GroundTransport {
public:
	virtual string MakeSignal() = 0;
};
/**
@brief ����� "���������"
@detailed ����������� �� ������ ������������������.
*/
class Bicycle : public BicycleI {
public:
	string MakeSignal() override;
};

/**
@brief ����� ��������� ��� ������ "�������"
@detailed ����������� �� ������ �����������������.
*/
class BusI : public GroundTransport {
public:
	virtual string MakeSignal() = 0 ;
};
/**
@brief ����� "�������"
@detailed ����������� �� ������ ����������������.
*/
class Bus : public BusI {
public:
	string MakeSignal() override;
};

/**
@brief ����� ��������� ��� ������ "������"
@detailed ����������� �� ������ �����������������.
*/
class carI : public GroundTransport {
public:
	virtual string MakeSignal() = 0 ;
};

/**
@brief ����� "������"
@detailed ����������� �� ������ ���������������.
*/
class car : public carI {
public:
	string MakeSignal() override;
};

//
/**
@brief ����� ��������� ��� ������ "��������������"
@detailed ����� ������������ ����������� �� ������� ��������������� � ������������������
*/
class FlyingcarI : public carI, public  AirTransport{
public:
	virtual string MakeSignal() = 0;
};
/**
@brief ����� "��������������"
@detailed ����������� �� ������ �����������������������.
*/
class Flyingcar :public FlyingcarI {
public:
	string MakeSignal() override ;
};