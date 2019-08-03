int main
{ 
  char letter{}; 
  cout << endl  
  << "Enter a letter please:\n";  
  cin >> letter;  
  if (letter>='A' && letter<='z')  
  {   
    if (letter >= 'A')  
    {    
       if (letter <= 'Z')    
       {     
         cout << endl      
         << "你输入的是一个大写(capital)字母" << endl;    
         }   
     }  
     if (letter >= 'a')   
     {    
        if (letter <= 'z')    
        {     
            cout << endl      
            << "你输入的是一个小写(lowercase)字母" << endl;    
        }   
      } 
    }  
    else  
    {   
        cout << endl    
        << "你输入了什么鬼？" << endl;  
    }
 return 0;
}
