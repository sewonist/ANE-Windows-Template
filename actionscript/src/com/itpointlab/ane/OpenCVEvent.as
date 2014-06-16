package com.itpointlab.ane
{
	import flash.events.Event;
	
	public class OpenCVEvent extends Event
	{
		public static var DEVICE_UPDATE:String 	= "deviceUpdate";
		public static var CONNECT:String		= "connect";
		public static var DISCONNECT:String		= "disconnect";
		public static var DATA_SEND:String 		= "dataSend";
		public static var DATA_RECEIVE:String 	= "dataReceive";
		public static var ERROR:String 			= "error";
		
		private var _name:String;
		private var _data:String;
		
		public function OpenCVEvent(type:String, $name:String=null, $data:String=null)
		{
			super(type, false, false);
			
			_name = $name;
			_data = $data;
		}

		public function get name():String
		{
			return _name;
		}

		public function get data():String
		{
			return _data;
		}

	}
}