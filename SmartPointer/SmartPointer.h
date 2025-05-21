#pragma once


template <typename T>
class SmartPointer
{
private:
	T* object;
public:
	SmartPointer(T* object = nullptr) object { object } {}
	SmartPointer(const SmartPointer&) = delete;
	SmartPointer(SmartPointer&& obj) : object(obj.release()) {}
	~SmartPointer() { delete object; }

	T* get() { return object; }

	void reset(T* obj = nullptr)
	{
		delete object;
		object = obj;
	}

	void release()
	{
		T* return_val = object;
		object = nullptr;

		return return_val;
	}

	T* operator->() const { return get(); }
	T& operator*() const
	{
		if (object)
			return *object;

		throw std::runtime_error("trying to dereference a null pointer");
	}

	SmartPointer& operator=(const SmartPointer&) = delete;
};

