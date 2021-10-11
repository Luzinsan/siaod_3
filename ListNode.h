#pragma once
namespace luzinsan 
{
	class ListNode
	{
	private:
		int l_info;        // �������������� ����
		ListNode* l_next; // ������ �� ��������� ������� ������
		static ListNode* BeginList; // ��������� �� ������ ���������� ������
		
	public:
		ListNode*& getBeginList();
		ListNode*& getNext();
		ListNode(); // ������������� ������
		//������� ������ �������� ������ ����� ��������
		ListNode* InsertNode(ListNode*& p, int i);

		//�������� ���������� �������� ����� ��������
		int DeleteNode(ListNode* p);

		// ������ ��������� ������
		ListNode* PrintList(ListNode* p);
		/* 
		 * �������, ������� �������� ��  ��������  ������ (���� �� ������ ����) ��������� ������� ������,
		 *        � ������� ���������� � ��������� ������ (���� �� ������ ����) ��������� ������� ������
		 */
		ListNode* Rationing(ListNode* p);
		
		ListNode* Dispose(); // ����������� ������
	};
}