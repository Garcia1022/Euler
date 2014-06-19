/**
 * Created by Matthew on 6/6/14.
 */

import scala.collection.mutable

class Hashable(key:Long, len:Long,num:Long) {

  var s= mutable.MutableList.empty[Long]
  val this.key= key
  var matches = 1
  val this.len=len
  val this.num=num

  def getMatches(): Long=
  {
    return this.matches
  }
  def getKey(): Long =
  {
    return this.key.toLong
  }
  def getNum() : Long=
  {
    return this.num.toLong
  }
  def getLen() : Long=
  {
    return this.len.toLong
  }



}
