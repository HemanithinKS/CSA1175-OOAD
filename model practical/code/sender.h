
#ifndef SENDER_H
#define SENDER_H

#include <string>

/**
  * class sender
  * 
  */

class sender
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  sender ();

  /**
   * Empty Destructor
   */
  virtual ~sender ();

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
  void paste_stamp ()
  {
  }


  /**
   */
  void post_letter ()
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

  string from_address;
  string to_address;
  int stamp;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of from_address
   * @param new_var the new value of from_address
   */
  void setFrom_address (string new_var)   {
      from_address = new_var;
  }

  /**
   * Get the value of from_address
   * @return the value of from_address
   */
  string getFrom_address ()   {
    return from_address;
  }

  /**
   * Set the value of to_address
   * @param new_var the new value of to_address
   */
  void setTo_address (string new_var)   {
      to_address = new_var;
  }

  /**
   * Get the value of to_address
   * @return the value of to_address
   */
  string getTo_address ()   {
    return to_address;
  }

  /**
   * Set the value of stamp
   * @param new_var the new value of stamp
   */
  void setStamp (int new_var)   {
      stamp = new_var;
  }

  /**
   * Get the value of stamp
   * @return the value of stamp
   */
  int getStamp ()   {
    return stamp;
  }
private:


  void initAttributes () ;

};

#endif // SENDER_H
