	TreeSet<Integer> st = new TreeSet<>();
		
		st.add(8);
		st.add(98);
		
		st.add(90);
		
		st.add(10);
		
		st.add(20);
		
		st.add(60);
		
		
		System.out.println(st);
		
		int num = st.ceiling(20);
		
		//System.out.println(num);
		
		   num = st.higher(20);
		   
	 //  System.out.println(num);
	   
	     num = st.lower(20);
	     
	 //	System.out.println(num);
	 	
	 	 num = st.floor(20);
	 	 
	 //	System.out.println(num);
		
		num = st.first();
		
	 //   System.out.println(num);
		
		num = st.last();
		
	//	System.out.println(num);
		
		if(st.contains(20))
		{
			
			
		//	System.out.println("yes");
			
		}
		
		else
		{
			
		///	System.out.println("no");
			
		}
		
		
		List<Integer> list = new ArrayList(st);
		
		
		int idx = Collections.binarySearch(list , 20);
		
		System.out.println(idx);
