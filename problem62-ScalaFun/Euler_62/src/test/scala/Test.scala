/**
 * Created by Matthew on 6/6/14.
 */
object Test extends App{

  val c_collector = new CubeCollector()
  val n_numbers= new Numbers()

  val test1= c_collector.hash(27,n_numbers.sumDigits(55557))

  if(test1.getMatches() == 1 )
    println("test1 passed")
  else
    println("test1 Failed")

  val test2= c_collector.hash(27,n_numbers.sumDigits(75555))
  if(test2.getMatches() == 2 )
    println("test2 passed")
  else
    println("test2 Failed")

  val test3= n_numbers.sumDigits(25)
  if(test3.getKey() == 52 )
    println("test3 passed")
  else
    println("test3 Failed")
  val test4= n_numbers.sumDigits(2555)
  if(test4.getKey() == 5552 )
    println("test4 passed")
  else
    println("test4 Failed")


  val test5= n_numbers.sumDigits(203458012)

  if(test5.getKey() == 854322100L )
    println("test5 passed")
  else
    println("test5 Failed")

  val test6= c_collector.findCubeWithNCubes(3)
  if(test6 == 41063625 )
    println("test6 passed")
  else
    println("test6 Failed")
//125 and 512
  val test7= c_collector.findCubeWithNCubes(2)
  if(test7 == 125 )
    println("test7 passed")
  else
    println("test7 Failed")
//1
  val test8= c_collector.findCubeWithNCubes(1)
  if(test8 == 1 )
    println("test8 passed")
  else
    println("test8 Failed")

  val test9= c_collector.findCubeWithNCubes(5)
  if(test9 == 127035954683L )
    println("test9 passed")
  else
    println("test9 Failed")
}
