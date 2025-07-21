#include <iostream>
#include <tuple>
#include <string>

// #define createFString(name, args) FString<args> name(args)

template<typename... M_Args>
struct FString {
public: // non static public methods and variables

	std::tuple<M_Args...> fstring;

	FString(M_Args... m_args) {
		fstring = std::make_tuple(m_args...);
	}

	void printS() {
		FString_OPS::fprint(fstring);
	}
};

struct FString_OPS {
public: // static methods

	template<typename... Args>
	static auto createFString(Args... args) {
		FString<Args...> fstring(args);
		return Args...;
	}

	static void fprint() {
		std::cout << std::endl;
	}

	template<typename F, typename... Args>
	static void fprint(F firstArg, Args... remainingArgs) {
		std::cout << firstArg << " ";
		fprint(remainingArgs...);
	}

	template<typename Tuple, std::size_t... Is>
	static void fprint(Tuple&& t, std::index_sequence<Is...>) {
		((std::cout << std::get<Is>(t) << " ")...);
	}
};