
#ifndef RECIVER_H
#define RECIVER_H

#include <string>

/**
  * class reciver
  * 
  */

class reciver
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  reciver ();

  /**
   * Empty Destructor
   */
  virtual ~reciver ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void recive_letter ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string reciver_address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of reciver_address
   * @param new_var the new value of reciver_address
   */
  void setReciver_address (string new_var)   {
      reciver_address = new_var;
  }

  /**
   * Get the value of reciver_address
   * @return the value of reciver_address
   */
  string getReciver_address ()   {
    return reciver_address;
  }
private:


  void initAttributes () ;

};

#endif // RECIVER_H
