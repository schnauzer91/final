#include "check.h"

int checkInputStr (char str [20], int length) {

    int i;					 // ���� �� ����

	for (i = 0 ; i <length; i ++) {
		if ((str [i] < '0' || '9' < str [i]) && (str [i] < 'a' || 'z' < str[i])
            && (str[i] < 'A' || 'Z' < str [i])) {
			// �߸��� ���ڰ� ���ǰ� �ֱ� ������ 1�� ��ȯ
			return 1;
		}
	}
	// ������� ���� ��� ��ȿ�� �����̹Ƿ� 0�� ��ȯ
	return 0;
}
