#pragma once
#include <iostream>
#include ""
using std::cout;
using std::endl;

namespace myQueue {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) {
			info = value;
			next = prev = nullptr;
		}
	};

	//Queueue - FIFO = first in, first out
	template <typename U>
	class Queue {
	protected:
		Node<U>* head;
		Node<U>* current;
	public:
		Queue() {
			head = current = nullptr;
		}
		~Queue() {
			while (!isEmpty()) {

				pop_front();
			}

		}//���������

		bool isEmpty()const {
			return head == nullptr;

		}//���������
		U first()const {
			if (isEmpty()) throw "My queue is empty; ";
			return head->info;
		}//���������

		void push_back(U value) {
			Node<U>* el = new Node<U>(value);
			if (isEmpty()) head = current = el;
			else {
				current->next = el;
				el->prev = current;
				current = el;


			}

		}
		void pop_front() {
			if (!isEmpty()) {
				if (head != current) {
					head = head->next;
					delete head->prev;
				}
				else {
					delete head;
					head = current = nullptr;
				}

			}


		}//���������

		void show()const {
			if (isEmpty())cout << "Queue empty;" << endl;

			Node <U>* p = head;
			while (p != nullptr) {
				cout << p->info << " ";
				p = p->next;
			}
			cout << endl;


		}//���������
	};
	class Ingridient {
	protected:
		Node<string>* head;
		Node<string>* current;
		string Ingr;
		int time;
	public:
		Ingridient() {
			head = current = NULL;
			Ingr = "";
			time = 0;
		}
		bool isEmpty()const {
			return head == nullptr;

		}//���������
		void addIngridient(string Ingridient,int time) {
	

			Node<string>* ing = new Node<string>(string Ingridient, int time);
			if (isEmpty()) head = current = ing;
			else {
				current->next = ing;
				ing->prev = current;
				current = ing;


			}

		}

	};
}
