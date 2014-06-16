package com.itpointlab.ane
{
	import flash.events.EventDispatcher;
	import flash.events.StatusEvent;
	import flash.external.ExtensionContext;
	
	public class OpenCV extends EventDispatcher
	{
		private static const EXTENSION_ID:String = "com.itpointlab.ane.OpenCV.Template";
		private var _isSupported:Boolean;
		private var _context:ExtensionContext;

		public function OpenCV()
		{
			try{
				_context = ExtensionContext.createExtensionContext(EXTENSION_ID, null);
				_context.addEventListener(StatusEvent.STATUS, onStatusContext);
				try{
					_isSupported = _context.call("isSupported");
				}catch(e:Error){
					_isSupported = false;
				}
			}catch(e:Error){
				_isSupported = false;
				trace(e.getStackTrace());
			}
		}

		public function get isSupported():Boolean
		{
			return _isSupported;
		}

		protected function onStatusContext(event:StatusEvent):void
		{
			switch(event.code)
			{
				
			}
			dispatchEvent(new OpenCVEvent(event.code, event.type));
		}
	}
}