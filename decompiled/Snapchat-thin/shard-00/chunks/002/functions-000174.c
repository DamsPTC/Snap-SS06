/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003ff7e0; end: 1003ff813; -[_TtC17SCAdConfigService17SCAdConfigService adConfigProvider] */

void FUN_1003ff7e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1003d1364();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003ff814; end: 1003ff823; -[_TtC27SCContextExperimentServices27SCContextExperimentServices contextExperimentService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ff814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130190c8));
  return;
}



/* Entry: 1003ff824; end: 1003ff9af; -[SCAdOperationMetricsManagerImpl initWithGrapheneRegistry:debugNetworkResponseLogger:lifecycleWatermarkMetricsManager:userTrackedLogger:adConfigProvider:contextExperimentService:flipper:useSwiftImplementation:] */

undefined1 *
FUN_1003ff824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126e8510;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x40) = param_10;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003ff9b0; end: 1003ff9ef;  */

void FUN_1003ff9b0(void)

{
  func_0x000107c61168(&PTR_PTR_112dd13e0);
  return;
}



/* Entry: 1003ff9f0; end: 1003ffae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1003ff9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar2 = param_4;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_1003ff9b0();
  lVar1 = _DAT_112dd1560;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuStack_48 = &PTR_DAT_11040f1a8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  auStack_68[0] = param_1;
  uStack_50 = uVar3;
  FUN_1003ffae4();
  *(undefined **)(param_4 + lVar1) = puVar4;
  *(undefined **)(param_4 + _DAT_112dd1568) = puVar5;
  lVar1 = _DAT_112dd1570;
  FUN_1003ffc2c();
  *(undefined **)(param_4 + lVar1) = puVar5;
  FUN_1003ffd4c(auStack_68,param_4 + _DAT_112dd1548);
  *(undefined8 *)(param_4 + _DAT_112dd1550) = param_2;
  *(undefined8 *)(param_4 + _DAT_112dd1558) = param_3;
  plVar6 = &lStack_78;
  lStack_78 = param_4;
  lStack_70 = lVar2;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_68);
  return plVar6;
}



/* Entry: 1003ffae4; end: 1003ffc13;  */

undefined * FUN_1003ffae4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112dd15b0,&UNK_10d992920);
    puVar5 = puVar8;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x0001018f261c(param_1,&uStack_98,0x112dd17f0,&UNK_10d992928);
      uVar3 = uStack_90;
      uVar2 = uStack_98;
      uVar6 = uStack_98;
      uVar7 = uStack_90;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ffc10);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_1003ffc14(auStack_88,*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ffc14);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1003ffc14; end: 1003ffc2b;  */

undefined8 * FUN_1003ffc14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1003ffc2c; end: 1003ffd4b;  */

undefined * FUN_1003ffc2c(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    FUN_1000285a8(0x112dd15b8,&UNK_10d992600);
    puVar7 = puVar10;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar3 = puVar11[-5];
      uVar4 = puVar11[-4];
      uVar13 = puVar11[-3];
      uVar12 = puVar11[-2];
      uVar5 = *(undefined1 *)(puVar11 + -1);
      uVar14 = *puVar11;
      func_0x000107c61434(uVar4);
      uVar8 = uVar3;
      uVar9 = uVar4;
      func_0x000100029284();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003ffd48);
        (*pcVar6)();
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar9 + 0x40) = *(ulong *)(puVar7 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 0x20);
      *puVar2 = uVar13;
      puVar2[1] = uVar12;
      *(undefined1 *)(puVar2 + 2) = uVar5;
      puVar2[3] = uVar14;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003ffd4c);
        (*pcVar6)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar10 = puVar10 + -1;
      puVar11 = puVar11 + 6;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar7);
  }
  return puVar7;
}



/* Entry: 1003ffd4c; end: 1003ffd8f;  */

long FUN_1003ffd4c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1003ffd90; end: 1003ffe0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1003ffd90(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  FUN_1003ffe10(param_1,unaff_x20 + _DAT_113068c20);
  *(undefined8 *)(unaff_x20 + _DAT_113068c28) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1003ffe10; end: 1003ffe53;  */

long FUN_1003ffe10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1003ffe54; end: 1003fff13;  */

void FUN_1003ffe54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003fff14; end: 1004001bb;  */

void FUN_1003fff14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 1004001bc; end: 10040022f; -[SCGrapheneAdTrackLegacyParseMetric2 init] */

undefined1 * FUN_1004001bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e83e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100400230; end: 100400293;  */

void FUN_100400230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcdc98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a7c60;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dcdc98 = puVar1;
  return;
}



/* Entry: 100400294; end: 1004002cf;  */

undefined8 FUN_100400294(undefined8 param_1,undefined8 param_2)

{
  FUN_1004002d0(param_2,param_1);
  return param_2;
}



/* Entry: 1004002d0; end: 100400397;  */

undefined8 * FUN_1004002d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  lVar6 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar6;
  pcVar5 = (code *)**(undefined8 **)(lVar6 + -8);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  (*pcVar5)(param_1 + 5,param_2 + 5,lVar6);
  lVar6 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = lVar6;
  (*(code *)**(undefined8 **)(lVar6 + -8))(param_1 + 10,param_2 + 10);
  param_1[0xf] = param_2[0xf];
  func_0x000107c615f0();
  return param_1;
}



/* Entry: 100400398; end: 1004003ab;  */

void FUN_100400398(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1004003ac; end: 100400483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004003ac(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130108c0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100400484; end: 100400553;  */

void FUN_100400484(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100400554; end: 1004005a3;  */

void FUN_100400554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 1004005a4; end: 100401b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1004005a4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  undefined *puVar22;
  undefined8 *unaff_x20;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  undefined *puVar32;
  ulong uVar33;
  ulong uVar34;
  undefined *apuStack_1c0 [3];
  undefined *puStack_1a8;
  undefined *apuStack_1a0 [3];
  undefined *apuStack_188 [3];
  undefined *apuStack_170 [3];
  undefined *apuStack_158 [3];
  undefined *apuStack_140 [3];
  undefined *apuStack_128 [3];
  undefined *apuStack_110 [3];
  undefined *apuStack_f8 [3];
  undefined *apuStack_e0 [3];
  undefined *apuStack_c8 [3];
  undefined *apuStack_b0 [3];
  undefined *apuStack_98 [3];
  ulong auStack_80 [4];
  
  uVar19 = *unaff_x20;
  uVar15 = 0x112dcbd30;
  FUN_1000285a8(0x112dcbd30,&UNK_10d98e410);
  uVar2 = *(undefined8 *)(unaff_x20[2] + _DAT_1130108c0);
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1000bda74();
  func_0x000107c61170(uVar2);
  uVar20 = *(ulong *)(unaff_x20[4] + _DAT_11304a478);
  uVar23 = *(ulong *)(unaff_x20[6] + _DAT_11308d048);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(uVar23);
  uVar33 = uVar20;
  FUN_100401ba4(uVar20,uVar23);
  uVar28 = uVar23;
  func_0x000100402298();
  auStack_80[0] = uVar33;
  func_0x000100402a88();
  uVar33 = auStack_80[0];
  FUN_100403084();
  uVar25 = uVar28;
  FUN_100403538();
  func_0x000107c6142c();
  FUN_100404048();
  if (uVar33 >> 0x3e == 0) {
    uVar34 = *(ulong *)((uVar33 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar34 = uVar33 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar33) {
      uVar34 = uVar33;
    }
    func_0x000107c60480();
  }
  uVar16 = uVar34 & ((long)uVar34 >> 0x3f ^ 0xffffffffffffffffU);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar34 != 0) {
    apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar16,0);
    if ((long)uVar34 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401afc);
      (*pcVar1)();
    }
    if ((uVar33 & 0xc000000000000001) == 0) {
      plVar21 = (long *)(uVar33 + 0x20);
      puVar4 = apuStack_98[0];
      uVar27 = uVar34;
      do {
        lVar29 = *plVar21;
        func_0x000107c61428(lVar29 + 0x10,auStack_80,0,0);
        uVar2 = *(undefined8 *)(lVar29 + 0x10);
        uVar8 = *(undefined8 *)(lVar29 + 0x18);
        uVar17 = *(ulong *)(puVar4 + 0x10);
        uVar30 = *(ulong *)(puVar4 + 0x18);
        apuStack_98[0] = puVar4;
        func_0x000107c61434(uVar8);
        if (uVar30 >> 1 <= uVar17) {
          FUN_100403514(1 < uVar30,uVar17 + 1,1);
          puVar4 = apuStack_98[0];
        }
        *(ulong *)(puVar4 + 0x10) = uVar17 + 1;
        *(undefined8 *)(puVar4 + uVar17 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(puVar4 + uVar17 * 0x10 + 0x28) = uVar8;
        uVar27 = uVar27 - 1;
        plVar21 = plVar21 + 1;
      } while (uVar27 != 0);
    }
    else {
      uVar27 = 0;
      do {
        puVar4 = apuStack_98[0];
        uVar17 = uVar27;
        func_0x00010178f84c(uVar27,uVar33);
        func_0x000107c61428(uVar17 + 0x10,auStack_80,0,0);
        uVar2 = *(undefined8 *)(uVar17 + 0x10);
        uVar8 = *(undefined8 *)(uVar17 + 0x18);
        func_0x000107c61434(uVar8);
        func_0x000107c615e8(uVar17);
        uVar17 = *(ulong *)(puVar4 + 0x10);
        apuStack_98[0] = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar17) {
          FUN_100403514(1 < *(ulong *)(puVar4 + 0x18),uVar17 + 1,1);
        }
        uVar27 = uVar27 + 1;
        *(ulong *)(apuStack_98[0] + 0x10) = uVar17 + 1;
        *(undefined8 *)(apuStack_98[0] + uVar17 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(apuStack_98[0] + uVar17 * 0x10 + 0x28) = uVar8;
        puVar4 = apuStack_98[0];
      } while (uVar34 != uVar27);
    }
  }
  puVar22 = puVar4;
  FUN_100403a6c();
  func_0x000107c6142c(puVar4);
  if (uVar25 >> 0x3e == 0) {
    uVar27 = *(ulong *)((uVar25 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar27 = uVar25 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar25) {
      uVar27 = uVar25;
    }
    func_0x000107c60480();
  }
  uVar17 = uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar27 != 0) {
    apuStack_b0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar17,0);
    if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b00);
      (*pcVar1)();
    }
    uVar30 = 0;
    do {
      puVar4 = apuStack_b0[0];
      if ((uVar25 & 0xc000000000000001) == 0) {
        uVar18 = *(ulong *)(uVar25 + uVar30 * 8 + 0x20);
        func_0x000107c6157c(uVar18);
      }
      else {
        uVar18 = uVar30;
        func_0x00010178f6b0(uVar30,uVar25);
      }
      func_0x000107c61428(uVar18 + 0x10,apuStack_98,0,0);
      uVar2 = *(undefined8 *)(uVar18 + 0x10);
      uVar8 = *(undefined8 *)(uVar18 + 0x18);
      func_0x000107c61434(uVar8);
      func_0x000107c61574(uVar18);
      uVar18 = *(ulong *)(puVar4 + 0x10);
      apuStack_b0[0] = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar18) {
        FUN_100403514(1 < *(ulong *)(puVar4 + 0x18),uVar18 + 1,1);
      }
      uVar30 = uVar30 + 1;
      *(ulong *)(apuStack_b0[0] + 0x10) = uVar18 + 1;
      *(undefined8 *)(apuStack_b0[0] + uVar18 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(apuStack_b0[0] + uVar18 * 0x10 + 0x28) = uVar8;
      puVar4 = apuStack_b0[0];
    } while (uVar27 != uVar30);
  }
  apuStack_b0[0] = puVar22;
  FUN_10040448c(puVar4);
  func_0x000107c6142c(puVar4);
  puVar4 = apuStack_b0[0];
  uVar30 = uVar28;
  func_0x000100404658(uVar28,apuStack_b0[0]);
  func_0x000107c6142c(uVar28);
  func_0x000107c6142c();
  FUN_100404bbc();
  FUN_100404e28();
  apuStack_b0[0] = puVar4;
  FUN_100405034();
  puVar4 = apuStack_b0[0];
  puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar34 != 0) {
    apuStack_c8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar16,0);
    if ((long)uVar34 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b04);
      (*pcVar1)();
    }
    if ((uVar33 & 0xc000000000000001) == 0) {
      puVar22 = apuStack_c8[0];
      plVar21 = (long *)(uVar33 + 0x20);
      uVar28 = uVar34;
      do {
        lVar29 = *plVar21;
        func_0x000107c61428(lVar29 + 0x10,apuStack_b0,0,0);
        uVar2 = *(undefined8 *)(lVar29 + 0x10);
        uVar8 = *(undefined8 *)(lVar29 + 0x18);
        uVar18 = *(ulong *)(puVar22 + 0x10);
        uVar31 = *(ulong *)(puVar22 + 0x18);
        apuStack_c8[0] = puVar22;
        func_0x000107c61434(uVar8);
        if (uVar31 >> 1 <= uVar18) {
          FUN_100403514(1 < uVar31,uVar18 + 1,1);
          puVar22 = apuStack_c8[0];
        }
        *(ulong *)(puVar22 + 0x10) = uVar18 + 1;
        *(undefined8 *)(puVar22 + uVar18 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(puVar22 + uVar18 * 0x10 + 0x28) = uVar8;
        uVar28 = uVar28 - 1;
        plVar21 = plVar21 + 1;
      } while (uVar28 != 0);
    }
    else {
      uVar28 = 0;
      do {
        puVar22 = apuStack_c8[0];
        uVar18 = uVar28;
        func_0x00010178f84c(uVar28,uVar33);
        func_0x000107c61428(uVar18 + 0x10,apuStack_b0,0,0);
        uVar2 = *(undefined8 *)(uVar18 + 0x10);
        uVar8 = *(undefined8 *)(uVar18 + 0x18);
        func_0x000107c61434(uVar8);
        func_0x000107c615e8(uVar18);
        uVar18 = *(ulong *)(puVar22 + 0x10);
        apuStack_c8[0] = puVar22;
        if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar18) {
          FUN_100403514(1 < *(ulong *)(puVar22 + 0x18),uVar18 + 1,1);
        }
        uVar28 = uVar28 + 1;
        *(ulong *)(apuStack_c8[0] + 0x10) = uVar18 + 1;
        *(undefined8 *)(apuStack_c8[0] + uVar18 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(apuStack_c8[0] + uVar18 * 0x10 + 0x28) = uVar8;
        puVar22 = apuStack_c8[0];
      } while (uVar34 != uVar28);
    }
  }
  puVar5 = puVar22;
  FUN_100403a6c();
  func_0x000107c6142c(puVar22);
  puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar27 != 0) {
    apuStack_e0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar17,0);
    if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b08);
      (*pcVar1)();
    }
    uVar28 = 0;
    do {
      puVar22 = apuStack_e0[0];
      if ((uVar25 & 0xc000000000000001) == 0) {
        uVar18 = *(ulong *)(uVar25 + uVar28 * 8 + 0x20);
        func_0x000107c6157c(uVar18);
      }
      else {
        uVar18 = uVar28;
        func_0x00010178f6b0(uVar28,uVar25);
      }
      func_0x000107c61428(uVar18 + 0x10,apuStack_c8,0,0);
      uVar2 = *(undefined8 *)(uVar18 + 0x10);
      uVar8 = *(undefined8 *)(uVar18 + 0x18);
      func_0x000107c61434(uVar8);
      func_0x000107c61574(uVar18);
      uVar18 = *(ulong *)(puVar22 + 0x10);
      apuStack_e0[0] = puVar22;
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar18) {
        FUN_100403514(1 < *(ulong *)(puVar22 + 0x18),uVar18 + 1,1);
      }
      uVar28 = uVar28 + 1;
      *(ulong *)(apuStack_e0[0] + 0x10) = uVar18 + 1;
      *(undefined8 *)(apuStack_e0[0] + uVar18 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(apuStack_e0[0] + uVar18 * 0x10 + 0x28) = uVar8;
      puVar22 = apuStack_e0[0];
    } while (uVar27 != uVar28);
  }
  apuStack_e0[0] = puVar5;
  FUN_10040448c(puVar22);
  func_0x000107c6142c(puVar22);
  puVar22 = apuStack_e0[0];
  if (uVar30 >> 0x3e == 0) {
    uVar28 = *(ulong *)((uVar30 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar28 = uVar30 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar30) {
      uVar28 = uVar30;
    }
    func_0x000107c60480();
  }
  uVar18 = uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar28 != 0) {
    apuStack_f8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar18,0);
    if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b0c);
      (*pcVar1)();
    }
    uVar31 = 0;
    do {
      puVar5 = apuStack_f8[0];
      if ((uVar30 & 0xc000000000000001) == 0) {
        uVar24 = *(ulong *)(uVar30 + uVar31 * 8 + 0x20);
        func_0x000107c6157c(uVar24);
      }
      else {
        uVar24 = uVar31;
        func_0x00010178fa00();
      }
      func_0x000107c61428(uVar24 + 0x10,apuStack_e0,0,0);
      uVar2 = *(undefined8 *)(uVar24 + 0x10);
      uVar8 = *(undefined8 *)(uVar24 + 0x18);
      func_0x000107c61434(uVar8);
      func_0x000107c61574(uVar24);
      uVar24 = *(ulong *)(puVar5 + 0x10);
      apuStack_f8[0] = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar24) {
        FUN_100403514(1 < *(ulong *)(puVar5 + 0x18),uVar24 + 1,1);
      }
      uVar31 = uVar31 + 1;
      *(ulong *)(apuStack_f8[0] + 0x10) = uVar24 + 1;
      *(undefined8 *)(apuStack_f8[0] + uVar24 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(apuStack_f8[0] + uVar24 * 0x10 + 0x28) = uVar8;
      puVar5 = apuStack_f8[0];
    } while (uVar28 != uVar31);
  }
  apuStack_f8[0] = puVar22;
  FUN_10040448c(puVar5);
  func_0x000107c6142c(puVar5);
  puVar22 = apuStack_f8[0];
  puVar5 = puVar4;
  func_0x00010040538c(puVar4,apuStack_f8[0]);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1004057dc();
  if (uVar34 != 0) {
    apuStack_110[0] = puVar4;
    FUN_100403514(0,uVar16,0);
    if ((long)uVar34 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b10);
      (*pcVar1)();
    }
    if ((uVar33 & 0xc000000000000001) == 0) {
      puVar4 = apuStack_110[0];
      plVar21 = (long *)(uVar33 + 0x20);
      uVar31 = uVar34;
      do {
        lVar29 = *plVar21;
        func_0x000107c61428(lVar29 + 0x10,apuStack_f8,0,0);
        uVar2 = *(undefined8 *)(lVar29 + 0x10);
        uVar8 = *(undefined8 *)(lVar29 + 0x18);
        uVar24 = *(ulong *)(puVar4 + 0x10);
        uVar11 = *(ulong *)(puVar4 + 0x18);
        apuStack_110[0] = puVar4;
        func_0x000107c61434(uVar8);
        if (uVar11 >> 1 <= uVar24) {
          FUN_100403514(1 < uVar11,uVar24 + 1,1);
          puVar4 = apuStack_110[0];
        }
        *(ulong *)(puVar4 + 0x10) = uVar24 + 1;
        *(undefined8 *)(puVar4 + uVar24 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(puVar4 + uVar24 * 0x10 + 0x28) = uVar8;
        uVar31 = uVar31 - 1;
        plVar21 = plVar21 + 1;
      } while (uVar31 != 0);
    }
    else {
      uVar31 = 0;
      do {
        puVar4 = apuStack_110[0];
        uVar24 = uVar31;
        func_0x00010178f84c(uVar31,uVar33);
        func_0x000107c61428(uVar24 + 0x10,apuStack_f8,0,0);
        uVar2 = *(undefined8 *)(uVar24 + 0x10);
        uVar8 = *(undefined8 *)(uVar24 + 0x18);
        func_0x000107c61434(uVar8);
        func_0x000107c615e8(uVar24);
        uVar24 = *(ulong *)(puVar4 + 0x10);
        apuStack_110[0] = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar24) {
          FUN_100403514(1 < *(ulong *)(puVar4 + 0x18),uVar24 + 1,1);
        }
        uVar31 = uVar31 + 1;
        *(ulong *)(apuStack_110[0] + 0x10) = uVar24 + 1;
        *(undefined8 *)(apuStack_110[0] + uVar24 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(apuStack_110[0] + uVar24 * 0x10 + 0x28) = uVar8;
        puVar4 = apuStack_110[0];
      } while (uVar34 != uVar31);
    }
  }
  puVar6 = puVar4;
  FUN_100403a6c();
  func_0x000107c6142c(puVar4);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar27 != 0) {
    apuStack_128[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar17,0);
    if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b14);
      (*pcVar1)();
    }
    uVar31 = 0;
    do {
      puVar4 = apuStack_128[0];
      if ((uVar25 & 0xc000000000000001) == 0) {
        uVar24 = *(ulong *)(uVar25 + uVar31 * 8 + 0x20);
        func_0x000107c6157c(uVar24);
      }
      else {
        uVar24 = uVar31;
        func_0x00010178f6b0(uVar31,uVar25);
      }
      func_0x000107c61428(uVar24 + 0x10,apuStack_110,0,0);
      uVar2 = *(undefined8 *)(uVar24 + 0x10);
      uVar8 = *(undefined8 *)(uVar24 + 0x18);
      func_0x000107c61434(uVar8);
      func_0x000107c61574(uVar24);
      uVar24 = *(ulong *)(puVar4 + 0x10);
      apuStack_128[0] = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar24) {
        FUN_100403514(1 < *(ulong *)(puVar4 + 0x18),uVar24 + 1,1);
      }
      uVar31 = uVar31 + 1;
      *(ulong *)(apuStack_128[0] + 0x10) = uVar24 + 1;
      *(undefined8 *)(apuStack_128[0] + uVar24 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(apuStack_128[0] + uVar24 * 0x10 + 0x28) = uVar8;
      puVar4 = apuStack_128[0];
    } while (uVar27 != uVar31);
  }
  apuStack_128[0] = puVar6;
  FUN_10040448c(puVar4);
  func_0x000107c6142c(puVar4);
  puVar4 = apuStack_128[0];
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar28 != 0) {
    apuStack_140[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar18,0);
    if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b18);
      (*pcVar1)();
    }
    uVar31 = 0;
    do {
      puVar6 = apuStack_140[0];
      if ((uVar30 & 0xc000000000000001) == 0) {
        uVar24 = *(ulong *)(uVar30 + uVar31 * 8 + 0x20);
        func_0x000107c6157c(uVar24);
      }
      else {
        uVar24 = uVar31;
        func_0x00010178fa00();
      }
      func_0x000107c61428(uVar24 + 0x10,apuStack_128,0,0);
      uVar2 = *(undefined8 *)(uVar24 + 0x10);
      uVar8 = *(undefined8 *)(uVar24 + 0x18);
      func_0x000107c61434(uVar8);
      func_0x000107c61574(uVar24);
      uVar24 = *(ulong *)(puVar6 + 0x10);
      apuStack_140[0] = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar24) {
        FUN_100403514(1 < *(ulong *)(puVar6 + 0x18),uVar24 + 1,1);
      }
      uVar31 = uVar31 + 1;
      *(ulong *)(apuStack_140[0] + 0x10) = uVar24 + 1;
      *(undefined8 *)(apuStack_140[0] + uVar24 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(apuStack_140[0] + uVar24 * 0x10 + 0x28) = uVar8;
      puVar6 = apuStack_140[0];
    } while (uVar28 != uVar31);
  }
  apuStack_140[0] = puVar4;
  FUN_10040448c(puVar6);
  func_0x000107c6142c(puVar6);
  puVar4 = apuStack_140[0];
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar6 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar6 = puVar5;
    }
    func_0x000107c60480();
  }
  uVar31 = (ulong)puVar6 & ((long)puVar6 >> 0x3f ^ 0xffffffffffffffffU);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar6 != (undefined *)0x0) {
    apuStack_158[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar31,0);
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b1c);
      (*pcVar1)();
    }
    puVar32 = (undefined *)0x0;
    do {
      puVar7 = apuStack_158[0];
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        puVar26 = *(undefined **)(puVar5 + (long)puVar32 * 8 + 0x20);
        func_0x000107c6157c(puVar26);
      }
      else {
        puVar26 = puVar32;
        func_0x00010178fbb4();
      }
      func_0x000107c61428(puVar26 + 0x10,apuStack_140,0,0);
      uVar2 = *(undefined8 *)(puVar26 + 0x10);
      uVar8 = *(undefined8 *)(puVar26 + 0x18);
      func_0x000107c61434(uVar8);
      func_0x000107c61574(puVar26);
      uVar24 = *(ulong *)(puVar7 + 0x10);
      apuStack_158[0] = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar24) {
        FUN_100403514(1 < *(ulong *)(puVar7 + 0x18),uVar24 + 1,1);
      }
      puVar32 = puVar32 + 1;
      *(ulong *)(apuStack_158[0] + 0x10) = uVar24 + 1;
      *(undefined8 *)(apuStack_158[0] + uVar24 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(apuStack_158[0] + uVar24 * 0x10 + 0x28) = uVar8;
      puVar7 = apuStack_158[0];
    } while (puVar6 != puVar32);
  }
  apuStack_158[0] = puVar4;
  FUN_10040448c(puVar7);
  func_0x000107c6142c(puVar7);
  puVar4 = apuStack_158[0];
  puVar7 = puVar22;
  FUN_100406c7c(puVar22,apuStack_158[0]);
  func_0x000107c6142c(puVar22);
  func_0x000107c6142c(puVar4);
  FUN_1000285a8(0x112dcbd38,&UNK_10d98e418);
  func_0x000107c613fc();
  func_0x000107c61434(uVar33);
  uVar2 = 0;
  FUN_100407128(0,uVar33);
  FUN_100407e9c(0);
  func_0x000107c613fc();
  uVar24 = uVar25;
  func_0x000107c61434();
  FUN_100407ebc();
  FUN_1000285a8(0x112dcbd40,&UNK_10d98e420);
  func_0x000107c613fc();
  func_0x000107c61434(uVar30);
  uVar8 = 2;
  FUN_100407128(2,uVar30);
  FUN_1000285a8(0x112dcbd48,&UNK_10d98e428);
  func_0x000107c613fc();
  func_0x000107c61434(puVar5);
  uVar9 = 3;
  FUN_100407128(3,puVar5);
  FUN_1000285a8(0x112dcbd50,&UNK_10d98e430);
  func_0x000107c613fc();
  func_0x000107c61434(puVar7);
  uVar10 = 4;
  FUN_100407128(4,puVar7);
  if (uVar34 == 0) {
    func_0x000107c6142c(uVar33);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_170[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar16,0);
    if ((long)uVar34 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b20);
      (*pcVar1)();
    }
    if ((uVar33 & 0xc000000000000001) == 0) {
      puVar4 = apuStack_170[0];
      plVar21 = (long *)(uVar33 + 0x20);
      do {
        lVar29 = *plVar21;
        func_0x000107c61428(lVar29 + 0x10,apuStack_158,0,0);
        uVar13 = *(undefined8 *)(lVar29 + 0x10);
        uVar12 = *(undefined8 *)(lVar29 + 0x18);
        uVar16 = *(ulong *)(puVar4 + 0x10);
        uVar11 = *(ulong *)(puVar4 + 0x18);
        apuStack_170[0] = puVar4;
        func_0x000107c61434(uVar12);
        if (uVar11 >> 1 <= uVar16) {
          FUN_100403514(1 < uVar11,uVar16 + 1,1);
          puVar4 = apuStack_170[0];
        }
        *(ulong *)(puVar4 + 0x10) = uVar16 + 1;
        *(undefined8 *)(puVar4 + uVar16 * 0x10 + 0x20) = uVar13;
        *(undefined8 *)(puVar4 + uVar16 * 0x10 + 0x28) = uVar12;
        uVar34 = uVar34 - 1;
        plVar21 = plVar21 + 1;
      } while (uVar34 != 0);
    }
    else {
      uVar16 = 0;
      do {
        puVar4 = apuStack_170[0];
        uVar11 = uVar16;
        func_0x00010178f84c(uVar16,uVar33);
        func_0x000107c61428(uVar11 + 0x10,apuStack_158,0,0);
        uVar13 = *(undefined8 *)(uVar11 + 0x10);
        uVar12 = *(undefined8 *)(uVar11 + 0x18);
        func_0x000107c61434(uVar12);
        func_0x000107c615e8(uVar11);
        uVar11 = *(ulong *)(puVar4 + 0x10);
        apuStack_170[0] = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
          FUN_100403514(1 < *(ulong *)(puVar4 + 0x18),uVar11 + 1,1);
        }
        uVar16 = uVar16 + 1;
        *(ulong *)(apuStack_170[0] + 0x10) = uVar11 + 1;
        *(undefined8 *)(apuStack_170[0] + uVar11 * 0x10 + 0x20) = uVar13;
        *(undefined8 *)(apuStack_170[0] + uVar11 * 0x10 + 0x28) = uVar12;
        puVar4 = apuStack_170[0];
      } while (uVar34 != uVar16);
    }
    func_0x000107c6142c(uVar33);
  }
  puVar22 = puVar4;
  FUN_100403a6c();
  func_0x000107c6142c(puVar4);
  if (uVar27 == 0) {
    func_0x000107c6142c(uVar25);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_188[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar17,0);
    if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b24);
      (*pcVar1)();
    }
    uVar33 = 0;
    do {
      puVar4 = apuStack_188[0];
      if ((uVar25 & 0xc000000000000001) == 0) {
        uVar34 = *(ulong *)(uVar25 + uVar33 * 8 + 0x20);
        func_0x000107c6157c(uVar34);
      }
      else {
        uVar34 = uVar33;
        func_0x00010178f6b0(uVar33,uVar25);
      }
      func_0x000107c61428(uVar34 + 0x10,apuStack_170,0,0);
      uVar13 = *(undefined8 *)(uVar34 + 0x10);
      uVar12 = *(undefined8 *)(uVar34 + 0x18);
      func_0x000107c61434(uVar12);
      func_0x000107c61574(uVar34);
      uVar34 = *(ulong *)(puVar4 + 0x10);
      apuStack_188[0] = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar34) {
        FUN_100403514(1 < *(ulong *)(puVar4 + 0x18),uVar34 + 1,1);
      }
      puVar4 = apuStack_188[0];
      uVar33 = uVar33 + 1;
      *(ulong *)(apuStack_188[0] + 0x10) = uVar34 + 1;
      *(undefined8 *)(apuStack_188[0] + uVar34 * 0x10 + 0x20) = uVar13;
      *(undefined8 *)(apuStack_188[0] + uVar34 * 0x10 + 0x28) = uVar12;
    } while (uVar27 != uVar33);
    func_0x000107c6142c(uVar25);
  }
  apuStack_188[0] = puVar22;
  FUN_10040448c(puVar4);
  func_0x000107c6142c(puVar4);
  puVar4 = apuStack_188[0];
  if (uVar28 == 0) {
    func_0x000107c6142c(uVar30);
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_1a0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar18,0);
    if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b28);
      (*pcVar1)();
    }
    uVar33 = 0;
    do {
      puVar22 = apuStack_1a0[0];
      if ((uVar30 & 0xc000000000000001) == 0) {
        uVar25 = *(ulong *)(uVar30 + uVar33 * 8 + 0x20);
        func_0x000107c6157c(uVar25);
      }
      else {
        uVar25 = uVar33;
        func_0x00010178fa00();
      }
      func_0x000107c61428(uVar25 + 0x10,apuStack_188,0,0);
      uVar13 = *(undefined8 *)(uVar25 + 0x10);
      uVar12 = *(undefined8 *)(uVar25 + 0x18);
      func_0x000107c61434(uVar12);
      func_0x000107c61574(uVar25);
      uVar25 = *(ulong *)(puVar22 + 0x10);
      apuStack_1a0[0] = puVar22;
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar25) {
        FUN_100403514(1 < *(ulong *)(puVar22 + 0x18),uVar25 + 1,1);
      }
      puVar22 = apuStack_1a0[0];
      uVar33 = uVar33 + 1;
      *(ulong *)(apuStack_1a0[0] + 0x10) = uVar25 + 1;
      *(undefined8 *)(apuStack_1a0[0] + uVar25 * 0x10 + 0x20) = uVar13;
      *(undefined8 *)(apuStack_1a0[0] + uVar25 * 0x10 + 0x28) = uVar12;
    } while (uVar28 != uVar33);
    func_0x000107c6142c(uVar30);
  }
  apuStack_1a0[0] = puVar4;
  FUN_10040448c(puVar22);
  func_0x000107c6142c(puVar22);
  puVar4 = apuStack_1a0[0];
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c6142c(puVar5);
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_1c0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar31,0);
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b2c);
      (*pcVar1)();
    }
    puVar32 = (undefined *)0x0;
    do {
      puVar22 = apuStack_1c0[0];
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        puVar26 = *(undefined **)(puVar5 + (long)puVar32 * 8 + 0x20);
        func_0x000107c6157c(puVar26);
      }
      else {
        puVar26 = puVar32;
        func_0x00010178fbb4();
      }
      func_0x000107c61428(puVar26 + 0x10,apuStack_1a0,0,0);
      uVar13 = *(undefined8 *)(puVar26 + 0x10);
      uVar12 = *(undefined8 *)(puVar26 + 0x18);
      func_0x000107c61434(uVar12);
      func_0x000107c61574(puVar26);
      uVar33 = *(ulong *)(puVar22 + 0x10);
      apuStack_1c0[0] = puVar22;
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar33) {
        FUN_100403514(1 < *(ulong *)(puVar22 + 0x18),uVar33 + 1,1);
      }
      puVar22 = apuStack_1c0[0];
      puVar32 = puVar32 + 1;
      *(ulong *)(apuStack_1c0[0] + 0x10) = uVar33 + 1;
      *(undefined8 *)(apuStack_1c0[0] + uVar33 * 0x10 + 0x20) = uVar13;
      *(undefined8 *)(apuStack_1c0[0] + uVar33 * 0x10 + 0x28) = uVar12;
    } while (puVar6 != puVar32);
    func_0x000107c6142c(puVar5);
  }
  apuStack_1c0[0] = puVar4;
  FUN_10040448c(puVar22);
  func_0x000107c6142c(puVar22);
  puVar4 = apuStack_1c0[0];
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar22 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar22 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar22 = puVar7;
    }
    func_0x000107c60480();
  }
  if (puVar22 == (undefined *)0x0) {
    func_0x000107c6142c(puVar7);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_1a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,(ulong)puVar22 & ((long)puVar22 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100401b30);
      (*pcVar1)();
    }
    puVar6 = (undefined *)0x0;
    do {
      puVar5 = puStack_1a8;
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        puVar32 = *(undefined **)(puVar7 + (long)puVar6 * 8 + 0x20);
        func_0x000107c6157c(puVar32);
      }
      else {
        puVar32 = puVar6;
        func_0x00010178fd68(puVar6,puVar7);
      }
      func_0x000107c61428(puVar32 + 0x10,apuStack_1c0,0,0);
      uVar13 = *(undefined8 *)(puVar32 + 0x10);
      uVar12 = *(undefined8 *)(puVar32 + 0x18);
      func_0x000107c61434(uVar12);
      func_0x000107c61574(puVar32);
      uVar33 = *(ulong *)(puVar5 + 0x10);
      puStack_1a8 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar33) {
        FUN_100403514(1 < *(ulong *)(puVar5 + 0x18),uVar33 + 1,1);
      }
      puVar5 = puStack_1a8;
      puVar6 = puVar6 + 1;
      *(ulong *)(puStack_1a8 + 0x10) = uVar33 + 1;
      *(undefined8 *)(puStack_1a8 + uVar33 * 0x10 + 0x20) = uVar13;
      *(undefined8 *)(puStack_1a8 + uVar33 * 0x10 + 0x28) = uVar12;
    } while (puVar22 != puVar6);
    func_0x000107c6142c(puVar7);
  }
  puStack_1a8 = puVar4;
  FUN_10040448c(puVar5);
  func_0x000107c6142c(puVar5);
  puVar22 = puStack_1a8;
  FUN_1000285a8(0x112dbe700,&UNK_10d990210);
  uVar12 = *(undefined8 *)(unaff_x20[3] + _DAT_11308b848);
  func_0x000107c61174();
  uVar13 = uVar12;
  FUN_1000bda74();
  func_0x000107c61170(uVar12);
  FUN_1000285a8(0x112d39420,&UNK_10d979900);
  uVar14 = *(undefined8 *)(unaff_x20[5] + _DAT_113083868);
  func_0x000107c61174();
  uVar12 = uVar14;
  FUN_1000bda74();
  func_0x000107c61170(uVar14);
  puVar4 = &UNK_1104098b0;
  func_0x000107c613fc(&UNK_1104098b0,0x70,7);
  *(undefined **)(puVar4 + 0x10) = puVar22;
  *(undefined8 *)(puVar4 + 0x18) = uVar12;
  *(ulong *)(puVar4 + 0x20) = uVar20;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar2;
  *(ulong *)(puVar4 + 0x38) = uVar24;
  *(undefined8 *)(puVar4 + 0x40) = uVar8;
  *(undefined8 *)(puVar4 + 0x48) = uVar9;
  *(undefined8 *)(puVar4 + 0x50) = uVar10;
  *(ulong *)(puVar4 + 0x58) = uVar23;
  *(undefined8 *)(puVar4 + 0x60) = uVar13;
  *(undefined8 *)(puVar4 + 0x68) = uVar19;
  func_0x000107c613fc(uVar15,0x18,7);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar24);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar13);
  puVar22 = &UNK_101790d38;
  FUN_1000bdd8c(&UNK_101790d38,puVar4);
  uVar15 = 0;
  FUN_10022f610(0);
  func_0x000107c610f8();
  FUN_1004089d0(puVar22,uVar15);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar12);
  return puVar22;
}



/* Entry: 100401b30; end: 100401ba3;  */

void FUN_100401b30(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100401ba4; end: 100401bb3;  */

long FUN_100401ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [112];
  
  puVar1 = &UNK_10d98f110;
  func_0x000107c614e0(&UNK_10d98f110);
  puVar2 = &UNK_11040a2b0;
  func_0x000107c613fc(&UNK_11040a2b0,0x30,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10187a12c;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  puVar3 = &UNK_11040a2d8;
  func_0x000107c613fc(&UNK_11040a2d8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10187a12c;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  lVar4 = -0x2fffffffffffffeb;
  FUN_100401db8(auStack_c0,0xd000000000000015,0x800000010efbc500,puVar1,&UNK_10187a1d0,0,
                &UNK_10187a5a8,puVar2,PTR___swiftEmptyArrayStorage_11034f1c8,&UNK_10187a5b4,puVar3);
  FUN_100401de4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  func_0x000107c61580(0,2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar5 = 0x112dcc718;
  FUN_1000285a8(0x112dcc718,&UNK_10d98f130);
  FUN_100401efc();
  func_0x0001004021d0(auStack_c0);
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  return lVar4;
}



/* Entry: 100401bb4; end: 100401d0f;  */

long FUN_100401bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [112];
  
  puVar1 = &UNK_10d98f110;
  func_0x000107c614e0(&UNK_10d98f110);
  puVar2 = &UNK_11040a2b0;
  func_0x000107c613fc(&UNK_11040a2b0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  puVar3 = &UNK_11040a2d8;
  func_0x000107c613fc(&UNK_11040a2d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  lVar4 = -0x2fffffffffffffeb;
  FUN_100401db8(auStack_c0,0xd000000000000015,0x800000010efbc500,puVar1,&UNK_10187a1d0,0,
                &UNK_10187a5a8,puVar2,PTR___swiftEmptyArrayStorage_11034f1c8,&UNK_10187a5b4,puVar3);
  FUN_100401de4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  func_0x000107c61580(param_4,2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar5 = 0x112dcc718;
  FUN_1000285a8(0x112dcc718,&UNK_10d98f130);
  FUN_100401efc();
  func_0x0001004021d0(auStack_c0);
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  return lVar4;
}



/* Entry: 100401d10; end: 100401d67;  */

void FUN_100401d10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100401d68; end: 100401db7;  */

undefined1  [16] FUN_100401d68(void)

{
  return ZEXT816(0x110753b10);
}



/* Entry: 100401db8; end: 100401de3;  */

void FUN_100401db8(void)

{
  func_0x000100401d88();
  return;
}



/* Entry: 100401de4; end: 100401e07;  */

void FUN_100401de4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  lVar3 = 0x112dcbc20;
  puVar4 = (ulong *)0x112dcbea8;
  plVar5 = (long *)&UNK_10d98e4f8;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(0x112dcbc20,&UNK_10d98e260), lVar3 != 0)) {
    puVar4 = (ulong *)0x112d36e60;
    plVar5 = (long *)&UNK_10d901170;
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100401e08; end: 100401e7b;  */

void FUN_100401e08(long param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(param_1,param_2), param_1 != 0)) {
    param_3 = (ulong *)0x112d36e60;
    param_4 = (long *)&UNK_10d901170;
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100401e7c; end: 100401e8b;  */

void FUN_100401e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6552c8);
  return;
}



/* Entry: 100401e8c; end: 100401ee7;  */

void FUN_100401e8c(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = &UNK_10d98fc08;
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x58);
  return;
}



/* Entry: 100401ee8; end: 100401efb;  */

void FUN_100401ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e655298);
  return;
}



/* Entry: 100401efc; end: 100401f7b;  */

undefined8 FUN_100401efc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [112];
  
  uVar1 = 0;
  FUN_100401e7c(0,*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*(long *)(param_1 + -8) + 0x10))(auStack_a0);
  func_0x000107c613fc(uVar1,0x38,7);
  FUN_100402074();
  return uVar1;
}



/* Entry: 100401f7c; end: 10040206b;  */

undefined8 * FUN_100401f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  uVar1 = param_2[3];
  param_1[2] = uVar3;
  uVar5 = param_2[4];
  uVar2 = *(undefined1 *)(param_2 + 5);
  func_0x000107c61434();
  func_0x000107c6157c(uVar3);
  FUN_10040206c(uVar1,uVar5,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar5;
  *(undefined1 *)(param_1 + 5) = uVar2;
  lVar4 = param_2[7];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  if (lVar4 == 0) {
    lVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar4;
  }
  else {
    uVar3 = param_2[8];
    param_1[7] = lVar4;
    param_1[8] = uVar3;
    func_0x000107c6157c();
  }
  lVar4 = param_2[9];
  if (lVar4 == 0) {
    lVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = lVar4;
  }
  else {
    uVar3 = param_2[10];
    param_1[9] = lVar4;
    param_1[10] = uVar3;
    func_0x000107c6157c();
  }
  lVar4 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  if (lVar4 == 0) {
    lVar4 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar4;
  }
  else {
    uVar3 = param_2[0xd];
    param_1[0xc] = lVar4;
    param_1[0xd] = uVar3;
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10040206c; end: 100402073;  */

void FUN_10040206c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100402074; end: 100402123;  */

void FUN_100402074(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  
  lVar3 = *unaff_x20;
  lStack_48 = param_1[1];
  lStack_50 = *param_1;
  unaff_x20[3] = lStack_48;
  unaff_x20[2] = lStack_50;
  lVar2 = param_1[2];
  unaff_x20[4] = lVar2;
  puVar1 = &UNK_11040b078;
  func_0x000107c613fc(&UNK_11040b078,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  lVar3 = param_1[8];
  lVar5 = param_1[0xb];
  lVar4 = param_1[10];
  *(long *)(puVar1 + 0x68) = param_1[9];
  *(long *)(puVar1 + 0x60) = lVar3;
  *(long *)(puVar1 + 0x78) = lVar5;
  *(long *)(puVar1 + 0x70) = lVar4;
  lVar3 = param_1[0xc];
  *(long *)(puVar1 + 0x88) = param_1[0xd];
  *(long *)(puVar1 + 0x80) = lVar3;
  lVar3 = *param_1;
  lVar5 = param_1[3];
  lVar4 = param_1[2];
  *(long *)(puVar1 + 0x28) = param_1[1];
  *(long *)(puVar1 + 0x20) = lVar3;
  *(long *)(puVar1 + 0x38) = lVar5;
  *(long *)(puVar1 + 0x30) = lVar4;
  lVar5 = param_1[4];
  lVar4 = param_1[7];
  lVar3 = param_1[6];
  *(long *)(puVar1 + 0x48) = param_1[5];
  *(long *)(puVar1 + 0x40) = lVar5;
  *(long *)(puVar1 + 0x58) = lVar4;
  *(long *)(puVar1 + 0x50) = lVar3;
  unaff_x20[5] = (long)&UNK_10188aed4;
  unaff_x20[6] = (long)puVar1;
  FUN_100402194(&lStack_50,auStack_60);
  func_0x000107c6157c(lVar2);
  return;
}



/* Entry: 100402124; end: 100402193;  */

void FUN_100402124(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100402290(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined1 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100402194; end: 10040228f;  */

undefined8 FUN_100402194(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___sSSN_11034da80 + -8) + 0x10))(param_2,param_1);
  return param_2;
}



/* Entry: 100402290; end: 1004022b3;  */

void FUN_100402290(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 1004022b4; end: 1004027df;  */

long FUN_1004022b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_378 [112];
  undefined1 auStack_308 [112];
  undefined1 auStack_298 [112];
  undefined1 auStack_228 [112];
  undefined1 auStack_1b8 [112];
  undefined1 auStack_148 [112];
  undefined8 auStack_d8 [15];
  
  puVar2 = &UNK_10d98ee48;
  func_0x000107c614e0(&UNK_10d98ee48);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100402814(auStack_378,0xd000000000000019,0x800000010efbc320,puVar2,&UNK_101878674,0,
                &UNK_101877cbc,0,PTR___swiftEmptyArrayStorage_11034f1c8,0,0);
  puVar2 = &UNK_10d98ee68;
  func_0x000107c614e0(&UNK_10d98ee68);
  FUN_100402814(auStack_308,0xd000000000000019,0x800000010efbc340,puVar2,&UNK_101878678,0,
                &UNK_101877d30,0,puVar1,0,0);
  puVar2 = &UNK_10d98ee88;
  func_0x000107c614e0();
  auStack_d8[0] = 3;
  puVar3 = puVar2;
  FUN_10040284c();
  lVar4 = 0x617070696b536461;
  FUN_10040288c(auStack_298,0x617070696b536461,0xef65707954656c62,puVar2,&UNK_10187867c,0,
                &UNK_101877d88,0,auStack_d8,puVar1,0,0,puVar3);
  FUN_100401de4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0xf;
  *(undefined8 *)(lVar4 + 0x10) = 7;
  uVar5 = 0x112dcc6c0;
  FUN_1000285a8(0x112dcc6c0,&UNK_10d98eea8);
  uVar6 = uVar5;
  FUN_100401efc();
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  uVar6 = uVar5;
  FUN_100401efc();
  *(undefined8 *)(lVar4 + 0x28) = uVar6;
  puVar2 = &UNK_10d98eeb0;
  func_0x000107c614e0(&UNK_10d98eeb0);
  puVar3 = &UNK_11040a148;
  func_0x000107c613fc(&UNK_11040a148,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  puVar7 = &UNK_11040a170;
  func_0x000107c613fc(&UNK_11040a170,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = param_2;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  FUN_100402814(auStack_228,0xd000000000000021,0x800000010efbc360,puVar2,&UNK_10187bc38,0,
                &UNK_101877e1c,puVar3,puVar1,&UNK_101877e28,puVar7);
  func_0x000107c61580(param_3,2);
  func_0x000107c6157c(param_1);
  FUN_100401efc();
  FUN_1004029dc(auStack_228,0x112dcc6c0,&UNK_10d98eea8);
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  puVar2 = &UNK_10d98eed0;
  func_0x000107c614e0(&UNK_10d98eed0);
  puVar3 = &UNK_11040a198;
  func_0x000107c613fc(&UNK_11040a198,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  puVar7 = &UNK_11040a1c0;
  func_0x000107c613fc(&UNK_11040a1c0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = param_2;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  FUN_100402814(auStack_1b8,0x756f436570697773,0xea0000000000746e,puVar2,&UNK_10187d4ec,0,
                &UNK_101877e5c,puVar3,puVar1,&UNK_101877e68,puVar7);
  func_0x000107c61580(param_3,2);
  func_0x000107c6157c(param_1);
  uVar5 = 0x112dcc6c8;
  FUN_1000285a8(0x112dcc6c8,&UNK_10d98eef0);
  FUN_100401efc();
  FUN_1004029dc(auStack_1b8,0x112dcc6c8,&UNK_10d98eef0);
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  uVar5 = 0x112dcc6d0;
  FUN_1000285a8(0x112dcc6d0,&UNK_10d98eef8);
  FUN_100401efc();
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  puVar2 = &UNK_10d98ef00;
  func_0x000107c614e0();
  FUN_100402814(auStack_148,0xd000000000000019,0x800000010efbc390,puVar2,&UNK_101878de0,0,
                &UNK_101877e70,0,puVar1,0,0);
  uVar5 = 0x112dcc6d8;
  FUN_1000285a8(0x112dcc6d8,&UNK_10d98ef20);
  FUN_100401efc();
  FUN_1004029dc(auStack_148,0x112dcc6d8,&UNK_10d98ef20);
  *(undefined8 *)(lVar4 + 0x48) = uVar5;
  puVar2 = &UNK_10d98ef28;
  func_0x000107c614e0();
  puVar3 = &UNK_11040a1e8;
  func_0x000107c613fc(&UNK_11040a1e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  FUN_100402814(auStack_d8,0xd000000000000016,0x800000010efbc3b0,puVar2,&UNK_10187e350,0,
                &UNK_101877e74,puVar3,puVar1,0,0);
  func_0x000107c6157c(param_5);
  uVar5 = 0x112dcc6e0;
  FUN_1000285a8(0x112dcc6e0,&UNK_10d98ef48);
  FUN_100401efc();
  FUN_1004029dc(auStack_d8,0x112dcc6e0,&UNK_10d98ef48);
  FUN_1004029dc(auStack_298,0x112dcc6d0,&UNK_10d98eef8);
  FUN_1004029dc(auStack_308,0x112dcc6c0,&UNK_10d98eea8);
  FUN_1004029dc(auStack_378,0x112dcc6c0,&UNK_10d98eea8);
  *(undefined8 *)(lVar4 + 0x50) = uVar5;
  return lVar4;
}



/* Entry: 1004027e0; end: 1004027e3;  */

void FUN_1004027e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004027e4; end: 100402807;  */

void FUN_1004027e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100402808; end: 100402813;  */

void FUN_100402808(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100402814; end: 10040283b;  */

void FUN_100402814(void)

{
  func_0x000100401d88();
  return;
}



/* Entry: 10040283c; end: 10040284b;  */

undefined1  [16] FUN_10040283c(void)

{
  return ZEXT816(0x110798368);
}



/* Entry: 10040284c; end: 10040288b;  */

void FUN_10040284c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc6b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29360;
  func_0x000107c61520(&UNK_10dd29360,&UNK_110798368);
  puRam0000000112dcc6b8 = puVar1;
  return;
}



/* Entry: 10040288c; end: 1004029d7;  */

void FUN_10040288c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  long extraout_x8;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_98 = param_11;
  uStack_a0 = param_10;
  uStack_88 = param_12;
  lVar5 = *param_4;
  lVar7 = *(long *)(lVar5 + *(long *)PTR___ss15WritableKeyPathCMo_11034e720 + 8);
  lVar3 = *(long *)(lVar7 + -8);
  lVar8 = *(long *)(lVar3 + 0x40);
  uStack_a8 = param_3;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_5;
  uStack_68 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar8 + 0xfU & 0xfffffffffffffff0);
  pcVar6 = *(code **)(lVar3 + 0x20);
  (*pcVar6)(auStack_b0 + -extraout_x8,param_9,lVar7);
  uVar2 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_11040acd0;
  func_0x000107c613fc(&UNK_11040acd0,uVar4 + lVar8,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) =
       *(undefined8 *)(lVar5 + *(long *)PTR___ss15WritableKeyPathCMo_11034e720);
  *(long *)(puVar1 + 0x18) = lVar7;
  *(undefined8 *)(puVar1 + 0x20) = param_13;
  (*pcVar6)(puVar1 + uVar4,auStack_b0 + -extraout_x8,lVar7);
  *param_1 = param_2;
  param_1[1] = uStack_a8;
  param_1[2] = param_4;
  param_1[3] = uStack_80;
  param_1[4] = uStack_78;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_88;
  param_1[9] = &UNK_10188af98;
  param_1[10] = puVar1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = uStack_70;
  param_1[0xd] = uStack_68;
  return;
}



/* Entry: 1004029d8; end: 1004029db;  */

void FUN_1004029d8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004029dc; end: 100402a1b;  */

undefined8 FUN_1004029dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100402a1c; end: 100402a6f; -[SCFideliusIdentityArchiveManager _loadIdentityFromKeyChain] */

void FUN_100402a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x000107c41238(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e0ef18);
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_100408474();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100402a70; end: 100402aab; +[SCKeychainManager dataForKey:] */

void FUN_100402a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dataForKey_status__1125b6870,param_3,0);
  return;
}



/* Entry: 100402aac; end: 100402bbb;  */

void FUN_100402aac(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    (*param_2)(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_100402eb8(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,param_3,param_4,
                  param_5);
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100402bb8);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100402bbc);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100402bb4);
  (*pcVar1)();
}



/* Entry: 100402bbc; end: 100402db3;  */

void FUN_100402bbc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x000100402c6c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100402db4; end: 100402e27;  */

void FUN_100402db4(long param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(param_1,param_2), param_1 != 0)) {
    param_3 = (ulong *)0x112d36e60;
    param_4 = (long *)&UNK_10d901170;
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100402e28; end: 100402eb7;  */

undefined *
FUN_100402e28(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_100402db4(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 100402eb8; end: 100403027;  */

ulong FUN_100402eb8(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100403028);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10040301c);
        (*pcVar1)();
      }
      FUN_1000285a8(param_4,param_5);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,param_4);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100403020);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100403024);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c6157c(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c6157c(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          (*param_6)(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 100403028; end: 100403083;  */

void FUN_100403028(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10040313c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto FUN_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dcbea0;
  plVar5 = (long *)&UNK_10d98e4f0;
FUN_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100403084; end: 10040313b;  */

long FUN_100403084(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_100403028();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  uStack_68 = 0x6576655f74697865;
  uStack_60 = 0xea0000000000746e;
  uStack_58 = 0x6576655f74697865;
  uStack_50 = 0xea0000000000746e;
  puStack_48 = &UNK_10187e540;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 1;
  uVar1 = 0x112dcc730;
  FUN_1000285a8(0x112dcc730,&UNK_10d98f1d0);
  FUN_100403170();
  FUN_10040336c(&uStack_68);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return param_1;
}



/* Entry: 10040313c; end: 10040315b;  */

void FUN_10040313c(void)

{
  func_0x000107c61168(&PTR_PTR_112dcd178);
  return;
}



/* Entry: 10040315c; end: 10040316f;  */

void FUN_10040315c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e655420);
  return;
}



/* Entry: 100403170; end: 1004031e7;  */

long FUN_100403170(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  lVar1 = param_1;
  FUN_10040313c();
  (**(code **)(*(long *)(param_1 + -8) + 0x10))(auStack_78);
  func_0x000107c613fc(lVar1,0x40,7);
  FUN_10040328c();
  return lVar1;
}



/* Entry: 1004031e8; end: 10040328b;  */

undefined8 * FUN_1004031e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[5];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  param_1[5] = uVar1;
  lVar2 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(uVar1);
  if (lVar2 == 0) {
    lVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar2;
  }
  else {
    uVar1 = param_2[7];
    param_1[6] = lVar2;
    param_1[7] = uVar1;
    func_0x000107c6157c();
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 10040328c; end: 100403327;  */

void FUN_10040328c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_38;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_50;
  puVar1 = &UNK_11040b350;
  func_0x000107c613fc(&UNK_11040b350,0x59,7);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar2 = param_1[2];
  *(undefined8 *)(puVar1 + 0x30) = param_1[3];
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  uVar2 = param_1[4];
  uVar6 = param_1[7];
  uVar5 = param_1[6];
  *(undefined8 *)(puVar1 + 0x40) = param_1[5];
  *(undefined8 *)(puVar1 + 0x38) = uVar2;
  *(undefined8 *)(puVar1 + 0x50) = uVar6;
  *(undefined8 *)(puVar1 + 0x48) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  puVar1[0x58] = *(undefined1 *)(param_1 + 8);
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  *(undefined **)(unaff_x20 + 0x30) = &UNK_10188ca34;
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  FUN_100402194(&uStack_40,auStack_60);
  FUN_100402194(&uStack_50,auStack_60);
  return;
}



/* Entry: 100403328; end: 10040336b;  */

void FUN_100403328(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040336c; end: 1004033ff;  */

undefined8 FUN_10040336c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dcc730;
  FUN_1000285a8(0x112dcc730,&UNK_10d98f1d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100403400; end: 100403513;  */

undefined *
FUN_100403400(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100403514);
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
    puVar3 = (undefined *)0x112d38280;
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 100403514; end: 100403537;  */

void FUN_100403514(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100403400();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100403538; end: 100403a6b;  */

ulong FUN_100403538(undefined *param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined *apuStack_c0 [9];
  undefined1 auStack_78 [24];
  
  if (param_2 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar17 = param_2;
    }
    func_0x000107c60480();
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 != 0) {
    apuStack_c0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100403514(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100403a6c);
      (*pcVar5)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      puVar15 = apuStack_c0[0];
      plVar19 = (long *)(param_2 + 0x20);
      do {
        lVar14 = *plVar19;
        func_0x000107c61428(lVar14 + 0x10,auStack_78,0,0);
        uVar2 = *(undefined8 *)(lVar14 + 0x10);
        uVar3 = *(undefined8 *)(lVar14 + 0x18);
        uVar18 = *(ulong *)(puVar15 + 0x10);
        uVar7 = *(ulong *)(puVar15 + 0x18);
        apuStack_c0[0] = puVar15;
        func_0x000107c61434(uVar3);
        if (uVar7 >> 1 <= uVar18) {
          FUN_100403514(1 < uVar7,uVar18 + 1,1);
          puVar15 = apuStack_c0[0];
        }
        *(ulong *)(puVar15 + 0x10) = uVar18 + 1;
        *(undefined8 *)(puVar15 + uVar18 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(puVar15 + uVar18 * 0x10 + 0x28) = uVar3;
        uVar17 = uVar17 - 1;
        plVar19 = plVar19 + 1;
      } while (uVar17 != 0);
    }
    else {
      uVar18 = 0;
      do {
        puVar15 = apuStack_c0[0];
        uVar7 = uVar18;
        func_0x00010178f84c(uVar18,param_2);
        func_0x000107c61428(uVar7 + 0x10,auStack_78,0,0);
        uVar2 = *(undefined8 *)(uVar7 + 0x10);
        uVar3 = *(undefined8 *)(uVar7 + 0x18);
        func_0x000107c61434(uVar3);
        func_0x000107c615e8(uVar7);
        uVar7 = *(ulong *)(puVar15 + 0x10);
        apuStack_c0[0] = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar7) {
          FUN_100403514(1 < *(ulong *)(puVar15 + 0x18),uVar7 + 1,1);
        }
        uVar18 = uVar18 + 1;
        *(ulong *)(apuStack_c0[0] + 0x10) = uVar7 + 1;
        *(undefined8 *)(apuStack_c0[0] + uVar7 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(apuStack_c0[0] + uVar7 * 0x10 + 0x28) = uVar3;
        puVar15 = apuStack_c0[0];
      } while (uVar17 != uVar18);
    }
  }
  puVar8 = puVar15;
  FUN_100403a6c();
  func_0x000107c6142c(puVar15);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar15 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar15 = param_1;
    }
    func_0x000107c60480();
  }
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar9 = puVar10;
    }
    func_0x000107c60480();
  }
  if ((long)puVar9 <= (long)puVar15) {
    puVar9 = puVar15;
  }
  uVar17 = 0;
  FUN_100403da8(0,puVar9,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar10 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar15 = (undefined *)0x0;
      puVar9 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar15 == puVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100403a24);
          (*pcVar5)();
        }
        lVar14 = *(long *)(param_1 + (long)puVar15 * 8 + 0x20);
        if (*(long *)(puVar8 + 0x10) == 0) {
          func_0x000107c6157c(lVar14);
        }
        else {
          uVar18 = *(ulong *)(lVar14 + 0x10);
          uVar7 = *(ulong *)(lVar14 + 0x18);
          func_0x000107c6068c(apuStack_c0,*(undefined8 *)(puVar8 + 0x28));
          func_0x000107c6157c(lVar14);
          ppuVar11 = apuStack_c0;
          func_0x000107c5fb58(ppuVar11,uVar18,uVar7);
          func_0x000107c606a8();
          uVar13 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar16 = (ulong)ppuVar11 & (uVar13 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar16 * 0x10);
              uVar12 = *puVar1;
              uVar4 = puVar1[1];
              if ((uVar12 == uVar18 && uVar4 == uVar7) ||
                 (func_0x000107c605b8(uVar12,uVar4,uVar18,uVar7,0), (uVar12 & 1) != 0))
              goto LAB_100403834;
              uVar16 = uVar16 + 1 & ~uVar13;
            } while ((*(ulong *)(puVar8 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6157c(lVar14);
        uVar18 = uVar17;
        if (uVar17 >> 0x3e != 0) {
          uVar7 = uVar17 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar17) {
            uVar7 = uVar17;
          }
          func_0x000107c60480(uVar7);
          uVar18 = 0;
          FUN_100403da8(0,uVar7 + 1,1,uVar17);
        }
        uVar13 = uVar18 & 0xffffffffffffff8;
        uVar7 = *(ulong *)(uVar13 + 0x10);
        uVar17 = uVar18;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar7) {
          uVar17 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_100403da8(uVar17,uVar7 + 1,1,uVar18);
          uVar13 = uVar17 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar7 + 1;
        *(long *)(uVar13 + uVar7 * 8 + 0x20) = lVar14;
LAB_100403834:
        puVar15 = puVar15 + 1;
        func_0x000107c61574(lVar14);
      } while (puVar15 != puVar10);
    }
    else {
      puVar15 = (undefined *)0x0;
      do {
        puVar9 = puVar15;
        func_0x00010178f6b0(puVar15,param_1);
        bVar6 = SCARRY8((long)puVar15,1);
        puVar15 = puVar15 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100403a20);
          (*pcVar5)();
        }
        if (*(long *)(puVar8 + 0x10) != 0) {
          uVar18 = *(ulong *)(puVar9 + 0x10);
          uVar7 = *(ulong *)(puVar9 + 0x18);
          func_0x000107c6068c(apuStack_c0,*(undefined8 *)(puVar8 + 0x28));
          ppuVar11 = apuStack_c0;
          func_0x000107c5fb58(ppuVar11,uVar18,uVar7);
          func_0x000107c606a8();
          uVar13 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar16 = (ulong)ppuVar11 & (uVar13 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar16 * 0x10);
              uVar12 = *puVar1;
              uVar4 = puVar1[1];
              if ((uVar12 == uVar18 && uVar4 == uVar7) ||
                 (func_0x000107c605b8(uVar12,uVar4,uVar18,uVar7,0), (uVar12 & 1) != 0))
              goto LAB_1004036d4;
              uVar16 = uVar16 + 1 & ~uVar13;
            } while ((*(ulong *)(puVar8 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c615f0(puVar9);
        uVar18 = uVar17;
        if (uVar17 >> 0x3e != 0) {
          uVar7 = uVar17 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar17) {
            uVar7 = uVar17;
          }
          func_0x000107c60480(uVar7);
          uVar18 = 0;
          FUN_100403da8(0,uVar7 + 1,1,uVar17);
        }
        uVar13 = uVar18 & 0xffffffffffffff8;
        uVar7 = *(ulong *)(uVar13 + 0x10);
        uVar17 = uVar18;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar7) {
          uVar17 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_100403da8(uVar17,uVar7 + 1,1,uVar18);
          uVar13 = uVar17 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar7 + 1;
        *(undefined **)(uVar13 + uVar7 * 8 + 0x20) = puVar9;
LAB_1004036d4:
        func_0x000107c615e8(puVar9);
      } while (puVar15 != puVar10);
    }
  }
  func_0x000107c6142c(puVar8);
  return uVar17;
}



/* Entry: 100403a6c; end: 100403aff;  */

void FUN_100403a6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = lVar4;
  func_0x000107c5fe14(lVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    lStack_48 = lVar3;
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      func_0x000107c61434(uVar2);
      FUN_100403b00(auStack_58,uVar1,uVar2);
      func_0x000107c6142c(uStack_50);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 100403b00; end: 100403da7;  */

undefined8 FUN_100403b00(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  long alStack_98 [9];
  
  lVar7 = *unaff_x20;
  func_0x000107c6068c(alStack_98,*(undefined8 *)(lVar7 + 0x28));
  plVar3 = alStack_98;
  func_0x000107c5fb58(plVar3,param_2,param_3);
  func_0x000107c606a8();
  uVar5 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar6 = (ulong)plVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_2 && uVar2 == param_3) ||
         (func_0x000107c605b8(uVar4,uVar2,param_2,param_3,0), (uVar4 & 1) != 0)) {
        func_0x000107c6142c(param_3);
        puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
        uVar5 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar5;
        func_0x000107c61434();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar7 = *unaff_x20;
  func_0x000107c61558(lVar7);
  alStack_98[0] = *unaff_x20;
  func_0x000107c61434(param_3);
  func_0x000100403c44(param_2,param_3,uVar6,lVar7);
  *unaff_x20 = alStack_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Entry: 100403da8; end: 100403ecf;  */

ulong FUN_100403da8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100403ed0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100403ed0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100403ecc);
      (*pcVar1)();
    }
    FUN_100403f50(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100403ed0; end: 100403f4f;  */

undefined * FUN_100403ed0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100403028();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100403f50; end: 100404047;  */

long FUN_100403f50(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100404044);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100404048);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10040313c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10040313c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100404040);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100404048; end: 100404407;  */

long FUN_100404048(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_370 [112];
  undefined1 auStack_300 [112];
  undefined1 auStack_290 [112];
  undefined1 auStack_220 [112];
  undefined1 auStack_1b0 [112];
  undefined1 auStack_140 [112];
  undefined1 auStack_d0 [112];
  
  puVar2 = &UNK_10d98ef50;
  func_0x000107c614e0(&UNK_10d98ef50);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100402814(auStack_370,0xd000000000000012,0x800000010efbc3d0,puVar2,0,0,&UNK_101878680,0,
                PTR___swiftEmptyArrayStorage_11034f1c8,0,0);
  puVar2 = &UNK_10d98ef70;
  func_0x000107c614e0(&UNK_10d98ef70);
  FUN_100402814(auStack_300,0xd000000000000019,0x800000010efbc3f0,puVar2,0,0,&UNK_101878688,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98ef90;
  func_0x000107c614e0(&UNK_10d98ef90);
  FUN_100401db8(auStack_290,0xd000000000000019,0x800000010efbc410,puVar2,0,0,&UNK_10187876c,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98efb0;
  func_0x000107c614e0(&UNK_10d98efb0);
  FUN_100401db8(auStack_220,0xd000000000000020,0x800000010efbc430,puVar2,0,0,&UNK_101878774,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98efd0;
  func_0x000107c614e0(&UNK_10d98efd0);
  FUN_100401db8(auStack_1b0,0xd000000000000018,0x800000010efbc460,puVar2,0,0,&UNK_10187883c,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98eff0;
  func_0x000107c614e0(&UNK_10d98eff0);
  FUN_100402814(auStack_140,0x6b6e694c70656564,0xeb00000000495255,puVar2,0,0,&UNK_1018788dc,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98f010;
  func_0x000107c614e0(&UNK_10d98f010);
  lVar3 = -0x2fffffffffffffee;
  FUN_100402814(auStack_d0,0xd000000000000012,0x800000010efbc480,puVar2,0,0,&UNK_101878ab4,0,puVar1,
                0,0);
  func_0x000100404418();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0xf;
  *(undefined8 *)(lVar3 + 0x10) = 7;
  uVar4 = 0x112dcc6e8;
  FUN_1000285a8(0x112dcc6e8,&UNK_10d98f030);
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = 0x112dcc6f0;
  FUN_1000285a8(0x112dcc6f0,&UNK_10d98f038);
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x40) = uVar5;
  uVar5 = 0x112dcc6f8;
  FUN_1000285a8(0x112dcc6f8,&UNK_10d98f040);
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x48) = uVar5;
  FUN_100401efc();
  FUN_10040444c(auStack_d0,0x112dcc6f0,&UNK_10d98f038);
  FUN_10040444c(auStack_140,0x112dcc6f8,&UNK_10d98f040);
  FUN_10040444c(auStack_1b0,0x112dcc6f0,&UNK_10d98f038);
  FUN_10040444c(auStack_220,0x112dcc6f0,&UNK_10d98f038);
  FUN_10040444c(auStack_290,0x112dcc6f0,&UNK_10d98f038);
  FUN_10040444c(auStack_300,0x112dcc6e8,&UNK_10d98f030);
  FUN_10040444c(auStack_370,0x112dcc6e8,&UNK_10d98f030);
  *(undefined8 *)(lVar3 + 0x50) = uVar4;
  return lVar3;
}



/* Entry: 100404408; end: 10040444b;  */

undefined1  [16] FUN_100404408(void)

{
  return ZEXT816(0x1107527d8);
}



/* Entry: 10040444c; end: 10040448b;  */

undefined8 FUN_10040444c(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10040448c; end: 1004044f7;  */

void FUN_10040448c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      func_0x000107c61434(uVar2);
      FUN_100403b00(auStack_50,uVar1,uVar2);
      func_0x000107c6142c(uStack_48);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1004044f8; end: 100404aa7;  */

ulong FUN_1004044f8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100404658);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100402e28(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100404654);
      (*pcVar1)();
    }
    FUN_100404aa8(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100404aa8; end: 100404bbb;  */

long FUN_100404aa8(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100404bb8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      lVar5 = param_1;
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100404bbc);
        (*pcVar3)();
      }
      do {
        lVar1 = lVar5 + 1;
        uVar4 = param_5;
        FUN_1000285a8(param_5,param_6);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e != 0) {
    uVar2 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar2 = param_4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8
    )(param_1,param_2,param_3,uVar2);
    return param_1;
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100404bb4);
    (*pcVar3)();
  }
  FUN_1000285a8(param_5,param_6);
  func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,
                      param_5);
  func_0x000107c6142c(param_4);
  return param_3 + (param_2 - param_1) * 8;
}



/* Entry: 100404bbc; end: 100404dd7;  */

long FUN_100404bbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1a0 [112];
  undefined1 auStack_130 [112];
  undefined1 auStack_c0 [112];
  
  puVar2 = &UNK_10d98ebb0;
  func_0x000107c614e0(&UNK_10d98ebb0);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100402814(auStack_1a0,0xd000000000000017,0x800000010efbc0b0,puVar2,&UNK_1018767a8,0,
                &UNK_1018763e8,0,PTR___swiftEmptyArrayStorage_11034f1c8,0,0);
  puVar2 = &UNK_10d98ebd0;
  func_0x000107c614e0(&UNK_10d98ebd0);
  FUN_100402814(auStack_130,0xd000000000000016,0x800000010efbc0d0,puVar2,&UNK_1018767ac,0,
                &UNK_1018763f4,0,puVar1,0,0);
  puVar2 = &UNK_10d98ebf0;
  func_0x000107c614e0(&UNK_10d98ebf0);
  FUN_100402814(auStack_c0,0xd000000000000024,0x800000010efbc0f0,puVar2,&UNK_1018767b0,0,
                &UNK_101876554,0,puVar1,0,0);
  lVar3 = 0x112dcbc18;
  FUN_100401e08(0x112dcbc18,&UNK_10d98ec70,0x112dcbe88,&UNK_10d98e4d0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 7;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  uVar4 = 0x112dcc670;
  FUN_1000285a8(0x112dcc670,&UNK_10d98ec10);
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = 0x112dcc678;
  FUN_1000285a8(0x112dcc678,&UNK_10d98ec18);
  FUN_100401efc();
  FUN_100404de8(auStack_c0,0x112dcc678,&UNK_10d98ec18);
  FUN_100404de8(auStack_130,0x112dcc670,&UNK_10d98ec10);
  FUN_100404de8(auStack_1a0,0x112dcc670,&UNK_10d98ec10);
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  return lVar3;
}



/* Entry: 100404dd8; end: 100404de7;  */

undefined1  [16] FUN_100404dd8(void)

{
  return ZEXT816(0x110752380);
}



/* Entry: 100404de8; end: 100404e27;  */

undefined8 FUN_100404de8(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100404e28; end: 100404fbf;  */

long FUN_100404e28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_130 [112];
  undefined1 auStack_c0 [112];
  
  puVar2 = &UNK_10d98f140;
  func_0x000107c614e0(&UNK_10d98f140);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100402814(auStack_130,0xd000000000000014,0x800000010efbc550,puVar2,0,0,&UNK_10187d008,0,
                PTR___swiftEmptyArrayStorage_11034f1c8,&UNK_10187d4e8,0);
  puVar2 = &UNK_10d98f160;
  func_0x000107c614e0(&UNK_10d98f160);
  lVar3 = -0x2fffffffffffffe3;
  FUN_100402814(auStack_c0,0xd00000000000001d,0x800000010efbc570,puVar2,0,0,&UNK_10187d00c,0,puVar1,
                &UNK_10187d4e4,0);
  func_0x000100404fd0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  uVar4 = 0x112dcc720;
  FUN_1000285a8(0x112dcc720,&UNK_10d98f180);
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = 0x112dcc728;
  FUN_1000285a8(0x112dcc728,&UNK_10d98f188);
  FUN_100401efc();
  FUN_100404ff4(auStack_c0,0x112dcc728,&UNK_10d98f188);
  FUN_100404ff4(auStack_130,0x112dcc720,&UNK_10d98f180);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  return lVar3;
}



/* Entry: 100404fc0; end: 100404ff3;  */

undefined1  [16] FUN_100404fc0(void)

{
  return ZEXT816(0x110753a68);
}



/* Entry: 100404ff4; end: 100405033;  */

undefined8 FUN_100404ff4(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100405034; end: 100405057;  */

void FUN_100405034(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_100405058(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_100402eb8(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,0x112dcbc18,
                  &UNK_10d98ec70,&SUB_10178fbb4);
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100402bb8);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100402bbc);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100402bb4);
  (*pcVar1)();
}



/* Entry: 100405058; end: 100405127;  */

void FUN_100405058(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_1004044f8();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100405128; end: 1004057db;  */

void FUN_100405128(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d46b30;
  FUN_1000285a8(0x112d46b30,&UNK_10d917640);
  lVar7 = lVar15;
  func_0x000107c602e0(lVar15,lVar1,1,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_100405358:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar15 + 0x38);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *puVar16;
  lVar1 = lVar7 + 0x38;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100405388);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar17) {
          uVar18 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
            *puVar16 = -1L << (uVar18 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar16,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_100405358;
        }
        uVar18 = puVar16[lVar17];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar17 = lVar10;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar9) | lVar17 << 6) * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10040538c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Entry: 1004057dc; end: 1004057eb;  */

undefined * FUN_1004057dc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_2c8 [264];
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [112];
  undefined1 auStack_148 [264];
  
  puVar1 = &UNK_10187e6f0;
  FUN_1004057ec();
  FUN_100405b2c();
  puStack_1c0 = puVar1;
  func_0x000100405f40();
  FUN_100406360();
  func_0x000100405f40();
  FUN_1004066a4(&UNK_10187e6f0,0);
  func_0x000100405f40();
  puVar1 = &UNK_10d98f208;
  func_0x000107c614e0(&UNK_10d98f208);
  func_0x000100406b98(auStack_148);
  func_0x000107c610b4(auStack_2c8,auStack_148,0x101);
  FUN_100406bcc();
  lVar2 = 0x4c77656956626577;
  FUN_100406a28(auStack_1b8,0x4c77656956626577,0xef6f666e4964616f,puVar1,0,0,&UNK_10187f1f4,0,
                auStack_2c8,1);
  func_0x000100405ac8();
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = 0x112dcc750;
  FUN_1000285a8(0x112dcc750,&UNK_10d98f230);
  FUN_100401efc();
  FUN_100405aec(auStack_1b8,0x112dcc750,&UNK_10d98f230);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  func_0x000100405f40(lVar2);
  return puStack_1c0;
}



/* Entry: 1004057ec; end: 100405957;  */

long FUN_1004057ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_120 [112];
  undefined1 auStack_b0 [112];
  
  puVar2 = &UNK_10d98f438;
  func_0x000107c614e0(&UNK_10d98f438);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100402814(auStack_120,0xd00000000000001b,0x800000010efbc6c0,puVar2,0,0,&UNK_1018805cc,0,
                PTR___swiftEmptyArrayStorage_11034f1c8,0,0);
  puVar2 = &UNK_10d98f458;
  func_0x000107c614e0(&UNK_10d98f458);
  lVar3 = 0x6f43706154646964;
  FUN_100402814(auStack_b0,0x6f43706154646964,0xee006b6e694c7970,puVar2,0,0,&UNK_1018805d0,0,puVar1,
                0,0);
  func_0x000100405ac8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  uVar4 = 0x112dcc768;
  FUN_1000285a8(0x112dcc768,&UNK_10d98f298);
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  FUN_100401efc();
  FUN_100405aec(auStack_b0,0x112dcc768,&UNK_10d98f298);
  FUN_100405aec(auStack_120,0x112dcc768,&UNK_10d98f298);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  return lVar3;
}



/* Entry: 100405958; end: 100405ab7;  */

undefined8 FUN_100405958(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_2c8 [264];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [112];
  undefined1 auStack_148 [264];
  
  uVar1 = param_1;
  FUN_1004057ec();
  FUN_100405b2c();
  uStack_1c0 = uVar1;
  func_0x000100405f40();
  FUN_100406360();
  func_0x000100405f40();
  FUN_1004066a4(param_1,param_2);
  func_0x000100405f40();
  puVar2 = &UNK_10d98f208;
  func_0x000107c614e0(&UNK_10d98f208);
  func_0x000100406b98(auStack_148);
  func_0x000107c610b4(auStack_2c8,auStack_148,0x101);
  FUN_100406bcc();
  lVar3 = 0x4c77656956626577;
  FUN_100406a28(auStack_1b8,0x4c77656956626577,0xef6f666e4964616f,puVar2,0,0,&UNK_10187f1f4,0,
                auStack_2c8,1);
  func_0x000100405ac8();
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar1 = 0x112dcc750;
  FUN_1000285a8(0x112dcc750,&UNK_10d98f230);
  FUN_100401efc();
  FUN_100405aec(auStack_1b8,0x112dcc750,&UNK_10d98f230);
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  func_0x000100405f40(lVar3);
  return uStack_1c0;
}



/* Entry: 100405ab8; end: 100405aeb;  */

undefined1  [16] FUN_100405ab8(void)

{
  return ZEXT816(0x110754968);
}



/* Entry: 100405aec; end: 100405b2b;  */

undefined8 FUN_100405aec(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100405b2c; end: 100405e8f;  */

long FUN_100405b2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_300 [112];
  undefined1 auStack_290 [112];
  undefined1 auStack_220 [112];
  undefined1 auStack_1b0 [112];
  undefined1 auStack_140 [112];
  undefined1 auStack_d0 [112];
  
  puVar2 = &UNK_10d98f368;
  func_0x000107c614e0(&UNK_10d98f368);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100402814(auStack_300,0xd000000000000010,0x800000010efbc660,puVar2,0,0,&UNK_10188054c,0,
                PTR___swiftEmptyArrayStorage_11034f1c8,0,0);
  puVar2 = &UNK_10d98f388;
  func_0x000107c614e0(&UNK_10d98f388);
  FUN_100402814(auStack_290,0xd00000000000001d,0x800000010efbc680,puVar2,0,0,&UNK_101880550,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98f3a8;
  func_0x000107c614e0(&UNK_10d98f3a8);
  FUN_100402814(auStack_220,0x7079547469486167,0xea00000000007365,puVar2,0,0,&UNK_101880554,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98f3c8;
  func_0x000107c614e0(&UNK_10d98f3c8);
  FUN_100402814(auStack_1b0,0x756f437469486167,0xeb0000000073746e,puVar2,0,0,&UNK_101880590,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98f3e8;
  func_0x000107c614e0(&UNK_10d98f3e8);
  FUN_100402814(auStack_140,0xd000000000000011,0x800000010efbc6a0,puVar2,0,0,&UNK_101880594,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98f408;
  func_0x000107c614e0(&UNK_10d98f408);
  lVar3 = 0x5441477473726966;
  FUN_100402814(auStack_d0,0x5441477473726966,0xeb00000000734d73,puVar2,0,0,&UNK_1018805b0,0,puVar1,
                0,0);
  func_0x000100405ac8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0xd;
  *(undefined8 *)(lVar3 + 0x10) = 6;
  uVar4 = 0x112dcc768;
  FUN_1000285a8(0x112dcc768,&UNK_10d98f298);
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = 0x112dcc798;
  FUN_1000285a8(0x112dcc798,&UNK_10d98f428);
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  uVar4 = 0x112dcc7a0;
  FUN_1000285a8(0x112dcc7a0,&UNK_10d98f430);
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  uVar5 = uVar4;
  FUN_100401efc();
  *(undefined8 *)(lVar3 + 0x40) = uVar5;
  FUN_100401efc();
  FUN_100405aec(auStack_d0,0x112dcc7a0,&UNK_10d98f430);
  FUN_100405aec(auStack_140,0x112dcc7a0,&UNK_10d98f430);
  FUN_100405aec(auStack_1b0,0x112dcc7a0,&UNK_10d98f430);
  FUN_100405aec(auStack_220,0x112dcc798,&UNK_10d98f428);
  FUN_100405aec(auStack_290,0x112dcc768,&UNK_10d98f298);
  FUN_100405aec(auStack_300,0x112dcc768,&UNK_10d98f298);
  *(undefined8 *)(lVar3 + 0x48) = uVar4;
  return lVar3;
}



/* Entry: 100405e90; end: 10040602b;  */

void FUN_100405e90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_10040602c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10040602c; end: 10040603f;  */

ulong FUN_10040602c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10040617c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10040617c(uVar2,uVar4,0x100405ac8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100406178);
      (*pcVar1)();
    }
    (*(code *)&UNK_1018724c0)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100406040; end: 10040617b;  */

ulong FUN_100406040(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10040617c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10040617c(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100406178);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10040617c; end: 1004061fb;  */

undefined * FUN_10040617c(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1004061fc; end: 10040635f;  */

ulong FUN_1004061fc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100406360);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100406354);
        (*pcVar1)();
      }
      uVar3 = 0x112dcbe78;
      FUN_1000285a8(0x112dcbe78,&UNK_10d98ec40);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100406358);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10040635c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c6157c(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c6157c(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          func_0x00010178fd68(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}


