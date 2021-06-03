#pragma once
struct VEC {
	float x = 0;
	float y = 0;
};
//ベクトルの大きさを求める関数
float magnitude(struct VEC* v);
//ベクトルを受け取ったら正規化して返す関数
struct VEC nomalize(struct VEC* v);
//角度からベクトルを求める関数
struct VEC vecFromAngle(float angle);
//なす角を返す関数
float angleBetweenTowVecs(struct VEC* a, struct VEC* b);