Code example for https://medium.com/@royer.franck/unit-testing-legacy-code-big-data-classes-286c38eae98

Pre-requisites: Gmock, Test and CMake installed.

Enter any folder and run `cmake CMakeLists.txt && make && ./runTests`

* FullMock: code and unit test with a mock of the *big* data access class.
* CorruptedTest: Logic modified but unit test still pass due to pitfall of using MOCK_METHOD on *big* data class.
* Solution: Code changed to allow Mocking of only what you need without risk.
* Proof: Logic modified, cannot compile without mocking new getDataInt method in unit test.
