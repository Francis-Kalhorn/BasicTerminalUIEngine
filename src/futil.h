#pragma once

#include <iostream>
#include <tuple>
#include <string>
#include <utility>

namespace ops {

	template<typename T, int... Is>
	void forEach(T&& t, std::integer_sequence<int, Is...>);

	template<typename... Ts>
	static void fprint(std::tuple<Ts...> const& t);

}

template<typename... M_Args>
struct FString {
public: // static methods

	template<typename... Args>
	static void fprint(std::tuple<Args...> Tu);
public: // non static public methods and variables

	std::tuple<M_Args...> fstring;

	FString(M_Args... m_args);

	void printS();
};