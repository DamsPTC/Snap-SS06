/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104555828; end: 1045558c3;  */

void FUN_104555828(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar3 = lVar2;
  if (lVar2 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_1,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045558c4);
      (*pcVar1)();
    }
    lVar2 = (param_1 - lVar3) + lVar2;
  }
  if (!SBORROW8(param_2,param_1)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (param_2 - param_1 <= lVar3) {
      lVar3 = param_2 - param_1;
    }
    if ((lVar2 != 0) && (lVar3 != 0)) {
      _memmove(*param_4,lVar2,lVar3);
      *param_4 = *param_4 + lVar3;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045558c0);
  (*pcVar1)();
}



/* Entry: 1045558c4; end: 1045558f3;  */

uint FUN_1045558c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 1045558f4; end: 104555933;  */

void FUN_1045558f4(void)

{
  FUN_104555160();
  return;
}



/* Entry: 104555934; end: 10455593b;  */

void FUN_104555934(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10455593c; end: 104555997;  */

uint FUN_10455593c(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return param_1 & 1;
}



/* Entry: 104555998; end: 104555a07;  */

void FUN_104555998(void)

{
  FUN_104554f3c();
  return;
}



/* Entry: 104555a08; end: 104555a63;  */

void FUN_104555a08(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *param_2;
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x28))(lVar2,*(long *)(unaff_x20 + 0x18));
  func_0x000100075fc4();
  if (!SCARRY8(lVar3,lVar2)) {
    *param_1 = lVar3 + lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104555a64);
  (*pcVar1)();
}



/* Entry: 104555a64; end: 104555b0b;  */

int FUN_104555a64(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x20] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104555b0c; end: 104555b6f;  */

void FUN_104555b0c(void)

{
  func_0x000100dba8ac();
  return;
}



/* Entry: 104555b70; end: 104555b73;  */

uint FUN_104555b70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 104555b74; end: 104555beb;  */

void FUN_104555b74(void)

{
  func_0x000100dba944();
  return;
}



/* Entry: 104555bec; end: 104555c77;  */

void FUN_104555bec(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(char *)(param_1 + 4) = '\0';
    }
    if (param_2 != 0) {
      *(char *)param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    param_1[1] = 0;
    if (0xfe < param_3) {
      *(char *)(param_1 + 4) = '\x01';
    }
  }
  return;
}



/* Entry: 104555c78; end: 104555d33;  */

void FUN_104555c78(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    return;
  }
  __ss11_StringGutsV4growyySiF(0x25);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_11034f048,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000023,0x800000010f207f00,
             "SwiftProtobuf/BytecodeReader.swift",0x22,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104555d34);
  (*pcVar1)();
}



/* Entry: 104555d34; end: 10455614b;  */

void FUN_104555d34(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104556034);
    (*pcVar5)();
  }
  lStack_50 = 0;
  lStack_48 = param_2;
  lStack_40 = param_1;
  lStack_38 = param_2;
  FUN_1045562b4();
  FUN_104555c78();
  if (lStack_50 != lStack_48) {
    do {
      if (lStack_50 == lStack_48) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556018);
        (*pcVar5)();
      }
      lVar1 = lStack_50 + 1;
      if (lStack_48 < lVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10455601c);
        (*pcVar5)();
      }
      bVar4 = *(byte *)(lStack_40 + lStack_50);
      uVar9 = (ulong)bVar4;
      if ((char)bVar4 < '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556020);
        lStack_50 = lVar1;
        (*pcVar5)();
      }
      lVar2 = lVar1;
      if (0x3f < bVar4) {
        if (lVar1 == lStack_48) {
LAB_104556024:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104556028);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        lVar2 = lStack_50 + 2;
        if (lStack_48 < lVar2) {
LAB_104556028:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10455602c);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        bVar4 = *(byte *)(lStack_40 + lVar1);
        if ((char)bVar4 < '\0') {
LAB_10455602c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104556030);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        uVar9 = uVar9 & 0x3f | ((ulong)bVar4 & 0x3f) << 6;
        if (0x3f < bVar4) {
          if (lVar2 == lStack_48) goto LAB_104556024;
          lVar3 = lStack_50 + 3;
          if (lStack_48 < lVar3) goto LAB_104556028;
          bVar4 = *(byte *)(lStack_40 + lVar2);
          if ((char)bVar4 < '\0') goto LAB_10455602c;
          uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0xc;
          lVar2 = lVar3;
          if (0x3f < bVar4) {
            if (lVar3 == lStack_48) goto LAB_104556024;
            lVar2 = lStack_50 + 4;
            if (lStack_48 < lVar2) goto LAB_104556028;
            bVar4 = *(byte *)(lStack_40 + lVar3);
            if ((char)bVar4 < '\0') goto LAB_10455602c;
            uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x12;
            if (0x3f < bVar4) {
              if (lVar2 == lStack_48) goto LAB_104556024;
              lVar3 = lStack_50 + 5;
              if (lStack_48 < lVar3) goto LAB_104556028;
              bVar4 = *(byte *)(lStack_40 + lVar2);
              if ((char)bVar4 < '\0') goto LAB_10455602c;
              uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x18;
              lVar2 = lVar3;
              if (0x3f < bVar4) {
                if (lVar3 == lStack_48) goto LAB_104556024;
                lVar2 = lStack_50 + 6;
                if (lStack_48 < lVar2) goto LAB_104556028;
                bVar4 = *(byte *)(lStack_40 + lVar3);
                if ((char)bVar4 < '\0') goto LAB_10455602c;
                uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x1e;
                if (0x3f < bVar4) {
                  if (lVar2 == lStack_48) goto LAB_104556024;
                  lVar3 = lStack_50 + 7;
                  if (lStack_48 < lVar3) goto LAB_104556028;
                  bVar4 = *(byte *)(lStack_40 + lVar2);
                  if ((char)bVar4 < '\0') goto LAB_10455602c;
                  uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x24;
                  lVar2 = lVar3;
                  if (0x3f < bVar4) {
                    if (lVar3 == lStack_48) goto LAB_104556024;
                    lVar2 = lStack_50 + 8;
                    if (lStack_48 < lVar2) goto LAB_104556028;
                    bVar4 = *(byte *)(lStack_40 + lVar3);
                    if ((char)bVar4 < '\0') goto LAB_10455602c;
                    uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x2a;
                    if (0x3f < bVar4) {
                      if (lVar2 == lStack_48) goto LAB_104556024;
                      lVar3 = lStack_50 + 9;
                      if (lStack_48 < lVar3) goto LAB_104556028;
                      bVar4 = *(byte *)(lStack_40 + lVar2);
                      if ((char)bVar4 < '\0') goto LAB_10455602c;
                      uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x30;
                      lVar2 = lVar3;
                      if (0x3f < bVar4) {
                        if (lVar3 == lStack_48) goto LAB_104556024;
                        lVar2 = lStack_50 + 10;
                        if (lStack_48 < lVar2) goto LAB_104556028;
                        bVar4 = *(byte *)(lStack_40 + lVar3);
                        if ((char)bVar4 < '\0') goto LAB_10455602c;
                        uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x36;
                        if (0x3f < bVar4) {
                          if (lVar2 == lStack_48) goto LAB_104556024;
                          if (lStack_48 < lStack_50 + 0xb) goto LAB_104556028;
                          bVar4 = *(byte *)(lStack_40 + lVar2);
                          if ((char)bVar4 < '\0') goto LAB_10455602c;
                          if (0x3f < bVar4) {
                            uVar11 = 0x6a;
                            uVar7 = 0xd00000000000002b;
                            uVar8 = 0x800000010f207e70;
                            lStack_50 = lVar1;
                            goto LAB_1045560f8;
                          }
                          uVar9 = uVar9 | (ulong)bVar4 << 0x3c;
                          lVar2 = lStack_50 + 0xb;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      lStack_50 = lVar2;
      if (0xc < uVar9) {
        uStack_60 = 0;
        uStack_58 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x2b);
        _swift_bridgeObjectRelease(uStack_58);
        uStack_60 = 0xd000000000000012;
        uStack_58 = 0x800000010f207ea0;
        puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss6UInt64VN_11034f048,
                   PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0xd000000000000015,0x800000010f207ec0);
        __sSS6appendyySSF(0xd000000000000014,0x800000010f207ee0);
        uVar11 = 0x34;
        uVar7 = uStack_60;
        uVar8 = uStack_58;
LAB_1045560f8:
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,uVar7,uVar8,"SwiftProtobuf/BytecodeReader.swift",0x22,2,
                   uVar11,0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556110);
        (*pcVar5)();
      }
      uVar10 = 0;
      switch(uVar9) {
      case 0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556024);
        (*pcVar5)();
      case 2:
        uVar10 = 1;
        break;
      case 3:
        uVar10 = 2;
        break;
      case 4:
        uVar10 = 3;
        break;
      case 5:
        uVar10 = 4;
        break;
      case 6:
        uVar10 = 5;
        break;
      case 7:
        uVar10 = 6;
        break;
      case 8:
        uVar10 = 7;
        break;
      case 9:
        uVar10 = 8;
        break;
      case 10:
        uVar10 = 9;
        break;
      case 0xb:
        uVar10 = 10;
        break;
      case 0xc:
        uVar10 = 0xb;
      }
      uStack_60 = CONCAT71(uStack_60._1_7_,uVar10);
      FUN_10458e290(&uStack_60,&lStack_50,param_3,param_4);
    } while (lStack_50 != lStack_48);
  }
  return;
}



/* Entry: 10455614c; end: 104556253;  */

void FUN_10455614c(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar6 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (-1 < param_2) {
    uVar2 = 0;
    lVar4 = param_2;
    func_0x0001045566d8();
    uStack_70 = uVar2;
    lStack_68 = param_2;
    uStack_60 = param_1;
    lStack_58 = lVar4;
    FUN_104556714();
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      FUN_104556b60(0,param_5,param_6);
      do {
        FUN_104556720(lVar5,uVar3);
        (*param_3)(lVar5,&uStack_70);
        (**(code **)(lVar6 + 8))(lVar5,param_5);
        uVar2 = uStack_70;
        FUN_104556714(uStack_70,lStack_68,uStack_60,lStack_58,param_5,param_6);
      } while ((uVar2 & 1) != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104556254);
  (*pcVar1)();
}



/* Entry: 104556254; end: 1045562b3;  */

void FUN_104556254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1045562b4; end: 104556517;  */

ulong FUN_1045562b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar3 = unaff_x20[1];
  if (lVar2 == lVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045564b8);
    (*pcVar5)();
  }
  lVar8 = lVar2 + 1;
  if (lVar3 < lVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045564bc);
    (*pcVar5)();
  }
  lVar7 = unaff_x20[2];
  bVar4 = *(byte *)(lVar7 + lVar2);
  uVar6 = (ulong)bVar4;
  *unaff_x20 = lVar8;
  if ((char)bVar4 < '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045564c0);
    (*pcVar5)();
  }
  if (0x3f < bVar4) {
    if (lVar8 == lVar3) {
LAB_1045564c0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045564c4);
      (*pcVar5)();
    }
    lVar1 = lVar2 + 2;
    if (lVar3 < lVar1) {
LAB_1045564c4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045564c8);
      (*pcVar5)();
    }
    bVar4 = *(byte *)(lVar7 + lVar8);
    if ((char)bVar4 < '\0') {
LAB_1045564c8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045564cc);
      (*pcVar5)();
    }
    uVar6 = uVar6 & 0x3f | ((ulong)bVar4 & 0x3f) << 6;
    lVar8 = lVar1;
    if (0x3f < bVar4) {
      if (lVar1 == lVar3) goto LAB_1045564c0;
      lVar8 = lVar2 + 3;
      if (lVar3 < lVar8) goto LAB_1045564c4;
      bVar4 = *(byte *)(lVar7 + lVar1);
      if ((char)bVar4 < '\0') goto LAB_1045564c8;
      uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0xc;
      if (0x3f < bVar4) {
        if (lVar8 == lVar3) goto LAB_1045564c0;
        lVar1 = lVar2 + 4;
        if (lVar3 < lVar1) goto LAB_1045564c4;
        bVar4 = *(byte *)(lVar7 + lVar8);
        if ((char)bVar4 < '\0') goto LAB_1045564c8;
        uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x12;
        lVar8 = lVar1;
        if (0x3f < bVar4) {
          if (lVar1 == lVar3) goto LAB_1045564c0;
          lVar8 = lVar2 + 5;
          if (lVar3 < lVar8) goto LAB_1045564c4;
          bVar4 = *(byte *)(lVar7 + lVar1);
          if ((char)bVar4 < '\0') goto LAB_1045564c8;
          uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x18;
          if (0x3f < bVar4) {
            if (lVar8 == lVar3) goto LAB_1045564c0;
            lVar1 = lVar2 + 6;
            if (lVar3 < lVar1) goto LAB_1045564c4;
            bVar4 = *(byte *)(lVar7 + lVar8);
            if ((char)bVar4 < '\0') goto LAB_1045564c8;
            uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x1e;
            lVar8 = lVar1;
            if (0x3f < bVar4) {
              if (lVar1 == lVar3) goto LAB_1045564c0;
              lVar8 = lVar2 + 7;
              if (lVar3 < lVar8) goto LAB_1045564c4;
              bVar4 = *(byte *)(lVar7 + lVar1);
              if ((char)bVar4 < '\0') goto LAB_1045564c8;
              uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x24;
              if (0x3f < bVar4) {
                if (lVar8 == lVar3) goto LAB_1045564c0;
                lVar1 = lVar2 + 8;
                if (lVar3 < lVar1) goto LAB_1045564c4;
                bVar4 = *(byte *)(lVar7 + lVar8);
                if ((char)bVar4 < '\0') goto LAB_1045564c8;
                uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x2a;
                lVar8 = lVar1;
                if (0x3f < bVar4) {
                  if (lVar1 == lVar3) goto LAB_1045564c0;
                  lVar8 = lVar2 + 9;
                  if (lVar3 < lVar8) goto LAB_1045564c4;
                  bVar4 = *(byte *)(lVar7 + lVar1);
                  if ((char)bVar4 < '\0') goto LAB_1045564c8;
                  uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x30;
                  if (0x3f < bVar4) {
                    if (lVar8 == lVar3) goto LAB_1045564c0;
                    lVar1 = lVar2 + 10;
                    if (lVar3 < lVar1) goto LAB_1045564c4;
                    bVar4 = *(byte *)(lVar7 + lVar8);
                    if ((char)bVar4 < '\0') goto LAB_1045564c8;
                    uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x36;
                    lVar8 = lVar1;
                    if (0x3f < bVar4) {
                      if (lVar1 == lVar3) goto LAB_1045564c0;
                      lVar8 = lVar2 + 0xb;
                      if (lVar3 < lVar8) goto LAB_1045564c4;
                      bVar4 = *(byte *)(lVar7 + lVar1);
                      if ((char)bVar4 < '\0') goto LAB_1045564c8;
                      if (0x3f < bVar4) {
                        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                                  ("Fatal error",0xb,2,0xd00000000000002b,0x800000010f207e70,
                                   "SwiftProtobuf/BytecodeReader.swift",0x22,2,0x6a,0);
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556518);
                        (*pcVar5)();
                      }
                      uVar6 = uVar6 | (ulong)bVar4 << 0x3c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *unaff_x20 = lVar8;
  }
  return uVar6;
}



/* Entry: 104556518; end: 104556713;  */

void FUN_104556518(ulong param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((param_3 & 1) != 0) {
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104556560);
      (*pcVar5)();
    }
    if ((param_1 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104556568);
      (*pcVar5)();
    }
    if (0x10 < param_1 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104556564);
      (*pcVar5)();
    }
    if (param_1 != 0) {
      __ss11_StringGutsV4growyySiF(0x25);
      _swift_bridgeObjectRelease(0xe000000000000000);
      puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      uStack_38 = param_1;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss6UInt64VN_11034f048,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068
                );
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
      lStack_50 = 0x24;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd000000000000023,0x800000010f207f00,
                 "SwiftProtobuf/BytecodeReader.swift",0x22,2);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10455661c);
      (*pcVar5)();
    }
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10455655c);
    (*pcVar5)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104556034);
    (*pcVar5)();
  }
  lStack_50 = 0;
  uStack_48 = param_2;
  uStack_40 = param_1;
  uStack_38 = param_2;
  FUN_1045562b4();
  FUN_104555c78();
  if (lStack_50 != uStack_48) {
    do {
      if (lStack_50 == uStack_48) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556018);
        (*pcVar5)();
      }
      lVar1 = lStack_50 + 1;
      if (uStack_48 < lVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10455601c);
        (*pcVar5)();
      }
      bVar4 = *(byte *)(uStack_40 + lStack_50);
      uVar9 = (ulong)bVar4;
      if ((char)bVar4 < '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556020);
        lStack_50 = lVar1;
        (*pcVar5)();
      }
      lVar2 = lVar1;
      if (0x3f < bVar4) {
        if (lVar1 == uStack_48) {
LAB_104556024:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104556028);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        lVar2 = lStack_50 + 2;
        if (uStack_48 < lVar2) {
LAB_104556028:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10455602c);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        bVar4 = *(byte *)(uStack_40 + lVar1);
        if ((char)bVar4 < '\0') {
LAB_10455602c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104556030);
          lStack_50 = lVar1;
          (*pcVar5)();
        }
        uVar9 = uVar9 & 0x3f | ((ulong)bVar4 & 0x3f) << 6;
        if (0x3f < bVar4) {
          if (lVar2 == uStack_48) goto LAB_104556024;
          lVar3 = lStack_50 + 3;
          if (uStack_48 < lVar3) goto LAB_104556028;
          bVar4 = *(byte *)(uStack_40 + lVar2);
          if ((char)bVar4 < '\0') goto LAB_10455602c;
          uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0xc;
          lVar2 = lVar3;
          if (0x3f < bVar4) {
            if (lVar3 == uStack_48) goto LAB_104556024;
            lVar2 = lStack_50 + 4;
            if (uStack_48 < lVar2) goto LAB_104556028;
            bVar4 = *(byte *)(uStack_40 + lVar3);
            if ((char)bVar4 < '\0') goto LAB_10455602c;
            uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x12;
            if (0x3f < bVar4) {
              if (lVar2 == uStack_48) goto LAB_104556024;
              lVar3 = lStack_50 + 5;
              if (uStack_48 < lVar3) goto LAB_104556028;
              bVar4 = *(byte *)(uStack_40 + lVar2);
              if ((char)bVar4 < '\0') goto LAB_10455602c;
              uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x18;
              lVar2 = lVar3;
              if (0x3f < bVar4) {
                if (lVar3 == uStack_48) goto LAB_104556024;
                lVar2 = lStack_50 + 6;
                if (uStack_48 < lVar2) goto LAB_104556028;
                bVar4 = *(byte *)(uStack_40 + lVar3);
                if ((char)bVar4 < '\0') goto LAB_10455602c;
                uVar9 = uVar9 | ((ulong)bVar4 & 0x3f) << 0x1e;
                if (0x3f < bVar4) {
                  if (lVar2 == uStack_48) goto LAB_104556024;
                  lVar3 = lStack_50 + 7;
                  if (uStack_48 < lVar3) goto LAB_104556028;
                  bVar4 = *(byte *)(uStack_40 + lVar2);
                  if ((char)bVar4 < '\0') goto LAB_10455602c;
                  uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x24;
                  lVar2 = lVar3;
                  if (0x3f < bVar4) {
                    if (lVar3 == uStack_48) goto LAB_104556024;
                    lVar2 = lStack_50 + 8;
                    if (uStack_48 < lVar2) goto LAB_104556028;
                    bVar4 = *(byte *)(uStack_40 + lVar3);
                    if ((char)bVar4 < '\0') goto LAB_10455602c;
                    uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x2a;
                    if (0x3f < bVar4) {
                      if (lVar2 == uStack_48) goto LAB_104556024;
                      lVar3 = lStack_50 + 9;
                      if (uStack_48 < lVar3) goto LAB_104556028;
                      bVar4 = *(byte *)(uStack_40 + lVar2);
                      if ((char)bVar4 < '\0') goto LAB_10455602c;
                      uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x30;
                      lVar2 = lVar3;
                      if (0x3f < bVar4) {
                        if (lVar3 == uStack_48) goto LAB_104556024;
                        lVar2 = lStack_50 + 10;
                        if (uStack_48 < lVar2) goto LAB_104556028;
                        bVar4 = *(byte *)(uStack_40 + lVar3);
                        if ((char)bVar4 < '\0') goto LAB_10455602c;
                        uVar9 = uVar9 | (ulong)(bVar4 & 0x3f) << 0x36;
                        if (0x3f < bVar4) {
                          if (lVar2 == uStack_48) goto LAB_104556024;
                          if (uStack_48 < lStack_50 + 0xb) goto LAB_104556028;
                          bVar4 = *(byte *)(uStack_40 + lVar2);
                          if ((char)bVar4 < '\0') goto LAB_10455602c;
                          if (0x3f < bVar4) {
                            uVar11 = 0x6a;
                            uVar7 = 0xd00000000000002b;
                            uVar8 = 0x800000010f207e70;
                            lStack_50 = lVar1;
                            goto LAB_1045560f8;
                          }
                          uVar9 = uVar9 | (ulong)bVar4 << 0x3c;
                          lVar2 = lStack_50 + 0xb;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      lStack_50 = lVar2;
      if (0xc < uVar9) {
        uStack_60 = 0;
        uStack_58 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x2b);
        _swift_bridgeObjectRelease(uStack_58);
        uStack_60 = 0xd000000000000012;
        uStack_58 = 0x800000010f207ea0;
        puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss6UInt64VN_11034f048,
                   PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0xd000000000000015,0x800000010f207ec0);
        __sSS6appendyySSF(0xd000000000000014,0x800000010f207ee0);
        uVar11 = 0x34;
        uVar7 = uStack_60;
        uVar8 = uStack_58;
LAB_1045560f8:
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,uVar7,uVar8,"SwiftProtobuf/BytecodeReader.swift",0x22,2,
                   uVar11,0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556110);
        (*pcVar5)();
      }
      uVar10 = 0;
      switch(uVar9) {
      case 0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556024);
        (*pcVar5)();
      case 2:
        uVar10 = 1;
        break;
      case 3:
        uVar10 = 2;
        break;
      case 4:
        uVar10 = 3;
        break;
      case 5:
        uVar10 = 4;
        break;
      case 6:
        uVar10 = 5;
        break;
      case 7:
        uVar10 = 6;
        break;
      case 8:
        uVar10 = 7;
        break;
      case 9:
        uVar10 = 8;
        break;
      case 10:
        uVar10 = 9;
        break;
      case 0xb:
        uVar10 = 10;
        break;
      case 0xc:
        uVar10 = 0xb;
      }
      uStack_60 = CONCAT71(uStack_60._1_7_,uVar10);
      FUN_10458e290(&uStack_60,&lStack_50,param_4,param_5);
    } while (lStack_50 != uStack_48);
  }
  return;
}



/* Entry: 104556714; end: 10455671f;  */

bool FUN_104556714(long param_1,long param_2)

{
  return param_1 != param_2;
}



/* Entry: 104556720; end: 1045568fb;  */

void FUN_104556720(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [8];
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar7 = *(long *)(param_2 + 0x10);
  lVar3 = 0;
  __sSqMa(0,lVar7);
  lVar11 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar9 = auStack_70 + lVar1;
  if (*unaff_x20 == unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10455680c);
    (*pcVar2)();
  }
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  FUN_1045568fc();
  if (lVar4 != 0) {
    lStack_60 = lVar4;
    __sSY8rawValuexSg03RawB0Qz_tcfCTj(puVar9,&lStack_60,lVar7,uVar10);
    lVar8 = *(long *)(lVar7 + -8);
    puVar5 = puVar9;
    (**(code **)(lVar8 + 0x30))(puVar9,1,lVar7);
    if ((int)puVar5 != 1) {
      (**(code **)(lVar8 + 0x20))(param_1,puVar9,lVar7);
      return;
    }
    (**(code **)(lVar11 + 8))(puVar9,lVar3);
    lStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(uStack_58);
    lStack_60 = -0x2fffffffffffffee;
    uStack_58 = 0x800000010f207ea0;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    lStack_68 = lVar4;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt64VN_11034f048,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar6);
    __sSS6appendyySSF(0xd000000000000015,0x800000010f207ec0);
    uVar10 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF(lVar7,0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar10);
    uVar10 = uStack_58;
    lVar4 = lStack_60;
    *(undefined4 *)((long)auStack_78 + lVar1) = 0;
    *(undefined8 *)((long)&uStack_80 + lVar1) = 0x34;
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,lVar4,uVar10,"SwiftProtobuf/BytecodeReader.swift",0x22,2);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045568fc);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104556810);
  (*pcVar2)();
}



/* Entry: 1045568fc; end: 104556b5f;  */

ulong FUN_1045568fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar3 = unaff_x20[1];
  if (lVar2 == lVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104556b00);
    (*pcVar5)();
  }
  lVar8 = lVar2 + 1;
  if (lVar3 < lVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104556b04);
    (*pcVar5)();
  }
  lVar7 = unaff_x20[2];
  bVar4 = *(byte *)(lVar7 + lVar2);
  uVar6 = (ulong)bVar4;
  *unaff_x20 = lVar8;
  if ((char)bVar4 < '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104556b08);
    (*pcVar5)();
  }
  if (0x3f < bVar4) {
    if (lVar8 == lVar3) {
LAB_104556b08:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104556b0c);
      (*pcVar5)();
    }
    lVar1 = lVar2 + 2;
    if (lVar3 < lVar1) {
LAB_104556b0c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104556b10);
      (*pcVar5)();
    }
    bVar4 = *(byte *)(lVar7 + lVar8);
    if ((char)bVar4 < '\0') {
LAB_104556b10:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104556b14);
      (*pcVar5)();
    }
    uVar6 = uVar6 & 0x3f | ((ulong)bVar4 & 0x3f) << 6;
    lVar8 = lVar1;
    if (0x3f < bVar4) {
      if (lVar1 == lVar3) goto LAB_104556b08;
      lVar8 = lVar2 + 3;
      if (lVar3 < lVar8) goto LAB_104556b0c;
      bVar4 = *(byte *)(lVar7 + lVar1);
      if ((char)bVar4 < '\0') goto LAB_104556b10;
      uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0xc;
      if (0x3f < bVar4) {
        if (lVar8 == lVar3) goto LAB_104556b08;
        lVar1 = lVar2 + 4;
        if (lVar3 < lVar1) goto LAB_104556b0c;
        bVar4 = *(byte *)(lVar7 + lVar8);
        if ((char)bVar4 < '\0') goto LAB_104556b10;
        uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x12;
        lVar8 = lVar1;
        if (0x3f < bVar4) {
          if (lVar1 == lVar3) goto LAB_104556b08;
          lVar8 = lVar2 + 5;
          if (lVar3 < lVar8) goto LAB_104556b0c;
          bVar4 = *(byte *)(lVar7 + lVar1);
          if ((char)bVar4 < '\0') goto LAB_104556b10;
          uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x18;
          if (0x3f < bVar4) {
            if (lVar8 == lVar3) goto LAB_104556b08;
            lVar1 = lVar2 + 6;
            if (lVar3 < lVar1) goto LAB_104556b0c;
            bVar4 = *(byte *)(lVar7 + lVar8);
            if ((char)bVar4 < '\0') goto LAB_104556b10;
            uVar6 = uVar6 | ((ulong)bVar4 & 0x3f) << 0x1e;
            lVar8 = lVar1;
            if (0x3f < bVar4) {
              if (lVar1 == lVar3) goto LAB_104556b08;
              lVar8 = lVar2 + 7;
              if (lVar3 < lVar8) goto LAB_104556b0c;
              bVar4 = *(byte *)(lVar7 + lVar1);
              if ((char)bVar4 < '\0') goto LAB_104556b10;
              uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x24;
              if (0x3f < bVar4) {
                if (lVar8 == lVar3) goto LAB_104556b08;
                lVar1 = lVar2 + 8;
                if (lVar3 < lVar1) goto LAB_104556b0c;
                bVar4 = *(byte *)(lVar7 + lVar8);
                if ((char)bVar4 < '\0') goto LAB_104556b10;
                uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x2a;
                lVar8 = lVar1;
                if (0x3f < bVar4) {
                  if (lVar1 == lVar3) goto LAB_104556b08;
                  lVar8 = lVar2 + 9;
                  if (lVar3 < lVar8) goto LAB_104556b0c;
                  bVar4 = *(byte *)(lVar7 + lVar1);
                  if ((char)bVar4 < '\0') goto LAB_104556b10;
                  uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x30;
                  if (0x3f < bVar4) {
                    if (lVar8 == lVar3) goto LAB_104556b08;
                    lVar1 = lVar2 + 10;
                    if (lVar3 < lVar1) goto LAB_104556b0c;
                    bVar4 = *(byte *)(lVar7 + lVar8);
                    if ((char)bVar4 < '\0') goto LAB_104556b10;
                    uVar6 = uVar6 | (ulong)(bVar4 & 0x3f) << 0x36;
                    lVar8 = lVar1;
                    if (0x3f < bVar4) {
                      if (lVar1 == lVar3) goto LAB_104556b08;
                      lVar8 = lVar2 + 0xb;
                      if (lVar3 < lVar8) goto LAB_104556b0c;
                      bVar4 = *(byte *)(lVar7 + lVar1);
                      if ((char)bVar4 < '\0') goto LAB_104556b10;
                      if (0x3f < bVar4) {
                        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                                  ("Fatal error",0xb,2,0xd00000000000002b,0x800000010f207e70,
                                   "SwiftProtobuf/BytecodeReader.swift",0x22,2,0x6a,0);
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x104556b60);
                        (*pcVar5)();
                      }
                      uVar6 = uVar6 | (ulong)bVar4 << 0x3c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *unaff_x20 = lVar8;
  }
  return uVar6;
}



/* Entry: 104556b60; end: 104556b77;  */

void FUN_104556b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81391c);
  return;
}



/* Entry: 104556b78; end: 104556b8b;  */

void FUN_104556b78(void)

{
  FUN_1045568fc();
  return;
}



/* Entry: 104556b8c; end: 104556c03;  */

undefined1  [16] FUN_104556b8c(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 auVar7 [16];
  
  lVar2 = *unaff_x20;
  lVar3 = unaff_x20[1];
  if (lVar2 == lVar3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104556c00);
    (*pcVar4)();
  }
  lVar5 = unaff_x20[2];
  lVar6 = lVar2;
  if (*(char *)(lVar5 + lVar2) != '\0') {
    do {
      if (lVar3 + -1 == lVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104556bfc);
        (*pcVar4)();
      }
      pcVar1 = (char *)(lVar5 + 1 + lVar6);
      lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\0');
    if (lVar6 < lVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104556bd4);
      (*pcVar4)();
    }
  }
  if (lVar3 < lVar6 + 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104556c04);
    (*pcVar4)();
  }
  auVar7._8_8_ = lVar6 - lVar2;
  pcVar1 = (char *)0x0;
  if (lVar5 != 0) {
    pcVar1 = (char *)(lVar5 + lVar2);
  }
  *unaff_x20 = lVar6 + 1;
  auVar7._0_8_ = pcVar1;
  return auVar7;
}



/* Entry: 104556c04; end: 104556cef;  */

/* WARNING: Removing unreachable block (ram,0x000104556cd8) */
/* WARNING: Removing unreachable block (ram,0x000104556cdc) */
/* WARNING: Removing unreachable block (ram,0x000104556ce0) */

undefined * FUN_104556c04(undefined *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*unaff_x20 == unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104556cd0);
    (*pcVar1)();
  }
  FUN_1045568fc();
  if (-1 < (long)param_1) {
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != (undefined *)0x0) {
      uVar2 = 0x113084eb0;
      func_0x0001000285a8(0x113084eb0,&UNK_10dd18c60);
      puVar3 = param_1;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (param_1,uVar2);
      *(undefined **)(puVar3 + 0x10) = param_1;
    }
    puStack_58 = puVar3 + 0x20;
    lStack_48 = 0;
    puStack_50 = param_1;
    FUN_104556cf0(&puStack_58,&lStack_48,param_1);
    if (lStack_48 <= (long)param_1) {
      *(long *)(puVar3 + 0x10) = lStack_48;
      return puVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104556cd8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104556cd4);
  (*pcVar1)();
}



/* Entry: 104556cf0; end: 104556d5b;  */

void FUN_104556cf0(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (-1 < param_3) {
    if (param_3 != 0) {
      puVar3 = (undefined8 *)(*param_1 + 8);
      plVar2 = param_2;
      lVar4 = param_3;
      do {
        FUN_104556b8c();
        puVar3[-1] = param_1;
        *puVar3 = plVar2;
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *param_2 = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104556d5c);
  (*pcVar1)();
}



/* Entry: 104556d5c; end: 104556d63;  */

void FUN_104556d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104556d64; end: 104556d8f;  */

long FUN_104556d64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104556d90; end: 104556e0b;  */

int FUN_104556d90(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104556e0c; end: 104556efb;  */

void FUN_104556e0c(void)

{
  func_0x000100dba9e8();
  return;
}



/* Entry: 104556efc; end: 1045571f3;  */

/* WARNING: Removing unreachable block (ram,0x0001045570c0) */
/* WARNING: Removing unreachable block (ram,0x00010455711c) */

void FUN_104556efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  do {
    FUN_10457e0a0();
    uVar1 = unaff_x20[2];
    lVar5 = *unaff_x20;
    if (lVar5 == 0) {
      if (uVar1 != 0) goto LAB_104556f70;
    }
    else if (uVar1 != unaff_x20[1] - lVar5) {
LAB_104556f70:
      if (*(char *)(lVar5 + uVar1) == '}') {
        if ((lVar5 == 0) || ((ulong)(unaff_x20[1] - lVar5) <= uVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104557198);
          (*pcVar2)();
        }
        unaff_x20[2] = uVar1 + 1;
        lVar5 = unaff_x20[0xb] + 1;
        if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10455719c);
          (*pcVar2)();
        }
        unaff_x20[0xb] = lVar5;
        if (lVar5 <= unaff_x20[4]) {
          return;
        }
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
                   "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045571f4);
        (*pcVar2)();
      }
    }
    lVar5 = unaff_x20[0xe];
    if ((0 < lVar5) && (FUN_10457ed38(0x2c), unaff_x21 != 0)) {
      return;
    }
    if (unaff_x20[0x10] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045571a0);
      (*pcVar2)();
    }
    lVar3 = unaff_x20[0x13];
    lVar4 = unaff_x20[0xc];
    FUN_10457f9a8(lVar3,lVar4,unaff_x20[0xd]);
    if (unaff_x21 != 0) {
      return;
    }
    if (((uint)lVar4 & 0xff) == 1) {
      return;
    }
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104557194);
      (*pcVar2)();
    }
    unaff_x20[0xe] = lVar5 + 1;
    lVar5 = unaff_x20[9];
    lVar4 = unaff_x20[10];
    func_0x0001000a8868(unaff_x20 + 6,lVar5);
    (**(code **)(lVar4 + 8))(auStack_b0,param_2,param_3,lVar3,lVar5,lVar4);
    if (lStack_98 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045571a4);
      (*pcVar2)();
    }
    FUN_1045574a0(auStack_b0,auStack_88);
    pcVar2 = (code *)auStack_d0;
    FUN_10454d0d0();
    FUN_1045574b8(lVar3,auStack_b0,0x112db4800,&UNK_10d95efc0);
    lVar5 = lStack_98;
    func_0x000104557500(auStack_b0,0x112db4800,&UNK_10d95efc0);
    lVar4 = lStack_68;
    if (lVar5 == 0) {
      func_0x0001000a8868(auStack_88,uStack_70);
      (**(code **)(lVar4 + 0x20))(auStack_b0);
      func_0x00010454d444(auStack_b0,lVar3);
    }
    else {
      if (*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045571a8);
        (*pcVar2)();
      }
      lVar5 = *(long *)(lVar3 + 0x20);
      func_0x0001000c6518(lVar3,*(long *)(lVar3 + 0x18));
      (**(code **)(lVar5 + 0x28))();
    }
    (*pcVar2)(auStack_d0,0);
    func_0x0001000834e4(auStack_88);
  } while( true );
}



/* Entry: 1045571f4; end: 1045573e3;  */

/* WARNING: Removing unreachable block (ram,0x0001045573b0) */

void FUN_1045571f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_118 [24];
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  do {
    while( true ) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (((0 < lVar6) &&
          (pcVar1 = *(char **)(unaff_x20 + 0x28), pcVar1 != *(char **)(unaff_x20 + 0x30))) &&
         ((*pcVar1 == ';' || (*pcVar1 == ',')))) {
        *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
        FUN_1045ab5a4();
      }
      uStack_98 = *(undefined8 *)(unaff_x20 + 0x70);
      uStack_a0 = *(undefined8 *)(unaff_x20 + 0x68);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x80);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_78 = *(undefined8 *)(unaff_x20 + 0x90);
      uStack_80 = *(undefined8 *)(unaff_x20 + 0x88);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
      puVar4 = &uStack_a0;
      FUN_1045a89a8(puVar4,uVar5,*(undefined8 *)(unaff_x20 + 0xa0),*(undefined2 *)(unaff_x20 + 0x60)
                   );
      if ((unaff_x21 != 0) || (((uint)uVar5 & 0xff) == 1)) {
        return;
      }
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045573e4);
        (*pcVar3)();
      }
      *(long *)(unaff_x20 + 0x58) = lVar6 + 1;
      FUN_1045574b8();
      lVar2 = lStack_f8;
      lVar6 = lStack_100;
      if (lStack_100 != 0) break;
      func_0x000104557500(auStack_118,0x112d49548,&UNK_10d90fde0);
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      uStack_d0 = 0;
LAB_104557258:
      func_0x000104557500(&uStack_f0,0x113084df8,&UNK_10dd16980);
    }
    func_0x0001000a8868(auStack_118,lStack_100);
    (**(code **)(lVar2 + 8))(&uStack_f0,param_2,param_3,puVar4,lVar6,lVar2);
    func_0x0001000834e4(auStack_118);
    if (lStack_d8 == 0) goto LAB_104557258;
    FUN_1045574a0(&uStack_f0,auStack_c8);
    pcVar3 = (code *)&uStack_f0;
    FUN_10454d0d0(pcVar3,puVar4);
    FUN_10459f40c(puVar4);
    (*pcVar3)();
    func_0x0001000834e4(auStack_c8);
  } while( true );
}



/* Entry: 1045573e4; end: 104557463;  */

void FUN_1045573e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_5 + 0x10);
  while ((uVar1 = param_4, lVar2 = param_5, (*pcVar3)(param_4), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    (**(code **)(param_5 + 0x1d0))(param_1,param_2,param_3,uVar1,param_4,param_5);
  }
  return;
}



/* Entry: 104557464; end: 10455749f;  */

void FUN_104557464(void)

{
  FUN_104556efc();
  return;
}



/* Entry: 1045574a0; end: 1045574b7;  */

undefined8 * FUN_1045574a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1045574b8; end: 10455753f;  */

undefined8 FUN_1045574b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104557540; end: 10455758f;  */

void FUN_104557540(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_slowDealloc(*(long *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104557590; end: 10455768b;  */

void FUN_104557590(ulong param_1,long param_2,long param_3,byte param_4)

{
  code *pcVar1;
  ulong uVar2;
  byte bVar3;
  long unaff_x20;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    bVar3 = 1;
    uVar2 = 0;
  }
  else {
    bVar3 = 1;
    param_3 = param_3 - param_2;
    uVar2 = 0;
    if ((param_3 != 0) && (param_3 < *(long *)(unaff_x20 + 0x18))) {
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (lVar4 == 0) goto LAB_104557684;
      _memmove(lVar4,param_2,param_3);
      *(undefined1 *)(lVar4 + param_3) = 0;
      lStack_40 = lVar4;
      _strtod(lVar4,&lStack_40);
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10455768c);
        (*pcVar1)();
      }
      bVar3 = 1;
      uVar2 = 0;
      if ((lStack_40 != 0) && (*(long *)(unaff_x20 + 0x10) + param_3 == lStack_40)) {
        bVar3 = param_4 & 0x7fefffffffffffff < (param_1 & 0x7fffffffffffffff);
        uVar2 = 0;
        if (bVar3 == 0) {
          uVar2 = param_1;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail(uVar2,bVar3);
LAB_104557684:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104557688);
  (*pcVar1)();
}



/* Entry: 10455768c; end: 1045576bf;  */

void FUN_10455768c(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  __ss6HasherV8_combineyySuF();
  return;
}



/* Entry: 1045576c0; end: 104557e2b;  */

undefined8 FUN_1045576c0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long alStack_c8 [13];
  
  lVar1 = param_1;
  _swift_conformsToProtocol(param_1,&DAT_10e8147e0);
  if (lVar1 == 0 || param_1 == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(lVar1 + 8))(&uStack_f8,param_1,lVar1);
    (**(code **)(param_2 + 0x28))();
    alStack_c8[0xc] = lStack_f0;
    if (*(long *)(lStack_f0 + 0x10) == 0) {
      uVar2 = 0;
      plVar3 = alStack_c8;
      plVar4 = alStack_c8 + 1;
      plVar5 = alStack_c8 + 2;
      plVar6 = alStack_c8 + 3;
    }
    else {
      func_0x00010035a314();
      if ((param_2 & 1) == 0) {
        uVar2 = 0;
        plVar3 = alStack_c8 + 8;
        plVar4 = alStack_c8 + 9;
        plVar5 = alStack_c8 + 10;
        plVar6 = alStack_c8 + 0xb;
      }
      else {
        uVar2 = *(undefined8 *)(*(long *)(lStack_f0 + 0x38) + param_1 * 0x28 + 0x18);
        plVar3 = alStack_c8 + 4;
        plVar4 = alStack_c8 + 5;
        plVar5 = alStack_c8 + 6;
        plVar6 = alStack_c8 + 7;
      }
    }
    _swift_release(uStack_f8);
    FUN_104557e2c(alStack_c8 + 0xc,0x113085000,&UNK_10dd187f0);
    *plVar6 = lStack_e8;
    FUN_104557e2c(plVar6,0x113085008,&UNK_10dd18d40);
    *plVar5 = lStack_e0;
    FUN_104557e2c(plVar5,0x113085008,&UNK_10dd18d40);
    *plVar4 = lStack_d8;
    FUN_104557e2c(plVar4,0x112d38270,&UNK_10d905a20);
    *plVar3 = lStack_d0;
    FUN_104557e2c(plVar3,0x113085010,&UNK_10dd18d50);
  }
  return uVar2;
}



/* Entry: 104557e2c; end: 104557e6b;  */

undefined8 FUN_104557e2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104557e6c; end: 104557f2b;  */

void FUN_104557e6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  lStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_60 = param_1[4];
  if (lStack_68 == 0) {
    FUN_104558b80(&uStack_80,0x112db4800,&UNK_10d95efc0);
    FUN_104558bc0(auStack_58,param_2);
    FUN_104558b80(auStack_58,0x112db4800,&UNK_10d95efc0);
  }
  else {
    FUN_104558c58(&uStack_80,auStack_58);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uStack_80 = *unaff_x20;
    FUN_104568230(auStack_58,param_2,uVar1);
    *unaff_x20 = uStack_80;
  }
  return;
}



/* Entry: 104557f2c; end: 1045580af;  */

void FUN_104557f2c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d0 [32];
  long *aplStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar9 = *param_1;
  lVar7 = *(long *)(lVar9 + 0x60);
  uVar4 = *(undefined8 *)(lVar9 + 0x50);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,lVar7,uVar4,&UNK_10e813d24,&UNK_10e813d3c);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = param_1[2];
  uVar10 = *(undefined8 *)(lVar9 + 0x58);
  uStack_70 = *(undefined8 *)(param_3 + 8);
  uVar2 = 0;
  uStack_88 = uVar4;
  uStack_80 = uVar10;
  lStack_78 = lVar7;
  FUN_10458aaec(0,&uStack_88);
  ppuStack_90 = &PTR_DAT_1107894a8;
  aplStack_b0[0] = param_1;
  uStack_98 = uVar2;
  (**(code **)(lVar5 + 0x10))(auStack_e0 + -extraout_x8,param_2,lVar1);
  pcVar6 = *(code **)(lVar7 + 0x38);
  uStack_68 = *(undefined8 *)(lVar7 + 0x10);
  puVar3 = &uStack_88;
  uStack_70 = uVar4;
  func_0x0001000c5db4(puVar3);
  _swift_retain(param_1);
  (*pcVar6)(puVar3,aplStack_b0,auStack_e0 + -extraout_x8,uVar4,lVar7);
  pcVar6 = (code *)auStack_d0;
  (**(code **)(param_3 + 0x20))(pcVar6,uVar10,param_3);
  FUN_1045580b0(&uStack_88,aplStack_b0);
  FUN_104557e6c(aplStack_b0,lVar8);
  FUN_104558b80(&uStack_88,0x112db4800,&UNK_10d95efc0);
  (*pcVar6)(auStack_d0,0);
  return;
}



/* Entry: 1045580b0; end: 1045580ff;  */

undefined8 FUN_1045580b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db4800;
  func_0x0001000285a8(0x112db4800,&UNK_10d95efc0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104558100; end: 10455830b;  */

void FUN_104558100(undefined8 param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar11 = *param_2;
  lVar8 = *(long *)(lVar11 + 0x50);
  lVar2 = 0;
  uStack_98 = param_1;
  __sSqMa(0,lVar8);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + -extraout_x8;
  lVar12 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(lVar11 + 0x58);
  (**(code **)(param_3 + 0x10))();
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar4 = param_2[2];
    func_0x00010035a314(lVar4);
    if ((param_3 & 1) != 0) {
      FUN_104558b10(*(long *)(lVar3 + 0x38) + lVar4 * 0x28,&uStack_90);
      goto LAB_1045581e4;
    }
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
LAB_1045581e4:
  _swift_bridgeObjectRelease(lVar3);
  uVar5 = 0x112db4800;
  func_0x0001000285a8(0x112db4800,&UNK_10d95efc0);
  puVar6 = puVar9;
  _swift_dynamicCast(puVar9,&uStack_90,uVar5,lVar8,6);
  bVar1 = ((ulong)puVar6 & 1) == 0;
  if (bVar1) {
    (**(code **)(lVar12 + 0x38))(puVar9,1,1,lVar8);
    (**(code **)(lVar7 + 8))(puVar9,lVar2);
    lVar2 = *(long *)(lVar11 + 0x60);
    uVar5 = uStack_98;
  }
  else {
    (**(code **)(lVar12 + 0x38))(puVar9,0,1,lVar8);
    (**(code **)(lVar12 + 0x20))(lVar10,puVar9,lVar8);
    uVar5 = uStack_98;
    lVar2 = *(long *)(lVar11 + 0x60);
    (**(code **)(lVar2 + 0x20))(uStack_98,lVar8,lVar2);
    (**(code **)(lVar12 + 8))(lVar10,lVar8);
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,lVar8,&UNK_10e813d24,&UNK_10e813d3c);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar5,bVar1,1,lVar3);
  return;
}



/* Entry: 10455830c; end: 104558457;  */

bool FUN_10455830c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar7 = *param_1;
  lVar4 = *(long *)(lVar7 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_80 - extraout_x8;
  lVar7 = *(long *)(lVar7 + 0x58);
  (**(code **)(param_2 + 0x10))();
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = param_1[2];
    func_0x00010035a314(lVar2);
    if ((param_2 & 1) != 0) {
      FUN_104558b10(*(long *)(lVar7 + 0x38) + lVar2 * 0x28,&uStack_80);
      goto LAB_1045583bc;
    }
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_1045583bc:
  _swift_bridgeObjectRelease(lVar7);
  uVar3 = 0x112db4800;
  func_0x0001000285a8(0x112db4800,&UNK_10d95efc0);
  lVar7 = lVar5;
  _swift_dynamicCast(lVar5,&uStack_80,uVar3,lVar4,6);
  lVar2 = *(long *)(lVar4 + -8);
  (**(code **)(lVar2 + 0x38))(lVar5,(uint)lVar7 ^ 1,1,lVar4);
  lVar7 = lVar5;
  (**(code **)(lVar2 + 0x30))(lVar5,1,lVar4);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  return (int)lVar7 == 0;
}



/* Entry: 104558458; end: 1045584eb;  */

void FUN_104558458(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = param_1[2];
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  pcVar1 = (code *)auStack_80;
  (**(code **)(param_2 + 0x20))(pcVar1,*(undefined8 *)(*param_1 + 0x58),param_2);
  FUN_1045580b0(&uStack_60,auStack_a8);
  FUN_104557e6c(auStack_a8,lVar2);
  FUN_104558b80(&uStack_60,0x112db4800,&UNK_10d95efc0);
  (*pcVar1)(auStack_80,0);
  return;
}



/* Entry: 1045584ec; end: 104558533;  */

void FUN_1045584ec(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  puVar9 = &DAT_10dd17008;
  lVar11 = *param_1;
  lVar7 = param_1[2];
  plVar8 = *(long **)(lVar11 + 0x50);
  lVar1 = plVar8[2];
  lVar2 = plVar8[3];
  uVar3 = 0xff;
  plStack_90 = param_2;
  _swift_getAssociatedTypeWitness(0xff,lVar2,lVar1,&UNK_10e814078,&UNK_10e814088);
  uVar4 = 0;
  __sSaMa(0,uVar3);
  puVar5 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar4);
  __sSlsE7isEmptySbvg(uVar4,puVar5);
  if ((uVar4 & 1) == 0) {
    uVar10 = *(undefined8 *)(lVar11 + 0x58);
    _swift_getWitnessTable(&DAT_10dd17008,plVar8);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar8;
    uStack_88 = uVar10;
    puStack_80 = puVar9;
    FUN_10458aaec(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_1107894a8;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*(code *)0x10455eb10)(&lStack_c0,&plStack_90,param_2,lVar1,lVar2);
    puVar9 = &DAT_10dd17024;
    plStack_78 = plVar8;
    _swift_getWitnessTable(&DAT_10dd17024,plVar8);
    plVar8 = (long *)&UNK_1107873f8;
    _swift_allocObject(&UNK_1107873f8,0x40,7);
    plVar8[3] = lStack_b8;
    plVar8[2] = lStack_c0;
    plVar8[5] = lStack_a8;
    plVar8[4] = lStack_b0;
    plVar8[7] = lStack_98;
    plVar8[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    plVar8 = (long *)0x0;
    puVar9 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar10 = *(undefined8 *)(lVar11 + 0x58);
  }
  pcVar6 = (code *)auStack_e0;
  plStack_90 = plVar8;
  ppuStack_70 = (undefined **)puVar9;
  (**(code **)(param_3 + 0x20))(pcVar6,uVar10,param_3);
  FUN_1045580b0(&plStack_90,&lStack_c0);
  FUN_104557e6c(&lStack_c0,lVar7);
  FUN_104558b80(&plStack_90,0x112db4800,&UNK_10d95efc0);
  (*pcVar6)(auStack_e0,0);
  return;
}



/* Entry: 104558534; end: 10455870f;  */

void FUN_104558534(long *param_1,long *param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  lVar10 = *param_1;
  lVar7 = param_1[2];
  plVar8 = *(long **)(lVar10 + 0x50);
  lVar1 = plVar8[2];
  lVar2 = plVar8[3];
  uVar3 = 0xff;
  plStack_90 = param_2;
  _swift_getAssociatedTypeWitness(0xff,lVar2,lVar1,&UNK_10e814078,&UNK_10e814088);
  uVar4 = 0;
  __sSaMa(0,uVar3);
  puVar5 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar4);
  __sSlsE7isEmptySbvg(uVar4,puVar5);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
    _swift_getWitnessTable(param_4,plVar8);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar8;
    uStack_88 = uVar9;
    uStack_80 = param_4;
    FUN_10458aaec(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_1107894a8;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*param_5)(&lStack_c0,&plStack_90,param_2,lVar1,lVar2);
    plStack_78 = plVar8;
    _swift_getWitnessTable(param_6,plVar8);
    _swift_allocObject(param_7,0x40,7);
    param_7[3] = lStack_b8;
    param_7[2] = lStack_c0;
    param_7[5] = lStack_a8;
    param_7[4] = lStack_b0;
    param_7[7] = lStack_98;
    param_7[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_7 = (long *)0x0;
    param_6 = 0;
    uStack_80 = 0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
  }
  pcVar6 = (code *)auStack_e0;
  plStack_90 = param_7;
  ppuStack_70 = (undefined **)param_6;
  (**(code **)(param_3 + 0x20))(pcVar6,uVar9,param_3);
  FUN_1045580b0(&plStack_90,&lStack_c0);
  FUN_104557e6c(&lStack_c0,lVar7);
  FUN_104558b80(&plStack_90,0x112db4800,&UNK_10d95efc0);
  (*pcVar6)(auStack_e0,0);
  return;
}



/* Entry: 104558710; end: 104558757;  */

void FUN_104558710(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  puVar7 = &DAT_10dd17260;
  lVar10 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar10 + 0x50);
  lVar8 = plVar6[2];
  uVar1 = 0;
  plStack_90 = param_2;
  __sSaMa(0,lVar8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
    _swift_getWitnessTable(&DAT_10dd17260,plVar6);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar6;
    uStack_88 = uVar9;
    puStack_80 = puVar7;
    FUN_10458aaec(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_1107894a8;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*(code *)0x10455eb14)(&lStack_c0,&plStack_90,param_2,lVar8,plVar6[3]);
    puVar7 = &DAT_10dd1727c;
    plStack_78 = plVar6;
    _swift_getWitnessTable(&DAT_10dd1727c,plVar6);
    plVar6 = (long *)&UNK_110787448;
    _swift_allocObject(&UNK_110787448,0x40,7);
    plVar6[3] = lStack_b8;
    plVar6[2] = lStack_c0;
    plVar6[5] = lStack_a8;
    plVar6[4] = lStack_b0;
    plVar6[7] = lStack_98;
    plVar6[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    plVar6 = (long *)0x0;
    puVar7 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  plStack_90 = plVar6;
  ppuStack_70 = (undefined **)puVar7;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar9,param_3);
  FUN_1045580b0(&plStack_90,&lStack_c0);
  FUN_104557e6c(&lStack_c0,lVar5);
  FUN_104558b80(&plStack_90,0x112db4800,&UNK_10d95efc0);
  (*pcVar4)(auStack_e0,0);
  return;
}



/* Entry: 104558758; end: 10455890f;  */

void FUN_104558758(long *param_1,long *param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  lVar9 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar9 + 0x50);
  lVar7 = plVar6[2];
  uVar1 = 0;
  plStack_90 = param_2;
  __sSaMa(0,lVar7);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
    _swift_getWitnessTable(param_4,plVar6);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar6;
    uStack_88 = uVar8;
    uStack_80 = param_4;
    FUN_10458aaec(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_1107894a8;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*param_5)(&lStack_c0,&plStack_90,param_2,lVar7,plVar6[3]);
    plStack_78 = plVar6;
    _swift_getWitnessTable(param_6,plVar6);
    _swift_allocObject(param_7,0x40,7);
    param_7[3] = lStack_b8;
    param_7[2] = lStack_c0;
    param_7[5] = lStack_a8;
    param_7[4] = lStack_b0;
    param_7[7] = lStack_98;
    param_7[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_7 = (long *)0x0;
    param_6 = 0;
    uStack_80 = 0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  plStack_90 = param_7;
  ppuStack_70 = (undefined **)param_6;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar8,param_3);
  FUN_1045580b0(&plStack_90,&lStack_c0);
  FUN_104557e6c(&lStack_c0,lVar5);
  FUN_104558b80(&plStack_90,0x112db4800,&UNK_10d95efc0);
  (*pcVar4)(auStack_e0,0);
  return;
}



/* Entry: 104558910; end: 104558957;  */

void FUN_104558910(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  puVar7 = &DAT_10dd174b8;
  lVar10 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar10 + 0x50);
  lVar8 = plVar6[2];
  uVar1 = 0;
  plStack_90 = param_2;
  __sSaMa(0,lVar8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
    _swift_getWitnessTable(&DAT_10dd174b8,plVar6);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar6;
    uStack_88 = uVar9;
    puStack_80 = puVar7;
    FUN_10458aaec(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_1107894a8;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*(code *)0x10455eaa4)(&lStack_c0,&plStack_90,param_2,lVar8,plVar6[3],plVar6[4]);
    puVar7 = &DAT_10dd174d4;
    plStack_78 = plVar6;
    _swift_getWitnessTable(&DAT_10dd174d4,plVar6);
    plVar6 = (long *)&UNK_110787498;
    _swift_allocObject(&UNK_110787498,0x40,7);
    plVar6[3] = lStack_b8;
    plVar6[2] = lStack_c0;
    plVar6[5] = lStack_a8;
    plVar6[4] = lStack_b0;
    plVar6[7] = lStack_98;
    plVar6[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    plVar6 = (long *)0x0;
    puVar7 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  plStack_90 = plVar6;
  ppuStack_70 = (undefined **)puVar7;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar9,param_3);
  FUN_1045580b0(&plStack_90,&lStack_c0);
  FUN_104557e6c(&lStack_c0,lVar5);
  FUN_104558b80(&plStack_90,0x112db4800,&UNK_10d95efc0);
  (*pcVar4)(auStack_e0,0);
  return;
}



/* Entry: 104558958; end: 104558b0f;  */

void FUN_104558958(long *param_1,long *param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  lVar9 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar9 + 0x50);
  lVar7 = plVar6[2];
  uVar1 = 0;
  plStack_90 = param_2;
  __sSaMa(0,lVar7);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
    _swift_getWitnessTable(param_4,plVar6);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar6;
    uStack_88 = uVar8;
    uStack_80 = param_4;
    FUN_10458aaec(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_1107894a8;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*param_5)(&lStack_c0,&plStack_90,param_2,lVar7,plVar6[3],plVar6[4]);
    plStack_78 = plVar6;
    _swift_getWitnessTable(param_6,plVar6);
    _swift_allocObject(param_7,0x40,7);
    param_7[3] = lStack_b8;
    param_7[2] = lStack_c0;
    param_7[5] = lStack_a8;
    param_7[4] = lStack_b0;
    param_7[7] = lStack_98;
    param_7[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_7 = (long *)0x0;
    param_6 = 0;
    uStack_80 = 0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  plStack_90 = param_7;
  ppuStack_70 = (undefined **)param_6;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar8,param_3);
  FUN_1045580b0(&plStack_90,&lStack_c0);
  FUN_104557e6c(&lStack_c0,lVar5);
  FUN_104558b80(&plStack_90,0x112db4800,&UNK_10d95efc0);
  (*pcVar4)(auStack_e0,0);
  return;
}



/* Entry: 104558b10; end: 104558b53;  */

long FUN_104558b10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104558b54; end: 104558b7f;  */

void FUN_104558b54(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104558b80; end: 104558bbf;  */

undefined8 FUN_104558b80(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104558bc0; end: 104558c57;  */

void FUN_104558bc0(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  func_0x00010035a314();
  if ((param_3 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000104594860();
    }
    FUN_104558c58(*(long *)(lVar2 + 0x38) + param_2 * 0x28,param_1);
    func_0x000104568918(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 104558c58; end: 104558c6f;  */

undefined8 * FUN_104558c58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 104558c70; end: 104558f07;  */

/* WARNING: Removing unreachable block (ram,0x000104558eb8) */

void FUN_104558c70(undefined8 param_1,long param_2,long param_3,long param_4,ulong *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar12 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar12 = uVar12 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar9 = 0;
  lVar10 = lVar9;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (uVar12 != 0) {
      uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      lVar7 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar9 * 0x200);
      lVar10 = lVar9;
      if ((param_2 <= lVar7) && (lVar7 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100dd4260(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          func_0x000100dd4260(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar7;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104558ef0);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar6 >> 6) <= lVar9) break;
    uVar12 = puVar11[lVar9];
  }
  FUN_104558f08(param_4,puVar11,~uVar6,lVar10,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  func_0x0001038fcb9c(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104558f08);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar12 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar12 != 0) {
    uVar6 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104558ef4);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104558ef8);
        (*pcVar3)();
      }
      lVar9 = *(long *)(puVar8 + uVar6 * 8 + 0x20);
      func_0x00010035a314(lVar9);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104558efc);
        (*pcVar3)();
      }
      FUN_104558b10(*(long *)(param_4 + 0x38) + lVar9 * 0x28,apuStack_88);
      lVar9 = lStack_68;
      uVar2 = uStack_70;
      func_0x0001000a8868(apuStack_88,uStack_70);
      puVar11 = param_5;
      (**(code **)(lVar9 + 0x30))(param_1,param_5,param_6,uVar2,lVar9);
      uVar6 = uVar6 + 1;
      func_0x0001000834e4(apuStack_88);
    } while (uVar12 != uVar6);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 104558f08; end: 104558f0f;  */

void FUN_104558f08(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 104558f10; end: 104558f5b;  */

void FUN_104558f10(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  
  FUN_1045580b0(param_1,auStack_58);
  FUN_104557e6c(auStack_58,param_2);
  FUN_1045596c8(param_1);
  return;
}



/* Entry: 104558f5c; end: 104558fb3;  */

undefined8 * FUN_104558f5c(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(long *)(param_3 + 0x10) != 0) && (uVar2 = param_3, func_0x00010035a314(), (uVar2 & 1) != 0)
     ) {
    lVar1 = *(long *)(param_3 + 0x38) + (long)param_2 * 0x28;
    lVar3 = *(long *)(lVar1 + 0x18);
    param_1[3] = lVar3;
    param_1[4] = *(undefined8 *)(lVar1 + 0x20);
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,lVar1);
    return param_1;
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_2;
}



/* Entry: 104558fb4; end: 104558fc3;  */

bool FUN_104558fb4(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return false;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  uVar9 = uVar9 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar7 = 0;
  lVar4 = lVar7;
  if (uVar10 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 - 1 & uVar10;
  uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
  FUN_104558b10(*(long *)(param_1 + 0x38) + uVar8 * 0x28,&uStack_c8);
  lVar7 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_1);
      return true;
    }
    uVar8 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(param_2 + 0x10) == 0) || (func_0x00010035a314(lVar4), (uVar8 & 1) == 0)) {
LAB_104559d48:
      _swift_release(param_1);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar3;
    }
    FUN_104558b10(*(long *)(param_2 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    func_0x0001000a8868(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    func_0x0001000a8868(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_1);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar4 = lVar7;
    if (uVar10 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar8 = uVar9;
    if ((long)uVar9 <= lVar7 + 1) {
      uVar8 = lVar7 + 1;
    }
    while( true ) {
      lVar4 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar2)();
      }
      if ((long)uVar9 <= lVar4) break;
      uVar10 = ((ulong *)(param_1 + 0x40))[lVar4];
      lVar7 = lVar7 + 1;
      if (uVar10 != 0) goto LAB_104559bfc;
    }
    uVar10 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar7 = uVar8 - 1;
  } while( true );
}



/* Entry: 104558fc4; end: 10455919f;  */

void FUN_104558fc4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_2 + 0x40);
  uVar6 = uVar6 + 0x3f >> 6;
  _swift_bridgeObjectRetain(param_2);
  lVar4 = 0;
  puVar8 = (undefined1 *)0x1000193;
  lVar7 = lVar4;
  if (uVar9 == 0) goto LAB_104559040;
LAB_10455906c:
  do {
    uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 - 1 & uVar9;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar7 << 6;
    uStack_150 = *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar5 * 8);
    FUN_104558b10(*(long *)(param_2 + 0x38) + uVar5 * 0x28,&uStack_148);
    lVar4 = lVar7;
    while( true ) {
      uVar1 = uStack_150;
      uStack_c8 = uStack_138;
      uStack_d0 = uStack_140;
      uStack_b8 = uStack_128;
      lStack_c0 = lStack_130;
      uStack_d8 = uStack_148;
      uStack_e0 = uStack_150;
      if (lStack_130 == 0) {
        _swift_release(param_2);
        __ss6HasherV8_combineyySuF(puVar8);
        return;
      }
      FUN_104558c58(&uStack_d8,auStack_108);
      uStack_128 = param_1[5];
      lStack_130 = param_1[4];
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      uStack_110 = param_1[8];
      uStack_148 = param_1[1];
      uStack_150 = *param_1;
      uStack_138 = param_1[3];
      uStack_140 = param_1[2];
      __ss6HasherV8_combineyySuF(uVar1);
      lVar7 = lStack_e8;
      uVar1 = uStack_f0;
      func_0x0001000a8868(auStack_108,uStack_f0);
      puVar3 = &uStack_150;
      (**(code **)(lVar7 + 0x10))(&uStack_150,uVar1,lVar7);
      uStack_88 = uStack_128;
      lStack_90 = lStack_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_70 = uStack_110;
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      __ss6HasherV8finalizeSiyF();
      puVar8 = (undefined1 *)((long)puVar3 + (long)puVar8);
      func_0x0001000834e4(auStack_108);
      lVar7 = lVar4;
      if (uVar9 != 0) break;
LAB_104559040:
      uVar5 = uVar6;
      if ((long)uVar6 <= lVar4 + 1) {
        uVar5 = lVar4 + 1;
      }
      while( true ) {
        lVar7 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1045591a0);
          (*pcVar2)();
        }
        if ((long)uVar6 <= lVar7) break;
        uVar9 = ((ulong *)(param_2 + 0x40))[lVar7];
        lVar4 = lVar4 + 1;
        if (uVar9 != 0) goto LAB_10455906c;
      }
      uVar9 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      lStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lVar4 = uVar5 - 1;
    }
  } while( true );
}



/* Entry: 1045591a0; end: 104559287;  */

undefined1  [16] FUN_1045591a0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)0x60;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    uVar2 = param_2;
    _malloc();
  }
  else {
    uVar2 = 0x2d1b;
    _swift_coroFrameAlloc();
  }
  *param_1 = puVar1;
  puVar1[10] = param_2;
  puVar1[0xb] = unaff_x20;
  lVar3 = *unaff_x20;
  if ((*(long *)(lVar3 + 0x10) == 0) || (func_0x00010035a314(param_2), (uVar2 & 1) == 0)) {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  else {
    FUN_104558b10(*(long *)(lVar3 + 0x38) + param_2 * 0x28,puVar1);
  }
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = 0x10455923c;
  return auVar4;
}



/* Entry: 104559288; end: 104559417;  */

bool FUN_104559288(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_1 + 0x40);
  uVar5 = uVar5 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar3 = 0;
  lVar6 = lVar3;
  if (uVar7 == 0) goto LAB_1045592f8;
LAB_104559324:
  uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 - 1 & uVar7;
  uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar6 << 6;
  uStack_c0 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar4 * 8);
  FUN_104558b10(*(long *)(param_1 + 0x38) + uVar4 * 0x28,&uStack_b8);
  lVar3 = lVar6;
  do {
    lVar6 = lStack_a0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    lStack_70 = lStack_a0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    if (lStack_a0 == 0) {
      _swift_release(param_1);
LAB_1045593ec:
      return lVar6 == 0;
    }
    FUN_104558c58(&uStack_88,&uStack_c0);
    lVar1 = lStack_a0;
    uVar4 = uStack_a8;
    func_0x0001000a8868(&uStack_c0,uStack_a8);
    (**(code **)(lVar1 + 0x38))(uVar4,lVar1);
    if ((uVar4 & 1) == 0) {
      _swift_release(param_1);
      func_0x0001000834e4(&uStack_c0);
      goto LAB_1045593ec;
    }
    func_0x0001000834e4(&uStack_c0);
    lVar6 = lVar3;
    if (uVar7 != 0) goto LAB_104559324;
LAB_1045592f8:
    uVar4 = uVar5;
    if ((long)uVar5 <= lVar3 + 1) {
      uVar4 = lVar3 + 1;
    }
    while( true ) {
      lVar6 = lVar3 + 1;
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559418);
        (*pcVar2)();
      }
      if ((long)uVar5 <= lVar6) break;
      uVar7 = ((ulong *)(param_1 + 0x40))[lVar6];
      lVar3 = lVar3 + 1;
      if (uVar7 != 0) goto LAB_104559324;
    }
    uVar7 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lVar3 = uVar4 - 1;
  } while( true );
}



/* Entry: 104559418; end: 10455949f;  */

void FUN_104559418(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104558fc4(auStack_68,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045594a0; end: 1045594a7;  */

void FUN_1045594a0(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *unaff_x20;
  uVar7 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(lVar4 + 0x40);
  uVar7 = uVar7 + 0x3f >> 6;
  _swift_bridgeObjectRetain(lVar4);
  lVar5 = 0;
  puVar9 = (undefined1 *)0x1000193;
  lVar8 = lVar5;
  if (uVar10 == 0) goto LAB_104559040;
LAB_10455906c:
  do {
    uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 - 1 & uVar10;
    uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar8 << 6;
    uStack_150 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8);
    FUN_104558b10(*(long *)(lVar4 + 0x38) + uVar6 * 0x28,&uStack_148);
    lVar5 = lVar8;
    while( true ) {
      uVar1 = uStack_150;
      uStack_c8 = uStack_138;
      uStack_d0 = uStack_140;
      uStack_b8 = uStack_128;
      lStack_c0 = lStack_130;
      uStack_d8 = uStack_148;
      uStack_e0 = uStack_150;
      if (lStack_130 == 0) {
        _swift_release(lVar4);
        __ss6HasherV8_combineyySuF(puVar9);
        return;
      }
      FUN_104558c58(&uStack_d8,auStack_108);
      uStack_128 = param_1[5];
      lStack_130 = param_1[4];
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      uStack_110 = param_1[8];
      uStack_148 = param_1[1];
      uStack_150 = *param_1;
      uStack_138 = param_1[3];
      uStack_140 = param_1[2];
      __ss6HasherV8_combineyySuF(uVar1);
      lVar8 = lStack_e8;
      uVar1 = uStack_f0;
      func_0x0001000a8868(auStack_108,uStack_f0);
      puVar3 = &uStack_150;
      (**(code **)(lVar8 + 0x10))(&uStack_150,uVar1,lVar8);
      uStack_88 = uStack_128;
      lStack_90 = lStack_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_70 = uStack_110;
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      __ss6HasherV8finalizeSiyF();
      puVar9 = (undefined1 *)((long)puVar3 + (long)puVar9);
      func_0x0001000834e4(auStack_108);
      lVar8 = lVar5;
      if (uVar10 != 0) break;
LAB_104559040:
      uVar6 = uVar7;
      if ((long)uVar7 <= lVar5 + 1) {
        uVar6 = lVar5 + 1;
      }
      while( true ) {
        lVar8 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1045591a0);
          (*pcVar2)();
        }
        if ((long)uVar7 <= lVar8) break;
        uVar10 = ((ulong *)(lVar4 + 0x40))[lVar8];
        lVar5 = lVar5 + 1;
        if (uVar10 != 0) goto LAB_10455906c;
      }
      uVar10 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      lStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lVar5 = uVar6 - 1;
    }
  } while( true );
}



/* Entry: 1045594a8; end: 1045594e7;  */

void FUN_1045594a8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104558fc4(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045594e8; end: 104559587;  */

bool FUN_1045594e8(long *param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar4 = *param_1;
  lVar8 = *param_2;
  if (*(long *)(lVar4 + 0x10) != *(long *)(lVar8 + 0x10)) {
    return false;
  }
  uVar11 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar4 + 0x40);
  uVar11 = uVar11 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar9 = 0;
  lVar5 = lVar9;
  if (uVar12 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar10 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar12 - 1 & uVar12;
  uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar5 << 6;
  lStack_d0 = *(long *)(*(long *)(lVar4 + 0x30) + uVar10 * 8);
  FUN_104558b10(*(long *)(lVar4 + 0x38) + uVar10 * 0x28,&uStack_c8);
  lVar9 = lVar5;
  do {
    lVar5 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(lVar4);
      return true;
    }
    uVar10 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(lVar8 + 0x10) == 0) || (func_0x00010035a314(lVar5), (uVar10 & 1) == 0)) {
LAB_104559d48:
      _swift_release(lVar4);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar3;
    }
    FUN_104558b10(*(long *)(lVar8 + 0x38) + lVar5 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar6 = &lStack_d0;
    func_0x0001000a8868(plVar6,uStack_b8);
    _swift_getDynamicType();
    plVar7 = alStack_f8;
    func_0x0001000a8868(plVar7,uStack_e0);
    _swift_getDynamicType();
    lVar5 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar6 != plVar7) {
      _swift_release(lVar4);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar6 = alStack_f8;
    (**(code **)(lVar5 + 0x20))(plVar6,uVar1,lVar5);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar6 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar5 = lVar9;
    if (uVar12 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar10 = uVar11;
    if ((long)uVar11 <= lVar9 + 1) {
      uVar10 = lVar9 + 1;
    }
    while( true ) {
      lVar5 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar2)();
      }
      if ((long)uVar11 <= lVar5) break;
      uVar12 = ((ulong *)(lVar4 + 0x40))[lVar5];
      lVar9 = lVar9 + 1;
      if (uVar12 != 0) goto LAB_104559bfc;
    }
    uVar12 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar9 = uVar10 - 1;
  } while( true );
}



/* Entry: 104559588; end: 104559607;  */

void FUN_104559588(byte *param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar7 = *(ulong *)(unaff_x20 + 0x28);
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  pbVar9 = param_1;
  if (param_1 != (byte *)0x0) {
    for (; pbVar9 != param_2; pbVar9 = pbVar9 + 1) {
      uVar7 = (ulong)*pbVar9;
      __ss6HasherV8_combineyys5UInt8VF();
    }
  }
  __ss6HasherV9_finalizeSiyF();
  uVar8 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = uVar7 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      plVar1 = (long *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      pbVar9 = (byte *)*plVar1;
      pbVar3 = (byte *)plVar1[1];
      lVar2 = 0;
      if (pbVar9 != (byte *)0x0) {
        lVar2 = (long)pbVar3 - (long)pbVar9;
      }
      pbVar10 = param_1;
      if (param_1 == (byte *)0x0) {
        if (lVar2 == 0) goto LAB_104559688;
      }
      else if (lVar2 == (long)param_2 - (long)param_1) {
LAB_104559688:
        do {
          bVar6 = pbVar10 == (byte *)0x0 || pbVar10 == param_2;
          if ((pbVar9 == (byte *)0x0) || (pbVar9 == pbVar3)) {
            if (bVar6) {
              return;
            }
            break;
          }
          if (bVar6) break;
          bVar4 = *pbVar9;
          bVar5 = *pbVar10;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 == bVar5);
      }
      uVar7 = uVar7 + 1 & ~uVar8;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  return;
}



/* Entry: 104559608; end: 1045596c7;  */

void FUN_104559608(char *param_1,char *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long unaff_x20;
  
  uVar7 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      plVar1 = (long *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      pcVar8 = (char *)*plVar1;
      pcVar3 = (char *)plVar1[1];
      lVar2 = 0;
      if (pcVar8 != (char *)0x0) {
        lVar2 = (long)pcVar3 - (long)pcVar8;
      }
      pcVar9 = param_1;
      if (param_1 == (char *)0x0) {
        if (lVar2 == 0) goto LAB_104559688;
      }
      else if (lVar2 == (long)param_2 - (long)param_1) {
LAB_104559688:
        do {
          bVar6 = pcVar9 == (char *)0x0 || pcVar9 == param_2;
          if ((pcVar8 == (char *)0x0) || (pcVar8 == pcVar3)) {
            if (bVar6) {
              return;
            }
            break;
          }
          if (bVar6) break;
          cVar4 = *pcVar8;
          cVar5 = *pcVar9;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 == cVar5);
      }
      param_3 = param_3 + 1 & ~uVar7;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  return;
}



/* Entry: 1045596c8; end: 10455970f;  */

undefined8 FUN_1045596c8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112db4800;
  func_0x0001000285a8(0x112db4800,&UNK_10d95efc0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104559710; end: 1045597bf;  */

void FUN_104559710(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104559a08();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045597c0; end: 1045598bf;  */

undefined * FUN_1045597c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045598c0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113085038;
    func_0x0001000285a8(0x113085038,&UNK_10dd16f20);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1045598c0; end: 104559a07;  */

undefined * FUN_1045598c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559a08);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x113085028;
    func_0x0001000285a8(0x113085028,&UNK_10dd16f08);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x113085030;
    func_0x0001000285a8(0x113085030,&UNK_10dd16f10);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104559a08; end: 104559b4b;  */

undefined *
FUN_104559a08(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104559b4c);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      _memmove(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 104559b4c; end: 104559d9f;  */

bool FUN_104559b4c(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return false;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  uVar9 = uVar9 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar7 = 0;
  lVar4 = lVar7;
  if (uVar10 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 - 1 & uVar10;
  uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
  FUN_104558b10(*(long *)(param_1 + 0x38) + uVar8 * 0x28,&uStack_c8);
  lVar7 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_1);
      return true;
    }
    uVar8 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(param_2 + 0x10) == 0) || (func_0x00010035a314(lVar4), (uVar8 & 1) == 0)) {
LAB_104559d48:
      _swift_release(param_1);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar3;
    }
    FUN_104558b10(*(long *)(param_2 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    func_0x0001000a8868(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    func_0x0001000a8868(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_1);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar4 = lVar7;
    if (uVar10 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar8 = uVar9;
    if ((long)uVar9 <= lVar7 + 1) {
      uVar8 = lVar7 + 1;
    }
    while( true ) {
      lVar4 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar2)();
      }
      if ((long)uVar9 <= lVar4) break;
      uVar10 = ((ulong *)(param_1 + 0x40))[lVar4];
      lVar7 = lVar7 + 1;
      if (uVar10 != 0) goto LAB_104559bfc;
    }
    uVar10 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar7 = uVar8 - 1;
  } while( true );
}



/* Entry: 104559da0; end: 104559da3;  */

void FUN_104559da0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16ea8;
  _swift_getWitnessTable(&UNK_10dd16ea8,&UNK_1107874f0);
  puRam0000000113085018 = puVar1;
  return;
}



/* Entry: 104559da4; end: 104559de3;  */

void FUN_104559da4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16ea8;
  _swift_getWitnessTable(&UNK_10dd16ea8,&UNK_1107874f0);
  puRam0000000113085018 = puVar1;
  return;
}



/* Entry: 104559de4; end: 104559df3;  */

undefined1  [16] FUN_104559de4(void)

{
  return ZEXT816(0x1107874f0);
}



/* Entry: 104559df4; end: 104559e4b;  */

void FUN_104559df4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1045574a0(param_2,param_1 + 1);
  *param_1 = param_3;
  return;
}



/* Entry: 104559e4c; end: 104559e53;  */

undefined8 FUN_104559e4c(void)

{
  return 1;
}



/* Entry: 104559e54; end: 104559eef;  */

void FUN_104559e54(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),&UNK_10e814078,
             &UNK_10e814088);
                    /* WARNING: Could not recover jumptable at 0x000104559e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 104559ef0; end: 104559f03;  */

undefined8 FUN_104559ef0(void)

{
  return 0x104559f00;
}



/* Entry: 104559f04; end: 104559f23;  */

void FUN_104559f04(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_10455d55c(unaff_x20 + *(int *)(param_2 + 0x24),param_1);
  return;
}



/* Entry: 104559f24; end: 104559f3f;  */

undefined8 * FUN_104559f24(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x24);
  func_0x0001000834e4(unaff_x20 + iVar2);
  puVar1 = (undefined8 *)(unaff_x20 + iVar2);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  puVar1[4] = param_1[4];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  return puVar1;
}



/* Entry: 104559f40; end: 10455a063;  */

uint FUN_104559f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_4,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(param_4,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  __sSQ2eeoiySbx_xtFZTj(param_1,param_2,uVar1,*(undefined8 *)(param_4 + 8));
  return (uint)param_1 & 1;
}



/* Entry: 10455a064; end: 10455a06f;  */

void FUN_10455a064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e813d6c);
  return;
}



/* Entry: 10455a070; end: 10455a093;  */

void FUN_10455a070(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_10455a064);
  return;
}



/* Entry: 10455a094; end: 10455a113;  */

void FUN_10455a094(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,uVar1,uVar2,&UNK_10e814078,&UNK_10e814080);
                    /* WARNING: Could not recover jumptable at 0x00010bdb758c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_11034d7c0)(param_1,uVar2,uVar3);
  return;
}



/* Entry: 10455a114; end: 10455a1c7;  */

uint FUN_10455a114(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  FUN_10455d55c();
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  FUN_104559f40();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 10455a1c8; end: 10455a387;  */

void FUN_10455a1c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar5;
  long extraout_x12;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_80;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,&UNK_10e814078,&UNK_10e814088);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_80 = (long)&lStack_80 - extraout_x8;
  __sSqMa(0,lVar3);
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = ((long)&lStack_80 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  (**(code **)(lVar9 + 0x38))(lVar7,1,1,lVar3);
  (**(code **)(lVar2 + 0x20))(lVar7,param_1,param_3,param_4,uVar1,lVar2);
  lVar2 = lStack_80;
  if (unaff_x21 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar7,lVar4);
    lVar7 = lVar6;
    (**(code **)(lVar9 + 0x30))(lVar6,1,lVar3);
    if ((int)lVar7 != 1) {
      (**(code **)(lVar9 + 0x20))(lVar2,lVar6,lVar3);
      (**(code **)(lVar9 + 0x28))(unaff_x20,lVar2,lVar3);
      return;
    }
    pcVar5 = *(code **)(lVar8 + 8);
  }
  else {
    pcVar5 = *(code **)(lVar8 + 8);
    lVar6 = lVar7;
  }
  (*pcVar5)(lVar6,lVar4);
  return;
}



/* Entry: 10455a388; end: 10455a5ef;  */

void FUN_10455a388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  undefined8 uVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar3 = 0;
  uStack_98 = param_1;
  uStack_88 = param_3;
  lStack_80 = param_5;
  lStack_78 = param_7;
  _swift_getAssociatedTypeWitness(0,param_6,param_4,&UNK_10e814078,&UNK_10e814088);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a0 = (long)&lStack_a0 - extraout_x8;
  __sSqMa(0,lVar3);
  lStack_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar6 = ((long)&lStack_a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar6 - extraout_x12;
  lVar5 = 0;
  FUN_10455a064(0,param_4,param_6);
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x38))(lVar8,1,1,lVar3);
  (**(code **)(param_6 + 0x20))(lVar8,uStack_88,lStack_80,lStack_78,param_4,param_6);
  lVar1 = lStack_90;
  if (unaff_x21 == 0) {
    lStack_80 = lVar8 - extraout_x8_01;
    lStack_78 = lVar10;
    (**(code **)(lStack_90 + 0x20))(lVar6,lVar8,lVar4);
    lVar10 = lVar6;
    (**(code **)(lVar9 + 0x30))(lVar6,1,lVar3);
    lVar8 = lStack_a0;
    bVar2 = (int)lVar10 != 1;
    if (bVar2) {
      (**(code **)(lVar9 + 0x20))(lStack_a0,lVar6,lVar3);
      lVar1 = lStack_80;
      func_0x000104559fd4(lStack_80,param_2,lVar8,param_4,param_6);
      lVar3 = lStack_78;
      uVar7 = uStack_98;
      (**(code **)(lStack_78 + 0x20))(uStack_98,lVar1,lVar5);
    }
    else {
      func_0x0001000834e4(param_2);
      (**(code **)(lVar1 + 8))(lVar6,lVar4);
      uVar7 = uStack_98;
      lVar3 = lStack_78;
    }
    (**(code **)(lVar3 + 0x38))(uVar7,!bVar2,1,lVar5);
  }
  else {
    func_0x0001000834e4(param_2);
    (**(code **)(lStack_90 + 8))(lVar8,lVar4);
  }
  return;
}



/* Entry: 10455a5f0; end: 10455a697;  */

void FUN_10455a5f0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + *(int *)(param_2 + 0x24);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  (**(code **)(*(long *)(param_2 + 0x18) + 0x30))();
  return;
}



/* Entry: 10455a698; end: 10455a777;  */

void FUN_10455a698(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10455a094(auStack_68,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455a778; end: 10455a797;  */

undefined8 FUN_10455a778(void)

{
  return 0x10455a788;
}



/* Entry: 10455a798; end: 10455a7b7;  */

void FUN_10455a798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  FUN_10455a388(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
                *(undefined8 *)(param_5 + 0x18),param_4);
  return;
}



/* Entry: 10455a7b8; end: 10455a7bb;  */

uint FUN_10455a7b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  FUN_10455d55c();
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  FUN_104559f40();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 10455a7bc; end: 10455a803;  */

void FUN_10455a7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455a1c8(param_1,param_4,param_2,param_3);
  return;
}


