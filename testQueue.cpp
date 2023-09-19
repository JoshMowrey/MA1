
#include "testQueue.h"


/*Test ID: Size queue check
    Unit: queue::size
    Description: checks if the queue::size function 
    returns 0 if empty
    Test Steps: 
        1. Creates a empty queue
        2. Invoke queue::size()
        3. Checks if queue::size() == 0
    Test data: size = 0
    Precondition: queue object is empty
    Postconidition: queue object is still empty
    Expected result: queue::size() returns 0 
    Failed returned 1
    */
void test::testSize(){
    cout << "Test ID: Size queue check\n    Unit: queue::size\n    ";
    cout <<"Description: checks if the queue::size function     \nreturns 0 if empty\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n        2. Invoke queue::size()\n        3. Checks if queue::size() == 0\n    ";
    cout << "Test data: size = 0\n    Precondition: queue object is empty\n    ";
    cout << "Postconidition: queue object is still empty\n    Expected result: queue::size() returns 0 \n";
    queue newqueue;
    if (newqueue.size() == 0){
        cout << "Actual result: 0 is returned";
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Actual result: " << newqueue.size() << "is returned";
        cout << "\n    Status: failed\n\n";
    }
}

/*Test ID: isEmpty queue check
    Unit: queue::isEmpty
    Description: checks if the queue::isEmpty function 
    returns true if empty
    Test Steps: 
        1. Creates a empty queue
        2. Invoke queue::isEmpty()
        3. Checks if queue::isEmpty() == true
    Test data: size = 0
    Precondition: queue object is empty
    Postconidition: queue object is still empty
    Expected result: queue::isEmpty() returns true
    Status passed
    */

   void test::testisEmpty(){
    cout << "Test ID: isEmpty queue check\n    Unit: queue::isEmpty\n    ";
    cout <<"Description: checks if the queue::isEmpty function     \nreturns true if empty\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n        2. Invoke queue::isEmpty()\n        3. Checks if queue::isEmpty() == true\n    ";
    cout << "Test data: size = 0\n    Precondition: queue object is empty\n    ";
    cout << "Postconidition: queue object is still empty\n    Expected result: queue::isEmty() returns  true\n";
    queue newqueue;
    if (newqueue.isEmpty()){
        cout << "Actual result: true is returned";
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Actual result: false is returned";
        cout << "\n    Status: failed\n\n";
    }
}


/*Test ID: isFull queue check
    Unit: queue::isFull
    Description: checks if the queue::isFull() function 
    returns true if Full
    Test Steps: 
        1. Creates a empty queue
        2. invokes queue::enqueue() 10 times 
        3. Invoke queue::isFull()
        4. Checks if queue::isFull() == true 
    Test data: size = 0
    Precondition: queue object is Full
    Postconidition: queue object is still Full
    Expected result: queue::isFull() returns true
    Status Failed
    */

   void test::testisFull(){
    cout << "Test ID: isFull queue check\n    Unit: queue::isFull\n    ";
    cout <<"Description: checks if the queue::isFull() function      \nreturns true if Full\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n       2. invokes queue::enqueue() 10 times \n        3. Invoke queue::isFull()\n        4. Checks if queue::isFull() == true\n";
    cout << "Test data: size = 0\n    Precondition: queue object is full\n    ";
    cout << "Postconidition: queue object is still full\n    Expected result: queue::isFull() returns true\n";
    queue newqueue;
    for (int i = 0; i < 10; i++){
        newqueue.enqueue(1);
    }

    if (newqueue.isFull()){
        cout << "Actual result: true is returned";
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Actual result: false is returned";
        cout << "\n    Status: failed\n\n";
    }
}

/*Test ID: dequeue queue empty queue check
    Unit: queue::dequeue
    Description: checks if the queue::deqeueue function 
    returns prints to console if empty
    Test Steps: 
        1. Creates a empty queue
        2. Invoke queue::dequeue()
        3. Checks if queue::dequeue() prints to the console
    Test data: size = 0
    Precondition: queue object is empty
    Postconidition: queue object is still empty
    Expected result: UnderFlow Program Terminated is printed 
    status failed
*/

   void test::testdequeueempty(){
    cout << "Test ID: dequeue queue empty queue check\n    Unit: queue::dequeue\n    ";
    cout <<"Description: checks if the queue::dequeue function     \nprints to console if empty\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n        2. Invoke queue::dequeue()\n        3. Checks if console has been printed to\n    ";
    cout << "Test data: size = 0\n    Precondition: queue object is empty\n    ";
    cout << "Postconidition: queue object is still empty\n    Expected result: UnderFlow Program Terminated is printed \n";
    queue newqueue;
    cout << "Actual result";
    newqueue.dequeue();
    if (newqueue.isEmpty()){
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Nothing is printed";
        cout << "\n    Status: failed\n\n";
    }
}

/*Test ID: enqueue queue empty queue check
    Unit: queue::enqueue
    Description: checks if the queue::enqeueue function 
    adds to the queue
    Test Steps: 
        1. Creates a empty queue
        2. Invoke queue::enqueue(4)
        3. Checks if queue::peek() == 4
    Test data: size = 0
    Precondition: queue object is empty
    Postconidition: queue object has one item in it 
    Expected result: int 4 is stored in queue
    Status Failed
*/

   void test::testenqueueempty(){
    cout << "Test ID: enqueue queue empty queue check\n    Unit: queue::enqueue\n    ";
    cout <<"Description: checks if the queue::enqueue function     \nadds to empty queue\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n        2. Invoke queue::enqueue(4)\n        3. Checks if queue::peek() == 4\n    ";
    cout << "Test data: size = 0\n    Precondition: queue object is empty\n    ";
    cout << "Postconidition: queue object is not empty\n    Expected result: 4 is top item in queue\n";
    queue newqueue;
    newqueue.enqueue(4);
    if (newqueue.peek() == 4){
        cout << "Actual result: 4 is returned";
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Actual result: false is returned";
        cout << "\n    Status: failed\n\n";
    }
}

/*  Test ID: enqueue queue populated queue check
    Unit: queue::enqueue
    Description: checks if the queue::enqueue function 
    returns prints to console if full
    Test Steps: 
        1. Creates a empty queue
        2. Invokes enqueue(1); 11 times 
        3. Checks if queue::enqueue() prints to the console
    Test data: size = 0
    Precondition: queue object is empty
    Postconidition: queue object is full with 10 items
    Expected result: UnderFlow Program Terminated is printed 
    Status Failed
*/

   void test::testenqueuepopulated(){
    cout << "Test ID: enqueue queue populated queue check\n    Unit: queue::enqueue\n    ";
    cout <<"Description: checks if the queue::enqueue function      \nprints to console if empty\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n        2. Invoke queue::enqueue(1) 11 times\n        3. Checks if console has been printed to\n    ";
    cout << "Test data: size = 0\n    Precondition: queue object is empty\n    ";
    cout << "Postconidition: queue object has 10 items\n    Expected result: UnderFlow Program Terminated is printed \n";
    queue newqueue;
    for (int i = 0; i < 10; i++){
        newqueue.enqueue(1);
    }
    cout << "Actual result";
    newqueue.enqueue(1);
    if (newqueue.isFull()){
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Nothing is printed";
        cout << "\n    Status: failed\n\n";
    }
}

/*  Test ID: dequeue queue populated queue check
    Unit: queue::dequeue
    Description: checks if the queue::dequeue function deletes from a populated list
    Test Steps: 
        1. Creates a empty queue
        2. Invokes enqueue(1); 2 times 
        3. Invokes enqueue(2); once
        4. Invokes dequeue();
        5. Checks if peek() == 1
    Test data: size = 0
    Precondition: queue object is empty
    Postconidition: queue object is full with 2 items
    Expected result: peek() == 2
    status failed 
*/

   void test::testdequeuepopulated(){
    cout << "Test ID: dequeue queue populated queue check\n    Unit: queue::dequeue\n    ";
    cout <<"Description: checks if the queue::dequeue function      \ndeletes from a populated list\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n        2. Invoke queue::enqueue(1) 2 times\n        3. Invokes enqueue(2); once\n        4. Invokes dequeue();\n        5. Checks if peek() == 1\n    ";
    cout << "Test data: size = 0\n    Precondition: queue object is empty\n    ";
    cout << "Postconidition: queue object has 2 items\n    Expected result: peek() == 1\n";
    queue newqueue;
    for (int i = 0; i < 2; i++){
        newqueue.enqueue(1);
    }
    
    newqueue.enqueue(2);
    newqueue.dequeue();
    if (newqueue.peek() == 2){
        cout << "Actual result: peek() = 2";
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Actual result: peek() == " << newqueue.peek();
        cout << "\n    Status: failed\n\n";
    }
}

/*  Test ID: peek queue populated queue check
    Unit: queue::peek
    Description: checks if the queue::dequeue function deletes from a populated list
    Test Steps: 
        1. Creates a empty queue
        2. Invokes enqueue(1); 2 times 
        3. Invokes enqueue(2); once
        4. Checks if peek() == 2
    Test data: size = 0
    Precondition: queue object is empty
    Postconidition: queue object is full with 3 items
    Expected result: peek() == 2
    Status Failed
*/

   void test::testpeekpopulated(){
    cout << "Test ID: peek queue populated queue check\n    Unit: peek::dequeue\n    ";
    cout <<"Description: checks if the queue::peek function      \nreads from a populated list\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n        2. Invoke queue::enqueue(1) 2 times\n        3. Invokes enqueue(2); once\n        4. Checks if peek() == 1\n    ";
    cout << "Test data: size = 0\n    Precondition: queue object is empty\n    ";
    cout << "Postconidition: queue object has 3 items\n    Expected result: peek() == 2\n";
    queue newqueue;
    for (int i = 0; i < 2; i++){
        newqueue.enqueue(1);
    }
    
    newqueue.enqueue(2);
    
    if (newqueue.peek() == 2){
        cout << "Actual result: peek() = 1";
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Actual result: peek() == " << newqueue.peek();
        cout << "\n    Status: failed\n\n";
    }
}

/*Test ID: peek queue empty queue check
    Unit: queue::peek
    Description: checks if the queue::peek function 
    returns prints to console if empty
    Test Steps: 
        1. Creates a empty queue
        2. Invoke queue::peek()
        3. Checks if queue::peek() prints to the console
    Test data: size = 0
    Precondition: queue object is empty
    Postconidition: queue object is still empty
    Expected result: UnderFlow Program Terminated is printed 
    Status: Failed
*/

   void test::testpeekempty(){
    cout << "Test ID: peek queue empty queue check\n    Unit: queue::peek\n    ";
    cout <<"Description: checks if the queue::peek function     \nprints to console if empty\n    ";
    cout << "Test Steps: \n        1. Creates a empty queue\n        2. Invoke queue::peek()\n        3. Checks if console has been printed to\n    ";
    cout << "Test data: size = 0\n    Precondition: queue object is empty\n    ";
    cout << "Postconidition: queue object is still empty\n    Expected result: UnderFlow Program Terminated is printed \n";
    queue newqueue;
    cout << "Actual result";
    newqueue.peek();
    if (newqueue.isEmpty()){
        cout << "\n    Status: Passed\n\n";
    }
    else {
        cout << "Nothing is printed";
        cout << "\n    Status: failed\n\n";
    }
}