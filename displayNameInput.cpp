#include "display.h"
#include "check.h"
#include "player.h"
#include "set.h"

using namespace std;

Player player;

void displayNameInput() {

    char input [100];
    int inputChecker;
    int length;

    // �Է� ����
    do {
        system("cls");

        inputChecker = 1;

		cout << " �÷��̾��� �̸��� �Է��Ͻʽÿ� " << endl;
		cout << " �� ����/���� 20 ���ڱ��� " << endl;

        do {
            cout << " > " << endl;
            cin >> input;
            length = strlen(input);
            if (length> 20) {
				cout << " �Է� ���ڰ� �ʹ� �����ϴ�. " << endl;
			} else  if (length == 0 ) {
				cout << " �ƹ��͵� �ԷµǾ� ���� �ʽ��ϴ�. " << endl;
			} else {
				inputChecker = checkInputStr (input, length);
				if (inputChecker == 1 ) {
					cout << " �߸��� ���ڰ� ���ǰ� �ֽ��ϴ�." << endl;
				}
			}
        } while (inputChecker);

        //Player player;
        //strcpy(player.name, input);

        player.set_name(input);
        player.get_name();
        // setPlayerState => �ɷ�ġ�� ���� �����Ѵ�.
        setPlayerState(length);
        cout << " " << endl;

        cout << " " << endl;
        cout << " " << endl;

    } while (input [0] == 'n' );
}
