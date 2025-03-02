#include <iostream>
using namespace std;

class MyQueue{
	private:
		int Scores[100];
		int front, rear, n;
		
	public:
			MyQueue(){
			front = 0;
			rear = 0;
			n = 0;
		}
	public:
		void Enqueue(int j){
			Scores[rear ++] = j;
			if (rear > 9)
			rear = 0;
			n ++;
		}
	public:
		void Dequeue(){
			int r = Scores[front ++];
			if (front > 9)
			front = 0;
			n --;
		}
	public:
		int peek(){
			return Scores[front];
		}
};
int main(int argc, char** argv) {
	MyQueue Q1;
	
	Q1.Enqueue(20);
	Q1.Enqueue(70);
	Q1.Enqueue(30);
	Q1.Enqueue(60);
	Q1.Enqueue(40);
	
	cout << "Front before Dequeuing "<<Q1.peek()<< endl;
	Q1.Dequeue();
	cout <<"New front after Dequeuing " <<Q1.peek()<< endl;
	
	return 0;
}
