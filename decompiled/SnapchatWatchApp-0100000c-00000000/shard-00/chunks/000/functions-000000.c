/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10000c000; end: 10000c037;  */

void FUN_10000c000(undefined8 param_1)

{
  if (lRam000000010002d720 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100022dc4);
  return;
}



/* Entry: 10000c038; end: 10000c07f;  */

void FUN_10000c038(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_100021620;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + lRam000000010002e190);
  return;
}



/* Entry: 10000c080; end: 10000c1cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10000c080(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = *(undefined **)(unaff_x20 + _DAT_10002d718);
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10000c1d0);
    (*pcVar2)();
  }
  func_0x000100020e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___sypN_1000289c0;
  puVar7 = PTR___ss11AnyHashableVN_100028858;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release_x19();
  ppuVar4 = &PTR____CFConstantStringClassReference_100029d10;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuStack_50 = ppuVar4;
  puStack_48 = puVar7;
  _swift_bridgeObjectRetain(puVar7);
  puVar8 = PTR___sSSN_1000287b8;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_78,&ppuStack_50,PTR___sSSN_1000287b8,PTR___sSSSHsWP_1000287c0);
  if (*(long *)(puVar3 + 0x10) == 0) {
LAB_10000c158:
    puStack_48 = (undefined *)0x0;
    ppuStack_50 = (undefined **)0x0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar3);
    puVar5 = auStack_78;
    FUN_100016190(puVar5);
    if (((ulong)puVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar3);
      goto LAB_10000c158;
    }
    FUN_10000c410(*(long *)(puVar3 + 0x38) + (long)puVar5 * 0x20,&ppuStack_50);
    _swift_bridgeObjectRelease(puVar7);
    puVar7 = puVar3;
  }
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(puVar3);
  FUN_10000c344(auStack_78);
  if (lStack_38 == 0) {
    FUN_10000c378(&ppuStack_50);
  }
  else {
    puVar6 = &uStack_88;
    _swift_dynamicCast(puVar6,&ppuStack_50,puVar1 + 8,PTR___sSSN_1000287b8,6);
    if (((ulong)puVar6 & 1) != 0) goto LAB_10000c1b8;
  }
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
LAB_10000c1b8:
  auVar9._8_8_ = uStack_80;
  auVar9._0_8_ = uStack_88;
  return auVar9;
}



/* Entry: 10000c1d0; end: 10000c253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000c1d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain_x2();
  lVar1 = param_1;
  _objc_retain_x19();
  func_0x000100020d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100020b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x20();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_10002d718);
  *(long *)(lVar1 + _DAT_10002d718) = param_1;
  _objc_release_x19();
                    /* WARNING: Could not recover jumptable at 0x00010002082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000281c0)(uVar2);
  return;
}



/* Entry: 10000c254; end: 10000c277;  */

void FUN_10000c254(void)

{
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
            (PTR___swiftEmptyArrayStorage_1000289d8,PTR___sSSN_1000287b8);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 10000c278; end: 10000c2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000c278(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + _DAT_10002d718) = 0;
  uVar1 = 0;
  FUN_10000c000();
  lStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_10002cb80);
  return;
}



/* Entry: 10000c2c4; end: 10000c2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000c2c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010002082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000281c0)(*(undefined8 *)(unaff_x20 + _DAT_10002d718));
  return;
}



/* Entry: 10000c2d4; end: 10000c307;  */

void FUN_10000c2d4(void)

{
  FUN_10000c000();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002cb48);
  return;
}



/* Entry: 10000c308; end: 10000c317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000c308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000281c0)(*(undefined8 *)(param_1 + _DAT_10002d718));
  return;
}



/* Entry: 10000c318; end: 10000c33b;  */

void FUN_10000c318(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10000c080();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 10000c33c; end: 10000c343;  */

void FUN_10000c33c(void)

{
  if (lRam000000010002d720 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_100022dc4);
  return;
}



/* Entry: 10000c344; end: 10000c377;  */

undefined8 FUN_10000c344(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___ss11AnyHashableVN_100028858 + -8) + 8))();
  return param_1;
}



/* Entry: 10000c378; end: 10000c3bf;  */

undefined8 FUN_10000c378(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x10002d770;
  FUN_10000c3c0(0x10002d770,&UNK_100021650);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10000c3c0; end: 10000c40f;  */

void FUN_10000c3c0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 10000c410; end: 10000c44b;  */

long FUN_10000c410(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10000c44c; end: 10000c477;  */

undefined8 * FUN_10000c44c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10000c478; end: 10000c47f;  */

void FUN_10000c478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10000c480; end: 10000c4bf;  */

undefined8 * FUN_10000c480(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10000c4c0; end: 10000c4cb;  */

void FUN_10000c4c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 10000c4cc; end: 10000c4fb;  */

undefined8 * FUN_10000c4cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10000c4fc; end: 10000c543;  */

int FUN_10000c4fc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10000c544; end: 10000c57f;  */

void FUN_10000c544(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 10000c580; end: 10000c58f;  */

undefined1  [16] FUN_10000c580(void)

{
  return ZEXT816(0x100028c70);
}



/* Entry: 10000c590; end: 10000c59f;  */

void FUN_10000c590(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_100028a88)(param_1,&UNK_100022e50,1);
  return;
}



/* Entry: 10000c5a0; end: 10000c707;  */

void FUN_10000c5a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_1a0 [104];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar1 = param_2;
  __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  uVar2 = uVar1;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  FUN_10000c71c();
  _swift_bridgeObjectRetain(param_3);
  puVar3 = &uStack_d0;
  puVar6 = PTR___sSSN_1000287b8;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  puVar4 = puVar3;
  __s7SwiftUI4FontV4bodyACvgZ();
  puVar5 = puVar4;
  puVar7 = puVar3;
  puVar8 = puVar6;
  uVar9 = uVar2;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(puVar4);
  FUN_10000c75c(puVar3,puVar6,uVar2);
  uStack_100 = param_5;
  _swift_bridgeObjectRelease();
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_130 = 0;
  uStack_128 = 1;
  uStack_110 = SUB81(puVar8,0);
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 1;
  uStack_c8 = 0;
  uStack_c0 = 1;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 1;
  uStack_138 = uVar1;
  puStack_120 = puVar5;
  puStack_118 = puVar7;
  uStack_108 = uVar9;
  uStack_d0 = uVar1;
  puStack_b8 = puVar5;
  puStack_b0 = puVar7;
  uStack_a8 = uStack_110;
  uStack_a0 = uVar9;
  uStack_98 = uStack_100;
  FUN_10000c774(&uStack_138,auStack_1a0);
  FUN_10000c7c4(&uStack_d0);
  param_1[9] = uStack_f0;
  param_1[8] = uStack_f8;
  param_1[0xb] = uStack_e0;
  param_1[10] = uStack_e8;
  *(undefined1 *)(param_1 + 0xc) = uStack_d8;
  param_1[1] = uStack_130;
  *param_1 = uStack_138;
  param_1[3] = puStack_120;
  param_1[2] = CONCAT71(uStack_127,uStack_128);
  param_1[5] = CONCAT71(uStack_10f,uStack_110);
  param_1[4] = puStack_118;
  param_1[7] = CONCAT71(uStack_ff,uStack_100);
  param_1[6] = uStack_108;
  return;
}



/* Entry: 10000c708; end: 10000c70b;  */

void FUN_10000c708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000285c8
  )();
  return;
}



/* Entry: 10000c70c; end: 10000c70f;  */

void FUN_10000c70c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_1000285d0
  )();
  return;
}



/* Entry: 10000c710; end: 10000c713;  */

void FUN_10000c710(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000203ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000285f8)();
  return;
}



/* Entry: 10000c714; end: 10000c71b;  */

void FUN_10000c714(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 in_w3;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined1 auStack_1a0 [104];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar10 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar2 = uVar10;
  __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  uVar3 = uVar2;
  uStack_d0 = uVar10;
  uStack_c8 = uVar1;
  FUN_10000c71c();
  _swift_bridgeObjectRetain(uVar1);
  puVar4 = &uStack_d0;
  puVar7 = PTR___sSSN_1000287b8;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  puVar5 = puVar4;
  __s7SwiftUI4FontV4bodyACvgZ();
  puVar6 = puVar5;
  puVar8 = puVar4;
  puVar9 = puVar7;
  uVar10 = uVar3;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(puVar5);
  FUN_10000c75c(puVar4,puVar7,uVar3);
  uStack_100 = in_w3;
  _swift_bridgeObjectRelease();
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_130 = 0;
  uStack_128 = 1;
  uStack_110 = SUB81(puVar9,0);
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 1;
  uStack_c8 = 0;
  uStack_c0 = 1;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 1;
  uStack_138 = uVar2;
  puStack_120 = puVar6;
  puStack_118 = puVar8;
  uStack_108 = uVar10;
  uStack_d0 = uVar2;
  puStack_b8 = puVar6;
  puStack_b0 = puVar8;
  uStack_a8 = uStack_110;
  uStack_a0 = uVar10;
  uStack_98 = uStack_100;
  FUN_10000c774(&uStack_138,auStack_1a0);
  FUN_10000c7c4(&uStack_d0);
  param_1[9] = uStack_f0;
  param_1[8] = uStack_f8;
  param_1[0xb] = uStack_e0;
  param_1[10] = uStack_e8;
  *(undefined1 *)(param_1 + 0xc) = uStack_d8;
  param_1[1] = uStack_130;
  *param_1 = uStack_138;
  param_1[3] = puStack_120;
  param_1[2] = CONCAT71(uStack_127,uStack_128);
  param_1[5] = CONCAT71(uStack_10f,uStack_110);
  param_1[4] = puStack_118;
  param_1[7] = CONCAT71(uStack_ff,uStack_100);
  param_1[6] = uStack_108;
  return;
}



/* Entry: 10000c71c; end: 10000c75b;  */

void FUN_10000c71c(void)

{
  undefined *puVar1;
  
  if (puRam000000010002d778 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSSSysMc_1000287d0;
  _swift_getWitnessTable(PTR___sSSSysMc_1000287d0,PTR___sSSN_1000287b8);
  puRam000000010002d778 = puVar1;
  return;
}



/* Entry: 10000c75c; end: 10000c773;  */

void FUN_10000c75c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100028ae0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(param_2);
  return;
}



/* Entry: 10000c774; end: 10000c7c3;  */

undefined8 FUN_10000c774(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d780;
  FUN_10000c3c0(0x10002d780,&UNK_1000216d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000c7c4; end: 10000c80b;  */

undefined8 FUN_10000c7c4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x10002d780;
  FUN_10000c3c0(0x10002d780,&UNK_1000216d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10000c80c; end: 10000c80f;  */

void FUN_10000c80c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam000000010002d788 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002d780;
  FUN_10000c888(0x10002d780,&UNK_1000216d0);
  uVar2 = uVar1;
  FUN_10000c8dc();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000283b8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar1,
             &uStack_30);
  puRam000000010002d788 = puVar3;
  return;
}



/* Entry: 10000c810; end: 10000c887;  */

void FUN_10000c810(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam000000010002d788 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002d780;
  FUN_10000c888(0x10002d780,&UNK_1000216d0);
  uVar2 = uVar1;
  FUN_10000c8dc();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000283b8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar1,
             &uStack_30);
  puRam000000010002d788 = puVar3;
  return;
}



/* Entry: 10000c888; end: 10000c8db;  */

ulong FUN_10000c888(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState
            (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Entry: 10000c8dc; end: 10000c92b;  */

void FUN_10000c8dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002d790 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002d798;
  FUN_10000c888(0x10002d798,&UNK_1000216d8);
  puVar2 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000286b8;
  _swift_getWitnessTable(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000286b8,uVar1);
  puRam000000010002d790 = puVar2;
  return;
}



/* Entry: 10000c92c; end: 10000c92f;  */

undefined8 * FUN_10000c92c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10000c930; end: 10000c933;  */

undefined8 * FUN_10000c930(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10000c934; end: 10000cd5b;  */

void FUN_10000c934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  long extraout_x8_00;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong auStack_d0 [2];
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x10002d850;
  uStack_88 = param_1;
  FUN_10000c3c0(0x10002d850,&UNK_100021750);
  lStack_68 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lStack_68 + 0x40);
  lStack_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_100028280)(lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&pcStack_c0 - extraout_x8;
  lVar3 = 0;
  FUN_10000cf00();
  lVar3 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar3 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar14 = lVar7 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  FUN_10000d2b8();
  uVar8 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &UNK_100028cd0;
  _swift_allocObject(&UNK_100028cd0,uVar9 + lVar12,uVar8 | 7);
  FUN_10000d36c(lVar14,puVar4 + uVar9);
  uVar9 = 10;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(10,5,0);
  uVar8 = uVar9;
  FUN_10000d3ec();
  if ((uVar9 & 1) == 0) {
    __s7SwiftUI11WindowGroupV7contentACyxGxyXE_tcfC(lVar7,FUN_10000d3b0,puVar4,&UNK_100029000);
    _swift_release(puVar4);
  }
  else {
    *(undefined **)(lVar14 + -0x10) = &UNK_100029000;
    *(ulong *)(lVar14 + -8) = uVar8;
    __s7SwiftUI11WindowGroupV2id5title11lazyContentACyxGSSSg_AA4TextVSgxyctcfC
              (lVar7,0,0,0,0,0,0,FUN_10000d3b0,puVar4);
  }
  lVar3 = 0x10002d860;
  FUN_10000c3c0(0x10002d860,&UNK_100021758);
  lStack_70 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lStack_70 + 0x40);
  lStack_90 = lVar14;
  (*(code *)PTR____chkstk_darwin_100028280)();
  uVar8 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uVar8;
  puVar5 = (undefined8 *)0x0;
  lStack_78 = lVar14;
  FUN_10000c000();
  puVar6 = puVar5;
  __s7SwiftUI19WKNotificationSceneV10controller8categoryACyxq_Gq_m_SStcfC(lVar14);
  lStack_98 = lVar14;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar14 = lVar14 - uVar8;
  FUN_100017cdc();
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  _swift_bridgeObjectRetain(uVar2);
  __s7SwiftUI19WKNotificationSceneV10controller8categoryACyxq_Gq_m_SStcfC
            (lVar14,puVar5,uVar1,uVar2,puVar5);
  lStack_a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar12 = lStack_80;
  lVar11 = lVar14 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  pcStack_c0 = *(code **)(lStack_68 + 0x10);
  lStack_b8 = lVar7;
  (*pcStack_c0)(lVar11,lVar7,lStack_80);
  lStack_a8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar15 = lVar11 - uVar8;
  pcVar13 = *(code **)(lStack_70 + 0x10);
  (*pcVar13)(lVar15,lStack_78,lVar3);
  lStack_b0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar16 = lVar15 - uVar8;
  (*pcVar13)(lVar16,lVar14,lVar3);
  lVar7 = 0x10002d868;
  FUN_10000c3c0(0x10002d868,&UNK_100021760);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar16 - extraout_x8_00;
  (*pcStack_c0)(lVar17,lVar11,lVar12);
  (*pcVar13)(lVar17 + *(int *)(lVar7 + 0x30),lVar15,lVar3);
  (*pcVar13)(lVar17 + *(int *)(lVar7 + 0x40),lVar16,lVar3);
  __s7SwiftUI11_TupleSceneVyACyxGxcfC(uStack_88,lVar17,lVar7);
  pcVar13 = *(code **)(lStack_70 + 8);
  (*pcVar13)(lVar14,lVar3);
  (*pcVar13)(lStack_78,lVar3);
  pcVar10 = *(code **)(lStack_68 + 8);
  (*pcVar10)(lStack_b8,lVar12);
  (*pcVar13)(lVar16,lVar3);
  (*pcVar13)(lVar15,lVar3);
  (*pcVar10)(lVar11,lVar12);
  return;
}



/* Entry: 10000cd5c; end: 10000ce57;  */

void FUN_10000cd5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
  __s7SwiftUI28WKApplicationDelegateAdaptorV12wrappedValuexvg();
  uVar3 = 0;
  FUN_100015e4c();
  uVar4 = 0x10002d848;
  FUN_10000d278(0x10002d848,FUN_100015e4c,&UNK_100021c58);
  __s7SwiftUI14ObservedObjectV12wrappedValueACyxGx_tcfC(uVar2,uVar3,uVar4);
  uStack_68 = 0;
  uVar4 = 0x10002d870;
  FUN_10000c3c0(0x10002d870,&UNK_100021768);
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_58,&uStack_68,uVar4);
  uVar1 = uStack_50;
  uVar4 = uStack_58;
  uStack_68 = 0xa5949ff0;
  uStack_60 = 0xa400000000000000;
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_58,&uStack_68,PTR___sSSN_1000287b8);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  param_1[5] = uStack_50;
  param_1[4] = uStack_58;
  param_1[6] = uStack_48;
  return;
}



/* Entry: 10000ce58; end: 10000ce5b;  */

void FUN_10000ce58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  long extraout_x8_00;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong auStack_d0 [2];
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x10002d850;
  uStack_88 = param_1;
  FUN_10000c3c0(0x10002d850,&UNK_100021750);
  lStack_68 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lStack_68 + 0x40);
  lStack_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_100028280)(lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&pcStack_c0 - extraout_x8;
  lVar3 = 0;
  FUN_10000cf00();
  lVar3 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar3 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar14 = lVar7 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  FUN_10000d2b8();
  uVar8 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &UNK_100028cd0;
  _swift_allocObject(&UNK_100028cd0,uVar9 + lVar12,uVar8 | 7);
  FUN_10000d36c(lVar14,puVar4 + uVar9);
  uVar9 = 10;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(10,5,0);
  uVar8 = uVar9;
  FUN_10000d3ec();
  if ((uVar9 & 1) == 0) {
    __s7SwiftUI11WindowGroupV7contentACyxGxyXE_tcfC(lVar7,FUN_10000d3b0,puVar4,&UNK_100029000);
    _swift_release(puVar4);
  }
  else {
    *(undefined **)(lVar14 + -0x10) = &UNK_100029000;
    *(ulong *)(lVar14 + -8) = uVar8;
    __s7SwiftUI11WindowGroupV2id5title11lazyContentACyxGSSSg_AA4TextVSgxyctcfC
              (lVar7,0,0,0,0,0,0,FUN_10000d3b0,puVar4);
  }
  lVar3 = 0x10002d860;
  FUN_10000c3c0(0x10002d860,&UNK_100021758);
  lStack_70 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lStack_70 + 0x40);
  lStack_90 = lVar14;
  (*(code *)PTR____chkstk_darwin_100028280)();
  uVar8 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uVar8;
  puVar5 = (undefined8 *)0x0;
  lStack_78 = lVar14;
  FUN_10000c000();
  puVar6 = puVar5;
  __s7SwiftUI19WKNotificationSceneV10controller8categoryACyxq_Gq_m_SStcfC(lVar14);
  lStack_98 = lVar14;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar14 = lVar14 - uVar8;
  FUN_100017cdc();
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  _swift_bridgeObjectRetain(uVar2);
  __s7SwiftUI19WKNotificationSceneV10controller8categoryACyxq_Gq_m_SStcfC
            (lVar14,puVar5,uVar1,uVar2,puVar5);
  lStack_a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar12 = lStack_80;
  lVar11 = lVar14 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  pcStack_c0 = *(code **)(lStack_68 + 0x10);
  lStack_b8 = lVar7;
  (*pcStack_c0)(lVar11,lVar7,lStack_80);
  lStack_a8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar15 = lVar11 - uVar8;
  pcVar13 = *(code **)(lStack_70 + 0x10);
  (*pcVar13)(lVar15,lStack_78,lVar3);
  lStack_b0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar16 = lVar15 - uVar8;
  (*pcVar13)(lVar16,lVar14,lVar3);
  lVar7 = 0x10002d868;
  FUN_10000c3c0(0x10002d868,&UNK_100021760);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar16 - extraout_x8_00;
  (*pcStack_c0)(lVar17,lVar11,lVar12);
  (*pcVar13)(lVar17 + *(int *)(lVar7 + 0x30),lVar15,lVar3);
  (*pcVar13)(lVar17 + *(int *)(lVar7 + 0x40),lVar16,lVar3);
  __s7SwiftUI11_TupleSceneVyACyxGxcfC(uStack_88,lVar17,lVar7);
  pcVar13 = *(code **)(lStack_70 + 8);
  (*pcVar13)(lVar14,lVar3);
  (*pcVar13)(lStack_78,lVar3);
  pcVar10 = *(code **)(lStack_68 + 8);
  (*pcVar10)(lStack_b8,lVar12);
  (*pcVar13)(lVar16,lVar3);
  (*pcVar13)(lVar15,lVar3);
  (*pcVar10)(lVar11,lVar12);
  return;
}



/* Entry: 10000ce5c; end: 10000ceaf;  */

void FUN_10000ce5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_100015e4c(0);
  uVar2 = 0x10002d848;
  FUN_10000d278(0x10002d848,FUN_100015e4c,&UNK_100021c58);
                    /* WARNING: Could not recover jumptable at 0x0001000202e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI28WKApplicationDelegateAdaptorVAA7Combine16ObservableObjectRzrlEyACyxGxmcfC_100028520
  )(param_1,uVar1,uVar1,uVar2);
  return;
}



/* Entry: 10000ceb0; end: 10000ceff;  */

undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_10000cf00(0);
  uVar2 = 0x10002d7a0;
  FUN_10000d278(0x10002d7a0,FUN_10000cf00,&UNK_100021710);
  __s7SwiftUI3AppPAAE4mainyyFZ(uVar1,uVar2);
  return 0;
}



/* Entry: 10000cf00; end: 10000cf37;  */

void FUN_10000cf00(undefined8 param_1)

{
  if (lRam000000010002d808 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100022e78);
  return;
}



/* Entry: 10000cf38; end: 10000cf7f;  */

void FUN_10000cf38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
                    /* WARNING: Could not recover jumptable at 0x00010000cf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2,lVar1);
  return;
}



/* Entry: 10000cf80; end: 10000cfbf;  */

void FUN_10000cf80(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
                    /* WARNING: Could not recover jumptable at 0x00010000cfbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 10000cfc0; end: 10000d00f;  */

undefined8 FUN_10000cfc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 10000d010; end: 10000d05f;  */

undefined8 FUN_10000d010(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 10000d060; end: 10000d0af;  */

undefined8 FUN_10000d060(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 10000d0b0; end: 10000d0ff;  */

undefined8 FUN_10000d0b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 10000d100; end: 10000d10b;  */

void FUN_10000d100(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000209dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_100028a68)();
  return;
}



/* Entry: 10000d10c; end: 10000d153;  */

void FUN_10000d10c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
                    /* WARNING: Could not recover jumptable at 0x00010000d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Entry: 10000d154; end: 10000d15f;  */

void FUN_10000d154(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_100028b00)();
  return;
}



/* Entry: 10000d160; end: 10000d1ab;  */

void FUN_10000d160(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
                    /* WARNING: Could not recover jumptable at 0x00010000d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 10000d1ac; end: 10000d213;  */

void FUN_10000d1ac(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_10000d214();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&lStack_28,param_1 + 0x10);
  }
  return;
}



/* Entry: 10000d214; end: 10000d267;  */

void FUN_10000d214(long param_1)

{
  long lVar1;
  
  if (lRam000000010002d818 == 0) {
    lVar1 = 0xff;
    FUN_100015e4c();
    __s7SwiftUI28WKApplicationDelegateAdaptorVMa();
    if (lVar1 == 0) {
      lRam000000010002d818 = param_1;
    }
  }
  return;
}



/* Entry: 10000d268; end: 10000d277;  */

void FUN_10000d268(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_100028a88)(param_1,&UNK_100022ea0,1);
  return;
}



/* Entry: 10000d278; end: 10000d2b7;  */

void FUN_10000d278(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10000d2b8; end: 10000d2fb;  */

undefined8 FUN_10000d2b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10000cf00();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000d2fc; end: 10000d36b;  */

void FUN_10000d2fc(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10000cf00();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 10000d36c; end: 10000d3af;  */

undefined8 FUN_10000d36c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10000cf00();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000d3b0; end: 10000d3eb;  */

void FUN_10000d3b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10000cf00();
  uVar2 = 0x10002d7a8;
  FUN_10000c3c0(0x10002d7a8,&UNK_1000216f0);
  __s7SwiftUI28WKApplicationDelegateAdaptorV12wrappedValuexvg();
  uVar3 = 0;
  FUN_100015e4c();
  uVar4 = 0x10002d848;
  FUN_10000d278(0x10002d848,FUN_100015e4c,&UNK_100021c58);
  __s7SwiftUI14ObservedObjectV12wrappedValueACyxGx_tcfC(uVar2,uVar3,uVar4);
  uStack_68 = 0;
  uVar4 = 0x10002d870;
  FUN_10000c3c0(0x10002d870,&UNK_100021768);
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_58,&uStack_68,uVar4);
  uVar1 = uStack_50;
  uVar4 = uStack_58;
  uStack_68 = 0xa5949ff0;
  uStack_60 = 0xa400000000000000;
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_58,&uStack_68,PTR___sSSN_1000287b8);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  param_1[5] = uStack_50;
  param_1[4] = uStack_58;
  param_1[6] = uStack_48;
  return;
}



/* Entry: 10000d3ec; end: 10000d42b;  */

void FUN_10000d3ec(void)

{
  undefined *puVar1;
  
  if (puRam000000010002d858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021a68;
  _swift_getWitnessTable(&UNK_100021a68,&UNK_100029000);
  puRam000000010002d858 = puVar1;
  return;
}



/* Entry: 10000d42c; end: 10000d42f;  */

void FUN_10000d42c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002d878 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002d880;
  FUN_10000c888(0x10002d880,&UNK_100021770);
  puVar2 = PTR___s7SwiftUI11_TupleSceneVyxGAA0D0AAMc_100028358;
  _swift_getWitnessTable(PTR___s7SwiftUI11_TupleSceneVyxGAA0D0AAMc_100028358,uVar1);
  puRam000000010002d878 = puVar2;
  return;
}



/* Entry: 10000d430; end: 10000d47f;  */

void FUN_10000d430(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002d878 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002d880;
  FUN_10000c888(0x10002d880,&UNK_100021770);
  puVar2 = PTR___s7SwiftUI11_TupleSceneVyxGAA0D0AAMc_100028358;
  _swift_getWitnessTable(PTR___s7SwiftUI11_TupleSceneVyxGAA0D0AAMc_100028358,uVar1);
  puRam000000010002d878 = puVar2;
  return;
}



/* Entry: 10000d480; end: 10000d623;  */

long * FUN_10000d480(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar10;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    lVar7 = 0;
    FUN_10001a194();
    lVar12 = (long)*(int *)(lVar7 + 0x1c);
    lVar8 = 0;
    __s10Foundation3URLVMa();
    lVar13 = *(long *)(lVar8 + -8);
    pcVar11 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    lVar10 = (long)param_2 + lVar12;
    (*pcVar11)(lVar10,1,lVar8);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar8);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,lVar8);
    }
    else {
      lVar10 = 0x10002d888;
      FUN_10000c3c0(0x10002d888,&UNK_100021780);
      _memcpy((long)param_1 + lVar12,(long)param_2 + lVar12,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar5 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar14 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar14;
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    lVar10 = puVar1[1];
    uVar14 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar14;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar9 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar10 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar10);
  return param_1;
}



/* Entry: 10000d624; end: 10000d6cb;  */

void FUN_10000d624(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  lVar2 = 0;
  FUN_10001a194();
  iVar1 = *(int *)(lVar2 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar3 + -8);
  lVar2 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar3);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  return;
}



/* Entry: 10000d6cc; end: 10000d847;  */

undefined8 * FUN_10000d6cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar12 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar12;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  lVar5 = 0;
  FUN_10001a194();
  lVar10 = (long)*(int *)(lVar5 + 0x1c);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar6 + -8);
  pcVar9 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar3);
  lVar7 = (long)param_2 + lVar10;
  (*pcVar9)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar6);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,lVar6);
  }
  else {
    lVar7 = 0x10002d888;
    FUN_10000c3c0(0x10002d888,&UNK_100021780);
    _memcpy((long)param_1 + lVar10,(long)param_2 + lVar10,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar4 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar8 = param_2[1];
  uVar12 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar1[1] = param_2[1];
  *puVar1 = uVar12;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar8);
  return param_1;
}



/* Entry: 10000d848; end: 10000da4f;  */

undefined8 * FUN_10000d848(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  *param_1 = *param_2;
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[2] = param_2[2];
  uVar8 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[4] = param_2[4];
  uVar8 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar3 = 0;
  FUN_10001a194();
  lVar9 = (long)*(int *)(lVar3 + 0x1c);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar4 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar5 = (long)param_1 + lVar9;
  (*pcVar11)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar11)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar10 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
      goto LAB_10000d98c;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar9,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
    goto LAB_10000d98c;
  }
  lVar5 = 0x10002d888;
  FUN_10000c3c0(0x10002d888,&UNK_100021780);
  _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40))
  ;
LAB_10000d98c:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x20));
  uVar8 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar8 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar7 = puVar1[1];
  uVar8 = param_2[1];
  uVar12 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar12;
  _swift_retain(uVar8);
  _swift_release(uVar7);
  return param_1;
}



/* Entry: 10000da50; end: 10000db7b;  */

undefined8 * FUN_10000da50(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  lVar4 = 0;
  FUN_10001a194();
  lVar7 = (long)*(int *)(lVar4 + 0x1c);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar5 + -8);
  lVar6 = (long)param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar5);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar5);
  }
  else {
    lVar6 = 0x10002d888;
    FUN_10000c3c0(0x10002d888,&UNK_100021780);
    _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x20));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar9 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar1[1] = param_2[1];
  *puVar1 = uVar9;
  return param_1;
}



/* Entry: 10000db7c; end: 10000dd2f;  */

undefined8 * FUN_10000db7c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  uVar9 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  _swift_bridgeObjectRelease(uVar4);
  uVar9 = param_2[3];
  uVar4 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar9;
  _swift_bridgeObjectRelease(uVar4);
  uVar9 = param_2[5];
  uVar4 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  _swift_bridgeObjectRelease(uVar4);
  lVar5 = 0;
  FUN_10001a194();
  lVar10 = (long)*(int *)(lVar5 + 0x1c);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar6 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar7 = (long)param_1 + lVar10;
  (*pcVar12)(lVar7,1,lVar6);
  lVar8 = (long)param_2 + lVar10;
  (*pcVar12)(lVar8,1,lVar6);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 == 0) {
      (**(code **)(lVar11 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar6);
      goto LAB_10000dc90;
    }
    (**(code **)(lVar11 + 8))((long)param_1 + lVar10,lVar6);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar11 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar6);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,lVar6);
    goto LAB_10000dc90;
  }
  lVar7 = 0x10002d888;
  FUN_10000c3c0(0x10002d888,&UNK_100021780);
  _memcpy((long)param_1 + lVar10,(long)param_2 + lVar10,
          *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
LAB_10000dc90:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar9;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  uVar9 = puVar1[1];
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar4 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar4;
  _swift_release(uVar9);
  return param_1;
}



/* Entry: 10000dd30; end: 10000dd3b;  */

void FUN_10000dd30(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000209dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_100028a68)();
  return;
}



/* Entry: 10000dd3c; end: 10000ddbb;  */

ulong FUN_10000dd3c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  FUN_10001a194();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00010000dd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x18) + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 10000ddbc; end: 10000ddc7;  */

void FUN_10000ddbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_100028b00)();
  return;
}



/* Entry: 10000ddc8; end: 10000de43;  */

void FUN_10000ddc8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10001a194();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00010000de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x18) + 8) = (ulong)((int)param_2 - 1);
  return;
}



/* Entry: 10000de44; end: 10000de7b;  */

void FUN_10000de44(undefined8 param_1)

{
  if (lRam000000010002d8e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100022ec8);
  return;
}



/* Entry: 10000de7c; end: 10000df03;  */

void FUN_10000de7c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10001a194();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_1000217a8;
    puStack_28 = PTR___syycWV_1000289d0 + 0x40;
    puStack_30 = &UNK_1000217c0;
    _swift_initStructMetadata(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 10000df04; end: 10000df13;  */

void FUN_10000df04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_100028a88)(param_1,&UNK_100022ef0,1);
  return;
}



/* Entry: 10000df14; end: 10000e0f7;  */

void FUN_10000df14(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long alStack_100 [6];
  long alStack_d0 [14];
  
  lVar2 = 0;
  FUN_10000de44();
  lVar10 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar5 = (long)alStack_d0 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x10002d928;
  FUN_10000c3c0(0x10002d928,&UNK_100021828);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar7 = (long *)(lVar5 - extraout_x8);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar7 = lVar3;
  plVar7[1] = 0x4024000000000000;
  *(undefined1 *)(plVar7 + 2) = 0;
  lVar3 = 0x10002d930;
  puVar4 = &UNK_100021830;
  FUN_10000c3c0();
  FUN_10000e0f8((long)plVar7 + (long)*(int *)(lVar3 + 0x2c));
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  plVar7[-2] = unaff_x20;
  plVar7[-1] = (long)puVar4;
  *(undefined1 *)(plVar7 + -3) = 1;
  plVar7[-4] = 0;
  *(undefined1 *)(plVar7 + -5) = 1;
  plVar7[-6] = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (alStack_d0,0,1,0,1,0x7ff0000000000000,0,0,1);
  plVar1 = (long *)((long)plVar7 + (long)*(int *)(lVar2 + 0x24));
  plVar1[9] = alStack_d0[9];
  plVar1[8] = alStack_d0[8];
  plVar1[0xb] = alStack_d0[0xb];
  plVar1[10] = alStack_d0[10];
  plVar1[0xd] = alStack_d0[0xd];
  plVar1[0xc] = alStack_d0[0xc];
  plVar1[1] = alStack_d0[1];
  *plVar1 = alStack_d0[0];
  plVar1[3] = alStack_d0[3];
  plVar1[2] = alStack_d0[2];
  plVar1[5] = alStack_d0[5];
  plVar1[4] = alStack_d0[4];
  plVar1[7] = alStack_d0[7];
  plVar1[6] = alStack_d0[6];
  FUN_10000edb0();
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &UNK_100028d28;
  _swift_allocObject(&UNK_100028d28,uVar9 + lVar8,uVar6 | 7);
  FUN_10000eed8(lVar5,puVar4 + uVar9);
  FUN_10000ef60();
  __s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctF
            (param_1,1,FUN_10000ef1c,puVar4,lVar2,lVar5);
  _swift_release(puVar4);
  FUN_10000f368(plVar7,0x10002d928,&UNK_100021828);
  return;
}



/* Entry: 10000e0f8; end: 10000e3ef;  */

void FUN_10000e0f8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  long alStack_110 [2];
  undefined8 auStack_100 [17];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0x10002d950;
  FUN_10000c3c0(0x10002d950,&UNK_100021840);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = (long)auStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100028280)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12);
  lVar9 = 0x10002d958;
  puVar10 = &UNK_100021848;
  FUN_10000c3c0(0x10002d958,&UNK_100021848);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar14 = lVar13 - extraout_x12_00;
  lVar7 = param_2;
  FUN_10000e3f0(lVar14,param_2);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar8 = 0x4046000000000000;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_100,0x4046000000000000,0,0x4046000000000000,0,lVar7,puVar10);
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar9 + 0x24));
  puVar1[1] = auStack_100[1];
  *puVar1 = auStack_100[0];
  puVar1[3] = auStack_100[3];
  puVar1[2] = auStack_100[2];
  puVar1[5] = auStack_100[5];
  puVar1[4] = auStack_100[4];
  __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  lVar9 = 0;
  FUN_10000de44();
  plVar2 = (long *)(param_2 + *(int *)(lVar9 + 0x14));
  bVar4 = (char)plVar2[1] == '\x01';
  bVar5 = *plVar2 == 0;
  uVar3 = 0x4000000000000000;
  if (bVar4 || bVar5) {
    uVar3 = 0;
  }
  *puVar12 = uVar8;
  puVar12[1] = uVar3;
  *(undefined1 *)(puVar12 + 2) = 0;
  lVar9 = 0x10002d960;
  puVar10 = &UNK_100021850;
  FUN_10000c3c0();
  FUN_10000e8c8((long)puVar12 + (long)*(int *)(lVar9 + 0x2c));
  if (bVar4 || bVar5) {
    __s7SwiftUI9AlignmentV6centerACvgZ();
  }
  else {
    __s7SwiftUI9AlignmentV3topACvgZ();
  }
  *(long *)(lVar14 + -0x10) = param_2;
  *(undefined **)(lVar14 + -8) = puVar10;
  *(undefined1 *)(lVar14 + -0x18) = 0;
  *(undefined8 *)(lVar14 + -0x20) = 0x7ff0000000000000;
  *(undefined1 *)(lVar14 + -0x28) = 1;
  *(undefined8 *)(lVar14 + -0x30) = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (auStack_100 + 6,0,1,0,1,0,1,0,1);
  puVar1 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar6 + 0x24));
  puVar1[9] = auStack_100[0xf];
  puVar1[8] = auStack_100[0xe];
  puVar1[0xb] = uStack_78;
  puVar1[10] = auStack_100[0x10];
  puVar1[0xd] = uStack_68;
  puVar1[0xc] = uStack_70;
  puVar1[1] = auStack_100[7];
  *puVar1 = auStack_100[6];
  puVar1[3] = auStack_100[9];
  puVar1[2] = auStack_100[8];
  puVar1[5] = auStack_100[0xb];
  puVar1[4] = auStack_100[10];
  puVar1[7] = auStack_100[0xd];
  puVar1[6] = auStack_100[0xc];
  FUN_10000eff8(lVar14,lVar13);
  FUN_10000f1c8(puVar12,lVar11,0x10002d950,&UNK_100021840);
  FUN_10000eff8(lVar13,param_1);
  lVar6 = 0x10002d968;
  FUN_10000c3c0(0x10002d968,&UNK_100021858);
  FUN_10000f1c8(lVar11,param_1 + *(int *)(lVar6 + 0x30),0x10002d950,&UNK_100021840);
  FUN_10000f250(puVar12,0x10002d950,&UNK_100021840);
  FUN_10000f368(lVar14,0x10002d958,&UNK_100021848);
  FUN_10000f250(lVar11,0x10002d950,&UNK_100021840);
  FUN_10000f368(lVar13,0x10002d958,&UNK_100021848);
  return;
}



/* Entry: 10000e3f0; end: 10000e8c7;  */

void FUN_10000e3f0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long alStack_d0 [7];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined8 uStack_68;
  
  lVar5 = 0;
  uStack_78 = param_1;
  __s7SwiftUI25CircularProgressViewStyleVMa();
  lStack_98 = *(long *)(lVar5 + -8);
  lStack_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lStack_98 + 0x40));
  lVar11 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x10002d988;
  alStack_d0[6] = lVar11;
  FUN_10000c3c0(0x10002d988,&UNK_1000218d8);
  lVar13 = *(long *)(lVar5 + -8);
  alStack_d0[5] = lVar5;
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_00;
  lVar5 = 0x10002d990;
  alStack_d0[4] = lVar11;
  FUN_10000c3c0(0x10002d990,&UNK_1000218e0);
  lStack_88 = lVar5;
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_01;
  lVar5 = 0x10002d998;
  FUN_10000c3c0(0x10002d998,&UNK_1000218e8);
  lStack_80 = lVar5;
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)(lVar11 - extraout_x8_02);
  lVar5 = 0x10002d888;
  FUN_10000c3c0(0x10002d888,&UNK_100021780);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar14 - extraout_x8_03;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10001a194();
  FUN_10000f1c8(param_2 + *(int *)(lVar5 + 0x1c),lVar16,0x10002d888,&UNK_100021780);
  lVar5 = lVar16;
  (**(code **)(lVar15 + 0x30))(lVar16,1,lVar6);
  if ((int)lVar5 == 1) {
    FUN_10000f250(lVar16,0x10002d888,&UNK_100021780);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *puVar14 = *(undefined8 *)(param_2 + 0x10);
    puVar14[1] = uVar9;
    puVar14[2] = uVar8;
    puVar14[3] = uVar2;
    _swift_storeEnumTagMultiPayload(puVar14,lStack_80,1);
    uVar8 = 0x10002d9a0;
    FUN_10000f290(0x10002d9a0,0x10002d990,&UNK_1000218e0,&UNK_100021ba0);
    uVar10 = uVar8;
    FUN_10000f210();
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar2);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_78,puVar14,lStack_88,&UNK_100028f48,uVar8,uVar10);
  }
  else {
    alStack_d0[2] = lVar6;
    alStack_d0[3] = lVar12;
    (**(code **)(lVar15 + 0x20))(lVar12,lVar16,lVar6);
    lVar5 = 0x10002d9f8;
    FUN_10000c3c0(0x10002d9f8,&UNK_1000218f0);
    _swift_initStaticObject();
    lVar7 = lVar5;
    FUN_1000163c8();
    FUN_10000f250(lVar5 + 0x20,0x10002da00,&UNK_100021f80);
    lVar16 = lStack_88;
    iVar3 = *(int *)(lStack_88 + 0x40);
    uStack_68 = 0;
    uVar8 = 0x10002da08;
    alStack_d0[1] = lVar13;
    FUN_10000c3c0(0x10002da08,&UNK_100021900);
    __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(lVar11 + iVar3,&uStack_68,uVar8);
    puVar4 = PTR___sSbN_100028810;
    uStack_69 = 0;
    __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC
              (lVar11 + *(int *)(lVar16 + 0x44),&uStack_69,PTR___sSbN_100028810);
    uStack_6a = 0;
    __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(lVar11 + *(int *)(lVar16 + 0x48),&uStack_6a,puVar4);
    (**(code **)(lVar15 + 0x10))(lVar11,lVar12,lVar6);
    *(long *)(lVar11 + *(int *)(lVar16 + 0x34)) = lVar7;
    lVar5 = alStack_d0[4];
    iVar3 = *(int *)(lVar16 + 0x38);
    __s7SwiftUI12ProgressViewVA2A05EmptyD0VRs_rlEACyA2EGycAERszrlufC(alStack_d0[4]);
    lVar12 = alStack_d0[6];
    __s7SwiftUI25CircularProgressViewStyleVACycfC(alStack_d0[6]);
    uVar8 = 0x10002da10;
    FUN_10000f290(0x10002da10,0x10002d988,&UNK_1000218d8,
                  PTR___s7SwiftUI12ProgressViewVyxq_GAA0D0AAMc_100028370);
    uVar9 = uVar8;
    FUN_10000f2d4();
    lVar13 = lStack_90;
    lVar6 = alStack_d0[5];
    __s7SwiftUI4ViewPAAE08progressC5StyleyQrqd__AA08ProgresscE0Rd__lF
              (lVar11 + iVar3,lVar12,alStack_d0[5],lStack_90,uVar8,uVar9);
    (**(code **)(lStack_98 + 8))(lVar12,lVar13);
    (**(code **)(alStack_d0[1] + 8))(lVar5,lVar6);
    puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar16 + 0x3c));
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *puVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar1[1] = uVar9;
    puVar1[2] = uVar8;
    puVar1[3] = uVar2;
    FUN_10000f318(lVar11,puVar14);
    _swift_storeEnumTagMultiPayload(puVar14,lStack_80,0);
    uVar8 = 0x10002d9a0;
    FUN_10000f290(0x10002d9a0,0x10002d990,&UNK_1000218e0,&UNK_100021ba0);
    uVar10 = uVar8;
    FUN_10000f210();
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar2);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_78,puVar14,lVar16,&UNK_100028f48,uVar8,uVar10);
    FUN_10000f368(lVar11,0x10002d990,&UNK_1000218e0);
    (**(code **)(lVar15 + 8))(alStack_d0[3],alStack_d0[2]);
  }
  return;
}



/* Entry: 10000e8c8; end: 10000ed9f;  */

void FUN_10000e8c8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x12;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 auStack_b0 [2];
  ulong auStack_a0 [3];
  undefined8 *puStack_88;
  long alStack_80 [4];
  
  lVar4 = 0;
  alStack_80[0] = param_1;
  __s7SwiftUI18LocalizedStringKeyV0D13InterpolationVMa();
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar8 = (long)auStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x10002d970;
  auStack_a0[1] = uVar8;
  FUN_10000c3c0(0x10002d970,&UNK_100021860);
  lVar17 = lVar4;
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = uVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_80[1] = lVar14;
  (*(code *)PTR____chkstk_darwin_100028280)();
  puVar16 = (undefined8 *)(lVar14 - extraout_x12);
  alStack_80[2] = *(long *)(param_2 + 0x10);
  uVar20 = *(undefined8 *)(param_2 + 0x18);
  alStack_80[3] = uVar20;
  FUN_10000c71c();
  _swift_bridgeObjectRetain(uVar20);
  plVar5 = alStack_80 + 2;
  puVar18 = PTR___sSSN_1000287b8;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  plVar6 = plVar5;
  __s7SwiftUI4FontV8headlineACvgZ();
  plVar7 = plVar6;
  plVar9 = plVar5;
  puVar22 = puVar18;
  lVar14 = lVar17;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,(int)puVar22);
  auStack_a0[2] = lVar14;
  _swift_release(plVar6);
  FUN_10000c75c(plVar5,puVar18,lVar17);
  _swift_bridgeObjectRelease(param_5);
  puVar18 = &UNK_100021868;
  _swift_getKeyPath();
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar4 + 0x24));
  lVar4 = 0x10002d978;
  FUN_10000c3c0(0x10002d978,&UNK_100021898);
  iVar3 = *(int *)(lVar4 + 0x1c);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI4TextV14TruncationModeO4tailyA2EmFWC_100028580;
  lVar4 = 0;
  __s7SwiftUI4TextV14TruncationModeOMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar4);
  puVar22 = &UNK_1000218a0;
  _swift_getKeyPath();
  *puVar1 = puVar22;
  *puVar16 = plVar7;
  puVar16[1] = plVar9;
  *(char *)(puVar16 + 2) = (char)puStack_88;
  puVar16[3] = auStack_a0[2];
  puVar16[4] = puVar18;
  puVar16[5] = 2;
  *(undefined1 *)(puVar16 + 6) = 0;
  lVar4 = 0;
  FUN_10000de44();
  uVar8 = auStack_a0[1];
  puVar18 = (undefined *)0x0;
  plVar6 = (long *)(param_2 + *(int *)(lVar4 + 0x14));
  uVar19 = 0;
  if ((char)plVar6[1] == '\x01') {
    uVar21 = 0;
    uVar20 = 0;
    puVar22 = (undefined *)0x0;
    uVar15 = 0;
  }
  else {
    lVar17 = *plVar6;
    uVar21 = 0;
    uVar20 = 0;
    puVar22 = (undefined *)0x0;
    uVar15 = 0;
    if (lVar17 != 0) {
      puStack_88 = (undefined8 *)param_2;
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV15literalCapacity18interpolationCountAESi_SitcfC
                (auStack_a0[1],0,2);
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV13appendLiteralyySSF(0,0xe000000000000000);
      uVar11 = 0;
      puVar22 = PTR___sSuN_100028838;
      alStack_80[2] = lVar17;
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV06appendF0_9specifieryx_SStAA18_FormatSpecifiableRzlF
                (alStack_80 + 2,0x756c6c25,0xe400000000000000,PTR___sSuN_100028838,
                 PTR___sSu7SwiftUI18_FormatSpecifiableAAWP_100028708);
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV13appendLiteralyySSF(0,0xe000000000000000);
      puVar1 = (undefined8 *)((long)puStack_88 + (long)*(int *)(lVar4 + 0x18));
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV06appendF0yySSF(*puVar1,puVar1[1]);
      uVar20 = 0xe000000000000000;
      __s7SwiftUI18LocalizedStringKeyV0D13InterpolationV13appendLiteralyySSF(0);
      __s7SwiftUI18LocalizedStringKeyV19stringInterpolationA2C0dG0V_tcfC();
      *(undefined2 *)(puVar16 + -1) = 0x100;
      puVar16[-2] = 0;
      uVar12 = (ulong)(uVar11 & 1);
      __s7SwiftUI4TextV_9tableName6bundle7commentAcA18LocalizedStringKeyV_SSSgSo8NSBundleCSgs06StaticI0VSgtcfC
                ();
      uVar19 = uVar8;
      __s7SwiftUI4FontV11subheadlineACvgZ();
      uVar21 = uVar19;
      uVar10 = uVar8;
      uVar15 = uVar20;
      uVar13 = uVar12;
      __s7SwiftUI4TextV4fontyAcA4FontVSgF();
      _swift_release(uVar19);
      FUN_10000c75c(uVar8,uVar20,uVar12);
      _swift_bridgeObjectRelease();
      __s7SwiftUI5ColorV4grayACvgZ();
      puVar18 = puVar22;
      uVar19 = uVar21;
      uVar8 = uVar10;
      uVar20 = uVar15;
      __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF();
      _swift_release(puVar22);
      FUN_10000c75c(uVar21,uVar10,uVar15);
      _swift_bridgeObjectRelease(uVar13);
      puVar22 = &UNK_100021868;
      _swift_getKeyPath();
      uVar21 = uVar8 & 0xff;
      FUN_10000f178(puVar18,uVar19,uVar8);
      _swift_bridgeObjectRetain(uVar20);
      _swift_retain(puVar22);
      uVar15 = 1;
    }
  }
  lVar14 = alStack_80[1];
  puStack_88 = puVar16;
  FUN_10000f1c8(puVar16,alStack_80[1],0x10002d970);
  lVar17 = alStack_80[0];
  FUN_10000f1c8(lVar14,alStack_80[0],0x10002d970,&UNK_100021860);
  lVar4 = 0x10002d980;
  FUN_10000c3c0(0x10002d980,&UNK_1000218d0);
  puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar4 + 0x30));
  FUN_10000f140(puVar18,uVar19,uVar21,uVar20,puVar22,uVar15,0);
  FUN_10000f190(puVar18,uVar19,uVar21,uVar20,puVar22,uVar15,0);
  *puVar1 = puVar18;
  puVar1[1] = uVar19;
  puVar1[2] = uVar21;
  puVar1[3] = uVar20;
  puVar1[4] = puVar22;
  puVar1[5] = uVar15;
  *(undefined1 *)(puVar1 + 6) = 0;
  FUN_10000f250(puStack_88,0x10002d970,&UNK_100021860);
  FUN_10000f190(puVar18,uVar19,uVar21,uVar20,puVar22,uVar15,0);
  FUN_10000f250(lVar14,0x10002d970,&UNK_100021860);
  return;
}



/* Entry: 10000eda0; end: 10000eda3;  */

void FUN_10000eda0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000285c8
  )();
  return;
}



/* Entry: 10000eda4; end: 10000eda7;  */

void FUN_10000eda4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_1000285d0
  )();
  return;
}



/* Entry: 10000eda8; end: 10000edab;  */

void FUN_10000eda8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000203ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000285f8)();
  return;
}



/* Entry: 10000edac; end: 10000edaf;  */

void FUN_10000edac(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long alStack_100 [6];
  long alStack_d0 [14];
  
  lVar2 = 0;
  FUN_10000de44();
  lVar10 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar5 = (long)alStack_d0 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x10002d928;
  FUN_10000c3c0(0x10002d928,&UNK_100021828);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar7 = (long *)(lVar5 - extraout_x8);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar7 = lVar3;
  plVar7[1] = 0x4024000000000000;
  *(undefined1 *)(plVar7 + 2) = 0;
  lVar3 = 0x10002d930;
  puVar4 = &UNK_100021830;
  FUN_10000c3c0();
  FUN_10000e0f8((long)plVar7 + (long)*(int *)(lVar3 + 0x2c));
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  plVar7[-2] = unaff_x20;
  plVar7[-1] = (long)puVar4;
  *(undefined1 *)(plVar7 + -3) = 1;
  plVar7[-4] = 0;
  *(undefined1 *)(plVar7 + -5) = 1;
  plVar7[-6] = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (alStack_d0,0,1,0,1,0x7ff0000000000000,0,0,1);
  plVar1 = (long *)((long)plVar7 + (long)*(int *)(lVar2 + 0x24));
  plVar1[9] = alStack_d0[9];
  plVar1[8] = alStack_d0[8];
  plVar1[0xb] = alStack_d0[0xb];
  plVar1[10] = alStack_d0[10];
  plVar1[0xd] = alStack_d0[0xd];
  plVar1[0xc] = alStack_d0[0xc];
  plVar1[1] = alStack_d0[1];
  *plVar1 = alStack_d0[0];
  plVar1[3] = alStack_d0[3];
  plVar1[2] = alStack_d0[2];
  plVar1[5] = alStack_d0[5];
  plVar1[4] = alStack_d0[4];
  plVar1[7] = alStack_d0[7];
  plVar1[6] = alStack_d0[6];
  FUN_10000edb0();
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &UNK_100028d28;
  _swift_allocObject(&UNK_100028d28,uVar9 + lVar8,uVar6 | 7);
  FUN_10000eed8(lVar5,puVar4 + uVar9);
  FUN_10000ef60();
  __s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctF
            (param_1,1,FUN_10000ef1c,puVar4,lVar2,lVar5);
  _swift_release(puVar4);
  FUN_10000f368(plVar7,0x10002d928,&UNK_100021828);
  return;
}



/* Entry: 10000edb0; end: 10000edf3;  */

undefined8 FUN_10000edb0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10000de44();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000edf4; end: 10000eed7;  */

void FUN_10000edf4(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar3 = 0;
  FUN_10000de44();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  lVar4 = 0;
  FUN_10001a194();
  iVar2 = *(int *)(lVar4 + 0x1c);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar5 + -8);
  lVar4 = lVar1 + iVar2;
  (**(code **)(lVar7 + 0x30))(lVar4,1,lVar5);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 8))(lVar1 + iVar2,lVar5);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c) + 8));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 10000eed8; end: 10000ef1b;  */

undefined8 FUN_10000eed8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10000de44();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000ef1c; end: 10000ef5f;  */

void FUN_10000ef1c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10000de44();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(unaff_x20 + *(int *)(lVar1 + 0x1c) + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff))))
            ();
  return;
}



/* Entry: 10000ef60; end: 10000eff7;  */

void FUN_10000ef60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam000000010002d938 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002d928;
  FUN_10000c888(0x10002d928,&UNK_100021828);
  uVar2 = 0x10002d940;
  FUN_10000f290(0x10002d940,0x10002d948,&UNK_100021838,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000286a8);
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_100028400;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar1,
             &uStack_30);
  puRam000000010002d938 = puVar3;
  return;
}



/* Entry: 10000eff8; end: 10000f047;  */

undefined8 FUN_10000eff8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d958;
  FUN_10000c3c0(0x10002d958,&UNK_100021848);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000f048; end: 10000f073;  */

void FUN_10000f048(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  __s7SwiftUI17EnvironmentValuesV9lineLimitSiSgvg();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10000f074; end: 10000f09f;  */

void FUN_10000f074(undefined8 *param_1)

{
  __s7SwiftUI17EnvironmentValuesV9lineLimitSiSgvs(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 10000f0a0; end: 10000f0bf;  */

void FUN_10000f0a0(void)

{
  __s7SwiftUI17EnvironmentValuesV14truncationModeAA4TextV010TruncationF0Ovg();
  return;
}



/* Entry: 10000f0c0; end: 10000f13b;  */

void FUN_10000f0c0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI4TextV14TruncationModeOMa();
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV14truncationModeAA4TextV010TruncationF0Ovs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10000f13c; end: 10000f13f;  */

void FUN_10000f13c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI4TextV14TruncationModeOMa();
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV14truncationModeAA4TextV010TruncationF0Ovs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10000f140; end: 10000f177;  */

void FUN_10000f140(void)

{
  long in_x3;
  undefined8 in_x4;
  
  if (in_x3 != 0) {
    FUN_10000f178();
    _swift_bridgeObjectRetain(in_x3);
                    /* WARNING: Could not recover jumptable at 0x000100020a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_100028ae8)(in_x4);
    return;
  }
  return;
}



/* Entry: 10000f178; end: 10000f18f;  */

void FUN_10000f178(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000100020a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_100028ae8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010002097c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_100028a28)(param_2);
  return;
}


