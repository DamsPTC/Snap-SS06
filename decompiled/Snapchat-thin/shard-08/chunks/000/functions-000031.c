/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c3a784; end: 105c3a793;  */

void FUN_105c3a784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108de958;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c3a794; end: 105c3a7bf;  */

long FUN_105c3a794(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c3a7c0; end: 105c3a80b;  */

void FUN_105c3a7c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 105c3a80c; end: 105c3a897;  */

undefined1  [16] FUN_105c3a80c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0b6e60(param_1);
  uVar2 = param_1;
  func_0x00010c0ce800(param_1);
  uVar3 = param_1;
  func_0x00010c0f57e0(param_1);
  uVar4 = param_1;
  func_0x00010bf22880(param_1);
  _objc_release(param_1);
  auVar5._0_8_ = uVar1 & 0xffffffff | uVar2 << 0x20;
  auVar5._8_8_ = uVar3 & 0xffffffff | uVar4 << 0x20;
  return auVar5;
}



/* Entry: 105c3a898; end: 105c3a8cb;  */

void FUN_105c3a898(void)

{
  _objc_alloc(PTR_PTR_1126c34c0);
  func_0x00010c028120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c3a8cc; end: 105c3aa0b; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfig initWithUrl:sha256:createdAt:version:] */

undefined1 *
FUN_105c3a8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ec6f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000105c3aa70(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000105c3aa70(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105c3aa70(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c3aa0c; end: 105c3aa13; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfig url] */

undefined8 FUN_105c3aa0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c3aa14; end: 105c3aa1b; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfig sha256] */

undefined8 FUN_105c3aa14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c3aa1c; end: 105c3aa23; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfig createdAt] */

undefined8 FUN_105c3aa1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c3aa24; end: 105c3aa2b; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfig version] */

undefined8 FUN_105c3aa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105c3aa2c; end: 105c3aa67; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfig .cxx_destruct] */

void FUN_105c3aa2c(long param_1)

{
  FUN_105c3aa68(param_1 + 0x20);
  FUN_105c3aa68(param_1 + 0x18);
  FUN_105c3aa68(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c3aa68; end: 105c3aa77;  */

void FUN_105c3aa68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 105c3aa78; end: 105c3ab53; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfigVersion initWithMajorVersion:minorVersion:patchVersion:buildVersion:dynamicDeliveryVersion:] */

undefined1 *
FUN_105c3aa78(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ec700;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105c3ab54; end: 105c3ab5b; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfigVersion majorVersion] */

undefined4 FUN_105c3ab54(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105c3ab5c; end: 105c3ab63; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfigVersion minorVersion] */

undefined4 FUN_105c3ab5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 105c3ab64; end: 105c3ab6b; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfigVersion patchVersion] */

undefined8 FUN_105c3ab64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c3ab6c; end: 105c3ab73; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfigVersion buildVersion] */

undefined8 FUN_105c3ab6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105c3ab74; end: 105c3ab7b; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfigVersion dynamicDeliveryVersion] */

undefined4 FUN_105c3ab74(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 105c3ab7c; end: 105c3abab; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryConfigVersion .cxx_destruct] */

void FUN_105c3ab7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105c3abac; end: 105c3ac0b; -[SCNComposerDynamicDeliveryUtilsParsedAppVersion initWithMajorVersion:minorVersion:patchVersion:buildVersion:] */

void FUN_105c3abac(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec708;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_6;
  }
  return;
}



/* Entry: 105c3ac0c; end: 105c3ac13; -[SCNComposerDynamicDeliveryUtilsParsedAppVersion majorVersion] */

undefined4 FUN_105c3ac0c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105c3ac14; end: 105c3ac1b; -[SCNComposerDynamicDeliveryUtilsParsedAppVersion minorVersion] */

undefined4 FUN_105c3ac14(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 105c3ac1c; end: 105c3ac23; -[SCNComposerDynamicDeliveryUtilsParsedAppVersion patchVersion] */

undefined4 FUN_105c3ac1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 105c3ac24; end: 105c3ac2b; -[SCNComposerDynamicDeliveryUtilsParsedAppVersion buildVersion] */

undefined4 FUN_105c3ac24(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 105c3ac2c; end: 105c3ad97;  */

undefined8 FUN_105c3ac2c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    func_0x000105c3e80c(*(undefined4 *)(param_2 + 0x2c));
    func_0x000105c3e9c0();
    return param_1;
  }
  puVar1 = &UNK_10f3326f1;
  func_0x00010002b82c(param_1,&UNK_10f3326f1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 105c3ad98; end: 105c3ae1b;  */

void FUN_105c3ad98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  FUN_105c3ae38(auStack_48);
  FUN_105c42ea0();
  uStack_50 = param_2;
  FUN_105c3ae1c(auStack_40,param_1,auStack_48,&uStack_50,param_3);
  func_0x000105c3e8d8();
  func_0x000105c3eb6c();
  if (param_1 != 0) {
    func_0x000105c3e6e0();
  }
  return;
}



/* Entry: 105c3ae1c; end: 105c3ae37;  */

void FUN_105c3ae1c(void)

{
  func_0x000105c3ea04();
  FUN_105c3d8f4();
  return;
}



/* Entry: 105c3ae38; end: 105c3ae73;  */

void FUN_105c3ae38(void)

{
  undefined8 uVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  
  func_0x000105c3e848();
  uVar1 = 0x18;
  __Znwm();
  func_0x000105c3e914();
  if (extraout_x8 != 0) {
    do {
      func_0x000105c3e940();
    } while (extraout_w10 != 0);
  }
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 105c3ae74; end: 105c3af23;  */

void FUN_105c3ae74(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x000105c3e848();
  FUN_105c3af24(auStack_30);
  func_0x000100100ed0(auStack_40);
  puVar1 = auStack_40;
  FUN_105c3af5c(auStack_58);
  FUN_105c42ea0();
  puVar2 = auStack_30;
  puStack_60 = puVar1;
  func_0x000105c3af40(auStack_50,puVar2,auStack_58,&puStack_60);
  func_0x000105c3e8d8();
  func_0x000105c3eb6c();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000105c3e6e0();
  }
  func_0x0001000df75c(auStack_40);
  FUN_105c3dba0(auStack_30);
  return;
}



/* Entry: 105c3af24; end: 105c3af5b;  */

void FUN_105c3af24(void)

{
  undefined1 uStack_11;
  
  FUN_105c3daa4(&uStack_11);
  return;
}



/* Entry: 105c3af5c; end: 105c3af97;  */

void FUN_105c3af5c(void)

{
  undefined8 uVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  
  func_0x000105c3e848();
  uVar1 = 0x18;
  __Znwm();
  func_0x000105c3e914();
  if (extraout_x8 != 0) {
    do {
      func_0x000105c3e940();
    } while (extraout_w10 != 0);
  }
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 105c3af98; end: 105c3b043;  */

undefined8 *
FUN_105c3af98(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  
  uVar1 = *param_3;
  *param_3 = 0;
  *param_1 = &PTR_FUN_1108dea38;
  param_1[1] = uVar1;
  func_0x000105c3f264(param_1 + 2,param_2,param_4,param_5);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = param_4;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x34] = 0x32aaaba7;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  lVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[0x3d] = param_5[1];
  param_1[0x3c] = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000105c3e940();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 105c3b044; end: 105c3b077;  */

undefined1 FUN_105c3b044(long param_1)

{
  if (lRam0000000113847390 != 0) {
    return 1;
  }
  func_0x00010b9a77a8();
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 105c3b078; end: 105c3b09f;  */

void FUN_105c3b078(void)

{
  func_0x000105c3e894();
  func_0x000105c3cd64();
  return;
}



/* Entry: 105c3b0a0; end: 105c3b0ab;  */

undefined8 * FUN_105c3b0a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110cfbcd0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b51f130();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_2 + 0x18;
  func_0x00010b51f13c();
  param_1[3] = lVar1;
  lVar1 = param_2 + 0x20;
  func_0x00010b51f13c();
  param_1[4] = lVar1;
  lVar1 = param_2 + 0x28;
  func_0x00010b51f13c();
  param_1[5] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010b51f050(0,*(undefined8 *)(param_2 + 0x30));
  }
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 105c3b0ac; end: 105c3b543;  */

/* WARNING: Type propagation algorithm not settling */

undefined ** FUN_105c3b0ac(undefined1 *param_1,long param_2,undefined **param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 *******pppppppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *******pppppppuStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_318;
  undefined8 uStack_308;
  undefined1 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined8 uStack_258;
  undefined1 *puStack_250;
  undefined1 uStack_248;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  long *aplStack_210 [2];
  byte bStack_200;
  undefined8 uStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [120];
  undefined1 auStack_168 [64];
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 auStack_120 [16];
  undefined1 uStack_110;
  undefined *apuStack_a8 [11];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = param_1;
  func_0x000105c3e6b0();
  apuStack_a8[0]._0_1_ = 0;
  uStack_50 = 0;
  uStack_48 = extraout_x8;
  FUN_105c3b044();
  if ((int)puVar6 != 0) {
    puVar6 = (undefined1 *)apuStack_a8;
    FUN_105c3c1f0(puVar6,&UNK_10f3328dd);
  }
  uStack_1f8 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_1e8 = 1;
  puStack_1f0 = puVar6;
  func_0x000105c3ea1c();
  uStack_128 = 0;
  uStack_110 = 0;
  func_0x000105c3e874();
  FUN_105c3f154();
  func_0x000105c3e860();
  func_0x000105c3e784();
  FUN_105c3f4a0(aplStack_210,param_2 + 0x10,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_228,(ulong)param_3[4] & 0xfffffffffffffffc);
  if ((bStack_200 & 1) == 0) {
    FUN_105c42aa0(*(undefined8 *)(param_2 + 0x68),1);
    func_0x000105c3ea1c();
    FUN_105c3d6a8(&uStack_128,&UNK_10f3328fb);
    func_0x000105c3e874();
    func_0x000105c3e830();
    func_0x000105c3e860();
    func_0x000105c3e784();
    *param_1 = 0;
    param_1[0xb0] = 0;
  }
  else {
    if (aplStack_210[0] == (long *)0x0) {
      plVar12 = (long *)0x0;
LAB_105c3b1d0:
      aplStack_210[0] = (long *)0x0;
    }
    else {
      plVar12 = aplStack_210[0];
      (**(code **)(*aplStack_210[0] + 0x10))();
      if (aplStack_210[0] == (long *)0x0) goto LAB_105c3b1d0;
      (**(code **)(*aplStack_210[0] + 0x18))();
    }
    func_0x00010bcd2bf8(auStack_240,plVar12,aplStack_210[0]);
    puVar6 = auStack_240;
    func_0x0001000e107c(puVar6,auStack_228);
    if (((ulong)puVar6 & 1) == 0) {
      FUN_105c42ad4(*(undefined8 *)(param_2 + 0x68),1);
      func_0x00010563bf9c(auStack_1e0,auStack_228,auStack_240);
      func_0x0001003a91d4(&UNK_10f332916);
      func_0x000105c3ea80(&puStack_2b0);
      func_0x000105c3ea1c();
      func_0x0001002a82b4(&uStack_128,&puStack_2b0);
      func_0x000105c3e874();
      func_0x000105c3e830();
      func_0x000105c3e860();
      func_0x000105c3e784();
      *param_1 = 0;
      param_1[0xb0] = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_2b0);
    }
    else {
      uStack_258 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_248 = 1;
      puStack_250 = puVar6;
      func_0x00010b99f074(auStack_270,aplStack_210);
      func_0x00010b93fe04(&uStack_128,auStack_270);
      func_0x0001003adc18(auStack_270);
      uVar17 = *(undefined8 *)(param_2 + 0x68);
      in_ZR = CONCAT71(uStack_127,uStack_128) == 1;
      if ((bool)in_ZR) {
        puVar7 = &uStack_258;
        func_0x0001002acb3c(puVar7);
        FUN_105c42b3c(uVar17,puVar7);
        uVar17 = *(undefined8 *)(param_2 + 0x68);
        puVar7 = &uStack_1f8;
        func_0x0001002acb3c(puVar7);
        FUN_105c42c0c(uVar17,puVar7);
        func_0x000105c3ea1c();
        puStack_2b0 = (undefined1 *)((ulong)puStack_2b0 & 0xffffffffffffff00);
        uStack_298 = 0;
        func_0x000105c3eb40();
        func_0x000105c3e868();
        func_0x000105c3e990();
        func_0x000105c3e784();
        FUN_105c3cef0(auStack_1e0,auStack_120);
        FUN_105c3b0a0(auStack_168,param_3);
        FUN_105c3cef0(param_1,auStack_1e0);
        FUN_105c3cde8(param_1 + 0x78,auStack_168);
        param_1[0xb0] = 1;
        FUN_105c3d4e0(auStack_1e0);
      }
      else {
        uVar11 = 1;
        FUN_105c42b08(uVar17);
        func_0x00010b99fc44(auStack_290,auStack_120);
        func_0x00010b99f8ac(auStack_1e0,auStack_290);
        puVar6 = auStack_1e0;
        func_0x0001005d466c();
        puStack_2b0 = puVar6;
        uStack_2a8 = uVar11;
        func_0x0001003a91d4(&UNK_10f332940);
        func_0x0001003a9204(auStack_288);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
        func_0x000104bda93c(auStack_290);
        func_0x000105c3ea1c();
        func_0x0001002a82b4(&puStack_2b0,auStack_288);
        func_0x000105c3eb40();
        func_0x000105c3e830();
        func_0x000105c3e990();
        func_0x000105c3e784();
        *param_1 = 0;
        param_1[0xb0] = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
      }
      func_0x000105c3e664(&uStack_128);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_228);
  func_0x0001000ff348(aplStack_210);
  ppuVar8 = apuStack_a8;
  FUN_105c3cd44();
  func_0x000105c3e68c(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  func_0x000105c3e990();
  func_0x000105c3e784();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
  func_0x000105c3e664(&uStack_128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_228);
  func_0x0001000ff348(aplStack_210);
  puVar6 = (undefined1 *)apuStack_a8;
  FUN_105c3cd44();
  func_0x000105c3e71c();
  func_0x000105c3ec3c();
  func_0x000105c3e6b0();
  uVar5 = puVar6[0x78] == '\x01';
  uStack_308 = extraout_x8_00;
  if ((bool)uVar5) {
    func_0x000105c3d468(ppuVar8 + 3,param_3 + 3);
    puStack_318 = (undefined *)0x0;
    puStack_340 = &UNK_10dd5b8b0;
    puStack_338 = (undefined *)0x0;
    puStack_330 = (undefined *)0x0;
    puStack_328 = (undefined *)0x0;
    plVar12 = (long *)param_3[9];
    FUN_105c3d0d0(&puStack_340);
    pppppppuVar9 = (undefined8 *******)(param_3 + 6);
    FUN_105c3d3ac();
    puVar13 = param_3[6];
    puVar15 = param_3[9];
    pppppppuStack_350 = pppppppuVar9;
    plStack_348 = plVar12;
    while (plVar12 = plStack_348, pppppppuStack_350 != (undefined8 *******)(puVar13 + (long)puVar15)
          ) {
      func_0x000105c3eaf8();
      ppuVar10 = &puStack_340;
      func_0x000105c3d124(ppuVar10,pppppppuVar9);
      bVar4 = (byte)pppppppuVar9 & 0x7f;
      puStack_340[(long)ppuVar10] = bVar4;
      puStack_340[((ulong)puStack_328 & (ulong)(ppuVar10 + -1)) + ((ulong)puStack_328 & 7) + 1] =
           bVar4;
      if (*plVar12 != 0) {
        piVar1 = (int *)(*plVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000105c3ebd4();
      pppppppuVar9 = &pppppppuStack_350;
      func_0x000105c3d434();
    }
    puVar19 = ppuVar8[7];
    puVar15 = ppuVar8[6];
    puVar20 = ppuVar8[9];
    puStack_330 = ppuVar8[8];
    ppuVar8[7] = puStack_338;
    ppuVar8[6] = puStack_340;
    puVar13 = (undefined *)((long)puStack_318 - (long)param_3[8]);
    ppuVar8[8] = param_3[8];
    ppuVar8[9] = puStack_328;
    puStack_318 = ppuVar8[0xb];
    puStack_340 = puVar15;
    puStack_338 = puVar19;
    puStack_328 = puVar20;
    ppuVar8[0xb] = puVar13;
    FUN_105c3d170();
    uVar5 = ppuVar8 == param_3;
    if (!(bool)uVar5) {
      puVar13 = param_3[0xc];
      puVar15 = param_3[0xd];
      uVar14 = (long)puVar15 - (long)puVar13;
      lVar18 = (long)uVar14 >> 3;
      uVar16 = (long)ppuVar8[0xe] - (long)ppuVar8[0xc];
      uVar5 = uVar14 == uVar16;
      if (uVar16 < uVar14) {
        func_0x000104bdcfa0(ppuVar8 + 0xc);
        ppuVar10 = ppuVar8 + 0xc;
        func_0x000104bdd3dc(ppuVar10,lVar18);
        func_0x000104bdd0f8(ppuVar8 + 0xc,ppuVar10);
      }
      else {
        uVar16 = (long)ppuVar8[0xd] - (long)ppuVar8[0xc];
        uVar5 = uVar14 == uVar16;
        if (uVar14 <= uVar16) {
          FUN_105c3d494(puVar13,puVar15);
          func_0x000104bdcfe0(ppuVar8 + 0xc,puVar13);
          goto LAB_105c3b74c;
        }
        FUN_105c3d494(puVar13,puVar13 + uVar16);
        lVar18 = lVar18 - ((long)ppuVar8[0xd] - (long)ppuVar8[0xc] >> 3);
        puVar13 = puVar13 + uVar16;
      }
      func_0x000104bdd130(ppuVar8 + 0xc,puVar13,puVar15,lVar18);
    }
  }
  else {
    FUN_105c3cef0(ppuVar8,param_3);
    *(undefined1 *)(ppuVar8 + 0xf) = 1;
  }
LAB_105c3b74c:
  func_0x000105c3e68c(uStack_308);
  if ((bool)uVar5) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_340;
  FUN_105c3d170();
  func_0x000105c3e71c();
  if (*(char *)(ppuVar8 + 7) == '\x01') {
    func_0x00010b51ee60();
  }
  else {
    FUN_105c3b0a0();
    *(undefined1 *)(ppuVar8 + 7) = 1;
  }
  return ppuVar8;
}



/* Entry: 105c3b544; end: 105c3b79b;  */

undefined ** FUN_105c3b544(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 *****pppppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 ****ppppuStack_a0;
  long *plStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_68;
  undefined8 uStack_58;
  
  func_0x000105c3ec3c();
  func_0x000105c3e6b0();
  uVar5 = *(char *)(param_1 + 0x78) == '\x01';
  uStack_58 = extraout_x8;
  if ((bool)uVar5) {
    func_0x000105c3d468(unaff_x19 + 3,unaff_x20 + 3);
    puStack_68 = (undefined *)0x0;
    puStack_90 = &UNK_10dd5b8b0;
    puStack_88 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    plVar8 = (long *)unaff_x20[9];
    FUN_105c3d0d0(&puStack_90);
    pppppuVar6 = (undefined8 *****)(unaff_x20 + 6);
    FUN_105c3d3ac();
    puVar9 = unaff_x20[6];
    puVar11 = unaff_x20[9];
    ppppuStack_a0 = pppppuVar6;
    plStack_98 = plVar8;
    while (plVar8 = plStack_98, ppppuStack_a0 != (undefined8 ****)(puVar9 + (long)puVar11)) {
      func_0x000105c3eaf8();
      ppuVar7 = &puStack_90;
      func_0x000105c3d124(ppuVar7,pppppuVar6);
      bVar4 = (byte)pppppuVar6 & 0x7f;
      puStack_90[(long)ppuVar7] = bVar4;
      puStack_90[((ulong)puStack_78 & (ulong)(ppuVar7 + -1)) + ((ulong)puStack_78 & 7) + 1] = bVar4;
      if (*plVar8 != 0) {
        piVar1 = (int *)(*plVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000105c3ebd4();
      pppppuVar6 = &ppppuStack_a0;
      func_0x000105c3d434();
    }
    puVar14 = unaff_x19[7];
    puVar11 = unaff_x19[6];
    puVar15 = unaff_x19[9];
    puStack_80 = unaff_x19[8];
    unaff_x19[7] = puStack_88;
    unaff_x19[6] = puStack_90;
    puVar9 = (undefined *)((long)puStack_68 - (long)unaff_x20[8]);
    unaff_x19[8] = unaff_x20[8];
    unaff_x19[9] = puStack_78;
    puStack_68 = unaff_x19[0xb];
    unaff_x19[0xb] = puVar9;
    puStack_90 = puVar11;
    puStack_88 = puVar14;
    puStack_78 = puVar15;
    FUN_105c3d170();
    uVar5 = unaff_x19 == unaff_x20;
    if (!(bool)uVar5) {
      puVar9 = unaff_x20[0xc];
      puVar11 = unaff_x20[0xd];
      uVar10 = (long)puVar11 - (long)puVar9;
      lVar13 = (long)uVar10 >> 3;
      uVar12 = (long)unaff_x19[0xe] - (long)unaff_x19[0xc];
      uVar5 = uVar10 == uVar12;
      if (uVar12 < uVar10) {
        func_0x000104bdcfa0(unaff_x19 + 0xc);
        ppuVar7 = unaff_x19 + 0xc;
        func_0x000104bdd3dc(ppuVar7,lVar13);
        func_0x000104bdd0f8(unaff_x19 + 0xc,ppuVar7);
      }
      else {
        uVar12 = (long)unaff_x19[0xd] - (long)unaff_x19[0xc];
        uVar5 = uVar10 == uVar12;
        if (uVar10 <= uVar12) {
          FUN_105c3d494(puVar9,puVar11);
          func_0x000104bdcfe0(unaff_x19 + 0xc,puVar9);
          goto LAB_105c3b74c;
        }
        FUN_105c3d494(puVar9,puVar9 + uVar12);
        lVar13 = lVar13 - ((long)unaff_x19[0xd] - (long)unaff_x19[0xc] >> 3);
        puVar9 = puVar9 + uVar12;
      }
      func_0x000104bdd130(unaff_x19 + 0xc,puVar9,puVar11,lVar13);
    }
  }
  else {
    FUN_105c3cef0();
    *(undefined1 *)(unaff_x19 + 0xf) = 1;
  }
LAB_105c3b74c:
  func_0x000105c3e68c(uStack_58);
  if ((bool)uVar5) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_90;
  FUN_105c3d170();
  func_0x000105c3e71c();
  if (*(char *)(ppuVar7 + 7) == '\x01') {
    func_0x00010b51ee60();
  }
  else {
    FUN_105c3b0a0();
    *(undefined1 *)(ppuVar7 + 7) = 1;
  }
  return ppuVar7;
}



/* Entry: 105c3b79c; end: 105c3b7d7;  */

long FUN_105c3b79c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010b51ee60();
  }
  else {
    FUN_105c3b0a0();
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return param_1;
}



/* Entry: 105c3b7d8; end: 105c3ba57;  */

undefined8 *
FUN_105c3b7d8(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar9;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_630 [56];
  undefined1 uStack_5f8;
  long lStack_5f0;
  int iStack_5e8;
  undefined4 uStack_5e4;
  char cStack_5d8;
  undefined1 auStack_5b8 [104];
  undefined1 auStack_550 [24];
  undefined1 uStack_538;
  undefined1 auStack_4f0 [8];
  undefined8 uStack_4e8;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 auStack_4b8 [11];
  undefined1 uStack_460;
  ulong auStack_458 [3];
  undefined *puStack_440;
  undefined1 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 **ppuStack_3d0;
  code *pcStack_3c8;
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  char cStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined1 uStack_380;
  undefined8 *puStack_378;
  undefined8 auStack_370 [11];
  undefined1 uStack_318;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  long lStack_308;
  char cStack_300;
  undefined1 uStack_2b8;
  undefined8 uStack_2a8;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [24];
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 uStack_1a8;
  undefined1 auStack_148 [56];
  undefined8 auStack_110 [22];
  byte bStack_60;
  undefined8 uStack_58;
  
  puVar5 = param_2;
  lVar9 = param_3;
  func_0x000105c3e6b0();
  puVar5 = puVar5 + 2;
  puVar7 = (undefined8 *)(*(ulong *)(lVar9 + 0x18) & 0xfffffffffffffffc);
  uStack_58 = extraout_x8;
  FUN_105c3f2c0();
  if ((int)puVar5 == 0) {
LAB_105c3b970:
    puVar11 = (undefined8 *)0x0;
  }
  else {
    plVar10 = (long *)param_2[0x3c];
    func_0x000105c3eb38(auStack_220);
    FUN_105c42720(auStack_110,auStack_220);
    (**(code **)(*plVar10 + 0x10))(plVar10,auStack_110);
    FUN_105c39a10(auStack_110);
    FUN_105c3ce98(auStack_220);
    if (((ulong)plVar10 & 1) == 0) {
      func_0x000105c3eb38(auStack_110);
      func_0x00010002b838(auStack_1c0,&UNK_10f332731);
      uStack_1a8 = 1;
      func_0x000105c3e830(param_4,auStack_110,5,10,param_6,auStack_1c0);
      func_0x0001001148fc(auStack_1c0);
      FUN_105c3ce98(auStack_110);
      puVar7 = (undefined8 *)param_2[0xd];
      FUN_105c42dac(puVar7,1);
      param_2 = (undefined8 *)param_2[0xd];
      func_0x000105c3eb18();
      puVar5 = param_2;
      FUN_105c42bd8();
      goto LAB_105c3b970;
    }
    puVar7 = auStack_110;
    FUN_105c3b0ac(puVar7,param_2,param_3);
    puVar11 = (undefined8 *)(ulong)bStack_60;
    if ((bStack_60 & 1) == 0) {
      param_2 = (undefined8 *)param_2[0xd];
      func_0x000105c3eb18();
      FUN_105c42bd8(param_2);
    }
    else {
      FUN_105c3ceb8(auStack_1c0,auStack_110);
      func_0x000105c3e840();
      FUN_105c3b544(param_2 + 0x10,auStack_1c0);
      FUN_105c3b79c(param_2 + 0x20,auStack_148);
      func_0x000105c3e770();
      func_0x000105c3eb38(auStack_260);
      auStack_1e0[0] = 0;
      uStack_1c8 = 0;
      func_0x000105c3e868(param_4,auStack_260,8);
      func_0x0001001148fc(auStack_1e0);
      func_0x000105c3eaac();
      puVar7 = (undefined8 *)param_2[0xd];
      FUN_105c429d0(puVar7,1);
      param_2 = (undefined8 *)param_2[0xd];
      func_0x000105c3eb18();
      FUN_105c42b70(param_2);
      FUN_105c3d4e0(auStack_1c0);
    }
    puVar5 = auStack_110;
    FUN_105c3d508();
  }
  func_0x000105c3e68c(uStack_58);
  if ((bool)in_ZR) {
    return puVar11;
  }
  ___stack_chk_fail();
  FUN_105c3d4e0(auStack_1c0);
  puVar11 = auStack_110;
  FUN_105c3d508();
  func_0x000105c3e71c();
  pcStack_268 = FUN_105c3ba58;
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x000105c3e848();
  func_0x000105c3e6b0();
  auStack_370[0]._0_1_ = 0;
  uStack_318 = 0;
  uStack_2a8 = extraout_x8_00;
  FUN_105c3b044();
  if ((int)puVar11 != 0) {
    uVar1 = puVar7[1];
    puVar11 = (undefined8 *)*puVar7;
    if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar7 + 0x17);
      puVar11 = puVar7;
    }
    func_0x00010b9a7544(&uStack_310,&UNK_10f3327e1,0x1d,puVar11,uVar1);
    FUN_105c3cce4(auStack_370);
    func_0x00010b9a7674(auStack_370,&uStack_310);
    uStack_318 = 1;
    puVar11 = (undefined8 *)&uStack_310;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  uStack_390 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_380 = 1;
  uStack_310 = 0;
  uStack_2b8 = 0;
  puStack_388 = puVar11;
  FUN_105c3b044();
  if ((int)puVar11 != 0) {
    FUN_105c3cce4(&uStack_310);
    FUN_105c3cd08(&uStack_310,&UNK_10f332797);
    uStack_2b8 = 1;
  }
  if (param_2[0xe] != -1) {
    puStack_378 = param_2;
    func_0x000105c3eb78();
    __ZNSt3__111__call_onceERVmPvPFvS2_E();
  }
  uVar3 = param_2[0xf] == -1;
  puStack_378 = param_2;
  if (!(bool)uVar3) {
    func_0x000105c3eb78();
    __ZNSt3__111__call_onceERVmPvPFvS2_E();
  }
  func_0x000105c3e840();
  bVar2 = *(byte *)(param_2 + 0x1f);
  func_0x000105c3e770();
  FUN_105c3cd44(&uStack_310);
  if ((bVar2 & 1) == 0) {
    *(undefined1 *)puVar5 = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)(puVar5 + 8) = 1;
  }
  else {
    func_0x0001003a8364();
    func_0x0001003ac750(&puStack_378);
    uStack_310 = 0;
    cStack_300 = '\0';
    func_0x000105c3e840();
    if ((*(char *)(param_2 + 0x1f) == '\x01') &&
       (func_0x00010b93fc94(&uStack_3a8,param_2 + 0x10,&puStack_378), cStack_398 == '\x01')) {
      func_0x00010bd48000(auStack_3b8,uStack_3a8,uStack_3a0);
      func_0x000100836750(&uStack_310,auStack_3b8);
      func_0x0001000ff1ac(auStack_3b8);
    }
    func_0x000105c3e770();
    param_2 = (undefined8 *)param_2[0xd];
    uVar3 = cStack_300 == '\x01';
    if ((bool)uVar3) {
      puVar11 = &uStack_390;
      func_0x0001002acb3c(puVar11);
      FUN_105c42c40(param_2,puVar11);
      param_1 = CONCAT71(uStack_30f,uStack_310);
      puVar5[1] = lStack_308;
      *puVar5 = param_1;
      if (lStack_308 != 0) {
        do {
          func_0x000105c3e940();
        } while (extraout_w10 != 0);
      }
      uVar8 = 1;
    }
    else {
      puVar11 = &uStack_390;
      func_0x0001002acb3c(puVar11);
      FUN_105c42c74(param_2,puVar11);
      uVar8 = 0;
      *(undefined1 *)puVar5 = 0;
    }
    *(undefined1 *)(puVar5 + 2) = uVar8;
    *(undefined1 *)(puVar5 + 8) = 1;
    func_0x0001000ff348(&uStack_310);
    func_0x0001003a8c94(&puStack_378);
  }
  puVar5 = auStack_370;
  FUN_105c3cd44();
  func_0x000105c3e68c(uStack_2a8);
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001000ff1ac(auStack_3b8);
  func_0x000105c3e770();
  func_0x0001000ff348(&uStack_310);
  func_0x0001003a8c94(&puStack_378);
  iVar4 = (int)auStack_370;
  FUN_105c3cd44();
  func_0x000105c3e71c();
  pcStack_3c8 = FUN_105c3bd34;
  uStack_3f0 = (ulong)bVar2;
  puStack_3e8 = puVar7;
  puStack_3e0 = param_2;
  puStack_3d8 = puVar5;
  ppuStack_3d0 = &puStack_270;
  func_0x000105c3e848();
  func_0x000105c3e6b0();
  auStack_4b8[0]._0_1_ = 0;
  uStack_460 = 0;
  uStack_3f8 = extraout_x8_01;
  FUN_105c3b044();
  if (iVar4 != 0) {
    FUN_105c3c008(auStack_4b8,&UNK_10f3327ff);
  }
  func_0x000105c3e9d8();
  func_0x000105c3e738();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5b8);
  iVar4 = (int)param_2[1];
  func_0x000105c3eae4();
  uVar3 = 0;
  if ((cStack_5d8 != '\x01') || (uVar3 = 1, lStack_5f0 == CONCAT44(uStack_5e4,iStack_5e8))) {
    func_0x000105c3ec1c();
    goto LAB_105c3bf64;
  }
  auStack_458[0] = auStack_458[0] & 0xffffffffffffff00;
  uStack_400 = 0;
  FUN_105c3b044();
  if (iVar4 != 0) {
    func_0x000105c3eab4();
    auStack_458[0] = 0;
    auStack_458[1] = 0;
    auStack_458[2] = 0;
    puStack_440 = &UNK_10f332854;
    func_0x000105c3eb98(0x26);
    func_0x00010bd3f3dc();
    func_0x00010b9a7630(auStack_458);
    uStack_400 = 1;
  }
  func_0x000105c3ea90();
  uStack_4e8 = param_1;
  func_0x000105c3ea70();
  puStack_4d8 = &DAT_11383d918;
  puStack_4d0 = &DAT_11383d918;
  puStack_4c8 = &DAT_11383d918;
  uStack_4c0 = 0;
  func_0x000105c3eb8c();
  auStack_550[0] = 0;
  uStack_538 = 0;
  func_0x000105c3e724();
  func_0x000105c3ea50();
  func_0x000105c3e8d0();
  func_0x000105c3e8c8();
  puVar6 = auStack_4f0;
  func_0x00010006369c(puVar6,lStack_5f0,iStack_5e8 - (int)lStack_5f0);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_105c42a38(param_2[0xd],1);
    func_0x000105c3eb8c();
    func_0x00010002b838(auStack_550,&UNK_10f33287b);
    uStack_538 = 1;
    func_0x000105c3e724();
    func_0x000105c3e830();
    func_0x000105c3e8d0();
    func_0x000105c3e8c8();
LAB_105c3bf28:
    auStack_630[0] = 0;
    uStack_5f8 = 0;
  }
  else {
    func_0x000105c3eb54(puStack_4d8);
    if (extraout_x8_02 < 0) {
      if (*(long *)(extraout_x9 + 8) != 0) goto LAB_105c3beac;
LAB_105c3beec:
      func_0x000105c3eb8c();
      func_0x00010002b838(auStack_550,&UNK_10f3328af);
      uStack_538 = 1;
      func_0x000105c3e724();
      func_0x000105c3e830();
      func_0x000105c3e8d0();
      func_0x000105c3e8c8();
      FUN_105c42a6c(param_2[0xd],1);
      goto LAB_105c3bf28;
    }
    if (extraout_x8_02 == 0) goto LAB_105c3beec;
LAB_105c3beac:
    func_0x000105c3eb54(puStack_4d0);
    lVar9 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar9 = *(long *)(extraout_x9_00 + 8);
    }
    if (lVar9 == 0) goto LAB_105c3beec;
    func_0x000105c3eb8c();
    auStack_550[0] = 0;
    uStack_538 = 0;
    func_0x000105c3e724();
    func_0x000105c3e868();
    func_0x000105c3e8d0();
    func_0x000105c3e8c8();
    FUN_105c3d638(auStack_630,auStack_4f0);
  }
  func_0x00010b51ea44(auStack_4f0);
  func_0x000105c3e998();
  func_0x000105c3ec1c(uStack_5f8);
  uVar3 = extraout_w8 == 1;
  if ((bool)uVar3) {
    FUN_105c3cde8(puVar5,auStack_630);
    *(undefined1 *)(puVar5 + 7) = 1;
  }
  func_0x000105c3eaac();
LAB_105c3bf64:
  func_0x000105c3e9b8();
  func_0x000105c3e9f0();
  puVar5 = auStack_4b8;
  FUN_105c3cd44();
  func_0x000105c3e68c(uStack_3f8);
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x000105c3e8d0();
  func_0x000105c3e8c8();
  func_0x00010b51ea44(auStack_4f0);
  func_0x000105c3e998();
  func_0x000105c3e9b8();
  func_0x000105c3e9f0();
  FUN_105c3cd44(auStack_4b8);
  func_0x000105c3e71c();
  func_0x000105c3e894();
  func_0x000105c3d5e0(param_2,puVar5);
  return param_2;
}



/* Entry: 105c3ba58; end: 105c3bd33;  */

undefined1 * FUN_105c3ba58(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_3d0 [56];
  undefined1 uStack_398;
  long lStack_390;
  int iStack_388;
  undefined4 uStack_384;
  char cStack_378;
  undefined1 auStack_358 [104];
  undefined1 auStack_2f0 [24];
  undefined1 uStack_2d8;
  undefined1 auStack_290 [8];
  undefined8 uStack_288;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [88];
  undefined1 uStack_200;
  ulong auStack_1f8 [3];
  undefined *puStack_1e0;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  char cStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_120;
  undefined1 auStack_110 [88];
  undefined1 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  char cStack_a0;
  undefined1 uStack_58;
  undefined8 uStack_48;
  
  func_0x000105c3e848();
  func_0x000105c3e6b0();
  auStack_110[0] = 0;
  uStack_b8 = 0;
  uStack_48 = extraout_x8;
  FUN_105c3b044();
  if ((int)param_2 != 0) {
    uVar1 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    func_0x00010b9a7544(&uStack_b0,&UNK_10f3327e1,0x1d,puVar5,uVar1);
    FUN_105c3cce4(auStack_110);
    func_0x00010b9a7674(auStack_110,&uStack_b0);
    uStack_b8 = 1;
    param_2 = &uStack_b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  uStack_130 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_120 = 1;
  uStack_b0 = 0;
  uStack_58 = 0;
  puStack_128 = param_2;
  FUN_105c3b044();
  if ((int)param_2 != 0) {
    FUN_105c3cce4(&uStack_b0);
    FUN_105c3cd08(&uStack_b0,&UNK_10f332797);
    uStack_58 = 1;
  }
  if (*(long *)(unaff_x20 + 0x70) != -1) {
    func_0x000105c3eb78();
    __ZNSt3__111__call_onceERVmPvPFvS2_E();
  }
  uVar3 = *(long *)(unaff_x20 + 0x78) == -1;
  if (!(bool)uVar3) {
    func_0x000105c3eb78();
    __ZNSt3__111__call_onceERVmPvPFvS2_E();
  }
  func_0x000105c3e840();
  bVar2 = unaff_x20[0xf8];
  func_0x000105c3e770();
  FUN_105c3cd44(&uStack_b0);
  if ((bVar2 & 1) == 0) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 2) = 0;
    *(undefined1 *)(unaff_x19 + 8) = 1;
  }
  else {
    func_0x0001003a8364();
    func_0x0001003ac750(&stack0xfffffffffffffee8);
    uStack_b0 = 0;
    cStack_a0 = '\0';
    func_0x000105c3e840();
    if ((unaff_x20[0xf8] == '\x01') &&
       (func_0x00010b93fc94(&uStack_148,unaff_x20 + 0x80,&stack0xfffffffffffffee8),
       cStack_138 == '\x01')) {
      func_0x00010bd48000(auStack_158,uStack_148,uStack_140);
      func_0x000100836750(&uStack_b0,auStack_158);
      func_0x0001000ff1ac(auStack_158);
    }
    func_0x000105c3e770();
    unaff_x20 = *(undefined1 **)(unaff_x20 + 0x68);
    uVar3 = cStack_a0 == '\x01';
    if ((bool)uVar3) {
      puVar5 = &uStack_130;
      func_0x0001002acb3c(puVar5);
      FUN_105c42c40(unaff_x20,puVar5);
      param_1 = CONCAT71(uStack_af,uStack_b0);
      unaff_x19[1] = lStack_a8;
      *unaff_x19 = param_1;
      if (lStack_a8 != 0) {
        do {
          func_0x000105c3e940();
        } while (extraout_w10 != 0);
      }
      uVar8 = 1;
    }
    else {
      puVar5 = &uStack_130;
      func_0x0001002acb3c(puVar5);
      FUN_105c42c74(unaff_x20,puVar5);
      uVar8 = 0;
      *(undefined1 *)unaff_x19 = 0;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar8;
    *(undefined1 *)(unaff_x19 + 8) = 1;
    func_0x0001000ff348(&uStack_b0);
    func_0x0001003a8c94(&stack0xfffffffffffffee8);
  }
  puVar6 = auStack_110;
  FUN_105c3cd44();
  func_0x000105c3e68c(uStack_48);
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001000ff1ac(auStack_158);
  func_0x000105c3e770();
  func_0x0001000ff348(&uStack_b0);
  func_0x0001003a8c94(&stack0xfffffffffffffee8);
  iVar4 = (int)auStack_110;
  FUN_105c3cd44();
  func_0x000105c3e71c();
  pcStack_168 = FUN_105c3bd34;
  uStack_190 = (ulong)bVar2;
  puStack_188 = param_3;
  puStack_180 = unaff_x20;
  puStack_178 = puVar6;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x000105c3e848();
  func_0x000105c3e6b0();
  auStack_258[0] = 0;
  uStack_200 = 0;
  uStack_198 = extraout_x8_00;
  FUN_105c3b044();
  if (iVar4 != 0) {
    FUN_105c3c008(auStack_258,&UNK_10f3327ff);
  }
  func_0x000105c3e9d8();
  func_0x000105c3e738();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_358);
  iVar4 = (int)*(undefined8 *)(unaff_x20 + 8);
  func_0x000105c3eae4();
  uVar3 = 0;
  if ((cStack_378 != '\x01') || (uVar3 = 1, lStack_390 == CONCAT44(uStack_384,iStack_388))) {
    func_0x000105c3ec1c();
    goto LAB_105c3bf64;
  }
  auStack_1f8[0] = auStack_1f8[0] & 0xffffffffffffff00;
  uStack_1a0 = 0;
  FUN_105c3b044();
  if (iVar4 != 0) {
    func_0x000105c3eab4();
    auStack_1f8[0] = 0;
    auStack_1f8[1] = 0;
    auStack_1f8[2] = 0;
    puStack_1e0 = &UNK_10f332854;
    func_0x000105c3eb98(0x26);
    func_0x00010bd3f3dc();
    func_0x00010b9a7630(auStack_1f8);
    uStack_1a0 = 1;
  }
  func_0x000105c3ea90();
  uStack_288 = param_1;
  func_0x000105c3ea70();
  puStack_278 = &DAT_11383d918;
  puStack_270 = &DAT_11383d918;
  puStack_268 = &DAT_11383d918;
  uStack_260 = 0;
  func_0x000105c3eb8c();
  auStack_2f0[0] = 0;
  uStack_2d8 = 0;
  func_0x000105c3e724();
  func_0x000105c3ea50();
  func_0x000105c3e8d0();
  func_0x000105c3e8c8();
  puVar7 = auStack_290;
  func_0x00010006369c(puVar7,lStack_390,iStack_388 - (int)lStack_390);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_105c42a38(*(undefined8 *)(unaff_x20 + 0x68),1);
    func_0x000105c3eb8c();
    func_0x00010002b838(auStack_2f0,&UNK_10f33287b);
    uStack_2d8 = 1;
    func_0x000105c3e724();
    func_0x000105c3e830();
    func_0x000105c3e8d0();
    func_0x000105c3e8c8();
LAB_105c3bf28:
    auStack_3d0[0] = 0;
    uStack_398 = 0;
  }
  else {
    func_0x000105c3eb54(puStack_278);
    if (extraout_x8_01 < 0) {
      if (*(long *)(extraout_x9 + 8) != 0) goto LAB_105c3beac;
LAB_105c3beec:
      func_0x000105c3eb8c();
      func_0x00010002b838(auStack_2f0,&UNK_10f3328af);
      uStack_2d8 = 1;
      func_0x000105c3e724();
      func_0x000105c3e830();
      func_0x000105c3e8d0();
      func_0x000105c3e8c8();
      FUN_105c42a6c(*(undefined8 *)(unaff_x20 + 0x68),1);
      goto LAB_105c3bf28;
    }
    if (extraout_x8_01 == 0) goto LAB_105c3beec;
LAB_105c3beac:
    func_0x000105c3eb54(puStack_270);
    lVar9 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar9 = *(long *)(extraout_x9_00 + 8);
    }
    if (lVar9 == 0) goto LAB_105c3beec;
    func_0x000105c3eb8c();
    auStack_2f0[0] = 0;
    uStack_2d8 = 0;
    func_0x000105c3e724();
    func_0x000105c3e868();
    func_0x000105c3e8d0();
    func_0x000105c3e8c8();
    FUN_105c3d638(auStack_3d0,auStack_290);
  }
  func_0x00010b51ea44(auStack_290);
  func_0x000105c3e998();
  func_0x000105c3ec1c(uStack_398);
  uVar3 = extraout_w8 == 1;
  if ((bool)uVar3) {
    FUN_105c3cde8(puVar6,auStack_3d0);
    puVar6[0x38] = 1;
  }
  func_0x000105c3eaac();
LAB_105c3bf64:
  func_0x000105c3e9b8();
  func_0x000105c3e9f0();
  puVar6 = auStack_258;
  FUN_105c3cd44();
  func_0x000105c3e68c(uStack_198);
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x000105c3e8d0();
  func_0x000105c3e8c8();
  func_0x00010b51ea44(auStack_290);
  func_0x000105c3e998();
  func_0x000105c3e9b8();
  func_0x000105c3e9f0();
  FUN_105c3cd44(auStack_258);
  func_0x000105c3e71c();
  func_0x000105c3e894();
  func_0x000105c3d5e0(unaff_x20,puVar6);
  return unaff_x20;
}



/* Entry: 105c3bd34; end: 105c3c007;  */

void FUN_105c3bd34(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_270 [56];
  undefined1 uStack_238;
  long lStack_230;
  int iStack_228;
  undefined4 uStack_224;
  char cStack_218;
  undefined1 auStack_1f8 [104];
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [88];
  undefined1 uStack_a0;
  ulong auStack_98 [3];
  undefined *puStack_80;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x000105c3e848();
  func_0x000105c3e6b0();
  auStack_f8[0] = 0;
  uStack_a0 = 0;
  uStack_38 = extraout_x8;
  FUN_105c3b044();
  if (param_2 != 0) {
    FUN_105c3c008(auStack_f8,&UNK_10f3327ff);
  }
  func_0x000105c3e9d8();
  func_0x000105c3e738();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
  iVar2 = (int)*(undefined8 *)(unaff_x20 + 8);
  func_0x000105c3eae4();
  uVar1 = 0;
  if ((cStack_218 != '\x01') || (uVar1 = 1, lStack_230 == CONCAT44(uStack_224,iStack_228))) {
    func_0x000105c3ec1c();
    goto LAB_105c3bf64;
  }
  auStack_98[0] = auStack_98[0] & 0xffffffffffffff00;
  uStack_40 = 0;
  FUN_105c3b044();
  if (iVar2 != 0) {
    func_0x000105c3eab4();
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    puStack_80 = &UNK_10f332854;
    func_0x000105c3eb98(0x26);
    func_0x00010bd3f3dc();
    func_0x00010b9a7630(auStack_98);
    uStack_40 = 1;
  }
  func_0x000105c3ea90();
  uStack_128 = param_1;
  func_0x000105c3ea70();
  puStack_118 = &DAT_11383d918;
  puStack_110 = &DAT_11383d918;
  puStack_108 = &DAT_11383d918;
  uStack_100 = 0;
  func_0x000105c3eb8c();
  auStack_190[0] = 0;
  uStack_178 = 0;
  func_0x000105c3e724();
  func_0x000105c3ea50();
  func_0x000105c3e8d0();
  func_0x000105c3e8c8();
  puVar3 = auStack_130;
  func_0x00010006369c(puVar3,lStack_230,iStack_228 - (int)lStack_230);
  if (((ulong)puVar3 & 1) == 0) {
    FUN_105c42a38(*(undefined8 *)(unaff_x20 + 0x68),1);
    func_0x000105c3eb8c();
    func_0x00010002b838(auStack_190,&UNK_10f33287b);
    uStack_178 = 1;
    func_0x000105c3e724();
    func_0x000105c3e830();
    func_0x000105c3e8d0();
    func_0x000105c3e8c8();
LAB_105c3bf28:
    auStack_270[0] = 0;
    uStack_238 = 0;
  }
  else {
    func_0x000105c3eb54(puStack_118);
    if (extraout_x8_00 < 0) {
      if (*(long *)(extraout_x9 + 8) != 0) goto LAB_105c3beac;
LAB_105c3beec:
      func_0x000105c3eb8c();
      func_0x00010002b838(auStack_190,&UNK_10f3328af);
      uStack_178 = 1;
      func_0x000105c3e724();
      func_0x000105c3e830();
      func_0x000105c3e8d0();
      func_0x000105c3e8c8();
      FUN_105c42a6c(*(undefined8 *)(unaff_x20 + 0x68),1);
      goto LAB_105c3bf28;
    }
    if (extraout_x8_00 == 0) goto LAB_105c3beec;
LAB_105c3beac:
    func_0x000105c3eb54(puStack_110);
    lVar4 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar4 = *(long *)(extraout_x9_00 + 8);
    }
    if (lVar4 == 0) goto LAB_105c3beec;
    func_0x000105c3eb8c();
    auStack_190[0] = 0;
    uStack_178 = 0;
    func_0x000105c3e724();
    func_0x000105c3e868();
    func_0x000105c3e8d0();
    func_0x000105c3e8c8();
    FUN_105c3d638(auStack_270,auStack_130);
  }
  func_0x00010b51ea44(auStack_130);
  func_0x000105c3e998();
  func_0x000105c3ec1c(uStack_238);
  uVar1 = extraout_w8 == 1;
  if ((bool)uVar1) {
    FUN_105c3cde8();
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
  }
  func_0x000105c3eaac();
LAB_105c3bf64:
  func_0x000105c3e9b8();
  func_0x000105c3e9f0();
  FUN_105c3cd44();
  func_0x000105c3e68c(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000105c3e8d0();
    func_0x000105c3e8c8();
    func_0x00010b51ea44(auStack_130);
    func_0x000105c3e998();
    func_0x000105c3e9b8();
    func_0x000105c3e9f0();
    FUN_105c3cd44(auStack_f8);
    func_0x000105c3e71c();
    func_0x000105c3e894();
    func_0x000105c3d5e0();
    return;
  }
  return;
}



/* Entry: 105c3c008; end: 105c3c02f;  */

void FUN_105c3c008(void)

{
  func_0x000105c3e894();
  func_0x000105c3d5e0();
  return;
}



/* Entry: 105c3c030; end: 105c3c1ef;  */

void FUN_105c3c030(int param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x20;
  long lStack_130;
  long lStack_128;
  char cStack_118;
  undefined1 auStack_f8 [96];
  ulong auStack_98 [3];
  undefined *puStack_80;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x000105c3ec3c();
  func_0x000105c3e6b0();
  auStack_98[0] = auStack_98[0] & 0xffffffffffffff00;
  uStack_40 = 0;
  uStack_38 = extraout_x8;
  FUN_105c3b044();
  if (param_1 != 0) {
    func_0x000105c3eab4();
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    puStack_80 = &UNK_10f332824;
    func_0x000105c3eb98(0x2f);
    func_0x00010bd3f3dc();
    func_0x00010b9a7630(auStack_98);
    uStack_40 = 1;
  }
  func_0x000105c3e840();
  uVar1 = *(char *)(unaff_x20 + 0x178) == '\x01';
  if ((bool)uVar1) {
    FUN_105c3d528();
    func_0x000105c3e770();
    goto LAB_105c3c17c;
  }
  func_0x000105c3e770();
  func_0x000105c3e9d8();
  func_0x000105c3e738();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  func_0x000105c3eae4();
  uVar1 = cStack_118 == '\x01';
  if ((bool)uVar1) {
    uVar1 = lStack_130 == lStack_128;
    if ((bool)uVar1) goto LAB_105c3c164;
    func_0x000105c3ea90();
    uVar2 = 0;
    func_0x00010006369c();
    if ((uVar2 & 1) == 0) {
LAB_105c3c16c:
      func_0x000105c3ec1c();
    }
    else {
      func_0x000105c3eb54(&DAT_11383d918);
      lVar3 = extraout_x8_00;
      if (extraout_x8_00 < 0) {
        lVar3 = *(long *)(extraout_x9 + 8);
      }
      if (lVar3 == 0) goto LAB_105c3c16c;
      func_0x000105c3eb54(&DAT_11383d918);
      lVar3 = extraout_x8_01;
      if (extraout_x8_01 < 0) {
        lVar3 = *(long *)(extraout_x9_00 + 8);
      }
      if (lVar3 == 0) goto LAB_105c3c16c;
      func_0x000105c3d638();
    }
    func_0x000105c3e9d0();
  }
  else {
LAB_105c3c164:
    func_0x000105c3ec1c();
  }
  func_0x000105c3e9b8();
  func_0x000105c3e9f0();
LAB_105c3c17c:
  func_0x000105c3e998();
  func_0x000105c3e68c(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105c3e9d0();
  func_0x000105c3e9b8();
  func_0x000105c3e9f0();
  func_0x000105c3e998();
  func_0x000105c3e71c();
  func_0x000105c3e894();
  func_0x000105c3d650();
  return;
}



/* Entry: 105c3c1f0; end: 105c3c217;  */

void FUN_105c3c1f0(void)

{
  func_0x000105c3e894();
  func_0x000105c3d650();
  return;
}



/* Entry: 105c3c218; end: 105c3c253;  */

void FUN_105c3c218(void)

{
  long unaff_x19;
  
  func_0x000105c3e6a0();
  if ((*(byte *)(unaff_x19 + 0x138) & 1) == 0) {
    func_0x000105c3e934();
  }
  else {
    func_0x000105c3e8bc(*(undefined8 *)(unaff_x19 + 0x118));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x1a0);
  return;
}



/* Entry: 105c3c254; end: 105c3c28f;  */

void FUN_105c3c254(void)

{
  long unaff_x19;
  
  func_0x000105c3e6a0();
  if ((*(byte *)(unaff_x19 + 0x138) & 1) == 0) {
    func_0x000105c3e934();
  }
  else {
    func_0x000105c3e8bc(*(undefined8 *)(unaff_x19 + 0x120));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x1a0);
  return;
}



/* Entry: 105c3c290; end: 105c3c2cb;  */

void FUN_105c3c290(void)

{
  long unaff_x19;
  
  func_0x000105c3e6a0();
  if ((*(byte *)(unaff_x19 + 0x138) & 1) == 0) {
    func_0x000105c3e934();
  }
  else {
    func_0x000105c3e8bc(*(undefined8 *)(unaff_x19 + 0x128));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x1a0);
  return;
}



/* Entry: 105c3c2cc; end: 105c3c333;  */

void FUN_105c3c2cc(void)

{
  long unaff_x19;
  undefined1 auStack_78 [64];
  undefined1 auStack_38 [24];
  
  func_0x000105c3e6a0();
  if ((*(byte *)(unaff_x19 + 0x138) & 1) == 0) {
    func_0x000105c3e934();
  }
  else {
    func_0x000105c3e6cc(*(undefined8 *)(unaff_x19 + 0x130));
    func_0x000105c3e8f4();
    FUN_105c3ac2c(auStack_38,auStack_78);
    func_0x000105c3e78c();
    func_0x000105c3e7dc();
  }
  func_0x000105c3e70c();
  return;
}



/* Entry: 105c3c334; end: 105c3c39b;  */

void FUN_105c3c334(void)

{
  long unaff_x19;
  undefined1 auStack_78 [64];
  undefined1 auStack_38 [24];
  
  func_0x000105c3e6a0();
  if ((*(byte *)(unaff_x19 + 0x138) & 1) == 0) {
    func_0x000105c3e934();
  }
  else {
    func_0x000105c3e6cc(*(undefined8 *)(unaff_x19 + 0x130));
    func_0x000105c3e8f4();
    func_0x000105c3ac8c(auStack_38,auStack_78);
    func_0x000105c3e78c();
    func_0x000105c3e7dc();
  }
  func_0x000105c3e70c();
  return;
}



/* Entry: 105c3c39c; end: 105c3c4a7;  */

void FUN_105c3c39c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  
  func_0x000105c3e6a0();
  if ((*(char *)(unaff_x19 + 0x138) == '\x01') && ((*(byte *)(unaff_x19 + 0xf8) & 1) != 0)) {
    func_0x000104bdd07c(&lStack_48,unaff_x19 + 0xe0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x0001000fc044(&uStack_60,lStack_40 - lStack_48 >> 3);
    for (lVar1 = lStack_48; lVar1 != lStack_40; lVar1 = lVar1 + 8) {
      func_0x00010b9a5e5c(auStack_78,lVar1);
      func_0x0001000fecf4(&uStack_60,auStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    }
    unaff_x20[1] = uStack_58;
    *unaff_x20 = uStack_60;
    unaff_x20[2] = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 1;
    func_0x0001000e30f4(&uStack_60);
    func_0x000104bdd014(&lStack_48);
  }
  else {
    func_0x000105c3e934();
  }
  func_0x000105c3e70c();
  return;
}



/* Entry: 105c3c4a8; end: 105c3c557;  */

void FUN_105c3c4a8(void)

{
  byte abStack_78 [8];
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [56];
  byte bStack_28;
  
  func_0x000105c3e848();
  func_0x000105c3e950(auStack_60);
  if ((bStack_28 & 1) == 0) {
    func_0x000105c3d6c0();
  }
  else {
    func_0x000105c3e888(abStack_78);
    if (((abStack_78[0] & 1) == 0) || (0 < lStack_68 && lStack_70 < lStack_68)) {
      func_0x000105c3d6f0();
    }
    else {
      func_0x000105c3d6d8();
    }
  }
  func_0x000105c3e9e8();
  return;
}



/* Entry: 105c3c558; end: 105c3c5e3;  */

void FUN_105c3c558(void)

{
  char acStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [56];
  byte bStack_28;
  
  func_0x000105c3e848();
  func_0x000105c3e950(auStack_60);
  if ((bStack_28 & 1) == 0) {
    func_0x000105c3ec10();
  }
  else {
    func_0x000105c3e888(acStack_80);
    puStack_68 = &DAT_10f33254e;
    if ((acStack_80[0] == '\x01') &&
       (puStack_68 = &DAT_10f33298e, lStack_78 < lStack_70 && 0 < lStack_70)) {
      puStack_68 = &DAT_10f33254e;
    }
    func_0x000105c3d708();
  }
  func_0x000105c3e9e8();
  return;
}



/* Entry: 105c3c5e4; end: 105c3c713;  */

void FUN_105c3c5e4(void)

{
  undefined8 *unaff_x19;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [56];
  byte bStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [32];
  
  func_0x000105c3e848();
  func_0x000105c3e950(auStack_b0);
  if ((bStack_78 & 1) == 0) {
    func_0x000105c3ec10();
  }
  else {
    func_0x000105c3e888(auStack_e0);
    if (lStack_d8 < 1 && lStack_d0 < 1) {
      func_0x00010002b838(&uStack_c8,"Unknown");
    }
    else {
      if (lStack_d0 < 1) {
        func_0x00010002b838(auStack_58,"Unknown");
      }
      else {
        func_0x000105c3acec(auStack_58);
      }
      func_0x000105c3acec(auStack_70,lStack_d8);
      func_0x00010564d904(auStack_40,auStack_70,auStack_58);
      func_0x0001003a91d4(&UNK_10f332729);
      func_0x000105c3ea80(&uStack_c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    }
    unaff_x19[1] = uStack_c0;
    *unaff_x19 = uStack_c8;
    unaff_x19[2] = uStack_b8;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    func_0x000105c3e974();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  }
  FUN_105c3ce98(auStack_b0);
  return;
}



/* Entry: 105c3c714; end: 105c3c77b;  */

void FUN_105c3c714(void)

{
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [72];
  undefined8 uStack_30;
  byte bStack_28;
  
  func_0x000105c3e980();
  if ((bStack_28 & 1) == 0) {
    func_0x000105c3ec10();
  }
  else {
    func_0x000105c3e6cc(uStack_30);
    func_0x000105c3e8f4();
    FUN_105c3ac2c(auStack_78,auStack_b8);
    func_0x000105c3e7b4();
    func_0x000105c3e7dc();
  }
  func_0x000105c3e9a8();
  return;
}



/* Entry: 105c3c77c; end: 105c3c7e3;  */

void FUN_105c3c77c(void)

{
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [72];
  undefined8 uStack_30;
  byte bStack_28;
  
  func_0x000105c3e980();
  if ((bStack_28 & 1) == 0) {
    func_0x000105c3ec10();
  }
  else {
    func_0x000105c3e6cc(uStack_30);
    func_0x000105c3e8f4();
    func_0x000105c3ac8c(auStack_78,auStack_b8);
    func_0x000105c3e7b4();
    func_0x000105c3e7dc();
  }
  func_0x000105c3e9a8();
  return;
}



/* Entry: 105c3c7e4; end: 105c3c8ab;  */

void FUN_105c3c7e4(void)

{
  undefined1 auStack_a0 [56];
  byte bStack_68;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  char cStack_28;
  
  func_0x000105c3e848();
  func_0x000105c3e950(auStack_60);
  FUN_105c4015c(auStack_a0);
  if ((cStack_28 == '\x01') && ((bStack_68 & 1) != 0)) {
    func_0x000105c3e8a0(uStack_40);
    func_0x000105c3d708();
  }
  else {
    func_0x000105c3d6f0();
  }
  FUN_105c3ce98(auStack_a0);
  FUN_105c3ce98(auStack_60);
  return;
}



/* Entry: 105c3c8ac; end: 105c3cb8f;  */

undefined1 * FUN_105c3c8ac(ulong param_1,int param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  long unaff_x20;
  long *plVar11;
  undefined1 auStack_348 [64];
  undefined1 auStack_308 [112];
  undefined1 auStack_298 [56];
  undefined1 uStack_260;
  undefined1 auStack_258 [8];
  ulong uStack_250;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [120];
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [176];
  byte bStack_c0;
  undefined1 auStack_b8 [88];
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  func_0x000105c3e848();
  func_0x000105c3e6b0();
  auStack_b8[0] = 0;
  uStack_60 = 0;
  uStack_58 = extraout_x8;
  FUN_105c3b044();
  if (param_2 != 0) {
    FUN_105c3b078(auStack_b8,&UNK_10f332992);
  }
  bVar3 = *(byte *)(param_3 + 0x17);
  uVar4 = bVar3 == 0;
  uVar10 = *(ulong *)(param_3 + 8);
  if (-1 < (char)bVar3) {
    uVar10 = (ulong)bVar3;
  }
  if (uVar10 != 0) {
    bVar3 = *(byte *)(param_4 + 0x17);
    uVar4 = bVar3 == 0;
    uVar10 = *(ulong *)(param_4 + 8);
    if (-1 < (char)bVar3) {
      uVar10 = (ulong)bVar3;
    }
    if (uVar10 != 0) {
      func_0x000105c3ea90();
      uStack_250 = param_1;
      func_0x000105c3ea70();
      puStack_240 = &DAT_11383d918;
      puStack_238 = &DAT_11383d918;
      puStack_230 = &DAT_11383d918;
      uStack_228 = 0;
      func_0x0001001a53d4(&puStack_240,param_3,0);
      uVar10 = uStack_250;
      if ((uStack_250 & 1) != 0) {
        uVar10 = *(ulong *)(uStack_250 & 0xfffffffffffffffe);
      }
      func_0x0001001a53d4(&puStack_238,param_4,uVar10);
      func_0x000105c3e840();
      FUN_105c3b79c(unaff_x20 + 0x140,auStack_258);
      func_0x0001002a8234(unaff_x20 + 0x180,param_5);
      func_0x000105c3e770();
      uVar10 = unaff_x20 + 0x10;
      FUN_105c3f2c0(uVar10,param_3);
      if ((uVar10 & 1) == 0) {
        FUN_105c403f0(unaff_x20 + 0x10,auStack_258);
        func_0x000105c3eb10();
        func_0x000105c3e974();
      }
      else {
        FUN_105c3b0ac(auStack_170);
        if ((bStack_c0 & 1) == 0) {
          func_0x000105c3eb10();
          func_0x000105c3e974();
        }
        else {
          FUN_105c3ceb8(auStack_220,auStack_170);
          auStack_298[0] = 0;
          uStack_260 = 0;
          func_0x000105c3e840();
          FUN_105c3b544(unaff_x20 + 0x80,auStack_220);
          FUN_105c3b79c(unaff_x20 + 0x100,auStack_1a8);
          func_0x000105c3d73c(auStack_298,unaff_x20 + 0x100);
          func_0x000105c3e770();
          plVar11 = *(long **)(unaff_x20 + 0x1e0);
          FUN_105c3d528(auStack_348,auStack_298);
          FUN_105c42720(auStack_308,auStack_348);
          (**(code **)(*plVar11 + 0x28))(plVar11,auStack_308);
          FUN_105c39a10(auStack_308);
          FUN_105c3ce98(auStack_348);
          func_0x000105c3eb10();
          func_0x000105c3e974();
          FUN_105c3ce98(auStack_298);
          FUN_105c3d4e0(auStack_220);
        }
        FUN_105c3d508(auStack_170);
      }
      func_0x00010b51ea44(auStack_258);
      goto LAB_105c3cac8;
    }
  }
  func_0x000105c3d724();
LAB_105c3cac8:
  puVar6 = auStack_b8;
  FUN_105c3cd44();
  func_0x000105c3e68c(uStack_58);
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_105c3ce98(auStack_298);
  FUN_105c3d4e0(auStack_220);
  FUN_105c3d508(auStack_170);
  func_0x00010b51ea44(auStack_258);
  puVar6 = auStack_b8;
  FUN_105c3cd44();
  func_0x000105c3e71c();
  if (((puVar6[0x178] == '\x01') && (puVar6[0x138] == '\x01')) &&
     (puVar7 = puVar6, func_0x000105c3e8a0(*(undefined8 *)(puVar6 + 0x118)), (int)puVar7 != 0)) {
    puVar8 = (ulong *)(*(ulong *)(puVar6 + 0x120) & 0xfffffffffffffffc);
    puVar9 = (ulong *)(*(ulong *)(puVar6 + 0x160) & 0xfffffffffffffffc);
    bVar3 = *(byte *)((long)puVar8 + 0x17);
    uVar10 = puVar8[1];
    if (-1 < (char)bVar3) {
      uVar10 = (ulong)bVar3;
    }
    bVar2 = *(byte *)((long)puVar9 + 0x17);
    uVar1 = puVar9[1];
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    if (uVar10 == uVar1) {
      puVar5 = (ulong *)*puVar8;
      if (-1 < (char)bVar3) {
        puVar5 = puVar8;
      }
      puVar8 = (ulong *)*puVar9;
      if (-1 < (char)bVar2) {
        puVar8 = puVar9;
      }
      func_0x000107c610b0(puVar5,puVar8);
      return (undefined1 *)(ulong)((int)puVar5 == 0);
    }
    return (undefined1 *)0x0;
  }
  return (undefined1 *)0x0;
}



/* Entry: 105c3cb90; end: 105c3cbf3;  */

bool FUN_105c3cb90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  if (((*(char *)(param_1 + 0x178) != '\x01') || (*(char *)(param_1 + 0x138) != '\x01')) ||
     (lVar6 = param_1, func_0x000105c3e8a0(*(undefined8 *)(param_1 + 0x118)), (int)lVar6 == 0)) {
    return false;
  }
  puVar7 = (ulong *)(*(ulong *)(param_1 + 0x120) & 0xfffffffffffffffc);
  puVar8 = (ulong *)(*(ulong *)(param_1 + 0x160) & 0xfffffffffffffffc);
  bVar3 = *(byte *)((long)puVar7 + 0x17);
  uVar1 = puVar7[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)puVar8 + 0x17);
  uVar2 = puVar8[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    puVar5 = (ulong *)*puVar7;
    if (-1 < (char)bVar3) {
      puVar5 = puVar7;
    }
    puVar7 = (ulong *)*puVar8;
    if (-1 < (char)bVar4) {
      puVar7 = puVar8;
    }
    func_0x000107c610b0(puVar5,puVar7);
    return (int)puVar5 == 0;
  }
  return false;
}



/* Entry: 105c3cbf4; end: 105c3cc5f;  */

void FUN_105c3cbf4(void)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x000105c3e6a0();
  uVar1 = unaff_x19;
  FUN_105c3cb90();
  if (((uVar1 & 1) == 0) && (*(char *)(unaff_x19 + 0x138) != '\x01')) {
    uVar2 = 0;
    *unaff_x20 = 0;
  }
  else {
    func_0x00010002b838();
    uVar2 = 1;
  }
  unaff_x20[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x1a0);
  return;
}



/* Entry: 105c3cc60; end: 105c3cca3;  */

void FUN_105c3cc60(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x000105c3e6a0();
  uVar1 = unaff_x19;
  FUN_105c3cb90();
  if ((uVar1 & 1) == 0) {
    func_0x000105c3e934();
  }
  else {
    func_0x00010028af84();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x1a0);
  return;
}



/* Entry: 105c3cca4; end: 105c3cca7;  */

undefined8 * FUN_105c3cca4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1108dea38;
  FUN_105c38be0(param_1 + 0x3c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x34);
  func_0x0001001148fc(param_1 + 0x30);
  FUN_105c3ce98(param_1 + 0x28);
  FUN_105c3ce98(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    func_0x00010b93fbcc(param_1 + 0x10);
  }
  FUN_105c38be0(param_1 + 0xb);
  if (*(char *)(param_1 + 10) == '\x01') {
    func_0x0001003b6c64(param_1 + 8);
  }
  func_0x0001005f1e7c(param_1 + 6);
  func_0x000105c3836c(param_1 + 2);
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x000105c3e6e0();
  }
  return param_1;
}



/* Entry: 105c3cca8; end: 105c3ccbb;  */

void FUN_105c3cca8(void)

{
  FUN_105c3d774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c3ccbc; end: 105c3cce3;  */

void FUN_105c3ccbc(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x1e8);
  uVar2 = *(undefined8 *)(param_2 + 0x1e0);
  param_1[1] = *(undefined8 *)(param_2 + 0x1e8);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000105c3e940(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 105c3cce4; end: 105c3cd07;  */

void FUN_105c3cce4(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010b9a76d8();
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 105c3cd08; end: 105c3cd43;  */

void FUN_105c3cd08(void)

{
  func_0x000105c3e7fc();
  func_0x000105c3e6ec(0x25);
  func_0x00010bd3f3dc();
  func_0x000105c3e904();
  return;
}



/* Entry: 105c3cd44; end: 105c3cd7f;  */

void FUN_105c3cd44(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010b9a76d8();
  }
  return;
}



/* Entry: 105c3cd80; end: 105c3cdbb;  */

void FUN_105c3cd80(void)

{
  func_0x000105c3e7fc();
  func_0x000105c3e6ec(0x23);
  func_0x00010bd3f3dc();
  func_0x000105c3e904();
  return;
}



/* Entry: 105c3cdbc; end: 105c3cde7;  */

void FUN_105c3cdbc(long param_1,long param_2)

{
  FUN_105c3cde8();
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 105c3cde8; end: 105c3cdf3;  */

undefined8 * FUN_105c3cde8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  
  uVar2 = 0;
  puVar1 = param_1;
  func_0x000105c3ea70(param_1,0,param_2);
  *puVar1 = extraout_x8;
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  FUN_105c3ce34();
  return param_1;
}



/* Entry: 105c3cdf4; end: 105c3ce33;  */

undefined8 * FUN_105c3cdf4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x000105c3ea70();
  *puVar1 = extraout_x8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  FUN_105c3ce34();
  return param_1;
}



/* Entry: 105c3ce34; end: 105c3ce97;  */

long FUN_105c3ce34(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b51ee98(param_1);
    }
    else {
      func_0x00010b51ee60(param_1);
    }
  }
  return param_1;
}



/* Entry: 105c3ce98; end: 105c3ceb7;  */

void FUN_105c3ce98(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010b51ea44();
  }
  return;
}



/* Entry: 105c3ceb8; end: 105c3ceef;  */

void FUN_105c3ceb8(long param_1)

{
  long unaff_x20;
  
  func_0x000105c3ec3c();
  FUN_105c3cef0();
  FUN_105c3b0a0(param_1 + 0x78,unaff_x20 + 0x78);
  return;
}



/* Entry: 105c3cef0; end: 105c3cf83;  */

undefined8 * FUN_105c3cef0(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d77f80;
  func_0x000104c6257c(param_1 + 3,param_2 + 0x18);
  FUN_105c3cf84(param_1 + 6,param_2 + 0x30);
  func_0x000104bdd07c(param_1 + 0xc,param_2 + 0x60);
  return param_1;
}



/* Entry: 105c3cf84; end: 105c3cf9f;  */

void FUN_105c3cf84(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_105c3cfa0(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 105c3cfa0; end: 105c3d0cf;  */

void FUN_105c3cfa0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x000105c3ec3c();
  param_1[5] = 0;
  *param_1 = &UNK_10dd5b8b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar7 = *(long **)(param_2 + 0x18);
  FUN_105c3d0d0();
  plVar5 = unaff_x20;
  FUN_105c3d3ac();
  lVar8 = *unaff_x20;
  lVar9 = unaff_x20[3];
  plVar6 = plVar5;
  while (bVar4 = (byte)plVar6, plVar5 != (long *)(lVar8 + lVar9)) {
    func_0x000105c3eaf8();
    plVar6 = unaff_x19;
    func_0x000105c3d124();
    *(byte *)(*unaff_x19 + (long)plVar6) = bVar4 & 0x7f;
    *(byte *)(*unaff_x19 + (unaff_x19[3] & 7U) + (unaff_x19[3] & (ulong)(plVar6 + -1)) + 1) =
         bVar4 & 0x7f;
    if (*plVar7 != 0) {
      piVar1 = (int *)(*plVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000105c3ebd4();
    plVar6 = (long *)0xffffffffffffffa0;
    FUN_105c3d434();
  }
  lVar8 = unaff_x20[2];
  unaff_x19[2] = lVar8;
  unaff_x19[5] = unaff_x19[5] - lVar8;
  return;
}



/* Entry: 105c3d0d0; end: 105c3d16f;  */

void FUN_105c3d0d0(long *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  long **pplVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plStack_58;
  
  if (param_2 == 0) {
    if (param_1[3] == 0) {
      return;
    }
    uVar5 = param_1[2];
    if (uVar5 == 0) {
      lVar9 = param_1[3];
      if (lVar9 != 0) {
        lVar6 = 0;
        for (lVar7 = 0; lVar7 != lVar9; lVar7 = lVar7 + 1) {
          if (-1 < *(char *)(*param_1 + lVar7)) {
            func_0x0001003a8c94(param_1[1] + lVar6);
            lVar9 = param_1[3];
          }
          lVar6 = lVar6 + 0x18;
        }
        __ZdlPv();
        param_1[5] = 0;
        *param_1 = (long)&UNK_10dd5b8b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return;
    }
  }
  else {
    uVar5 = param_1[2];
  }
  uVar1 = param_2;
  if (param_2 <= uVar5) {
    uVar1 = uVar5;
  }
  uVar5 = 0xffffffffffffffff >> (LZCOUNT(uVar1) & 0x3fU);
  if (uVar1 == 0) {
    uVar5 = 1;
  }
  if ((param_2 != 0) && (uVar5 <= (ulong)param_1[3])) {
    return;
  }
  lVar6 = *param_1;
  lVar7 = param_1[1];
  lVar8 = param_1[3];
  FUN_105c3d194();
  param_1[3] = uVar5;
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar6 + lVar9)) {
      pplVar3 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_105c3d370(pplVar3,lVar7);
      plVar4 = param_1;
      func_0x000105c3d124(param_1,pplVar3);
      bVar2 = (byte)pplVar3 & 0x7f;
      *(byte *)(*param_1 + (long)plVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & (ulong)(plVar4 + -1)) + (param_1[3] & 7U) + 1) = bVar2;
      FUN_105c3d390(param_1 + 5,param_1[1] + (long)plVar4 * 0x18,lVar7);
    }
    lVar7 = lVar7 + 0x18;
  }
  if (lVar8 != 0) {
    __ZdlPv(lVar6);
  }
  return;
}



/* Entry: 105c3d170; end: 105c3d193;  */

undefined8 FUN_105c3d170(undefined8 param_1)

{
  FUN_105c3d214();
  return param_1;
}



/* Entry: 105c3d194; end: 105c3d207;  */

void FUN_105c3d194(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  plVar2 = param_1 + 5;
  FUN_105c3d208(plVar2,lVar1 + param_2 * 0x18);
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2 + lVar1;
  _memset();
  *(undefined1 *)(*param_1 + param_2) = 0xff;
  lVar1 = 6;
  if (param_2 != 7) {
    lVar1 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  return;
}



/* Entry: 105c3d208; end: 105c3d213;  */

void FUN_105c3d208(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 + 7U & 0xfffffffffffffff8);
  return;
}



/* Entry: 105c3d214; end: 105c3d28f;  */

void FUN_105c3d214(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        func_0x0001003a8c94(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x18;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 105c3d290; end: 105c3d36f;  */

void FUN_105c3d290(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long **pplVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_58;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[3];
  FUN_105c3d194();
  param_1[3] = param_2;
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      pplVar3 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_105c3d370(pplVar3,lVar5);
      plVar4 = param_1;
      func_0x000105c3d124(param_1,pplVar3);
      bVar2 = (byte)pplVar3 & 0x7f;
      *(byte *)(*param_1 + (long)plVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & (ulong)(plVar4 + -1)) + (param_1[3] & 7U) + 1) = bVar2;
      FUN_105c3d390(param_1 + 5,param_1[1] + (long)plVar4 * 0x18,lVar5);
    }
    lVar5 = lVar5 + 0x18;
  }
  if (lVar6 != 0) {
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 105c3d370; end: 105c3d377;  */

void FUN_105c3d370(undefined8 param_1,long param_2)

{
  func_0x000105c3ea64(param_1,param_2,param_2 + 8);
  return;
}



/* Entry: 105c3d378; end: 105c3d38f;  */

void FUN_105c3d378(void)

{
  func_0x000105c3ea64();
  return;
}



/* Entry: 105c3d390; end: 105c3d3ab;  */

void FUN_105c3d390(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_2 = *param_3;
  *param_3 = 0;
  uVar1 = param_3[1];
  param_2[2] = param_3[2];
  param_2[1] = uVar1;
  func_0x00010007e5d0(param_3);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 105c3d3ac; end: 105c3d3d7;  */

undefined1  [16] FUN_105c3d3ac(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_105c3d3d8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 105c3d3d8; end: 105c3d42b;  */

void FUN_105c3d3d8(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x18;
  }
  return;
}



/* Entry: 105c3d42c; end: 105c3d433;  */

void FUN_105c3d42c(undefined8 param_1,long param_2)

{
  func_0x000105c3ea64(param_1,param_2,param_2 + 8);
  return;
}



/* Entry: 105c3d434; end: 105c3d493;  */

long * FUN_105c3d434(long *param_1)

{
  param_1[1] = param_1[1] + 0x18;
  *param_1 = *param_1 + 1;
  FUN_105c3d3d8();
  return param_1;
}



/* Entry: 105c3d494; end: 105c3d4df;  */

long FUN_105c3d494(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    func_0x0001003b1eb0(param_3,param_1);
    param_3 = param_3 + 8;
    lVar1 = lVar1 + 8;
  }
  return lVar1;
}



/* Entry: 105c3d4e0; end: 105c3d507;  */

undefined8 * FUN_105c3d4e0(undefined8 *param_1)

{
  func_0x00010b51ea44(param_1 + 0xf);
  *param_1 = &PTR_DAT_110d77f80;
  func_0x000104bfe1e0(param_1 + 0xc);
  FUN_105c3d214(param_1 + 6);
  if (param_1[3] != 0) {
    func_0x00010b9406a8();
  }
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 105c3d508; end: 105c3d527;  */

void FUN_105c3d508(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_105c3d4e0();
  }
  return;
}



/* Entry: 105c3d528; end: 105c3d56b;  */

undefined1 * FUN_105c3d528(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_105c3d56c(param_1);
  }
  return param_1;
}



/* Entry: 105c3d56c; end: 105c3d5b3;  */

void FUN_105c3d56c(void)

{
  FUN_105c3b0a0();
  func_0x000105c3eb60();
  return;
}



/* Entry: 105c3d5b4; end: 105c3d5bf;  */

undefined8 * FUN_105c3d5b4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110cfbc80;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b51f130();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010b51efe0(0,*(undefined8 *)(param_2 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010b51efe0(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 105c3d5c0; end: 105c3d5fb;  */

void FUN_105c3d5c0(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010b51e600();
  }
  return;
}



/* Entry: 105c3d5fc; end: 105c3d637;  */

void FUN_105c3d5fc(void)

{
  func_0x000105c3e7fc();
  func_0x000105c3e6ec(0x24);
  func_0x00010bd3f3dc();
  func_0x000105c3e904();
  return;
}



/* Entry: 105c3d638; end: 105c3d66b;  */

void FUN_105c3d638(void)

{
  FUN_105c3cde8();
  func_0x000105c3eb60();
  return;
}



/* Entry: 105c3d66c; end: 105c3d6a7;  */

void FUN_105c3d66c(void)

{
  func_0x000105c3e7fc();
  func_0x000105c3e6ec(0x1d);
  func_0x00010bd3f3dc();
  func_0x000105c3e904();
  return;
}



/* Entry: 105c3d6a8; end: 105c3d773;  */

void FUN_105c3d6a8(void)

{
  func_0x00010002b838();
  func_0x000105c3e968();
  return;
}


