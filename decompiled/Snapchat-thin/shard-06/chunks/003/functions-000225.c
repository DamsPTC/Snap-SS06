/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104758cd4; end: 104758e7b;  */

/* WARNING: Removing unreachable block (ram,0x000104758de0) */

undefined8 FUN_104758cd4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 unaff_d8;
  undefined1 auStack_80 [12];
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  
  lVar3 = 0x11308e998;
  func_0x0001000285a8(0x11308e998,&UNK_10dd33af0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1047588ec();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&UNK_11079fea8,&UNK_11079fea8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_71 = 0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_71,lVar3);
    uStack_72 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_72,lVar3);
    uStack_73 = 2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_73,lVar3);
    uStack_74 = 3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_74,lVar3);
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
  }
  else {
    func_0x0001000834e4(param_2);
    param_1 = unaff_d8;
  }
  return param_1;
}



/* Entry: 104758e7c; end: 104758e7f;  */

void FUN_104758e7c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33998;
  _swift_getWitnessTable(&UNK_10dd33998,&UNK_11079fe08);
  puRam000000011308e978 = puVar1;
  return;
}



/* Entry: 104758e80; end: 104758ebf;  */

void FUN_104758e80(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33998;
  _swift_getWitnessTable(&UNK_10dd33998,&UNK_11079fe08);
  puRam000000011308e978 = puVar1;
  return;
}



/* Entry: 104758ec0; end: 104758eeb;  */

long FUN_104758ec0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104758eec; end: 1047590af;  */

int FUN_104758eec(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1047590b0; end: 1047590ef;  */

void FUN_1047590b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33a74;
  _swift_getWitnessTable(&UNK_10dd33a74,&UNK_11079fea8);
  puRam000000011308e980 = puVar1;
  return;
}



/* Entry: 1047590f0; end: 1047590f3;  */

void FUN_1047590f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33a0c;
  _swift_getWitnessTable(&UNK_10dd33a0c,&UNK_11079fea8);
  puRam000000011308e988 = puVar1;
  return;
}



/* Entry: 1047590f4; end: 104759133;  */

void FUN_1047590f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33a0c;
  _swift_getWitnessTable(&UNK_10dd33a0c,&UNK_11079fea8);
  puRam000000011308e988 = puVar1;
  return;
}



/* Entry: 104759134; end: 104759137;  */

void FUN_104759134(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd339e4;
  _swift_getWitnessTable(&UNK_10dd339e4,&UNK_11079fea8);
  puRam000000011308e990 = puVar1;
  return;
}



/* Entry: 104759138; end: 104759177;  */

void FUN_104759138(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd339e4;
  _swift_getWitnessTable(&UNK_10dd339e4,&UNK_11079fea8);
  puRam000000011308e990 = puVar1;
  return;
}



/* Entry: 104759178; end: 104759287;  */

void FUN_104759178(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104759288; end: 1047592c7;  */

bool FUN_104759288(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2) & 1) == 0 &&
         ((int)*(undefined8 *)(param_1 + 8) == (int)*(undefined8 *)(param_2 + 8) &&
         (int)*(undefined8 *)(param_1 + 0x10) == (int)*(undefined8 *)(param_2 + 0x10));
}



/* Entry: 1047592c8; end: 104759307;  */

void FUN_1047592c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e9a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33b40;
  _swift_getWitnessTable(&UNK_10dd33b40,&UNK_11079ffd0);
  puRam000000011308e9a0 = puVar1;
  return;
}



/* Entry: 104759308; end: 1047593af;  */

int FUN_104759308(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x18] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1047593b0; end: 104759443;  */

long FUN_1047593b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104759444; end: 104759447;  */

bool FUN_104759444(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [40];
  
  uVar1 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar1 != 0) {
      return false;
    }
    FUN_104759e18(param_2,auStack_48);
  }
  else {
    if (uVar1 == 0) {
      FUN_104759e18(param_2,auStack_48);
      return false;
    }
    uVar2 = *param_1;
    if ((uVar2 != *param_2 || param_1[1] != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return false;
    }
  }
  if ((((param_1[2] == param_2[2]) && ((((byte)param_1[3] ^ (byte)param_2[3]) & 1) == 0)) &&
      (((*(byte *)((long)param_1 + 0x19) ^ *(byte *)((long)param_2 + 0x19)) & 1) == 0)) &&
     (((*(byte *)((long)param_1 + 0x1a) ^ *(byte *)((long)param_2 + 0x1a)) & 1) == 0)) {
    return (int)param_1[4] == (int)param_2[4];
  }
  return false;
}



/* Entry: 104759448; end: 1047594d3;  */

void FUN_104759448(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 3) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x19) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x1a) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  return;
}



/* Entry: 1047594d4; end: 10475950f;  */

void FUN_1047594d4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104759448(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104759510; end: 104759513;  */

void FUN_104759510(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 3) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x19) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x1a) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  return;
}



/* Entry: 104759514; end: 10475954b;  */

void FUN_104759514(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104759448(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10475954c; end: 104759593;  */

uint FUN_10475954c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_104759ad8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104759594; end: 10475969f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104759594(undefined1 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte bStack_5f;
  byte bStack_5e;
  undefined8 uStack_58;
  
  _swift_getObjectType();
  func_0x00010481c2dc(&uStack_78);
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090df8);
  *puVar1 = uStack_78;
  puVar1[1] = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_113090e00) = uStack_68;
  *(undefined1 *)(unaff_x20 + _DAT_113090e08) = param_1;
  *(byte *)(unaff_x20 + _DAT_113090e10) = bStack_5f & 1;
  *(byte *)(unaff_x20 + _DAT_113090e18) = bStack_5e & 1;
  *(undefined8 *)(unaff_x20 + _DAT_113090e20) = uStack_58;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uStack_70);
  puVar3 = auStack_88;
  _objc_msgSendSuper2(puVar3,puVar2);
  _swift_bridgeObjectRelease(uStack_70);
  return puVar3;
}



/* Entry: 1047596a0; end: 1047596db; -[SCAdServeLoggingContext withIsCached:] */

void FUN_1047596a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_104759594(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1047596dc; end: 1047597eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047596dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  
  _swift_getObjectType();
  func_0x00010481c2dc(&uStack_78);
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090df8);
  *puVar1 = uStack_78;
  puVar1[1] = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_113090e00) = uStack_68;
  *(byte *)(unaff_x20 + _DAT_113090e08) = bStack_60 & 1;
  *(byte *)(unaff_x20 + _DAT_113090e10) = bStack_5f & 1;
  *(byte *)(unaff_x20 + _DAT_113090e18) = bStack_5e & 1;
  *(undefined8 *)(unaff_x20 + _DAT_113090e20) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uStack_70);
  puVar3 = auStack_88;
  _objc_msgSendSuper2(puVar3,puVar2);
  _swift_bridgeObjectRelease(uStack_70);
  return puVar3;
}



/* Entry: 1047597ec; end: 104759827; -[SCAdServeLoggingContext withRequestOrigin:] */

void FUN_1047597ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1047596dc(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104759828; end: 1047598ab;  */

undefined8 FUN_104759828(undefined8 param_1,long param_2)

{
  undefined8 unaff_x20;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  _objc_allocWithZone();
  func_0x00010c04e0a0();
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1047598ac; end: 1047599bf; -[SCAdServeLoggingContext initWithStorySessionId:viewSource:isCached:prefetchRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1047598ac(long param_1,long param_2,long param_3,undefined8 param_4,undefined1 param_5,
             undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar3 = lVar2;
  _objc_allocWithZone();
  plVar1 = (long *)(lVar3 + _DAT_113090df8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_113090e00) = param_4;
  *(undefined1 *)(lVar3 + _DAT_113090e08) = param_5;
  *(undefined1 *)(lVar3 + _DAT_113090e10) = param_6;
  *(undefined1 *)(lVar3 + _DAT_113090e18) = 0;
  *(undefined8 *)(lVar3 + _DAT_113090e20) = 0;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  lVar2 = param_1;
  _swift_getObjectType(param_1);
  _swift_deallocPartialClassInstance(param_1,lVar2,0x30,7);
  return (undefined1 *)plVar4;
}



/* Entry: 1047599c0; end: 104759ad7; -[SCAdServeLoggingContext initWithStorySessionId:viewSource:isCached:prefetchRequest:earlyFetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1047599c0(long param_1,long param_2,long param_3,undefined8 param_4,undefined1 param_5,
             undefined1 param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar3 = lVar2;
  _objc_allocWithZone();
  plVar1 = (long *)(lVar3 + _DAT_113090df8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_113090e00) = param_4;
  *(undefined1 *)(lVar3 + _DAT_113090e08) = param_5;
  *(undefined1 *)(lVar3 + _DAT_113090e10) = param_6;
  *(undefined1 *)(lVar3 + _DAT_113090e18) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113090e20) = 0;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  lVar2 = param_1;
  _swift_getObjectType(param_1);
  _swift_deallocPartialClassInstance(param_1,lVar2,0x30,7);
  return (undefined1 *)plVar4;
}



/* Entry: 104759ad8; end: 104759bbb;  */

bool FUN_104759ad8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [40];
  
  uVar1 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar1 != 0) {
      return false;
    }
    FUN_104759e18(param_2,auStack_48);
  }
  else {
    if (uVar1 == 0) {
      FUN_104759e18(param_2,auStack_48);
      return false;
    }
    uVar2 = *param_1;
    if ((uVar2 != *param_2 || param_1[1] != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return false;
    }
  }
  if ((((param_1[2] == param_2[2]) && ((((byte)param_1[3] ^ (byte)param_2[3]) & 1) == 0)) &&
      (((*(byte *)((long)param_1 + 0x19) ^ *(byte *)((long)param_2 + 0x19)) & 1) == 0)) &&
     (((*(byte *)((long)param_1 + 0x1a) ^ *(byte *)((long)param_2 + 0x1a)) & 1) == 0)) {
    return (int)param_1[4] == (int)param_2[4];
  }
  return false;
}



/* Entry: 104759bbc; end: 104759bbf;  */

void FUN_104759bbc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33bf0;
  _swift_getWitnessTable(&UNK_10dd33bf0,&UNK_1107a0120);
  puRam000000011308e9a8 = puVar1;
  return;
}



/* Entry: 104759bc0; end: 104759bff;  */

void FUN_104759bc0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33bf0;
  _swift_getWitnessTable(&UNK_10dd33bf0,&UNK_1107a0120);
  puRam000000011308e9a8 = puVar1;
  return;
}



/* Entry: 104759c00; end: 104759c2b;  */

long FUN_104759c00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104759c2c; end: 104759c33;  */

void FUN_104759c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104759c34; end: 104759c7f;  */

undefined8 * FUN_104759c34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0x19) = *(undefined2 *)((long)param_2 + 0x19);
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104759c80; end: 104759cf3;  */

undefined8 * FUN_104759c80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 104759cf4; end: 104759d4f;  */

undefined8 * FUN_104759cf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 104759d50; end: 104759e17;  */

int FUN_104759d50(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104759e18; end: 10475a083;  */

undefined8 * FUN_104759e18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = param_1[2];
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 3);
  *(undefined2 *)((long)param_2 + 0x19) = *(undefined2 *)((long)param_1 + 0x19);
  param_2[4] = param_1[4];
  _swift_bridgeObjectRetain(uVar1);
  return param_2;
}



/* Entry: 10475a084; end: 10475a087;  */

bool FUN_10475a084(int *param_1,int *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*param_1 != *param_2) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 4);
  lVar2 = *(long *)(param_2 + 4);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = *(ulong *)(param_1 + 2);
    if ((uVar4 != *(ulong *)(param_2 + 2) || lVar3 != lVar2) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 2),lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 8);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = *(ulong *)(param_1 + 6);
    if (((uVar4 != *(ulong *)(param_2 + 6)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 6),lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  if (param_1[10] != param_2[10]) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0xe);
  lVar2 = *(long *)(param_2 + 0xe);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = *(ulong *)(param_1 + 0xc);
    if (((uVar4 != *(ulong *)(param_2 + 0xc)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 0xc),lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if (((*(byte *)(param_1 + 0x12) ^ *(byte *)(param_2 + 0x12)) & 1) != 0) {
    return false;
  }
  if (((*(byte *)((long)param_1 + 0x49) ^ *(byte *)((long)param_2 + 0x49)) & 1) != 0) {
    return false;
  }
  if (((*(byte *)((long)param_1 + 0x4a) ^ *(byte *)((long)param_2 + 0x4a)) & 1) != 0) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0x16);
  lVar2 = *(long *)(param_2 + 0x16);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = *(ulong *)(param_1 + 0x14);
    if (((uVar4 != *(ulong *)(param_2 + 0x14)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 0x14),lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  if (uVar4 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    func_0x00010142cfc4(uVar4,lVar2);
    if ((uVar4 & 1) == 0) {
      return false;
    }
  }
  if ((((((*(byte *)(param_1 + 0x1a) ^ *(byte *)(param_2 + 0x1a)) & 1) == 0) &&
       (param_1[0x1c] == param_2[0x1c])) && (param_1[0x1e] == param_2[0x1e])) &&
     (((*(byte *)(param_1 + 0x20) ^ *(byte *)(param_2 + 0x20)) & 1) == 0)) {
    lVar2 = *(long *)(param_2 + 0x24);
    if (*(long *)(param_1 + 0x24) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x22);
      if (((uVar4 != *(ulong *)(param_2 + 0x22)) || (*(long *)(param_1 + 0x24) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    lVar2 = *(long *)(param_2 + 0x28);
    if (*(long *)(param_1 + 0x28) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x26);
      if (((uVar4 != *(ulong *)(param_2 + 0x26)) || (*(long *)(param_1 + 0x28) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    lVar2 = *(long *)(param_2 + 0x2c);
    if (*(long *)(param_1 + 0x2c) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x2a);
      if (((uVar4 != *(ulong *)(param_2 + 0x2a)) || (*(long *)(param_1 + 0x2c) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    lVar2 = *(long *)(param_2 + 0x30);
    if (*(long *)(param_1 + 0x30) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x2e);
      if (((uVar4 != *(ulong *)(param_2 + 0x2e)) || (*(long *)(param_1 + 0x30) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    lVar2 = *(long *)(param_2 + 0x34);
    if (*(long *)(param_1 + 0x34) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x32);
      if (((uVar4 != *(ulong *)(param_2 + 0x32)) || (*(long *)(param_1 + 0x34) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    if (*(long *)(param_1 + 0x36) == *(long *)(param_2 + 0x36)) {
      lVar2 = *(long *)(param_2 + 0x3a);
      if (*(long *)(param_1 + 0x3a) == 0) {
        if (lVar2 != 0) {
          return false;
        }
      }
      else {
        if (lVar2 == 0) {
          return false;
        }
        uVar4 = *(ulong *)(param_1 + 0x38);
        if (((uVar4 != *(ulong *)(param_2 + 0x38)) || (*(long *)(param_1 + 0x3a) != lVar2)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar4 & 1) == 0)) {
          return false;
        }
      }
      if (((((*(byte *)(param_1 + 0x3c) ^ *(byte *)(param_2 + 0x3c)) & 1) == 0) &&
          (((*(byte *)((long)param_1 + 0xf1) ^ *(byte *)((long)param_2 + 0xf1)) & 1) == 0)) &&
         (((*(byte *)((long)param_1 + 0xf2) ^ *(byte *)((long)param_2 + 0xf2)) & 1) == 0)) {
        lVar2 = *(long *)(param_2 + 0x40);
        if (*(long *)(param_1 + 0x40) == 0) {
          if (lVar2 != 0) {
            return false;
          }
        }
        else {
          if (lVar2 == 0) {
            return false;
          }
          uVar4 = *(ulong *)(param_1 + 0x3e);
          if (((uVar4 != *(ulong *)(param_2 + 0x3e)) || (*(long *)(param_1 + 0x40) != lVar2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) {
            return false;
          }
        }
        lVar2 = *(long *)(param_2 + 0x44);
        if (*(long *)(param_1 + 0x44) == 0) {
          if (lVar2 != 0) {
            return false;
          }
        }
        else {
          if (lVar2 == 0) {
            return false;
          }
          uVar4 = *(ulong *)(param_1 + 0x42);
          if (((uVar4 != *(ulong *)(param_2 + 0x42)) || (*(long *)(param_1 + 0x44) != lVar2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) {
            return false;
          }
        }
        lVar2 = *(long *)(param_2 + 0x48);
        if (*(long *)(param_1 + 0x48) == 0) {
          if (lVar2 != 0) {
            return false;
          }
        }
        else {
          if (lVar2 == 0) {
            return false;
          }
          uVar4 = *(ulong *)(param_1 + 0x46);
          if (((uVar4 != *(ulong *)(param_2 + 0x46)) || (*(long *)(param_1 + 0x48) != lVar2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) {
            return false;
          }
        }
        lVar2 = *(long *)(param_2 + 0x4c);
        if (*(long *)(param_1 + 0x4c) == 0) {
          if (lVar2 != 0) {
            return false;
          }
        }
        else {
          if (lVar2 == 0) {
            return false;
          }
          uVar4 = *(ulong *)(param_1 + 0x4a);
          if (((uVar4 != *(ulong *)(param_2 + 0x4a)) || (*(long *)(param_1 + 0x4c) != lVar2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) {
            return false;
          }
        }
        uVar4 = *(ulong *)(param_1 + 0x4e);
        func_0x0001038a4f38(uVar4,*(undefined8 *)(param_2 + 0x4e));
        if ((uVar4 & 1) != 0) {
          bVar1 = *(byte *)(param_2 + 0x50);
          if (*(byte *)(param_1 + 0x50) == 2) {
            if (bVar1 == 2) {
LAB_10475c6f0:
              return param_1[0x56] == param_2[0x56];
            }
          }
          else if (bVar1 != 2) {
            uVar4 = (ulong)(*(byte *)(param_1 + 0x50) & 1);
            func_0x0001047592a4(uVar4,*(undefined8 *)(param_1 + 0x52),
                                *(undefined8 *)(param_1 + 0x54),bVar1 & 1,
                                *(undefined8 *)(param_2 + 0x52),*(undefined8 *)(param_2 + 0x54));
            if ((uVar4 & 1) != 0) goto LAB_10475c6f0;
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 10475a088; end: 10475a4bb;  */

void FUN_10475a088(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  lVar3 = unaff_x20[2];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[4];
  }
  else {
    uVar5 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[4];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[5]);
  lVar3 = unaff_x20[7];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[8]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 9) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x49) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x4a) & 1);
  lVar3 = unaff_x20[0xb];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0xc];
  }
  else {
    uVar5 = unaff_x20[10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0xc];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar4 = *(long *)(lVar3 + 0x10);
    __ss6HasherV8_combineyySuF(lVar4);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 0x28);
      do {
        uVar5 = puVar6[-1];
        uVar1 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        puVar6 = puVar6 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0xd) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[0xe]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xf]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x10) & 1);
  lVar3 = unaff_x20[0x12];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x14];
  }
  else {
    uVar5 = unaff_x20[0x11];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x14];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x16];
  }
  else {
    uVar5 = unaff_x20[0x13];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x16];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x18];
  }
  else {
    uVar5 = unaff_x20[0x15];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x18];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x1a];
  }
  else {
    uVar5 = unaff_x20[0x17];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x1a];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x19];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  __ss6HasherV8_combineyys6UInt64VF(unaff_x20[0x1b]);
  lVar3 = unaff_x20[0x1d];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x1c];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x1e) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0xf1) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0xf2) & 1);
  lVar3 = unaff_x20[0x20];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x22];
  }
  else {
    uVar5 = unaff_x20[0x1f];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x22];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x24];
  }
  else {
    uVar5 = unaff_x20[0x21];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x24];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x26];
  }
  else {
    uVar5 = unaff_x20[0x23];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x26];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x25];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  FUN_1046dbe6c(param_1,unaff_x20[0x27]);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  if (bVar2 == 2) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x29];
    uVar1 = unaff_x20[0x2a];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    __ss6HasherV8_combineyySuF(uVar5);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0x2b]);
  return;
}



/* Entry: 10475a4bc; end: 10475a4f7;  */

void FUN_10475a4bc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10475a088(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10475a4f8; end: 10475a4fb;  */

void FUN_10475a4f8(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  lVar3 = unaff_x20[2];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[4];
  }
  else {
    uVar5 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[4];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[5]);
  lVar3 = unaff_x20[7];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[8]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 9) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x49) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x4a) & 1);
  lVar3 = unaff_x20[0xb];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0xc];
  }
  else {
    uVar5 = unaff_x20[10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0xc];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar4 = *(long *)(lVar3 + 0x10);
    __ss6HasherV8_combineyySuF(lVar4);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 0x28);
      do {
        uVar5 = puVar6[-1];
        uVar1 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        puVar6 = puVar6 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0xd) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[0xe]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xf]);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x10) & 1);
  lVar3 = unaff_x20[0x12];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x14];
  }
  else {
    uVar5 = unaff_x20[0x11];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x14];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x16];
  }
  else {
    uVar5 = unaff_x20[0x13];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x16];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x18];
  }
  else {
    uVar5 = unaff_x20[0x15];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x18];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x1a];
  }
  else {
    uVar5 = unaff_x20[0x17];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x1a];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x19];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  __ss6HasherV8_combineyys6UInt64VF(unaff_x20[0x1b]);
  lVar3 = unaff_x20[0x1d];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x1c];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x1e) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0xf1) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0xf2) & 1);
  lVar3 = unaff_x20[0x20];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x22];
  }
  else {
    uVar5 = unaff_x20[0x1f];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x22];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x24];
  }
  else {
    uVar5 = unaff_x20[0x21];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x24];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[0x26];
  }
  else {
    uVar5 = unaff_x20[0x23];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
    lVar3 = unaff_x20[0x26];
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x25];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar3);
  }
  FUN_1046dbe6c(param_1,unaff_x20[0x27]);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  if (bVar2 == 2) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x29];
    uVar1 = unaff_x20[0x2a];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    __ss6HasherV8_combineyySuF(uVar5);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0x2b]);
  return;
}



/* Entry: 10475a4fc; end: 10475a6db;  */

void FUN_10475a4fc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10475a088(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10475a6dc; end: 10475a71b; +[SCAdTargetingParameters identity] */

void FUN_10475a6dc(void)

{
  if (lRam000000011308e9b0 != -1) {
    _swift_once(0x11308e9b0,0x10475a588);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138151e0);
  return;
}



/* Entry: 10475a71c; end: 10475a7bf; -[SCAdTargetingParameters withAdProductType:] */

void FUN_10475a71c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined8 auStack_300 [44];
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  auStack_300[0] = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475a7c0; end: 10475a8b3; -[SCAdTargetingParameters withInventoryFullyQualified:] */

void FUN_10475a7c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [8];
  long lStack_468;
  undefined8 uStack_460;
  undefined1 auStack_310 [8];
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_300;
  uStack_1b0 = uStack_308;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_468 = param_3;
  uStack_460 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475a8b4; end: 10475a9a7; -[SCAdTargetingParameters withInventoryType:] */

void FUN_10475a8b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [24];
  long lStack_458;
  undefined8 uStack_450;
  undefined1 auStack_310 [24];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_2f0;
  uStack_1b0 = uStack_2f8;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_458 = param_3;
  uStack_450 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475a9a8; end: 10475aa4b; -[SCAdTargetingParameters withInventorySubtype:] */

void FUN_10475a9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [40];
  undefined8 uStack_2d8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_2d8 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475aa4c; end: 10475ab3b; -[SCAdTargetingParameters withInventoryId:] */

void FUN_10475aa4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [48];
  long lStack_440;
  undefined8 uStack_438;
  undefined1 auStack_310 [48];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_2d8;
  uStack_1b0 = uStack_2e0;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_440 = param_3;
  uStack_438 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475ab3c; end: 10475abdf; -[SCAdTargetingParameters withAdPosition:] */

void FUN_10475ab3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [64];
  undefined8 uStack_2c0;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_2c0 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475abe0; end: 10475ac83; -[SCAdTargetingParameters withIsUnskippableAdSlot:] */

void FUN_10475abe0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [72];
  undefined1 uStack_2b8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_2b8 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475ac84; end: 10475ad27; -[SCAdTargetingParameters withCanSupportShowsSkippableAd:] */

void FUN_10475ac84(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [73];
  undefined1 uStack_2b7;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_2b7 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475ad28; end: 10475adcb; -[SCAdTargetingParameters withIsQATestGroup:] */

void FUN_10475ad28(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [74];
  undefined1 uStack_2b6;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_2b6 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475adcc; end: 10475aebb; -[SCAdTargetingParameters withDebugAdId:] */

void FUN_10475adcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [80];
  long lStack_420;
  undefined8 uStack_418;
  undefined1 auStack_310 [80];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_2b8;
  uStack_1b0 = uStack_2c0;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_420 = param_3;
  uStack_418 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475aebc; end: 10475af9f; -[SCAdTargetingParameters withDebugProductIds:] */

void FUN_10475aebc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5b8 [352];
  undefined1 auStack_458 [96];
  long lStack_3f8;
  undefined1 auStack_2f8 [96];
  undefined8 uStack_298;
  undefined8 uStack_198;
  undefined1 auStack_190 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_2f8);
  uStack_198 = uStack_298;
  func_0x00010475c708(&uStack_198,0x112d445a8,&UNK_10d990150);
  _memcpy(auStack_458,auStack_2f8,0x160);
  lStack_3f8 = param_3;
  _memcpy(auStack_190,auStack_458,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_190,auStack_5b8);
  puVar2 = auStack_190;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475afa0; end: 10475b043; -[SCAdTargetingParameters withIsDebugRequest:] */

void FUN_10475afa0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [104];
  undefined1 uStack_298;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_298 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b044; end: 10475b0e7; -[SCAdTargetingParameters withMockAdServerDebugAdType:] */

void FUN_10475b044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [112];
  undefined8 uStack_290;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_290 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b0e8; end: 10475b18b; -[SCAdTargetingParameters withMockAdServerAdRequestStatusCode:] */

void FUN_10475b0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [120];
  undefined8 uStack_288;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_288 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b18c; end: 10475b22f; -[SCAdTargetingParameters withMockAdServerForcePoliticalAd:] */

void FUN_10475b18c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [128];
  undefined1 uStack_280;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_280 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b230; end: 10475b323; -[SCAdTargetingParameters withChannel:] */

void FUN_10475b230(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [136];
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_310 [136];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_280;
  uStack_1b0 = uStack_288;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_3e8 = param_3;
  uStack_3e0 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b324; end: 10475b417; -[SCAdTargetingParameters withChannelId:] */

void FUN_10475b324(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [152];
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_310 [152];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_270;
  uStack_1b0 = uStack_278;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_3d8 = param_3;
  uStack_3d0 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b418; end: 10475b50f; -[SCAdTargetingParameters withProductType:] */

void FUN_10475b418(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [168];
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_310 [168];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_260;
  uStack_1b0 = uStack_268;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_3c8 = param_3;
  uStack_3c0 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b510; end: 10475b607; -[SCAdTargetingParameters withPublisher:] */

void FUN_10475b510(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [184];
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_310 [184];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_250;
  uStack_1b0 = uStack_258;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_3b8 = param_3;
  uStack_3b0 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b608; end: 10475b6ff; -[SCAdTargetingParameters withEditionId:] */

void FUN_10475b608(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [200];
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_310 [200];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_240;
  uStack_1b0 = uStack_248;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_3a8 = param_3;
  uStack_3a0 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b700; end: 10475b7a3; -[SCAdTargetingParameters withPublisherId:] */

void FUN_10475b700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [216];
  undefined8 uStack_228;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_228 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b7a4; end: 10475b897; -[SCAdTargetingParameters withPosterId:] */

void FUN_10475b7a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [224];
  long lStack_390;
  undefined8 uStack_388;
  undefined1 auStack_310 [224];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_228;
  uStack_1b0 = uStack_230;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_390 = param_3;
  uStack_388 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b898; end: 10475b93b; -[SCAdTargetingParameters withEnableDPAProcessing:] */

void FUN_10475b898(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [240];
  undefined1 uStack_210;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_210 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b93c; end: 10475b9df; -[SCAdTargetingParameters withEnableCommercialsExtendedPlay:] */

void FUN_10475b93c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [241];
  undefined1 uStack_20f;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_20f = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475b9e0; end: 10475ba83; -[SCAdTargetingParameters withEnableStoryAd:] */

void FUN_10475b9e0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [242];
  undefined1 uStack_20e;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_20e = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475ba84; end: 10475bb7b; -[SCAdTargetingParameters withSupportedAdTypes:] */

void FUN_10475ba84(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [248];
  long lStack_378;
  undefined8 uStack_370;
  undefined1 auStack_310 [248];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_210;
  uStack_1b0 = uStack_218;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_378 = param_3;
  uStack_370 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475bb7c; end: 10475bc77; -[SCAdTargetingParameters withSupportedDpaAdTypes:] */

void FUN_10475bb7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [264];
  long lStack_368;
  undefined8 uStack_360;
  undefined1 auStack_310 [264];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_200;
  uStack_1b0 = uStack_208;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_368 = param_3;
  uStack_360 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475bc78; end: 10475bd73; -[SCAdTargetingParameters withSkAdNetworkIdentifier:] */

void FUN_10475bc78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [280];
  long lStack_358;
  undefined8 uStack_350;
  undefined1 auStack_310 [280];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_1f0;
  uStack_1b0 = uStack_1f8;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_358 = param_3;
  uStack_350 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475bd74; end: 10475be6f; -[SCAdTargetingParameters withSkAdNetworkSourceAppIdentifier:] */

void FUN_10475bd74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5d0 [352];
  undefined1 auStack_470 [296];
  long lStack_348;
  undefined8 uStack_340;
  undefined1 auStack_310 [296];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_310);
  uStack_1a8 = uStack_1e0;
  uStack_1b0 = uStack_1e8;
  func_0x00010475c708(&uStack_1b0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_470,auStack_310,0x160);
  lStack_348 = param_3;
  uStack_340 = param_2;
  _memcpy(auStack_1a0,auStack_470,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5d0);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475be70; end: 10475bf5b; -[SCAdTargetingParameters withContentCategories:] */

void FUN_10475be70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_5c8 [352];
  undefined1 auStack_468 [312];
  undefined8 uStack_330;
  undefined1 auStack_308 [312];
  undefined8 uStack_1d0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  func_0x0001002ed07c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_308);
  uStack_1a8 = uStack_1d0;
  func_0x00010475c708(&uStack_1a8,0x112da1fa0,&UNK_10d945e90);
  _memcpy(auStack_468,auStack_308,0x160);
  uStack_330 = param_3;
  _memcpy(auStack_1a0,auStack_468,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_5c8);
  puVar3 = auStack_1a0;
  func_0x00010481e13c(puVar3);
  _objc_release(param_1);
  func_0x000102d12390(auStack_468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10475bf5c; end: 10475c037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10475bf5c(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined1 auStack_450 [352];
  undefined1 auStack_2f0 [320];
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_190 [352];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_104820bb8(auStack_2f0);
  if (param_1 == 0) {
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b0 = 2;
  }
  else {
    uStack_1b0 = (ulong)*(byte *)(param_1 + _DAT_113090d60);
    uStack_1a8 = *(undefined8 *)(param_1 + _DAT_113090d68);
    uStack_1a0 = *(undefined8 *)(param_1 + _DAT_113090d70);
  }
  _memcpy(auStack_190,auStack_2f0,0x160);
  _objc_allocWithZone(unaff_x20);
  func_0x000102d12354(auStack_190,auStack_450);
  puVar1 = auStack_190;
  func_0x00010481e13c(puVar1);
  func_0x000102d12390(auStack_2f0);
  return puVar1;
}



/* Entry: 10475c038; end: 10475c097; -[SCAdTargetingParameters withInventoryRequestDebugFlags:] */

void FUN_10475c038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10475bf5c(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10475c098; end: 10475c13b; -[SCAdTargetingParameters withAdViewLocation:] */

void FUN_10475c098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [344];
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [352];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104820bb8(auStack_300);
  uStack_1a8 = param_3;
  _memcpy(auStack_1a0,auStack_300,0x160);
  _objc_allocWithZone(uVar1);
  func_0x000102d12354(auStack_1a0,auStack_460);
  puVar2 = auStack_1a0;
  func_0x00010481e13c(puVar2);
  _objc_release(param_1);
  func_0x000102d12390(auStack_300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10475c13c; end: 10475c747;  */

bool FUN_10475c13c(int *param_1,int *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*param_1 != *param_2) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 4);
  lVar2 = *(long *)(param_2 + 4);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = *(ulong *)(param_1 + 2);
    if ((uVar4 != *(ulong *)(param_2 + 2) || lVar3 != lVar2) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 2),lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 8);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = *(ulong *)(param_1 + 6);
    if (((uVar4 != *(ulong *)(param_2 + 6)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 6),lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  if (param_1[10] != param_2[10]) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0xe);
  lVar2 = *(long *)(param_2 + 0xe);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = *(ulong *)(param_1 + 0xc);
    if (((uVar4 != *(ulong *)(param_2 + 0xc)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 0xc),lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if (((*(byte *)(param_1 + 0x12) ^ *(byte *)(param_2 + 0x12)) & 1) != 0) {
    return false;
  }
  if (((*(byte *)((long)param_1 + 0x49) ^ *(byte *)((long)param_2 + 0x49)) & 1) != 0) {
    return false;
  }
  if (((*(byte *)((long)param_1 + 0x4a) ^ *(byte *)((long)param_2 + 0x4a)) & 1) != 0) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0x16);
  lVar2 = *(long *)(param_2 + 0x16);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = *(ulong *)(param_1 + 0x14);
    if (((uVar4 != *(ulong *)(param_2 + 0x14)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 0x14),lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  if (uVar4 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    func_0x00010142cfc4(uVar4,lVar2);
    if ((uVar4 & 1) == 0) {
      return false;
    }
  }
  if ((((((*(byte *)(param_1 + 0x1a) ^ *(byte *)(param_2 + 0x1a)) & 1) == 0) &&
       (param_1[0x1c] == param_2[0x1c])) && (param_1[0x1e] == param_2[0x1e])) &&
     (((*(byte *)(param_1 + 0x20) ^ *(byte *)(param_2 + 0x20)) & 1) == 0)) {
    lVar2 = *(long *)(param_2 + 0x24);
    if (*(long *)(param_1 + 0x24) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x22);
      if (((uVar4 != *(ulong *)(param_2 + 0x22)) || (*(long *)(param_1 + 0x24) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    lVar2 = *(long *)(param_2 + 0x28);
    if (*(long *)(param_1 + 0x28) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x26);
      if (((uVar4 != *(ulong *)(param_2 + 0x26)) || (*(long *)(param_1 + 0x28) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    lVar2 = *(long *)(param_2 + 0x2c);
    if (*(long *)(param_1 + 0x2c) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x2a);
      if (((uVar4 != *(ulong *)(param_2 + 0x2a)) || (*(long *)(param_1 + 0x2c) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    lVar2 = *(long *)(param_2 + 0x30);
    if (*(long *)(param_1 + 0x30) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x2e);
      if (((uVar4 != *(ulong *)(param_2 + 0x2e)) || (*(long *)(param_1 + 0x30) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    lVar2 = *(long *)(param_2 + 0x34);
    if (*(long *)(param_1 + 0x34) == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + 0x32);
      if (((uVar4 != *(ulong *)(param_2 + 0x32)) || (*(long *)(param_1 + 0x34) != lVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return false;
      }
    }
    if (*(long *)(param_1 + 0x36) == *(long *)(param_2 + 0x36)) {
      lVar2 = *(long *)(param_2 + 0x3a);
      if (*(long *)(param_1 + 0x3a) == 0) {
        if (lVar2 != 0) {
          return false;
        }
      }
      else {
        if (lVar2 == 0) {
          return false;
        }
        uVar4 = *(ulong *)(param_1 + 0x38);
        if (((uVar4 != *(ulong *)(param_2 + 0x38)) || (*(long *)(param_1 + 0x3a) != lVar2)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar4 & 1) == 0)) {
          return false;
        }
      }
      if (((((*(byte *)(param_1 + 0x3c) ^ *(byte *)(param_2 + 0x3c)) & 1) == 0) &&
          (((*(byte *)((long)param_1 + 0xf1) ^ *(byte *)((long)param_2 + 0xf1)) & 1) == 0)) &&
         (((*(byte *)((long)param_1 + 0xf2) ^ *(byte *)((long)param_2 + 0xf2)) & 1) == 0)) {
        lVar2 = *(long *)(param_2 + 0x40);
        if (*(long *)(param_1 + 0x40) == 0) {
          if (lVar2 != 0) {
            return false;
          }
        }
        else {
          if (lVar2 == 0) {
            return false;
          }
          uVar4 = *(ulong *)(param_1 + 0x3e);
          if (((uVar4 != *(ulong *)(param_2 + 0x3e)) || (*(long *)(param_1 + 0x40) != lVar2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) {
            return false;
          }
        }
        lVar2 = *(long *)(param_2 + 0x44);
        if (*(long *)(param_1 + 0x44) == 0) {
          if (lVar2 != 0) {
            return false;
          }
        }
        else {
          if (lVar2 == 0) {
            return false;
          }
          uVar4 = *(ulong *)(param_1 + 0x42);
          if (((uVar4 != *(ulong *)(param_2 + 0x42)) || (*(long *)(param_1 + 0x44) != lVar2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) {
            return false;
          }
        }
        lVar2 = *(long *)(param_2 + 0x48);
        if (*(long *)(param_1 + 0x48) == 0) {
          if (lVar2 != 0) {
            return false;
          }
        }
        else {
          if (lVar2 == 0) {
            return false;
          }
          uVar4 = *(ulong *)(param_1 + 0x46);
          if (((uVar4 != *(ulong *)(param_2 + 0x46)) || (*(long *)(param_1 + 0x48) != lVar2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) {
            return false;
          }
        }
        lVar2 = *(long *)(param_2 + 0x4c);
        if (*(long *)(param_1 + 0x4c) == 0) {
          if (lVar2 != 0) {
            return false;
          }
        }
        else {
          if (lVar2 == 0) {
            return false;
          }
          uVar4 = *(ulong *)(param_1 + 0x4a);
          if (((uVar4 != *(ulong *)(param_2 + 0x4a)) || (*(long *)(param_1 + 0x4c) != lVar2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) {
            return false;
          }
        }
        uVar4 = *(ulong *)(param_1 + 0x4e);
        func_0x0001038a4f38(uVar4,*(undefined8 *)(param_2 + 0x4e));
        if ((uVar4 & 1) != 0) {
          bVar1 = *(byte *)(param_2 + 0x50);
          if (*(byte *)(param_1 + 0x50) == 2) {
            if (bVar1 == 2) {
LAB_10475c6f0:
              return param_1[0x56] == param_2[0x56];
            }
          }
          else if (bVar1 != 2) {
            uVar4 = (ulong)(*(byte *)(param_1 + 0x50) & 1);
            func_0x0001047592a4(uVar4,*(undefined8 *)(param_1 + 0x52),
                                *(undefined8 *)(param_1 + 0x54),bVar1 & 1,
                                *(undefined8 *)(param_2 + 0x52),*(undefined8 *)(param_2 + 0x54));
            if ((uVar4 & 1) != 0) goto LAB_10475c6f0;
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 10475c748; end: 10475c74b;  */

void FUN_10475c748(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33c98;
  _swift_getWitnessTable(&UNK_10dd33c98,&UNK_1107a01e8);
  puRam000000011308e9b8 = puVar1;
  return;
}



/* Entry: 10475c74c; end: 10475c78b;  */

void FUN_10475c74c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33c98;
  _swift_getWitnessTable(&UNK_10dd33c98,&UNK_1107a01e8);
  puRam000000011308e9b8 = puVar1;
  return;
}



/* Entry: 10475c78c; end: 10475c84f;  */

long FUN_10475c78c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10475c850; end: 10475ca0f;  */

undefined8 * FUN_10475c850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  uVar9 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar9;
  uVar8 = param_2[4];
  param_1[4] = uVar8;
  uVar9 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar9;
  uVar11 = param_2[7];
  uVar9 = param_2[8];
  param_1[7] = uVar11;
  param_1[8] = uVar9;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  uVar9 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar9;
  uVar10 = param_2[0xc];
  param_1[0xc] = uVar10;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar14 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar14;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar14 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar14;
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar1;
  uVar2 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar2;
  uVar3 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar3;
  uVar4 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = uVar4;
  uVar15 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar15;
  uVar12 = param_2[0x1d];
  param_1[0x1d] = uVar12;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((long)param_1 + 0xf1) = *(undefined1 *)((long)param_2 + 0xf1);
  *(undefined1 *)((long)param_1 + 0xf2) = *(undefined1 *)((long)param_2 + 0xf2);
  uVar15 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar15;
  uVar5 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar5;
  uVar6 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar6;
  uVar7 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar7;
  uVar13 = param_2[0x27];
  param_1[0x27] = uVar13;
  uVar16 = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar16;
  uVar16 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar16;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar13);
  return param_1;
}



/* Entry: 10475ca10; end: 10475ccb3;  */

undefined8 * FUN_10475ca10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0x11] = param_2[0x11];
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x13] = param_2[0x13];
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x15] = param_2[0x15];
  uVar1 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x17] = param_2[0x17];
  uVar1 = param_1[0x18];
  param_1[0x18] = param_2[0x18];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x19] = param_2[0x19];
  uVar1 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_2[0x1d];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((long)param_1 + 0xf1) = *(undefined1 *)((long)param_2 + 0xf1);
  *(undefined1 *)((long)param_1 + 0xf2) = *(undefined1 *)((long)param_2 + 0xf2);
  param_1[0x1f] = param_2[0x1f];
  uVar1 = param_1[0x20];
  param_1[0x20] = param_2[0x20];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x21] = param_2[0x21];
  uVar1 = param_1[0x22];
  param_1[0x22] = param_2[0x22];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x23] = param_2[0x23];
  uVar1 = param_1[0x24];
  param_1[0x24] = param_2[0x24];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x25] = param_2[0x25];
  uVar1 = param_1[0x26];
  param_1[0x26] = param_2[0x26];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x27];
  param_1[0x27] = param_2[0x27];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x29];
  uVar1 = param_2[0x28];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x29] = uVar2;
  param_1[0x28] = uVar1;
  param_1[0x2b] = param_2[0x2b];
  return param_1;
}



/* Entry: 10475ccb4; end: 10475ce4f;  */

undefined8 * FUN_10475ccb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  param_1[10] = param_2[10];
  _swift_bridgeObjectRelease(param_1[0xb]);
  uVar1 = param_1[0xc];
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar1 = param_2[0x12];
  uVar2 = param_1[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x14];
  uVar2 = param_1[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x16];
  uVar2 = param_1[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x18];
  uVar2 = param_1[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x1a];
  uVar2 = param_1[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_2[0x1d];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((long)param_1 + 0xf1) = *(undefined1 *)((long)param_2 + 0xf1);
  *(undefined1 *)((long)param_1 + 0xf2) = *(undefined1 *)((long)param_2 + 0xf2);
  uVar1 = param_2[0x20];
  uVar2 = param_1[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x22];
  uVar2 = param_1[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x24];
  uVar2 = param_1[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x25] = param_2[0x25];
  _swift_bridgeObjectRelease(param_1[0x26]);
  uVar1 = param_1[0x27];
  uVar2 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar1;
  uVar1 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar1;
  return param_1;
}



/* Entry: 10475ce50; end: 10475cf43;  */

int FUN_10475ce50(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x58] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x4e);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10475cf44; end: 10475cf7b;  */

void FUN_10475cf44(undefined8 param_1)

{
  if (lRam000000011308ea20 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a7a0);
  return;
}



/* Entry: 10475cf7c; end: 10475cfc3;  */

undefined8 FUN_10475cf7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10475cfc4; end: 10475cfc7;  */

undefined8 FUN_10475cfc4(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lStack_1830;
  undefined1 auStack_1828 [608];
  undefined1 auStack_15c8 [608];
  undefined1 auStack_1368 [608];
  undefined1 auStack_1108 [1216];
  undefined1 auStack_c48 [608];
  undefined1 auStack_9e8 [608];
  undefined1 auStack_788 [608];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  FUN_104739264();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar7 = auStack_1828 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar12 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)puVar7 - extraout_x8_00;
  lVar12 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined1 *)(uVar13 - extraout_x8_01);
  uVar10 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar10 != 0) {
      return 0;
    }
  }
  else {
    if (uVar10 == 0) {
      return 0;
    }
    uVar4 = *param_1;
    if (((uVar4 != *param_2) || (param_1[1] != uVar10)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar10 = param_1[2];
  func_0x000100e25fcc(uVar10,param_1[3],param_2[2],param_2[3]);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  lVar5 = 0;
  FUN_10475cf44();
  iVar2 = *(int *)(lVar5 + 0x18);
  iVar1 = *(int *)(lVar12 + 0x30);
  lStack_1830 = lVar5;
  FUN_10475cf7c((long)param_1 + (long)iVar2,puVar11,0x112db3ce0,&UNK_10d95e240);
  FUN_10475cf7c((long)param_2 + (long)iVar2,puVar11 + iVar1,0x112db3ce0,&UNK_10d95e240);
  pcVar15 = *(code **)(lVar14 + 0x30);
  puVar6 = puVar11;
  (*pcVar15)(puVar11,1,lVar3);
  if ((int)puVar6 == 1) {
    puVar7 = puVar11 + iVar1;
    (*pcVar15)(puVar7,1,lVar3);
    if ((int)puVar7 != 1) {
LAB_10475d424:
      uVar8 = 0x112db3cb8;
      puVar9 = &UNK_10dd33f20;
      goto LAB_10475d600;
    }
    func_0x000104760ee4(puVar11,0x112db3ce0,&UNK_10d95e240);
  }
  else {
    FUN_10475cf7c(puVar11,uVar13,0x112db3ce0,&UNK_10d95e240);
    puVar6 = puVar11 + iVar1;
    (*pcVar15)(puVar6,1,lVar3);
    if ((int)puVar6 == 1) {
      FUN_104760138(uVar13,FUN_104739264);
      goto LAB_10475d424;
    }
    func_0x0001034a9054(puVar11 + iVar1,puVar7);
    uVar10 = uVar13;
    FUN_1047397c8(uVar13,puVar7);
    FUN_104760138(puVar7,FUN_104739264);
    FUN_104760138(uVar13,FUN_104739264);
    func_0x000104760ee4(puVar11,0x112db3ce0,&UNK_10d95e240);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  lVar12 = (long)*(int *)(lStack_1830 + 0x1c);
  _memcpy(auStack_788,(long)param_1 + lVar12,0x260);
  _memcpy(auStack_c48,(long)param_1 + lVar12,0x260);
  _memcpy(auStack_528,(long)param_2 + lVar12,0x260);
  _memcpy(auStack_9e8,(long)param_2 + lVar12,0x260);
  iVar2 = (int)auStack_c48;
  func_0x0001015538ec();
  if (iVar2 == 1) {
    iVar2 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar2 == 1) {
      _memcpy(auStack_1108,auStack_c48,0x260);
      FUN_10475cf7c(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      FUN_10475cf7c(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104760ee4(auStack_1108,0x112db3ce8,&UNK_10d98ff60);
      return 1;
    }
  }
  else {
    _memcpy(auStack_1368,auStack_c48,0x260);
    iVar2 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar2 != 1) {
      _memcpy(auStack_15c8,auStack_9e8,0x260);
      _memcpy(auStack_1108,auStack_9e8,0x260);
      _memcpy(auStack_2c8,auStack_1368,0x260);
      FUN_10475cf7c(auStack_788,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      FUN_10475cf7c(auStack_528,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      puVar11 = auStack_2c8;
      func_0x0001047a725c(puVar11,auStack_1108);
      func_0x000104760ee4(auStack_15c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104760ee4(auStack_c48,0x112db3ce8,&UNK_10d98ff60);
      if (((ulong)puVar11 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  _memcpy(auStack_1108,auStack_c48,0x4c0);
  FUN_10475cf7c(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  FUN_10475cf7c(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  uVar8 = 0x112db3d20;
  puVar9 = &UNK_10dd318e0;
  puVar11 = auStack_1108;
LAB_10475d600:
  func_0x000104760ee4(puVar11,uVar8,puVar9);
  return 0;
}



/* Entry: 10475cfc8; end: 10475d0bb;  */

void FUN_10475cfc8(undefined8 param_1)

{
  int iVar1;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_500 [608];
  undefined1 auStack_2a0 [608];
  
  iVar1 = (int)auStack_500;
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar2);
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  lVar2 = 0;
  FUN_10475cf44();
  func_0x0001046cec20((long)*(int *)(lVar2 + 0x18),param_1);
  _memcpy(auStack_500,(long)unaff_x20 + (long)*(int *)(lVar2 + 0x1c),0x260);
  func_0x0001015538ec();
  if (iVar1 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2a0,auStack_500,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(param_1);
  }
  return;
}



/* Entry: 10475d0bc; end: 10475d1bf;  */

void FUN_10475d0bc(void)

{
  int iVar1;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_548 [608];
  undefined1 auStack_2e8 [72];
  undefined1 auStack_2a0 [608];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_2e8,0);
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_2e8,uVar3,lVar2);
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(auStack_2e8,unaff_x20[2],unaff_x20[3]);
  lVar2 = 0;
  FUN_10475cf44();
  func_0x0001046cec20((long)*(int *)(lVar2 + 0x18),auStack_2e8);
  _memcpy(auStack_548,(long)unaff_x20 + (long)*(int *)(lVar2 + 0x1c),0x260);
  iVar1 = (int)auStack_548;
  func_0x0001015538ec();
  if (iVar1 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2a0,auStack_548,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(auStack_2e8);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10475d1c0; end: 10475d1c7;  */

void FUN_10475d1c0(void)

{
  int iVar1;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_548 [608];
  undefined1 auStack_2e8 [72];
  undefined1 auStack_2a0 [608];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_2e8,0);
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_2e8,uVar3,lVar2);
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(auStack_2e8,unaff_x20[2],unaff_x20[3]);
  lVar2 = 0;
  FUN_10475cf44();
  func_0x0001046cec20((long)*(int *)(lVar2 + 0x18),auStack_2e8);
  _memcpy(auStack_548,(long)unaff_x20 + (long)*(int *)(lVar2 + 0x1c),0x260);
  iVar1 = (int)auStack_548;
  func_0x0001015538ec();
  if (iVar1 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2a0,auStack_548,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(auStack_2e8);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10475d1c8; end: 10475d1ff;  */

void FUN_10475d1c8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10475cfc8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10475d200; end: 10475d203;  */

undefined8 FUN_10475d200(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lStack_1830;
  undefined1 auStack_1828 [608];
  undefined1 auStack_15c8 [608];
  undefined1 auStack_1368 [608];
  undefined1 auStack_1108 [1216];
  undefined1 auStack_c48 [608];
  undefined1 auStack_9e8 [608];
  undefined1 auStack_788 [608];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  FUN_104739264();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar7 = auStack_1828 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar12 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)puVar7 - extraout_x8_00;
  lVar12 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined1 *)(uVar13 - extraout_x8_01);
  uVar10 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar10 != 0) {
      return 0;
    }
  }
  else {
    if (uVar10 == 0) {
      return 0;
    }
    uVar4 = *param_1;
    if (((uVar4 != *param_2) || (param_1[1] != uVar10)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar10 = param_1[2];
  func_0x000100e25fcc(uVar10,param_1[3],param_2[2],param_2[3]);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  lVar5 = 0;
  FUN_10475cf44();
  iVar2 = *(int *)(lVar5 + 0x18);
  iVar1 = *(int *)(lVar12 + 0x30);
  lStack_1830 = lVar5;
  FUN_10475cf7c((long)param_1 + (long)iVar2,puVar11,0x112db3ce0,&UNK_10d95e240);
  FUN_10475cf7c((long)param_2 + (long)iVar2,puVar11 + iVar1,0x112db3ce0,&UNK_10d95e240);
  pcVar15 = *(code **)(lVar14 + 0x30);
  puVar6 = puVar11;
  (*pcVar15)(puVar11,1,lVar3);
  if ((int)puVar6 == 1) {
    puVar7 = puVar11 + iVar1;
    (*pcVar15)(puVar7,1,lVar3);
    if ((int)puVar7 != 1) {
LAB_10475d424:
      uVar8 = 0x112db3cb8;
      puVar9 = &UNK_10dd33f20;
      goto LAB_10475d600;
    }
    func_0x000104760ee4(puVar11,0x112db3ce0,&UNK_10d95e240);
  }
  else {
    FUN_10475cf7c(puVar11,uVar13,0x112db3ce0,&UNK_10d95e240);
    puVar6 = puVar11 + iVar1;
    (*pcVar15)(puVar6,1,lVar3);
    if ((int)puVar6 == 1) {
      FUN_104760138(uVar13,FUN_104739264);
      goto LAB_10475d424;
    }
    func_0x0001034a9054(puVar11 + iVar1,puVar7);
    uVar10 = uVar13;
    FUN_1047397c8(uVar13,puVar7);
    FUN_104760138(puVar7,FUN_104739264);
    FUN_104760138(uVar13,FUN_104739264);
    func_0x000104760ee4(puVar11,0x112db3ce0,&UNK_10d95e240);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  lVar12 = (long)*(int *)(lStack_1830 + 0x1c);
  _memcpy(auStack_788,(long)param_1 + lVar12,0x260);
  _memcpy(auStack_c48,(long)param_1 + lVar12,0x260);
  _memcpy(auStack_528,(long)param_2 + lVar12,0x260);
  _memcpy(auStack_9e8,(long)param_2 + lVar12,0x260);
  iVar2 = (int)auStack_c48;
  func_0x0001015538ec();
  if (iVar2 == 1) {
    iVar2 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar2 == 1) {
      _memcpy(auStack_1108,auStack_c48,0x260);
      FUN_10475cf7c(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      FUN_10475cf7c(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104760ee4(auStack_1108,0x112db3ce8,&UNK_10d98ff60);
      return 1;
    }
  }
  else {
    _memcpy(auStack_1368,auStack_c48,0x260);
    iVar2 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar2 != 1) {
      _memcpy(auStack_15c8,auStack_9e8,0x260);
      _memcpy(auStack_1108,auStack_9e8,0x260);
      _memcpy(auStack_2c8,auStack_1368,0x260);
      FUN_10475cf7c(auStack_788,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      FUN_10475cf7c(auStack_528,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      puVar11 = auStack_2c8;
      func_0x0001047a725c(puVar11,auStack_1108);
      func_0x000104760ee4(auStack_15c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104760ee4(auStack_c48,0x112db3ce8,&UNK_10d98ff60);
      if (((ulong)puVar11 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  _memcpy(auStack_1108,auStack_c48,0x4c0);
  FUN_10475cf7c(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  FUN_10475cf7c(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  uVar8 = 0x112db3d20;
  puVar9 = &UNK_10dd318e0;
  puVar11 = auStack_1108;
LAB_10475d600:
  func_0x000104760ee4(puVar11,uVar8,puVar9);
  return 0;
}



/* Entry: 10475d204; end: 10475d6db;  */

undefined8 FUN_10475d204(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lStack_1830;
  undefined1 auStack_1828 [608];
  undefined1 auStack_15c8 [608];
  undefined1 auStack_1368 [608];
  undefined1 auStack_1108 [1216];
  undefined1 auStack_c48 [608];
  undefined1 auStack_9e8 [608];
  undefined1 auStack_788 [608];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  FUN_104739264();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar7 = auStack_1828 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar12 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)puVar7 - extraout_x8_00;
  lVar12 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined1 *)(uVar13 - extraout_x8_01);
  uVar10 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar10 != 0) {
      return 0;
    }
  }
  else {
    if (uVar10 == 0) {
      return 0;
    }
    uVar4 = *param_1;
    if (((uVar4 != *param_2) || (param_1[1] != uVar10)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar10 = param_1[2];
  func_0x000100e25fcc(uVar10,param_1[3],param_2[2],param_2[3]);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  lVar5 = 0;
  FUN_10475cf44();
  iVar2 = *(int *)(lVar5 + 0x18);
  iVar1 = *(int *)(lVar12 + 0x30);
  lStack_1830 = lVar5;
  FUN_10475cf7c((long)param_1 + (long)iVar2,puVar11,0x112db3ce0,&UNK_10d95e240);
  FUN_10475cf7c((long)param_2 + (long)iVar2,puVar11 + iVar1,0x112db3ce0,&UNK_10d95e240);
  pcVar15 = *(code **)(lVar14 + 0x30);
  puVar6 = puVar11;
  (*pcVar15)(puVar11,1,lVar3);
  if ((int)puVar6 == 1) {
    puVar7 = puVar11 + iVar1;
    (*pcVar15)(puVar7,1,lVar3);
    if ((int)puVar7 != 1) {
LAB_10475d424:
      uVar8 = 0x112db3cb8;
      puVar9 = &UNK_10dd33f20;
      goto LAB_10475d600;
    }
    func_0x000104760ee4(puVar11,0x112db3ce0,&UNK_10d95e240);
  }
  else {
    FUN_10475cf7c(puVar11,uVar13,0x112db3ce0,&UNK_10d95e240);
    puVar6 = puVar11 + iVar1;
    (*pcVar15)(puVar6,1,lVar3);
    if ((int)puVar6 == 1) {
      FUN_104760138(uVar13,FUN_104739264);
      goto LAB_10475d424;
    }
    func_0x0001034a9054(puVar11 + iVar1,puVar7);
    uVar10 = uVar13;
    FUN_1047397c8(uVar13,puVar7);
    FUN_104760138(puVar7,FUN_104739264);
    FUN_104760138(uVar13,FUN_104739264);
    func_0x000104760ee4(puVar11,0x112db3ce0,&UNK_10d95e240);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  lVar12 = (long)*(int *)(lStack_1830 + 0x1c);
  _memcpy(auStack_788,(long)param_1 + lVar12,0x260);
  _memcpy(auStack_c48,(long)param_1 + lVar12,0x260);
  _memcpy(auStack_528,(long)param_2 + lVar12,0x260);
  _memcpy(auStack_9e8,(long)param_2 + lVar12,0x260);
  iVar2 = (int)auStack_c48;
  func_0x0001015538ec();
  if (iVar2 == 1) {
    iVar2 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar2 == 1) {
      _memcpy(auStack_1108,auStack_c48,0x260);
      FUN_10475cf7c(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      FUN_10475cf7c(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104760ee4(auStack_1108,0x112db3ce8,&UNK_10d98ff60);
      return 1;
    }
  }
  else {
    _memcpy(auStack_1368,auStack_c48,0x260);
    iVar2 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar2 != 1) {
      _memcpy(auStack_15c8,auStack_9e8,0x260);
      _memcpy(auStack_1108,auStack_9e8,0x260);
      _memcpy(auStack_2c8,auStack_1368,0x260);
      FUN_10475cf7c(auStack_788,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      FUN_10475cf7c(auStack_528,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      puVar11 = auStack_2c8;
      func_0x0001047a725c(puVar11,auStack_1108);
      func_0x000104760ee4(auStack_15c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104760ee4(auStack_c48,0x112db3ce8,&UNK_10d98ff60);
      if (((ulong)puVar11 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  _memcpy(auStack_1108,auStack_c48,0x4c0);
  FUN_10475cf7c(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  FUN_10475cf7c(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  uVar8 = 0x112db3d20;
  puVar9 = &UNK_10dd318e0;
  puVar11 = auStack_1108;
LAB_10475d600:
  func_0x000104760ee4(puVar11,uVar8,puVar9);
  return 0;
}



/* Entry: 10475d6dc; end: 10475d6df;  */

void FUN_10475d6dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e9c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10475cf44(0xff);
  puVar2 = &UNK_10dd33d20;
  _swift_getWitnessTable(&UNK_10dd33d20,uVar1);
  puRam000000011308e9c0 = puVar2;
  return;
}



/* Entry: 10475d6e0; end: 10475d723;  */

void FUN_10475d6e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e9c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10475cf44(0xff);
  puVar2 = &UNK_10dd33d20;
  _swift_getWitnessTable(&UNK_10dd33d20,uVar1);
  puRam000000011308e9c0 = puVar2;
  return;
}



/* Entry: 10475d724; end: 10475debb;  */

long * FUN_10475d724(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint5 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar9;
    lVar9 = param_2[2];
    lVar15 = param_2[3];
    _swift_bridgeObjectRetain();
    func_0x00010006c00c(lVar9,lVar15);
    param_1[2] = lVar9;
    param_1[3] = lVar15;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar9 = 0;
    FUN_104739264();
    lVar15 = *(long *)(lVar9 + -8);
    puVar10 = puVar2;
    (**(code **)(lVar15 + 0x30))(puVar2,1,lVar9);
    if ((int)puVar10 == 0) {
      uVar18 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar18;
      uVar18 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar18;
      uVar19 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar19;
      uVar21 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar21;
      puVar1[8] = puVar2[8];
      lVar20 = puVar2[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar21);
      if (lVar20 == 1) {
        uVar18 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar18;
        uVar18 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar18;
        uVar18 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar18;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar11 = puVar2[0xb];
        if (lVar11 == 1) {
          uVar18 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar18;
          uVar18 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar18;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar18 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar18;
          uVar18 = puVar2[0xc];
          uVar19 = puVar2[0xd];
          puVar1[0xb] = lVar11;
          puVar1[0xc] = uVar18;
          puVar1[0xd] = uVar19;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar19);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar20;
        _swift_bridgeObjectRetain(lVar20);
      }
      uVar18 = puVar2[0x11];
      puVar1[0x10] = puVar2[0x10];
      puVar1[0x11] = uVar18;
      uVar19 = puVar2[0x13];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x13] = uVar19;
      lVar20 = (long)puVar1 + (long)*(int *)(lVar9 + 0x34);
      lVar11 = (long)puVar2 + (long)*(int *)(lVar9 + 0x34);
      lVar12 = 0;
      FUN_104742f28();
      lVar14 = *(long *)(lVar12 + -8);
      pcVar16 = *(code **)(lVar14 + 0x30);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar19);
      lVar13 = lVar11;
      (*pcVar16)(lVar11,1,lVar12);
      if ((int)lVar13 == 0) {
        lVar13 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar13 + -8) + 0x10))(lVar20,lVar11,lVar13);
        puVar10 = (undefined8 *)(lVar20 + *(int *)(lVar12 + 0x14));
        puVar3 = (undefined8 *)(lVar11 + *(int *)(lVar12 + 0x14));
        uVar18 = puVar3[1];
        *puVar10 = *puVar3;
        puVar10[1] = uVar18;
        *(undefined1 *)(lVar20 + *(int *)(lVar12 + 0x18)) =
             *(undefined1 *)(lVar11 + *(int *)(lVar12 + 0x18));
        *(undefined1 *)(lVar20 + *(int *)(lVar12 + 0x1c)) =
             *(undefined1 *)(lVar11 + *(int *)(lVar12 + 0x1c));
        puVar10 = (undefined8 *)(lVar20 + *(int *)(lVar12 + 0x20));
        puVar3 = (undefined8 *)(lVar11 + *(int *)(lVar12 + 0x20));
        *puVar10 = *puVar3;
        *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)(lVar20 + *(int *)(lVar12 + 0x24)) =
             *(undefined1 *)(lVar11 + *(int *)(lVar12 + 0x24));
        pcVar16 = *(code **)(lVar14 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar16)(lVar20,0,1,lVar12);
      }
      else {
        lVar13 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar20,lVar11,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
      uVar18 = *puVar2;
      puVar10[1] = puVar2[1];
      *puVar10 = uVar18;
      uVar18 = *(undefined8 *)((long)puVar2 + 9);
      *(undefined8 *)((long)puVar10 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
      *(undefined8 *)((long)puVar10 + 9) = uVar18;
      (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar9);
    }
    else {
      lVar9 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    if (puVar2[0x18] == 1) {
      _memcpy(puVar1,puVar2,0x260);
    }
    else {
      lVar9 = puVar2[1];
      if (lVar9 == 1) {
        uVar18 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar18;
        puVar1[2] = puVar2[2];
      }
      else {
        *puVar1 = *puVar2;
        puVar1[1] = lVar9;
        uVar18 = puVar2[2];
        puVar1[2] = uVar18;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
      }
      uVar17 = puVar2[5];
      if (uVar17 >> 0x3c == 0xb) {
        uVar18 = puVar2[3];
        puVar1[4] = puVar2[4];
        puVar1[3] = uVar18;
        puVar1[5] = puVar2[5];
      }
      else {
        puVar1[3] = puVar2[3];
        if (uVar17 >> 0x3c < 0xf) {
          uVar18 = puVar2[4];
          func_0x00010006c00c(uVar18,uVar17);
          puVar1[4] = uVar18;
          puVar1[5] = uVar17;
        }
        else {
          uVar18 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar18;
        }
      }
      *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(puVar2 + 6);
      puVar1[7] = puVar2[7];
      lVar9 = puVar2[9];
      if (lVar9 == 1) {
        uVar18 = puVar2[0x10];
        uVar21 = puVar2[0x13];
        uVar19 = puVar2[0x12];
        puVar1[0x11] = puVar2[0x11];
        puVar1[0x10] = uVar18;
        puVar1[0x13] = uVar21;
        puVar1[0x12] = uVar19;
        uVar18 = puVar2[0x14];
        puVar1[0x15] = puVar2[0x15];
        puVar1[0x14] = uVar18;
        uVar18 = *(undefined8 *)((long)puVar2 + 0xaa);
        *(undefined8 *)((long)puVar1 + 0xb2) = *(undefined8 *)((long)puVar2 + 0xb2);
        *(undefined8 *)((long)puVar1 + 0xaa) = uVar18;
        uVar18 = puVar2[8];
        uVar21 = puVar2[0xb];
        uVar19 = puVar2[10];
        puVar1[9] = puVar2[9];
        puVar1[8] = uVar18;
        puVar1[0xb] = uVar21;
        puVar1[10] = uVar19;
        uVar18 = puVar2[0xc];
        uVar21 = puVar2[0xf];
        uVar19 = puVar2[0xe];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xc] = uVar18;
        puVar1[0xf] = uVar21;
        puVar1[0xe] = uVar19;
      }
      else {
        puVar1[8] = puVar2[8];
        puVar1[9] = lVar9;
        uVar4 = puVar2[0xb];
        puVar1[10] = puVar2[10];
        puVar1[0xb] = uVar4;
        uVar18 = puVar2[0xc];
        uVar19 = puVar2[0xd];
        puVar1[0xc] = uVar18;
        puVar1[0xd] = uVar19;
        uVar19 = puVar2[0xe];
        uVar21 = puVar2[0xf];
        puVar1[0xe] = uVar19;
        puVar1[0xf] = uVar21;
        uVar21 = puVar2[0x10];
        uVar5 = puVar2[0x11];
        puVar1[0x10] = uVar21;
        puVar1[0x11] = uVar5;
        lVar9 = puVar2[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar5);
        if (lVar9 == 1) {
          uVar18 = puVar2[0x12];
          puVar1[0x13] = puVar2[0x13];
          puVar1[0x12] = uVar18;
        }
        else {
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x13] = lVar9;
          _swift_bridgeObjectRetain(lVar9);
        }
        uVar18 = puVar2[0x15];
        puVar1[0x14] = puVar2[0x14];
        puVar1[0x15] = uVar18;
        puVar1[0x16] = puVar2[0x16];
        *(undefined2 *)(puVar1 + 0x17) = *(undefined2 *)(puVar2 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar1 + 0xba) = *(undefined2 *)((long)puVar2 + 0xba);
      if (puVar2[0x18] == 0) {
        lVar9 = puVar2[0x18];
        uVar19 = puVar2[0x1b];
        uVar18 = puVar2[0x1a];
        puVar1[0x19] = puVar2[0x19];
        puVar1[0x18] = lVar9;
        puVar1[0x1b] = uVar19;
        puVar1[0x1a] = uVar18;
        uVar18 = puVar2[0x1c];
        uVar21 = puVar2[0x1f];
        uVar19 = puVar2[0x1e];
        puVar1[0x1d] = puVar2[0x1d];
        puVar1[0x1c] = uVar18;
        puVar1[0x1f] = uVar21;
        puVar1[0x1e] = uVar19;
      }
      else {
        puVar1[0x18] = puVar2[0x18];
        uVar18 = puVar2[0x19];
        puVar1[0x1a] = puVar2[0x1a];
        puVar1[0x19] = uVar18;
        uVar18 = puVar2[0x1c];
        puVar1[0x1b] = puVar2[0x1b];
        puVar1[0x1c] = uVar18;
        lVar9 = puVar2[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
        if (lVar9 == 0) {
          uVar18 = puVar2[0x1d];
          puVar1[0x1e] = puVar2[0x1e];
          puVar1[0x1d] = uVar18;
          puVar1[0x1f] = puVar2[0x1f];
        }
        else {
          puVar1[0x1d] = puVar2[0x1d];
          puVar1[0x1e] = lVar9;
          uVar18 = puVar2[0x1f];
          puVar1[0x1f] = uVar18;
          _swift_bridgeObjectRetain(lVar9);
          _swift_bridgeObjectRetain(uVar18);
        }
      }
      *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(puVar2 + 0x20);
      uVar18 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar18;
      uVar18 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar18;
      uVar19 = puVar2[0x25];
      puVar1[0x26] = puVar2[0x26];
      puVar1[0x25] = uVar19;
      uVar19 = *(undefined8 *)((long)puVar2 + 0x132);
      *(undefined8 *)((long)puVar1 + 0x13a) = *(undefined8 *)((long)puVar2 + 0x13a);
      *(undefined8 *)((long)puVar1 + 0x132) = uVar19;
      lVar9 = puVar2[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      if (lVar9 == 0) {
        uVar18 = puVar2[0x29];
        uVar21 = puVar2[0x2c];
        uVar19 = puVar2[0x2b];
        puVar1[0x2a] = puVar2[0x2a];
        puVar1[0x29] = uVar18;
        puVar1[0x2c] = uVar21;
        puVar1[0x2b] = uVar19;
      }
      else {
        puVar1[0x29] = puVar2[0x29];
        puVar1[0x2a] = lVar9;
        uVar18 = puVar2[0x2c];
        puVar1[0x2b] = puVar2[0x2b];
        puVar1[0x2c] = uVar18;
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar18);
      }
      uVar18 = puVar2[0x2e];
      puVar1[0x2d] = puVar2[0x2d];
      puVar1[0x2e] = uVar18;
      uVar18 = puVar2[0x2f];
      uVar19 = puVar2[0x30];
      *(undefined1 *)(puVar1 + 0x31) = *(undefined1 *)(puVar2 + 0x31);
      uVar17 = puVar2[0x36];
      uVar8 = *(uint5 *)(puVar2 + 0x39);
      puVar1[0x2f] = uVar18;
      puVar1[0x30] = uVar19;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
      if ((((uVar17 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar8 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar18 = puVar2[0x32];
        uVar21 = puVar2[0x35];
        uVar19 = puVar2[0x34];
        puVar1[0x33] = puVar2[0x33];
        puVar1[0x32] = uVar18;
        puVar1[0x35] = uVar21;
        puVar1[0x34] = uVar19;
        uVar18 = puVar2[0x36];
        puVar1[0x37] = puVar2[0x37];
        puVar1[0x36] = uVar18;
        uVar18 = *(undefined8 *)((long)puVar2 + 0x1bd);
        *(undefined8 *)((long)puVar1 + 0x1c5) = *(undefined8 *)((long)puVar2 + 0x1c5);
        *(undefined8 *)((long)puVar1 + 0x1bd) = uVar18;
      }
      else {
        uVar18 = puVar2[0x32];
        uVar4 = puVar2[0x33];
        uVar19 = puVar2[0x34];
        uVar5 = puVar2[0x35];
        uVar21 = puVar2[0x37];
        uVar6 = puVar2[0x38];
        func_0x00010179a2b8(uVar18,uVar4,uVar19,uVar5,uVar17,uVar21,uVar6,(ulong)uVar8);
        puVar1[0x32] = uVar18;
        puVar1[0x33] = uVar4;
        puVar1[0x34] = uVar19;
        puVar1[0x35] = uVar5;
        puVar1[0x36] = uVar17;
        puVar1[0x37] = uVar21;
        puVar1[0x38] = uVar6;
        *(char *)((long)puVar1 + 0x1cc) = (char)(uVar8 >> 0x20);
        *(int *)(puVar1 + 0x39) = (int)uVar8;
      }
      *(undefined1 *)((long)puVar1 + 0x1cd) = *(undefined1 *)((long)puVar2 + 0x1cd);
      uVar18 = puVar2[0x3b];
      puVar1[0x3a] = puVar2[0x3a];
      puVar1[0x3b] = uVar18;
      *(undefined1 *)(puVar1 + 0x3c) = *(undefined1 *)(puVar2 + 0x3c);
      lVar9 = puVar2[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar9 == 0) {
        uVar18 = puVar2[0x3d];
        uVar21 = puVar2[0x40];
        uVar19 = puVar2[0x3f];
        puVar1[0x3e] = puVar2[0x3e];
        puVar1[0x3d] = uVar18;
        puVar1[0x40] = uVar21;
        puVar1[0x3f] = uVar19;
        uVar18 = puVar2[0x41];
        puVar1[0x42] = puVar2[0x42];
        puVar1[0x41] = uVar18;
      }
      else {
        puVar1[0x3d] = puVar2[0x3d];
        puVar1[0x3e] = lVar9;
        uVar18 = puVar2[0x40];
        puVar1[0x3f] = puVar2[0x3f];
        puVar1[0x40] = uVar18;
        puVar1[0x41] = puVar2[0x41];
        uVar19 = puVar2[0x42];
        puVar1[0x42] = uVar19;
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar19);
      }
      *(undefined1 *)(puVar1 + 0x43) = *(undefined1 *)(puVar2 + 0x43);
      lVar9 = puVar2[0x45];
      if (lVar9 == 0) {
        uVar18 = puVar2[0x44];
        uVar21 = puVar2[0x47];
        uVar19 = puVar2[0x46];
        puVar1[0x45] = puVar2[0x45];
        puVar1[0x44] = uVar18;
        puVar1[0x47] = uVar21;
        puVar1[0x46] = uVar19;
        uVar18 = puVar2[0x48];
        puVar1[0x49] = puVar2[0x49];
        puVar1[0x48] = uVar18;
        puVar1[0x4a] = puVar2[0x4a];
      }
      else {
        puVar1[0x44] = puVar2[0x44];
        puVar1[0x45] = lVar9;
        puVar1[0x46] = puVar2[0x46];
        uVar18 = puVar2[0x47];
        puVar1[0x47] = uVar18;
        puVar1[0x48] = puVar2[0x48];
        uVar19 = puVar2[0x49];
        puVar1[0x49] = uVar19;
        puVar1[0x4a] = puVar2[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar19);
      }
      puVar1[0x4b] = puVar2[0x4b];
      _swift_bridgeObjectRetain();
    }
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar17 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar9 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10475debc; end: 10475e17b;  */

void FUN_10475debc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  lVar1 = param_1 + *(int *)(param_2 + 0x18);
  lVar2 = 0;
  FUN_104739264();
  lVar3 = lVar1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
  if ((int)lVar3 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x38));
    lVar3 = *(long *)(lVar1 + 0x78);
    if (lVar3 != 1) {
      if (*(long *)(lVar1 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x68));
        lVar3 = *(long *)(lVar1 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x88));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x98));
    lVar1 = lVar1 + *(int *)(lVar2 + 0x34);
    lVar2 = 0;
    FUN_104742f28();
    lVar3 = lVar1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
    if ((int)lVar3 == 0) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1,lVar3);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x14) + 8));
    }
  }
  param_1 = param_1 + *(int *)(param_2 + 0x1c);
  if (*(long *)(param_1 + 0xc0) == 1) {
    return;
  }
  if (*(long *)(param_1 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(ulong *)(param_1 + 0x28) >> 0x3c < 0xf &&
      (*(ulong *)(param_1 + 0x28) & 0xf000000000000000) != 0xb000000000000000) {
    func_0x00010006c090(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x48) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x88));
    if (*(long *)(param_1 + 0x98) != 1) {
      _swift_bridgeObjectRelease();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xa8));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe0));
    if (*(long *)(param_1 + 0xf0) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf8));
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x110));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x120));
  if (*(long *)(param_1 + 0x150) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x160));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x170));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x180));
  if ((((*(ulong *)(param_1 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (((ulong)*(uint5 *)(param_1 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
    func_0x00010179b820(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                        *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8),
                        *(ulong *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8),
                        *(undefined8 *)(param_1 + 0x1c0));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1d8));
  if (*(long *)(param_1 + 0x1f0) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x200));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x210));
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x238));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x248));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 600));
  return;
}



/* Entry: 10475e17c; end: 104760137;  */

undefined8 * FUN_10475e17c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint5 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  
  uVar17 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar17;
  uVar17 = param_2[2];
  uVar18 = param_2[3];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar17,uVar18);
  param_1[2] = uVar17;
  param_1[3] = uVar18;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar8 = 0;
  FUN_104739264();
  lVar15 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar15 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar17 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar17;
    uVar17 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar17;
    uVar18 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar18;
    uVar20 = puVar2[7];
    puVar1[6] = puVar2[6];
    puVar1[7] = uVar20;
    puVar1[8] = puVar2[8];
    lVar19 = puVar2[0xf];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar20);
    if (lVar19 == 1) {
      uVar17 = puVar2[9];
      puVar1[10] = puVar2[10];
      puVar1[9] = uVar17;
      uVar17 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar17;
      uVar17 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xd] = uVar17;
      puVar1[0xf] = puVar2[0xf];
    }
    else {
      lVar10 = puVar2[0xb];
      if (lVar10 == 1) {
        uVar17 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar17;
        uVar17 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar17;
        puVar1[0xd] = puVar2[0xd];
      }
      else {
        uVar17 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar17;
        uVar17 = puVar2[0xc];
        uVar18 = puVar2[0xd];
        puVar1[0xb] = lVar10;
        puVar1[0xc] = uVar17;
        puVar1[0xd] = uVar18;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
      }
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xf] = lVar19;
      _swift_bridgeObjectRetain(lVar19);
    }
    uVar17 = puVar2[0x11];
    puVar1[0x10] = puVar2[0x10];
    puVar1[0x11] = uVar17;
    uVar18 = puVar2[0x13];
    puVar1[0x12] = puVar2[0x12];
    puVar1[0x13] = uVar18;
    lVar19 = (long)puVar1 + (long)*(int *)(lVar8 + 0x34);
    lVar10 = (long)puVar2 + (long)*(int *)(lVar8 + 0x34);
    lVar11 = 0;
    FUN_104742f28();
    lVar13 = *(long *)(lVar11 + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar18);
    lVar12 = lVar10;
    (*pcVar14)(lVar10,1,lVar11);
    if ((int)lVar12 == 0) {
      lVar12 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar12 + -8) + 0x10))(lVar19,lVar10,lVar12);
      puVar9 = (undefined8 *)(lVar19 + *(int *)(lVar11 + 0x14));
      puVar3 = (undefined8 *)(lVar10 + *(int *)(lVar11 + 0x14));
      uVar17 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar17;
      *(undefined1 *)(lVar19 + *(int *)(lVar11 + 0x18)) =
           *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x18));
      *(undefined1 *)(lVar19 + *(int *)(lVar11 + 0x1c)) =
           *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x1c));
      puVar9 = (undefined8 *)(lVar19 + *(int *)(lVar11 + 0x20));
      puVar3 = (undefined8 *)(lVar10 + *(int *)(lVar11 + 0x20));
      *puVar9 = *puVar3;
      *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar3 + 1);
      *(undefined1 *)(lVar19 + *(int *)(lVar11 + 0x24)) =
           *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x24));
      pcVar14 = *(code **)(lVar13 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar14)(lVar19,0,1,lVar11);
    }
    else {
      lVar12 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar19,lVar10,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x38));
    uVar17 = *puVar2;
    puVar9[1] = puVar2[1];
    *puVar9 = uVar17;
    uVar17 = *(undefined8 *)((long)puVar2 + 9);
    *(undefined8 *)((long)puVar9 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
    *(undefined8 *)((long)puVar9 + 9) = uVar17;
    (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar8 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  if (param_2[0x18] == 1) {
    _memcpy(puVar1,param_2,0x260);
  }
  else {
    lVar8 = param_2[1];
    if (lVar8 == 1) {
      uVar17 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar17;
      puVar1[2] = param_2[2];
    }
    else {
      *puVar1 = *param_2;
      puVar1[1] = lVar8;
      uVar17 = param_2[2];
      puVar1[2] = uVar17;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
    }
    uVar16 = param_2[5];
    if (uVar16 >> 0x3c == 0xb) {
      uVar17 = param_2[3];
      puVar1[4] = param_2[4];
      puVar1[3] = uVar17;
      puVar1[5] = param_2[5];
    }
    else {
      puVar1[3] = param_2[3];
      if (uVar16 >> 0x3c < 0xf) {
        uVar17 = param_2[4];
        func_0x00010006c00c(uVar17,uVar16);
        puVar1[4] = uVar17;
        puVar1[5] = uVar16;
      }
      else {
        uVar17 = param_2[4];
        puVar1[5] = param_2[5];
        puVar1[4] = uVar17;
      }
    }
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_2 + 6);
    puVar1[7] = param_2[7];
    lVar8 = param_2[9];
    if (lVar8 == 1) {
      uVar17 = param_2[0x10];
      uVar20 = param_2[0x13];
      uVar18 = param_2[0x12];
      puVar1[0x11] = param_2[0x11];
      puVar1[0x10] = uVar17;
      puVar1[0x13] = uVar20;
      puVar1[0x12] = uVar18;
      uVar17 = param_2[0x14];
      puVar1[0x15] = param_2[0x15];
      puVar1[0x14] = uVar17;
      uVar17 = *(undefined8 *)((long)param_2 + 0xaa);
      *(undefined8 *)((long)puVar1 + 0xb2) = *(undefined8 *)((long)param_2 + 0xb2);
      *(undefined8 *)((long)puVar1 + 0xaa) = uVar17;
      uVar17 = param_2[8];
      uVar20 = param_2[0xb];
      uVar18 = param_2[10];
      puVar1[9] = param_2[9];
      puVar1[8] = uVar17;
      puVar1[0xb] = uVar20;
      puVar1[10] = uVar18;
      uVar17 = param_2[0xc];
      uVar20 = param_2[0xf];
      uVar18 = param_2[0xe];
      puVar1[0xd] = param_2[0xd];
      puVar1[0xc] = uVar17;
      puVar1[0xf] = uVar20;
      puVar1[0xe] = uVar18;
    }
    else {
      puVar1[8] = param_2[8];
      puVar1[9] = lVar8;
      uVar4 = param_2[0xb];
      puVar1[10] = param_2[10];
      puVar1[0xb] = uVar4;
      uVar17 = param_2[0xc];
      uVar18 = param_2[0xd];
      puVar1[0xc] = uVar17;
      puVar1[0xd] = uVar18;
      uVar18 = param_2[0xe];
      uVar20 = param_2[0xf];
      puVar1[0xe] = uVar18;
      puVar1[0xf] = uVar20;
      uVar20 = param_2[0x10];
      uVar5 = param_2[0x11];
      puVar1[0x10] = uVar20;
      puVar1[0x11] = uVar5;
      lVar8 = param_2[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar5);
      if (lVar8 == 1) {
        uVar17 = param_2[0x12];
        puVar1[0x13] = param_2[0x13];
        puVar1[0x12] = uVar17;
      }
      else {
        puVar1[0x12] = param_2[0x12];
        puVar1[0x13] = lVar8;
        _swift_bridgeObjectRetain(lVar8);
      }
      uVar17 = param_2[0x15];
      puVar1[0x14] = param_2[0x14];
      puVar1[0x15] = uVar17;
      puVar1[0x16] = param_2[0x16];
      *(undefined2 *)(puVar1 + 0x17) = *(undefined2 *)(param_2 + 0x17);
      _swift_bridgeObjectRetain();
    }
    *(undefined2 *)((long)puVar1 + 0xba) = *(undefined2 *)((long)param_2 + 0xba);
    if (param_2[0x18] == 0) {
      lVar8 = param_2[0x18];
      uVar18 = param_2[0x1b];
      uVar17 = param_2[0x1a];
      puVar1[0x19] = param_2[0x19];
      puVar1[0x18] = lVar8;
      puVar1[0x1b] = uVar18;
      puVar1[0x1a] = uVar17;
      uVar17 = param_2[0x1c];
      uVar20 = param_2[0x1f];
      uVar18 = param_2[0x1e];
      puVar1[0x1d] = param_2[0x1d];
      puVar1[0x1c] = uVar17;
      puVar1[0x1f] = uVar20;
      puVar1[0x1e] = uVar18;
    }
    else {
      puVar1[0x18] = param_2[0x18];
      uVar17 = param_2[0x19];
      puVar1[0x1a] = param_2[0x1a];
      puVar1[0x19] = uVar17;
      uVar17 = param_2[0x1c];
      puVar1[0x1b] = param_2[0x1b];
      puVar1[0x1c] = uVar17;
      lVar8 = param_2[0x1e];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      if (lVar8 == 0) {
        uVar17 = param_2[0x1d];
        puVar1[0x1e] = param_2[0x1e];
        puVar1[0x1d] = uVar17;
        puVar1[0x1f] = param_2[0x1f];
      }
      else {
        puVar1[0x1d] = param_2[0x1d];
        puVar1[0x1e] = lVar8;
        uVar17 = param_2[0x1f];
        puVar1[0x1f] = uVar17;
        _swift_bridgeObjectRetain(lVar8);
        _swift_bridgeObjectRetain(uVar17);
      }
    }
    *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    uVar17 = param_2[0x22];
    puVar1[0x21] = param_2[0x21];
    puVar1[0x22] = uVar17;
    uVar17 = param_2[0x24];
    puVar1[0x23] = param_2[0x23];
    puVar1[0x24] = uVar17;
    uVar18 = param_2[0x25];
    puVar1[0x26] = param_2[0x26];
    puVar1[0x25] = uVar18;
    uVar18 = *(undefined8 *)((long)param_2 + 0x132);
    *(undefined8 *)((long)puVar1 + 0x13a) = *(undefined8 *)((long)param_2 + 0x13a);
    *(undefined8 *)((long)puVar1 + 0x132) = uVar18;
    lVar8 = param_2[0x2a];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar17);
    if (lVar8 == 0) {
      uVar17 = param_2[0x29];
      uVar20 = param_2[0x2c];
      uVar18 = param_2[0x2b];
      puVar1[0x2a] = param_2[0x2a];
      puVar1[0x29] = uVar17;
      puVar1[0x2c] = uVar20;
      puVar1[0x2b] = uVar18;
    }
    else {
      puVar1[0x29] = param_2[0x29];
      puVar1[0x2a] = lVar8;
      uVar17 = param_2[0x2c];
      puVar1[0x2b] = param_2[0x2b];
      puVar1[0x2c] = uVar17;
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(uVar17);
    }
    uVar17 = param_2[0x2e];
    puVar1[0x2d] = param_2[0x2d];
    puVar1[0x2e] = uVar17;
    uVar17 = param_2[0x2f];
    uVar18 = param_2[0x30];
    *(undefined1 *)(puVar1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    uVar16 = param_2[0x36];
    uVar7 = *(uint5 *)(param_2 + 0x39);
    puVar1[0x2f] = uVar17;
    puVar1[0x30] = uVar18;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar18);
    if ((((uVar16 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
       (((ulong)uVar7 & 0xfefefefefefefefe) == 0x6fefefefe)) {
      uVar17 = param_2[0x32];
      uVar20 = param_2[0x35];
      uVar18 = param_2[0x34];
      puVar1[0x33] = param_2[0x33];
      puVar1[0x32] = uVar17;
      puVar1[0x35] = uVar20;
      puVar1[0x34] = uVar18;
      uVar17 = param_2[0x36];
      puVar1[0x37] = param_2[0x37];
      puVar1[0x36] = uVar17;
      uVar17 = *(undefined8 *)((long)param_2 + 0x1bd);
      *(undefined8 *)((long)puVar1 + 0x1c5) = *(undefined8 *)((long)param_2 + 0x1c5);
      *(undefined8 *)((long)puVar1 + 0x1bd) = uVar17;
    }
    else {
      uVar17 = param_2[0x32];
      uVar4 = param_2[0x33];
      uVar18 = param_2[0x34];
      uVar5 = param_2[0x35];
      uVar20 = param_2[0x37];
      uVar6 = param_2[0x38];
      func_0x00010179a2b8(uVar17,uVar4,uVar18,uVar5,uVar16,uVar20,uVar6,(ulong)uVar7);
      puVar1[0x32] = uVar17;
      puVar1[0x33] = uVar4;
      puVar1[0x34] = uVar18;
      puVar1[0x35] = uVar5;
      puVar1[0x36] = uVar16;
      puVar1[0x37] = uVar20;
      puVar1[0x38] = uVar6;
      *(char *)((long)puVar1 + 0x1cc) = (char)(uVar7 >> 0x20);
      *(int *)(puVar1 + 0x39) = (int)uVar7;
    }
    *(undefined1 *)((long)puVar1 + 0x1cd) = *(undefined1 *)((long)param_2 + 0x1cd);
    uVar17 = param_2[0x3b];
    puVar1[0x3a] = param_2[0x3a];
    puVar1[0x3b] = uVar17;
    *(undefined1 *)(puVar1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    lVar8 = param_2[0x3e];
    _swift_bridgeObjectRetain();
    if (lVar8 == 0) {
      uVar17 = param_2[0x3d];
      uVar20 = param_2[0x40];
      uVar18 = param_2[0x3f];
      puVar1[0x3e] = param_2[0x3e];
      puVar1[0x3d] = uVar17;
      puVar1[0x40] = uVar20;
      puVar1[0x3f] = uVar18;
      uVar17 = param_2[0x41];
      puVar1[0x42] = param_2[0x42];
      puVar1[0x41] = uVar17;
    }
    else {
      puVar1[0x3d] = param_2[0x3d];
      puVar1[0x3e] = lVar8;
      uVar17 = param_2[0x40];
      puVar1[0x3f] = param_2[0x3f];
      puVar1[0x40] = uVar17;
      puVar1[0x41] = param_2[0x41];
      uVar18 = param_2[0x42];
      puVar1[0x42] = uVar18;
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar18);
    }
    *(undefined1 *)(puVar1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
    lVar8 = param_2[0x45];
    if (lVar8 == 0) {
      uVar17 = param_2[0x44];
      uVar20 = param_2[0x47];
      uVar18 = param_2[0x46];
      puVar1[0x45] = param_2[0x45];
      puVar1[0x44] = uVar17;
      puVar1[0x47] = uVar20;
      puVar1[0x46] = uVar18;
      uVar17 = param_2[0x48];
      puVar1[0x49] = param_2[0x49];
      puVar1[0x48] = uVar17;
      puVar1[0x4a] = param_2[0x4a];
    }
    else {
      puVar1[0x44] = param_2[0x44];
      puVar1[0x45] = lVar8;
      puVar1[0x46] = param_2[0x46];
      uVar17 = param_2[0x47];
      puVar1[0x47] = uVar17;
      puVar1[0x48] = param_2[0x48];
      uVar18 = param_2[0x49];
      puVar1[0x49] = uVar18;
      puVar1[0x4a] = param_2[0x4a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar18);
    }
    puVar1[0x4b] = param_2[0x4b];
    _swift_bridgeObjectRetain();
  }
  return param_1;
}



/* Entry: 104760138; end: 104760173;  */

undefined8 FUN_104760138(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}


