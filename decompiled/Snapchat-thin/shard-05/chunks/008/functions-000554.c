/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041f7ae4; end: 1041f7aef; -[SCAdOperaMediaDataModel playableURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f7ae4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_113813310,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1041f7af0; end: 1041f7bb7;  */

void FUN_1041f7af0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + *param_3,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1041f7bb8; end: 1041f7f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1041f7bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  func_0x000100029394(param_1,unaff_x20 + _DAT_1138132b0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138132b8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138132c0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1138132c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1138132d0) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138132d8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138132e0);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138132e8);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138132f0);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_1138132f8) = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813300);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813308);
  *puVar1 = param_19;
  puVar1[1] = param_20;
  func_0x000100029394(param_21,unaff_x20 + _DAT_113813310);
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_21);
  func_0x0001000293e4(param_1);
  return puVar2;
}



/* Entry: 1041f7f88; end: 1041f831b; -[SCAdOperaMediaDataModel initWithTopVideoURL:topVideoKey:topVideoFirstFrameKey:topVideoSize:topVideoLength:topImageKey:deeplinkIconKey:appInstallIconKey:reminderIconKey:collectionIconsKey:profileIconKey:contentId:playableURL:] */

void FUN_1041f7f88(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,long param_9,long param_10,
                  long param_11,long param_12,long param_13,long param_14,long param_15)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x12;
  undefined8 extraout_x13;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long alStack_180 [14];
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = 0x112d36580;
  uStack_90 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = auStack_110 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uStack_a0 = extraout_x13;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar12,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  puVar11 = (undefined *)(ulong)(param_3 == 0);
  lStack_78 = param_14;
  lStack_70 = param_15;
  lStack_88 = param_11;
  lStack_80 = param_12;
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar12,puVar11,1);
  if (param_4 == 0) {
    puStack_b0 = (undefined *)0x0;
    lStack_a8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_b0 = puVar11;
    lStack_a8 = param_4;
  }
  puStack_98 = puVar12;
  if (param_5 == 0) {
    puStack_c0 = (undefined *)0x0;
    lStack_b8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_c0 = puVar11;
    lStack_b8 = param_5;
  }
  _objc_retain();
  uStack_c8 = param_6;
  _objc_retain();
  lVar3 = param_8;
  uStack_d0 = param_7;
  _objc_retain();
  lVar4 = param_9;
  _objc_retain();
  lVar10 = param_10;
  _objc_retain();
  lVar5 = lStack_88;
  _objc_retain();
  lVar6 = lStack_80;
  _objc_retain();
  lStack_108 = param_13;
  _objc_retain();
  lVar8 = lStack_78;
  _objc_retain();
  lVar7 = lStack_70;
  _objc_retain();
  lStack_f8 = lVar7;
  if (lVar3 == 0) {
    puStack_e0 = (undefined *)0x0;
    lStack_d8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_e0 = puVar11;
    lStack_d8 = param_8;
    _objc_release(lVar3);
  }
  if (lVar4 == 0) {
    puStack_f0 = (undefined *)0x0;
    lStack_e8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_f0 = puVar11;
    lStack_e8 = param_9;
    _objc_release(lVar4);
  }
  if (lVar10 == 0) {
    lStack_100 = 0;
    puVar2 = (undefined *)0x0;
    puVar14 = puVar11;
    lVar3 = lStack_88;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar14 = puVar11;
    lStack_100 = param_10;
    _objc_release(lVar10);
    puVar2 = puVar11;
    lVar3 = lStack_88;
  }
  lStack_88 = lVar3;
  if (lVar5 == 0) {
    lVar3 = 0;
    puVar11 = (undefined *)0x0;
    puVar13 = PTR___sSiN_11034deb0;
    lVar4 = lStack_80;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar13 = puVar14;
    _objc_release(lVar5);
    puVar11 = puVar14;
    puVar14 = puVar13;
    puVar13 = PTR___sSiN_11034deb0;
    lVar4 = lStack_80;
  }
  PTR___sSiN_11034deb0 = puVar13;
  lStack_80 = lVar4;
  if (lVar6 == 0) {
    lVar4 = 0;
    lVar10 = lStack_108;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (lVar4,puVar13,PTR___sSSN_11034da80,PTR___sSiSHsWP_11034dec0);
    _objc_release(lVar6);
    puVar14 = puVar13;
    lVar10 = lStack_108;
  }
  lStack_108 = lVar10;
  if (param_13 == 0) {
    lVar10 = 0;
    puVar13 = (undefined *)0x0;
    lVar5 = lStack_78;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar9 = puVar14;
    _objc_release(param_13);
    puVar13 = puVar14;
    puVar14 = puVar9;
    lVar5 = lStack_78;
  }
  lStack_78 = lVar5;
  if (lVar8 == 0) {
    puVar14 = (undefined *)0x0;
    lVar5 = 0;
    lVar6 = lStack_f8;
    uVar1 = uStack_a0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar8);
    lVar6 = lStack_f8;
    uVar1 = uStack_a0;
  }
  lStack_f8 = lVar6;
  if (lVar6 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(uVar1,lStack_70);
    _objc_release(lVar6);
  }
  lVar8 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar1,lVar6 == 0,1,lVar8);
  *(undefined **)(puVar12 + -0x18) = puVar14;
  *(undefined8 *)(puVar12 + -0x10) = uVar1;
  *(undefined **)(puVar12 + -0x28) = puVar13;
  *(long *)(puVar12 + -0x20) = lVar5;
  *(long *)(puVar12 + -0x38) = lVar4;
  *(long *)(puVar12 + -0x30) = lVar10;
  *(long *)(puVar12 + -0x48) = lVar3;
  *(undefined **)(puVar12 + -0x40) = puVar11;
  *(undefined **)(puVar12 + -0x50) = puVar2;
  *(long *)(puVar12 + -0x58) = lStack_100;
  *(undefined **)(puVar12 + -0x60) = puStack_f0;
  *(long *)(puVar12 + -0x68) = lStack_e8;
  *(undefined **)(puVar12 + -0x70) = puStack_e0;
  func_0x0001041f7da0(puStack_98,lStack_a8,puStack_b0,lStack_b8,puStack_c0,uStack_c8,uStack_d0,
                      lStack_d8);
  return;
}



/* Entry: 1041f831c; end: 1041f834b;  */

void FUN_1041f831c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1041f834c(param_1);
  return;
}



/* Entry: 1041f834c; end: 1041f85bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041f834c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _swift_getObjectType();
  func_0x000100029394(param_1,unaff_x20 + _DAT_1138132b0);
  lVar3 = 0;
  FUN_1041f5938();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x14));
  uVar6 = puVar1[1];
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138132b8);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x18));
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138132c0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  uVar7 = puVar1[1];
  uVar8 = *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x1c));
  *(undefined8 *)(unaff_x20 + _DAT_1138132c8) = uVar8;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x20));
  if (*(char *)(puVar1 + 1) == '\x01') {
    _objc_retain(uVar8);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar9 = *puVar1;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _objc_retain(uVar8);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    func_0x00010c00e360(uVar9);
  }
  *(undefined **)(unaff_x20 + _DAT_1138132d0) = puVar4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
  uVar7 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138132d8);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x28));
  uVar8 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138132e0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x2c));
  uVar9 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138132e8);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138132f0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  uVar10 = *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x34));
  uVar11 = puVar1[1];
  *(undefined8 *)(unaff_x20 + _DAT_1138132f8) = uVar10;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x38));
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813300);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  uVar12 = puVar1[1];
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x3c));
  uVar6 = puVar1[1];
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813308);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  func_0x000100029394(param_1 + *(int *)(lVar3 + 0x40),unaff_x20 + _DAT_113813310);
  puVar4 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar6);
  puVar5 = &stack0xffffffffffffff80;
  _objc_msgSendSuper2(puVar5,puVar4);
  FUN_1041f85c0(param_1);
  return puVar5;
}



/* Entry: 1041f85c0; end: 1041f85fb;  */

undefined8 FUN_1041f85c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1041f5938();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041f85fc; end: 1041f85ff; -[SCAdOperaMediaDataModel copyWithZone:] */

void FUN_1041f85fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041f8600; end: 1041f8677; -[SCAdOperaMediaDataModel description] */

void FUN_1041f8600(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1041f5938();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1041f8678(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1041f85c0(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f8678; end: 1041f8893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8678(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000100029394(param_2 + _DAT_1138132b0,param_1);
  uVar5 = *(undefined8 *)(param_2 + _DAT_1138132b8);
  uVar6 = ((undefined8 *)(param_2 + _DAT_1138132b8))[1];
  lVar4 = 0;
  FUN_1041f5938();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x14));
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_2 + _DAT_1138132c0);
  uVar8 = *puVar1;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar8;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x1c)) = *(undefined8 *)(param_2 + _DAT_1138132c8);
  uVar5 = puVar1[1];
  iVar2 = *(int *)(lVar4 + 0x20);
  lVar7 = *(long *)(param_2 + _DAT_1138132d0);
  if (lVar7 == 0) {
    _objc_retain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar5);
    uVar8 = 0;
  }
  else {
    _objc_retain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar5);
    func_0x00010bf885a0(lVar7);
  }
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = uVar8;
  *(bool *)(puVar1 + 1) = lVar7 == 0;
  puVar1 = (undefined8 *)(param_2 + _DAT_1138132d8);
  uVar5 = puVar1[1];
  uVar6 = *puVar1;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar6;
  puVar1 = (undefined8 *)(param_2 + _DAT_1138132e0);
  uVar6 = puVar1[1];
  uVar8 = *puVar1;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x28));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar8;
  puVar1 = (undefined8 *)(param_2 + _DAT_1138132e8);
  uVar8 = puVar1[1];
  uVar9 = *puVar1;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x2c));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar9;
  puVar1 = (undefined8 *)(param_2 + _DAT_1138132f0);
  uVar9 = puVar1[1];
  uVar10 = *puVar1;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x30));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar10;
  uVar10 = *(undefined8 *)(param_2 + _DAT_1138132f8);
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x34)) = uVar10;
  puVar1 = (undefined8 *)(param_2 + _DAT_113813300);
  uVar11 = *puVar1;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x38));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar11;
  uVar11 = puVar1[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_113813308);
  uVar12 = puVar1[1];
  uVar13 = *puVar1;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x3c));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar13;
  func_0x000100029394(param_2 + _DAT_113813310,param_1 + *(int *)(lVar4 + 0x40));
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1041f8894; end: 1041f88db; -[SCAdOperaMediaDataModel init] */

void FUN_1041f8894(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdMediaServices/AdOperaMediaDataModelWrapper.swift",0x32,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f88dc);
  (*pcVar1)();
}



/* Entry: 1041f88dc; end: 1041f88f7; +[SCAdOperaMediaDataModelBuilder adOperaMediaDataModel] */

void FUN_1041f88dc(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f88f8; end: 1041f8937; +[SCAdOperaMediaDataModelBuilder adOperaMediaDataModelWithExistingAdOperaMediaDataModel:] */

void FUN_1041f88f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1041f93d4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1041f8938; end: 1041f8943; -[SCAdOperaMediaDataModelBuilder withTopVideoURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8938(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_113069338;
  _swift_beginAccess(param_1 + _DAT_113069338,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x00010137dd74(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  func_0x0001000293e4(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1041f8944; end: 1041f894f; -[SCAdOperaMediaDataModelBuilder withTopVideoKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8944(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113069340);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8950; end: 1041f895b; -[SCAdOperaMediaDataModelBuilder withTopVideoFirstFrameKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8950(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113069348);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f895c; end: 1041f89bb; -[SCAdOperaMediaDataModelBuilder withTopVideoSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1041f895c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113069350);
  *(undefined8 *)(param_1 + _DAT_113069350) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1041f89bc; end: 1041f8a1b; -[SCAdOperaMediaDataModelBuilder withTopVideoLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1041f89bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113069358);
  *(undefined8 *)(param_1 + _DAT_113069358) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1041f8a1c; end: 1041f8a27; -[SCAdOperaMediaDataModelBuilder withTopImageKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8a1c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113069360);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8a28; end: 1041f8a33; -[SCAdOperaMediaDataModelBuilder withDeeplinkIconKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8a28(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113069368);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8a34; end: 1041f8a3f; -[SCAdOperaMediaDataModelBuilder withAppInstallIconKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8a34(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113069370);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8a40; end: 1041f8a4b; -[SCAdOperaMediaDataModelBuilder withReminderIconKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8a40(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113069378);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8a4c; end: 1041f8ac3; -[SCAdOperaMediaDataModelBuilder withCollectionIconsKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8a4c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSiN_11034deb0,PTR___sSSN_11034da80,PTR___sSiSHsWP_11034dec0);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113069380);
  *(long *)(param_1 + _DAT_113069380) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8ac4; end: 1041f8acf; -[SCAdOperaMediaDataModelBuilder withProfileIconKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8ac4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113069388);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8ad0; end: 1041f8adb; -[SCAdOperaMediaDataModelBuilder withContentId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8ad0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113069390);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8adc; end: 1041f8b3f;  */

void FUN_1041f8adc(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1041f8b40; end: 1041f8b4b; -[SCAdOperaMediaDataModelBuilder withPlayableURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f8b40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_113069398;
  _swift_beginAccess(param_1 + _DAT_113069398,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x00010137dd74(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  func_0x0001000293e4(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1041f8b4c; end: 1041f8c47;  */

void FUN_1041f8b4c(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar2,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_3 == 0,1);
  lVar3 = *param_4;
  _swift_beginAccess(param_1 + lVar3,auStack_48,0x21,0);
  lVar1 = param_1;
  _objc_retain(param_1);
  func_0x00010137dd74(puVar2,param_1 + lVar3);
  _swift_endAccess(auStack_48);
  func_0x0001000293e4(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1041f8c48; end: 1041f8fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041f8c48(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long extraout_x8;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
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
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = _DAT_113069338;
  lVar15 = (long)&uStack_140 - extraout_x8;
  _swift_beginAccess(unaff_x20 + _DAT_113069338,auStack_80,0,0);
  lStack_b8 = lVar15;
  func_0x000100029394(unaff_x20 + lVar12,lVar15);
  uStack_c0 = *(undefined8 *)(unaff_x20 + _DAT_113069340);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113069340))[1];
  uStack_c8 = *(undefined8 *)(unaff_x20 + _DAT_113069348);
  uStack_100 = ((undefined8 *)(unaff_x20 + _DAT_113069348))[1];
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_113069350);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_113069358);
  uStack_d0 = *(undefined8 *)(unaff_x20 + _DAT_113069360);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113069360))[1];
  uStack_d8 = *(undefined8 *)(unaff_x20 + _DAT_113069368);
  uStack_108 = ((undefined8 *)(unaff_x20 + _DAT_113069368))[1];
  uStack_e0 = *(undefined8 *)(unaff_x20 + _DAT_113069370);
  uStack_110 = ((undefined8 *)(unaff_x20 + _DAT_113069370))[1];
  uStack_e8 = *(undefined8 *)(unaff_x20 + _DAT_113069378);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_113069378))[1];
  uStack_118 = *(undefined8 *)(unaff_x20 + _DAT_113069380);
  uStack_f0 = *(undefined8 *)(unaff_x20 + _DAT_113069388);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_113069388))[1];
  uStack_f8 = *(undefined8 *)(unaff_x20 + _DAT_113069390);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_113069390))[1];
  lStack_120 = _DAT_113069398;
  uStack_140 = uVar4;
  uStack_138 = uVar2;
  uStack_130 = uVar16;
  _swift_beginAccess(unaff_x20 + _DAT_113069398,auStack_98,0,0);
  lVar12 = 0;
  FUN_1041f96dc();
  lStack_128 = lVar12;
  _objc_allocWithZone();
  func_0x000100029394(lVar15,lVar12 + _DAT_1138132b0);
  uVar11 = uStack_100;
  uVar10 = uStack_108;
  uVar9 = uStack_110;
  uVar8 = uStack_118;
  puVar1 = (undefined8 *)(lVar12 + _DAT_1138132b8);
  *puVar1 = uStack_c0;
  puVar1[1] = uVar2;
  puVar1 = (undefined8 *)(lVar12 + _DAT_1138132c0);
  *puVar1 = uStack_c8;
  puVar1[1] = uStack_100;
  *(undefined8 *)(lVar12 + _DAT_1138132c8) = uVar14;
  *(undefined8 *)(lVar12 + _DAT_1138132d0) = uVar16;
  puVar1 = (undefined8 *)(lVar12 + _DAT_1138132d8);
  *puVar1 = uStack_d0;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(lVar12 + _DAT_1138132e0);
  *puVar1 = uStack_d8;
  puVar1[1] = uStack_108;
  puVar1 = (undefined8 *)(lVar12 + _DAT_1138132e8);
  *puVar1 = uStack_e0;
  puVar1[1] = uStack_110;
  puVar1 = (undefined8 *)(lVar12 + _DAT_1138132f0);
  *puVar1 = uStack_e8;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar12 + _DAT_1138132f8) = uStack_118;
  puVar1 = (undefined8 *)(lVar12 + _DAT_113813300);
  *puVar1 = uStack_f0;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar12 + _DAT_113813308);
  *puVar1 = uStack_f8;
  puVar1[1] = uVar6;
  func_0x000100029394(unaff_x20 + lStack_120,lVar12 + _DAT_113813310);
  puVar7 = PTR_s_init_1125d9248;
  lStack_a0 = lStack_128;
  lStack_a8 = lVar12;
  _swift_bridgeObjectRetain(uStack_138);
  _swift_bridgeObjectRetain(uVar11);
  _objc_retain(uVar14);
  _objc_retain(uStack_130);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uStack_140);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  plVar13 = &lStack_a8;
  _objc_msgSendSuper2(plVar13,puVar7);
  func_0x0001000293e4(lStack_b8);
  return plVar13;
}



/* Entry: 1041f8fa4; end: 1041f8fe7; -[SCAdOperaMediaDataModelBuilder build] */

void FUN_1041f8fa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041f8c48();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041f8fe8; end: 1041f902b; -[SCAdOperaMediaDataModelBuilder safeBuildAndReturnError:] */

void FUN_1041f8fe8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041f8c48();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041f902c; end: 1041f916b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f902c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  _swift_getObjectType();
  lVar2 = _DAT_113069338;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar4)(unaff_x20 + lVar2,1,1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069340);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069348);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113069350) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113069358) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069360);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069368);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069370);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069378);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113069380) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069388);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069390);
  *puVar1 = 0;
  puVar1[1] = 0;
  (*pcVar4)(unaff_x20 + _DAT_113069398,1,1,lVar3);
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f916c; end: 1041f918b; -[SCAdOperaMediaDataModelBuilder init] */

void FUN_1041f916c(void)

{
  FUN_1041f902c();
  return;
}



/* Entry: 1041f918c; end: 1041f918f;  */

void FUN_1041f918c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041f9190; end: 1041f9297; -[SCAdOperaMediaDataModelBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001041f91ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001041f91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1041f9190(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_113069338;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041f9298; end: 1041f92cb;  */

void FUN_1041f9298(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041f92cc; end: 1041f93d3; -[SCAdOperaMediaDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001041f92e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001041f92ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1041f92cc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1138132b0;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041f93d4; end: 1041f96db;  */

/* WARNING: Possible PIC construction at 0x0001041f9410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001041f9414) */

void FUN_1041f93d4(long param_1)

{
  if (param_1 == 0) {
    func_0x0001041f9700();
    _objc_allocWithZone();
  }
  else {
    func_0x0001041f9700(0);
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1041f96dc; end: 1041f9713;  */

void FUN_1041f96dc(undefined8 param_1)

{
  if (lRam00000001130693c8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f6090);
  return;
}



/* Entry: 1041f9714; end: 1041f9743;  */

void FUN_1041f9714(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 1041f9744; end: 1041f97d7;  */

void FUN_1041f9744(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_88 = *(long *)(lVar1 + -8) + 0x40;
    puStack_80 = &UNK_10dce21d0;
    puStack_78 = &UNK_10dce21d0;
    puStack_70 = &UNK_10dce21e8;
    puStack_68 = &UNK_10dce21e8;
    puStack_60 = &UNK_10dce21d0;
    puStack_58 = &UNK_10dce21d0;
    puStack_50 = &UNK_10dce21d0;
    puStack_48 = &UNK_10dce21d0;
    puStack_40 = &UNK_10dce21e8;
    puStack_38 = &UNK_10dce21d0;
    puStack_30 = &UNK_10dce21d0;
    lStack_28 = lStack_88;
    _swift_updateClassMetadata2(param_1,0x100,0xd,&lStack_88,param_1 + 0x50);
  }
  return;
}



/* Entry: 1041f97d8; end: 1041f97e3;  */

void FUN_1041f97d8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_88 = *(long *)(lVar1 + -8) + 0x40;
    puStack_80 = &UNK_10dce21d0;
    puStack_78 = &UNK_10dce21d0;
    puStack_70 = &UNK_10dce21e8;
    puStack_68 = &UNK_10dce21e8;
    puStack_60 = &UNK_10dce21d0;
    puStack_58 = &UNK_10dce21d0;
    puStack_50 = &UNK_10dce21d0;
    puStack_48 = &UNK_10dce21d0;
    puStack_40 = &UNK_10dce21e8;
    puStack_38 = &UNK_10dce21d0;
    puStack_30 = &UNK_10dce21d0;
    lStack_28 = lStack_88;
    _swift_updateClassMetadata2(param_1,0x100,0xd,&lStack_88,param_1 + 0x50);
  }
  return;
}



/* Entry: 1041f97e4; end: 1041f98b7;  */

void FUN_1041f97e4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041f98b8; end: 1041f98d7;  */

void FUN_1041f98b8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1041f98d8; end: 1041f994f; -[SCAdTopMediaContent description] */

void FUN_1041f98d8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x0001041f6c18();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1041f9950(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001041f6bdc(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f9950; end: 1041f9cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f9950(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long alStack_70 [2];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)alStack_70 - extraout_x8;
  lVar2 = 0x113069438;
  func_0x0001000285a8(0x113069438,&UNK_10dce2228);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar5 = (long *)(lVar4 - extraout_x12);
  lVar2 = 0;
  func_0x0001041f6c18();
  lVar10 = *(long *)(lVar2 + -8);
  pcVar11 = *(code **)(lVar10 + 0x38);
  (*pcVar11)(plVar5,1,1,lVar2);
  bVar1 = *(byte *)(param_2 + _DAT_113069410);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar6 = *(long *)(param_2 + _DAT_113069418);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1041f9ccc);
        (*pcVar11)();
      }
      FUN_1041fa044(plVar5,0x113069438,&UNK_10dce2228);
      *plVar5 = lVar6;
      _swift_storeEnumTagMultiPayload(plVar5,lVar2,0);
      (*pcVar11)(plVar5,0,1,lVar2);
      _objc_retain(lVar6);
    }
    else {
      uVar7 = ((long *)(param_2 + _DAT_113069420))[1];
      if (0xe < uVar7 >> 0x3c) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1041f9cd4);
        (*pcVar11)();
      }
      lVar6 = ((long *)(param_2 + _DAT_113069428))[1];
      alStack_70[1] = param_1;
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1041f9cd8);
        (*pcVar11)();
      }
      lVar9 = *(long *)(param_2 + _DAT_113069420);
      lVar3 = *(long *)(param_2 + _DAT_113069428);
      FUN_1041fa044(plVar5,0x113069438,&UNK_10dce2228);
      *plVar5 = lVar9;
      plVar5[1] = uVar7;
      plVar5[2] = lVar3;
      plVar5[3] = lVar6;
      _swift_storeEnumTagMultiPayload(plVar5,lVar2,1);
      (*pcVar11)(plVar5,0,1,lVar2);
      func_0x000100de78a0(lVar9,uVar7);
      _swift_bridgeObjectRetain(lVar6);
      param_1 = alStack_70[1];
    }
  }
  else if (bVar1 == 2) {
    func_0x0001041fa084(param_2 + _DAT_113069430,lVar6,0x112d36580,&UNK_10d9016d0);
    lVar9 = 0;
    __s10Foundation3URLVMa();
    lVar8 = *(long *)(lVar9 + -8);
    lVar3 = lVar6;
    (**(code **)(lVar8 + 0x30))(lVar6,1,lVar9);
    if ((int)lVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1041f9cd0);
      (*pcVar11)();
    }
    FUN_1041fa044(plVar5,0x113069438,&UNK_10dce2228);
    (**(code **)(lVar8 + 0x10))(plVar5,lVar6,lVar9);
    _swift_storeEnumTagMultiPayload(plVar5,lVar2,2);
    (*pcVar11)(plVar5,0,1,lVar2);
    (**(code **)(lVar8 + 8))(lVar6,lVar9);
  }
  else {
    FUN_1041fa044(plVar5,0x113069438,&UNK_10dce2228);
    _swift_storeEnumTagMultiPayload(plVar5,lVar2,3);
    (*pcVar11)(plVar5,0,1,lVar2);
  }
  func_0x0001041fa084(plVar5,lVar4,0x113069438,&UNK_10dce2228);
  lVar6 = lVar4;
  (**(code **)(lVar10 + 0x30))(lVar4,1,lVar2);
  if ((int)lVar6 != 1) {
    _objc_release(param_2);
    func_0x0001041fa0cc(lVar4,param_1);
    FUN_1041fa044(plVar5,0x113069438,&UNK_10dce2228);
    return;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1041f9cc8);
  (*pcVar11)();
}



/* Entry: 1041f9cd8; end: 1041f9d1f; -[SCAdTopMediaContent init] */

void FUN_1041f9cd8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdMediaServices/AdTopMediaContentWrapper.swift",0x2e,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f9d20);
  (*pcVar1)();
}



/* Entry: 1041f9d20; end: 1041f9d23; -[SCAdTopMediaContent copyWithZone:] */

void FUN_1041f9d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041f9d24; end: 1041f9d5b; +[SCAdTopMediaContent videoContentWithVideoContent:] */

void FUN_1041f9d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1041fa2a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041f9d5c; end: 1041f9e03; +[SCAdTopMediaContent imageContentWithImageData:contentId:] */

void FUN_1041f9d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  uVar3 = param_2;
  _objc_release(uVar1);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  uVar2 = param_3;
  FUN_1041fa3e0(param_3,param_2,uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  func_0x00010006c090(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f9e04; end: 1041f9e8f; +[SCAdTopMediaContent playableContentWithLocalFileURL:] */

void FUN_1041f9e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = puVar3;
  FUN_1041fa548(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1041f9e90; end: 1041f9ea3; +[SCAdTopMediaContent emptyContent] */

void FUN_1041f9e90(void)

{
  func_0x0001041fa698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f9ea4; end: 1041fa043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f9ea4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  bVar1 = *(byte *)(unaff_x20 + _DAT_113069410);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(long *)(unaff_x20 + _DAT_113069418) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041fa038);
        (*pcVar2)();
      }
      (*param_1)();
    }
    else {
      uVar5 = ((undefined8 *)(unaff_x20 + _DAT_113069420))[1];
      if (0xe < uVar5 >> 0x3c) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041fa040);
        (*pcVar2)();
      }
      if (((undefined8 *)(unaff_x20 + _DAT_113069428))[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041fa044);
        (*pcVar2)();
      }
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113069420),uVar5,
                 *(undefined8 *)(unaff_x20 + _DAT_113069428));
    }
  }
  else if (bVar1 == 2) {
    func_0x0001041fa084(unaff_x20 + _DAT_113069430,puVar7,0x112d36580,&UNK_10d9016d0);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar6 = *(long *)(lVar3 + -8);
    puVar4 = puVar7;
    (**(code **)(lVar6 + 0x30))(puVar7,1,lVar3);
    if ((int)puVar4 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1041fa03c);
      (*pcVar2)();
    }
    (*param_5)(puVar7);
    (**(code **)(lVar6 + 8))(puVar7,lVar3);
  }
  else {
    (*param_7)();
  }
  return;
}



/* Entry: 1041fa044; end: 1041fa10f;  */

undefined8 FUN_1041fa044(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1041fa110; end: 1041fa183; -[SCAdTopMediaContent matchVideoContent:imageContent:playableContent:emptyContent:] */

void FUN_1041fa110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1041f9ea4(FUN_1041faa48,auStack_40,0x1041faa58,auStack_60,FUN_1041faa60,auStack_80,
                FUN_1041faa9c,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1041fa184; end: 1041fa1e7;  */

void FUN_1041fa184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1041fa1e8; end: 1041fa21b;  */

void FUN_1041fa1e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041fa21c; end: 1041fa28f; -[SCAdTopMediaContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fa21c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069418));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113069420),
                      ((undefined8 *)(param_1 + _DAT_113069420))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113069428 + 8));
  FUN_1041fa044(param_1 + _DAT_113069430,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 1041fa290; end: 1041fa29f;  */

ulong FUN_1041fa290(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1041fa2a0; end: 1041fa3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041fa2a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_50 - extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_1041fa7d4();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113069410) = 0;
  *(undefined8 *)(lVar3 + _DAT_113069418) = param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113069420);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113069428);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x0001041fa084(lVar6,lVar3 + _DAT_113069430,0x112d36580,&UNK_10d9016d0);
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar4;
  _objc_retain(param_1);
  plVar5 = &lStack_50;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x0001041fa044(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1041fa3e0; end: 1041fa547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041fa3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_70 - extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_1041fa7d4();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113069410) = 1;
  *(undefined8 *)(lVar3 + _DAT_113069418) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113069420);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113069428);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x0001041fa084(lVar6,lVar3 + _DAT_113069430,0x112d36580,&UNK_10d9016d0);
  func_0x00010006c00c(param_1,param_2);
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_4);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x0001041fa044(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1041fa548; end: 1041fa7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041fa548(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&lStack_50 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(lVar4,param_1,lVar2);
  (**(code **)(lVar5 + 0x38))(lVar4,0,1,lVar2);
  lVar5 = 0;
  FUN_1041fa7d4();
  lVar2 = lVar5;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113069410) = 2;
  *(undefined8 *)(lVar2 + _DAT_113069418) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113069420);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113069428);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x0001041fa084(lVar4,lVar2 + _DAT_113069430,0x112d36580,&UNK_10d9016d0);
  plVar3 = &lStack_50;
  lStack_50 = lVar2;
  lStack_48 = lVar5;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x0001041fa044(lVar4,0x112d36580,&UNK_10d9016d0);
  return plVar3;
}



/* Entry: 1041fa7cc; end: 1041fa7d3;  */

void FUN_1041fa7cc(void)

{
  if (lRam0000000113069468 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f6118);
  return;
}



/* Entry: 1041fa7d4; end: 1041fa80b;  */

void FUN_1041fa7d4(undefined8 param_1)

{
  if (lRam0000000113069468 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f6118);
  return;
}



/* Entry: 1041fa80c; end: 1041fa89f;  */

void FUN_1041fa80c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = &UNK_10dce2248;
  puStack_40 = &UNK_10dce2260;
  puStack_38 = &UNK_10dce2278;
  puStack_30 = &UNK_10dce2290;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 1041fa8a0; end: 1041faa07;  */

int FUN_1041fa8a0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1041fa91c;
        goto LAB_1041fa900;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1041fa900:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1041fa91c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1041faa08; end: 1041faa47;  */

void FUN_1041faa08(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce22cc;
  _swift_getWitnessTable(&UNK_10dce22cc,&UNK_110751120);
  puRam0000000113069478 = puVar1;
  return;
}



/* Entry: 1041faa48; end: 1041faa5f;  */

void FUN_1041faa48(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001041faa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1041faa60; end: 1041faa9b;  */

void FUN_1041faa60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041faa9c; end: 1041faaa7;  */

void FUN_1041faa9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001041faaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1041faaa8; end: 1041faab3; -[SCAdWebViewPrefetchHints baseUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041faaa8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113069480);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113069480))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041faab4; end: 1041faabf; -[SCAdWebViewPrefetchHints prefetchHintsHtml] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041faab4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113069488);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113069488))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041faac0; end: 1041fab07;  */

void FUN_1041faac0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041fab08; end: 1041fab17; -[SCAdWebViewPrefetchHints prefetchMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041fab08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069490);
}



/* Entry: 1041fab18; end: 1041faba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fab18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069480);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069488);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113069490) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041faba4; end: 1041fac43; -[SCAdWebViewPrefetchHints initWithBaseUrl:prefetchHintsHtml:prefetchMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041faba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113069480);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113069488);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_113069490) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041fac44; end: 1041facaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fac44(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069480);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069488);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113069490) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041facb0; end: 1041facb3; -[SCAdWebViewPrefetchHints copyWithZone:] */

void FUN_1041facb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041facb4; end: 1041faccf; -[SCAdWebViewPrefetchHints description] */

void FUN_1041facb4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041facd0; end: 1041fad4b; -[SCAdWebViewPrefetchHints init] */

void FUN_1041facd0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdMediaServices/AdWebViewPrefetchHintsWrapper.swift",0x33,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041fad18);
  (*pcVar1)();
}



/* Entry: 1041fad4c; end: 1041fad8b; -[SCAdWebViewPrefetchHints .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fad4c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113069480 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113069488 + 8))
  ;
  return;
}



/* Entry: 1041fad8c; end: 1041fadab;  */

void FUN_1041fad8c(void)

{
  _objc_opt_self(&PTR_PTR_112991170);
  return;
}



/* Entry: 1041fadac; end: 1041fadb7;  */

undefined * FUN_1041fadac(void)

{
  return &UNK_110751230;
}



/* Entry: 1041fadb8; end: 1041fade3; +[SCAdPlaybackPagePropertyKeys swipeToAttachmentDisabled] */

void FUN_1041fadb8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1ef860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041fade4; end: 1041fae1f; -[SCAdPlaybackPagePropertyKeys init] */

void FUN_1041fade4(undefined8 param_1)

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



/* Entry: 1041fae20; end: 1041fae53;  */

void FUN_1041fae20(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041fae54; end: 1041fae57; -[SCAdPlaybackPagePropertyKeys .cxx_destruct] */

void FUN_1041fae54(void)

{
  return;
}



/* Entry: 1041fae58; end: 1041fae77;  */

void FUN_1041fae58(void)

{
  _objc_opt_self(&PTR_PTR_112991248);
  return;
}



/* Entry: 1041fae78; end: 1041faeb3;  */

void FUN_1041fae78(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107512f8;
  if (lRam00000001130694e8 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam00000001130694e8 = param_1;
  }
  return;
}



/* Entry: 1041faeb4; end: 1041faef7;  */

void FUN_1041faeb4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1041faef8; end: 1041faf3f;  */

bool FUN_1041faef8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1041faf40; end: 1041fb10f;  */

long FUN_1041faf40(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041fb110; end: 1041fb11f; -[_TtC14AdDataServices16SCAdDataServices adInitializer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fb110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069500));
  return;
}



/* Entry: 1041fb120; end: 1041fb12f; -[_TtC14AdDataServices16SCAdDataServices adServer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fb120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069508));
  return;
}



/* Entry: 1041fb130; end: 1041fb13f; -[_TtC14AdDataServices16SCAdDataServices adTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fb130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069510));
  return;
}



/* Entry: 1041fb140; end: 1041fb1b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fb140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069500) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113069508) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113069510) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041fb1b4; end: 1041fb243; -[_TtC14AdDataServices16SCAdDataServices initWithAdInitializer:adServer:adTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fb1b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113069500) = param_3;
  *(undefined8 *)(param_1 + _DAT_113069508) = param_4;
  *(undefined8 *)(param_1 + _DAT_113069510) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1041fb244; end: 1041fb2a3; -[_TtC14AdDataServices16SCAdDataServices init] */

void FUN_1041fb244(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("AdDataServices.SCAdDataServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041fb270);
  (*pcVar1)();
}



/* Entry: 1041fb2a4; end: 1041fb2eb; -[_TtC14AdDataServices16SCAdDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041fb2a4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069500));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069508));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113069510));
  return;
}



/* Entry: 1041fb2ec; end: 1041fb2ff;  */

bool FUN_1041fb2ec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}


