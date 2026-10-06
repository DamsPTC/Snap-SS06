/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00010000; end: 00010037;  */

void FUN_00010000(undefined8 param_1)

{
  if (iRam00034ce4 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_00029944);
  return;
}



/* Entry: 00010038; end: 0001007f;  */

void FUN_00010038(longlong param_1)

{
  undefined1 auStack_14 [4];
  
  _swift_initClassMetadata2((int)param_1,0,1,auStack_14,param_1 + iRam000353e8);
  return;
}



/* Entry: 00010080; end: 0001022b;  */

undefined1  [16] FUN_00010080(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong uVar4;
  longlong lVar5;
  int unaff_w20;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  uint uStack_60;
  uint uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined1 auStack_54 [20];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(unaff_w20 + iRam00034ce0) == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(1,0x1022c);
    (*(code *)uVar3)();
  }
  func_0x00027a00();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar6 = ZEXT48(PTR___sypN_000304dc);
  lVar5 = uVar6 + 4;
  iVar1 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                    (uVar3,PTR___ss11AnyHashableVN_00030420,lVar5,
                     PTR___ss11AnyHashableVSHsWP_00030424);
  _objc_release_x19();
  uStack_60 = __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                        (&PTR____CFConstantStringClassReference_00030eb0);
  uStack_57 = (undefined1)((ulonglong)lVar5 >> 8);
  uStack_5c = (uint)extraout_x1;
  uStack_56 = (undefined2)((ulonglong)lVar5 >> 0x10);
  uStack_58 = (undefined1)lVar5;
  FUN_000103b4(extraout_x1,lVar5);
  __ss11AnyHashableVyABxcSHRzlufC(&uStack_60,PTR___sSSN_000303d0,PTR___sSSSHsWP_000303d4);
  if (*(int *)(iVar1 + 8) == 0) {
LAB_00010170:
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    _swift_bridgeObjectRetain(iVar1);
    iVar2 = FUN_0001aa08(auStack_54);
    if ((extraout_x1_00 & 1) == 0) {
      _swift_bridgeObjectRelease(iVar1);
      goto LAB_00010170;
    }
    FUN_000104b4((ulonglong)*(uint *)(iVar1 + 0x20) + (longlong)iVar2 * 0x10,&uStack_40);
    _swift_bridgeObjectRelease(iVar1);
  }
  _swift_bridgeObjectRelease(iVar1);
  FUN_000103d0(extraout_x1,lVar5);
  FUN_000103ec(auStack_54);
  if (uStack_38._4_4_ == 0) {
    FUN_00010420(&uStack_40);
  }
  else {
    uVar6 = _swift_dynamicCast(&uStack_60,&uStack_40,uVar6 + 4,PTR___sSSN_000303d0,6);
    if ((uVar6 & 1) != 0) {
      uVar6 = (ulonglong)uStack_60;
      uVar4 = (ulonglong)uStack_5c;
      goto LAB_00010208;
    }
  }
  uVar6 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
  __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
  uVar4 = uVar6 >> 0x20;
LAB_00010208:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 0001022c; end: 000102af;  */

void FUN_0001022c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = _objc_retain_x2();
  iVar2 = _objc_retain_x19();
  func_0x000278e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00027740();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x20();
  uVar1 = *(undefined4 *)(iVar2 + iRam00034ce0);
  *(undefined4 *)(iVar2 + iRam00034ce0) = uVar3;
  _objc_release_x19();
                    /* WARNING: Could not recover jumptable at 0x00027408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_000300d8)(uVar1);
  return;
}



/* Entry: 000102b0; end: 000102d3;  */

void FUN_000102b0(void)

{
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
            (PTR___swiftEmptyArrayStorage_000304e8,PTR___sSSN_000303d0);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 000102d4; end: 0001031f;  */

void FUN_000102d4(int param_1)

{
  int iStack_28;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_1 + iRam00034ce0) = 0;
  uStack_24 = FUN_00010000(0);
  iStack_28 = param_1;
  _objc_msgSendSuper2(&iStack_28,PTR_DAT_0003464c);
  return;
}



/* Entry: 00010320; end: 0001032f;  */

void FUN_00010320(void)

{
  int unaff_w20;
  
                    /* WARNING: Could not recover jumptable at 0x00027408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_000300d8)(*(undefined4 *)(unaff_w20 + iRam00034ce0));
  return;
}



/* Entry: 00010330; end: 00010363;  */

void FUN_00010330(void)

{
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = FUN_00010000(0);
  _objc_msgSendSuper2(auStack_18,PTR_DAT_00034630);
  return;
}



/* Entry: 00010364; end: 00010373;  */

void FUN_00010364(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00027408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_000300d8)(*(undefined4 *)(param_1 + iRam00034ce0));
  return;
}



/* Entry: 00010374; end: 000103ab;  */

void FUN_00010374(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_w1;
  undefined4 *in_w8;
  
  uVar1 = FUN_00010080();
  *in_w8 = uVar1;
  in_w8[1] = extraout_w1;
  *(char *)(in_w8 + 2) = (char)param_3;
  *(char *)((int)in_w8 + 9) = (char)((uint)param_3 >> 8);
  *(short *)((int)in_w8 + 10) = (short)((uint)param_3 >> 0x10);
  return;
}



/* Entry: 000103ac; end: 000103b3;  */

void FUN_000103ac(void)

{
  if (iRam00034ce4 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_00029944);
  return;
}



/* Entry: 000103b4; end: 000103cf;  */

void FUN_000103b4(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0xff) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_00030588)(param_1);
    return;
  }
  return;
}



/* Entry: 000103d0; end: 000103eb;  */

void FUN_000103d0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0xff) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(param_1);
    return;
  }
  return;
}



/* Entry: 000103ec; end: 0001041f;  */

undefined8 FUN_000103ec(undefined8 param_1)

{
  (**(code **)(*(int *)(PTR___ss11AnyHashableVN_00030420 + -4) + 4))();
  return param_1;
}



/* Entry: 00010420; end: 00010467;  */

undefined8 FUN_00010420(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d10,&UNK_00028690);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00010468; end: 000104b3;  */

void FUN_00010468(uint *param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = _swift_getTypeByMangledNameInContext(*param_2 + (int)param_2,param_2[1],0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 000104b4; end: 000104ef;  */

int FUN_000104b4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_2 + 0xc) = iVar1;
  (*(code *)**(undefined4 **)(iVar1 + -4))(param_2,param_1);
  return param_2;
}



/* Entry: 000104f0; end: 000104f3;  */

undefined8 * FUN_000104f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 000104f4; end: 00010503;  */

void FUN_000104f4(int param_1)

{
  if (*(byte *)(param_1 + 8) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}



/* Entry: 00010504; end: 00010563;  */

undefined8 * FUN_00010504(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 00010564; end: 000105cf;  */

undefined4 * FUN_00010564(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_000103b4(uVar1,uVar3);
  uVar2 = param_1[1];
  param_1[1] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar3;
  FUN_000103d0(uVar2,uVar4);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 000105d0; end: 000105e3;  */

void FUN_000105d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 000105e4; end: 00010633;  */

undefined8 * FUN_000105e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_000103d0(*(undefined4 *)((int)param_1 + 4),uVar2);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 00010634; end: 0001067b;  */

int FUN_00010634(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[3] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0001067c; end: 000106bf;  */

void FUN_0001067c(ulonglong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((int)param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = (ulonglong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)((int)param_1 + 0xc) = 1;
    }
  }
  return;
}



/* Entry: 000106c0; end: 000106cf;  */

undefined1  [16] FUN_000106c0(void)

{
  return ZEXT816(0x3063c);
}



/* Entry: 000106d0; end: 000106df;  */

void FUN_000106d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000275e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_00030540)(param_1,&UNK_000299d0,1);
  return;
}



/* Entry: 000106e0; end: 00010877;  */

void FUN_000106e0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *in_w8;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_104 [52];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined1 uStack_6c;
  
  uVar2 = __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  uStack_98 = (undefined4)param_2;
  uStack_94 = (undefined1)param_3;
  uStack_9c = param_1;
  uStack_93 = (char)((ulonglong)param_3 >> 8);
  uStack_92 = (short)((ulonglong)param_3 >> 0x10);
  FUN_000103b4(param_2,param_3);
  uVar3 = FUN_00010890();
  auVar8 = __s7SwiftUI4TextVyACxcSyRzlufC(&uStack_9c,PTR___sSSN_000303d0);
  uVar5 = auVar8._8_8_;
  uVar4 = __s7SwiftUI4FontV4bodyACvgZ();
  uVar6 = uVar5;
  uVar7 = uVar3;
  auVar9 = __s7SwiftUI4TextV4fontyAcA4FontVSgF(uVar4,auVar8._0_8_,uVar5,uVar3,param_4);
  _swift_release(uVar4);
  FUN_000108d0(auVar8._0_8_,uVar5,uVar3);
  _swift_bridgeObjectRelease(param_4);
  uVar1 = __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  FUN_000108e8(auVar9._0_8_,auVar9._8_8_,uVar6);
  _swift_bridgeObjectRetain(uVar7);
  FUN_000108d0(auVar9._0_8_,auVar9._8_8_,uVar6);
  _swift_bridgeObjectRelease(uVar7);
  uStack_cc = 0;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  uStack_c4 = auVar9._0_4_;
  uStack_c0 = auVar9._8_4_;
  uStack_bc = (undefined4)uVar6;
  uStack_b8 = (undefined4)uVar7;
  uStack_b4 = CONCAT31(uStack_b4._1_3_,uVar1);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 1;
  uStack_98 = 0;
  uStack_94 = 1;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_6c = 1;
  uStack_d0 = uVar2;
  uStack_9c = uVar2;
  uStack_90 = uStack_c4;
  uStack_8c = uStack_c0;
  uStack_88 = uStack_bc;
  uStack_84 = uStack_b8;
  uStack_80 = uVar1;
  FUN_00010900(&uStack_d0,auStack_104);
  FUN_00010950(&uStack_9c);
  in_w8[1] = CONCAT44(uStack_c4,uStack_c8);
  *in_w8 = CONCAT44(uStack_cc,uStack_d0);
  in_w8[3] = CONCAT44(uStack_b4,uStack_b8);
  in_w8[2] = CONCAT44(uStack_bc,uStack_c0);
  in_w8[5] = uStack_a8;
  in_w8[4] = uStack_b0;
  *(undefined1 *)(in_w8 + 6) = uStack_a0;
  return;
}



/* Entry: 00010878; end: 0001087b;  */

void FUN_00010878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_000302d8
  )();
  return;
}



/* Entry: 0001087c; end: 0001087f;  */

void FUN_0001087c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_000302dc
  )();
  return;
}



/* Entry: 00010880; end: 00010883;  */

void FUN_00010880(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_000302f0)();
  return;
}



/* Entry: 00010884; end: 0001088f;  */

void FUN_00010884(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_x3;
  undefined8 *in_w8;
  undefined4 *unaff_w20;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_104 [52];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined1 uStack_6c;
  
  uVar1 = *unaff_w20;
  uVar2 = unaff_w20[1];
  uVar3 = unaff_w20[2];
  uVar5 = __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  uStack_94 = (undefined1)uVar3;
  uStack_9c = uVar1;
  uStack_98 = uVar2;
  uStack_93 = (char)((uint)uVar3 >> 8);
  uStack_92 = (short)((uint)uVar3 >> 0x10);
  FUN_000103b4(uVar2,uVar3);
  uVar6 = FUN_00010890();
  auVar11 = __s7SwiftUI4TextVyACxcSyRzlufC(&uStack_9c,PTR___sSSN_000303d0);
  uVar8 = auVar11._8_8_;
  uVar7 = __s7SwiftUI4FontV4bodyACvgZ();
  uVar9 = uVar8;
  uVar10 = uVar6;
  auVar12 = __s7SwiftUI4TextV4fontyAcA4FontVSgF(uVar7,auVar11._0_8_,uVar8,uVar6,in_x3);
  _swift_release(uVar7);
  FUN_000108d0(auVar11._0_8_,uVar8,uVar6);
  _swift_bridgeObjectRelease(in_x3);
  uVar4 = __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  FUN_000108e8(auVar12._0_8_,auVar12._8_8_,uVar9);
  _swift_bridgeObjectRetain(uVar10);
  FUN_000108d0(auVar12._0_8_,auVar12._8_8_,uVar9);
  _swift_bridgeObjectRelease(uVar10);
  uStack_cc = 0;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  uStack_c4 = auVar12._0_4_;
  uStack_c0 = auVar12._8_4_;
  uStack_bc = (undefined4)uVar9;
  uStack_b8 = (undefined4)uVar10;
  uStack_b4 = CONCAT31(uStack_b4._1_3_,uVar4);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 1;
  uStack_98 = 0;
  uStack_94 = 1;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_6c = 1;
  uStack_d0 = uVar5;
  uStack_9c = uVar5;
  uStack_90 = uStack_c4;
  uStack_8c = uStack_c0;
  uStack_88 = uStack_bc;
  uStack_84 = uStack_b8;
  uStack_80 = uVar4;
  FUN_00010900(&uStack_d0,auStack_104);
  FUN_00010950(&uStack_9c);
  in_w8[1] = CONCAT44(uStack_c4,uStack_c8);
  *in_w8 = CONCAT44(uStack_cc,uStack_d0);
  in_w8[3] = CONCAT44(uStack_b4,uStack_b8);
  in_w8[2] = CONCAT44(uStack_bc,uStack_c0);
  in_w8[5] = uStack_a8;
  in_w8[4] = uStack_b0;
  *(undefined1 *)(in_w8 + 6) = uStack_a0;
  return;
}



/* Entry: 00010890; end: 000108cf;  */

void FUN_00010890(void)

{
  if (iRam00034d18 != 0) {
    return;
  }
  iRam00034d18 = _swift_getWitnessTable(PTR___sSSSysMc_000303dc,PTR___sSSN_000303d0);
  return;
}



/* Entry: 000108d0; end: 000108e7;  */

void FUN_000108d0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  if ((param_3 >> 7 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_00030570)(param_1);
    return;
  }
  if ((param_3 & 0xff) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(param_2);
    return;
  }
  return;
}



/* Entry: 000108e8; end: 000108ff;  */

void FUN_000108e8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  if ((param_3 >> 7 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00027684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_00030574)(param_1);
    return;
  }
  if ((param_3 & 0xff) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_00030588)(param_2);
    return;
  }
  return;
}



/* Entry: 00010900; end: 0001094f;  */

undefined8 FUN_00010900(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d20,&UNK_000282b0);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00010950; end: 00010997;  */

undefined8 FUN_00010950(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d20,&UNK_000282b0);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00010998; end: 0001099b;  */

void FUN_00010998(void)

{
  undefined8 uVar1;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  if (iRam00034d24 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34d20,&UNK_000282b0);
  uStack_28 = FUN_00010a64();
  puStack_24 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_000301d0;
  iRam00034d24 = _swift_getWitnessTable
                           (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0
                            ,uVar1,&uStack_28);
  return;
}



/* Entry: 0001099c; end: 00010a13;  */

void FUN_0001099c(void)

{
  undefined8 uVar1;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  if (iRam00034d24 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34d20,&UNK_000282b0);
  uStack_28 = FUN_00010a64();
  puStack_24 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_000301d0;
  iRam00034d24 = _swift_getWitnessTable
                           (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0
                            ,uVar1,&uStack_28);
  return;
}



/* Entry: 00010a14; end: 00010a63;  */

uint FUN_00010a14(uint *param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffe;
  }
  uVar1 = _swift_getTypeByMangledNameInContextInMetadataState
                    (0xff,*param_2 + (int)param_2,param_2[1],0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffe;
}



/* Entry: 00010a64; end: 00010ab3;  */

void FUN_00010a64(void)

{
  undefined8 uVar1;
  
  if (iRam00034d28 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34d30,&UNK_000282b8);
  iRam00034d28 = _swift_getWitnessTable(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_00030350,uVar1);
  return;
}



/* Entry: 00010ab4; end: 00010ab7;  */

undefined8 * FUN_00010ab4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 00010ab8; end: 00010abb;  */

undefined8 * FUN_00010ab8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  return param_1;
}



/* Entry: 00010abc; end: 00010e8b;  */

void FUN_00010abc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 auStack_d0 [4];
  undefined1 auStack_c0 [96];
  
  iVar7 = FUN_00010468(0x34d98,&UNK_00028330);
  iVar5 = *(int *)(iVar7 + -4);
  iVar12 = *(int *)(iVar5 + 0x20);
  puVar16 = auStack_c0 + -(iVar12 + 0xfU & 0xfffffff0);
  iVar8 = FUN_00011034(0);
  iVar10 = *(int *)(iVar8 + -4);
  iVar8 = *(int *)(iVar10 + 0x20);
  iVar19 = (int)puVar16 - (iVar8 + 0xfU & 0xfffffff0);
  FUN_000113ec();
  bVar6 = *(byte *)(iVar10 + 0x28);
  uVar17 = bVar6 + 8 & (bVar6 ^ 0xffffffff);
  lVar13 = _swift_allocObject(&UNK_0003066c,uVar17 + iVar8,bVar6 | 3);
  FUN_000114a0(iVar19,lVar13 + (ulonglong)uVar17);
  uVar14 = __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(10,5,0);
  uVar9 = FUN_00011520();
  if ((uVar14 & 1) == 0) {
    __s7SwiftUI11WindowGroupV7contentACyxGxyXE_tcfC(FUN_000114e4,lVar13,&UNK_00030818);
    _swift_release(lVar13);
  }
  else {
    *(undefined4 *)(iVar19 + -8) = uVar9;
    *(int *)(iVar19 + -0x10) = (int)lVar13;
    *(undefined **)(iVar19 + -0xc) = &UNK_00030818;
    __s7SwiftUI11WindowGroupV2id5title11lazyContentACyxGSSSg_AA4TextVSgxyctcfC
              (0,0,0xff,0,0,0,0,FUN_000114e4);
  }
  iVar10 = FUN_00010468(0x34da0,&UNK_00028338);
  iVar8 = *(int *)(iVar10 + -4);
  uVar17 = *(int *)(iVar8 + 0x20) + 0xfU & 0xfffffff0;
  iVar19 = iVar19 - uVar17;
  uVar15 = FUN_00010000(0);
  __s7SwiftUI19WKNotificationSceneV10controller8categoryACyxq_Gq_m_SStcfC
            (uVar15,0x13,&UNK_0002d06c,0xd0008000,uVar15);
  iVar20 = iVar19 - uVar17;
  puVar11 = (undefined4 *)FUN_0001cdb4();
  uVar9 = *puVar11;
  uVar1 = puVar11[1];
  uVar2 = puVar11[2];
  FUN_000103b4(uVar1,uVar2);
  __s7SwiftUI19WKNotificationSceneV10controller8categoryACyxq_Gq_m_SStcfC
            (uVar15,uVar9,uVar1,uVar2,uVar15);
  iVar21 = iVar20 - (iVar12 + 0xfU & 0xfffffff0);
  pcVar3 = *(code **)(iVar5 + 8);
  (*pcVar3)(iVar21,puVar16,iVar7);
  iVar22 = iVar21 - uVar17;
  pcVar4 = *(code **)(iVar8 + 8);
  (*pcVar4)(iVar22,iVar19,iVar10);
  iVar23 = iVar22 - uVar17;
  (*pcVar4)(iVar23,iVar20,iVar10);
  iVar12 = FUN_00010468(0x34da8,&UNK_00028340);
  iVar18 = iVar23 - (*(int *)(*(int *)(iVar12 + -4) + 0x20) + 0xfU & 0xfffffff0);
  (*pcVar3)(iVar18,iVar21,iVar7);
  (*pcVar4)(iVar18 + *(int *)(iVar12 + 0x18),iVar22,iVar10);
  (*pcVar4)(iVar18 + *(int *)(iVar12 + 0x20),iVar23,iVar10);
  __s7SwiftUI11_TupleSceneVyACyxGxcfC(iVar18,iVar12);
  pcVar3 = *(code **)(iVar8 + 4);
  (*pcVar3)(iVar20,iVar10);
  (*pcVar3)(iVar19,iVar10);
  pcVar4 = *(code **)(iVar5 + 4);
  (*pcVar4)(puVar16,iVar7);
  (*pcVar3)(iVar23,iVar10);
  (*pcVar3)(iVar22,iVar10);
  (*pcVar4)(iVar21,iVar7);
  return;
}



/* Entry: 00010e8c; end: 00010f8b;  */

void FUN_00010e8c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  undefined4 *in_w8;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_00010468(0x34d40,&UNK_000282d0);
  uVar2 = __s7SwiftUI28WKApplicationDelegateAdaptorV12wrappedValuexvg();
  uVar3 = FUN_0001a6d0(0);
  uVar4 = FUN_000113ac(0x34d94,FUN_0001a6d0,&UNK_00028820);
  uVar1 = __s7SwiftUI14ObservedObjectV12wrappedValueACyxGx_tcfC(uVar2,uVar3,uVar4);
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  uVar2 = FUN_00010468(0x34db0,&UNK_00028348);
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_50,uVar2);
  uVar2 = uStack_40;
  uStack_50 = 0xa5949ff0;
  puStack_48 = &UNK_0000a400;
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_50,PTR___sSSN_000303d0);
  *in_w8 = uVar1;
  in_w8[1] = extraout_w1;
  *(undefined8 *)(in_w8 + 4) = uStack_40;
  *(undefined8 *)(in_w8 + 2) = uVar2;
  in_w8[6] = uStack_38;
  in_w8[7] = uStack_34;
  return;
}



/* Entry: 00010f8c; end: 00010f8f;  */

void FUN_00010f8c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 auStack_d0 [4];
  undefined1 auStack_c0 [96];
  
  iVar7 = FUN_00010468(0x34d98,&UNK_00028330);
  iVar5 = *(int *)(iVar7 + -4);
  iVar12 = *(int *)(iVar5 + 0x20);
  puVar16 = auStack_c0 + -(iVar12 + 0xfU & 0xfffffff0);
  iVar8 = FUN_00011034(0);
  iVar10 = *(int *)(iVar8 + -4);
  iVar8 = *(int *)(iVar10 + 0x20);
  iVar19 = (int)puVar16 - (iVar8 + 0xfU & 0xfffffff0);
  FUN_000113ec();
  bVar6 = *(byte *)(iVar10 + 0x28);
  uVar17 = bVar6 + 8 & (bVar6 ^ 0xffffffff);
  lVar13 = _swift_allocObject(&UNK_0003066c,uVar17 + iVar8,bVar6 | 3);
  FUN_000114a0(iVar19,lVar13 + (ulonglong)uVar17);
  uVar14 = __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(10,5,0);
  uVar9 = FUN_00011520();
  if ((uVar14 & 1) == 0) {
    __s7SwiftUI11WindowGroupV7contentACyxGxyXE_tcfC(FUN_000114e4,lVar13,&UNK_00030818);
    _swift_release(lVar13);
  }
  else {
    *(undefined4 *)(iVar19 + -8) = uVar9;
    *(int *)(iVar19 + -0x10) = (int)lVar13;
    *(undefined **)(iVar19 + -0xc) = &UNK_00030818;
    __s7SwiftUI11WindowGroupV2id5title11lazyContentACyxGSSSg_AA4TextVSgxyctcfC
              (0,0,0xff,0,0,0,0,FUN_000114e4);
  }
  iVar10 = FUN_00010468(0x34da0,&UNK_00028338);
  iVar8 = *(int *)(iVar10 + -4);
  uVar17 = *(int *)(iVar8 + 0x20) + 0xfU & 0xfffffff0;
  iVar19 = iVar19 - uVar17;
  uVar15 = FUN_00010000(0);
  __s7SwiftUI19WKNotificationSceneV10controller8categoryACyxq_Gq_m_SStcfC
            (uVar15,0x13,&UNK_0002d06c,0xd0008000,uVar15);
  iVar20 = iVar19 - uVar17;
  puVar11 = (undefined4 *)FUN_0001cdb4();
  uVar9 = *puVar11;
  uVar1 = puVar11[1];
  uVar2 = puVar11[2];
  FUN_000103b4(uVar1,uVar2);
  __s7SwiftUI19WKNotificationSceneV10controller8categoryACyxq_Gq_m_SStcfC
            (uVar15,uVar9,uVar1,uVar2,uVar15);
  iVar21 = iVar20 - (iVar12 + 0xfU & 0xfffffff0);
  pcVar3 = *(code **)(iVar5 + 8);
  (*pcVar3)(iVar21,puVar16,iVar7);
  iVar22 = iVar21 - uVar17;
  pcVar4 = *(code **)(iVar8 + 8);
  (*pcVar4)(iVar22,iVar19,iVar10);
  iVar23 = iVar22 - uVar17;
  (*pcVar4)(iVar23,iVar20,iVar10);
  iVar12 = FUN_00010468(0x34da8,&UNK_00028340);
  iVar18 = iVar23 - (*(int *)(*(int *)(iVar12 + -4) + 0x20) + 0xfU & 0xfffffff0);
  (*pcVar3)(iVar18,iVar21,iVar7);
  (*pcVar4)(iVar18 + *(int *)(iVar12 + 0x18),iVar22,iVar10);
  (*pcVar4)(iVar18 + *(int *)(iVar12 + 0x20),iVar23,iVar10);
  __s7SwiftUI11_TupleSceneVyACyxGxcfC(iVar18,iVar12);
  pcVar3 = *(code **)(iVar8 + 4);
  (*pcVar3)(iVar20,iVar10);
  (*pcVar3)(iVar19,iVar10);
  pcVar4 = *(code **)(iVar5 + 4);
  (*pcVar4)(puVar16,iVar7);
  (*pcVar3)(iVar23,iVar10);
  (*pcVar3)(iVar22,iVar10);
  (*pcVar4)(iVar21,iVar7);
  return;
}



/* Entry: 00010f90; end: 00010fe3;  */

void FUN_00010f90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0001a6d0(0);
  uVar2 = FUN_000113ac(0x34d94,FUN_0001a6d0,&UNK_00028820);
                    /* WARNING: Could not recover jumptable at 0x00026ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI28WKApplicationDelegateAdaptorVAA7Combine16ObservableObjectRzrlEyACyxGxmcfC_00030284
  )(uVar1,uVar1,uVar2);
  return;
}



/* Entry: 00010fe4; end: 00011033;  */

undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00011034(0);
  uVar2 = FUN_000113ac(0x34d38,FUN_00011034,&UNK_000282f0);
  __s7SwiftUI3AppPAAE4mainyyFZ(uVar1,uVar2);
  return 0;
}



/* Entry: 00011034; end: 0001106b;  */

void FUN_00011034(undefined8 param_1)

{
  if (iRam00034d74 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&UNK_000299f8);
  return;
}



/* Entry: 0001106c; end: 000110b3;  */

void FUN_0001106c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
                    /* WARNING: Could not recover jumptable at 0x000110b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(iVar1 + -4))(param_1,param_2,iVar1);
  return;
}



/* Entry: 000110b4; end: 000110f3;  */

void FUN_000110b4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
                    /* WARNING: Could not recover jumptable at 0x000110f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return;
}



/* Entry: 000110f4; end: 00011143;  */

undefined8 FUN_000110f4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_1,param_2,iVar1);
  return param_1;
}



/* Entry: 00011144; end: 00011193;  */

undefined8 FUN_00011144(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
  (**(code **)(*(int *)(iVar1 + -4) + 0xc))(param_1,param_2,iVar1);
  return param_1;
}



/* Entry: 00011194; end: 000111e3;  */

undefined8 FUN_00011194(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
  (**(code **)(*(int *)(iVar1 + -4) + 0x10))(param_1,param_2,iVar1);
  return param_1;
}



/* Entry: 000111e4; end: 00011233;  */

undefined8 FUN_000111e4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
  (**(code **)(*(int *)(iVar1 + -4) + 0x14))(param_1,param_2,iVar1);
  return param_1;
}



/* Entry: 00011234; end: 0001123f;  */

void FUN_00011234(void)

{
                    /* WARNING: Could not recover jumptable at 0x000275b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_00030530)();
  return;
}



/* Entry: 00011240; end: 00011287;  */

void FUN_00011240(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
                    /* WARNING: Could not recover jumptable at 0x00011284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + -4) + 0x18))(param_1,param_2,iVar1);
  return;
}



/* Entry: 00011288; end: 00011293;  */

void FUN_00011288(void)

{
                    /* WARNING: Could not recover jumptable at 0x000276a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_00030580)();
  return;
}



/* Entry: 00011294; end: 000112df;  */

void FUN_00011294(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
                    /* WARNING: Could not recover jumptable at 0x000112dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + -4) + 0x1c))(param_1,param_2,param_2,iVar1);
  return;
}



/* Entry: 000112e0; end: 00011347;  */

/* WARNING: Removing unreachable block (ram,0x00011334) */

undefined4 FUN_000112e0(longlong param_1)

{
  int iVar1;
  int iStack_24;
  
  iVar1 = FUN_00011348(0x13f);
  iStack_24 = *(int *)(iVar1 + -4) + 0x20;
  _swift_initStructMetadata(param_1,0x100,1,&iStack_24,param_1 + 8);
  return 0;
}



/* Entry: 00011348; end: 0001139b;  */

void FUN_00011348(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_w1;
  
  if (iRam00034d7c == 0) {
    uVar2 = FUN_0001a6d0(0xff);
    iVar1 = __s7SwiftUI28WKApplicationDelegateAdaptorVMa(param_1,uVar2);
    if (extraout_w1 == 0) {
      iRam00034d7c = iVar1;
    }
  }
  return;
}



/* Entry: 0001139c; end: 000113ab;  */

void FUN_0001139c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000275e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_00030540)(param_1,&UNK_00029a20,1);
  return;
}



/* Entry: 000113ac; end: 000113eb;  */

void FUN_000113ac(int *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = (*param_2)(0xff);
    iVar1 = _swift_getWitnessTable(param_3,uVar2);
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 000113ec; end: 0001142f;  */

undefined8 FUN_000113ec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00011034(0);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00011430; end: 0001149f;  */

void FUN_00011430(void)

{
  int iVar1;
  uint uVar2;
  longlong unaff_x20;
  
  iVar1 = FUN_00011034(0);
  uVar2 = (uint)*(byte *)(*(int *)(iVar1 + -4) + 0x28);
  iVar1 = FUN_00010468(0x34d40,&UNK_000282d0);
  (**(code **)(*(int *)(iVar1 + -4) + 4))
            (unaff_x20 + (ulonglong)(uVar2 + 8 & (uVar2 ^ 0xffffffff)),iVar1);
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 000114a0; end: 000114e3;  */

undefined8 FUN_000114a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00011034(0);
  (**(code **)(*(int *)(iVar1 + -4) + 0x10))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 000114e4; end: 0001151f;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000114e4(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  undefined4 *in_w8;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_00011034(0);
  FUN_00010468(0x34d40,&UNK_000282d0);
  uVar2 = __s7SwiftUI28WKApplicationDelegateAdaptorV12wrappedValuexvg();
  uVar3 = FUN_0001a6d0(0);
  uVar4 = FUN_000113ac(0x34d94,FUN_0001a6d0,&UNK_00028820);
  uVar1 = __s7SwiftUI14ObservedObjectV12wrappedValueACyxGx_tcfC(uVar2,uVar3,uVar4);
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  uVar2 = FUN_00010468(0x34db0,&UNK_00028348);
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_50,uVar2);
  uVar2 = uStack_40;
  uStack_50 = 0xa5949ff0;
  puStack_48 = &UNK_0000a400;
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_50,PTR___sSSN_000303d0);
  *in_w8 = uVar1;
  in_w8[1] = extraout_w1;
  *(undefined8 *)(in_w8 + 4) = uStack_40;
  *(undefined8 *)(in_w8 + 2) = uVar2;
  in_w8[6] = uStack_38;
  in_w8[7] = uStack_34;
  return;
}



/* Entry: 00011520; end: 0001155f;  */

void FUN_00011520(void)

{
  if (iRam00034d9c != 0) {
    return;
  }
  iRam00034d9c = _swift_getWitnessTable(&UNK_00028628,&UNK_00030818);
  return;
}



/* Entry: 00011560; end: 00011563;  */

void FUN_00011560(void)

{
  undefined8 uVar1;
  
  if (iRam00034db4 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34db8,&UNK_00028350);
  iRam00034db4 = _swift_getWitnessTable(PTR___s7SwiftUI11_TupleSceneVyxGAA0D0AAMc_000301a0,uVar1);
  return;
}



/* Entry: 00011564; end: 000115b3;  */

void FUN_00011564(void)

{
  undefined8 uVar1;
  
  if (iRam00034db4 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34db8,&UNK_00028350);
  iRam00034db4 = _swift_getWitnessTable(PTR___s7SwiftUI11_TupleSceneVyxGAA0D0AAMc_000301a0,uVar1);
  return;
}



/* Entry: 000115b4; end: 000117c3;  */

int * FUN_000115b4(int *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar5 = *(uint *)(*(int *)(param_3 + -4) + 0x28);
  if ((uVar5 >> 0x11 & 1) == 0) {
    iVar11 = param_2[1];
    *param_1 = *param_2;
    iVar7 = param_2[2];
    FUN_000103b4(iVar11,(char)iVar7);
    param_1[1] = iVar11;
    *(char *)(param_1 + 2) = (char)iVar7;
    *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
    *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
    iVar11 = param_2[4];
    param_1[3] = param_2[3];
    iVar7 = param_2[5];
    FUN_000103b4(iVar11,(char)iVar7);
    param_1[4] = iVar11;
    *(char *)(param_1 + 5) = (char)iVar7;
    *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
    *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
    iVar11 = param_2[7];
    param_1[6] = param_2[6];
    iVar7 = param_2[8];
    FUN_000103b4(iVar11,(char)iVar7);
    param_1[7] = iVar11;
    *(char *)(param_1 + 8) = (char)iVar7;
    *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
    *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
    iVar8 = FUN_00020340(0);
    iVar7 = *(int *)(iVar8 + 0x14);
    iVar9 = __s10Foundation3URLVMa(0);
    iVar11 = *(int *)(iVar9 + -4);
    iVar10 = (**(code **)(iVar11 + 0x18))((int)param_2 + iVar7,1,iVar9);
    if (iVar10 == 0) {
      (**(code **)(iVar11 + 8))((int)param_1 + iVar7,(int)param_2 + iVar7,iVar9);
      (**(code **)(iVar11 + 0x1c))((int)param_1 + iVar7,0,1,iVar9);
    }
    else {
      iVar11 = FUN_00010468(0x34dc0,&UNK_00028360);
      _memcpy((int)param_1 + iVar7,(int)param_2 + iVar7,
              *(undefined4 *)(*(int *)(iVar11 + -4) + 0x20));
    }
    puVar2 = (undefined4 *)((int)param_1 + *(int *)(iVar8 + 0x18));
    puVar1 = (undefined4 *)((int)param_2 + *(int *)(iVar8 + 0x18));
    *puVar2 = *puVar1;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
    iVar11 = *(int *)(param_3 + 0x10);
    puVar2 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0xc));
    puVar1 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0xc));
    *puVar2 = *puVar1;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
    puVar2 = (undefined4 *)((int)param_1 + iVar11);
    puVar1 = (undefined4 *)((int)param_2 + iVar11);
    uVar4 = puVar1[1];
    *puVar2 = *puVar1;
    uVar6 = *(undefined1 *)(puVar1 + 2);
    FUN_000103b4(uVar4,uVar6);
    puVar2[1] = uVar4;
    *(undefined1 *)(puVar2 + 2) = uVar6;
    *(undefined1 *)((int)puVar2 + 9) = *(undefined1 *)((int)puVar1 + 9);
    *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)((int)puVar1 + 10);
    puVar3 = (undefined8 *)((int)param_2 + *(int *)(param_3 + 0x14));
    iVar11 = *(int *)((int)puVar3 + 4);
    *(undefined8 *)((int)param_1 + *(int *)(param_3 + 0x14)) = *puVar3;
  }
  else {
    iVar11 = *param_2;
    *param_1 = iVar11;
    uVar5 = uVar5 & 0xff;
    param_1 = (int *)(iVar11 + (uVar5 + 8 & (uVar5 ^ 0xffffffff)));
  }
  _swift_retain(iVar11);
  return param_1;
}



/* Entry: 000117c4; end: 0001187b;  */

void FUN_000117c4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_000103d0(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 8));
  FUN_000103d0(*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x14));
  FUN_000103d0(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20));
  iVar2 = FUN_00020340(0);
  iVar1 = *(int *)(iVar2 + 0x14);
  iVar3 = __s10Foundation3URLVMa(0);
  iVar2 = *(int *)(iVar3 + -4);
  iVar4 = (**(code **)(iVar2 + 0x18))(param_1 + iVar1,1,iVar3);
  if (iVar4 == 0) {
    (**(code **)(iVar2 + 4))(param_1 + iVar1,iVar3);
  }
  iVar2 = param_1 + *(int *)(param_2 + 0x10);
  FUN_000103d0(*(undefined4 *)(iVar2 + 4),*(undefined1 *)(iVar2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(*(undefined4 *)(param_1 + *(int *)(param_2 + 0x14) + 4));
  return;
}



/* Entry: 0001187c; end: 00011a63;  */

undefined4 * FUN_0001187c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_000103b4(uVar4,uVar5);
  param_1[1] = uVar4;
  *(undefined1 *)(param_1 + 2) = uVar5;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 5);
  FUN_000103b4(uVar4,uVar5);
  param_1[4] = uVar4;
  *(undefined1 *)(param_1 + 5) = uVar5;
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  uVar5 = *(undefined1 *)(param_2 + 8);
  FUN_000103b4(uVar4,uVar5);
  param_1[7] = uVar4;
  *(undefined1 *)(param_1 + 8) = uVar5;
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  iVar7 = FUN_00020340(0);
  iVar6 = *(int *)(iVar7 + 0x14);
  iVar8 = __s10Foundation3URLVMa(0);
  iVar10 = *(int *)(iVar8 + -4);
  iVar9 = (**(code **)(iVar10 + 0x18))((int)param_2 + iVar6,1,iVar8);
  if (iVar9 == 0) {
    (**(code **)(iVar10 + 8))((int)param_1 + iVar6,(int)param_2 + iVar6,iVar8);
    (**(code **)(iVar10 + 0x1c))((int)param_1 + iVar6,0,1,iVar8);
  }
  else {
    iVar10 = FUN_00010468(0x34dc0,&UNK_00028360);
    _memcpy((int)param_1 + iVar6,(int)param_2 + iVar6,*(undefined4 *)(*(int *)(iVar10 + -4) + 0x20))
    ;
  }
  puVar2 = (undefined4 *)((int)param_1 + *(int *)(iVar7 + 0x18));
  puVar1 = (undefined4 *)((int)param_2 + *(int *)(iVar7 + 0x18));
  *puVar2 = *puVar1;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
  iVar10 = *(int *)(param_3 + 0x10);
  puVar2 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0xc));
  puVar1 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0xc));
  *puVar2 = *puVar1;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
  puVar2 = (undefined4 *)((int)param_1 + iVar10);
  puVar1 = (undefined4 *)((int)param_2 + iVar10);
  uVar4 = puVar1[1];
  *puVar2 = *puVar1;
  uVar5 = *(undefined1 *)(puVar1 + 2);
  FUN_000103b4(uVar4,uVar5);
  puVar2[1] = uVar4;
  *(undefined1 *)(puVar2 + 2) = uVar5;
  *(undefined1 *)((int)puVar2 + 9) = *(undefined1 *)((int)puVar1 + 9);
  *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)((int)puVar1 + 10);
  puVar3 = (undefined8 *)((int)param_2 + *(int *)(param_3 + 0x14));
  uVar4 = *(undefined4 *)((int)puVar3 + 4);
  *(undefined8 *)((int)param_1 + *(int *)(param_3 + 0x14)) = *puVar3;
  _swift_retain(uVar4);
  return param_1;
}



/* Entry: 00011a64; end: 00011ceb;  */

undefined4 * FUN_00011a64(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  *param_1 = *param_2;
  uVar5 = param_2[1];
  uVar8 = *(undefined1 *)(param_2 + 2);
  FUN_000103b4(uVar5,uVar8);
  uVar6 = param_1[1];
  param_1[1] = uVar5;
  uVar9 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar8;
  FUN_000103d0(uVar6,uVar9);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  param_1[3] = param_2[3];
  uVar5 = param_2[4];
  uVar8 = *(undefined1 *)(param_2 + 5);
  FUN_000103b4(uVar5,uVar8);
  uVar6 = param_1[4];
  param_1[4] = uVar5;
  uVar9 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar8;
  FUN_000103d0(uVar6,uVar9);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  param_1[6] = param_2[6];
  uVar5 = param_2[7];
  uVar8 = *(undefined1 *)(param_2 + 8);
  FUN_000103b4(uVar5,uVar8);
  uVar6 = param_1[7];
  param_1[7] = uVar5;
  uVar9 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = uVar8;
  FUN_000103d0(uVar6,uVar9);
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  iVar11 = FUN_00020340(0);
  iVar10 = *(int *)(iVar11 + 0x14);
  iVar12 = __s10Foundation3URLVMa(0);
  iVar15 = *(int *)(iVar12 + -4);
  pcVar7 = *(code **)(iVar15 + 0x18);
  iVar13 = (*pcVar7)((int)param_1 + iVar10,1,iVar12);
  iVar14 = (*pcVar7)((int)param_2 + iVar10,1,iVar12);
  if (iVar13 == 0) {
    if (iVar14 == 0) {
      (**(code **)(iVar15 + 0xc))((int)param_1 + iVar10,(int)param_2 + iVar10,iVar12);
      goto LAB_00011c08;
    }
    (**(code **)(iVar15 + 4))((int)param_1 + iVar10,iVar12);
  }
  else if (iVar14 == 0) {
    (**(code **)(iVar15 + 8))((int)param_1 + iVar10,(int)param_2 + iVar10,iVar12);
    (**(code **)(iVar15 + 0x1c))((int)param_1 + iVar10,0,1,iVar12);
    goto LAB_00011c08;
  }
  iVar15 = FUN_00010468(0x34dc0,&UNK_00028360);
  _memcpy((int)param_1 + iVar10,(int)param_2 + iVar10,*(undefined4 *)(*(int *)(iVar15 + -4) + 0x20))
  ;
LAB_00011c08:
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(iVar11 + 0x18));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(iVar11 + 0x18));
  uVar5 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar5;
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0xc));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0xc));
  uVar5 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar5;
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0x10));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0x10));
  *puVar1 = *puVar2;
  uVar5 = puVar2[1];
  uVar8 = *(undefined1 *)(puVar2 + 2);
  FUN_000103b4(uVar5,uVar8);
  uVar6 = puVar1[1];
  puVar1[1] = uVar5;
  uVar9 = *(undefined1 *)(puVar1 + 2);
  *(undefined1 *)(puVar1 + 2) = uVar8;
  FUN_000103d0(uVar6,uVar9);
  *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)puVar2 + 9);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)((int)puVar2 + 10);
  puVar3 = (undefined8 *)((int)param_1 + *(int *)(param_3 + 0x14));
  puVar4 = (undefined8 *)((int)param_2 + *(int *)(param_3 + 0x14));
  uVar5 = *(undefined4 *)((int)puVar3 + 4);
  uVar6 = *(undefined4 *)((int)puVar4 + 4);
  *puVar3 = *puVar4;
  _swift_retain(uVar6);
  _swift_release(uVar5);
  return param_1;
}



/* Entry: 00011cec; end: 00011e47;  */

undefined8 * FUN_00011cec(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((int)param_1 + 0xc) = *(undefined8 *)((int)param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar6 = FUN_00020340(0);
  iVar5 = *(int *)(iVar6 + 0x14);
  iVar7 = __s10Foundation3URLVMa(0);
  iVar9 = *(int *)(iVar7 + -4);
  iVar8 = (**(code **)(iVar9 + 0x18))((int)param_2 + iVar5,1,iVar7);
  if (iVar8 == 0) {
    (**(code **)(iVar9 + 0x10))((int)param_1 + iVar5,(int)param_2 + iVar5,iVar7);
    (**(code **)(iVar9 + 0x1c))((int)param_1 + iVar5,0,1,iVar7);
  }
  else {
    iVar9 = FUN_00010468(0x34dc0,&UNK_00028360);
    _memcpy((int)param_1 + iVar5,(int)param_2 + iVar5,*(undefined4 *)(*(int *)(iVar9 + -4) + 0x20));
  }
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(iVar6 + 0x18));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(iVar6 + 0x18));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar9 = *(int *)(param_3 + 0x10);
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0xc));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0xc));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar3 = (undefined8 *)((int)param_1 + iVar9);
  puVar4 = (undefined8 *)((int)param_2 + iVar9);
  *puVar3 = *puVar4;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)((int)param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)((int)param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 00011e48; end: 0001206b;  */

undefined8 * FUN_00011e48(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar6 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  uVar7 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar6;
  FUN_000103d0(*(undefined4 *)((int)param_1 + 4),uVar7);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  uVar6 = *(undefined1 *)((int)param_2 + 0x14);
  *(undefined8 *)((int)param_1 + 0xc) = *(undefined8 *)((int)param_2 + 0xc);
  uVar7 = *(undefined1 *)((int)param_1 + 0x14);
  *(undefined1 *)((int)param_1 + 0x14) = uVar6;
  FUN_000103d0(*(undefined4 *)(param_1 + 2),uVar7);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  uVar6 = *(undefined1 *)(param_2 + 4);
  param_1[3] = param_2[3];
  uVar7 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar6;
  FUN_000103d0(*(undefined4 *)((int)param_1 + 0x1c),uVar7);
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  iVar9 = FUN_00020340(0);
  iVar8 = *(int *)(iVar9 + 0x14);
  iVar10 = __s10Foundation3URLVMa(0);
  iVar13 = *(int *)(iVar10 + -4);
  pcVar5 = *(code **)(iVar13 + 0x18);
  iVar11 = (*pcVar5)((int)param_1 + iVar8,1,iVar10);
  iVar12 = (*pcVar5)((int)param_2 + iVar8,1,iVar10);
  if (iVar11 == 0) {
    if (iVar12 == 0) {
      (**(code **)(iVar13 + 0x14))((int)param_1 + iVar8,(int)param_2 + iVar8,iVar10);
      goto LAB_00011fb0;
    }
    (**(code **)(iVar13 + 4))((int)param_1 + iVar8,iVar10);
  }
  else if (iVar12 == 0) {
    (**(code **)(iVar13 + 0x10))((int)param_1 + iVar8,(int)param_2 + iVar8,iVar10);
    (**(code **)(iVar13 + 0x1c))((int)param_1 + iVar8,0,1,iVar10);
    goto LAB_00011fb0;
  }
  iVar13 = FUN_00010468(0x34dc0,&UNK_00028360);
  _memcpy((int)param_1 + iVar8,(int)param_2 + iVar8,*(undefined4 *)(*(int *)(iVar13 + -4) + 0x20));
LAB_00011fb0:
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(iVar9 + 0x18));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(iVar9 + 0x18));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar13 = *(int *)(param_3 + 0x10);
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(param_3 + 0xc));
  puVar2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + 0xc));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar3 = (undefined8 *)((int)param_1 + iVar13);
  puVar4 = (undefined8 *)((int)param_2 + iVar13);
  uVar6 = *(undefined1 *)(puVar4 + 1);
  *puVar3 = *puVar4;
  uVar7 = *(undefined1 *)(puVar3 + 1);
  *(undefined1 *)(puVar3 + 1) = uVar6;
  FUN_000103d0(*(undefined4 *)((int)puVar3 + 4),uVar7);
  *(undefined1 *)((int)puVar3 + 9) = *(undefined1 *)((int)puVar4 + 9);
  *(undefined2 *)((int)puVar3 + 10) = *(undefined2 *)((int)puVar4 + 10);
  puVar3 = (undefined8 *)((int)param_1 + *(int *)(param_3 + 0x14));
  *puVar3 = *(undefined8 *)((int)param_2 + *(int *)(param_3 + 0x14));
  _swift_release(*(undefined4 *)((int)puVar3 + 4));
  return param_1;
}



/* Entry: 0001206c; end: 00012077;  */

void FUN_0001206c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000275b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_00030530)();
  return;
}



/* Entry: 00012078; end: 000120eb;  */

ulonglong FUN_00012078(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = FUN_00020340(0);
  if ((int)param_2 == *(int *)(*(int *)(iVar3 + -4) + 0x2c)) {
                    /* WARNING: Could not recover jumptable at 0x000120c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(int *)(iVar3 + -4) + 0x18))(param_1,param_2,iVar3);
    return uVar4;
  }
  uVar2 = *(uint *)(param_1 + *(int *)(param_3 + 0x14));
  uVar1 = 0;
  if (uVar2 < 0x1000) {
    uVar1 = uVar2 + 1;
  }
  return (ulonglong)uVar1;
}



/* Entry: 000120ec; end: 000120f7;  */

void FUN_000120ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000276a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_00030580)();
  return;
}



/* Entry: 000120f8; end: 0001216f;  */

void FUN_000120f8(int param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00020340(0);
  if (param_3 == *(int *)(*(int *)(iVar1 + -4) + 0x2c)) {
                    /* WARNING: Could not recover jumptable at 0x00012150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar1 + -4) + 0x1c))(param_1,param_2,param_2,iVar1);
    return;
  }
  *(int *)(param_1 + *(int *)(param_4 + 0x14)) = (int)param_2 + -1;
  return;
}



/* Entry: 00012170; end: 000121a7;  */

void FUN_00012170(undefined8 param_1)

{
  if (iRam00034df4 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_00029a48);
  return;
}



/* Entry: 000121a8; end: 0001222f;  */

/* WARNING: Removing unreachable block (ram,0x0001221c) */

undefined4 FUN_000121a8(longlong param_1)

{
  int iVar1;
  int iStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  
  iVar1 = FUN_00020340(0x13f);
  iStack_30 = *(int *)(iVar1 + -4) + 0x20;
  puStack_2c = &UNK_00028388;
  puStack_24 = PTR___syycWV_000304e4 + 0x20;
  puStack_28 = &UNK_00028398;
  _swift_initStructMetadata(param_1,0x100,4,&iStack_30,param_1 + 8);
  return 0;
}



/* Entry: 00012230; end: 0001223f;  */

void FUN_00012230(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000275e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_00030540)(param_1,&UNK_00029a70,1);
  return;
}



/* Entry: 00012240; end: 00012403;  */

void FUN_00012240(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 extraout_w1;
  undefined4 *puVar10;
  int iVar11;
  undefined4 auStack_c0 [8];
  undefined8 uStack_a0;
  undefined8 auStack_98 [7];
  
  iVar5 = FUN_00012170(0);
  iVar3 = *(int *)(iVar5 + -4);
  iVar5 = *(int *)(iVar3 + 0x20);
  iVar11 = (int)&uStack_a0 - (iVar5 + 0xfU & 0xfffffff0);
  iVar6 = FUN_00010468(0x34e20,&UNK_000283f8);
  puVar10 = (undefined4 *)(iVar11 - (*(int *)(*(int *)(iVar6 + -4) + 0x20) + 0xfU & 0xfffffff0));
  uVar7 = __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *puVar10 = uVar7;
  puVar10[1] = 0x41200000;
  *(undefined1 *)(puVar10 + 2) = 0;
  FUN_00010468(0x34e28,&UNK_00028400);
  FUN_00012404();
  uVar7 = __s7SwiftUI9AlignmentV7leadingACvgZ();
  puVar10[-4] = uVar7;
  puVar10[-3] = extraout_w1;
  *(undefined1 *)(puVar10 + -5) = 1;
  puVar10[-6] = 0;
  *(undefined1 *)(puVar10 + -7) = 1;
  puVar10[-8] = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (0,1,0,1,0x7f800000,0,0,1);
  puVar1 = (undefined8 *)((int)puVar10 + *(int *)(iVar6 + 0x14));
  puVar1[1] = auStack_98[1];
  *puVar1 = auStack_98[0];
  puVar1[3] = auStack_98[3];
  puVar1[2] = auStack_98[2];
  puVar1[5] = auStack_98[5];
  puVar1[4] = auStack_98[4];
  puVar1[6] = auStack_98[6];
  FUN_00013144();
  bVar4 = *(byte *)(iVar3 + 0x28);
  uVar2 = bVar4 + 8 & (bVar4 ^ 0xffffffff);
  lVar8 = _swift_allocObject(&UNK_00030698,uVar2 + iVar5,bVar4 | 3);
  FUN_0001327c(iVar11,lVar8 + (ulonglong)uVar2);
  uVar9 = FUN_00013304();
  __s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctF(1,FUN_000132c0,lVar8,iVar6,uVar9);
  _swift_release(lVar8);
  FUN_000136e4(puVar10,0x34e20,&UNK_000283f8);
  return;
}



/* Entry: 00012404; end: 000126b7;  */

void FUN_00012404(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  uint uVar8;
  undefined4 uVar9;
  longlong in_x8;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined4 uStack_d0;
  undefined1 auStack_cc [4];
  undefined4 uStack_c8;
  undefined1 auStack_c4 [4];
  undefined4 auStack_c0 [4];
  undefined8 uStack_b0;
  undefined8 auStack_a8 [9];
  
  iVar5 = FUN_00010468(0x34e40,&UNK_00028410);
  uVar8 = *(int *)(*(int *)(iVar5 + -4) + 0x20) + 0xfU & 0xfffffff0;
  iVar10 = (int)&uStack_b0 - uVar8;
  puVar11 = (undefined4 *)(iVar10 - uVar8);
  iVar6 = FUN_00010468(0x34e48,&UNK_00028418);
  uVar8 = *(int *)(*(int *)(iVar6 + -4) + 0x20) + 0xfU & 0xfffffff0;
  iVar12 = (int)puVar11 - uVar8;
  iVar13 = iVar12 - uVar8;
  FUN_000126b8(param_1);
  auVar14 = __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (0x42300000,0,0x42300000,0,auVar14._0_8_,auVar14._8_8_);
  puVar1 = (undefined8 *)(iVar13 + *(int *)(iVar6 + 0x14));
  puVar1[1] = auStack_a8[0];
  *puVar1 = uStack_b0;
  puVar1[2] = auStack_a8[1];
  uVar7 = __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  iVar6 = FUN_00012170(0);
  piVar2 = (int *)(param_1 + *(int *)(iVar6 + 0xc));
  bVar3 = (char)piVar2[1] == '\x01';
  bVar4 = *piVar2 == 0;
  uVar9 = 0x40000000;
  if (bVar3 || bVar4) {
    uVar9 = 0;
  }
  *puVar11 = uVar7;
  puVar11[1] = uVar9;
  *(undefined1 *)(puVar11 + 2) = 0;
  FUN_00010468(0x34e50,&UNK_00028420);
  FUN_00012bac(param_1);
  if (bVar3 || bVar4) {
    uVar7 = __s7SwiftUI9AlignmentV6centerACvgZ();
    uVar9 = extraout_w1_00;
  }
  else {
    uVar7 = __s7SwiftUI9AlignmentV3topACvgZ();
    uVar9 = extraout_w1;
  }
  *(undefined4 *)(iVar13 + -0x10) = uVar7;
  *(undefined4 *)(iVar13 + -0xc) = uVar9;
  *(undefined1 *)(iVar13 + -0x14) = 0;
  *(undefined4 *)(iVar13 + -0x18) = 0x7f800000;
  *(undefined1 *)(iVar13 + -0x1c) = 1;
  *(undefined4 *)(iVar13 + -0x20) = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (0,1,0,1,0,1,0,1);
  puVar1 = (undefined8 *)((int)puVar11 + *(int *)(iVar5 + 0x14));
  puVar1[1] = auStack_a8[3];
  *puVar1 = auStack_a8[2];
  puVar1[3] = auStack_a8[5];
  puVar1[2] = auStack_a8[4];
  puVar1[5] = auStack_a8[7];
  puVar1[4] = auStack_a8[6];
  puVar1[6] = auStack_a8[8];
  FUN_0001339c(iVar13,iVar12);
  FUN_00013544(puVar11,iVar10,0x34e40,&UNK_00028410);
  FUN_0001339c(iVar12);
  iVar5 = FUN_00010468(0x34e58,&UNK_00028428);
  FUN_00013544(iVar10,in_x8 + *(int *)(iVar5 + 0x18),0x34e40,&UNK_00028410);
  FUN_000135cc(puVar11,0x34e40,&UNK_00028410);
  FUN_000136e4(iVar13,0x34e48,&UNK_00028418);
  FUN_000135cc(iVar10,0x34e40,&UNK_00028410);
  FUN_000136e4(iVar12,0x34e48,&UNK_00028418);
  return;
}



/* Entry: 000126b8; end: 00012bab;  */

void FUN_000126b8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  undefined8 uStack_c0;
  undefined1 uStack_b7;
  undefined2 uStack_b6;
  undefined8 uStack_b4;
  undefined1 auStack_ac [2];
  undefined2 auStack_aa [34];
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 auStack_64 [4];
  
  iVar11 = __s7SwiftUI25CircularProgressViewStyleVMa(0);
  iVar2 = *(int *)(iVar11 + -4);
  iVar22 = (int)&uStack_c0 - (*(int *)(iVar2 + 0x20) + 0xfU & 0xfffffff0);
  iVar12 = FUN_00010468(0x34e78,&UNK_000284a8);
  iVar3 = *(int *)(iVar12 + -4);
  iVar24 = iVar22 - (*(int *)(iVar3 + 0x20) + 0xfU & 0xfffffff0);
  iVar13 = FUN_00010468(0x34e80,&UNK_000284b0);
  iVar26 = iVar24 - (*(int *)(*(int *)(iVar13 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar14 = FUN_00010468(0x34e88,&UNK_000284b8);
  puVar25 = (undefined8 *)(iVar26 - (*(int *)(*(int *)(iVar14 + -4) + 0x20) + 0xfU & 0xfffffff0));
  iVar15 = FUN_00010468(0x34dc0,&UNK_00028360);
  iVar27 = (int)puVar25 - (*(int *)(*(int *)(iVar15 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar16 = __s10Foundation3URLVMa(0);
  iVar15 = *(int *)(iVar16 + -4);
  iVar23 = iVar27 - (*(int *)(iVar15 + 0x20) + 0xfU & 0xfffffff0);
  iVar17 = FUN_00020340(0);
  FUN_00013544(param_1 + *(int *)(iVar17 + 0x14),iVar27,0x34dc0,&UNK_00028360);
  iVar17 = (**(code **)(iVar15 + 0x18))(iVar27,1,iVar16);
  if (iVar17 == 1) {
    FUN_000135cc(iVar27,0x34dc0,&UNK_00028360);
    uVar4 = *(undefined1 *)(param_1 + 0x15);
    uVar7 = *(undefined2 *)(param_1 + 0x16);
    uVar5 = *(undefined1 *)(param_1 + 0x21);
    uVar8 = *(undefined2 *)(param_1 + 0x22);
    uVar18 = *(undefined4 *)(param_1 + 0x10);
    *puVar25 = *(undefined8 *)(param_1 + 0xc);
    uVar6 = *(undefined1 *)(param_1 + 0x14);
    *(undefined1 *)(puVar25 + 1) = uVar6;
    *(undefined1 *)((int)puVar25 + 9) = uVar4;
    *(undefined2 *)((int)puVar25 + 10) = uVar7;
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined8 *)((int)puVar25 + 0xc) = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)((int)puVar25 + 0x14) = uVar4;
    *(undefined1 *)((int)puVar25 + 0x15) = uVar5;
    *(undefined2 *)((int)puVar25 + 0x16) = uVar8;
    _swift_storeEnumTagMultiPayload(puVar25,iVar14,1);
    FUN_000103b4(uVar18,uVar6);
    FUN_000103b4(uVar1,uVar4);
    uVar19 = FUN_0001360c(0x34e8c,0x34e80,&UNK_000284b0,&UNK_00028768);
    uVar20 = FUN_0001358c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (puVar25,iVar13,&UNK_000307b4,uVar19,uVar20);
  }
  else {
    (**(code **)(iVar15 + 0x10))(iVar23,iVar27,iVar16);
    uVar19 = FUN_00010468(0x34ec0,&UNK_000284c0);
    lVar21 = _swift_initStaticObject(uVar19,0x34e98);
    uVar18 = FUN_0001acc0();
    FUN_000135cc(lVar21 + 0x10,0x34ec8,&UNK_00028b50);
    uVar19 = FUN_00010468(0x34ed0,&UNK_000284d0);
    __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(auStack_64,uVar19);
    puVar10 = PTR___sSbN_000303fc;
    __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_65,PTR___sSbN_000303fc);
    __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_66,puVar10);
    (**(code **)(iVar15 + 8))(iVar26,iVar23,iVar16);
    *(undefined4 *)(iVar26 + *(int *)(iVar13 + 0x1c)) = uVar18;
    __s7SwiftUI12ProgressViewVA2A05EmptyD0VRs_rlEACyA2EGycAERszrlufC();
    __s7SwiftUI25CircularProgressViewStyleVACycfC();
    uVar19 = FUN_0001360c(0x34ed4,0x34e78,&UNK_000284a8,
                          PTR___s7SwiftUI12ProgressViewVyxq_GAA0D0AAMc_000301ac);
    uVar20 = FUN_00013650();
    __s7SwiftUI4ViewPAAE08progressC5StyleyQrqd__AA08ProgresscE0Rd__lF
              (iVar22,iVar12,iVar11,uVar19,uVar20);
    (**(code **)(iVar2 + 4))(iVar22,iVar11);
    (**(code **)(iVar3 + 4))(iVar24,iVar12);
    puVar9 = (undefined8 *)(iVar26 + *(int *)(iVar13 + 0x24));
    uVar4 = *(undefined1 *)(param_1 + 0x15);
    uVar7 = *(undefined2 *)(param_1 + 0x16);
    uVar5 = *(undefined1 *)(param_1 + 0x21);
    uVar8 = *(undefined2 *)(param_1 + 0x22);
    uVar18 = *(undefined4 *)(param_1 + 0x10);
    *puVar9 = *(undefined8 *)(param_1 + 0xc);
    uVar6 = *(undefined1 *)(param_1 + 0x14);
    *(undefined1 *)(puVar9 + 1) = uVar6;
    *(undefined1 *)((int)puVar9 + 9) = uVar4;
    *(undefined2 *)((int)puVar9 + 10) = uVar7;
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined8 *)((int)puVar9 + 0xc) = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)((int)puVar9 + 0x14) = uVar4;
    *(undefined1 *)((int)puVar9 + 0x15) = uVar5;
    *(undefined2 *)((int)puVar9 + 0x16) = uVar8;
    FUN_00013694(iVar26,puVar25);
    _swift_storeEnumTagMultiPayload(puVar25,iVar14,0);
    FUN_000103b4(uVar18,uVar6);
    FUN_000103b4(uVar1,uVar4);
    uVar19 = FUN_0001360c(0x34e8c,0x34e80,&UNK_000284b0,&UNK_00028768);
    uVar20 = FUN_0001358c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (puVar25,iVar13,&UNK_000307b4,uVar19,uVar20);
    FUN_000136e4(iVar26,0x34e80,&UNK_000284b0);
    (**(code **)(iVar15 + 4))(iVar23,iVar16);
  }
  return;
}



/* Entry: 00012bac; end: 00013133;  */

void FUN_00012bac(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int in_w8;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 auStack_b0 [14];
  undefined1 auStack_78 [24];
  
  iVar3 = __s7SwiftUI18LocalizedStringKeyV0D13InterpolationVMa(0);
  iVar13 = (int)auStack_b0 - (*(int *)(*(int *)(iVar3 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar3 = FUN_00010468(0x34e60,&UNK_00028430);
  uVar14 = *(int *)(*(int *)(iVar3 + -4) + 0x20) + 0xfU & 0xfffffff0;
  iVar15 = iVar13 - uVar14;
  puVar16 = (undefined4 *)(iVar15 - uVar14);
  FUN_000103b4(*(undefined4 *)(param_1 + 0x10));
  uVar7 = FUN_00010890();
  auVar19 = __s7SwiftUI4TextVyACxcSyRzlufC(auStack_78,PTR___sSSN_000303d0);
  uVar11 = auVar19._8_8_;
  uVar8 = __s7SwiftUI4FontV8headlineACvgZ();
  uVar17 = uVar11;
  uVar18 = uVar7;
  uVar4 = __s7SwiftUI4TextV4fontyAcA4FontVSgF(uVar8,auVar19._0_8_,uVar11,uVar7,param_4);
  _swift_release(uVar8);
  FUN_000108d0(auVar19._0_8_,uVar11,uVar7);
  _swift_bridgeObjectRelease(param_4);
  uVar7 = _swift_getKeyPath(&UNK_00028438);
  puVar2 = (undefined4 *)((int)puVar16 + *(int *)(iVar3 + 0x14));
  iVar3 = FUN_00010468(0x34e68,&UNK_00028468);
  iVar3 = *(int *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)PTR___s7SwiftUI4TextV14TruncationModeO4tailyA2EmFWC_000302b4;
  iVar5 = __s7SwiftUI4TextV14TruncationModeOMa(0);
  (**(code **)(*(int *)(iVar5 + -4) + 0x38))((int)puVar2 + iVar3,uVar6,iVar5);
  uVar6 = _swift_getKeyPath(&UNK_00028470);
  *puVar2 = uVar6;
  *puVar16 = uVar4;
  puVar16[1] = (int)extraout_x1;
  puVar16[2] = (int)uVar17;
  puVar16[3] = (int)uVar18;
  puVar16[4] = (int)uVar7;
  puVar16[5] = 2;
  *(undefined1 *)(puVar16 + 6) = 0;
  FUN_000108e8(uVar4,extraout_x1,uVar17);
  _swift_bridgeObjectRetain(uVar18);
  _swift_retain(uVar7);
  FUN_000108d0(uVar4,extraout_x1,uVar17);
  _swift_release(uVar7);
  _swift_bridgeObjectRelease(uVar18);
  iVar3 = FUN_00012170(0);
  piVar1 = (int *)(param_1 + *(int *)(iVar3 + 0xc));
  auVar19 = ZEXT816(0);
  if ((char)piVar1[1] == '\x01') {
    uVar17 = 0;
    uVar18 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    uVar17 = 0;
    uVar18 = 0;
    uVar7 = 0;
    uVar6 = 0;
    auVar19 = ZEXT816(0);
    if (*piVar1 != 0) {
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV15literalCapacity18interpolationCountAESi_SitcfC
                (0,2);
      uVar9 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
      __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV13appendLiteralyySSF
                (uVar9,uVar9 >> 0x20,
                 (ushort)((ulonglong)extraout_x1_00 >> 0x30) & 0xff00 | (int)extraout_x1_00 << 0x10)
      ;
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV06appendF0_9specifieryx_SStAA18_FormatSpecifiableRzlF
                (auStack_78,0x756c6c25,0,&UNK_0000e400,PTR___sSuN_00030410,
                 PTR___sSu7SwiftUI18_FormatSpecifiableAAWP_00030378);
      uVar9 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
      __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV13appendLiteralyySSF
                (uVar9,uVar9 >> 0x20,
                 (ushort)((ulonglong)extraout_x1_01 >> 0x30) & 0xff00 | (int)extraout_x1_01 << 0x10)
      ;
      puVar2 = (undefined4 *)(param_1 + *(int *)(iVar3 + 0x10));
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV06appendF0yySSF(*puVar2,puVar2[1],puVar2[2])
      ;
      uVar9 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
      __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(0,0,0xe000);
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV13appendLiteralyySSF
                (uVar9,uVar9 >> 0x20,
                 (ushort)((ulonglong)extraout_x1_02 >> 0x30) & 0xff00 | (int)extraout_x1_02 << 0x10)
      ;
      __s7SwiftUI18LocalizedStringKeyV19stringInterpolationA2C0dG0V_tcfC(iVar13);
      uVar11 = 0;
      uVar12 = 0xff;
      auVar19 = __s7SwiftUI4TextV_9tableName6bundle7commentAcA18LocalizedStringKeyV_SSSgSo8NSBundleCSgs06StaticI0VSgtcfC
                          (auStack_78,0,0,0xff,0,0,0,0x100);
      uVar18 = auVar19._8_8_;
      uVar17 = __s7SwiftUI4FontV11subheadlineACvgZ();
      uVar7 = uVar18;
      uVar8 = uVar11;
      auVar20 = __s7SwiftUI4TextV4fontyAcA4FontVSgF(uVar17,auVar19._0_8_,uVar18,uVar11,uVar12);
      uVar10 = auVar20._8_8_;
      _swift_release(uVar17);
      FUN_000108d0(auVar19._0_8_,uVar18,uVar11);
      _swift_bridgeObjectRelease(uVar12);
      uVar11 = __s7SwiftUI5ColorV4grayACvgZ();
      uVar17 = uVar10;
      uVar18 = uVar7;
      auVar19 = __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF
                          (uVar11,auVar20._0_8_,uVar10,uVar7,uVar8);
      _swift_release(uVar11);
      FUN_000108d0(auVar20._0_8_,uVar10,uVar7);
      _swift_bridgeObjectRelease(uVar8);
      uVar7 = _swift_getKeyPath(&UNK_00028438);
      FUN_000108e8(auVar19._0_8_,auVar19._8_8_,uVar17);
      _swift_bridgeObjectRetain(uVar18);
      _swift_retain(uVar7);
      FUN_000108d0(auVar19._0_8_,auVar19._8_8_,uVar17);
      _swift_release(uVar7);
      _swift_bridgeObjectRelease(uVar18);
      uVar6 = 1;
    }
  }
  FUN_00013544(puVar16,iVar15,0x34e60,&UNK_00028430);
  FUN_00013544(iVar15,in_w8,0x34e60,&UNK_00028430);
  iVar3 = FUN_00010468(0x34e70,&UNK_000284a0);
  puVar2 = (undefined4 *)(in_w8 + *(int *)(iVar3 + 0x18));
  *puVar2 = auVar19._0_4_;
  puVar2[1] = auVar19._8_4_;
  puVar2[2] = (int)uVar17;
  puVar2[3] = (int)uVar18;
  puVar2[4] = (int)uVar7;
  puVar2[5] = uVar6;
  *(undefined1 *)(puVar2 + 6) = 0;
  FUN_000134d4(auVar19._0_8_,auVar19._8_8_,uVar17,uVar18,uVar7,uVar6,0);
  FUN_000135cc(puVar16,0x34e60,&UNK_00028430);
  FUN_0001350c(auVar19._0_8_,auVar19._8_8_,uVar17,uVar18,uVar7,uVar6,0);
  FUN_000135cc(iVar15,0x34e60,&UNK_00028430);
  return;
}



/* Entry: 00013134; end: 00013137;  */

void FUN_00013134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_000302d8
  )();
  return;
}



/* Entry: 00013138; end: 0001313b;  */

void FUN_00013138(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_000302dc
  )();
  return;
}



/* Entry: 0001313c; end: 0001313f;  */

void FUN_0001313c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_000302f0)();
  return;
}



/* Entry: 00013140; end: 00013143;  */

void FUN_00013140(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 extraout_w1;
  undefined4 *puVar10;
  int iVar11;
  undefined4 auStack_c0 [8];
  undefined8 uStack_a0;
  undefined8 auStack_98 [7];
  
  iVar5 = FUN_00012170(0);
  iVar3 = *(int *)(iVar5 + -4);
  iVar5 = *(int *)(iVar3 + 0x20);
  iVar11 = (int)&uStack_a0 - (iVar5 + 0xfU & 0xfffffff0);
  iVar6 = FUN_00010468(0x34e20,&UNK_000283f8);
  puVar10 = (undefined4 *)(iVar11 - (*(int *)(*(int *)(iVar6 + -4) + 0x20) + 0xfU & 0xfffffff0));
  uVar7 = __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *puVar10 = uVar7;
  puVar10[1] = 0x41200000;
  *(undefined1 *)(puVar10 + 2) = 0;
  FUN_00010468(0x34e28,&UNK_00028400);
  FUN_00012404();
  uVar7 = __s7SwiftUI9AlignmentV7leadingACvgZ();
  puVar10[-4] = uVar7;
  puVar10[-3] = extraout_w1;
  *(undefined1 *)(puVar10 + -5) = 1;
  puVar10[-6] = 0;
  *(undefined1 *)(puVar10 + -7) = 1;
  puVar10[-8] = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (0,1,0,1,0x7f800000,0,0,1);
  puVar1 = (undefined8 *)((int)puVar10 + *(int *)(iVar6 + 0x14));
  puVar1[1] = auStack_98[1];
  *puVar1 = auStack_98[0];
  puVar1[3] = auStack_98[3];
  puVar1[2] = auStack_98[2];
  puVar1[5] = auStack_98[5];
  puVar1[4] = auStack_98[4];
  puVar1[6] = auStack_98[6];
  FUN_00013144();
  bVar4 = *(byte *)(iVar3 + 0x28);
  uVar2 = bVar4 + 8 & (bVar4 ^ 0xffffffff);
  lVar8 = _swift_allocObject(&UNK_00030698,uVar2 + iVar5,bVar4 | 3);
  FUN_0001327c(iVar11,lVar8 + (ulonglong)uVar2);
  uVar9 = FUN_00013304();
  __s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctF(1,FUN_000132c0,lVar8,iVar6,uVar9);
  _swift_release(lVar8);
  FUN_000136e4(puVar10,0x34e20,&UNK_000283f8);
  return;
}



/* Entry: 00013144; end: 00013187;  */

undefined8 FUN_00013144(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00012170(0);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00013188; end: 0001327b;  */

void FUN_00013188(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_w20;
  uint uVar7;
  
  iVar3 = FUN_00012170(0);
  uVar7 = (uint)*(byte *)(*(int *)(iVar3 + -4) + 0x28);
  iVar1 = unaff_w20 + (uVar7 + 8 & (uVar7 ^ 0xffffffff));
  FUN_000103d0(*(undefined4 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 8));
  FUN_000103d0(*(undefined4 *)(iVar1 + 0x10),*(undefined1 *)(iVar1 + 0x14));
  FUN_000103d0(*(undefined4 *)(iVar1 + 0x1c),*(undefined1 *)(iVar1 + 0x20));
  iVar4 = FUN_00020340(0);
  iVar2 = *(int *)(iVar4 + 0x14);
  iVar5 = __s10Foundation3URLVMa(0);
  iVar4 = *(int *)(iVar5 + -4);
  iVar6 = (**(code **)(iVar4 + 0x18))(iVar1 + iVar2,1,iVar5);
  if (iVar6 == 0) {
    (**(code **)(iVar4 + 4))(iVar1 + iVar2,iVar5);
  }
  iVar4 = iVar1 + *(int *)(iVar3 + 0x10);
  FUN_000103d0(*(undefined4 *)(iVar4 + 4),*(undefined1 *)(iVar4 + 8));
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x14) + 4));
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 0001327c; end: 000132bf;  */

undefined8 FUN_0001327c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00012170(0);
  (**(code **)(*(int *)(iVar1 + -4) + 0x10))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 000132c0; end: 00013303;  */

void FUN_000132c0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_w20;
  
  iVar1 = FUN_00012170(0);
  uVar2 = (uint)*(byte *)(*(int *)(iVar1 + -4) + 0x28);
  (**(code **)(unaff_w20 + *(int *)(iVar1 + 0x14) + (uVar2 + 8 & (uVar2 ^ 0xffffffff))))();
  return;
}



/* Entry: 00013304; end: 0001339b;  */

void FUN_00013304(void)

{
  undefined8 uVar1;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  if (iRam00034e2c != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34e20,&UNK_000283f8);
  uStack_28 = FUN_0001360c(0x34e30,0x34e38,&UNK_00028408,
                           PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_00030348);
  puStack_24 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_000301f4;
  iRam00034e2c = _swift_getWitnessTable
                           (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0
                            ,uVar1,&uStack_28);
  return;
}



/* Entry: 0001339c; end: 000133eb;  */

undefined8 FUN_0001339c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34e48,&UNK_00028418);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 000133ec; end: 00013417;  */

void FUN_000133ec(void)

{
  undefined4 uVar1;
  undefined1 extraout_w1;
  undefined4 *in_w8;
  
  uVar1 = __s7SwiftUI17EnvironmentValuesV9lineLimitSiSgvg();
  *in_w8 = uVar1;
  *(undefined1 *)(in_w8 + 1) = extraout_w1;
  return;
}



/* Entry: 00013418; end: 00013443;  */

void FUN_00013418(undefined4 *param_1)

{
  __s7SwiftUI17EnvironmentValuesV9lineLimitSiSgvs(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 00013444; end: 00013463;  */

void FUN_00013444(void)

{
  __s7SwiftUI17EnvironmentValuesV14truncationModeAA4TextV010TruncationF0Ovg();
  return;
}


