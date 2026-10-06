/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103080a88; end: 103080acf;  */

uint FUN_103080a88(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x000103080cac(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103080ad0; end: 103080c37;  */

undefined * FUN_103080ad0(void)

{
  return &UNK_10db82430;
}



/* Entry: 103080c38; end: 103080c8f;  */

void FUN_103080c38(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103080c90; end: 103080d1f;  */

void FUN_103080c90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103080d20; end: 103080d5f;  */

void FUN_103080d20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f38100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db82bf0;
  func_0x000107c61520(&UNK_10db82bf0,&UNK_110604f10);
  puRam0000000112f38100 = puVar1;
  return;
}



/* Entry: 103080d60; end: 103080feb;  */

int FUN_103080d60(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103080fec; end: 10308102b;  */

void FUN_103080fec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f38108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db82d2c;
  func_0x000107c61520(&UNK_10db82d2c,&UNK_110605310);
  puRam0000000112f38108 = puVar1;
  return;
}



/* Entry: 10308102c; end: 103081137;  */

long FUN_10308102c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103081138; end: 103081287;  */

void FUN_103081138(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103081b68(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103081288; end: 10308141b;  */

undefined8 FUN_103081288(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar7 = 0;
  func_0x000107c5f5a8();
  lVar10 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  param_4 = param_4 & 0xff;
  uVar1 = 0x800000010f11b970;
  uVar5 = 0xd000000000000010;
  if (1 < param_4 - 8) {
    uVar1 = 0xef646c6f422d7478;
    uVar5 = 0x654e72696e657641;
  }
  uVar2 = 0x800000010f05a090;
  uVar8 = 0xd000000000000013;
  if (1 < param_4 - 5) {
    uVar2 = uVar1;
    uVar8 = uVar5;
  }
  pcVar3 = "tionAlertEntryPoint";
  uVar5 = 0xd000000000000012;
  if (1 < param_4 - 2) {
    pcVar3 = "AvenirNext-Heavy";
    uVar5 = 0xd000000000000011;
  }
  pcVar4 = "AvenirNext-Medium";
  uVar6 = 0xd000000000000015;
  if (1 < param_4) {
    pcVar4 = pcVar3;
    uVar6 = uVar5;
  }
  if (param_4 < 5) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar8 = uVar6;
  }
  FUN_10308141c(puVar9,param_2);
  func_0x000107c5f59c(param_2,uVar8,uVar2,puVar9);
  func_0x000107c6142c(uVar2);
  (**(code **)(lVar10 + 8))(puVar9,lVar7);
  return uVar8;
}



/* Entry: 10308141c; end: 103081593;  */

void FUN_10308141c(undefined8 param_1,double param_2)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO10largeTitleyA2EmFWC_110349318;
  if (param_2 < 34.0) {
    bVar2 = false;
    if ((28.0 <= param_2) && (bVar2 = false, !NAN(param_2))) {
      bVar2 = param_2 < 34.0;
    }
    puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO5titleyA2EmFWC_110349330;
    if (!bVar2) {
      bVar2 = false;
      if ((22.0 <= param_2) && (bVar2 = false, !NAN(param_2))) {
        bVar2 = param_2 < 28.0;
      }
      puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO6title2yA2EmFWC_110349338;
      if ((((!bVar2) &&
           ((param_2 < 20.0 ||
            (puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO6title3yA2EmFWC_110349340,
            22.0 <= param_2)))) &&
          ((param_2 < 17.0 ||
           (puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO8headlineyA2EmFWC_110349358,
           20.0 <= param_2)))) &&
         (((param_2 < 15.0 ||
           (puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO4bodyyA2EmFWC_110349328,
           17.0 <= param_2)) &&
          ((param_2 < 13.0 ||
           (puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO11subheadlineyA2EmFWC_110349320,
           15.0 <= param_2)))))) {
        lVar3 = 0;
        func_0x000107c5f5a8();
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 0x68);
        puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO8caption2yA2EmFWC_110349350;
        if ((11.0 <= param_2) && (param_2 < 13.0)) {
          puVar4 = (undefined4 *)PTR___s7SwiftUI4FontV9TextStyleO7captionyA2EmFWC_110349348;
        }
        uVar1 = *puVar4;
        goto LAB_1030814c8;
      }
    }
  }
  uVar1 = *puVar4;
  lVar3 = 0;
  func_0x000107c5f5a8();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 0x68);
LAB_1030814c8:
                    /* WARNING: Could not recover jumptable at 0x0001030814d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,lVar3);
  return;
}



/* Entry: 103081594; end: 103081a67;  */

char * FUN_103081594(char *param_1,char *param_2,double param_3,double param_4,undefined8 param_5,
                    undefined1 param_6,undefined1 param_7,uint param_8)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  uVar8 = 0xea00000000007468;
  uVar6 = 0x67694c6172746c75;
  pcVar4 = param_2;
  switch(param_6) {
  case 0:
  case 10:
  case 0x14:
  case 0x1e:
    break;
  default:
    uVar8 = 0xe400000000000000;
    uVar6 = 0x6e696874;
    break;
  case 2:
  case 0xc:
  case 0x16:
  case 0x20:
    uVar8 = 0xe500000000000000;
    uVar6 = 0x746867696c;
    break;
  case 3:
  case 0xd:
  case 0x17:
  case 0x21:
    uVar8 = 0xe700000000000000;
    uVar6 = 0x72616c75676572;
    break;
  case 4:
  case 0xe:
  case 0x18:
  case 0x22:
  case 0x6e:
  case 0x7e:
  case 0xae:
  case 0xbe:
    uVar8 = 0xe600000000000000;
  case 0x2e:
  case 0x3e:
  case 0x4e:
  case 0x5e:
  case 0x8e:
  case 0x9e:
  case 0xce:
  case 0xde:
  case 0xee:
  case 0xfe:
    uVar6 = 0x6d756964656d;
    break;
  case 5:
  case 0xf:
  case 0x19:
  case 0x23:
    uVar8 = 0xe800000000000000;
    uVar6 = 0x646c6f42696d6564;
    break;
  case 6:
  case 0x10:
  case 0x1a:
  case 0x24:
    uVar8 = 0xe800000000000000;
  case 0xfc:
    uVar6 = 0x646c6f62696d6573;
  case 0xbc:
  case 0xcc:
  case 0xdc:
  case 0xec:
    break;
  case 7:
  case 0x11:
  case 0x1b:
  case 0x25:
    uVar8 = 0xe400000000000000;
    uVar6 = 0x646c6f62;
    break;
  case 8:
  case 0x12:
  case 0x1c:
  case 0x26:
    uVar8 = 0xe500000000000000;
    uVar6 = 0x76616568;
  case 0x5c:
  case 0x6c:
    uVar6 = uVar6 & 0xffff0000ffffffff | 0x7900000000;
    break;
  case 9:
  case 0x13:
  case 0x1d:
  case 0x27:
    uVar8 = 0xe500000000000000;
    uVar6 = 0x6b63616c62;
    break;
  case 0x3c:
  case 0x4c:
code_r0x0001030816c4:
    pcVar2 = (char *)0x0;
    if ((double)param_1 != 0.0) {
      pcVar2 = param_1;
    }
    pcVar9 = pcVar2;
    func_0x000107c606a0();
    switch(param_7) {
    case 0:
    case 10:
    case 0x14:
      break;
    default:
      goto code_r0x0001030816fc;
    case 2:
    case 0xc:
    case 0x16:
      break;
    case 3:
    case 0xd:
    case 0x17:
      break;
    case 4:
    case 0xe:
    case 0x18:
    case 100:
    case 0x74:
    case 0xa4:
    case 0xb4:
    case 0x24:
    case 0x34:
    case 0x44:
    case 0x54:
    case 0x84:
    case 0x94:
    case 0xc4:
    case 0xd4:
    case 0xe4:
    case 0xf4:
      break;
    case 5:
    case 0xf:
    case 0x19:
      break;
    case 6:
    case 0x10:
    case 0x1a:
    case 0xf2:
      goto code_r0x000103081794;
    case 7:
    case 0x11:
    case 0x1b:
      break;
    case 8:
    case 0x12:
    case 0x1c:
    case 0x52:
    case 0x62:
      break;
    case 9:
    case 0x13:
    case 0x1d:
      break;
    case 0x32:
    case 0x42:
      goto code_r0x0001030817bc;
    case 0x33:
    case 0x43:
    case 0x53:
    case 99:
    case 0x73:
    case 0x83:
    case 0x93:
    case 0xa3:
    case 0xb3:
    case 0xc3:
    case 0xd3:
    case 0xe3:
    case 0xf3:
      uVar8 = 0xea00000000007468;
      pcVar7 = (char *)0x67694c6172746c75;
      pcVar3 = (char *)0x0;
      pcVar10 = pcVar9;
      pcVar11 = pcVar4;
      func_0x000107c6068c(&stack0xffffffffffffffb8);
      switch((ulong)pcVar2 & 0xff) {
      case 0:
      case 10:
        break;
      default:
        uVar8 = 0xe400000000000000;
      case 0xff:
        pcVar7 = (char *)0x6874;
code_r0x00010308186c:
        pcVar7 = (char *)(ulong)((uint)pcVar7 & 0xffff | 0x6e690000);
        break;
      case 2:
      case 0xc:
        uVar8 = 0xe500000000000000;
        pcVar7 = (char *)0x746867696c;
        break;
      case 3:
      case 0xd:
        uVar8 = 0xe700000000000000;
        pcVar7 = (char *)0x72616c75676572;
        break;
      case 4:
      case 0xe:
      case 0x5a:
      case 0x6a:
      case 0x9a:
      case 0xaa:
        uVar8 = 0xe600000000000000;
      case 0x1a:
      case 0x2a:
      case 0x3a:
      case 0x4a:
      case 0x7a:
      case 0x8a:
      case 0xba:
      case 0xca:
      case 0xda:
      case 0xea:
        pcVar7 = (char *)0x6d756964656d;
        break;
      case 5:
      case 0xf:
        uVar8 = 0xe800000000000000;
        pcVar7 = (char *)0x646c6f42696d6564;
        break;
      case 6:
      case 0x10:
        uVar8 = 0xe800000000000000;
      case 0xe8:
      case 0xf8:
        pcVar7 = (char *)0x6573;
code_r0x0001030818f8:
        pcVar7 = (char *)((ulong)pcVar7 & 0xffff | 0x646c6f62696d0000);
code_r0x000103081904:
        break;
      case 7:
      case 0x11:
        uVar8 = 0xe400000000000000;
        pcVar7 = (char *)0x646c6f62;
        break;
      case 8:
      case 0x12:
        uVar8 = 0xe500000000000000;
        pcVar7 = (char *)0x76616568;
      case 0x48:
      case 0x58:
        pcVar7 = (char *)((ulong)pcVar7 & 0xffff0000ffffffff | 0x7900000000);
        break;
      case 9:
      case 0x13:
        uVar8 = 0xe500000000000000;
        pcVar7 = (char *)0x6b63616c62;
        break;
      case 0x28:
      case 0x38:
        goto code_r0x00010308192c;
      case 0x29:
      case 0x39:
      case 0x49:
      case 0x59:
      case 0x69:
      case 0x79:
      case 0x89:
      case 0x99:
      case 0xa9:
      case 0xb9:
      case 0xc9:
      case 0xd9:
      case 0xe9:
      case 0xf9:
        goto code_r0x000103081964;
      case 0x68:
      case 0x78:
      case 0x88:
      case 0x98:
        goto code_r0x000103081924;
      case 0xa8:
      case 0xb8:
      case 200:
      case 0xd8:
        goto code_r0x000103081904;
      case 0xfa:
        func_0x000107c6142c(0xea00000000007468);
        if ((char *)0x9 < pcVar3) {
          pcVar3 = (char *)0xa;
        }
        return pcVar3;
      case 0xfb:
        goto code_r0x0001030818f8;
      case 0xfc:
        goto code_r0x000103081b04;
      case 0xfd:
        goto code_r0x00010308186c;
      case 0xfe:
        goto code_r0x000103081a04;
      }
      func_0x000107c5fb58(&stack0xffffffffffffffb8,pcVar7,uVar8);
code_r0x000103081924:
      func_0x000107c6142c(uVar8);
code_r0x00010308192c:
      pcVar3 = (char *)0x0;
      if ((double)pcVar9 != 0.0) {
        pcVar3 = pcVar9;
      }
      pcVar10 = pcVar3;
      func_0x000107c606a0();
      uVar6 = uVar6 & 0xff;
      switch(uVar6) {
      case 0:
        break;
      default:
      case 0xf5:
code_r0x000103081964:
        goto code_r0x000103081968;
      case 2:
        break;
      case 3:
        break;
      case 4:
      case 0x50:
      case 0x60:
      case 0x90:
      case 0xa0:
      case 0x10:
      case 0x20:
      case 0x30:
      case 0x40:
      case 0x70:
      case 0x80:
      case 0xb0:
      case 0xc0:
      case 0xd0:
      case 0xe0:
        break;
      case 5:
        break;
      case 6:
      case 0xde:
      case 0xee:
        goto code_r0x0001030819f4;
      case 7:
        break;
      case 8:
code_r0x000103081a04:
      case 0x3e:
      case 0x4e:
        break;
      case 9:
        break;
      case 0x1e:
      case 0x2e:
        goto code_r0x000103081a28;
      case 0x1f:
      case 0x2f:
      case 0x3f:
      case 0x4f:
      case 0x5f:
      case 0x6f:
      case 0x7f:
      case 0x8f:
      case 0x9f:
      case 0xaf:
      case 0xbf:
      case 0xcf:
      case 0xdf:
      case 0xef:
        return pcVar3;
      case 0x5e:
      case 0x6e:
      case 0x7e:
      case 0x8e:
        goto code_r0x000103081a20;
      case 0x9e:
      case 0xae:
      case 0xbe:
      case 0xce:
        goto code_r0x000103081a00;
      case 0xf0:
        return (char *)(ulong)((int)uVar6 + 1);
      case 0xf1:
        goto code_r0x0001030819f4;
      case 0xf2:
        if (*(char **)(uVar6 + 0x110) == (char *)0x0) {
          pcVar4 = &UNK_10db82ef0;
          func_0x000107c61520(&UNK_10db82ef0,&UNK_1106053d0);
          pcRam0000000112f38110 = pcVar4;
          return pcVar4;
        }
        return *(char **)(uVar6 + 0x110);
      case 0xf3:
        goto code_r0x000103081968;
      case 0xf4:
        param_8 = (uint)(byte)pcVar7[0x10];
code_r0x000103081b04:
        uVar5 = 0;
        if ((double)pcVar10 == param_3) {
          uVar5 = (uint)(*pcVar3 == *pcVar7 && (uint)(byte)pcVar3[0x10] == (param_8 & 0xff));
        }
        uVar1 = 0;
        if ((double)pcVar11 == param_4) {
          uVar1 = uVar5;
        }
        return (char *)(ulong)uVar1;
      case 0xf6:
        func_0x000107c6157c(0xea00000000007468);
        return (char *)0xea00000000007478;
      case 0xfe:
        goto code_r0x00010308196c;
      }
      goto code_r0x000103081a14;
    case 0x72:
    case 0x82:
    case 0x92:
    case 0xa2:
      goto code_r0x0001030817b4;
    case 0xb2:
    case 0xc2:
    case 0xd2:
    case 0xe2:
      goto code_r0x000103081794;
    }
    goto code_r0x0001030817a8;
  case 0x3d:
  case 0x4d:
  case 0x5d:
  case 0x6d:
  case 0x7d:
  case 0x8d:
  case 0x9d:
  case 0xad:
  case 0xbd:
  case 0xcd:
  case 0xdd:
  case 0xed:
  case 0xfd:
code_r0x0001030816fc:
    goto code_r0x0001030817a8;
  case 0x7c:
  case 0x8c:
  case 0x9c:
  case 0xac:
    goto code_r0x0001030816bc;
  }
  func_0x000107c5fb58(param_5,uVar6,uVar8);
code_r0x0001030816bc:
  func_0x000107c6142c(uVar8);
  goto code_r0x0001030816c4;
code_r0x0001030819f4:
code_r0x000103081a00:
  goto code_r0x000103081a14;
code_r0x000103081968:
code_r0x00010308196c:
code_r0x000103081a14:
code_r0x000103081a20:
  func_0x000107c5fb58();
code_r0x000103081a28:
  func_0x000107c6142c();
  pcVar2 = (char *)0x0;
  if ((double)pcVar4 != 0.0) {
    pcVar2 = pcVar4;
  }
  func_0x000107c606a0(pcVar2);
  func_0x000107c606a8();
  return pcVar2;
code_r0x000103081794:
code_r0x0001030817a8:
code_r0x0001030817b4:
  func_0x000107c5fb58();
code_r0x0001030817bc:
  func_0x000107c6142c();
  pcVar4 = (char *)0x0;
  if ((double)param_2 != 0.0) {
    pcVar4 = param_2;
  }
  func_0x000107c606a0(pcVar4);
  return pcVar4;
}



/* Entry: 103081a68; end: 103081a8f;  */

char * FUN_103081a68(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  char *pcVar4;
  uint in_w3;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *unaff_x20;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_98 [72];
  
  pcVar9 = *(char **)(unaff_x20 + 8);
  pcVar11 = *(char **)(unaff_x20 + 0x18);
  bVar2 = unaff_x20[0x10];
  uVar3 = *unaff_x20;
  uVar6 = 0xea00000000007468;
  pcVar7 = (char *)0x67694c6172746c75;
  pcVar4 = (char *)0x0;
  pcVar8 = pcVar9;
  pcVar10 = pcVar11;
  func_0x000107c6068c(auStack_98);
  switch(uVar3) {
  case 0:
  case 10:
    break;
  default:
    uVar6 = 0xe400000000000000;
  case 0xff:
    pcVar7 = (char *)0x6874;
code_r0x00010308186c:
    pcVar7 = (char *)(ulong)((uint)pcVar7 & 0xffff | 0x6e690000);
    break;
  case 2:
  case 0xc:
    uVar6 = 0xe500000000000000;
    pcVar7 = (char *)0x746867696c;
    break;
  case 3:
  case 0xd:
    uVar6 = 0xe700000000000000;
    pcVar7 = (char *)0x72616c75676572;
    break;
  case 4:
  case 0xe:
  case 0x5a:
  case 0x6a:
  case 0x9a:
  case 0xaa:
    uVar6 = 0xe600000000000000;
  case 0x1a:
  case 0x2a:
  case 0x3a:
  case 0x4a:
  case 0x7a:
  case 0x8a:
  case 0xba:
  case 0xca:
  case 0xda:
  case 0xea:
    pcVar7 = (char *)0x6d756964656d;
    break;
  case 5:
  case 0xf:
    uVar6 = 0xe800000000000000;
    pcVar7 = (char *)0x646c6f42696d6564;
    break;
  case 6:
  case 0x10:
    uVar6 = 0xe800000000000000;
  case 0xe8:
  case 0xf8:
    pcVar7 = (char *)0x6573;
code_r0x0001030818f8:
    pcVar7 = (char *)((ulong)pcVar7 & 0xffff | 0x646c6f62696d0000);
code_r0x000103081904:
    break;
  case 7:
  case 0x11:
    uVar6 = 0xe400000000000000;
    pcVar7 = (char *)0x646c6f62;
    break;
  case 8:
  case 0x12:
    uVar6 = 0xe500000000000000;
    pcVar7 = (char *)0x76616568;
  case 0x48:
  case 0x58:
    pcVar7 = (char *)((ulong)pcVar7 & 0xffff0000ffffffff | 0x7900000000);
    break;
  case 9:
  case 0x13:
    uVar6 = 0xe500000000000000;
    pcVar7 = (char *)0x6b63616c62;
    break;
  case 0x28:
  case 0x38:
    goto code_r0x00010308192c;
  case 0x29:
  case 0x39:
  case 0x49:
  case 0x59:
  case 0x69:
  case 0x79:
  case 0x89:
  case 0x99:
  case 0xa9:
  case 0xb9:
  case 0xc9:
  case 0xd9:
  case 0xe9:
  case 0xf9:
    goto code_r0x000103081964;
  case 0x68:
  case 0x78:
  case 0x88:
  case 0x98:
    goto code_r0x000103081924;
  case 0xa8:
  case 0xb8:
  case 200:
  case 0xd8:
    goto code_r0x000103081904;
  case 0xfa:
    func_0x000107c6142c(0xea00000000007468);
    if ((char *)0x9 < pcVar4) {
      pcVar4 = (char *)0xa;
    }
    return pcVar4;
  case 0xfb:
    goto code_r0x0001030818f8;
  case 0xfc:
    goto code_r0x000103081b04;
  case 0xfd:
    goto code_r0x00010308186c;
  case 0xfe:
    goto code_r0x000103081a04;
  }
  func_0x000107c5fb58(auStack_98,pcVar7,uVar6);
code_r0x000103081924:
  func_0x000107c6142c(uVar6);
code_r0x00010308192c:
  pcVar4 = (char *)0x0;
  if ((double)pcVar9 != 0.0) {
    pcVar4 = pcVar9;
  }
  pcVar8 = pcVar4;
  func_0x000107c606a0();
  switch(bVar2) {
  case 0:
    break;
  default:
  case 0xf5:
code_r0x000103081964:
    goto code_r0x000103081968;
  case 2:
    break;
  case 3:
    break;
  case 4:
  case 0x50:
  case 0x60:
  case 0x90:
  case 0xa0:
  case 0x10:
  case 0x20:
  case 0x30:
  case 0x40:
  case 0x70:
  case 0x80:
  case 0xb0:
  case 0xc0:
  case 0xd0:
  case 0xe0:
    break;
  case 5:
    break;
  case 6:
  case 0xde:
  case 0xee:
    goto code_r0x0001030819f4;
  case 7:
    break;
  case 8:
code_r0x000103081a04:
  case 0x3e:
  case 0x4e:
    break;
  case 9:
    break;
  case 0x1e:
  case 0x2e:
    goto code_r0x000103081a28;
  case 0x1f:
  case 0x2f:
  case 0x3f:
  case 0x4f:
  case 0x5f:
  case 0x6f:
  case 0x7f:
  case 0x8f:
  case 0x9f:
  case 0xaf:
  case 0xbf:
  case 0xcf:
  case 0xdf:
  case 0xef:
    return pcVar4;
  case 0x5e:
  case 0x6e:
  case 0x7e:
  case 0x8e:
    goto code_r0x000103081a20;
  case 0x9e:
  case 0xae:
  case 0xbe:
  case 0xce:
    goto code_r0x000103081a00;
  case 0xf0:
    return (char *)(ulong)(bVar2 + 1);
  case 0xf1:
    goto code_r0x0001030819f4;
  case 0xf2:
    if (*(char **)((ulong)bVar2 + 0x110) == (char *)0x0) {
      pcVar4 = &UNK_10db82ef0;
      func_0x000107c61520(&UNK_10db82ef0,&UNK_1106053d0);
      pcRam0000000112f38110 = pcVar4;
      return pcVar4;
    }
    return *(char **)((ulong)bVar2 + 0x110);
  case 0xf3:
    goto code_r0x000103081968;
  case 0xf4:
    in_w3 = (uint)(byte)pcVar7[0x10];
code_r0x000103081b04:
    uVar5 = 0;
    if ((double)pcVar8 == param_3) {
      uVar5 = (uint)(*pcVar4 == *pcVar7 && (uint)(byte)pcVar4[0x10] == (in_w3 & 0xff));
    }
    uVar1 = 0;
    if ((double)pcVar10 == param_4) {
      uVar1 = uVar5;
    }
    return (char *)(ulong)uVar1;
  case 0xf6:
    func_0x000107c6157c(0xea00000000007468);
    return (char *)0xea00000000007478;
  case 0xfe:
    goto code_r0x00010308196c;
  }
code_r0x000103081a14:
code_r0x000103081a20:
  func_0x000107c5fb58();
  goto code_r0x000103081a28;
code_r0x0001030819f4:
code_r0x000103081a00:
  goto code_r0x000103081a14;
code_r0x000103081968:
code_r0x00010308196c:
  goto code_r0x000103081a14;
code_r0x000103081a28:
  func_0x000107c6142c();
  pcVar4 = (char *)0x0;
  if ((double)pcVar11 != 0.0) {
    pcVar4 = pcVar11;
  }
  func_0x000107c606a0(pcVar4);
  func_0x000107c606a8();
  return pcVar4;
}



/* Entry: 103081a90; end: 103081aef;  */

void FUN_103081a90(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = unaff_x20[0x10];
  uVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_78);
  FUN_103081594(uVar3,uVar4,auStack_78,uVar2,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103081af0; end: 103081b67;  */

bool FUN_103081af0(char *param_1,char *param_2)

{
  return *(double *)(param_1 + 0x18) == *(double *)(param_2 + 0x18) &&
         (*(double *)(param_1 + 8) == *(double *)(param_2 + 8) &&
         (*param_1 == *param_2 && param_1[0x10] == param_2[0x10]));
}



/* Entry: 103081b68; end: 103081bcb;  */

ulong FUN_103081b68(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Entry: 103081bcc; end: 103081bfb;  */

bool FUN_103081bcc(double param_1,double param_2,double param_3,double param_4,char param_5,
                  char param_6,char param_7,char param_8)

{
  return param_2 == param_4 && (param_1 == param_3 && (param_5 == param_7 && param_6 == param_8));
}



/* Entry: 103081bfc; end: 103081c3b;  */

void FUN_103081bfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f38110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db82ef0;
  func_0x000107c61520(&UNK_10db82ef0,&UNK_1106053d0);
  puRam0000000112f38110 = puVar1;
  return;
}



/* Entry: 103081c3c; end: 103081c67;  */

long FUN_103081c3c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103081c68; end: 103081e67;  */

int FUN_103081c68(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf6 < param_2) && (param_1[0x20] != 0)) {
    return *(int *)param_1 + 0xf7;
  }
  iVar1 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 103081e68; end: 103081f87;  */

void FUN_103081e68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f38118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db82fa8;
  func_0x000107c61520(&UNK_10db82fa8,&UNK_110605470);
  puRam0000000112f38118 = puVar1;
  return;
}



/* Entry: 103081f88; end: 103082033;  */

void FUN_103081f88(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103082034; end: 103082047;  */

bool FUN_103082034(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103082048; end: 103082083;  */

void FUN_103082048(undefined8 param_1)

{
  FUN_103082880();
                    /* WARNING: Could not recover jumptable at 0x00010bdb6770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4FontV6custom_4sizeACSS_12CoreGraphics7CGFloatVtFZ_110349308)
            (param_1,0x6e6f63692d676973,0xe900000000000073);
  return;
}



/* Entry: 103082084; end: 1030820ab;  */

void FUN_103082084(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112f38248 = puVar1;
  return;
}



/* Entry: 1030820ac; end: 1030820db;  */

undefined * FUN_1030820ac(void)

{
  return &UNK_10db82fd0;
}



/* Entry: 1030820dc; end: 103082137;  */

void FUN_1030820dc(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103082be0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f38258;
  plVar5 = (long *)&UNK_10db83068;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103082138; end: 1030823fb;  */

void FUN_103082138(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000103082224(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_103082728(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103082220);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103082224);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10308221c);
  (*pcVar1)();
}



/* Entry: 1030823fc; end: 10308247b;  */

undefined * FUN_1030823fc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1030820dc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10308247c; end: 103082573;  */

long FUN_10308247c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103082570);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103082574);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103082be0(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_103082be0(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10308256c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103082574; end: 103082727;  */

ulong FUN_103082574(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103082658);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10308265c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103082be0(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103082728);
  (*pcVar2)();
}



/* Entry: 103082728; end: 10308287f;  */

ulong FUN_103082728(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103082880);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103082874);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_103082be0(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103082878);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10308287c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_103082574(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 103082880; end: 103082b8b;  */

/* WARNING: Possible PIC construction at 0x000103082b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103082b6c) */

void FUN_103082880(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar16 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (lRam0000000112f38240 != -1) {
    func_0x000107c61568(0x112f38240,FUN_103082084);
  }
  uVar15 = uRam0000000112f38248;
  uVar5 = uRam0000000112f38248;
  func_0x000107c4b940();
  if ((bRam0000000112f38250 & 1) == 0) {
    bRam0000000112f38250 = 1;
    FUN_1030820dc();
    func_0x000107c61534();
    *(undefined8 *)(uVar5 + 0x18) = 3;
    *(undefined8 *)(uVar5 + 0x10) = 1;
    puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168();
    puVar7 = puVar6;
    func_0x000107c4c12c();
    func_0x000107c61180();
    *(undefined **)(uVar5 + 0x20) = puVar7;
    func_0x000107c3db1c(puVar6);
    func_0x000107c61180();
    uVar8 = 0;
    FUN_103082be0(0);
    puVar7 = puVar6;
    func_0x000107c5fc54(puVar6,uVar8);
    func_0x000107c61170(puVar6);
    uStack_90 = uVar5;
    FUN_103082138(puVar7);
    uVar5 = uStack_90;
    uStack_98 = uVar15;
    puStack_b8 = puVar16;
    lStack_b0 = (long)puVar16 - extraout_x12;
    lStack_a8 = lVar14;
    lStack_a0 = lVar4;
    if (uStack_90 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uStack_90 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uStack_90 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uStack_90) {
        uVar13 = uStack_90;
      }
      func_0x000107c60480();
    }
    if (uVar13 != 0) {
      uVar15 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103082b2c);
            (*pcVar3)();
          }
          uVar9 = *(ulong *)(uVar5 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar9 = uVar15;
          FUN_103082574(uVar15,uVar5);
        }
        uVar1 = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103082b28);
          (*pcVar3)();
        }
        uVar8 = 0x6e6f63692d676973;
        func_0x000107c5fadc(0x6e6f63692d676973,0xe900000000000073);
        uVar10 = 0x667474;
        func_0x000107c5fadc(0x667474,0xe300000000000000);
        uVar11 = uVar9;
        func_0x000107c3ac24();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar10);
        puVar16 = puStack_b8;
        if (uVar11 != 0) {
          func_0x000107c5edb4(puStack_b8,uVar11);
          func_0x000107c61170(uVar11);
          lVar2 = lStack_a0;
          lVar14 = lStack_a8;
          lVar4 = lStack_b0;
          lVar12 = lStack_b0;
          (**(code **)(lStack_a8 + 0x20))(lStack_b0,puVar16,lStack_a0);
          func_0x000107c5ed90();
          func_0x000107c60a7c();
          func_0x000107c61170(lVar12);
          func_0x000107c61170(uVar9);
          func_0x000107c6142c(uVar5);
          (**(code **)(lVar14 + 8))(lVar4,lVar2);
          uVar15 = uStack_98;
          goto code_r0x000107c5d278;
        }
        func_0x000107c61170(uVar9);
        uVar15 = uVar15 + 1;
      } while (uVar1 != uVar13);
    }
    func_0x000107c6142c(uVar5);
    uVar15 = uStack_98;
  }
code_r0x000107c5d278:
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar15,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 103082b8c; end: 103082b8f;  */

void FUN_103082b8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f38238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db83030;
  func_0x000107c61520(&UNK_10db83030,&UNK_1106054e8);
  puRam0000000112f38238 = puVar1;
  return;
}



/* Entry: 103082b90; end: 103082bcf;  */

void FUN_103082b90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f38238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db83030;
  func_0x000107c61520(&UNK_10db83030,&UNK_1106054e8);
  puRam0000000112f38238 = puVar1;
  return;
}



/* Entry: 103082bd0; end: 103082bdf;  */

undefined1  [16] FUN_103082bd0(void)

{
  return ZEXT816(0x1106054e8);
}



/* Entry: 103082be0; end: 103082c23;  */

void FUN_103082be0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daba40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112daba40 = puVar1;
  return;
}



/* Entry: 103082c24; end: 103082c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103082c24(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103083018();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f38268) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103082c90; end: 103082cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103082c90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f38268) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103082cfc; end: 103082d5b; -[_TtC47AdAttachmentHandlerScopedFactoryServiceProvider33AdAttachmentHandlerScopedServices init] */

void FUN_103082cfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAttachmentHandlerScopedFactoryServiceProvider.AdAttachmentHandlerScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103082d28);
  (*pcVar1)();
}



/* Entry: 103082d5c; end: 103082d6b; -[_TtC47AdAttachmentHandlerScopedFactoryServiceProvider33AdAttachmentHandlerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103082d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38268));
  return;
}



/* Entry: 103082d6c; end: 103082dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103082d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110605700;
  func_0x000107c613fc(&UNK_110605700,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1030830b0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103082dd8; end: 103082e73;  */

void FUN_103082dd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110605610;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110605610;
  return;
}



/* Entry: 103082e74; end: 103082eab;  */

void FUN_103082e74(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103082eac; end: 103082eb3;  */

undefined8 FUN_103082eac(void)

{
  return 0x1b;
}



/* Entry: 103082eb4; end: 103082fe7;  */

void FUN_103082eb4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110605728;
  func_0x000107c613fc(&UNK_110605728,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103083088;
  func_0x00010058fa64(FUN_103083088,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103082fe8; end: 103083017;  */

undefined ** FUN_103082fe8(void)

{
  return &PTR_DAT_1130664c0;
}



/* Entry: 103083018; end: 103083037;  */

void FUN_103083018(void)

{
  func_0x000107c61168(&PTR_PTR_1128b20c0);
  return;
}



/* Entry: 103083038; end: 103083087;  */

undefined1  [16] FUN_103083038(void)

{
  return ZEXT816(0x110605660);
}



/* Entry: 103083088; end: 1030830af;  */

void FUN_103083088(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1030830b0; end: 1030830c3;  */

void FUN_1030830b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030830c4; end: 10308348b;  */

void FUN_1030830c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f382e0,&UNK_10db832e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103084644();
  func_0x000100082720("AdAttachmentPresenterScopeExposerSubjectServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_103082e74;
  func_0x0001000823a8(FUN_103082e74,0);
  func_0x000100082720("AdAttachmentHandlerScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar4 = puVar2;
  FUN_1030844f8();
  func_0x000100082720("AdAttachmentHandlerScopeGraphBridgeServicesServiceProvider",0x3a,2);
  puVar5 = puVar2;
  FUN_1030846d0();
  func_0x000100082720("AdAttachmentPresenterScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f382e8,&UNK_10db83300);
  puVar6 = &UNK_1106057d8;
  func_0x000107c613fc(&UNK_1106057d8,0x58,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 **)(puVar6 + 0x50) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(puVar5);
  pcVar7 = FUN_1030834a0;
  func_0x0001000823a8(FUN_1030834a0,puVar6);
  func_0x000100082720("AdAttachmentHandlerEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f382f0,&UNK_10db832f0);
  puVar6 = &UNK_110605800;
  func_0x000107c613fc(&UNK_110605800,0x30,7);
  *(code **)(puVar6 + 0x10) = pcVar7;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(undefined8 **)(puVar6 + 0x20) = puVar4;
  *(code **)(puVar6 + 0x28) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_1030834d4;
  func_0x0001000823a8(FUN_1030834d4,puVar6);
  func_0x000100082720("AdAttachmentHandlerScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f38270,&UNK_10db83080);
  func_0x000107c6157c(pcVar8);
  uVar10 = 0x1030834e0;
  func_0x0001000823a8(0x1030834e0,pcVar8);
  func_0x000100082720("AdAttachmentHandlerScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f38260,&UNK_10db83070);
  func_0x000107c6157c(uVar10);
  uVar9 = 0x1030834e8;
  func_0x0001000823a8(0x1030834e8,uVar10);
  func_0x000100082720("AdAttachmentHandlerScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110605828;
  func_0x000107c613fc(&UNK_110605828,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar9 = 0x1030834f0;
  func_0x0001000823a8(0x1030834f0,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar10);
  func_0x000100082720("AdAttachmentHandlerScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10308348c; end: 10308349f;  */

void FUN_10308348c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uStack_68;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar16 = *param_2;
  func_0x0001000285a8(0x112f382e0,&UNK_10db832e8);
  puVar5 = &uStack_68;
  uStack_68 = uVar16;
  func_0x0001000838ec();
  puVar6 = puVar5;
  FUN_103084644();
  func_0x000100082720("AdAttachmentPresenterScopeExposerSubjectServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_103082e74;
  func_0x0001000823a8(FUN_103082e74,0);
  func_0x000100082720("AdAttachmentHandlerScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar8 = puVar6;
  FUN_1030844f8();
  func_0x000100082720("AdAttachmentHandlerScopeGraphBridgeServicesServiceProvider",0x3a,2);
  puVar9 = puVar6;
  FUN_1030846d0();
  func_0x000100082720("AdAttachmentPresenterScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f382e8,&UNK_10db83300);
  puVar10 = &UNK_1106057d8;
  func_0x000107c613fc(&UNK_1106057d8,0x58,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar5;
  *(undefined8 *)(puVar10 + 0x18) = uVar13;
  *(undefined8 *)(puVar10 + 0x20) = uVar2;
  *(undefined8 *)(puVar10 + 0x28) = uVar14;
  *(undefined8 *)(puVar10 + 0x30) = uVar3;
  *(undefined8 *)(puVar10 + 0x38) = uVar1;
  *(undefined8 *)(puVar10 + 0x40) = uVar4;
  *(undefined8 *)(puVar10 + 0x48) = uVar15;
  *(undefined8 **)(puVar10 + 0x50) = puVar9;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(puVar9);
  pcVar11 = FUN_1030834a0;
  func_0x0001000823a8(FUN_1030834a0,puVar10);
  func_0x000100082720("AdAttachmentHandlerEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f382f0,&UNK_10db832f0);
  puVar10 = &UNK_110605800;
  func_0x000107c613fc(&UNK_110605800,0x30,7);
  *(code **)(puVar10 + 0x10) = pcVar11;
  *(undefined8 **)(puVar10 + 0x18) = puVar5;
  *(undefined8 **)(puVar10 + 0x20) = puVar8;
  *(code **)(puVar10 + 0x28) = pcVar7;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(pcVar7);
  pcVar12 = FUN_1030834d4;
  func_0x0001000823a8(FUN_1030834d4,puVar10);
  func_0x000100082720("AdAttachmentHandlerScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f38270,&UNK_10db83080);
  func_0x000107c6157c(pcVar12);
  uVar13 = 0x1030834e0;
  func_0x0001000823a8(0x1030834e0,pcVar12);
  func_0x000100082720("AdAttachmentHandlerScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f38260,&UNK_10db83070);
  func_0x000107c6157c(uVar13);
  uVar14 = 0x1030834e8;
  func_0x0001000823a8(0x1030834e8,uVar13);
  func_0x000100082720("AdAttachmentHandlerScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_110605828;
  func_0x000107c613fc(&UNK_110605828,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar14;
  *(code **)(puVar10 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  uVar14 = 0x1030834f0;
  func_0x0001000823a8(0x1030834f0,puVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(uVar13);
  func_0x000100082720("AdAttachmentHandlerScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar14;
  return;
}



/* Entry: 1030834a0; end: 1030834d3;  */

void FUN_1030834a0(void)

{
  long unaff_x20;
  
  FUN_1030834f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1030834d4; end: 1030834f7;  */

void FUN_1030834d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103083c60(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("AdAttachmentHandlerScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030834f8; end: 103083a2f;  */

void FUN_1030834f8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  FUN_103083bb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  func_0x0001000285a8(0x112f382f8,&UNK_10db83308);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  func_0x00010025a71c();
  puVar9 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar9;
  FUN_10308c798(0);
  func_0x000107c613fc();
  uVar8 = auStack_70[0];
  FUN_10308b5fc(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,puVar9);
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar9);
  uVar10 = auStack_70[0];
  func_0x000107c61174(auStack_70[0]);
  func_0x000107c6157c(uVar8);
  FUN_10308b628();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 103083a30; end: 103083aab;  */

void FUN_103083a30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 103083aac; end: 103083ab3;  */

undefined8 FUN_103083aac(void)

{
  return 0x1b;
}



/* Entry: 103083ab4; end: 103083b37;  */

void FUN_103083ab4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103083bf0,param_2,FUN_103083bf4,param_2,FUN_103083c1c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103083b38; end: 103083b7f;  */

undefined8 FUN_103083b38(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10308c034();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 103083b80; end: 103083baf;  */

undefined ** FUN_103083b80(void)

{
  return &PTR_DAT_1130664c0;
}



/* Entry: 103083bb0; end: 103083bcf;  */

void FUN_103083bb0(void)

{
  func_0x000107c61168(&PTR_PTR_112f38368);
  return;
}



/* Entry: 103083bd0; end: 103083bf3;  */

undefined1  [16] FUN_103083bd0(void)

{
  return ZEXT816(0x110605880);
}



/* Entry: 103083bf4; end: 103083c1b;  */

void FUN_103083bf4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103083c1c; end: 103083c23;  */

undefined8 FUN_103083c1c(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10308c034();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103083c24; end: 103083c5f;  */

void FUN_103083c24(undefined8 *param_1,undefined8 param_2)

{
  FUN_103083c60();
  func_0x0001000a7f38("AdAttachmentHandlerScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103083c60; end: 103083e4b;  */

void FUN_103083c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074ca60;
  ppuVar4 = &PTR_DAT_1130664c0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f38408;
  func_0x0001000285a8(0x112f38408,&UNK_10db83488);
  func_0x0001000a6ee8(&UNK_110605880,
                      "AdAttachmentHandlerEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_103083ec0,param_1,uVar2,&UNK_110605880,&PTR_DAT_112f38300);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1106058d0;
  func_0x000107c613fc(&UNK_1106058d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110605b20,
                      "AdAttachmentHandlerScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_103083ec8,puVar3,uVar2,&UNK_110605b20,&PTR_DAT_112f384a0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106058f8;
  func_0x000107c613fc(&UNK_1106058f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106056a0,"AdAttachmentHandlerScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_103083fb0,puVar3,uVar2,&UNK_1106056a0,&PTR_DAT_112f38278);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f38410;
  func_0x0001000285a8(0x112f38410,&UNK_10db83490);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 103083e4c; end: 103083ebf;  */

void FUN_103083e4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x103083fec;
  func_0x0001000823a8(0x103083fec,param_3);
  func_0x000100082720("AdAttachmentHandlerEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 103083ec0; end: 103083ec7;  */

void FUN_103083ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x103083fec;
  func_0x0001000823a8();
  func_0x000100082720("AdAttachmentHandlerEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 103083ec8; end: 103083f07;  */

void FUN_103083ec8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103084778(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdAttachmentHandlerScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 103083f08; end: 103083faf;  */

void FUN_103083f08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110605920;
  func_0x000107c613fc(&UNK_110605920,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103083fe4;
  func_0x0001000823a8(FUN_103083fe4,puVar1);
  func_0x000100082720("AdAttachmentHandlerScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103083fb0; end: 103083fb7;  */

void FUN_103083fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110605920;
  func_0x000107c613fc(&UNK_110605920,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103083fe4;
  func_0x0001000823a8(FUN_103083fe4,puVar3);
  func_0x000100082720("AdAttachmentHandlerScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103083fb8; end: 103083fe3;  */

void FUN_103083fb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103083fe4; end: 103083ff3;  */

void FUN_103083fe4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110605728;
  func_0x000107c613fc(&UNK_110605728,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103083088;
  func_0x00010058fa64(FUN_103083088,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103083ff4; end: 1030840cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103083ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103084408();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f38418) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f38420) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030840d0);
  (*pcVar1)();
}



/* Entry: 1030840d0; end: 10308412f; -[_TtC35AdAttachmentHandlerScopeGraphBridge50AdAttachmentHandlerScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030840d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAttachmentHandlerScopeGraphBridge.AdAttachmentHandlerScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030840fc);
  (*pcVar1)();
}



/* Entry: 103084130; end: 103084167; -[_TtC35AdAttachmentHandlerScopeGraphBridge50AdAttachmentHandlerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010308414c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103084150) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f38418));
  return;
}



/* Entry: 103084168; end: 10308418f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084168(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f38420),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f38418));
  return;
}



/* Entry: 103084190; end: 1030841af;  */

void FUN_103084190(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2180);
  return;
}



/* Entry: 1030841b0; end: 103084237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030841b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f38450) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f38458);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103084238);
  (*pcVar2)();
}



/* Entry: 103084238; end: 10308431f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103084238(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f38450);
  *(undefined **)(unaff_x20 + _DAT_112f38450) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f38458);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f38458))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110605a40;
  func_0x000107c613fc(&UNK_110605a40,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103084324,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103084320; end: 10308432b;  */

void FUN_103084320(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10308432c; end: 10308438b; -[_TtC35AdAttachmentHandlerScopeGraphBridge48AdAttachmentHandlerScopedServicesSaberEntryPoint init] */

void FUN_10308432c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAttachmentHandlerScopeGraphBridge.AdAttachmentHandlerScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103084358);
  (*pcVar1)();
}



/* Entry: 10308438c; end: 1030843c3; -[_TtC35AdAttachmentHandlerScopeGraphBridge48AdAttachmentHandlerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308438c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38458));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f38450));
  return;
}



/* Entry: 1030843c4; end: 1030843c7;  */

void FUN_1030843c4(void)

{
  return;
}



/* Entry: 1030843c8; end: 1030843e7;  */

void FUN_1030843c8(void)

{
  FUN_103084238();
  return;
}



/* Entry: 1030843e8; end: 103084407;  */

void FUN_1030843e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2248);
  return;
}



/* Entry: 103084408; end: 1030844d7;  */

undefined8 FUN_103084408(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f38488,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1030844d8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1030844d8; end: 1030844f7;  */

void FUN_1030844d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2310);
  return;
}



/* Entry: 1030844f8; end: 103084513;  */

void FUN_1030844f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f38490,&UNK_10db83568);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103084580,param_1);
  return;
}



/* Entry: 103084514; end: 10308457f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084514(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1030844d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f38498) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103084580; end: 103084587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084580(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1030844d8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f38498) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103084588; end: 1030845d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084588(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f38498) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030845d4; end: 103084633; -[_TtC35AdAttachmentHandlerScopeGraphBridge43AdAttachmentHandlerScopeGraphBridgeServices init] */

void FUN_1030845d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAttachmentHandlerScopeGraphBridge.AdAttachmentHandlerScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103084600);
  (*pcVar1)();
}



/* Entry: 103084634; end: 103084643; -[_TtC35AdAttachmentHandlerScopeGraphBridge43AdAttachmentHandlerScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38498));
  return;
}



/* Entry: 103084644; end: 1030846cf;  */

void FUN_103084644(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(0x103084684,0);
  return;
}



/* Entry: 1030846d0; end: 1030846eb;  */

void FUN_1030846d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10308473c,param_1);
  return;
}



/* Entry: 1030846ec; end: 10308473b;  */

void FUN_1030846ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10308473c; end: 10308476f;  */

void FUN_10308473c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103084770; end: 103084777;  */

undefined8 FUN_103084770(void)

{
  return 0x1b;
}


