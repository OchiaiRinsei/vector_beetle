#pragma once
struct VEC {
	float x = 0;
	float y = 0;
};
//�x�N�g���̑傫�������߂�֐�
float magnitude(struct VEC* v);
//�x�N�g�����󂯎�����琳�K�����ĕԂ��֐�
struct VEC nomalize(struct VEC* v);
//�p�x����x�N�g�������߂�֐�
struct VEC vecFromAngle(float angle);
//�Ȃ��p��Ԃ��֐�
float angleBetweenTowVecs(struct VEC* a, struct VEC* b);