## this

this �� ���̽��� self �� ����ϰ� ��ü �ڽ��� ����Ų��. (this �� ��ü�� �ּҸ� ����Ŵ)
����, this �� �� ���� �ڷ����� ������ ���� ���� �������̴�.
e.g.) SoSimple ��ü�� this �� SoSimple ���� �����ͷ� �����ϰ� SoComplex ��ü�� this �� SoComplex ���� �����ͷ� �����Ѵ�.

this �����ʹ� ���� ���� �����ϰ� ��� �ȴ�.

```cpp
ThisClass
{
private:
	int num;  // 207 ����
	
public:
	void ThisFunc(int num)
	{
		this->num = 207;
		num = 105;  // �Ű������� ���� 105�� ����
	}
}
```

�� Ŭ������ ��������� �̸��� num �̸� ThisFunc �� �Ű����� �̸��� num �̴�.
���� ������� ThisFunc �� �Ű������� num ���� ������ �����δ� ThisClass �� �Ű����� num �� ���� �ٲ� �� ������ <br>
this �����͸� �̿��Ͽ� (this->num = 207;) �Ű������� ���� ������ �� �ִ�. <br>
<br>
(python �� self.variable �� ����)

## self-reference

Self-Reference �� ��ü �ڽ��� ���� �� �� �ִ� �����ڸ� �ǹ��Ѵ�. this �����͸� �̿��ؼ� ��ü�� �ڽ��� �������� ����� �� �ִ� �������� ��ȯ���� ������ �� �ִ�.