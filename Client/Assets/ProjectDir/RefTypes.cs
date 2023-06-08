using System.Runtime.CompilerServices;

class RefTypes
{
    public void MyAOTRefs()
    { 
       System.Action<object> a2;
       System.Action<long,object> a3;
       System.Action<int,object> a4;
       System.ArraySegment<byte> a5;
       System.Collections.Concurrent.ConcurrentQueue<object> a6;
       System.Collections.Generic.Dictionary<object,object> a7;
       System.Collections.Generic.Dictionary<long,object> a8;
       System.Collections.Generic.Dictionary<int,object> a9;
       System.Collections.Generic.Dictionary<long, object>.Enumerator a11;
       System.Collections.Generic.Dictionary<long,object>.ValueCollection a12;
       System.Collections.Generic.Dictionary<long, object>.ValueCollection.Enumerator a13;
       System.Collections.Generic.IEnumerable<object> a14;
       System.Collections.Generic.IEnumerator<object> a15;
       System.Collections.Generic.KeyValuePair<long,object> a16;
       System.Collections.Generic.List<System.ArraySegment<byte>> a17;
       System.Collections.Generic.List<object> a18;
       System.Collections.Generic.List<object>.Enumerator a19;
       System.Func<object,object> a20;
       System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object> a21;
       System.Runtime.CompilerServices.TaskAwaiter<object> a22;
       System.Threading.Tasks.Task<object> a23;
       System.Threading.Tasks.TaskCompletionSource<object> a24;
       
       AsyncVoidMethodBuilder builder = default;
       IAsyncStateMachine asm = default;
       builder.Start(ref asm);
    }
}
