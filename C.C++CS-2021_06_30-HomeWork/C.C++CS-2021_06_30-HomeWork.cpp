#include <iostream>


int HomeWork1();
int HomeWork2();
int HomeWork3();

/// <summary>
/// main関数の中で別関数よんでください
/// </summary>
/// <returns></returns>
int main()
{
	HomeWork1();
}


/// <summary>
/// 第1問
/// x,y座標を持つ構造体Vector2を、
/// 作ってください。
/// x, yはpublicで作成し、外部で値を設定して、
/// 値が表示されることを確認してください。
/// </summary>
struct HomeWork1Vec2
{
private:

public:
	double x;
	double y;
};

int HomeWork1()
{
	HomeWork1Vec2 homeVec2;

	homeVec2.x = 1.0;
	homeVec2.y = 2.0;

	printf("x = %lf\ny = %lf\n", homeVec2.x, homeVec2.y);

	return 0;
}

/// <summary>
/// 第2問
/// x, y座標を持つ構造体Vector2を、
/// 作ってください。
/// x, yはprivateで作成し、関数を介して値を設定できるようにして、
/// 値が表示されることを確認してください。
/// </summary>
struct HomeWork2Vec2
{
private:
	double x;
	double y;
public:
	// コンストラクタ
	void GetVector2(double x, double y);

	// ゲッター
	double GetVecX() { return x; }
	double GetVecY() { return y; }
};

int HomeWork2()
{
	HomeWork2Vec2 homeVec2;

	// 代入
	homeVec2.GetVector2(2.0, 3.0);
	
	printf("x = %lf\ny = %lf\n", homeVec2.GetVecX(), homeVec2.GetVecY());

	return 0;
}

void HomeWork2Vec2::GetVector2(double x, double y)
{
	this -> x = x;
	this -> y = y;
}

/// <summary>
/// 第３問
/// x, y, z座標を持つ構造体Vector3を
/// 作ってください。
/// x, y, zはprivateで作成し、関数を介して値を設定できるようにして、
/// 値が表示されることを確認してください。
/// </summary>

struct HomeWork3Vec3
{
private:
	double x;
	double y;
	double z;
public:

	// コンストラクタ
	void GetVector3(double x, double y,double z);

	// ゲッター
	double GetVecX() { return x; }
	double GetVecY() { return y; }
	double GetVecZ() { return z; }
};

int HomeWork3()
{
	HomeWork3Vec3 homeVec3;

	// 代入
	homeVec3.GetVector3(2.0, 3.0,5.0);

	printf("x = %lf\ny = %lf\nz = %lf\n", homeVec3.GetVecX(), homeVec3.GetVecY(), homeVec3.GetVecZ());

	return 0;
}

void HomeWork3Vec3::GetVector3(double x, double y, double z)
{
	this -> x = x;
	this -> y = y;
	this -> z = z;
}
