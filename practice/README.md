# MacOS
## 환경
- MacBookPro 14
- Apple M1 Pro
- Ventura 13.1.4

## 설치
- `brew install opencv` 로 설치
- `/opt/homebrew/Cellar/opencv/4.8.0_1/include` 설치 확인
- vscode 에서 `c_cpp_properties.cpp` 수정
```json
{
    "configurations": [
        {
            "name": "Mac",
            "includePath": [
                "${workspaceFolder}/**",
                "/opt/homebrew/Cellar/opencv/4.8.0_1/include"
            ],
            "defines": [],
            "macFrameworkPath": [
                "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks"
            ],
            "compilerPath": "/usr/bin/g++",
            "cStandard": "c11",
            "cppStandard": "c++11",
            "intelliSenseMode": "macos-clang-arm64"
        }
    ],
    "version": 4
}
```
- `brew install pkg-config` 로 패키지 설정 관련 라이브러리 설치
- `export PKG_CONFIG_PATH=/opt/homebrew/Cellar/opencv/4.8.0_1/lib/pkgconfig` 로 환경변수 경로 설정

## 컴파일
```cpp
// main.cpp

#include "opencv2/opencv.hpp"

int main(void)
{
    cv::Mat img = cv::imread("path/to/file.jpg")

    cv::imshow("debug", img);
    cv::waitKey(0);

    return 0;
}
```
  
```shell
clang++ main.cpp -o main `pkg-config opencv4 --cflags --libs` --std=c++11
```
  
- 상기한 경로의 이미지를 읽어와 보여주는 코드를 작성 후 컴파일한다.

## tasks.json 수정
- tasks.json 은 디버깅, 컴파일 등의 옵션을 지정해주는 설정 파일이다.
```json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: clang++ 활성 파일 빌드",
			"command": "/usr/bin/clang++",
			"args": [
				"-fdiagnostics-color=always",
				"${file}",
				"-o",
				"${fileDirname}/${fileBasenameNoExtension}",
				"`pkg-config opencv4 --cflags --libs`",
				"--std=c++11"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "컴파일러: /usr/bin/clang++"
		}
	]
}
```

# Ubuntu
## 환경
- ubuntu 20.04 LTS

## 설치
