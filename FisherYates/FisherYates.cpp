// FisherYates.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <cstdlib>
using namespace std;

void Show(int* box, int size);

const int maxNum = 99;

int main()
{
    int size = 0;

    cout << "値の数を入力せよ　＞　" << flush;
    cin >> size;

    int* box = new int[size];

    if (box != NULL) {
        srand((unsigned int)time(NULL));
        for (int i = 0; i < size; ++i) {
            box[i] = rand() % maxNum + 1;
        }

        cout << endl;
        cout << "シャッフル前：" << flush;
        Show(box, size);

        for (int i = size; i > 1; --i) {
            swap(box[rand() % (i - 1)], box[i - 1]);
        }

        cout << "シャッフル後：" << flush;
        Show(box, size);

        delete[] box;
    }
}
void Show(int* box, int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d, ", box[i]);
    }
    cout << endl << endl;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
