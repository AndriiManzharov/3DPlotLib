#pragma once
class Axes
{
public:
	Axes();
	~Axes();
	void showXAxis(bool show);
	void showYAxis(bool show);
	void showZAxis(bool show);
	void showXYZPlate(bool state);


private:
	bool XAxis = true;
	bool YAxis = true;
	bool ZAxis = true;
	bool XYZPlate = true;
};
