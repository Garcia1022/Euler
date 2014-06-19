/**
 * Created by Matthew on 6/5/14.
 */

import scala.collection.mutable
import scala.collection.mutable.MutableList
import scala.collection.mutable.HashMap



class CubeCollector {

  var cubeMap = HashMap.empty[Long,Hashable]
  val n_helper= new Numbers()
  var currentLength=1.0

  def hash(key : Long, ob : Hashable) : Hashable =
  {

    if(cubeMap.isDefinedAt(key))
    {

      cubeMap(key).matches+=1
      return cubeMap(key)

    }
    else
    {
      cubeMap+= (key) -> ob
      return cubeMap(key)
    }

  }


  def findCubeWithNCubes(n:Long):Long=
  {
    var i=1
    var loop = true
    var out : Long = 0
    while(loop){
      val nth =n_helper.genNthCube(i)
      var h_hashable: Hashable =n_helper.sumDigits(nth)

      //threshhold so that the numbers do not get too crazy.
      if(i>100000) {

        println("WOW... WOW... Such Number.. Too the moon!")
        return -1
      }
//this is just to free up memory, once we didnt find anything at a certain number length, empty the hash table
      if(h_hashable.getLen() > currentLength)
      {

        cubeMap=null
        cubeMap= new HashMap[Long,Hashable]
        currentLength = h_hashable.getLen()

      }
      //Hash in the new number
      var temp=hash(h_hashable.getKey(), h_hashable)

      if(  temp.getMatches()== n)
      {
        loop = false
        out=temp.getNum()
      }
      else
        i+=1

    }
    //clear the hash map when finished.
    cubeMap= new HashMap[Long,Hashable]


    return out

  }





}
