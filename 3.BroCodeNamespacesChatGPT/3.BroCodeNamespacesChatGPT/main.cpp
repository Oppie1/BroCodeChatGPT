#include <iostream>
using namespace std;

// NOTE: `using namespace std` is acceptable while learning.
// A linter or refactor tool can remove it later.

// -------------------------------------------------------------------
// NAMESPACES - Quick summary:
// Group related identifiers to avoid name collisions in large projects.
// -------------------------------------------------------------------

// A namespace named "first" with an int x = 1.
// CODE:
namespace first {

	int x = 1;

}

// A namespace named "second" with an int x = 2.
// CODE:
namespace second {

	int x = 2;

}

// A namespace named "third" with an int x = 3.
// CODE:
namespace third {

	int x = 3;

}

// Main function.
// CODE:
int main() {

	// LOCAL vs GLOBAL:
	// Variables above live in their namespaces (global). This x is local to main.
	// CODE:
	int x = 5;

	// Print the local x.
	// CODE:
	cout << x << endl;

	// SCOPE RESOLUTION OPERATOR (::)
	// Use `namespace::name` to access a specific namespace's entity.
	// CODE:
	cout << first::x << endl;
	cout << second::x << endl;

	// `using namespace` brings names into scope, but a local variable still
	// shadows same-named globals. We bring `third` into scope below.
	// CODE:
	using namespace third;

	// Local x (0) shadows third::x unless you explicitly use the scope operator.
	// prints 0 (local)
	// prints 3 (explicit)
	cout << x << endl;
	cout << third::x << endl;
}