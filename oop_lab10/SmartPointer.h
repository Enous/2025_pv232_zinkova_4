#pragma once

template <typename T>
class SmartPointer
{
private:
	T* data;
public:
	explicit SmartPointer(T* d = nullptr) : data(d) {}
	SmartPointer(const SmartPointer&) = delete;
	SmartPointer(SmartPointer&& d) : data(d.release()) {}
	~SmartPointer() { delete data; }

	T* get() const { return data; }

	void reset(T* d = nullptr)
	{
		delete data;
		data = d;
	}

	void release()
	{
		T* return_val = data;
		data = nullptr;

		return return_val;
	}

	T* operator->() const { return get(); }
	T& operator *() const
	{
		if (data)
			return *data;

		throw "trying to dereference a null pointer";
	}

	SmartPointer& operator=(SmartPointer&& obj)
	{
		if (this != &obj)
		{
			delete data;
			data = obj.data;
			obj.data = nullptr;
		}

		return *this;
	}

	SmartPointer& operator=(const SmartPointer&) = delete;
};