/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10487e4c4; end: 10487e4df;  */

void FUN_10487e4c4(undefined8 param_1)

{
  FUN_10487e48c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x38,7);
  return;
}



/* Entry: 10487e4e0; end: 10487e557;  */

long * FUN_10487e4e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10487e558(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  func_0x0001000c0ea8(lVar1);
  _swift_retain();
  _swift_retain(param_2);
  return unaff_x20;
}



/* Entry: 10487e558; end: 10487e563;  */

void FUN_10487e558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e82087c);
  return;
}



/* Entry: 10487e564; end: 10487e5db;  */

long * FUN_10487e564(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10487e558(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  func_0x0001000c0ea8(lVar1);
  _swift_retain();
  _swift_retain(param_2);
  return unaff_x20;
}



/* Entry: 10487e5dc; end: 10487e66b;  */

long * FUN_10487e5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10487e558(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(undefined8 *)(lVar1 + 0x30) = param_4;
  func_0x0001000c0ea8(lVar1);
  _swift_retain();
  _swift_retain(param_4);
  _swift_retain(param_2);
  return unaff_x20;
}



/* Entry: 10487e66c; end: 10487e66f;  */

void FUN_10487e66c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487e670; end: 10487e6af;  */

void FUN_10487e670(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = &UNK_10dd3b568;
  puStack_18 = &UNK_10dd3b568;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 10487e6b0; end: 10487e6b3;  */

void FUN_10487e6b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487e6b4; end: 10487e737;  */

void FUN_10487e6b4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_11034d678 + 0x40;
    puStack_30 = &UNK_10dd3b5c0;
    puStack_28 = &UNK_10dd3b5c0;
    _swift_initClassMetadata2(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 10487e738; end: 10487e7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10487e738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_113815468);
  *(undefined8 *)(unaff_x20 + _DAT_113094b88) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113094b90);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113094b98);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return unaff_x20;
}



/* Entry: 10487e7c8; end: 10487e81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487e7c8(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + _DAT_113094b90) != (code *)0x0) {
    (**(code **)(unaff_x20 + _DAT_113094b90))();
  }
  func_0x000100087f6c(param_1);
  return;
}



/* Entry: 10487e820; end: 10487e8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487e820(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + _DAT_113094b98) != (code *)0x0) {
    (**(code **)(unaff_x20 + _DAT_113094b98))();
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 10487e8e0; end: 10487e903;  */

void FUN_10487e8e0(void)

{
  func_0x00010487e868();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487e904; end: 10487e90f;  */

void FUN_10487e904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8208e8);
  return;
}



/* Entry: 10487e910; end: 10487e95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487e910(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815468;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00010487e958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 10487e95c; end: 10487e99b;  */

void FUN_10487e95c(void)

{
  FUN_10487e7c8();
  return;
}



/* Entry: 10487e99c; end: 10487e9e7;  */

void FUN_10487e99c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487e9e8; end: 10487e9ef;  */

void FUN_10487e9e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10487e9f0; end: 10487ea37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487e9f0(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 10487ea38; end: 10487ea83;  */

void FUN_10487ea38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487ea84; end: 10487ea8b;  */

void FUN_10487ea84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10487ea8c; end: 10487eabf;  */

void FUN_10487ea8c(long param_1)

{
  func_0x0001000d2374();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 10487eac0; end: 10487ebaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487eac0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar7 = *unaff_x20;
  func_0x00010006c804();
  *(undefined1 *)((long)unaff_x20 + _DAT_113094e28) = 1;
  lVar1 = _DAT_113094e18;
  _swift_beginAccess((long)unaff_x20 + _DAT_113094e18,auStack_58,0,0);
  uVar6 = *(ulong *)((long)unaff_x20 + lVar1);
  uVar2 = 0;
  func_0x0001006b9d40(0,*(undefined8 *)(lVar7 + 0x58));
  _swift_bridgeObjectRetain(uVar6);
  uVar3 = 0x113094ed8;
  func_0x0001000285a8(0x113094ed8,&UNK_10dd3b9a0);
  puVar4 = &UNK_10dd3c970;
  _swift_getWitnessTable(&UNK_10dd3c970,uVar2);
  uVar5 = uVar6;
  __sSD7isEmptySbvg(uVar6,uVar2,uVar3,puVar4);
  _swift_bridgeObjectRelease(uVar6);
  func_0x000100070bfc();
  if ((uVar5 & 1) != 0) {
    func_0x000100c7f554();
  }
  return;
}



/* Entry: 10487ebb0; end: 10487ec43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487ebb0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113815478;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113094e00));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113094e08 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113094e10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_113094e18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_113094e20));
  return;
}



/* Entry: 10487ec44; end: 10487ec67;  */

void FUN_10487ec44(void)

{
  FUN_10487ebb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487ec68; end: 10487ec87;  */

void FUN_10487ec68(void)

{
  FUN_10487eac0();
  return;
}



/* Entry: 10487ec88; end: 10487ecd3;  */

void FUN_10487ec88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487ecd4; end: 10487ecdb;  */

void FUN_10487ecd4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10487ecdc; end: 10487ee7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487ecdc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long **pplVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long *plStack_58;
  
  lVar10 = *unaff_x20;
  (**(code **)((long)unaff_x20 + _DAT_113094f68))();
  lVar2 = 0;
  func_0x0001006b9d40(0,*(undefined8 *)(lVar10 + 0x58));
  uVar8 = *(undefined8 *)((long)unaff_x20 + _DAT_113094f60);
  puVar3 = &UNK_1107a90f0;
  _swift_allocObject(&UNK_1107a90f0,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &UNK_1107a9118;
  _swift_allocObject(&UNK_1107a9118,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x50);
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_retain(param_1);
  _swift_retain(uVar8);
  plVar5 = param_1;
  func_0x000100854f30(param_1,uVar8,FUN_10487eff4,puVar4);
  _swift_release(uVar8);
  uVar9 = *(undefined8 *)((long)unaff_x20 + _DAT_113094f70);
  func_0x00010c09faa0(uVar9);
  lVar10 = _DAT_113094f78;
  lVar7 = *(long *)((long)unaff_x20 + _DAT_113094f78);
  uVar8 = 0;
  if (lVar7 != 0) {
    _swift_retain(lVar7);
    func_0x0001008554a0();
    _swift_release(lVar7);
    uVar8 = *(undefined8 *)((long)unaff_x20 + lVar10);
  }
  *(long **)((long)unaff_x20 + lVar10) = plVar5;
  _swift_retain(plVar5);
  _swift_release(uVar8);
  pcVar11 = *(code **)(*param_1 + 0x58);
  puVar3 = &DAT_10dd3c9b0;
  plStack_58 = plVar5;
  _swift_getWitnessTable(&DAT_10dd3c9b0,lVar2);
  pplVar6 = &plStack_58;
  (*pcVar11)(pplVar6,lVar2,puVar3);
  plVar1 = (long *)((long)unaff_x20 + _DAT_113094f80);
  lVar10 = *plVar1;
  *plVar1 = (long)pplVar6;
  plVar1[1] = lVar2;
  _swift_unknownObjectRelease(lVar10);
  func_0x00010c280b40(uVar9);
  _swift_release(param_1);
  _swift_release(plVar5);
  return;
}



/* Entry: 10487ee80; end: 10487ef8f;  */

void FUN_10487ee80(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_10487effc();
    _swift_release(param_2);
  }
  return;
}



/* Entry: 10487ef90; end: 10487efb3;  */

void FUN_10487ef90(void)

{
  func_0x00010487eefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487efb4; end: 10487eff3;  */

void FUN_10487efb4(void)

{
  FUN_10487ecdc();
  return;
}



/* Entry: 10487eff4; end: 10487effb;  */

void FUN_10487eff4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_10487effc();
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 10487effc; end: 10487f0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487effc(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113094f70);
  func_0x00010c09faa0(uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_113094f80);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = plVar1[1];
    lVar2 = lVar5;
    _swift_getObjectType(lVar5);
    pcVar7 = *(code **)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar5);
    (*pcVar7)(lVar2,lVar6);
    _swift_unknownObjectRelease(lVar5);
    lVar5 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  _swift_unknownObjectRelease(lVar5);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113094f78);
  *(undefined8 *)(unaff_x20 + _DAT_113094f78) = 0;
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10487f0b4; end: 10487f0ff;  */

void FUN_10487f0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487f100; end: 10487f107;  */

void FUN_10487f100(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10487f108; end: 10487f1ab;  */

code * FUN_10487f108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  puVar1 = &UNK_1107a9148;
  _swift_allocObject(&UNK_1107a9148,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar4 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  uVar2 = 0;
  __sSaMa(0,param_3);
  pcVar3 = FUN_10487f1ac;
  func_0x0001000bfde0(FUN_10487f1ac,puVar1,uVar2);
  _swift_retain(param_2);
  _swift_release(puVar1);
  return pcVar3;
}



/* Entry: 10487f1ac; end: 10487f223;  */

void FUN_10487f1ac(undefined8 *param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar1 = FUN_10487f224;
  func_0x0001000ca88c(FUN_10487f224,auStack_70,uStack_60,uStack_58,PTR___ss5NeverON_11034ee88,
                      uStack_50,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10487f224; end: 10487f2cb;  */

void FUN_10487f224(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return;
}



/* Entry: 10487f2cc; end: 10487f2d3;  */

void FUN_10487f2cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10487f2d4; end: 10487f327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487f2d4(void)

{
  func_0x000100087bd4(0x10487f3cc);
  return;
}



/* Entry: 10487f328; end: 10487f387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487f328(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113815490;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_1130951f0));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_1130951f8));
  return;
}



/* Entry: 10487f388; end: 10487f3ab;  */

void FUN_10487f388(void)

{
  FUN_10487f328();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487f3ac; end: 10487f41b;  */

void FUN_10487f3ac(void)

{
  FUN_10487f2d4();
  return;
}



/* Entry: 10487f41c; end: 10487f46b;  */

void FUN_10487f41c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487f46c; end: 10487f473;  */

void FUN_10487f46c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10487f474; end: 10487f513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487f474(void)

{
  int iVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113095338) == '\x01') {
    iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_113095330);
    func_0x0001007d642c();
    if (iVar1 != 0) {
      func_0x000100c7f554();
      return;
    }
  }
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + _DAT_113095330));
  _swift_retain();
  func_0x00010090569c(0x10487f5b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 10487f514; end: 10487f573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487f514(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113815498;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113095328));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_113095330));
  return;
}



/* Entry: 10487f574; end: 10487f597;  */

void FUN_10487f574(void)

{
  FUN_10487f514();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487f598; end: 10487f617;  */

void FUN_10487f598(void)

{
  FUN_10487f474();
  return;
}



/* Entry: 10487f618; end: 10487f76b;  */

long FUN_10487f618(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *unaff_x20;
  lVar2 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  uVar3 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  unaff_x20[4] = lVar2;
  func_0x000100087384(0,*(undefined8 *)(lVar6 + 0xa8));
  lVar4 = 1;
  func_0x000104887274();
  unaff_x20[3] = lVar4;
  lVar2 = param_1;
  func_0x0001000c0ea8();
  _swift_retain_n(lVar4,3);
  _swift_retain(param_1);
  _swift_retain(lVar2);
  pcVar5 = FUN_10487f894;
  lVar6 = lVar4;
  func_0x0001000d4d28(FUN_10487f894,lVar4,0x10487f898,lVar4);
  _swift_release_n(lVar4,2);
  _swift_getObjectType(pcVar5);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  pcVar7 = *(code **)(lVar6 + 0x10);
  _swift_retain(uVar3);
  (*pcVar7)();
  _swift_release(lVar2);
  _swift_release(param_1);
  _swift_release(lVar4);
  _swift_unknownObjectRelease(pcVar5);
  _swift_release(uVar3);
  return lVar2;
}



/* Entry: 10487f76c; end: 10487f78b;  */

void FUN_10487f76c(void)

{
  func_0x0001000c69e8();
  return;
}



/* Entry: 10487f78c; end: 10487f7a7;  */

void FUN_10487f78c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10487f7a8; end: 10487f7db;  */

long FUN_10487f7a8(long param_1)

{
  func_0x0001000d2374();
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 10487f7dc; end: 10487f7f7;  */

void FUN_10487f7dc(undefined8 param_1)

{
  FUN_10487f7a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 10487f7f8; end: 10487f83f;  */

void FUN_10487f7f8(void)

{
  long *unaff_x20;
  
  FUN_10487f840(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  _swift_retain();
  FUN_10487f618();
  return;
}



/* Entry: 10487f840; end: 10487f84f;  */

void FUN_10487f840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820da0);
  return;
}



/* Entry: 10487f850; end: 10487f893;  */

void FUN_10487f850(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBoWV_11034d678 + 0x40;
  puStack_18 = puStack_20;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 10487f894; end: 10487f89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487f894(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(&UNK_100087e00,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000100087f24(param_1);
  return;
}



/* Entry: 10487f89c; end: 10487f93b;  */

void FUN_10487f89c(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  func_0x00010487f8e4(param_1,param_2);
  return;
}



/* Entry: 10487f93c; end: 10487f9c3;  */

undefined1  [16] FUN_10487f93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_2;
  (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x58))();
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000100087bd4(0x10487ff8c,auStack_70,PTR___sytN_11034f1b0 + 8);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10487f9c4; end: 10487fafb;  */

void FUN_10487f9c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *unaff_x20;
  puVar3 = &UNK_1107a9810;
  puVar1 = puVar3;
  _swift_allocObject(&UNK_1107a9810,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &UNK_1107a9838;
  _swift_allocObject(&UNK_1107a9838,0x30,7);
  uVar8 = *(undefined8 *)(lVar7 + 0xa8);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  uVar9 = *(undefined8 *)(lVar7 + 0xb0);
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  uVar10 = *(undefined8 *)(lVar7 + 0xb8);
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  _swift_allocObject(&UNK_1107a9810,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &UNK_1107a9860;
  _swift_allocObject(&UNK_1107a9860,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  _swift_retain(puVar1);
  _swift_retain(puVar3);
  pcVar5 = FUN_10487ffd0;
  puVar6 = puVar2;
  func_0x0001000d4d28(FUN_10487ffd0,puVar2,0x10487ffdc,puVar4);
  _swift_release(puVar1);
  _swift_release(puVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  lVar7 = unaff_x20[5];
  unaff_x20[5] = (long)pcVar5;
  unaff_x20[6] = (long)puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar7);
  return;
}



/* Entry: 10487fafc; end: 10487fb6b;  */

void FUN_10487fafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x78))();
  uStack_50 = param_2;
  uStack_48 = param_3;
  func_0x000100087bd4(FUN_10487ff4c,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10487fb6c; end: 10487fbef;  */

void FUN_10487fb6c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x30);
    lVar1 = lVar3;
    _swift_getObjectType(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    _swift_unknownObjectRetain(lVar3);
    (*pcVar5)(lVar1,lVar4);
    _swift_unknownObjectRelease(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  *(long *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 10487fbf0; end: 10487fc8b;  */

void FUN_10487fbf0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _swift_retain(uVar1);
    _swift_release(param_2);
    (**(code **)(param_5 + 0x18))(param_1,param_4,param_5);
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 10487fc8c; end: 10487fd17;  */

void FUN_10487fc8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _swift_retain(uVar1);
    _swift_release(param_1);
    (**(code **)(param_4 + 0x20))(param_3,param_4);
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 10487fd18; end: 10487fd3b;  */

void FUN_10487fd18(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10487fd3c; end: 10487fd7b;  */

long FUN_10487fd3c(long param_1)

{
  FUN_10487fb6c();
  func_0x0001000d2374();
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 10487fd7c; end: 10487fd97;  */

void FUN_10487fd7c(undefined8 param_1)

{
  FUN_10487fd3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x40,7);
  return;
}



/* Entry: 10487fd98; end: 10487fe33;  */

void FUN_10487fd98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0xff;
  func_0x0001000c2500(0xff,uVar4);
  puVar2 = &DAT_10dd3ca20;
  _swift_getWitnessTable(&DAT_10dd3ca20,uVar1);
  uVar3 = 0;
  FUN_10487fe34(0,uVar4,uVar1,puVar2);
  _swift_retain();
  FUN_104887128();
  _swift_allocObject(uVar3,0x40,7);
  func_0x00010487f8e4();
  return;
}



/* Entry: 10487fe34; end: 10487fe3f;  */

void FUN_10487fe34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820e34);
  return;
}



/* Entry: 10487fe40; end: 10487fee3;  */

void FUN_10487fe40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0xff;
  func_0x000100087384(0xff,uVar4);
  puVar2 = &DAT_10dd3ca70;
  _swift_getWitnessTable(&DAT_10dd3ca70,uVar1);
  uVar3 = 0;
  FUN_10487fe34(0,uVar4,uVar1,puVar2);
  _swift_retain();
  func_0x000104887274(param_1);
  _swift_allocObject(uVar3,0x40,7);
  func_0x00010487f8e4();
  return;
}



/* Entry: 10487fee4; end: 10487fee7;  */

void FUN_10487fee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487fee8; end: 10487ff4b;  */

void FUN_10487fee8(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = &UNK_10dd3bba8;
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_20 = &UNK_10dd3bbc0;
  _swift_initClassMetadata2(param_1,0,4,&puStack_30,param_1 + 0xc0);
  return;
}



/* Entry: 10487ff4c; end: 10487ffcf;  */

void FUN_10487ff4c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x38);
  lVar1 = lVar3 + -1;
  if (!SBORROW8(lVar3,1)) {
    *(long *)(*(long *)(unaff_x20 + 0x20) + 0x38) = lVar1;
    if (lVar1 == 0) {
      FUN_10487fb6c();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10487ff8c);
  (*pcVar2)();
}



/* Entry: 10487ffd0; end: 10487ffe7;  */

void FUN_10487ffd0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  _swift_beginAccess(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_weakLoadStrong();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    _swift_retain(uVar4);
    _swift_release(lVar3);
    (**(code **)(lVar1 + 0x18))(param_1,uVar2,lVar1);
    _swift_release(uVar4);
  }
  return;
}



/* Entry: 10487ffe8; end: 10488002f;  */

void FUN_10487ffe8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 104880030; end: 1048800ef;  */

undefined1  [16] FUN_104880030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  code *pcVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_48;
  
  plVar5 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_104880458(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  func_0x0001000b693c(param_2,param_3);
  FUN_104880250();
  pcVar4 = *(code **)(*plVar5 + 0x58);
  puVar2 = &DAT_10dd3bc88;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_10dd3bc88,uVar1);
  puVar3 = &uStack_48;
  (*pcVar4)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 1048800f0; end: 10488010b;  */

void FUN_1048800f0(undefined8 param_1)

{
  func_0x0001000d2374();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x20,7);
  return;
}



/* Entry: 10488010c; end: 10488016b;  */

long * FUN_10488010c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10488016c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  func_0x0001000c0ea8(lVar1);
  _swift_retain();
  return unaff_x20;
}



/* Entry: 10488016c; end: 10488017b;  */

void FUN_10488016c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820ed0);
  return;
}



/* Entry: 10488017c; end: 1048801bf;  */

void FUN_10488017c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 1048801c0; end: 1048801c3;  */

void FUN_1048801c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1048801c4; end: 10488024f;  */

void FUN_1048801c4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_38 = puStack_40;
    puStack_28 = puStack_30;
    _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x58);
  }
  return;
}



/* Entry: 104880250; end: 10488029b;  */

undefined8 FUN_104880250(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10488029c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10488029c; end: 10488032f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10488029c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_1138154a0);
  *(undefined8 *)(unaff_x20 + _DAT_113095568) = 0;
  lVar1 = _DAT_113095578;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113095580) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113095570) = param_2;
  return;
}



/* Entry: 104880330; end: 1048803ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104880330(undefined8 param_1)

{
  char cStack_31;
  
  func_0x000100087bd4(&cStack_31,FUN_1048804f0);
  if (cStack_31 == '\x01') {
    func_0x000100087f6c(param_1);
  }
  return;
}



/* Entry: 1048803ac; end: 104880433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048803ac(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 104880434; end: 104880457;  */

void FUN_104880434(void)

{
  func_0x0001048803d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104880458; end: 104880463;  */

void FUN_104880458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820f3c);
  return;
}



/* Entry: 104880464; end: 1048804af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104880464(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154a0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0001048804ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 1048804b0; end: 1048804ef;  */

void FUN_1048804b0(void)

{
  FUN_104880330();
  return;
}



/* Entry: 1048804f0; end: 104880527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048804f0(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113095568) + 1;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_113095568),1)) {
    *(long *)(unaff_x20 + _DAT_113095568) = lVar1;
    *(bool *)param_1 = *(long *)(unaff_x20 + _DAT_113095570) < lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104880528);
  (*pcVar2)();
}



/* Entry: 104880528; end: 10488055f;  */

void FUN_104880528(undefined8 param_1)

{
  _swift_allocObject();
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 104880560; end: 10488062b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104880560(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(puVar3,param_1,lVar2);
  (**(code **)(lVar5 + 0x38))(puVar3,0,1,lVar2);
  func_0x000100087f6c(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 10488062c; end: 104880693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10488062c(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 104880694; end: 1048806ab;  */

void FUN_104880694(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048806a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0xa8) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0));
  return;
}



/* Entry: 1048806ac; end: 104880723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048806ac(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 104880724; end: 104880747;  */

void FUN_104880724(void)

{
  func_0x0001048806d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104880748; end: 104880767;  */

void FUN_104880748(void)

{
  FUN_1048806ac();
  return;
}


