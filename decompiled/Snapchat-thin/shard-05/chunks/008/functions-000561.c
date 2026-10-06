/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10422cce8; end: 10422cd47; -[SCAdTrackInfo withContext:] */

void FUN_10422cce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10422caf0(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10422cd48; end: 10422ce33; -[SCAdTrackInfo withAdNotInterested:] */

void FUN_10422cd48(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_47b0 [6096];
  undefined1 auStack_2fe0 [6024];
  undefined1 uStack_1858;
  undefined1 auStack_1810 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042af544(auStack_2fe0);
  uStack_1858 = param_3;
  _memcpy(auStack_1810,auStack_2fe0,0x17d0);
  _objc_allocWithZone(uVar1);
  func_0x000101897da8(auStack_1810,auStack_47b0);
  puVar2 = auStack_1810;
  FUN_1042aeda0(puVar2);
  func_0x000101897de4(auStack_1810);
  _objc_release(param_1);
  func_0x000101897de4(auStack_2fe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10422ce34; end: 10422cf6f; -[SCAdTrackInfo withOpenedProfileId:] */

void FUN_10422ce34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_5f90 [6096];
  undefined1 auStack_47c0 [6032];
  long lStack_3030;
  undefined8 uStack_3028;
  undefined1 auStack_2ff0 [6032];
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined1 auStack_1810 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
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
  FUN_1042af544(auStack_2ff0);
  uStack_1818 = uStack_1858;
  uStack_1820 = uStack_1860;
  func_0x00010423c684(&uStack_1820,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_47c0,auStack_2ff0,0x17d0);
  lStack_3030 = param_3;
  uStack_3028 = param_2;
  _memcpy(auStack_1810,auStack_47c0,0x17d0);
  _objc_allocWithZone(uVar1);
  func_0x000101897da8(auStack_1810,auStack_5f90);
  puVar2 = auStack_1810;
  FUN_1042aeda0(puVar2);
  func_0x000101897de4(auStack_1810);
  _objc_release(param_1);
  func_0x000101897de4(auStack_47c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10422cf70; end: 10422d12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10422cf70(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_5fc0 [6096];
  undefined1 auStack_47f0 [6048];
  ulong uStack_3050;
  undefined8 uStack_3048;
  undefined8 uStack_3040;
  undefined8 uStack_3038;
  ulong uStack_3030;
  undefined8 uStack_3028;
  undefined1 auStack_3020 [6048];
  undefined8 uStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined1 auStack_1820 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_1042af544(auStack_3020);
  uStack_1848 = uStack_1878;
  uStack_1850 = uStack_1880;
  uStack_1838 = uStack_1868;
  uStack_1840 = uStack_1870;
  uStack_1828 = uStack_1858;
  uStack_1830 = uStack_1860;
  func_0x00010423c684(&uStack_1850,0x112dcda98,&UNK_10d990140);
  _memcpy(auStack_47f0,auStack_3020,0x17a0);
  if (param_1 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar3 = 1;
    uVar2 = 0;
  }
  else {
    uVar4 = (ulong)*(byte *)(param_1 + _DAT_11306a478);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11306a480);
    uVar6 = (ulong)*(byte *)(param_1 + _DAT_11306a490);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11306a488);
    uVar3 = ((undefined8 *)(param_1 + _DAT_11306a488))[1];
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a498);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
  }
  uStack_3050 = uVar4;
  uStack_3048 = uVar5;
  uStack_3040 = uVar7;
  uStack_3038 = uVar3;
  uStack_3030 = uVar6;
  uStack_3028 = uVar2;
  _memcpy(auStack_1820,auStack_47f0,0x17d0);
  _objc_allocWithZone(unaff_x20);
  func_0x000101897da8(auStack_1820,auStack_5fc0);
  puVar1 = auStack_1820;
  FUN_1042aeda0(puVar1);
  func_0x000101897de4(auStack_1820);
  func_0x000101897de4(auStack_47f0);
  return puVar1;
}



/* Entry: 10422d12c; end: 10422d18b; -[SCAdTrackInfo withAdArShoppingExperienceTrackInfo:] */

void FUN_10422d12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10422cf70(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10422d18c; end: 10422e1a7;  */

undefined8 FUN_10422d18c(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uStack_9f60;
  undefined8 uStack_9f58;
  undefined8 uStack_9f50;
  undefined8 uStack_9f48;
  undefined8 uStack_9f40;
  undefined8 uStack_9f38;
  undefined8 uStack_9f30;
  undefined8 uStack_9f28;
  undefined8 uStack_93e0;
  undefined8 uStack_93d8;
  undefined8 uStack_93d0;
  undefined8 uStack_93c8;
  undefined8 uStack_93c0;
  undefined8 uStack_93b8;
  undefined8 uStack_93b0;
  undefined8 uStack_93a8;
  undefined8 uStack_8860;
  undefined8 uStack_8858;
  undefined8 uStack_8850;
  undefined8 uStack_8848;
  undefined8 uStack_8840;
  undefined8 uStack_8838;
  long lStack_8830;
  long lStack_8828;
  undefined8 uStack_8820;
  undefined8 uStack_8818;
  undefined8 uStack_8810;
  undefined8 uStack_8808;
  undefined8 uStack_8800;
  undefined8 uStack_87f8;
  undefined8 uStack_87f0;
  long lStack_87e8;
  byte abStack_7ce0 [8];
  undefined8 uStack_7cd8;
  undefined8 uStack_7cd0;
  long lStack_7cc8;
  byte bStack_7cc0;
  undefined8 uStack_7cb8;
  undefined8 uStack_7ca0;
  undefined8 uStack_7c98;
  undefined8 uStack_7c90;
  undefined8 uStack_7c88;
  undefined8 uStack_7c80;
  undefined8 uStack_7c78;
  long lStack_7c70;
  undefined8 uStack_7c68;
  undefined8 auStack_7c60 [734];
  undefined8 uStack_6570;
  undefined8 uStack_6568;
  undefined8 uStack_6560;
  undefined8 uStack_6558;
  undefined8 uStack_6550;
  undefined8 uStack_6548;
  long lStack_6540;
  long lStack_6538;
  undefined8 uStack_6530;
  undefined8 uStack_6528;
  undefined8 uStack_6520;
  undefined8 uStack_6518;
  undefined8 uStack_6510;
  undefined8 uStack_6508;
  undefined8 uStack_6500;
  long lStack_64f8;
  undefined1 auStack_5ab8 [192];
  undefined1 auStack_59f8 [2936];
  undefined8 uStack_4e80;
  undefined8 uStack_4e78;
  undefined8 uStack_4e70;
  undefined8 uStack_4e68;
  undefined8 uStack_4e60;
  undefined8 uStack_4e58;
  undefined8 uStack_4e50;
  undefined8 uStack_4e48;
  undefined1 auStack_4e38 [2936];
  undefined1 auStack_42c0 [2936];
  undefined1 auStack_3748 [2744];
  undefined1 auStack_2c90 [2744];
  byte abStack_21d8 [8];
  undefined8 uStack_21d0;
  undefined8 uStack_21c8;
  long lStack_21c0;
  byte bStack_21b8;
  undefined8 uStack_21b0;
  byte abStack_21a8 [8];
  undefined8 uStack_21a0;
  long lStack_2198;
  undefined8 uStack_2190;
  undefined8 uStack_2188;
  byte abStack_2180 [8];
  undefined8 uStack_2178;
  long lStack_2170;
  undefined8 uStack_2168;
  undefined8 uStack_2160;
  undefined1 auStack_2158 [2936];
  undefined1 auStack_15e0 [2744];
  undefined1 auStack_b28 [2744];
  ulong uStack_70;
  
  if (((*param_1 != *param_2) || (param_1[2] != param_2[2])) ||
     (uStack_70 = (ulong)*(byte *)(param_2 + 4),
     ((*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1) != 0)) {
    return 0;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = *(ulong *)(param_1 + 6);
  lVar11 = *(long *)(param_2 + 6);
  if (uVar9 == 0) {
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (lVar11 == 0) {
      return 0;
    }
    func_0x000101c68d90(0);
    _objc_retain(lVar11);
    _objc_retain();
    uVar4 = uVar9;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar9);
    _objc_release(lVar11);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  _memcpy(auStack_2c90,param_1 + 8,0xab2);
  _memcpy(auStack_3748,param_2 + 8,0xab2);
  _memcpy(&uStack_6570,param_1 + 8,0xab2);
  _memcpy(auStack_5ab8,param_2 + 8,0xab2);
  iVar3 = (int)&uStack_6570;
  func_0x00010178e478();
  if (iVar3 != 1) {
    _memcpy(auStack_7c60,&uStack_6570,0xab2);
    iVar3 = (int)auStack_5ab8;
    func_0x00010178e478();
    if (iVar3 != 1) {
      _memcpy(auStack_2158,auStack_5ab8,0xab2);
      _memcpy(auStack_b28,auStack_5ab8,0xab2);
      _memcpy(auStack_15e0,auStack_7c60,0xab2);
      FUN_10422ae74(auStack_2c90,auStack_42c0,0x112dcbc88,&UNK_10d98e360);
      FUN_10422ae74(auStack_3748,auStack_42c0,0x112dcbc88,&UNK_10d98e360);
      puVar5 = auStack_15e0;
      FUN_1042211d0(puVar5,auStack_b28);
      func_0x00010423c684(auStack_2158,0x112dcbc88,&UNK_10d98e360);
      func_0x00010423c684(&uStack_6570,0x112dcbc88,&UNK_10d98e360);
      if (((ulong)puVar5 & 1) == 0) {
        return 0;
      }
      goto LAB_10422d4d8;
    }
LAB_10422d398:
    _memcpy(auStack_7c60,&uStack_6570,0x156a);
    FUN_10422ae74(auStack_2c90,auStack_2158,0x112dcbc88,&UNK_10d98e360);
    FUN_10422ae74(auStack_3748,auStack_2158,0x112dcbc88,&UNK_10d98e360);
    uVar10 = 0x113069a60;
    puVar8 = &UNK_10dce4b80;
LAB_10422d668:
    puVar7 = auStack_7c60;
    goto LAB_10422d670;
  }
  iVar3 = (int)auStack_5ab8;
  func_0x00010178e478();
  if (iVar3 != 1) goto LAB_10422d398;
  _memcpy(auStack_7c60,&uStack_6570,0xab2);
  FUN_10422ae74(auStack_2c90,auStack_2158,0x112dcbc88,&UNK_10d98e360);
  FUN_10422ae74(auStack_3748,auStack_2158,0x112dcbc88,&UNK_10d98e360);
  func_0x00010423c684(auStack_7c60,0x112dcbc88,&UNK_10d98e360);
LAB_10422d4d8:
  _memcpy(auStack_42c0,param_1 + 0x2b6,0xb78);
  _memcpy(auStack_4e38,param_2 + 0x2b6,0xb78);
  _memcpy(&uStack_6570,param_1 + 0x2b6,0xb78);
  _memcpy(auStack_59f8,param_2 + 0x2b6,0xb78);
  iVar3 = (int)&uStack_6570;
  func_0x0001018a5614();
  if (iVar3 == 1) {
    iVar3 = (int)auStack_59f8;
    func_0x0001018a5614();
    if (iVar3 != 1) {
LAB_10422d5f8:
      _memcpy(auStack_7c60,&uStack_6570,0x16f0);
      FUN_10422ae74(auStack_42c0,auStack_2158,0x112dcbc78,&UNK_10d98e350);
      FUN_10422ae74(auStack_4e38,auStack_2158,0x112dcbc78,&UNK_10d98e350);
      uVar10 = 0x113069a68;
      puVar8 = &UNK_10dce4b88;
      goto LAB_10422d668;
    }
    _memcpy(auStack_7c60,&uStack_6570,0xb78);
    FUN_10422ae74(auStack_42c0,auStack_2158,0x112dcbc78,&UNK_10d98e350);
    FUN_10422ae74(auStack_4e38,auStack_2158,0x112dcbc78,&UNK_10d98e350);
    func_0x00010423c684(auStack_7c60,0x112dcbc78,&UNK_10d98e350);
  }
  else {
    _memcpy(&uStack_8860,&uStack_6570,0xb78);
    iVar3 = (int)auStack_59f8;
    func_0x0001018a5614();
    if (iVar3 == 1) goto LAB_10422d5f8;
    _memcpy(&uStack_93e0,auStack_59f8,0xb78);
    _memcpy(auStack_7c60,auStack_59f8,0xb78);
    _memcpy(auStack_2158,&uStack_8860,0xb78);
    FUN_10422ae74(auStack_42c0,&uStack_9f60,0x112dcbc78,&UNK_10d98e350);
    FUN_10422ae74(auStack_4e38,&uStack_9f60,0x112dcbc78,&UNK_10d98e350);
    puVar5 = auStack_2158;
    FUN_1042689a0(puVar5,auStack_7c60);
    func_0x00010423c684(&uStack_93e0,0x112dcbc78,&UNK_10d98e350);
    func_0x00010423c684(&uStack_6570,0x112dcbc78,&UNK_10d98e350);
    if (((ulong)puVar5 & 1) == 0) {
      return 0;
    }
  }
  uVar15 = *(undefined8 *)(param_1 + 0x594);
  uVar18 = *(undefined8 *)(param_1 + 0x596);
  lVar11 = *(long *)(param_1 + 0x598);
  uVar13 = *(undefined8 *)(param_1 + 0x59a);
  uVar10 = *(undefined8 *)(param_1 + 0x59c);
  uVar24 = *(undefined8 *)(param_2 + 0x594);
  uVar25 = *(undefined8 *)(param_2 + 0x596);
  lVar21 = *(long *)(param_2 + 0x598);
  uVar22 = *(undefined8 *)(param_2 + 0x59a);
  uVar20 = *(undefined8 *)(param_2 + 0x59c);
  if (lVar11 == 1) {
    if (lVar21 != 1) {
LAB_10422d7a8:
      func_0x00010423c650(uVar24,uVar25,lVar21,uVar22,uVar20);
      func_0x00010423c650(uVar15,uVar18,lVar11,uVar13,uVar10);
      func_0x000101897e18(uVar15,uVar18,lVar11,uVar13,uVar10);
      func_0x000101897e18(uVar24,uVar25,lVar21,uVar22,uVar20);
      return 0;
    }
  }
  else {
    if (lVar21 == 1) goto LAB_10422d7a8;
    abStack_2180[0] = (byte)uVar24 & 1;
    abStack_21a8[0] = (byte)uVar15 & 1;
    pbVar6 = abStack_21a8;
    uStack_21a0 = uVar18;
    lStack_2198 = lVar11;
    uStack_2190 = uVar13;
    uStack_2188 = uVar10;
    uStack_2178 = uVar25;
    lStack_2170 = lVar21;
    uStack_2168 = uVar22;
    uStack_2160 = uVar20;
    FUN_1042184ac(pbVar6,abStack_2180);
    func_0x00010423c650(uVar24,uVar25,lVar21,uVar22,uVar20);
    func_0x00010423c650(uVar15,uVar18,lVar11,uVar13,uVar10);
    _swift_bridgeObjectRelease(lVar21);
    _swift_bridgeObjectRelease(uVar20);
    func_0x000101897e18(uVar15,uVar18,lVar11,uVar13,uVar10);
    if (((ulong)pbVar6 & 1) == 0) {
      return 0;
    }
  }
  uVar9 = *(ulong *)(param_2 + 0x59e);
  if ((*(ulong *)(param_1 + 0x59e) & 0xff) == 2) {
    if ((uVar9 & 0xff) != 2) {
      return 0;
    }
  }
  else {
    if ((uVar9 & 0xff) == 2) {
      return 0;
    }
    if ((((uint)uVar9 ^ (uint)*(ulong *)(param_1 + 0x59e)) & 1) != 0) {
      return 0;
    }
    if (param_1[0x5a0] != param_2[0x5a0]) {
      return 0;
    }
  }
  piVar1 = param_1 + 0x5a2;
  uStack_9f58 = *(undefined8 *)(param_1 + 0x5a4);
  uStack_9f60 = *(undefined8 *)piVar1;
  uStack_9f48 = *(undefined8 *)(param_1 + 0x5a8);
  uStack_9f50 = *(undefined8 *)(param_1 + 0x5a6);
  uStack_9f38 = *(undefined8 *)(param_1 + 0x5ac);
  uStack_9f40 = *(undefined8 *)(param_1 + 0x5aa);
  uStack_9f28 = *(undefined8 *)(param_1 + 0x5b0);
  uStack_9f30 = *(undefined8 *)(param_1 + 0x5ae);
  uStack_6568 = *(undefined8 *)(param_1 + 0x5a4);
  uStack_6570 = *(undefined8 *)piVar1;
  uStack_6558 = *(undefined8 *)(param_1 + 0x5a8);
  uStack_6560 = *(undefined8 *)(param_1 + 0x5a6);
  piVar2 = param_2 + 0x5a2;
  uStack_4e78 = *(undefined8 *)(param_2 + 0x5a4);
  uStack_4e80 = *(undefined8 *)piVar2;
  uStack_4e68 = *(undefined8 *)(param_2 + 0x5a8);
  uStack_4e70 = *(undefined8 *)(param_2 + 0x5a6);
  uStack_4e58 = *(undefined8 *)(param_2 + 0x5ac);
  uStack_4e60 = *(undefined8 *)(param_2 + 0x5aa);
  uStack_4e48 = *(undefined8 *)(param_2 + 0x5b0);
  uStack_4e50 = *(undefined8 *)(param_2 + 0x5ae);
  uStack_8818 = *(undefined8 *)(param_2 + 0x5a4);
  uStack_8820 = *(undefined8 *)piVar2;
  uStack_8808 = *(undefined8 *)(param_2 + 0x5a8);
  uStack_8810 = *(undefined8 *)(param_2 + 0x5a6);
  uStack_6548 = *(undefined8 *)(param_1 + 0x5ac);
  uStack_6550 = *(undefined8 *)(param_1 + 0x5aa);
  lStack_6538 = *(long *)(param_1 + 0x5b0);
  lStack_6540 = *(long *)(param_1 + 0x5ae);
  uStack_87f8 = *(undefined8 *)(param_2 + 0x5ac);
  uStack_8800 = *(undefined8 *)(param_2 + 0x5aa);
  lStack_87e8 = *(long *)(param_2 + 0x5b0);
  uStack_87f0 = *(undefined8 *)(param_2 + 0x5ae);
  uStack_6530 = uStack_8820;
  uStack_6528 = uStack_8818;
  uStack_6520 = uStack_8810;
  uStack_6518 = uStack_8808;
  uStack_6510 = uStack_8800;
  uStack_6508 = uStack_87f8;
  uStack_6500 = uStack_87f0;
  lStack_64f8 = lStack_87e8;
  if (lStack_6538 == 1) {
    if (lStack_87e8 != 1) {
LAB_10422d9f4:
      uStack_8860 = uStack_6570;
      uStack_8858 = uStack_6568;
      uStack_8850 = uStack_6560;
      uStack_8848 = uStack_6558;
      uStack_8840 = uStack_6550;
      uStack_8838 = uStack_6548;
      lStack_8830 = lStack_6540;
      lStack_8828 = lStack_6538;
      FUN_10422ae74(&uStack_9f60,&uStack_93e0,0x112dcd928,&UNK_10d9900a0);
      FUN_10422ae74(&uStack_4e80,&uStack_93e0,0x112dcd928,&UNK_10d9900a0);
      uVar10 = 0x113069a70;
      puVar8 = &UNK_10dce4b90;
      puVar7 = &uStack_8860;
LAB_10422d670:
      func_0x00010423c684(puVar7,uVar10,puVar8);
      return 0;
    }
    uStack_8858 = *(undefined8 *)(param_1 + 0x5a4);
    uStack_8860 = *(undefined8 *)piVar1;
    uStack_8848 = *(undefined8 *)(param_1 + 0x5a8);
    uStack_8850 = *(undefined8 *)(param_1 + 0x5a6);
    uStack_8838 = *(undefined8 *)(param_1 + 0x5ac);
    uStack_8840 = *(undefined8 *)(param_1 + 0x5aa);
    lStack_8828 = *(long *)(param_1 + 0x5b0);
    lStack_8830 = *(long *)(param_1 + 0x5ae);
    FUN_10422ae74(&uStack_9f60,&uStack_93e0,0x112dcd928,&UNK_10d9900a0);
    FUN_10422ae74(&uStack_4e80,&uStack_93e0,0x112dcd928,&UNK_10d9900a0);
    func_0x00010423c684(&uStack_8860,0x112dcd928,&UNK_10d9900a0);
  }
  else {
    if (lStack_87e8 == 1) goto LAB_10422d9f4;
    uStack_8858 = *(undefined8 *)(param_2 + 0x5a4);
    uStack_8860 = *(undefined8 *)piVar2;
    uStack_8848 = *(undefined8 *)(param_2 + 0x5a8);
    uStack_8850 = *(undefined8 *)(param_2 + 0x5a6);
    uStack_8838 = *(undefined8 *)(param_2 + 0x5ac);
    uStack_8840 = *(undefined8 *)(param_2 + 0x5aa);
    lStack_8828 = *(long *)(param_2 + 0x5b0);
    lStack_8830 = *(long *)(param_2 + 0x5ae);
    uStack_93d8 = *(undefined8 *)(param_1 + 0x5a4);
    uStack_93e0 = *(undefined8 *)piVar1;
    uStack_93c8 = *(undefined8 *)(param_1 + 0x5a8);
    uStack_93d0 = *(undefined8 *)(param_1 + 0x5a6);
    uStack_93b8 = *(undefined8 *)(param_1 + 0x5ac);
    uStack_93c0 = *(undefined8 *)(param_1 + 0x5aa);
    uStack_93a8 = *(undefined8 *)(param_1 + 0x5b0);
    uStack_93b0 = *(undefined8 *)(param_1 + 0x5ae);
    uStack_7ca0 = uStack_8860;
    uStack_7c98 = uStack_8858;
    uStack_7c90 = uStack_8850;
    uStack_7c88 = uStack_8848;
    uStack_7c80 = uStack_8840;
    uStack_7c78 = uStack_8838;
    lStack_7c70 = lStack_8830;
    uStack_7c68 = lStack_8828;
    FUN_10422ae74(&uStack_9f60,abStack_7ce0,0x112dcd928,&UNK_10d9900a0);
    FUN_10422ae74(&uStack_4e80,abStack_7ce0,0x112dcd928,&UNK_10d9900a0);
    puVar7 = &uStack_93e0;
    func_0x00010420f540(puVar7,&uStack_8860);
    func_0x00010423c684(&uStack_7ca0,0x112dcd928,&UNK_10d9900a0);
    func_0x00010423c684(&uStack_6570,0x112dcd928,&UNK_10d9900a0);
    if (((ulong)puVar7 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x5b2);
  uVar13 = *(undefined8 *)(param_1 + 0x5b4);
  uVar15 = *(undefined8 *)(param_1 + 0x5b6);
  lVar11 = *(long *)(param_1 + 0x5b8);
  uVar18 = *(undefined8 *)(param_2 + 0x5b2);
  uVar20 = *(undefined8 *)(param_2 + 0x5b4);
  uVar22 = *(undefined8 *)(param_2 + 0x5b6);
  lVar21 = *(long *)(param_2 + 0x5b8);
  if (lVar11 == 1) {
    if (lVar21 != 1) {
LAB_10422db90:
      func_0x00010422ae60(uVar18,uVar20,uVar22,lVar21);
      func_0x00010422ae60(uVar10,uVar13,uVar15,lVar11);
      func_0x000101898c44(uVar10,uVar13,uVar15,lVar11);
      func_0x000101898c44(uVar18,uVar20,uVar22,lVar21);
      return 0;
    }
  }
  else {
    if (lVar21 == 1) goto LAB_10422db90;
    func_0x00010422ae60(uVar18,uVar20,uVar22,lVar21);
    func_0x00010422ae60(uVar10,uVar13,uVar15,lVar11);
    uVar9 = (ulong)((uint)uVar10 & 1);
    FUN_10420f2bc(uVar9,uVar13,uVar15,lVar11,(uint)uVar18 & 1,uVar20,uVar22,lVar21);
    func_0x000101898c44(uVar18,uVar20,uVar22,lVar21);
    func_0x000101898c44(uVar10,uVar13,uVar15,lVar11);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if (*(double *)(param_1 + 0x5ba) != *(double *)(param_2 + 0x5ba)) {
    return 0;
  }
  if (*(double *)(param_1 + 0x5bc) != *(double *)(param_2 + 0x5bc)) {
    return 0;
  }
  if (*(double *)(param_1 + 0x5be) != *(double *)(param_2 + 0x5be)) {
    return 0;
  }
  if (*(double *)(param_1 + 0x5c0) != *(double *)(param_2 + 0x5c0)) {
    return 0;
  }
  if (*(double *)(param_1 + 0x5c2) != *(double *)(param_2 + 0x5c2)) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x5c4) ^ *(byte *)(param_2 + 0x5c4)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x1711) ^ *(byte *)((long)param_2 + 0x1711)) & 1) != 0) {
    return 0;
  }
  lVar11 = *(long *)(param_2 + 0x5cc);
  if (*(long *)(param_1 + 0x5cc) == 0) {
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (lVar11 == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x5c6) != *(long *)(param_2 + 0x5c6)) {
      return 0;
    }
    if (*(long *)(param_1 + 0x5c8) != *(long *)(param_2 + 0x5c8)) {
      return 0;
    }
    uVar9 = *(ulong *)(param_1 + 0x5ca);
    lVar14 = *(long *)(param_1 + 0x5ce);
    lVar21 = *(long *)(param_1 + 0x5d0);
    lVar16 = *(long *)(param_2 + 0x5ce);
    lVar12 = *(long *)(param_2 + 0x5d0);
    if (((uVar9 != *(ulong *)(param_2 + 0x5ca)) || (*(long *)(param_1 + 0x5cc) != lVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
    if (lVar14 != lVar16) {
      return 0;
    }
    if (lVar21 != lVar12) {
      return 0;
    }
  }
  if (((*(byte *)(param_1 + 0x5d2) ^ *(byte *)(param_2 + 0x5d2)) & 1) != 0) {
    return 0;
  }
  uVar25 = *(undefined8 *)(param_1 + 0x5d4);
  uVar26 = *(undefined8 *)(param_1 + 0x5d6);
  uVar22 = *(undefined8 *)(param_1 + 0x5d8);
  uVar15 = *(undefined8 *)(param_1 + 0x5da);
  uVar23 = *(undefined8 *)(param_1 + 0x5dc);
  uVar10 = *(undefined8 *)(param_1 + 0x5de);
  lVar11 = *(long *)(param_1 + 0x5e0);
  uVar20 = *(undefined8 *)(param_2 + 0x5d4);
  uVar13 = *(undefined8 *)(param_2 + 0x5d6);
  uVar18 = *(undefined8 *)(param_2 + 0x5d8);
  uVar19 = *(undefined8 *)(param_2 + 0x5da);
  uVar24 = *(undefined8 *)(param_2 + 0x5dc);
  uVar17 = *(undefined8 *)(param_2 + 0x5de);
  lVar21 = *(long *)(param_2 + 0x5e0);
  if (lVar11 == 1) {
    if (lVar21 != 1) {
LAB_10422ddf4:
      FUN_10423c6c4(uVar20,uVar13,uVar18,uVar19,uVar24,uVar17,lVar21);
      FUN_10423c6c4(uVar25,uVar26,uVar22,uVar15,uVar23,uVar10,lVar11);
      func_0x00010423c6d8(uVar25,uVar26,uVar22,uVar15,uVar23,uVar10,lVar11);
      func_0x00010423c6d8(uVar20,uVar13,uVar18,uVar19,uVar24,uVar17,lVar21);
      return 0;
    }
  }
  else {
    if (lVar21 == 1) goto LAB_10422ddf4;
    uStack_6568 = CONCAT71(uStack_6568._1_7_,(char)uVar13);
    uStack_6558 = CONCAT71(uStack_6558._1_7_,(char)uVar19);
    uStack_6548 = CONCAT71(uStack_6548._1_7_,(char)uVar17);
    uStack_7c98 = CONCAT71(uStack_7c98._1_7_,(char)uVar26);
    uStack_7c88 = CONCAT71(uStack_7c88._1_7_,(char)uVar15);
    uStack_7c78 = CONCAT71(uStack_7c78._1_7_,(char)uVar10);
    uStack_7ca0 = uVar25;
    uStack_7c90 = uVar22;
    uStack_7c80 = uVar23;
    lStack_7c70 = lVar11;
    uStack_6570 = uVar20;
    uStack_6560 = uVar18;
    uStack_6550 = uVar24;
    lStack_6540 = lVar21;
    FUN_10423c6c4(uVar20,uVar13,uVar18,uVar19,uVar24,uVar17,lVar21);
    FUN_10423c6c4(uVar25,uVar26,uVar22,uVar15,uVar23,uVar10,lVar11);
    puVar7 = &uStack_7ca0;
    FUN_10423c744(puVar7,&uStack_6570);
    func_0x00010423c6d8(uVar20,uVar13,uVar18,uVar19,uVar24,uVar17,lVar21);
    func_0x00010423c6d8(uVar25,uVar26,uVar22,uVar15,uVar23,uVar10,lVar11);
    if (((ulong)puVar7 & 1) == 0) {
      return 0;
    }
  }
  if (((*(byte *)(param_1 + 0x5e2) ^ *(byte *)(param_2 + 0x5e2)) & 1) == 0) {
    lVar11 = *(long *)(param_2 + 0x5e6);
    if (*(long *)(param_1 + 0x5e6) == 0) {
      if (lVar11 != 0) {
        return 0;
      }
    }
    else {
      if (lVar11 == 0) {
        return 0;
      }
      uVar9 = *(ulong *)(param_1 + 0x5e4);
      if (((uVar9 != *(ulong *)(param_2 + 0x5e4)) || (*(long *)(param_1 + 0x5e6) != lVar11)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar9 & 1) == 0)) {
        return 0;
      }
    }
    uVar25 = *(undefined8 *)(param_1 + 0x5e8);
    uVar17 = *(undefined8 *)(param_1 + 0x5ea);
    uVar24 = *(undefined8 *)(param_1 + 0x5ec);
    lVar11 = *(long *)(param_1 + 0x5ee);
    uVar22 = *(undefined8 *)(param_1 + 0x5f0);
    uVar10 = *(undefined8 *)(param_1 + 0x5f2);
    uVar15 = *(undefined8 *)(param_2 + 0x5e8);
    uVar13 = *(undefined8 *)(param_2 + 0x5ea);
    uVar20 = *(undefined8 *)(param_2 + 0x5ec);
    lVar21 = *(long *)(param_2 + 0x5ee);
    uVar18 = *(undefined8 *)(param_2 + 0x5f0);
    uVar19 = *(undefined8 *)(param_2 + 0x5f2);
    if (lVar11 == 1) {
      if (lVar21 == 1) {
        return 1;
      }
    }
    else if (lVar21 != 1) {
      abStack_7ce0[0] = (byte)uVar15 & 1;
      bStack_7cc0 = (byte)uVar18 & 1;
      abStack_21d8[0] = (byte)uVar25 & 1;
      bStack_21b8 = (byte)uVar22 & 1;
      pbVar6 = abStack_21d8;
      uStack_7cd8 = uVar13;
      uStack_7cd0 = uVar20;
      lStack_7cc8 = lVar21;
      uStack_7cb8 = uVar19;
      uStack_21d0 = uVar17;
      uStack_21c8 = uVar24;
      lStack_21c0 = lVar11;
      uStack_21b0 = uVar10;
      FUN_10420ef80(pbVar6,abStack_7ce0);
      FUN_10421e7c4(uVar15,uVar13,uVar20,lVar21,uVar18,uVar19);
      FUN_10421e7c4(uVar25,uVar17,uVar24,lVar11,uVar22,uVar10);
      _swift_bridgeObjectRelease(lVar21);
      _swift_bridgeObjectRelease(uVar19);
      func_0x00010189c8a4(uVar25,uVar17,uVar24,lVar11,uVar22,uVar10);
      if (((ulong)pbVar6 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    FUN_10421e7c4(uVar15,uVar13,uVar20,lVar21,uVar18,uVar19);
    FUN_10421e7c4(uVar25,uVar17,uVar24,lVar11,uVar22,uVar10);
    func_0x00010189c8a4(uVar25,uVar17,uVar24,lVar11,uVar22,uVar10);
    func_0x00010189c8a4(uVar15,uVar13,uVar20,lVar21,uVar18,uVar19);
  }
  return 0;
}



/* Entry: 10422e1a8; end: 10422e7fb;  */

undefined8 FUN_10422e1a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10423c884(param_2,param_1);
  return param_2;
}



/* Entry: 10422e7fc; end: 10423973b;  */

undefined8 * FUN_10422e7fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  lVar3 = param_2[300];
  _objc_retain();
  if (lVar3 == 1) {
    _memcpy(param_1 + 4,param_2 + 4,0xab2);
  }
  else {
    param_1[4] = param_2[4];
    lVar1 = param_2[6];
    if (lVar1 == 1) {
      _memcpy(param_1 + 5,param_2 + 5,0x5a8);
    }
    else {
      param_1[5] = param_2[5];
      param_1[6] = lVar1;
      uVar2 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar2;
      uVar2 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar2;
      uVar2 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar2;
      uVar2 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar2;
      uVar5 = param_2[0xf];
      param_1[0xf] = uVar5;
      uVar2 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar2;
      uVar2 = param_2[0x13];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar2;
      *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
      lVar1 = param_2[0x16];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar2);
      if (lVar1 == 0) {
        uVar2 = param_2[0x21];
        uVar6 = param_2[0x24];
        uVar5 = param_2[0x23];
        param_1[0x22] = param_2[0x22];
        param_1[0x21] = uVar2;
        param_1[0x24] = uVar6;
        param_1[0x23] = uVar5;
        param_1[0x25] = param_2[0x25];
        uVar2 = param_2[0x19];
        uVar6 = param_2[0x1c];
        uVar5 = param_2[0x1b];
        param_1[0x1a] = param_2[0x1a];
        param_1[0x19] = uVar2;
        param_1[0x1c] = uVar6;
        param_1[0x1b] = uVar5;
        uVar6 = param_2[0x1d];
        uVar5 = param_2[0x20];
        uVar2 = param_2[0x1f];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1d] = uVar6;
        param_1[0x20] = uVar5;
        param_1[0x1f] = uVar2;
        uVar6 = param_2[0x15];
        uVar5 = param_2[0x18];
        uVar2 = param_2[0x17];
        param_1[0x16] = param_2[0x16];
        param_1[0x15] = uVar6;
        param_1[0x18] = uVar5;
        param_1[0x17] = uVar2;
      }
      else {
        param_1[0x15] = param_2[0x15];
        param_1[0x16] = lVar1;
        uVar2 = param_2[0x17];
        param_1[0x18] = param_2[0x18];
        param_1[0x17] = uVar2;
        uVar2 = param_2[0x19];
        param_1[0x1a] = param_2[0x1a];
        param_1[0x19] = uVar2;
        uVar2 = param_2[0x1b];
        param_1[0x1c] = param_2[0x1c];
        param_1[0x1b] = uVar2;
        uVar2 = param_2[0x1d];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1d] = uVar2;
        param_1[0x1f] = param_2[0x1f];
        *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
        param_1[0x21] = param_2[0x21];
        uVar2 = param_2[0x22];
        param_1[0x23] = param_2[0x23];
        param_1[0x22] = uVar2;
        uVar2 = param_2[0x24];
        uVar5 = param_2[0x25];
        param_1[0x24] = uVar2;
        param_1[0x25] = uVar5;
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar5);
      }
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
      uVar2 = param_2[0x27];
      param_1[0x28] = param_2[0x28];
      param_1[0x27] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0x144);
      *(undefined8 *)((long)param_1 + 0x14c) = *(undefined8 *)((long)param_2 + 0x14c);
      *(undefined8 *)((long)param_1 + 0x144) = uVar2;
      param_1[0x2b] = param_2[0x2b];
      uVar2 = param_2[0x38];
      uVar6 = param_2[0x3b];
      uVar5 = param_2[0x3a];
      param_1[0x39] = param_2[0x39];
      param_1[0x38] = uVar2;
      param_1[0x3b] = uVar6;
      param_1[0x3a] = uVar5;
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
      uVar2 = param_2[0x30];
      uVar6 = param_2[0x33];
      uVar5 = param_2[0x32];
      param_1[0x31] = param_2[0x31];
      param_1[0x30] = uVar2;
      param_1[0x33] = uVar6;
      param_1[0x32] = uVar5;
      uVar6 = param_2[0x34];
      uVar5 = param_2[0x37];
      uVar2 = param_2[0x36];
      param_1[0x35] = param_2[0x35];
      param_1[0x34] = uVar6;
      param_1[0x37] = uVar5;
      param_1[0x36] = uVar2;
      uVar6 = param_2[0x2c];
      uVar5 = param_2[0x2f];
      uVar2 = param_2[0x2e];
      param_1[0x2d] = param_2[0x2d];
      param_1[0x2c] = uVar6;
      param_1[0x2f] = uVar5;
      param_1[0x2e] = uVar2;
      uVar2 = param_2[0x45];
      uVar6 = param_2[0x48];
      uVar5 = param_2[0x47];
      param_1[0x46] = param_2[0x46];
      param_1[0x45] = uVar2;
      param_1[0x48] = uVar6;
      param_1[0x47] = uVar5;
      uVar2 = param_2[0x49];
      param_1[0x4a] = param_2[0x4a];
      param_1[0x49] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0x251);
      *(undefined8 *)((long)param_1 + 0x259) = *(undefined8 *)((long)param_2 + 0x259);
      *(undefined8 *)((long)param_1 + 0x251) = uVar2;
      uVar2 = param_2[0x3d];
      uVar6 = param_2[0x40];
      uVar5 = param_2[0x3f];
      param_1[0x3e] = param_2[0x3e];
      param_1[0x3d] = uVar2;
      param_1[0x40] = uVar6;
      param_1[0x3f] = uVar5;
      uVar2 = param_2[0x41];
      uVar6 = param_2[0x44];
      uVar5 = param_2[0x43];
      param_1[0x42] = param_2[0x42];
      param_1[0x41] = uVar2;
      param_1[0x44] = uVar6;
      param_1[0x43] = uVar5;
      uVar5 = param_2[0x4e];
      uVar2 = param_2[0x4d];
      uVar7 = param_2[0x50];
      uVar6 = param_2[0x4f];
      uVar8 = param_2[0x51];
      uVar10 = param_2[0x54];
      uVar9 = param_2[0x53];
      param_1[0x52] = param_2[0x52];
      param_1[0x51] = uVar8;
      param_1[0x54] = uVar10;
      param_1[0x53] = uVar9;
      param_1[0x4e] = uVar5;
      param_1[0x4d] = uVar2;
      param_1[0x50] = uVar7;
      param_1[0x4f] = uVar6;
      uVar5 = param_2[0x56];
      uVar2 = param_2[0x55];
      uVar7 = param_2[0x58];
      uVar6 = param_2[0x57];
      uVar9 = param_2[0x5a];
      uVar8 = param_2[0x59];
      uVar10 = *(undefined8 *)((long)param_2 + 0x2d2);
      *(undefined8 *)((long)param_1 + 0x2da) = *(undefined8 *)((long)param_2 + 0x2da);
      *(undefined8 *)((long)param_1 + 0x2d2) = uVar10;
      param_1[0x58] = uVar7;
      param_1[0x57] = uVar6;
      param_1[0x5a] = uVar9;
      param_1[0x59] = uVar8;
      param_1[0x56] = uVar5;
      param_1[0x55] = uVar2;
      param_1[0x5d] = param_2[0x5d];
      param_1[0x5e] = param_2[0x5e];
      *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x5f);
      *(undefined1 *)((long)param_1 + 0x2f9) = *(undefined1 *)((long)param_2 + 0x2f9);
      uVar2 = param_2[0x60];
      param_1[0x61] = param_2[0x61];
      param_1[0x60] = uVar2;
      *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
      uVar2 = param_2[99];
      param_1[99] = uVar2;
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
      *(undefined1 *)((long)param_1 + 0x321) = *(undefined1 *)((long)param_2 + 0x321);
      lVar1 = param_2[0x68];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      if (lVar1 == 1) {
        uVar2 = param_2[0x65];
        uVar6 = param_2[0x68];
        uVar5 = param_2[0x67];
        param_1[0x66] = param_2[0x66];
        param_1[0x65] = uVar2;
        param_1[0x68] = uVar6;
        param_1[0x67] = uVar5;
        uVar2 = param_2[0x69];
        param_1[0x6a] = param_2[0x6a];
        param_1[0x69] = uVar2;
      }
      else {
        *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
        uVar2 = param_2[0x66];
        param_1[0x67] = param_2[0x67];
        param_1[0x66] = uVar2;
        param_1[0x68] = lVar1;
        *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
        uVar2 = param_2[0x6a];
        param_1[0x6a] = uVar2;
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar2);
      }
      *(undefined1 *)(param_1 + 0x6b) = *(undefined1 *)(param_2 + 0x6b);
      param_1[0x6c] = param_2[0x6c];
      param_1[0x6d] = param_2[0x6d];
      uVar7 = param_2[0x6e];
      param_1[0x6e] = uVar7;
      uVar6 = param_2[0x6f];
      param_1[0x6f] = uVar6;
      uVar5 = param_2[0x70];
      param_1[0x70] = uVar5;
      param_1[0x71] = param_2[0x71];
      *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_2 + 0x72);
      uVar2 = param_2[0x73];
      *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
      param_1[0x73] = uVar2;
      param_1[0x75] = param_2[0x75];
      *(undefined1 *)(param_1 + 0x76) = *(undefined1 *)(param_2 + 0x76);
      uVar2 = param_2[0x77];
      param_1[0x77] = uVar2;
      uVar8 = param_2[0x78];
      param_1[0x78] = uVar8;
      uVar9 = param_2[0x7d];
      uVar11 = param_2[0x80];
      uVar10 = param_2[0x7f];
      param_1[0x7e] = param_2[0x7e];
      param_1[0x7d] = uVar9;
      param_1[0x80] = uVar11;
      param_1[0x7f] = uVar10;
      uVar9 = param_2[0x81];
      uVar11 = param_2[0x84];
      uVar10 = param_2[0x83];
      param_1[0x82] = param_2[0x82];
      param_1[0x81] = uVar9;
      param_1[0x84] = uVar11;
      param_1[0x83] = uVar10;
      uVar9 = param_2[0x79];
      uVar11 = param_2[0x7c];
      uVar10 = param_2[0x7b];
      param_1[0x7a] = param_2[0x7a];
      param_1[0x79] = uVar9;
      param_1[0x7c] = uVar11;
      param_1[0x7b] = uVar10;
      param_1[0x85] = param_2[0x85];
      *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)(param_2 + 0x87);
      param_1[0x86] = param_2[0x86];
      uVar9 = param_2[0x88];
      param_1[0x89] = param_2[0x89];
      param_1[0x88] = uVar9;
      uVar9 = param_2[0x8a];
      param_1[0x8b] = param_2[0x8b];
      param_1[0x8a] = uVar9;
      uVar9 = param_2[0x8c];
      param_1[0x8d] = param_2[0x8d];
      param_1[0x8c] = uVar9;
      uVar9 = param_2[0x8e];
      param_1[0x8e] = uVar9;
      lVar1 = param_2[0x9b];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
      if (lVar1 == 1) {
        uVar2 = param_2[0x97];
        uVar6 = param_2[0x9a];
        uVar5 = param_2[0x99];
        param_1[0x98] = param_2[0x98];
        param_1[0x97] = uVar2;
        param_1[0x9a] = uVar6;
        param_1[0x99] = uVar5;
        uVar2 = param_2[0x9b];
        param_1[0x9c] = param_2[0x9c];
        param_1[0x9b] = uVar2;
        *(undefined2 *)(param_1 + 0x9d) = *(undefined2 *)(param_2 + 0x9d);
        uVar2 = param_2[0x8f];
        uVar6 = param_2[0x92];
        uVar5 = param_2[0x91];
        param_1[0x90] = param_2[0x90];
        param_1[0x8f] = uVar2;
        param_1[0x92] = uVar6;
        param_1[0x91] = uVar5;
        uVar2 = param_2[0x93];
        uVar6 = param_2[0x96];
        uVar5 = param_2[0x95];
        param_1[0x94] = param_2[0x94];
        param_1[0x93] = uVar2;
        param_1[0x96] = uVar6;
        param_1[0x95] = uVar5;
      }
      else {
        *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(param_2 + 0x8f);
        param_1[0x90] = param_2[0x90];
        *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
        param_1[0x92] = param_2[0x92];
        *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)(param_2 + 0x93);
        param_1[0x94] = param_2[0x94];
        *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(param_2 + 0x95);
        *(undefined1 *)(param_1 + 0x97) = *(undefined1 *)(param_2 + 0x97);
        param_1[0x96] = param_2[0x96];
        param_1[0x98] = param_2[0x98];
        *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
        param_1[0x9a] = param_2[0x9a];
        param_1[0x9b] = lVar1;
        param_1[0x9c] = param_2[0x9c];
        *(undefined2 *)(param_1 + 0x9d) = *(undefined2 *)(param_2 + 0x9d);
        _swift_bridgeObjectRetain(lVar1);
      }
      *(undefined1 *)((long)param_1 + 0x4ea) = *(undefined1 *)((long)param_2 + 0x4ea);
      param_1[0x9e] = param_2[0x9e];
      *(undefined2 *)(param_1 + 0xa7) = *(undefined2 *)(param_2 + 0xa7);
      uVar2 = param_2[0xa3];
      uVar6 = param_2[0xa6];
      uVar5 = param_2[0xa5];
      param_1[0xa4] = param_2[0xa4];
      param_1[0xa3] = uVar2;
      param_1[0xa6] = uVar6;
      param_1[0xa5] = uVar5;
      uVar6 = param_2[0x9f];
      uVar5 = param_2[0xa2];
      uVar2 = param_2[0xa1];
      param_1[0xa0] = param_2[0xa0];
      param_1[0x9f] = uVar6;
      param_1[0xa2] = uVar5;
      param_1[0xa1] = uVar2;
      lVar1 = param_2[0xa9];
      _swift_bridgeObjectRetain();
      if (lVar1 == 0) {
        uVar2 = param_2[0xa8];
        uVar6 = param_2[0xab];
        uVar5 = param_2[0xaa];
        param_1[0xa9] = param_2[0xa9];
        param_1[0xa8] = uVar2;
        param_1[0xab] = uVar6;
        param_1[0xaa] = uVar5;
        param_1[0xac] = param_2[0xac];
      }
      else {
        param_1[0xa8] = param_2[0xa8];
        param_1[0xa9] = lVar1;
        param_1[0xaa] = param_2[0xaa];
        uVar2 = param_2[0xab];
        param_1[0xab] = uVar2;
        param_1[0xac] = param_2[0xac];
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar2);
      }
      *(undefined1 *)(param_1 + 0xaf) = *(undefined1 *)(param_2 + 0xaf);
      uVar2 = param_2[0xad];
      param_1[0xae] = param_2[0xae];
      param_1[0xad] = uVar2;
      param_1[0xb0] = param_2[0xb0];
      param_1[0xb1] = param_2[0xb1];
      *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(param_2 + 0xb2);
      uVar2 = param_2[0xb3];
      param_1[0xb3] = uVar2;
      *(undefined1 *)(param_1 + 0xb5) = *(undefined1 *)(param_2 + 0xb5);
      param_1[0xb4] = param_2[0xb4];
      uVar5 = param_2[0xb6];
      param_1[0xb6] = uVar5;
      uVar6 = param_2[0xb7];
      param_1[0xb7] = uVar6;
      uVar7 = param_2[0xb8];
      param_1[0xb8] = uVar7;
      uVar8 = param_2[0xb9];
      param_1[0xb9] = uVar8;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _objc_retain(uVar5);
      _objc_retain(uVar6);
      _objc_retain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
    }
    lVar1 = param_2[0xbe];
    if (lVar1 == 1) {
      uVar2 = param_2[0xc2];
      uVar6 = param_2[0xc5];
      uVar5 = param_2[0xc4];
      param_1[0xc3] = param_2[0xc3];
      param_1[0xc2] = uVar2;
      param_1[0xc5] = uVar6;
      param_1[0xc4] = uVar5;
      uVar2 = *(undefined8 *)((long)param_2 + 0x629);
      *(undefined8 *)((long)param_1 + 0x631) = *(undefined8 *)((long)param_2 + 0x631);
      *(undefined8 *)((long)param_1 + 0x629) = uVar2;
      uVar2 = param_2[0xba];
      uVar6 = param_2[0xbd];
      uVar5 = param_2[0xbc];
      param_1[0xbb] = param_2[0xbb];
      param_1[0xba] = uVar2;
      param_1[0xbd] = uVar6;
      param_1[0xbc] = uVar5;
      uVar6 = param_2[0xbe];
      uVar5 = param_2[0xc1];
      uVar2 = param_2[0xc0];
      param_1[0xbf] = param_2[0xbf];
      param_1[0xbe] = uVar6;
      param_1[0xc1] = uVar5;
      param_1[0xc0] = uVar2;
    }
    else {
      uVar2 = param_2[0xba];
      param_1[0xbb] = param_2[0xbb];
      param_1[0xba] = uVar2;
      *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_2 + 0xbc);
      param_1[0xbd] = param_2[0xbd];
      param_1[0xbe] = lVar1;
      *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)(param_2 + 0xbf);
      param_1[0xc0] = param_2[0xc0];
      *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(param_2 + 0xc1);
      param_1[0xc2] = param_2[0xc2];
      *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)(param_2 + 0xc3);
      uVar2 = param_2[0xc4];
      *(undefined1 *)(param_1 + 0xc5) = *(undefined1 *)(param_2 + 0xc5);
      param_1[0xc4] = uVar2;
      param_1[0xc6] = param_2[0xc6];
      *(undefined1 *)(param_1 + 199) = *(undefined1 *)(param_2 + 199);
      _swift_bridgeObjectRetain();
    }
    lVar1 = param_2[0xce];
    if (lVar1 == 1) {
      _memcpy(param_1 + 200,param_2 + 200,0x301);
    }
    else {
      *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_2 + 200);
      param_1[0xc9] = param_2[0xc9];
      *(undefined1 *)(param_1 + 0xca) = *(undefined1 *)(param_2 + 0xca);
      param_1[0xcb] = param_2[0xcb];
      *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
      param_1[0xcd] = param_2[0xcd];
      param_1[0xce] = lVar1;
      *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
      param_1[0xcf] = param_2[0xcf];
      *(undefined1 *)((long)param_1 + 0x681) = *(undefined1 *)((long)param_2 + 0x681);
      param_1[0xd1] = param_2[0xd1];
      uVar5 = param_2[0xd2];
      param_1[0xd2] = uVar5;
      *(undefined2 *)(param_1 + 0xd3) = *(undefined2 *)(param_2 + 0xd3);
      param_1[0xd4] = param_2[0xd4];
      *(undefined1 *)(param_1 + 0xd5) = *(undefined1 *)(param_2 + 0xd5);
      param_1[0xd6] = param_2[0xd6];
      *(undefined1 *)(param_1 + 0xd7) = *(undefined1 *)(param_2 + 0xd7);
      uVar2 = param_2[0xd8];
      *(undefined1 *)(param_1 + 0xd9) = *(undefined1 *)(param_2 + 0xd9);
      param_1[0xd8] = uVar2;
      *(undefined1 *)((long)param_1 + 0x6c9) = *(undefined1 *)((long)param_2 + 0x6c9);
      lVar1 = param_2[0xe5];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar5);
      if (lVar1 == 1) {
        _memcpy(param_1 + 0xda,param_2 + 0xda,0x101);
      }
      else {
        param_1[0xda] = param_2[0xda];
        *(undefined1 *)(param_1 + 0xdb) = *(undefined1 *)(param_2 + 0xdb);
        param_1[0xdc] = param_2[0xdc];
        *(undefined1 *)(param_1 + 0xdd) = *(undefined1 *)(param_2 + 0xdd);
        param_1[0xde] = param_2[0xde];
        *(undefined1 *)(param_1 + 0xdf) = *(undefined1 *)(param_2 + 0xdf);
        *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_2 + 0xe1);
        param_1[0xe0] = param_2[0xe0];
        uVar2 = param_2[0xe2];
        *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(param_2 + 0xe3);
        param_1[0xe2] = uVar2;
        *(undefined1 *)((long)param_1 + 0x719) = *(undefined1 *)((long)param_2 + 0x719);
        param_1[0xe4] = param_2[0xe4];
        param_1[0xe5] = lVar1;
        param_1[0xe6] = param_2[0xe6];
        uVar5 = param_2[0xe7];
        param_1[0xe7] = uVar5;
        param_1[0xe8] = param_2[0xe8];
        *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
        *(undefined1 *)(param_1 + 0xeb) = *(undefined1 *)(param_2 + 0xeb);
        param_1[0xea] = param_2[0xea];
        *(undefined1 *)(param_1 + 0xed) = *(undefined1 *)(param_2 + 0xed);
        param_1[0xec] = param_2[0xec];
        *(undefined1 *)(param_1 + 0xef) = *(undefined1 *)(param_2 + 0xef);
        param_1[0xee] = param_2[0xee];
        *(undefined1 *)(param_1 + 0xf1) = *(undefined1 *)(param_2 + 0xf1);
        param_1[0xf0] = param_2[0xf0];
        param_1[0xf2] = param_2[0xf2];
        uVar6 = param_2[0xf3];
        param_1[0xf3] = uVar6;
        uVar2 = param_2[0xf4];
        *(undefined1 *)(param_1 + 0xf5) = *(undefined1 *)(param_2 + 0xf5);
        param_1[0xf4] = uVar2;
        uVar2 = param_2[0xf6];
        *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)(param_2 + 0xf7);
        param_1[0xf6] = uVar2;
        param_1[0xf8] = param_2[0xf8];
        uVar2 = param_2[0xf9];
        param_1[0xf9] = uVar2;
        *(undefined1 *)(param_1 + 0xfa) = *(undefined1 *)(param_2 + 0xfa);
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar2);
      }
      *(undefined1 *)((long)param_1 + 0x7d1) = *(undefined1 *)((long)param_2 + 0x7d1);
      param_1[0xfb] = param_2[0xfb];
      param_1[0xfc] = param_2[0xfc];
      *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(param_2 + 0xfd);
      if (param_2[0xfe] == 1) {
        uVar2 = param_2[0xfe];
        param_1[0xff] = param_2[0xff];
        param_1[0xfe] = uVar2;
        param_1[0x100] = param_2[0x100];
      }
      else {
        param_1[0xfe] = param_2[0xfe];
        uVar2 = param_2[0xff];
        param_1[0xff] = uVar2;
        uVar5 = param_2[0x100];
        param_1[0x100] = uVar5;
        _objc_retain();
        _objc_retain(uVar2);
        _objc_retain(uVar5);
      }
      *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_2 + 0x101);
      param_1[0x102] = param_2[0x102];
      *(undefined1 *)(param_1 + 0x103) = *(undefined1 *)(param_2 + 0x103);
      param_1[0x104] = param_2[0x104];
      *(undefined1 *)(param_1 + 0x105) = *(undefined1 *)(param_2 + 0x105);
      lVar1 = param_2[0x107];
      if (lVar1 == 1) {
        uVar2 = param_2[0x106];
        uVar6 = param_2[0x109];
        uVar5 = param_2[0x108];
        param_1[0x107] = param_2[0x107];
        param_1[0x106] = uVar2;
        param_1[0x109] = uVar6;
        param_1[0x108] = uVar5;
        uVar2 = param_2[0x10a];
        param_1[0x10b] = param_2[0x10b];
        param_1[0x10a] = uVar2;
      }
      else {
        *(undefined2 *)(param_1 + 0x106) = *(undefined2 *)(param_2 + 0x106);
        param_1[0x107] = lVar1;
        uVar2 = param_2[0x108];
        param_1[0x108] = uVar2;
        uVar5 = param_2[0x109];
        param_1[0x109] = uVar5;
        *(undefined4 *)(param_1 + 0x10a) = *(undefined4 *)(param_2 + 0x10a);
        uVar6 = param_2[0x10b];
        param_1[0x10b] = uVar6;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
      }
      param_1[0x10c] = param_2[0x10c];
      *(undefined1 *)(param_1 + 0x10d) = *(undefined1 *)(param_2 + 0x10d);
      param_1[0x10e] = param_2[0x10e];
      *(undefined2 *)(param_1 + 0x10f) = *(undefined2 *)(param_2 + 0x10f);
      if (param_2[0x110] == 0) {
        uVar2 = param_2[0x110];
        param_1[0x111] = param_2[0x111];
        param_1[0x110] = uVar2;
        param_1[0x112] = param_2[0x112];
      }
      else {
        param_1[0x110] = param_2[0x110];
        uVar2 = param_2[0x111];
        param_1[0x111] = uVar2;
        uVar5 = param_2[0x112];
        param_1[0x112] = uVar5;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar5);
      }
      param_1[0x113] = param_2[0x113];
      param_1[0x114] = param_2[0x114];
      uVar2 = param_2[0x115];
      param_1[0x115] = uVar2;
      *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_2 + 0x116);
      *(undefined2 *)((long)param_1 + 0x8b1) = *(undefined2 *)((long)param_2 + 0x8b1);
      param_1[0x117] = param_2[0x117];
      *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
      param_1[0x119] = param_2[0x119];
      uVar5 = param_2[0x11a];
      param_1[0x11b] = param_2[0x11b];
      param_1[0x11a] = uVar5;
      *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)(param_2 + 0x11c);
      param_1[0x11d] = param_2[0x11d];
      *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_2 + 0x11e);
      param_1[0x11f] = param_2[0x11f];
      *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
      param_1[0x121] = param_2[0x121];
      *(undefined1 *)(param_1 + 0x122) = *(undefined1 *)(param_2 + 0x122);
      *(undefined1 *)(param_1 + 0x124) = *(undefined1 *)(param_2 + 0x124);
      param_1[0x123] = param_2[0x123];
      param_1[0x125] = param_2[0x125];
      uVar5 = param_2[0x126];
      param_1[0x126] = uVar5;
      *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
      param_1[0x127] = param_2[0x127];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar5);
    }
    if (param_2[0x129] == 1) {
      uVar2 = param_2[0x129];
      param_1[0x12a] = param_2[0x12a];
      param_1[0x129] = uVar2;
    }
    else {
      param_1[0x129] = param_2[0x129];
      param_1[0x12a] = param_2[0x12a];
      _swift_bridgeObjectRetain();
    }
    lVar1 = param_2[299];
    if (lVar1 != 1) {
      _swift_bridgeObjectRetain();
    }
    param_1[299] = lVar1;
    param_1[300] = lVar3;
    *(undefined2 *)(param_1 + 0x12d) = *(undefined2 *)(param_2 + 0x12d);
    lVar1 = param_2[0x12e];
    _objc_retain(lVar3);
    if (lVar1 == 0) {
      uVar2 = param_2[0x132];
      uVar6 = param_2[0x135];
      uVar5 = param_2[0x134];
      param_1[0x133] = param_2[0x133];
      param_1[0x132] = uVar2;
      param_1[0x135] = uVar6;
      param_1[0x134] = uVar5;
      uVar2 = param_2[0x136];
      param_1[0x137] = param_2[0x137];
      param_1[0x136] = uVar2;
      uVar6 = param_2[0x12e];
      uVar5 = param_2[0x131];
      uVar2 = param_2[0x130];
      param_1[0x12f] = param_2[0x12f];
      param_1[0x12e] = uVar6;
      param_1[0x131] = uVar5;
      param_1[0x130] = uVar2;
LAB_10422f3ec:
      uVar4 = param_2[0x139];
      if (uVar4 >> 0x3c < 0xf) {
        uVar2 = param_2[0x138];
        func_0x00010006c00c(uVar2,uVar4);
        param_1[0x138] = uVar2;
        param_1[0x139] = uVar4;
      }
      else {
        uVar2 = param_2[0x138];
        param_1[0x139] = param_2[0x139];
        param_1[0x138] = uVar2;
      }
    }
    else {
      if (lVar1 != 1) {
        param_1[0x12e] = lVar1;
        uVar2 = param_2[0x12f];
        param_1[0x12f] = uVar2;
        param_1[0x130] = param_2[0x130];
        *(undefined1 *)(param_1 + 0x131) = *(undefined1 *)(param_2 + 0x131);
        uVar5 = param_2[0x132];
        param_1[0x133] = param_2[0x133];
        param_1[0x132] = uVar5;
        uVar4 = param_2[0x135];
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar2);
        if (uVar4 >> 0x3c < 0xf) {
          uVar2 = param_2[0x134];
          func_0x00010006c00c(uVar2,uVar4);
          param_1[0x134] = uVar2;
          param_1[0x135] = uVar4;
        }
        else {
          uVar2 = param_2[0x134];
          param_1[0x135] = param_2[0x135];
          param_1[0x134] = uVar2;
        }
        uVar2 = param_2[0x136];
        param_1[0x137] = param_2[0x137];
        param_1[0x136] = uVar2;
        goto LAB_10422f3ec;
      }
      uVar2 = param_2[0x132];
      uVar6 = param_2[0x135];
      uVar5 = param_2[0x134];
      param_1[0x133] = param_2[0x133];
      param_1[0x132] = uVar2;
      param_1[0x135] = uVar6;
      param_1[0x134] = uVar5;
      uVar2 = param_2[0x136];
      uVar6 = param_2[0x139];
      uVar5 = param_2[0x138];
      param_1[0x137] = param_2[0x137];
      param_1[0x136] = uVar2;
      param_1[0x139] = uVar6;
      param_1[0x138] = uVar5;
      uVar2 = param_2[0x12e];
      uVar6 = param_2[0x131];
      uVar5 = param_2[0x130];
      param_1[0x12f] = param_2[0x12f];
      param_1[0x12e] = uVar2;
      param_1[0x131] = uVar6;
      param_1[0x130] = uVar5;
    }
    lVar3 = param_2[0x13e];
    if (lVar3 == 1) {
      uVar2 = param_2[0x14a];
      uVar6 = param_2[0x14d];
      uVar5 = param_2[0x14c];
      param_1[0x14b] = param_2[0x14b];
      param_1[0x14a] = uVar2;
      param_1[0x14d] = uVar6;
      param_1[0x14c] = uVar5;
      uVar2 = param_2[0x14e];
      param_1[0x14f] = param_2[0x14f];
      param_1[0x14e] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0xa79);
      *(undefined8 *)((long)param_1 + 0xa81) = *(undefined8 *)((long)param_2 + 0xa81);
      *(undefined8 *)((long)param_1 + 0xa79) = uVar2;
      uVar2 = param_2[0x142];
      uVar6 = param_2[0x145];
      uVar5 = param_2[0x144];
      param_1[0x143] = param_2[0x143];
      param_1[0x142] = uVar2;
      param_1[0x145] = uVar6;
      param_1[0x144] = uVar5;
      uVar2 = param_2[0x146];
      uVar6 = param_2[0x149];
      uVar5 = param_2[0x148];
      param_1[0x147] = param_2[0x147];
      param_1[0x146] = uVar2;
      param_1[0x149] = uVar6;
      param_1[0x148] = uVar5;
      uVar2 = param_2[0x13a];
      uVar6 = param_2[0x13d];
      uVar5 = param_2[0x13c];
      param_1[0x13b] = param_2[0x13b];
      param_1[0x13a] = uVar2;
      param_1[0x13d] = uVar6;
      param_1[0x13c] = uVar5;
      uVar2 = param_2[0x13e];
      uVar6 = param_2[0x141];
      uVar5 = param_2[0x140];
      param_1[0x13f] = param_2[0x13f];
      param_1[0x13e] = uVar2;
      param_1[0x141] = uVar6;
      param_1[0x140] = uVar5;
    }
    else {
      *(undefined2 *)(param_1 + 0x13a) = *(undefined2 *)(param_2 + 0x13a);
      param_1[0x13b] = param_2[0x13b];
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
      param_1[0x13d] = param_2[0x13d];
      param_1[0x13e] = lVar3;
      lVar3 = param_2[0x147];
      _swift_bridgeObjectRetain();
      if (lVar3 == 1) {
        uVar2 = param_2[0x147];
        uVar6 = param_2[0x14a];
        uVar5 = param_2[0x149];
        param_1[0x148] = param_2[0x148];
        param_1[0x147] = uVar2;
        param_1[0x14a] = uVar6;
        param_1[0x149] = uVar5;
        *(undefined1 *)(param_1 + 0x14b) = *(undefined1 *)(param_2 + 0x14b);
        uVar2 = param_2[0x13f];
        uVar6 = param_2[0x142];
        uVar5 = param_2[0x141];
        param_1[0x140] = param_2[0x140];
        param_1[0x13f] = uVar2;
        param_1[0x142] = uVar6;
        param_1[0x141] = uVar5;
        uVar6 = param_2[0x143];
        uVar5 = param_2[0x146];
        uVar2 = param_2[0x145];
        param_1[0x144] = param_2[0x144];
        param_1[0x143] = uVar6;
        param_1[0x146] = uVar5;
        param_1[0x145] = uVar2;
      }
      else {
        param_1[0x13f] = param_2[0x13f];
        *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
        param_1[0x141] = param_2[0x141];
        *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)(param_2 + 0x142);
        param_1[0x143] = param_2[0x143];
        *(undefined1 *)(param_1 + 0x144) = *(undefined1 *)(param_2 + 0x144);
        *(undefined1 *)(param_1 + 0x146) = *(undefined1 *)(param_2 + 0x146);
        param_1[0x145] = param_2[0x145];
        param_1[0x147] = lVar3;
        *(undefined1 *)(param_1 + 0x149) = *(undefined1 *)(param_2 + 0x149);
        param_1[0x148] = param_2[0x148];
        *(undefined1 *)(param_1 + 0x14b) = *(undefined1 *)(param_2 + 0x14b);
        param_1[0x14a] = param_2[0x14a];
        _objc_retain(lVar3);
      }
      param_1[0x14c] = param_2[0x14c];
      *(undefined1 *)(param_1 + 0x14d) = *(undefined1 *)(param_2 + 0x14d);
      param_1[0x14e] = param_2[0x14e];
      *(undefined1 *)(param_1 + 0x14f) = *(undefined1 *)(param_2 + 0x14f);
      param_1[0x150] = param_2[0x150];
      *(undefined1 *)(param_1 + 0x151) = *(undefined1 *)(param_2 + 0x151);
    }
    if (param_2[0x152] == 1) {
      uVar2 = param_2[0x152];
      param_1[0x153] = param_2[0x153];
      param_1[0x152] = uVar2;
      *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
    }
    else {
      param_1[0x152] = param_2[0x152];
      param_1[0x153] = param_2[0x153];
      *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
      _swift_bridgeObjectRetain();
    }
    lVar3 = param_2[0x157];
    if (lVar3 == 1) {
      uVar2 = param_2[0x155];
      param_1[0x156] = param_2[0x156];
      param_1[0x155] = uVar2;
      param_1[0x157] = param_2[0x157];
    }
    else {
      param_1[0x155] = param_2[0x155];
      param_1[0x156] = param_2[0x156];
      param_1[0x157] = lVar3;
      _swift_bridgeObjectRetain();
    }
    param_1[0x158] = param_2[0x158];
    param_1[0x159] = param_2[0x159];
    *(undefined2 *)(param_1 + 0x15a) = *(undefined2 *)(param_2 + 0x15a);
    _objc_retain();
  }
  lVar3 = param_2[0x15c];
  if (lVar3 == 1) {
    _memcpy(param_1 + 0x15b,param_2 + 0x15b,0xb78);
    goto LAB_1042307a0;
  }
  param_1[0x15b] = param_2[0x15b];
  param_1[0x15c] = lVar3;
  param_1[0x15d] = param_2[0x15d];
  *(undefined1 *)(param_1 + 0x15e) = *(undefined1 *)(param_2 + 0x15e);
  param_1[0x15f] = param_2[0x15f];
  uVar2 = param_2[0x160];
  param_1[0x160] = uVar2;
  param_1[0x161] = param_2[0x161];
  uVar5 = param_2[0x162];
  param_1[0x163] = param_2[0x163];
  param_1[0x162] = uVar5;
  uVar5 = param_2[0x164];
  param_1[0x165] = param_2[0x165];
  param_1[0x164] = uVar5;
  param_1[0x166] = param_2[0x166];
  uVar5 = param_2[0x167];
  param_1[0x167] = uVar5;
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  lVar3 = param_2[0x291];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  if ((lVar3 == 1) || (lVar3 == 2)) {
    _memcpy(param_1 + 0x169,param_2 + 0x169,0xab2);
  }
  else {
    param_1[0x169] = param_2[0x169];
    lVar1 = param_2[0x16b];
    if (lVar1 == 1) {
      _memcpy(param_1 + 0x16a,param_2 + 0x16a,0x5a8);
    }
    else {
      param_1[0x16a] = param_2[0x16a];
      param_1[0x16b] = lVar1;
      uVar2 = param_2[0x16c];
      param_1[0x16d] = param_2[0x16d];
      param_1[0x16c] = uVar2;
      uVar2 = param_2[0x16e];
      param_1[0x16f] = param_2[0x16f];
      param_1[0x16e] = uVar2;
      uVar2 = param_2[0x170];
      param_1[0x171] = param_2[0x171];
      param_1[0x170] = uVar2;
      uVar2 = param_2[0x172];
      param_1[0x173] = param_2[0x173];
      param_1[0x172] = uVar2;
      uVar2 = param_2[0x174];
      param_1[0x174] = uVar2;
      param_1[0x175] = param_2[0x175];
      uVar5 = param_2[0x176];
      param_1[0x177] = param_2[0x177];
      param_1[0x176] = uVar5;
      uVar5 = param_2[0x178];
      param_1[0x178] = uVar5;
      *(undefined1 *)(param_1 + 0x179) = *(undefined1 *)(param_2 + 0x179);
      lVar1 = param_2[0x17b];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar5);
      if (lVar1 == 0) {
        uVar2 = param_2[0x186];
        uVar6 = param_2[0x189];
        uVar5 = param_2[0x188];
        param_1[0x187] = param_2[0x187];
        param_1[0x186] = uVar2;
        param_1[0x189] = uVar6;
        param_1[0x188] = uVar5;
        param_1[0x18a] = param_2[0x18a];
        uVar2 = param_2[0x17e];
        uVar6 = param_2[0x181];
        uVar5 = param_2[0x180];
        param_1[0x17f] = param_2[0x17f];
        param_1[0x17e] = uVar2;
        param_1[0x181] = uVar6;
        param_1[0x180] = uVar5;
        uVar6 = param_2[0x182];
        uVar5 = param_2[0x185];
        uVar2 = param_2[0x184];
        param_1[0x183] = param_2[0x183];
        param_1[0x182] = uVar6;
        param_1[0x185] = uVar5;
        param_1[0x184] = uVar2;
        uVar6 = param_2[0x17a];
        uVar5 = param_2[0x17d];
        uVar2 = param_2[0x17c];
        param_1[0x17b] = param_2[0x17b];
        param_1[0x17a] = uVar6;
        param_1[0x17d] = uVar5;
        param_1[0x17c] = uVar2;
      }
      else {
        param_1[0x17a] = param_2[0x17a];
        param_1[0x17b] = lVar1;
        uVar2 = param_2[0x17c];
        param_1[0x17d] = param_2[0x17d];
        param_1[0x17c] = uVar2;
        uVar2 = param_2[0x17e];
        param_1[0x17f] = param_2[0x17f];
        param_1[0x17e] = uVar2;
        uVar2 = param_2[0x180];
        param_1[0x181] = param_2[0x181];
        param_1[0x180] = uVar2;
        uVar2 = param_2[0x182];
        param_1[0x183] = param_2[0x183];
        param_1[0x182] = uVar2;
        param_1[0x184] = param_2[0x184];
        *(undefined1 *)(param_1 + 0x185) = *(undefined1 *)(param_2 + 0x185);
        uVar2 = param_2[0x186];
        param_1[0x187] = param_2[0x187];
        param_1[0x186] = uVar2;
        param_1[0x188] = param_2[0x188];
        uVar2 = param_2[0x189];
        param_1[0x189] = uVar2;
        uVar5 = param_2[0x18a];
        param_1[0x18a] = uVar5;
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar5);
      }
      *(undefined1 *)(param_1 + 0x18b) = *(undefined1 *)(param_2 + 0x18b);
      uVar2 = param_2[0x18c];
      param_1[0x18d] = param_2[0x18d];
      param_1[0x18c] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0xc6c);
      *(undefined8 *)((long)param_1 + 0xc74) = *(undefined8 *)((long)param_2 + 0xc74);
      *(undefined8 *)((long)param_1 + 0xc6c) = uVar2;
      param_1[400] = param_2[400];
      *(undefined1 *)(param_1 + 0x1a1) = *(undefined1 *)(param_2 + 0x1a1);
      uVar2 = param_2[0x19d];
      uVar6 = param_2[0x1a0];
      uVar5 = param_2[0x19f];
      param_1[0x19e] = param_2[0x19e];
      param_1[0x19d] = uVar2;
      param_1[0x1a0] = uVar6;
      param_1[0x19f] = uVar5;
      uVar2 = param_2[0x195];
      uVar6 = param_2[0x198];
      uVar5 = param_2[0x197];
      param_1[0x196] = param_2[0x196];
      param_1[0x195] = uVar2;
      param_1[0x198] = uVar6;
      param_1[0x197] = uVar5;
      uVar6 = param_2[0x199];
      uVar5 = param_2[0x19c];
      uVar2 = param_2[0x19b];
      param_1[0x19a] = param_2[0x19a];
      param_1[0x199] = uVar6;
      param_1[0x19c] = uVar5;
      param_1[0x19b] = uVar2;
      uVar6 = param_2[0x191];
      uVar5 = param_2[0x194];
      uVar2 = param_2[0x193];
      param_1[0x192] = param_2[0x192];
      param_1[0x191] = uVar6;
      param_1[0x194] = uVar5;
      param_1[0x193] = uVar2;
      uVar2 = param_2[0x1aa];
      param_1[0x1ab] = param_2[0x1ab];
      param_1[0x1aa] = uVar2;
      uVar2 = param_2[0x1ac];
      param_1[0x1ad] = param_2[0x1ad];
      param_1[0x1ac] = uVar2;
      uVar2 = param_2[0x1ae];
      param_1[0x1af] = param_2[0x1af];
      param_1[0x1ae] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0xd79);
      *(undefined8 *)((long)param_1 + 0xd81) = *(undefined8 *)((long)param_2 + 0xd81);
      *(undefined8 *)((long)param_1 + 0xd79) = uVar2;
      uVar2 = param_2[0x1a2];
      param_1[0x1a3] = param_2[0x1a3];
      param_1[0x1a2] = uVar2;
      uVar2 = param_2[0x1a4];
      param_1[0x1a5] = param_2[0x1a5];
      param_1[0x1a4] = uVar2;
      uVar2 = param_2[0x1a6];
      param_1[0x1a7] = param_2[0x1a7];
      param_1[0x1a6] = uVar2;
      uVar2 = param_2[0x1a8];
      param_1[0x1a9] = param_2[0x1a9];
      param_1[0x1a8] = uVar2;
      uVar5 = param_2[0x1b3];
      uVar2 = param_2[0x1b2];
      uVar7 = param_2[0x1b5];
      uVar6 = param_2[0x1b4];
      uVar9 = param_2[0x1b7];
      uVar8 = param_2[0x1b6];
      uVar10 = param_2[0x1b8];
      param_1[0x1b9] = param_2[0x1b9];
      param_1[0x1b8] = uVar10;
      param_1[0x1b7] = uVar9;
      param_1[0x1b6] = uVar8;
      param_1[0x1b5] = uVar7;
      param_1[0x1b4] = uVar6;
      param_1[0x1b3] = uVar5;
      param_1[0x1b2] = uVar2;
      uVar5 = param_2[0x1bb];
      uVar2 = param_2[0x1ba];
      uVar7 = param_2[0x1bd];
      uVar6 = param_2[0x1bc];
      uVar9 = param_2[0x1bf];
      uVar8 = param_2[0x1be];
      uVar10 = *(undefined8 *)((long)param_2 + 0xdfa);
      *(undefined8 *)((long)param_1 + 0xe02) = *(undefined8 *)((long)param_2 + 0xe02);
      *(undefined8 *)((long)param_1 + 0xdfa) = uVar10;
      param_1[0x1bf] = uVar9;
      param_1[0x1be] = uVar8;
      param_1[0x1bd] = uVar7;
      param_1[0x1bc] = uVar6;
      param_1[0x1bb] = uVar5;
      param_1[0x1ba] = uVar2;
      param_1[0x1c2] = param_2[0x1c2];
      param_1[0x1c3] = param_2[0x1c3];
      *(undefined1 *)(param_1 + 0x1c4) = *(undefined1 *)(param_2 + 0x1c4);
      *(undefined1 *)((long)param_1 + 0xe21) = *(undefined1 *)((long)param_2 + 0xe21);
      param_1[0x1c5] = param_2[0x1c5];
      param_1[0x1c6] = param_2[0x1c6];
      *(undefined1 *)(param_1 + 0x1c7) = *(undefined1 *)(param_2 + 0x1c7);
      uVar2 = param_2[0x1c8];
      param_1[0x1c8] = uVar2;
      *(undefined1 *)(param_1 + 0x1c9) = *(undefined1 *)(param_2 + 0x1c9);
      *(undefined1 *)((long)param_1 + 0xe49) = *(undefined1 *)((long)param_2 + 0xe49);
      lVar1 = param_2[0x1cd];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      if (lVar1 == 1) {
        uVar2 = param_2[0x1ca];
        uVar6 = param_2[0x1cd];
        uVar5 = param_2[0x1cc];
        param_1[0x1cb] = param_2[0x1cb];
        param_1[0x1ca] = uVar2;
        param_1[0x1cd] = uVar6;
        param_1[0x1cc] = uVar5;
        uVar2 = param_2[0x1ce];
        param_1[0x1cf] = param_2[0x1cf];
        param_1[0x1ce] = uVar2;
      }
      else {
        *(undefined1 *)(param_1 + 0x1ca) = *(undefined1 *)(param_2 + 0x1ca);
        param_1[0x1cb] = param_2[0x1cb];
        param_1[0x1cc] = param_2[0x1cc];
        param_1[0x1cd] = lVar1;
        *(undefined1 *)(param_1 + 0x1ce) = *(undefined1 *)(param_2 + 0x1ce);
        uVar2 = param_2[0x1cf];
        param_1[0x1cf] = uVar2;
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar2);
      }
      *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
      param_1[0x1d1] = param_2[0x1d1];
      param_1[0x1d2] = param_2[0x1d2];
      uVar6 = param_2[0x1d3];
      param_1[0x1d3] = uVar6;
      uVar7 = param_2[0x1d4];
      param_1[0x1d4] = uVar7;
      uVar5 = param_2[0x1d5];
      param_1[0x1d5] = uVar5;
      param_1[0x1d6] = param_2[0x1d6];
      *(undefined1 *)(param_1 + 0x1d7) = *(undefined1 *)(param_2 + 0x1d7);
      uVar2 = param_2[0x1d8];
      *(undefined1 *)(param_1 + 0x1d9) = *(undefined1 *)(param_2 + 0x1d9);
      param_1[0x1d8] = uVar2;
      param_1[0x1da] = param_2[0x1da];
      *(undefined1 *)(param_1 + 0x1db) = *(undefined1 *)(param_2 + 0x1db);
      uVar2 = param_2[0x1dc];
      param_1[0x1dc] = uVar2;
      uVar8 = param_2[0x1dd];
      param_1[0x1dd] = uVar8;
      uVar9 = param_2[0x1e2];
      param_1[0x1e3] = param_2[0x1e3];
      param_1[0x1e2] = uVar9;
      uVar9 = param_2[0x1e4];
      param_1[0x1e5] = param_2[0x1e5];
      param_1[0x1e4] = uVar9;
      uVar9 = param_2[0x1e6];
      param_1[0x1e7] = param_2[0x1e7];
      param_1[0x1e6] = uVar9;
      uVar9 = param_2[0x1e8];
      param_1[0x1e9] = param_2[0x1e9];
      param_1[0x1e8] = uVar9;
      uVar9 = param_2[0x1de];
      param_1[0x1df] = param_2[0x1df];
      param_1[0x1de] = uVar9;
      uVar9 = param_2[0x1e0];
      param_1[0x1e1] = param_2[0x1e1];
      param_1[0x1e0] = uVar9;
      param_1[0x1ea] = param_2[0x1ea];
      *(undefined1 *)(param_1 + 0x1ec) = *(undefined1 *)(param_2 + 0x1ec);
      param_1[0x1eb] = param_2[0x1eb];
      param_1[0x1ed] = param_2[0x1ed];
      uVar9 = param_2[0x1ee];
      param_1[0x1ef] = param_2[0x1ef];
      param_1[0x1ee] = uVar9;
      uVar9 = param_2[0x1f0];
      param_1[0x1f1] = param_2[0x1f1];
      param_1[0x1f0] = uVar9;
      param_1[0x1f2] = param_2[0x1f2];
      uVar9 = param_2[499];
      param_1[499] = uVar9;
      lVar1 = param_2[0x200];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
      if (lVar1 == 1) {
        uVar2 = param_2[0x1fc];
        uVar6 = param_2[0x1ff];
        uVar5 = param_2[0x1fe];
        param_1[0x1fd] = param_2[0x1fd];
        param_1[0x1fc] = uVar2;
        param_1[0x1ff] = uVar6;
        param_1[0x1fe] = uVar5;
        uVar2 = param_2[0x200];
        param_1[0x201] = param_2[0x201];
        param_1[0x200] = uVar2;
        *(undefined2 *)(param_1 + 0x202) = *(undefined2 *)(param_2 + 0x202);
        uVar2 = param_2[500];
        uVar6 = param_2[0x1f7];
        uVar5 = param_2[0x1f6];
        param_1[0x1f5] = param_2[0x1f5];
        param_1[500] = uVar2;
        param_1[0x1f7] = uVar6;
        param_1[0x1f6] = uVar5;
        uVar2 = param_2[0x1f8];
        uVar6 = param_2[0x1fb];
        uVar5 = param_2[0x1fa];
        param_1[0x1f9] = param_2[0x1f9];
        param_1[0x1f8] = uVar2;
        param_1[0x1fb] = uVar6;
        param_1[0x1fa] = uVar5;
      }
      else {
        *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_2 + 500);
        param_1[0x1f5] = param_2[0x1f5];
        *(undefined1 *)(param_1 + 0x1f6) = *(undefined1 *)(param_2 + 0x1f6);
        param_1[0x1f7] = param_2[0x1f7];
        *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_2 + 0x1f8);
        param_1[0x1f9] = param_2[0x1f9];
        *(undefined1 *)(param_1 + 0x1fa) = *(undefined1 *)(param_2 + 0x1fa);
        *(undefined1 *)(param_1 + 0x1fc) = *(undefined1 *)(param_2 + 0x1fc);
        param_1[0x1fb] = param_2[0x1fb];
        param_1[0x1fd] = param_2[0x1fd];
        *(undefined1 *)(param_1 + 0x1fe) = *(undefined1 *)(param_2 + 0x1fe);
        param_1[0x1ff] = param_2[0x1ff];
        param_1[0x200] = lVar1;
        param_1[0x201] = param_2[0x201];
        *(undefined1 *)(param_1 + 0x202) = *(undefined1 *)(param_2 + 0x202);
        *(undefined1 *)((long)param_1 + 0x1011) = *(undefined1 *)((long)param_2 + 0x1011);
        _swift_bridgeObjectRetain(lVar1);
      }
      *(undefined1 *)((long)param_1 + 0x1012) = *(undefined1 *)((long)param_2 + 0x1012);
      param_1[0x203] = param_2[0x203];
      uVar2 = param_2[0x206];
      param_1[0x207] = param_2[0x207];
      param_1[0x206] = uVar2;
      uVar2 = param_2[0x208];
      param_1[0x209] = param_2[0x209];
      param_1[0x208] = uVar2;
      uVar2 = param_2[0x20a];
      param_1[0x20b] = param_2[0x20b];
      param_1[0x20a] = uVar2;
      *(undefined2 *)(param_1 + 0x20c) = *(undefined2 *)(param_2 + 0x20c);
      uVar2 = param_2[0x204];
      param_1[0x205] = param_2[0x205];
      param_1[0x204] = uVar2;
      lVar1 = param_2[0x20e];
      _swift_bridgeObjectRetain();
      if (lVar1 == 0) {
        uVar2 = param_2[0x20d];
        uVar6 = param_2[0x210];
        uVar5 = param_2[0x20f];
        param_1[0x20e] = param_2[0x20e];
        param_1[0x20d] = uVar2;
        param_1[0x210] = uVar6;
        param_1[0x20f] = uVar5;
        param_1[0x211] = param_2[0x211];
      }
      else {
        param_1[0x20d] = param_2[0x20d];
        param_1[0x20e] = lVar1;
        param_1[0x20f] = param_2[0x20f];
        uVar2 = param_2[0x210];
        param_1[0x210] = uVar2;
        param_1[0x211] = param_2[0x211];
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar2);
      }
      uVar2 = param_2[0x212];
      param_1[0x213] = param_2[0x213];
      param_1[0x212] = uVar2;
      *(undefined1 *)(param_1 + 0x214) = *(undefined1 *)(param_2 + 0x214);
      param_1[0x215] = param_2[0x215];
      param_1[0x216] = param_2[0x216];
      *(undefined1 *)(param_1 + 0x217) = *(undefined1 *)(param_2 + 0x217);
      uVar2 = param_2[0x218];
      param_1[0x218] = uVar2;
      param_1[0x219] = param_2[0x219];
      *(undefined1 *)(param_1 + 0x21a) = *(undefined1 *)(param_2 + 0x21a);
      uVar5 = param_2[0x21b];
      param_1[0x21b] = uVar5;
      uVar6 = param_2[0x21c];
      param_1[0x21c] = uVar6;
      uVar7 = param_2[0x21d];
      param_1[0x21d] = uVar7;
      uVar8 = param_2[0x21e];
      param_1[0x21e] = uVar8;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _objc_retain(uVar5);
      _objc_retain(uVar6);
      _objc_retain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
    }
    lVar1 = param_2[0x223];
    if (lVar1 == 1) {
      uVar2 = param_2[0x227];
      uVar6 = param_2[0x22a];
      uVar5 = param_2[0x229];
      param_1[0x228] = param_2[0x228];
      param_1[0x227] = uVar2;
      param_1[0x22a] = uVar6;
      param_1[0x229] = uVar5;
      uVar2 = *(undefined8 *)((long)param_2 + 0x1151);
      *(undefined8 *)((long)param_1 + 0x1159) = *(undefined8 *)((long)param_2 + 0x1159);
      *(undefined8 *)((long)param_1 + 0x1151) = uVar2;
      uVar2 = param_2[0x21f];
      uVar6 = param_2[0x222];
      uVar5 = param_2[0x221];
      param_1[0x220] = param_2[0x220];
      param_1[0x21f] = uVar2;
      param_1[0x222] = uVar6;
      param_1[0x221] = uVar5;
      uVar6 = param_2[0x223];
      uVar5 = param_2[0x226];
      uVar2 = param_2[0x225];
      param_1[0x224] = param_2[0x224];
      param_1[0x223] = uVar6;
      param_1[0x226] = uVar5;
      param_1[0x225] = uVar2;
    }
    else {
      param_1[0x21f] = param_2[0x21f];
      param_1[0x220] = param_2[0x220];
      *(undefined2 *)(param_1 + 0x221) = *(undefined2 *)(param_2 + 0x221);
      param_1[0x222] = param_2[0x222];
      param_1[0x223] = lVar1;
      *(undefined1 *)(param_1 + 0x224) = *(undefined1 *)(param_2 + 0x224);
      param_1[0x225] = param_2[0x225];
      *(undefined1 *)(param_1 + 0x226) = *(undefined1 *)(param_2 + 0x226);
      param_1[0x227] = param_2[0x227];
      *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
      param_1[0x229] = param_2[0x229];
      *(undefined1 *)(param_1 + 0x22a) = *(undefined1 *)(param_2 + 0x22a);
      param_1[0x22b] = param_2[0x22b];
      *(undefined1 *)(param_1 + 0x22c) = *(undefined1 *)(param_2 + 0x22c);
      _swift_bridgeObjectRetain();
    }
    lVar1 = param_2[0x233];
    if (lVar1 == 1) {
      _memcpy(param_1 + 0x22d,param_2 + 0x22d,0x301);
    }
    else {
      *(undefined2 *)(param_1 + 0x22d) = *(undefined2 *)(param_2 + 0x22d);
      param_1[0x22e] = param_2[0x22e];
      *(undefined1 *)(param_1 + 0x22f) = *(undefined1 *)(param_2 + 0x22f);
      param_1[0x230] = param_2[0x230];
      *(undefined1 *)(param_1 + 0x231) = *(undefined1 *)(param_2 + 0x231);
      param_1[0x232] = param_2[0x232];
      param_1[0x233] = lVar1;
      param_1[0x234] = param_2[0x234];
      *(undefined1 *)(param_1 + 0x235) = *(undefined1 *)(param_2 + 0x235);
      *(undefined1 *)((long)param_1 + 0x11a9) = *(undefined1 *)((long)param_2 + 0x11a9);
      param_1[0x236] = param_2[0x236];
      uVar5 = param_2[0x237];
      param_1[0x237] = uVar5;
      *(undefined2 *)(param_1 + 0x238) = *(undefined2 *)(param_2 + 0x238);
      param_1[0x239] = param_2[0x239];
      *(undefined1 *)(param_1 + 0x23a) = *(undefined1 *)(param_2 + 0x23a);
      param_1[0x23b] = param_2[0x23b];
      *(undefined1 *)(param_1 + 0x23c) = *(undefined1 *)(param_2 + 0x23c);
      uVar2 = param_2[0x23d];
      *(undefined1 *)(param_1 + 0x23e) = *(undefined1 *)(param_2 + 0x23e);
      param_1[0x23d] = uVar2;
      *(undefined1 *)((long)param_1 + 0x11f1) = *(undefined1 *)((long)param_2 + 0x11f1);
      lVar1 = param_2[0x24a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar5);
      if (lVar1 == 1) {
        _memcpy(param_1 + 0x23f,param_2 + 0x23f,0x101);
      }
      else {
        param_1[0x23f] = param_2[0x23f];
        *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x240);
        param_1[0x241] = param_2[0x241];
        *(undefined1 *)(param_1 + 0x242) = *(undefined1 *)(param_2 + 0x242);
        param_1[0x243] = param_2[0x243];
        *(undefined1 *)(param_1 + 0x244) = *(undefined1 *)(param_2 + 0x244);
        param_1[0x245] = param_2[0x245];
        *(undefined1 *)(param_1 + 0x246) = *(undefined1 *)(param_2 + 0x246);
        uVar2 = param_2[0x247];
        *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x248);
        param_1[0x247] = uVar2;
        *(undefined1 *)((long)param_1 + 0x1241) = *(undefined1 *)((long)param_2 + 0x1241);
        param_1[0x249] = param_2[0x249];
        param_1[0x24a] = lVar1;
        param_1[0x24b] = param_2[0x24b];
        uVar5 = param_2[0x24c];
        param_1[0x24c] = uVar5;
        param_1[0x24d] = param_2[0x24d];
        *(undefined1 *)(param_1 + 0x24e) = *(undefined1 *)(param_2 + 0x24e);
        *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x250);
        param_1[0x24f] = param_2[0x24f];
        *(undefined1 *)(param_1 + 0x252) = *(undefined1 *)(param_2 + 0x252);
        param_1[0x251] = param_2[0x251];
        *(undefined1 *)(param_1 + 0x254) = *(undefined1 *)(param_2 + 0x254);
        param_1[0x253] = param_2[0x253];
        *(undefined1 *)(param_1 + 0x256) = *(undefined1 *)(param_2 + 0x256);
        param_1[0x255] = param_2[0x255];
        param_1[599] = param_2[599];
        uVar6 = param_2[600];
        param_1[600] = uVar6;
        uVar2 = param_2[0x259];
        *(undefined1 *)(param_1 + 0x25a) = *(undefined1 *)(param_2 + 0x25a);
        param_1[0x259] = uVar2;
        uVar2 = param_2[0x25b];
        *(undefined1 *)(param_1 + 0x25c) = *(undefined1 *)(param_2 + 0x25c);
        param_1[0x25b] = uVar2;
        param_1[0x25d] = param_2[0x25d];
        uVar2 = param_2[0x25e];
        param_1[0x25e] = uVar2;
        *(undefined1 *)(param_1 + 0x25f) = *(undefined1 *)(param_2 + 0x25f);
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar2);
      }
      *(undefined1 *)((long)param_1 + 0x12f9) = *(undefined1 *)((long)param_2 + 0x12f9);
      param_1[0x260] = param_2[0x260];
      param_1[0x261] = param_2[0x261];
      *(undefined1 *)(param_1 + 0x262) = *(undefined1 *)(param_2 + 0x262);
      if (param_2[0x263] == 1) {
        uVar2 = param_2[0x263];
        param_1[0x264] = param_2[0x264];
        param_1[0x263] = uVar2;
        param_1[0x265] = param_2[0x265];
      }
      else {
        param_1[0x263] = param_2[0x263];
        uVar2 = param_2[0x264];
        param_1[0x264] = uVar2;
        uVar5 = param_2[0x265];
        param_1[0x265] = uVar5;
        _objc_retain();
        _objc_retain(uVar2);
        _objc_retain(uVar5);
      }
      *(undefined1 *)(param_1 + 0x266) = *(undefined1 *)(param_2 + 0x266);
      param_1[0x267] = param_2[0x267];
      *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
      param_1[0x269] = param_2[0x269];
      *(undefined1 *)(param_1 + 0x26a) = *(undefined1 *)(param_2 + 0x26a);
      lVar1 = param_2[0x26c];
      if (lVar1 == 1) {
        uVar2 = param_2[0x26b];
        uVar6 = param_2[0x26e];
        uVar5 = param_2[0x26d];
        param_1[0x26c] = param_2[0x26c];
        param_1[0x26b] = uVar2;
        param_1[0x26e] = uVar6;
        param_1[0x26d] = uVar5;
        uVar2 = param_2[0x26f];
        param_1[0x270] = param_2[0x270];
        param_1[0x26f] = uVar2;
      }
      else {
        *(undefined2 *)(param_1 + 0x26b) = *(undefined2 *)(param_2 + 0x26b);
        param_1[0x26c] = lVar1;
        uVar2 = param_2[0x26d];
        param_1[0x26d] = uVar2;
        uVar5 = param_2[0x26e];
        param_1[0x26e] = uVar5;
        *(undefined4 *)(param_1 + 0x26f) = *(undefined4 *)(param_2 + 0x26f);
        uVar6 = param_2[0x270];
        param_1[0x270] = uVar6;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
      }
      param_1[0x271] = param_2[0x271];
      *(undefined1 *)(param_1 + 0x272) = *(undefined1 *)(param_2 + 0x272);
      param_1[0x273] = param_2[0x273];
      *(undefined1 *)(param_1 + 0x274) = *(undefined1 *)(param_2 + 0x274);
      *(undefined1 *)((long)param_1 + 0x13a1) = *(undefined1 *)((long)param_2 + 0x13a1);
      if (param_2[0x275] == 0) {
        uVar2 = param_2[0x275];
        param_1[0x276] = param_2[0x276];
        param_1[0x275] = uVar2;
        param_1[0x277] = param_2[0x277];
      }
      else {
        param_1[0x275] = param_2[0x275];
        uVar2 = param_2[0x276];
        param_1[0x276] = uVar2;
        uVar5 = param_2[0x277];
        param_1[0x277] = uVar5;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar5);
      }
      param_1[0x278] = param_2[0x278];
      param_1[0x279] = param_2[0x279];
      uVar2 = param_2[0x27a];
      param_1[0x27a] = uVar2;
      *(undefined1 *)(param_1 + 0x27b) = *(undefined1 *)(param_2 + 0x27b);
      *(undefined2 *)((long)param_1 + 0x13d9) = *(undefined2 *)((long)param_2 + 0x13d9);
      param_1[0x27c] = param_2[0x27c];
      *(undefined1 *)(param_1 + 0x27d) = *(undefined1 *)(param_2 + 0x27d);
      uVar5 = param_2[0x27e];
      param_1[0x27f] = param_2[0x27f];
      param_1[0x27e] = uVar5;
      param_1[0x280] = param_2[0x280];
      *(undefined2 *)(param_1 + 0x281) = *(undefined2 *)(param_2 + 0x281);
      param_1[0x282] = param_2[0x282];
      *(undefined4 *)(param_1 + 0x283) = *(undefined4 *)(param_2 + 0x283);
      param_1[0x284] = param_2[0x284];
      *(undefined1 *)(param_1 + 0x285) = *(undefined1 *)(param_2 + 0x285);
      param_1[0x286] = param_2[0x286];
      *(undefined1 *)(param_1 + 0x287) = *(undefined1 *)(param_2 + 0x287);
      *(undefined1 *)(param_1 + 0x289) = *(undefined1 *)(param_2 + 0x289);
      param_1[0x288] = param_2[0x288];
      param_1[0x28a] = param_2[0x28a];
      uVar5 = param_2[0x28b];
      param_1[0x28b] = uVar5;
      *(undefined1 *)(param_1 + 0x28d) = *(undefined1 *)(param_2 + 0x28d);
      param_1[0x28c] = param_2[0x28c];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar5);
    }
    if (param_2[0x28e] == 1) {
      uVar2 = param_2[0x28e];
      param_1[0x28f] = param_2[0x28f];
      param_1[0x28e] = uVar2;
    }
    else {
      param_1[0x28e] = param_2[0x28e];
      param_1[0x28f] = param_2[0x28f];
      _swift_bridgeObjectRetain();
    }
    lVar1 = param_2[0x290];
    if (lVar1 != 1) {
      _swift_bridgeObjectRetain();
    }
    param_1[0x290] = lVar1;
    param_1[0x291] = lVar3;
    *(undefined2 *)(param_1 + 0x292) = *(undefined2 *)(param_2 + 0x292);
    lVar1 = param_2[0x293];
    _objc_retain(lVar3);
    if (lVar1 == 0) {
      uVar2 = param_2[0x297];
      uVar6 = param_2[0x29a];
      uVar5 = param_2[0x299];
      param_1[0x298] = param_2[0x298];
      param_1[0x297] = uVar2;
      param_1[0x29a] = uVar6;
      param_1[0x299] = uVar5;
      uVar2 = param_2[0x29b];
      param_1[0x29c] = param_2[0x29c];
      param_1[0x29b] = uVar2;
      uVar6 = param_2[0x293];
      uVar5 = param_2[0x296];
      uVar2 = param_2[0x295];
      param_1[0x294] = param_2[0x294];
      param_1[0x293] = uVar6;
      param_1[0x296] = uVar5;
      param_1[0x295] = uVar2;
LAB_104230480:
      uVar4 = param_2[0x29e];
      if (uVar4 >> 0x3c < 0xf) {
        uVar2 = param_2[0x29d];
        func_0x00010006c00c(uVar2,uVar4);
        param_1[0x29d] = uVar2;
        param_1[0x29e] = uVar4;
      }
      else {
        uVar2 = param_2[0x29d];
        param_1[0x29e] = param_2[0x29e];
        param_1[0x29d] = uVar2;
      }
    }
    else {
      if (lVar1 != 1) {
        param_1[0x293] = lVar1;
        uVar2 = param_2[0x294];
        param_1[0x294] = uVar2;
        param_1[0x295] = param_2[0x295];
        *(undefined1 *)(param_1 + 0x296) = *(undefined1 *)(param_2 + 0x296);
        param_1[0x297] = param_2[0x297];
        param_1[0x298] = param_2[0x298];
        uVar4 = param_2[0x29a];
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(uVar2);
        if (uVar4 >> 0x3c < 0xf) {
          uVar2 = param_2[0x299];
          func_0x00010006c00c(uVar2,uVar4);
          param_1[0x299] = uVar2;
          param_1[0x29a] = uVar4;
        }
        else {
          uVar2 = param_2[0x299];
          param_1[0x29a] = param_2[0x29a];
          param_1[0x299] = uVar2;
        }
        param_1[0x29b] = param_2[0x29b];
        param_1[0x29c] = param_2[0x29c];
        goto LAB_104230480;
      }
      uVar2 = param_2[0x297];
      uVar6 = param_2[0x29a];
      uVar5 = param_2[0x299];
      param_1[0x298] = param_2[0x298];
      param_1[0x297] = uVar2;
      param_1[0x29a] = uVar6;
      param_1[0x299] = uVar5;
      uVar2 = param_2[0x29b];
      uVar6 = param_2[0x29e];
      uVar5 = param_2[0x29d];
      param_1[0x29c] = param_2[0x29c];
      param_1[0x29b] = uVar2;
      param_1[0x29e] = uVar6;
      param_1[0x29d] = uVar5;
      uVar2 = param_2[0x293];
      uVar6 = param_2[0x296];
      uVar5 = param_2[0x295];
      param_1[0x294] = param_2[0x294];
      param_1[0x293] = uVar2;
      param_1[0x296] = uVar6;
      param_1[0x295] = uVar5;
    }
    lVar3 = param_2[0x2a3];
    if (lVar3 == 1) {
      uVar2 = param_2[0x2af];
      uVar6 = param_2[0x2b2];
      uVar5 = param_2[0x2b1];
      param_1[0x2b0] = param_2[0x2b0];
      param_1[0x2af] = uVar2;
      param_1[0x2b2] = uVar6;
      param_1[0x2b1] = uVar5;
      uVar2 = param_2[0x2b3];
      param_1[0x2b4] = param_2[0x2b4];
      param_1[0x2b3] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0x15a1);
      *(undefined8 *)((long)param_1 + 0x15a9) = *(undefined8 *)((long)param_2 + 0x15a9);
      *(undefined8 *)((long)param_1 + 0x15a1) = uVar2;
      uVar2 = param_2[0x2a7];
      uVar6 = param_2[0x2aa];
      uVar5 = param_2[0x2a9];
      param_1[0x2a8] = param_2[0x2a8];
      param_1[0x2a7] = uVar2;
      param_1[0x2aa] = uVar6;
      param_1[0x2a9] = uVar5;
      uVar2 = param_2[0x2ab];
      uVar6 = param_2[0x2ae];
      uVar5 = param_2[0x2ad];
      param_1[0x2ac] = param_2[0x2ac];
      param_1[0x2ab] = uVar2;
      param_1[0x2ae] = uVar6;
      param_1[0x2ad] = uVar5;
      uVar2 = param_2[0x29f];
      uVar6 = param_2[0x2a2];
      uVar5 = param_2[0x2a1];
      param_1[0x2a0] = param_2[0x2a0];
      param_1[0x29f] = uVar2;
      param_1[0x2a2] = uVar6;
      param_1[0x2a1] = uVar5;
      uVar2 = param_2[0x2a3];
      uVar6 = param_2[0x2a6];
      uVar5 = param_2[0x2a5];
      param_1[0x2a4] = param_2[0x2a4];
      param_1[0x2a3] = uVar2;
      param_1[0x2a6] = uVar6;
      param_1[0x2a5] = uVar5;
    }
    else {
      *(undefined2 *)(param_1 + 0x29f) = *(undefined2 *)(param_2 + 0x29f);
      param_1[0x2a0] = param_2[0x2a0];
      *(undefined1 *)(param_1 + 0x2a1) = *(undefined1 *)(param_2 + 0x2a1);
      param_1[0x2a2] = param_2[0x2a2];
      param_1[0x2a3] = lVar3;
      lVar3 = param_2[0x2ac];
      _swift_bridgeObjectRetain();
      if (lVar3 == 1) {
        uVar2 = param_2[0x2ac];
        uVar6 = param_2[0x2af];
        uVar5 = param_2[0x2ae];
        param_1[0x2ad] = param_2[0x2ad];
        param_1[0x2ac] = uVar2;
        param_1[0x2af] = uVar6;
        param_1[0x2ae] = uVar5;
        *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(param_2 + 0x2b0);
        uVar2 = param_2[0x2a4];
        uVar6 = param_2[0x2a7];
        uVar5 = param_2[0x2a6];
        param_1[0x2a5] = param_2[0x2a5];
        param_1[0x2a4] = uVar2;
        param_1[0x2a7] = uVar6;
        param_1[0x2a6] = uVar5;
        uVar6 = param_2[0x2a8];
        uVar5 = param_2[0x2ab];
        uVar2 = param_2[0x2aa];
        param_1[0x2a9] = param_2[0x2a9];
        param_1[0x2a8] = uVar6;
        param_1[0x2ab] = uVar5;
        param_1[0x2aa] = uVar2;
      }
      else {
        param_1[0x2a4] = param_2[0x2a4];
        *(undefined1 *)(param_1 + 0x2a5) = *(undefined1 *)(param_2 + 0x2a5);
        param_1[0x2a6] = param_2[0x2a6];
        *(undefined1 *)(param_1 + 0x2a7) = *(undefined1 *)(param_2 + 0x2a7);
        param_1[0x2a8] = param_2[0x2a8];
        *(undefined1 *)(param_1 + 0x2a9) = *(undefined1 *)(param_2 + 0x2a9);
        param_1[0x2aa] = param_2[0x2aa];
        *(undefined1 *)(param_1 + 0x2ab) = *(undefined1 *)(param_2 + 0x2ab);
        param_1[0x2ac] = lVar3;
        *(undefined1 *)(param_1 + 0x2ae) = *(undefined1 *)(param_2 + 0x2ae);
        param_1[0x2ad] = param_2[0x2ad];
        *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(param_2 + 0x2b0);
        param_1[0x2af] = param_2[0x2af];
        _objc_retain(lVar3);
      }
      param_1[0x2b1] = param_2[0x2b1];
      *(undefined1 *)(param_1 + 0x2b2) = *(undefined1 *)(param_2 + 0x2b2);
      param_1[0x2b3] = param_2[0x2b3];
      *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
      param_1[0x2b5] = param_2[0x2b5];
      *(undefined1 *)(param_1 + 0x2b6) = *(undefined1 *)(param_2 + 0x2b6);
    }
    if (param_2[0x2b7] == 1) {
      uVar2 = param_2[0x2b7];
      param_1[0x2b8] = param_2[0x2b8];
      param_1[0x2b7] = uVar2;
      *(undefined1 *)(param_1 + 0x2b9) = *(undefined1 *)(param_2 + 0x2b9);
    }
    else {
      param_1[0x2b7] = param_2[0x2b7];
      param_1[0x2b8] = param_2[0x2b8];
      *(undefined1 *)(param_1 + 0x2b9) = *(undefined1 *)(param_2 + 0x2b9);
      _swift_bridgeObjectRetain();
    }
    lVar3 = param_2[700];
    if (lVar3 == 1) {
      uVar2 = param_2[0x2ba];
      param_1[699] = param_2[699];
      param_1[0x2ba] = uVar2;
      param_1[700] = param_2[700];
    }
    else {
      uVar2 = param_2[0x2ba];
      param_1[699] = param_2[699];
      param_1[0x2ba] = uVar2;
      param_1[700] = lVar3;
      _swift_bridgeObjectRetain();
    }
    param_1[0x2bd] = param_2[0x2bd];
    param_1[0x2be] = param_2[0x2be];
    *(undefined2 *)(param_1 + 0x2bf) = *(undefined2 *)(param_2 + 0x2bf);
    _objc_retain();
  }
  param_1[0x2c0] = param_2[0x2c0];
  *(undefined2 *)(param_1 + 0x2c1) = *(undefined2 *)(param_2 + 0x2c1);
  param_1[0x2c2] = param_2[0x2c2];
  *(undefined1 *)(param_1 + 0x2c3) = *(undefined1 *)(param_2 + 0x2c3);
  *(undefined2 *)((long)param_1 + 0x1619) = *(undefined2 *)((long)param_2 + 0x1619);
  param_1[0x2c4] = param_2[0x2c4];
  lVar3 = param_2[0x2c6];
  if (lVar3 == 0) {
    uVar2 = param_2[0x2c5];
    uVar6 = param_2[0x2c8];
    uVar5 = param_2[0x2c7];
    param_1[0x2c6] = param_2[0x2c6];
    param_1[0x2c5] = uVar2;
    param_1[0x2c8] = uVar6;
    param_1[0x2c7] = uVar5;
    param_1[0x2c9] = param_2[0x2c9];
  }
  else {
    param_1[0x2c5] = param_2[0x2c5];
    param_1[0x2c6] = lVar3;
    param_1[0x2c7] = param_2[0x2c7];
    uVar2 = param_2[0x2c8];
    param_1[0x2c8] = uVar2;
    param_1[0x2c9] = param_2[0x2c9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar2);
  }
LAB_1042307a0:
  lVar3 = param_2[0x2cc];
  if (lVar3 == 1) {
    uVar2 = param_2[0x2ca];
    uVar6 = param_2[0x2cd];
    uVar5 = param_2[0x2cc];
    param_1[0x2cb] = param_2[0x2cb];
    param_1[0x2ca] = uVar2;
    param_1[0x2cd] = uVar6;
    param_1[0x2cc] = uVar5;
    param_1[0x2ce] = param_2[0x2ce];
  }
  else {
    *(undefined1 *)(param_1 + 0x2ca) = *(undefined1 *)(param_2 + 0x2ca);
    param_1[0x2cb] = param_2[0x2cb];
    param_1[0x2cc] = lVar3;
    param_1[0x2cd] = param_2[0x2cd];
    uVar2 = param_2[0x2ce];
    param_1[0x2ce] = uVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar2);
  }
  uVar2 = param_2[0x2cf];
  param_1[0x2d0] = param_2[0x2d0];
  param_1[0x2cf] = uVar2;
  lVar3 = param_2[0x2d8];
  if (lVar3 == 1) {
    uVar2 = param_2[0x2d1];
    uVar6 = param_2[0x2d4];
    uVar5 = param_2[0x2d3];
    param_1[0x2d2] = param_2[0x2d2];
    param_1[0x2d1] = uVar2;
    param_1[0x2d4] = uVar6;
    param_1[0x2d3] = uVar5;
    uVar2 = param_2[0x2d5];
    uVar6 = param_2[0x2d8];
    uVar5 = param_2[0x2d7];
    param_1[0x2d6] = param_2[0x2d6];
    param_1[0x2d5] = uVar2;
    param_1[0x2d8] = uVar6;
    param_1[0x2d7] = uVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d1) = *(undefined1 *)(param_2 + 0x2d1);
    uVar2 = param_2[0x2d2];
    param_1[0x2d3] = param_2[0x2d3];
    param_1[0x2d2] = uVar2;
    param_1[0x2d4] = param_2[0x2d4];
    param_1[0x2d5] = param_2[0x2d5];
    *(undefined1 *)(param_1 + 0x2d6) = *(undefined1 *)(param_2 + 0x2d6);
    *(undefined1 *)((long)param_1 + 0x16b1) = *(undefined1 *)((long)param_2 + 0x16b1);
    *(undefined2 *)((long)param_1 + 0x16b2) = *(undefined2 *)((long)param_2 + 0x16b2);
    param_1[0x2d7] = param_2[0x2d7];
    param_1[0x2d8] = lVar3;
    _swift_bridgeObjectRetain();
  }
  lVar3 = param_2[0x2dc];
  if (lVar3 == 1) {
    uVar2 = param_2[0x2d9];
    uVar6 = param_2[0x2dc];
    uVar5 = param_2[0x2db];
    param_1[0x2da] = param_2[0x2da];
    param_1[0x2d9] = uVar2;
    param_1[0x2dc] = uVar6;
    param_1[0x2db] = uVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d9) = *(undefined1 *)(param_2 + 0x2d9);
    uVar2 = param_2[0x2da];
    param_1[0x2db] = param_2[0x2db];
    param_1[0x2da] = uVar2;
    param_1[0x2dc] = lVar3;
    _swift_bridgeObjectRetain();
  }
  uVar2 = param_2[0x2dd];
  param_1[0x2de] = param_2[0x2de];
  param_1[0x2dd] = uVar2;
  uVar2 = param_2[0x2df];
  param_1[0x2e0] = param_2[0x2e0];
  param_1[0x2df] = uVar2;
  param_1[0x2e1] = param_2[0x2e1];
  *(undefined2 *)(param_1 + 0x2e2) = *(undefined2 *)(param_2 + 0x2e2);
  param_1[0x2e3] = param_2[0x2e3];
  uVar2 = param_2[0x2e4];
  param_1[0x2e5] = param_2[0x2e5];
  param_1[0x2e4] = uVar2;
  param_1[0x2e6] = param_2[0x2e6];
  param_1[0x2e7] = param_2[0x2e7];
  param_1[0x2e8] = param_2[0x2e8];
  *(undefined1 *)(param_1 + 0x2e9) = *(undefined1 *)(param_2 + 0x2e9);
  lVar3 = param_2[0x2f0];
  _swift_bridgeObjectRetain();
  if (lVar3 == 1) {
    uVar2 = param_2[0x2ea];
    uVar6 = param_2[0x2ed];
    uVar5 = param_2[0x2ec];
    param_1[0x2eb] = param_2[0x2eb];
    param_1[0x2ea] = uVar2;
    param_1[0x2ed] = uVar6;
    param_1[0x2ec] = uVar5;
    uVar2 = param_2[0x2ee];
    param_1[0x2ef] = param_2[0x2ef];
    param_1[0x2ee] = uVar2;
    param_1[0x2f0] = param_2[0x2f0];
  }
  else {
    param_1[0x2ea] = param_2[0x2ea];
    *(undefined1 *)(param_1 + 0x2eb) = *(undefined1 *)(param_2 + 0x2eb);
    param_1[0x2ec] = param_2[0x2ec];
    *(undefined1 *)(param_1 + 0x2ed) = *(undefined1 *)(param_2 + 0x2ed);
    param_1[0x2ee] = param_2[0x2ee];
    *(undefined1 *)(param_1 + 0x2ef) = *(undefined1 *)(param_2 + 0x2ef);
    param_1[0x2f0] = lVar3;
    _swift_bridgeObjectRetain(lVar3);
  }
  *(undefined1 *)(param_1 + 0x2f1) = *(undefined1 *)(param_2 + 0x2f1);
  param_1[0x2f2] = param_2[0x2f2];
  param_1[0x2f3] = param_2[0x2f3];
  lVar3 = param_2[0x2f7];
  _swift_bridgeObjectRetain();
  if (lVar3 == 1) {
    uVar2 = param_2[0x2f4];
    uVar6 = param_2[0x2f7];
    uVar5 = param_2[0x2f6];
    param_1[0x2f5] = param_2[0x2f5];
    param_1[0x2f4] = uVar2;
    param_1[0x2f7] = uVar6;
    param_1[0x2f6] = uVar5;
    uVar2 = param_2[0x2f8];
    param_1[0x2f9] = param_2[0x2f9];
    param_1[0x2f8] = uVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)(param_2 + 0x2f4);
    param_1[0x2f5] = param_2[0x2f5];
    param_1[0x2f6] = param_2[0x2f6];
    param_1[0x2f7] = lVar3;
    *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0x2f8);
    uVar2 = param_2[0x2f9];
    param_1[0x2f9] = uVar2;
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(uVar2);
  }
  return param_1;
}



/* Entry: 10423973c; end: 1042397d7;  */

undefined8 FUN_10423973c(undefined8 param_1)

{
  (*(code *)(undefined *)0x1042185a0)();
  return param_1;
}



/* Entry: 1042397d8; end: 1042397df;  */

void FUN_1042397d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x17d0);
  return;
}



/* Entry: 1042397e0; end: 10423bf1b;  */

undefined8 * FUN_1042397e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _objc_release(uVar4);
  if (param_1[300] == 1) {
LAB_104239850:
    _memcpy(param_1 + 4,param_2 + 4,0xab2);
  }
  else {
    if (param_2[300] == 1) {
      func_0x00010179528c(param_1 + 4);
      goto LAB_104239850;
    }
    param_1[4] = param_2[4];
    if (param_1[6] == 1) {
LAB_10423988c:
      _memcpy(param_1 + 5,param_2 + 5,0x5a8);
    }
    else {
      lVar6 = param_2[6];
      if (lVar6 == 1) {
        func_0x00010178e3b8(param_1 + 5);
        goto LAB_10423988c;
      }
      param_1[5] = param_2[5];
      param_1[6] = lVar6;
      _swift_bridgeObjectRelease();
      param_1[7] = param_2[7];
      param_1[8] = param_2[8];
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      uVar4 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar4;
      uVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar4;
      uVar4 = param_1[0xf];
      param_1[0xf] = param_2[0xf];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      uVar4 = param_2[0x13];
      uVar5 = param_1[0x13];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar4;
      _swift_bridgeObjectRelease(uVar5);
      *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
      if (param_1[0x16] == 0) {
LAB_10423999c:
        uVar4 = param_2[0x21];
        uVar8 = param_2[0x24];
        uVar5 = param_2[0x23];
        param_1[0x22] = param_2[0x22];
        param_1[0x21] = uVar4;
        param_1[0x24] = uVar8;
        param_1[0x23] = uVar5;
        param_1[0x25] = param_2[0x25];
        uVar4 = param_2[0x19];
        uVar8 = param_2[0x1c];
        uVar5 = param_2[0x1b];
        param_1[0x1a] = param_2[0x1a];
        param_1[0x19] = uVar4;
        param_1[0x1c] = uVar8;
        param_1[0x1b] = uVar5;
        uVar8 = param_2[0x1d];
        uVar5 = param_2[0x20];
        uVar4 = param_2[0x1f];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1d] = uVar8;
        param_1[0x20] = uVar5;
        param_1[0x1f] = uVar4;
        uVar8 = param_2[0x15];
        uVar5 = param_2[0x18];
        uVar4 = param_2[0x17];
        param_1[0x16] = param_2[0x16];
        param_1[0x15] = uVar8;
        param_1[0x18] = uVar5;
        param_1[0x17] = uVar4;
      }
      else {
        lVar6 = param_2[0x16];
        if (lVar6 == 0) {
          func_0x0001018657d8(param_1 + 0x15);
          goto LAB_10423999c;
        }
        param_1[0x15] = param_2[0x15];
        param_1[0x16] = lVar6;
        _swift_bridgeObjectRelease();
        uVar4 = param_2[0x17];
        param_1[0x18] = param_2[0x18];
        param_1[0x17] = uVar4;
        uVar4 = param_2[0x19];
        param_1[0x1a] = param_2[0x1a];
        param_1[0x19] = uVar4;
        uVar4 = param_2[0x1b];
        param_1[0x1c] = param_2[0x1c];
        param_1[0x1b] = uVar4;
        uVar4 = param_2[0x1d];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1d] = uVar4;
        param_1[0x1f] = param_2[0x1f];
        *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
        param_1[0x21] = param_2[0x21];
        uVar4 = param_2[0x22];
        param_1[0x23] = param_2[0x23];
        param_1[0x22] = uVar4;
        uVar4 = param_1[0x24];
        param_1[0x24] = param_2[0x24];
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = param_1[0x25];
        param_1[0x25] = param_2[0x25];
        _swift_bridgeObjectRelease(uVar4);
      }
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
      uVar4 = param_2[0x27];
      param_1[0x28] = param_2[0x28];
      param_1[0x27] = uVar4;
      uVar4 = *(undefined8 *)((long)param_2 + 0x144);
      *(undefined8 *)((long)param_1 + 0x14c) = *(undefined8 *)((long)param_2 + 0x14c);
      *(undefined8 *)((long)param_1 + 0x144) = uVar4;
      param_1[0x2b] = param_2[0x2b];
      uVar4 = param_2[0x38];
      uVar8 = param_2[0x3b];
      uVar5 = param_2[0x3a];
      param_1[0x39] = param_2[0x39];
      param_1[0x38] = uVar4;
      param_1[0x3b] = uVar8;
      param_1[0x3a] = uVar5;
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
      uVar4 = param_2[0x30];
      uVar8 = param_2[0x33];
      uVar5 = param_2[0x32];
      param_1[0x31] = param_2[0x31];
      param_1[0x30] = uVar4;
      param_1[0x33] = uVar8;
      param_1[0x32] = uVar5;
      uVar8 = param_2[0x34];
      uVar5 = param_2[0x37];
      uVar4 = param_2[0x36];
      param_1[0x35] = param_2[0x35];
      param_1[0x34] = uVar8;
      param_1[0x37] = uVar5;
      param_1[0x36] = uVar4;
      uVar8 = param_2[0x2c];
      uVar5 = param_2[0x2f];
      uVar4 = param_2[0x2e];
      param_1[0x2d] = param_2[0x2d];
      param_1[0x2c] = uVar8;
      param_1[0x2f] = uVar5;
      param_1[0x2e] = uVar4;
      uVar4 = param_2[0x45];
      uVar8 = param_2[0x48];
      uVar5 = param_2[0x47];
      param_1[0x46] = param_2[0x46];
      param_1[0x45] = uVar4;
      param_1[0x48] = uVar8;
      param_1[0x47] = uVar5;
      uVar4 = param_2[0x49];
      param_1[0x4a] = param_2[0x4a];
      param_1[0x49] = uVar4;
      uVar4 = *(undefined8 *)((long)param_2 + 0x251);
      *(undefined8 *)((long)param_1 + 0x259) = *(undefined8 *)((long)param_2 + 0x259);
      *(undefined8 *)((long)param_1 + 0x251) = uVar4;
      uVar4 = param_2[0x3d];
      uVar8 = param_2[0x40];
      uVar5 = param_2[0x3f];
      param_1[0x3e] = param_2[0x3e];
      param_1[0x3d] = uVar4;
      param_1[0x40] = uVar8;
      param_1[0x3f] = uVar5;
      uVar4 = param_2[0x41];
      uVar8 = param_2[0x44];
      uVar5 = param_2[0x43];
      param_1[0x42] = param_2[0x42];
      param_1[0x41] = uVar4;
      param_1[0x44] = uVar8;
      param_1[0x43] = uVar5;
      uVar5 = param_2[0x4e];
      uVar4 = param_2[0x4d];
      uVar9 = param_2[0x50];
      uVar8 = param_2[0x4f];
      uVar10 = param_2[0x51];
      uVar12 = param_2[0x54];
      uVar11 = param_2[0x53];
      param_1[0x52] = param_2[0x52];
      param_1[0x51] = uVar10;
      param_1[0x54] = uVar12;
      param_1[0x53] = uVar11;
      param_1[0x4e] = uVar5;
      param_1[0x4d] = uVar4;
      param_1[0x50] = uVar9;
      param_1[0x4f] = uVar8;
      uVar5 = param_2[0x56];
      uVar4 = param_2[0x55];
      uVar9 = param_2[0x58];
      uVar8 = param_2[0x57];
      uVar11 = param_2[0x5a];
      uVar10 = param_2[0x59];
      uVar12 = *(undefined8 *)((long)param_2 + 0x2d2);
      *(undefined8 *)((long)param_1 + 0x2da) = *(undefined8 *)((long)param_2 + 0x2da);
      *(undefined8 *)((long)param_1 + 0x2d2) = uVar12;
      param_1[0x58] = uVar9;
      param_1[0x57] = uVar8;
      param_1[0x5a] = uVar11;
      param_1[0x59] = uVar10;
      param_1[0x56] = uVar5;
      param_1[0x55] = uVar4;
      uVar4 = param_1[0x5d];
      param_1[0x5d] = param_2[0x5d];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0x5e] = param_2[0x5e];
      *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x5f);
      *(undefined1 *)((long)param_1 + 0x2f9) = *(undefined1 *)((long)param_2 + 0x2f9);
      uVar4 = param_2[0x60];
      param_1[0x61] = param_2[0x61];
      param_1[0x60] = uVar4;
      *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
      uVar4 = param_1[99];
      param_1[99] = param_2[99];
      _swift_bridgeObjectRelease(uVar4);
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
      *(undefined1 *)((long)param_1 + 0x321) = *(undefined1 *)((long)param_2 + 0x321);
      if (param_1[0x68] == 1) {
LAB_104239af4:
        uVar4 = param_2[0x65];
        uVar8 = param_2[0x68];
        uVar5 = param_2[0x67];
        param_1[0x66] = param_2[0x66];
        param_1[0x65] = uVar4;
        param_1[0x68] = uVar8;
        param_1[0x67] = uVar5;
        uVar4 = param_2[0x69];
        param_1[0x6a] = param_2[0x6a];
        param_1[0x69] = uVar4;
      }
      else {
        lVar6 = param_2[0x68];
        if (lVar6 == 1) {
          func_0x00010186580c(param_1 + 0x65);
          goto LAB_104239af4;
        }
        *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
        param_1[0x66] = param_2[0x66];
        param_1[0x67] = param_2[0x67];
        param_1[0x68] = lVar6;
        _swift_bridgeObjectRelease();
        *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
        uVar4 = param_1[0x6a];
        param_1[0x6a] = param_2[0x6a];
        _swift_bridgeObjectRelease(uVar4);
      }
      *(undefined1 *)(param_1 + 0x6b) = *(undefined1 *)(param_2 + 0x6b);
      uVar4 = param_1[0x6c];
      param_1[0x6c] = param_2[0x6c];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0x6d] = param_2[0x6d];
      uVar4 = param_1[0x6e];
      param_1[0x6e] = param_2[0x6e];
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = param_1[0x6f];
      param_1[0x6f] = param_2[0x6f];
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = param_1[0x70];
      param_1[0x70] = param_2[0x70];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0x71] = param_2[0x71];
      *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_2 + 0x72);
      param_1[0x73] = param_2[0x73];
      *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
      param_1[0x75] = param_2[0x75];
      *(undefined1 *)(param_1 + 0x76) = *(undefined1 *)(param_2 + 0x76);
      uVar4 = param_1[0x77];
      param_1[0x77] = param_2[0x77];
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = param_1[0x78];
      param_1[0x78] = param_2[0x78];
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = param_2[0x7d];
      uVar8 = param_2[0x80];
      uVar5 = param_2[0x7f];
      param_1[0x7e] = param_2[0x7e];
      param_1[0x7d] = uVar4;
      param_1[0x80] = uVar8;
      param_1[0x7f] = uVar5;
      uVar4 = param_2[0x81];
      uVar8 = param_2[0x84];
      uVar5 = param_2[0x83];
      param_1[0x82] = param_2[0x82];
      param_1[0x81] = uVar4;
      param_1[0x84] = uVar8;
      param_1[0x83] = uVar5;
      uVar4 = param_2[0x79];
      uVar8 = param_2[0x7c];
      uVar5 = param_2[0x7b];
      param_1[0x7a] = param_2[0x7a];
      param_1[0x79] = uVar4;
      param_1[0x7c] = uVar8;
      param_1[0x7b] = uVar5;
      param_1[0x85] = param_2[0x85];
      *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)(param_2 + 0x87);
      param_1[0x86] = param_2[0x86];
      uVar4 = param_2[0x88];
      param_1[0x89] = param_2[0x89];
      param_1[0x88] = uVar4;
      uVar4 = param_2[0x8a];
      param_1[0x8b] = param_2[0x8b];
      param_1[0x8a] = uVar4;
      uVar4 = param_2[0x8c];
      param_1[0x8d] = param_2[0x8d];
      param_1[0x8c] = uVar4;
      uVar4 = param_1[0x8e];
      param_1[0x8e] = param_2[0x8e];
      _swift_bridgeObjectRelease(uVar4);
      if (param_1[0x9b] == 1) {
LAB_104239c68:
        uVar4 = param_2[0x97];
        uVar8 = param_2[0x9a];
        uVar5 = param_2[0x99];
        param_1[0x98] = param_2[0x98];
        param_1[0x97] = uVar4;
        param_1[0x9a] = uVar8;
        param_1[0x99] = uVar5;
        uVar4 = param_2[0x9b];
        param_1[0x9c] = param_2[0x9c];
        param_1[0x9b] = uVar4;
        *(undefined2 *)(param_1 + 0x9d) = *(undefined2 *)(param_2 + 0x9d);
        uVar4 = param_2[0x8f];
        uVar8 = param_2[0x92];
        uVar5 = param_2[0x91];
        param_1[0x90] = param_2[0x90];
        param_1[0x8f] = uVar4;
        param_1[0x92] = uVar8;
        param_1[0x91] = uVar5;
        uVar4 = param_2[0x93];
        uVar8 = param_2[0x96];
        uVar5 = param_2[0x95];
        param_1[0x94] = param_2[0x94];
        param_1[0x93] = uVar4;
        param_1[0x96] = uVar8;
        param_1[0x95] = uVar5;
      }
      else {
        lVar6 = param_2[0x9b];
        if (lVar6 == 1) {
          func_0x000101865840(param_1 + 0x8f);
          goto LAB_104239c68;
        }
        *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(param_2 + 0x8f);
        param_1[0x90] = param_2[0x90];
        *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
        param_1[0x92] = param_2[0x92];
        *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)(param_2 + 0x93);
        param_1[0x94] = param_2[0x94];
        *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(param_2 + 0x95);
        *(undefined1 *)(param_1 + 0x97) = *(undefined1 *)(param_2 + 0x97);
        param_1[0x96] = param_2[0x96];
        param_1[0x98] = param_2[0x98];
        *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
        param_1[0x9a] = param_2[0x9a];
        param_1[0x9b] = lVar6;
        _swift_bridgeObjectRelease();
        param_1[0x9c] = param_2[0x9c];
        *(undefined2 *)(param_1 + 0x9d) = *(undefined2 *)(param_2 + 0x9d);
      }
      *(undefined1 *)((long)param_1 + 0x4ea) = *(undefined1 *)((long)param_2 + 0x4ea);
      uVar4 = param_1[0x9e];
      param_1[0x9e] = param_2[0x9e];
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = param_2[0xa3];
      uVar8 = param_2[0xa6];
      uVar5 = param_2[0xa5];
      param_1[0xa4] = param_2[0xa4];
      param_1[0xa3] = uVar4;
      param_1[0xa6] = uVar8;
      param_1[0xa5] = uVar5;
      *(undefined2 *)(param_1 + 0xa7) = *(undefined2 *)(param_2 + 0xa7);
      uVar8 = param_2[0x9f];
      uVar5 = param_2[0xa2];
      uVar4 = param_2[0xa1];
      param_1[0xa0] = param_2[0xa0];
      param_1[0x9f] = uVar8;
      param_1[0xa2] = uVar5;
      param_1[0xa1] = uVar4;
      if (param_1[0xa9] == 0) {
LAB_104239d98:
        uVar4 = param_2[0xa8];
        uVar8 = param_2[0xab];
        uVar5 = param_2[0xaa];
        param_1[0xa9] = param_2[0xa9];
        param_1[0xa8] = uVar4;
        param_1[0xab] = uVar8;
        param_1[0xaa] = uVar5;
        param_1[0xac] = param_2[0xac];
      }
      else {
        lVar6 = param_2[0xa9];
        if (lVar6 == 0) {
          func_0x000101865874(param_1 + 0xa8);
          goto LAB_104239d98;
        }
        param_1[0xa8] = param_2[0xa8];
        param_1[0xa9] = lVar6;
        _swift_bridgeObjectRelease();
        param_1[0xaa] = param_2[0xaa];
        uVar4 = param_1[0xab];
        param_1[0xab] = param_2[0xab];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0xac] = param_2[0xac];
      }
      *(undefined1 *)(param_1 + 0xaf) = *(undefined1 *)(param_2 + 0xaf);
      uVar4 = param_2[0xad];
      param_1[0xae] = param_2[0xae];
      param_1[0xad] = uVar4;
      uVar4 = param_1[0xb0];
      param_1[0xb0] = param_2[0xb0];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0xb1] = param_2[0xb1];
      *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(param_2 + 0xb2);
      uVar4 = param_1[0xb3];
      param_1[0xb3] = param_2[0xb3];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0xb4] = param_2[0xb4];
      *(undefined1 *)(param_1 + 0xb5) = *(undefined1 *)(param_2 + 0xb5);
      uVar4 = param_1[0xb6];
      param_1[0xb6] = param_2[0xb6];
      _objc_release(uVar4);
      uVar4 = param_1[0xb7];
      param_1[0xb7] = param_2[0xb7];
      _objc_release(uVar4);
      uVar4 = param_1[0xb8];
      param_1[0xb8] = param_2[0xb8];
      _objc_release(uVar4);
      uVar4 = param_1[0xb9];
      param_1[0xb9] = param_2[0xb9];
      _swift_bridgeObjectRelease(uVar4);
    }
    if (param_1[0xbe] == 1) {
LAB_104239e68:
      uVar4 = param_2[0xc2];
      uVar8 = param_2[0xc5];
      uVar5 = param_2[0xc4];
      param_1[0xc3] = param_2[0xc3];
      param_1[0xc2] = uVar4;
      param_1[0xc5] = uVar8;
      param_1[0xc4] = uVar5;
      uVar4 = *(undefined8 *)((long)param_2 + 0x629);
      *(undefined8 *)((long)param_1 + 0x631) = *(undefined8 *)((long)param_2 + 0x631);
      *(undefined8 *)((long)param_1 + 0x629) = uVar4;
      uVar4 = param_2[0xba];
      uVar8 = param_2[0xbd];
      uVar5 = param_2[0xbc];
      param_1[0xbb] = param_2[0xbb];
      param_1[0xba] = uVar4;
      param_1[0xbd] = uVar8;
      param_1[0xbc] = uVar5;
      uVar8 = param_2[0xbe];
      uVar5 = param_2[0xc1];
      uVar4 = param_2[0xc0];
      param_1[0xbf] = param_2[0xbf];
      param_1[0xbe] = uVar8;
      param_1[0xc1] = uVar5;
      param_1[0xc0] = uVar4;
    }
    else {
      lVar6 = param_2[0xbe];
      if (lVar6 == 1) {
        func_0x00010178e348(param_1 + 0xba);
        goto LAB_104239e68;
      }
      uVar4 = param_2[0xba];
      param_1[0xbb] = param_2[0xbb];
      param_1[0xba] = uVar4;
      *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(param_2 + 0xbc);
      *(undefined1 *)((long)param_1 + 0x5e1) = *(undefined1 *)((long)param_2 + 0x5e1);
      param_1[0xbd] = param_2[0xbd];
      param_1[0xbe] = lVar6;
      _swift_bridgeObjectRelease();
      *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)(param_2 + 0xbf);
      param_1[0xc0] = param_2[0xc0];
      *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(param_2 + 0xc1);
      param_1[0xc2] = param_2[0xc2];
      *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)(param_2 + 0xc3);
      param_1[0xc4] = param_2[0xc4];
      *(undefined1 *)(param_1 + 0xc5) = *(undefined1 *)(param_2 + 0xc5);
      *(undefined1 *)(param_1 + 199) = *(undefined1 *)(param_2 + 199);
      param_1[0xc6] = param_2[0xc6];
    }
    if (param_1[0xce] == 1) {
LAB_104239f1c:
      _memcpy(param_1 + 200,param_2 + 200,0x301);
    }
    else {
      lVar6 = param_2[0xce];
      if (lVar6 == 1) {
        func_0x00010178e244(param_1 + 200);
        goto LAB_104239f1c;
      }
      *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
      *(undefined1 *)((long)param_1 + 0x641) = *(undefined1 *)((long)param_2 + 0x641);
      param_1[0xc9] = param_2[0xc9];
      *(undefined1 *)(param_1 + 0xca) = *(undefined1 *)(param_2 + 0xca);
      param_1[0xcb] = param_2[0xcb];
      *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
      param_1[0xcd] = param_2[0xcd];
      param_1[0xce] = lVar6;
      _swift_bridgeObjectRelease();
      param_1[0xcf] = param_2[0xcf];
      *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
      *(undefined1 *)((long)param_1 + 0x681) = *(undefined1 *)((long)param_2 + 0x681);
      param_1[0xd1] = param_2[0xd1];
      uVar4 = param_1[0xd2];
      param_1[0xd2] = param_2[0xd2];
      _swift_bridgeObjectRelease(uVar4);
      *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)(param_2 + 0xd3);
      *(undefined1 *)((long)param_1 + 0x699) = *(undefined1 *)((long)param_2 + 0x699);
      param_1[0xd4] = param_2[0xd4];
      *(undefined1 *)(param_1 + 0xd5) = *(undefined1 *)(param_2 + 0xd5);
      param_1[0xd6] = param_2[0xd6];
      *(undefined1 *)(param_1 + 0xd7) = *(undefined1 *)(param_2 + 0xd7);
      param_1[0xd8] = param_2[0xd8];
      *(undefined1 *)(param_1 + 0xd9) = *(undefined1 *)(param_2 + 0xd9);
      *(undefined1 *)((long)param_1 + 0x6c9) = *(undefined1 *)((long)param_2 + 0x6c9);
      puVar1 = param_1 + 0xda;
      if (param_1[0xe5] == 1) {
LAB_10423a024:
        _memcpy(puVar1,param_2 + 0xda,0x101);
      }
      else {
        lVar6 = param_2[0xe5];
        if (lVar6 == 1) {
          func_0x0001017e2180(puVar1);
          goto LAB_10423a024;
        }
        *puVar1 = param_2[0xda];
        *(undefined1 *)(param_1 + 0xdb) = *(undefined1 *)(param_2 + 0xdb);
        param_1[0xdc] = param_2[0xdc];
        *(undefined1 *)(param_1 + 0xdd) = *(undefined1 *)(param_2 + 0xdd);
        param_1[0xde] = param_2[0xde];
        *(undefined1 *)(param_1 + 0xdf) = *(undefined1 *)(param_2 + 0xdf);
        *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_2 + 0xe1);
        param_1[0xe0] = param_2[0xe0];
        uVar4 = param_2[0xe2];
        *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(param_2 + 0xe3);
        param_1[0xe2] = uVar4;
        *(undefined1 *)((long)param_1 + 0x719) = *(undefined1 *)((long)param_2 + 0x719);
        param_1[0xe4] = param_2[0xe4];
        param_1[0xe5] = lVar6;
        _swift_bridgeObjectRelease();
        param_1[0xe6] = param_2[0xe6];
        uVar4 = param_1[0xe7];
        param_1[0xe7] = param_2[0xe7];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0xe8] = param_2[0xe8];
        *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
        param_1[0xea] = param_2[0xea];
        *(undefined1 *)(param_1 + 0xeb) = *(undefined1 *)(param_2 + 0xeb);
        param_1[0xec] = param_2[0xec];
        *(undefined1 *)(param_1 + 0xed) = *(undefined1 *)(param_2 + 0xed);
        *(undefined1 *)(param_1 + 0xef) = *(undefined1 *)(param_2 + 0xef);
        param_1[0xee] = param_2[0xee];
        uVar4 = param_2[0xf0];
        *(undefined1 *)(param_1 + 0xf1) = *(undefined1 *)(param_2 + 0xf1);
        param_1[0xf0] = uVar4;
        param_1[0xf2] = param_2[0xf2];
        uVar4 = param_1[0xf3];
        param_1[0xf3] = param_2[0xf3];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0xf4] = param_2[0xf4];
        *(undefined1 *)(param_1 + 0xf5) = *(undefined1 *)(param_2 + 0xf5);
        param_1[0xf6] = param_2[0xf6];
        *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)(param_2 + 0xf7);
        param_1[0xf8] = param_2[0xf8];
        uVar4 = param_1[0xf9];
        param_1[0xf9] = param_2[0xf9];
        _swift_bridgeObjectRelease(uVar4);
        *(undefined1 *)(param_1 + 0xfa) = *(undefined1 *)(param_2 + 0xfa);
      }
      *(undefined1 *)((long)param_1 + 0x7d1) = *(undefined1 *)((long)param_2 + 0x7d1);
      param_1[0xfb] = param_2[0xfb];
      param_1[0xfc] = param_2[0xfc];
      *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(param_2 + 0xfd);
      if (param_1[0xfe] == 1) {
LAB_10423a1a0:
        lVar6 = param_2[0xfe];
        param_1[0xff] = param_2[0xff];
        param_1[0xfe] = lVar6;
        param_1[0x100] = param_2[0x100];
      }
      else {
        lVar6 = param_2[0xfe];
        if (lVar6 == 1) {
          func_0x0001017e21b4(param_1 + 0xfe);
          goto LAB_10423a1a0;
        }
        param_1[0xfe] = lVar6;
        _objc_release();
        uVar4 = param_1[0xff];
        param_1[0xff] = param_2[0xff];
        _objc_release(uVar4);
        uVar4 = param_1[0x100];
        param_1[0x100] = param_2[0x100];
        _objc_release(uVar4);
      }
      *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_2 + 0x101);
      param_1[0x102] = param_2[0x102];
      *(undefined1 *)(param_1 + 0x103) = *(undefined1 *)(param_2 + 0x103);
      param_1[0x104] = param_2[0x104];
      *(undefined1 *)(param_1 + 0x105) = *(undefined1 *)(param_2 + 0x105);
      if (param_1[0x107] == 1) {
LAB_10423a22c:
        uVar4 = param_2[0x106];
        uVar8 = param_2[0x109];
        uVar5 = param_2[0x108];
        param_1[0x107] = param_2[0x107];
        param_1[0x106] = uVar4;
        param_1[0x109] = uVar8;
        param_1[0x108] = uVar5;
        uVar4 = param_2[0x10a];
        param_1[0x10b] = param_2[0x10b];
        param_1[0x10a] = uVar4;
      }
      else {
        lVar6 = param_2[0x107];
        if (lVar6 == 1) {
          func_0x0001017e21e8(param_1 + 0x106);
          goto LAB_10423a22c;
        }
        *(undefined2 *)(param_1 + 0x106) = *(undefined2 *)(param_2 + 0x106);
        param_1[0x107] = lVar6;
        _swift_bridgeObjectRelease();
        uVar4 = param_1[0x108];
        param_1[0x108] = param_2[0x108];
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = param_1[0x109];
        param_1[0x109] = param_2[0x109];
        _swift_bridgeObjectRelease(uVar4);
        *(undefined1 *)(param_1 + 0x10a) = *(undefined1 *)(param_2 + 0x10a);
        *(undefined2 *)((long)param_1 + 0x851) = *(undefined2 *)((long)param_2 + 0x851);
        *(undefined1 *)((long)param_1 + 0x853) = *(undefined1 *)((long)param_2 + 0x853);
        uVar4 = param_1[0x10b];
        param_1[0x10b] = param_2[0x10b];
        _swift_bridgeObjectRelease(uVar4);
      }
      param_1[0x10c] = param_2[0x10c];
      *(undefined1 *)(param_1 + 0x10d) = *(undefined1 *)(param_2 + 0x10d);
      param_1[0x10e] = param_2[0x10e];
      *(undefined1 *)(param_1 + 0x10f) = *(undefined1 *)(param_2 + 0x10f);
      *(undefined1 *)((long)param_1 + 0x879) = *(undefined1 *)((long)param_2 + 0x879);
      if (param_1[0x110] == 0) {
LAB_10423a314:
        lVar6 = param_2[0x110];
        param_1[0x111] = param_2[0x111];
        param_1[0x110] = lVar6;
        param_1[0x112] = param_2[0x112];
      }
      else {
        lVar6 = param_2[0x110];
        if (lVar6 == 0) {
          func_0x0001017e221c(param_1 + 0x110);
          goto LAB_10423a314;
        }
        param_1[0x110] = lVar6;
        _swift_bridgeObjectRelease();
        uVar4 = param_1[0x111];
        param_1[0x111] = param_2[0x111];
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = param_1[0x112];
        param_1[0x112] = param_2[0x112];
        _swift_bridgeObjectRelease(uVar4);
      }
      uVar4 = param_1[0x113];
      param_1[0x113] = param_2[0x113];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0x114] = param_2[0x114];
      uVar4 = param_1[0x115];
      param_1[0x115] = param_2[0x115];
      _swift_bridgeObjectRelease(uVar4);
      *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_2 + 0x116);
      *(undefined1 *)((long)param_1 + 0x8b1) = *(undefined1 *)((long)param_2 + 0x8b1);
      *(undefined1 *)((long)param_1 + 0x8b2) = *(undefined1 *)((long)param_2 + 0x8b2);
      param_1[0x117] = param_2[0x117];
      *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
      param_1[0x119] = param_2[0x119];
      uVar4 = param_2[0x11a];
      param_1[0x11b] = param_2[0x11b];
      param_1[0x11a] = uVar4;
      *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_2 + 0x11c);
      *(undefined1 *)((long)param_1 + 0x8e1) = *(undefined1 *)((long)param_2 + 0x8e1);
      param_1[0x11d] = param_2[0x11d];
      *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(param_2 + 0x11e);
      *(undefined1 *)((long)param_1 + 0x8f1) = *(undefined1 *)((long)param_2 + 0x8f1);
      *(undefined1 *)((long)param_1 + 0x8f2) = *(undefined1 *)((long)param_2 + 0x8f2);
      *(undefined1 *)((long)param_1 + 0x8f3) = *(undefined1 *)((long)param_2 + 0x8f3);
      param_1[0x11f] = param_2[0x11f];
      *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
      param_1[0x121] = param_2[0x121];
      *(undefined1 *)(param_1 + 0x122) = *(undefined1 *)(param_2 + 0x122);
      uVar4 = param_2[0x123];
      *(undefined1 *)(param_1 + 0x124) = *(undefined1 *)(param_2 + 0x124);
      param_1[0x123] = uVar4;
      param_1[0x125] = param_2[0x125];
      uVar4 = param_1[0x126];
      param_1[0x126] = param_2[0x126];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0x127] = param_2[0x127];
      *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
    }
    if (param_1[0x129] == 1) {
LAB_10423a43c:
      lVar6 = param_2[0x129];
      param_1[0x12a] = param_2[0x12a];
      param_1[0x129] = lVar6;
    }
    else {
      lVar6 = param_2[0x129];
      if (lVar6 == 1) {
        func_0x0001018658a8(param_1 + 0x129);
        goto LAB_10423a43c;
      }
      param_1[0x129] = lVar6;
      _swift_bridgeObjectRelease();
      param_1[0x12a] = param_2[0x12a];
    }
    plVar2 = param_1 + 299;
    lVar6 = param_2[299];
    if (param_1[299] == 1) {
LAB_10423a480:
      *plVar2 = lVar6;
    }
    else {
      if (lVar6 == 1) {
        FUN_1042278f8(plVar2);
        lVar6 = param_2[299];
        goto LAB_10423a480;
      }
      *plVar2 = lVar6;
      _swift_bridgeObjectRelease();
    }
    uVar4 = param_1[300];
    param_1[300] = param_2[300];
    _objc_release(uVar4);
    *(undefined2 *)(param_1 + 0x12d) = *(undefined2 *)(param_2 + 0x12d);
    plVar2 = param_1 + 0x12e;
    plVar3 = param_2 + 0x12e;
    if (param_1[0x12e] == 1) {
LAB_10423a4d0:
      uVar4 = param_2[0x132];
      uVar8 = param_2[0x135];
      uVar5 = param_2[0x134];
      param_1[0x133] = param_2[0x133];
      param_1[0x132] = uVar4;
      param_1[0x135] = uVar8;
      param_1[0x134] = uVar5;
      uVar4 = param_2[0x136];
      uVar8 = param_2[0x139];
      uVar5 = param_2[0x138];
      param_1[0x137] = param_2[0x137];
      param_1[0x136] = uVar4;
      param_1[0x139] = uVar8;
      param_1[0x138] = uVar5;
      lVar6 = *plVar3;
      uVar5 = param_2[0x131];
      uVar4 = param_2[0x130];
      param_1[0x12f] = param_2[0x12f];
      *plVar2 = lVar6;
      param_1[0x131] = uVar5;
      param_1[0x130] = uVar4;
    }
    else {
      lVar6 = *plVar3;
      if (lVar6 == 1) {
        func_0x00010178e198(plVar2);
        goto LAB_10423a4d0;
      }
      if (param_1[0x12e] == 0) {
LAB_10423ac7c:
        uVar4 = param_2[0x132];
        uVar8 = param_2[0x135];
        uVar5 = param_2[0x134];
        param_1[0x133] = param_2[0x133];
        param_1[0x132] = uVar4;
        param_1[0x135] = uVar8;
        param_1[0x134] = uVar5;
        uVar4 = param_2[0x136];
        param_1[0x137] = param_2[0x137];
        param_1[0x136] = uVar4;
        lVar6 = *plVar3;
        uVar5 = param_2[0x131];
        uVar4 = param_2[0x130];
        param_1[0x12f] = param_2[0x12f];
        *plVar2 = lVar6;
        param_1[0x131] = uVar5;
        param_1[0x130] = uVar4;
      }
      else {
        if (lVar6 == 0) {
          func_0x0001017b6434(plVar2);
          goto LAB_10423ac7c;
        }
        param_1[0x12e] = lVar6;
        _swift_bridgeObjectRelease();
        uVar4 = param_1[0x12f];
        param_1[0x12f] = param_2[0x12f];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x130] = param_2[0x130];
        *(undefined1 *)(param_1 + 0x131) = *(undefined1 *)(param_2 + 0x131);
        uVar4 = param_2[0x132];
        param_1[0x133] = param_2[0x133];
        param_1[0x132] = uVar4;
        if ((ulong)param_1[0x135] >> 0x3c < 0xf) {
          uVar7 = param_2[0x135];
          if (0xe < uVar7 >> 0x3c) {
            func_0x0001006e5814(param_1 + 0x134);
            goto LAB_10423a5b4;
          }
          uVar4 = param_1[0x134];
          param_1[0x134] = param_2[0x134];
          param_1[0x135] = uVar7;
          func_0x00010006c090(uVar4);
        }
        else {
LAB_10423a5b4:
          uVar4 = param_2[0x134];
          param_1[0x135] = param_2[0x135];
          param_1[0x134] = uVar4;
        }
        uVar4 = param_2[0x136];
        param_1[0x137] = param_2[0x137];
        param_1[0x136] = uVar4;
      }
      if ((ulong)param_1[0x139] >> 0x3c < 0xf) {
        uVar7 = param_2[0x139];
        if (0xe < uVar7 >> 0x3c) {
          func_0x0001006e5814(param_1 + 0x138);
          goto LAB_10423ace4;
        }
        uVar4 = param_1[0x138];
        param_1[0x138] = param_2[0x138];
        param_1[0x139] = uVar7;
        func_0x00010006c090(uVar4);
      }
      else {
LAB_10423ace4:
        uVar4 = param_2[0x138];
        param_1[0x139] = param_2[0x139];
        param_1[0x138] = uVar4;
      }
    }
    if (param_1[0x13e] == 1) {
LAB_10423a510:
      uVar4 = param_2[0x14a];
      uVar8 = param_2[0x14d];
      uVar5 = param_2[0x14c];
      param_1[0x14b] = param_2[0x14b];
      param_1[0x14a] = uVar4;
      param_1[0x14d] = uVar8;
      param_1[0x14c] = uVar5;
      uVar4 = param_2[0x14e];
      param_1[0x14f] = param_2[0x14f];
      param_1[0x14e] = uVar4;
      uVar4 = *(undefined8 *)((long)param_2 + 0xa79);
      *(undefined8 *)((long)param_1 + 0xa81) = *(undefined8 *)((long)param_2 + 0xa81);
      *(undefined8 *)((long)param_1 + 0xa79) = uVar4;
      uVar4 = param_2[0x142];
      uVar8 = param_2[0x145];
      uVar5 = param_2[0x144];
      param_1[0x143] = param_2[0x143];
      param_1[0x142] = uVar4;
      param_1[0x145] = uVar8;
      param_1[0x144] = uVar5;
      uVar4 = param_2[0x146];
      uVar8 = param_2[0x149];
      uVar5 = param_2[0x148];
      param_1[0x147] = param_2[0x147];
      param_1[0x146] = uVar4;
      param_1[0x149] = uVar8;
      param_1[0x148] = uVar5;
      uVar4 = param_2[0x13a];
      uVar8 = param_2[0x13d];
      uVar5 = param_2[0x13c];
      param_1[0x13b] = param_2[0x13b];
      param_1[0x13a] = uVar4;
      param_1[0x13d] = uVar8;
      param_1[0x13c] = uVar5;
      uVar4 = param_2[0x13e];
      uVar8 = param_2[0x141];
      uVar5 = param_2[0x140];
      param_1[0x13f] = param_2[0x13f];
      param_1[0x13e] = uVar4;
      param_1[0x141] = uVar8;
      param_1[0x140] = uVar5;
    }
    else {
      lVar6 = param_2[0x13e];
      if (lVar6 == 1) {
        func_0x00010178e2d8(param_1 + 0x13a);
        goto LAB_10423a510;
      }
      *(undefined1 *)(param_1 + 0x13a) = *(undefined1 *)(param_2 + 0x13a);
      *(undefined1 *)((long)param_1 + 0x9d1) = *(undefined1 *)((long)param_2 + 0x9d1);
      param_1[0x13b] = param_2[0x13b];
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
      param_1[0x13d] = param_2[0x13d];
      param_1[0x13e] = lVar6;
      _swift_bridgeObjectRelease();
      puVar1 = param_1 + 0x13f;
      if (param_1[0x147] == 1) {
LAB_10423a618:
        uVar4 = param_2[0x147];
        uVar8 = param_2[0x14a];
        uVar5 = param_2[0x149];
        param_1[0x148] = param_2[0x148];
        param_1[0x147] = uVar4;
        param_1[0x14a] = uVar8;
        param_1[0x149] = uVar5;
        *(undefined1 *)(param_1 + 0x14b) = *(undefined1 *)(param_2 + 0x14b);
        uVar4 = param_2[0x13f];
        uVar8 = param_2[0x142];
        uVar5 = param_2[0x141];
        param_1[0x140] = param_2[0x140];
        *puVar1 = uVar4;
        param_1[0x142] = uVar8;
        param_1[0x141] = uVar5;
        uVar8 = param_2[0x143];
        uVar5 = param_2[0x146];
        uVar4 = param_2[0x145];
        param_1[0x144] = param_2[0x144];
        param_1[0x143] = uVar8;
        param_1[0x146] = uVar5;
        param_1[0x145] = uVar4;
      }
      else {
        lVar6 = param_2[0x147];
        if (lVar6 == 1) {
          func_0x00010180cee4(puVar1);
          goto LAB_10423a618;
        }
        *puVar1 = param_2[0x13f];
        *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
        param_1[0x141] = param_2[0x141];
        *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)(param_2 + 0x142);
        param_1[0x143] = param_2[0x143];
        *(undefined1 *)(param_1 + 0x144) = *(undefined1 *)(param_2 + 0x144);
        *(undefined1 *)(param_1 + 0x146) = *(undefined1 *)(param_2 + 0x146);
        param_1[0x145] = param_2[0x145];
        param_1[0x147] = lVar6;
        _objc_release();
        param_1[0x148] = param_2[0x148];
        *(undefined1 *)(param_1 + 0x149) = *(undefined1 *)(param_2 + 0x149);
        param_1[0x14a] = param_2[0x14a];
        *(undefined1 *)(param_1 + 0x14b) = *(undefined1 *)(param_2 + 0x14b);
      }
      param_1[0x14c] = param_2[0x14c];
      *(undefined1 *)(param_1 + 0x14d) = *(undefined1 *)(param_2 + 0x14d);
      param_1[0x14e] = param_2[0x14e];
      *(undefined1 *)(param_1 + 0x14f) = *(undefined1 *)(param_2 + 0x14f);
      param_1[0x150] = param_2[0x150];
      *(undefined1 *)(param_1 + 0x151) = *(undefined1 *)(param_2 + 0x151);
    }
    if (param_1[0x152] == 1) {
LAB_10423a6fc:
      lVar6 = param_2[0x152];
      param_1[0x153] = param_2[0x153];
      param_1[0x152] = lVar6;
      *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
    }
    else {
      lVar6 = param_2[0x152];
      if (lVar6 == 1) {
        func_0x00010422792c(param_1 + 0x152);
        goto LAB_10423a6fc;
      }
      param_1[0x152] = lVar6;
      _swift_bridgeObjectRelease();
      param_1[0x153] = param_2[0x153];
      *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
    }
    if (param_1[0x157] == 1) {
LAB_10423a750:
      uVar4 = param_2[0x155];
      param_1[0x156] = param_2[0x156];
      param_1[0x155] = uVar4;
      param_1[0x157] = param_2[0x157];
    }
    else {
      lVar6 = param_2[0x157];
      if (lVar6 == 1) {
        func_0x000104227960(param_1 + 0x155);
        goto LAB_10423a750;
      }
      param_1[0x155] = param_2[0x155];
      param_1[0x156] = param_2[0x156];
      param_1[0x157] = lVar6;
      _swift_bridgeObjectRelease();
    }
    uVar4 = param_1[0x158];
    param_1[0x158] = param_2[0x158];
    _objc_release(uVar4);
    param_1[0x159] = param_2[0x159];
    *(undefined2 *)(param_1 + 0x15a) = *(undefined2 *)(param_2 + 0x15a);
  }
  if (param_1[0x15c] == 1) {
LAB_10423a7bc:
    _memcpy(param_1 + 0x15b,param_2 + 0x15b,0xb78);
  }
  else {
    lVar6 = param_2[0x15c];
    if (lVar6 == 1) {
      func_0x00010178e444(param_1 + 0x15b);
      goto LAB_10423a7bc;
    }
    param_1[0x15b] = param_2[0x15b];
    param_1[0x15c] = lVar6;
    _swift_bridgeObjectRelease();
    param_1[0x15d] = param_2[0x15d];
    *(undefined1 *)(param_1 + 0x15e) = *(undefined1 *)(param_2 + 0x15e);
    param_1[0x15f] = param_2[0x15f];
    uVar4 = param_1[0x160];
    param_1[0x160] = param_2[0x160];
    _swift_bridgeObjectRelease(uVar4);
    param_1[0x161] = param_2[0x161];
    uVar4 = param_2[0x162];
    param_1[0x163] = param_2[0x163];
    param_1[0x162] = uVar4;
    param_1[0x164] = param_2[0x164];
    param_1[0x165] = param_2[0x165];
    param_1[0x166] = param_2[0x166];
    uVar4 = param_1[0x167];
    param_1[0x167] = param_2[0x167];
    _swift_bridgeObjectRelease(uVar4);
    *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
    if (param_1[0x291] == 2) {
LAB_10423ab84:
      _memcpy(param_1 + 0x169,param_2 + 0x169,0xab2);
    }
    else {
      if (param_2[0x291] == 2) {
        func_0x0001018a331c(param_1 + 0x169);
        goto LAB_10423ab84;
      }
      if (param_1[0x291] == 1) goto LAB_10423ab84;
      if (param_2[0x291] == 1) {
        func_0x00010179528c(param_1 + 0x169);
        goto LAB_10423ab84;
      }
      param_1[0x169] = param_2[0x169];
      if (param_1[0x16b] == 1) {
LAB_10423ac60:
        _memcpy(param_1 + 0x16a,param_2 + 0x16a,0x5a8);
      }
      else {
        lVar6 = param_2[0x16b];
        if (lVar6 == 1) {
          func_0x00010178e3b8(param_1 + 0x16a);
          goto LAB_10423ac60;
        }
        param_1[0x16a] = param_2[0x16a];
        param_1[0x16b] = lVar6;
        _swift_bridgeObjectRelease();
        param_1[0x16c] = param_2[0x16c];
        param_1[0x16d] = param_2[0x16d];
        uVar4 = param_2[0x16e];
        param_1[0x16f] = param_2[0x16f];
        param_1[0x16e] = uVar4;
        uVar4 = param_2[0x170];
        param_1[0x171] = param_2[0x171];
        param_1[0x170] = uVar4;
        uVar4 = param_2[0x172];
        param_1[0x173] = param_2[0x173];
        param_1[0x172] = uVar4;
        uVar4 = param_1[0x174];
        param_1[0x174] = param_2[0x174];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x175] = param_2[0x175];
        param_1[0x176] = param_2[0x176];
        param_1[0x177] = param_2[0x177];
        uVar4 = param_1[0x178];
        param_1[0x178] = param_2[0x178];
        _swift_bridgeObjectRelease(uVar4);
        *(undefined1 *)(param_1 + 0x179) = *(undefined1 *)(param_2 + 0x179);
        if (param_1[0x17b] == 0) {
LAB_10423ae14:
          uVar4 = param_2[0x186];
          uVar8 = param_2[0x189];
          uVar5 = param_2[0x188];
          param_1[0x187] = param_2[0x187];
          param_1[0x186] = uVar4;
          param_1[0x189] = uVar8;
          param_1[0x188] = uVar5;
          param_1[0x18a] = param_2[0x18a];
          uVar4 = param_2[0x17e];
          uVar8 = param_2[0x181];
          uVar5 = param_2[0x180];
          param_1[0x17f] = param_2[0x17f];
          param_1[0x17e] = uVar4;
          param_1[0x181] = uVar8;
          param_1[0x180] = uVar5;
          uVar8 = param_2[0x182];
          uVar5 = param_2[0x185];
          uVar4 = param_2[0x184];
          param_1[0x183] = param_2[0x183];
          param_1[0x182] = uVar8;
          param_1[0x185] = uVar5;
          param_1[0x184] = uVar4;
          uVar8 = param_2[0x17a];
          uVar5 = param_2[0x17d];
          uVar4 = param_2[0x17c];
          param_1[0x17b] = param_2[0x17b];
          param_1[0x17a] = uVar8;
          param_1[0x17d] = uVar5;
          param_1[0x17c] = uVar4;
        }
        else {
          lVar6 = param_2[0x17b];
          if (lVar6 == 0) {
            func_0x0001018657d8(param_1 + 0x17a);
            goto LAB_10423ae14;
          }
          param_1[0x17a] = param_2[0x17a];
          param_1[0x17b] = lVar6;
          _swift_bridgeObjectRelease();
          uVar4 = param_2[0x17c];
          param_1[0x17d] = param_2[0x17d];
          param_1[0x17c] = uVar4;
          uVar4 = param_2[0x17e];
          param_1[0x17f] = param_2[0x17f];
          param_1[0x17e] = uVar4;
          uVar4 = param_2[0x180];
          param_1[0x181] = param_2[0x181];
          param_1[0x180] = uVar4;
          uVar4 = param_2[0x182];
          param_1[0x183] = param_2[0x183];
          param_1[0x182] = uVar4;
          param_1[0x184] = param_2[0x184];
          *(undefined1 *)(param_1 + 0x185) = *(undefined1 *)(param_2 + 0x185);
          uVar4 = param_2[0x186];
          param_1[0x187] = param_2[0x187];
          param_1[0x186] = uVar4;
          param_1[0x188] = param_2[0x188];
          uVar4 = param_1[0x189];
          param_1[0x189] = param_2[0x189];
          _swift_bridgeObjectRelease(uVar4);
          uVar4 = param_1[0x18a];
          param_1[0x18a] = param_2[0x18a];
          _swift_bridgeObjectRelease(uVar4);
        }
        *(undefined1 *)(param_1 + 0x18b) = *(undefined1 *)(param_2 + 0x18b);
        uVar4 = param_2[0x18c];
        param_1[0x18d] = param_2[0x18d];
        param_1[0x18c] = uVar4;
        uVar4 = *(undefined8 *)((long)param_2 + 0xc6c);
        *(undefined8 *)((long)param_1 + 0xc74) = *(undefined8 *)((long)param_2 + 0xc74);
        *(undefined8 *)((long)param_1 + 0xc6c) = uVar4;
        param_1[400] = param_2[400];
        *(undefined1 *)(param_1 + 0x1a1) = *(undefined1 *)(param_2 + 0x1a1);
        uVar4 = param_2[0x19d];
        uVar8 = param_2[0x1a0];
        uVar5 = param_2[0x19f];
        param_1[0x19e] = param_2[0x19e];
        param_1[0x19d] = uVar4;
        param_1[0x1a0] = uVar8;
        param_1[0x19f] = uVar5;
        uVar4 = param_2[0x195];
        uVar8 = param_2[0x198];
        uVar5 = param_2[0x197];
        param_1[0x196] = param_2[0x196];
        param_1[0x195] = uVar4;
        param_1[0x198] = uVar8;
        param_1[0x197] = uVar5;
        uVar8 = param_2[0x199];
        uVar5 = param_2[0x19c];
        uVar4 = param_2[0x19b];
        param_1[0x19a] = param_2[0x19a];
        param_1[0x199] = uVar8;
        param_1[0x19c] = uVar5;
        param_1[0x19b] = uVar4;
        uVar8 = param_2[0x191];
        uVar5 = param_2[0x194];
        uVar4 = param_2[0x193];
        param_1[0x192] = param_2[0x192];
        param_1[0x191] = uVar8;
        param_1[0x194] = uVar5;
        param_1[0x193] = uVar4;
        uVar4 = param_2[0x1aa];
        param_1[0x1ab] = param_2[0x1ab];
        param_1[0x1aa] = uVar4;
        uVar4 = param_2[0x1ac];
        param_1[0x1ad] = param_2[0x1ad];
        param_1[0x1ac] = uVar4;
        uVar4 = param_2[0x1ae];
        param_1[0x1af] = param_2[0x1af];
        param_1[0x1ae] = uVar4;
        uVar4 = *(undefined8 *)((long)param_2 + 0xd79);
        *(undefined8 *)((long)param_1 + 0xd81) = *(undefined8 *)((long)param_2 + 0xd81);
        *(undefined8 *)((long)param_1 + 0xd79) = uVar4;
        uVar4 = param_2[0x1a2];
        param_1[0x1a3] = param_2[0x1a3];
        param_1[0x1a2] = uVar4;
        uVar4 = param_2[0x1a4];
        param_1[0x1a5] = param_2[0x1a5];
        param_1[0x1a4] = uVar4;
        uVar4 = param_2[0x1a6];
        param_1[0x1a7] = param_2[0x1a7];
        param_1[0x1a6] = uVar4;
        uVar4 = param_2[0x1a8];
        param_1[0x1a9] = param_2[0x1a9];
        param_1[0x1a8] = uVar4;
        uVar5 = param_2[0x1b3];
        uVar4 = param_2[0x1b2];
        uVar9 = param_2[0x1b5];
        uVar8 = param_2[0x1b4];
        uVar11 = param_2[0x1b7];
        uVar10 = param_2[0x1b6];
        uVar12 = param_2[0x1b8];
        param_1[0x1b9] = param_2[0x1b9];
        param_1[0x1b8] = uVar12;
        param_1[0x1b7] = uVar11;
        param_1[0x1b6] = uVar10;
        param_1[0x1b5] = uVar9;
        param_1[0x1b4] = uVar8;
        param_1[0x1b3] = uVar5;
        param_1[0x1b2] = uVar4;
        uVar5 = param_2[0x1bb];
        uVar4 = param_2[0x1ba];
        uVar9 = param_2[0x1bd];
        uVar8 = param_2[0x1bc];
        uVar11 = param_2[0x1bf];
        uVar10 = param_2[0x1be];
        uVar12 = *(undefined8 *)((long)param_2 + 0xdfa);
        *(undefined8 *)((long)param_1 + 0xe02) = *(undefined8 *)((long)param_2 + 0xe02);
        *(undefined8 *)((long)param_1 + 0xdfa) = uVar12;
        param_1[0x1bf] = uVar11;
        param_1[0x1be] = uVar10;
        param_1[0x1bd] = uVar9;
        param_1[0x1bc] = uVar8;
        param_1[0x1bb] = uVar5;
        param_1[0x1ba] = uVar4;
        uVar4 = param_1[0x1c2];
        param_1[0x1c2] = param_2[0x1c2];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x1c3] = param_2[0x1c3];
        *(undefined1 *)(param_1 + 0x1c4) = *(undefined1 *)(param_2 + 0x1c4);
        *(undefined1 *)((long)param_1 + 0xe21) = *(undefined1 *)((long)param_2 + 0xe21);
        param_1[0x1c5] = param_2[0x1c5];
        param_1[0x1c6] = param_2[0x1c6];
        *(undefined1 *)(param_1 + 0x1c7) = *(undefined1 *)(param_2 + 0x1c7);
        uVar4 = param_1[0x1c8];
        param_1[0x1c8] = param_2[0x1c8];
        _swift_bridgeObjectRelease(uVar4);
        *(undefined1 *)(param_1 + 0x1c9) = *(undefined1 *)(param_2 + 0x1c9);
        *(undefined1 *)((long)param_1 + 0xe49) = *(undefined1 *)((long)param_2 + 0xe49);
        if (param_1[0x1cd] == 1) {
LAB_10423afac:
          uVar4 = param_2[0x1ca];
          uVar8 = param_2[0x1cd];
          uVar5 = param_2[0x1cc];
          param_1[0x1cb] = param_2[0x1cb];
          param_1[0x1ca] = uVar4;
          param_1[0x1cd] = uVar8;
          param_1[0x1cc] = uVar5;
          uVar4 = param_2[0x1ce];
          param_1[0x1cf] = param_2[0x1cf];
          param_1[0x1ce] = uVar4;
        }
        else {
          lVar6 = param_2[0x1cd];
          if (lVar6 == 1) {
            func_0x00010186580c(param_1 + 0x1ca);
            goto LAB_10423afac;
          }
          *(undefined1 *)(param_1 + 0x1ca) = *(undefined1 *)(param_2 + 0x1ca);
          param_1[0x1cb] = param_2[0x1cb];
          param_1[0x1cc] = param_2[0x1cc];
          param_1[0x1cd] = lVar6;
          _swift_bridgeObjectRelease();
          *(undefined1 *)(param_1 + 0x1ce) = *(undefined1 *)(param_2 + 0x1ce);
          uVar4 = param_1[0x1cf];
          param_1[0x1cf] = param_2[0x1cf];
          _swift_bridgeObjectRelease(uVar4);
        }
        *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
        uVar4 = param_1[0x1d1];
        param_1[0x1d1] = param_2[0x1d1];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x1d2] = param_2[0x1d2];
        uVar4 = param_1[0x1d3];
        param_1[0x1d3] = param_2[0x1d3];
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = param_1[0x1d4];
        param_1[0x1d4] = param_2[0x1d4];
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = param_1[0x1d5];
        param_1[0x1d5] = param_2[0x1d5];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x1d6] = param_2[0x1d6];
        *(undefined1 *)(param_1 + 0x1d7) = *(undefined1 *)(param_2 + 0x1d7);
        param_1[0x1d8] = param_2[0x1d8];
        *(undefined1 *)(param_1 + 0x1d9) = *(undefined1 *)(param_2 + 0x1d9);
        param_1[0x1da] = param_2[0x1da];
        *(undefined1 *)(param_1 + 0x1db) = *(undefined1 *)(param_2 + 0x1db);
        uVar4 = param_1[0x1dc];
        param_1[0x1dc] = param_2[0x1dc];
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = param_1[0x1dd];
        param_1[0x1dd] = param_2[0x1dd];
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = param_2[0x1e2];
        param_1[0x1e3] = param_2[0x1e3];
        param_1[0x1e2] = uVar4;
        uVar4 = param_2[0x1e4];
        param_1[0x1e5] = param_2[0x1e5];
        param_1[0x1e4] = uVar4;
        uVar4 = param_2[0x1e6];
        param_1[0x1e7] = param_2[0x1e7];
        param_1[0x1e6] = uVar4;
        uVar4 = param_2[0x1e8];
        param_1[0x1e9] = param_2[0x1e9];
        param_1[0x1e8] = uVar4;
        uVar4 = param_2[0x1de];
        param_1[0x1df] = param_2[0x1df];
        param_1[0x1de] = uVar4;
        uVar4 = param_2[0x1e0];
        param_1[0x1e1] = param_2[0x1e1];
        param_1[0x1e0] = uVar4;
        param_1[0x1ea] = param_2[0x1ea];
        *(undefined1 *)(param_1 + 0x1ec) = *(undefined1 *)(param_2 + 0x1ec);
        param_1[0x1eb] = param_2[0x1eb];
        param_1[0x1ed] = param_2[0x1ed];
        uVar4 = param_2[0x1ee];
        param_1[0x1ef] = param_2[0x1ef];
        param_1[0x1ee] = uVar4;
        uVar4 = param_2[0x1f0];
        param_1[0x1f1] = param_2[0x1f1];
        param_1[0x1f0] = uVar4;
        param_1[0x1f2] = param_2[0x1f2];
        uVar4 = param_1[499];
        param_1[499] = param_2[499];
        _swift_bridgeObjectRelease(uVar4);
        if (param_1[0x200] == 1) {
LAB_10423b138:
          uVar4 = param_2[0x1fc];
          uVar8 = param_2[0x1ff];
          uVar5 = param_2[0x1fe];
          param_1[0x1fd] = param_2[0x1fd];
          param_1[0x1fc] = uVar4;
          param_1[0x1ff] = uVar8;
          param_1[0x1fe] = uVar5;
          uVar4 = param_2[0x200];
          param_1[0x201] = param_2[0x201];
          param_1[0x200] = uVar4;
          *(undefined2 *)(param_1 + 0x202) = *(undefined2 *)(param_2 + 0x202);
          uVar4 = param_2[500];
          uVar8 = param_2[0x1f7];
          uVar5 = param_2[0x1f6];
          param_1[0x1f5] = param_2[0x1f5];
          param_1[500] = uVar4;
          param_1[0x1f7] = uVar8;
          param_1[0x1f6] = uVar5;
          uVar4 = param_2[0x1f8];
          uVar8 = param_2[0x1fb];
          uVar5 = param_2[0x1fa];
          param_1[0x1f9] = param_2[0x1f9];
          param_1[0x1f8] = uVar4;
          param_1[0x1fb] = uVar8;
          param_1[0x1fa] = uVar5;
        }
        else {
          lVar6 = param_2[0x200];
          if (lVar6 == 1) {
            func_0x000101865840(param_1 + 500);
            goto LAB_10423b138;
          }
          *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_2 + 500);
          param_1[0x1f5] = param_2[0x1f5];
          *(undefined1 *)(param_1 + 0x1f6) = *(undefined1 *)(param_2 + 0x1f6);
          param_1[0x1f7] = param_2[0x1f7];
          *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_2 + 0x1f8);
          param_1[0x1f9] = param_2[0x1f9];
          *(undefined1 *)(param_1 + 0x1fa) = *(undefined1 *)(param_2 + 0x1fa);
          *(undefined1 *)(param_1 + 0x1fc) = *(undefined1 *)(param_2 + 0x1fc);
          param_1[0x1fb] = param_2[0x1fb];
          param_1[0x1fd] = param_2[0x1fd];
          *(undefined1 *)(param_1 + 0x1fe) = *(undefined1 *)(param_2 + 0x1fe);
          param_1[0x1ff] = param_2[0x1ff];
          param_1[0x200] = lVar6;
          _swift_bridgeObjectRelease();
          param_1[0x201] = param_2[0x201];
          *(undefined1 *)(param_1 + 0x202) = *(undefined1 *)(param_2 + 0x202);
          *(undefined1 *)((long)param_1 + 0x1011) = *(undefined1 *)((long)param_2 + 0x1011);
        }
        *(undefined1 *)((long)param_1 + 0x1012) = *(undefined1 *)((long)param_2 + 0x1012);
        uVar4 = param_1[0x203];
        param_1[0x203] = param_2[0x203];
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = param_2[0x206];
        param_1[0x207] = param_2[0x207];
        param_1[0x206] = uVar4;
        uVar4 = param_2[0x208];
        param_1[0x209] = param_2[0x209];
        param_1[0x208] = uVar4;
        uVar4 = param_2[0x20a];
        param_1[0x20b] = param_2[0x20b];
        param_1[0x20a] = uVar4;
        *(undefined2 *)(param_1 + 0x20c) = *(undefined2 *)(param_2 + 0x20c);
        uVar4 = param_2[0x204];
        param_1[0x205] = param_2[0x205];
        param_1[0x204] = uVar4;
        if (param_1[0x20e] == 0) {
LAB_10423b288:
          uVar4 = param_2[0x20d];
          uVar8 = param_2[0x210];
          uVar5 = param_2[0x20f];
          param_1[0x20e] = param_2[0x20e];
          param_1[0x20d] = uVar4;
          param_1[0x210] = uVar8;
          param_1[0x20f] = uVar5;
          param_1[0x211] = param_2[0x211];
        }
        else {
          lVar6 = param_2[0x20e];
          if (lVar6 == 0) {
            func_0x000101865874(param_1 + 0x20d);
            goto LAB_10423b288;
          }
          param_1[0x20d] = param_2[0x20d];
          param_1[0x20e] = lVar6;
          _swift_bridgeObjectRelease();
          param_1[0x20f] = param_2[0x20f];
          uVar4 = param_1[0x210];
          param_1[0x210] = param_2[0x210];
          _swift_bridgeObjectRelease(uVar4);
          param_1[0x211] = param_2[0x211];
        }
        uVar4 = param_2[0x212];
        param_1[0x213] = param_2[0x213];
        param_1[0x212] = uVar4;
        *(undefined1 *)(param_1 + 0x214) = *(undefined1 *)(param_2 + 0x214);
        uVar4 = param_1[0x215];
        param_1[0x215] = param_2[0x215];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x216] = param_2[0x216];
        *(undefined1 *)(param_1 + 0x217) = *(undefined1 *)(param_2 + 0x217);
        uVar4 = param_1[0x218];
        param_1[0x218] = param_2[0x218];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x219] = param_2[0x219];
        *(undefined1 *)(param_1 + 0x21a) = *(undefined1 *)(param_2 + 0x21a);
        uVar4 = param_1[0x21b];
        param_1[0x21b] = param_2[0x21b];
        _objc_release(uVar4);
        uVar4 = param_1[0x21c];
        param_1[0x21c] = param_2[0x21c];
        _objc_release(uVar4);
        uVar4 = param_1[0x21d];
        param_1[0x21d] = param_2[0x21d];
        _objc_release(uVar4);
        uVar4 = param_1[0x21e];
        param_1[0x21e] = param_2[0x21e];
        _swift_bridgeObjectRelease(uVar4);
      }
      if (param_1[0x223] == 1) {
LAB_10423b378:
        uVar4 = param_2[0x227];
        uVar8 = param_2[0x22a];
        uVar5 = param_2[0x229];
        param_1[0x228] = param_2[0x228];
        param_1[0x227] = uVar4;
        param_1[0x22a] = uVar8;
        param_1[0x229] = uVar5;
        uVar4 = *(undefined8 *)((long)param_2 + 0x1151);
        *(undefined8 *)((long)param_1 + 0x1159) = *(undefined8 *)((long)param_2 + 0x1159);
        *(undefined8 *)((long)param_1 + 0x1151) = uVar4;
        uVar4 = param_2[0x21f];
        uVar8 = param_2[0x222];
        uVar5 = param_2[0x221];
        param_1[0x220] = param_2[0x220];
        param_1[0x21f] = uVar4;
        param_1[0x222] = uVar8;
        param_1[0x221] = uVar5;
        uVar8 = param_2[0x223];
        uVar5 = param_2[0x226];
        uVar4 = param_2[0x225];
        param_1[0x224] = param_2[0x224];
        param_1[0x223] = uVar8;
        param_1[0x226] = uVar5;
        param_1[0x225] = uVar4;
      }
      else {
        lVar6 = param_2[0x223];
        if (lVar6 == 1) {
          func_0x00010178e348(param_1 + 0x21f);
          goto LAB_10423b378;
        }
        param_1[0x21f] = param_2[0x21f];
        param_1[0x220] = param_2[0x220];
        *(undefined1 *)(param_1 + 0x221) = *(undefined1 *)(param_2 + 0x221);
        *(undefined1 *)((long)param_1 + 0x1109) = *(undefined1 *)((long)param_2 + 0x1109);
        param_1[0x222] = param_2[0x222];
        param_1[0x223] = lVar6;
        _swift_bridgeObjectRelease();
        *(undefined1 *)(param_1 + 0x224) = *(undefined1 *)(param_2 + 0x224);
        param_1[0x225] = param_2[0x225];
        *(undefined1 *)(param_1 + 0x226) = *(undefined1 *)(param_2 + 0x226);
        param_1[0x227] = param_2[0x227];
        *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
        param_1[0x229] = param_2[0x229];
        *(undefined1 *)(param_1 + 0x22a) = *(undefined1 *)(param_2 + 0x22a);
        *(undefined1 *)(param_1 + 0x22c) = *(undefined1 *)(param_2 + 0x22c);
        param_1[0x22b] = param_2[0x22b];
      }
      if (param_1[0x233] == 1) {
LAB_10423b458:
        _memcpy(param_1 + 0x22d,param_2 + 0x22d,0x301);
      }
      else {
        lVar6 = param_2[0x233];
        if (lVar6 == 1) {
          func_0x00010178e244(param_1 + 0x22d);
          goto LAB_10423b458;
        }
        *(undefined1 *)(param_1 + 0x22d) = *(undefined1 *)(param_2 + 0x22d);
        *(undefined1 *)((long)param_1 + 0x1169) = *(undefined1 *)((long)param_2 + 0x1169);
        param_1[0x22e] = param_2[0x22e];
        *(undefined1 *)(param_1 + 0x22f) = *(undefined1 *)(param_2 + 0x22f);
        param_1[0x230] = param_2[0x230];
        *(undefined1 *)(param_1 + 0x231) = *(undefined1 *)(param_2 + 0x231);
        param_1[0x232] = param_2[0x232];
        param_1[0x233] = lVar6;
        _swift_bridgeObjectRelease();
        param_1[0x234] = param_2[0x234];
        *(undefined1 *)(param_1 + 0x235) = *(undefined1 *)(param_2 + 0x235);
        *(undefined1 *)((long)param_1 + 0x11a9) = *(undefined1 *)((long)param_2 + 0x11a9);
        param_1[0x236] = param_2[0x236];
        uVar4 = param_1[0x237];
        param_1[0x237] = param_2[0x237];
        _swift_bridgeObjectRelease(uVar4);
        *(undefined1 *)(param_1 + 0x238) = *(undefined1 *)(param_2 + 0x238);
        *(undefined1 *)((long)param_1 + 0x11c1) = *(undefined1 *)((long)param_2 + 0x11c1);
        param_1[0x239] = param_2[0x239];
        *(undefined1 *)(param_1 + 0x23a) = *(undefined1 *)(param_2 + 0x23a);
        param_1[0x23b] = param_2[0x23b];
        *(undefined1 *)(param_1 + 0x23c) = *(undefined1 *)(param_2 + 0x23c);
        param_1[0x23d] = param_2[0x23d];
        *(undefined1 *)(param_1 + 0x23e) = *(undefined1 *)(param_2 + 0x23e);
        *(undefined1 *)((long)param_1 + 0x11f1) = *(undefined1 *)((long)param_2 + 0x11f1);
        puVar1 = param_1 + 0x23f;
        if (param_1[0x24a] == 1) {
LAB_10423b5a0:
          _memcpy(puVar1,param_2 + 0x23f,0x101);
        }
        else {
          lVar6 = param_2[0x24a];
          if (lVar6 == 1) {
            func_0x0001017e2180(puVar1);
            goto LAB_10423b5a0;
          }
          *puVar1 = param_2[0x23f];
          *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x240);
          param_1[0x241] = param_2[0x241];
          *(undefined1 *)(param_1 + 0x242) = *(undefined1 *)(param_2 + 0x242);
          param_1[0x243] = param_2[0x243];
          *(undefined1 *)(param_1 + 0x244) = *(undefined1 *)(param_2 + 0x244);
          param_1[0x245] = param_2[0x245];
          *(undefined1 *)(param_1 + 0x246) = *(undefined1 *)(param_2 + 0x246);
          uVar4 = param_2[0x247];
          *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x248);
          param_1[0x247] = uVar4;
          *(undefined1 *)((long)param_1 + 0x1241) = *(undefined1 *)((long)param_2 + 0x1241);
          param_1[0x249] = param_2[0x249];
          param_1[0x24a] = lVar6;
          _swift_bridgeObjectRelease();
          param_1[0x24b] = param_2[0x24b];
          uVar4 = param_1[0x24c];
          param_1[0x24c] = param_2[0x24c];
          _swift_bridgeObjectRelease(uVar4);
          param_1[0x24d] = param_2[0x24d];
          *(undefined1 *)(param_1 + 0x24e) = *(undefined1 *)(param_2 + 0x24e);
          param_1[0x24f] = param_2[0x24f];
          *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x250);
          param_1[0x251] = param_2[0x251];
          *(undefined1 *)(param_1 + 0x252) = *(undefined1 *)(param_2 + 0x252);
          *(undefined1 *)(param_1 + 0x254) = *(undefined1 *)(param_2 + 0x254);
          param_1[0x253] = param_2[0x253];
          uVar4 = param_2[0x255];
          *(undefined1 *)(param_1 + 0x256) = *(undefined1 *)(param_2 + 0x256);
          param_1[0x255] = uVar4;
          param_1[599] = param_2[599];
          uVar4 = param_1[600];
          param_1[600] = param_2[600];
          _swift_bridgeObjectRelease(uVar4);
          param_1[0x259] = param_2[0x259];
          *(undefined1 *)(param_1 + 0x25a) = *(undefined1 *)(param_2 + 0x25a);
          param_1[0x25b] = param_2[0x25b];
          *(undefined1 *)(param_1 + 0x25c) = *(undefined1 *)(param_2 + 0x25c);
          param_1[0x25d] = param_2[0x25d];
          uVar4 = param_1[0x25e];
          param_1[0x25e] = param_2[0x25e];
          _swift_bridgeObjectRelease(uVar4);
          *(undefined1 *)(param_1 + 0x25f) = *(undefined1 *)(param_2 + 0x25f);
        }
        *(undefined1 *)((long)param_1 + 0x12f9) = *(undefined1 *)((long)param_2 + 0x12f9);
        param_1[0x260] = param_2[0x260];
        param_1[0x261] = param_2[0x261];
        *(undefined1 *)(param_1 + 0x262) = *(undefined1 *)(param_2 + 0x262);
        if (param_1[0x263] == 1) {
LAB_10423b7b0:
          lVar6 = param_2[0x263];
          param_1[0x264] = param_2[0x264];
          param_1[0x263] = lVar6;
          param_1[0x265] = param_2[0x265];
        }
        else {
          lVar6 = param_2[0x263];
          if (lVar6 == 1) {
            func_0x0001017e21b4(param_1 + 0x263);
            goto LAB_10423b7b0;
          }
          param_1[0x263] = lVar6;
          _objc_release();
          uVar4 = param_1[0x264];
          param_1[0x264] = param_2[0x264];
          _objc_release(uVar4);
          uVar4 = param_1[0x265];
          param_1[0x265] = param_2[0x265];
          _objc_release(uVar4);
        }
        *(undefined1 *)(param_1 + 0x266) = *(undefined1 *)(param_2 + 0x266);
        param_1[0x267] = param_2[0x267];
        *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
        param_1[0x269] = param_2[0x269];
        *(undefined1 *)(param_1 + 0x26a) = *(undefined1 *)(param_2 + 0x26a);
        if (param_1[0x26c] == 1) {
LAB_10423b850:
          uVar4 = param_2[0x26b];
          uVar8 = param_2[0x26e];
          uVar5 = param_2[0x26d];
          param_1[0x26c] = param_2[0x26c];
          param_1[0x26b] = uVar4;
          param_1[0x26e] = uVar8;
          param_1[0x26d] = uVar5;
          uVar4 = param_2[0x26f];
          param_1[0x270] = param_2[0x270];
          param_1[0x26f] = uVar4;
        }
        else {
          lVar6 = param_2[0x26c];
          if (lVar6 == 1) {
            func_0x0001017e21e8(param_1 + 0x26b);
            goto LAB_10423b850;
          }
          *(undefined2 *)(param_1 + 0x26b) = *(undefined2 *)(param_2 + 0x26b);
          param_1[0x26c] = lVar6;
          _swift_bridgeObjectRelease();
          uVar4 = param_1[0x26d];
          param_1[0x26d] = param_2[0x26d];
          _swift_bridgeObjectRelease(uVar4);
          uVar4 = param_1[0x26e];
          param_1[0x26e] = param_2[0x26e];
          _swift_bridgeObjectRelease(uVar4);
          *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_2 + 0x26f);
          *(undefined2 *)((long)param_1 + 0x1379) = *(undefined2 *)((long)param_2 + 0x1379);
          *(undefined1 *)((long)param_1 + 0x137b) = *(undefined1 *)((long)param_2 + 0x137b);
          uVar4 = param_1[0x270];
          param_1[0x270] = param_2[0x270];
          _swift_bridgeObjectRelease(uVar4);
        }
        param_1[0x271] = param_2[0x271];
        *(undefined1 *)(param_1 + 0x272) = *(undefined1 *)(param_2 + 0x272);
        param_1[0x273] = param_2[0x273];
        *(undefined1 *)(param_1 + 0x274) = *(undefined1 *)(param_2 + 0x274);
        *(undefined1 *)((long)param_1 + 0x13a1) = *(undefined1 *)((long)param_2 + 0x13a1);
        if (param_1[0x275] == 0) {
LAB_10423b954:
          lVar6 = param_2[0x275];
          param_1[0x276] = param_2[0x276];
          param_1[0x275] = lVar6;
          param_1[0x277] = param_2[0x277];
        }
        else {
          lVar6 = param_2[0x275];
          if (lVar6 == 0) {
            func_0x0001017e221c(param_1 + 0x275);
            goto LAB_10423b954;
          }
          param_1[0x275] = lVar6;
          _swift_bridgeObjectRelease();
          uVar4 = param_1[0x276];
          param_1[0x276] = param_2[0x276];
          _swift_bridgeObjectRelease(uVar4);
          uVar4 = param_1[0x277];
          param_1[0x277] = param_2[0x277];
          _swift_bridgeObjectRelease(uVar4);
        }
        uVar4 = param_1[0x278];
        param_1[0x278] = param_2[0x278];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x279] = param_2[0x279];
        uVar4 = param_1[0x27a];
        param_1[0x27a] = param_2[0x27a];
        _swift_bridgeObjectRelease(uVar4);
        *(undefined1 *)(param_1 + 0x27b) = *(undefined1 *)(param_2 + 0x27b);
        *(undefined1 *)((long)param_1 + 0x13d9) = *(undefined1 *)((long)param_2 + 0x13d9);
        *(undefined1 *)((long)param_1 + 0x13da) = *(undefined1 *)((long)param_2 + 0x13da);
        param_1[0x27c] = param_2[0x27c];
        *(undefined1 *)(param_1 + 0x27d) = *(undefined1 *)(param_2 + 0x27d);
        uVar4 = param_2[0x27e];
        param_1[0x27f] = param_2[0x27f];
        param_1[0x27e] = uVar4;
        param_1[0x280] = param_2[0x280];
        *(undefined1 *)(param_1 + 0x281) = *(undefined1 *)(param_2 + 0x281);
        *(undefined1 *)((long)param_1 + 0x1409) = *(undefined1 *)((long)param_2 + 0x1409);
        param_1[0x282] = param_2[0x282];
        *(undefined1 *)(param_1 + 0x283) = *(undefined1 *)(param_2 + 0x283);
        *(undefined1 *)((long)param_1 + 0x1419) = *(undefined1 *)((long)param_2 + 0x1419);
        *(undefined1 *)((long)param_1 + 0x141a) = *(undefined1 *)((long)param_2 + 0x141a);
        *(undefined1 *)((long)param_1 + 0x141b) = *(undefined1 *)((long)param_2 + 0x141b);
        param_1[0x284] = param_2[0x284];
        *(undefined1 *)(param_1 + 0x285) = *(undefined1 *)(param_2 + 0x285);
        param_1[0x286] = param_2[0x286];
        *(undefined1 *)(param_1 + 0x287) = *(undefined1 *)(param_2 + 0x287);
        uVar4 = param_2[0x288];
        *(undefined1 *)(param_1 + 0x289) = *(undefined1 *)(param_2 + 0x289);
        param_1[0x288] = uVar4;
        param_1[0x28a] = param_2[0x28a];
        uVar4 = param_1[0x28b];
        param_1[0x28b] = param_2[0x28b];
        _swift_bridgeObjectRelease(uVar4);
        param_1[0x28c] = param_2[0x28c];
        *(undefined1 *)(param_1 + 0x28d) = *(undefined1 *)(param_2 + 0x28d);
      }
      if (param_1[0x28e] == 1) {
LAB_10423baa8:
        uVar4 = param_2[0x28e];
        param_1[0x28f] = param_2[0x28f];
        param_1[0x28e] = uVar4;
      }
      else {
        if (param_2[0x28e] == 1) {
          func_0x0001018658a8(param_1 + 0x28e);
          goto LAB_10423baa8;
        }
        param_1[0x28e] = param_2[0x28e];
        _swift_bridgeObjectRelease();
        param_1[0x28f] = param_2[0x28f];
      }
      lVar6 = param_2[0x290];
      if (param_1[0x290] == 1) {
LAB_10423baec:
        param_1[0x290] = lVar6;
      }
      else {
        if (lVar6 == 1) {
          FUN_1042278f8(param_1 + 0x290);
          lVar6 = param_2[0x290];
          goto LAB_10423baec;
        }
        param_1[0x290] = lVar6;
        _swift_bridgeObjectRelease();
      }
      uVar4 = param_1[0x291];
      param_1[0x291] = param_2[0x291];
      _objc_release(uVar4);
      *(undefined2 *)(param_1 + 0x292) = *(undefined2 *)(param_2 + 0x292);
      plVar2 = param_1 + 0x293;
      plVar3 = param_2 + 0x293;
      if (param_1[0x293] == 1) {
LAB_10423bb40:
        uVar4 = param_2[0x297];
        uVar8 = param_2[0x29a];
        uVar5 = param_2[0x299];
        param_1[0x298] = param_2[0x298];
        param_1[0x297] = uVar4;
        param_1[0x29a] = uVar8;
        param_1[0x299] = uVar5;
        uVar4 = param_2[0x29b];
        uVar8 = param_2[0x29e];
        uVar5 = param_2[0x29d];
        param_1[0x29c] = param_2[0x29c];
        param_1[0x29b] = uVar4;
        param_1[0x29e] = uVar8;
        param_1[0x29d] = uVar5;
        lVar6 = *plVar3;
        uVar5 = param_2[0x296];
        uVar4 = param_2[0x295];
        param_1[0x294] = param_2[0x294];
        *plVar2 = lVar6;
        param_1[0x296] = uVar5;
        param_1[0x295] = uVar4;
      }
      else {
        lVar6 = *plVar3;
        if (lVar6 == 1) {
          func_0x00010178e198(plVar2);
          goto LAB_10423bb40;
        }
        if (param_1[0x293] == 0) {
LAB_10423be8c:
          uVar4 = param_2[0x297];
          uVar8 = param_2[0x29a];
          uVar5 = param_2[0x299];
          param_1[0x298] = param_2[0x298];
          param_1[0x297] = uVar4;
          param_1[0x29a] = uVar8;
          param_1[0x299] = uVar5;
          uVar4 = param_2[0x29b];
          param_1[0x29c] = param_2[0x29c];
          param_1[0x29b] = uVar4;
          lVar6 = *plVar3;
          uVar5 = param_2[0x296];
          uVar4 = param_2[0x295];
          param_1[0x294] = param_2[0x294];
          *plVar2 = lVar6;
          param_1[0x296] = uVar5;
          param_1[0x295] = uVar4;
        }
        else {
          if (lVar6 == 0) {
            func_0x0001017b6434(plVar2);
            goto LAB_10423be8c;
          }
          param_1[0x293] = lVar6;
          _swift_bridgeObjectRelease();
          uVar4 = param_1[0x294];
          param_1[0x294] = param_2[0x294];
          _swift_bridgeObjectRelease(uVar4);
          param_1[0x295] = param_2[0x295];
          *(undefined1 *)(param_1 + 0x296) = *(undefined1 *)(param_2 + 0x296);
          param_1[0x297] = param_2[0x297];
          param_1[0x298] = param_2[0x298];
          if ((ulong)param_1[0x29a] >> 0x3c < 0xf) {
            uVar7 = param_2[0x29a];
            if (0xe < uVar7 >> 0x3c) {
              func_0x0001006e5814(param_1 + 0x299);
              goto LAB_10423bc28;
            }
            uVar4 = param_1[0x299];
            param_1[0x299] = param_2[0x299];
            param_1[0x29a] = uVar7;
            func_0x00010006c090(uVar4);
          }
          else {
LAB_10423bc28:
            uVar4 = param_2[0x299];
            param_1[0x29a] = param_2[0x29a];
            param_1[0x299] = uVar4;
          }
          param_1[0x29b] = param_2[0x29b];
          param_1[0x29c] = param_2[0x29c];
        }
        if ((ulong)param_1[0x29e] >> 0x3c < 0xf) {
          uVar7 = param_2[0x29e];
          if (0xe < uVar7 >> 0x3c) {
            func_0x0001006e5814(param_1 + 0x29d);
            goto LAB_10423bef8;
          }
          uVar4 = param_1[0x29d];
          param_1[0x29d] = param_2[0x29d];
          param_1[0x29e] = uVar7;
          func_0x00010006c090(uVar4);
        }
        else {
LAB_10423bef8:
          uVar4 = param_2[0x29d];
          param_1[0x29e] = param_2[0x29e];
          param_1[0x29d] = uVar4;
        }
      }
      if (param_1[0x2a3] == 1) {
LAB_10423bb80:
        uVar4 = param_2[0x2af];
        uVar8 = param_2[0x2b2];
        uVar5 = param_2[0x2b1];
        param_1[0x2b0] = param_2[0x2b0];
        param_1[0x2af] = uVar4;
        param_1[0x2b2] = uVar8;
        param_1[0x2b1] = uVar5;
        uVar4 = param_2[0x2b3];
        param_1[0x2b4] = param_2[0x2b4];
        param_1[0x2b3] = uVar4;
        uVar4 = *(undefined8 *)((long)param_2 + 0x15a1);
        *(undefined8 *)((long)param_1 + 0x15a9) = *(undefined8 *)((long)param_2 + 0x15a9);
        *(undefined8 *)((long)param_1 + 0x15a1) = uVar4;
        uVar4 = param_2[0x2a7];
        uVar8 = param_2[0x2aa];
        uVar5 = param_2[0x2a9];
        param_1[0x2a8] = param_2[0x2a8];
        param_1[0x2a7] = uVar4;
        param_1[0x2aa] = uVar8;
        param_1[0x2a9] = uVar5;
        uVar4 = param_2[0x2ab];
        uVar8 = param_2[0x2ae];
        uVar5 = param_2[0x2ad];
        param_1[0x2ac] = param_2[0x2ac];
        param_1[0x2ab] = uVar4;
        param_1[0x2ae] = uVar8;
        param_1[0x2ad] = uVar5;
        uVar4 = param_2[0x29f];
        uVar8 = param_2[0x2a2];
        uVar5 = param_2[0x2a1];
        param_1[0x2a0] = param_2[0x2a0];
        param_1[0x29f] = uVar4;
        param_1[0x2a2] = uVar8;
        param_1[0x2a1] = uVar5;
        uVar4 = param_2[0x2a3];
        uVar8 = param_2[0x2a6];
        uVar5 = param_2[0x2a5];
        param_1[0x2a4] = param_2[0x2a4];
        param_1[0x2a3] = uVar4;
        param_1[0x2a6] = uVar8;
        param_1[0x2a5] = uVar5;
      }
      else {
        lVar6 = param_2[0x2a3];
        if (lVar6 == 1) {
          func_0x00010178e2d8(param_1 + 0x29f);
          goto LAB_10423bb80;
        }
        *(undefined1 *)(param_1 + 0x29f) = *(undefined1 *)(param_2 + 0x29f);
        *(undefined1 *)((long)param_1 + 0x14f9) = *(undefined1 *)((long)param_2 + 0x14f9);
        param_1[0x2a0] = param_2[0x2a0];
        *(undefined1 *)(param_1 + 0x2a1) = *(undefined1 *)(param_2 + 0x2a1);
        param_1[0x2a2] = param_2[0x2a2];
        param_1[0x2a3] = lVar6;
        _swift_bridgeObjectRelease();
        puVar1 = param_1 + 0x2a4;
        if (param_1[0x2ac] == 1) {
LAB_10423bc90:
          uVar4 = param_2[0x2ac];
          uVar8 = param_2[0x2af];
          uVar5 = param_2[0x2ae];
          param_1[0x2ad] = param_2[0x2ad];
          param_1[0x2ac] = uVar4;
          param_1[0x2af] = uVar8;
          param_1[0x2ae] = uVar5;
          *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(param_2 + 0x2b0);
          uVar4 = param_2[0x2a4];
          uVar8 = param_2[0x2a7];
          uVar5 = param_2[0x2a6];
          param_1[0x2a5] = param_2[0x2a5];
          *puVar1 = uVar4;
          param_1[0x2a7] = uVar8;
          param_1[0x2a6] = uVar5;
          uVar8 = param_2[0x2a8];
          uVar5 = param_2[0x2ab];
          uVar4 = param_2[0x2aa];
          param_1[0x2a9] = param_2[0x2a9];
          param_1[0x2a8] = uVar8;
          param_1[0x2ab] = uVar5;
          param_1[0x2aa] = uVar4;
        }
        else {
          lVar6 = param_2[0x2ac];
          if (lVar6 == 1) {
            func_0x00010180cee4(puVar1);
            goto LAB_10423bc90;
          }
          *puVar1 = param_2[0x2a4];
          *(undefined1 *)(param_1 + 0x2a5) = *(undefined1 *)(param_2 + 0x2a5);
          param_1[0x2a6] = param_2[0x2a6];
          *(undefined1 *)(param_1 + 0x2a7) = *(undefined1 *)(param_2 + 0x2a7);
          param_1[0x2a8] = param_2[0x2a8];
          *(undefined1 *)(param_1 + 0x2a9) = *(undefined1 *)(param_2 + 0x2a9);
          param_1[0x2aa] = param_2[0x2aa];
          *(undefined1 *)(param_1 + 0x2ab) = *(undefined1 *)(param_2 + 0x2ab);
          param_1[0x2ac] = lVar6;
          _objc_release();
          param_1[0x2ad] = param_2[0x2ad];
          *(undefined1 *)(param_1 + 0x2ae) = *(undefined1 *)(param_2 + 0x2ae);
          param_1[0x2af] = param_2[0x2af];
          *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(param_2 + 0x2b0);
        }
        param_1[0x2b1] = param_2[0x2b1];
        *(undefined1 *)(param_1 + 0x2b2) = *(undefined1 *)(param_2 + 0x2b2);
        param_1[0x2b3] = param_2[0x2b3];
        *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
        param_1[0x2b5] = param_2[0x2b5];
        *(undefined1 *)(param_1 + 0x2b6) = *(undefined1 *)(param_2 + 0x2b6);
      }
      if (param_1[0x2b7] == 1) {
LAB_10423bdd8:
        lVar6 = param_2[0x2b7];
        param_1[0x2b8] = param_2[0x2b8];
        param_1[0x2b7] = lVar6;
        *(undefined1 *)(param_1 + 0x2b9) = *(undefined1 *)(param_2 + 0x2b9);
      }
      else {
        lVar6 = param_2[0x2b7];
        if (lVar6 == 1) {
          func_0x00010422792c(param_1 + 0x2b7);
          goto LAB_10423bdd8;
        }
        param_1[0x2b7] = lVar6;
        _swift_bridgeObjectRelease();
        param_1[0x2b8] = param_2[0x2b8];
        *(undefined1 *)(param_1 + 0x2b9) = *(undefined1 *)(param_2 + 0x2b9);
      }
      if (param_1[700] == 1) {
LAB_10423be3c:
        uVar4 = param_2[0x2ba];
        param_1[699] = param_2[699];
        param_1[0x2ba] = uVar4;
        param_1[700] = param_2[700];
      }
      else {
        lVar6 = param_2[700];
        if (lVar6 == 1) {
          func_0x000104227960(param_1 + 0x2ba);
          goto LAB_10423be3c;
        }
        uVar4 = param_2[0x2ba];
        param_1[699] = param_2[699];
        param_1[0x2ba] = uVar4;
        param_1[700] = lVar6;
        _swift_bridgeObjectRelease();
      }
      uVar4 = param_1[0x2bd];
      param_1[0x2bd] = param_2[0x2bd];
      _objc_release(uVar4);
      param_1[0x2be] = param_2[0x2be];
      *(undefined2 *)(param_1 + 0x2bf) = *(undefined2 *)(param_2 + 0x2bf);
    }
    param_1[0x2c0] = param_2[0x2c0];
    *(undefined2 *)(param_1 + 0x2c1) = *(undefined2 *)(param_2 + 0x2c1);
    param_1[0x2c2] = param_2[0x2c2];
    *(undefined1 *)(param_1 + 0x2c3) = *(undefined1 *)(param_2 + 0x2c3);
    *(undefined1 *)((long)param_1 + 0x1619) = *(undefined1 *)((long)param_2 + 0x1619);
    *(undefined1 *)((long)param_1 + 0x161a) = *(undefined1 *)((long)param_2 + 0x161a);
    param_1[0x2c4] = param_2[0x2c4];
    if (param_1[0x2c6] == 0) {
LAB_10423ac24:
      uVar4 = param_2[0x2c5];
      uVar8 = param_2[0x2c8];
      uVar5 = param_2[0x2c7];
      param_1[0x2c6] = param_2[0x2c6];
      param_1[0x2c5] = uVar4;
      param_1[0x2c8] = uVar8;
      param_1[0x2c7] = uVar5;
      param_1[0x2c9] = param_2[0x2c9];
    }
    else {
      lVar6 = param_2[0x2c6];
      if (lVar6 == 0) {
        func_0x000101865874(param_1 + 0x2c5);
        goto LAB_10423ac24;
      }
      param_1[0x2c5] = param_2[0x2c5];
      param_1[0x2c6] = lVar6;
      _swift_bridgeObjectRelease();
      param_1[0x2c7] = param_2[0x2c7];
      uVar4 = param_1[0x2c8];
      param_1[0x2c8] = param_2[0x2c8];
      _swift_bridgeObjectRelease(uVar4);
      param_1[0x2c9] = param_2[0x2c9];
    }
  }
  puVar1 = param_1 + 0x2ca;
  if (param_1[0x2cc] == 1) {
LAB_10423a7f4:
    uVar4 = param_2[0x2ca];
    uVar8 = param_2[0x2cd];
    uVar5 = param_2[0x2cc];
    param_1[0x2cb] = param_2[0x2cb];
    *puVar1 = uVar4;
    param_1[0x2cd] = uVar8;
    param_1[0x2cc] = uVar5;
    param_1[0x2ce] = param_2[0x2ce];
  }
  else {
    lVar6 = param_2[0x2cc];
    if (lVar6 == 1) {
      FUN_10423973c(puVar1);
      goto LAB_10423a7f4;
    }
    *(undefined1 *)puVar1 = *(undefined1 *)(param_2 + 0x2ca);
    param_1[0x2cb] = param_2[0x2cb];
    param_1[0x2cc] = lVar6;
    _swift_bridgeObjectRelease();
    param_1[0x2cd] = param_2[0x2cd];
    uVar4 = param_1[0x2ce];
    param_1[0x2ce] = param_2[0x2ce];
    _swift_bridgeObjectRelease(uVar4);
  }
  uVar4 = param_2[0x2cf];
  param_1[0x2d0] = param_2[0x2d0];
  param_1[0x2cf] = uVar4;
  if (param_1[0x2d8] == 1) {
LAB_10423a908:
    uVar4 = param_2[0x2d1];
    uVar8 = param_2[0x2d4];
    uVar5 = param_2[0x2d3];
    param_1[0x2d2] = param_2[0x2d2];
    param_1[0x2d1] = uVar4;
    param_1[0x2d4] = uVar8;
    param_1[0x2d3] = uVar5;
    uVar4 = param_2[0x2d5];
    uVar8 = param_2[0x2d8];
    uVar5 = param_2[0x2d7];
    param_1[0x2d6] = param_2[0x2d6];
    param_1[0x2d5] = uVar4;
    param_1[0x2d8] = uVar8;
    param_1[0x2d7] = uVar5;
  }
  else {
    lVar6 = param_2[0x2d8];
    if (lVar6 == 1) {
      func_0x00010189a670(param_1 + 0x2d1);
      goto LAB_10423a908;
    }
    *(undefined1 *)(param_1 + 0x2d1) = *(undefined1 *)(param_2 + 0x2d1);
    uVar4 = param_2[0x2d2];
    param_1[0x2d3] = param_2[0x2d3];
    param_1[0x2d2] = uVar4;
    param_1[0x2d4] = param_2[0x2d4];
    param_1[0x2d5] = param_2[0x2d5];
    *(undefined1 *)(param_1 + 0x2d6) = *(undefined1 *)(param_2 + 0x2d6);
    *(undefined1 *)((long)param_1 + 0x16b1) = *(undefined1 *)((long)param_2 + 0x16b1);
    *(undefined1 *)((long)param_1 + 0x16b2) = *(undefined1 *)((long)param_2 + 0x16b2);
    *(undefined1 *)((long)param_1 + 0x16b3) = *(undefined1 *)((long)param_2 + 0x16b3);
    param_1[0x2d7] = param_2[0x2d7];
    param_1[0x2d8] = lVar6;
    _swift_bridgeObjectRelease();
  }
  puVar1 = param_1 + 0x2d9;
  if (param_1[0x2dc] == 1) {
LAB_10423a9a0:
    uVar4 = param_2[0x2d9];
    uVar8 = param_2[0x2dc];
    uVar5 = param_2[0x2db];
    param_1[0x2da] = param_2[0x2da];
    *puVar1 = uVar4;
    param_1[0x2dc] = uVar8;
    param_1[0x2db] = uVar5;
  }
  else {
    lVar6 = param_2[0x2dc];
    if (lVar6 == 1) {
      func_0x000104239770(puVar1);
      goto LAB_10423a9a0;
    }
    *(undefined1 *)puVar1 = *(undefined1 *)(param_2 + 0x2d9);
    uVar4 = param_2[0x2da];
    param_1[0x2db] = param_2[0x2db];
    param_1[0x2da] = uVar4;
    param_1[0x2dc] = lVar6;
    _swift_bridgeObjectRelease();
  }
  param_1[0x2dd] = param_2[0x2dd];
  uVar4 = param_2[0x2de];
  param_1[0x2df] = param_2[0x2df];
  param_1[0x2de] = uVar4;
  uVar4 = param_2[0x2e0];
  param_1[0x2e1] = param_2[0x2e1];
  param_1[0x2e0] = uVar4;
  *(undefined1 *)(param_1 + 0x2e2) = *(undefined1 *)(param_2 + 0x2e2);
  *(undefined1 *)((long)param_1 + 0x1711) = *(undefined1 *)((long)param_2 + 0x1711);
  param_1[0x2e3] = param_2[0x2e3];
  uVar4 = param_2[0x2e4];
  param_1[0x2e5] = param_2[0x2e5];
  param_1[0x2e4] = uVar4;
  uVar4 = param_1[0x2e6];
  param_1[0x2e6] = param_2[0x2e6];
  _swift_bridgeObjectRelease(uVar4);
  param_1[0x2e7] = param_2[0x2e7];
  param_1[0x2e8] = param_2[0x2e8];
  *(undefined1 *)(param_1 + 0x2e9) = *(undefined1 *)(param_2 + 0x2e9);
  puVar1 = param_1 + 0x2ea;
  if (param_1[0x2f0] != 1) {
    lVar6 = param_2[0x2f0];
    if (lVar6 != 1) {
      *puVar1 = param_2[0x2ea];
      *(undefined1 *)(param_1 + 0x2eb) = *(undefined1 *)(param_2 + 0x2eb);
      param_1[0x2ec] = param_2[0x2ec];
      *(undefined1 *)(param_1 + 0x2ed) = *(undefined1 *)(param_2 + 0x2ed);
      param_1[0x2ee] = param_2[0x2ee];
      *(undefined1 *)(param_1 + 0x2ef) = *(undefined1 *)(param_2 + 0x2ef);
      param_1[0x2f0] = lVar6;
      _swift_bridgeObjectRelease();
      goto LAB_10423aabc;
    }
    func_0x0001042397a4(puVar1);
  }
  uVar4 = param_2[0x2ea];
  uVar8 = param_2[0x2ed];
  uVar5 = param_2[0x2ec];
  param_1[0x2eb] = param_2[0x2eb];
  *puVar1 = uVar4;
  param_1[0x2ed] = uVar8;
  param_1[0x2ec] = uVar5;
  uVar4 = param_2[0x2ee];
  param_1[0x2ef] = param_2[0x2ef];
  param_1[0x2ee] = uVar4;
  param_1[0x2f0] = param_2[0x2f0];
LAB_10423aabc:
  *(undefined1 *)(param_1 + 0x2f1) = *(undefined1 *)(param_2 + 0x2f1);
  param_1[0x2f2] = param_2[0x2f2];
  uVar4 = param_1[0x2f3];
  param_1[0x2f3] = param_2[0x2f3];
  _swift_bridgeObjectRelease(uVar4);
  if (param_1[0x2f7] != 1) {
    lVar6 = param_2[0x2f7];
    if (lVar6 != 1) {
      *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)(param_2 + 0x2f4);
      param_1[0x2f5] = param_2[0x2f5];
      param_1[0x2f6] = param_2[0x2f6];
      param_1[0x2f7] = lVar6;
      _swift_bridgeObjectRelease();
      *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0x2f8);
      uVar4 = param_1[0x2f9];
      param_1[0x2f9] = param_2[0x2f9];
      _swift_bridgeObjectRelease(uVar4);
      return param_1;
    }
    func_0x00010186580c(param_1 + 0x2f4);
  }
  uVar4 = param_2[0x2f4];
  uVar8 = param_2[0x2f7];
  uVar5 = param_2[0x2f6];
  param_1[0x2f5] = param_2[0x2f5];
  param_1[0x2f4] = uVar4;
  param_1[0x2f7] = uVar8;
  param_1[0x2f6] = uVar5;
  uVar4 = param_2[0x2f8];
  param_1[0x2f9] = param_2[0x2f9];
  param_1[0x2f8] = uVar4;
  return param_1;
}



/* Entry: 10423bf1c; end: 10423c64f;  */

int FUN_10423bf1c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x5f4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10423c650; end: 10423c6c3;  */

void FUN_10423c650(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 == 1) {
    return;
  }
  _swift_bridgeObjectRetain(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10423c6c4; end: 10423c6eb;  */

void FUN_10423c6c4(void)

{
  long in_x6;
  
  if (in_x6 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x6);
  return;
}



/* Entry: 10423c6ec; end: 10423c743;  */

uint FUN_10423c6ec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_10423c744(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10423c744; end: 10423c84f;  */

undefined8 FUN_10423c744(double *param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(param_2 + 1) != '\x01') && (bVar1 = false, !NAN(*param_1) && !NAN(*param_2))) {
      bVar1 = *param_1 == *param_2;
    }
    if (!bVar1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_2 + 3) != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(param_2 + 3) != '\x01') && (bVar1 = false, !NAN(param_1[2]) && !NAN(param_2[2])))
    {
      bVar1 = param_1[2] == param_2[2];
    }
    if (!bVar1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    if (*(char *)(param_2 + 5) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 5) == '\x01') {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
  }
  dVar3 = param_1[6];
  dVar2 = param_2[6];
  if (dVar3 == 0.0) {
    if (dVar2 == 0.0) {
      return 1;
    }
  }
  else if (dVar2 != 0.0) {
    _swift_bridgeObjectRetain(dVar2);
    func_0x000104288214(dVar3,dVar2);
    func_0x0001042397a4(param_2);
    if (((ulong)dVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10423c850; end: 10423c87b;  */

long FUN_10423c850(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10423c87c; end: 10423c883;  */

void FUN_10423c87c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10423c884; end: 10423c9a7;  */

undefined8 * FUN_10423c884(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10423c9a8; end: 10423ca73;  */

int FUN_10423c9a8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10423ca74; end: 10423caaf;  */

undefined8 FUN_10423ca74(undefined8 param_1,undefined8 param_2)

{
  FUN_1042397e0(param_2,param_1);
  return param_2;
}



/* Entry: 10423cab0; end: 10423cae7;  */

void FUN_10423cab0(undefined8 param_1)

{
  if (lRam0000000113069ad0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f6b54);
  return;
}



/* Entry: 10423cae8; end: 10423caeb;  */

bool FUN_10423cae8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_2fd0 [6096];
  undefined1 auStack_1800 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar3 = 0;
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) && ((char)param_1[2] == (char)param_2[2])) {
    _memcpy(auStack_2fd0,param_1 + 3,0x17d0);
    _memcpy(auStack_1800,param_2 + 3,0x17d0);
    FUN_10422d18c(auStack_2fd0,auStack_1800);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_2[0x2fe];
      if (param_1[0x2fe] == 0) {
        if (uVar3 != 0) {
          return false;
        }
      }
      else {
        if (uVar3 == 0) {
          return false;
        }
        uVar1 = param_1[0x2fd];
        if (((uVar1 != param_2[0x2fd]) || (param_1[0x2fe] != uVar3)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) == 0)) {
          return false;
        }
      }
      uVar3 = param_1[0x2ff];
      if (uVar3 == 0) {
        if (param_2[0x2ff] != 0) {
          return false;
        }
      }
      else {
        if (param_2[0x2ff] == 0) {
          return false;
        }
        func_0x00010142cfc4();
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      uVar3 = param_1[0x300];
      if (uVar3 == 0) {
        if (param_2[0x300] != 0) {
          return false;
        }
      }
      else {
        if (param_2[0x300] == 0) {
          return false;
        }
        func_0x00010142cfc4();
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      uVar3 = param_1[0x301];
      if (uVar3 == 0) {
        if (param_2[0x301] != 0) {
          return false;
        }
      }
      else {
        if (param_2[0x301] == 0) {
          return false;
        }
        func_0x00010142cfc4();
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      if ((char)param_1[0x302] == (char)param_2[0x302]) {
        lVar2 = 0;
        FUN_10423cab0();
        uVar3 = (long)param_1 + (long)*(int *)(lVar2 + 0x30);
        func_0x0001046cae58(uVar3,(long)param_2 + (long)*(int *)(lVar2 + 0x30));
        if (((uVar3 & 1) != 0) &&
           (*(int *)((long)param_1 + (long)*(int *)(lVar2 + 0x34)) ==
            *(int *)((long)param_2 + (long)*(int *)(lVar2 + 0x34)))) {
          return *(long *)((long)param_1 + (long)*(int *)(lVar2 + 0x38)) ==
                 *(long *)((long)param_2 + (long)*(int *)(lVar2 + 0x38));
        }
      }
    }
  }
  return false;
}



/* Entry: 10423caec; end: 10423cbfb; -[SCAdTrackRequest withAdIdentifier:] */

void FUN_10423caec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (undefined8 *)(puVar3 + -extraout_x12);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b0824(puVar4);
  _swift_bridgeObjectRelease(puVar4[1]);
  *puVar4 = param_3;
  puVar4[1] = param_2;
  FUN_10423d8cc(puVar4,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3);
  _objc_release(param_1);
  FUN_10424ff18(puVar4,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423cbfc; end: 10423ccf3; -[SCAdTrackRequest withDisableShadowTrack:] */

void FUN_10423cbfc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b0824(lVar2);
  *(undefined1 *)(lVar2 + 0x10) = param_3;
  FUN_10423d8cc(lVar2,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3);
  _objc_release(param_1);
  FUN_10424ff18(lVar2,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423ccf4; end: 10423ce3b; -[SCAdTrackRequest withAdTrackInfo:] */

void FUN_10423ccf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_1820 [24];
  undefined1 auStack_1808 [6072];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = auStack_1820 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain(param_3);
  FUN_1042b0824(lVar2,param_1);
  _objc_retain(param_3);
  FUN_1042af544(auStack_1820);
  FUN_10423ca74(auStack_1820,lVar2 + 0x18);
  FUN_10423d8cc(lVar2,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_10424ff18(lVar2,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423ce3c; end: 10423cf57; -[SCAdTrackRequest withSessionId:] */

void FUN_10423ce3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b0824(lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x17f0));
  *(long *)(lVar2 + 0x17e8) = param_3;
  *(undefined8 *)(lVar2 + 0x17f0) = param_2;
  FUN_10423d8cc(lVar2,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3,uVar1);
  _objc_release(param_1);
  FUN_10424ff18(lVar2,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423cf58; end: 10423d06b; -[SCAdTrackRequest withThirdPartyImpressionURLs:] */

void FUN_10423cf58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b0824(lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x17f8));
  *(long *)(lVar2 + 0x17f8) = param_3;
  FUN_10423d8cc(lVar2,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3,uVar1);
  _objc_release(param_1);
  FUN_10424ff18(lVar2,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423d06c; end: 10423d17f; -[SCAdTrackRequest withThirdPartyClickURLs:] */

void FUN_10423d06c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b0824(lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x1800));
  *(long *)(lVar2 + 0x1800) = param_3;
  FUN_10423d8cc(lVar2,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3,uVar1);
  _objc_release(param_1);
  FUN_10424ff18(lVar2,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423d180; end: 10423d293; -[SCAdTrackRequest withThirdPartyEngagedViewClickURLs:] */

void FUN_10423d180(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b0824(lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x1808));
  *(long *)(lVar2 + 0x1808) = param_3;
  FUN_10423d8cc(lVar2,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3,uVar1);
  _objc_release(param_1);
  FUN_10424ff18(lVar2,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423d294; end: 10423d387; -[SCAdTrackRequest withUpdateTrackURLWithInventoryType:] */

void FUN_10423d294(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b0824(lVar2);
  *(undefined1 *)(lVar2 + 0x1810) = param_3;
  FUN_10423d8cc(lVar2,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3);
  _objc_release(param_1);
  FUN_10424ff18(lVar2,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423d388; end: 10423d4ef; -[SCAdTrackRequest withAdResponse:] */

void FUN_10423d388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar5 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain(param_3);
  FUN_1042b0824(lVar4,param_1);
  _objc_retain(param_3);
  func_0x0001047b6fb0(puVar3);
  func_0x00010178317c(puVar3,lVar4 + *(int *)(lVar2 + 0x30));
  FUN_10423d8cc(lVar4,lVar5,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(lVar5);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_10424ff18(lVar4,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10423d4f0; end: 10423d5ef; -[SCAdTrackRequest withTriggerType:] */

void FUN_10423d4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b0824(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x34)) = param_3;
  FUN_10423d8cc(lVar4,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3);
  _objc_release(param_1);
  FUN_10424ff18(lVar4,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423d5f0; end: 10423d717; -[SCAdTrackRequest withAdTrackOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10423d5f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042b0824(lVar4,param_1);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x38)) = *(undefined8 *)(param_3 + _DAT_113069750);
  FUN_10423d8cc(lVar4,puVar3,FUN_10423cab0);
  _objc_allocWithZone(uVar1);
  func_0x0001042b0f38(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_10424ff18(lVar4,FUN_10423cab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10423d718; end: 10423d8cb;  */

bool FUN_10423d718(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_2fd0 [6096];
  undefined1 auStack_1800 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar3 = 0;
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) && ((char)param_1[2] == (char)param_2[2])) {
    _memcpy(auStack_2fd0,param_1 + 3,0x17d0);
    _memcpy(auStack_1800,param_2 + 3,0x17d0);
    FUN_10422d18c(auStack_2fd0,auStack_1800);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_2[0x2fe];
      if (param_1[0x2fe] == 0) {
        if (uVar3 != 0) {
          return false;
        }
      }
      else {
        if (uVar3 == 0) {
          return false;
        }
        uVar1 = param_1[0x2fd];
        if (((uVar1 != param_2[0x2fd]) || (param_1[0x2fe] != uVar3)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) == 0)) {
          return false;
        }
      }
      uVar3 = param_1[0x2ff];
      if (uVar3 == 0) {
        if (param_2[0x2ff] != 0) {
          return false;
        }
      }
      else {
        if (param_2[0x2ff] == 0) {
          return false;
        }
        func_0x00010142cfc4();
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      uVar3 = param_1[0x300];
      if (uVar3 == 0) {
        if (param_2[0x300] != 0) {
          return false;
        }
      }
      else {
        if (param_2[0x300] == 0) {
          return false;
        }
        func_0x00010142cfc4();
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      uVar3 = param_1[0x301];
      if (uVar3 == 0) {
        if (param_2[0x301] != 0) {
          return false;
        }
      }
      else {
        if (param_2[0x301] == 0) {
          return false;
        }
        func_0x00010142cfc4();
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      if ((char)param_1[0x302] == (char)param_2[0x302]) {
        lVar2 = 0;
        FUN_10423cab0();
        uVar3 = (long)param_1 + (long)*(int *)(lVar2 + 0x30);
        func_0x0001046cae58(uVar3,(long)param_2 + (long)*(int *)(lVar2 + 0x30));
        if (((uVar3 & 1) != 0) &&
           (*(int *)((long)param_1 + (long)*(int *)(lVar2 + 0x34)) ==
            *(int *)((long)param_2 + (long)*(int *)(lVar2 + 0x34)))) {
          return *(long *)((long)param_1 + (long)*(int *)(lVar2 + 0x38)) ==
                 *(long *)((long)param_2 + (long)*(int *)(lVar2 + 0x38));
        }
      }
    }
  }
  return false;
}



/* Entry: 10423d8cc; end: 10423d90f;  */

undefined8 FUN_10423d8cc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10423d910; end: 1042409db;  */

long * FUN_10423d910(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  code *pcVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  
  uVar12 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar12 >> 0x11 & 1) != 0) {
    lVar23 = *param_2;
    *param_1 = lVar23;
    uVar25 = (ulong)uVar12 & 0xff;
    _swift_retain();
    return (long *)(lVar23 + (uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff)));
  }
  lVar23 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar23;
  *(char *)(param_1 + 2) = (char)param_2[2];
  lVar23 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar23;
  *(char *)(param_1 + 5) = (char)param_2[5];
  lVar23 = param_2[6];
  param_1[6] = lVar23;
  lVar26 = param_2[0x12f];
  _swift_bridgeObjectRetain();
  _objc_retain(lVar23);
  if (lVar26 == 1) {
    _memcpy(param_1 + 7,param_2 + 7,0xab2);
  }
  else {
    param_1[7] = param_2[7];
    lVar23 = param_2[9];
    if (lVar23 == 1) {
      _memcpy(param_1 + 8,param_2 + 8,0x5a8);
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = lVar23;
      lVar23 = param_2[10];
      lVar15 = param_2[0xd];
      lVar13 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = lVar23;
      param_1[0xd] = lVar15;
      param_1[0xc] = lVar13;
      lVar23 = param_2[0xe];
      lVar15 = param_2[0x11];
      lVar13 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = lVar23;
      param_1[0x11] = lVar15;
      param_1[0x10] = lVar13;
      lVar15 = param_2[0x12];
      param_1[0x12] = lVar15;
      lVar23 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = lVar23;
      lVar23 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = lVar23;
      *(char *)(param_1 + 0x17) = (char)param_2[0x17];
      lVar13 = param_2[0x19];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar15);
      _swift_bridgeObjectRetain(lVar23);
      if (lVar13 == 0) {
        lVar23 = param_2[0x24];
        lVar15 = param_2[0x27];
        lVar13 = param_2[0x26];
        param_1[0x25] = param_2[0x25];
        param_1[0x24] = lVar23;
        param_1[0x27] = lVar15;
        param_1[0x26] = lVar13;
        param_1[0x28] = param_2[0x28];
        lVar23 = param_2[0x1c];
        lVar15 = param_2[0x1f];
        lVar13 = param_2[0x1e];
        param_1[0x1d] = param_2[0x1d];
        param_1[0x1c] = lVar23;
        param_1[0x1f] = lVar15;
        param_1[0x1e] = lVar13;
        lVar15 = param_2[0x20];
        lVar13 = param_2[0x23];
        lVar23 = param_2[0x22];
        param_1[0x21] = param_2[0x21];
        param_1[0x20] = lVar15;
        param_1[0x23] = lVar13;
        param_1[0x22] = lVar23;
        lVar15 = param_2[0x18];
        lVar13 = param_2[0x1b];
        lVar23 = param_2[0x1a];
        param_1[0x19] = param_2[0x19];
        param_1[0x18] = lVar15;
        param_1[0x1b] = lVar13;
        param_1[0x1a] = lVar23;
      }
      else {
        param_1[0x18] = param_2[0x18];
        param_1[0x19] = lVar13;
        lVar23 = param_2[0x1a];
        lVar16 = param_2[0x1d];
        lVar15 = param_2[0x1c];
        param_1[0x1b] = param_2[0x1b];
        param_1[0x1a] = lVar23;
        param_1[0x1d] = lVar16;
        param_1[0x1c] = lVar15;
        lVar23 = param_2[0x1e];
        lVar16 = param_2[0x21];
        lVar15 = param_2[0x20];
        param_1[0x1f] = param_2[0x1f];
        param_1[0x1e] = lVar23;
        param_1[0x21] = lVar16;
        param_1[0x20] = lVar15;
        param_1[0x22] = param_2[0x22];
        *(char *)(param_1 + 0x23) = (char)param_2[0x23];
        lVar23 = param_2[0x24];
        param_1[0x25] = param_2[0x25];
        param_1[0x24] = lVar23;
        lVar23 = param_2[0x27];
        param_1[0x26] = param_2[0x26];
        param_1[0x27] = lVar23;
        lVar15 = param_2[0x28];
        param_1[0x28] = lVar15;
        _swift_bridgeObjectRetain(lVar13);
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar15);
      }
      *(char *)(param_1 + 0x29) = (char)param_2[0x29];
      lVar23 = param_2[0x2a];
      param_1[0x2b] = param_2[0x2b];
      param_1[0x2a] = lVar23;
      uVar20 = *(undefined8 *)((long)param_2 + 0x15c);
      *(undefined8 *)((long)param_1 + 0x164) = *(undefined8 *)((long)param_2 + 0x164);
      *(undefined8 *)((long)param_1 + 0x15c) = uVar20;
      param_1[0x2e] = param_2[0x2e];
      *(char *)(param_1 + 0x3f) = (char)param_2[0x3f];
      lVar23 = param_2[0x3b];
      lVar15 = param_2[0x3e];
      lVar13 = param_2[0x3d];
      param_1[0x3c] = param_2[0x3c];
      param_1[0x3b] = lVar23;
      param_1[0x3e] = lVar15;
      param_1[0x3d] = lVar13;
      lVar23 = param_2[0x33];
      lVar15 = param_2[0x36];
      lVar13 = param_2[0x35];
      param_1[0x34] = param_2[0x34];
      param_1[0x33] = lVar23;
      param_1[0x36] = lVar15;
      param_1[0x35] = lVar13;
      lVar15 = param_2[0x37];
      lVar13 = param_2[0x3a];
      lVar23 = param_2[0x39];
      param_1[0x38] = param_2[0x38];
      param_1[0x37] = lVar15;
      param_1[0x3a] = lVar13;
      param_1[0x39] = lVar23;
      lVar15 = param_2[0x2f];
      lVar13 = param_2[0x32];
      lVar23 = param_2[0x31];
      param_1[0x30] = param_2[0x30];
      param_1[0x2f] = lVar15;
      param_1[0x32] = lVar13;
      param_1[0x31] = lVar23;
      lVar23 = param_2[0x48];
      lVar15 = param_2[0x4b];
      lVar13 = param_2[0x4a];
      param_1[0x49] = param_2[0x49];
      param_1[0x48] = lVar23;
      param_1[0x4b] = lVar15;
      param_1[0x4a] = lVar13;
      lVar23 = param_2[0x4c];
      param_1[0x4d] = param_2[0x4d];
      param_1[0x4c] = lVar23;
      uVar20 = *(undefined8 *)((long)param_2 + 0x269);
      *(undefined8 *)((long)param_1 + 0x271) = *(undefined8 *)((long)param_2 + 0x271);
      *(undefined8 *)((long)param_1 + 0x269) = uVar20;
      lVar23 = param_2[0x40];
      lVar15 = param_2[0x43];
      lVar13 = param_2[0x42];
      param_1[0x41] = param_2[0x41];
      param_1[0x40] = lVar23;
      param_1[0x43] = lVar15;
      param_1[0x42] = lVar13;
      lVar23 = param_2[0x44];
      lVar15 = param_2[0x47];
      lVar13 = param_2[0x46];
      param_1[0x45] = param_2[0x45];
      param_1[0x44] = lVar23;
      param_1[0x47] = lVar15;
      param_1[0x46] = lVar13;
      lVar13 = param_2[0x51];
      lVar23 = param_2[0x50];
      lVar16 = param_2[0x53];
      lVar15 = param_2[0x52];
      lVar17 = param_2[0x54];
      lVar24 = param_2[0x57];
      lVar18 = param_2[0x56];
      param_1[0x55] = param_2[0x55];
      param_1[0x54] = lVar17;
      param_1[0x57] = lVar24;
      param_1[0x56] = lVar18;
      param_1[0x51] = lVar13;
      param_1[0x50] = lVar23;
      param_1[0x53] = lVar16;
      param_1[0x52] = lVar15;
      lVar13 = param_2[0x59];
      lVar23 = param_2[0x58];
      lVar16 = param_2[0x5b];
      lVar15 = param_2[0x5a];
      lVar18 = param_2[0x5d];
      lVar17 = param_2[0x5c];
      uVar20 = *(undefined8 *)((long)param_2 + 0x2ea);
      *(undefined8 *)((long)param_1 + 0x2f2) = *(undefined8 *)((long)param_2 + 0x2f2);
      *(undefined8 *)((long)param_1 + 0x2ea) = uVar20;
      param_1[0x5b] = lVar16;
      param_1[0x5a] = lVar15;
      param_1[0x5d] = lVar18;
      param_1[0x5c] = lVar17;
      param_1[0x59] = lVar13;
      param_1[0x58] = lVar23;
      param_1[0x60] = param_2[0x60];
      param_1[0x61] = param_2[0x61];
      *(char *)(param_1 + 0x62) = (char)param_2[0x62];
      *(undefined1 *)((long)param_1 + 0x311) = *(undefined1 *)((long)param_2 + 0x311);
      param_1[99] = param_2[99];
      param_1[100] = param_2[100];
      *(char *)(param_1 + 0x65) = (char)param_2[0x65];
      lVar13 = param_2[0x66];
      param_1[0x66] = lVar13;
      *(char *)(param_1 + 0x67) = (char)param_2[0x67];
      *(undefined1 *)((long)param_1 + 0x339) = *(undefined1 *)((long)param_2 + 0x339);
      lVar23 = param_2[0x6b];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar13);
      if (lVar23 == 1) {
        lVar23 = param_2[0x68];
        lVar15 = param_2[0x6b];
        lVar13 = param_2[0x6a];
        param_1[0x69] = param_2[0x69];
        param_1[0x68] = lVar23;
        param_1[0x6b] = lVar15;
        param_1[0x6a] = lVar13;
        lVar23 = param_2[0x6c];
        param_1[0x6d] = param_2[0x6d];
        param_1[0x6c] = lVar23;
      }
      else {
        *(char *)(param_1 + 0x68) = (char)param_2[0x68];
        param_1[0x69] = param_2[0x69];
        param_1[0x6a] = param_2[0x6a];
        param_1[0x6b] = lVar23;
        *(char *)(param_1 + 0x6c) = (char)param_2[0x6c];
        lVar13 = param_2[0x6d];
        param_1[0x6d] = lVar13;
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
      }
      *(char *)(param_1 + 0x6e) = (char)param_2[0x6e];
      param_1[0x6f] = param_2[0x6f];
      param_1[0x70] = param_2[0x70];
      lVar18 = param_2[0x71];
      param_1[0x71] = lVar18;
      lVar17 = param_2[0x72];
      param_1[0x72] = lVar17;
      lVar16 = param_2[0x73];
      param_1[0x73] = lVar16;
      param_1[0x74] = param_2[0x74];
      *(char *)(param_1 + 0x75) = (char)param_2[0x75];
      lVar23 = param_2[0x76];
      *(char *)(param_1 + 0x77) = (char)param_2[0x77];
      param_1[0x76] = lVar23;
      param_1[0x78] = param_2[0x78];
      *(char *)(param_1 + 0x79) = (char)param_2[0x79];
      lVar23 = param_2[0x7a];
      param_1[0x7a] = lVar23;
      lVar24 = param_2[0x7b];
      param_1[0x7b] = lVar24;
      lVar36 = param_2[0x7e];
      lVar15 = param_2[0x81];
      lVar13 = param_2[0x80];
      param_1[0x7f] = param_2[0x7f];
      param_1[0x7e] = lVar36;
      param_1[0x81] = lVar15;
      param_1[0x80] = lVar13;
      lVar13 = param_2[0x82];
      param_1[0x83] = param_2[0x83];
      param_1[0x82] = lVar13;
      lVar13 = param_2[0x84];
      param_1[0x85] = param_2[0x85];
      param_1[0x84] = lVar13;
      lVar13 = param_2[0x86];
      param_1[0x87] = param_2[0x87];
      param_1[0x86] = lVar13;
      lVar13 = param_2[0x7c];
      param_1[0x7d] = param_2[0x7d];
      param_1[0x7c] = lVar13;
      param_1[0x88] = param_2[0x88];
      *(char *)(param_1 + 0x8a) = (char)param_2[0x8a];
      param_1[0x89] = param_2[0x89];
      param_1[0x8b] = param_2[0x8b];
      lVar13 = param_2[0x8c];
      param_1[0x8d] = param_2[0x8d];
      param_1[0x8c] = lVar13;
      lVar13 = param_2[0x8e];
      param_1[0x8f] = param_2[0x8f];
      param_1[0x8e] = lVar13;
      param_1[0x90] = param_2[0x90];
      lVar15 = param_2[0x91];
      param_1[0x91] = lVar15;
      lVar13 = param_2[0x9e];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(lVar17);
      _swift_bridgeObjectRetain(lVar16);
      _swift_bridgeObjectRetain(lVar23);
      _swift_bridgeObjectRetain(lVar24);
      _swift_bridgeObjectRetain(lVar15);
      if (lVar13 == 1) {
        lVar23 = param_2[0x9a];
        lVar15 = param_2[0x9d];
        lVar13 = param_2[0x9c];
        param_1[0x9b] = param_2[0x9b];
        param_1[0x9a] = lVar23;
        param_1[0x9d] = lVar15;
        param_1[0x9c] = lVar13;
        lVar23 = param_2[0x9e];
        param_1[0x9f] = param_2[0x9f];
        param_1[0x9e] = lVar23;
        *(short *)(param_1 + 0xa0) = (short)param_2[0xa0];
        lVar23 = param_2[0x92];
        lVar15 = param_2[0x95];
        lVar13 = param_2[0x94];
        param_1[0x93] = param_2[0x93];
        param_1[0x92] = lVar23;
        param_1[0x95] = lVar15;
        param_1[0x94] = lVar13;
        lVar23 = param_2[0x96];
        lVar15 = param_2[0x99];
        lVar13 = param_2[0x98];
        param_1[0x97] = param_2[0x97];
        param_1[0x96] = lVar23;
        param_1[0x99] = lVar15;
        param_1[0x98] = lVar13;
      }
      else {
        *(char *)(param_1 + 0x92) = (char)param_2[0x92];
        param_1[0x93] = param_2[0x93];
        *(char *)(param_1 + 0x94) = (char)param_2[0x94];
        param_1[0x95] = param_2[0x95];
        *(char *)(param_1 + 0x96) = (char)param_2[0x96];
        param_1[0x97] = param_2[0x97];
        *(char *)(param_1 + 0x98) = (char)param_2[0x98];
        *(char *)(param_1 + 0x9a) = (char)param_2[0x9a];
        param_1[0x99] = param_2[0x99];
        param_1[0x9b] = param_2[0x9b];
        *(char *)(param_1 + 0x9c) = (char)param_2[0x9c];
        param_1[0x9d] = param_2[0x9d];
        param_1[0x9e] = lVar13;
        param_1[0x9f] = param_2[0x9f];
        *(short *)(param_1 + 0xa0) = (short)param_2[0xa0];
        _swift_bridgeObjectRetain(lVar13);
      }
      *(undefined1 *)((long)param_1 + 0x502) = *(undefined1 *)((long)param_2 + 0x502);
      param_1[0xa1] = param_2[0xa1];
      lVar23 = param_2[0xa4];
      param_1[0xa5] = param_2[0xa5];
      param_1[0xa4] = lVar23;
      lVar23 = param_2[0xa6];
      param_1[0xa7] = param_2[0xa7];
      param_1[0xa6] = lVar23;
      lVar23 = param_2[0xa8];
      param_1[0xa9] = param_2[0xa9];
      param_1[0xa8] = lVar23;
      *(short *)(param_1 + 0xaa) = (short)param_2[0xaa];
      lVar23 = param_2[0xa2];
      param_1[0xa3] = param_2[0xa3];
      param_1[0xa2] = lVar23;
      lVar23 = param_2[0xac];
      _swift_bridgeObjectRetain();
      if (lVar23 == 0) {
        lVar23 = param_2[0xab];
        lVar15 = param_2[0xae];
        lVar13 = param_2[0xad];
        param_1[0xac] = param_2[0xac];
        param_1[0xab] = lVar23;
        param_1[0xae] = lVar15;
        param_1[0xad] = lVar13;
        param_1[0xaf] = param_2[0xaf];
      }
      else {
        param_1[0xab] = param_2[0xab];
        param_1[0xac] = lVar23;
        param_1[0xad] = param_2[0xad];
        lVar13 = param_2[0xae];
        param_1[0xae] = lVar13;
        param_1[0xaf] = param_2[0xaf];
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
      }
      lVar23 = param_2[0xb0];
      param_1[0xb1] = param_2[0xb1];
      param_1[0xb0] = lVar23;
      *(char *)(param_1 + 0xb2) = (char)param_2[0xb2];
      param_1[0xb3] = param_2[0xb3];
      param_1[0xb4] = param_2[0xb4];
      *(char *)(param_1 + 0xb5) = (char)param_2[0xb5];
      lVar23 = param_2[0xb6];
      param_1[0xb6] = lVar23;
      *(char *)(param_1 + 0xb8) = (char)param_2[0xb8];
      param_1[0xb7] = param_2[0xb7];
      lVar13 = param_2[0xb9];
      param_1[0xb9] = lVar13;
      lVar15 = param_2[0xba];
      param_1[0xba] = lVar15;
      lVar16 = param_2[0xbb];
      param_1[0xbb] = lVar16;
      lVar17 = param_2[0xbc];
      param_1[0xbc] = lVar17;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar23);
      _objc_retain(lVar13);
      _objc_retain(lVar15);
      _objc_retain(lVar16);
      _swift_bridgeObjectRetain(lVar17);
    }
    lVar23 = param_2[0xc1];
    if (lVar23 == 1) {
      lVar23 = param_2[0xc5];
      lVar15 = param_2[200];
      lVar13 = param_2[199];
      param_1[0xc6] = param_2[0xc6];
      param_1[0xc5] = lVar23;
      param_1[200] = lVar15;
      param_1[199] = lVar13;
      uVar20 = *(undefined8 *)((long)param_2 + 0x641);
      *(undefined8 *)((long)param_1 + 0x649) = *(undefined8 *)((long)param_2 + 0x649);
      *(undefined8 *)((long)param_1 + 0x641) = uVar20;
      lVar23 = param_2[0xbd];
      lVar15 = param_2[0xc0];
      lVar13 = param_2[0xbf];
      param_1[0xbe] = param_2[0xbe];
      param_1[0xbd] = lVar23;
      param_1[0xc0] = lVar15;
      param_1[0xbf] = lVar13;
      lVar15 = param_2[0xc1];
      lVar13 = param_2[0xc4];
      lVar23 = param_2[0xc3];
      param_1[0xc2] = param_2[0xc2];
      param_1[0xc1] = lVar15;
      param_1[0xc4] = lVar13;
      param_1[0xc3] = lVar23;
    }
    else {
      param_1[0xbd] = param_2[0xbd];
      param_1[0xbe] = param_2[0xbe];
      *(short *)(param_1 + 0xbf) = (short)param_2[0xbf];
      param_1[0xc0] = param_2[0xc0];
      param_1[0xc1] = lVar23;
      *(char *)(param_1 + 0xc2) = (char)param_2[0xc2];
      param_1[0xc3] = param_2[0xc3];
      *(char *)(param_1 + 0xc4) = (char)param_2[0xc4];
      *(char *)(param_1 + 0xc6) = (char)param_2[0xc6];
      param_1[0xc5] = param_2[0xc5];
      param_1[199] = param_2[199];
      *(char *)(param_1 + 200) = (char)param_2[200];
      param_1[0xc9] = param_2[0xc9];
      *(char *)(param_1 + 0xca) = (char)param_2[0xca];
      _swift_bridgeObjectRetain();
    }
    lVar23 = param_2[0xd1];
    if (lVar23 == 1) {
      _memcpy(param_1 + 0xcb,param_2 + 0xcb,0x301);
    }
    else {
      *(short *)(param_1 + 0xcb) = (short)param_2[0xcb];
      param_1[0xcc] = param_2[0xcc];
      *(char *)(param_1 + 0xcd) = (char)param_2[0xcd];
      param_1[0xce] = param_2[0xce];
      *(char *)(param_1 + 0xcf) = (char)param_2[0xcf];
      param_1[0xd0] = param_2[0xd0];
      param_1[0xd1] = lVar23;
      *(char *)(param_1 + 0xd3) = (char)param_2[0xd3];
      param_1[0xd2] = param_2[0xd2];
      *(undefined1 *)((long)param_1 + 0x699) = *(undefined1 *)((long)param_2 + 0x699);
      param_1[0xd4] = param_2[0xd4];
      lVar13 = param_2[0xd5];
      param_1[0xd5] = lVar13;
      *(short *)(param_1 + 0xd6) = (short)param_2[0xd6];
      param_1[0xd7] = param_2[0xd7];
      *(char *)(param_1 + 0xd8) = (char)param_2[0xd8];
      param_1[0xd9] = param_2[0xd9];
      *(char *)(param_1 + 0xda) = (char)param_2[0xda];
      lVar23 = param_2[0xdb];
      *(char *)(param_1 + 0xdc) = (char)param_2[0xdc];
      param_1[0xdb] = lVar23;
      *(undefined1 *)((long)param_1 + 0x6e1) = *(undefined1 *)((long)param_2 + 0x6e1);
      lVar23 = param_2[0xe8];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar13);
      if (lVar23 == 1) {
        _memcpy(param_1 + 0xdd,param_2 + 0xdd,0x101);
      }
      else {
        param_1[0xdd] = param_2[0xdd];
        *(char *)(param_1 + 0xde) = (char)param_2[0xde];
        param_1[0xdf] = param_2[0xdf];
        *(char *)(param_1 + 0xe0) = (char)param_2[0xe0];
        param_1[0xe1] = param_2[0xe1];
        *(char *)(param_1 + 0xe2) = (char)param_2[0xe2];
        *(char *)(param_1 + 0xe4) = (char)param_2[0xe4];
        param_1[0xe3] = param_2[0xe3];
        lVar13 = param_2[0xe5];
        *(char *)(param_1 + 0xe6) = (char)param_2[0xe6];
        param_1[0xe5] = lVar13;
        *(undefined1 *)((long)param_1 + 0x731) = *(undefined1 *)((long)param_2 + 0x731);
        param_1[0xe7] = param_2[0xe7];
        param_1[0xe8] = lVar23;
        param_1[0xe9] = param_2[0xe9];
        lVar15 = param_2[0xea];
        param_1[0xea] = lVar15;
        param_1[0xeb] = param_2[0xeb];
        *(char *)(param_1 + 0xec) = (char)param_2[0xec];
        *(char *)(param_1 + 0xee) = (char)param_2[0xee];
        param_1[0xed] = param_2[0xed];
        *(char *)(param_1 + 0xf0) = (char)param_2[0xf0];
        param_1[0xef] = param_2[0xef];
        *(char *)(param_1 + 0xf2) = (char)param_2[0xf2];
        param_1[0xf1] = param_2[0xf1];
        *(char *)(param_1 + 0xf4) = (char)param_2[0xf4];
        param_1[0xf3] = param_2[0xf3];
        param_1[0xf5] = param_2[0xf5];
        lVar16 = param_2[0xf6];
        param_1[0xf6] = lVar16;
        lVar13 = param_2[0xf7];
        *(char *)(param_1 + 0xf8) = (char)param_2[0xf8];
        param_1[0xf7] = lVar13;
        lVar13 = param_2[0xf9];
        *(char *)(param_1 + 0xfa) = (char)param_2[0xfa];
        param_1[0xf9] = lVar13;
        param_1[0xfb] = param_2[0xfb];
        lVar13 = param_2[0xfc];
        param_1[0xfc] = lVar13;
        *(char *)(param_1 + 0xfd) = (char)param_2[0xfd];
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar15);
        _swift_bridgeObjectRetain(lVar16);
        _swift_bridgeObjectRetain(lVar13);
      }
      *(undefined1 *)((long)param_1 + 0x7e9) = *(undefined1 *)((long)param_2 + 0x7e9);
      param_1[0xfe] = param_2[0xfe];
      param_1[0xff] = param_2[0xff];
      *(char *)(param_1 + 0x100) = (char)param_2[0x100];
      if (param_2[0x101] == 1) {
        lVar23 = param_2[0x101];
        param_1[0x102] = param_2[0x102];
        param_1[0x101] = lVar23;
        param_1[0x103] = param_2[0x103];
      }
      else {
        param_1[0x101] = param_2[0x101];
        lVar23 = param_2[0x102];
        param_1[0x102] = lVar23;
        lVar13 = param_2[0x103];
        param_1[0x103] = lVar13;
        _objc_retain();
        _objc_retain(lVar23);
        _objc_retain(lVar13);
      }
      *(char *)(param_1 + 0x104) = (char)param_2[0x104];
      param_1[0x105] = param_2[0x105];
      *(char *)(param_1 + 0x106) = (char)param_2[0x106];
      param_1[0x107] = param_2[0x107];
      *(char *)(param_1 + 0x108) = (char)param_2[0x108];
      lVar23 = param_2[0x10a];
      if (lVar23 == 1) {
        lVar23 = param_2[0x109];
        lVar15 = param_2[0x10c];
        lVar13 = param_2[0x10b];
        param_1[0x10a] = param_2[0x10a];
        param_1[0x109] = lVar23;
        param_1[0x10c] = lVar15;
        param_1[0x10b] = lVar13;
        lVar23 = param_2[0x10d];
        param_1[0x10e] = param_2[0x10e];
        param_1[0x10d] = lVar23;
      }
      else {
        *(short *)(param_1 + 0x109) = (short)param_2[0x109];
        param_1[0x10a] = lVar23;
        lVar23 = param_2[0x10b];
        param_1[0x10b] = lVar23;
        lVar13 = param_2[0x10c];
        param_1[0x10c] = lVar13;
        *(int *)(param_1 + 0x10d) = (int)param_2[0x10d];
        lVar15 = param_2[0x10e];
        param_1[0x10e] = lVar15;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
        _swift_bridgeObjectRetain(lVar15);
      }
      param_1[0x10f] = param_2[0x10f];
      *(char *)(param_1 + 0x110) = (char)param_2[0x110];
      param_1[0x111] = param_2[0x111];
      *(short *)(param_1 + 0x112) = (short)param_2[0x112];
      if (param_2[0x113] == 0) {
        lVar23 = param_2[0x113];
        param_1[0x114] = param_2[0x114];
        param_1[0x113] = lVar23;
        param_1[0x115] = param_2[0x115];
      }
      else {
        param_1[0x113] = param_2[0x113];
        lVar23 = param_2[0x114];
        param_1[0x114] = lVar23;
        lVar13 = param_2[0x115];
        param_1[0x115] = lVar13;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
      }
      param_1[0x116] = param_2[0x116];
      param_1[0x117] = param_2[0x117];
      lVar23 = param_2[0x118];
      param_1[0x118] = lVar23;
      *(char *)(param_1 + 0x119) = (char)param_2[0x119];
      *(undefined2 *)((long)param_1 + 0x8c9) = *(undefined2 *)((long)param_2 + 0x8c9);
      param_1[0x11a] = param_2[0x11a];
      *(char *)(param_1 + 0x11b) = (char)param_2[0x11b];
      lVar13 = param_2[0x11c];
      param_1[0x11d] = param_2[0x11d];
      param_1[0x11c] = lVar13;
      param_1[0x11e] = param_2[0x11e];
      *(short *)(param_1 + 0x11f) = (short)param_2[0x11f];
      param_1[0x120] = param_2[0x120];
      *(int *)(param_1 + 0x121) = (int)param_2[0x121];
      param_1[0x122] = param_2[0x122];
      *(char *)(param_1 + 0x123) = (char)param_2[0x123];
      param_1[0x124] = param_2[0x124];
      *(char *)(param_1 + 0x125) = (char)param_2[0x125];
      *(char *)(param_1 + 0x127) = (char)param_2[0x127];
      param_1[0x126] = param_2[0x126];
      param_1[0x128] = param_2[0x128];
      lVar13 = param_2[0x129];
      param_1[0x129] = lVar13;
      *(char *)(param_1 + 299) = (char)param_2[299];
      param_1[0x12a] = param_2[0x12a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar23);
      _swift_bridgeObjectRetain(lVar13);
    }
    if (param_2[300] == 1) {
      lVar23 = param_2[300];
      param_1[0x12d] = param_2[0x12d];
      param_1[300] = lVar23;
    }
    else {
      param_1[300] = param_2[300];
      param_1[0x12d] = param_2[0x12d];
      _swift_bridgeObjectRetain();
    }
    lVar23 = param_2[0x12e];
    if (lVar23 != 1) {
      _swift_bridgeObjectRetain();
    }
    param_1[0x12e] = lVar23;
    param_1[0x12f] = lVar26;
    *(short *)(param_1 + 0x130) = (short)param_2[0x130];
    lVar23 = param_2[0x131];
    _objc_retain(lVar26);
    if (lVar23 == 0) {
      lVar23 = param_2[0x135];
      lVar13 = param_2[0x138];
      lVar26 = param_2[0x137];
      param_1[0x136] = param_2[0x136];
      param_1[0x135] = lVar23;
      param_1[0x138] = lVar13;
      param_1[0x137] = lVar26;
      lVar23 = param_2[0x139];
      param_1[0x13a] = param_2[0x13a];
      param_1[0x139] = lVar23;
      lVar13 = param_2[0x131];
      lVar26 = param_2[0x134];
      lVar23 = param_2[0x133];
      param_1[0x132] = param_2[0x132];
      param_1[0x131] = lVar13;
      param_1[0x134] = lVar26;
      param_1[0x133] = lVar23;
LAB_10423e570:
      uVar25 = param_2[0x13c];
      if (uVar25 >> 0x3c < 0xf) {
        lVar23 = param_2[0x13b];
        func_0x00010006c00c(lVar23,uVar25);
        param_1[0x13b] = lVar23;
        param_1[0x13c] = uVar25;
      }
      else {
        lVar23 = param_2[0x13b];
        param_1[0x13c] = param_2[0x13c];
        param_1[0x13b] = lVar23;
      }
    }
    else {
      if (lVar23 != 1) {
        param_1[0x131] = lVar23;
        lVar26 = param_2[0x132];
        param_1[0x132] = lVar26;
        param_1[0x133] = param_2[0x133];
        *(char *)(param_1 + 0x134) = (char)param_2[0x134];
        param_1[0x135] = param_2[0x135];
        param_1[0x136] = param_2[0x136];
        uVar25 = param_2[0x138];
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar26);
        if (uVar25 >> 0x3c < 0xf) {
          lVar23 = param_2[0x137];
          func_0x00010006c00c(lVar23,uVar25);
          param_1[0x137] = lVar23;
          param_1[0x138] = uVar25;
        }
        else {
          lVar23 = param_2[0x137];
          param_1[0x138] = param_2[0x138];
          param_1[0x137] = lVar23;
        }
        param_1[0x139] = param_2[0x139];
        param_1[0x13a] = param_2[0x13a];
        goto LAB_10423e570;
      }
      lVar23 = param_2[0x135];
      lVar13 = param_2[0x138];
      lVar26 = param_2[0x137];
      param_1[0x136] = param_2[0x136];
      param_1[0x135] = lVar23;
      param_1[0x138] = lVar13;
      param_1[0x137] = lVar26;
      lVar23 = param_2[0x139];
      lVar13 = param_2[0x13c];
      lVar26 = param_2[0x13b];
      param_1[0x13a] = param_2[0x13a];
      param_1[0x139] = lVar23;
      param_1[0x13c] = lVar13;
      param_1[0x13b] = lVar26;
      lVar23 = param_2[0x131];
      lVar13 = param_2[0x134];
      lVar26 = param_2[0x133];
      param_1[0x132] = param_2[0x132];
      param_1[0x131] = lVar23;
      param_1[0x134] = lVar13;
      param_1[0x133] = lVar26;
    }
    lVar23 = param_2[0x141];
    if (lVar23 == 1) {
      lVar23 = param_2[0x14d];
      lVar13 = param_2[0x150];
      lVar26 = param_2[0x14f];
      param_1[0x14e] = param_2[0x14e];
      param_1[0x14d] = lVar23;
      param_1[0x150] = lVar13;
      param_1[0x14f] = lVar26;
      lVar23 = param_2[0x151];
      param_1[0x152] = param_2[0x152];
      param_1[0x151] = lVar23;
      uVar20 = *(undefined8 *)((long)param_2 + 0xa91);
      *(undefined8 *)((long)param_1 + 0xa99) = *(undefined8 *)((long)param_2 + 0xa99);
      *(undefined8 *)((long)param_1 + 0xa91) = uVar20;
      lVar23 = param_2[0x145];
      lVar13 = param_2[0x148];
      lVar26 = param_2[0x147];
      param_1[0x146] = param_2[0x146];
      param_1[0x145] = lVar23;
      param_1[0x148] = lVar13;
      param_1[0x147] = lVar26;
      lVar23 = param_2[0x149];
      lVar13 = param_2[0x14c];
      lVar26 = param_2[0x14b];
      param_1[0x14a] = param_2[0x14a];
      param_1[0x149] = lVar23;
      param_1[0x14c] = lVar13;
      param_1[0x14b] = lVar26;
      lVar23 = param_2[0x13d];
      lVar13 = param_2[0x140];
      lVar26 = param_2[0x13f];
      param_1[0x13e] = param_2[0x13e];
      param_1[0x13d] = lVar23;
      param_1[0x140] = lVar13;
      param_1[0x13f] = lVar26;
      lVar23 = param_2[0x141];
      lVar13 = param_2[0x144];
      lVar26 = param_2[0x143];
      param_1[0x142] = param_2[0x142];
      param_1[0x141] = lVar23;
      param_1[0x144] = lVar13;
      param_1[0x143] = lVar26;
    }
    else {
      *(short *)(param_1 + 0x13d) = (short)param_2[0x13d];
      param_1[0x13e] = param_2[0x13e];
      *(char *)(param_1 + 0x13f) = (char)param_2[0x13f];
      param_1[0x140] = param_2[0x140];
      param_1[0x141] = lVar23;
      lVar23 = param_2[0x14a];
      _swift_bridgeObjectRetain();
      if (lVar23 == 1) {
        lVar23 = param_2[0x14a];
        lVar13 = param_2[0x14d];
        lVar26 = param_2[0x14c];
        param_1[0x14b] = param_2[0x14b];
        param_1[0x14a] = lVar23;
        param_1[0x14d] = lVar13;
        param_1[0x14c] = lVar26;
        *(char *)(param_1 + 0x14e) = (char)param_2[0x14e];
        lVar23 = param_2[0x142];
        lVar13 = param_2[0x145];
        lVar26 = param_2[0x144];
        param_1[0x143] = param_2[0x143];
        param_1[0x142] = lVar23;
        param_1[0x145] = lVar13;
        param_1[0x144] = lVar26;
        lVar13 = param_2[0x146];
        lVar26 = param_2[0x149];
        lVar23 = param_2[0x148];
        param_1[0x147] = param_2[0x147];
        param_1[0x146] = lVar13;
        param_1[0x149] = lVar26;
        param_1[0x148] = lVar23;
      }
      else {
        param_1[0x142] = param_2[0x142];
        *(char *)(param_1 + 0x143) = (char)param_2[0x143];
        param_1[0x144] = param_2[0x144];
        *(char *)(param_1 + 0x145) = (char)param_2[0x145];
        param_1[0x146] = param_2[0x146];
        *(char *)(param_1 + 0x147) = (char)param_2[0x147];
        *(char *)(param_1 + 0x149) = (char)param_2[0x149];
        param_1[0x148] = param_2[0x148];
        param_1[0x14a] = lVar23;
        *(char *)(param_1 + 0x14c) = (char)param_2[0x14c];
        param_1[0x14b] = param_2[0x14b];
        *(char *)(param_1 + 0x14e) = (char)param_2[0x14e];
        param_1[0x14d] = param_2[0x14d];
        _objc_retain(lVar23);
      }
      param_1[0x14f] = param_2[0x14f];
      *(char *)(param_1 + 0x150) = (char)param_2[0x150];
      param_1[0x151] = param_2[0x151];
      *(char *)(param_1 + 0x152) = (char)param_2[0x152];
      param_1[0x153] = param_2[0x153];
      *(char *)(param_1 + 0x154) = (char)param_2[0x154];
    }
    if (param_2[0x155] == 1) {
      lVar23 = param_2[0x155];
      param_1[0x156] = param_2[0x156];
      param_1[0x155] = lVar23;
      *(char *)(param_1 + 0x157) = (char)param_2[0x157];
    }
    else {
      param_1[0x155] = param_2[0x155];
      param_1[0x156] = param_2[0x156];
      *(char *)(param_1 + 0x157) = (char)param_2[0x157];
      _swift_bridgeObjectRetain();
    }
    lVar23 = param_2[0x15a];
    if (lVar23 == 1) {
      lVar23 = param_2[0x158];
      param_1[0x159] = param_2[0x159];
      param_1[0x158] = lVar23;
      param_1[0x15a] = param_2[0x15a];
    }
    else {
      lVar26 = param_2[0x158];
      param_1[0x159] = param_2[0x159];
      param_1[0x158] = lVar26;
      param_1[0x15a] = lVar23;
      _swift_bridgeObjectRetain();
    }
    param_1[0x15b] = param_2[0x15b];
    param_1[0x15c] = param_2[0x15c];
    *(short *)(param_1 + 0x15d) = (short)param_2[0x15d];
    _objc_retain();
  }
  lVar23 = param_2[0x15f];
  if (lVar23 == 1) {
    _memcpy(param_1 + 0x15e,param_2 + 0x15e,0xb78);
    goto LAB_10423f8e0;
  }
  param_1[0x15e] = param_2[0x15e];
  param_1[0x15f] = lVar23;
  param_1[0x160] = param_2[0x160];
  *(char *)(param_1 + 0x161) = (char)param_2[0x161];
  param_1[0x162] = param_2[0x162];
  lVar23 = param_2[0x163];
  param_1[0x163] = lVar23;
  lVar26 = param_2[0x164];
  param_1[0x165] = param_2[0x165];
  param_1[0x164] = lVar26;
  lVar26 = param_2[0x166];
  param_1[0x167] = param_2[0x167];
  param_1[0x166] = lVar26;
  lVar26 = param_2[0x168];
  param_1[0x169] = param_2[0x169];
  param_1[0x168] = lVar26;
  lVar13 = param_2[0x16a];
  param_1[0x16a] = lVar13;
  *(char *)(param_1 + 0x16b) = (char)param_2[0x16b];
  lVar26 = param_2[0x294];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(lVar23);
  _swift_bridgeObjectRetain(lVar13);
  if ((lVar26 == 1) || (lVar26 == 2)) {
    _memcpy(param_1 + 0x16c,param_2 + 0x16c,0xab2);
  }
  else {
    param_1[0x16c] = param_2[0x16c];
    lVar23 = param_2[0x16e];
    if (lVar23 == 1) {
      _memcpy(param_1 + 0x16d,param_2 + 0x16d,0x5a8);
    }
    else {
      param_1[0x16d] = param_2[0x16d];
      param_1[0x16e] = lVar23;
      param_1[0x16f] = param_2[0x16f];
      lVar23 = param_2[0x170];
      param_1[0x171] = param_2[0x171];
      param_1[0x170] = lVar23;
      lVar23 = param_2[0x172];
      param_1[0x173] = param_2[0x173];
      param_1[0x172] = lVar23;
      lVar23 = param_2[0x174];
      param_1[0x175] = param_2[0x175];
      param_1[0x174] = lVar23;
      param_1[0x176] = param_2[0x176];
      lVar13 = param_2[0x177];
      param_1[0x177] = lVar13;
      lVar23 = param_2[0x178];
      param_1[0x179] = param_2[0x179];
      param_1[0x178] = lVar23;
      param_1[0x17a] = param_2[0x17a];
      lVar15 = param_2[0x17b];
      param_1[0x17b] = lVar15;
      *(char *)(param_1 + 0x17c) = (char)param_2[0x17c];
      lVar23 = param_2[0x17e];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar13);
      _swift_bridgeObjectRetain(lVar15);
      if (lVar23 == 0) {
        lVar23 = param_2[0x189];
        lVar15 = param_2[0x18c];
        lVar13 = param_2[0x18b];
        param_1[0x18a] = param_2[0x18a];
        param_1[0x189] = lVar23;
        param_1[0x18c] = lVar15;
        param_1[0x18b] = lVar13;
        param_1[0x18d] = param_2[0x18d];
        lVar23 = param_2[0x181];
        lVar15 = param_2[0x184];
        lVar13 = param_2[0x183];
        param_1[0x182] = param_2[0x182];
        param_1[0x181] = lVar23;
        param_1[0x184] = lVar15;
        param_1[0x183] = lVar13;
        lVar15 = param_2[0x185];
        lVar13 = param_2[0x188];
        lVar23 = param_2[0x187];
        param_1[0x186] = param_2[0x186];
        param_1[0x185] = lVar15;
        param_1[0x188] = lVar13;
        param_1[0x187] = lVar23;
        lVar15 = param_2[0x17d];
        lVar13 = param_2[0x180];
        lVar23 = param_2[0x17f];
        param_1[0x17e] = param_2[0x17e];
        param_1[0x17d] = lVar15;
        param_1[0x180] = lVar13;
        param_1[0x17f] = lVar23;
      }
      else {
        param_1[0x17d] = param_2[0x17d];
        param_1[0x17e] = lVar23;
        param_1[0x17f] = param_2[0x17f];
        lVar13 = param_2[0x180];
        param_1[0x181] = param_2[0x181];
        param_1[0x180] = lVar13;
        lVar13 = param_2[0x182];
        param_1[0x183] = param_2[0x183];
        param_1[0x182] = lVar13;
        lVar13 = param_2[0x184];
        param_1[0x185] = param_2[0x185];
        param_1[0x184] = lVar13;
        lVar13 = param_2[0x186];
        param_1[0x187] = param_2[0x187];
        param_1[0x186] = lVar13;
        *(char *)(param_1 + 0x188) = (char)param_2[0x188];
        param_1[0x189] = param_2[0x189];
        lVar13 = param_2[0x18a];
        param_1[0x18b] = param_2[0x18b];
        param_1[0x18a] = lVar13;
        lVar13 = param_2[0x18c];
        param_1[0x18c] = lVar13;
        lVar15 = param_2[0x18d];
        param_1[0x18d] = lVar15;
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
        _swift_bridgeObjectRetain(lVar15);
      }
      *(char *)(param_1 + 0x18e) = (char)param_2[0x18e];
      lVar23 = param_2[399];
      param_1[400] = param_2[400];
      param_1[399] = lVar23;
      uVar20 = *(undefined8 *)((long)param_2 + 0xc84);
      *(undefined8 *)((long)param_1 + 0xc8c) = *(undefined8 *)((long)param_2 + 0xc8c);
      *(undefined8 *)((long)param_1 + 0xc84) = uVar20;
      param_1[0x193] = param_2[0x193];
      lVar23 = param_2[0x19e];
      param_1[0x19f] = param_2[0x19f];
      param_1[0x19e] = lVar23;
      lVar23 = param_2[0x1a0];
      param_1[0x1a1] = param_2[0x1a1];
      param_1[0x1a0] = lVar23;
      lVar23 = param_2[0x1a2];
      param_1[0x1a3] = param_2[0x1a3];
      param_1[0x1a2] = lVar23;
      *(char *)(param_1 + 0x1a4) = (char)param_2[0x1a4];
      lVar23 = param_2[0x196];
      param_1[0x197] = param_2[0x197];
      param_1[0x196] = lVar23;
      lVar23 = param_2[0x198];
      param_1[0x199] = param_2[0x199];
      param_1[0x198] = lVar23;
      lVar23 = param_2[0x19a];
      param_1[0x19b] = param_2[0x19b];
      param_1[0x19a] = lVar23;
      lVar23 = param_2[0x19c];
      param_1[0x19d] = param_2[0x19d];
      param_1[0x19c] = lVar23;
      lVar23 = param_2[0x194];
      param_1[0x195] = param_2[0x195];
      param_1[0x194] = lVar23;
      lVar23 = param_2[0x1ad];
      lVar15 = param_2[0x1b0];
      lVar13 = param_2[0x1af];
      param_1[0x1ae] = param_2[0x1ae];
      param_1[0x1ad] = lVar23;
      param_1[0x1b0] = lVar15;
      param_1[0x1af] = lVar13;
      lVar23 = param_2[0x1b1];
      param_1[0x1b2] = param_2[0x1b2];
      param_1[0x1b1] = lVar23;
      uVar20 = *(undefined8 *)((long)param_2 + 0xd91);
      *(undefined8 *)((long)param_1 + 0xd99) = *(undefined8 *)((long)param_2 + 0xd99);
      *(undefined8 *)((long)param_1 + 0xd91) = uVar20;
      lVar23 = param_2[0x1a5];
      lVar15 = param_2[0x1a8];
      lVar13 = param_2[0x1a7];
      param_1[0x1a6] = param_2[0x1a6];
      param_1[0x1a5] = lVar23;
      param_1[0x1a8] = lVar15;
      param_1[0x1a7] = lVar13;
      lVar23 = param_2[0x1a9];
      lVar15 = param_2[0x1ac];
      lVar13 = param_2[0x1ab];
      param_1[0x1aa] = param_2[0x1aa];
      param_1[0x1a9] = lVar23;
      param_1[0x1ac] = lVar15;
      param_1[0x1ab] = lVar13;
      lVar13 = param_2[0x1b6];
      lVar23 = param_2[0x1b5];
      lVar16 = param_2[0x1b8];
      lVar15 = param_2[0x1b7];
      lVar17 = param_2[0x1b9];
      lVar24 = param_2[0x1bc];
      lVar18 = param_2[0x1bb];
      param_1[0x1ba] = param_2[0x1ba];
      param_1[0x1b9] = lVar17;
      param_1[0x1bc] = lVar24;
      param_1[0x1bb] = lVar18;
      param_1[0x1b6] = lVar13;
      param_1[0x1b5] = lVar23;
      param_1[0x1b8] = lVar16;
      param_1[0x1b7] = lVar15;
      lVar13 = param_2[0x1be];
      lVar23 = param_2[0x1bd];
      lVar16 = param_2[0x1c0];
      lVar15 = param_2[0x1bf];
      lVar18 = param_2[0x1c2];
      lVar17 = param_2[0x1c1];
      uVar20 = *(undefined8 *)((long)param_2 + 0xe12);
      *(undefined8 *)((long)param_1 + 0xe1a) = *(undefined8 *)((long)param_2 + 0xe1a);
      *(undefined8 *)((long)param_1 + 0xe12) = uVar20;
      param_1[0x1c0] = lVar16;
      param_1[0x1bf] = lVar15;
      param_1[0x1c2] = lVar18;
      param_1[0x1c1] = lVar17;
      param_1[0x1be] = lVar13;
      param_1[0x1bd] = lVar23;
      param_1[0x1c5] = param_2[0x1c5];
      param_1[0x1c6] = param_2[0x1c6];
      *(char *)(param_1 + 0x1c7) = (char)param_2[0x1c7];
      *(undefined1 *)((long)param_1 + 0xe39) = *(undefined1 *)((long)param_2 + 0xe39);
      lVar23 = param_2[0x1c8];
      param_1[0x1c9] = param_2[0x1c9];
      param_1[0x1c8] = lVar23;
      *(char *)(param_1 + 0x1ca) = (char)param_2[0x1ca];
      lVar13 = param_2[0x1cb];
      param_1[0x1cb] = lVar13;
      *(char *)(param_1 + 0x1cc) = (char)param_2[0x1cc];
      *(undefined1 *)((long)param_1 + 0xe61) = *(undefined1 *)((long)param_2 + 0xe61);
      lVar23 = param_2[0x1d0];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar13);
      if (lVar23 == 1) {
        lVar23 = param_2[0x1cd];
        lVar15 = param_2[0x1d0];
        lVar13 = param_2[0x1cf];
        param_1[0x1ce] = param_2[0x1ce];
        param_1[0x1cd] = lVar23;
        param_1[0x1d0] = lVar15;
        param_1[0x1cf] = lVar13;
        lVar23 = param_2[0x1d1];
        param_1[0x1d2] = param_2[0x1d2];
        param_1[0x1d1] = lVar23;
      }
      else {
        *(char *)(param_1 + 0x1cd) = (char)param_2[0x1cd];
        lVar13 = param_2[0x1ce];
        param_1[0x1cf] = param_2[0x1cf];
        param_1[0x1ce] = lVar13;
        param_1[0x1d0] = lVar23;
        *(char *)(param_1 + 0x1d1) = (char)param_2[0x1d1];
        lVar13 = param_2[0x1d2];
        param_1[0x1d2] = lVar13;
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
      }
      *(char *)(param_1 + 0x1d3) = (char)param_2[0x1d3];
      param_1[0x1d4] = param_2[0x1d4];
      param_1[0x1d5] = param_2[0x1d5];
      lVar18 = param_2[0x1d6];
      param_1[0x1d6] = lVar18;
      lVar17 = param_2[0x1d7];
      param_1[0x1d7] = lVar17;
      lVar13 = param_2[0x1d8];
      param_1[0x1d8] = lVar13;
      param_1[0x1d9] = param_2[0x1d9];
      *(char *)(param_1 + 0x1da) = (char)param_2[0x1da];
      lVar23 = param_2[0x1db];
      *(char *)(param_1 + 0x1dc) = (char)param_2[0x1dc];
      param_1[0x1db] = lVar23;
      param_1[0x1dd] = param_2[0x1dd];
      *(char *)(param_1 + 0x1de) = (char)param_2[0x1de];
      lVar23 = param_2[0x1df];
      param_1[0x1df] = lVar23;
      lVar24 = param_2[0x1e0];
      param_1[0x1e0] = lVar24;
      lVar15 = param_2[0x1e5];
      lVar36 = param_2[0x1e8];
      lVar16 = param_2[0x1e7];
      param_1[0x1e6] = param_2[0x1e6];
      param_1[0x1e5] = lVar15;
      param_1[0x1e8] = lVar36;
      param_1[0x1e7] = lVar16;
      lVar15 = param_2[0x1e9];
      lVar36 = param_2[0x1ec];
      lVar16 = param_2[0x1eb];
      param_1[0x1ea] = param_2[0x1ea];
      param_1[0x1e9] = lVar15;
      param_1[0x1ec] = lVar36;
      param_1[0x1eb] = lVar16;
      lVar15 = param_2[0x1e1];
      lVar36 = param_2[0x1e4];
      lVar16 = param_2[0x1e3];
      param_1[0x1e2] = param_2[0x1e2];
      param_1[0x1e1] = lVar15;
      param_1[0x1e4] = lVar36;
      param_1[0x1e3] = lVar16;
      param_1[0x1ed] = param_2[0x1ed];
      *(char *)(param_1 + 0x1ef) = (char)param_2[0x1ef];
      param_1[0x1ee] = param_2[0x1ee];
      lVar15 = param_2[0x1f0];
      param_1[0x1f1] = param_2[0x1f1];
      param_1[0x1f0] = lVar15;
      lVar15 = param_2[0x1f2];
      param_1[499] = param_2[499];
      param_1[0x1f2] = lVar15;
      lVar15 = param_2[500];
      param_1[0x1f5] = param_2[0x1f5];
      param_1[500] = lVar15;
      lVar15 = param_2[0x1f6];
      param_1[0x1f6] = lVar15;
      lVar16 = param_2[0x203];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(lVar17);
      _swift_bridgeObjectRetain(lVar13);
      _swift_bridgeObjectRetain(lVar23);
      _swift_bridgeObjectRetain(lVar24);
      _swift_bridgeObjectRetain(lVar15);
      if (lVar16 == 1) {
        lVar23 = param_2[0x1ff];
        lVar15 = param_2[0x202];
        lVar13 = param_2[0x201];
        param_1[0x200] = param_2[0x200];
        param_1[0x1ff] = lVar23;
        param_1[0x202] = lVar15;
        param_1[0x201] = lVar13;
        lVar23 = param_2[0x203];
        param_1[0x204] = param_2[0x204];
        param_1[0x203] = lVar23;
        *(short *)(param_1 + 0x205) = (short)param_2[0x205];
        lVar23 = param_2[0x1f7];
        lVar15 = param_2[0x1fa];
        lVar13 = param_2[0x1f9];
        param_1[0x1f8] = param_2[0x1f8];
        param_1[0x1f7] = lVar23;
        param_1[0x1fa] = lVar15;
        param_1[0x1f9] = lVar13;
        lVar23 = param_2[0x1fb];
        lVar15 = param_2[0x1fe];
        lVar13 = param_2[0x1fd];
        param_1[0x1fc] = param_2[0x1fc];
        param_1[0x1fb] = lVar23;
        param_1[0x1fe] = lVar15;
        param_1[0x1fd] = lVar13;
      }
      else {
        *(char *)(param_1 + 0x1f7) = (char)param_2[0x1f7];
        param_1[0x1f8] = param_2[0x1f8];
        *(char *)(param_1 + 0x1f9) = (char)param_2[0x1f9];
        param_1[0x1fa] = param_2[0x1fa];
        *(char *)(param_1 + 0x1fb) = (char)param_2[0x1fb];
        param_1[0x1fc] = param_2[0x1fc];
        *(char *)(param_1 + 0x1fd) = (char)param_2[0x1fd];
        *(char *)(param_1 + 0x1ff) = (char)param_2[0x1ff];
        param_1[0x1fe] = param_2[0x1fe];
        param_1[0x200] = param_2[0x200];
        *(char *)(param_1 + 0x201) = (char)param_2[0x201];
        param_1[0x202] = param_2[0x202];
        param_1[0x203] = lVar16;
        param_1[0x204] = param_2[0x204];
        *(char *)(param_1 + 0x205) = (char)param_2[0x205];
        *(undefined1 *)((long)param_1 + 0x1029) = *(undefined1 *)((long)param_2 + 0x1029);
        _swift_bridgeObjectRetain(lVar16);
      }
      *(undefined1 *)((long)param_1 + 0x102a) = *(undefined1 *)((long)param_2 + 0x102a);
      param_1[0x206] = param_2[0x206];
      *(short *)(param_1 + 0x20f) = (short)param_2[0x20f];
      lVar23 = param_2[0x20b];
      lVar15 = param_2[0x20e];
      lVar13 = param_2[0x20d];
      param_1[0x20c] = param_2[0x20c];
      param_1[0x20b] = lVar23;
      param_1[0x20e] = lVar15;
      param_1[0x20d] = lVar13;
      lVar15 = param_2[0x207];
      lVar13 = param_2[0x20a];
      lVar23 = param_2[0x209];
      param_1[0x208] = param_2[0x208];
      param_1[0x207] = lVar15;
      param_1[0x20a] = lVar13;
      param_1[0x209] = lVar23;
      lVar23 = param_2[0x211];
      _swift_bridgeObjectRetain();
      if (lVar23 == 0) {
        lVar23 = param_2[0x210];
        lVar15 = param_2[0x213];
        lVar13 = param_2[0x212];
        param_1[0x211] = param_2[0x211];
        param_1[0x210] = lVar23;
        param_1[0x213] = lVar15;
        param_1[0x212] = lVar13;
        param_1[0x214] = param_2[0x214];
      }
      else {
        param_1[0x210] = param_2[0x210];
        param_1[0x211] = lVar23;
        param_1[0x212] = param_2[0x212];
        lVar13 = param_2[0x213];
        param_1[0x213] = lVar13;
        param_1[0x214] = param_2[0x214];
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
      }
      lVar23 = param_2[0x215];
      param_1[0x216] = param_2[0x216];
      param_1[0x215] = lVar23;
      *(char *)(param_1 + 0x217) = (char)param_2[0x217];
      param_1[0x218] = param_2[0x218];
      param_1[0x219] = param_2[0x219];
      *(char *)(param_1 + 0x21a) = (char)param_2[0x21a];
      lVar23 = param_2[0x21b];
      param_1[0x21b] = lVar23;
      param_1[0x21c] = param_2[0x21c];
      *(char *)(param_1 + 0x21d) = (char)param_2[0x21d];
      lVar13 = param_2[0x21e];
      param_1[0x21e] = lVar13;
      lVar15 = param_2[0x21f];
      param_1[0x21f] = lVar15;
      lVar16 = param_2[0x220];
      param_1[0x220] = lVar16;
      lVar17 = param_2[0x221];
      param_1[0x221] = lVar17;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar23);
      _objc_retain(lVar13);
      _objc_retain(lVar15);
      _objc_retain(lVar16);
      _swift_bridgeObjectRetain(lVar17);
    }
    lVar23 = param_2[0x226];
    if (lVar23 == 1) {
      lVar23 = param_2[0x22a];
      lVar15 = param_2[0x22d];
      lVar13 = param_2[0x22c];
      param_1[0x22b] = param_2[0x22b];
      param_1[0x22a] = lVar23;
      param_1[0x22d] = lVar15;
      param_1[0x22c] = lVar13;
      uVar20 = *(undefined8 *)((long)param_2 + 0x1169);
      *(undefined8 *)((long)param_1 + 0x1171) = *(undefined8 *)((long)param_2 + 0x1171);
      *(undefined8 *)((long)param_1 + 0x1169) = uVar20;
      lVar23 = param_2[0x222];
      lVar15 = param_2[0x225];
      lVar13 = param_2[0x224];
      param_1[0x223] = param_2[0x223];
      param_1[0x222] = lVar23;
      param_1[0x225] = lVar15;
      param_1[0x224] = lVar13;
      lVar15 = param_2[0x226];
      lVar13 = param_2[0x229];
      lVar23 = param_2[0x228];
      param_1[0x227] = param_2[0x227];
      param_1[0x226] = lVar15;
      param_1[0x229] = lVar13;
      param_1[0x228] = lVar23;
    }
    else {
      lVar13 = param_2[0x222];
      param_1[0x223] = param_2[0x223];
      param_1[0x222] = lVar13;
      *(short *)(param_1 + 0x224) = (short)param_2[0x224];
      param_1[0x225] = param_2[0x225];
      param_1[0x226] = lVar23;
      *(char *)(param_1 + 0x227) = (char)param_2[0x227];
      param_1[0x228] = param_2[0x228];
      *(char *)(param_1 + 0x229) = (char)param_2[0x229];
      param_1[0x22a] = param_2[0x22a];
      *(char *)(param_1 + 0x22b) = (char)param_2[0x22b];
      lVar23 = param_2[0x22c];
      *(char *)(param_1 + 0x22d) = (char)param_2[0x22d];
      param_1[0x22c] = lVar23;
      param_1[0x22e] = param_2[0x22e];
      *(char *)(param_1 + 0x22f) = (char)param_2[0x22f];
      _swift_bridgeObjectRetain();
    }
    lVar23 = param_2[0x236];
    if (lVar23 == 1) {
      _memcpy(param_1 + 0x230,param_2 + 0x230,0x301);
    }
    else {
      *(short *)(param_1 + 0x230) = (short)param_2[0x230];
      param_1[0x231] = param_2[0x231];
      *(char *)(param_1 + 0x232) = (char)param_2[0x232];
      param_1[0x233] = param_2[0x233];
      *(char *)(param_1 + 0x234) = (char)param_2[0x234];
      param_1[0x235] = param_2[0x235];
      param_1[0x236] = lVar23;
      param_1[0x237] = param_2[0x237];
      *(char *)(param_1 + 0x238) = (char)param_2[0x238];
      *(undefined1 *)((long)param_1 + 0x11c1) = *(undefined1 *)((long)param_2 + 0x11c1);
      param_1[0x239] = param_2[0x239];
      lVar13 = param_2[0x23a];
      param_1[0x23a] = lVar13;
      *(short *)(param_1 + 0x23b) = (short)param_2[0x23b];
      param_1[0x23c] = param_2[0x23c];
      *(char *)(param_1 + 0x23d) = (char)param_2[0x23d];
      param_1[0x23e] = param_2[0x23e];
      *(char *)(param_1 + 0x23f) = (char)param_2[0x23f];
      lVar23 = param_2[0x240];
      *(char *)(param_1 + 0x241) = (char)param_2[0x241];
      param_1[0x240] = lVar23;
      *(undefined1 *)((long)param_1 + 0x1209) = *(undefined1 *)((long)param_2 + 0x1209);
      lVar23 = param_2[0x24d];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar13);
      if (lVar23 == 1) {
        _memcpy(param_1 + 0x242,param_2 + 0x242,0x101);
      }
      else {
        param_1[0x242] = param_2[0x242];
        *(char *)(param_1 + 0x243) = (char)param_2[0x243];
        param_1[0x244] = param_2[0x244];
        *(char *)(param_1 + 0x245) = (char)param_2[0x245];
        param_1[0x246] = param_2[0x246];
        *(char *)(param_1 + 0x247) = (char)param_2[0x247];
        param_1[0x248] = param_2[0x248];
        *(char *)(param_1 + 0x249) = (char)param_2[0x249];
        lVar13 = param_2[0x24a];
        *(char *)(param_1 + 0x24b) = (char)param_2[0x24b];
        param_1[0x24a] = lVar13;
        *(undefined1 *)((long)param_1 + 0x1259) = *(undefined1 *)((long)param_2 + 0x1259);
        param_1[0x24c] = param_2[0x24c];
        param_1[0x24d] = lVar23;
        param_1[0x24e] = param_2[0x24e];
        lVar15 = param_2[0x24f];
        param_1[0x24f] = lVar15;
        param_1[0x250] = param_2[0x250];
        *(char *)(param_1 + 0x251) = (char)param_2[0x251];
        *(char *)(param_1 + 0x253) = (char)param_2[0x253];
        param_1[0x252] = param_2[0x252];
        *(char *)(param_1 + 0x255) = (char)param_2[0x255];
        param_1[0x254] = param_2[0x254];
        *(char *)(param_1 + 599) = (char)param_2[599];
        param_1[0x256] = param_2[0x256];
        *(char *)(param_1 + 0x259) = (char)param_2[0x259];
        param_1[600] = param_2[600];
        param_1[0x25a] = param_2[0x25a];
        lVar16 = param_2[0x25b];
        param_1[0x25b] = lVar16;
        lVar13 = param_2[0x25c];
        *(char *)(param_1 + 0x25d) = (char)param_2[0x25d];
        param_1[0x25c] = lVar13;
        lVar13 = param_2[0x25e];
        *(char *)(param_1 + 0x25f) = (char)param_2[0x25f];
        param_1[0x25e] = lVar13;
        param_1[0x260] = param_2[0x260];
        lVar13 = param_2[0x261];
        param_1[0x261] = lVar13;
        *(char *)(param_1 + 0x262) = (char)param_2[0x262];
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar15);
        _swift_bridgeObjectRetain(lVar16);
        _swift_bridgeObjectRetain(lVar13);
      }
      *(undefined1 *)((long)param_1 + 0x1311) = *(undefined1 *)((long)param_2 + 0x1311);
      param_1[0x263] = param_2[0x263];
      param_1[0x264] = param_2[0x264];
      *(char *)(param_1 + 0x265) = (char)param_2[0x265];
      if (param_2[0x266] == 1) {
        lVar23 = param_2[0x266];
        param_1[0x267] = param_2[0x267];
        param_1[0x266] = lVar23;
        param_1[0x268] = param_2[0x268];
      }
      else {
        param_1[0x266] = param_2[0x266];
        lVar23 = param_2[0x267];
        param_1[0x267] = lVar23;
        lVar13 = param_2[0x268];
        param_1[0x268] = lVar13;
        _objc_retain();
        _objc_retain(lVar23);
        _objc_retain(lVar13);
      }
      *(char *)(param_1 + 0x269) = (char)param_2[0x269];
      param_1[0x26a] = param_2[0x26a];
      *(char *)(param_1 + 0x26b) = (char)param_2[0x26b];
      param_1[0x26c] = param_2[0x26c];
      *(char *)(param_1 + 0x26d) = (char)param_2[0x26d];
      lVar23 = param_2[0x26f];
      if (lVar23 == 1) {
        lVar23 = param_2[0x26e];
        lVar15 = param_2[0x271];
        lVar13 = param_2[0x270];
        param_1[0x26f] = param_2[0x26f];
        param_1[0x26e] = lVar23;
        param_1[0x271] = lVar15;
        param_1[0x270] = lVar13;
        lVar23 = param_2[0x272];
        param_1[0x273] = param_2[0x273];
        param_1[0x272] = lVar23;
      }
      else {
        *(short *)(param_1 + 0x26e) = (short)param_2[0x26e];
        param_1[0x26f] = lVar23;
        lVar23 = param_2[0x270];
        param_1[0x270] = lVar23;
        lVar13 = param_2[0x271];
        param_1[0x271] = lVar13;
        *(int *)(param_1 + 0x272) = (int)param_2[0x272];
        lVar15 = param_2[0x273];
        param_1[0x273] = lVar15;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
        _swift_bridgeObjectRetain(lVar15);
      }
      param_1[0x274] = param_2[0x274];
      *(char *)(param_1 + 0x275) = (char)param_2[0x275];
      param_1[0x276] = param_2[0x276];
      *(char *)(param_1 + 0x277) = (char)param_2[0x277];
      *(undefined1 *)((long)param_1 + 0x13b9) = *(undefined1 *)((long)param_2 + 0x13b9);
      if (param_2[0x278] == 0) {
        lVar23 = param_2[0x278];
        param_1[0x279] = param_2[0x279];
        param_1[0x278] = lVar23;
        param_1[0x27a] = param_2[0x27a];
      }
      else {
        param_1[0x278] = param_2[0x278];
        lVar23 = param_2[0x279];
        param_1[0x279] = lVar23;
        lVar13 = param_2[0x27a];
        param_1[0x27a] = lVar13;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar13);
      }
      param_1[0x27b] = param_2[0x27b];
      param_1[0x27c] = param_2[0x27c];
      lVar23 = param_2[0x27d];
      param_1[0x27d] = lVar23;
      *(char *)(param_1 + 0x27e) = (char)param_2[0x27e];
      *(undefined2 *)((long)param_1 + 0x13f1) = *(undefined2 *)((long)param_2 + 0x13f1);
      param_1[0x27f] = param_2[0x27f];
      *(char *)(param_1 + 0x280) = (char)param_2[0x280];
      param_1[0x281] = param_2[0x281];
      lVar13 = param_2[0x282];
      param_1[0x283] = param_2[0x283];
      param_1[0x282] = lVar13;
      *(short *)(param_1 + 0x284) = (short)param_2[0x284];
      param_1[0x285] = param_2[0x285];
      *(int *)(param_1 + 0x286) = (int)param_2[0x286];
      param_1[0x287] = param_2[0x287];
      *(char *)(param_1 + 0x288) = (char)param_2[0x288];
      param_1[0x289] = param_2[0x289];
      *(char *)(param_1 + 0x28a) = (char)param_2[0x28a];
      *(char *)(param_1 + 0x28c) = (char)param_2[0x28c];
      param_1[0x28b] = param_2[0x28b];
      param_1[0x28d] = param_2[0x28d];
      lVar13 = param_2[0x28e];
      param_1[0x28e] = lVar13;
      *(char *)(param_1 + 0x290) = (char)param_2[0x290];
      param_1[0x28f] = param_2[0x28f];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar23);
      _swift_bridgeObjectRetain(lVar13);
    }
    if (param_2[0x291] == 1) {
      lVar23 = param_2[0x291];
      param_1[0x292] = param_2[0x292];
      param_1[0x291] = lVar23;
    }
    else {
      param_1[0x291] = param_2[0x291];
      param_1[0x292] = param_2[0x292];
      _swift_bridgeObjectRetain();
    }
    lVar23 = param_2[0x293];
    if (lVar23 != 1) {
      _swift_bridgeObjectRetain();
    }
    param_1[0x293] = lVar23;
    param_1[0x294] = lVar26;
    *(short *)(param_1 + 0x295) = (short)param_2[0x295];
    lVar23 = param_2[0x296];
    _objc_retain(lVar26);
    if (lVar23 == 0) {
      lVar23 = param_2[0x29a];
      lVar13 = param_2[0x29d];
      lVar26 = param_2[0x29c];
      param_1[0x29b] = param_2[0x29b];
      param_1[0x29a] = lVar23;
      param_1[0x29d] = lVar13;
      param_1[0x29c] = lVar26;
      lVar23 = param_2[0x29e];
      param_1[0x29f] = param_2[0x29f];
      param_1[0x29e] = lVar23;
      lVar13 = param_2[0x296];
      lVar26 = param_2[0x299];
      lVar23 = param_2[0x298];
      param_1[0x297] = param_2[0x297];
      param_1[0x296] = lVar13;
      param_1[0x299] = lVar26;
      param_1[0x298] = lVar23;
LAB_10423f5b8:
      uVar25 = param_2[0x2a1];
      if (uVar25 >> 0x3c < 0xf) {
        lVar23 = param_2[0x2a0];
        func_0x00010006c00c(lVar23,uVar25);
        param_1[0x2a0] = lVar23;
        param_1[0x2a1] = uVar25;
      }
      else {
        lVar23 = param_2[0x2a0];
        param_1[0x2a1] = param_2[0x2a1];
        param_1[0x2a0] = lVar23;
      }
    }
    else {
      if (lVar23 != 1) {
        param_1[0x296] = lVar23;
        lVar26 = param_2[0x297];
        param_1[0x297] = lVar26;
        param_1[0x298] = param_2[0x298];
        *(char *)(param_1 + 0x299) = (char)param_2[0x299];
        lVar13 = param_2[0x29a];
        param_1[0x29b] = param_2[0x29b];
        param_1[0x29a] = lVar13;
        uVar25 = param_2[0x29d];
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar26);
        if (uVar25 >> 0x3c < 0xf) {
          lVar23 = param_2[0x29c];
          func_0x00010006c00c(lVar23,uVar25);
          param_1[0x29c] = lVar23;
          param_1[0x29d] = uVar25;
        }
        else {
          lVar23 = param_2[0x29c];
          param_1[0x29d] = param_2[0x29d];
          param_1[0x29c] = lVar23;
        }
        lVar23 = param_2[0x29e];
        param_1[0x29f] = param_2[0x29f];
        param_1[0x29e] = lVar23;
        goto LAB_10423f5b8;
      }
      lVar23 = param_2[0x29a];
      lVar13 = param_2[0x29d];
      lVar26 = param_2[0x29c];
      param_1[0x29b] = param_2[0x29b];
      param_1[0x29a] = lVar23;
      param_1[0x29d] = lVar13;
      param_1[0x29c] = lVar26;
      lVar23 = param_2[0x29e];
      lVar13 = param_2[0x2a1];
      lVar26 = param_2[0x2a0];
      param_1[0x29f] = param_2[0x29f];
      param_1[0x29e] = lVar23;
      param_1[0x2a1] = lVar13;
      param_1[0x2a0] = lVar26;
      lVar23 = param_2[0x296];
      lVar13 = param_2[0x299];
      lVar26 = param_2[0x298];
      param_1[0x297] = param_2[0x297];
      param_1[0x296] = lVar23;
      param_1[0x299] = lVar13;
      param_1[0x298] = lVar26;
    }
    lVar23 = param_2[0x2a6];
    if (lVar23 == 1) {
      lVar23 = param_2[0x2b2];
      lVar13 = param_2[0x2b5];
      lVar26 = param_2[0x2b4];
      param_1[0x2b3] = param_2[0x2b3];
      param_1[0x2b2] = lVar23;
      param_1[0x2b5] = lVar13;
      param_1[0x2b4] = lVar26;
      lVar23 = param_2[0x2b6];
      param_1[0x2b7] = param_2[0x2b7];
      param_1[0x2b6] = lVar23;
      uVar20 = *(undefined8 *)((long)param_2 + 0x15b9);
      *(undefined8 *)((long)param_1 + 0x15c1) = *(undefined8 *)((long)param_2 + 0x15c1);
      *(undefined8 *)((long)param_1 + 0x15b9) = uVar20;
      lVar23 = param_2[0x2aa];
      lVar13 = param_2[0x2ad];
      lVar26 = param_2[0x2ac];
      param_1[0x2ab] = param_2[0x2ab];
      param_1[0x2aa] = lVar23;
      param_1[0x2ad] = lVar13;
      param_1[0x2ac] = lVar26;
      lVar23 = param_2[0x2ae];
      lVar13 = param_2[0x2b1];
      lVar26 = param_2[0x2b0];
      param_1[0x2af] = param_2[0x2af];
      param_1[0x2ae] = lVar23;
      param_1[0x2b1] = lVar13;
      param_1[0x2b0] = lVar26;
      lVar23 = param_2[0x2a2];
      lVar13 = param_2[0x2a5];
      lVar26 = param_2[0x2a4];
      param_1[0x2a3] = param_2[0x2a3];
      param_1[0x2a2] = lVar23;
      param_1[0x2a5] = lVar13;
      param_1[0x2a4] = lVar26;
      lVar23 = param_2[0x2a6];
      lVar13 = param_2[0x2a9];
      lVar26 = param_2[0x2a8];
      param_1[0x2a7] = param_2[0x2a7];
      param_1[0x2a6] = lVar23;
      param_1[0x2a9] = lVar13;
      param_1[0x2a8] = lVar26;
    }
    else {
      *(short *)(param_1 + 0x2a2) = (short)param_2[0x2a2];
      param_1[0x2a3] = param_2[0x2a3];
      *(char *)(param_1 + 0x2a4) = (char)param_2[0x2a4];
      param_1[0x2a5] = param_2[0x2a5];
      param_1[0x2a6] = lVar23;
      lVar23 = param_2[0x2af];
      _swift_bridgeObjectRetain();
      if (lVar23 == 1) {
        lVar23 = param_2[0x2af];
        lVar13 = param_2[0x2b2];
        lVar26 = param_2[0x2b1];
        param_1[0x2b0] = param_2[0x2b0];
        param_1[0x2af] = lVar23;
        param_1[0x2b2] = lVar13;
        param_1[0x2b1] = lVar26;
        *(char *)(param_1 + 0x2b3) = (char)param_2[0x2b3];
        lVar23 = param_2[0x2a7];
        lVar13 = param_2[0x2aa];
        lVar26 = param_2[0x2a9];
        param_1[0x2a8] = param_2[0x2a8];
        param_1[0x2a7] = lVar23;
        param_1[0x2aa] = lVar13;
        param_1[0x2a9] = lVar26;
        lVar13 = param_2[0x2ab];
        lVar26 = param_2[0x2ae];
        lVar23 = param_2[0x2ad];
        param_1[0x2ac] = param_2[0x2ac];
        param_1[0x2ab] = lVar13;
        param_1[0x2ae] = lVar26;
        param_1[0x2ad] = lVar23;
      }
      else {
        param_1[0x2a7] = param_2[0x2a7];
        *(char *)(param_1 + 0x2a8) = (char)param_2[0x2a8];
        param_1[0x2a9] = param_2[0x2a9];
        *(char *)(param_1 + 0x2aa) = (char)param_2[0x2aa];
        param_1[0x2ab] = param_2[0x2ab];
        *(char *)(param_1 + 0x2ac) = (char)param_2[0x2ac];
        param_1[0x2ad] = param_2[0x2ad];
        *(char *)(param_1 + 0x2ae) = (char)param_2[0x2ae];
        param_1[0x2af] = lVar23;
        *(char *)(param_1 + 0x2b1) = (char)param_2[0x2b1];
        param_1[0x2b0] = param_2[0x2b0];
        *(char *)(param_1 + 0x2b3) = (char)param_2[0x2b3];
        param_1[0x2b2] = param_2[0x2b2];
        _objc_retain(lVar23);
      }
      param_1[0x2b4] = param_2[0x2b4];
      *(char *)(param_1 + 0x2b5) = (char)param_2[0x2b5];
      param_1[0x2b6] = param_2[0x2b6];
      *(char *)(param_1 + 0x2b7) = (char)param_2[0x2b7];
      param_1[0x2b8] = param_2[0x2b8];
      *(char *)(param_1 + 0x2b9) = (char)param_2[0x2b9];
    }
    if (param_2[0x2ba] == 1) {
      lVar23 = param_2[0x2ba];
      param_1[699] = param_2[699];
      param_1[0x2ba] = lVar23;
      *(char *)(param_1 + 700) = (char)param_2[700];
    }
    else {
      param_1[0x2ba] = param_2[0x2ba];
      param_1[699] = param_2[699];
      *(char *)(param_1 + 700) = (char)param_2[700];
      _swift_bridgeObjectRetain();
    }
    lVar23 = param_2[0x2bf];
    if (lVar23 == 1) {
      lVar23 = param_2[0x2bd];
      param_1[0x2be] = param_2[0x2be];
      param_1[0x2bd] = lVar23;
      param_1[0x2bf] = param_2[0x2bf];
    }
    else {
      param_1[0x2bd] = param_2[0x2bd];
      param_1[0x2be] = param_2[0x2be];
      param_1[0x2bf] = lVar23;
      _swift_bridgeObjectRetain();
    }
    param_1[0x2c0] = param_2[0x2c0];
    param_1[0x2c1] = param_2[0x2c1];
    *(short *)(param_1 + 0x2c2) = (short)param_2[0x2c2];
    _objc_retain();
  }
  param_1[0x2c3] = param_2[0x2c3];
  *(short *)(param_1 + 0x2c4) = (short)param_2[0x2c4];
  param_1[0x2c5] = param_2[0x2c5];
  *(char *)(param_1 + 0x2c6) = (char)param_2[0x2c6];
  *(undefined2 *)((long)param_1 + 0x1631) = *(undefined2 *)((long)param_2 + 0x1631);
  param_1[0x2c7] = param_2[0x2c7];
  lVar23 = param_2[0x2c9];
  if (lVar23 == 0) {
    lVar23 = param_2[0x2c8];
    lVar13 = param_2[0x2cb];
    lVar26 = param_2[0x2ca];
    param_1[0x2c9] = param_2[0x2c9];
    param_1[0x2c8] = lVar23;
    param_1[0x2cb] = lVar13;
    param_1[0x2ca] = lVar26;
    param_1[0x2cc] = param_2[0x2cc];
  }
  else {
    param_1[0x2c8] = param_2[0x2c8];
    param_1[0x2c9] = lVar23;
    param_1[0x2ca] = param_2[0x2ca];
    lVar23 = param_2[0x2cb];
    param_1[0x2cb] = lVar23;
    param_1[0x2cc] = param_2[0x2cc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar23);
  }
LAB_10423f8e0:
  lVar23 = param_2[0x2cf];
  if (lVar23 == 1) {
    lVar23 = param_2[0x2cd];
    lVar13 = param_2[0x2d0];
    lVar26 = param_2[0x2cf];
    param_1[0x2ce] = param_2[0x2ce];
    param_1[0x2cd] = lVar23;
    param_1[0x2d0] = lVar13;
    param_1[0x2cf] = lVar26;
    param_1[0x2d1] = param_2[0x2d1];
  }
  else {
    *(char *)(param_1 + 0x2cd) = (char)param_2[0x2cd];
    param_1[0x2ce] = param_2[0x2ce];
    param_1[0x2cf] = lVar23;
    param_1[0x2d0] = param_2[0x2d0];
    lVar23 = param_2[0x2d1];
    param_1[0x2d1] = lVar23;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar23);
  }
  lVar23 = param_2[0x2d2];
  param_1[0x2d3] = param_2[0x2d3];
  param_1[0x2d2] = lVar23;
  lVar23 = param_2[0x2db];
  if (lVar23 == 1) {
    lVar23 = param_2[0x2d4];
    lVar13 = param_2[0x2d7];
    lVar26 = param_2[0x2d6];
    param_1[0x2d5] = param_2[0x2d5];
    param_1[0x2d4] = lVar23;
    param_1[0x2d7] = lVar13;
    param_1[0x2d6] = lVar26;
    lVar23 = param_2[0x2d8];
    lVar13 = param_2[0x2db];
    lVar26 = param_2[0x2da];
    param_1[0x2d9] = param_2[0x2d9];
    param_1[0x2d8] = lVar23;
    param_1[0x2db] = lVar13;
    param_1[0x2da] = lVar26;
  }
  else {
    *(char *)(param_1 + 0x2d4) = (char)param_2[0x2d4];
    param_1[0x2d5] = param_2[0x2d5];
    lVar26 = param_2[0x2d6];
    param_1[0x2d7] = param_2[0x2d7];
    param_1[0x2d6] = lVar26;
    param_1[0x2d8] = param_2[0x2d8];
    *(char *)(param_1 + 0x2d9) = (char)param_2[0x2d9];
    *(undefined1 *)((long)param_1 + 0x16c9) = *(undefined1 *)((long)param_2 + 0x16c9);
    *(undefined2 *)((long)param_1 + 0x16ca) = *(undefined2 *)((long)param_2 + 0x16ca);
    param_1[0x2da] = param_2[0x2da];
    param_1[0x2db] = lVar23;
    _swift_bridgeObjectRetain();
  }
  lVar23 = param_2[0x2df];
  if (lVar23 == 1) {
    lVar23 = param_2[0x2dc];
    lVar13 = param_2[0x2df];
    lVar26 = param_2[0x2de];
    param_1[0x2dd] = param_2[0x2dd];
    param_1[0x2dc] = lVar23;
    param_1[0x2df] = lVar13;
    param_1[0x2de] = lVar26;
  }
  else {
    *(char *)(param_1 + 0x2dc) = (char)param_2[0x2dc];
    param_1[0x2dd] = param_2[0x2dd];
    param_1[0x2de] = param_2[0x2de];
    param_1[0x2df] = lVar23;
    _swift_bridgeObjectRetain();
  }
  lVar23 = param_2[0x2e0];
  param_1[0x2e1] = param_2[0x2e1];
  param_1[0x2e0] = lVar23;
  lVar23 = param_2[0x2e2];
  param_1[0x2e3] = param_2[0x2e3];
  param_1[0x2e2] = lVar23;
  param_1[0x2e4] = param_2[0x2e4];
  *(short *)(param_1 + 0x2e5) = (short)param_2[0x2e5];
  lVar23 = param_2[0x2e6];
  param_1[0x2e7] = param_2[0x2e7];
  param_1[0x2e6] = lVar23;
  param_1[0x2e8] = param_2[0x2e8];
  param_1[0x2e9] = param_2[0x2e9];
  lVar23 = param_2[0x2ea];
  param_1[0x2eb] = param_2[0x2eb];
  param_1[0x2ea] = lVar23;
  *(char *)(param_1 + 0x2ec) = (char)param_2[0x2ec];
  lVar23 = param_2[0x2f3];
  _swift_bridgeObjectRetain();
  if (lVar23 == 1) {
    lVar23 = param_2[0x2ed];
    lVar13 = param_2[0x2f0];
    lVar26 = param_2[0x2ef];
    param_1[0x2ee] = param_2[0x2ee];
    param_1[0x2ed] = lVar23;
    param_1[0x2f0] = lVar13;
    param_1[0x2ef] = lVar26;
    lVar23 = param_2[0x2f1];
    param_1[0x2f2] = param_2[0x2f2];
    param_1[0x2f1] = lVar23;
    param_1[0x2f3] = param_2[0x2f3];
  }
  else {
    param_1[0x2ed] = param_2[0x2ed];
    *(char *)(param_1 + 0x2ee) = (char)param_2[0x2ee];
    param_1[0x2ef] = param_2[0x2ef];
    *(char *)(param_1 + 0x2f0) = (char)param_2[0x2f0];
    param_1[0x2f1] = param_2[0x2f1];
    *(char *)(param_1 + 0x2f2) = (char)param_2[0x2f2];
    param_1[0x2f3] = lVar23;
    _swift_bridgeObjectRetain(lVar23);
  }
  *(char *)(param_1 + 0x2f4) = (char)param_2[0x2f4];
  param_1[0x2f5] = param_2[0x2f5];
  param_1[0x2f6] = param_2[0x2f6];
  lVar23 = param_2[0x2fa];
  _swift_bridgeObjectRetain();
  if (lVar23 == 1) {
    lVar23 = param_2[0x2f7];
    lVar13 = param_2[0x2fa];
    lVar26 = param_2[0x2f9];
    param_1[0x2f8] = param_2[0x2f8];
    param_1[0x2f7] = lVar23;
    param_1[0x2fa] = lVar13;
    param_1[0x2f9] = lVar26;
    lVar23 = param_2[0x2fb];
    param_1[0x2fc] = param_2[0x2fc];
    param_1[0x2fb] = lVar23;
  }
  else {
    *(char *)(param_1 + 0x2f7) = (char)param_2[0x2f7];
    lVar26 = param_2[0x2f8];
    param_1[0x2f9] = param_2[0x2f9];
    param_1[0x2f8] = lVar26;
    param_1[0x2fa] = lVar23;
    *(char *)(param_1 + 0x2fb) = (char)param_2[0x2fb];
    lVar26 = param_2[0x2fc];
    param_1[0x2fc] = lVar26;
    _swift_bridgeObjectRetain(lVar23);
    _swift_bridgeObjectRetain(lVar26);
  }
  param_1[0x2fd] = param_2[0x2fd];
  lVar23 = param_2[0x2fe];
  param_1[0x2fe] = lVar23;
  lVar15 = param_2[0x2ff];
  param_1[0x2ff] = lVar15;
  lVar16 = param_2[0x300];
  param_1[0x300] = lVar16;
  lVar17 = param_2[0x301];
  param_1[0x301] = lVar17;
  *(char *)(param_1 + 0x302) = (char)param_2[0x302];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar20 = *puVar2;
  uVar27 = puVar2[3];
  uVar22 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar20;
  puVar1[3] = uVar27;
  puVar1[2] = uVar22;
  uVar20 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar20;
  uVar20 = puVar2[6];
  uVar22 = puVar2[7];
  puVar1[6] = uVar20;
  puVar1[7] = uVar22;
  uVar22 = puVar2[8];
  uVar27 = puVar2[9];
  puVar1[8] = uVar22;
  puVar1[9] = uVar27;
  uVar27 = puVar2[10];
  uVar33 = puVar2[0xb];
  puVar1[10] = uVar27;
  puVar1[0xb] = uVar33;
  uVar33 = puVar2[0xc];
  uVar32 = puVar2[0xd];
  puVar1[0xc] = uVar33;
  puVar1[0xd] = uVar32;
  uVar32 = puVar2[0xe];
  uVar29 = puVar2[0xf];
  puVar1[0xe] = uVar32;
  puVar1[0xf] = uVar29;
  uVar29 = puVar2[0x10];
  puVar1[0x10] = uVar29;
  lVar26 = 0;
  func_0x000100b91d00();
  lVar24 = (long)*(int *)(lVar26 + 0x3c);
  lVar13 = 0;
  __s10Foundation4UUIDVMa();
  lVar18 = *(long *)(lVar13 + -8);
  pcVar31 = *(code **)(lVar18 + 0x30);
  _swift_bridgeObjectRetain(lVar23);
  _swift_bridgeObjectRetain(lVar15);
  _swift_bridgeObjectRetain(lVar16);
  _swift_bridgeObjectRetain(lVar17);
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar27);
  _swift_bridgeObjectRetain(uVar33);
  _swift_bridgeObjectRetain(uVar32);
  _swift_bridgeObjectRetain(uVar29);
  lVar23 = (long)puVar2 + lVar24;
  (*pcVar31)(lVar23,1,lVar13);
  if ((int)lVar23 == 0) {
    (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,lVar13);
    (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar24,0,1,lVar13);
  }
  else {
    lVar23 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar24,(long)puVar2 + lVar24,
            *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(lVar26 + 0x40);
  lVar23 = (long)puVar2 + lVar15;
  (*pcVar31)(lVar23,1,lVar13);
  if ((int)lVar23 == 0) {
    (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar15,(long)puVar2 + lVar15,lVar13);
    (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar15,0,1,lVar13);
  }
  else {
    lVar23 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar15,(long)puVar2 + lVar15,
            *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(lVar26 + 0x44);
  lVar23 = (long)puVar2 + lVar15;
  (*pcVar31)(lVar23,1,lVar13);
  if ((int)lVar23 == 0) {
    (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar15,(long)puVar2 + lVar15,lVar13);
    (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar15,0,1,lVar13);
  }
  else {
    lVar23 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar15,(long)puVar2 + lVar15,
            *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x48)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x48));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x4c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x4c));
  uVar20 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x50));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x50)) = uVar20;
  uVar22 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x54));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x54)) = uVar22;
  uVar27 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x58));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x58)) = uVar27;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x5c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x5c));
  lVar23 = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar27);
  if (lVar23 == 1) {
    uVar20 = puVar4[0xc];
    uVar27 = puVar4[0xf];
    uVar22 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar20;
    puVar3[0xf] = uVar27;
    puVar3[0xe] = uVar22;
    uVar20 = puVar4[0x10];
    uVar27 = puVar4[0x13];
    uVar22 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar20;
    puVar3[0x13] = uVar27;
    puVar3[0x12] = uVar22;
    uVar20 = puVar4[4];
    uVar27 = puVar4[7];
    uVar22 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar20;
    puVar3[7] = uVar27;
    puVar3[6] = uVar22;
    uVar20 = puVar4[8];
    uVar27 = puVar4[0xb];
    uVar22 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar20;
    puVar3[0xb] = uVar27;
    puVar3[10] = uVar22;
    uVar20 = *puVar4;
    uVar27 = puVar4[3];
    uVar22 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
    puVar3[3] = uVar27;
    puVar3[2] = uVar22;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar23;
    uVar20 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar20;
    uVar22 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar22;
    uVar27 = puVar4[7];
    puVar3[6] = puVar4[6];
    puVar3[7] = uVar27;
    uVar33 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar33;
    *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
    uVar32 = puVar4[0xb];
    puVar3[0xc] = puVar4[0xc];
    puVar3[0xb] = uVar32;
    lVar15 = puVar4[0x12];
    _swift_bridgeObjectRetain(lVar23);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar33);
    if (lVar15 == 0) {
      uVar20 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar20;
      uVar20 = puVar4[0xf];
      puVar3[0x10] = puVar4[0x10];
      puVar3[0xf] = uVar20;
      uVar20 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar20;
      puVar3[0x13] = puVar4[0x13];
    }
    else {
      uVar20 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xe] = uVar20;
      uVar20 = puVar4[0x10];
      puVar3[0xf] = puVar4[0xf];
      puVar3[0x10] = uVar20;
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x12] = lVar15;
      puVar3[0x13] = puVar4[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(lVar15);
    }
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x60)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x60));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 100));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 100));
  lVar23 = puVar4[1];
  if (lVar23 == 1) {
    uVar20 = *puVar4;
    uVar27 = puVar4[3];
    uVar22 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
    puVar3[3] = uVar27;
    puVar3[2] = uVar22;
    puVar3[4] = puVar4[4];
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar23;
    puVar3[2] = puVar4[2];
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar4 + 3);
    *(undefined2 *)((long)puVar3 + 0x19) = *(undefined2 *)((long)puVar4 + 0x19);
    puVar3[4] = puVar4[4];
    _swift_bridgeObjectRetain();
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x68));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x68));
  if (puVar4[0x27] == 0) {
    _memcpy(puVar3,puVar4,0x160);
  }
  else {
    uVar20 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
    uVar20 = puVar4[2];
    uVar22 = puVar4[3];
    puVar3[2] = uVar20;
    puVar3[3] = uVar22;
    uVar28 = puVar4[4];
    puVar3[4] = uVar28;
    uVar22 = puVar4[5];
    puVar3[6] = puVar4[6];
    puVar3[5] = uVar22;
    uVar22 = puVar4[7];
    uVar27 = puVar4[8];
    puVar3[7] = uVar22;
    puVar3[8] = uVar27;
    *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(puVar4 + 9);
    *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)((long)puVar4 + 0x4a);
    uVar27 = puVar4[0xb];
    puVar3[10] = puVar4[10];
    puVar3[0xb] = uVar27;
    uVar19 = puVar4[0xc];
    puVar3[0xc] = uVar19;
    *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)(puVar4 + 0xd);
    uVar33 = puVar4[0xe];
    puVar3[0xf] = puVar4[0xf];
    puVar3[0xe] = uVar33;
    *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x10);
    uVar33 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x12] = uVar33;
    uVar32 = puVar4[0x14];
    puVar3[0x13] = puVar4[0x13];
    puVar3[0x14] = uVar32;
    uVar29 = puVar4[0x16];
    puVar3[0x15] = puVar4[0x15];
    puVar3[0x16] = uVar29;
    uVar6 = puVar4[0x18];
    puVar3[0x17] = puVar4[0x17];
    puVar3[0x18] = uVar6;
    uVar7 = puVar4[0x1a];
    puVar3[0x19] = puVar4[0x19];
    puVar3[0x1a] = uVar7;
    uVar34 = puVar4[0x1b];
    puVar3[0x1c] = puVar4[0x1c];
    puVar3[0x1b] = uVar34;
    uVar30 = puVar4[0x1d];
    puVar3[0x1d] = uVar30;
    *(undefined1 *)(puVar3 + 0x1e) = *(undefined1 *)(puVar4 + 0x1e);
    *(undefined1 *)((long)puVar3 + 0xf1) = *(undefined1 *)((long)puVar4 + 0xf1);
    *(undefined1 *)((long)puVar3 + 0xf2) = *(undefined1 *)((long)puVar4 + 0xf2);
    uVar34 = puVar4[0x20];
    puVar3[0x1f] = puVar4[0x1f];
    puVar3[0x20] = uVar34;
    uVar8 = puVar4[0x22];
    puVar3[0x21] = puVar4[0x21];
    puVar3[0x22] = uVar8;
    uVar9 = puVar4[0x24];
    puVar3[0x23] = puVar4[0x23];
    puVar3[0x24] = uVar9;
    uVar10 = puVar4[0x26];
    puVar3[0x25] = puVar4[0x25];
    puVar3[0x26] = uVar10;
    uVar21 = puVar4[0x27];
    puVar3[0x27] = uVar21;
    uVar35 = puVar4[0x28];
    puVar3[0x29] = puVar4[0x29];
    puVar3[0x28] = uVar35;
    uVar35 = puVar4[0x2b];
    puVar3[0x2a] = puVar4[0x2a];
    puVar3[0x2b] = uVar35;
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar33);
    _swift_bridgeObjectRetain(uVar32);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar30);
    _swift_bridgeObjectRetain(uVar34);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar21);
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x6c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x6c));
  uVar25 = puVar4[1];
  if (uVar25 >> 0x3c < 0xf) {
    uVar20 = *puVar4;
    func_0x00010006c00c(uVar20,uVar25);
    *puVar3 = uVar20;
    puVar3[1] = uVar25;
  }
  else {
    uVar20 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x70)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x70));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x74));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x74));
  uVar20 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar20;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x78));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x78));
  uVar20 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar20;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x7c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x7c));
  uVar22 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar22;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x80));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x80));
  uVar25 = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar22);
  if (uVar25 >> 0x3c < 0xf) {
    uVar20 = *puVar4;
    func_0x00010006c00c(uVar20,uVar25);
    *puVar3 = uVar20;
    puVar3[1] = uVar25;
  }
  else {
    uVar20 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x84));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x84));
  lVar23 = 0;
  func_0x000100b91fbc();
  lVar15 = *(long *)(lVar23 + -8);
  puVar14 = puVar4;
  (**(code **)(lVar15 + 0x30))(puVar4,1,lVar23);
  if ((int)puVar14 == 0) {
    uVar20 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar20;
    uVar20 = puVar4[2];
    uVar27 = puVar4[5];
    uVar22 = puVar4[4];
    puVar3[3] = puVar4[3];
    puVar3[2] = uVar20;
    puVar3[5] = uVar27;
    puVar3[4] = uVar22;
    uVar20 = puVar4[6];
    uVar22 = puVar4[7];
    puVar3[6] = uVar20;
    puVar3[7] = uVar22;
    uVar22 = puVar4[8];
    puVar3[8] = uVar22;
    lVar17 = (long)*(int *)(lVar23 + 0x28);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar22);
    lVar16 = (long)puVar4 + lVar17;
    (*pcVar31)(lVar16,1,lVar13);
    if ((int)lVar16 == 0) {
      (**(code **)(lVar18 + 0x10))((long)puVar3 + lVar17,(long)puVar4 + lVar17,lVar13);
      (**(code **)(lVar18 + 0x38))((long)puVar3 + lVar17,0,1,lVar13);
    }
    else {
      lVar16 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar17,(long)puVar4 + lVar17,
              *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar23 + 0x2c));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar23 + 0x2c));
    uVar20 = puVar5[1];
    *puVar14 = *puVar5;
    puVar14[1] = uVar20;
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar23 + 0x30));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar23 + 0x30));
    uVar20 = puVar5[1];
    *puVar14 = *puVar5;
    puVar14[1] = uVar20;
    lVar17 = (long)*(int *)(lVar23 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    lVar16 = (long)puVar4 + lVar17;
    (*pcVar31)(lVar16,1,lVar13);
    if ((int)lVar16 == 0) {
      (**(code **)(lVar18 + 0x10))((long)puVar3 + lVar17,(long)puVar4 + lVar17,lVar13);
      (**(code **)(lVar18 + 0x38))((long)puVar3 + lVar17,0,1,lVar13);
    }
    else {
      lVar13 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar17,(long)puVar4 + lVar17,
              *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar23 + 0x38));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar23 + 0x38));
    uVar20 = puVar5[1];
    *puVar14 = *puVar5;
    puVar14[1] = uVar20;
    puVar14 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar23 + 0x3c));
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar23 + 0x3c));
    uVar20 = puVar4[1];
    *puVar14 = *puVar4;
    puVar14[1] = uVar20;
    pcVar31 = *(code **)(lVar15 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    (*pcVar31)(puVar3,0,1,lVar23);
  }
  else {
    lVar23 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x88));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x88));
  lVar23 = puVar4[1];
  if (lVar23 == 0) {
    uVar20 = puVar4[0x10];
    uVar27 = puVar4[0x13];
    uVar22 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar20;
    puVar3[0x13] = uVar27;
    puVar3[0x12] = uVar22;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar20 = puVar4[8];
    uVar27 = puVar4[0xb];
    uVar22 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar20;
    puVar3[0xb] = uVar27;
    puVar3[10] = uVar22;
    uVar27 = puVar4[0xc];
    uVar22 = puVar4[0xf];
    uVar20 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar27;
    puVar3[0xf] = uVar22;
    puVar3[0xe] = uVar20;
    uVar20 = *puVar4;
    uVar27 = puVar4[3];
    uVar22 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
    puVar3[3] = uVar27;
    puVar3[2] = uVar22;
    uVar27 = puVar4[4];
    uVar22 = puVar4[7];
    uVar20 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar27;
    puVar3[7] = uVar22;
    puVar3[6] = uVar20;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar23;
    lVar23 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar23 == 1) {
      uVar20 = puVar4[2];
      uVar27 = puVar4[5];
      uVar22 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar20;
      puVar3[5] = uVar27;
      puVar3[4] = uVar22;
      uVar20 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar20;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar13 = puVar4[4];
      if (lVar13 == 1) {
        uVar20 = puVar4[2];
        uVar27 = puVar4[5];
        uVar22 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar20;
        puVar3[5] = uVar27;
        puVar3[4] = uVar22;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar20 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar20;
        uVar20 = puVar4[5];
        uVar22 = puVar4[6];
        puVar3[4] = lVar13;
        puVar3[5] = uVar20;
        puVar3[6] = uVar22;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar23;
      _swift_bridgeObjectRetain(lVar23);
    }
    lVar23 = puVar4[0xf];
    if (lVar23 == 1) {
      uVar20 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar20;
      uVar20 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar20;
      uVar20 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar20;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar13 = puVar4[0xb];
      if (lVar13 == 1) {
        uVar20 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar20;
        uVar20 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar20;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar20 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar20;
        uVar20 = puVar4[0xc];
        uVar22 = puVar4[0xd];
        puVar3[0xb] = lVar13;
        puVar3[0xc] = uVar20;
        puVar3[0xd] = uVar22;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar23;
      _swift_bridgeObjectRetain(lVar23);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar20 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar20;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x8c)) =
       *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x8c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x90)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x90));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x94));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x94));
  uVar20 = *puVar4;
  uVar27 = puVar4[3];
  uVar22 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar20;
  puVar3[3] = uVar27;
  puVar3[2] = uVar22;
  uVar20 = puVar4[4];
  uVar27 = puVar4[7];
  uVar22 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar20;
  puVar3[7] = uVar27;
  puVar3[6] = uVar22;
  uVar27 = puVar4[0xc];
  uVar22 = puVar4[0xf];
  uVar20 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar27;
  puVar3[0xf] = uVar22;
  puVar3[0xe] = uVar20;
  uVar27 = puVar4[8];
  uVar22 = puVar4[0xb];
  uVar20 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar27;
  puVar3[0xb] = uVar22;
  puVar3[10] = uVar20;
  uVar20 = *(undefined8 *)((long)puVar4 + 0xa9);
  *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
  *(undefined8 *)((long)puVar3 + 0xa9) = uVar20;
  uVar20 = puVar4[0x12];
  uVar27 = puVar4[0x15];
  uVar22 = puVar4[0x14];
  puVar3[0x13] = puVar4[0x13];
  puVar3[0x12] = uVar20;
  puVar3[0x15] = uVar27;
  puVar3[0x14] = uVar22;
  uVar20 = puVar4[0x10];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar20;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x98)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x9c)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x9c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xa0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xa0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xa4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xa4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xa8)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xa8));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xac));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xac));
  lVar23 = puVar4[1];
  if (lVar23 == 0) {
    uVar20 = *puVar4;
    uVar27 = puVar4[3];
    uVar22 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
    puVar3[3] = uVar27;
    puVar3[2] = uVar22;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar23;
    uVar20 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar20;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xb0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xb0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xb4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xb4));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xb8));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xb8));
  lVar23 = puVar4[1];
  if (lVar23 == 0) {
    uVar20 = puVar4[0x10];
    uVar27 = puVar4[0x13];
    uVar22 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar20;
    puVar3[0x13] = uVar27;
    puVar3[0x12] = uVar22;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar20 = puVar4[8];
    uVar27 = puVar4[0xb];
    uVar22 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar20;
    puVar3[0xb] = uVar27;
    puVar3[10] = uVar22;
    uVar27 = puVar4[0xc];
    uVar22 = puVar4[0xf];
    uVar20 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar27;
    puVar3[0xf] = uVar22;
    puVar3[0xe] = uVar20;
    uVar20 = *puVar4;
    uVar27 = puVar4[3];
    uVar22 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
    puVar3[3] = uVar27;
    puVar3[2] = uVar22;
    uVar27 = puVar4[4];
    uVar22 = puVar4[7];
    uVar20 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar27;
    puVar3[7] = uVar22;
    puVar3[6] = uVar20;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar23;
    lVar23 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar23 == 1) {
      uVar20 = puVar4[2];
      uVar27 = puVar4[5];
      uVar22 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar20;
      puVar3[5] = uVar27;
      puVar3[4] = uVar22;
      uVar20 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar20;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar13 = puVar4[4];
      if (lVar13 == 1) {
        uVar20 = puVar4[2];
        uVar27 = puVar4[5];
        uVar22 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar20;
        puVar3[5] = uVar27;
        puVar3[4] = uVar22;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar20 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar20;
        uVar20 = puVar4[5];
        uVar22 = puVar4[6];
        puVar3[4] = lVar13;
        puVar3[5] = uVar20;
        puVar3[6] = uVar22;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar23;
      _swift_bridgeObjectRetain(lVar23);
    }
    lVar23 = puVar4[0xf];
    if (lVar23 == 1) {
      uVar20 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar20;
      uVar20 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar20;
      uVar20 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar20;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar13 = puVar4[0xb];
      if (lVar13 == 1) {
        uVar20 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar20;
        uVar20 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar20;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar20 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar20;
        uVar20 = puVar4[0xc];
        uVar22 = puVar4[0xd];
        puVar3[0xb] = lVar13;
        puVar3[0xc] = uVar20;
        puVar3[0xd] = uVar22;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar23;
      _swift_bridgeObjectRetain(lVar23);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar20 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar20;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xbc));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xbc));
  lVar23 = puVar4[1];
  if (lVar23 == 0) {
    uVar20 = puVar4[0x10];
    uVar27 = puVar4[0x13];
    uVar22 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar20;
    puVar3[0x13] = uVar27;
    puVar3[0x12] = uVar22;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar20 = puVar4[8];
    uVar27 = puVar4[0xb];
    uVar22 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar20;
    puVar3[0xb] = uVar27;
    puVar3[10] = uVar22;
    uVar27 = puVar4[0xc];
    uVar22 = puVar4[0xf];
    uVar20 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar27;
    puVar3[0xf] = uVar22;
    puVar3[0xe] = uVar20;
    uVar20 = *puVar4;
    uVar27 = puVar4[3];
    uVar22 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar20;
    puVar3[3] = uVar27;
    puVar3[2] = uVar22;
    uVar27 = puVar4[4];
    uVar22 = puVar4[7];
    uVar20 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar27;
    puVar3[7] = uVar22;
    puVar3[6] = uVar20;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar23;
    lVar23 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar23 == 1) {
      uVar20 = puVar4[2];
      uVar27 = puVar4[5];
      uVar22 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar20;
      puVar3[5] = uVar27;
      puVar3[4] = uVar22;
      uVar20 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar20;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar13 = puVar4[4];
      if (lVar13 == 1) {
        uVar20 = puVar4[2];
        uVar27 = puVar4[5];
        uVar22 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar20;
        puVar3[5] = uVar27;
        puVar3[4] = uVar22;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar20 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar20;
        uVar20 = puVar4[5];
        uVar22 = puVar4[6];
        puVar3[4] = lVar13;
        puVar3[5] = uVar20;
        puVar3[6] = uVar22;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar23;
      _swift_bridgeObjectRetain(lVar23);
    }
    lVar23 = puVar4[0xf];
    if (lVar23 == 1) {
      uVar20 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar20;
      uVar20 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar20;
      uVar20 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar20;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar13 = puVar4[0xb];
      if (lVar13 == 1) {
        uVar20 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar20;
        uVar20 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar20;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar20 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar20;
        uVar20 = puVar4[0xc];
        uVar22 = puVar4[0xd];
        puVar3[0xb] = lVar13;
        puVar3[0xc] = uVar20;
        puVar3[0xd] = uVar22;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar23;
      _swift_bridgeObjectRetain(lVar23);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar20 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar20;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xc0)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xc0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xc4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xc4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 200)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar26 + 0xcc)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar26 + 0xcc));
  iVar11 = *(int *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  return param_1;
}



/* Entry: 1042409dc; end: 1042414ef;  */

void FUN_1042409dc(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x978) != 1) {
    if (*(long *)(param_1 + 0x48) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x90));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb0));
      if (*(long *)(param_1 + 200) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x138));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x140));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x300));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x330));
      if (*(long *)(param_1 + 0x358) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x368));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x378));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x388));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x390));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x398));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x3d0));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x3d8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x488));
      if (*(long *)(param_1 + 0x4f0) != 1) {
        _swift_bridgeObjectRelease();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x508));
      if (*(long *)(param_1 + 0x560) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x570));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x598));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x5b0));
      _objc_release(*(undefined8 *)(param_1 + 0x5c8));
      _objc_release(*(undefined8 *)(param_1 + 0x5d0));
      _objc_release(*(undefined8 *)(param_1 + 0x5d8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x5e0));
    }
    if (*(long *)(param_1 + 0x608) != 1) {
      _swift_bridgeObjectRelease();
    }
    if (*(long *)(param_1 + 0x688) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x6a8));
      if (*(long *)(param_1 + 0x740) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x750));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x7b0));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x7e0));
      }
      if (*(long *)(param_1 + 0x808) != 1) {
        _objc_release();
        _objc_release(*(undefined8 *)(param_1 + 0x810));
        _objc_release(*(undefined8 *)(param_1 + 0x818));
      }
      if (*(long *)(param_1 + 0x850) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x858));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x860));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x870));
      }
      if (*(long *)(param_1 + 0x898) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x8a0));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x8a8));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x8b0));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x8c0));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x948));
    }
    if (*(long *)(param_1 + 0x960) != 1) {
      _swift_bridgeObjectRelease();
    }
    if (*(long *)(param_1 + 0x970) != 1) {
      _swift_bridgeObjectRelease();
    }
    _objc_release(*(undefined8 *)(param_1 + 0x978));
    if (*(long *)(param_1 + 0x988) == 0) {
LAB_104240c38:
      if (*(ulong *)(param_1 + 0x9e0) >> 0x3c < 0xf) {
        func_0x00010006c090(*(undefined8 *)(param_1 + 0x9d8));
      }
    }
    else if (*(long *)(param_1 + 0x988) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x990));
      if (*(ulong *)(param_1 + 0x9c0) >> 0x3c < 0xf) {
        func_0x00010006c090(*(undefined8 *)(param_1 + 0x9b8));
      }
      goto LAB_104240c38;
    }
    if (*(long *)(param_1 + 0xa08) != 1) {
      _swift_bridgeObjectRelease();
      if (*(long *)(param_1 + 0xa50) != 1) {
        _objc_release();
      }
    }
    if (*(long *)(param_1 + 0xaa8) != 1) {
      _swift_bridgeObjectRelease();
    }
    if (*(long *)(param_1 + 0xad0) != 1) {
      _swift_bridgeObjectRelease();
    }
    _objc_release(*(undefined8 *)(param_1 + 0xad8));
  }
  if (*(long *)(param_1 + 0xaf8) == 1) goto LAB_104240f5c;
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb50));
  if (1 < *(long *)(param_1 + 0x14a0) - 1U) {
    if (*(long *)(param_1 + 0xb70) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 3000));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xbd8));
      if (*(long *)(param_1 + 0xbf0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xc60));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xc68));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe28));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe58));
      if (*(long *)(param_1 + 0xe80) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe90));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xea0));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xeb0));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xeb8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xec0));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xef8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf00));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xfb0));
      if (*(long *)(param_1 + 0x1018) != 1) {
        _swift_bridgeObjectRelease();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1030));
      if (*(long *)(param_1 + 0x1088) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1098));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10c0));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10d8));
      _objc_release(*(undefined8 *)(param_1 + 0x10f0));
      _objc_release(*(undefined8 *)(param_1 + 0x10f8));
      _objc_release(*(undefined8 *)(param_1 + 0x1100));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1108));
    }
    if (*(long *)(param_1 + 0x1130) != 1) {
      _swift_bridgeObjectRelease();
    }
    if (*(long *)(param_1 + 0x11b0) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x11d0));
      if (*(long *)(param_1 + 0x1268) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1278));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x12d8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1308));
      }
      if (*(long *)(param_1 + 0x1330) != 1) {
        _objc_release();
        _objc_release(*(undefined8 *)(param_1 + 0x1338));
        _objc_release(*(undefined8 *)(param_1 + 0x1340));
      }
      if (*(long *)(param_1 + 0x1378) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1380));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 5000));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1398));
      }
      if (*(long *)(param_1 + 0x13c0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x13c8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x13d0));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x13d8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x13e8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1470));
    }
    if (*(long *)(param_1 + 0x1488) != 1) {
      _swift_bridgeObjectRelease();
    }
    if (*(long *)(param_1 + 0x1498) != 1) {
      _swift_bridgeObjectRelease();
    }
    _objc_release(*(undefined8 *)(param_1 + 0x14a0));
    if (*(long *)(param_1 + 0x14b0) == 0) {
LAB_104240ee8:
      if (*(ulong *)(param_1 + 0x1508) >> 0x3c < 0xf) {
        func_0x00010006c090(*(undefined8 *)(param_1 + 0x1500));
      }
    }
    else if (*(long *)(param_1 + 0x14b0) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x14b8));
      if (*(ulong *)(param_1 + 0x14e8) >> 0x3c < 0xf) {
        func_0x00010006c090(*(undefined8 *)(param_1 + 0x14e0));
      }
      goto LAB_104240ee8;
    }
    if (*(long *)(param_1 + 0x1530) != 1) {
      _swift_bridgeObjectRelease();
      if (*(long *)(param_1 + 0x1578) != 1) {
        _objc_release();
      }
    }
    if (*(long *)(param_1 + 0x15d0) != 1) {
      _swift_bridgeObjectRelease();
    }
    if (*(long *)(param_1 + 0x15f8) != 1) {
      _swift_bridgeObjectRelease();
    }
    _objc_release(*(undefined8 *)(param_1 + 0x1600));
  }
  if (*(long *)(param_1 + 0x1648) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1658));
  }
LAB_104240f5c:
  if (*(long *)(param_1 + 0x1678) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1688));
  }
  if (*(long *)(param_1 + 0x16d8) != 1) {
    _swift_bridgeObjectRelease();
  }
  if (*(long *)(param_1 + 0x16f8) != 1) {
    _swift_bridgeObjectRelease();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1748));
  if (*(long *)(param_1 + 0x1798) != 1) {
    _swift_bridgeObjectRelease();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x17b0));
  if (*(long *)(param_1 + 0x17d0) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x17e0));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x17f0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x17f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1800));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1808));
  param_1 = param_1 + *(int *)(param_2 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
  lVar3 = 0;
  func_0x000100b91d00();
  iVar2 = *(int *)(lVar3 + 0x3c);
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar7 = param_1 + iVar2;
  (*pcVar9)(lVar7,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
  }
  iVar2 = *(int *)(lVar3 + 0x40);
  lVar7 = param_1 + iVar2;
  (*pcVar9)(lVar7,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
  }
  iVar2 = *(int *)(lVar3 + 0x44);
  lVar7 = param_1 + iVar2;
  (*pcVar9)(lVar7,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x4c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x50)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x54)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x58)));
  lVar7 = param_1 + *(int *)(lVar3 + 0x5c);
  if (*(long *)(lVar7 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x48));
    if (*(long *)(lVar7 + 0x90) != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x80));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x90));
    }
  }
  if (*(long *)(param_1 + *(int *)(lVar3 + 100) + 8) != 1) {
    _swift_bridgeObjectRelease();
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0x68);
  if (*(long *)(lVar7 + 0x138) != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x90));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xa0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xb0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xc0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xd0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xe8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x100));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x110));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x120));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x130));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x138));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x6c));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x74) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x78) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x7c) + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x80));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0x84);
  lVar5 = 0;
  func_0x000100b91fbc();
  lVar6 = lVar7;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x40));
    iVar2 = *(int *)(lVar5 + 0x28);
    lVar6 = lVar7 + iVar2;
    (*pcVar9)(lVar6,1,lVar4);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 8))(lVar7 + iVar2,lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x2c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x30) + 8));
    iVar2 = *(int *)(lVar5 + 0x34);
    lVar6 = lVar7 + iVar2;
    (*pcVar9)(lVar6,1,lVar4);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 8))(lVar7 + iVar2,lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x38) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x3c) + 8));
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0x88);
  if (*(long *)(lVar7 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar4 = *(long *)(lVar7 + 0x40);
    if (lVar4 != 1) {
      if (*(long *)(lVar7 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
        lVar4 = *(long *)(lVar7 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    lVar4 = *(long *)(lVar7 + 0x78);
    if (lVar4 != 1) {
      if (*(long *)(lVar7 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x68));
        lVar4 = *(long *)(lVar7 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x98));
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0xac);
  if (*(long *)(lVar7 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x18));
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0xb8);
  if (*(long *)(lVar7 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar4 = *(long *)(lVar7 + 0x40);
    if (lVar4 != 1) {
      if (*(long *)(lVar7 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
        lVar4 = *(long *)(lVar7 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    lVar4 = *(long *)(lVar7 + 0x78);
    if (lVar4 != 1) {
      if (*(long *)(lVar7 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x68));
        lVar4 = *(long *)(lVar7 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x98));
  }
  param_1 = param_1 + *(int *)(lVar3 + 0xbc);
  if (*(long *)(param_1 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 1) {
      if (*(long *)(param_1 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
        lVar7 = *(long *)(param_1 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar7);
    }
    lVar7 = *(long *)(param_1 + 0x78);
    if (lVar7 != 1) {
      if (*(long *)(param_1 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
        lVar7 = *(long *)(param_1 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}



/* Entry: 1042414f0; end: 10424ff17;  */

undefined8 * FUN_1042414f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  
  uVar21 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar21;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar21 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar21;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar21 = param_2[6];
  param_1[6] = uVar21;
  lVar24 = param_2[0x12f];
  _swift_bridgeObjectRetain();
  _objc_retain(uVar21);
  if (lVar24 == 1) {
    _memcpy(param_1 + 7,param_2 + 7,0xab2);
  }
  else {
    param_1[7] = param_2[7];
    lVar9 = param_2[9];
    if (lVar9 == 1) {
      _memcpy(param_1 + 8,param_2 + 8,0x5a8);
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = lVar9;
      uVar21 = param_2[10];
      uVar25 = param_2[0xd];
      uVar20 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar21;
      param_1[0xd] = uVar25;
      param_1[0xc] = uVar20;
      uVar21 = param_2[0xe];
      uVar25 = param_2[0x11];
      uVar20 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar21;
      param_1[0x11] = uVar25;
      param_1[0x10] = uVar20;
      uVar20 = param_2[0x12];
      param_1[0x12] = uVar20;
      uVar21 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar21;
      uVar21 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar21;
      *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
      lVar9 = param_2[0x19];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar21);
      if (lVar9 == 0) {
        uVar21 = param_2[0x24];
        uVar25 = param_2[0x27];
        uVar20 = param_2[0x26];
        param_1[0x25] = param_2[0x25];
        param_1[0x24] = uVar21;
        param_1[0x27] = uVar25;
        param_1[0x26] = uVar20;
        param_1[0x28] = param_2[0x28];
        uVar21 = param_2[0x1c];
        uVar25 = param_2[0x1f];
        uVar20 = param_2[0x1e];
        param_1[0x1d] = param_2[0x1d];
        param_1[0x1c] = uVar21;
        param_1[0x1f] = uVar25;
        param_1[0x1e] = uVar20;
        uVar25 = param_2[0x20];
        uVar20 = param_2[0x23];
        uVar21 = param_2[0x22];
        param_1[0x21] = param_2[0x21];
        param_1[0x20] = uVar25;
        param_1[0x23] = uVar20;
        param_1[0x22] = uVar21;
        uVar25 = param_2[0x18];
        uVar20 = param_2[0x1b];
        uVar21 = param_2[0x1a];
        param_1[0x19] = param_2[0x19];
        param_1[0x18] = uVar25;
        param_1[0x1b] = uVar20;
        param_1[0x1a] = uVar21;
      }
      else {
        param_1[0x18] = param_2[0x18];
        param_1[0x19] = lVar9;
        uVar21 = param_2[0x1a];
        uVar25 = param_2[0x1d];
        uVar20 = param_2[0x1c];
        param_1[0x1b] = param_2[0x1b];
        param_1[0x1a] = uVar21;
        param_1[0x1d] = uVar25;
        param_1[0x1c] = uVar20;
        uVar21 = param_2[0x1e];
        uVar25 = param_2[0x21];
        uVar20 = param_2[0x20];
        param_1[0x1f] = param_2[0x1f];
        param_1[0x1e] = uVar21;
        param_1[0x21] = uVar25;
        param_1[0x20] = uVar20;
        param_1[0x22] = param_2[0x22];
        *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
        uVar21 = param_2[0x24];
        param_1[0x25] = param_2[0x25];
        param_1[0x24] = uVar21;
        uVar21 = param_2[0x27];
        param_1[0x26] = param_2[0x26];
        param_1[0x27] = uVar21;
        uVar20 = param_2[0x28];
        param_1[0x28] = uVar20;
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar20);
      }
      *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
      uVar21 = param_2[0x2a];
      param_1[0x2b] = param_2[0x2b];
      param_1[0x2a] = uVar21;
      uVar21 = *(undefined8 *)((long)param_2 + 0x15c);
      *(undefined8 *)((long)param_1 + 0x164) = *(undefined8 *)((long)param_2 + 0x164);
      *(undefined8 *)((long)param_1 + 0x15c) = uVar21;
      param_1[0x2e] = param_2[0x2e];
      *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
      uVar21 = param_2[0x3b];
      uVar25 = param_2[0x3e];
      uVar20 = param_2[0x3d];
      param_1[0x3c] = param_2[0x3c];
      param_1[0x3b] = uVar21;
      param_1[0x3e] = uVar25;
      param_1[0x3d] = uVar20;
      uVar21 = param_2[0x33];
      uVar25 = param_2[0x36];
      uVar20 = param_2[0x35];
      param_1[0x34] = param_2[0x34];
      param_1[0x33] = uVar21;
      param_1[0x36] = uVar25;
      param_1[0x35] = uVar20;
      uVar25 = param_2[0x37];
      uVar20 = param_2[0x3a];
      uVar21 = param_2[0x39];
      param_1[0x38] = param_2[0x38];
      param_1[0x37] = uVar25;
      param_1[0x3a] = uVar20;
      param_1[0x39] = uVar21;
      uVar25 = param_2[0x2f];
      uVar20 = param_2[0x32];
      uVar21 = param_2[0x31];
      param_1[0x30] = param_2[0x30];
      param_1[0x2f] = uVar25;
      param_1[0x32] = uVar20;
      param_1[0x31] = uVar21;
      uVar21 = param_2[0x48];
      uVar25 = param_2[0x4b];
      uVar20 = param_2[0x4a];
      param_1[0x49] = param_2[0x49];
      param_1[0x48] = uVar21;
      param_1[0x4b] = uVar25;
      param_1[0x4a] = uVar20;
      uVar21 = param_2[0x4c];
      param_1[0x4d] = param_2[0x4d];
      param_1[0x4c] = uVar21;
      uVar21 = *(undefined8 *)((long)param_2 + 0x269);
      *(undefined8 *)((long)param_1 + 0x271) = *(undefined8 *)((long)param_2 + 0x271);
      *(undefined8 *)((long)param_1 + 0x269) = uVar21;
      uVar21 = param_2[0x40];
      uVar25 = param_2[0x43];
      uVar20 = param_2[0x42];
      param_1[0x41] = param_2[0x41];
      param_1[0x40] = uVar21;
      param_1[0x43] = uVar25;
      param_1[0x42] = uVar20;
      uVar21 = param_2[0x44];
      uVar25 = param_2[0x47];
      uVar20 = param_2[0x46];
      param_1[0x45] = param_2[0x45];
      param_1[0x44] = uVar21;
      param_1[0x47] = uVar25;
      param_1[0x46] = uVar20;
      uVar20 = param_2[0x51];
      uVar21 = param_2[0x50];
      uVar28 = param_2[0x53];
      uVar25 = param_2[0x52];
      uVar29 = param_2[0x54];
      uVar13 = param_2[0x57];
      uVar30 = param_2[0x56];
      param_1[0x55] = param_2[0x55];
      param_1[0x54] = uVar29;
      param_1[0x57] = uVar13;
      param_1[0x56] = uVar30;
      param_1[0x51] = uVar20;
      param_1[0x50] = uVar21;
      param_1[0x53] = uVar28;
      param_1[0x52] = uVar25;
      uVar20 = param_2[0x59];
      uVar21 = param_2[0x58];
      uVar28 = param_2[0x5b];
      uVar25 = param_2[0x5a];
      uVar30 = param_2[0x5d];
      uVar29 = param_2[0x5c];
      uVar13 = *(undefined8 *)((long)param_2 + 0x2ea);
      *(undefined8 *)((long)param_1 + 0x2f2) = *(undefined8 *)((long)param_2 + 0x2f2);
      *(undefined8 *)((long)param_1 + 0x2ea) = uVar13;
      param_1[0x5b] = uVar28;
      param_1[0x5a] = uVar25;
      param_1[0x5d] = uVar30;
      param_1[0x5c] = uVar29;
      param_1[0x59] = uVar20;
      param_1[0x58] = uVar21;
      param_1[0x60] = param_2[0x60];
      param_1[0x61] = param_2[0x61];
      *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
      *(undefined1 *)((long)param_1 + 0x311) = *(undefined1 *)((long)param_2 + 0x311);
      param_1[99] = param_2[99];
      param_1[100] = param_2[100];
      *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
      uVar21 = param_2[0x66];
      param_1[0x66] = uVar21;
      *(undefined1 *)(param_1 + 0x67) = *(undefined1 *)(param_2 + 0x67);
      *(undefined1 *)((long)param_1 + 0x339) = *(undefined1 *)((long)param_2 + 0x339);
      lVar9 = param_2[0x6b];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      if (lVar9 == 1) {
        uVar21 = param_2[0x68];
        uVar25 = param_2[0x6b];
        uVar20 = param_2[0x6a];
        param_1[0x69] = param_2[0x69];
        param_1[0x68] = uVar21;
        param_1[0x6b] = uVar25;
        param_1[0x6a] = uVar20;
        uVar21 = param_2[0x6c];
        param_1[0x6d] = param_2[0x6d];
        param_1[0x6c] = uVar21;
      }
      else {
        *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
        param_1[0x69] = param_2[0x69];
        param_1[0x6a] = param_2[0x6a];
        param_1[0x6b] = lVar9;
        *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
        uVar21 = param_2[0x6d];
        param_1[0x6d] = uVar21;
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar21);
      }
      *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
      param_1[0x6f] = param_2[0x6f];
      param_1[0x70] = param_2[0x70];
      uVar29 = param_2[0x71];
      param_1[0x71] = uVar29;
      uVar28 = param_2[0x72];
      param_1[0x72] = uVar28;
      uVar25 = param_2[0x73];
      param_1[0x73] = uVar25;
      param_1[0x74] = param_2[0x74];
      *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_2 + 0x75);
      uVar21 = param_2[0x76];
      *(undefined1 *)(param_1 + 0x77) = *(undefined1 *)(param_2 + 0x77);
      param_1[0x76] = uVar21;
      param_1[0x78] = param_2[0x78];
      *(undefined1 *)(param_1 + 0x79) = *(undefined1 *)(param_2 + 0x79);
      uVar21 = param_2[0x7a];
      param_1[0x7a] = uVar21;
      uVar30 = param_2[0x7b];
      param_1[0x7b] = uVar30;
      uVar14 = param_2[0x7e];
      uVar13 = param_2[0x81];
      uVar20 = param_2[0x80];
      param_1[0x7f] = param_2[0x7f];
      param_1[0x7e] = uVar14;
      param_1[0x81] = uVar13;
      param_1[0x80] = uVar20;
      uVar20 = param_2[0x82];
      param_1[0x83] = param_2[0x83];
      param_1[0x82] = uVar20;
      uVar20 = param_2[0x84];
      param_1[0x85] = param_2[0x85];
      param_1[0x84] = uVar20;
      uVar20 = param_2[0x86];
      param_1[0x87] = param_2[0x87];
      param_1[0x86] = uVar20;
      uVar20 = param_2[0x7c];
      param_1[0x7d] = param_2[0x7d];
      param_1[0x7c] = uVar20;
      param_1[0x88] = param_2[0x88];
      *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x8a);
      param_1[0x89] = param_2[0x89];
      param_1[0x8b] = param_2[0x8b];
      uVar20 = param_2[0x8c];
      param_1[0x8d] = param_2[0x8d];
      param_1[0x8c] = uVar20;
      uVar20 = param_2[0x8e];
      param_1[0x8f] = param_2[0x8f];
      param_1[0x8e] = uVar20;
      param_1[0x90] = param_2[0x90];
      uVar20 = param_2[0x91];
      param_1[0x91] = uVar20;
      lVar9 = param_2[0x9e];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar20);
      if (lVar9 == 1) {
        uVar21 = param_2[0x9a];
        uVar25 = param_2[0x9d];
        uVar20 = param_2[0x9c];
        param_1[0x9b] = param_2[0x9b];
        param_1[0x9a] = uVar21;
        param_1[0x9d] = uVar25;
        param_1[0x9c] = uVar20;
        uVar21 = param_2[0x9e];
        param_1[0x9f] = param_2[0x9f];
        param_1[0x9e] = uVar21;
        *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
        uVar21 = param_2[0x92];
        uVar25 = param_2[0x95];
        uVar20 = param_2[0x94];
        param_1[0x93] = param_2[0x93];
        param_1[0x92] = uVar21;
        param_1[0x95] = uVar25;
        param_1[0x94] = uVar20;
        uVar21 = param_2[0x96];
        uVar25 = param_2[0x99];
        uVar20 = param_2[0x98];
        param_1[0x97] = param_2[0x97];
        param_1[0x96] = uVar21;
        param_1[0x99] = uVar25;
        param_1[0x98] = uVar20;
      }
      else {
        *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
        param_1[0x93] = param_2[0x93];
        *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
        param_1[0x95] = param_2[0x95];
        *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(param_2 + 0x96);
        param_1[0x97] = param_2[0x97];
        *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
        *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_2 + 0x9a);
        param_1[0x99] = param_2[0x99];
        param_1[0x9b] = param_2[0x9b];
        *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
        param_1[0x9d] = param_2[0x9d];
        param_1[0x9e] = lVar9;
        param_1[0x9f] = param_2[0x9f];
        *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
        _swift_bridgeObjectRetain(lVar9);
      }
      *(undefined1 *)((long)param_1 + 0x502) = *(undefined1 *)((long)param_2 + 0x502);
      param_1[0xa1] = param_2[0xa1];
      uVar21 = param_2[0xa4];
      param_1[0xa5] = param_2[0xa5];
      param_1[0xa4] = uVar21;
      uVar21 = param_2[0xa6];
      param_1[0xa7] = param_2[0xa7];
      param_1[0xa6] = uVar21;
      uVar21 = param_2[0xa8];
      param_1[0xa9] = param_2[0xa9];
      param_1[0xa8] = uVar21;
      *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(param_2 + 0xaa);
      uVar21 = param_2[0xa2];
      param_1[0xa3] = param_2[0xa3];
      param_1[0xa2] = uVar21;
      lVar9 = param_2[0xac];
      _swift_bridgeObjectRetain();
      if (lVar9 == 0) {
        uVar21 = param_2[0xab];
        uVar25 = param_2[0xae];
        uVar20 = param_2[0xad];
        param_1[0xac] = param_2[0xac];
        param_1[0xab] = uVar21;
        param_1[0xae] = uVar25;
        param_1[0xad] = uVar20;
        param_1[0xaf] = param_2[0xaf];
      }
      else {
        param_1[0xab] = param_2[0xab];
        param_1[0xac] = lVar9;
        param_1[0xad] = param_2[0xad];
        uVar21 = param_2[0xae];
        param_1[0xae] = uVar21;
        param_1[0xaf] = param_2[0xaf];
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar21);
      }
      uVar21 = param_2[0xb0];
      param_1[0xb1] = param_2[0xb1];
      param_1[0xb0] = uVar21;
      *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(param_2 + 0xb2);
      param_1[0xb3] = param_2[0xb3];
      param_1[0xb4] = param_2[0xb4];
      *(undefined1 *)(param_1 + 0xb5) = *(undefined1 *)(param_2 + 0xb5);
      uVar21 = param_2[0xb6];
      param_1[0xb6] = uVar21;
      *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
      param_1[0xb7] = param_2[0xb7];
      uVar20 = param_2[0xb9];
      param_1[0xb9] = uVar20;
      uVar25 = param_2[0xba];
      param_1[0xba] = uVar25;
      uVar28 = param_2[0xbb];
      param_1[0xbb] = uVar28;
      uVar29 = param_2[0xbc];
      param_1[0xbc] = uVar29;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      _objc_retain(uVar20);
      _objc_retain(uVar25);
      _objc_retain(uVar28);
      _swift_bridgeObjectRetain(uVar29);
    }
    lVar9 = param_2[0xc1];
    if (lVar9 == 1) {
      uVar21 = param_2[0xc5];
      uVar25 = param_2[200];
      uVar20 = param_2[199];
      param_1[0xc6] = param_2[0xc6];
      param_1[0xc5] = uVar21;
      param_1[200] = uVar25;
      param_1[199] = uVar20;
      uVar21 = *(undefined8 *)((long)param_2 + 0x641);
      *(undefined8 *)((long)param_1 + 0x649) = *(undefined8 *)((long)param_2 + 0x649);
      *(undefined8 *)((long)param_1 + 0x641) = uVar21;
      uVar21 = param_2[0xbd];
      uVar25 = param_2[0xc0];
      uVar20 = param_2[0xbf];
      param_1[0xbe] = param_2[0xbe];
      param_1[0xbd] = uVar21;
      param_1[0xc0] = uVar25;
      param_1[0xbf] = uVar20;
      uVar25 = param_2[0xc1];
      uVar20 = param_2[0xc4];
      uVar21 = param_2[0xc3];
      param_1[0xc2] = param_2[0xc2];
      param_1[0xc1] = uVar25;
      param_1[0xc4] = uVar20;
      param_1[0xc3] = uVar21;
    }
    else {
      param_1[0xbd] = param_2[0xbd];
      param_1[0xbe] = param_2[0xbe];
      *(undefined2 *)(param_1 + 0xbf) = *(undefined2 *)(param_2 + 0xbf);
      param_1[0xc0] = param_2[0xc0];
      param_1[0xc1] = lVar9;
      *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
      param_1[0xc3] = param_2[0xc3];
      *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
      *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(param_2 + 0xc6);
      param_1[0xc5] = param_2[0xc5];
      param_1[199] = param_2[199];
      *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
      param_1[0xc9] = param_2[0xc9];
      *(undefined1 *)(param_1 + 0xca) = *(undefined1 *)(param_2 + 0xca);
      _swift_bridgeObjectRetain();
    }
    lVar9 = param_2[0xd1];
    if (lVar9 == 1) {
      _memcpy(param_1 + 0xcb,param_2 + 0xcb,0x301);
    }
    else {
      *(undefined2 *)(param_1 + 0xcb) = *(undefined2 *)(param_2 + 0xcb);
      param_1[0xcc] = param_2[0xcc];
      *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(param_2 + 0xcd);
      param_1[0xce] = param_2[0xce];
      *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xcf);
      param_1[0xd0] = param_2[0xd0];
      param_1[0xd1] = lVar9;
      *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)(param_2 + 0xd3);
      param_1[0xd2] = param_2[0xd2];
      *(undefined1 *)((long)param_1 + 0x699) = *(undefined1 *)((long)param_2 + 0x699);
      param_1[0xd4] = param_2[0xd4];
      uVar20 = param_2[0xd5];
      param_1[0xd5] = uVar20;
      *(undefined2 *)(param_1 + 0xd6) = *(undefined2 *)(param_2 + 0xd6);
      param_1[0xd7] = param_2[0xd7];
      *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
      param_1[0xd9] = param_2[0xd9];
      *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(param_2 + 0xda);
      uVar21 = param_2[0xdb];
      *(undefined1 *)(param_1 + 0xdc) = *(undefined1 *)(param_2 + 0xdc);
      param_1[0xdb] = uVar21;
      *(undefined1 *)((long)param_1 + 0x6e1) = *(undefined1 *)((long)param_2 + 0x6e1);
      lVar9 = param_2[0xe8];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar20);
      if (lVar9 == 1) {
        _memcpy(param_1 + 0xdd,param_2 + 0xdd,0x101);
      }
      else {
        param_1[0xdd] = param_2[0xdd];
        *(undefined1 *)(param_1 + 0xde) = *(undefined1 *)(param_2 + 0xde);
        param_1[0xdf] = param_2[0xdf];
        *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
        param_1[0xe1] = param_2[0xe1];
        *(undefined1 *)(param_1 + 0xe2) = *(undefined1 *)(param_2 + 0xe2);
        *(undefined1 *)(param_1 + 0xe4) = *(undefined1 *)(param_2 + 0xe4);
        param_1[0xe3] = param_2[0xe3];
        uVar21 = param_2[0xe5];
        *(undefined1 *)(param_1 + 0xe6) = *(undefined1 *)(param_2 + 0xe6);
        param_1[0xe5] = uVar21;
        *(undefined1 *)((long)param_1 + 0x731) = *(undefined1 *)((long)param_2 + 0x731);
        param_1[0xe7] = param_2[0xe7];
        param_1[0xe8] = lVar9;
        param_1[0xe9] = param_2[0xe9];
        uVar20 = param_2[0xea];
        param_1[0xea] = uVar20;
        param_1[0xeb] = param_2[0xeb];
        *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_2 + 0xec);
        *(undefined1 *)(param_1 + 0xee) = *(undefined1 *)(param_2 + 0xee);
        param_1[0xed] = param_2[0xed];
        *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
        param_1[0xef] = param_2[0xef];
        *(undefined1 *)(param_1 + 0xf2) = *(undefined1 *)(param_2 + 0xf2);
        param_1[0xf1] = param_2[0xf1];
        *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(param_2 + 0xf4);
        param_1[0xf3] = param_2[0xf3];
        param_1[0xf5] = param_2[0xf5];
        uVar25 = param_2[0xf6];
        param_1[0xf6] = uVar25;
        uVar21 = param_2[0xf7];
        *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
        param_1[0xf7] = uVar21;
        uVar21 = param_2[0xf9];
        *(undefined1 *)(param_1 + 0xfa) = *(undefined1 *)(param_2 + 0xfa);
        param_1[0xf9] = uVar21;
        param_1[0xfb] = param_2[0xfb];
        uVar21 = param_2[0xfc];
        param_1[0xfc] = uVar21;
        *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(param_2 + 0xfd);
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar21);
      }
      *(undefined1 *)((long)param_1 + 0x7e9) = *(undefined1 *)((long)param_2 + 0x7e9);
      param_1[0xfe] = param_2[0xfe];
      param_1[0xff] = param_2[0xff];
      *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
      if (param_2[0x101] == 1) {
        uVar21 = param_2[0x101];
        param_1[0x102] = param_2[0x102];
        param_1[0x101] = uVar21;
        param_1[0x103] = param_2[0x103];
      }
      else {
        param_1[0x101] = param_2[0x101];
        uVar21 = param_2[0x102];
        param_1[0x102] = uVar21;
        uVar20 = param_2[0x103];
        param_1[0x103] = uVar20;
        _objc_retain();
        _objc_retain(uVar21);
        _objc_retain(uVar20);
      }
      *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
      param_1[0x105] = param_2[0x105];
      *(undefined1 *)(param_1 + 0x106) = *(undefined1 *)(param_2 + 0x106);
      param_1[0x107] = param_2[0x107];
      *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
      lVar9 = param_2[0x10a];
      if (lVar9 == 1) {
        uVar21 = param_2[0x109];
        uVar25 = param_2[0x10c];
        uVar20 = param_2[0x10b];
        param_1[0x10a] = param_2[0x10a];
        param_1[0x109] = uVar21;
        param_1[0x10c] = uVar25;
        param_1[0x10b] = uVar20;
        uVar21 = param_2[0x10d];
        param_1[0x10e] = param_2[0x10e];
        param_1[0x10d] = uVar21;
      }
      else {
        *(undefined2 *)(param_1 + 0x109) = *(undefined2 *)(param_2 + 0x109);
        param_1[0x10a] = lVar9;
        uVar21 = param_2[0x10b];
        param_1[0x10b] = uVar21;
        uVar20 = param_2[0x10c];
        param_1[0x10c] = uVar20;
        *(undefined4 *)(param_1 + 0x10d) = *(undefined4 *)(param_2 + 0x10d);
        uVar25 = param_2[0x10e];
        param_1[0x10e] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar25);
      }
      param_1[0x10f] = param_2[0x10f];
      *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
      param_1[0x111] = param_2[0x111];
      *(undefined2 *)(param_1 + 0x112) = *(undefined2 *)(param_2 + 0x112);
      if (param_2[0x113] == 0) {
        uVar21 = param_2[0x113];
        param_1[0x114] = param_2[0x114];
        param_1[0x113] = uVar21;
        param_1[0x115] = param_2[0x115];
      }
      else {
        param_1[0x113] = param_2[0x113];
        uVar21 = param_2[0x114];
        param_1[0x114] = uVar21;
        uVar20 = param_2[0x115];
        param_1[0x115] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar20);
      }
      param_1[0x116] = param_2[0x116];
      param_1[0x117] = param_2[0x117];
      uVar21 = param_2[0x118];
      param_1[0x118] = uVar21;
      *(undefined1 *)(param_1 + 0x119) = *(undefined1 *)(param_2 + 0x119);
      *(undefined2 *)((long)param_1 + 0x8c9) = *(undefined2 *)((long)param_2 + 0x8c9);
      param_1[0x11a] = param_2[0x11a];
      *(undefined1 *)(param_1 + 0x11b) = *(undefined1 *)(param_2 + 0x11b);
      uVar20 = param_2[0x11c];
      param_1[0x11d] = param_2[0x11d];
      param_1[0x11c] = uVar20;
      param_1[0x11e] = param_2[0x11e];
      *(undefined2 *)(param_1 + 0x11f) = *(undefined2 *)(param_2 + 0x11f);
      param_1[0x120] = param_2[0x120];
      *(undefined4 *)(param_1 + 0x121) = *(undefined4 *)(param_2 + 0x121);
      param_1[0x122] = param_2[0x122];
      *(undefined1 *)(param_1 + 0x123) = *(undefined1 *)(param_2 + 0x123);
      param_1[0x124] = param_2[0x124];
      *(undefined1 *)(param_1 + 0x125) = *(undefined1 *)(param_2 + 0x125);
      *(undefined1 *)(param_1 + 0x127) = *(undefined1 *)(param_2 + 0x127);
      param_1[0x126] = param_2[0x126];
      param_1[0x128] = param_2[0x128];
      uVar20 = param_2[0x129];
      param_1[0x129] = uVar20;
      *(undefined1 *)(param_1 + 299) = *(undefined1 *)(param_2 + 299);
      param_1[0x12a] = param_2[0x12a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar20);
    }
    if (param_2[300] == 1) {
      uVar21 = param_2[300];
      param_1[0x12d] = param_2[0x12d];
      param_1[300] = uVar21;
    }
    else {
      param_1[300] = param_2[300];
      param_1[0x12d] = param_2[0x12d];
      _swift_bridgeObjectRetain();
    }
    lVar9 = param_2[0x12e];
    if (lVar9 != 1) {
      _swift_bridgeObjectRetain();
    }
    param_1[0x12e] = lVar9;
    param_1[0x12f] = lVar24;
    *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_2 + 0x130);
    lVar9 = param_2[0x131];
    _objc_retain(lVar24);
    if (lVar9 == 0) {
      uVar21 = param_2[0x135];
      uVar25 = param_2[0x138];
      uVar20 = param_2[0x137];
      param_1[0x136] = param_2[0x136];
      param_1[0x135] = uVar21;
      param_1[0x138] = uVar25;
      param_1[0x137] = uVar20;
      uVar21 = param_2[0x139];
      param_1[0x13a] = param_2[0x13a];
      param_1[0x139] = uVar21;
      uVar25 = param_2[0x131];
      uVar20 = param_2[0x134];
      uVar21 = param_2[0x133];
      param_1[0x132] = param_2[0x132];
      param_1[0x131] = uVar25;
      param_1[0x134] = uVar20;
      param_1[0x133] = uVar21;
LAB_104242124:
      uVar23 = param_2[0x13c];
      if (uVar23 >> 0x3c < 0xf) {
        uVar21 = param_2[0x13b];
        func_0x00010006c00c(uVar21,uVar23);
        param_1[0x13b] = uVar21;
        param_1[0x13c] = uVar23;
      }
      else {
        uVar21 = param_2[0x13b];
        param_1[0x13c] = param_2[0x13c];
        param_1[0x13b] = uVar21;
      }
    }
    else {
      if (lVar9 != 1) {
        param_1[0x131] = lVar9;
        uVar21 = param_2[0x132];
        param_1[0x132] = uVar21;
        param_1[0x133] = param_2[0x133];
        *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_2 + 0x134);
        param_1[0x135] = param_2[0x135];
        param_1[0x136] = param_2[0x136];
        uVar23 = param_2[0x138];
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar21);
        if (uVar23 >> 0x3c < 0xf) {
          uVar21 = param_2[0x137];
          func_0x00010006c00c(uVar21,uVar23);
          param_1[0x137] = uVar21;
          param_1[0x138] = uVar23;
        }
        else {
          uVar21 = param_2[0x137];
          param_1[0x138] = param_2[0x138];
          param_1[0x137] = uVar21;
        }
        param_1[0x139] = param_2[0x139];
        param_1[0x13a] = param_2[0x13a];
        goto LAB_104242124;
      }
      uVar21 = param_2[0x135];
      uVar25 = param_2[0x138];
      uVar20 = param_2[0x137];
      param_1[0x136] = param_2[0x136];
      param_1[0x135] = uVar21;
      param_1[0x138] = uVar25;
      param_1[0x137] = uVar20;
      uVar21 = param_2[0x139];
      uVar25 = param_2[0x13c];
      uVar20 = param_2[0x13b];
      param_1[0x13a] = param_2[0x13a];
      param_1[0x139] = uVar21;
      param_1[0x13c] = uVar25;
      param_1[0x13b] = uVar20;
      uVar21 = param_2[0x131];
      uVar25 = param_2[0x134];
      uVar20 = param_2[0x133];
      param_1[0x132] = param_2[0x132];
      param_1[0x131] = uVar21;
      param_1[0x134] = uVar25;
      param_1[0x133] = uVar20;
    }
    lVar24 = param_2[0x141];
    if (lVar24 == 1) {
      uVar21 = param_2[0x14d];
      uVar25 = param_2[0x150];
      uVar20 = param_2[0x14f];
      param_1[0x14e] = param_2[0x14e];
      param_1[0x14d] = uVar21;
      param_1[0x150] = uVar25;
      param_1[0x14f] = uVar20;
      uVar21 = param_2[0x151];
      param_1[0x152] = param_2[0x152];
      param_1[0x151] = uVar21;
      uVar21 = *(undefined8 *)((long)param_2 + 0xa91);
      *(undefined8 *)((long)param_1 + 0xa99) = *(undefined8 *)((long)param_2 + 0xa99);
      *(undefined8 *)((long)param_1 + 0xa91) = uVar21;
      uVar21 = param_2[0x145];
      uVar25 = param_2[0x148];
      uVar20 = param_2[0x147];
      param_1[0x146] = param_2[0x146];
      param_1[0x145] = uVar21;
      param_1[0x148] = uVar25;
      param_1[0x147] = uVar20;
      uVar21 = param_2[0x149];
      uVar25 = param_2[0x14c];
      uVar20 = param_2[0x14b];
      param_1[0x14a] = param_2[0x14a];
      param_1[0x149] = uVar21;
      param_1[0x14c] = uVar25;
      param_1[0x14b] = uVar20;
      uVar21 = param_2[0x13d];
      uVar25 = param_2[0x140];
      uVar20 = param_2[0x13f];
      param_1[0x13e] = param_2[0x13e];
      param_1[0x13d] = uVar21;
      param_1[0x140] = uVar25;
      param_1[0x13f] = uVar20;
      uVar21 = param_2[0x141];
      uVar25 = param_2[0x144];
      uVar20 = param_2[0x143];
      param_1[0x142] = param_2[0x142];
      param_1[0x141] = uVar21;
      param_1[0x144] = uVar25;
      param_1[0x143] = uVar20;
    }
    else {
      *(undefined2 *)(param_1 + 0x13d) = *(undefined2 *)(param_2 + 0x13d);
      param_1[0x13e] = param_2[0x13e];
      *(undefined1 *)(param_1 + 0x13f) = *(undefined1 *)(param_2 + 0x13f);
      param_1[0x140] = param_2[0x140];
      param_1[0x141] = lVar24;
      lVar24 = param_2[0x14a];
      _swift_bridgeObjectRetain();
      if (lVar24 == 1) {
        uVar21 = param_2[0x14a];
        uVar25 = param_2[0x14d];
        uVar20 = param_2[0x14c];
        param_1[0x14b] = param_2[0x14b];
        param_1[0x14a] = uVar21;
        param_1[0x14d] = uVar25;
        param_1[0x14c] = uVar20;
        *(undefined1 *)(param_1 + 0x14e) = *(undefined1 *)(param_2 + 0x14e);
        uVar21 = param_2[0x142];
        uVar25 = param_2[0x145];
        uVar20 = param_2[0x144];
        param_1[0x143] = param_2[0x143];
        param_1[0x142] = uVar21;
        param_1[0x145] = uVar25;
        param_1[0x144] = uVar20;
        uVar25 = param_2[0x146];
        uVar20 = param_2[0x149];
        uVar21 = param_2[0x148];
        param_1[0x147] = param_2[0x147];
        param_1[0x146] = uVar25;
        param_1[0x149] = uVar20;
        param_1[0x148] = uVar21;
      }
      else {
        param_1[0x142] = param_2[0x142];
        *(undefined1 *)(param_1 + 0x143) = *(undefined1 *)(param_2 + 0x143);
        param_1[0x144] = param_2[0x144];
        *(undefined1 *)(param_1 + 0x145) = *(undefined1 *)(param_2 + 0x145);
        param_1[0x146] = param_2[0x146];
        *(undefined1 *)(param_1 + 0x147) = *(undefined1 *)(param_2 + 0x147);
        *(undefined1 *)(param_1 + 0x149) = *(undefined1 *)(param_2 + 0x149);
        param_1[0x148] = param_2[0x148];
        param_1[0x14a] = lVar24;
        *(undefined1 *)(param_1 + 0x14c) = *(undefined1 *)(param_2 + 0x14c);
        param_1[0x14b] = param_2[0x14b];
        *(undefined1 *)(param_1 + 0x14e) = *(undefined1 *)(param_2 + 0x14e);
        param_1[0x14d] = param_2[0x14d];
        _objc_retain(lVar24);
      }
      param_1[0x14f] = param_2[0x14f];
      *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
      param_1[0x151] = param_2[0x151];
      *(undefined1 *)(param_1 + 0x152) = *(undefined1 *)(param_2 + 0x152);
      param_1[0x153] = param_2[0x153];
      *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
    }
    if (param_2[0x155] == 1) {
      uVar21 = param_2[0x155];
      param_1[0x156] = param_2[0x156];
      param_1[0x155] = uVar21;
      *(undefined1 *)(param_1 + 0x157) = *(undefined1 *)(param_2 + 0x157);
    }
    else {
      param_1[0x155] = param_2[0x155];
      param_1[0x156] = param_2[0x156];
      *(undefined1 *)(param_1 + 0x157) = *(undefined1 *)(param_2 + 0x157);
      _swift_bridgeObjectRetain();
    }
    lVar24 = param_2[0x15a];
    if (lVar24 == 1) {
      uVar21 = param_2[0x158];
      param_1[0x159] = param_2[0x159];
      param_1[0x158] = uVar21;
      param_1[0x15a] = param_2[0x15a];
    }
    else {
      uVar21 = param_2[0x158];
      param_1[0x159] = param_2[0x159];
      param_1[0x158] = uVar21;
      param_1[0x15a] = lVar24;
      _swift_bridgeObjectRetain();
    }
    param_1[0x15b] = param_2[0x15b];
    param_1[0x15c] = param_2[0x15c];
    *(undefined2 *)(param_1 + 0x15d) = *(undefined2 *)(param_2 + 0x15d);
    _objc_retain();
  }
  lVar24 = param_2[0x15f];
  if (lVar24 == 1) {
    _memcpy(param_1 + 0x15e,param_2 + 0x15e,0xb78);
    goto LAB_104243488;
  }
  param_1[0x15e] = param_2[0x15e];
  param_1[0x15f] = lVar24;
  param_1[0x160] = param_2[0x160];
  *(undefined1 *)(param_1 + 0x161) = *(undefined1 *)(param_2 + 0x161);
  param_1[0x162] = param_2[0x162];
  uVar21 = param_2[0x163];
  param_1[0x163] = uVar21;
  uVar20 = param_2[0x164];
  param_1[0x165] = param_2[0x165];
  param_1[0x164] = uVar20;
  uVar20 = param_2[0x166];
  param_1[0x167] = param_2[0x167];
  param_1[0x166] = uVar20;
  uVar20 = param_2[0x168];
  param_1[0x169] = param_2[0x169];
  param_1[0x168] = uVar20;
  uVar20 = param_2[0x16a];
  param_1[0x16a] = uVar20;
  *(undefined1 *)(param_1 + 0x16b) = *(undefined1 *)(param_2 + 0x16b);
  lVar24 = param_2[0x294];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRetain(uVar20);
  if ((lVar24 == 1) || (lVar24 == 2)) {
    _memcpy(param_1 + 0x16c,param_2 + 0x16c,0xab2);
  }
  else {
    param_1[0x16c] = param_2[0x16c];
    lVar9 = param_2[0x16e];
    if (lVar9 == 1) {
      _memcpy(param_1 + 0x16d,param_2 + 0x16d,0x5a8);
    }
    else {
      param_1[0x16d] = param_2[0x16d];
      param_1[0x16e] = lVar9;
      param_1[0x16f] = param_2[0x16f];
      uVar21 = param_2[0x170];
      param_1[0x171] = param_2[0x171];
      param_1[0x170] = uVar21;
      uVar21 = param_2[0x172];
      param_1[0x173] = param_2[0x173];
      param_1[0x172] = uVar21;
      uVar21 = param_2[0x174];
      param_1[0x175] = param_2[0x175];
      param_1[0x174] = uVar21;
      param_1[0x176] = param_2[0x176];
      uVar21 = param_2[0x177];
      param_1[0x177] = uVar21;
      uVar20 = param_2[0x178];
      param_1[0x179] = param_2[0x179];
      param_1[0x178] = uVar20;
      param_1[0x17a] = param_2[0x17a];
      uVar20 = param_2[0x17b];
      param_1[0x17b] = uVar20;
      *(undefined1 *)(param_1 + 0x17c) = *(undefined1 *)(param_2 + 0x17c);
      lVar9 = param_2[0x17e];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar20);
      if (lVar9 == 0) {
        uVar21 = param_2[0x189];
        uVar25 = param_2[0x18c];
        uVar20 = param_2[0x18b];
        param_1[0x18a] = param_2[0x18a];
        param_1[0x189] = uVar21;
        param_1[0x18c] = uVar25;
        param_1[0x18b] = uVar20;
        param_1[0x18d] = param_2[0x18d];
        uVar21 = param_2[0x181];
        uVar25 = param_2[0x184];
        uVar20 = param_2[0x183];
        param_1[0x182] = param_2[0x182];
        param_1[0x181] = uVar21;
        param_1[0x184] = uVar25;
        param_1[0x183] = uVar20;
        uVar25 = param_2[0x185];
        uVar20 = param_2[0x188];
        uVar21 = param_2[0x187];
        param_1[0x186] = param_2[0x186];
        param_1[0x185] = uVar25;
        param_1[0x188] = uVar20;
        param_1[0x187] = uVar21;
        uVar25 = param_2[0x17d];
        uVar20 = param_2[0x180];
        uVar21 = param_2[0x17f];
        param_1[0x17e] = param_2[0x17e];
        param_1[0x17d] = uVar25;
        param_1[0x180] = uVar20;
        param_1[0x17f] = uVar21;
      }
      else {
        param_1[0x17d] = param_2[0x17d];
        param_1[0x17e] = lVar9;
        param_1[0x17f] = param_2[0x17f];
        uVar21 = param_2[0x180];
        param_1[0x181] = param_2[0x181];
        param_1[0x180] = uVar21;
        uVar21 = param_2[0x182];
        param_1[0x183] = param_2[0x183];
        param_1[0x182] = uVar21;
        uVar21 = param_2[0x184];
        param_1[0x185] = param_2[0x185];
        param_1[0x184] = uVar21;
        uVar21 = param_2[0x186];
        param_1[0x187] = param_2[0x187];
        param_1[0x186] = uVar21;
        *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
        param_1[0x189] = param_2[0x189];
        uVar21 = param_2[0x18a];
        param_1[0x18b] = param_2[0x18b];
        param_1[0x18a] = uVar21;
        uVar21 = param_2[0x18c];
        param_1[0x18c] = uVar21;
        uVar20 = param_2[0x18d];
        param_1[0x18d] = uVar20;
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar20);
      }
      *(undefined1 *)(param_1 + 0x18e) = *(undefined1 *)(param_2 + 0x18e);
      uVar21 = param_2[399];
      param_1[400] = param_2[400];
      param_1[399] = uVar21;
      uVar21 = *(undefined8 *)((long)param_2 + 0xc84);
      *(undefined8 *)((long)param_1 + 0xc8c) = *(undefined8 *)((long)param_2 + 0xc8c);
      *(undefined8 *)((long)param_1 + 0xc84) = uVar21;
      param_1[0x193] = param_2[0x193];
      uVar21 = param_2[0x19e];
      param_1[0x19f] = param_2[0x19f];
      param_1[0x19e] = uVar21;
      uVar21 = param_2[0x1a0];
      param_1[0x1a1] = param_2[0x1a1];
      param_1[0x1a0] = uVar21;
      uVar21 = param_2[0x1a2];
      param_1[0x1a3] = param_2[0x1a3];
      param_1[0x1a2] = uVar21;
      *(undefined1 *)(param_1 + 0x1a4) = *(undefined1 *)(param_2 + 0x1a4);
      uVar21 = param_2[0x196];
      param_1[0x197] = param_2[0x197];
      param_1[0x196] = uVar21;
      uVar21 = param_2[0x198];
      param_1[0x199] = param_2[0x199];
      param_1[0x198] = uVar21;
      uVar21 = param_2[0x19a];
      param_1[0x19b] = param_2[0x19b];
      param_1[0x19a] = uVar21;
      uVar21 = param_2[0x19c];
      param_1[0x19d] = param_2[0x19d];
      param_1[0x19c] = uVar21;
      uVar21 = param_2[0x194];
      param_1[0x195] = param_2[0x195];
      param_1[0x194] = uVar21;
      uVar21 = param_2[0x1ad];
      uVar25 = param_2[0x1b0];
      uVar20 = param_2[0x1af];
      param_1[0x1ae] = param_2[0x1ae];
      param_1[0x1ad] = uVar21;
      param_1[0x1b0] = uVar25;
      param_1[0x1af] = uVar20;
      uVar21 = param_2[0x1b1];
      param_1[0x1b2] = param_2[0x1b2];
      param_1[0x1b1] = uVar21;
      uVar21 = *(undefined8 *)((long)param_2 + 0xd91);
      *(undefined8 *)((long)param_1 + 0xd99) = *(undefined8 *)((long)param_2 + 0xd99);
      *(undefined8 *)((long)param_1 + 0xd91) = uVar21;
      uVar21 = param_2[0x1a5];
      uVar25 = param_2[0x1a8];
      uVar20 = param_2[0x1a7];
      param_1[0x1a6] = param_2[0x1a6];
      param_1[0x1a5] = uVar21;
      param_1[0x1a8] = uVar25;
      param_1[0x1a7] = uVar20;
      uVar21 = param_2[0x1a9];
      uVar25 = param_2[0x1ac];
      uVar20 = param_2[0x1ab];
      param_1[0x1aa] = param_2[0x1aa];
      param_1[0x1a9] = uVar21;
      param_1[0x1ac] = uVar25;
      param_1[0x1ab] = uVar20;
      uVar20 = param_2[0x1b6];
      uVar21 = param_2[0x1b5];
      uVar28 = param_2[0x1b8];
      uVar25 = param_2[0x1b7];
      uVar29 = param_2[0x1b9];
      uVar13 = param_2[0x1bc];
      uVar30 = param_2[0x1bb];
      param_1[0x1ba] = param_2[0x1ba];
      param_1[0x1b9] = uVar29;
      param_1[0x1bc] = uVar13;
      param_1[0x1bb] = uVar30;
      param_1[0x1b6] = uVar20;
      param_1[0x1b5] = uVar21;
      param_1[0x1b8] = uVar28;
      param_1[0x1b7] = uVar25;
      uVar20 = param_2[0x1be];
      uVar21 = param_2[0x1bd];
      uVar28 = param_2[0x1c0];
      uVar25 = param_2[0x1bf];
      uVar30 = param_2[0x1c2];
      uVar29 = param_2[0x1c1];
      uVar13 = *(undefined8 *)((long)param_2 + 0xe12);
      *(undefined8 *)((long)param_1 + 0xe1a) = *(undefined8 *)((long)param_2 + 0xe1a);
      *(undefined8 *)((long)param_1 + 0xe12) = uVar13;
      param_1[0x1c0] = uVar28;
      param_1[0x1bf] = uVar25;
      param_1[0x1c2] = uVar30;
      param_1[0x1c1] = uVar29;
      param_1[0x1be] = uVar20;
      param_1[0x1bd] = uVar21;
      param_1[0x1c5] = param_2[0x1c5];
      param_1[0x1c6] = param_2[0x1c6];
      *(undefined1 *)(param_1 + 0x1c7) = *(undefined1 *)(param_2 + 0x1c7);
      *(undefined1 *)((long)param_1 + 0xe39) = *(undefined1 *)((long)param_2 + 0xe39);
      uVar21 = param_2[0x1c8];
      param_1[0x1c9] = param_2[0x1c9];
      param_1[0x1c8] = uVar21;
      *(undefined1 *)(param_1 + 0x1ca) = *(undefined1 *)(param_2 + 0x1ca);
      uVar21 = param_2[0x1cb];
      param_1[0x1cb] = uVar21;
      *(undefined1 *)(param_1 + 0x1cc) = *(undefined1 *)(param_2 + 0x1cc);
      *(undefined1 *)((long)param_1 + 0xe61) = *(undefined1 *)((long)param_2 + 0xe61);
      lVar9 = param_2[0x1d0];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      if (lVar9 == 1) {
        uVar21 = param_2[0x1cd];
        uVar25 = param_2[0x1d0];
        uVar20 = param_2[0x1cf];
        param_1[0x1ce] = param_2[0x1ce];
        param_1[0x1cd] = uVar21;
        param_1[0x1d0] = uVar25;
        param_1[0x1cf] = uVar20;
        uVar21 = param_2[0x1d1];
        param_1[0x1d2] = param_2[0x1d2];
        param_1[0x1d1] = uVar21;
      }
      else {
        *(undefined1 *)(param_1 + 0x1cd) = *(undefined1 *)(param_2 + 0x1cd);
        uVar21 = param_2[0x1ce];
        param_1[0x1cf] = param_2[0x1cf];
        param_1[0x1ce] = uVar21;
        param_1[0x1d0] = lVar9;
        *(undefined1 *)(param_1 + 0x1d1) = *(undefined1 *)(param_2 + 0x1d1);
        uVar21 = param_2[0x1d2];
        param_1[0x1d2] = uVar21;
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar21);
      }
      *(undefined1 *)(param_1 + 0x1d3) = *(undefined1 *)(param_2 + 0x1d3);
      param_1[0x1d4] = param_2[0x1d4];
      param_1[0x1d5] = param_2[0x1d5];
      uVar29 = param_2[0x1d6];
      param_1[0x1d6] = uVar29;
      uVar28 = param_2[0x1d7];
      param_1[0x1d7] = uVar28;
      uVar21 = param_2[0x1d8];
      param_1[0x1d8] = uVar21;
      param_1[0x1d9] = param_2[0x1d9];
      *(undefined1 *)(param_1 + 0x1da) = *(undefined1 *)(param_2 + 0x1da);
      uVar20 = param_2[0x1db];
      *(undefined1 *)(param_1 + 0x1dc) = *(undefined1 *)(param_2 + 0x1dc);
      param_1[0x1db] = uVar20;
      param_1[0x1dd] = param_2[0x1dd];
      *(undefined1 *)(param_1 + 0x1de) = *(undefined1 *)(param_2 + 0x1de);
      uVar20 = param_2[0x1df];
      param_1[0x1df] = uVar20;
      uVar30 = param_2[0x1e0];
      param_1[0x1e0] = uVar30;
      uVar25 = param_2[0x1e5];
      uVar14 = param_2[0x1e8];
      uVar13 = param_2[0x1e7];
      param_1[0x1e6] = param_2[0x1e6];
      param_1[0x1e5] = uVar25;
      param_1[0x1e8] = uVar14;
      param_1[0x1e7] = uVar13;
      uVar25 = param_2[0x1e9];
      uVar14 = param_2[0x1ec];
      uVar13 = param_2[0x1eb];
      param_1[0x1ea] = param_2[0x1ea];
      param_1[0x1e9] = uVar25;
      param_1[0x1ec] = uVar14;
      param_1[0x1eb] = uVar13;
      uVar25 = param_2[0x1e1];
      uVar14 = param_2[0x1e4];
      uVar13 = param_2[0x1e3];
      param_1[0x1e2] = param_2[0x1e2];
      param_1[0x1e1] = uVar25;
      param_1[0x1e4] = uVar14;
      param_1[0x1e3] = uVar13;
      param_1[0x1ed] = param_2[0x1ed];
      *(undefined1 *)(param_1 + 0x1ef) = *(undefined1 *)(param_2 + 0x1ef);
      param_1[0x1ee] = param_2[0x1ee];
      uVar25 = param_2[0x1f0];
      param_1[0x1f1] = param_2[0x1f1];
      param_1[0x1f0] = uVar25;
      uVar25 = param_2[0x1f2];
      param_1[499] = param_2[499];
      param_1[0x1f2] = uVar25;
      uVar25 = param_2[500];
      param_1[0x1f5] = param_2[0x1f5];
      param_1[500] = uVar25;
      uVar25 = param_2[0x1f6];
      param_1[0x1f6] = uVar25;
      lVar9 = param_2[0x203];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar25);
      if (lVar9 == 1) {
        uVar21 = param_2[0x1ff];
        uVar25 = param_2[0x202];
        uVar20 = param_2[0x201];
        param_1[0x200] = param_2[0x200];
        param_1[0x1ff] = uVar21;
        param_1[0x202] = uVar25;
        param_1[0x201] = uVar20;
        uVar21 = param_2[0x203];
        param_1[0x204] = param_2[0x204];
        param_1[0x203] = uVar21;
        *(undefined2 *)(param_1 + 0x205) = *(undefined2 *)(param_2 + 0x205);
        uVar21 = param_2[0x1f7];
        uVar25 = param_2[0x1fa];
        uVar20 = param_2[0x1f9];
        param_1[0x1f8] = param_2[0x1f8];
        param_1[0x1f7] = uVar21;
        param_1[0x1fa] = uVar25;
        param_1[0x1f9] = uVar20;
        uVar21 = param_2[0x1fb];
        uVar25 = param_2[0x1fe];
        uVar20 = param_2[0x1fd];
        param_1[0x1fc] = param_2[0x1fc];
        param_1[0x1fb] = uVar21;
        param_1[0x1fe] = uVar25;
        param_1[0x1fd] = uVar20;
      }
      else {
        *(undefined1 *)(param_1 + 0x1f7) = *(undefined1 *)(param_2 + 0x1f7);
        param_1[0x1f8] = param_2[0x1f8];
        *(undefined1 *)(param_1 + 0x1f9) = *(undefined1 *)(param_2 + 0x1f9);
        param_1[0x1fa] = param_2[0x1fa];
        *(undefined1 *)(param_1 + 0x1fb) = *(undefined1 *)(param_2 + 0x1fb);
        param_1[0x1fc] = param_2[0x1fc];
        *(undefined1 *)(param_1 + 0x1fd) = *(undefined1 *)(param_2 + 0x1fd);
        *(undefined1 *)(param_1 + 0x1ff) = *(undefined1 *)(param_2 + 0x1ff);
        param_1[0x1fe] = param_2[0x1fe];
        param_1[0x200] = param_2[0x200];
        *(undefined1 *)(param_1 + 0x201) = *(undefined1 *)(param_2 + 0x201);
        param_1[0x202] = param_2[0x202];
        param_1[0x203] = lVar9;
        param_1[0x204] = param_2[0x204];
        *(undefined1 *)(param_1 + 0x205) = *(undefined1 *)(param_2 + 0x205);
        *(undefined1 *)((long)param_1 + 0x1029) = *(undefined1 *)((long)param_2 + 0x1029);
        _swift_bridgeObjectRetain(lVar9);
      }
      *(undefined1 *)((long)param_1 + 0x102a) = *(undefined1 *)((long)param_2 + 0x102a);
      param_1[0x206] = param_2[0x206];
      *(undefined2 *)(param_1 + 0x20f) = *(undefined2 *)(param_2 + 0x20f);
      uVar21 = param_2[0x20b];
      uVar25 = param_2[0x20e];
      uVar20 = param_2[0x20d];
      param_1[0x20c] = param_2[0x20c];
      param_1[0x20b] = uVar21;
      param_1[0x20e] = uVar25;
      param_1[0x20d] = uVar20;
      uVar25 = param_2[0x207];
      uVar20 = param_2[0x20a];
      uVar21 = param_2[0x209];
      param_1[0x208] = param_2[0x208];
      param_1[0x207] = uVar25;
      param_1[0x20a] = uVar20;
      param_1[0x209] = uVar21;
      lVar9 = param_2[0x211];
      _swift_bridgeObjectRetain();
      if (lVar9 == 0) {
        uVar21 = param_2[0x210];
        uVar25 = param_2[0x213];
        uVar20 = param_2[0x212];
        param_1[0x211] = param_2[0x211];
        param_1[0x210] = uVar21;
        param_1[0x213] = uVar25;
        param_1[0x212] = uVar20;
        param_1[0x214] = param_2[0x214];
      }
      else {
        param_1[0x210] = param_2[0x210];
        param_1[0x211] = lVar9;
        param_1[0x212] = param_2[0x212];
        uVar21 = param_2[0x213];
        param_1[0x213] = uVar21;
        param_1[0x214] = param_2[0x214];
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar21);
      }
      uVar21 = param_2[0x215];
      param_1[0x216] = param_2[0x216];
      param_1[0x215] = uVar21;
      *(undefined1 *)(param_1 + 0x217) = *(undefined1 *)(param_2 + 0x217);
      param_1[0x218] = param_2[0x218];
      param_1[0x219] = param_2[0x219];
      *(undefined1 *)(param_1 + 0x21a) = *(undefined1 *)(param_2 + 0x21a);
      uVar21 = param_2[0x21b];
      param_1[0x21b] = uVar21;
      param_1[0x21c] = param_2[0x21c];
      *(undefined1 *)(param_1 + 0x21d) = *(undefined1 *)(param_2 + 0x21d);
      uVar20 = param_2[0x21e];
      param_1[0x21e] = uVar20;
      uVar25 = param_2[0x21f];
      param_1[0x21f] = uVar25;
      uVar28 = param_2[0x220];
      param_1[0x220] = uVar28;
      uVar29 = param_2[0x221];
      param_1[0x221] = uVar29;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      _objc_retain(uVar20);
      _objc_retain(uVar25);
      _objc_retain(uVar28);
      _swift_bridgeObjectRetain(uVar29);
    }
    lVar9 = param_2[0x226];
    if (lVar9 == 1) {
      uVar21 = param_2[0x22a];
      uVar25 = param_2[0x22d];
      uVar20 = param_2[0x22c];
      param_1[0x22b] = param_2[0x22b];
      param_1[0x22a] = uVar21;
      param_1[0x22d] = uVar25;
      param_1[0x22c] = uVar20;
      uVar21 = *(undefined8 *)((long)param_2 + 0x1169);
      *(undefined8 *)((long)param_1 + 0x1171) = *(undefined8 *)((long)param_2 + 0x1171);
      *(undefined8 *)((long)param_1 + 0x1169) = uVar21;
      uVar21 = param_2[0x222];
      uVar25 = param_2[0x225];
      uVar20 = param_2[0x224];
      param_1[0x223] = param_2[0x223];
      param_1[0x222] = uVar21;
      param_1[0x225] = uVar25;
      param_1[0x224] = uVar20;
      uVar25 = param_2[0x226];
      uVar20 = param_2[0x229];
      uVar21 = param_2[0x228];
      param_1[0x227] = param_2[0x227];
      param_1[0x226] = uVar25;
      param_1[0x229] = uVar20;
      param_1[0x228] = uVar21;
    }
    else {
      uVar21 = param_2[0x222];
      param_1[0x223] = param_2[0x223];
      param_1[0x222] = uVar21;
      *(undefined2 *)(param_1 + 0x224) = *(undefined2 *)(param_2 + 0x224);
      param_1[0x225] = param_2[0x225];
      param_1[0x226] = lVar9;
      *(undefined1 *)(param_1 + 0x227) = *(undefined1 *)(param_2 + 0x227);
      param_1[0x228] = param_2[0x228];
      *(undefined1 *)(param_1 + 0x229) = *(undefined1 *)(param_2 + 0x229);
      param_1[0x22a] = param_2[0x22a];
      *(undefined1 *)(param_1 + 0x22b) = *(undefined1 *)(param_2 + 0x22b);
      uVar21 = param_2[0x22c];
      *(undefined1 *)(param_1 + 0x22d) = *(undefined1 *)(param_2 + 0x22d);
      param_1[0x22c] = uVar21;
      param_1[0x22e] = param_2[0x22e];
      *(undefined1 *)(param_1 + 0x22f) = *(undefined1 *)(param_2 + 0x22f);
      _swift_bridgeObjectRetain();
    }
    lVar9 = param_2[0x236];
    if (lVar9 == 1) {
      _memcpy(param_1 + 0x230,param_2 + 0x230,0x301);
    }
    else {
      *(undefined2 *)(param_1 + 0x230) = *(undefined2 *)(param_2 + 0x230);
      param_1[0x231] = param_2[0x231];
      *(undefined1 *)(param_1 + 0x232) = *(undefined1 *)(param_2 + 0x232);
      param_1[0x233] = param_2[0x233];
      *(undefined1 *)(param_1 + 0x234) = *(undefined1 *)(param_2 + 0x234);
      param_1[0x235] = param_2[0x235];
      param_1[0x236] = lVar9;
      param_1[0x237] = param_2[0x237];
      *(undefined1 *)(param_1 + 0x238) = *(undefined1 *)(param_2 + 0x238);
      *(undefined1 *)((long)param_1 + 0x11c1) = *(undefined1 *)((long)param_2 + 0x11c1);
      param_1[0x239] = param_2[0x239];
      uVar20 = param_2[0x23a];
      param_1[0x23a] = uVar20;
      *(undefined2 *)(param_1 + 0x23b) = *(undefined2 *)(param_2 + 0x23b);
      param_1[0x23c] = param_2[0x23c];
      *(undefined1 *)(param_1 + 0x23d) = *(undefined1 *)(param_2 + 0x23d);
      param_1[0x23e] = param_2[0x23e];
      *(undefined1 *)(param_1 + 0x23f) = *(undefined1 *)(param_2 + 0x23f);
      uVar21 = param_2[0x240];
      *(undefined1 *)(param_1 + 0x241) = *(undefined1 *)(param_2 + 0x241);
      param_1[0x240] = uVar21;
      *(undefined1 *)((long)param_1 + 0x1209) = *(undefined1 *)((long)param_2 + 0x1209);
      lVar9 = param_2[0x24d];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar20);
      if (lVar9 == 1) {
        _memcpy(param_1 + 0x242,param_2 + 0x242,0x101);
      }
      else {
        param_1[0x242] = param_2[0x242];
        *(undefined1 *)(param_1 + 0x243) = *(undefined1 *)(param_2 + 0x243);
        param_1[0x244] = param_2[0x244];
        *(undefined1 *)(param_1 + 0x245) = *(undefined1 *)(param_2 + 0x245);
        param_1[0x246] = param_2[0x246];
        *(undefined1 *)(param_1 + 0x247) = *(undefined1 *)(param_2 + 0x247);
        param_1[0x248] = param_2[0x248];
        *(undefined1 *)(param_1 + 0x249) = *(undefined1 *)(param_2 + 0x249);
        uVar21 = param_2[0x24a];
        *(undefined1 *)(param_1 + 0x24b) = *(undefined1 *)(param_2 + 0x24b);
        param_1[0x24a] = uVar21;
        *(undefined1 *)((long)param_1 + 0x1259) = *(undefined1 *)((long)param_2 + 0x1259);
        param_1[0x24c] = param_2[0x24c];
        param_1[0x24d] = lVar9;
        param_1[0x24e] = param_2[0x24e];
        uVar20 = param_2[0x24f];
        param_1[0x24f] = uVar20;
        param_1[0x250] = param_2[0x250];
        *(undefined1 *)(param_1 + 0x251) = *(undefined1 *)(param_2 + 0x251);
        *(undefined1 *)(param_1 + 0x253) = *(undefined1 *)(param_2 + 0x253);
        param_1[0x252] = param_2[0x252];
        *(undefined1 *)(param_1 + 0x255) = *(undefined1 *)(param_2 + 0x255);
        param_1[0x254] = param_2[0x254];
        *(undefined1 *)(param_1 + 599) = *(undefined1 *)(param_2 + 599);
        param_1[0x256] = param_2[0x256];
        *(undefined1 *)(param_1 + 0x259) = *(undefined1 *)(param_2 + 0x259);
        param_1[600] = param_2[600];
        param_1[0x25a] = param_2[0x25a];
        uVar25 = param_2[0x25b];
        param_1[0x25b] = uVar25;
        uVar21 = param_2[0x25c];
        *(undefined1 *)(param_1 + 0x25d) = *(undefined1 *)(param_2 + 0x25d);
        param_1[0x25c] = uVar21;
        uVar21 = param_2[0x25e];
        *(undefined1 *)(param_1 + 0x25f) = *(undefined1 *)(param_2 + 0x25f);
        param_1[0x25e] = uVar21;
        param_1[0x260] = param_2[0x260];
        uVar21 = param_2[0x261];
        param_1[0x261] = uVar21;
        *(undefined1 *)(param_1 + 0x262) = *(undefined1 *)(param_2 + 0x262);
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar21);
      }
      *(undefined1 *)((long)param_1 + 0x1311) = *(undefined1 *)((long)param_2 + 0x1311);
      param_1[0x263] = param_2[0x263];
      param_1[0x264] = param_2[0x264];
      *(undefined1 *)(param_1 + 0x265) = *(undefined1 *)(param_2 + 0x265);
      if (param_2[0x266] == 1) {
        uVar21 = param_2[0x266];
        param_1[0x267] = param_2[0x267];
        param_1[0x266] = uVar21;
        param_1[0x268] = param_2[0x268];
      }
      else {
        param_1[0x266] = param_2[0x266];
        uVar21 = param_2[0x267];
        param_1[0x267] = uVar21;
        uVar20 = param_2[0x268];
        param_1[0x268] = uVar20;
        _objc_retain();
        _objc_retain(uVar21);
        _objc_retain(uVar20);
      }
      *(undefined1 *)(param_1 + 0x269) = *(undefined1 *)(param_2 + 0x269);
      param_1[0x26a] = param_2[0x26a];
      *(undefined1 *)(param_1 + 0x26b) = *(undefined1 *)(param_2 + 0x26b);
      param_1[0x26c] = param_2[0x26c];
      *(undefined1 *)(param_1 + 0x26d) = *(undefined1 *)(param_2 + 0x26d);
      lVar9 = param_2[0x26f];
      if (lVar9 == 1) {
        uVar21 = param_2[0x26e];
        uVar25 = param_2[0x271];
        uVar20 = param_2[0x270];
        param_1[0x26f] = param_2[0x26f];
        param_1[0x26e] = uVar21;
        param_1[0x271] = uVar25;
        param_1[0x270] = uVar20;
        uVar21 = param_2[0x272];
        param_1[0x273] = param_2[0x273];
        param_1[0x272] = uVar21;
      }
      else {
        *(undefined2 *)(param_1 + 0x26e) = *(undefined2 *)(param_2 + 0x26e);
        param_1[0x26f] = lVar9;
        uVar21 = param_2[0x270];
        param_1[0x270] = uVar21;
        uVar20 = param_2[0x271];
        param_1[0x271] = uVar20;
        *(undefined4 *)(param_1 + 0x272) = *(undefined4 *)(param_2 + 0x272);
        uVar25 = param_2[0x273];
        param_1[0x273] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar25);
      }
      param_1[0x274] = param_2[0x274];
      *(undefined1 *)(param_1 + 0x275) = *(undefined1 *)(param_2 + 0x275);
      param_1[0x276] = param_2[0x276];
      *(undefined1 *)(param_1 + 0x277) = *(undefined1 *)(param_2 + 0x277);
      *(undefined1 *)((long)param_1 + 0x13b9) = *(undefined1 *)((long)param_2 + 0x13b9);
      if (param_2[0x278] == 0) {
        uVar21 = param_2[0x278];
        param_1[0x279] = param_2[0x279];
        param_1[0x278] = uVar21;
        param_1[0x27a] = param_2[0x27a];
      }
      else {
        param_1[0x278] = param_2[0x278];
        uVar21 = param_2[0x279];
        param_1[0x279] = uVar21;
        uVar20 = param_2[0x27a];
        param_1[0x27a] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar20);
      }
      param_1[0x27b] = param_2[0x27b];
      param_1[0x27c] = param_2[0x27c];
      uVar21 = param_2[0x27d];
      param_1[0x27d] = uVar21;
      *(undefined1 *)(param_1 + 0x27e) = *(undefined1 *)(param_2 + 0x27e);
      *(undefined2 *)((long)param_1 + 0x13f1) = *(undefined2 *)((long)param_2 + 0x13f1);
      param_1[0x27f] = param_2[0x27f];
      *(undefined1 *)(param_1 + 0x280) = *(undefined1 *)(param_2 + 0x280);
      param_1[0x281] = param_2[0x281];
      uVar20 = param_2[0x282];
      param_1[0x283] = param_2[0x283];
      param_1[0x282] = uVar20;
      *(undefined2 *)(param_1 + 0x284) = *(undefined2 *)(param_2 + 0x284);
      param_1[0x285] = param_2[0x285];
      *(undefined4 *)(param_1 + 0x286) = *(undefined4 *)(param_2 + 0x286);
      param_1[0x287] = param_2[0x287];
      *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_2 + 0x288);
      param_1[0x289] = param_2[0x289];
      *(undefined1 *)(param_1 + 0x28a) = *(undefined1 *)(param_2 + 0x28a);
      *(undefined1 *)(param_1 + 0x28c) = *(undefined1 *)(param_2 + 0x28c);
      param_1[0x28b] = param_2[0x28b];
      param_1[0x28d] = param_2[0x28d];
      uVar20 = param_2[0x28e];
      param_1[0x28e] = uVar20;
      *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x290);
      param_1[0x28f] = param_2[0x28f];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar20);
    }
    if (param_2[0x291] == 1) {
      uVar21 = param_2[0x291];
      param_1[0x292] = param_2[0x292];
      param_1[0x291] = uVar21;
    }
    else {
      param_1[0x291] = param_2[0x291];
      param_1[0x292] = param_2[0x292];
      _swift_bridgeObjectRetain();
    }
    lVar9 = param_2[0x293];
    if (lVar9 != 1) {
      _swift_bridgeObjectRetain();
    }
    param_1[0x293] = lVar9;
    param_1[0x294] = lVar24;
    *(undefined2 *)(param_1 + 0x295) = *(undefined2 *)(param_2 + 0x295);
    lVar9 = param_2[0x296];
    _objc_retain(lVar24);
    if (lVar9 == 0) {
      uVar21 = param_2[0x29a];
      uVar25 = param_2[0x29d];
      uVar20 = param_2[0x29c];
      param_1[0x29b] = param_2[0x29b];
      param_1[0x29a] = uVar21;
      param_1[0x29d] = uVar25;
      param_1[0x29c] = uVar20;
      uVar21 = param_2[0x29e];
      param_1[0x29f] = param_2[0x29f];
      param_1[0x29e] = uVar21;
      uVar25 = param_2[0x296];
      uVar20 = param_2[0x299];
      uVar21 = param_2[0x298];
      param_1[0x297] = param_2[0x297];
      param_1[0x296] = uVar25;
      param_1[0x299] = uVar20;
      param_1[0x298] = uVar21;
LAB_104243160:
      uVar23 = param_2[0x2a1];
      if (uVar23 >> 0x3c < 0xf) {
        uVar21 = param_2[0x2a0];
        func_0x00010006c00c(uVar21,uVar23);
        param_1[0x2a0] = uVar21;
        param_1[0x2a1] = uVar23;
      }
      else {
        uVar21 = param_2[0x2a0];
        param_1[0x2a1] = param_2[0x2a1];
        param_1[0x2a0] = uVar21;
      }
    }
    else {
      if (lVar9 != 1) {
        param_1[0x296] = lVar9;
        uVar21 = param_2[0x297];
        param_1[0x297] = uVar21;
        param_1[0x298] = param_2[0x298];
        *(undefined1 *)(param_1 + 0x299) = *(undefined1 *)(param_2 + 0x299);
        uVar20 = param_2[0x29a];
        param_1[0x29b] = param_2[0x29b];
        param_1[0x29a] = uVar20;
        uVar23 = param_2[0x29d];
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(uVar21);
        if (uVar23 >> 0x3c < 0xf) {
          uVar21 = param_2[0x29c];
          func_0x00010006c00c(uVar21,uVar23);
          param_1[0x29c] = uVar21;
          param_1[0x29d] = uVar23;
        }
        else {
          uVar21 = param_2[0x29c];
          param_1[0x29d] = param_2[0x29d];
          param_1[0x29c] = uVar21;
        }
        uVar21 = param_2[0x29e];
        param_1[0x29f] = param_2[0x29f];
        param_1[0x29e] = uVar21;
        goto LAB_104243160;
      }
      uVar21 = param_2[0x29a];
      uVar25 = param_2[0x29d];
      uVar20 = param_2[0x29c];
      param_1[0x29b] = param_2[0x29b];
      param_1[0x29a] = uVar21;
      param_1[0x29d] = uVar25;
      param_1[0x29c] = uVar20;
      uVar21 = param_2[0x29e];
      uVar25 = param_2[0x2a1];
      uVar20 = param_2[0x2a0];
      param_1[0x29f] = param_2[0x29f];
      param_1[0x29e] = uVar21;
      param_1[0x2a1] = uVar25;
      param_1[0x2a0] = uVar20;
      uVar21 = param_2[0x296];
      uVar25 = param_2[0x299];
      uVar20 = param_2[0x298];
      param_1[0x297] = param_2[0x297];
      param_1[0x296] = uVar21;
      param_1[0x299] = uVar25;
      param_1[0x298] = uVar20;
    }
    lVar24 = param_2[0x2a6];
    if (lVar24 == 1) {
      uVar21 = param_2[0x2b2];
      uVar25 = param_2[0x2b5];
      uVar20 = param_2[0x2b4];
      param_1[0x2b3] = param_2[0x2b3];
      param_1[0x2b2] = uVar21;
      param_1[0x2b5] = uVar25;
      param_1[0x2b4] = uVar20;
      uVar21 = param_2[0x2b6];
      param_1[0x2b7] = param_2[0x2b7];
      param_1[0x2b6] = uVar21;
      uVar21 = *(undefined8 *)((long)param_2 + 0x15b9);
      *(undefined8 *)((long)param_1 + 0x15c1) = *(undefined8 *)((long)param_2 + 0x15c1);
      *(undefined8 *)((long)param_1 + 0x15b9) = uVar21;
      uVar21 = param_2[0x2aa];
      uVar25 = param_2[0x2ad];
      uVar20 = param_2[0x2ac];
      param_1[0x2ab] = param_2[0x2ab];
      param_1[0x2aa] = uVar21;
      param_1[0x2ad] = uVar25;
      param_1[0x2ac] = uVar20;
      uVar21 = param_2[0x2ae];
      uVar25 = param_2[0x2b1];
      uVar20 = param_2[0x2b0];
      param_1[0x2af] = param_2[0x2af];
      param_1[0x2ae] = uVar21;
      param_1[0x2b1] = uVar25;
      param_1[0x2b0] = uVar20;
      uVar21 = param_2[0x2a2];
      uVar25 = param_2[0x2a5];
      uVar20 = param_2[0x2a4];
      param_1[0x2a3] = param_2[0x2a3];
      param_1[0x2a2] = uVar21;
      param_1[0x2a5] = uVar25;
      param_1[0x2a4] = uVar20;
      uVar21 = param_2[0x2a6];
      uVar25 = param_2[0x2a9];
      uVar20 = param_2[0x2a8];
      param_1[0x2a7] = param_2[0x2a7];
      param_1[0x2a6] = uVar21;
      param_1[0x2a9] = uVar25;
      param_1[0x2a8] = uVar20;
    }
    else {
      *(undefined2 *)(param_1 + 0x2a2) = *(undefined2 *)(param_2 + 0x2a2);
      param_1[0x2a3] = param_2[0x2a3];
      *(undefined1 *)(param_1 + 0x2a4) = *(undefined1 *)(param_2 + 0x2a4);
      param_1[0x2a5] = param_2[0x2a5];
      param_1[0x2a6] = lVar24;
      lVar24 = param_2[0x2af];
      _swift_bridgeObjectRetain();
      if (lVar24 == 1) {
        uVar21 = param_2[0x2af];
        uVar25 = param_2[0x2b2];
        uVar20 = param_2[0x2b1];
        param_1[0x2b0] = param_2[0x2b0];
        param_1[0x2af] = uVar21;
        param_1[0x2b2] = uVar25;
        param_1[0x2b1] = uVar20;
        *(undefined1 *)(param_1 + 0x2b3) = *(undefined1 *)(param_2 + 0x2b3);
        uVar21 = param_2[0x2a7];
        uVar25 = param_2[0x2aa];
        uVar20 = param_2[0x2a9];
        param_1[0x2a8] = param_2[0x2a8];
        param_1[0x2a7] = uVar21;
        param_1[0x2aa] = uVar25;
        param_1[0x2a9] = uVar20;
        uVar25 = param_2[0x2ab];
        uVar20 = param_2[0x2ae];
        uVar21 = param_2[0x2ad];
        param_1[0x2ac] = param_2[0x2ac];
        param_1[0x2ab] = uVar25;
        param_1[0x2ae] = uVar20;
        param_1[0x2ad] = uVar21;
      }
      else {
        param_1[0x2a7] = param_2[0x2a7];
        *(undefined1 *)(param_1 + 0x2a8) = *(undefined1 *)(param_2 + 0x2a8);
        param_1[0x2a9] = param_2[0x2a9];
        *(undefined1 *)(param_1 + 0x2aa) = *(undefined1 *)(param_2 + 0x2aa);
        param_1[0x2ab] = param_2[0x2ab];
        *(undefined1 *)(param_1 + 0x2ac) = *(undefined1 *)(param_2 + 0x2ac);
        param_1[0x2ad] = param_2[0x2ad];
        *(undefined1 *)(param_1 + 0x2ae) = *(undefined1 *)(param_2 + 0x2ae);
        param_1[0x2af] = lVar24;
        *(undefined1 *)(param_1 + 0x2b1) = *(undefined1 *)(param_2 + 0x2b1);
        param_1[0x2b0] = param_2[0x2b0];
        *(undefined1 *)(param_1 + 0x2b3) = *(undefined1 *)(param_2 + 0x2b3);
        param_1[0x2b2] = param_2[0x2b2];
        _objc_retain(lVar24);
      }
      param_1[0x2b4] = param_2[0x2b4];
      *(undefined1 *)(param_1 + 0x2b5) = *(undefined1 *)(param_2 + 0x2b5);
      param_1[0x2b6] = param_2[0x2b6];
      *(undefined1 *)(param_1 + 0x2b7) = *(undefined1 *)(param_2 + 0x2b7);
      param_1[0x2b8] = param_2[0x2b8];
      *(undefined1 *)(param_1 + 0x2b9) = *(undefined1 *)(param_2 + 0x2b9);
    }
    if (param_2[0x2ba] == 1) {
      uVar21 = param_2[0x2ba];
      param_1[699] = param_2[699];
      param_1[0x2ba] = uVar21;
      *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 700);
    }
    else {
      param_1[0x2ba] = param_2[0x2ba];
      param_1[699] = param_2[699];
      *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 700);
      _swift_bridgeObjectRetain();
    }
    lVar24 = param_2[0x2bf];
    if (lVar24 == 1) {
      uVar21 = param_2[0x2bd];
      param_1[0x2be] = param_2[0x2be];
      param_1[0x2bd] = uVar21;
      param_1[0x2bf] = param_2[0x2bf];
    }
    else {
      param_1[0x2bd] = param_2[0x2bd];
      param_1[0x2be] = param_2[0x2be];
      param_1[0x2bf] = lVar24;
      _swift_bridgeObjectRetain();
    }
    param_1[0x2c0] = param_2[0x2c0];
    param_1[0x2c1] = param_2[0x2c1];
    *(undefined2 *)(param_1 + 0x2c2) = *(undefined2 *)(param_2 + 0x2c2);
    _objc_retain();
  }
  param_1[0x2c3] = param_2[0x2c3];
  *(undefined2 *)(param_1 + 0x2c4) = *(undefined2 *)(param_2 + 0x2c4);
  param_1[0x2c5] = param_2[0x2c5];
  *(undefined1 *)(param_1 + 0x2c6) = *(undefined1 *)(param_2 + 0x2c6);
  *(undefined2 *)((long)param_1 + 0x1631) = *(undefined2 *)((long)param_2 + 0x1631);
  param_1[0x2c7] = param_2[0x2c7];
  lVar24 = param_2[0x2c9];
  if (lVar24 == 0) {
    uVar21 = param_2[0x2c8];
    uVar25 = param_2[0x2cb];
    uVar20 = param_2[0x2ca];
    param_1[0x2c9] = param_2[0x2c9];
    param_1[0x2c8] = uVar21;
    param_1[0x2cb] = uVar25;
    param_1[0x2ca] = uVar20;
    param_1[0x2cc] = param_2[0x2cc];
  }
  else {
    param_1[0x2c8] = param_2[0x2c8];
    param_1[0x2c9] = lVar24;
    param_1[0x2ca] = param_2[0x2ca];
    uVar21 = param_2[0x2cb];
    param_1[0x2cb] = uVar21;
    param_1[0x2cc] = param_2[0x2cc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
  }
LAB_104243488:
  lVar24 = param_2[0x2cf];
  if (lVar24 == 1) {
    uVar21 = param_2[0x2cd];
    uVar25 = param_2[0x2d0];
    uVar20 = param_2[0x2cf];
    param_1[0x2ce] = param_2[0x2ce];
    param_1[0x2cd] = uVar21;
    param_1[0x2d0] = uVar25;
    param_1[0x2cf] = uVar20;
    param_1[0x2d1] = param_2[0x2d1];
  }
  else {
    *(undefined1 *)(param_1 + 0x2cd) = *(undefined1 *)(param_2 + 0x2cd);
    param_1[0x2ce] = param_2[0x2ce];
    param_1[0x2cf] = lVar24;
    param_1[0x2d0] = param_2[0x2d0];
    uVar21 = param_2[0x2d1];
    param_1[0x2d1] = uVar21;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
  }
  uVar21 = param_2[0x2d2];
  param_1[0x2d3] = param_2[0x2d3];
  param_1[0x2d2] = uVar21;
  lVar24 = param_2[0x2db];
  if (lVar24 == 1) {
    uVar21 = param_2[0x2d4];
    uVar25 = param_2[0x2d7];
    uVar20 = param_2[0x2d6];
    param_1[0x2d5] = param_2[0x2d5];
    param_1[0x2d4] = uVar21;
    param_1[0x2d7] = uVar25;
    param_1[0x2d6] = uVar20;
    uVar21 = param_2[0x2d8];
    uVar25 = param_2[0x2db];
    uVar20 = param_2[0x2da];
    param_1[0x2d9] = param_2[0x2d9];
    param_1[0x2d8] = uVar21;
    param_1[0x2db] = uVar25;
    param_1[0x2da] = uVar20;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d4) = *(undefined1 *)(param_2 + 0x2d4);
    param_1[0x2d5] = param_2[0x2d5];
    uVar21 = param_2[0x2d6];
    param_1[0x2d7] = param_2[0x2d7];
    param_1[0x2d6] = uVar21;
    param_1[0x2d8] = param_2[0x2d8];
    *(undefined1 *)(param_1 + 0x2d9) = *(undefined1 *)(param_2 + 0x2d9);
    *(undefined1 *)((long)param_1 + 0x16c9) = *(undefined1 *)((long)param_2 + 0x16c9);
    *(undefined2 *)((long)param_1 + 0x16ca) = *(undefined2 *)((long)param_2 + 0x16ca);
    param_1[0x2da] = param_2[0x2da];
    param_1[0x2db] = lVar24;
    _swift_bridgeObjectRetain();
  }
  lVar24 = param_2[0x2df];
  if (lVar24 == 1) {
    uVar21 = param_2[0x2dc];
    uVar25 = param_2[0x2df];
    uVar20 = param_2[0x2de];
    param_1[0x2dd] = param_2[0x2dd];
    param_1[0x2dc] = uVar21;
    param_1[0x2df] = uVar25;
    param_1[0x2de] = uVar20;
  }
  else {
    *(undefined1 *)(param_1 + 0x2dc) = *(undefined1 *)(param_2 + 0x2dc);
    param_1[0x2dd] = param_2[0x2dd];
    param_1[0x2de] = param_2[0x2de];
    param_1[0x2df] = lVar24;
    _swift_bridgeObjectRetain();
  }
  uVar21 = param_2[0x2e0];
  param_1[0x2e1] = param_2[0x2e1];
  param_1[0x2e0] = uVar21;
  uVar21 = param_2[0x2e2];
  param_1[0x2e3] = param_2[0x2e3];
  param_1[0x2e2] = uVar21;
  param_1[0x2e4] = param_2[0x2e4];
  *(undefined2 *)(param_1 + 0x2e5) = *(undefined2 *)(param_2 + 0x2e5);
  uVar21 = param_2[0x2e6];
  param_1[0x2e7] = param_2[0x2e7];
  param_1[0x2e6] = uVar21;
  param_1[0x2e8] = param_2[0x2e8];
  param_1[0x2e9] = param_2[0x2e9];
  uVar21 = param_2[0x2ea];
  param_1[0x2eb] = param_2[0x2eb];
  param_1[0x2ea] = uVar21;
  *(undefined1 *)(param_1 + 0x2ec) = *(undefined1 *)(param_2 + 0x2ec);
  lVar24 = param_2[0x2f3];
  _swift_bridgeObjectRetain();
  if (lVar24 == 1) {
    uVar21 = param_2[0x2ed];
    uVar25 = param_2[0x2f0];
    uVar20 = param_2[0x2ef];
    param_1[0x2ee] = param_2[0x2ee];
    param_1[0x2ed] = uVar21;
    param_1[0x2f0] = uVar25;
    param_1[0x2ef] = uVar20;
    uVar21 = param_2[0x2f1];
    param_1[0x2f2] = param_2[0x2f2];
    param_1[0x2f1] = uVar21;
    param_1[0x2f3] = param_2[0x2f3];
  }
  else {
    param_1[0x2ed] = param_2[0x2ed];
    *(undefined1 *)(param_1 + 0x2ee) = *(undefined1 *)(param_2 + 0x2ee);
    param_1[0x2ef] = param_2[0x2ef];
    *(undefined1 *)(param_1 + 0x2f0) = *(undefined1 *)(param_2 + 0x2f0);
    param_1[0x2f1] = param_2[0x2f1];
    *(undefined1 *)(param_1 + 0x2f2) = *(undefined1 *)(param_2 + 0x2f2);
    param_1[0x2f3] = lVar24;
    _swift_bridgeObjectRetain(lVar24);
  }
  *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)(param_2 + 0x2f4);
  param_1[0x2f5] = param_2[0x2f5];
  param_1[0x2f6] = param_2[0x2f6];
  lVar24 = param_2[0x2fa];
  _swift_bridgeObjectRetain();
  if (lVar24 == 1) {
    uVar21 = param_2[0x2f7];
    uVar25 = param_2[0x2fa];
    uVar20 = param_2[0x2f9];
    param_1[0x2f8] = param_2[0x2f8];
    param_1[0x2f7] = uVar21;
    param_1[0x2fa] = uVar25;
    param_1[0x2f9] = uVar20;
    uVar21 = param_2[0x2fb];
    param_1[0x2fc] = param_2[0x2fc];
    param_1[0x2fb] = uVar21;
  }
  else {
    *(undefined1 *)(param_1 + 0x2f7) = *(undefined1 *)(param_2 + 0x2f7);
    uVar21 = param_2[0x2f8];
    param_1[0x2f9] = param_2[0x2f9];
    param_1[0x2f8] = uVar21;
    param_1[0x2fa] = lVar24;
    *(undefined1 *)(param_1 + 0x2fb) = *(undefined1 *)(param_2 + 0x2fb);
    uVar21 = param_2[0x2fc];
    param_1[0x2fc] = uVar21;
    _swift_bridgeObjectRetain(lVar24);
    _swift_bridgeObjectRetain(uVar21);
  }
  param_1[0x2fd] = param_2[0x2fd];
  uVar13 = param_2[0x2fe];
  param_1[0x2fe] = uVar13;
  uVar14 = param_2[0x2ff];
  param_1[0x2ff] = uVar14;
  uVar15 = param_2[0x300];
  param_1[0x300] = uVar15;
  uVar16 = param_2[0x301];
  param_1[0x301] = uVar16;
  *(undefined1 *)(param_1 + 0x302) = *(undefined1 *)(param_2 + 0x302);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar21 = *puVar2;
  uVar25 = puVar2[3];
  uVar20 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar21;
  puVar1[3] = uVar25;
  puVar1[2] = uVar20;
  uVar21 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar21;
  uVar21 = puVar2[6];
  uVar20 = puVar2[7];
  puVar1[6] = uVar21;
  puVar1[7] = uVar20;
  uVar20 = puVar2[8];
  uVar25 = puVar2[9];
  puVar1[8] = uVar20;
  puVar1[9] = uVar25;
  uVar25 = puVar2[10];
  uVar28 = puVar2[0xb];
  puVar1[10] = uVar25;
  puVar1[0xb] = uVar28;
  uVar28 = puVar2[0xc];
  uVar29 = puVar2[0xd];
  puVar1[0xc] = uVar28;
  puVar1[0xd] = uVar29;
  uVar29 = puVar2[0xe];
  uVar30 = puVar2[0xf];
  puVar1[0xe] = uVar29;
  puVar1[0xf] = uVar30;
  uVar30 = puVar2[0x10];
  puVar1[0x10] = uVar30;
  lVar9 = 0;
  func_0x000100b91d00();
  lVar22 = (long)*(int *)(lVar9 + 0x3c);
  lVar10 = 0;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar10 + -8);
  pcVar27 = *(code **)(lVar17 + 0x30);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar25);
  _swift_bridgeObjectRetain(uVar28);
  _swift_bridgeObjectRetain(uVar29);
  _swift_bridgeObjectRetain(uVar30);
  lVar24 = (long)puVar2 + lVar22;
  (*pcVar27)(lVar24,1,lVar10);
  if ((int)lVar24 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar22,(long)puVar2 + lVar22,lVar10);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar22,0,1,lVar10);
  }
  else {
    lVar24 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar22,(long)puVar2 + lVar22,
            *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  }
  lVar22 = (long)*(int *)(lVar9 + 0x40);
  lVar24 = (long)puVar2 + lVar22;
  (*pcVar27)(lVar24,1,lVar10);
  if ((int)lVar24 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar22,(long)puVar2 + lVar22,lVar10);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar22,0,1,lVar10);
  }
  else {
    lVar24 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar22,(long)puVar2 + lVar22,
            *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  }
  lVar22 = (long)*(int *)(lVar9 + 0x44);
  lVar24 = (long)puVar2 + lVar22;
  (*pcVar27)(lVar24,1,lVar10);
  if ((int)lVar24 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar22,(long)puVar2 + lVar22,lVar10);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar22,0,1,lVar10);
  }
  else {
    lVar24 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar22,(long)puVar2 + lVar22,
            *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x4c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x4c));
  uVar21 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x50));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x50)) = uVar21;
  uVar20 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x54));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x54)) = uVar20;
  uVar25 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x58));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x58)) = uVar25;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x5c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x5c));
  lVar24 = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar25);
  if (lVar24 == 1) {
    uVar21 = puVar4[0xc];
    uVar25 = puVar4[0xf];
    uVar20 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar21;
    puVar3[0xf] = uVar25;
    puVar3[0xe] = uVar20;
    uVar21 = puVar4[0x10];
    uVar25 = puVar4[0x13];
    uVar20 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar21;
    puVar3[0x13] = uVar25;
    puVar3[0x12] = uVar20;
    uVar21 = puVar4[4];
    uVar25 = puVar4[7];
    uVar20 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar21;
    puVar3[7] = uVar25;
    puVar3[6] = uVar20;
    uVar21 = puVar4[8];
    uVar25 = puVar4[0xb];
    uVar20 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar21;
    puVar3[0xb] = uVar25;
    puVar3[10] = uVar20;
    uVar21 = *puVar4;
    uVar25 = puVar4[3];
    uVar20 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
    puVar3[3] = uVar25;
    puVar3[2] = uVar20;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    uVar21 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar21;
    uVar20 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar20;
    uVar25 = puVar4[7];
    puVar3[6] = puVar4[6];
    puVar3[7] = uVar25;
    uVar28 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar28;
    *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
    uVar29 = puVar4[0xb];
    puVar3[0xc] = puVar4[0xc];
    puVar3[0xb] = uVar29;
    lVar22 = puVar4[0x12];
    _swift_bridgeObjectRetain(lVar24);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar28);
    if (lVar22 == 0) {
      uVar21 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar21;
      uVar21 = puVar4[0xf];
      puVar3[0x10] = puVar4[0x10];
      puVar3[0xf] = uVar21;
      uVar21 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar21;
      puVar3[0x13] = puVar4[0x13];
    }
    else {
      uVar21 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xe] = uVar21;
      uVar21 = puVar4[0x10];
      puVar3[0xf] = puVar4[0xf];
      puVar3[0x10] = uVar21;
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x12] = lVar22;
      puVar3[0x13] = puVar4[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(lVar22);
    }
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x60)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x60));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 100));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 100));
  lVar24 = puVar4[1];
  if (lVar24 == 1) {
    uVar21 = *puVar4;
    uVar25 = puVar4[3];
    uVar20 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
    puVar3[3] = uVar25;
    puVar3[2] = uVar20;
    puVar3[4] = puVar4[4];
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    puVar3[2] = puVar4[2];
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar4 + 3);
    *(undefined2 *)((long)puVar3 + 0x19) = *(undefined2 *)((long)puVar4 + 0x19);
    puVar3[4] = puVar4[4];
    _swift_bridgeObjectRetain();
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x68));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x68));
  if (puVar4[0x27] == 0) {
    _memcpy(puVar3,puVar4,0x160);
  }
  else {
    uVar21 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
    uVar21 = puVar4[2];
    uVar20 = puVar4[3];
    puVar3[2] = uVar21;
    puVar3[3] = uVar20;
    uVar26 = puVar4[4];
    puVar3[4] = uVar26;
    uVar20 = puVar4[5];
    puVar3[6] = puVar4[6];
    puVar3[5] = uVar20;
    uVar20 = puVar4[7];
    uVar25 = puVar4[8];
    puVar3[7] = uVar20;
    puVar3[8] = uVar25;
    *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(puVar4 + 9);
    *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)((long)puVar4 + 0x4a);
    uVar25 = puVar4[0xb];
    puVar3[10] = puVar4[10];
    puVar3[0xb] = uVar25;
    uVar18 = puVar4[0xc];
    puVar3[0xc] = uVar18;
    *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)(puVar4 + 0xd);
    uVar28 = puVar4[0xe];
    puVar3[0xf] = puVar4[0xf];
    puVar3[0xe] = uVar28;
    *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x10);
    uVar28 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x12] = uVar28;
    uVar29 = puVar4[0x14];
    puVar3[0x13] = puVar4[0x13];
    puVar3[0x14] = uVar29;
    uVar30 = puVar4[0x16];
    puVar3[0x15] = puVar4[0x15];
    puVar3[0x16] = uVar30;
    uVar13 = puVar4[0x18];
    puVar3[0x17] = puVar4[0x17];
    puVar3[0x18] = uVar13;
    uVar14 = puVar4[0x1a];
    puVar3[0x19] = puVar4[0x19];
    puVar3[0x1a] = uVar14;
    uVar15 = puVar4[0x1b];
    puVar3[0x1c] = puVar4[0x1c];
    puVar3[0x1b] = uVar15;
    uVar31 = puVar4[0x1d];
    puVar3[0x1d] = uVar31;
    *(undefined1 *)(puVar3 + 0x1e) = *(undefined1 *)(puVar4 + 0x1e);
    *(undefined1 *)((long)puVar3 + 0xf1) = *(undefined1 *)((long)puVar4 + 0xf1);
    *(undefined1 *)((long)puVar3 + 0xf2) = *(undefined1 *)((long)puVar4 + 0xf2);
    uVar15 = puVar4[0x20];
    puVar3[0x1f] = puVar4[0x1f];
    puVar3[0x20] = uVar15;
    uVar16 = puVar4[0x22];
    puVar3[0x21] = puVar4[0x21];
    puVar3[0x22] = uVar16;
    uVar6 = puVar4[0x24];
    puVar3[0x23] = puVar4[0x23];
    puVar3[0x24] = uVar6;
    uVar7 = puVar4[0x26];
    puVar3[0x25] = puVar4[0x25];
    puVar3[0x26] = uVar7;
    uVar19 = puVar4[0x27];
    puVar3[0x27] = uVar19;
    uVar33 = puVar4[0x28];
    puVar3[0x29] = puVar4[0x29];
    puVar3[0x28] = uVar33;
    uVar33 = puVar4[0x2b];
    puVar3[0x2a] = puVar4[0x2a];
    puVar3[0x2b] = uVar33;
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar30);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar31);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar19);
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x6c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x6c));
  uVar23 = puVar4[1];
  if (uVar23 >> 0x3c < 0xf) {
    uVar21 = *puVar4;
    func_0x00010006c00c(uVar21,uVar23);
    *puVar3 = uVar21;
    puVar3[1] = uVar23;
  }
  else {
    uVar21 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x70)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x70));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x74));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x74));
  uVar21 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar21;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x78));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x78));
  uVar21 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar21;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x7c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x7c));
  uVar20 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar20;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x80));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x80));
  uVar23 = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRetain(uVar20);
  if (uVar23 >> 0x3c < 0xf) {
    uVar21 = *puVar4;
    func_0x00010006c00c(uVar21,uVar23);
    *puVar3 = uVar21;
    puVar3[1] = uVar23;
  }
  else {
    uVar21 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x84));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x84));
  lVar24 = 0;
  func_0x000100b91fbc();
  lVar22 = *(long *)(lVar24 + -8);
  puVar11 = puVar4;
  (**(code **)(lVar22 + 0x30))(puVar4,1,lVar24);
  if ((int)puVar11 == 0) {
    uVar21 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar21;
    uVar21 = puVar4[2];
    uVar25 = puVar4[5];
    uVar20 = puVar4[4];
    puVar3[3] = puVar4[3];
    puVar3[2] = uVar21;
    puVar3[5] = uVar25;
    puVar3[4] = uVar20;
    uVar21 = puVar4[6];
    uVar20 = puVar4[7];
    puVar3[6] = uVar21;
    puVar3[7] = uVar20;
    uVar20 = puVar4[8];
    puVar3[8] = uVar20;
    lVar32 = (long)*(int *)(lVar24 + 0x28);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar20);
    lVar12 = (long)puVar4 + lVar32;
    (*pcVar27)(lVar12,1,lVar10);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar3 + lVar32,(long)puVar4 + lVar32,lVar10);
      (**(code **)(lVar17 + 0x38))((long)puVar3 + lVar32,0,1,lVar10);
    }
    else {
      lVar12 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar32,(long)puVar4 + lVar32,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar24 + 0x2c));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar24 + 0x2c));
    uVar21 = puVar5[1];
    *puVar11 = *puVar5;
    puVar11[1] = uVar21;
    puVar11 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar24 + 0x30));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar24 + 0x30));
    uVar21 = puVar5[1];
    *puVar11 = *puVar5;
    puVar11[1] = uVar21;
    lVar32 = (long)*(int *)(lVar24 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    lVar12 = (long)puVar4 + lVar32;
    (*pcVar27)(lVar12,1,lVar10);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar3 + lVar32,(long)puVar4 + lVar32,lVar10);
      (**(code **)(lVar17 + 0x38))((long)puVar3 + lVar32,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar32,(long)puVar4 + lVar32,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar24 + 0x38));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar24 + 0x38));
    uVar21 = puVar5[1];
    *puVar11 = *puVar5;
    puVar11[1] = uVar21;
    puVar11 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar24 + 0x3c));
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar24 + 0x3c));
    uVar21 = puVar4[1];
    *puVar11 = *puVar4;
    puVar11[1] = uVar21;
    pcVar27 = *(code **)(lVar22 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    (*pcVar27)(puVar3,0,1,lVar24);
  }
  else {
    lVar24 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x88));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x88));
  lVar24 = puVar4[1];
  if (lVar24 == 0) {
    uVar21 = puVar4[0x10];
    uVar25 = puVar4[0x13];
    uVar20 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar21;
    puVar3[0x13] = uVar25;
    puVar3[0x12] = uVar20;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar21 = puVar4[8];
    uVar25 = puVar4[0xb];
    uVar20 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar21;
    puVar3[0xb] = uVar25;
    puVar3[10] = uVar20;
    uVar25 = puVar4[0xc];
    uVar20 = puVar4[0xf];
    uVar21 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar25;
    puVar3[0xf] = uVar20;
    puVar3[0xe] = uVar21;
    uVar21 = *puVar4;
    uVar25 = puVar4[3];
    uVar20 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
    puVar3[3] = uVar25;
    puVar3[2] = uVar20;
    uVar25 = puVar4[4];
    uVar20 = puVar4[7];
    uVar21 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar25;
    puVar3[7] = uVar20;
    puVar3[6] = uVar21;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    lVar24 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar24 == 1) {
      uVar21 = puVar4[2];
      uVar25 = puVar4[5];
      uVar20 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar21;
      puVar3[5] = uVar25;
      puVar3[4] = uVar20;
      uVar21 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar21;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar10 = puVar4[4];
      if (lVar10 == 1) {
        uVar21 = puVar4[2];
        uVar25 = puVar4[5];
        uVar20 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar21;
        puVar3[5] = uVar25;
        puVar3[4] = uVar20;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar21 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar21;
        uVar21 = puVar4[5];
        uVar20 = puVar4[6];
        puVar3[4] = lVar10;
        puVar3[5] = uVar21;
        puVar3[6] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    lVar24 = puVar4[0xf];
    if (lVar24 == 1) {
      uVar21 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar21;
      uVar21 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar21;
      uVar21 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar21;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar10 = puVar4[0xb];
      if (lVar10 == 1) {
        uVar21 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar21;
        uVar21 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar21;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar21 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar21;
        uVar21 = puVar4[0xc];
        uVar20 = puVar4[0xd];
        puVar3[0xb] = lVar10;
        puVar3[0xc] = uVar21;
        puVar3[0xd] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar21 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar21;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x8c)) =
       *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x8c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x90)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x90));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x94));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x94));
  uVar21 = *puVar4;
  uVar25 = puVar4[3];
  uVar20 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar21;
  puVar3[3] = uVar25;
  puVar3[2] = uVar20;
  uVar21 = puVar4[4];
  uVar25 = puVar4[7];
  uVar20 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar21;
  puVar3[7] = uVar25;
  puVar3[6] = uVar20;
  uVar25 = puVar4[0xc];
  uVar20 = puVar4[0xf];
  uVar21 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar25;
  puVar3[0xf] = uVar20;
  puVar3[0xe] = uVar21;
  uVar25 = puVar4[8];
  uVar20 = puVar4[0xb];
  uVar21 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar25;
  puVar3[0xb] = uVar20;
  puVar3[10] = uVar21;
  uVar21 = *(undefined8 *)((long)puVar4 + 0xa9);
  *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
  *(undefined8 *)((long)puVar3 + 0xa9) = uVar21;
  uVar21 = puVar4[0x12];
  uVar25 = puVar4[0x15];
  uVar20 = puVar4[0x14];
  puVar3[0x13] = puVar4[0x13];
  puVar3[0x12] = uVar21;
  puVar3[0x15] = uVar25;
  puVar3[0x14] = uVar20;
  uVar21 = puVar4[0x10];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar21;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x98)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x9c)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x9c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xa0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xa4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa8)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xa8));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xac));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xac));
  lVar24 = puVar4[1];
  if (lVar24 == 0) {
    uVar21 = *puVar4;
    uVar25 = puVar4[3];
    uVar20 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
    puVar3[3] = uVar25;
    puVar3[2] = uVar20;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    uVar21 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar21;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xb0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xb0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xb4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xb4));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xb8));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xb8));
  lVar24 = puVar4[1];
  if (lVar24 == 0) {
    uVar21 = puVar4[0x10];
    uVar25 = puVar4[0x13];
    uVar20 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar21;
    puVar3[0x13] = uVar25;
    puVar3[0x12] = uVar20;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar21 = puVar4[8];
    uVar25 = puVar4[0xb];
    uVar20 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar21;
    puVar3[0xb] = uVar25;
    puVar3[10] = uVar20;
    uVar25 = puVar4[0xc];
    uVar20 = puVar4[0xf];
    uVar21 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar25;
    puVar3[0xf] = uVar20;
    puVar3[0xe] = uVar21;
    uVar21 = *puVar4;
    uVar25 = puVar4[3];
    uVar20 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
    puVar3[3] = uVar25;
    puVar3[2] = uVar20;
    uVar25 = puVar4[4];
    uVar20 = puVar4[7];
    uVar21 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar25;
    puVar3[7] = uVar20;
    puVar3[6] = uVar21;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    lVar24 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar24 == 1) {
      uVar21 = puVar4[2];
      uVar25 = puVar4[5];
      uVar20 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar21;
      puVar3[5] = uVar25;
      puVar3[4] = uVar20;
      uVar21 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar21;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar10 = puVar4[4];
      if (lVar10 == 1) {
        uVar21 = puVar4[2];
        uVar25 = puVar4[5];
        uVar20 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar21;
        puVar3[5] = uVar25;
        puVar3[4] = uVar20;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar21 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar21;
        uVar21 = puVar4[5];
        uVar20 = puVar4[6];
        puVar3[4] = lVar10;
        puVar3[5] = uVar21;
        puVar3[6] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    lVar24 = puVar4[0xf];
    if (lVar24 == 1) {
      uVar21 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar21;
      uVar21 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar21;
      uVar21 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar21;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar10 = puVar4[0xb];
      if (lVar10 == 1) {
        uVar21 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar21;
        uVar21 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar21;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar21 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar21;
        uVar21 = puVar4[0xc];
        uVar20 = puVar4[0xd];
        puVar3[0xb] = lVar10;
        puVar3[0xc] = uVar21;
        puVar3[0xd] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar21 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar21;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xbc));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xbc));
  lVar24 = puVar4[1];
  if (lVar24 == 0) {
    uVar21 = puVar4[0x10];
    uVar25 = puVar4[0x13];
    uVar20 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar21;
    puVar3[0x13] = uVar25;
    puVar3[0x12] = uVar20;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar21 = puVar4[8];
    uVar25 = puVar4[0xb];
    uVar20 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar21;
    puVar3[0xb] = uVar25;
    puVar3[10] = uVar20;
    uVar25 = puVar4[0xc];
    uVar20 = puVar4[0xf];
    uVar21 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar25;
    puVar3[0xf] = uVar20;
    puVar3[0xe] = uVar21;
    uVar21 = *puVar4;
    uVar25 = puVar4[3];
    uVar20 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
    puVar3[3] = uVar25;
    puVar3[2] = uVar20;
    uVar25 = puVar4[4];
    uVar20 = puVar4[7];
    uVar21 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar25;
    puVar3[7] = uVar20;
    puVar3[6] = uVar21;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar24;
    lVar24 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar24 == 1) {
      uVar21 = puVar4[2];
      uVar25 = puVar4[5];
      uVar20 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar21;
      puVar3[5] = uVar25;
      puVar3[4] = uVar20;
      uVar21 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar21;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar10 = puVar4[4];
      if (lVar10 == 1) {
        uVar21 = puVar4[2];
        uVar25 = puVar4[5];
        uVar20 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar21;
        puVar3[5] = uVar25;
        puVar3[4] = uVar20;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar21 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar21;
        uVar21 = puVar4[5];
        uVar20 = puVar4[6];
        puVar3[4] = lVar10;
        puVar3[5] = uVar21;
        puVar3[6] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    lVar24 = puVar4[0xf];
    if (lVar24 == 1) {
      uVar21 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar21;
      uVar21 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar21;
      uVar21 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar21;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar10 = puVar4[0xb];
      if (lVar10 == 1) {
        uVar21 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar21;
        uVar21 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar21;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar21 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar21;
        uVar21 = puVar4[0xc];
        uVar20 = puVar4[0xd];
        puVar3[0xb] = lVar10;
        puVar3[0xc] = uVar21;
        puVar3[0xd] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar24;
      _swift_bridgeObjectRetain(lVar24);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar21 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar21;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xc0)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xc0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xc4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xc4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 200)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xcc)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0xcc));
  iVar8 = *(int *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)iVar8) = *(undefined8 *)((long)param_2 + (long)iVar8);
  return param_1;
}



/* Entry: 10424ff18; end: 10424ff53;  */

undefined8 FUN_10424ff18(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10424ff54; end: 104254063;  */

undefined8 * FUN_10424ff54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar17 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _memcpy(param_1 + 3,param_2 + 3,0x17d0);
  uVar17 = param_2[0x2fd];
  param_1[0x2fe] = param_2[0x2fe];
  param_1[0x2fd] = uVar17;
  param_1[0x2ff] = param_2[0x2ff];
  uVar17 = param_2[0x300];
  uVar6 = *(undefined1 *)(param_2 + 0x302);
  param_1[0x301] = param_2[0x301];
  param_1[0x300] = uVar17;
  *(undefined1 *)(param_1 + 0x302) = uVar6;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar17 = *puVar2;
  uVar19 = puVar2[3];
  uVar18 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar19;
  puVar1[2] = uVar18;
  puVar1[4] = puVar2[4];
  uVar17 = puVar2[5];
  puVar1[6] = puVar2[6];
  puVar1[5] = uVar17;
  uVar17 = puVar2[7];
  puVar1[8] = puVar2[8];
  puVar1[7] = uVar17;
  uVar17 = puVar2[9];
  puVar1[10] = puVar2[10];
  puVar1[9] = uVar17;
  uVar17 = puVar2[0xb];
  puVar1[0xc] = puVar2[0xc];
  puVar1[0xb] = uVar17;
  uVar17 = puVar2[0xd];
  puVar1[0xe] = puVar2[0xe];
  puVar1[0xd] = uVar17;
  uVar17 = puVar2[0xf];
  puVar1[0x10] = puVar2[0x10];
  puVar1[0xf] = uVar17;
  lVar8 = 0;
  func_0x000100b91d00();
  lVar13 = (long)*(int *)(lVar8 + 0x3c);
  lVar9 = 0;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar9 + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar10 = (long)puVar2 + lVar13;
  (*pcVar16)(lVar10,1,lVar9);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar15 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar9);
    (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar13,0,1,lVar9);
  }
  else {
    lVar10 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar13,(long)puVar2 + lVar13,
            *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(lVar8 + 0x40);
  lVar10 = (long)puVar2 + lVar13;
  (*pcVar16)(lVar10,1,lVar9);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar15 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar9);
    (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar13,0,1,lVar9);
  }
  else {
    lVar10 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar13,(long)puVar2 + lVar13,
            *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(lVar8 + 0x44);
  lVar10 = (long)puVar2 + lVar13;
  (*pcVar16)(lVar10,1,lVar9);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar15 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar9);
    (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar13,0,1,lVar9);
  }
  else {
    lVar10 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar13,(long)puVar2 + lVar13,
            *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x48)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x48));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x4c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x4c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x50)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x50));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x54)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x54));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x58)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x58));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x5c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x5c));
  uVar17 = *puVar4;
  uVar19 = puVar4[3];
  uVar18 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar17;
  puVar3[3] = uVar19;
  puVar3[2] = uVar18;
  uVar19 = puVar4[8];
  uVar18 = puVar4[0xb];
  uVar17 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar19;
  puVar3[0xb] = uVar18;
  puVar3[10] = uVar17;
  uVar19 = puVar4[4];
  uVar18 = puVar4[7];
  uVar17 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar19;
  puVar3[7] = uVar18;
  puVar3[6] = uVar17;
  uVar19 = puVar4[0x10];
  uVar18 = puVar4[0x13];
  uVar17 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar19;
  puVar3[0x13] = uVar18;
  puVar3[0x12] = uVar17;
  uVar19 = puVar4[0xc];
  uVar18 = puVar4[0xf];
  uVar17 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar19;
  puVar3[0xf] = uVar18;
  puVar3[0xe] = uVar17;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x60)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x60));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 100));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 100));
  puVar3[4] = puVar4[4];
  uVar19 = *puVar4;
  uVar18 = puVar4[3];
  uVar17 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar19;
  puVar3[3] = uVar18;
  puVar3[2] = uVar17;
  _memcpy((long)puVar1 + (long)*(int *)(lVar8 + 0x68),(long)puVar2 + (long)*(int *)(lVar8 + 0x68),
          0x160);
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x6c));
  uVar17 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x6c));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar17;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x70)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x70));
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x74));
  uVar17 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x74));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar17;
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x78));
  uVar17 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x78));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar17;
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x7c));
  uVar17 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x7c));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar17;
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x80));
  uVar17 = *puVar3;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x80));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar17;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x84));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x84));
  lVar10 = 0;
  func_0x000100b91fbc();
  lVar13 = *(long *)(lVar10 + -8);
  puVar11 = puVar4;
  (**(code **)(lVar13 + 0x30))(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    uVar17 = *puVar4;
    uVar19 = puVar4[3];
    uVar18 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar17;
    puVar3[3] = uVar19;
    puVar3[2] = uVar18;
    puVar3[4] = puVar4[4];
    uVar17 = puVar4[5];
    puVar3[6] = puVar4[6];
    puVar3[5] = uVar17;
    uVar17 = puVar4[7];
    puVar3[8] = puVar4[8];
    puVar3[7] = uVar17;
    lVar14 = (long)*(int *)(lVar10 + 0x28);
    lVar12 = (long)puVar4 + lVar14;
    (*pcVar16)(lVar12,1,lVar9);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar15 + 0x20))((long)puVar3 + lVar14,(long)puVar4 + lVar14,lVar9);
      (**(code **)(lVar15 + 0x38))((long)puVar3 + lVar14,0,1,lVar9);
    }
    else {
      lVar12 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar14,(long)puVar4 + lVar14,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar10 + 0x2c));
    uVar17 = *puVar11;
    puVar7 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar10 + 0x2c));
    puVar7[1] = puVar11[1];
    *puVar7 = uVar17;
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar10 + 0x30));
    uVar17 = *puVar11;
    puVar7 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar10 + 0x30));
    puVar7[1] = puVar11[1];
    *puVar7 = uVar17;
    lVar14 = (long)*(int *)(lVar10 + 0x34);
    lVar12 = (long)puVar4 + lVar14;
    (*pcVar16)(lVar12,1,lVar9);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar15 + 0x20))((long)puVar3 + lVar14,(long)puVar4 + lVar14,lVar9);
      (**(code **)(lVar15 + 0x38))((long)puVar3 + lVar14,0,1,lVar9);
    }
    else {
      lVar9 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar14,(long)puVar4 + lVar14,
              *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar10 + 0x38));
    uVar17 = *puVar11;
    puVar7 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar10 + 0x38));
    puVar7[1] = puVar11[1];
    *puVar7 = uVar17;
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar10 + 0x3c));
    uVar17 = *puVar4;
    puVar11 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar10 + 0x3c));
    puVar11[1] = puVar4[1];
    *puVar11 = uVar17;
    (**(code **)(lVar13 + 0x38))(puVar3,0,1,lVar10);
  }
  else {
    lVar10 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x88));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x88));
  uVar19 = puVar4[8];
  uVar18 = puVar4[0xb];
  uVar17 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar19;
  puVar3[0xb] = uVar18;
  puVar3[10] = uVar17;
  *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
  uVar19 = puVar4[0x10];
  uVar18 = puVar4[0x13];
  uVar17 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar19;
  puVar3[0x13] = uVar18;
  puVar3[0x12] = uVar17;
  uVar17 = puVar4[0xc];
  uVar19 = puVar4[0xf];
  uVar18 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar17;
  puVar3[0xf] = uVar19;
  puVar3[0xe] = uVar18;
  uVar17 = *puVar4;
  uVar19 = puVar4[3];
  uVar18 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar17;
  puVar3[3] = uVar19;
  puVar3[2] = uVar18;
  uVar19 = puVar4[4];
  uVar18 = puVar4[7];
  uVar17 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar19;
  puVar3[7] = uVar18;
  puVar3[6] = uVar17;
  *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x8c)) =
       *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x8c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x90)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x90));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x94));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x94));
  uVar17 = *puVar4;
  uVar19 = puVar4[3];
  uVar18 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar17;
  puVar3[3] = uVar19;
  puVar3[2] = uVar18;
  uVar17 = puVar4[4];
  uVar19 = puVar4[7];
  uVar18 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar17;
  puVar3[7] = uVar19;
  puVar3[6] = uVar18;
  uVar19 = puVar4[0xc];
  uVar18 = puVar4[0xf];
  uVar17 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar19;
  puVar3[0xf] = uVar18;
  puVar3[0xe] = uVar17;
  uVar19 = puVar4[8];
  uVar18 = puVar4[0xb];
  uVar17 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar19;
  puVar3[0xb] = uVar18;
  puVar3[10] = uVar17;
  uVar17 = *(undefined8 *)((long)puVar4 + 0xa9);
  *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
  *(undefined8 *)((long)puVar3 + 0xa9) = uVar17;
  uVar17 = puVar4[0x12];
  uVar19 = puVar4[0x15];
  uVar18 = puVar4[0x14];
  puVar3[0x13] = puVar4[0x13];
  puVar3[0x12] = uVar17;
  puVar3[0x15] = uVar19;
  puVar3[0x14] = uVar18;
  uVar17 = puVar4[0x10];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar17;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x98)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x9c)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x9c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xa0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xa0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xa4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xa4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xa8)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xa8));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xac));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xac));
  uVar17 = *puVar4;
  uVar19 = puVar4[3];
  uVar18 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar17;
  puVar3[3] = uVar19;
  puVar3[2] = uVar18;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xb0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xb0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xb4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xb4));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xb8));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xb8));
  uVar17 = *puVar4;
  uVar19 = puVar4[3];
  uVar18 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar17;
  puVar3[3] = uVar19;
  puVar3[2] = uVar18;
  uVar19 = puVar4[8];
  uVar18 = puVar4[0xb];
  uVar17 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar19;
  puVar3[0xb] = uVar18;
  puVar3[10] = uVar17;
  uVar17 = puVar4[4];
  uVar19 = puVar4[7];
  uVar18 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar17;
  puVar3[7] = uVar19;
  puVar3[6] = uVar18;
  *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
  uVar19 = puVar4[0x10];
  uVar18 = puVar4[0x13];
  uVar17 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar19;
  puVar3[0x13] = uVar18;
  puVar3[0x12] = uVar17;
  uVar17 = puVar4[0xc];
  uVar19 = puVar4[0xf];
  uVar18 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar17;
  puVar3[0xf] = uVar19;
  puVar3[0xe] = uVar18;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xbc));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xbc));
  uVar17 = *puVar4;
  uVar19 = puVar4[3];
  uVar18 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar17;
  puVar3[3] = uVar19;
  puVar3[2] = uVar18;
  uVar19 = puVar4[8];
  uVar18 = puVar4[0xb];
  uVar17 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar19;
  puVar3[0xb] = uVar18;
  puVar3[10] = uVar17;
  uVar17 = puVar4[4];
  uVar19 = puVar4[7];
  uVar18 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar17;
  puVar3[7] = uVar19;
  puVar3[6] = uVar18;
  *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
  uVar19 = puVar4[0x10];
  uVar18 = puVar4[0x13];
  uVar17 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar19;
  puVar3[0x13] = uVar18;
  puVar3[0x12] = uVar17;
  uVar17 = puVar4[0xc];
  uVar19 = puVar4[0xf];
  uVar18 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar17;
  puVar3[0xf] = uVar19;
  puVar3[0xe] = uVar18;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xc0)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xc0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xc4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xc4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 200)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0xcc)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0xcc));
  iVar5 = *(int *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
  return param_1;
}



/* Entry: 104254064; end: 10425407b;  */

void FUN_104254064(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10425407c; end: 10425412b;  */

void FUN_10425407c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = &UNK_10dce4c28;
  puStack_70 = &UNK_10dce4c40;
  puStack_68 = &UNK_10dce4c58;
  puStack_60 = &UNK_10dce4c70;
  puStack_58 = &UNK_10dce4c88;
  puStack_50 = &UNK_10dce4c88;
  puStack_48 = &UNK_10dce4c88;
  puStack_40 = &UNK_10dce4c40;
  lVar1 = 0x13f;
  func_0x000100b91d00();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = puStack_30;
    _swift_initStructMetadata(param_1,0x100,0xb,&puStack_78,param_1 + 0x10);
  }
  return;
}



/* Entry: 10425412c; end: 104254163;  */

void FUN_10425412c(undefined8 param_1)

{
  if (lRam0000000113069b88 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f6b7c);
  return;
}



/* Entry: 104254164; end: 10425416b;  */

byte FUN_104254164(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  byte bVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)puVar9 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = uVar10 - extraout_x8_01;
  if ((((*param_1 == *param_2) && ((char)param_1[1] == (char)param_2[1])) &&
      (*(char *)((long)param_1 + 9) == *(char *)((long)param_2 + 9))) &&
     (*(char *)((long)param_1 + 10) == *(char *)((long)param_2 + 10))) {
    lVar5 = param_2[3];
    if (param_1[3] == 0) {
      if (lVar5 == 0) goto LAB_1042542f4;
    }
    else if ((lVar5 != 0) &&
            (((uVar7 = param_1[2], uVar7 == param_2[2] && (param_1[3] == lVar5)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar7 & 1) != 0)))) {
LAB_1042542f4:
      lVar5 = param_2[5];
      if (param_1[5] == 0) {
        if (lVar5 == 0) goto LAB_104254340;
      }
      else if ((lVar5 != 0) &&
              (((uVar7 = param_1[4], uVar7 == param_2[4] && (param_1[5] == lVar5)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar7 & 1) != 0)))) {
LAB_104254340:
        if (((((int)param_1[6] == (int)param_2[6]) && ((double)param_1[7] == (double)param_2[7])) &&
            ((double)param_1[8] == (double)param_2[8])) && ((char)param_1[9] == (char)param_2[9])) {
          lVar5 = param_2[0xb];
          if (param_1[0xb] == 0) {
            if (lVar5 == 0) goto LAB_1042543cc;
          }
          else if ((lVar5 != 0) &&
                  (((uVar7 = param_1[10], uVar7 == param_2[10] && (param_1[0xb] == lVar5)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar7 & 1) != 0)))) {
LAB_1042543cc:
            lVar5 = param_2[0xd];
            if (param_1[0xd] == 0) {
              if (lVar5 == 0) goto LAB_104254418;
            }
            else if ((lVar5 != 0) &&
                    (((uVar7 = param_1[0xc], uVar7 == param_2[0xc] && (param_1[0xd] == lVar5)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar7 & 1) != 0)))) {
LAB_104254418:
              if (param_1[0xe] == param_2[0xe]) {
                lVar5 = param_2[0x10];
                if (param_1[0x10] == 0) {
                  if (lVar5 == 0) goto LAB_104254468;
                }
                else if ((lVar5 != 0) &&
                        (((uVar7 = param_1[0xf], uVar7 == param_2[0xf] && (param_1[0x10] == lVar5))
                         || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                       (), (uVar7 & 1) != 0)))) {
LAB_104254468:
                  if (((param_1[0x11] == param_2[0x11]) && (param_1[0x12] == param_2[0x12])) &&
                     (((param_1[0x13] == param_2[0x13] &&
                       ((param_1[0x14] == param_2[0x14] && (param_1[0x15] == param_2[0x15])))) &&
                      ((((double)param_1[0x16] == (double)param_2[0x16] &&
                        (((((param_1[0x17] == param_2[0x17] &&
                            ((double)param_1[0x18] == (double)param_2[0x18])) &&
                           ((double)param_1[0x19] == (double)param_2[0x19])) &&
                          (((double)param_1[0x1a] == (double)param_2[0x1a] &&
                           ((double)param_1[0x1b] == (double)param_2[0x1b])))) &&
                         ((double)param_1[0x1c] == (double)param_2[0x1c])))) &&
                       (param_1[0x1d] == param_2[0x1d])))))) {
                    lVar5 = param_2[0x1f];
                    if (param_1[0x1f] == 0) {
                      if (lVar5 == 0) goto LAB_104254574;
                    }
                    else if ((lVar5 != 0) &&
                            (((uVar7 = param_1[0x1e], uVar7 == param_2[0x1e] &&
                              (param_1[0x1f] == lVar5)) ||
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (), (uVar7 & 1) != 0)))) {
LAB_104254574:
                      lVar5 = param_2[0x21];
                      if (param_1[0x21] == 0) {
                        if (lVar5 == 0) goto LAB_1042545b0;
                      }
                      else if ((lVar5 != 0) &&
                              (((uVar7 = param_1[0x20], uVar7 == param_2[0x20] &&
                                (param_1[0x21] == lVar5)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (), (uVar7 & 1) != 0)))) {
LAB_1042545b0:
                        lVar5 = param_2[0x23];
                        if (param_1[0x23] == 0) {
                          if (lVar5 == 0) goto LAB_1042545ec;
                        }
                        else if ((lVar5 != 0) &&
                                (((uVar7 = param_1[0x22], uVar7 == param_2[0x22] &&
                                  (param_1[0x23] == lVar5)) ||
                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (), (uVar7 & 1) != 0)))) {
LAB_1042545ec:
                          lVar5 = param_2[0x25];
                          if (param_1[0x25] == 0) {
                            if (lVar5 == 0) goto LAB_104254628;
                          }
                          else if ((lVar5 != 0) &&
                                  (((uVar7 = param_1[0x24], uVar7 == param_2[0x24] &&
                                    (param_1[0x25] == lVar5)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (), (uVar7 & 1) != 0)))) {
LAB_104254628:
                            if (((char)param_1[0x26] == (char)param_2[0x26]) &&
                               (*(char *)((long)param_1 + 0x131) == *(char *)((long)param_2 + 0x131)
                               )) {
                              lVar5 = param_2[0x28];
                              if (param_1[0x28] == 0) {
                                if (lVar5 == 0) goto LAB_104254684;
                              }
                              else if ((lVar5 != 0) &&
                                      (((uVar7 = param_1[0x27], uVar7 == param_2[0x27] &&
                                        (param_1[0x28] == lVar5)) ||
                                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                  (), (uVar7 & 1) != 0)))) {
LAB_104254684:
                                lVar3 = 0;
                                FUN_10425412c();
                                iVar1 = *(int *)(lVar3 + 0x98);
                                lVar11 = (long)*(int *)(lVar11 + 0x30);
                                func_0x0001009f0578((long)param_1 + (long)iVar1,lVar8);
                                func_0x0001009f0578((long)param_2 + (long)iVar1,lVar8 + lVar11);
                                pcVar13 = *(code **)(lVar12 + 0x30);
                                lVar5 = lVar8;
                                (*pcVar13)(lVar8,1,lVar2);
                                if ((int)lVar5 == 1) {
                                  lVar11 = lVar8 + lVar11;
                                  (*pcVar13)(lVar11,1,lVar2);
                                  if ((int)lVar11 == 1) {
                                    FUN_104255624(lVar8,0x112d373d8,&UNK_10d9014c0);
LAB_1042547bc:
                                    if (((*(double *)((long)param_1 + (long)*(int *)(lVar3 + 0x9c))
                                          == *(double *)
                                              ((long)param_2 + (long)*(int *)(lVar3 + 0x9c))) &&
                                        (*(double *)((long)param_1 + (long)*(int *)(lVar3 + 0xa0))
                                         == *(double *)
                                             ((long)param_2 + (long)*(int *)(lVar3 + 0xa0)))) &&
                                       ((*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0xa4)) ==
                                         *(char *)((long)param_2 + (long)*(int *)(lVar3 + 0xa4)) &&
                                        ((*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0xa8)) ==
                                          *(char *)((long)param_2 + (long)*(int *)(lVar3 + 0xa8)) &&
                                         (*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0xac)) ==
                                          *(char *)((long)param_2 + (long)*(int *)(lVar3 + 0xac)))))
                                        ))) {
                                      bVar6 = *(byte *)((long)param_1 + (long)*(int *)(lVar3 + 0xb0)
                                                       ) ^
                                              *(byte *)((long)param_2 + (long)*(int *)(lVar3 + 0xb0)
                                                       ) ^ 1;
                                      goto LAB_104254284;
                                    }
                                  }
                                  else {
LAB_104254734:
                                    FUN_104255624(lVar8,0x112d373d0,&UNK_10d90f8f0);
                                  }
                                }
                                else {
                                  func_0x0001009f0578(lVar8,uVar10);
                                  lVar5 = lVar8 + lVar11;
                                  (*pcVar13)(lVar5,1,lVar2);
                                  if ((int)lVar5 == 1) {
                                    (**(code **)(lVar12 + 8))(uVar10,lVar2);
                                    goto LAB_104254734;
                                  }
                                  puVar4 = puVar9;
                                  (**(code **)(lVar12 + 0x20))(puVar9,lVar8 + lVar11,lVar2);
                                  func_0x000100df4c40();
                                  uVar7 = uVar10;
                                  __sSQ2eeoiySbx_xtFZTj(uVar10,puVar9,lVar2,puVar4);
                                  pcVar13 = *(code **)(lVar12 + 8);
                                  (*pcVar13)(puVar9,lVar2);
                                  (*pcVar13)(uVar10,lVar2);
                                  FUN_104255624(lVar8,0x112d373d8,&UNK_10d9014c0);
                                  if ((uVar7 & 1) != 0) goto LAB_1042547bc;
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
            }
          }
        }
      }
    }
  }
  bVar6 = 0;
LAB_104254284:
  return bVar6 & 1;
}



/* Entry: 10425416c; end: 104254ab3;  */

byte FUN_10425416c(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  byte bVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)puVar9 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = uVar10 - extraout_x8_01;
  if ((((*param_1 == *param_2) && ((char)param_1[1] == (char)param_2[1])) &&
      (*(char *)((long)param_1 + 9) == *(char *)((long)param_2 + 9))) &&
     (*(char *)((long)param_1 + 10) == *(char *)((long)param_2 + 10))) {
    lVar5 = param_2[3];
    if (param_1[3] == 0) {
      if (lVar5 == 0) goto LAB_1042542f4;
    }
    else if ((lVar5 != 0) &&
            (((uVar7 = param_1[2], uVar7 == param_2[2] && (param_1[3] == lVar5)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar7 & 1) != 0)))) {
LAB_1042542f4:
      lVar5 = param_2[5];
      if (param_1[5] == 0) {
        if (lVar5 == 0) goto LAB_104254340;
      }
      else if ((lVar5 != 0) &&
              (((uVar7 = param_1[4], uVar7 == param_2[4] && (param_1[5] == lVar5)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar7 & 1) != 0)))) {
LAB_104254340:
        if (((((int)param_1[6] == (int)param_2[6]) && ((double)param_1[7] == (double)param_2[7])) &&
            ((double)param_1[8] == (double)param_2[8])) && ((char)param_1[9] == (char)param_2[9])) {
          lVar5 = param_2[0xb];
          if (param_1[0xb] == 0) {
            if (lVar5 == 0) goto LAB_1042543cc;
          }
          else if ((lVar5 != 0) &&
                  (((uVar7 = param_1[10], uVar7 == param_2[10] && (param_1[0xb] == lVar5)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar7 & 1) != 0)))) {
LAB_1042543cc:
            lVar5 = param_2[0xd];
            if (param_1[0xd] == 0) {
              if (lVar5 == 0) goto LAB_104254418;
            }
            else if ((lVar5 != 0) &&
                    (((uVar7 = param_1[0xc], uVar7 == param_2[0xc] && (param_1[0xd] == lVar5)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar7 & 1) != 0)))) {
LAB_104254418:
              if (param_1[0xe] == param_2[0xe]) {
                lVar5 = param_2[0x10];
                if (param_1[0x10] == 0) {
                  if (lVar5 == 0) goto LAB_104254468;
                }
                else if ((lVar5 != 0) &&
                        (((uVar7 = param_1[0xf], uVar7 == param_2[0xf] && (param_1[0x10] == lVar5))
                         || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                       (), (uVar7 & 1) != 0)))) {
LAB_104254468:
                  if (((param_1[0x11] == param_2[0x11]) && (param_1[0x12] == param_2[0x12])) &&
                     (((param_1[0x13] == param_2[0x13] &&
                       ((param_1[0x14] == param_2[0x14] && (param_1[0x15] == param_2[0x15])))) &&
                      ((((double)param_1[0x16] == (double)param_2[0x16] &&
                        (((((param_1[0x17] == param_2[0x17] &&
                            ((double)param_1[0x18] == (double)param_2[0x18])) &&
                           ((double)param_1[0x19] == (double)param_2[0x19])) &&
                          (((double)param_1[0x1a] == (double)param_2[0x1a] &&
                           ((double)param_1[0x1b] == (double)param_2[0x1b])))) &&
                         ((double)param_1[0x1c] == (double)param_2[0x1c])))) &&
                       (param_1[0x1d] == param_2[0x1d])))))) {
                    lVar5 = param_2[0x1f];
                    if (param_1[0x1f] == 0) {
                      if (lVar5 == 0) goto LAB_104254574;
                    }
                    else if ((lVar5 != 0) &&
                            (((uVar7 = param_1[0x1e], uVar7 == param_2[0x1e] &&
                              (param_1[0x1f] == lVar5)) ||
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (), (uVar7 & 1) != 0)))) {
LAB_104254574:
                      lVar5 = param_2[0x21];
                      if (param_1[0x21] == 0) {
                        if (lVar5 == 0) goto LAB_1042545b0;
                      }
                      else if ((lVar5 != 0) &&
                              (((uVar7 = param_1[0x20], uVar7 == param_2[0x20] &&
                                (param_1[0x21] == lVar5)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (), (uVar7 & 1) != 0)))) {
LAB_1042545b0:
                        lVar5 = param_2[0x23];
                        if (param_1[0x23] == 0) {
                          if (lVar5 == 0) goto LAB_1042545ec;
                        }
                        else if ((lVar5 != 0) &&
                                (((uVar7 = param_1[0x22], uVar7 == param_2[0x22] &&
                                  (param_1[0x23] == lVar5)) ||
                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (), (uVar7 & 1) != 0)))) {
LAB_1042545ec:
                          lVar5 = param_2[0x25];
                          if (param_1[0x25] == 0) {
                            if (lVar5 == 0) goto LAB_104254628;
                          }
                          else if ((lVar5 != 0) &&
                                  (((uVar7 = param_1[0x24], uVar7 == param_2[0x24] &&
                                    (param_1[0x25] == lVar5)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (), (uVar7 & 1) != 0)))) {
LAB_104254628:
                            if (((char)param_1[0x26] == (char)param_2[0x26]) &&
                               (*(char *)((long)param_1 + 0x131) == *(char *)((long)param_2 + 0x131)
                               )) {
                              lVar5 = param_2[0x28];
                              if (param_1[0x28] == 0) {
                                if (lVar5 == 0) goto LAB_104254684;
                              }
                              else if ((lVar5 != 0) &&
                                      (((uVar7 = param_1[0x27], uVar7 == param_2[0x27] &&
                                        (param_1[0x28] == lVar5)) ||
                                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                  (), (uVar7 & 1) != 0)))) {
LAB_104254684:
                                lVar3 = 0;
                                FUN_10425412c();
                                iVar1 = *(int *)(lVar3 + 0x98);
                                lVar11 = (long)*(int *)(lVar11 + 0x30);
                                func_0x0001009f0578((long)param_1 + (long)iVar1,lVar8);
                                func_0x0001009f0578((long)param_2 + (long)iVar1,lVar8 + lVar11);
                                pcVar13 = *(code **)(lVar12 + 0x30);
                                lVar5 = lVar8;
                                (*pcVar13)(lVar8,1,lVar2);
                                if ((int)lVar5 == 1) {
                                  lVar11 = lVar8 + lVar11;
                                  (*pcVar13)(lVar11,1,lVar2);
                                  if ((int)lVar11 == 1) {
                                    FUN_104255624(lVar8,0x112d373d8,&UNK_10d9014c0);
LAB_1042547bc:
                                    if (((*(double *)((long)param_1 + (long)*(int *)(lVar3 + 0x9c))
                                          == *(double *)
                                              ((long)param_2 + (long)*(int *)(lVar3 + 0x9c))) &&
                                        (*(double *)((long)param_1 + (long)*(int *)(lVar3 + 0xa0))
                                         == *(double *)
                                             ((long)param_2 + (long)*(int *)(lVar3 + 0xa0)))) &&
                                       ((*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0xa4)) ==
                                         *(char *)((long)param_2 + (long)*(int *)(lVar3 + 0xa4)) &&
                                        ((*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0xa8)) ==
                                          *(char *)((long)param_2 + (long)*(int *)(lVar3 + 0xa8)) &&
                                         (*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0xac)) ==
                                          *(char *)((long)param_2 + (long)*(int *)(lVar3 + 0xac)))))
                                        ))) {
                                      bVar6 = *(byte *)((long)param_1 + (long)*(int *)(lVar3 + 0xb0)
                                                       ) ^
                                              *(byte *)((long)param_2 + (long)*(int *)(lVar3 + 0xb0)
                                                       ) ^ 1;
                                      goto LAB_104254284;
                                    }
                                  }
                                  else {
LAB_104254734:
                                    FUN_104255624(lVar8,0x112d373d0,&UNK_10d90f8f0);
                                  }
                                }
                                else {
                                  func_0x0001009f0578(lVar8,uVar10);
                                  lVar5 = lVar8 + lVar11;
                                  (*pcVar13)(lVar5,1,lVar2);
                                  if ((int)lVar5 == 1) {
                                    (**(code **)(lVar12 + 8))(uVar10,lVar2);
                                    goto LAB_104254734;
                                  }
                                  puVar4 = puVar9;
                                  (**(code **)(lVar12 + 0x20))(puVar9,lVar8 + lVar11,lVar2);
                                  func_0x000100df4c40();
                                  uVar7 = uVar10;
                                  __sSQ2eeoiySbx_xtFZTj(uVar10,puVar9,lVar2,puVar4);
                                  pcVar13 = *(code **)(lVar12 + 8);
                                  (*pcVar13)(puVar9,lVar2);
                                  (*pcVar13)(uVar10,lVar2);
                                  FUN_104255624(lVar8,0x112d373d8,&UNK_10d9014c0);
                                  if ((uVar7 & 1) != 0) goto LAB_1042547bc;
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
            }
          }
        }
      }
    }
  }
  bVar6 = 0;
LAB_104254284:
  return bVar6 & 1;
}



/* Entry: 104254ab4; end: 104254b73;  */

void FUN_104254ab4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x108));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x118));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x128));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x140));
  iVar1 = *(int *)(param_2 + 0x98);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104254b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 104254b74; end: 104254dc3;  */

undefined8 * FUN_104254b74(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 9) = *(undefined2 *)((long)param_2 + 9);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar16 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar16;
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  uVar16 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar16;
  uVar11 = param_2[0x10];
  param_1[0x10] = uVar11;
  uVar16 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar16;
  uVar16 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar16;
  uVar16 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar16;
  uVar16 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar16;
  uVar16 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar16;
  uVar16 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar16;
  uVar16 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar16;
  uVar16 = param_2[0x1f];
  uVar5 = param_2[0x20];
  param_1[0x1f] = uVar16;
  param_1[0x20] = uVar5;
  uVar5 = param_2[0x21];
  uVar6 = param_2[0x22];
  param_1[0x21] = uVar5;
  param_1[0x22] = uVar6;
  uVar6 = param_2[0x23];
  uVar7 = param_2[0x24];
  param_1[0x23] = uVar6;
  param_1[0x24] = uVar7;
  uVar14 = param_2[0x25];
  param_1[0x25] = uVar14;
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)((long)param_1 + 0x131) = *(undefined1 *)((long)param_2 + 0x131);
  uVar7 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar7;
  lVar15 = (long)*(int *)(param_3 + 0x98);
  lVar9 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar9 + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar7);
  lVar10 = (long)param_2 + lVar15;
  (*pcVar13)(lVar10,1,lVar9);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,lVar9);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar15,0,1,lVar9);
  }
  else {
    lVar10 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar15,(long)param_2 + lVar15,
            *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  iVar8 = *(int *)(param_3 + 0xa0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
  *(undefined8 *)((long)param_1 + (long)iVar8) = *(undefined8 *)((long)param_2 + (long)iVar8);
  iVar8 = *(int *)(param_3 + 0xa8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
  *(undefined1 *)((long)param_1 + (long)iVar8) = *(undefined1 *)((long)param_2 + (long)iVar8);
  iVar8 = *(int *)(param_3 + 0xb0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xac)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
  *(undefined1 *)((long)param_1 + (long)iVar8) = *(undefined1 *)((long)param_2 + (long)iVar8);
  return param_1;
}



/* Entry: 104254dc4; end: 104255113;  */

undefined8 * FUN_104254dc4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[10] = param_2[10];
  uVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0xc] = param_2[0xc];
  uVar4 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  uVar4 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  uVar4 = param_1[0x1f];
  param_1[0x1f] = param_2[0x1f];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0x20] = param_2[0x20];
  uVar4 = param_1[0x21];
  param_1[0x21] = param_2[0x21];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0x22] = param_2[0x22];
  uVar4 = param_1[0x23];
  param_1[0x23] = param_2[0x23];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0x24] = param_2[0x24];
  uVar4 = param_1[0x25];
  param_1[0x25] = param_2[0x25];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)((long)param_1 + 0x131) = *(undefined1 *)((long)param_2 + 0x131);
  param_1[0x27] = param_2[0x27];
  uVar4 = param_1[0x28];
  param_1[0x28] = param_2[0x28];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  lVar5 = (long)*(int *)(param_3 + 0x98);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar1 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar2 = (long)param_1 + lVar5;
  (*pcVar7)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x18))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
      goto LAB_104255098;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar1);
    goto LAB_104255098;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
LAB_104255098:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa0));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xa8)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xa8));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xac)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xb0)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xb0));
  return param_1;
}



/* Entry: 104255114; end: 1042552bb;  */

undefined8 * FUN_104255114(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 9) = *(undefined2 *)((long)param_2 + 9);
  uVar6 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  uVar6 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar6;
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar6 = param_2[10];
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar6;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0xe] = param_2[0xe];
  uVar6 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar6;
  uVar6 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar6;
  uVar6 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar6;
  uVar6 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar6;
  uVar6 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar6;
  uVar6 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar6;
  uVar6 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar6;
  param_1[0x1d] = param_2[0x1d];
  uVar6 = param_2[0x1e];
  uVar8 = param_2[0x21];
  uVar7 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar6;
  param_1[0x21] = uVar8;
  param_1[0x20] = uVar7;
  uVar6 = param_2[0x22];
  uVar8 = param_2[0x25];
  uVar7 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar6;
  param_1[0x25] = uVar8;
  param_1[0x24] = uVar7;
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_2 + 0x26);
  uVar6 = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar6;
  lVar4 = (long)*(int *)(param_3 + 0x98);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0xa0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0xa8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0xb0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xac)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 1042552bc; end: 10425552f;  */

undefined8 * FUN_1042552bc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
  uVar3 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  param_1[6] = param_2[6];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar3 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  uVar3 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar3;
  uVar3 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar3;
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  uVar3 = param_2[0x18];
  uVar10 = param_2[0x1b];
  uVar2 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar10;
  param_1[0x1a] = uVar2;
  param_1[0x1c] = param_2[0x1c];
  uVar3 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar3;
  uVar3 = param_1[0x1f];
  param_1[0x1f] = param_2[0x1f];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0x21];
  uVar2 = param_1[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[0x23];
  uVar2 = param_1[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[0x25];
  uVar2 = param_1[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)((long)param_1 + 0x131) = *(undefined1 *)((long)param_2 + 0x131);
  uVar3 = param_2[0x28];
  uVar2 = param_1[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  lVar7 = (long)*(int *)(param_3 + 0x98);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = (long)param_1 + lVar7;
  (*pcVar9)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar7;
  (*pcVar9)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
      goto LAB_1042554c0;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
    goto LAB_1042554c0;
  }
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40))
  ;
LAB_1042554c0:
  iVar1 = *(int *)(param_3 + 0xa0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0xa8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0xb0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xac)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 104255530; end: 104255547;  */

void FUN_104255530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104255548; end: 104255623;  */

void FUN_104255548(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
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
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_170 = &UNK_10dce4cf0;
  puStack_168 = &UNK_10dce4cf0;
  puStack_160 = &UNK_10dce4cf0;
  puStack_158 = &UNK_10dce4d08;
  puStack_150 = &UNK_10dce4d08;
  puStack_130 = &UNK_10dce4cf0;
  puStack_128 = &UNK_10dce4d08;
  puStack_120 = &UNK_10dce4d08;
  puStack_110 = &UNK_10dce4d08;
  puStack_a0 = &UNK_10dce4d08;
  puStack_98 = &UNK_10dce4d08;
  puStack_90 = &UNK_10dce4d08;
  puStack_88 = &UNK_10dce4d08;
  puStack_80 = &UNK_10dce4cf0;
  puStack_78 = &UNK_10dce4cf0;
  puStack_70 = &UNK_10dce4d08;
  lVar2 = 0x13f;
  puStack_178 = puVar1;
  puStack_148 = puVar1;
  puStack_140 = puVar1;
  puStack_138 = puVar1;
  puStack_118 = puVar1;
  puStack_108 = puVar1;
  puStack_100 = puVar1;
  puStack_f8 = puVar1;
  puStack_f0 = puVar1;
  puStack_e8 = puVar1;
  puStack_e0 = puVar1;
  puStack_d8 = puVar1;
  puStack_d0 = puVar1;
  puStack_c8 = puVar1;
  puStack_c0 = puVar1;
  puStack_b8 = puVar1;
  puStack_b0 = puVar1;
  puStack_a8 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar2 + -8) + 0x40;
    puStack_50 = &UNK_10dce4cf0;
    puStack_48 = &UNK_10dce4cf0;
    puStack_40 = &UNK_10dce4cf0;
    puStack_38 = &UNK_10dce4cf0;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    _swift_initStructMetadata(param_1,0x100,0x29,&puStack_178,param_1 + 0x10);
  }
  return;
}



/* Entry: 104255624; end: 104255697;  */

undefined8 FUN_104255624(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104255698; end: 1042556fb;  */

uint FUN_104255698(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_104255f3c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1042556fc; end: 1042557b3;  */

void FUN_1042556fc(void)

{
  undefined8 *puVar1;
  undefined1 auStack_170 [112];
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_100 = 0;
  uStack_f8 = 1;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  uStack_d8 = 1;
  uStack_d0 = 0;
  uStack_c8 = 1;
  uStack_c0 = 0;
  uStack_b8 = 1;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 1;
  uStack_60 = 0;
  uStack_58 = 1;
  uStack_50 = 0;
  uStack_48 = 1;
  uStack_40 = 0;
  uStack_38 = 1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000104255664(&uStack_100,auStack_170);
  FUN_104214514(&uStack_90);
  FUN_1042b869c(0);
  _objc_allocWithZone();
  puVar1 = &uStack_100;
  FUN_1042b76f0();
  puRam0000000113813358 = puVar1;
  return;
}



/* Entry: 1042557b4; end: 1042557f3;  */

undefined8 FUN_1042557b4(void)

{
  if (lRam0000000113069c60 != -1) {
    _swift_once(0x113069c60,FUN_1042556fc);
  }
  return 0x113813358;
}



/* Entry: 1042557f4; end: 104255833; +[SCAdUnlockableSnapCreationInfo identity] */

void FUN_1042557f4(void)

{
  if (lRam0000000113069c60 != -1) {
    _swift_once(0x113069c60,FUN_1042556fc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813358);
  return;
}



/* Entry: 104255834; end: 104255917; -[SCAdUnlockableSnapCreationInfo withCamera:] */

void FUN_104255834(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_180 [112];
  long lStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042b842c(&lStack_110,param_1);
  uStack_108 = param_3 == 0;
  if ((bool)uStack_108) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  uStack_58 = uStack_c8;
  uStack_60 = uStack_d0;
  uStack_48 = uStack_b8;
  uStack_50 = uStack_c0;
  uStack_38 = uStack_a8;
  uStack_40 = uStack_b0;
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_98 = CONCAT71(uStack_107,uStack_108);
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  lStack_110 = lVar2;
  lStack_a0 = lVar2;
  _objc_allocWithZone(uVar1);
  func_0x000104255664(&lStack_a0,auStack_180);
  plVar3 = &lStack_a0;
  FUN_1042b76f0(plVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_104214514(&lStack_110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104255918; end: 1042559cb; -[SCAdUnlockableSnapCreationInfo withIsAudioOn:] */

void FUN_104255918(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_190 [112];
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined6 uStack_116;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042b842c(&uStack_120);
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_58 = uStack_c8;
  uStack_60 = uStack_d0;
  uStack_48 = uStack_b8;
  uStack_50 = uStack_c0;
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  uStack_a8 = CONCAT62(uStack_116,CONCAT11(param_3,uStack_118));
  uStack_b0 = uStack_120;
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  uStack_117 = param_3;
  _objc_allocWithZone(uVar1);
  func_0x000104255664(&uStack_b0,auStack_190);
  puVar2 = &uStack_b0;
  FUN_1042b76f0(puVar2);
  _objc_release(param_1);
  FUN_104214514(&uStack_120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042559cc; end: 104255abf; -[SCAdUnlockableSnapCreationInfo withMediaType:] */

void FUN_1042559cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_210 [112];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
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
  FUN_1042b842c(&uStack_130);
  uStack_b8 = uStack_118;
  uStack_c0 = uStack_120;
  func_0x000101994d34(&uStack_c0);
  uStack_198 = uStack_128;
  uStack_1a0 = uStack_130;
  uStack_148 = uStack_d8;
  uStack_150 = uStack_e0;
  uStack_138 = uStack_c8;
  uStack_140 = uStack_d0;
  uStack_168 = uStack_f8;
  uStack_170 = uStack_100;
  uStack_158 = uStack_e8;
  uStack_160 = uStack_f0;
  uStack_178 = uStack_108;
  uStack_180 = uStack_110;
  uStack_68 = uStack_e8;
  uStack_70 = uStack_f0;
  uStack_58 = uStack_d8;
  uStack_60 = uStack_e0;
  uStack_48 = uStack_c8;
  uStack_50 = uStack_d0;
  uStack_88 = uStack_108;
  uStack_90 = uStack_110;
  uStack_78 = uStack_f8;
  uStack_80 = uStack_100;
  uStack_a8 = uStack_128;
  uStack_b0 = uStack_130;
  lStack_190 = param_3;
  uStack_188 = param_2;
  lStack_a0 = param_3;
  uStack_98 = param_2;
  _objc_allocWithZone(uVar1);
  func_0x000104255664(&uStack_b0,auStack_210);
  puVar2 = &uStack_b0;
  FUN_1042b76f0(puVar2);
  _objc_release(param_1);
  FUN_104214514(&uStack_1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104255ac0; end: 104255ba3; -[SCAdUnlockableSnapCreationInfo withSnapPreviewMillis:] */

void FUN_104255ac0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_180 [112];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042b842c(&uStack_110,param_1);
  uStack_e8 = param_3 == 0;
  if ((bool)uStack_e8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  uStack_58 = uStack_c8;
  uStack_60 = uStack_d0;
  uStack_48 = uStack_b8;
  uStack_50 = uStack_c0;
  uStack_38 = uStack_a8;
  uStack_40 = uStack_b0;
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  uStack_78 = CONCAT71(uStack_e7,uStack_e8);
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  lStack_f0 = lVar2;
  lStack_80 = lVar2;
  _objc_allocWithZone(uVar1);
  func_0x000104255664(&uStack_a0,auStack_180);
  puVar3 = &uStack_a0;
  FUN_1042b76f0(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_104214514(&uStack_110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104255ba4; end: 104255c87; -[SCAdUnlockableSnapCreationInfo withSnapDurationMillis:] */

void FUN_104255ba4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_180 [112];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042b842c(&uStack_110,param_1);
  uStack_d8 = param_3 == 0;
  if ((bool)uStack_d8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  uStack_58 = uStack_c8;
  uStack_60 = uStack_d0;
  uStack_48 = uStack_b8;
  uStack_50 = uStack_c0;
  uStack_38 = uStack_a8;
  uStack_40 = uStack_b0;
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  uStack_68 = CONCAT71(uStack_d7,uStack_d8);
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  lStack_e0 = lVar2;
  lStack_70 = lVar2;
  _objc_allocWithZone(uVar1);
  func_0x000104255664(&uStack_a0,auStack_180);
  puVar3 = &uStack_a0;
  FUN_1042b76f0(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_104214514(&uStack_110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104255c88; end: 104255d6b; -[SCAdUnlockableSnapCreationInfo withFilterSwipeCount:] */

void FUN_104255c88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_180 [112];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042b842c(&uStack_110,param_1);
  uStack_c8 = param_3 == 0;
  if ((bool)uStack_c8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_58 = CONCAT71(uStack_c7,uStack_c8);
  uStack_48 = uStack_b8;
  uStack_50 = uStack_c0;
  uStack_38 = uStack_a8;
  uStack_40 = uStack_b0;
  lStack_d0 = lVar2;
  lStack_60 = lVar2;
  _objc_allocWithZone(uVar1);
  func_0x000104255664(&uStack_a0,auStack_180);
  puVar3 = &uStack_a0;
  FUN_1042b76f0(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_104214514(&uStack_110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104255d6c; end: 104255e4f; -[SCAdUnlockableSnapCreationInfo withGeofilterLoadedCount:] */

void FUN_104255d6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_180 [112];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042b842c(&uStack_110,param_1);
  uStack_b8 = param_3 == 0;
  if ((bool)uStack_b8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_48 = CONCAT71(uStack_b7,uStack_b8);
  uStack_58 = uStack_c8;
  uStack_60 = uStack_d0;
  uStack_38 = uStack_a8;
  uStack_40 = uStack_b0;
  lStack_c0 = lVar2;
  lStack_50 = lVar2;
  _objc_allocWithZone(uVar1);
  func_0x000104255664(&uStack_a0,auStack_180);
  puVar3 = &uStack_a0;
  FUN_1042b76f0(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_104214514(&uStack_110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104255e50; end: 104255f3b; -[SCAdUnlockableSnapCreationInfo withFilterCarouselEntryDirection:] */

void FUN_104255e50(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_210 [112];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
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
  FUN_1042b842c(&uStack_130);
  uStack_b8 = uStack_c8;
  uStack_c0 = uStack_d0;
  func_0x000101994d34(&uStack_c0);
  uStack_198 = uStack_128;
  uStack_1a0 = uStack_130;
  uStack_188 = uStack_118;
  uStack_190 = uStack_120;
  uStack_158 = uStack_e8;
  uStack_160 = uStack_f0;
  uStack_148 = uStack_d8;
  uStack_150 = uStack_e0;
  uStack_178 = uStack_108;
  uStack_180 = uStack_110;
  uStack_168 = uStack_f8;
  uStack_170 = uStack_100;
  uStack_68 = uStack_e8;
  uStack_70 = uStack_f0;
  uStack_58 = uStack_d8;
  uStack_60 = uStack_e0;
  uStack_88 = uStack_108;
  uStack_90 = uStack_110;
  uStack_78 = uStack_f8;
  uStack_80 = uStack_100;
  uStack_a8 = uStack_128;
  uStack_b0 = uStack_130;
  uStack_98 = uStack_118;
  uStack_a0 = uStack_120;
  lStack_140 = param_3;
  uStack_138 = param_2;
  lStack_50 = param_3;
  uStack_48 = param_2;
  _objc_allocWithZone(uVar1);
  func_0x000104255664(&uStack_b0,auStack_210);
  puVar2 = &uStack_b0;
  FUN_1042b76f0(puVar2);
  _objc_release(param_1);
  FUN_104214514(&uStack_1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104255f3c; end: 1042561fb;  */

undefined8 FUN_104255f3c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[1] == '\x01' || *param_1 != *param_2) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 9) ^ *(byte *)((long)param_2 + 9)) & 1) != 0) {
    return 0;
  }
  lVar2 = param_1[3];
  lVar1 = param_2[3];
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = param_1[2];
    if (((uVar3 != param_2[2]) || (lVar2 != lVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar2,param_2[2],lVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)param_1[5] == '\x01') {
    if ((char)param_2[5] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[5] == '\x01') {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
  }
  if ((char)param_1[7] == '\x01') {
    if ((char)param_2[7] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[7] == '\x01') {
      return 0;
    }
    if (param_1[6] != param_2[6]) {
      return 0;
    }
  }
  if ((char)param_1[9] == '\x01') {
    if ((char)param_2[9] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[9] == '\x01') {
      return 0;
    }
    if (param_1[8] != param_2[8]) {
      return 0;
    }
  }
  if ((char)param_1[0xb] == '\x01') {
    if ((char)param_2[0xb] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0xb] == '\x01') {
      return 0;
    }
    if (param_1[10] != param_2[10]) {
      return 0;
    }
  }
  lVar2 = param_1[0xd];
  lVar1 = param_2[0xd];
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return 1;
    }
  }
  else if (lVar1 != 0) {
    uVar3 = param_1[0xc];
    if ((uVar3 == param_2[0xc]) && (lVar2 == lVar1)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar2,param_2[0xc],lVar1,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1042561fc; end: 1042562bf;  */

undefined8 * FUN_1042561fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = uVar1;
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1042562c0; end: 10425635b;  */

undefined8 * FUN_1042562c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = param_2[10];
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10425635c; end: 104256437;  */

int FUN_10425635c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104256438; end: 10425646f;  */

void FUN_104256438(undefined8 param_1)

{
  if (lRam0000000113069cc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f6bc0);
  return;
}



/* Entry: 104256470; end: 10425650b;  */

long * FUN_104256470(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar4 = *param_2;
    lVar1 = param_2[1];
    func_0x00010006c00c(lVar4,lVar1);
    *param_1 = lVar4;
    param_1[1] = lVar1;
    iVar3 = *(int *)(param_3 + 0x14);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))
              ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10425650c; end: 104256553;  */

void FUN_10425650c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x00010006c090(*param_1,param_1[1]);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000104256550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 104256554; end: 10425663b;  */

undefined8 * FUN_104256554(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  iVar3 = *(int *)(param_3 + 0x14);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  return param_1;
}



/* Entry: 10425663c; end: 1042566fb;  */

undefined8 * FUN_10425663c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 1042566fc; end: 104256713;  */

void FUN_1042566fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104256714; end: 104256787;  */

void FUN_104256714(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dce4d88;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 104256788; end: 1042567fb;  */

bool FUN_104256788(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && param_1[1] == param_2[1];
}



/* Entry: 1042567fc; end: 10425804f;  */

void FUN_1042567fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  ulong uVar4;
  undefined1 auStack_810 [8];
  long lStack_808;
  undefined1 *puStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  ulong uStack_7a8;
  
  lVar1 = 0;
  lStack_7b0 = param_1;
  uStack_7a8 = param_2;
  func_0x00010463e554();
  lStack_808 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puStack_800 = auStack_810 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)(auStack_810 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0;
  lStack_7f8 = lVar3;
  FUN_104259764();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar3 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_7b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_00;
  lStack_7c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_01;
  lStack_7d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_02;
  lStack_7c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_03;
  lStack_7d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_04;
  lStack_7e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_05;
  lStack_7e8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_06;
  lStack_7f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x113069da0;
  func_0x0001000285a8(0x113069da0,&UNK_10dce4f40);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = ((((((lVar3 - extraout_x12_07) - extraout_x12_08) - extraout_x12_09) - extraout_x12_10) -
           extraout_x12_11) - extraout_x12_12) - extraout_x8_01;
  lVar1 = uVar4 + (long)*(int *)(lVar1 + 0x30);
  func_0x0001030b77a4(lStack_7b0,uVar4);
  lStack_7b0 = lVar1;
  func_0x0001030b77a4(uStack_7a8,lVar1);
  uStack_7a8 = uVar4;
  _swift_getEnumCaseMultiPayload(uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000104256ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dce4df0 + (uVar4 & 0xffffffff) * 2) * 4 + 0x104256ad4))();
  return;
}



/* Entry: 104258050; end: 104258347;  */

void FUN_104258050(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload();
  switch((int)puVar3) {
  case 1:
    if (param_1[0xb] == 1) {
      return;
    }
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_1[0xd]);
    _swift_bridgeObjectRelease(param_1[0x19]);
    uVar4 = param_1[0x1f];
    break;
  case 2:
  case 4:
  case 0xb:
  case 0xd:
    uVar4 = *param_1;
    goto code_r0x0001042580ac;
  case 3:
    _swift_bridgeObjectRelease(param_1[1]);
    _objc_release(param_1[2]);
    uVar4 = param_1[3];
code_r0x0001042580ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  case 5:
    lVar5 = 0;
    func_0x00010463e554();
    lVar8 = (long)*(int *)(lVar5 + 0x14);
    uVar4 = 0;
    func_0x00010464151c(0);
    lVar6 = (long)param_1 + lVar8;
    _swift_getEnumCaseMultiPayload(lVar6,uVar4);
    if ((int)lVar6 == 0) {
      lVar7 = 0;
      __s10Foundation3URLVMa();
      lVar9 = *(long *)(lVar7 + -8);
      lVar6 = (long)param_1 + lVar8;
      (**(code **)(lVar9 + 0x30))(lVar6,1,lVar7);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar7);
      }
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar1 + 8));
    lVar5 = 0;
    func_0x0001046305a8();
    iVar2 = *(int *)(lVar5 + 0x14);
    lVar8 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar8 + -8);
    pcVar10 = *(code **)(lVar7 + 0x30);
    lVar6 = (long)param_1 + (long)iVar2 + (long)iVar1;
    (*pcVar10)(lVar6,1,lVar8);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 8))((long)param_1 + (long)iVar2 + (long)iVar1,lVar8);
    }
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18) + (long)iVar1));
    lVar6 = (long)*(int *)(lVar5 + 0x20) + (long)iVar1;
    if (*(long *)((long)param_1 + lVar6 + 8) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + lVar6 + 0x18));
    }
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38) + (long)iVar1));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x44) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x48) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x58) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x5c) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x60) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 100) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x68) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x80) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x8c) + (long)iVar1));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x94) + (long)iVar1 + 8));
    lVar6 = (long)*(int *)(lVar5 + 0xa0) + (long)iVar1;
    if (*(long *)((long)param_1 + lVar6 + 8) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + lVar6 + 0x10));
    }
    iVar2 = *(int *)(lVar5 + 0xb8);
    lVar6 = (long)param_1 + (long)iVar2 + (long)iVar1;
    (*pcVar10)(lVar6,1,lVar8);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 8))((long)param_1 + (long)iVar2 + (long)iVar1,lVar8);
    }
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xc0) + (long)iVar1 + 8));
    _swift_bridgeObjectRelease
              (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0xc4) + (long)iVar1 + 8));
    lVar6 = (long)*(int *)(lVar5 + 0xd8) + (long)iVar1;
    if (*(long *)((long)param_1 + lVar6 + 8) == 0) {
      return;
    }
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + lVar6 + 0x18));
    uVar4 = *(undefined8 *)((long)param_1 + lVar6 + 0x28);
    break;
  default:
    return;
  case 8:
    uVar4 = param_1[1];
    break;
  case 0xc:
    _objc_release(*param_1);
  case 6:
    uVar4 = param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 104258348; end: 104259763;  */

undefined8 * FUN_104258348(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  
  puVar9 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  switch((int)puVar9) {
  case 1:
    lVar15 = param_2[0xb];
    if (lVar15 == 1) {
      _memcpy(param_1,param_2,0x101);
    }
    else {
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      param_1[2] = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      param_1[4] = param_2[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      param_1[6] = param_2[6];
      uVar12 = param_2[8];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[8] = uVar12;
      *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
      param_1[10] = param_2[10];
      param_1[0xb] = lVar15;
      uVar12 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar12;
      param_1[0xe] = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
      param_1[0x10] = param_2[0x10];
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
      param_1[0x12] = param_2[0x12];
      *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
      param_1[0x14] = param_2[0x14];
      *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
      param_1[0x16] = param_2[0x16];
      uVar21 = param_2[0x19];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = uVar21;
      uVar13 = param_2[0x1a];
      *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
      param_1[0x1a] = uVar13;
      uVar13 = param_2[0x1c];
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
      param_1[0x1c] = uVar13;
      uVar13 = param_2[0x1f];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1f] = uVar13;
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar13);
    }
    param_1[0x21] = param_2[0x21];
    uVar12 = 1;
    break;
  case 2:
    *param_1 = *param_2;
    _objc_retain();
    uVar12 = 2;
    break;
  case 3:
    uVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar12;
    uVar12 = param_2[2];
    uVar21 = param_2[3];
    param_1[2] = uVar12;
    param_1[3] = uVar21;
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    _swift_bridgeObjectRetain();
    _objc_retain(uVar12);
    _objc_retain(uVar21);
    uVar12 = 3;
    break;
  case 4:
    *param_1 = *param_2;
    _objc_retain();
    uVar12 = 4;
    break;
  case 5:
    *param_1 = *param_2;
    lVar10 = 0;
    func_0x00010463e554();
    lVar16 = (long)*(int *)(lVar10 + 0x14);
    lVar11 = 0;
    func_0x00010464151c();
    lVar15 = (long)param_2 + lVar16;
    _swift_getEnumCaseMultiPayload(lVar15,lVar11);
    if ((int)lVar15 == 0) {
      lVar17 = 0;
      __s10Foundation3URLVMa();
      lVar19 = *(long *)(lVar17 + -8);
      lVar15 = (long)param_2 + lVar16;
      (**(code **)(lVar19 + 0x30))(lVar15,1,lVar17);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar19 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar17);
        (**(code **)(lVar19 + 0x38))((long)param_1 + lVar16,0,1,lVar17);
      }
      else {
        lVar15 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
                *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar16,lVar11,0);
    }
    else {
      _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x18));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
    uVar12 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar12;
    lVar10 = 0;
    func_0x0001046305a8();
    lVar16 = (long)*(int *)(lVar10 + 0x14);
    lVar11 = 0;
    __s10Foundation3URLVMa();
    lVar17 = *(long *)(lVar11 + -8);
    pcVar20 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(uVar12);
    lVar15 = (long)param_2 + lVar16;
    (*pcVar20)(lVar15,1,lVar11);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar9 + lVar16,(long)param_2 + lVar16,lVar11);
      (**(code **)(lVar17 + 0x38))((long)puVar9 + lVar16,0,1,lVar11);
    }
    else {
      lVar15 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar9 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
    lVar15 = puVar2[1];
    _swift_bridgeObjectRetain();
    if (lVar15 == 1) {
      uVar12 = *puVar2;
      uVar13 = puVar2[3];
      uVar21 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar12;
      puVar1[3] = uVar13;
      puVar1[2] = uVar21;
      puVar1[4] = puVar2[4];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar15;
      uVar12 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar12;
      puVar1[4] = puVar2[4];
      _swift_bridgeObjectRetain(lVar15);
      _swift_bridgeObjectRetain(uVar12);
    }
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x34));
    uVar14 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x38));
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x38)) = uVar14;
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x3c));
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x40));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x44));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x44));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x48));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x48));
    uVar21 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar21;
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x4c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x4c));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x50)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x50));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x54)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x54));
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x58));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x58));
    uVar13 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar13;
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x5c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x5c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x60));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x60));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 100));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 100));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x68));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x68));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x6c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x6c));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x70)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x70));
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x74)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x74));
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x78)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x78));
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x7c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x7c));
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x80));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x80));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x84)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x84));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x88)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x88));
    uVar18 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x8c));
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x8c)) = uVar18;
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x90));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x90));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x94));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x94));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x98)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x98));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x9c));
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xa0));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa0));
    lVar15 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar8);
    if (lVar15 == 0) {
      uVar12 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar12;
      puVar1[2] = puVar2[2];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar15;
      uVar12 = puVar2[2];
      puVar1[2] = uVar12;
      _swift_bridgeObjectRetain(lVar15);
      _swift_bridgeObjectRetain(uVar12);
    }
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xa4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa4));
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xa8));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa8));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xac));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xac));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xb0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xb0));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xb4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xb4));
    lVar16 = (long)*(int *)(lVar10 + 0xb8);
    lVar15 = (long)param_2 + lVar16;
    (*pcVar20)(lVar15,1,lVar11);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar9 + lVar16,(long)param_2 + lVar16,lVar11);
      (**(code **)(lVar17 + 0x38))((long)puVar9 + lVar16,0,1,lVar11);
    }
    else {
      lVar15 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar9 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xbc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xbc));
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xc0));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xc0));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xc4));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xc4));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 200)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 200));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xcc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xcc));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xd0)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd0));
    *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xd4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd4));
    puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xd8));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd8));
    lVar15 = param_2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
    if (lVar15 == 0) {
      uVar12 = *param_2;
      uVar13 = param_2[3];
      uVar21 = param_2[2];
      puVar9[1] = param_2[1];
      *puVar9 = uVar12;
      puVar9[3] = uVar13;
      puVar9[2] = uVar21;
      uVar12 = param_2[4];
      puVar9[5] = param_2[5];
      puVar9[4] = uVar12;
      puVar9[6] = param_2[6];
    }
    else {
      *puVar9 = *param_2;
      puVar9[1] = lVar15;
      uVar12 = param_2[3];
      puVar9[2] = param_2[2];
      puVar9[3] = uVar12;
      uVar21 = param_2[5];
      puVar9[4] = param_2[4];
      puVar9[5] = uVar21;
      puVar9[6] = param_2[6];
      _swift_bridgeObjectRetain(lVar15);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar21);
    }
    uVar12 = 5;
    break;
  case 6:
    uVar12 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    param_1[2] = param_2[2];
    _swift_bridgeObjectRetain();
    uVar12 = 6;
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  case 8:
    uVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar12;
    param_1[2] = param_2[2];
    _swift_bridgeObjectRetain();
    uVar12 = 8;
    break;
  case 0xb:
    *param_1 = *param_2;
    _objc_retain();
    uVar12 = 0xb;
    break;
  case 0xc:
    uVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar12;
    uVar12 = param_2[2];
    param_1[2] = uVar12;
    _objc_retain();
    _swift_bridgeObjectRetain(uVar12);
    uVar12 = 0xc;
    break;
  case 0xd:
    *param_1 = *param_2;
    _objc_retain();
    uVar12 = 0xd;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar12);
  return param_1;
}



/* Entry: 104259764; end: 10425979b;  */

void FUN_104259764(undefined8 param_1)

{
  if (lRam0000000113069d68 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f6c04);
  return;
}



/* Entry: 10425979c; end: 10425a253;  */

undefined8 * FUN_10425979c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 == 5) {
    *param_1 = *param_2;
    lVar4 = 0;
    func_0x00010463e554();
    lVar7 = (long)*(int *)(lVar4 + 0x14);
    lVar5 = 0;
    func_0x00010464151c();
    lVar6 = (long)param_2 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar6,lVar5);
    if ((int)lVar6 == 0) {
      lVar10 = 0;
      __s10Foundation3URLVMa();
      lVar8 = *(long *)(lVar10 + -8);
      lVar6 = (long)param_2 + lVar7;
      (**(code **)(lVar8 + 0x30))(lVar6,1,lVar10);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar10);
        (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar10);
      }
      else {
        lVar6 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,
                *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,lVar5,0);
    }
    else {
      _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,
              *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
    uVar11 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    lVar4 = 0;
    func_0x0001046305a8();
    lVar10 = (long)*(int *)(lVar4 + 0x14);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar5 + -8);
    pcVar9 = *(code **)(lVar7 + 0x30);
    lVar6 = (long)param_2 + lVar10;
    (*pcVar9)(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 0x20))((long)puVar3 + lVar10,(long)param_2 + lVar10,lVar5);
      (**(code **)(lVar7 + 0x38))((long)puVar3 + lVar10,0,1,lVar5);
    }
    else {
      lVar6 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar3 + lVar10,(long)param_2 + lVar10,
              *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x1c));
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x20));
    puVar1[4] = puVar2[4];
    uVar13 = *puVar2;
    uVar12 = puVar2[3];
    uVar11 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar12;
    puVar1[2] = uVar11;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x24));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x38)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x40));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x44));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x44));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x48));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x48));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x4c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x4c));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x50)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x50));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x54)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x54));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x58));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x58));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x5c));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x5c));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x60));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x60));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 100));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 100));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x68));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x68));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x6c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x6c));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x70)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x70));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x74)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x74));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x78)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x78));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x7c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x7c));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x80));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x80));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x84)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x84));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x88)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x88));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x8c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x8c));
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x90));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x90));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x94));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x94));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x98)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x98));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x9c));
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xa0));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa0));
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1[2] = puVar2[2];
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xa4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa4));
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xa8));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa8));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xac));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xac));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xb0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xb0));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xb4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xb4));
    lVar10 = (long)*(int *)(lVar4 + 0xb8);
    lVar6 = (long)param_2 + lVar10;
    (*pcVar9)(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 0x20))((long)puVar3 + lVar10,(long)param_2 + lVar10,lVar5);
      (**(code **)(lVar7 + 0x38))((long)puVar3 + lVar10,0,1,lVar5);
    }
    else {
      lVar6 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar3 + lVar10,(long)param_2 + lVar10,
              *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xbc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xbc));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xc0));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xc0));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xc4));
    uVar11 = *puVar1;
    puVar2 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xc4));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 200)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 200));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xcc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xcc));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xd0)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xd0));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xd4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xd4));
    puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0xd8));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xd8));
    uVar11 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    puVar3[3] = uVar13;
    puVar3[2] = uVar12;
    uVar11 = param_2[4];
    puVar3[5] = param_2[5];
    puVar3[4] = uVar11;
    puVar3[6] = param_2[6];
    _swift_storeEnumTagMultiPayload(param_1,param_3,5);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  return param_1;
}



/* Entry: 10425a254; end: 10425a283;  */

void FUN_10425a254(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010425a25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10425a284; end: 10425a47f;  */

void FUN_10425a284(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_90 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_88 = &UNK_10dce4eb0;
  puStack_80 = &UNK_10dce4ec8;
  puStack_78 = &UNK_10dce4ee0;
  puStack_70 = &UNK_10dce4ec8;
  lVar1 = 0x13f;
  func_0x00010463e554();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dce4ef8;
    puStack_58 = &UNK_10dce4f10;
    puStack_50 = &UNK_10dce4ef8;
    puStack_48 = &UNK_10dce4f28;
    puStack_40 = &UNK_10dce4f28;
    puStack_38 = PTR___sBOWV_11034d658 + 0x40;
    puStack_30 = &UNK_10dce4ef8;
    puStack_28 = puStack_38;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,0xe,&puStack_90);
  }
  return;
}



/* Entry: 10425a480; end: 10425a4c3;  */

uint FUN_10425a480(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10425a4c4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10425a4c4; end: 10425a71f;  */

undefined8 FUN_10425a4c4(byte *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  bVar1 = *param_2;
  if (*param_1 == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*param_1 ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = param_2[1];
  if (param_1[1] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((param_1[1] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_2 + 8);
  if (lVar2 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    lVar5 = *(long *)(lVar2 + 0x10);
    if (lVar5 != *(long *)(lVar3 + 0x10)) {
      return 0;
    }
    if ((lVar5 != 0) && (lVar2 != lVar3)) {
      plVar6 = (long *)(lVar3 + 0x28);
      plVar7 = (long *)(lVar2 + 0x28);
      do {
        uVar4 = plVar7[-1];
        if ((uVar4 != plVar6[-1] || *plVar7 != *plVar6) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar4,*plVar7,plVar6[-1],*plVar6,0), (uVar4 & 1) == 0)) {
          return 0;
        }
        plVar6 = plVar6 + 2;
        plVar7 = plVar7 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = *(long *)(param_2 + 0x10);
  if (uVar4 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    func_0x00010142cfc4(uVar4,lVar2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  if (uVar4 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    func_0x00010142cfc4(uVar4,lVar2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  bVar1 = param_2[0x20];
  if (param_1[0x20] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((param_1[0x20] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = param_2[0x21];
  if (param_1[0x21] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((param_1[0x21] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = param_2[0x22];
  if (param_1[0x22] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((param_1[0x22] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  if (((param_1[0x23] ^ param_2[0x23]) & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    if (uVar4 == 0) {
      if (*(long *)(param_2 + 0x28) == 0) {
        return 1;
      }
    }
    else if ((*(long *)(param_2 + 0x28) != 0) && (func_0x00010142cfc4(), (uVar4 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10425a720; end: 10425a783;  */

long FUN_10425a720(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10425a784; end: 10425a8ab;  */

undefined2 * FUN_10425a784(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10425a8ac; end: 10425a927;  */

undefined2 * FUN_10425a8ac(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined2 *)((long)param_1 + 0x21) = *(undefined2 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10425a928; end: 10425a9f3;  */

int FUN_10425a928(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
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



/* Entry: 10425a9f4; end: 10425ab5b;  */

void FUN_10425a9f4(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[2];
  dVar1 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar1 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[3] != 0.0) {
    dVar1 = unaff_x20[3];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[5];
  dVar1 = 0.0;
  if (unaff_x20[4] != 0.0) {
    dVar1 = unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 10425ab5c; end: 10425abab;  */

bool FUN_10425ab5c(double *param_1,double *param_2)

{
  ushort uVar1;
  
  uVar1 = NEON_uminv(CONCAT26(-(ushort)(param_1[3] == param_2[3]),
                              CONCAT24(-(ushort)(param_1[2] == param_2[2]),
                                       CONCAT22(-(ushort)(param_1[1] == param_2[1]),
                                                -(ushort)(*param_1 == *param_2)))),2);
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return param_1[5] == param_2[5] && param_1[4] == param_2[4];
}



/* Entry: 10425abac; end: 10425abe3;  */

void FUN_10425abac(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10425a9f4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10425abe4; end: 10425abe7;  */

void FUN_10425abe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4fb0;
  _swift_getWitnessTable(&UNK_10dce4fb0,&UNK_1107546a0);
  puRam0000000113069db0 = puVar1;
  return;
}



/* Entry: 10425abe8; end: 10425ac27;  */

void FUN_10425abe8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4fb0;
  _swift_getWitnessTable(&UNK_10dce4fb0,&UNK_1107546a0);
  puRam0000000113069db0 = puVar1;
  return;
}



/* Entry: 10425ac28; end: 10425ac53;  */

long FUN_10425ac28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10425ac54; end: 10425acbb;  */

int FUN_10425ac54(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10425acbc; end: 10425adb3;  */

void FUN_10425acbc(double param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 10425adb4; end: 10425adff;  */

bool FUN_10425adb4(double *param_1,double *param_2)

{
  if (*param_1 == *param_2) {
    return param_1[2] == param_2[2] && param_1[1] == param_2[1];
  }
  return false;
}


