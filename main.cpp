#include <opencv2/core.hpp>    // coreモジュールのヘッダーをインクルード
#include <opencv2/highgui.hpp> // highguiモジュールのヘッダーをインクルード
#include <iostream>

int main(int argc, const char* argv[])
{
// （1）幅320px、高さ240pxで赤色の画像データを生成
cv::Mat redImg(cv::Size(320, 240), CV_8UC3, cv::Scalar(0, 0, 255));

// （2）画像表示用のウィンドウを生成
cv::namedWindow("red", cv::WINDOW_AUTOSIZE);

// （3）ウィンドウに画像を表示
cv::imshow("red", redImg);

// （4）キー入力を待機
cv::waitKey(0);

// （5）作成したウィンドウを全て破棄
cv::destroyAllWindows();

return 0;
}