/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044981e0; end: 1044981e3; +[SCBroadcastViewLocationMixedFeedHelpers viewLocationUsesModelSubscriptionData:] */

bool FUN_1044981e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x62 || param_3 == 0x65;
}



/* Entry: 1044981e4; end: 10449828b;  */

int FUN_1044981e4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = *(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10449828c; end: 1044982d3;  */

uint FUN_10449828c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_1044982d4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044982d4; end: 1044983a7;  */

byte FUN_1044982d4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if (((int)param_1[2] == (int)param_2[2]) && (param_1[3] == param_2[3])) {
    return ((byte)param_1[4] ^ (byte)param_2[4] ^ 1) & 1;
  }
  return 0;
}



/* Entry: 1044983a8; end: 1044983af;  */

void FUN_1044983a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1044983b0; end: 1044983eb;  */

undefined8 * FUN_1044983b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1044983ec; end: 10449844f;  */

undefined8 * FUN_1044983ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 104498450; end: 104498493;  */

undefined8 * FUN_104498450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 104498494; end: 104498557;  */

int FUN_104498494(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
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



/* Entry: 104498558; end: 104499cb7;  */

long FUN_104498558(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104499cb8; end: 104499ccb;  */

bool FUN_104499cb8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104499ccc; end: 104499da3;  */

void FUN_104499ccc(void)

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



/* Entry: 104499da4; end: 104499dc3;  */

void FUN_104499da4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104499dc4; end: 104499e03;  */

void FUN_104499dc4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09080;
  _swift_getWitnessTable(&UNK_10dd09080,&UNK_110779c28);
  puRam000000011307e928 = puVar1;
  return;
}



/* Entry: 104499e04; end: 104499e2b;  */

undefined1  [16] FUN_104499e04(void)

{
  return ZEXT816(0x110779c28);
}



/* Entry: 104499e2c; end: 104499e6b;  */

void FUN_104499e2c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09140;
  _swift_getWitnessTable(&UNK_10dd09140,&UNK_110779ca0);
  puRam000000011307e930 = puVar1;
  return;
}



/* Entry: 104499e6c; end: 104499f17;  */

void FUN_104499e6c(void)

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



/* Entry: 104499f18; end: 104499f4f;  */

void FUN_104499f18(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104499f50; end: 10449acdb;  */

long FUN_104499f50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10449acdc; end: 10449ad0b; +[SCOperaPlaylistItemType legacyStory] */

void FUN_10449acdc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x745379636167656c,0xeb0000000079726f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10449ad0c; end: 10449ad17;  */

undefined * FUN_10449ad0c(void)

{
  return &UNK_10dd09270;
}



/* Entry: 10449ad18; end: 10449ad3b; +[SCOperaPlaylistItemType story] */

void FUN_10449ad18(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79726f7453,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10449ad3c; end: 10449ad77; -[SCOperaPlaylistItemType init] */

void FUN_10449ad3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10449ad78; end: 10449adab;  */

void FUN_10449ad78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10449adac; end: 10449adaf; -[SCOperaPlaylistItemType .cxx_destruct] */

void FUN_10449adac(void)

{
  return;
}



/* Entry: 10449adb0; end: 10449adcf;  */

void FUN_10449adb0(void)

{
  _objc_opt_self(&PTR_PTR_1129bf058);
  return;
}



/* Entry: 10449add0; end: 10449afd7;  */

long FUN_10449add0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10449afd8; end: 10449aff3;  */

void FUN_10449afd8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10449aff4; end: 10449b04b;  */

void FUN_10449aff4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10449b144();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10449b04c; end: 10449b067;  */

void FUN_10449b04c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10449b068; end: 10449b143;  */

void FUN_10449b068(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010449b164();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10449b144; end: 10449b187;  */

undefined1  [16] FUN_10449b144(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10449b188; end: 10449b1c7;  */

void FUN_10449b188(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd092d0;
  _swift_getWitnessTable(&UNK_10dd092d0,&UNK_110779eb8);
  puRam000000011307e968 = puVar1;
  return;
}



/* Entry: 10449b1c8; end: 10449b1cb;  */

void FUN_10449b1c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09370;
  _swift_getWitnessTable(&UNK_10dd09370,&UNK_110779ed8);
  puRam000000011307e970 = puVar1;
  return;
}



/* Entry: 10449b1cc; end: 10449b20b;  */

void FUN_10449b1cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09370;
  _swift_getWitnessTable(&UNK_10dd09370,&UNK_110779ed8);
  puRam000000011307e970 = puVar1;
  return;
}



/* Entry: 10449b20c; end: 10449b20f;  */

void FUN_10449b20c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09410;
  _swift_getWitnessTable(&UNK_10dd09410,&UNK_110779ef8);
  puRam000000011307e978 = puVar1;
  return;
}



/* Entry: 10449b210; end: 10449b24f;  */

void FUN_10449b210(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09410;
  _swift_getWitnessTable(&UNK_10dd09410,&UNK_110779ef8);
  puRam000000011307e978 = puVar1;
  return;
}



/* Entry: 10449b250; end: 10449b253;  */

void FUN_10449b250(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd094b0;
  _swift_getWitnessTable(&UNK_10dd094b0,&UNK_110779f18);
  puRam000000011307e980 = puVar1;
  return;
}



/* Entry: 10449b254; end: 10449b293;  */

void FUN_10449b254(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd094b0;
  _swift_getWitnessTable(&UNK_10dd094b0,&UNK_110779f18);
  puRam000000011307e980 = puVar1;
  return;
}



/* Entry: 10449b294; end: 10449b297;  */

void FUN_10449b294(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09550;
  _swift_getWitnessTable(&UNK_10dd09550,&UNK_110779f38);
  puRam000000011307e988 = puVar1;
  return;
}



/* Entry: 10449b298; end: 10449b2d7;  */

void FUN_10449b298(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09550;
  _swift_getWitnessTable(&UNK_10dd09550,&UNK_110779f38);
  puRam000000011307e988 = puVar1;
  return;
}



/* Entry: 10449b2d8; end: 10449b2db;  */

void FUN_10449b2d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd095f0;
  _swift_getWitnessTable(&UNK_10dd095f0,&UNK_110779f58);
  puRam000000011307e990 = puVar1;
  return;
}



/* Entry: 10449b2dc; end: 10449b31b;  */

void FUN_10449b2dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd095f0;
  _swift_getWitnessTable(&UNK_10dd095f0,&UNK_110779f58);
  puRam000000011307e990 = puVar1;
  return;
}



/* Entry: 10449b31c; end: 10449b3f3;  */

undefined1  [16] FUN_10449b31c(void)

{
  return ZEXT816(0x110779eb8);
}



/* Entry: 10449b3f4; end: 10449e7c3;  */

void FUN_10449b3f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 *param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
                  undefined1 param_21)

{
  undefined8 uVar1;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 uStack_82;
  undefined6 uStack_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  uStack_5a = (undefined2)param_12[9];
  uStack_58 = (undefined6)((ulong)param_12[9] >> 0x10);
  uStack_62 = (undefined2)param_12[8];
  uStack_60 = (undefined6)((ulong)param_12[8] >> 0x10);
  uStack_4a = (undefined2)param_12[0xb];
  uStack_48 = (undefined6)((ulong)param_12[0xb] >> 0x10);
  uStack_52 = (undefined2)param_12[10];
  uStack_50 = (undefined6)((ulong)param_12[10] >> 0x10);
  uVar1 = param_12[0xd];
  uStack_3a = (undefined1)uVar1;
  uStack_39 = (undefined1)((ulong)uVar1 >> 8);
  uStack_42 = (undefined2)param_12[0xc];
  uStack_40 = (undefined6)((ulong)param_12[0xc] >> 0x10);
  uStack_9a = (undefined2)param_12[1];
  uStack_98 = (undefined6)((ulong)param_12[1] >> 0x10);
  uStack_a2 = (undefined2)*param_12;
  uStack_a0 = (undefined6)((ulong)*param_12 >> 0x10);
  uStack_8a = (undefined2)param_12[3];
  uStack_88 = (undefined6)((ulong)param_12[3] >> 0x10);
  uStack_92 = (undefined2)param_12[2];
  uStack_90 = (undefined6)((ulong)param_12[2] >> 0x10);
  uStack_7a = (undefined2)param_12[5];
  uStack_78 = (undefined6)((ulong)param_12[5] >> 0x10);
  uStack_82 = (undefined2)param_12[4];
  uStack_80 = (undefined6)((ulong)param_12[4] >> 0x10);
  uStack_6a = (undefined2)param_12[7];
  uStack_68 = (undefined6)((ulong)param_12[7] >> 0x10);
  uStack_72 = (undefined2)param_12[6];
  uStack_70 = (undefined6)((ulong)param_12[6] >> 0x10);
  *(ulong *)((long)param_1 + 0xa1) =
       CONCAT17(*(undefined1 *)(param_12 + 0xe),(int7)((ulong)uVar1 >> 8));
  *(ulong *)((long)param_1 + 0x9a) = CONCAT17(uStack_39,CONCAT16(uStack_3a,uStack_40));
  *(ulong *)((long)param_1 + 0x92) = CONCAT26(uStack_42,uStack_48);
  *(ulong *)((long)param_1 + 0x8a) = CONCAT26(uStack_4a,uStack_50);
  *(ulong *)((long)param_1 + 0x82) = CONCAT26(uStack_52,uStack_58);
  *(ulong *)((long)param_1 + 0x7a) = CONCAT26(uStack_5a,uStack_60);
  *(ulong *)((long)param_1 + 0x72) = CONCAT26(uStack_62,uStack_68);
  *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_6a,uStack_70);
  *(ulong *)((long)param_1 + 0x62) = CONCAT26(uStack_72,uStack_78);
  *(ulong *)((long)param_1 + 0x5a) = CONCAT26(uStack_7a,uStack_80);
  *(ulong *)((long)param_1 + 0x52) = CONCAT26(uStack_82,uStack_88);
  *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_8a,uStack_90);
  *(ulong *)((long)param_1 + 0x42) = CONCAT26(uStack_92,uStack_98);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_6;
  *(undefined1 *)((long)param_1 + 0x21) = param_7;
  param_1[5] = param_8;
  *(undefined1 *)(param_1 + 6) = param_9;
  *(undefined1 *)((long)param_1 + 0x31) = param_10;
  *(ulong *)((long)param_1 + 0x3a) = CONCAT26(uStack_9a,uStack_a0);
  *(ulong *)((long)param_1 + 0x32) = CONCAT26(uStack_a2,uStack_a8);
  param_1[0x16] = param_13;
  *(undefined1 *)(param_1 + 0x17) = (undefined1)param_14;
  *(undefined1 *)((long)param_1 + 0xb9) = param_14._1_1_;
  *(undefined1 *)((long)param_1 + 0xba) = param_14._2_1_;
  *(undefined1 *)((long)param_1 + 0xbb) = param_14._3_1_;
  param_1[0x18] = param_16;
  param_1[0x19] = param_17;
  *(undefined1 *)(param_1 + 0x1a) = (undefined1)param_18;
  *(undefined1 *)((long)param_1 + 0xd1) = param_18._1_1_;
  *(undefined1 *)((long)param_1 + 0xd2) = param_18._2_1_;
  *(undefined1 *)((long)param_1 + 0xd3) = param_18._3_1_;
  param_1[0x1b] = param_20;
  *(undefined1 *)(param_1 + 0x1c) = param_21;
  return;
}



/* Entry: 10449e7c4; end: 10449e7fb;  */

void FUN_10449e7c4(undefined8 param_1)

{
  if (lRam000000011307e9f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80c5a0);
  return;
}



/* Entry: 10449e7fc; end: 10449ea43;  */

long * FUN_10449e7fc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(short *)param_1 = (short)*param_2;
    lVar5 = (long)*(int *)(param_3 + 0x18);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar6 = *(long *)(lVar2 + -8);
    lVar3 = (long)param_2 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    _objc_retain();
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10449ea44; end: 10449eb77;  */

undefined1 * FUN_10449ea44(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  puVar3 = param_1 + iVar1;
  (*pcVar7)(puVar3,1,lVar2);
  puVar4 = param_2 + iVar1;
  (*pcVar7)(puVar4,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 == 0) {
      (**(code **)(lVar6 + 0x18))(param_1 + iVar1,param_2 + iVar1,lVar2);
      goto LAB_10449eb28;
    }
    (**(code **)(lVar6 + 8))(param_1 + iVar1,lVar2);
  }
  else if ((int)puVar4 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar1,0,1,lVar2);
    goto LAB_10449eb28;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy(param_1 + iVar1,param_2 + iVar1,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_10449eb28:
  iVar1 = *(int *)(param_3 + 0x1c);
  uVar5 = *(undefined8 *)(param_1 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  _objc_retain();
  _objc_release(uVar5);
  return param_1;
}



/* Entry: 10449eb78; end: 10449ec47;  */

undefined2 * FUN_10449eb78(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  lVar3 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 10449ec48; end: 10449ed73;  */

undefined1 * FUN_10449ec48(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  puVar3 = param_1 + iVar1;
  (*pcVar7)(puVar3,1,lVar2);
  puVar4 = param_2 + iVar1;
  (*pcVar7)(puVar4,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 == 0) {
      (**(code **)(lVar6 + 0x28))(param_1 + iVar1,param_2 + iVar1,lVar2);
      goto LAB_10449ed2c;
    }
    (**(code **)(lVar6 + 8))(param_1 + iVar1,lVar2);
  }
  else if ((int)puVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar1,0,1,lVar2);
    goto LAB_10449ed2c;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy(param_1 + iVar1,param_2 + iVar1,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_10449ed2c:
  iVar1 = *(int *)(param_3 + 0x1c);
  uVar5 = *(undefined8 *)(param_1 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  _objc_release(uVar5);
  return param_1;
}



/* Entry: 10449ed74; end: 10449ed8b;  */

void FUN_10449ed74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10449ed8c; end: 10449ee07;  */

void FUN_10449ed8c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10dd09870;
  puStack_38 = &UNK_10dd09870;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd09888;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 10449ee08; end: 10449f09b;  */

long FUN_10449ee08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10449f09c; end: 10449f0af;  */

bool FUN_10449f09c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10449f0b0; end: 10449f187;  */

void FUN_10449f0b0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10449f188; end: 10449f1a7;  */

void FUN_10449f188(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10449f1a8; end: 10449f1e7;  */

void FUN_10449f1a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ea38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd098d0;
  _swift_getWitnessTable(&UNK_10dd098d0,&UNK_11077a408);
  puRam000000011307ea38 = puVar1;
  return;
}



/* Entry: 10449f1e8; end: 10449f1f7;  */

undefined1  [16] FUN_10449f1e8(void)

{
  return ZEXT816(0x11077a408);
}



/* Entry: 10449f1f8; end: 1044a0f5f;  */

long FUN_10449f1f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044a0f60; end: 1044a0f73;  */

bool FUN_1044a0f60(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044a0f74; end: 1044a104b;  */

void FUN_1044a0f74(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044a104c; end: 1044a106b;  */

void FUN_1044a104c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044a106c; end: 1044a10ab;  */

void FUN_1044a106c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ea40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09a20;
  _swift_getWitnessTable(&UNK_10dd09a20,&UNK_11077a628);
  puRam000000011307ea40 = puVar1;
  return;
}



/* Entry: 1044a10ac; end: 1044a10bb;  */

undefined1  [16] FUN_1044a10ac(void)

{
  return ZEXT816(0x11077a628);
}



/* Entry: 1044a10bc; end: 1044a2457;  */

void FUN_1044a10bc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1044a2458; end: 1044a248f;  */

void FUN_1044a2458(undefined8 param_1)

{
  if (lRam000000011307eaa0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80c750);
  return;
}



/* Entry: 1044a2490; end: 1044a257f;  */

long * FUN_1044a2490(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar5 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar2);
    }
    else {
      lVar2 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1044a2580; end: 1044a25e7;  */

void FUN_1044a2580(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001044a25e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 1044a25e8; end: 1044a26ab;  */

long FUN_1044a25e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 1044a26ac; end: 1044a27bb;  */

long FUN_1044a26ac(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar2 = param_1;
  (*pcVar5)(param_1,1,lVar1);
  lVar3 = param_2;
  (*pcVar5)(param_2,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar4 + 0x18))(param_1,param_2,lVar1);
      goto LAB_1044a277c;
    }
    (**(code **)(lVar4 + 8))(param_1,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
    goto LAB_1044a277c;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_1044a277c:
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 1044a27bc; end: 1044a287f;  */

long FUN_1044a27bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 1044a2880; end: 1044a298f;  */

long FUN_1044a2880(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar2 = param_1;
  (*pcVar5)(param_1,1,lVar1);
  lVar3 = param_2;
  (*pcVar5)(param_2,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
      goto LAB_1044a2950;
    }
    (**(code **)(lVar4 + 8))(param_1,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
    goto LAB_1044a2950;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_1044a2950:
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 1044a2990; end: 1044a29a7;  */

void FUN_1044a2990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1044a29a8; end: 1044a2a1b;  */

void FUN_1044a29a8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1044a2a1c; end: 1044a2b57;  */

void FUN_1044a2a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1044a2b58; end: 1044a2b8f;  */

void FUN_1044a2b58(undefined8 param_1)

{
  if (lRam000000011307eb60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80c794);
  return;
}



/* Entry: 1044a2b90; end: 1044a372b;  */

long * FUN_1044a2b90(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar9;
    lVar9 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar9;
    cVar8 = (char)param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar9);
    if (cVar8 == -1) {
      lVar9 = param_2[0xc];
      lVar23 = param_2[0xf];
      lVar14 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = lVar9;
      param_1[0xf] = lVar23;
      param_1[0xe] = lVar14;
      *(char *)(param_1 + 0x10) = (char)param_2[0x10];
      lVar9 = param_2[4];
      lVar23 = param_2[7];
      lVar14 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = lVar9;
      param_1[7] = lVar23;
      param_1[6] = lVar14;
      lVar23 = param_2[8];
      lVar14 = param_2[0xb];
      lVar9 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = lVar23;
      param_1[0xb] = lVar14;
      param_1[10] = lVar9;
    }
    else {
      lVar9 = param_2[4];
      lVar15 = param_2[5];
      lVar14 = param_2[6];
      lVar13 = param_2[7];
      lVar23 = param_2[8];
      lVar16 = param_2[9];
      lVar11 = param_2[10];
      lVar3 = param_2[0xb];
      lVar22 = param_2[0xc];
      lVar4 = param_2[0xd];
      lVar12 = param_2[0xe];
      lVar5 = param_2[0xf];
      func_0x0001044a1224(lVar9,lVar15,lVar14,lVar13,lVar23,lVar16,lVar11,lVar3,lVar22,lVar4,lVar12,
                          lVar5,cVar8);
      param_1[4] = lVar9;
      param_1[5] = lVar15;
      param_1[6] = lVar14;
      param_1[7] = lVar13;
      param_1[8] = lVar23;
      param_1[9] = lVar16;
      param_1[10] = lVar11;
      param_1[0xb] = lVar3;
      param_1[0xc] = lVar22;
      param_1[0xd] = lVar4;
      param_1[0xe] = lVar12;
      param_1[0xf] = lVar5;
      *(char *)(param_1 + 0x10) = cVar8;
    }
    lVar9 = param_2[0x12];
    if (lVar9 == 1) {
      lVar9 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = lVar9;
      lVar9 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = lVar9;
      lVar9 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = lVar9;
      lVar9 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = lVar9;
      lVar9 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = lVar9;
      lVar9 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = lVar9;
      lVar9 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = lVar9;
    }
    else {
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = lVar9;
      lVar9 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = lVar9;
      lVar14 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = lVar14;
      *(char *)(param_1 + 0x17) = (char)param_2[0x17];
      lVar23 = param_2[0x19];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = lVar23;
      lVar11 = param_2[0x1b];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x1b] = lVar11;
      lVar22 = param_2[0x1d];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1d] = lVar22;
      lVar12 = param_2[0x1e];
      param_1[0x1e] = lVar12;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar9);
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(lVar23);
      _swift_bridgeObjectRetain(lVar11);
      _swift_bridgeObjectRetain(lVar22);
      _objc_retain(lVar12);
    }
    lVar9 = param_2[0x20];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x20] = lVar9;
    lVar14 = param_2[0x22];
    _objc_retain();
    _objc_retain(lVar9);
    if (lVar14 == 1) {
      lVar9 = param_2[0x25];
      lVar23 = param_2[0x28];
      lVar14 = param_2[0x27];
      param_1[0x26] = param_2[0x26];
      param_1[0x25] = lVar9;
      param_1[0x28] = lVar23;
      param_1[0x27] = lVar14;
      lVar9 = param_2[0x29];
      param_1[0x2a] = param_2[0x2a];
      param_1[0x29] = lVar9;
      lVar23 = param_2[0x21];
      lVar14 = param_2[0x24];
      lVar9 = param_2[0x23];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = lVar23;
      param_1[0x24] = lVar14;
      param_1[0x23] = lVar9;
    }
    else {
      param_1[0x21] = param_2[0x21];
      param_1[0x22] = lVar14;
      lVar9 = param_2[0x24];
      param_1[0x23] = param_2[0x23];
      param_1[0x24] = lVar9;
      lVar23 = param_2[0x26];
      param_1[0x25] = param_2[0x25];
      param_1[0x26] = lVar23;
      lVar11 = param_2[0x28];
      param_1[0x27] = param_2[0x27];
      param_1[0x28] = lVar11;
      lVar22 = param_2[0x2a];
      param_1[0x29] = param_2[0x29];
      param_1[0x2a] = lVar22;
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(lVar9);
      _swift_bridgeObjectRetain(lVar23);
      _swift_bridgeObjectRetain(lVar11);
      _swift_bridgeObjectRetain(lVar22);
    }
    lVar9 = param_2[0x2b];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2b] = lVar9;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    lVar9 = 0;
    FUN_1044a8f6c();
    lVar14 = *(long *)(lVar9 + -8);
    puVar10 = puVar2;
    (**(code **)(lVar14 + 0x30))(puVar2,1,lVar9);
    if ((int)puVar10 == 0) {
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      lVar22 = (long)*(int *)(lVar9 + 0x18);
      lVar11 = 0;
      __s10Foundation4DateVMa();
      lVar12 = *(long *)(lVar11 + -8);
      pcVar21 = *(code **)(lVar12 + 0x30);
      lVar23 = (long)puVar2 + lVar22;
      (*pcVar21)(lVar23,1,lVar11);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar12 + 0x10))((long)puVar1 + lVar22,(long)puVar2 + lVar22,lVar11);
        (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar22,0,1,lVar11);
      }
      else {
        lVar23 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        _memcpy((long)puVar1 + lVar22,(long)puVar2 + lVar22,
                *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
      }
      lVar22 = (long)*(int *)(lVar9 + 0x1c);
      lVar23 = (long)puVar2 + lVar22;
      (*pcVar21)(lVar23,1,lVar11);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar12 + 0x10))((long)puVar1 + lVar22,(long)puVar2 + lVar22,lVar11);
        (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar22,0,1,lVar11);
      }
      else {
        lVar23 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        _memcpy((long)puVar1 + lVar22,(long)puVar2 + lVar22,
                *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
      }
      (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar9);
    }
    else {
      lVar9 = 0x11307eae8;
      func_0x0001000285a8(0x11307eae8,&UNK_10dd0a560);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    lVar9 = puVar2[2];
    if (lVar9 == 1) {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[2] = puVar2[2];
    }
    else {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[2] = lVar9;
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    lVar9 = 0;
    FUN_1044a7e5c();
    lVar14 = *(long *)(lVar9 + -8);
    puVar10 = puVar2;
    (**(code **)(lVar14 + 0x30))(puVar2,1,lVar9);
    if ((int)puVar10 == 0) {
      uVar18 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar18;
      lVar23 = (long)puVar1 + (long)*(int *)(lVar9 + 0x14);
      lVar11 = (long)puVar2 + (long)*(int *)(lVar9 + 0x14);
      lVar12 = 0;
      FUN_1044a2458();
      lVar15 = *(long *)(lVar12 + -8);
      pcVar21 = *(code **)(lVar15 + 0x30);
      _swift_bridgeObjectRetain(uVar18);
      lVar22 = lVar11;
      (*pcVar21)(lVar11,1,lVar12);
      if ((int)lVar22 == 0) {
        lVar13 = 0;
        __s10Foundation4DateVMa();
        lVar16 = *(long *)(lVar13 + -8);
        lVar22 = lVar11;
        (**(code **)(lVar16 + 0x30))(lVar11,1,lVar13);
        if ((int)lVar22 == 0) {
          (**(code **)(lVar16 + 0x10))(lVar23,lVar11,lVar13);
          (**(code **)(lVar16 + 0x38))(lVar23,0,1,lVar13);
        }
        else {
          lVar22 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          _memcpy(lVar23,lVar11,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
        }
        *(undefined8 *)(lVar23 + *(int *)(lVar12 + 0x14)) =
             *(undefined8 *)(lVar11 + *(int *)(lVar12 + 0x14));
        (**(code **)(lVar15 + 0x38))(lVar23,0,1,lVar12);
      }
      else {
        lVar22 = 0x11307eb00;
        func_0x0001000285a8(0x11307eb00,&UNK_10dd09e20);
        _memcpy(lVar23,lVar11,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
      }
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x18));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x18));
      uVar18 = puVar2[1];
      *puVar10 = *puVar2;
      puVar10[1] = uVar18;
      pcVar21 = *(code **)(lVar14 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar21)(puVar1,0,1,lVar9);
    }
    else {
      lVar9 = 0x11307eaf0;
      func_0x0001000285a8(0x11307eaf0,&UNK_10dd09c60);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x40);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    *(undefined8 *)((long)param_1 + (long)iVar6) = *(undefined8 *)((long)param_2 + (long)iVar6);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
    uVar17 = puVar2[1];
    if (uVar17 >> 0x3c < 0xf) {
      uVar18 = *puVar2;
      func_0x00010006c00c(uVar18,uVar17);
      *puVar1 = uVar18;
      puVar1[1] = uVar17;
    }
    else {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
    }
    iVar6 = *(int *)(param_3 + 0x4c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar17 = puVar2[1];
    if (uVar17 >> 0x3c < 0xf) {
      uVar18 = *puVar2;
      func_0x00010006c00c(uVar18,uVar17);
      *puVar1 = uVar18;
      puVar1[1] = uVar17;
    }
    else {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
    lVar9 = puVar2[1];
    if (lVar9 == 1) {
      uVar18 = *puVar2;
      uVar20 = puVar2[3];
      uVar19 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar20;
      puVar1[2] = uVar19;
      puVar1[4] = puVar2[4];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar9;
      uVar18 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar18;
      uVar18 = puVar2[4];
      puVar1[4] = uVar18;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
    lVar9 = puVar2[1];
    if (lVar9 == 1) {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar9;
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x58));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
    lVar9 = puVar2[2];
    if (lVar9 == 1) {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[2] = puVar2[2];
    }
    else {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[2] = lVar9;
      _swift_bridgeObjectRetain();
    }
    iVar6 = *(int *)(param_3 + 0x60);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
    lVar9 = puVar2[1];
    if (lVar9 == 1) {
      uVar18 = *puVar2;
      uVar20 = puVar2[3];
      uVar19 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar20;
      puVar1[2] = uVar19;
    }
    else {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
      *(undefined2 *)((long)puVar1 + 1) = *(undefined2 *)((long)puVar2 + 1);
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar1[1] = lVar9;
      puVar1[2] = uVar18;
      puVar1[3] = uVar19;
      _swift_bridgeObjectRetain();
      _objc_retain(uVar18);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x68));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
    uVar17 = puVar2[1];
    if (uVar17 >> 0x3c < 0xf) {
      uVar18 = *puVar2;
      func_0x00010006c00c(uVar18,uVar17);
      *puVar1 = uVar18;
      puVar1[1] = uVar17;
    }
    else {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
    lVar9 = puVar2[1];
    if (lVar9 == 1) {
      uVar18 = *puVar2;
      uVar20 = puVar2[3];
      uVar19 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar20;
      puVar1[2] = uVar19;
      uVar18 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar18;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar9;
      uVar18 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar18;
      uVar19 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar19;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar19);
    }
    iVar6 = *(int *)(param_3 + 0x74);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x70));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
    uVar18 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar18;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar17 = puVar2[1];
    _swift_bridgeObjectRetain();
    if (uVar17 >> 0x3c < 0xf) {
      uVar18 = *puVar2;
      func_0x00010006c00c(uVar18,uVar17);
      *puVar1 = uVar18;
      puVar1[1] = uVar17;
    }
    else {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
    lVar9 = puVar2[1];
    if (lVar9 == 1) {
      uVar18 = *puVar2;
      uVar20 = puVar2[3];
      uVar19 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar20;
      puVar1[2] = uVar19;
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar2 + 4);
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar9;
      uVar18 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar18;
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar2 + 4);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
    }
    iVar6 = *(int *)(param_3 + 0x80);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x7c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x7c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar6 = *(int *)(param_3 + 0x88);
    uVar18 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x84));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x84)) = uVar18;
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    iVar6 = *(int *)(param_3 + 0x90);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x8c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x8c));
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x94));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x94));
    uVar17 = puVar2[1];
    _objc_retain();
    _objc_retain(uVar18);
    if (uVar17 >> 0x3c < 0xf) {
      uVar18 = *puVar2;
      func_0x00010006c00c(uVar18,uVar17);
      *puVar1 = uVar18;
      puVar1[1] = uVar17;
    }
    else {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
    }
    iVar6 = *(int *)(param_3 + 0x9c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x98)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x98));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar17 = puVar2[1];
    _objc_retain();
    if (uVar17 >> 0x3c < 0xf) {
      uVar18 = *puVar2;
      func_0x00010006c00c(uVar18,uVar17);
      *puVar1 = uVar18;
      puVar1[1] = uVar17;
    }
    else {
      uVar18 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
    }
    iVar6 = *(int *)(param_3 + 0xa4);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa0));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa0));
    uVar18 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar18;
    uVar18 = *(undefined8 *)((long)param_2 + (long)iVar6);
    *(undefined8 *)((long)param_1 + (long)iVar6) = uVar18;
    iVar6 = *(int *)(param_3 + 0xac);
    uVar19 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa8));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa8)) = uVar19;
    *(undefined8 *)((long)param_1 + (long)iVar6) = *(undefined8 *)((long)param_2 + (long)iVar6);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb0));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb0));
    lVar9 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar19);
    if (lVar9 == 0) {
      uVar18 = puVar2[8];
      uVar20 = puVar2[0xb];
      uVar19 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar18;
      puVar1[0xb] = uVar20;
      puVar1[10] = uVar19;
      uVar18 = puVar2[0xc];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar18;
      uVar18 = *puVar2;
      uVar20 = puVar2[3];
      uVar19 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar20;
      puVar1[2] = uVar19;
      uVar20 = puVar2[4];
      uVar19 = puVar2[7];
      uVar18 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar20;
      puVar1[7] = uVar19;
      puVar1[6] = uVar18;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar9;
      uVar18 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar18;
      uVar19 = puVar2[4];
      puVar1[4] = uVar19;
      cVar8 = *(char *)(puVar2 + 6);
      _swift_bridgeObjectRetain(lVar9);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar19);
      if (cVar8 == -1) {
        puVar1[5] = puVar2[5];
        *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 6);
      }
      else {
        uVar18 = puVar2[5];
        FUN_1044a372c(uVar18,cVar8);
        puVar1[5] = uVar18;
        *(char *)(puVar1 + 6) = cVar8;
      }
      uVar18 = puVar2[8];
      puVar1[7] = puVar2[7];
      puVar1[8] = uVar18;
      *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(puVar2 + 9);
      *(undefined1 *)((long)puVar1 + 0x4c) = *(undefined1 *)((long)puVar2 + 0x4c);
      *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(puVar2 + 10);
      uVar18 = puVar2[0xb];
      puVar1[0xb] = uVar18;
      *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
      uVar19 = puVar2[0xd];
      puVar1[0xd] = uVar19;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar19);
    }
    iVar6 = *(int *)(param_3 + 0xb8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb4));
    uVar18 = *(undefined8 *)((long)param_2 + (long)iVar6);
    *(undefined8 *)((long)param_1 + (long)iVar6) = uVar18;
    iVar6 = *(int *)(param_3 + 0xc0);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xbc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xbc));
    uVar19 = *(undefined8 *)((long)param_2 + (long)iVar6);
    *(undefined8 *)((long)param_1 + (long)iVar6) = uVar19;
    iVar6 = *(int *)(param_3 + 200);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xc4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xc4));
    *(undefined8 *)((long)param_1 + (long)iVar6) = *(undefined8 *)((long)param_2 + (long)iVar6);
    iVar6 = *(int *)(param_3 + 0xd0);
    uVar20 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xcc));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xcc)) = uVar20;
    *(undefined8 *)((long)param_1 + (long)iVar6) = *(undefined8 *)((long)param_2 + (long)iVar6);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd4));
    _objc_retain();
    _objc_retain(uVar18);
    _swift_bridgeObjectRetain(uVar19);
    _objc_retain(uVar20);
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



/* Entry: 1044a372c; end: 1044a373b;  */

void FUN_1044a372c(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1044a373c; end: 1044a3be3;  */

void FUN_1044a373c(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x80) != -1) {
    func_0x0001044a13e0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                        *(char *)(param_1 + 0x80));
  }
  if (*(long *)(param_1 + 0x90) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xa0));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb0));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 200));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xd8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe8));
    _objc_release(*(undefined8 *)(param_1 + 0xf0));
  }
  _objc_release(*(undefined8 *)(param_1 + 0xf8));
  _objc_release(*(undefined8 *)(param_1 + 0x100));
  if (*(long *)(param_1 + 0x110) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x120));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x130));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x140));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x150));
  }
  lVar1 = param_1 + *(int *)(param_2 + 0x30);
  lVar4 = 0;
  FUN_1044a8f6c();
  lVar5 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar5 == 0) {
    iVar3 = *(int *)(lVar4 + 0x18);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    lVar7 = *(long *)(lVar6 + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    lVar5 = lVar1 + iVar3;
    (*pcVar8)(lVar5,1,lVar6);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 8))(lVar1 + iVar3,lVar6);
    }
    iVar3 = *(int *)(lVar4 + 0x1c);
    lVar5 = lVar1 + iVar3;
    (*pcVar8)(lVar5,1,lVar6);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 8))(lVar1 + iVar3,lVar6);
    }
  }
  if (*(long *)(param_1 + *(int *)(param_2 + 0x34) + 0x10) != 1) {
    _swift_bridgeObjectRelease();
  }
  lVar1 = param_1 + *(int *)(param_2 + 0x38);
  lVar4 = 0;
  FUN_1044a7e5c();
  lVar5 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    lVar7 = (long)*(int *)(lVar4 + 0x14);
    lVar6 = 0;
    FUN_1044a2458();
    lVar5 = lVar1 + lVar7;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar5,1,lVar6);
    if ((int)lVar5 == 0) {
      lVar6 = 0;
      __s10Foundation4DateVMa();
      lVar9 = *(long *)(lVar6 + -8);
      lVar5 = lVar1 + lVar7;
      (**(code **)(lVar9 + 0x30))(lVar5,1,lVar6);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar9 + 8))(lVar1 + lVar7,lVar6);
      }
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x18) + 8));
  }
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x44));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar2);
  }
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x4c));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar2);
  }
  lVar1 = param_1 + *(int *)(param_2 + 0x50);
  if (*(long *)(lVar1 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x20));
  }
  if (*(long *)(param_1 + *(int *)(param_2 + 0x54) + 8) != 1) {
    _swift_bridgeObjectRelease();
  }
  if (*(long *)(param_1 + *(int *)(param_2 + 0x58) + 0x10) != 1) {
    _swift_bridgeObjectRelease();
  }
  lVar1 = param_1 + *(int *)(param_2 + 100);
  if (*(long *)(lVar1 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _objc_release(*(undefined8 *)(lVar1 + 0x10));
  }
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x68));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar2);
  }
  lVar1 = param_1 + *(int *)(param_2 + 0x6c);
  if (*(long *)(lVar1 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x70) + 8));
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x74));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar2);
  }
  lVar1 = param_1 + *(int *)(param_2 + 0x78);
  if (*(long *)(lVar1 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  }
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x7c)));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x84)));
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x94));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar2);
  }
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x98)));
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x9c));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xa0) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xa4)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xa8)));
  lVar1 = param_1 + *(int *)(param_2 + 0xb0);
  if (*(long *)(lVar1 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x20));
    if (*(char *)(lVar1 + 0x30) != -1) {
      FUN_1044a3be4(*(undefined8 *)(lVar1 + 0x28));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x40));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x68));
  }
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xb4)));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xb8)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xc0)));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xcc)));
  return;
}



/* Entry: 1044a3be4; end: 1044a3bf3;  */

void FUN_1044a3be4(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1044a3bf4; end: 1044a620b;  */

undefined8 * FUN_1044a3bf4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  code *pcVar28;
  
  uVar21 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar21;
  uVar21 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar21;
  cVar12 = *(char *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar21);
  if (cVar12 == -1) {
    uVar21 = param_2[0xc];
    uVar24 = param_2[0xf];
    uVar23 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar21;
    param_1[0xf] = uVar24;
    param_1[0xe] = uVar23;
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    uVar21 = param_2[4];
    uVar24 = param_2[7];
    uVar23 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar21;
    param_1[7] = uVar24;
    param_1[6] = uVar23;
    uVar24 = param_2[8];
    uVar23 = param_2[0xb];
    uVar21 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar24;
    param_1[0xb] = uVar23;
    param_1[10] = uVar21;
  }
  else {
    uVar21 = param_2[4];
    uVar5 = param_2[5];
    uVar23 = param_2[6];
    uVar6 = param_2[7];
    uVar24 = param_2[8];
    uVar7 = param_2[9];
    uVar3 = param_2[10];
    uVar8 = param_2[0xb];
    uVar4 = param_2[0xc];
    uVar9 = param_2[0xd];
    uVar25 = param_2[0xe];
    uVar10 = param_2[0xf];
    func_0x0001044a1224(uVar21,uVar5,uVar23,uVar6,uVar24,uVar7,uVar3,uVar8,uVar4,uVar9,uVar25,uVar10
                        ,cVar12);
    param_1[4] = uVar21;
    param_1[5] = uVar5;
    param_1[6] = uVar23;
    param_1[7] = uVar6;
    param_1[8] = uVar24;
    param_1[9] = uVar7;
    param_1[10] = uVar3;
    param_1[0xb] = uVar8;
    param_1[0xc] = uVar4;
    param_1[0xd] = uVar9;
    param_1[0xe] = uVar25;
    param_1[0xf] = uVar10;
    *(char *)(param_1 + 0x10) = cVar12;
  }
  lVar13 = param_2[0x12];
  if (lVar13 == 1) {
    uVar21 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar21;
    uVar21 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar21;
    uVar21 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar21;
    uVar21 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar21;
    uVar21 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar21;
    uVar21 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar21;
    uVar21 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar21;
  }
  else {
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = lVar13;
    uVar21 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = uVar21;
    uVar23 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = uVar23;
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
    uVar24 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar24;
    uVar3 = param_2[0x1b];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = uVar3;
    uVar4 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar4;
    uVar25 = param_2[0x1e];
    param_1[0x1e] = uVar25;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(uVar25);
  }
  uVar21 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar21;
  lVar13 = param_2[0x22];
  _objc_retain();
  _objc_retain(uVar21);
  if (lVar13 == 1) {
    uVar21 = param_2[0x25];
    uVar24 = param_2[0x28];
    uVar23 = param_2[0x27];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar21;
    param_1[0x28] = uVar24;
    param_1[0x27] = uVar23;
    uVar21 = param_2[0x29];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x29] = uVar21;
    uVar24 = param_2[0x21];
    uVar23 = param_2[0x24];
    uVar21 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar24;
    param_1[0x24] = uVar23;
    param_1[0x23] = uVar21;
  }
  else {
    param_1[0x21] = param_2[0x21];
    param_1[0x22] = lVar13;
    uVar21 = param_2[0x24];
    param_1[0x23] = param_2[0x23];
    param_1[0x24] = uVar21;
    uVar23 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    param_1[0x26] = uVar23;
    uVar24 = param_2[0x28];
    param_1[0x27] = param_2[0x27];
    param_1[0x28] = uVar24;
    uVar3 = param_2[0x2a];
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = uVar3;
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar3);
  }
  uVar21 = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = uVar21;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar13 = 0;
  FUN_1044a8f6c();
  lVar19 = *(long *)(lVar13 + -8);
  puVar14 = puVar2;
  (**(code **)(lVar19 + 0x30))(puVar2,1,lVar13);
  if ((int)puVar14 == 0) {
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    lVar17 = (long)*(int *)(lVar13 + 0x18);
    lVar15 = 0;
    __s10Foundation4DateVMa();
    lVar26 = *(long *)(lVar15 + -8);
    pcVar28 = *(code **)(lVar26 + 0x30);
    lVar16 = (long)puVar2 + lVar17;
    (*pcVar28)(lVar16,1,lVar15);
    if ((int)lVar16 == 0) {
      (**(code **)(lVar26 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar15);
      (**(code **)(lVar26 + 0x38))((long)puVar1 + lVar17,0,1,lVar15);
    }
    else {
      lVar16 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
              *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    }
    lVar17 = (long)*(int *)(lVar13 + 0x1c);
    lVar16 = (long)puVar2 + lVar17;
    (*pcVar28)(lVar16,1,lVar15);
    if ((int)lVar16 == 0) {
      (**(code **)(lVar26 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar15);
      (**(code **)(lVar26 + 0x38))((long)puVar1 + lVar17,0,1,lVar15);
    }
    else {
      lVar16 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
              *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    }
    (**(code **)(lVar19 + 0x38))(puVar1,0,1,lVar13);
  }
  else {
    lVar13 = 0x11307eae8;
    func_0x0001000285a8(0x11307eae8,&UNK_10dd0a560);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  lVar13 = puVar2[2];
  if (lVar13 == 1) {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[2] = puVar2[2];
  }
  else {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[2] = lVar13;
    _swift_bridgeObjectRetain();
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  lVar13 = 0;
  FUN_1044a7e5c();
  lVar19 = *(long *)(lVar13 + -8);
  puVar14 = puVar2;
  (**(code **)(lVar19 + 0x30))(puVar2,1,lVar13);
  if ((int)puVar14 == 0) {
    uVar21 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar21;
    lVar16 = (long)puVar1 + (long)*(int *)(lVar13 + 0x14);
    lVar15 = (long)puVar2 + (long)*(int *)(lVar13 + 0x14);
    lVar17 = 0;
    FUN_1044a2458();
    lVar27 = *(long *)(lVar17 + -8);
    pcVar28 = *(code **)(lVar27 + 0x30);
    _swift_bridgeObjectRetain(uVar21);
    lVar26 = lVar15;
    (*pcVar28)(lVar15,1,lVar17);
    if ((int)lVar26 == 0) {
      lVar18 = 0;
      __s10Foundation4DateVMa();
      lVar20 = *(long *)(lVar18 + -8);
      lVar26 = lVar15;
      (**(code **)(lVar20 + 0x30))(lVar15,1,lVar18);
      if ((int)lVar26 == 0) {
        (**(code **)(lVar20 + 0x10))(lVar16,lVar15,lVar18);
        (**(code **)(lVar20 + 0x38))(lVar16,0,1,lVar18);
      }
      else {
        lVar26 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        _memcpy(lVar16,lVar15,*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
      }
      *(undefined8 *)(lVar16 + *(int *)(lVar17 + 0x14)) =
           *(undefined8 *)(lVar15 + *(int *)(lVar17 + 0x14));
      (**(code **)(lVar27 + 0x38))(lVar16,0,1,lVar17);
    }
    else {
      lVar26 = 0x11307eb00;
      func_0x0001000285a8(0x11307eb00,&UNK_10dd09e20);
      _memcpy(lVar16,lVar15,*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x18));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x18));
    uVar21 = puVar2[1];
    *puVar14 = *puVar2;
    puVar14[1] = uVar21;
    pcVar28 = *(code **)(lVar19 + 0x38);
    _swift_bridgeObjectRetain();
    (*pcVar28)(puVar1,0,1,lVar13);
  }
  else {
    lVar13 = 0x11307eaf0;
    func_0x0001000285a8(0x11307eaf0,&UNK_10dd09c60);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  iVar11 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar22 = puVar2[1];
  if (uVar22 >> 0x3c < 0xf) {
    uVar21 = *puVar2;
    func_0x00010006c00c(uVar21,uVar22);
    *puVar1 = uVar21;
    puVar1[1] = uVar22;
  }
  else {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
  }
  iVar11 = *(int *)(param_3 + 0x4c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
  uVar22 = puVar2[1];
  if (uVar22 >> 0x3c < 0xf) {
    uVar21 = *puVar2;
    func_0x00010006c00c(uVar21,uVar22);
    *puVar1 = uVar21;
    puVar1[1] = uVar22;
  }
  else {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  lVar13 = puVar2[1];
  if (lVar13 == 1) {
    uVar21 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
    puVar1[4] = puVar2[4];
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar13;
    uVar21 = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[2] = uVar21;
    uVar21 = puVar2[4];
    puVar1[4] = uVar21;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
  lVar13 = puVar2[1];
  if (lVar13 == 1) {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar13;
    _swift_bridgeObjectRetain();
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x58));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  lVar13 = puVar2[2];
  if (lVar13 == 1) {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[2] = puVar2[2];
  }
  else {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[2] = lVar13;
    _swift_bridgeObjectRetain();
  }
  iVar11 = *(int *)(param_3 + 0x60);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  *(undefined1 *)((long)param_1 + (long)iVar11) = *(undefined1 *)((long)param_2 + (long)iVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
  lVar13 = puVar2[1];
  if (lVar13 == 1) {
    uVar21 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
  }
  else {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
    *(undefined2 *)((long)puVar1 + 1) = *(undefined2 *)((long)puVar2 + 1);
    uVar21 = puVar2[2];
    uVar23 = puVar2[3];
    puVar1[1] = lVar13;
    puVar1[2] = uVar21;
    puVar1[3] = uVar23;
    _swift_bridgeObjectRetain();
    _objc_retain(uVar21);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x68));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  uVar22 = puVar2[1];
  if (uVar22 >> 0x3c < 0xf) {
    uVar21 = *puVar2;
    func_0x00010006c00c(uVar21,uVar22);
    *puVar1 = uVar21;
    puVar1[1] = uVar22;
  }
  else {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  lVar13 = puVar2[1];
  if (lVar13 == 1) {
    uVar21 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
    uVar21 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar21;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar13;
    uVar21 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar21;
    uVar23 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar23;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar23);
  }
  iVar11 = *(int *)(param_3 + 0x74);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x70));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  uVar21 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar21;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
  uVar22 = puVar2[1];
  _swift_bridgeObjectRetain();
  if (uVar22 >> 0x3c < 0xf) {
    uVar21 = *puVar2;
    func_0x00010006c00c(uVar21,uVar22);
    *puVar1 = uVar21;
    puVar1[1] = uVar22;
  }
  else {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  lVar13 = puVar2[1];
  if (lVar13 == 1) {
    uVar21 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar2 + 4);
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar13;
    uVar21 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar21;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar2 + 4);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
  }
  iVar11 = *(int *)(param_3 + 0x80);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x7c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x7c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar11 = *(int *)(param_3 + 0x88);
  uVar21 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x84));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x84)) = uVar21;
  *(undefined1 *)((long)param_1 + (long)iVar11) = *(undefined1 *)((long)param_2 + (long)iVar11);
  iVar11 = *(int *)(param_3 + 0x90);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x8c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x8c));
  *(undefined1 *)((long)param_1 + (long)iVar11) = *(undefined1 *)((long)param_2 + (long)iVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x94));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x94));
  uVar22 = puVar2[1];
  _objc_retain();
  _objc_retain(uVar21);
  if (uVar22 >> 0x3c < 0xf) {
    uVar21 = *puVar2;
    func_0x00010006c00c(uVar21,uVar22);
    *puVar1 = uVar21;
    puVar1[1] = uVar22;
  }
  else {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
  }
  iVar11 = *(int *)(param_3 + 0x9c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x98)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x98));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
  uVar22 = puVar2[1];
  _objc_retain();
  if (uVar22 >> 0x3c < 0xf) {
    uVar21 = *puVar2;
    func_0x00010006c00c(uVar21,uVar22);
    *puVar1 = uVar21;
    puVar1[1] = uVar22;
  }
  else {
    uVar21 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
  }
  iVar11 = *(int *)(param_3 + 0xa4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa0));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa0));
  uVar21 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar21;
  uVar21 = *(undefined8 *)((long)param_2 + (long)iVar11);
  *(undefined8 *)((long)param_1 + (long)iVar11) = uVar21;
  iVar11 = *(int *)(param_3 + 0xac);
  uVar23 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa8));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa8)) = uVar23;
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb0));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb0));
  lVar13 = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRetain(uVar23);
  if (lVar13 == 0) {
    uVar21 = puVar2[8];
    uVar24 = puVar2[0xb];
    uVar23 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar21;
    puVar1[0xb] = uVar24;
    puVar1[10] = uVar23;
    uVar21 = puVar2[0xc];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar21;
    uVar21 = *puVar2;
    uVar24 = puVar2[3];
    uVar23 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar21;
    puVar1[3] = uVar24;
    puVar1[2] = uVar23;
    uVar24 = puVar2[4];
    uVar23 = puVar2[7];
    uVar21 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar24;
    puVar1[7] = uVar23;
    puVar1[6] = uVar21;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar13;
    uVar21 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar21;
    uVar23 = puVar2[4];
    puVar1[4] = uVar23;
    cVar12 = *(char *)(puVar2 + 6);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar23);
    if (cVar12 == -1) {
      puVar1[5] = puVar2[5];
      *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 6);
    }
    else {
      uVar21 = puVar2[5];
      FUN_1044a372c(uVar21,cVar12);
      puVar1[5] = uVar21;
      *(char *)(puVar1 + 6) = cVar12;
    }
    uVar21 = puVar2[8];
    puVar1[7] = puVar2[7];
    puVar1[8] = uVar21;
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(puVar2 + 9);
    *(undefined1 *)((long)puVar1 + 0x4c) = *(undefined1 *)((long)puVar2 + 0x4c);
    *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(puVar2 + 10);
    uVar21 = puVar2[0xb];
    puVar1[0xb] = uVar21;
    *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
    uVar23 = puVar2[0xd];
    puVar1[0xd] = uVar23;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar23);
  }
  iVar11 = *(int *)(param_3 + 0xb8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb4));
  uVar21 = *(undefined8 *)((long)param_2 + (long)iVar11);
  *(undefined8 *)((long)param_1 + (long)iVar11) = uVar21;
  iVar11 = *(int *)(param_3 + 0xc0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xbc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xbc));
  uVar23 = *(undefined8 *)((long)param_2 + (long)iVar11);
  *(undefined8 *)((long)param_1 + (long)iVar11) = uVar23;
  iVar11 = *(int *)(param_3 + 200);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xc4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xc4));
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  iVar11 = *(int *)(param_3 + 0xd0);
  uVar24 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xcc));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xcc)) = uVar24;
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd4));
  _objc_retain();
  _objc_retain(uVar21);
  _swift_bridgeObjectRetain(uVar23);
  _objc_retain(uVar24);
  return param_1;
}



/* Entry: 1044a620c; end: 1044a64b7;  */

undefined8 FUN_1044a620c(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044a1398)();
  return param_1;
}



/* Entry: 1044a64b8; end: 1044a7c5b;  */

undefined8 * FUN_1044a64b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[0xc];
  uVar17 = param_2[0xf];
  uVar16 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar15;
  param_1[0xf] = uVar17;
  param_1[0xe] = uVar16;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar17 = param_2[8];
  uVar16 = param_2[0xb];
  uVar15 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar17;
  param_1[0xb] = uVar16;
  param_1[10] = uVar15;
  uVar15 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar15;
  uVar15 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar15;
  uVar15 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar15;
  uVar15 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar15;
  uVar15 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar15;
  uVar15 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar15;
  uVar15 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar15;
  uVar16 = param_2[0x20];
  uVar15 = param_2[0x1f];
  uVar18 = param_2[0x22];
  uVar17 = param_2[0x21];
  uVar20 = param_2[0x24];
  uVar19 = param_2[0x23];
  uVar23 = param_2[0x27];
  uVar22 = param_2[0x2a];
  uVar21 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar23;
  param_1[0x2a] = uVar22;
  param_1[0x29] = uVar21;
  uVar22 = param_2[0x26];
  uVar21 = param_2[0x25];
  param_1[0x24] = uVar20;
  param_1[0x23] = uVar19;
  param_1[0x26] = uVar22;
  param_1[0x25] = uVar21;
  param_1[0x22] = uVar18;
  param_1[0x21] = uVar17;
  uVar17 = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = uVar17;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  param_1[0x20] = uVar16;
  param_1[0x1f] = uVar15;
  lVar4 = 0;
  FUN_1044a8f6c();
  lVar11 = *(long *)(lVar4 + -8);
  puVar5 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar4);
  if ((int)puVar5 == 0) {
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    lVar13 = (long)*(int *)(lVar4 + 0x18);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    lVar8 = *(long *)(lVar6 + -8);
    pcVar10 = *(code **)(lVar8 + 0x30);
    lVar7 = (long)puVar2 + lVar13;
    (*pcVar10)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar6);
      (**(code **)(lVar8 + 0x38))((long)puVar1 + lVar13,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar1 + lVar13,(long)puVar2 + lVar13,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    lVar13 = (long)*(int *)(lVar4 + 0x1c);
    lVar7 = (long)puVar2 + lVar13;
    (*pcVar10)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar6);
      (**(code **)(lVar8 + 0x38))((long)puVar1 + lVar13,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)puVar1 + lVar13,(long)puVar2 + lVar13,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar4);
  }
  else {
    lVar4 = 0x11307eae8;
    func_0x0001000285a8(0x11307eae8,&UNK_10dd0a560);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar15 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar15;
  puVar1[2] = puVar2[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  lVar4 = 0;
  FUN_1044a7e5c();
  lVar11 = *(long *)(lVar4 + -8);
  puVar5 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar4);
  if ((int)puVar5 == 0) {
    uVar15 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar15;
    lVar7 = (long)puVar1 + (long)*(int *)(lVar4 + 0x14);
    lVar6 = (long)puVar2 + (long)*(int *)(lVar4 + 0x14);
    lVar8 = 0;
    FUN_1044a2458();
    lVar12 = *(long *)(lVar8 + -8);
    lVar13 = lVar6;
    (**(code **)(lVar12 + 0x30))(lVar6,1,lVar8);
    if ((int)lVar13 == 0) {
      lVar9 = 0;
      __s10Foundation4DateVMa();
      lVar14 = *(long *)(lVar9 + -8);
      lVar13 = lVar6;
      (**(code **)(lVar14 + 0x30))(lVar6,1,lVar9);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar14 + 0x20))(lVar7,lVar6,lVar9);
        (**(code **)(lVar14 + 0x38))(lVar7,0,1,lVar9);
      }
      else {
        lVar13 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        _memcpy(lVar7,lVar6,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      *(undefined8 *)(lVar7 + *(int *)(lVar8 + 0x14)) =
           *(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x14));
      (**(code **)(lVar12 + 0x38))(lVar7,0,1,lVar8);
    }
    else {
      lVar13 = 0x11307eb00;
      func_0x0001000285a8(0x11307eb00,&UNK_10dd09e20);
      _memcpy(lVar7,lVar6,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar4 + 0x18));
    uVar15 = *puVar2;
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x18));
    puVar5[1] = puVar2[1];
    *puVar5 = uVar15;
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar4);
  }
  else {
    lVar4 = 0x11307eaf0;
    func_0x0001000285a8(0x11307eaf0,&UNK_10dd09c60);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x48);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x50);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar2;
  uVar17 = puVar2[3];
  uVar16 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar15;
  puVar1[3] = uVar17;
  puVar1[2] = uVar16;
  puVar1[4] = puVar2[4];
  iVar3 = *(int *)(param_3 + 0x58);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar15;
  puVar1[2] = puVar2[2];
  iVar3 = *(int *)(param_3 + 0x60);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x68);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
  uVar15 = *puVar2;
  uVar17 = puVar2[3];
  uVar16 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar15;
  puVar1[3] = uVar17;
  puVar1[2] = uVar16;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  iVar3 = *(int *)(param_3 + 0x70);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  uVar15 = *puVar2;
  uVar17 = puVar2[3];
  uVar16 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar15;
  puVar1[3] = uVar17;
  puVar1[2] = uVar16;
  uVar15 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar15;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  iVar3 = *(int *)(param_3 + 0x78);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x74));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x74));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar16 = puVar2[1];
  uVar15 = *puVar2;
  uVar18 = puVar2[3];
  uVar17 = puVar2[2];
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar2 + 4);
  puVar1[1] = uVar16;
  *puVar1 = uVar15;
  puVar1[3] = uVar18;
  puVar1[2] = uVar17;
  iVar3 = *(int *)(param_3 + 0x80);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x7c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x7c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar3 = *(int *)(param_3 + 0x88);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x84)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x84));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x90);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x8c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x8c));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x98);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x94));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x94));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0xa0);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  iVar3 = *(int *)(param_3 + 0xa8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0xb0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xac)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar2;
  uVar17 = puVar2[3];
  uVar16 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar15;
  puVar1[3] = uVar17;
  puVar1[2] = uVar16;
  uVar15 = puVar2[10];
  uVar17 = puVar2[0xd];
  uVar16 = puVar2[0xc];
  puVar1[0xb] = puVar2[0xb];
  puVar1[10] = uVar15;
  puVar1[0xd] = uVar17;
  puVar1[0xc] = uVar16;
  uVar15 = puVar2[6];
  uVar17 = puVar2[9];
  uVar16 = puVar2[8];
  puVar1[7] = puVar2[7];
  puVar1[6] = uVar15;
  puVar1[9] = uVar17;
  puVar1[8] = uVar16;
  uVar15 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar15;
  iVar3 = *(int *)(param_3 + 0xb8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb4));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0xc0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xbc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xbc));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 200);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xc4)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xc4));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0xd0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xcc)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xcc));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd4));
  return param_1;
}



/* Entry: 1044a7c5c; end: 1044a7c73;  */

void FUN_1044a7c5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1044a7c74; end: 1044a7e0f;  */

void FUN_1044a7c74(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_1d0 = &UNK_10dd09ca0;
  puStack_1c8 = &UNK_10dd09ca0;
  puStack_1c0 = &UNK_10dd09cb8;
  puStack_1b8 = &UNK_10dd09cd0;
  puStack_1b0 = &UNK_10dd09ce8;
  puStack_1a8 = &UNK_10dd09ce8;
  puStack_1a0 = &UNK_10dd09d00;
  puStack_198 = &UNK_10dd09d18;
  uVar2 = 0x11307eb70;
  lVar1 = 0x13f;
  FUN_1044a7e10(0x13f,0x11307eb70,FUN_1044a8f6c);
  if (uVar2 < 0x40) {
    lStack_190 = *(long *)(lVar1 + -8) + 0x40;
    puStack_188 = &UNK_10dd09d30;
    uVar2 = 0x11307eb78;
    lVar1 = 0x13f;
    FUN_1044a7e10(0x13f,0x11307eb78,FUN_1044a7e5c);
    if (uVar2 < 0x40) {
      lStack_180 = *(long *)(lVar1 + -8) + 0x40;
      puStack_178 = PTR___sBi64_WV_11034d670 + 0x40;
      puStack_168 = &UNK_10dd09d48;
      puStack_160 = &UNK_10dd09d60;
      puStack_158 = &UNK_10dd09d48;
      puStack_150 = &UNK_10dd09d78;
      puStack_148 = &UNK_10dd09d90;
      puStack_140 = &UNK_10dd09d30;
      puStack_138 = &UNK_10dd09d60;
      puStack_130 = &UNK_10dd09d60;
      puStack_128 = &UNK_10dd09da8;
      puStack_120 = &UNK_10dd09d48;
      puStack_118 = &UNK_10dd09dc0;
      puStack_110 = &UNK_10dd09ca0;
      puStack_108 = &UNK_10dd09d48;
      puStack_100 = &UNK_10dd09dd8;
      puStack_f8 = &UNK_10dd09ce8;
      puStack_f0 = &UNK_10dd09df0;
      puStack_e8 = &UNK_10dd09ce8;
      puStack_e0 = &UNK_10dd09d60;
      puStack_d8 = &UNK_10dd09d60;
      puStack_d0 = &UNK_10dd09d60;
      puStack_c8 = &UNK_10dd09d48;
      puStack_c0 = &UNK_10dd09ce8;
      puStack_b8 = &UNK_10dd09d48;
      puStack_b0 = &UNK_10dd09ca0;
      puStack_a8 = &UNK_10dd09ce8;
      puStack_a0 = &UNK_10dd09ce8;
      puStack_90 = &UNK_10dd09e08;
      puStack_88 = &UNK_10dd09ce8;
      puStack_80 = &UNK_10dd09ce8;
      puStack_78 = &UNK_10dd09d60;
      puStack_70 = &UNK_10dd09ce8;
      puStack_58 = &UNK_10dd09ce8;
      puStack_48 = &UNK_10dd09d60;
      puStack_170 = puStack_178;
      puStack_98 = puStack_178;
      puStack_68 = puStack_178;
      puStack_60 = puStack_178;
      puStack_50 = puStack_178;
      _swift_initStructMetadata(param_1,0x100,0x32,&puStack_1d0,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 1044a7e10; end: 1044a7e5b;  */

void FUN_1044a7e10(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    __sSqMa();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 1044a7e5c; end: 1044a7e93;  */

void FUN_1044a7e5c(undefined8 param_1)

{
  if (lRam000000011307ecc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80c7bc);
  return;
}



/* Entry: 1044a7e94; end: 1044a8033;  */

long * FUN_1044a7e94(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    lVar8 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
    lVar1 = (long)param_2 + (long)*(int *)(param_3 + 0x14);
    lVar6 = 0;
    FUN_1044a2458();
    lVar11 = *(long *)(lVar6 + -8);
    pcVar12 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(lVar7);
    lVar7 = lVar1;
    (*pcVar12)(lVar1,1,lVar6);
    if ((int)lVar7 == 0) {
      lVar9 = 0;
      __s10Foundation4DateVMa();
      lVar13 = *(long *)(lVar9 + -8);
      lVar7 = lVar1;
      (**(code **)(lVar13 + 0x30))(lVar1,1,lVar9);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar13 + 0x10))(lVar8,lVar1,lVar9);
        (**(code **)(lVar13 + 0x38))(lVar8,0,1,lVar9);
      }
      else {
        lVar7 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        _memcpy(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      *(undefined8 *)(lVar8 + *(int *)(lVar6 + 0x14)) =
           *(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14));
      (**(code **)(lVar11 + 0x38))(lVar8,0,1,lVar6);
    }
    else {
      lVar7 = 0x11307eb00;
      func_0x0001000285a8(0x11307eb00,&UNK_10dd09e20);
      _memcpy(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar4 = puVar3[1];
    *puVar2 = *puVar3;
    puVar2[1] = uVar4;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1044a8034; end: 1044a80d7;  */

void FUN_1044a8034(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar3 = (long)*(int *)(param_2 + 0x14);
  lVar1 = 0;
  FUN_1044a2458();
  lVar2 = param_1 + lVar3;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
    lVar4 = *(long *)(lVar1 + -8);
    lVar2 = param_1 + lVar3;
    (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
    if ((int)lVar2 == 0) {
      (**(code **)(lVar4 + 8))(param_1 + lVar3,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  return;
}



/* Entry: 1044a80d8; end: 1044a84db;  */

undefined8 * FUN_1044a80d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x14);
  lVar5 = 0;
  FUN_1044a2458();
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar4);
  lVar6 = lVar2;
  (*pcVar9)(lVar2,1,lVar5);
  if ((int)lVar6 == 0) {
    lVar7 = 0;
    __s10Foundation4DateVMa();
    lVar10 = *(long *)(lVar7 + -8);
    lVar6 = lVar2;
    (**(code **)(lVar10 + 0x30))(lVar2,1,lVar7);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar10 + 0x10))(lVar1,lVar2,lVar7);
      (**(code **)(lVar10 + 0x38))(lVar1,0,1,lVar7);
    }
    else {
      lVar6 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    *(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14)) =
         *(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14));
    (**(code **)(lVar8 + 0x38))(lVar1,0,1,lVar5);
  }
  else {
    lVar6 = 0x11307eb00;
    func_0x0001000285a8(0x11307eb00,&UNK_10dd09e20);
    _memcpy(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar4 = param_2[1];
  *puVar3 = *param_2;
  puVar3[1] = uVar4;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1044a84dc; end: 1044a8517;  */

undefined8 FUN_1044a84dc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1044a2458();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1044a8518; end: 1044a88e7;  */

undefined8 * FUN_1044a8518(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x14);
  lVar4 = 0;
  FUN_1044a2458();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = lVar2;
  (**(code **)(lVar7 + 0x30))(lVar2,1,lVar4);
  if ((int)lVar5 == 0) {
    lVar6 = 0;
    __s10Foundation4DateVMa();
    lVar8 = *(long *)(lVar6 + -8);
    lVar5 = lVar2;
    (**(code **)(lVar8 + 0x30))(lVar2,1,lVar6);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x20))(lVar1,lVar2,lVar6);
      (**(code **)(lVar8 + 0x38))(lVar1,0,1,lVar6);
    }
    else {
      lVar5 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    *(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x14)) =
         *(undefined8 *)(lVar2 + *(int *)(lVar4 + 0x14));
    (**(code **)(lVar7 + 0x38))(lVar1,0,1,lVar4);
  }
  else {
    lVar5 = 0x11307eb00;
    func_0x0001000285a8(0x11307eb00,&UNK_10dd09e20);
    _memcpy(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar9 = *param_2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar3[1] = param_2[1];
  *puVar3 = uVar9;
  return param_1;
}



/* Entry: 1044a88e8; end: 1044a88ff;  */

void FUN_1044a88e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1044a8900; end: 1044a89c7;  */

void FUN_1044a8900(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10dd09e50;
  lVar1 = 0x13f;
  func_0x0001044a8974();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd09e50;
    _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 1044a89c8; end: 1044a8f6b;  */

void FUN_1044a89c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1044a8f6c; end: 1044a8fa3;  */

void FUN_1044a8f6c(undefined8 param_1)

{
  if (lRam000000011307ed60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80c838);
  return;
}



/* Entry: 1044a8fa4; end: 1044a9113;  */

long * FUN_1044a8fa4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    *(char *)(param_1 + 1) = (char)param_2[1];
    lVar7 = (long)*(int *)(param_3 + 0x18);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar5 = *(long *)(lVar2 + -8);
    pcVar6 = *(code **)(lVar5 + 0x30);
    lVar3 = (long)param_2 + lVar7;
    (*pcVar6)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar2);
      (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    lVar7 = (long)*(int *)(param_3 + 0x1c);
    lVar3 = (long)param_2 + lVar7;
    (*pcVar6)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar2);
      (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1044a9114; end: 1044a91b7;  */

void FUN_1044a9114(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001044a91b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1044a91b8; end: 1044a97d7;  */

undefined8 * FUN_1044a91b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  lVar5 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar1 + -8);
  pcVar4 = *(code **)(lVar3 + 0x30);
  lVar2 = (long)param_2 + lVar5;
  (*pcVar4)(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
    (**(code **)(lVar3 + 0x38))((long)param_1 + lVar5,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  lVar2 = (long)param_2 + lVar5;
  (*pcVar4)(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
    (**(code **)(lVar3 + 0x38))((long)param_1 + lVar5,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1044a97d8; end: 1044a97ef;  */

void FUN_1044a97d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}


