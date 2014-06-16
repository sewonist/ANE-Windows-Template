package
{
	import com.itpointlab.ane.OpenCV;
	
	import flash.display.Sprite;
	
	public class Main extends Sprite
	{
		private var _opencv:OpenCV;
		
		public function Main()
		{
			_opencv = new OpenCV;
			trace("opencv.isSupported : "+_opencv.isSupported);
		}
	}
}