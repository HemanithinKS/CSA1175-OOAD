
#ifndef SENDER_POST_MAN_H
#define SENDER_POST_MAN_H

#include <string>

/**
  * class sender_post_man
  * 
  */

class sender_post_man
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  sender_post_man ();

  /**
   * Empty Destructor
   */
  virtual ~sender_post_man ();

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
  void collect_letters ()
  {
  }


  /**
   */
  void verify_stamp ()
  {
  }


  /**
   */
  void send_letters ()
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

  string location;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of location
   * @param new_var the new value of location
   */
  void setLocation (string new_var)   {
      location = new_var;
  }

  /**
   * Get the value of location
   * @return the value of location
   */
  string getLocation ()   {
    return location;
  }
private:


  void initAttributes () ;

};

#endif // SENDER_POST_MAN_H
