#include"libOne.h"
#include"VEC.h"
//�x�N�g���̑傫�������߂�֐�
float magnitude(struct VEC* v) {
	return sqrt(v->x * v->x + v->y * v->y);
}
//�x�N�g�����󂯎�����琳�K�����ĕԂ��֐�
struct VEC nomalize(struct VEC* v) {
	float mag = magnitude(v);
	struct VEC tmp;
	if (mag > 0) {
		tmp.x = v->x / mag;
		tmp.y = v->y / mag;
	}
	return tmp;
}
//�p�x����x�N�g�������߂�֐�
struct VEC vecFromAngle(float angle) {
	struct VEC tmp;
	tmp.x = sin(angle);
	tmp.y = -cos(angle);
	return tmp;
}
//�Ȃ��p��Ԃ��֐�
float angleBetweenTowVecs(struct VEC* a, struct VEC* b) {
	float dp = a->x * b->x + a->y * b->y;
	float cp = a->x* b->y - a->y * b->x;
	return atan2(cp, dp);
}