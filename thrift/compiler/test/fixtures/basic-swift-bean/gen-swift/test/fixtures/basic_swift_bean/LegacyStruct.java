/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic_swift_bean;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldValueMetaData;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@ThriftStruct("LegacyStruct")
public final class LegacyStruct {
    private BitSet __isset_bit_vector = new BitSet();

    @ThriftConstructor
    public LegacyStruct() {
      this.normal = 0;
      this.bad = 0;
    }
    
    public static class Builder {
        private final BitSet __optional_isset = new BitSet();
    
        private int normal = 0;
        private int bad = 0;
    
        @ThriftField(value=1, name="normal", requiredness=Requiredness.NONE)
        public Builder setNormal(int normal) {
            this.normal = normal;
            return this;
        }
    
        public int getNormal() { return normal; }
    
            @ThriftField(value=-1, name="bad", isLegacyId=true, requiredness=Requiredness.NONE)
        public Builder setBad(int bad) {
            this.bad = bad;
            return this;
        }
    
        public int getBad() { return bad; }
    
        public Builder() { }
        public Builder(LegacyStruct other) {
            this.normal = other.normal;
            this.bad = other.bad;
        }
    
        @ThriftConstructor
        public LegacyStruct build() {
            LegacyStruct result = new LegacyStruct();
            result.normal = this.normal;
            result.bad = this.bad;
            result.__isset_bit_vector.or(__optional_isset);
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("LegacyStruct");
    private int normal;
    public static final int _NORMAL = 1;
    private static final TField NORMAL_FIELD_DESC = new TField("normal", TType.I32, (short)1);
    private int bad;
    public static final int _BAD = -1;
    private static final TField BAD_FIELD_DESC = new TField("bad", TType.I32, (short)-1);
static {
      NAMES_TO_IDS.put("normal", 1);
      FIELD_METADATA.put(1, NORMAL_FIELD_DESC);
      NAMES_TO_IDS.put("bad", -1);
      FIELD_METADATA.put(-1, BAD_FIELD_DESC);
    }
    
    @ThriftField(value=1, name="normal", requiredness=Requiredness.NONE)
    public int getNormal() { return normal; }
    
    @ThriftField
    public LegacyStruct setNormal(int normal) {
        this.normal = normal;
        return this;
    }
        
    /** don't use this method for new code, it's here to make migrating to swift easier */
    @Deprecated
    public boolean fieldIsSetNormal() {
        return __isset_bit_vector.get(_NORMAL);
    }
    /** don't use this method for new code, it's here to make migrating to swift easier */
    @Deprecated
    public void unsetNormal() {
        __isset_bit_vector.clear(_NORMAL);
    }
    
    @ThriftField(value=-1, name="bad", isLegacyId=true, requiredness=Requiredness.NONE)
    public int getBad() { return bad; }
    
    @ThriftField
    public LegacyStruct setBad(int bad) {
        this.bad = bad;
        return this;
    }
        
    /** don't use this method for new code, it's here to make migrating to swift easier */
    @Deprecated
    public boolean fieldIsSetBad() {
        return __isset_bit_vector.get(_BAD);
    }
    /** don't use this method for new code, it's here to make migrating to swift easier */
    @Deprecated
    public void unsetBad() {
        __isset_bit_vector.clear(_BAD);
    }
    @Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("normal", normal);
        helper.add("bad", bad);
        return helper.toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        LegacyStruct other = (LegacyStruct)o;
    
        return
            Objects.equals(normal, other.normal) &&
            Objects.equals(bad, other.bad) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            normal,
            bad
        });
    }
    
    
    public static LegacyStruct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(LegacyStruct.NAMES_TO_IDS, LegacyStruct.FIELD_METADATA);
      LegacyStruct.Builder builder = new LegacyStruct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _NORMAL:
          if (__field.type == TType.I32) {
            int normal = oprot.readI32();
            builder.setNormal(normal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _BAD:
          if (__field.type == TType.I32) {
            int bad = oprot.readI32();
            builder.setBad(bad);
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
      oprot.writeFieldBegin(NORMAL_FIELD_DESC);
      oprot.writeI32(this.normal);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(BAD_FIELD_DESC);
      oprot.writeI32(this.bad);
      oprot.writeFieldEnd();
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
