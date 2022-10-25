## this

this 는 파이썬의 self 의 비슷하게 객체 자신을 가르킨다. (this 는 객체의 주소를 가리킴)
따라서, this 는 그 값과 자료형이 정해져 있지 않은 포인터이다.
e.g.) SoSimple 객체의 this 는 SoSimple 형의 포인터로 선언하고 SoComplex 객체의 this 는 SoComplex 형의 포인터로 선언한다.

this 포인터는 또한 제법 유용하게 사용 된다.

```cpp
ThisClass
{
private:
	int num;  // 207 저장
	
public:
	void ThisFunc(int num)
	{
		this->num = 207;
		num = 105;  // 매개변수의 값을 105로 변경
	}
}
```

위 클래스의 멤버변수의 이름은 num 이며 ThisFunc 의 매개변수 이름도 num 이다.
따라서 원래라면 ThisFunc 의 매개변수인 num 으로 들어오는 값으로는 ThisClass 의 매개변수 num 의 값을 바꿀 수 없지만 <br>
this 포인터를 이용하여 (this->num = 207;) 매개변수의 값을 변경할 수 있다. <br>
<br>
(python 의 self.variable 과 같음)

## self-reference

Self-Reference 란 개체 자신을 참조 할 수 있는 참조자를 의민한다. this 포인터를 이용해서 객체가 자신의 ㅊ마조에 사용할 수 있는 참조자의 반환문을 구성할 수 있다.