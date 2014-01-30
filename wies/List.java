class Node { 

	Node next; 

	int data; 

	public Node( int d) { 
		data = d; 
	
	}



}

public class List { 

	Node head; 


	public List() { 

	}
	public void add(int d) { 
		Node n = new Node(d); 
		n.next = head; 
		head = n; 
	}

	public static void main ( String [] args ) { 
		List l = new List();
		l.add(1);
	}	


}

