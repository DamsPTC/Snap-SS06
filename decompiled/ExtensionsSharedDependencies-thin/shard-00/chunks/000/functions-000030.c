/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00094a3c; end: 00094a43;  */

void FUN_00094a3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 00094a44; end: 00094a77;  */

void FUN_00094a44(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00094a78; end: 00094a87;  */

void FUN_00094a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841aac);
  return;
}



/* Entry: 00094a88; end: 00094acb;  */

void FUN_00094a88(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 00094acc; end: 00094acf;  */

void FUN_00094acc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00094ad0; end: 00094b77;  */

void FUN_00094ad0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_40 = PTR___syycWV_0099b8e8 + 0x40;
    puStack_38 = PTR___sBOWV_0099ae70 + 0x40;
    puStack_30 = &UNK_007d4bb0;
    puStack_28 = &UNK_007d4bc8;
    _swift_initClassMetadata2(param_1,0,6,&lStack_50,param_1 + 0x60);
  }
  return;
}



/* Entry: 00094b78; end: 00094bcb;  */

undefined8 FUN_00094b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00094bcc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 00094bcc; end: 00094c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64880);
  lVar2 = _DAT_00aeaba0;
  puVar3 = PTR__OBJC_CLASS___NSRecursiveLock_00ac36c8;
  _objc_allocWithZone();
  func_0x007849a0();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_00aeaba8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aeabb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aeab90) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aeab98);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 00094c68; end: 00094e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094c68(long *param_1)

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
  (**(code **)((long)unaff_x20 + _DAT_00aeab98))();
  lVar2 = 0;
  FUN_000a1210(0,*(undefined8 *)(lVar10 + 0x58));
  uVar8 = *(undefined8 *)((long)unaff_x20 + _DAT_00aeab90);
  puVar3 = &UNK_009a6318;
  _swift_allocObject(&UNK_009a6318,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &UNK_009a6340;
  _swift_allocObject(&UNK_009a6340,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x50);
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_retain(param_1);
  _swift_retain(uVar8);
  plVar5 = param_1;
  FUN_000a142c(param_1,uVar8,FUN_00095020,puVar4);
  _swift_release(uVar8);
  uVar9 = *(undefined8 *)((long)unaff_x20 + _DAT_00aeaba0);
  func_0x00788640(uVar9);
  lVar10 = _DAT_00aeaba8;
  lVar7 = *(long *)((long)unaff_x20 + _DAT_00aeaba8);
  uVar8 = 0;
  if (lVar7 != 0) {
    _swift_retain(lVar7);
    FUN_000a0f34();
    _swift_release(lVar7);
    uVar8 = *(undefined8 *)((long)unaff_x20 + lVar10);
  }
  *(long **)((long)unaff_x20 + lVar10) = plVar5;
  _swift_retain(plVar5);
  _swift_release(uVar8);
  pcVar11 = *(code **)(*param_1 + 0x58);
  puVar3 = &DAT_007d5d50;
  plStack_58 = plVar5;
  _swift_getWitnessTable(&DAT_007d5d50,lVar2);
  pplVar6 = &plStack_58;
  (*pcVar11)(pplVar6,lVar2,puVar3);
  plVar1 = (long *)((long)unaff_x20 + _DAT_00aeabb0);
  lVar10 = *plVar1;
  *plVar1 = (long)pplVar6;
  plVar1[1] = lVar2;
  _swift_unknownObjectRelease(lVar10);
  func_0x00793000(uVar9);
  _swift_release(param_1);
  _swift_release(plVar5);
  return;
}



/* Entry: 00094e0c; end: 00094f1b;  */

void FUN_00094e0c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_00095028();
    _swift_release(param_2);
  }
  return;
}



/* Entry: 00094f1c; end: 00094f3f;  */

void FUN_00094f1c(void)

{
  func_0x00094e88();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00094f40; end: 00094f4b;  */

void FUN_00094f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841b18);
  return;
}



/* Entry: 00094f4c; end: 00094f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094f4c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64880;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00094f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00094f98; end: 00094fd7;  */

void FUN_00094f98(void)

{
  FUN_00094c68();
  return;
}



/* Entry: 00094fd8; end: 0009501f;  */

void FUN_00094fd8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00095020; end: 00095027;  */

void FUN_00095020(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_00095028();
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 00095028; end: 000950df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095028(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_00aeaba0);
  func_0x00788640(uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_00aeabb0);
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
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00aeaba8);
  *(undefined8 *)(unaff_x20 + _DAT_00aeaba8) = 0;
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00793010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar4,PTR_s_unlock_00abf910);
  return;
}



/* Entry: 000950e0; end: 00095153;  */

long * FUN_000950e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_00095154(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  FUN_00092368(lVar1);
  _swift_retain();
  _swift_retain(param_2);
  return unaff_x20;
}



/* Entry: 00095154; end: 0009515f;  */

void FUN_00095154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841b68);
  return;
}



/* Entry: 00095160; end: 000951ab;  */

void FUN_00095160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 000951ac; end: 00095283;  */

undefined1  [16] FUN_000951ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  FUN_00095554(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_00095394(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_007d4cc0;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4cc0,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 00095284; end: 0009528b;  */

void FUN_00095284(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 0009528c; end: 000952bf;  */

void FUN_0009528c(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 000952c0; end: 000952c3;  */

void FUN_000952c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000952c4; end: 00095307;  */

void FUN_000952c4(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 00095308; end: 0009530b;  */

void FUN_00095308(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0009530c; end: 00095393;  */

void FUN_0009530c(long param_1,ulong param_2)

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
    puStack_28 = PTR___syycWV_0099b8e8 + 0x40;
    _swift_initClassMetadata2(param_1,0,3,&lStack_38,param_1 + 0x60);
  }
  return;
}



/* Entry: 00095394; end: 00095403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00095394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64888);
  *(undefined8 *)(unaff_x20 + _DAT_00aeace0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aeace8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return unaff_x20;
}



/* Entry: 00095404; end: 000954a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095404(void)

{
  long extraout_x8;
  long lVar1;
  long *unaff_x20;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)((long)unaff_x20 + _DAT_00aeace8))(puVar2);
  FUN_000a08b0(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 000954a4; end: 0009552f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000954a4(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 00095530; end: 00095553;  */

void FUN_00095530(void)

{
  func_0x000954cc();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00095554; end: 0009555f;  */

void FUN_00095554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841bd4);
  return;
}



/* Entry: 00095560; end: 000955ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095560(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64888;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000955a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 000955ac; end: 000955eb;  */

void FUN_000955ac(void)

{
  FUN_00095404();
  return;
}



/* Entry: 000955ec; end: 000958ef;  */

void FUN_000955ec(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  long lVar10;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [32];
  long lStack_58;
  
  lStack_e8 = *(long *)(param_5 + -8);
  lVar5 = param_6;
  lStack_e0 = param_5;
  uStack_d8 = param_8;
  pcStack_a8 = param_1;
  uStack_a0 = param_2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar9 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_98 = lVar9;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(lVar5 + 8));
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  lStack_c8 = lVar9;
  lStack_b8 = param_4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_d0 = lVar9;
  _swift_getAssociatedTypeWitness(0,param_6,param_3,PTR___sSlTL_0099b308,PTR___s5IndexSlTl_0099ae58)
  ;
  lStack_c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_02;
  lVar5 = param_3;
  __sSl5countSivgTj(param_3,param_6);
  lVar1 = lStack_b8;
  if (lVar5 == 0) {
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ();
  }
  else {
    lVar6 = lStack_b8;
    lStack_f0 = lVar4;
    __ss15ContiguousArrayVAByxGycfC();
    uVar7 = 0;
    lStack_58 = lVar6;
    __ss15ContiguousArrayVMa(0,lVar1);
    uStack_b0 = uVar7;
    __ss15ContiguousArrayV15reserveCapacityyySiF(lVar5);
    lStack_90 = lVar9;
    __sSl10startIndex0B0QzvgTj(lVar9,param_3);
    lVar4 = lStack_c8;
    lVar1 = lStack_d0;
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x958f0);
      (*pcVar2)();
    }
    do {
      pcVar2 = (code *)auStack_80;
      __sSly7ElementQz5IndexQzcirTj(pcVar2,lStack_90,param_3,param_6);
      (**(code **)(lVar10 + 0x10))(lVar4);
      (*pcVar2)(auStack_80,0);
      (*pcStack_a8)(lVar1,lVar4,lStack_98);
      if (unaff_x21 != 0) {
        (**(code **)(lVar10 + 8))(lVar4,lVar3);
        (**(code **)(lStack_c0 + 8))(lStack_90,lStack_f0);
        _swift_release(lStack_58);
        (**(code **)(lStack_e8 + 0x20))(uStack_d8,lStack_98,lStack_e0);
        return;
      }
      (**(code **)(lVar10 + 8))(lVar4,lVar3);
      __ss15ContiguousArrayV6appendyyxnF(lVar1,uStack_b0);
      __sSl9formIndex5aftery0B0Qzz_tFTj(lStack_90,param_3,param_6);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(lStack_c0 + 8))(lStack_90,lStack_f0);
    uVar7 = uStack_b0;
    puVar8 = PTR___ss15ContiguousArrayVyxGSTsMc_0099b4e0;
    _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSTsMc_0099b4e0,uStack_b0);
    __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC(&lStack_58,lStack_b8,uVar7,puVar8);
  }
  return;
}



/* Entry: 000958f0; end: 00095927;  */

void FUN_000958f0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_0009ea40();
  return;
}



/* Entry: 00095928; end: 00095a6b;  */

void FUN_00095928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x88);
  FUN_00095dcc(0,uVar5);
  lVar6 = unaff_x20[2];
  uVar1 = 0;
  FUN_0009eb08(0,uVar5);
  __sSa5countSivg(lVar6,uVar1);
  uVar5 = param_2;
  FUN_000a0834(param_2,param_3);
  FUN_00095bf8(lVar6,uVar5);
  uVar2 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  lStack_60 = lVar6;
  __sSaMa(0,uVar1);
  uVar5 = 0xaeab08;
  func_0x000115a8(0xaeab08,&UNK_007d4d30);
  puVar3 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar2);
  pcVar4 = FUN_00095afc;
  FUN_000955ec(FUN_00095afc,auStack_80,uVar2,uVar5,PTR___ss5NeverON_0099b788,puVar3,
               PTR___ss5NeverOs5ErrorsWP_0099b790);
  _swift_release(lVar6);
  lVar6 = 0;
  FUN_0009e518();
  _swift_allocObject();
  *(code **)(lVar6 + 0x10) = pcVar4;
  return;
}



/* Entry: 00095a6c; end: 00095a73;  */

void FUN_00095a6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 00095a74; end: 00095aa7;  */

void FUN_00095a74(long param_1)

{
  func_0x0009ea4c();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x18,7);
  return;
}



/* Entry: 00095aa8; end: 00095ab7;  */

void FUN_00095aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841c24);
  return;
}



/* Entry: 00095ab8; end: 00095afb;  */

void FUN_00095ab8(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBbWV_0099ae78 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x90);
  return;
}



/* Entry: 00095afc; end: 00095b6b;  */

void FUN_00095afc(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long **pplVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  long *plStack_38;
  
  plStack_38 = *(long **)(unaff_x20 + 0x20);
  lVar3 = *plStack_38;
  pcVar4 = *(code **)(*(long *)*param_2 + 0x58);
  puVar1 = &DAT_007d4d78;
  _swift_getWitnessTable(&DAT_007d4d78,lVar3);
  pplVar2 = &plStack_38;
  (*pcVar4)(pplVar2,lVar3,puVar1);
  *param_1 = (long)pplVar2;
  param_1[1] = lVar3;
  return;
}



/* Entry: 00095b6c; end: 00095b6f;  */

void FUN_00095b6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00095b70; end: 00095bf7;  */

void FUN_00095b70(long param_1,ulong param_2)

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
    puStack_38 = PTR___sBi64_WV_0099ae80 + 0x40;
    puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_28 = puStack_30;
    _swift_initClassMetadata2(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 00095bf8; end: 00095c43;  */

undefined8 FUN_00095bf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00095c44(param_1,param_2);
  return unaff_x20;
}



/* Entry: 00095c44; end: 00095ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095c44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64890);
  lVar1 = _DAT_00aeae20;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_00aeae28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00aeae18) = param_1;
  return;
}



/* Entry: 00095ccc; end: 00095cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095ccc(void)

{
  FUN_000a08b0();
  return;
}



/* Entry: 00095cf4; end: 00095d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095cf4(void)

{
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(0x95e64);
  return;
}



/* Entry: 00095d48; end: 00095da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095d48(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b64890;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeae20));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeae28));
  return;
}



/* Entry: 00095da8; end: 00095dcb;  */

void FUN_00095da8(void)

{
  FUN_00095d48();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00095dcc; end: 00095dd7;  */

void FUN_00095dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841c90);
  return;
}



/* Entry: 00095dd8; end: 00095e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095dd8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64890;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00095e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00095e24; end: 00095eb3;  */

void FUN_00095e24(void)

{
  FUN_00095ccc();
  return;
}



/* Entry: 00095eb4; end: 00095f03;  */

void FUN_00095eb4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00095f04; end: 00095fdf;  */

undefined1  [16] FUN_00095f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar2 = 0;
  FUN_0009648c(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar5 = unaff_x20[3];
  lVar1 = unaff_x20[4];
  _swift_unknownObjectRetain(lVar5);
  FUN_00096104(param_2,lVar5,(char)lVar1);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar3 = &DAT_007d4e90;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4e90,uVar2);
  puVar4 = &uStack_48;
  (*pcVar6)(puVar4,uVar2,puVar3);
  _swift_release(param_2);
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 00095fe0; end: 00095fe7;  */

void FUN_00095fe0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 00095fe8; end: 0009601b;  */

void FUN_00095fe8(long param_1)

{
  FUN_00092370();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x21,7);
  return;
}



/* Entry: 0009601c; end: 0009602b;  */

void FUN_0009601c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841ce0);
  return;
}



/* Entry: 0009602c; end: 00096073;  */

void FUN_0009602c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = &UNK_007d4dc8;
  puStack_18 = &UNK_007d4de0;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 00096074; end: 00096077;  */

void FUN_00096074(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00096078; end: 00096103;  */

void FUN_00096078(long param_1,ulong param_2)

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
    puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_30 = &UNK_007d4e38;
    puStack_28 = &UNK_007d4e50;
    _swift_initClassMetadata2(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 00096104; end: 0009617b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00096104(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64898);
  *(undefined8 *)(unaff_x20 + _DAT_00aeaf58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00aeaf60) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_00aeaf68) = param_3;
  return unaff_x20;
}



/* Entry: 0009617c; end: 000962e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009617c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  lVar9 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  if (*(char *)((long)unaff_x20 + _DAT_00aeaf68) == '\x01') {
    iVar1 = (int)*(undefined8 *)((long)unaff_x20 + _DAT_00aeaf60);
    func_0x00620e90();
    if (iVar1 != 0) {
      FUN_000a08b0(param_1);
      return;
    }
  }
  uVar8 = *(undefined8 *)((long)unaff_x20 + _DAT_00aeaf60);
  _swift_getObjectType(uVar8);
  puVar2 = &UNK_009a6828;
  _swift_allocObject(&UNK_009a6828,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar9 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,lVar5);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar6 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &UNK_009a6850;
  _swift_allocObject(&UNK_009a6850,uVar6 + lVar7,uVar4 | 7);
  *(long *)(puVar3 + 0x10) = lVar5;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  (**(code **)(lVar9 + 0x20))
            (puVar3 + uVar6,&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar5);
  _swift_retain(puVar2);
  func_0x000a4d64(FUN_000965d0,puVar3,uVar8);
  _swift_release(puVar2);
  _swift_release(puVar3);
  return;
}



/* Entry: 000962e8; end: 00096407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000962e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_00aeaf58);
    _swift_retain(uVar1);
    _swift_release(param_1);
    FUN_000a08b0(param_2);
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 00096408; end: 00096467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096408(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b64898;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeaf58));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_00aeaf60));
  return;
}



/* Entry: 00096468; end: 0009648b;  */

void FUN_00096468(void)

{
  FUN_00096408();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009648c; end: 00096497;  */

void FUN_0009648c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841d4c);
  return;
}



/* Entry: 00096498; end: 000964e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096498(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64898;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000964e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 000964e4; end: 0009654b;  */

void FUN_000964e4(void)

{
  FUN_0009617c();
  return;
}



/* Entry: 0009654c; end: 0009656f;  */

void FUN_0009654c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00096570; end: 000965cf;  */

void FUN_00096570(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000965d0; end: 000965eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000965d0(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  _swift_beginAccess(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_00aeaf58);
    _swift_retain(uVar3);
    _swift_release(lVar1);
    FUN_000a08b0(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
    _swift_release(uVar3);
  }
  return;
}



/* Entry: 000965ec; end: 00096623;  */

void FUN_000965ec(undefined8 param_1)

{
  _swift_allocObject();
  FUN_00096624(param_1);
  return;
}



/* Entry: 00096624; end: 00096777;  */

long FUN_00096624(long param_1)

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
  func_0x0009e3e0();
  _swift_allocObject();
  uVar3 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  unaff_x20[4] = lVar2;
  FUN_000a2c70(0,*(undefined8 *)(lVar6 + 0xa8));
  lVar4 = 1;
  FUN_000a230c();
  unaff_x20[3] = lVar4;
  lVar2 = param_1;
  FUN_00092368();
  _swift_retain_n(lVar4,3);
  _swift_retain(param_1);
  _swift_retain(lVar2);
  pcVar5 = FUN_00096858;
  lVar6 = lVar4;
  func_0x0009e974(FUN_00096858,lVar4,0x9685c,lVar4);
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



/* Entry: 00096778; end: 00096797;  */

void FUN_00096778(void)

{
  FUN_000a2420();
  return;
}



/* Entry: 00096798; end: 000967b3;  */

void FUN_00096798(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 000967b4; end: 000967e7;  */

long FUN_000967b4(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 000967e8; end: 00096803;  */

void FUN_000967e8(undefined8 param_1)

{
  FUN_000967b4();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00096804; end: 00096813;  */

void FUN_00096804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841d9c);
  return;
}



/* Entry: 00096814; end: 00096857;  */

void FUN_00096814(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBoWV_0099ae88 + 0x40;
  puStack_18 = puStack_20;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 00096858; end: 0009685f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096858(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_000a2994,auStack_50,PTR___sytN_0099b8e0 + 8);
  func_0x0009fee0(param_1);
  return;
}



/* Entry: 00096860; end: 000968ff;  */

void FUN_00096860(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  func_0x000968a8(param_1,param_2);
  return;
}



/* Entry: 00096900; end: 00096987;  */

undefined1  [16] FUN_00096900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(0x96e10,auStack_70,PTR___sytN_0099b8e0 + 8);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 00096988; end: 00096abf;  */

void FUN_00096988(void)

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
  puVar3 = &UNK_009a6a10;
  puVar1 = puVar3;
  _swift_allocObject(&UNK_009a6a10,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &UNK_009a6a38;
  _swift_allocObject(&UNK_009a6a38,0x30,7);
  uVar8 = *(undefined8 *)(lVar7 + 0xa8);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  uVar9 = *(undefined8 *)(lVar7 + 0xb0);
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  uVar10 = *(undefined8 *)(lVar7 + 0xb8);
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  _swift_allocObject(&UNK_009a6a10,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &UNK_009a6a60;
  _swift_allocObject(&UNK_009a6a60,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  _swift_retain(puVar1);
  _swift_retain(puVar3);
  pcVar5 = FUN_00096e9c;
  puVar6 = puVar2;
  func_0x0009e974(FUN_00096e9c,puVar2,0x96ea8,puVar4);
  _swift_release(puVar1);
  _swift_release(puVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  lVar7 = unaff_x20[5];
  unaff_x20[5] = (long)pcVar5;
  unaff_x20[6] = (long)puVar6;
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(lVar7);
  return;
}



/* Entry: 00096ac0; end: 00096b2f;  */

void FUN_00096ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x78))();
  uStack_50 = param_2;
  uStack_48 = param_3;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_00096dd0,auStack_60,PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 00096b30; end: 00096bb3;  */

void FUN_00096b30(void)

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
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(uVar2);
  return;
}



/* Entry: 00096bb4; end: 00096c4f;  */

void FUN_00096bb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

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



/* Entry: 00096c50; end: 00096cdb;  */

void FUN_00096c50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 00096cdc; end: 00096cff;  */

void FUN_00096cdc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 00096d00; end: 00096d3f;  */

long FUN_00096d00(long param_1)

{
  FUN_00096b30();
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 00096d40; end: 00096d5b;  */

void FUN_00096d40(undefined8 param_1)

{
  FUN_00096d00();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x40,7);
  return;
}



/* Entry: 00096d5c; end: 00096d6b;  */

void FUN_00096d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841e30);
  return;
}



/* Entry: 00096d6c; end: 00096dcf;  */

void FUN_00096d6c(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
  puStack_28 = &UNK_007d4f38;
  puStack_18 = PTR___sBi64_WV_0099ae80 + 0x40;
  puStack_20 = &UNK_007d4f50;
  _swift_initClassMetadata2(param_1,0,4,&puStack_30,param_1 + 0xc0);
  return;
}



/* Entry: 00096dd0; end: 00096e53;  */

void FUN_00096dd0(void)

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
      FUN_00096b30();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x96e10);
  (*pcVar2)();
}



/* Entry: 00096e54; end: 00096e9b;  */

void FUN_00096e54(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00096e9c; end: 00096eb7;  */

void FUN_00096e9c(undefined8 param_1)

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



/* Entry: 00096eb8; end: 00096eff;  */

void FUN_00096eb8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00096f00; end: 00096fbf;  */

undefined1  [16] FUN_00096f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_000972c8(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  FUN_000970c0();
  pcVar4 = *(code **)(*plVar5 + 0x58);
  puVar2 = &DAT_007d5018;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d5018,uVar1);
  puVar3 = &uStack_48;
  (*pcVar4)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 00096fc0; end: 00096fdb;  */

void FUN_00096fc0(undefined8 param_1)

{
  FUN_00092370();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x20,7);
  return;
}



/* Entry: 00096fdc; end: 00096feb;  */

void FUN_00096fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841ecc);
  return;
}


