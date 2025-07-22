#include <iostream>
#include <tuple>
#include <string>
#include <utility>

namespace ops {

	template<typename T, int... Is>
	void forEach(T&& t, std::integer_sequence<int, Is...>) {
		auto l = { (std::cout << std::get<Is>(t) << " ", 0)... };
	}

	template<typename... Ts>
	static void fprint(std::tuple<Ts...> const& t) {
		forEach(t, std::make_integer_sequence<int, sizeof...(Ts)>());
	}

}

template<typename... M_Args>
struct FString {
public: // static methods

	template<typename... Args>
	static void fprint(std::tuple<Args...> Tu) {
		forEachInTuple(Tu);
		std::cout << std::endl;
	}
public: // non static public methods and variables

	std::tuple<M_Args...> fstring;

	FString(M_Args... m_args) {
		fstring = std::make_tuple(m_args...);
	}

	void printS() {
		ops::fprint(fstring);
	}
};
