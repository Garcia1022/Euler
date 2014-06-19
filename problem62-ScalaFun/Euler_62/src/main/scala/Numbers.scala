/**
 * Created by Matthew on 6/6/14.
 */
import scala.collection.mutable
class Numbers {
  def genNthCube(n:Long):Long=
  {
    return n * n * n

  }
  def sumDigits(n : Long) : Hashable =
  {
    var set =   mutable.MutableList.empty[Long]
    var temp : Long = n
    var sum : Long = 0
    var len : Long=0

    ////////////////////////////////////////////////
    ///  This portion could be better optimized!!!!!!!
    ///  Currently I am getting O(N) for generating the cubes
    ///  O(klogk) for sorting and re combining the cubes
    ///   k is the number of total digits we encounter, which is a lot.

    //Break the number apart and gather needed information
    while(temp > 0)
    {
      set+=temp%10
      sum += temp%10
      temp /= 10
      len+=1
    }
    var array= new Array[Long](len.toInt)
   // sort the array and reverse it
    set.sorted.reverse.copyToArray(array)
    var temp2 : Long=0
    //reconstruct the number from the sorted array
    for(i<-array)
      temp2= ((temp2*10)+i)


    ////////////////////////////////////////////////////

    //output the new hashable object
    var ob = new Hashable(temp2,len,n)
    ob.s= set

    return ob

  }

}
