/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043818b4; end: 1043818c3; -[SCMapPersonStatus sticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043818b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072750));
  return;
}



/* Entry: 1043818c4; end: 1043818d3; -[SCMapPersonStatus constraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043818c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072758));
  return;
}



/* Entry: 1043818d4; end: 104381957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043818d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072748);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113072750) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113072758) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104381958; end: 104381a07; -[SCMapPersonStatus initWithStatusId:sticker:constraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104381958(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113072748);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113072750) = param_4;
  *(undefined8 *)(param_1 + _DAT_113072758) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104381a08; end: 104381a37;  */

void FUN_104381a08(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104381a38(param_1);
  return;
}



/* Entry: 104381a38; end: 104381beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104381a38(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_170 [80];
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  _swift_getObjectType();
  uVar10 = *param_1;
  lStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113072748);
  puVar3[1] = param_1[1];
  *puVar3 = uVar10;
  uVar10 = param_1[1];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_80 = param_1[8];
  uStack_78 = (undefined1)param_1[9];
  uStack_6f = *(undefined8 *)((long)param_1 + 0x51);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x49);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x49) >> 0x38);
  if (lStack_a8 == 0) {
    _swift_bridgeObjectRetain(uVar10);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uStack_d8 = param_1[7];
    uStack_e0 = param_1[6];
    uStack_d0 = param_1[8];
    uStack_c8 = (undefined1)param_1[9];
    uStack_bf = *(undefined8 *)((long)param_1 + 0x51);
    uStack_c7 = (undefined7)*(undefined8 *)((long)param_1 + 0x49);
    uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x49) >> 0x38);
    uStack_f8 = param_1[3];
    uStack_100 = param_1[2];
    uStack_e8 = param_1[5];
    uStack_f0 = param_1[4];
    FUN_104383ef8(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar10);
    FUN_10437ee70(&uStack_b0,auStack_170);
    puVar3 = &uStack_100;
    FUN_104383bdc();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113072750) = puVar3;
  lVar4 = 0;
  FUN_10437eec0();
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18));
  lVar5 = 0;
  FUN_1043823b4();
  lVar6 = lVar5;
  _objc_allocWithZone();
  uVar10 = *puVar3;
  puVar2 = (undefined8 *)(lVar6 + _DAT_113072788);
  puVar2[1] = puVar3[1];
  *puVar2 = uVar10;
  *(undefined8 *)(lVar6 + _DAT_113072790) = puVar3[2];
  lVar7 = 0;
  FUN_10437f5e8();
  lVar4 = _DAT_113813438;
  iVar1 = *(int *)(lVar7 + 0x18);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(lVar6 + lVar4,(long)puVar3 + (long)iVar1,lVar7);
  plVar8 = &lStack_110;
  lStack_110 = lVar6;
  lStack_108 = lVar5;
  _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113072758) = plVar8;
  puVar9 = &stack0xfffffffffffffee0;
  _objc_msgSendSuper2(puVar9,PTR_s_init_1125d9248);
  func_0x000104381e54(param_1);
  return puVar9;
}



/* Entry: 104381bec; end: 104381bef; -[SCMapPersonStatus copyWithZone:] */

void FUN_104381bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104381bf0; end: 104381c37; -[SCMapPersonStatus description] */

void FUN_104381bf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104381c38();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104381c38; end: 104381d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104381c38(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 auStack_90 [7];
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined1 auStack_4f [15];
  
  lVar4 = 0;
  FUN_10437eec0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)auStack_90 + lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072748);
  uVar7 = puVar1[1];
  uVar9 = *puVar1;
  puVar8 = (undefined8 *)((long)auStack_90 + lVar3 + 0x10);
  *(undefined8 *)((long)auStack_90 + lVar3 + 8) = puVar1[1];
  *puVar5 = uVar9;
  if (*(long *)(unaff_x20 + _DAT_113072750) == 0) {
    *(undefined8 *)(&stack0xffffffffffffffc1 + lVar3) = 0;
    *(undefined8 *)(auStack_4f + lVar3 + 8) = 0;
    *(undefined8 *)(&uStack_58 + lVar3) = 0;
    *(undefined8 *)((long)auStack_90 + lVar3 + 0x30) = 0;
    *(undefined8 *)(auStack_4f + lVar3 + 7) = 0;
    *(undefined8 *)(&uStack_50 + lVar3) = 0;
    *(undefined8 *)((long)auStack_90 + lVar3 + 0x18) = 0;
    *puVar8 = 0;
    *(undefined8 *)((long)auStack_90 + lVar3 + 0x28) = 0;
    *(undefined8 *)((long)auStack_90 + lVar3 + 0x20) = 0;
  }
  else {
    FUN_104383df0(auStack_90);
    uVar9 = CONCAT71(uStack_57,uStack_58);
    *(undefined8 *)(&uStack_58 + lVar3) = auStack_90[5];
    *(undefined8 *)((long)auStack_90 + lVar3 + 0x30) = auStack_90[4];
    *(undefined8 *)(auStack_4f + lVar3 + 7) = uVar9;
    *(undefined8 *)(&uStack_50 + lVar3) = auStack_90[6];
    *(undefined8 *)(&stack0xffffffffffffffc1 + lVar3) = auStack_4f._0_8_;
    *(ulong *)(auStack_4f + lVar3 + 8) = CONCAT17(uStack_50,uStack_57);
    *(undefined8 *)((long)auStack_90 + lVar3 + 0x18) = auStack_90[1];
    *puVar8 = auStack_90[0];
    *(undefined8 *)((long)auStack_90 + lVar3 + 0x28) = auStack_90[3];
    *(undefined8 *)((long)auStack_90 + lVar3 + 0x20) = auStack_90[2];
  }
  lVar3 = _DAT_113813438;
  lVar6 = *(long *)(unaff_x20 + _DAT_113072758);
  puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x18));
  uVar9 = *(undefined8 *)(lVar6 + _DAT_113072788);
  puVar1[1] = ((undefined8 *)(lVar6 + _DAT_113072788))[1];
  *puVar1 = uVar9;
  puVar1[2] = *(undefined8 *)(lVar6 + _DAT_113072790);
  lVar4 = 0;
  FUN_10437f5e8();
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)puVar1 + (long)iVar2,lVar6 + lVar3,lVar4);
  _swift_bridgeObjectRetain(uVar7);
  func_0x000104381e54(puVar5);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104381d8c; end: 104381e07; -[SCMapPersonStatus init] */

void FUN_104381d8c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapPersonStatusWrapper.swift",0x32,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104381dd4);
  (*pcVar1)();
}



/* Entry: 104381e08; end: 104381e8f; -[SCMapPersonStatus .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104381e08(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072748 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072750));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113072758));
  return;
}



/* Entry: 104381e90; end: 104381eaf;  */

void FUN_104381e90(void)

{
  _objc_opt_self(&PTR_PTR_1129a4498);
  return;
}



/* Entry: 104381eb0; end: 104381f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104381eb0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  
  puVar5 = auStack_50;
  _objc_allocWithZone();
  uVar6 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113072788);
  puVar2[1] = param_1[1];
  *puVar2 = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_113072790) = param_1[2];
  lVar4 = 0;
  FUN_10437f5e8();
  lVar3 = _DAT_113813438;
  iVar1 = *(int *)(lVar4 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(unaff_x20 + lVar3,(long)param_1 + (long)iVar1,lVar4);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  FUN_1043821f8(param_1);
  return puVar5;
}



/* Entry: 104381f68; end: 104381f7b; -[SCMapPersonStatusConstraint center] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104381f68(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_113072788);
}



/* Entry: 104381f7c; end: 104381f8b; -[SCMapPersonStatusConstraint radius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104381f7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072790);
}



/* Entry: 104381f8c; end: 104382023; -[SCMapPersonStatusConstraint expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104381f8c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113813438,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104382024; end: 1043820f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104382024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072788);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113072790) = param_3;
  lVar2 = _DAT_113813438;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_4,lVar3);
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_4,lVar3);
  return puVar4;
}



/* Entry: 1043820f4; end: 1043821f7; -[SCMapPersonStatusConstraint initWithCenter:radius:expirationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043820f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_4;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar5,param_6);
  puVar1 = (undefined8 *)(param_4 + _DAT_113072788);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_4 + _DAT_113072790) = param_3;
  (**(code **)(lVar6 + 0x10))(param_4 + _DAT_113813438,lVar5,lVar3);
  plVar4 = &lStack_70;
  lStack_70 = param_4;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar6 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 1043821f8; end: 104382233;  */

undefined8 FUN_1043821f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10437f5e8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104382234; end: 104382237; -[SCMapPersonStatusConstraint copyWithZone:] */

void FUN_104382234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104382238; end: 1043822f3; -[SCMapPersonStatusConstraint description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104382238(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  FUN_10437f5e8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = _DAT_113813438;
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113072788);
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4) = ((undefined8 *)(param_1 + _DAT_113072788))[1];
  *puVar5 = uVar6;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar4) = *(undefined8 *)(param_1 + _DAT_113072790);
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))
            ((undefined1 *)((long)puVar5 + (long)iVar1),param_1 + lVar2,lVar4);
  FUN_1043821f8(puVar5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043822f4; end: 10438236f; -[SCMapPersonStatusConstraint init] */

void FUN_1043822f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapPersonStatusConstraintWrapper.swift",0x3c,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438233c);
  (*pcVar1)();
}



/* Entry: 104382370; end: 1043823ab; -[SCMapPersonStatusConstraint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104382370(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_113813438;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x0001043823a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 1043823ac; end: 1043823b3;  */

void FUN_1043823ac(void)

{
  if (lRam00000001130727c0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7ff9f8);
  return;
}



/* Entry: 1043823b4; end: 1043823eb;  */

void FUN_1043823b4(undefined8 param_1)

{
  if (lRam00000001130727c0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff9f8);
  return;
}



/* Entry: 1043823ec; end: 10438246f;  */

void FUN_1043823ec(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dcf1d60;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 104382470; end: 10438247f; -[SCMapEffectVariant minZoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104382470(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130727d0);
}



/* Entry: 104382480; end: 10438248f; -[SCMapEffectVariant maxZoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104382480(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130727d8);
}



/* Entry: 104382490; end: 104382557; -[SCMapEffectVariant url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104382490(long param_1)

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
  func_0x000100029394(param_1 + _DAT_113813440,puVar4);
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



/* Entry: 104382558; end: 104382567; -[SCMapEffectVariant forceDisplayWhenClusterTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104382558(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813448);
}



/* Entry: 104382568; end: 104382577; -[SCMapEffectVariant onlyPlayOncePerMapSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104382568(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813450);
}



/* Entry: 104382578; end: 104382587; -[SCMapEffectVariant minClientVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104382578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813458);
}



/* Entry: 104382588; end: 104382657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104382588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar1 = auStack_60;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130727d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130727d8) = param_2;
  func_0x000100029394(param_3,unaff_x20 + _DAT_113813440);
  *(undefined1 *)(unaff_x20 + _DAT_113813448) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113813450) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113813458) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_3);
  return puVar1;
}



/* Entry: 104382658; end: 1043827b3; -[SCMapEffectVariant initWithMinZoomLevel:maxZoomLevel:url:forceDisplayWhenClusterTapped:onlyPlayOncePerMapSession:minClientVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104382658(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                    long param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_3;
  _swift_getObjectType();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_70 - extraout_x8;
  if (param_5 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar2,param_5);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_5 == 0,1);
  *(undefined8 *)(param_3 + _DAT_1130727d0) = param_1;
  *(undefined8 *)(param_3 + _DAT_1130727d8) = param_2;
  func_0x000100029394(lVar2,param_3 + _DAT_113813440);
  *(undefined1 *)(param_3 + _DAT_113813448) = param_6;
  *(undefined1 *)(param_3 + _DAT_113813450) = param_7;
  *(undefined8 *)(param_3 + _DAT_113813458) = param_8;
  plVar4 = &lStack_70;
  lStack_70 = param_3;
  lStack_68 = lVar1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001000293e4(lVar2);
  return plVar4;
}



/* Entry: 1043827b4; end: 10438288f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043827b4(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130727d0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130727d8) = param_1[1];
  lVar1 = 0;
  FUN_10437e26c();
  func_0x000100029394((long)param_1 + (long)*(int *)(lVar1 + 0x18),unaff_x20 + _DAT_113813440);
  *(undefined1 *)(unaff_x20 + _DAT_113813448) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x1c));
  *(undefined1 *)(unaff_x20 + _DAT_113813450) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x20));
  *(undefined8 *)(unaff_x20 + _DAT_113813458) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x24));
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  FUN_104382890(param_1);
  return puVar2;
}



/* Entry: 104382890; end: 1043828cb;  */

undefined8 FUN_104382890(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10437e26c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1043828cc; end: 1043828cf; -[SCMapEffectVariant copyWithZone:] */

void FUN_1043828cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043828d0; end: 104382917; -[SCMapEffectVariant description] */

void FUN_1043828d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104382918();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104382918; end: 1043829f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104382918(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = 0;
  FUN_10437e26c();
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130727d8);
  *puVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130727d0);
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar1) = uVar5;
  func_0x000100029394(unaff_x20 + _DAT_113813440,
                      (undefined1 *)((long)puVar4 + (long)*(int *)(lVar3 + 0x18)));
  *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar2 + 0x1c)) =
       *(undefined1 *)(unaff_x20 + _DAT_113813448);
  *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar2 + 0x20)) =
       *(undefined1 *)(unaff_x20 + _DAT_113813450);
  *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar2 + 0x24)) =
       *(undefined8 *)(unaff_x20 + _DAT_113813458);
  FUN_104382890(puVar4);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1043829f4; end: 104382a6f; -[SCMapEffectVariant init] */

void FUN_1043829f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapEffectVariantWrapper.swift",0x33,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104382a3c);
  (*pcVar1)();
}



/* Entry: 104382a70; end: 104382a87; -[SCMapEffectVariant .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104382a70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_113813440;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104382a88; end: 104382abf;  */

void FUN_104382a88(undefined8 param_1)

{
  if (lRam0000000113072808 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ffa48);
  return;
}



/* Entry: 104382ac0; end: 104382b47;  */

void FUN_104382ac0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar2 = 0x13f;
  puStack_50 = puVar1;
  puStack_48 = puVar1;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar2 + -8) + 0x40;
    puStack_38 = &UNK_10dcf1d98;
    puStack_30 = &UNK_10dcf1d98;
    puStack_28 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 104382b48; end: 104382bef; -[SCMapEffect variants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104382b48(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113072818);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104382a88(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104382bf0; end: 104382c5f; -[SCMapEffect initWithVariants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104382bf0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  if (param_3 != 0) {
    FUN_104382a88();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,lVar2);
    lVar2 = param_3;
  }
  *(long *)(param_1 + _DAT_113072818) = lVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104382c60; end: 104382c8f;  */

void FUN_104382c60(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104382c90(param_1);
  return;
}



/* Entry: 104382c90; end: 104382ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104382c90(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long alStack_a0 [2];
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_10437e26c();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)alStack_a0 + lVar2);
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 == 0) {
      _swift_bridgeObjectRelease(param_1);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_104382f80(0,lVar10,0);
      lVar11 = param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
      lVar8 = *(long *)(lVar8 + 0x48);
      alStack_a0[0] = param_1;
      do {
        puVar7 = puStack_78;
        FUN_104382fb4(lVar11,puVar9);
        lVar4 = 0;
        FUN_104382a88();
        lVar5 = lVar4;
        _objc_allocWithZone();
        *(undefined8 *)(lVar5 + _DAT_1130727d0) = *puVar9;
        *(undefined8 *)(lVar5 + _DAT_1130727d8) = *(undefined8 *)((long)alStack_a0 + lVar2 + 8);
        func_0x000100029394((long)puVar9 + (long)*(int *)(lVar3 + 0x18),lVar5 + _DAT_113813440);
        *(undefined1 *)(lVar5 + _DAT_113813448) =
             *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar3 + 0x1c));
        *(undefined1 *)(lVar5 + _DAT_113813450) =
             *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar3 + 0x20));
        *(undefined8 *)(lVar5 + _DAT_113813458) =
             *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar3 + 0x24));
        plVar6 = &lStack_88;
        lStack_88 = lVar5;
        lStack_80 = lVar4;
        _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
        FUN_104382890(puVar9);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        puStack_78 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          FUN_104382f80(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar7 = puStack_78;
        *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
        *(long **)(puStack_78 + uVar1 * 8 + 0x20) = plVar6;
        lVar11 = lVar11 + lVar8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      _swift_bridgeObjectRelease(alStack_a0[0]);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113072818) = puVar7;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104382ec8; end: 104382ecb; -[SCMapEffect copyWithZone:] */

void FUN_104382ec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104382ecc; end: 104382ef3; -[SCMapEffect description] */

void FUN_104382ecc(void)

{
  _objc_retain();
  FUN_1043834f4();
  _swift_bridgeObjectRelease();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104382ef4; end: 104382f6f; -[SCMapEffect init] */

void FUN_104382ef4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCMapStatusServices/SCMapEffectWrapper.swift"
             ,0x2c,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104382f3c);
  (*pcVar1)();
}



/* Entry: 104382f70; end: 104382f7f; -[SCMapEffect .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104382f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113072818));
  return;
}



/* Entry: 104382f80; end: 104382fb3;  */

void FUN_104382f80(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1043830b0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 104382fb4; end: 104382ff7;  */

undefined8 FUN_104382fb4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10437e26c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104382ff8; end: 1043830af;  */

void FUN_104382ff8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001043831ec();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1043830b0; end: 104383363;  */

code * FUN_1043830b0(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043831ec);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    func_0x000104383488(param_5,param_6,param_7);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Entry: 104383364; end: 1043834f3;  */

undefined * FUN_104383364(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104383488);
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
    puVar3 = (undefined *)0x113072850;
    func_0x0001000285a8(0x113072850,&UNK_10dcf1dd0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_110761188);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1043834f4; end: 104383833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1043834f4(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  FUN_10437e26c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)&lStack_70 + lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined8 *)((long)puVar10 - extraout_x12);
  uVar12 = *(ulong *)(param_1 + _DAT_113072818);
  if (uVar12 == 0) {
    _objc_release(param_1);
    puVar6 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar12;
      if (-1 < (long)uVar12) {
        uVar7 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar7 == 0) {
      _objc_release(param_1);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_104382ff8(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104383834);
        (*pcVar2)();
      }
      puVar6 = puStack_68;
      lStack_70 = param_1;
      if ((uVar12 & 0xc000000000000001) == 0) {
        plVar5 = (long *)(uVar12 + 0x20);
        do {
          lVar9 = *plVar5;
          *puVar10 = *(undefined8 *)(lVar9 + _DAT_1130727d0);
          *(undefined8 *)((long)&puStack_68 + lVar1) = *(undefined8 *)(lVar9 + _DAT_1130727d8);
          func_0x000100029394(lVar9 + _DAT_113813440,(long)puVar10 + (long)*(int *)(lVar3 + 0x18));
          *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar3 + 0x1c)) =
               *(undefined1 *)(lVar9 + _DAT_113813448);
          *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar3 + 0x20)) =
               *(undefined1 *)(lVar9 + _DAT_113813450);
          *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar3 + 0x24)) =
               *(undefined8 *)(lVar9 + _DAT_113813458);
          uVar12 = *(ulong *)(puVar6 + 0x10);
          puStack_68 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
            FUN_104382ff8(1 < *(ulong *)(puVar6 + 0x18),uVar12 + 1,1);
          }
          puVar6 = puStack_68;
          *(ulong *)(puStack_68 + 0x10) = uVar12 + 1;
          FUN_104383854(puVar10,puStack_68 +
                                *(long *)(lVar13 + 0x48) * uVar12 +
                                ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)));
          uVar7 = uVar7 - 1;
          plVar5 = plVar5 + 1;
        } while (uVar7 != 0);
      }
      else {
        uVar11 = 0;
        do {
          uVar4 = uVar11;
          func_0x0001026c60c4(uVar11,uVar12);
          *puVar8 = *(undefined8 *)(uVar4 + _DAT_1130727d0);
          puVar8[1] = *(undefined8 *)(uVar4 + _DAT_1130727d8);
          func_0x000100029394(uVar4 + _DAT_113813440,(long)puVar8 + (long)*(int *)(lVar3 + 0x18));
          *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar3 + 0x1c)) =
               *(undefined1 *)(uVar4 + _DAT_113813448);
          *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar3 + 0x20)) =
               *(undefined1 *)(uVar4 + _DAT_113813450);
          uVar14 = *(undefined8 *)(uVar4 + _DAT_113813458);
          _swift_unknownObjectRelease(uVar4);
          *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar3 + 0x24)) = uVar14;
          uVar4 = *(ulong *)(puVar6 + 0x10);
          puStack_68 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
            FUN_104382ff8(1 < *(ulong *)(puVar6 + 0x18),uVar4 + 1,1);
          }
          puVar6 = puStack_68;
          uVar11 = uVar11 + 1;
          *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
          FUN_104383854(puVar8,puStack_68 +
                               *(long *)(lVar13 + 0x48) * uVar4 +
                               ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)));
        } while (uVar7 != uVar11);
      }
      _objc_release(lStack_70);
    }
  }
  return puVar6;
}



/* Entry: 104383834; end: 104383853;  */

void FUN_104383834(void)

{
  _objc_opt_self(&PTR_PTR_1129a4748);
  return;
}



/* Entry: 104383854; end: 1043838c7;  */

undefined8 FUN_104383854(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10437e26c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1043838c8; end: 1043838d3; -[SCMapBitmojiSticker nonClusteredStickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043838c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072870);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072870))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043838d4; end: 1043838df; -[SCMapBitmojiSticker clusteredFacingLeftStickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043838d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072878);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072878))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043838e0; end: 1043838eb; -[SCMapBitmojiSticker clusteredFacingRightStickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043838e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072880);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072880))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043838ec; end: 104383933;  */

void FUN_1043838ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104383934; end: 104383943; -[SCMapBitmojiSticker shadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104383934(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072888);
}



/* Entry: 104383944; end: 10438399f; -[SCMapBitmojiSticker dynamicElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104383944(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113072890);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10438a4ec(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043839a0; end: 1043839af; -[SCMapBitmojiSticker opacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043839a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072898);
}



/* Entry: 1043839b0; end: 1043839bf; -[SCMapBitmojiSticker isMotion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043839b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130728a0);
}



/* Entry: 1043839c0; end: 104383aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043839c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072870);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072878);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072880);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113072888) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113072890) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113072898) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_1130728a0) = param_10;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104383aac; end: 104383bdb; -[SCMapBitmojiSticker initWithNonClusteredStickerId:clusteredFacingLeftStickerId:clusteredFacingRightStickerId:shadow:dynamicElements:opacity:isMotion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104383aac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,long param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_80;
  long lStack_78;
  
  lVar2 = param_2;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = uVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar3 = 0;
  if (param_8 != 0) {
    FUN_10438a4ec();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_8,lVar3);
    lVar3 = param_8;
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_113072870);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(param_2 + _DAT_113072878);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_2 + _DAT_113072880);
  *puVar1 = param_6;
  puVar1[1] = uVar5;
  *(undefined1 *)(param_2 + _DAT_113072888) = param_7;
  *(long *)(param_2 + _DAT_113072890) = lVar3;
  *(undefined8 *)(param_2 + _DAT_113072898) = param_1;
  *(undefined1 *)(param_2 + _DAT_1130728a0) = param_9;
  lStack_80 = param_2;
  lStack_78 = lVar2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104383bdc; end: 104383cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104383bdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072870);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072878);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072880);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_113072888) = *(undefined1 *)(param_1 + 6);
  uStack_68 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_113072890) = uStack_68;
  *(undefined8 *)(unaff_x20 + _DAT_113072898) = param_1[8];
  func_0x000100402194(&uStack_40,auStack_78);
  func_0x000100402194(&uStack_50,auStack_78);
  func_0x000100402194(&uStack_60,auStack_78);
  FUN_104383ea8(&uStack_68,auStack_78);
  FUN_10437d3c4(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_1130728a0) = *(undefined1 *)(param_1 + 9);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104383cd8; end: 104383cdb; -[SCMapBitmojiSticker copyWithZone:] */

void FUN_104383cd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104383cdc; end: 104383d0f; -[SCMapBitmojiSticker description] */

void FUN_104383cdc(void)

{
  undefined1 auStack_60 [80];
  
  FUN_104383df0(auStack_60);
  FUN_10437d3c4(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104383d10; end: 104383d8b; -[SCMapBitmojiSticker init] */

void FUN_104383d10(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapBitmojiStickerWrapper.swift",0x34,2,0x44,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104383d58);
  (*pcVar1)();
}



/* Entry: 104383d8c; end: 104383def; -[SCMapBitmojiSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104383d8c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072870 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072878 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072880 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113072890));
  return;
}



/* Entry: 104383df0; end: 104383ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104383df0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = ((undefined8 *)(param_2 + _DAT_113072870))[1];
  uVar1 = *(undefined8 *)(param_2 + _DAT_113072878);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113072878))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_113072880);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113072880))[1];
  uVar6 = *(undefined1 *)(param_2 + _DAT_113072888);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113072890);
  uVar9 = *(undefined8 *)(param_2 + _DAT_113072898);
  uVar7 = *(undefined1 *)(param_2 + _DAT_1130728a0);
  *param_1 = *(undefined8 *)(param_2 + _DAT_113072870);
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 6) = uVar6;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  *(undefined1 *)(param_1 + 9) = uVar7;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar8);
  return;
}



/* Entry: 104383ea8; end: 104383ef7;  */

undefined8 FUN_104383ea8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130728a8;
  func_0x0001000285a8(0x1130728a8,&UNK_10dcf1df0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104383ef8; end: 104383f17;  */

void FUN_104383ef8(void)

{
  _objc_opt_self(&PTR_PTR_1129a4810);
  return;
}



/* Entry: 104383f18; end: 104383f63; -[SCMapAnnouncement identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104383f18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130728d8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130728d8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104383f64; end: 104383f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104383f64(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130728d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104383f68; end: 104384027; -[SCMapAnnouncement initWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104383f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130728d8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104384028; end: 10438402b; -[SCMapAnnouncement copyWithZone:] */

void FUN_104384028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438402c; end: 104384047; -[SCMapAnnouncement description] */

void FUN_10438402c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104384048; end: 1043840c3; -[SCMapAnnouncement init] */

void FUN_104384048(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapAnnouncementWrapper.swift",0x32,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104384090);
  (*pcVar1)();
}



/* Entry: 1043840c4; end: 1043840d7; -[SCMapAnnouncement .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043840c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130728d8 + 8))
  ;
  return;
}



/* Entry: 1043840d8; end: 1043840f7;  */

void FUN_1043840d8(void)

{
  _objc_opt_self(&PTR_PTR_1129a4908);
  return;
}



/* Entry: 1043840f8; end: 1043840fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043840f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130728d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043840fc; end: 1043841a7;  */

void FUN_1043840fc(void)

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



/* Entry: 1043841a8; end: 1043841e7;  */

void FUN_1043841a8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1043841e8; end: 10438421b;  */

undefined8 FUN_1043841e8(undefined8 param_1)

{
  (*(code *)(undefined *)0x10437e94c)();
  return param_1;
}



/* Entry: 10438421c; end: 104384267; -[SCMapExploreItem description] */

void FUN_10438421c(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  _objc_retain();
  FUN_1043844c4(auStack_50);
  _objc_release(param_1);
  FUN_1043841e8(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104384268; end: 1043842af; -[SCMapExploreItem init] */

void FUN_104384268(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapExploreItemWrapper.swift",0x31,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043842b0);
  (*pcVar1)();
}



/* Entry: 1043842b0; end: 1043842b3; -[SCMapExploreItem copyWithZone:] */

void FUN_1043842b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043842b4; end: 104384327; +[SCMapExploreItem statusGroupWithStatusGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043842b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113072908) = 0;
  *(undefined8 *)(lVar2 + _DAT_113072910) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113072918) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104384328; end: 10438440b; +[SCMapExploreItem announcementWithAnnouncement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113072908) = 1;
  *(undefined8 *)(lVar2 + _DAT_113072910) = 0;
  *(undefined8 *)(lVar2 + _DAT_113072918) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438440c; end: 104384457; -[SCMapExploreItem matchStatusGroup:announcement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438440c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113072908) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_113072918) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104384438);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113072910) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104384458);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000104384450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 104384458; end: 10438448b;  */

void FUN_104384458(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10438448c; end: 1043844c3; -[SCMapExploreItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438448c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072910));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113072918));
  return;
}



/* Entry: 1043844c4; end: 10438459f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043844c4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if (*(char *)(param_2 + _DAT_113072908) == '\x01') {
    if (*(long *)(param_2 + _DAT_113072918) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10438459c);
      (*pcVar4)();
    }
    puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_113072918) + _DAT_1130728d8);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    _swift_bridgeObjectRetain(uVar3);
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = 0x80;
    uStack_68 = uVar3;
    uStack_70 = uVar2;
  }
  else {
    lVar5 = *(long *)(param_2 + _DAT_113072910);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1043845a0);
      (*pcVar4)();
    }
    _objc_retain();
    FUN_104386648(&uStack_70);
    _objc_release(lVar5);
  }
  *param_1 = uStack_70;
  param_1[1] = uStack_68;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[4] = uStack_50;
  *(undefined1 *)(param_1 + 5) = uStack_48;
  return;
}



/* Entry: 1043845a0; end: 1043845bf;  */

void FUN_1043845a0(void)

{
  _objc_opt_self(&PTR_PTR_1129a49d0);
  return;
}



/* Entry: 1043845c0; end: 104384727;  */

int FUN_1043845c0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10438463c;
        goto LAB_104384620;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104384620:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10438463c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}


