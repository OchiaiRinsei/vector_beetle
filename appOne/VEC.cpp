#include"libOne.h"
#include"VEC.h"
//ベクトルの大きさを求める関数
float magnitude(struct VEC* v) {
	return sqrt(v->x * v->x + v->y * v->y);
}
//ベクトルを受け取ったら正規化して返す関数
struct VEC nomalize(struct VEC* v) {
	float mag = magnitude(v);
	struct VEC tmp;
	if (mag > 0) {
		tmp.x = v->x / mag;
		tmp.y = v->y / mag;
	}
	return tmp;
}
//角度からベクトルを求める関数
struct VEC vecFromAngle(float angle) {
	struct VEC tmp;
	tmp.x = sin(angle);
	tmp.y = -cos(angle);
	return tmp;
}
//なす角を返す関数
float angleBetweenTowVecs(struct VEC* a, struct VEC* b) {
	float dp = a->x * b->x + a->y * b->y;
	float cp = a->x* b->y - a->y * b->x;
	return atan2(cp, dp);
}