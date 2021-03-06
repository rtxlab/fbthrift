/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic_swift_bean;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.swift.transport.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;

@SwiftGenerated
public class LegacyServiceAsyncClientImpl extends AbstractThriftClient implements LegacyService.Async {

    // Method Handlers
    private ThriftMethodHandler getPointsMethodHandler;

    // Method Exceptions
    private static final Class[] getPointsExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public LegacyServiceAsyncClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(channel, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      getPointsMethodHandler = methodHandlerMap.get("getPoints");
    }

    public LegacyServiceAsyncClientImpl(
        Map<String, String> headers,
        RpcClient rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(headers, rpcClient, serviceMetadata, codecManager, protocolId);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      getPointsMethodHandler = methodHandlerMap.get("getPoints");
    }

    @Override
    public void close() {
        super.close();
    }


    @Override
    public ListenableFuture<Map<String, List<Integer>>> getPoints(
        Set<String> key,
        long legacyStuff) {
        try {
          return (ListenableFuture<Map<String, List<Integer>>>) execute(getPointsMethodHandler, getPointsExceptions, key, legacyStuff);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }


    public ListenableFuture<Map<String, List<Integer>>> getPoints(
        Set<String> key,
        long legacyStuff,
        RpcOptions rpcOptions) {
        try {
          return (ListenableFuture<Map<String, List<Integer>>>) executeWithOptions(getPointsMethodHandler, getPointsExceptions, rpcOptions, key, legacyStuff);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }
}
