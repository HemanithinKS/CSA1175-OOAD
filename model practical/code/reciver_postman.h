
#ifndef RECIVER_POSTMAN_H
#define RECIVER_POSTMAN_H

#include <string>

/**
  * class reciver_postman
  * 
  */

class reciver_postman
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  reciver_postman ();

  /**
   * Empty Destructor
   */
  virtual ~reciver_postman ();

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
  void dispatch_letters ()
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

  string address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (string new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  string getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // RECIVER_POSTMAN_H
