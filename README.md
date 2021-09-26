# BASIC CODING INTERVIEW QUESTIONS

## In C language

<b>1) What are the key features of C programming language?</b>

. C was founded by Dennis Ritchie.

. It is flexible and hence can be controlled by the programmer.

. Breaks down larger programs into smaller modules. 

. C comes with support for system programming and hence it compiles and executes with high speed when compared to other high-level languages.

<b> 2) What happens when you compile a program in C? </b>

. Source object file is sent to the compiler it gets processed and is sent as object file. 

<b> 3) What is the use of header files in C? </b>

. Header files contain the definitions and set of rules of the functions being used in the programs.

<b> 4) What happens if a headerfile is included twice? </b>

. If a header file with proper syntax is included twice, the second one gets ignored.

<b> 5) Can a program be compiled without the main() function? </b>

Yes it can be compiled but execution not possible. Using define function it is possible. 

<b> 6) What are the basic data types in C? </b>

. Int Used to represent a number (integer)

. Float Used to represent a decimal number

. Double Used to represent a decimal number with highest precision(digits after the decimal point)

. Char Single character

. Void Special purpose type without any value


<b> 7) Is it possible to store 32768 in an int data type variable?</b>

Use unsigned value if its non negative. Else long int would be fine.

<b> 8) What are Keywords in C? </b>

They are used to perform different functions. These are Reserved words. Egs: break, else, if

<b> 9) What is the difference between static & global variables? </b>

Global variables are variables which are defined outside the function. The scope of global variables begins at the point where they are defined and lasts till the end of the file/program. Whereas, static global variables are private to the source file where they are defined and do not conflict with other variables in other source files which would have the same name.

<b> 10) What is Memory Leak in C? </b>

When programmers create a memory in the heap and forget to delete it. It decreases the efficiency of the performance of the system.

<b> 11) What is Static and Dynamic memory allocation? </b>

Static memory happens at compile-time. 

Dynamic memory happens at run-time.

<b>12) What is the difference between prefix and postfix? </b>

Prefix - The value stored in the variable a gets incremented and then gets assigned to the same variable.

Postfix - The value stored in the variable a gets incremented after the execution of the particular line.

<b> 13) What is the difference between while (0) and while (1)? </b>

while(0) - program will never get executed

while(1) - infinite loop

<b> 14) What is a Dangling Pointer in C? </b>

Pointer pointing to the memory location which is deleted.

<b> 15) What is the difference between the Void and Null Pointer? </b>

Null pointers generally do not point to a valid location.

Void pointer - the type of data that it points to can be anything.

<b> 16) What is the difference between Pass by value and Pass by reference? </b>

In pass by value, changes made to the arguments in the called function will not be reflected in the calling function. 

Whereas in pass by reference, the changes made to the arguments in the called function will be reflected in the calling function.

<b> 17) What is a pointer on a pointer in C programming language? </b>

A pointer variable that contains the address of another pointer variable is called as a pointer on a pointer.

<b> 18) Difference between malloc() and calloc() functions? </b>

Both allocate memory dynamically, which means that memory is allocated during the runtime.

<b> 19) What is the difference between Arrays and Pointers? </b>

An array is a collection of elements of similar data type whereas the pointer is a variable that stores the address of another variable.

<b> 20) What is the difference between a structure and a Union? </b>

. All the members of a structure can be accessed simultaneously but union can access only one member at a time.

. Lesser memory is needed for a union variable than a structure variable of the same type

<b> 1) What are the different types of modifiers in C? </b>

signed, unsigned, long, short, long long

<b> 2) What is a static variable? </b>

A static local variable retains its value between a function call and it's default value is 0.

<b> 3) What are lvalue and rvalue? </b>

rvalue holds the expression of an assignment operator. lvalue holds variable.

<b> 4) What is typecasting? </b>

Typecasting is a way to convert a variable/constant from one type to another type.

<b> 5) What are the stages in C compilation? </b>

Preprocessing, compilation, assembling and linking.

<b> 6) Difference between the header file and library file. </b>

library file holds function body whereas header file holds the prototype.

<b> 7) What is a ternary operator? </b>

Used instead of if else condition. (?, :)

<b> 8) Difference between memcpy() and strcpy() functions in C. </b>

memcpy() function is used to copy a specified number of bytes from one memory to another.

Whereas, strcpy() function is used to copy the contents of one string into another string.

<b> 9) What is const pointer in C? </b>

Once const pointer is made to point one variable, we can’t change this pointer to point to any other variable.

<b> 10) What is the difference between variable declaration and variable definition in C? </b>

Variable declaration tells the compiler about data type and size of the variable. Whereas, variable definition allocates memory to the variable

<b> 11) What is enum in C? </b>

Enumeration is a data type that consists of named integer constants as a list.

<b> 12) Is there a difference between class and struct? </b>

The only difference between a class and struct are the access modifiers. Struct members are

public by default; class members are private. It is good practice to use classes when you need an

object that has methods and structs when you have a simple data object.

<b> 13) What is a main() and difference b/w void main() and int main()? </b>

main() is an entry point. 

void main() returns nothing. No need of return statement.

int main() needs a return statement.

<b> 1) What is a built-in function in C? </b>

Built-in functions are library functions. Egs: scanf, printf, etc.

<b> 2) In C, What is the #line used for? </b>

It is a preprocessor statement. Used to reset the line number.

<b> 3) How can a string be converted to a number? </b>

Use atoi function.

<b> 4) How can a number be converted to a string? </b>

Use sprintf function.

<b> 5) What are the advantages of Macro over function? </b>

Saves a lot of time.

<b> 6) Specify different types of decision control statements? </b>

.if-else

.else-if

.nested 

.switch 

<b> 7) What is call by reference in functions? </b>

When the caller function makes a function call by passing the addresses of actual parameters being passed, then this is called call by reference.

<b> 8) What is typedef? </b>

typedef is a C keyword, used to simplify the existing type declaration syntax.

<b> 9) Why is it usually a bad idea to use gets()? </b>

There would be a restriction in the input range.

<b> 10) Difference between gets() and scanf in C? </b>

scanf() is used to read any data type in C. 

gets() is used to read string input.

<b> 11) Difference between puts and printf? </b>

printf() prints string as well as variables. 

puts prints a string alone.

## In Python Language

<b> 1) What are the key features of Python? </b>

. Python is free and Open-source

. Python is easy to learn due to its clear syntax and readability

. Python is easy to interpret, making debugging easy

<b> 2) What are Keywords in Python? </b>

Keywords in Python are reserved words which are used as identifiers, function name or variable name. Egs: break, continue, while, etc. 

<b> 3) What are Literals in Python and explain about different Literals? </b>

Literals in Python refer to the data that is given in a variable or constant.

String Literals: Enclosed with quotes.

Numeric Literals: float, int and complex

Boolean Literals: 1 and 0 to represent true or false

Special Literals: Special literals are sued to classify fields that are not created. (none)

<b> 4) What are functions in Python? </b>

Functions are blocks that are used for reusability of codes.

<b> 5) What is Python? </b>

Python is a high-level, interpreted, interactive, and object-oriented scripting language. It uses English keywords frequently.

<b> 6) What is an interpreted language? </b>

Statements are esecuted line by line.

<b> 7) What is the difference between lists and tuples? </b>

Lists are mutuable whereas tuples are immutable. 

Lists consume more memory compared to lists.

<b> 8) What is dictionary in Python? </b>

A Python dictionary is a collection of items with curly braces having key value pair.

<b> 9) What are Python Modules? </b>

Files containing Python codes.

<b> 10) What is a classifier? </b>

A classifier is used to predict the class of any data point.

<b> 11) In Python how do you convert a string into lowercase? </b>

string.lower()

<b> 12) How do you get a list of all the keys in a dictionary? </b>

dict.keys()

<b> 13) How can you capitalize the first letter of a string? </b>

capitalize() function

<b> 14)  How can you insert an element at a given index in Python? </b>

Python has an inbuilt function called the insert() function.

<b> 15) How will you remove duplicate elements from a list? </b>

Using the set() function and using the list() function to convert it back to a list.

<b> 16) What is recursion and looping? </b>

Recursion is a function calling itself one or more times in it body. Looping is executed until the condition gets satisfied. 

<b> 17) Explain Python List Comprehension </b>

List comprehensions are used for transforming one list into another list.

<b> 18) What is the bytes() function? </b>

Used to convert objects into bytes.

<b> 19) What are the different types of operators in Python? </b>

Arithmetic( Addition(+), Substraction(-), Multiplication(*), Division(/), Modulus(%) ), Relational ( <, >, <=, >=, ==, !=, ),
Assignment ( =. +=, -=, /=, *=, %= ),
Logical ( and, or not ), Membership, Identity, and Bitwise Operators

<b> 20) What is __init__ in Python? </b>

An object is created from a class and _init_ methodolgy is called to acess the class attributes.

<b> 21) What is the difference between tuple and dictionary? </b>

Dictionary is mutable while a tuple is not.

<b> 22) What is pass in Python? </b>

It is used when you do not want any command to execute but a statement is required.

<b> 23) Define encapsulation in Python? </b>

Encapsulation means binding the code and the data together.

<b> 24) What is split() function used for? </b>

Split fuction is used to split a string into shorter string using defined seperators.

<b> 25) What is the type () in Python? </b>

type() is a built-in method which either returns the type of the object or returns a new type object based on the arguments passed.

<b>String:</b> A string value is a collection of one or more characters put in single, double or triple quotes.

<b>List:</b> A list object is an ordered collection of one or more data items which can be of different types, put in square brackets. 

<b>Set:</b> An unordered collection of unique objects enclosed in curly brackets

<b>Frozen set:</b> They are like a set but immutable, which means we cannot modify their values once they are created.

<b> 26) Explain Inheritance in Python with an example? </b>

Python have the ability to inherit the properties of another class.

The class that is being inherited is called a superclass or the parent class, and the class that inherits the superclass is called a derived or child class. 

<b> 27) What is scope resolution? </b>

Each and every object of python functions within its respective scope.

<b> 28) What are functions in Python? </b>

A function is a block of code which is executed only when a call is made to the function.

<b> 29) What are the common built-in data types in Python? </b>

<b> Immutable data types:</b>

Number
String
Tuple

<b>Mutable data types:</b>

List
Dictionary
Set

<b> 30. Array? </b>

Consists of only those elements having the same data type.

<b> 31. Does Python have access modifiers? </b>

The access modifiers in Python are used to modify the default scope of variables. There are three types of access modifiers in Python: public, private, and protected.
  
## Data Science 

<b> 1. What are the differences between supervised and unsupervised learning? </b>

Supervised uses labelled data as input whereas Unsupervised data uses unlabelled data as input.

<b> 2. How is logistic regression done? </b>

Logistic regression measures the relationship between the dependent variable and one or more independent variables by the concept of probability.

<b> 3. What is Pandas? </b>

Pandas is one of the tools in Machine Learning which is used for data cleaning and analysis. It has features which are used for exploring, cleaning, transforming and visualizing from data.

<b> 4. What are dataframes? </b>

A Data frame is a two-dimensional data structure

<b> 5. What is pandas groupby? </b>

It allows you to split your data into separate groups to perform computations for better analysis.

<b> 6. How can you avoid overfitting your model? </b>

Use cross-validation techniques, such as k folds cross-validation

<b> 7. Differentiate between univariate, bivariate, and multivariate analysis. </b>

Univariate data contains only one variable. 

Bivariate data involves two different variables. 

Multivariate data involves three or more variables.

<b> 8. What is Data Science? </b>

It is a field of study that deals with programming, statistics and mathematics. 

<b> 9. RMSE and MSE? </b>

RMSE and MSE are two of the most common measures of accuracy for a linear regression model. 

RMSE indicates the Root Mean Square Error. 

MSE indicates the Mean Square Error.

<b> 10. How can you select k for k-means? </b>

We use the elbow method to select k for k-means clustering. The idea of the elbow method is to run k-means clustering on the data set where 'k' is the number of clusters.

<b> 11. How to combine dataframes in pandas? </b>

concat(), append() and join() functions in pandas.

<b> 12. What kind of joins does pandas offer? </b>

Pandas has a left join, inner join, right join and an outer join.

<b> 13. How to access first five and last five data entries? </b>

Use head to accesss the first five data entries. 

Tail for last five data entries.

<b> 14. Explain cross-validation. </b>

Cross-validation is to term a data set to test the model in the training phase (i.e. validation data set) to limit problems like overfitting.

<b> 15. What is the goal of A/B Testing? </b>

It is a way to compare the two versions of a variable to find out which performs better in a controlled environment.

<b> 16. What are the drawbacks of the linear model? </b>

Overfitting

It can't be used for count outcomes or binary outcomes

<b> 17. What are eigenvalue and eigenvector? </b>

Eigenvalues are the directions along which a particular linear transformation acts by flipping, compressing, or stretching.

Eigenvectors are for understanding linear transformations. In data analysis, we usually calculate the eigenvectors for a correlation or covariance matrix. 

<b> 18. What are the types of biases that can occur during sampling? </b>

Selection bias

Undercoverage bias

Survivorship bias

<b> 19. Random forest </b>

A random forest is built up of a number of decision trees.

If you split the data into different packages and make a decision tree in each of the different groups of data, the random forest brings all those trees together.

<b> 20. What is a NumPy in Python? </b>


NumPy can be used to perform a wide variety of mathematical operations on arrays.


# Electronics 

<b>What is Electronics? </b>

The study and use of electrical devices that operate by controlling the flow of electrons or other electrically charged particles.

<b> What is the difference between Electronics and Electrical?</b>

Electronics work on DC and with a voltage range of -48vDC to +48vDC. Examples: Computer, radio, T.V, etc.

Electric devices use line voltage (120vAC, 240vAC, etc...). Examples: are incandescent lights, heaters, fridge, stove, etc...

<b> What is communication? </b>

Communication says as transferring of message from one place to another place called communication.

<b> Different types of communications? Explain. </b>

Analog and digital communication.

Analog is the process of taking an audio or video signal (the human voice) and translating it into electronic pulses. 

Digital on the other hand is breaking the signal into a binary format where the audio or video data is represented by a series of "1"s and "0"s.

<b>What is diode? </b>

 In electronics, a diode is a two-terminal device. 
 
 Diodes have two active electrodes between which the signal of interest may flow, and most are used for their unidirectional current property.
 
<b> What is transistor? </b>

A transistor is a semiconductor device commonly used to amplify or switch electronic signals.

<b> What is sampling? </b>

The process of obtaining a set of samples from a continuous function of time x(t) is referred to as sampling.

<b> State sampling theorem. </b>

It states that, while taking the samples of a continuous signal, it has to be taken care that the sampling rate is equal to or greater than twice the cut off frequency and the minimum sampling rate is known as the Nyquist rate.

<b> What are the advantages of resistors? </b>

Resistors are very small in size.

It is very easy to carry resistors from one place to another place.

Resistors are very cheap.

<b> What is the principle of microwave? </b>

Microwave essentially means very short wave. The main reason why we have to go in for microwave frequency for communication is that lower frequency band are congested and demand for point to point communication continue to increase.

<b> What is cut-off frequency? </b>

The frequency at which the response is -3dB with respect to the maximum response.

<b> What is pass band? </b>

Passband is the range of frequencies or wavelengths that can pass through a filter without being attenuated.

<b> What is stop band? </b>

A stopband is a band of frequencies, between specified limits, in which a circuit, such as a filter or telephone circuit, does not let signals through, or the attenuation is above the required stopband attenuation level.

<b> Define Power Rating? </b>

Maximum value of power  that can be dissipated without failure.

Pd= V f x I f.

<b>What is rheostat.</b>

Rheostat is a type of variable resistor which is used to control the flow of electric current by manually increasing or decreasing its resistance.

<b>What is demodulation?</b>

Demodulation is the act of removing the modulation from an analog signal to get the original baseband signal back. Demodulating is necessary because the receiver system receives a modulated signal with specific characteristics and it needs to turn it to base-band.

<b>Explain radio environment in building.</b>

Building penetration: Building penetration depends on the material used for construction and architecture used. This varies building to building and is based on building construction.

Building Height Effect: The signal strength is always higher at top floor and generally floor gain height is about 2.7dB/floor which is not dependent on building construction.

Building Floor Reception: The signal isolation between floors in a multi floor building is on the average about 20dB. Within a floor of 150 * 150 feet, the propagation loss due to interior walls, depending on the wall materials is about 20 dB between the strong and the weak areas.

<b>What is resistor?</b>

A resistor is a two-terminal electronic component that opposes an electric current by producing a voltage drop between its terminals in proportion to the current, that is, in accordance with Ohm's law:
V = IR.

<b> What is inductor? </b>

An inductor is a passive electrical device employed in electrical circuits for its property of inductance. An inductor can take many forms.

<b> What is conductor? </b>

A substance, body, or device that readily conducts heat, electricity, sound, etc. Copper is a good conductor of electricity.

<b>What is a semi conductor?</b>

A semiconductor is a solid material that has electrical conductivity in between that of a conductor and that of an insulator(An Insulator is a material that resists the flow of electric current. It is an object intended to support or separate electrical conductors without passing current through itself); it can vary over that wide range either permanently or dynamically.

<b>Name the modulation techniques.</b>

For Analog modulation--AM, SSB, FM, PM and SM

Digital modulation--OOK, FSK, ASK, Psk, QAM, MSK, CPM, PPM, TCM, OFDM

<b>Explain AM and FM.</b>

AM-Amplitude modulation is a type of modulation where the amplitude of the carrier signal is varied in accordance with the information bearing signal.
FM-Frequency modulation is a type of modulation where the frequency of the carrier signal is varied in accordance with the information bearing signal.

<b>  Explain RF? </b>

Radio frequency (RF) is a frequency or rate of oscillation within the range of about 3 Hz to 300 GHz. This range corresponds to frequency of alternating current electrical signals used to produce and detect radio waves. Since most of this range is beyond the vibration rate that most mechanical systems can respond to, RF usually refers to oscillations in electrical circuits or electromagnetic radiation.

<b> What is modulation? And where it is utilized? </b>

Modulation is the process of varying some characteristic of a periodic wave with an external signals.

Modulation is utilized to send an information bearing signal over long distances.

<b>Where do we use AM and FM?</b>

AM is used for video signals for example TV. Ranges from 535 to 1705 kHz.

FM is used for audio signals for example Radio. Ranges from 88 to 108 MHz.

<b> What is a base station? </b>

Base station is a radio receiver/transmitter that serves as the hub of the local wireless network, and may also be the gateway between a wired network and the wireless network.

<b> What are the parts of Network Management System (NMS)?</b>

OMC: Operation and maintenance center – Computerized monitoring center.
NMC: Network Management Center – Centralized control of a network is done here.
OSS: Operation and support system – Used for supporting activities performed in an OMC and/or NMC.

<b> How many satellites are required to cover the earth? </b>

3 satellites are required to cover the entire earth, which is placed at 120 degree to each other. The life span of the satellite is about 15 years.

<b> What are GPRS services? </b>

GPRS services are defined to fall in one of the two categories:

PTP (Point to point)
PTM (Point to Multi point)
Some of the GPRS services are not likely to be provided by network operators during early deployment of GPRS due in part to the phased development of standard. Market demand is another factor affecting the decision of operators regarding which services to offer first.

<b> What is a repeater?</b>

A repeater is an electronic device that receives a signal and retransmits it at a higher level and/or higher power, or onto the other side of an obstruction, so that the signal can cover longer distances without degradation.

<b> What is an Amplifier? </b>

An electronic device or electrical circuit that is used to boost (amplify) the power, voltage or current of an applied signal.

<b> Example for negative feedback and positive feedback? </b>

Example for ve feedback is ---Amplifiers And for +ve feedback is Oscillators

<b> How can a Pseudo Random Noise Code be usable? </b>

To be usable for direct sequence spreading, a PN code must meet the following conditions:

Sequence must be built from 2 leveled numbers.
The codes must have sharp auto correlation peak to enable code synchronization.
Codes must have a low cross-correlation value, the lower it is, more are the number of users which can be allowed in the system.
The codes should be “balanced” i.e. the difference between ones and zeros in code may only be one.

<b> What is Oscillator? </b>

An oscillator is a circuit that creates a waveform output from a direct current input. The two main types of oscillator are harmonic and relaxation. The harmonic oscillators have smooth curved waveforms, while relaxation oscillators have waveforms with sharp changes.

<b> What is an Integrated Circuit?  </b>

An integrated circuit (IC), also called a microchip, is an electronic circuit etched onto a silicon chip. Their main advantages are low cost, low power, high performance, and very small size.

<b> What is handover and what are its types? </b>

Handover in mobile communication refers to the process of transferring a call from one network cell to another without breaking the call. There are two types of handover which are as follows:

Hard Handoff: hard handoff is the process in which the cell connection is disconnected from the previous cell before it is made with the new one.
Soft Handoff: It is the process in which a new connection is established first before disconnecting the old one. It is thus more efficient and smart.


<b> What is crosstalk? </b>

Crosstalk is a form of interference caused by signals in nearby conductors. The most common example is hearing an unwanted conversation on the telephone. Crosstalk can also occur in radios, televisions, networking equipment, and even electric guitars.


<b> What is op-amp? </b>

 An operational amplifier, often called an op-amp , is a DC-coupled high-gain electronic voltage amplifier with differential inputs[1] and, usually, a single output. Typically the output of the op-amp is controlled either by negative feedback, which largely determines the magnitude of its output voltage gain, or by positive feedback, which facilitates regenerative gain and oscillation.
 
 
 <b> Explain Bluetooth.</b>
 
 Bluetooth is designed to be a personal area network, where participating entities are mobile and require sporadic communication with others. It is Omni directional i.e. it does not have line of sight limitation like infra red does. Ericsson started the work on Bluetooth and named it after the Danish king Harold Bluetooth. Bluetooth operates in the 2.4 GHz area of spectrum and provides a range of 10 meters. It offers transfer speeds of around 720 Kbps.
 
 <b> What is a rectifier? </b>
 
 A rectifier transforms alternating current (AC) into direct current (DC). Its normal function is charging batteries.
 
<b>Types of Rectifier? </b>
 
 Half-wave Rectifier.
Full Wave Rectifier.
Bridge Rectifier.

<b> Applications of each rectifier </b>

A half-wave rectifier is used in soldering iron types of circuit.

Full Wave Bridge Rectifier is used to detect the amplitude of the modulating radio signal.

Bridge rectifier circuits are also used to supply steady and polarized Dc voltage in electric welding.
 
 <b> What is a feedback? </b>
 
 Feedback is a process whereby some proportion of the output signal of a system is passed (fed back) to the input. This is often used to control the dynamic behaviour of the system.
 
 <b> What is CDMA, TDMA, FDMA? </b>
 
 Code division multiple access (CDMA) is a channel access method utilized by various radio communication technologies. CDMA employs spread-spectrum technology and a special coding scheme (where each transmitter is assigned a code) to allow multiple users to be multiplexed over the same physical channel. By contrast, time division multiple access (TDMA) divides access by time, while frequency-division multiple access (FDMA) divides it by frequency.
An analogy to the problem of multiple access is a room (channel) in which people wish to communicate with each other. To avoid confusion, people could take turns speaking (time division), speak at different pitches (frequency division), or speak in different directions (spatial division). In CDMA, they would speak different languages. People speaking the same language can understand each other, but not other people. Similarly, in radio CDMA, each group of users is given a shared code. Many codes occupy the same channel, but only users associated with a particular code can understand each other.


<b> Explain different types of feedback </b>

Types of feedback:
Negative feedback: This tends to reduce output (but in amplifiers, stabilizes and linearizes operation). Negative feedback feeds part of a system's output, inverted, into the system's input; generally with the result that fluctuations are attenuated.
Positive feedback: This tends to increase output. Positive feedback, sometimes referred to as "cumulative causation", is a feedback loop system in which the system responds to perturbation (A perturbation means a system, is an alteration of function, induced by external or internal mechanisms) in the same direction as the perturbation. In contrast, a system that responds to the perturbation in the opposite direction is called a negative feedback system.
Bipolar feedback: which can either increase or decrease output.

<b> What are the main divisions of power system? </b>

The generating system,transmission system,and distribution system


<b> What is Instrumentation Amplifier (IA) and what are all the advantages? </b>

An instrumentation amplifier is a differential op-amp circuit providing high input impedances with ease of gain adjustment by varying a single resistor.

<b> Explain the concept of frequency re-use. </b>

The whole of the geographical area is divided into hexagonal shape geometrical area called cell and each cell having its own transceiver. Each BTS (cell site) allocated different band of frequency or different channel. Each BTS antenna is designed in such a way that i cover cell area in which it is placed with frequency allotted without interfering other sell signal.


# Basics of C++

C++ is a powerful and all-purpose programming tool developed by Bjarne Stroustrup at Bell Labs. This language is an extension of C and is by far one of the fastest object-oriented programming languages. C++ is super popular because of its high speed and compatibility.

It is widely used in the development of games and servers while some of the real-world applications of C++ are as follows

Operating systems

GUI based applications

Distributed systems

Database software

Banking applications

Advanced computations and graphics

Embedded systems

<b> 1. What are the different data types present in C++? </b>

Primitive Datatype(basic datatype). Example- char, short, int, float, long, double, bool, etc.

Derived datatype. Example- array, pointer, etc.

Enumeration. Example- enum

User-defined data types. Example- structure, class, etc.


<b> 2. What is the difference between C and C++?</b>

.C is a procedure orieted programming language whereas C++ is a object oriented programming language. 

. C does not support data hiding but C++ does.

. C is a subset of C++.

. Function and operator overloading are not supported in C compared to C++.

<b> 3. What are class and object in C++? </b>

A class is a user-defined data type that has data members and member functions. An object is an instance of a class.

<b> 4. What is operator overloading? </b>

By operator overloading we can modify the default meaning to the operators like +, -, *, /, <=, etc. 
 
<b> 5. What is polymorphism in C++? </b>

Polymorphism in simple means having many forms. Its behavior is different in different situations. And this occurs when we have multiple classes that are related to each other by inheritance.

The two types of polymorphism in c++ are:

Compile Time Polymorphism
Runtime Polymorphism


<b> 6. Explain constructor in C++ </b>

The constructor is a member function that is executed automatically whenever an object is created.


<b> 7. Tell me about virtual function </b>

Virtual function is a member function in the base class that you redefine in a derived class. A virtual function is declared using the virtual keyword.


<b> 8. Compare compile time polymorphism and Runtime polymorphism </b>

Compile time is faster and achieved by overloading.

Runtime is slower and achieved by functions along with pointers.

<b> 9. What do you know about friend class and friend function? </b>

A friend class can access private, protected, and public members of other classes in which it is declared as friends.

Like friend class, friend function can also access private, protected, and public members. But, Friend functions are not member functions.


<b> 10. What are the C++ access specifiers? </b>

Public: All data members and member functions are accessible outside the class.

Protected: All data members and member functions are accessible inside the class and to the derived class.

Private: All data members and member functions are not accessible outside the class.

<b>11. Define inline function</b>

It eliminates the function calling overhead of a traditional function.

<b>12. What is a reference in C++? </b>

Reference is like a pointer. It is another name of an already existing variable.

<b> 13. What do you mean by abstraction in C++? </b>

Data hiding from users.

<b> 14. Is deconstructor overloading possible? If yes then explain and if no then why?</b>

No destructor overloading is not possible. Destructors take no arguments, so there’s only one way to destroy an object.

<b> 15. What is an abstract class and when do you use it? </b>

A class is called an abstract class whose objects can never be created. Such a class exists as a parent for the derived classes.

<b> 16. What are destructors in C++? </b>

A constructor is automatically called when an object is first created. Similarly when an object is destroyed a function called destructor automatically gets called. 

A destructor has the same name as the constructor (which is the same as the class name) but is preceded by a tilde.


<b> 17. What are the static members and static member functions? </b>

A static member function can be called even if no objects of the class exist and the static function are accessed using only the class name and the scope resolution operator ::

<b> 18. What are the advantages of C++? </b>

C++ is a highly portable language means that the software developed using C++ language can run on any platform.

C++ is an object-oriented programming language which includes the concepts such as classes, objects, inheritance, polymorphism, abstraction.

<b> 19. What is the difference between reference and pointer? </b>

Reference behaves like a temporary variable. It is necessary to initialize the variable at the time of declaration.	

The pointer is a variable which stores the address of a variable. It is not necessary to initialize the variable at the time of declaration.
