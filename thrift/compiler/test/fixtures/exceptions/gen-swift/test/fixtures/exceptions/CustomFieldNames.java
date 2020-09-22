/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.exceptions;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldMetaData;
import org.apache.thrift.meta_data.FieldValueMetaData;

@SwiftGenerated
@ThriftStruct("CustomFieldNames")
public final class CustomFieldNames extends java.lang.RuntimeException {
    private static final long serialVersionUID = 1L;

    private BitSet __isset_bit_vector = new BitSet();

    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();

    private static final TStruct STRUCT_DESC = new TStruct("CustomFieldNames");
    private final String errorMessage;
    public static final int _ERROR_MESSAGE = 1;
    private static final TField ERROR_MESSAGE_FIELD_DESC = new TField("errorMessage", TType.STRING, (short)1);
    private final String internalGreatMessage;
    public static final int _INTERNAL_ERROR_MESSAGE = 2;
    private static final TField INTERNAL_ERROR_MESSAGE_FIELD_DESC = new TField("internalGreatMessage", TType.STRING, (short)2);

    @ThriftConstructor
    public CustomFieldNames(
        @ThriftField(value=1, name="error_message", requiredness=Requiredness.NONE) final String errorMessage,
        @ThriftField(value=2, name="internal_error_message", requiredness=Requiredness.NONE) final String internalGreatMessage
    ) {
        this.errorMessage = errorMessage;
        this.internalGreatMessage = internalGreatMessage;
    }
    
    @ThriftConstructor
    protected CustomFieldNames() {
      this.errorMessage = null;
      this.internalGreatMessage = null;
    }
    
    public static class Builder {
        private final BitSet __optional_isset = new BitSet();
    
        private String errorMessage = null;
        private String internalGreatMessage = null;
    
        @ThriftField(value=1, name="error_message", requiredness=Requiredness.NONE)
        public Builder setErrorMessage(String errorMessage) {
            this.errorMessage = errorMessage;
            return this;
        }
    
        public String getErrorMessage() { return errorMessage; }
    
            @ThriftField(value=2, name="internal_error_message", requiredness=Requiredness.NONE)
        public Builder setInternalGreatMessage(String internalGreatMessage) {
            this.internalGreatMessage = internalGreatMessage;
            return this;
        }
    
        public String getInternalGreatMessage() { return internalGreatMessage; }
    
        public Builder() { }
        public Builder(CustomFieldNames other) {
            this.errorMessage = other.errorMessage;
            this.internalGreatMessage = other.internalGreatMessage;
        }
    
        @ThriftConstructor
        public CustomFieldNames build() {
            CustomFieldNames result = new CustomFieldNames (
                this.errorMessage,
                this.internalGreatMessage
            );
            result.__isset_bit_vector.or(__optional_isset);
            return result;
        }
    }
    
    
    @ThriftField(value=1, name="error_message", requiredness=Requiredness.NONE)
    public String getErrorMessage() { return errorMessage; }
        
    @ThriftField(value=2, name="internal_error_message", requiredness=Requiredness.NONE)
    public String getInternalGreatMessage() { return internalGreatMessage; }
        
    @Override
    public String getMessage() {
      return internalGreatMessage;
    }
    
    public static CustomFieldNames read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(CustomFieldNames.NAMES_TO_IDS, CustomFieldNames.FIELD_METADATA);
      CustomFieldNames.Builder builder = new CustomFieldNames.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _ERROR_MESSAGE:
          if (__field.type == TType.STRING) {
            String errorMessage = oprot.readString();
            builder.setErrorMessage(errorMessage);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _INTERNAL_ERROR_MESSAGE:
          if (__field.type == TType.STRING) {
            String internalGreatMessage = oprot.readString();
            builder.setInternalGreatMessage(internalGreatMessage);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.errorMessage != null) {
        oprot.writeFieldBegin(ERROR_MESSAGE_FIELD_DESC);
        oprot.writeString(this.errorMessage);
        oprot.writeFieldEnd();
      }
      if (this.internalGreatMessage != null) {
        oprot.writeFieldBegin(INTERNAL_ERROR_MESSAGE_FIELD_DESC);
        oprot.writeString(this.internalGreatMessage);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
