	Map<String  , Integer> mp = new HashMap<>();
		
		
		  mp.put("a",1);
		  
		  mp.put("b" , 2);
		  
		  mp.put("b", mp.getOrDefault("b", 0) + 1);
		  
		  mp.put("a", mp.getOrDefault("a" , 0) + 3);
		  
		  mp.put("c" ,  9);
		  
		//  mp.remove("c");

        // clear();
		  
		  
		  for(String key : mp.keySet())
		  {
			  
			 System.out.println(key + " " + mp.get(key)); 
			  
		  }
