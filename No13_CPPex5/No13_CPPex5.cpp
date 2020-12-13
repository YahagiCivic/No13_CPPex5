#include <iostream>
#include "getVolumeSurface.h"

using namespace std;
//#include "getVolumeSurface.h"


int main()
{
	double x;	//幅
	double y;	//高さ
	double z;	//奥行
	double volume;	//体積
	double surface; //表面積
	double packSize; //送れる宅急便サイズ
	double size; //箱の大きさ(xyzの合計)
	double weight; //箱の重さ
	int BoxCount; //箱の個数

	cout << "箱の数を入力：";
	cin >> BoxCount;

	for (int i = 0; i < BoxCount; i++) {
		cout << "幅を入力：";
		cin >> x;
		cout << "高さを入力：";
		cin >> y;
		cout << "奥行を入力：";
		cin >> z;
		cout << "重量を入力：";
		cin >> weight;

		getVolumeSurface(&volume, &surface, x, y, z, weight, &size, &packSize);
		if (x < 0 || y < 0 || z < 0 || weight < 0 || weight > 25 || size < 0 || size > 160)
		{
			cout << "" << endl;
			cout << "この荷物は送ることができません" << endl;
			cout << "" << endl;
		}
		else {
			cout << "" << endl;
			cout << "体積は" << volume << endl;
			cout << "表面積は" << surface << endl;
			cout << "" << endl;
			cout << packSize << "サイズで送ることができます" << endl;
			cout << "" << endl;
		}
	}

	system("pause");
	return 0;
}