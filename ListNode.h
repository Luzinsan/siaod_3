#pragma once
namespace luzinsan 
{
	class ListNode
	{
	private:
		int l_info;        // информационное поле
		ListNode* l_next; // ссылка на следующий элемент списка
		static ListNode* BeginList; // указатель на начало кольцевого списка
		
	public:
		ListNode*& getBeginList();
		ListNode*& getNext();
		ListNode(); // инициализация списка
		//Вставка нового элемента списка после текущего
		ListNode* InsertNode(ListNode*& p, int i);

		//Удаление следующего элемента после текущего
		int DeleteNode(ListNode* p);

		// Печать элементов списка
		ListNode* PrintList(ListNode* p);
		/* 
		 * Функция, которая вычитает из  элемента  списка (если он больше нуля) следующий элемент списка,
		 *        и которая складывает с элементом списка (если он меньше нуля) следующий элемент списка
		 */
		ListNode* Rationing(ListNode* p);
		
		ListNode* Dispose(); // уничтожение списка
	};
}