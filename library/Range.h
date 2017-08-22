/*
 * Range.h
 * http://www.cnblogs.com/h46incon/archive/2013/06/02/3113737.html
 *  Created on: 2016年10月10日
 *  Author: ssz
 *  Version: V0.1
 *  Usage：
 *	for(auto i : Range(-10,10))
 *		cout << i <<" ";
 */

#ifndef RANGE_H_
#define RANGE_H_
// 一个仿迭代器 FakeIter ，其对一个数值进行封装，并重载必须的操作符。
class FakeIter {
public:
	explicit FakeIter(int val) :
			sdwValue(val) {
	}

	bool operator !=(const FakeIter& other) const {
		return (this->GetValue()) != (other.GetValue());
	}

	int operator*() const {
		return GetValue();
	}

	const FakeIter& operator++() {
		++sdwValue;
		return *this;
	}

private:
	int GetValue() const {
		return sdwValue;
	}
	int sdwValue;
};

// 至于“容器”类的实现，就更简单了：实现begin()和end()方法，并返回上面的FakeIter就好了。
class Range {
public:
	Range(int begin_v, int end_v) :
			sdwBeginVal(begin_v), sdwEndVal(end_v) {
	}

	~Range() {
	}

	FakeIter begin() const {
		return FakeIter(sdwBeginVal);
	}

	FakeIter end() const {
		return FakeIter(sdwEndVal);
	}
private:
	int sdwBeginVal;
	int sdwEndVal;
};

#endif /* RANGE_H_ */
