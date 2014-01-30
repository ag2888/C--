import org.junit.*; 
import static org.junit.Assert.*; 
public class PointTest { 

	@Test public void testGetDistanceFrom() { 
	
		Point p = new Point(3,4,0,0); 
		assertTrue(p.getDistanceFrom(Point.ORIGIN == 5)); 
	} 
} 
