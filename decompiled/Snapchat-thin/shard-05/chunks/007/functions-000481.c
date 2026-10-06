/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104065f60; end: 1040660c7;  */

int FUN_104065f60(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1040660c8; end: 104066107;  */

void FUN_1040660c8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130526e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccaeb0;
  _swift_getWitnessTable(&UNK_10dccaeb0,&UNK_11073cba8);
  puRam00000001130526e0 = puVar1;
  return;
}



/* Entry: 104066108; end: 1040661b3;  */

void FUN_104066108(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040661b4; end: 1040661ef;  */

void FUN_1040661b4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 1040661f0; end: 10406625f;  */

undefined8 * FUN_1040661f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104066260; end: 1040662f3;  */

int FUN_104066260(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040662f4; end: 10406643b;  */

void FUN_1040662f4(ulong param_1,byte param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uStack_50;
  undefined1 uStack_48;
  
  puVar3 = &uStack_50;
  puVar2 = PTR_PTR_1126adb80;
  _objc_allocWithZone(PTR_PTR_1126adb80);
  func_0x00010bfee200();
  if (param_3 != 0) {
    uStack_50 = param_3;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11073cba8,&uStack_50,&UNK_11073cba8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10406643c);
    (*pcVar1)();
  }
  func_0x000107c54990();
  uVar5 = (ulong)param_2;
  uStack_48 = param_2 != 2;
  if ((bool)uStack_48) {
    param_1 = 2;
  }
  if (param_2 != 0) {
    uVar5 = 1;
  }
  if (param_2 < 2) {
    param_1 = uVar5;
  }
  func_0x000107c57f44(puVar2);
  puVar4 = &UNK_11073ca90;
  uStack_50 = param_1;
  __sSS10describingSSx_tclufC(&uStack_50,&UNK_11073ca90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar4);
  func_0x000107c54664(puVar2);
  _objc_release(puVar3);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x000107c4bf8c();
    _swift_unknownObjectRelease(param_4);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 10406643c; end: 104066483;  */

undefined8 * FUN_10406643c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 104066484; end: 1040664d3;  */

undefined8 * FUN_104066484(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000104066444(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x00010406646c(uVar3,uVar2);
  return param_1;
}



/* Entry: 1040664d4; end: 10406650f;  */

undefined8 * FUN_1040664d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x00010406646c(uVar3,uVar2);
  return param_1;
}



/* Entry: 104066510; end: 1040665d7;  */

int FUN_104066510(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1040665d8; end: 1040667a7;  */

uint FUN_1040665d8(undefined8 ****param_1,ulong param_2,code *param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  
  lVar3 = 0;
  __ss7UnicodeO6ScalarV10PropertiesVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = 0;
    uStack_80 = param_2 & 0xffffffffffffff;
    pppuStack_88 = (undefined8 ***)((param_2 & 0xfffffffffffffff) + 0x20);
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          ppppuVar8 = (undefined8 ****)pppuStack_88;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            ppppuVar8 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pppuStack_70 = param_1;
          uStack_68 = uStack_80;
          ppppuVar8 = &pppuStack_70;
        }
        pbVar5 = (byte *)((long)ppppuVar8 + lVar7);
        bVar2 = *pbVar5;
        uVar4 = (ulong)(uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar6 = (uint)LZCOUNT((uint)bVar2 << 0x18 ^ 0xffffffff);
          if (uVar6 < 3) {
            if (uVar6 == 1) goto LAB_1040666b4;
            uVar4 = (ulong)(pbVar5[1] & 0x3f);
            ppppuVar8 = (undefined8 ****)0x2;
          }
          else if (uVar6 == 3) {
            uVar4 = (ulong)(pbVar5[2] & 0x3f);
            ppppuVar8 = (undefined8 ****)0x3;
          }
          else {
            uVar4 = (ulong)(pbVar5[3] & 0x3f);
            ppppuVar8 = (undefined8 ****)0x4;
          }
        }
        else {
LAB_1040666b4:
          ppppuVar8 = (undefined8 ****)0x1;
        }
      }
      else {
        uVar4 = lVar7 << 0x10;
        ppppuVar8 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (uVar4,param_1,param_2);
      }
      __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg
                (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (*param_3)();
      uVar6 = (uint)uVar4;
      (**(code **)(lVar9 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    } while (((uVar4 & 1) == 0) && (lVar7 = (long)ppppuVar8 + lVar7, lVar7 < (long)uVar1));
  }
  return uVar6 & 1;
}



/* Entry: 1040667a8; end: 104066a83;  */

/* WARNING: Removing unreachable block (ram,0x0001040669e0) */

undefined1  [16] FUN_1040667a8(ulong param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar6 = param_1;
  func_0x000107c5d0f0();
  iVar2 = (int)uVar6;
  if (iVar2 < 2) {
    if (((iVar2 != -0x4524111) && (iVar2 != 0)) && (iVar2 == 1)) {
      uVar6 = param_1;
      func_0x000107c5c0b8();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104066a7c);
        (*pcVar1)();
      }
      uVar3 = uVar6;
      func_0x000107c4fb98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (uVar3 != 0) {
        uVar5 = uVar3;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(uVar3);
        uVar6 = uVar5 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar6 = param_2 >> 0x38 & 0xf;
        }
        if (uVar6 != 0) {
          puVar4 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
          _objc_allocWithZone(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
          func_0x000102a44580(uVar5,param_2,0,puVar4);
          _objc_release(param_1);
          uVar6 = (ulong)-(uint)(uVar5 == 0);
          goto LAB_104066a40;
        }
LAB_104066a28:
        _swift_bridgeObjectRelease(param_2);
      }
    }
  }
  else if (iVar2 == 2) {
    uVar6 = param_1;
    func_0x000107c5c0b8();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104066a78);
      (*pcVar1)();
    }
    uVar3 = uVar6;
    func_0x000107c4fb98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (uVar3 != 0) {
      uVar5 = uVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar3);
      uVar6 = uVar5 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar6 = param_2 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
        _objc_allocWithZone(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
        func_0x000102a44580(uVar5,param_2,0,puVar4);
        _objc_release(param_1);
        uVar7 = 1;
        if (uVar5 == 0) {
          uVar7 = 0xffffffff;
        }
        uVar6 = (ulong)uVar7;
        goto LAB_104066a40;
      }
      goto LAB_104066a28;
    }
  }
  else {
    if (iVar2 == 3) {
      uVar6 = param_1;
      func_0x000107c5c0b8();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104066a84);
        (*pcVar1)();
      }
      uVar5 = uVar6;
      func_0x000107c4b624();
      _objc_release(uVar6);
      _objc_release(param_1);
      uVar6 = 2;
      goto LAB_104066a40;
    }
    if (iVar2 == 4) {
      uVar6 = param_1;
      func_0x000107c5c0b8();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104066a80);
        (*pcVar1)();
      }
      uVar3 = uVar6;
      func_0x000107c4fb98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (uVar3 != 0) {
        uVar5 = uVar3;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(uVar3);
        uVar6 = uVar5 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar6 = param_2 >> 0x38 & 0xf;
        }
        if (uVar6 != 0) {
          puVar4 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
          _objc_allocWithZone(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
          func_0x000102a44580(uVar5,param_2,0,puVar4);
          _objc_release(param_1);
          uVar7 = 3;
          if (uVar5 == 0) {
            uVar7 = 0xffffffff;
          }
          uVar6 = (ulong)uVar7;
          goto LAB_104066a40;
        }
        goto LAB_104066a28;
      }
    }
  }
  _objc_release(param_1);
  uVar5 = 0;
  uVar6 = 0xff;
LAB_104066a40:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 104066a84; end: 104066b1b;  */

uint FUN_104066a84(long param_1,byte param_2,long param_3,char param_4)

{
  undefined8 uVar1;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (param_4 == '\0') {
LAB_104066ad8:
        uVar1 = 0;
        func_0x0001007bbbf8(0);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_3,uVar1);
        return (uint)param_1 & 1;
      }
    }
    else if (param_4 == '\x01') goto LAB_104066ad8;
  }
  else {
    if (param_2 == 2) {
      return (uint)(param_4 == '\x02' && param_1 == param_3);
    }
    if (param_4 == '\x03') goto LAB_104066ad8;
  }
  return 0;
}



/* Entry: 104066b1c; end: 104066c7f;  */

bool FUN_104066b1c(undefined8 param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  uVar6 = param_2;
  uVar10 = param_2;
  _swift_bridgeObjectRetain();
  puVar2 = PTR___ss7UnicodeO6ScalarV10PropertiesV7isEmojiSbvg_11034f0f0;
  puVar1 = PTR___ss7UnicodeO6ScalarV10PropertiesV19isEmojiPresentationSbvg_11034f0e8;
  lVar12 = 0;
  while( true ) {
    __sSS8IteratorV4nextSJSgyF();
    bVar5 = uVar10 == 0;
    uVar9 = uVar6;
    if (uVar10 == 0) break;
    while (uVar6 = uVar10, uVar7 = uVar9, uVar10 = uVar6, FUN_1040665d8(uVar9,uVar6,puVar1),
          (uVar7 & 1) == 0) {
      uVar7 = uVar9;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar7 = uVar6 >> 0x38 & 0xf;
      }
      uVar11 = (uint)(uVar9 >> 0x3b) & 1;
      if ((uVar6 & 0x1000000000000000) == 0) {
        uVar11 = 1;
      }
      uVar10 = 7;
      if (uVar11 == 0) {
        uVar10 = 0xb;
      }
      uVar10 = uVar10 | uVar7 << 0x10;
      lVar8 = 0xf;
      func_0x000101ee55a0(0xf,uVar10,uVar9,uVar6);
      if (lVar8 < 2) {
        _swift_bridgeObjectRelease();
      }
      else {
        uVar10 = uVar6;
        FUN_1040665d8(uVar9,uVar6,puVar2);
        _swift_bridgeObjectRelease();
        if ((uVar9 & 1) != 0) goto LAB_104066c38;
      }
      __sSS8IteratorV4nextSJSgyF();
      uVar9 = uVar6;
      if (uVar10 == 0) {
        bVar5 = true;
        goto LAB_104066c50;
      }
    }
    _swift_bridgeObjectRelease();
LAB_104066c38:
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104066c80);
      (*pcVar3)();
    }
    if (param_3 < lVar12) break;
  }
LAB_104066c50:
  _swift_bridgeObjectRelease(param_2);
  return bVar5;
}



/* Entry: 104066c80; end: 104066c87;  */

undefined8 * FUN_104066c80(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000104066444(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 104066c88; end: 104066ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104066c88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130526e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130526f0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104066cec; end: 104066d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104066cec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_1130526e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130526f0) = param_2;
  func_0x00010009af0c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104066d34; end: 104066dab; -[InputValidationServiceFactory initWithCircumstanceEngine:blizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104066d34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_1130526e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130526f0) = param_4;
  lVar2 = param_1;
  func_0x00010009af0c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104066dac; end: 104066ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104066dac(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_50;
  undefined **ppuStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130526f0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130526e8);
  puStack_50 = &UNK_11073cc78;
  ppuStack_48 = &PTR_DAT_11073cc90;
  uStack_68 = param_1;
  uStack_60 = uVar2;
  FUN_104067c74(0);
  _objc_allocWithZone();
  func_0x0001000c6518(&uStack_68,&UNK_11073cc78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(0x10);
  (**(code **)(extraout_x12 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_retain(uVar2);
  _swift_unknownObjectRetain(uVar1);
  FUN_10406707c();
  FUN_1040678c4(&uStack_68);
  return uVar1;
}



/* Entry: 104066ea4; end: 104066edf; -[InputValidationServiceFactory makeServiceForFieldType:] */

void FUN_104066ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_104066dac(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104066ee0; end: 104066f3b; -[InputValidationServiceFactory init] */

void FUN_104066ee0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("InputValidation.InputValidationServiceFactory",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104066f0c);
  (*pcVar1)();
}



/* Entry: 104066f3c; end: 104066f73; -[InputValidationServiceFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104066f3c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130526e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130526f0));
  return;
}



/* Entry: 104066f74; end: 10406707b;  */

undefined * FUN_104066f74(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10406707c);
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
    puVar3 = (undefined *)0x113052720;
    func_0x0001000285a8(0x113052720,&UNK_10dccb020);
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
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_11073cd28);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x10 <= puVar3 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10406707c; end: 10406777b;  */

/* WARNING: Removing unreachable block (ram,0x000104067280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10406707c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcVar15;
  uint uVar16;
  long extraout_x8;
  long lVar17;
  long lStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long alStack_108 [4];
  undefined1 auStack_e8 [32];
  long alStack_c8 [3];
  long lStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  lVar3 = 0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar9 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_78 = &UNK_11073cc78;
  ppuStack_70 = &PTR_DAT_11073cc90;
  *(undefined **)(param_5 + _DAT_113052728) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)(param_5 + _DAT_113052738) = param_4;
  lStack_90 = param_2;
  uStack_88 = param_3;
  FUN_10406777c(&lStack_90,param_5 + _DAT_113052730);
  uVar4 = 0;
  FUN_104067c74();
  plVar5 = &lStack_a0;
  lStack_a0 = param_5;
  uStack_98 = uVar4;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  if (param_4 != 0) {
    alStack_c8[0] = param_4;
    _objc_retain();
    goto LAB_104067740;
  }
  _objc_retain();
  pcVar15 = (code *)0x800000010f1e4a10;
  uVar4 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d);
  if (lRam00000001130526c8 != -1) {
    pcVar15 = FUN_1040658e8;
    _swift_once(0x1130526c8);
  }
  lVar6 = param_1;
  func_0x000107c4f558();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c5dc0c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      lVar8 = lVar7;
      lStack_120 = lVar17;
      lStack_118 = lVar3;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(lVar7);
      uVar2 = (uint)((ulong)pcVar15 >> 0x20);
      uVar16 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar16 == 0) {
          if (((ulong)pcVar15 & 0xff000000000000) != 0) {
LAB_104067240:
            _objc_allocWithZone(PTR_PTR_1126adb78);
            func_0x00010006c00c(lVar8,pcVar15);
            lVar3 = lVar8;
            FUN_1040677c0(lVar8,pcVar15);
            func_0x00010006c090(lVar8,pcVar15);
            if (lVar3 != 0) {
              lStack_138 = lVar3;
              func_0x000107c50964();
              _objc_retainAutoreleasedReturnValue();
              if (lVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0x104067730);
                (*pcVar15)();
              }
              __sSo7NSArrayC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF(lVar9);
              _objc_release(lVar3);
              __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(alStack_c8);
              if (lStack_b0 == 0) {
                puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
                puVar14 = PTR___sypN_11034f1a8;
                lStack_128 = lVar6;
                do {
                  while( true ) {
                    func_0x000100102924(alStack_c8,auStack_e8);
                    func_0x0001000bb420(auStack_e8,alStack_108);
                    uVar4 = 0;
                    FUN_104067880(0);
                    puVar10 = &uStack_110;
                    plVar12 = alStack_108;
                    _swift_dynamicCast(puVar10,plVar12,puVar14 + 8,uVar4,6);
                    if (((ulong)puVar10 & 1) != 0) break;
                    plVar12 = &lStack_90;
                    func_0x0001000a8868(plVar12,puStack_78);
                    lVar3 = *plVar12;
                    lVar17 = plVar12[1];
                    puVar13 = PTR_PTR_1126adb88;
                    _objc_allocWithZone(PTR_PTR_1126adb88);
                    func_0x00010bfee200();
                    if (lVar3 != 0) {
LAB_104067758:
                      plVar5 = alStack_108;
                      alStack_108[0] = lVar3;
                      goto LAB_104067770;
                    }
                    func_0x000107c54990();
                    func_0x000107c5c734();
                    _objc_retainAutoreleasedReturnValue();
                    if (lVar17 == 0) {
                      _objc_release(puVar13);
                    }
                    else {
                      func_0x000107c4bf8c();
                      _objc_release(puVar13);
                      _swift_unknownObjectRelease(lVar17);
                    }
LAB_1040673c8:
                    FUN_1040678c4(auStack_e8);
                    __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(alStack_c8);
                    if (lStack_b0 == 0) goto LAB_1040676a0;
                  }
                  uVar4 = uStack_110;
                  _objc_retain();
                  uVar11 = uVar4;
                  FUN_1040667a8();
                  if ((((uint)plVar12 ^ 0xffffffff) & 0xff) == 0) {
                    plVar12 = &lStack_90;
                    func_0x0001000a8868(plVar12,puStack_78);
                    lVar3 = *plVar12;
                    lVar17 = plVar12[1];
                    puVar14 = PTR_PTR_1126adb88;
                    _objc_allocWithZone(PTR_PTR_1126adb88);
                    _objc_retain();
                    func_0x00010bfee200(puVar14);
                    if (lVar3 != 0) goto LAB_104067758;
                    func_0x000107c54990();
                    _objc_retain();
                    func_0x000107c5d0f0();
                    func_0x000107c57f44(puVar14);
                    _objc_release(uVar4);
                    func_0x000107c5c734();
                    _objc_retainAutoreleasedReturnValue();
                    if (lVar17 == 0) {
                      _objc_release(puVar14);
                      _objc_release(uVar4);
                      _objc_release(uVar4);
                      lVar6 = lStack_128;
                      puVar14 = PTR___sypN_11034f1a8;
                    }
                    else {
                      func_0x000107c4bf8c();
                      _objc_release(uVar4);
                      _objc_release(uVar4);
                      _objc_release(puVar14);
                      _swift_unknownObjectRelease(lVar17);
                      lVar6 = lStack_128;
                      puVar14 = PTR___sypN_11034f1a8;
                    }
                    goto LAB_1040673c8;
                  }
                  func_0x000104066444();
                  puVar14 = puStack_130;
                  _swift_isUniquelyReferenced_nonNull_native();
                  if (((ulong)puVar14 & 1) == 0) {
                    puVar14 = (undefined *)0x0;
                    FUN_104066f74(0,*(long *)(puStack_130 + 0x10) + 1,1);
                    puStack_130 = puVar14;
                  }
                  uVar1 = *(ulong *)(puStack_130 + 0x10);
                  lVar3 = uVar1 + 1;
                  if (*(ulong *)(puStack_130 + 0x18) >> 1 <= uVar1) {
                    puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puStack_130 + 0x18));
                    lStack_140 = lVar3;
                    FUN_104066f74(puVar14,lVar3,1,puStack_130);
                    lVar3 = lStack_140;
                    puStack_130 = puVar14;
                  }
                  *(long *)(puStack_130 + 0x10) = lVar3;
                  *(undefined8 *)(puStack_130 + uVar1 * 0x10 + 0x20) = uVar11;
                  puStack_130[uVar1 * 0x10 + 0x28] = (char)plVar12;
                  func_0x0001040678e4(uVar11,plVar12);
                  _objc_release(uVar4);
                  FUN_1040678c4(auStack_e8);
                  __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(alStack_c8);
                  puVar14 = PTR___sypN_11034f1a8;
                } while (lStack_b0 != 0);
              }
LAB_1040676a0:
              (**(code **)(lStack_120 + 8))(lVar9,lStack_118);
              _objc_release(lVar6);
              func_0x00010006c090(lVar8,pcVar15);
              _swift_unknownObjectRelease(param_1);
              _objc_release(lStack_138);
              uVar4 = *(undefined8 *)((long)plVar5 + _DAT_113052728);
              *(undefined **)((long)plVar5 + _DAT_113052728) = puStack_130;
              _objc_release(plVar5);
              _swift_bridgeObjectRelease(uVar4);
              goto LAB_104067328;
            }
          }
        }
        else if ((long)(int)lVar8 != lVar8 >> 0x20) goto LAB_104067240;
      }
      else if ((uVar16 == 2) && (*(long *)(lVar8 + 0x10) != *(long *)(lVar8 + 0x18)))
      goto LAB_104067240;
      func_0x00010006c090(lVar8,pcVar15);
    }
  }
  plVar12 = &lStack_90;
  func_0x0001000a8868(plVar12,puStack_78);
  lVar3 = *plVar12;
  lVar9 = plVar12[1];
  puVar14 = PTR_PTR_1126adb88;
  _objc_allocWithZone(PTR_PTR_1126adb88);
  func_0x00010bfee200();
  alStack_c8[0] = lVar3;
  if (lVar3 != 0) {
LAB_104067740:
    plVar5 = alStack_c8;
LAB_104067770:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11073cba8,plVar5,&UNK_11073cba8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10406777c);
    (*pcVar15)();
  }
  func_0x000107c54990();
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    _objc_release(lVar6);
    _swift_unknownObjectRelease(param_1);
    _objc_release(plVar5);
  }
  else {
    func_0x000107c4bf8c();
    _objc_release(lVar6);
    _swift_unknownObjectRelease(param_1);
    _objc_release(plVar5);
    _swift_unknownObjectRelease(lVar9);
  }
  _objc_release(puVar14);
LAB_104067328:
  FUN_1040678c4(&lStack_90);
  return plVar5;
}



/* Entry: 10406777c; end: 1040677bf;  */

long FUN_10406777c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1040677c0; end: 10406787f;  */

undefined1  [16] FUN_1040677c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x00010c008360();
  _objc_release(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(0);
    _objc_release(uVar1);
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = unaff_x20;
    return auVar4;
  }
  ___stack_chk_fail();
  if (puRam00000001130526b0 != (undefined *)0x0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = puRam00000001130526b0;
    return auVar5;
  }
  puVar2 = PTR_PTR_1126deae0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001130526b0 = puVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 104067880; end: 1040678c3;  */

void FUN_104067880(void)

{
  undefined *puVar1;
  
  if (puRam00000001130526b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126deae0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001130526b0 = puVar1;
  return;
}



/* Entry: 1040678c4; end: 1040678f7;  */

void FUN_1040678c4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001040678d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1040678f8; end: 104067b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040678f8(ulong param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_113052728);
  uVar9 = *(ulong *)(lVar12 + 0x10);
  if (uVar9 != 0) {
    _swift_bridgeObjectRetain(lVar12);
    uVar14 = 0;
    pbVar13 = (byte *)(lVar12 + 0x28);
    do {
      if (*(ulong *)(lVar12 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104067b2c);
        (*pcVar2)();
      }
      uVar10 = *(ulong *)(pbVar13 + -8);
      bVar1 = *pbVar13;
      uVar11 = (ulong)bVar1;
      if (bVar1 == 2) {
        uVar3 = param_1;
        FUN_104066b1c(param_1,param_2,uVar10);
        if ((uVar3 & 1) == 0) goto LAB_104067a80;
      }
      else {
        uStack_68 = 0xf;
        uStack_78 = param_1;
        uStack_70 = param_2;
        func_0x000104066444(uVar10,uVar11);
        func_0x000104066444(uVar10,uVar11);
        _swift_bridgeObjectRetain(param_2);
        uVar8 = 0x112d7eee0;
        func_0x0001000285a8(0x112d7eee0,&UNK_10dccb030);
        uVar4 = uVar8;
        func_0x00010142b1dc();
        uVar5 = uVar4;
        func_0x000100e8b654();
        __sSo8_NSRangeV10FoundationE_2inABx_q_tcSXRzSyR_SS5IndexV5BoundRtzr0_lufC
                  (&uStack_68,&uStack_78,uVar8,PTR___sSSN_11034da80,uVar4,uVar5);
        uVar3 = param_1;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
        uVar6 = uVar10;
        func_0x00010bfb1800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010406646c(uVar10,uVar11);
        _objc_release(uVar3);
        if (uVar6 != 0) {
          _objc_release(uVar6);
LAB_104067a80:
          puVar7 = (undefined8 *)(unaff_x20 + _DAT_113052730);
          func_0x0001000a8868(puVar7,puVar7[3]);
          FUN_1040662f4(uVar10,uVar11,*puVar7,puVar7[1]);
          _swift_bridgeObjectRelease(lVar12);
          if (*(ulong *)(unaff_x20 + _DAT_113052738) != 0) {
            uStack_78 = *(ulong *)(unaff_x20 + _DAT_113052738);
            __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                      (&UNK_11073cba8,&uStack_78,&UNK_11073cba8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104067b50);
            (*pcVar2)();
          }
          if (bVar1 < 2) {
            uVar9 = uVar11;
            if (bVar1 != 0) {
              uVar9 = 1;
            }
          }
          else {
            if (bVar1 == 2) {
              uVar8 = 0;
              goto LAB_104067b00;
            }
            uVar9 = 2;
          }
          func_0x00010406646c(uVar10,uVar11);
          uVar8 = 1;
          uVar10 = uVar9;
LAB_104067b00:
          func_0x000104066074(uVar10,uVar8);
          return;
        }
        func_0x00010406646c(uVar10,uVar11);
      }
      uVar14 = uVar14 + 1;
      pbVar13 = pbVar13 + 0x10;
    } while (uVar9 != uVar14);
    _swift_bridgeObjectRelease(lVar12);
  }
  return;
}



/* Entry: 104067b50; end: 104067bdf; -[InputValidationServiceImpl validateWithErrorDescriptionWithInput:] */

void FUN_104067b50(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  lVar1 = param_2;
  FUN_1040678f8(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104067be0; end: 104067c3b; -[InputValidationServiceImpl init] */

void FUN_104067be0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("InputValidation.InputValidationServiceImpl",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104067c0c);
  (*pcVar1)();
}



/* Entry: 104067c3c; end: 104067c73; -[InputValidationServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104067c3c(long param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113052728));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_113052730))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113052730));
  return;
}



/* Entry: 104067c74; end: 104067c93;  */

void FUN_104067c74(void)

{
  _objc_opt_self(&PTR_PTR_112982918);
  return;
}



/* Entry: 104067c94; end: 104067fd3;  */

undefined1  [16] FUN_104067c94(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1e4a90);
  uVar3 = 0x6c61567475706e49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c61567475706e49,0xef6e6f6974616469);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104067d64);
  (*pcVar1)();
}



/* Entry: 104067fd4; end: 1040680b3; -[_TtC36MutableUserSessionRepositoryServices36MutableUserSessionRepositoryServices mutableUserSessionRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104067fd4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000100083b20(&uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1040680b4; end: 104068113; -[_TtC36MutableUserSessionRepositoryServices36MutableUserSessionRepositoryServices init] */

void FUN_1040680b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MutableUserSessionRepositoryServices.MutableUserSessionRepositoryServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040680e0);
  (*pcVar1)();
}



/* Entry: 104068114; end: 104068123; -[_TtC36MutableUserSessionRepositoryServices36MutableUserSessionRepositoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113052768));
  return;
}



/* Entry: 104068124; end: 104068203; -[_TtC28AutoOneTapLoginEventServices28AutoOneTapLoginEventServices autoOneTapLoginEventService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068124(undefined8 param_1)

{
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000100083b20(&uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 104068204; end: 104068263; -[_TtC28AutoOneTapLoginEventServices28AutoOneTapLoginEventServices init] */

void FUN_104068204(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AutoOneTapLoginEventServices.AutoOneTapLoginEventServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104068230);
  (*pcVar1)();
}



/* Entry: 104068264; end: 104068287; -[_TtC28AutoOneTapLoginEventServices28AutoOneTapLoginEventServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113052798));
  return;
}



/* Entry: 104068288; end: 104068333;  */

void FUN_104068288(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104068334; end: 104068357;  */

void FUN_104068334(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 104068358; end: 1040683a3; -[SCAutoOneTapLoginEvent userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068358(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130527c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130527c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1040683a4; end: 1040683b3; -[SCAutoOneTapLoginEvent source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040683a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130527d0);
}



/* Entry: 1040683b4; end: 10406841f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040683b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130527c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130527d0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104068420; end: 104068493; -[SCAutoOneTapLoginEvent initWithUserId:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068420(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130527c8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130527d0) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104068494; end: 1040684f3; -[SCAutoOneTapLoginEvent init] */

void FUN_104068494(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AutoOneTapLoginEventServices.SCAutoOneTapLoginEvent",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040684c0);
  (*pcVar1)();
}



/* Entry: 1040684f4; end: 10406850b; -[SCAutoOneTapLoginEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040684f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130527c8 + 8))
  ;
  return;
}



/* Entry: 10406850c; end: 10406854b;  */

void FUN_10406850c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130527d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccb0b0;
  _swift_getWitnessTable(&UNK_10dccb0b0,&UNK_11073ce58);
  puRam00000001130527d8 = puVar1;
  return;
}



/* Entry: 10406854c; end: 10406855b;  */

undefined1  [16] FUN_10406854c(void)

{
  return ZEXT816(0x11073ce58);
}



/* Entry: 10406855c; end: 10406857b;  */

void FUN_10406855c(void)

{
  _objc_opt_self(&PTR_PTR_112982b90);
  return;
}



/* Entry: 10406857c; end: 10406858b; -[SCOneTapLoginMultiAccountRepositoriesServices oneTapLoginMultiAccountRepositories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406857c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113052808));
  return;
}



/* Entry: 10406858c; end: 104068623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406858c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113052808) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104068624; end: 10406867b; -[SCOneTapLoginMultiAccountRepositoriesServices initWithOneTapLoginMultiAccountRepositories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113052808) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10406867c; end: 1040686af;  */

void FUN_10406867c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040686b0; end: 1040686bf; -[SCOneTapLoginMultiAccountRepositoriesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040686b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113052808));
  return;
}



/* Entry: 1040686c0; end: 1040686d7;  */

void FUN_1040686c0(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1040686d8; end: 104068907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1040686d8(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(ulong *)(unaff_x20 + _DAT_113052838);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar6 = 0x800000010f1e4c70;
    uVar3 = 0xd00000000000003c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003c);
    uVar4 = uVar2;
    func_0x000107c5c1ac();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(uVar2);
    _objc_release(uVar3);
    if (uVar4 != 0) {
      uVar2 = uVar4;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar4);
      if (param_1 == uVar2 && param_2 == uVar6) {
        _swift_bridgeObjectRelease();
      }
      else {
        uVar4 = param_1;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,uVar2,uVar6,0);
        _swift_bridgeObjectRelease();
        if ((uVar4 & 1) == 0) goto LAB_1040688e0;
      }
      func_0x0001040689c0();
      if (uVar6 != 0) {
        lVar8 = *(long *)(uVar6 + _DAT_1130529b8);
        _swift_bridgeObjectRetain(lVar8);
        _objc_release(uVar6);
        if (*(long *)(lVar8 + 0x10) == 0) {
          _swift_bridgeObjectRelease(lVar8);
        }
        else {
          _swift_bridgeObjectRetain(lVar8);
          func_0x000100029284();
          if ((param_2 & 1) != 0) {
            lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + param_1 * 8);
            _objc_retain(lVar5);
            _swift_bridgeObjectRelease_n(lVar8,2);
            lVar8 = _DAT_1138130c0;
            uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113052840);
            func_0x00010bf5e5e0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar9);
            _objc_release(uVar3);
            lVar8 = lVar5 + lVar8;
            __s10Foundation4DateV1goiySbAC_ACtFZ(lVar8,puVar9);
            uVar7 = (uint)lVar8;
            _objc_release(lVar5);
            (**(code **)(lVar10 + 8))(puVar9,lVar1);
            goto LAB_1040688e4;
          }
          _swift_bridgeObjectRelease_n(lVar8,2);
        }
      }
    }
  }
LAB_1040688e0:
  uVar7 = 0;
LAB_1040688e4:
  return uVar7 & 1;
}



/* Entry: 104068908; end: 104068b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068908(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113052838);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = 0xd00000000000003c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003c,0x800000010f1e4c70);
    lVar3 = lVar1;
    func_0x000107c5c1ac();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar1);
    _objc_release(uVar2);
    if (lVar3 != 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 104068b50; end: 104068bb7; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults isEligibleForLoggedOutNotificationForUserId:] */

uint FUN_104068b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_1040686d8(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 104068bb8; end: 104068c1f; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults mostRecentLogoutUser] */

void FUN_104068bb8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104068908();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104068c20; end: 104068d73; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults setMostRecentLogoutUser:] */

void FUN_104068c20(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  func_0x000104068c84(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104068d74; end: 104068da7; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults oneTapLoginUserDataSnapshot] */

void FUN_104068d74(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040689c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104068da8; end: 104068dfb; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults setOneTapLoginUserDataSnapshot:] */

void FUN_104068da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104068dfc(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104068dfc; end: 104068f8f;  */

/* WARNING: Removing unreachable block (ram,0x000104068e88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068dfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113052838);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar6 = 0xd000000000000041;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000041,0x800000010f1e4cb0);
      func_0x000107c4ff88(lVar1);
      _swift_unknownObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return;
    }
    lVar2 = param_1;
    FUN_10406b7d0();
    lVar3 = lVar2;
    lStack_48 = lVar2;
    func_0x00010406903c();
    _objc_retain(param_1);
    puVar7 = &UNK_11073cff0;
    plVar4 = &lStack_48;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(plVar4,&UNK_11073cff0,lVar3);
    _swift_bridgeObjectRelease(lVar2);
    plVar5 = plVar4;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(plVar4,puVar7);
    uVar6 = 0xd000000000000041;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000041,0x800000010f1e4cb0);
    func_0x000107c56bcc(lVar1);
    _objc_release(plVar5);
    _objc_release(uVar6);
    func_0x00010006c090(plVar4,puVar7);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104068f90; end: 104068fc3;  */

void FUN_104068f90(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104068fc4; end: 10406901b; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104068fc4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113052838));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113052840));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113052848));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113052850));
  return;
}



/* Entry: 10406901c; end: 1040690bb;  */

void FUN_10406901c(void)

{
  _objc_opt_self(&PTR_PTR_112982d18);
  return;
}



/* Entry: 1040690bc; end: 1040690cb;  */

undefined1  [16] FUN_1040690bc(void)

{
  return ZEXT816(0x11073cfd0);
}



/* Entry: 1040690cc; end: 1040690e7;  */

undefined8 FUN_1040690cc(void)

{
  return 1;
}



/* Entry: 1040690e8; end: 104069167;  */

void FUN_1040690e8(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x75;
  if (param_2 == 0x7372657375 && param_3 == -0x1b00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x7372657375,0xe500000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 104069168; end: 104069173;  */

undefined1  [16] FUN_104069168(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104069174; end: 1040691c3;  */

void FUN_104069174(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104069d98();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1040691c4; end: 10406973b;  */

undefined8 FUN_1040691c4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *extraout_x13;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long alStack_a0 [3];
  long *plStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  FUN_104069d1c();
  lStack_68 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  uVar13 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = uVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar13 - extraout_x12;
  lVar4 = 0x1130529a8;
  func_0x0001000285a8(0x1130529a8,&UNK_10dccb5c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plStack_88 = (long *)((lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00);
  if (param_1 == param_2) {
    uVar7 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar8 = *(ulong *)(param_1 + 0x40);
      uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar13 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar13 = ~(-1L << (uVar9 & 0x3f));
      }
      uVar9 = uVar9 + 0x3f >> 6;
      alStack_a0[1] = param_1;
      puStack_80 = extraout_x13;
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar4 = 0;
      uVar13 = uVar13 & uVar8;
      alStack_a0[2] = lVar11;
      do {
        puVar12 = puStack_80;
        lVar11 = alStack_a0[1];
        lVar6 = 0x1130529b0;
        if (uVar13 == 0) {
          uVar13 = uVar9;
          if ((long)uVar9 <= lVar4 + 1) {
            uVar13 = lVar4 + 1;
          }
          lVar14 = uVar13 - 1;
          lVar10 = lVar4;
          do {
            lVar4 = lVar10 + 1;
            if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104069580);
              (*pcVar3)();
            }
            if ((long)uVar9 <= lVar4) {
              func_0x0001000285a8(0x1130529b0,&UNK_10dccb5d0);
              puVar12 = puStack_80;
              (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puStack_80,1,1,lVar6);
              uStack_70 = 0;
              goto LAB_1040693f8;
            }
            uVar13 = ((ulong *)(param_1 + 0x40))[lVar4];
            lVar10 = lVar10 + 1;
          } while (uVar13 == 0);
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uStack_70 = uVar13 - 1 & uVar13;
          uVar13 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 * 0x40;
        }
        else {
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uStack_70 = uVar13 - 1 & uVar13;
          uVar13 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
        }
        puVar1 = (undefined8 *)(*(long *)(alStack_a0[1] + 0x30) + uVar13 * 0x10);
        uVar7 = puVar1[1];
        *puStack_80 = *puVar1;
        puStack_80[1] = uVar7;
        func_0x0001000285a8(0x1130529b0,&UNK_10dccb5d0);
        FUN_104069d54(*(long *)(lVar11 + 0x38) + *(long *)(lStack_68 + 0x48) * uVar13,
                      (long)puVar12 + (long)*(int *)(lVar6 + 0x30));
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar12,0,1,lVar6);
        _swift_bridgeObjectRetain(uVar7);
        lVar14 = lVar4;
LAB_1040693f8:
        plVar2 = plStack_88;
        lVar11 = 0x1130529b0;
        func_0x00010406a5a8(puVar12,plStack_88);
        func_0x0001000285a8(0x1130529b0,&UNK_10dccb5d0);
        plVar5 = plVar2;
        (**(code **)(*(long *)(lVar11 + -8) + 0x30))(plVar2,1,lVar11);
        lVar4 = alStack_a0[2];
        if ((int)plVar5 == 1) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(alStack_a0[1],2);
          return 1;
        }
        lVar6 = *plVar2;
        uVar13 = plVar2[1];
        FUN_104069fe0((long)plVar2 + (long)*(int *)(lVar11 + 0x30),alStack_a0[2]);
        uVar8 = uVar13;
        func_0x000100029284(lVar6);
        _swift_bridgeObjectRelease(uVar13);
        uVar13 = uStack_78;
        if ((uVar8 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(alStack_a0[1],2);
          func_0x00010406a5f8(lVar4);
          goto LAB_104069558;
        }
        FUN_104069d54(*(long *)(param_2 + 0x38) + *(long *)(lStack_68 + 0x48) * lVar6,uStack_78);
        uVar8 = uVar13;
        __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar13,lVar4);
        func_0x00010406a5f8(uVar13);
        func_0x00010406a5f8(lVar4);
        lVar4 = lVar14;
        uVar13 = uStack_70;
      } while ((uVar8 & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(alStack_a0[1],2);
    }
LAB_104069558:
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 10406973c; end: 10406984b;  */

void FUN_10406973c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar3 = 0x113052890;
  func_0x0001000285a8(0x113052890,&UNK_10dccb260);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104069d98();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_11073d118,&UNK_11073d118,param_1,uVar1,uVar2);
  uStack_58 = param_2;
  func_0x0001000285a8(0x1130528a0,&UNK_10dccb268);
  FUN_104069dd8();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(&uStack_58);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 10406984c; end: 104069873;  */

void FUN_10406984c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_104069e68();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 104069874; end: 10406988b;  */

void FUN_104069874(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10406973c(param_1,*unaff_x20);
  return;
}



/* Entry: 10406988c; end: 10406989f;  */

undefined8 FUN_10406988c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *extraout_x13;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long alStack_a0 [3];
  long *plStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar8 = *param_1;
  lVar9 = *param_2;
  lVar4 = 0;
  FUN_104069d1c();
  lStack_68 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  uVar15 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = uVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar15 - extraout_x12;
  lVar4 = 0x1130529a8;
  func_0x0001000285a8(0x1130529a8,&UNK_10dccb5c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plStack_88 = (long *)((lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00);
  if (lVar8 == lVar9) {
    uVar7 = 1;
  }
  else {
    if (*(long *)(lVar8 + 0x10) == *(long *)(lVar9 + 0x10)) {
      uVar10 = *(ulong *)(lVar8 + 0x40);
      uVar11 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
      uVar15 = 0xffffffffffffffff;
      if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
        uVar15 = ~(-1L << (uVar11 & 0x3f));
      }
      uVar11 = uVar11 + 0x3f >> 6;
      alStack_a0[1] = lVar8;
      puStack_80 = extraout_x13;
      _swift_bridgeObjectRetain_n(lVar8,2);
      _swift_bridgeObjectRetain(lVar9);
      lVar4 = 0;
      uVar15 = uVar15 & uVar10;
      alStack_a0[2] = lVar13;
      do {
        puVar14 = puStack_80;
        lVar13 = alStack_a0[1];
        lVar6 = 0x1130529b0;
        if (uVar15 == 0) {
          uVar15 = uVar11;
          if ((long)uVar11 <= lVar4 + 1) {
            uVar15 = lVar4 + 1;
          }
          lVar16 = uVar15 - 1;
          lVar12 = lVar4;
          do {
            lVar4 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104069580);
              (*pcVar3)();
            }
            if ((long)uVar11 <= lVar4) {
              func_0x0001000285a8(0x1130529b0,&UNK_10dccb5d0);
              puVar14 = puStack_80;
              (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puStack_80,1,1,lVar6);
              uStack_70 = 0;
              goto LAB_1040693f8;
            }
            uVar15 = ((ulong *)(lVar8 + 0x40))[lVar4];
            lVar12 = lVar12 + 1;
          } while (uVar15 == 0);
          uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uStack_70 = uVar15 - 1 & uVar15;
          uVar15 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar4 * 0x40;
        }
        else {
          uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uStack_70 = uVar15 - 1 & uVar15;
          uVar15 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar4 << 6;
        }
        puVar1 = (undefined8 *)(*(long *)(alStack_a0[1] + 0x30) + uVar15 * 0x10);
        uVar7 = puVar1[1];
        *puStack_80 = *puVar1;
        puStack_80[1] = uVar7;
        func_0x0001000285a8(0x1130529b0,&UNK_10dccb5d0);
        FUN_104069d54(*(long *)(lVar13 + 0x38) + *(long *)(lStack_68 + 0x48) * uVar15,
                      (long)puVar14 + (long)*(int *)(lVar6 + 0x30));
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar14,0,1,lVar6);
        _swift_bridgeObjectRetain(uVar7);
        lVar16 = lVar4;
LAB_1040693f8:
        plVar2 = plStack_88;
        lVar13 = 0x1130529b0;
        func_0x00010406a5a8(puVar14,plStack_88);
        func_0x0001000285a8(0x1130529b0,&UNK_10dccb5d0);
        plVar5 = plVar2;
        (**(code **)(*(long *)(lVar13 + -8) + 0x30))(plVar2,1,lVar13);
        lVar4 = alStack_a0[2];
        if ((int)plVar5 == 1) {
          _swift_bridgeObjectRelease(lVar9);
          _swift_bridgeObjectRelease_n(alStack_a0[1],2);
          return 1;
        }
        lVar6 = *plVar2;
        uVar15 = plVar2[1];
        FUN_104069fe0((long)plVar2 + (long)*(int *)(lVar13 + 0x30),alStack_a0[2]);
        uVar10 = uVar15;
        func_0x000100029284(lVar6);
        _swift_bridgeObjectRelease(uVar15);
        uVar15 = uStack_78;
        if ((uVar10 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar9);
          _swift_bridgeObjectRelease_n(alStack_a0[1],2);
          func_0x00010406a5f8(lVar4);
          goto LAB_104069558;
        }
        FUN_104069d54(*(long *)(lVar9 + 0x38) + *(long *)(lStack_68 + 0x48) * lVar6,uStack_78);
        uVar10 = uVar15;
        __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar15,lVar4);
        func_0x00010406a5f8(uVar15);
        func_0x00010406a5f8(lVar4);
        lVar4 = lVar16;
        uVar15 = uStack_70;
      } while ((uVar10 & 1) != 0);
      _swift_bridgeObjectRelease(lVar9);
      _swift_bridgeObjectRelease_n(alStack_a0[1],2);
    }
LAB_104069558:
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 1040698a0; end: 10406991b;  */

void FUN_1040698a0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10406991c; end: 10406993b;  */

undefined1  [16] FUN_10406991c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000797269;
  auVar1._0_8_ = 0x7078456e656b6f74;
  return auVar1;
}



/* Entry: 10406993c; end: 1040699c3;  */

void FUN_10406993c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0x7078456e656b6f74 && param_3 == -0x14ffffffff868d97) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1040699c4; end: 1040699cf;  */

undefined1  [16] FUN_1040699c4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1040699d0; end: 104069a1f;  */

void FUN_1040699d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104069fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104069a20; end: 104069bef;  */

void FUN_104069a20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  uStack_78 = param_1;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  lStack_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1130528c8;
  func_0x0001000285a8(0x1130528c8,&UNK_10dccb278);
  lStack_70 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_70 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = (long)puVar5 - extraout_x8_00;
  lVar4 = 0;
  FUN_104069d1c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_104069fa0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar7,&UNK_11073d088,&UNK_11073d088,lVar4,uVar1,uVar2);
  uVar1 = uStack_78;
  if (unaff_x21 == 0) {
    func_0x00010406a568(0x112d5e180,PTR___s10Foundation4DateVMa_110350bb8,
                        PTR___s10Foundation4DateVSeAAMc_110350be8);
    lVar4 = lStack_68;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(puVar5,lStack_68);
    (**(code **)(lStack_70 + 8))(lVar7,lVar3);
    (**(code **)(lVar6 + 0x20))(lVar8,puVar5,lVar4);
    FUN_104069fe0(lVar8,uVar1);
  }
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 104069bf0; end: 104069c03;  */

void FUN_104069bf0(void)

{
  FUN_104069a20();
  return;
}



/* Entry: 104069c04; end: 104069d17;  */

void FUN_104069c04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar3 = 0x1130528b8;
  func_0x0001000285a8(0x1130528b8,&UNK_10dccb270);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104069fa0();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffb0 + -extraout_x8,&UNK_11073d088,&UNK_11073d088,param_1,uVar1,
             uVar2);
  __s10Foundation4DateVMa(0);
  func_0x00010406a568(0x112d5e200,PTR___s10Foundation4DateVMa_110350bb8,
                      PTR___s10Foundation4DateVSEAAMc_110350bc8);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF();
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 104069d18; end: 104069d1b;  */

void FUN_104069d18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb51e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4DateV2eeoiySbAC_ACtFZ_110350b90)();
  return;
}



/* Entry: 104069d1c; end: 104069d53;  */

void FUN_104069d1c(undefined8 param_1)

{
  if (lRam0000000113052928 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7e7d98);
  return;
}



/* Entry: 104069d54; end: 104069d97;  */

undefined8 FUN_104069d54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104069d1c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104069d98; end: 104069dd7;  */

void FUN_104069d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccb570;
  _swift_getWitnessTable(&UNK_10dccb570,&UNK_11073d118);
  puRam0000000113052898 = puVar1;
  return;
}



/* Entry: 104069dd8; end: 104069e67;  */

void FUN_104069dd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001130528a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130528a0;
  func_0x00010002969c(0x1130528a0,&UNK_10dccb268);
  uVar2 = 0x1130528b0;
  func_0x00010406a568(0x1130528b0,FUN_104069d1c,&UNK_10dccb320);
  puStack_30 = PTR___sSSSEsWP_11034da88;
  puVar3 = PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780,uVar1,&puStack_30);
  puRam00000001130528a8 = puVar3;
  return;
}



/* Entry: 104069e68; end: 104069f9f;  */

long FUN_104069e68(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x113052990;
  func_0x0001000285a8(0x113052990,&UNK_10dccb5c0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  lVar4 = lVar3;
  FUN_104069d98();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_11073d118,&UNK_11073d118,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x1130528a0;
    func_0x0001000285a8(0x1130528a0,&UNK_10dccb268);
    FUN_10406a4d8();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 104069fa0; end: 104069fdf;  */

void FUN_104069fa0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130528c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccb520;
  _swift_getWitnessTable(&UNK_10dccb520,&UNK_11073d088);
  puRam00000001130528c0 = puVar1;
  return;
}



/* Entry: 104069fe0; end: 10406a023;  */

undefined8 FUN_104069fe0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104069d1c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10406a024; end: 10406a033;  */

undefined1  [16] FUN_10406a024(void)

{
  return ZEXT816(0x11073cff0);
}



/* Entry: 10406a034; end: 10406a1b3;  */

void FUN_10406a034(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010406a06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2,lVar1);
  return;
}



/* Entry: 10406a1b4; end: 10406a1cb;  */

void FUN_10406a1b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10406a1cc; end: 10406a233;  */

void FUN_10406a1cc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&lStack_28,param_1 + 0x10);
  }
  return;
}



/* Entry: 10406a234; end: 10406a343;  */

undefined8 FUN_10406a234(void)

{
  return 0;
}


