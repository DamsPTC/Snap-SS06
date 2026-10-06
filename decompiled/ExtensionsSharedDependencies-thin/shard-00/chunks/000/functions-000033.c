/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0009e1a8; end: 0009e213;  */

void FUN_0009e1a8(void)

{
  long unaff_x20;
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(0x9e470);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009e214; end: 0009e2fb;  */

void FUN_0009e214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_68,0x21,0);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_1 + 0x18) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_0009dc94(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_1 + 0x18) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_0009dc94(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(ulong *)(param_1 + 0x18) = uVar4;
  _swift_endAccess(auStack_68);
  _swift_unknownObjectRetain(param_2);
  return;
}



/* Entry: 0009e2fc; end: 0009e3c7;  */

void FUN_0009e2fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_68,1,0);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar4);
    plVar6 = (long *)(lVar4 + 0x28);
    do {
      lVar1 = plVar6[-1];
      lVar2 = *plVar6;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar7 = *(code **)(lVar2 + 8);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar7)(lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar6 = plVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar4);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(undefined **)(param_1 + 0x18) = PTR___swiftEmptyArrayStorage_0099b8f0;
  _swift_bridgeObjectRelease(lVar4);
  return;
}



/* Entry: 0009e3c8; end: 0009e3ff;  */

void FUN_0009e3c8(void)

{
  FUN_0009e2fc();
  return;
}



/* Entry: 0009e400; end: 0009e453;  */

void FUN_0009e400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = param_2;
  uStack_48 = param_1;
  uStack_40 = param_4;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_0009e454,auStack_60,PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 0009e454; end: 0009e483;  */

void FUN_0009e454(void)

{
  long unaff_x20;
  
  FUN_0009e214(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 0009e484; end: 0009e517;  */

void FUN_0009e484(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar2 + 0x28);
    do {
      lVar2 = plVar5[-1];
      lVar1 = *plVar5;
      lVar3 = lVar2;
      _swift_getObjectType(lVar2);
      pcVar6 = *(code **)(lVar1 + 8);
      _swift_unknownObjectRetain(lVar2);
      (*pcVar6)(lVar3,lVar1);
      _swift_unknownObjectRelease(lVar2);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar2 = *(long *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009e518; end: 0009e537;  */

void FUN_0009e518(void)

{
  _objc_opt_self(&PTR_PTR_00aebf50);
  return;
}



/* Entry: 0009e538; end: 0009e5ab;  */

void FUN_0009e538(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 8);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 0009e5ac; end: 0009e5af;  */

void FUN_0009e5ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0009e5b0; end: 0009e61f;  */

void FUN_0009e5b0(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = &UNK_007d58a8;
  puStack_18 = &UNK_007d58c0;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 0009e620; end: 0009e6cf;  */

void FUN_0009e620(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lStack_48;
  
  lVar4 = unaff_x20[3];
  if (lVar4 != 0) {
    lVar5 = *unaff_x20;
    plVar1 = unaff_x20 + 2;
    _swift_weakLoadStrong();
    if (plVar1 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar1 + 0x78);
      uVar2 = 0;
      lStack_48 = lVar4;
      FUN_000a08a4(0,*(undefined8 *)(lVar5 + 0x50));
      _swift_retain(lVar4);
      puVar3 = &DAT_007d5c00;
      _swift_getWitnessTable(&DAT_007d5c00,uVar2);
      (*pcVar6)(&lStack_48,uVar2,puVar3);
      _swift_release(lVar4);
      _swift_release(plVar1);
    }
    lVar4 = unaff_x20[3];
    unaff_x20[3] = 0;
    _swift_release(lVar4);
  }
  return;
}



/* Entry: 0009e6d0; end: 0009e6ef;  */

void FUN_0009e6d0(void)

{
  func_0x0009e5f8();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009e6f0; end: 0009e6ff;  */

void FUN_0009e6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842740);
  return;
}



/* Entry: 0009e700; end: 0009ea3f;  */

void FUN_0009e700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_weakInit(unaff_x20 + 0x10,0);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_weakAssign(unaff_x20 + 0x10,param_1);
  FUN_000a0834(param_3,param_4);
  _swift_release(param_1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  _swift_release(uVar1);
  return;
}



/* Entry: 0009ea40; end: 0009ea53;  */

void FUN_0009ea40(void)

{
  return;
}



/* Entry: 0009ea54; end: 0009eabf;  */

void FUN_0009ea54(void)

{
  long *unaff_x20;
  
  FUN_0009e6f0(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_retain();
  func_0x0009e784();
  return;
}



/* Entry: 0009eac0; end: 0009ead3;  */

void FUN_0009eac0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009ead4; end: 0009eb07;  */

void FUN_0009ead4(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + 0x58);
  return;
}



/* Entry: 0009eb08; end: 0009eb13;  */

void FUN_0009eb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00842790);
  return;
}



/* Entry: 0009eb14; end: 0009eba7;  */

void FUN_0009eb14(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  func_0x0009eb5c(param_1,param_2);
  return;
}



/* Entry: 0009eba8; end: 0009ec77;  */

void FUN_0009eba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar2 = param_1;
  uVar4 = param_2;
  FUN_0009ea54();
  FUN_000a01a0(param_1,param_2,param_3);
  pcVar1 = (code *)unaff_x20[2];
  FUN_000a08a4(0,*(undefined8 *)(lVar5 + 0x88));
  FUN_000a0d0c(param_1,param_2,param_3);
  uVar3 = param_1;
  (*pcVar1)();
  _swift_release(param_1);
  lVar5 = 0;
  FUN_0009e004();
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  *(undefined8 *)(lVar5 + 0x18) = param_2;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  return;
}



/* Entry: 0009ec78; end: 0009ec97;  */

void FUN_0009ec78(void)

{
  func_0x000a01ac();
  return;
}



/* Entry: 0009ec98; end: 0009ecb3;  */

void FUN_0009ec98(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 0009ecb4; end: 0009ece7;  */

long FUN_0009ecb4(long param_1)

{
  func_0x0009ea4c();
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 0009ece8; end: 0009ed03;  */

void FUN_0009ece8(undefined8 param_1)

{
  FUN_0009ecb4();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 0009ed04; end: 0009ed5b;  */

void FUN_0009ed04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_0009ed5c(0,*(undefined8 *)(unaff_x20 + 0x50));
  _swift_allocObject();
  _swift_retain(param_2);
  func_0x0009eb5c(param_1,param_2);
  return;
}



/* Entry: 0009ed5c; end: 0009ed6b;  */

void FUN_0009ed5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842808);
  return;
}



/* Entry: 0009ed6c; end: 0009edbb;  */

void FUN_0009ed6c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___syycWV_0099b8e8 + 0x40;
  puStack_18 = PTR___sBoWV_0099ae88 + 0x40;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0x90);
  return;
}



/* Entry: 0009edbc; end: 0009ee3b;  */

void FUN_0009edbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  (**(code **)(param_3 + 0x20))(param_2,param_3);
  FUN_0009e6f0(0,*(undefined8 *)(lVar1 + 0x88));
  _swift_retain();
  func_0x0009e784();
  return;
}



/* Entry: 0009ee3c; end: 0009ee6b;  */

void FUN_0009ee3c(void)

{
  _swift_allocObject();
  FUN_0009ea40();
  return;
}



/* Entry: 0009ee6c; end: 0009ee87;  */

void FUN_0009ee6c(undefined8 param_1)

{
  func_0x0009ea4c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x10,7);
  return;
}



/* Entry: 0009ee88; end: 0009ee97;  */

void FUN_0009ee88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842880);
  return;
}



/* Entry: 0009ee98; end: 0009eecb;  */

void FUN_0009ee98(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + 0x90);
  return;
}



/* Entry: 0009eecc; end: 0009ef03;  */

void FUN_0009eecc(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_0009ea40();
  return;
}



/* Entry: 0009ef04; end: 0009eff7;  */

void FUN_0009ef04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x88);
  uVar3 = uVar4;
  FUN_0009eff8(param_1,uVar4,param_2,param_3);
  uVar1 = 0;
  __sSaMa(0,uVar4);
  puVar2 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar1);
  __sSTsE7forEachyyy7ElementQzKXEKF(param_1,uVar3,uVar1,puVar2);
  _swift_release(uVar3);
  (**(code **)(param_3 + 0x20))(param_2,param_3);
  FUN_0009e6f0(0,uVar4);
  _swift_retain();
  func_0x0009e784();
  return;
}



/* Entry: 0009eff8; end: 0009f0bf;  */

undefined1  [16] FUN_0009eff8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_009a8220;
  _swift_allocObject(&UNK_009a8220,uVar5 + lVar3,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_0009f1a0;
  return auVar6;
}



/* Entry: 0009f0c0; end: 0009f0c7;  */

void FUN_0009f0c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 0009f0c8; end: 0009f0fb;  */

void FUN_0009f0c8(long param_1)

{
  func_0x0009ea4c();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x18,7);
  return;
}



/* Entry: 0009f0fc; end: 0009f10b;  */

void FUN_0009f0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008428dc);
  return;
}



/* Entry: 0009f10c; end: 0009f14f;  */

void FUN_0009f10c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBbWV_0099ae78 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x90);
  return;
}



/* Entry: 0009f150; end: 0009f19f;  */

void FUN_0009f150(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009f1a0; end: 0009f1d7;  */

void FUN_0009f1a0(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x18))(uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 0009f1d8; end: 0009f223;  */

void FUN_0009f1d8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x20) = param_3;
  FUN_0009ea40();
  return;
}



/* Entry: 0009f224; end: 0009f387;  */

void FUN_0009f224(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar11 = *unaff_x20;
  lVar7 = *(long *)(param_2 + -8);
  lVar10 = *(long *)(lVar7 + 0x40);
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(param_1,param_1);
  lVar9 = (long)&lStack_70 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = unaff_x20[2];
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  (**(code **)(lVar7 + 0x10))(lVar9);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &UNK_009a8318;
  _swift_allocObject(&UNK_009a8318,uVar8 + lVar10,uVar6 | 7);
  uVar12 = *(undefined8 *)(lVar11 + 0x88);
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  *(long *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar8,lVar9,param_2);
  FUN_000a3798(lVar1,(char)lVar2,FUN_0009f4ac,puVar3);
  _swift_release(puVar3);
  uVar4 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  uVar5 = 0xff;
  __ss6ResultOMa(0xff,uVar12,uVar4,PTR___ss5ErrorWS_0099b720);
  FUN_0009e6f0(0,uVar5);
  _swift_retain();
  func_0x0009e784();
  return;
}



/* Entry: 0009f388; end: 0009f3a3;  */

void FUN_0009f388(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 0009f3a4; end: 0009f3d7;  */

long FUN_0009f3a4(long param_1)

{
  func_0x0009ea4c();
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 0009f3d8; end: 0009f3f3;  */

void FUN_0009f3d8(undefined8 param_1)

{
  FUN_0009f3a4();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x21,7);
  return;
}



/* Entry: 0009f3f4; end: 0009f403;  */

void FUN_0009f3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842948);
  return;
}



/* Entry: 0009f404; end: 0009f45b;  */

void FUN_0009f404(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBoWV_0099ae88 + 0x40;
  puStack_20 = &UNK_007d5a08;
  puStack_18 = &UNK_007d5a20;
  _swift_initClassMetadata2(param_1,0,3,&puStack_28,param_1 + 0x90);
  return;
}



/* Entry: 0009f45c; end: 0009f4ab;  */

void FUN_0009f45c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009f4ac; end: 0009f513;  */

void FUN_0009f4ac(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  (**(code **)(lVar2 + 0x18))(param_1,uVar1,lVar2);
  (**(code **)(lVar2 + 0x20))(uVar1,lVar2);
  return;
}



/* Entry: 0009f514; end: 0009f563;  */

void FUN_0009f514(undefined8 param_1)

{
  long *unaff_x20;
  
  _swift_allocObject();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x88) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90),param_1);
  FUN_0009ea40();
  return;
}



/* Entry: 0009f564; end: 0009f5f3;  */

void FUN_0009f564(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  (**(code **)(param_3 + 0x18))((long)unaff_x20 + *(long *)(lVar1 + 0x90));
  (**(code **)(param_3 + 0x20))(param_2,param_3);
  FUN_0009e6f0(0,*(undefined8 *)(lVar1 + 0x88));
  _swift_retain();
  func_0x0009e784();
  return;
}



/* Entry: 0009f5f4; end: 0009f60b;  */

void FUN_0009f5f4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0009f608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x88) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90));
  return;
}



/* Entry: 0009f60c; end: 0009f663;  */

void FUN_0009f60c(long *param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  func_0x0009ea4c();
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x88) + -8) + 8))
            ((long)param_1 + *(long *)(*param_1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 0009f664; end: 0009f673;  */

void FUN_0009f664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008429b4);
  return;
}



/* Entry: 0009f674; end: 0009f6e3;  */

void FUN_0009f674(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x88);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&lStack_28,param_1 + 0x90);
  }
  return;
}



/* Entry: 0009f6e4; end: 0009f787;  */

void FUN_0009f6e4(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar1);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffc0 + -extraout_x12,param_2);
  __sScS_15bufferingPolicy_ScSyxGxm_ScS12ContinuationV09BufferingB0Oyx__GyADyx_GXEtcfC
            (param_1,uVar1,&stack0xffffffffffffffc0 + -extraout_x12,FUN_0009f92c);
  return;
}



/* Entry: 0009f788; end: 0009f92b;  */

void FUN_0009f788(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x12;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 uStack_70;
  long *plStack_68;
  
  uVar7 = *(undefined8 *)(*param_2 + 0x50);
  lVar1 = 0;
  uStack_70 = param_1;
  plStack_68 = param_2;
  __sScS12ContinuationVMa(0,uVar7);
  lVar10 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = (long)&uStack_70 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar12 = *(code **)(lVar10 + 0x10);
  (*pcVar12)(lVar9 - extraout_x12,param_1,lVar1);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar5 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar2 = &UNK_009a8428;
  _swift_allocObject(&UNK_009a8428,uVar5 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  pcVar11 = *(code **)(lVar10 + 0x20);
  (*pcVar11)(puVar2 + uVar5,lVar9 - extraout_x12,lVar1);
  (*pcVar12)(lVar9,uStack_70,lVar1);
  puVar3 = &UNK_009a8450;
  _swift_allocObject(&UNK_009a8450,uVar5 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  (*pcVar11)(puVar3 + uVar5,lVar9,lVar1);
  pcVar11 = FUN_0009fa1c;
  puVar4 = puVar2;
  func_0x0009e974(FUN_0009fa1c,puVar2,FUN_0009fac8,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  puVar2 = &UNK_009a8478;
  _swift_allocObject(&UNK_009a8478,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar11;
  *(undefined **)(puVar2 + 0x20) = puVar4;
  __sScS12ContinuationV13onTerminationyAB0C0Oyx__GYbcSgvs(FUN_0009fb28,puVar2,lVar1);
  return;
}



/* Entry: 0009f92c; end: 0009f933;  */

void FUN_0009f92c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x12;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 uStack_70;
  
  uVar7 = *(undefined8 *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  uStack_70 = param_1;
  __sScS12ContinuationVMa(0,uVar7);
  lVar10 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = (long)&uStack_70 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar12 = *(code **)(lVar10 + 0x10);
  (*pcVar12)(lVar9 - extraout_x12,param_1,lVar1);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar5 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar2 = &UNK_009a8428;
  _swift_allocObject(&UNK_009a8428,uVar5 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  pcVar11 = *(code **)(lVar10 + 0x20);
  (*pcVar11)(puVar2 + uVar5,lVar9 - extraout_x12,lVar1);
  (*pcVar12)(lVar9,uStack_70,lVar1);
  puVar3 = &UNK_009a8450;
  _swift_allocObject(&UNK_009a8450,uVar5 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  (*pcVar11)(puVar3 + uVar5,lVar9,lVar1);
  pcVar11 = FUN_0009fa1c;
  puVar4 = puVar2;
  func_0x0009e974(FUN_0009fa1c,puVar2,FUN_0009fac8,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  puVar2 = &UNK_009a8478;
  _swift_allocObject(&UNK_009a8478,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar11;
  *(undefined **)(puVar2 + 0x20) = puVar4;
  __sScS12ContinuationV13onTerminationyAB0C0Oyx__GYbcSgvs(FUN_0009fb28,puVar2,lVar1);
  return;
}



/* Entry: 0009f934; end: 0009fa17;  */

void FUN_0009f934(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar5 = param_3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sScS12ContinuationV11YieldResultOMa(0,lVar5);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar3,param_1,param_3);
  uVar2 = 0;
  __sScS12ContinuationVMa(0,param_3);
  __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF((long)puVar3 - extraout_x8_00,puVar3,uVar2);
  (**(code **)(lVar5 + 8))((long)puVar3 - extraout_x8_00,lVar1);
  return;
}



/* Entry: 0009fa18; end: 0009fa1b;  */

void FUN_0009fa18(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __sScS12ContinuationVMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009fa1c; end: 0009fac7;  */

void FUN_0009fa1c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar3 = 0;
  __sScS12ContinuationVMa(0,lVar5);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar7 = *(long *)(lVar5 + -8);
  lVar3 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(undefined8 *)(lVar7 + 0x40),param_1,
             unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff)));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sScS12ContinuationV11YieldResultOMa(0,lVar3);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar6,param_1,lVar5);
  uVar2 = 0;
  __sScS12ContinuationVMa(0,lVar5);
  __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF((long)puVar6 - extraout_x8_00,puVar6,uVar2);
  (**(code **)(lVar3 + 8))((long)puVar6 - extraout_x8_00,lVar1);
  return;
}



/* Entry: 0009fac8; end: 0009fb03;  */

void FUN_0009fac8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __sScS12ContinuationVMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  __sScS12ContinuationV6finishyyF(uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 0009fb04; end: 0009fb27;  */

void FUN_0009fb04(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009fb28; end: 0009fb63;  */

void FUN_0009fb28(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0009fb64; end: 0009fb6b;  */

void FUN_0009fb64(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __sScS12ContinuationVMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009fb6c; end: 0009fbe7;  */

void FUN_0009fb6c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___syycWV_0099b8e8 + 0x40;
    puStack_28 = puStack_30;
    _swift_initClassMetadata2(param_1,0,3,&lStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 0009fbe8; end: 0009fc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0009fbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b648d8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aec330);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aec338);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return unaff_x20;
}



/* Entry: 0009fc68; end: 0009fca7;  */

undefined1  [16] FUN_0009fc68(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_009a8558;
  _swift_allocObject(&UNK_009a8558,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = 0x9fe38;
  return auVar2;
}



/* Entry: 0009fca8; end: 0009fcab;  */

void FUN_0009fca8(void)

{
  return;
}



/* Entry: 0009fcac; end: 0009fd6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009fcac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_00aec330))();
  return;
}



/* Entry: 0009fd6c; end: 0009fd8f;  */

void FUN_0009fd6c(void)

{
  func_0x0009fd04();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009fd90; end: 0009fd9b;  */

void FUN_0009fd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842a20);
  return;
}



/* Entry: 0009fd9c; end: 0009fde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009fd9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648d8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009fde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 0009fde8; end: 0009fe27;  */

void FUN_0009fde8(void)

{
  FUN_0009fcac();
  return;
}



/* Entry: 0009fe28; end: 0009fe3f;  */

void FUN_0009fe28(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009fe40; end: 0009fe8f;  */

void FUN_0009fe40(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBoWV_0099ae88 + 0x40;
  puStack_20 = &UNK_007d5b38;
  puStack_18 = puStack_28;
  _swift_initClassMetadata2(param_1,0,3,&puStack_28,param_1 + 0x58);
  return;
}



/* Entry: 0009fe90; end: 0009ff27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009fe90(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648e8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009fedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 0009ff28; end: 0009ff6f;  */

void FUN_0009ff28(void)

{
  long unaff_x20;
  
  __s11SwiftSCLock4LockC4lockyyF();
  if ((*(byte *)(unaff_x20 + 0x18) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
    func_0x001d46c8();
    FUN_000a08f8();
  }
  else {
    func_0x001d46c8();
  }
  return;
}



/* Entry: 0009ff70; end: 0009ff9b;  */

void FUN_0009ff70(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009ff9c; end: 0009ffa7;  */

void FUN_0009ff9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00842a70);
  return;
}



/* Entry: 0009ffa8; end: 000a0007;  */

void FUN_0009ffa8(void)

{
  FUN_0009fe90();
  return;
}



/* Entry: 000a0008; end: 000a008f;  */

void FUN_000a0008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  lVar1 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  unaff_x20[4] = lVar1;
  FUN_000a08a4(0,*(undefined8 *)(lVar2 + 0x50));
  FUN_000a0d0c(param_1,param_2,param_3);
  unaff_x20[2] = param_1;
  return;
}



/* Entry: 000a0090; end: 000a00df;  */

void FUN_000a0090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_000a0008(param_1,param_2,param_3);
  return;
}



/* Entry: 000a00e0; end: 000a00e3;  */

void FUN_000a00e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000a00e4; end: 000a019f;  */

void FUN_000a00e4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_28 = PTR___sBbWV_0099ae78 + 0x40;
    _swift_initClassMetadata2(param_1,0,3,&lStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 000a01a0; end: 000a01b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a01a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF
            (*(undefined8 *)(unaff_x20 + _DAT_00aec490),0xa0818,auStack_60,PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 000a01b8; end: 000a0213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a01b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF
            (*(undefined8 *)(unaff_x20 + _DAT_00aec490),param_4,auStack_60,PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 000a0214; end: 000a02ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a0214(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  lVar3 = *param_1;
  FUN_000a0834(param_3,param_4);
  uStack_38 = param_3;
  _swift_beginAccess((long)param_1 + _DAT_00aec498,auStack_50,0x21,0);
  uVar1 = 0xff;
  FUN_000a08a4(0xff,*(undefined8 *)(lVar3 + 0x50));
  uVar2 = 0;
  __sSaMa(0,uVar1);
  __sSa6appendyyxnF(&uStack_38,uVar2);
  _swift_endAccess(auStack_50);
  return;
}



/* Entry: 000a02ac; end: 000a0393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a02ac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x21;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(*param_1 + 0x50);
  uStack_60 = uVar5;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_2;
  _swift_beginAccess((long)param_1 + _DAT_00aec498,auStack_88,0x21,0);
  uVar2 = 0xff;
  FUN_000a08a4(0xff,uVar5);
  uVar5 = 0;
  __sSaMa(0,uVar2);
  puVar3 = PTR___sSayxGSMsMc_0099b1e8;
  _swift_getWitnessTable(PTR___sSayxGSMsMc_0099b1e8,uVar5);
  puVar4 = PTR___sSayxGSmsMc_0099b210;
  _swift_getWitnessTable(PTR___sSayxGSmsMc_0099b210,uVar5);
  __sSmsSMRzrlE9removeAll5whereySb7ElementSTQzKXE_tKF(0xa07f8,auStack_70,uVar5,puVar3,puVar4);
  if (unaff_x21 == 0) {
    _swift_endAccess(auStack_88);
    return;
  }
  _swift_endAccess(auStack_88);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa0394);
  (*pcVar1)();
}



/* Entry: 000a0394; end: 000a0467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000a0394(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_00b648e8;
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *param_1;
  (**(code **)(param_5 + 0x10))(puVar4,param_4,param_5);
  lVar3 = lVar3 + lVar1;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(lVar3,puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  return (uint)lVar3 & 1;
}



/* Entry: 000a0468; end: 000a063f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a0468(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar6 = *unaff_x20;
  __s11SwiftSCLock4LockC4lockyyF();
  lVar7 = _DAT_00aec498;
  _swift_beginAccess((long)unaff_x20 + _DAT_00aec498,auStack_58,0,0);
  lVar5 = *(long *)((long)unaff_x20 + lVar7);
  _swift_bridgeObjectRetain(lVar5);
  func_0x001d46c8();
  uVar3 = 0;
  FUN_000a08a4(0,*(undefined8 *)(lVar6 + 0x50));
  lVar7 = lVar5;
  __sSa8endIndexSivg(lVar5,uVar3);
  if (lVar7 != 0) {
    lVar7 = 0;
    do {
      __sSayxSicig(&uStack_60,lVar7,lVar5,uVar3);
      uVar1 = uStack_60;
      lVar6 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa0558);
        (*pcVar2)();
      }
      FUN_000a08b0(param_1);
      _swift_release(uVar1);
      lVar4 = lVar5;
      __sSa8endIndexSivg(lVar5,uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar4);
  }
  _swift_bridgeObjectRelease(lVar5);
  return;
}



/* Entry: 000a0640; end: 000a069f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a0640(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b648e0;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec490));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_00aec498));
  return;
}



/* Entry: 000a06a0; end: 000a06c3;  */

void FUN_000a06a0(void)

{
  FUN_000a0640();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000a06c4; end: 000a06cf;  */

void FUN_000a06c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00842ac0);
  return;
}



/* Entry: 000a06d0; end: 000a079b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a06d0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b648e0);
  lVar1 = _DAT_00aec490;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_00aec498;
  uVar2 = 0;
  FUN_000a08a4(0,*(undefined8 *)(lVar3 + 0x50));
  __sS2ayxGycfC();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  return;
}



/* Entry: 000a079c; end: 000a07db;  */

void FUN_000a079c(void)

{
  FUN_000a0468();
  return;
}



/* Entry: 000a07dc; end: 000a0833;  */

void FUN_000a07dc(void)

{
  long unaff_x20;
  
  FUN_000a02ac(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


