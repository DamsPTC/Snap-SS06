/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040abc84; end: 1040abccb; -[SCSystemJobSchedulerPluginServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040abc84(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305e6a8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305e6b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305e6b8));
  return;
}



/* Entry: 1040abccc; end: 1040abceb;  */

void FUN_1040abccc(void)

{
  _objc_opt_self(&PTR_PTR_11305e700);
  return;
}



/* Entry: 1040abcec; end: 1040abd63;  */

void FUN_1040abcec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = *(long *)(lVar4 + 0x40) + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8;
  uVar3 = *(undefined8 *)(unaff_x20 + uVar5);
  puVar1 = (undefined8 *)(unaff_x20 + uVar5 + 8);
  puVar2 = (undefined8 *)(unaff_x20 + uVar5 + 0x18);
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 8))
            (uVar3,*puVar1,*(undefined1 *)(puVar1 + 1),*puVar2,puVar2[1]);
  *param_1 = uVar3;
  return;
}



/* Entry: 1040abd64; end: 1040abd8b;  */

void FUN_1040abd64(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110741ba0;
  if (lRam000000011305e768 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011305e768 = param_1;
  }
  return;
}



/* Entry: 1040abd8c; end: 1040abe1b;  */

void FUN_1040abd8c(long param_1,long *param_2,long param_3)

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



/* Entry: 1040abe1c; end: 1040abe7b; -[_TtC18AsyncQueueServices23SwiftAsyncQueueServices init] */

void FUN_1040abe1c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AsyncQueueServices.SwiftAsyncQueueServices",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040abe48);
  (*pcVar1)();
}



/* Entry: 1040abe7c; end: 1040abe8b; -[_TtC18AsyncQueueServices23SwiftAsyncQueueServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040abe7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305e778));
  return;
}



/* Entry: 1040abe8c; end: 1040abeab; -[_TtC34BackgroundTaskRegistrationServices34BackgroundTaskRegistrationServices backgroundTaskRegistrationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040abe8c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11305e7a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040abeac; end: 1040abef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040abeac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305e7a8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040abef8; end: 1040abf57; -[_TtC34BackgroundTaskRegistrationServices34BackgroundTaskRegistrationServices init] */

void FUN_1040abef8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BackgroundTaskRegistrationServices.BackgroundTaskRegistrationServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040abf24);
  (*pcVar1)();
}



/* Entry: 1040abf58; end: 1040abf67; -[_TtC34BackgroundTaskRegistrationServices34BackgroundTaskRegistrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040abf58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11305e7a8));
  return;
}



/* Entry: 1040abf68; end: 1040ac0cb;  */

int FUN_1040abf68(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040abfe4;
        goto LAB_1040abfc8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1040abfc8:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1040abfe4:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1040ac0cc; end: 1040ac18f;  */

void FUN_1040ac0cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11305e808;
  func_0x0001000285a8(0x11305e808,&UNK_10dcd2e20);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040ac190; end: 1040ac193;  */

void FUN_1040ac190(void)

{
  undefined *puVar1;
  
  if (puRam000000011305e848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd2e30;
  _swift_getWitnessTable(&UNK_10dcd2e30,&UNK_110741da8);
  puRam000000011305e848 = puVar1;
  return;
}



/* Entry: 1040ac194; end: 1040ac1ff;  */

void FUN_1040ac194(void)

{
  undefined *puVar1;
  
  if (puRam000000011305e848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd2e30;
  _swift_getWitnessTable(&UNK_10dcd2e30,&UNK_110741da8);
  puRam000000011305e848 = puVar1;
  return;
}



/* Entry: 1040ac200; end: 1040ac203;  */

void FUN_1040ac200(void)

{
  undefined *puVar1;
  
  if (puRam000000011305e860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd2ed8;
  _swift_getWitnessTable(&UNK_10dcd2ed8,&UNK_110741d08);
  puRam000000011305e860 = puVar1;
  return;
}



/* Entry: 1040ac204; end: 1040ac26f;  */

void FUN_1040ac204(void)

{
  undefined *puVar1;
  
  if (puRam000000011305e860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd2ed8;
  _swift_getWitnessTable(&UNK_10dcd2ed8,&UNK_110741d08);
  puRam000000011305e860 = puVar1;
  return;
}



/* Entry: 1040ac270; end: 1040ac2f3;  */

void FUN_1040ac270(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1040ac2f4; end: 1040ac2f7;  */

void FUN_1040ac2f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011305e878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd2f48;
  _swift_getWitnessTable(&UNK_10dcd2f48,&UNK_110741d08);
  puRam000000011305e878 = puVar1;
  return;
}



/* Entry: 1040ac2f8; end: 1040ac337;  */

void FUN_1040ac2f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011305e878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd2f48;
  _swift_getWitnessTable(&UNK_10dcd2f48,&UNK_110741d08);
  puRam000000011305e878 = puVar1;
  return;
}



/* Entry: 1040ac338; end: 1040ac33b;  */

void FUN_1040ac338(void)

{
  undefined *puVar1;
  
  if (puRam000000011305e880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd2f00;
  _swift_getWitnessTable(&UNK_10dcd2f00,&UNK_110741d08);
  puRam000000011305e880 = puVar1;
  return;
}



/* Entry: 1040ac33c; end: 1040ac37b;  */

void FUN_1040ac33c(void)

{
  undefined *puVar1;
  
  if (puRam000000011305e880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd2f00;
  _swift_getWitnessTable(&UNK_10dcd2f00,&UNK_110741d08);
  puRam000000011305e880 = puVar1;
  return;
}



/* Entry: 1040ac37c; end: 1040ac4ef;  */

int FUN_1040ac37c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040ac3f8;
        goto LAB_1040ac3dc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1040ac3dc:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1040ac3f8:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1040ac4f0; end: 1040ac53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040ac4f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305e8b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040ac53c; end: 1040ac59b; -[_TtC32SystemJobSchedulerPluginServices32SystemJobSchedulerPluginServices init] */

void FUN_1040ac53c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SystemJobSchedulerPluginServices.SystemJobSchedulerPluginServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040ac568);
  (*pcVar1)();
}



/* Entry: 1040ac59c; end: 1040ac5cb; -[_TtC32SystemJobSchedulerPluginServices32SystemJobSchedulerPluginServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040ac59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305e8b8));
  return;
}



/* Entry: 1040ac5cc; end: 1040ac637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040ac5cc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100095c88();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11305e8f8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1040ac638; end: 1040ac63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040ac638(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100095c88();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_11305e8f8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1040ac640; end: 1040ac68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040ac640(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305e8f8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040ac68c; end: 1040ac6eb; -[_TtC15FlipperProvider22FlipperServicesWrapper init] */

void FUN_1040ac68c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FlipperProvider.FlipperServicesWrapper",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040ac6b8);
  (*pcVar1)();
}



/* Entry: 1040ac6ec; end: 1040ac6fb;  */

undefined1  [16] FUN_1040ac6ec(void)

{
  return ZEXT816(0x110741ec8);
}



/* Entry: 1040ac6fc; end: 1040ac72b; -[_TtC15FlipperProvider22FlipperServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040ac6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305e8f8));
  return;
}



/* Entry: 1040ac72c; end: 1040ac8b3;  */

void FUN_1040ac72c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined1 auStack_d8 [56];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  plVar1 = (long *)(unaff_x20 + *(int *)(param_2 + 0x1c));
  lVar2 = *plVar1;
  lVar5 = plVar1[1];
  lVar3 = plVar1[2];
  lVar6 = plVar1[3];
  lVar4 = plVar1[4];
  lVar7 = plVar1[5];
  lVar22 = plVar1[6];
  lVar16 = lVar22;
  lVar17 = lVar2;
  lVar18 = lVar7;
  lVar19 = lVar3;
  lVar20 = lVar6;
  lVar21 = lVar5;
  lVar24 = lVar4;
  if (lVar2 == 0) {
    uVar23 = *(undefined8 *)(param_2 + 0x10);
    func_0x000100087438(0,uVar23);
    func_0x000100854cb0();
    func_0x0001040ad228(&lStack_a0);
    lVar13 = lStack_70;
    lVar12 = lStack_78;
    lVar11 = lStack_80;
    lVar10 = lStack_88;
    lVar9 = lStack_90;
    lVar8 = lStack_98;
    lVar24 = lStack_a0;
    lVar16 = *plVar1;
    lVar19 = plVar1[1];
    lVar17 = plVar1[2];
    lVar20 = plVar1[3];
    lVar18 = plVar1[4];
    lVar21 = plVar1[5];
    lVar15 = plVar1[6];
    lVar14 = 0;
    func_0x0001040ad4a8(0,uVar23);
    (**(code **)(*(long *)(lVar14 + -8) + 0x10))(auStack_d8,&lStack_a0,lVar14);
    func_0x0001040ac8b4(lVar16,lVar19,lVar17,lVar20,lVar18,lVar21,lVar15);
    plVar1[1] = lVar8;
    *plVar1 = lVar24;
    plVar1[3] = lVar10;
    plVar1[2] = lVar9;
    plVar1[5] = lVar12;
    plVar1[4] = lVar11;
    plVar1[6] = lVar13;
    lVar16 = lStack_70;
    lVar17 = lStack_a0;
    lVar18 = lStack_78;
    lVar19 = lStack_90;
    lVar20 = lStack_88;
    lVar21 = lStack_98;
    lVar24 = lStack_80;
  }
  func_0x0001040ac900(lVar2,lVar5,lVar3,lVar6,lVar4,lVar7,lVar22);
  *param_1 = lVar17;
  param_1[1] = lVar21;
  param_1[2] = lVar19;
  param_1[3] = lVar20;
  param_1[4] = lVar24;
  param_1[5] = lVar18;
  param_1[6] = lVar16;
  return;
}



/* Entry: 1040ac8b4; end: 1040ac94b;  */

void FUN_1040ac8b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_1 != 0) {
    _swift_release();
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_7);
    return;
  }
  return;
}



/* Entry: 1040ac94c; end: 1040ac95f;  */

void FUN_1040ac94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7ee3b8);
  return;
}



/* Entry: 1040ac960; end: 1040ac9d3;  */

void FUN_1040ac960(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dcd3168;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x18);
  }
  return;
}



/* Entry: 1040ac9d4; end: 1040acaf3;  */

long * FUN_1040ac9d4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar6 + 7U & 0xfffffffffffffff8) + 0x38 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (ulong *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    puVar4 = (ulong *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    if (*puVar4 < 0xffffffff) {
      uVar7 = puVar4[1];
      uVar5 = *puVar4;
      uVar9 = puVar4[3];
      uVar8 = puVar4[2];
      uVar11 = puVar4[5];
      uVar10 = puVar4[4];
      puVar3[6] = puVar4[6];
      puVar3[3] = uVar9;
      puVar3[2] = uVar8;
      puVar3[5] = uVar11;
      puVar3[4] = uVar10;
      puVar3[1] = uVar7;
      *puVar3 = uVar5;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      uVar5 = puVar4[2];
      puVar3[2] = uVar5;
      puVar3[3] = puVar4[3];
      uVar7 = puVar4[4];
      puVar3[4] = uVar7;
      puVar3[5] = puVar4[5];
      uVar8 = puVar4[6];
      puVar3[6] = uVar8;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
    }
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040acaf4; end: 1040acb63;  */

void FUN_1040acaf4(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar2 + 8))();
  puVar1 = (ulong *)(param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8);
  if (0xfffffffe < *puVar1) {
    _swift_release();
    _swift_bridgeObjectRelease(puVar1[2]);
    _swift_bridgeObjectRelease(puVar1[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1[6]);
    return;
  }
  return;
}



/* Entry: 1040acb64; end: 1040acc33;  */

long FUN_1040acb64(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar1 = (ulong *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (ulong *)(lVar4 + param_2 & 0xfffffffffffffff8);
  if (*puVar2 < 0xffffffff) {
    uVar5 = puVar2[1];
    uVar3 = *puVar2;
    uVar7 = puVar2[3];
    uVar6 = puVar2[2];
    uVar9 = puVar2[5];
    uVar8 = puVar2[4];
    puVar1[6] = puVar2[6];
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[1] = uVar5;
    *puVar1 = uVar3;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    uVar3 = puVar2[2];
    puVar1[2] = uVar3;
    puVar1[3] = puVar2[3];
    uVar5 = puVar2[4];
    puVar1[4] = uVar5;
    puVar1[5] = puVar2[5];
    uVar6 = puVar2[6];
    puVar1[6] = uVar6;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
  }
  return param_1;
}



/* Entry: 1040acc34; end: 1040acdbb;  */

long FUN_1040acc34(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x18))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar6 = (ulong *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar4 = (ulong *)(lVar3 + param_2 & 0xfffffffffffffff8);
  uVar2 = *puVar6;
  uVar1 = *puVar4;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *puVar6 = uVar1;
      puVar6[1] = puVar4[1];
      uVar1 = puVar4[2];
      puVar6[2] = uVar1;
      puVar6[3] = puVar4[3];
      uVar2 = puVar4[4];
      puVar6[4] = uVar2;
      puVar6[5] = puVar4[5];
      uVar5 = puVar4[6];
      puVar6[6] = uVar5;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar5);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *puVar6 = uVar1;
      _swift_retain();
      _swift_release(uVar2);
      puVar6[1] = puVar4[1];
      uVar1 = puVar6[2];
      puVar6[2] = puVar4[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      puVar6[3] = puVar4[3];
      uVar1 = puVar6[4];
      puVar6[4] = puVar4[4];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      puVar6[5] = puVar4[5];
      uVar1 = puVar6[6];
      puVar6[6] = puVar4[6];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_release(uVar2);
    _swift_bridgeObjectRelease(puVar6[2]);
    _swift_bridgeObjectRelease(puVar6[4]);
    _swift_bridgeObjectRelease(puVar6[6]);
  }
  uVar2 = puVar4[1];
  uVar1 = *puVar4;
  uVar7 = puVar4[3];
  uVar5 = puVar4[2];
  uVar9 = puVar4[5];
  uVar8 = puVar4[4];
  puVar6[6] = puVar4[6];
  puVar6[3] = uVar7;
  puVar6[2] = uVar5;
  puVar6[5] = uVar9;
  puVar6[4] = uVar8;
  puVar6[1] = uVar2;
  *puVar6 = uVar1;
  return param_1;
}



/* Entry: 1040acdbc; end: 1040acf23;  */

long FUN_1040acdbc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  uVar7 = puVar1[3];
  uVar6 = puVar1[2];
  uVar5 = puVar1[5];
  uVar4 = puVar1[4];
  uVar9 = puVar1[1];
  uVar8 = *puVar1;
  puVar2[6] = puVar1[6];
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  puVar2[5] = uVar5;
  puVar2[4] = uVar4;
  puVar2[1] = uVar9;
  *puVar2 = uVar8;
  return param_1;
}



/* Entry: 1040acf24; end: 1040ad01f;  */

uint * FUN_1040acf24(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x38;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_1040acfb4;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_1040acfb4:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_1040acfb4;
    }
  }
  if (0x7ffffffd < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040acff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  uVar2 = 0;
  if (1 < (uint)uVar7 + 1) {
    uVar2 = (uint)uVar7;
  }
  return (uint *)(ulong)uVar2;
}



/* Entry: 1040ad020; end: 1040ad197;  */

void FUN_1040ad020(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x38;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)lVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar10 = 4;
  }
  if (uVar4 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffd < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040ad130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if (param_2 < 0x7fffffff) {
        *puVar7 = (ulong)param_2;
      }
      else {
        puVar7[6] = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        *(uint *)puVar7 = param_2 + 0x80000001;
      }
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,lVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  return;
}



/* Entry: 1040ad198; end: 1040ad1a7;  */

undefined1  [16] FUN_1040ad198(void)

{
  return ZEXT816(0x110742000);
}



/* Entry: 1040ad1a8; end: 1040ad4b3;  */

void FUN_1040ad1a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1040ad4b4; end: 1040ad4f7;  */

void FUN_1040ad4b4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001040ad4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x24));
  return;
}



/* Entry: 1040ad4f8; end: 1040ad6b7;  */

void FUN_1040ad4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  uStack_78 = param_6;
  uStack_70 = param_1;
  __sSqMa(0,param_7);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  uStack_80 = param_5;
  __sSY8rawValue03RawB0QzvgTj(&lStack_68,param_7,param_8);
  if (lStack_68 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040ad6b4);
    (*pcVar3)();
  }
  if (lStack_68 < 0x80000000) {
    func_0x00010c067f00();
    _objc_release(param_2);
    lStack_68 = (long)param_4;
    __sSY8rawValuexSg03RawB0Qz_tcfCTj(lVar4 - extraout_x12,&lStack_68,param_7,param_8);
    (**(code **)(lVar5 + 0x20))(lVar4,lVar4 - extraout_x12,lVar1);
    lVar6 = *(long *)(param_7 + -8);
    pcVar3 = *(code **)(lVar6 + 0x30);
    lVar2 = lVar4;
    (*pcVar3)(lVar4,1,param_7);
    if ((int)lVar2 == 1) {
      (**(code **)(lVar6 + 0x10))(uStack_70,uStack_80,param_7);
      lVar2 = lVar4;
      (*pcVar3)(lVar4,1,param_7);
      if ((int)lVar2 != 1) {
        (**(code **)(lVar5 + 8))(lVar4,lVar1);
      }
    }
    else {
      (**(code **)(lVar6 + 0x20))(uStack_70,lVar4,param_7);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1040ad6b8);
  (*pcVar3)();
}



/* Entry: 1040ad6b8; end: 1040ad6eb;  */

void FUN_1040ad6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040ad6ec; end: 1040ad737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040ad6ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305ec48) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040ad738; end: 1040adb9b;  */

uint FUN_1040ad738(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong unaff_x20;
  long unaff_x21;
  ulong uStack_50;
  ulong uStack_48;
  undefined4 uStack_34;
  
  uVar2 = param_1;
  func_0x00010bf9d8c0();
  switch((int)uVar2) {
  case 1:
    func_0x000107c4e34c();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb74);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x00010c065500();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb90);
      (*pcVar1)();
    }
    unaff_x20 = uVar2;
    FUN_1040ad738();
    uVar6 = (uint)unaff_x20;
    _objc_release(param_1);
    _objc_release(uVar2);
    goto joined_r0x0001040adb44;
  case 2:
    func_0x00010bf029e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb78);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb98);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    FUN_1040ad738();
    _objc_release(uVar2);
    if (unaff_x21 != 0) goto code_r0x0001040ad990;
    if ((uVar3 & 1) == 0) {
      _objc_release(param_1);
      uVar6 = 0;
      goto LAB_1040ad9cc;
    }
    uVar2 = param_1;
    func_0x000107c50888();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040ad964);
      (*pcVar1)();
    }
code_r0x0001040adb20:
    unaff_x20 = uVar2;
    FUN_1040ad738();
    uVar6 = (uint)unaff_x20;
    _objc_release(uVar2);
    _objc_release(param_1);
joined_r0x0001040adb44:
    if (unaff_x21 == 0) goto LAB_1040ad9cc;
    goto LAB_1040ad994;
  case 3:
    func_0x000107c4e028();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb68);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb8c);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    FUN_1040ad738();
    _objc_release(uVar2);
    if (unaff_x21 == 0) {
      if ((uVar3 & 1) != 0) {
        _objc_release(param_1);
        uVar6 = 1;
        goto LAB_1040ad9cc;
      }
      uVar2 = param_1;
      func_0x000107c50888();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb9c);
        (*pcVar1)();
      }
      goto code_r0x0001040adb20;
    }
    goto code_r0x0001040ad990;
  case 4:
    func_0x000107c4d774();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb6c);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x00010bf9d8a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb94);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    FUN_1040ad738();
    if (unaff_x21 == 0) {
      _objc_release(uVar2);
      _objc_release(param_1);
      uVar6 = (uint)uVar3 ^ 1;
      goto LAB_1040ad9cc;
    }
    _objc_release(param_1);
    param_1 = uVar2;
    goto code_r0x0001040ad990;
  case 5:
    func_0x000107c4d8fc();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb60);
      (*pcVar1)();
    }
    uVar2 = param_1;
    FUN_1040adb9c();
    uVar6 = (uint)uVar2;
    break;
  case 6:
    func_0x000107c4d908();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb7c);
      (*pcVar1)();
    }
    uVar2 = param_1;
    FUN_1040ade74();
    uVar6 = (uint)uVar2;
    break;
  case 7:
    func_0x000107c5c1a4();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb80);
      (*pcVar1)();
    }
    uVar2 = param_1;
    FUN_1040ae22c();
    uVar6 = (uint)uVar2;
    break;
  case 8:
    func_0x00010bf1f500();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb70);
      (*pcVar1)();
    }
    uVar2 = param_1;
    FUN_1040ae548();
    uVar6 = (uint)uVar2;
    break;
  case 9:
    func_0x00010bfeb460();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb88);
      (*pcVar1)();
    }
    uVar2 = param_1;
    FUN_1040ae79c();
    uVar6 = (uint)uVar2;
    break;
  case 10:
    func_0x000107c4d8bc();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb64);
      (*pcVar1)();
    }
    uVar2 = param_1;
    FUN_1040aebe8();
    uVar6 = (uint)uVar2;
    break;
  case 0xb:
    func_0x00010c075b00();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040adb84);
      (*pcVar1)();
    }
    uVar2 = param_1;
    FUN_1040aed60();
    uVar6 = (uint)uVar2;
    break;
  default:
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x23);
    __sSS6appendyySSF(0xd000000000000021,0x800000010f1ecbb0);
    func_0x00010bf9d8c0();
    uStack_34 = (undefined4)param_1;
    uVar4 = 0;
    FUN_1040afb30(0);
    puVar5 = (ulong *)&uStack_34;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (puVar5,&uStack_50,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar2 = uStack_48;
    unaff_x20 = uStack_50;
    FUN_1040afb44();
    _swift_allocError(&UNK_110742330,puVar5,0,0);
    *puVar5 = unaff_x20;
    puVar5[1] = uVar2;
    *(undefined1 *)(puVar5 + 2) = 1;
    _swift_willThrow();
    goto LAB_1040ad994;
  }
  if (unaff_x21 == 0) {
    _objc_release(param_1);
  }
  else {
code_r0x0001040ad990:
    _objc_release(param_1);
LAB_1040ad994:
    uVar6 = (uint)unaff_x20;
  }
LAB_1040ad9cc:
  return uVar6 & 1;
}



/* Entry: 1040adb9c; end: 1040ade73;  */

uint FUN_1040adb9c(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  int iVar4;
  double *pdVar5;
  undefined1 *puVar6;
  double *pdVar7;
  undefined *puVar8;
  undefined1 uVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar10;
  long unaff_x21;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined1 auStack_78 [32];
  undefined1 *puStack_58;
  
  iVar4 = (int)&dStack_b0;
  pdVar5 = param_2;
  func_0x000107c5dc84();
  _objc_retainAutoreleasedReturnValue();
  if (pdVar5 == (double *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040ade70);
    (*pcVar3)();
  }
  pdVar7 = pdVar5;
  func_0x00010bfac780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pdVar5);
  if (pdVar7 == (double *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040ade74);
    (*pcVar3)();
  }
  puVar6 = auStack_78;
  FUN_1040af8d4(puVar6,pdVar7);
  _objc_release();
  uVar10 = extraout_w8;
  if (unaff_x21 != 0) goto LAB_1040addc0;
  puStack_58 = puVar6;
  if (puVar6 == (undefined1 *)0x1) {
    FUN_1040afb44();
    _swift_allocError(&UNK_110742330,pdVar7,0,0);
    *pdVar7 = -2.315841784746355e+77;
    pdVar7[1] = -2.24732870394171e-314;
LAB_1040add98:
    uVar9 = 3;
  }
  else {
    FUN_1040afc48(auStack_78,&dStack_a0,0x11305ec80,&UNK_10dcd3360);
    puVar8 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&dStack_b0,&dStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
    dVar1 = dStack_b0;
    if (iVar4 == 0) {
      dStack_a0 = 0.0;
      dStack_98 = -2.6815615859885194e+154;
      __ss11_StringGutsV4growyySiF(0x37);
      dStack_b0 = dStack_a0;
      dStack_a8 = dStack_98;
      __sSS6appendyySSF(0xd00000000000002a,0x800000010f1ecbe0);
      FUN_1040afc48(auStack_78,&dStack_a0,0x11305ec80,&UNK_10dcd3360);
      puVar8 = puVar8 + 8;
      __sSS10describingSSx_tclufC(&dStack_a0,puVar8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar8);
      pdVar7 = (double *)0x626d756e20736120;
      __sSS6appendyySSF(0x626d756e20736120,0xeb000000002e7265);
      dVar2 = dStack_a8;
      dVar1 = dStack_b0;
      FUN_1040afb44();
      _swift_allocError(&UNK_110742330,pdVar7,0,0);
      *pdVar7 = dVar1;
      pdVar7[1] = dVar2;
      goto LAB_1040add98;
    }
    pdVar7 = param_2;
    func_0x00010bf49240();
    if ((int)pdVar7 == 4) {
      func_0x00010bf88320(param_2);
LAB_1040addf0:
      func_0x00010bf98620(param_2);
      FUN_1040afbb4(auStack_78,0x11305ec80,&UNK_10dcd3360);
      uVar10 = (uint)(dVar1 != param_1) ^ (uint)param_2;
      goto LAB_1040addc0;
    }
    if ((int)pdVar7 == 3) {
      pdVar5 = param_2;
      func_0x000107c4c098();
      param_1 = (double)(long)pdVar5;
      goto LAB_1040addf0;
    }
    FUN_1040afb44();
    _swift_allocError(&UNK_110742330,pdVar7,0,0);
    *pdVar7 = -2.3158417847463584e+77;
    pdVar7[1] = -2.24732866441646e-314;
    uVar9 = 2;
  }
  *(undefined1 *)(pdVar7 + 2) = uVar9;
  _swift_willThrow();
  FUN_1040afbb4(auStack_78,0x11305ec80,&UNK_10dcd3360);
  uVar10 = extraout_w8_00;
LAB_1040addc0:
  return uVar10 & 1;
}



/* Entry: 1040ade74; end: 1040ae22b;  */

uint FUN_1040ade74(double param_1,undefined8 *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  long unaff_x21;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_78 [32];
  undefined1 *puStack_58;
  
  iVar4 = (int)&puStack_b0;
  ppuVar8 = &puStack_b0;
  puVar5 = param_2;
  func_0x000107c5dc84();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040ae228);
    (*pcVar1)();
  }
  puVar6 = puVar5;
  func_0x00010bfac780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040ae22c);
    (*pcVar1)();
  }
  puVar11 = auStack_78;
  FUN_1040af8d4(puVar11,puVar6);
  _objc_release();
  if (unaff_x21 != 0) goto LAB_1040ae09c;
  puStack_58 = puVar11;
  if (puVar11 == (undefined1 *)0x1) {
    FUN_1040afb44();
    _swift_allocError(&UNK_110742330,puVar6,0,0);
    *puVar6 = 0xd00000000000003e;
    puVar6[1] = 0x800000010f1ecdf0;
    puVar11 = (undefined1 *)0x0;
LAB_1040ae074:
    uVar10 = 3;
  }
  else {
    FUN_1040afc48(auStack_78,&puStack_a0,0x11305ec80,&UNK_10dcd3360);
    puVar9 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&puStack_b0,&puStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
    puVar11 = puStack_b0;
    if (iVar4 == 0) {
      puStack_a0 = (undefined1 *)0x0;
      uStack_98 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x39);
      puStack_b0 = puStack_a0;
      uStack_a8 = uStack_98;
      __sSS6appendyySSF(0xd00000000000002c,0x800000010f1ecd30);
      FUN_1040afc48(auStack_78,&puStack_a0,0x11305ec80,&UNK_10dcd3360);
      puVar9 = puVar9 + 8;
      __sSS10describingSSx_tclufC(&puStack_a0,puVar9);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar9);
      puVar6 = (undefined8 *)0x626d756e20736120;
      __sSS6appendyySSF(0x626d756e20736120,0xeb000000002e7265);
      uVar7 = uStack_a8;
      puVar11 = puStack_b0;
      FUN_1040afb44();
      _swift_allocError(&UNK_110742330,puVar6,0,0);
      *puVar6 = puVar11;
      puVar6[1] = uVar7;
      goto LAB_1040ae074;
    }
    puVar6 = param_2;
    func_0x00010bf49240();
    if ((int)puVar6 == 4) {
      func_0x00010bf88320(param_2);
LAB_1040ae0cc:
      func_0x000107c4dfb0();
      iVar4 = (int)param_2;
      if (iVar4 < 3) {
        if (iVar4 == 1) {
          bVar2 = false;
          if (!NAN((double)puVar11) && !NAN(param_1)) {
            bVar2 = (double)puVar11 < param_1;
          }
        }
        else {
          if (iVar4 != 2) {
LAB_1040ae154:
            puStack_a0 = (undefined1 *)0x0;
            uStack_98 = 0xe000000000000000;
            __ss11_StringGutsV4growyySiF(0x3d);
            __sSS6appendyySSF(0xd00000000000003b,0x800000010f1ecdb0);
            puStack_b0 = (undefined1 *)CONCAT44(puStack_b0._4_4_,iVar4);
            uVar7 = 0;
            FUN_1040afc90(0);
            __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                      (&puStack_b0,&puStack_a0,uVar7,
                       PTR___ss26DefaultStringInterpolationVN_11034ec00,
                       PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
            uVar7 = uStack_98;
            puVar11 = puStack_a0;
            FUN_1040afb44();
            _swift_allocError(&UNK_110742330,ppuVar8,0,0);
            *ppuVar8 = puVar11;
            ppuVar8[1] = (undefined1 *)uVar7;
            uVar10 = 2;
            puVar6 = ppuVar8;
            goto LAB_1040ae078;
          }
          bVar2 = param_1 < (double)puVar11;
        }
      }
      else {
        if (iVar4 == 3) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN((double)puVar11) && !NAN(param_1)) {
            bVar2 = (double)puVar11 == param_1;
            bVar3 = param_1 <= (double)puVar11;
          }
        }
        else {
          if (iVar4 != 4) goto LAB_1040ae154;
          bVar3 = (double)puVar11 <= param_1;
          bVar2 = param_1 == (double)puVar11;
        }
        bVar2 = !bVar3 || bVar2;
      }
      puVar11 = (undefined1 *)(ulong)bVar2;
      FUN_1040afbb4(auStack_78,0x11305ec80,&UNK_10dcd3360);
      goto LAB_1040ae09c;
    }
    if ((int)puVar6 == 3) {
      puVar5 = param_2;
      func_0x000107c4c098();
      param_1 = (double)(long)puVar5;
      goto LAB_1040ae0cc;
    }
    puVar11 = (undefined1 *)0x0;
    FUN_1040afb44();
    _swift_allocError(&UNK_110742330,puVar6,0,0);
    *puVar6 = 0xd000000000000045;
    puVar6[1] = 0x800000010f1ecd60;
    uVar10 = 2;
  }
LAB_1040ae078:
  *(undefined1 *)(puVar6 + 2) = uVar10;
  _swift_willThrow();
  FUN_1040afbb4(auStack_78,0x11305ec80,&UNK_10dcd3360);
LAB_1040ae09c:
  return (uint)puVar11 & 1;
}



/* Entry: 1040ae22c; end: 1040ae547;  */

uint FUN_1040ae22c(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar10;
  long unaff_x21;
  undefined1 uVar11;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [32];
  undefined1 *puStack_58;
  undefined8 uStack_48;
  
  plVar8 = &lStack_b0;
  plVar9 = &lStack_b0;
  lVar3 = param_1;
  func_0x000107c5dc84();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1040ae544);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x00010bfac780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1040ae548);
    (*pcVar2)();
  }
  puVar5 = auStack_78;
  FUN_1040af8d4(puVar5,lVar4);
  _objc_release(lVar4);
  uVar10 = extraout_w8;
  if (unaff_x21 != 0) goto LAB_1040ae4b4;
  puStack_58 = puVar5;
  if (puVar5 == (undefined1 *)0x3) {
    FUN_1040afc48(auStack_78,&lStack_b0,0x11305ec80,&UNK_10dcd3360);
    plVar6 = &lStack_88;
    _swift_dynamicCast(plVar6,&lStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((int)plVar6 != 0) {
LAB_1040ae35c:
      lVar3 = param_1;
      func_0x00010bf49220();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar10 = 0;
      }
      else {
        lVar4 = lVar3;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(lVar3);
        if ((lStack_88 == lVar4) && ((long *)puStack_80 == plVar9)) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lStack_88,puStack_80,lVar4,plVar9,0);
          uVar10 = (uint)lStack_88;
        }
        _swift_bridgeObjectRelease(puStack_80);
        puStack_80 = (undefined1 *)plVar9;
      }
      _swift_bridgeObjectRelease(puStack_80);
      func_0x00010bf98620(param_1);
      FUN_1040afbb4(auStack_78,0x11305ec80,&UNK_10dcd3360);
      uVar10 = uVar10 ^ (uint)param_1 ^ 1;
      goto LAB_1040ae4b4;
    }
    pcVar1 = 
    "String Equality Comparison expected enum to be castable to String but got another type.";
    lVar3 = -0x2fffffffffffffa9;
LAB_1040ae468:
    uVar11 = 3;
    puVar5 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  }
  else {
    if (puVar5 == (undefined1 *)0x0) {
      FUN_1040afc48(auStack_78,&lStack_b0,0x11305ec80,&UNK_10dcd3360);
      plVar6 = &lStack_88;
      _swift_dynamicCast(plVar6,&lStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      plVar9 = plVar8;
      if ((int)plVar6 != 0) goto LAB_1040ae35c;
      pcVar1 = 
      "String Equality Comparison expected value to be castable to String but got another type.";
      lVar3 = -0x2fffffffffffffa8;
      goto LAB_1040ae468;
    }
    lStack_b0 = 0;
    puStack_a8 = (undefined1 *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x3e);
    lStack_88 = lStack_b0;
    puStack_80 = puStack_a8;
    __sSS6appendyySSF(0xd00000000000003c,0x800000010f1ece30);
    FUN_1040afc48(auStack_78,&lStack_b0,0x11305ec80,&UNK_10dcd3360);
    uStack_48 = uStack_90;
    plVar6 = (long *)0x0;
    func_0x0001040afca4();
    puVar7 = &uStack_48;
    __sSS10describingSSx_tclufC(puVar7);
    func_0x000100183ab8(&lStack_b0);
    __sSS6appendyySSF(puVar7,plVar6);
    _swift_bridgeObjectRelease();
    uVar11 = 1;
    puVar5 = puStack_80;
    lVar3 = lStack_88;
  }
  FUN_1040afb44();
  _swift_allocError(&UNK_110742330,plVar6,0,0);
  *plVar6 = lVar3;
  plVar6[1] = (long)puVar5;
  *(undefined1 *)(plVar6 + 2) = uVar11;
  _swift_willThrow();
  FUN_1040afbb4(auStack_78,0x11305ec80,&UNK_10dcd3360);
  uVar10 = extraout_w8_00;
LAB_1040ae4b4:
  return uVar10 & 1;
}



/* Entry: 1040ae548; end: 1040ae79b;  */

uint FUN_1040ae548(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar9;
  long unaff_x21;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_68 [32];
  undefined1 *puStack_48;
  
  uVar6 = 0;
  puVar4 = param_1;
  func_0x000107c5dc84();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040ae798);
    (*pcVar3)();
  }
  puVar7 = puVar4;
  func_0x00010bfac780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040ae79c);
    (*pcVar3)();
  }
  puVar5 = auStack_68;
  FUN_1040af8d4(puVar5,puVar7);
  _objc_release();
  uVar9 = extraout_w8;
  if (unaff_x21 == 0) {
    puStack_48 = puVar5;
    if ((puVar5 == (undefined1 *)0x2) || (puVar5 == (undefined1 *)0x4)) {
      FUN_1040afb44();
      _swift_allocError(&UNK_110742330,puVar7,0,0);
      *puVar7 = 0xd000000000000034;
      puVar7[1] = 0x800000010f1ecf60;
    }
    else {
      FUN_1040afc48(auStack_68,&uStack_90,0x11305ec80,&UNK_10dcd3360);
      puVar8 = PTR___sypN_11034f1a8;
      _swift_dynamicCast(&uStack_a0,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if ((uVar6 & 1) != 0) {
        func_0x00010c081960(param_1);
        FUN_1040afbb4(auStack_68,0x11305ec80,&UNK_10dcd3360);
        uVar9 = (uint)(byte)uStack_a0 ^ (uint)param_1 ^ 1;
        goto LAB_1040ae638;
      }
      uStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x30);
      _swift_bridgeObjectRelease(uStack_88);
      uStack_a0 = 0xd000000000000022;
      uStack_98 = 0x800000010f1ecf30;
      FUN_1040afc48(auStack_68,&uStack_90,0x11305ec80,&UNK_10dcd3360);
      puVar8 = puVar8 + 8;
      __sSS10describingSSx_tclufC(&uStack_90,puVar8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar8);
      puVar7 = (undefined8 *)0x6c6f6f4220736120;
      __sSS6appendyySSF(0x6c6f6f4220736120,0xec0000002e6e6165);
      uVar2 = uStack_98;
      uVar1 = uStack_a0;
      FUN_1040afb44();
      _swift_allocError(&UNK_110742330,puVar7,0,0);
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
    }
    *(undefined1 *)(puVar7 + 2) = 3;
    _swift_willThrow();
    FUN_1040afbb4(auStack_68,0x11305ec80,&UNK_10dcd3360);
    uVar9 = extraout_w8_00;
  }
LAB_1040ae638:
  return uVar9 & 1;
}



/* Entry: 1040ae79c; end: 1040aebe7;  */

uint FUN_1040ae79c(long param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long unaff_x21;
  undefined1 uVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 *puStack_60;
  undefined1 uStack_58;
  
  puVar7 = &uStack_f0;
  puVar8 = &uStack_f0;
  lVar3 = param_1;
  func_0x000107c5dc84();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040aebe0);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x00010bfac780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040aebe4);
    (*pcVar1)();
  }
  puVar9 = auStack_80;
  lVar3 = lVar4;
  FUN_1040af1c0();
  _objc_release(lVar4);
  if (unaff_x21 != 0) goto LAB_1040aea88;
  uStack_58 = (undefined1)lVar3;
  puStack_60 = puVar9;
  FUN_1040afc48(auStack_80,&uStack_d0,0x11305ec88,&UNK_10dcd3368);
  if (lStack_b8 == 0) {
    FUN_1040afbb4(&uStack_d0,0x112d387f8,&UNK_10d902650);
    if (lStack_68 != 0) goto LAB_1040ae8b8;
LAB_1040ae938:
    func_0x00010c0752a0(param_1);
    uVar2 = (uint)param_1;
LAB_1040ae940:
    puVar9 = (undefined1 *)(ulong)(uVar2 ^ 1);
    FUN_1040afbb4(auStack_80,0x11305ec88,&UNK_10dcd3368);
    goto LAB_1040aea88;
  }
  func_0x000100102924(&uStack_d0,&uStack_a0);
  func_0x000100102924(&uStack_a0,&uStack_d0);
  uVar5 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  _swift_dynamicCast(&uStack_f0,&uStack_d0,PTR___sypN_11034f1a8 + 8,uVar5,7);
  FUN_1040afbb4(&uStack_f0,0x112d387f8,&UNK_10d902650);
  if ((lStack_d8 == 0) || (lStack_68 == 0)) goto LAB_1040ae938;
LAB_1040ae8b8:
  FUN_1040afc48(auStack_80,&uStack_d0,0x11305ec88,&UNK_10dcd3368);
  puVar6 = &uStack_d0;
  FUN_1040afbb4(puVar6,0x112d387f8,&UNK_10d902650);
  if (cStack_a8 == '\x01') {
    puVar7 = puVar6;
    puVar9 = (undefined1 *)0x800000010f1ecfa0;
    uVar5 = 0xd00000000000001a;
LAB_1040aea3c:
    uVar10 = 1;
  }
  else {
    if (((uint)lVar3 & 0xff) == 1) {
LAB_1040ae9d0:
      uStack_d0 = 0;
      puStack_c8 = (undefined1 *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x31);
      _swift_bridgeObjectRelease(puStack_c8);
      uStack_d0 = 0xd00000000000002f;
      puStack_c8 = (undefined1 *)0x800000010f1ecfc0;
      uStack_a0 = uStack_b0;
      puVar7 = (undefined8 *)0x0;
      func_0x0001040afca4();
      __sSS10describingSSx_tclufC(&uStack_a0);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease();
      puVar9 = puStack_c8;
      uVar5 = uStack_d0;
      goto LAB_1040aea3c;
    }
    if (puVar9 == (undefined1 *)0x3) {
      FUN_1040afc48(auStack_80,&uStack_d0,0x11305ec88,&UNK_10dcd3368);
      puStack_98 = puStack_c8;
      uStack_a0 = uStack_d0;
      lStack_88 = lStack_b8;
      uStack_90 = uStack_c0;
      if (lStack_b8 == 0) {
        puVar7 = &uStack_a0;
        FUN_1040afbb4(puVar7,0x112d387f8,&UNK_10d902650);
      }
      else {
        _swift_dynamicCast(&uStack_f0,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        puVar7 = puVar8;
        if (((ulong)puVar8 & 1) != 0) {
LAB_1040aeb00:
          lVar3 = param_1;
          func_0x00010bf49260();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1040aebe8);
            (*pcVar1)();
          }
          uVar5 = uStack_f0;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_f0,uStack_e8);
          _swift_bridgeObjectRelease(uStack_e8);
          lVar4 = lVar3;
          func_0x00010bf4b900(lVar3);
          _objc_release(lVar3);
          _objc_release(uVar5);
          func_0x00010c0752a0(param_1);
          uVar2 = (uint)lVar4 ^ (uint)param_1;
          goto LAB_1040ae940;
        }
      }
      puVar9 = (undefined1 *)0x800000010f1ecff0;
      uVar5 = 0xd000000000000050;
      uVar10 = 3;
    }
    else {
      if (puVar9 != (undefined1 *)0x0) goto LAB_1040ae9d0;
      FUN_1040afc48(auStack_80,&uStack_d0,0x11305ec88,&UNK_10dcd3368);
      puStack_98 = puStack_c8;
      uStack_a0 = uStack_d0;
      lStack_88 = lStack_b8;
      uStack_90 = uStack_c0;
      if (lStack_b8 == 0) {
        puVar7 = &uStack_a0;
        FUN_1040afbb4(puVar7,0x112d387f8,&UNK_10d902650);
      }
      else {
        _swift_dynamicCast(&uStack_f0,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)puVar7 & 1) != 0) goto LAB_1040aeb00;
      }
      puVar9 = (undefined1 *)0x800000010f1ed050;
      uVar5 = 0xd000000000000039;
      uVar10 = 2;
    }
  }
  FUN_1040afb44();
  _swift_allocError(&UNK_110742330,puVar7,0,0);
  *puVar7 = uVar5;
  puVar7[1] = puVar9;
  *(undefined1 *)(puVar7 + 2) = uVar10;
  _swift_willThrow();
  FUN_1040afbb4(auStack_80,0x11305ec88,&UNK_10dcd3368);
LAB_1040aea88:
  return (uint)puVar9 & 1;
}



/* Entry: 1040aebe8; end: 1040aed5f;  */

uint FUN_1040aebe8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint extraout_w8;
  long unaff_x21;
  uint uVar5;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  lVar2 = param_1;
  func_0x000107c5dc84();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040aed5c);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x00010bfac780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    FUN_1040af1c0(auStack_60,lVar3);
    _objc_release(lVar3);
    uVar5 = extraout_w8;
    if (unaff_x21 == 0) {
      FUN_1040afc48(auStack_60,auStack_a0,0x112d387f8,&UNK_10d902650);
      if (lStack_88 == 0) {
        FUN_1040afbb4(auStack_a0,0x112d387f8,&UNK_10d902650);
        uVar5 = 1;
      }
      else {
        func_0x000100102924(auStack_a0,auStack_80);
        func_0x000100102924(auStack_80,auStack_a0);
        uVar4 = 0x112d387f8;
        func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
        _swift_dynamicCast(auStack_c0,auStack_a0,PTR___sypN_11034f1a8 + 8,uVar4,7);
        uVar5 = (uint)(lStack_a8 == 0);
        FUN_1040afbb4(auStack_c0,0x112d387f8,&UNK_10d902650);
      }
      func_0x00010c075d20(param_1);
      FUN_1040afbb4(auStack_60,0x112d387f8,&UNK_10d902650);
      uVar5 = uVar5 ^ (uint)param_1 ^ 1;
    }
    return uVar5 & 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040aed60);
  (*pcVar1)();
}



/* Entry: 1040aed60; end: 1040af1bf;  */

uint FUN_1040aed60(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  byte **ppbVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  uint uVar6;
  uint extraout_w8_00;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x21;
  byte *pbStack_90;
  ulong uStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  undefined1 auStack_58 [32];
  undefined1 *puStack_38;
  
  ppbVar3 = &pbStack_90;
  func_0x000107c5dc84();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040af1bc);
    (*pcVar1)();
  }
  lVar9 = param_1;
  func_0x00010bfac780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040af1c0);
    (*pcVar1)();
  }
  puVar2 = auStack_58;
  FUN_1040af8d4(puVar2,lVar9);
  _objc_release(lVar9);
  uVar6 = extraout_w8;
  if (unaff_x21 != 0) goto LAB_1040aedcc;
  puStack_38 = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    if (puVar2 == (undefined1 *)0x4) {
      FUN_1040afbb4(auStack_58,0x11305ec80,&UNK_10dcd3360);
      uVar6 = 1;
    }
    else {
      FUN_1040afbb4(auStack_58,0x11305ec80,&UNK_10dcd3360);
      uVar6 = 0;
    }
    goto LAB_1040aedcc;
  }
  FUN_1040afc48(auStack_58,&pbStack_80,0x11305ec80,&UNK_10dcd3360);
  _swift_dynamicCast(&pbStack_90,&pbStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if ((int)ppbVar3 == 0) {
    FUN_1040afb44();
    _swift_allocError(&UNK_110742330,ppbVar3,0,0);
    *ppbVar3 = (byte *)0xd000000000000054;
    ppbVar3[1] = (byte *)0x800000010f1ed090;
    *(undefined1 *)(ppbVar3 + 2) = 3;
    _swift_willThrow();
    FUN_1040afbb4(auStack_58,0x11305ec80,&UNK_10dcd3360);
    uVar6 = extraout_w8_00;
    goto LAB_1040aedcc;
  }
  uVar4 = (ulong)pbStack_90 & 0xffffffffffff;
  uVar7 = uStack_88 >> 0x38 & 0xf;
  uVar5 = uVar4;
  if ((uStack_88 & 0x2000000000000000) != 0) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
    FUN_1040afbb4(auStack_58,0x11305ec80,&UNK_10dcd3360);
    _swift_bridgeObjectRelease(uStack_88);
  }
  else {
    if ((uStack_88 >> 0x3c & 1) == 0) {
      if ((uStack_88 >> 0x3d & 1) == 0) {
        if (((ulong)pbStack_90 >> 0x3c & 1) == 0) {
          uVar4 = uStack_88;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
        }
        else {
          pbStack_90 = (byte *)((uStack_88 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbStack_90 == 0x2b) {
          lVar9 = uVar4 - 1;
          if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1040af1b4);
            (*pcVar1)();
          }
          if (lVar9 == 0) goto LAB_1040af11c;
          lVar10 = 0;
          do {
            pbStack_90 = pbStack_90 + 1;
            if (((9 < *pbStack_90 - 0x30) ||
                (lVar11 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar11 >> 0x3f))
               || (uVar5 = (ulong)(byte)(*pbStack_90 - 0x30), lVar10 = lVar11 + uVar5,
                  SCARRY8(lVar11,uVar5))) goto LAB_1040af11c;
            uVar6 = 0;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        else if (*pbStack_90 == 0x2d) {
          lVar9 = uVar4 - 1;
          if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1040af1ac);
            (*pcVar1)();
          }
          if (lVar9 == 0) {
LAB_1040af11c:
            uVar6 = 1;
          }
          else {
            lVar10 = 0;
            do {
              pbStack_90 = pbStack_90 + 1;
              if (((9 < *pbStack_90 - 0x30) ||
                  (lVar11 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar11 >> 0x3f))
                 || (uVar5 = (ulong)(byte)(*pbStack_90 - 0x30), lVar10 = lVar11 - uVar5,
                    SBORROW8(lVar11,uVar5))) goto LAB_1040af11c;
              uVar6 = 0;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        else {
          if (uVar4 == 0) goto LAB_1040af11c;
          if (pbStack_90 == (byte *)0x0) {
            uVar6 = 0;
          }
          else {
            lVar9 = 0;
            do {
              if (((9 < *pbStack_90 - 0x30) ||
                  (lVar10 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar10 >> 0x3f))
                 || (uVar5 = (ulong)(byte)(*pbStack_90 - 0x30), lVar9 = lVar10 + uVar5,
                    SCARRY8(lVar10,uVar5))) goto LAB_1040af11c;
              uVar6 = 0;
              uVar4 = uVar4 - 1;
              pbStack_90 = pbStack_90 + 1;
            } while (uVar4 != 0);
          }
        }
      }
      else {
        pbStack_80 = pbStack_90;
        uStack_78 = uStack_88 & 0xffffffffffffff;
        uVar6 = (uint)pbStack_90 & 0xff;
        if (uVar6 == 0x2b) {
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1040af1b8);
            (*pcVar1)();
          }
          lVar9 = uVar7 - 1;
          if (lVar9 == 0) goto LAB_1040af11c;
          lVar10 = 0;
          pbVar8 = (byte *)((ulong)&pbStack_80 | 1);
          do {
            if (((9 < *pbVar8 - 0x30) ||
                (lVar11 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar11 >> 0x3f))
               || (uVar5 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar11 + uVar5,
                  SCARRY8(lVar11,uVar5))) goto LAB_1040af11c;
            uVar6 = 0;
            lVar9 = lVar9 + -1;
            pbVar8 = pbVar8 + 1;
          } while (lVar9 != 0);
        }
        else if (uVar6 == 0x2d) {
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1040af1b0);
            (*pcVar1)();
          }
          lVar9 = uVar7 - 1;
          if (lVar9 == 0) goto LAB_1040af11c;
          lVar10 = 0;
          pbVar8 = (byte *)((ulong)&pbStack_80 | 1);
          do {
            if (((9 < *pbVar8 - 0x30) ||
                (lVar11 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar11 >> 0x3f))
               || (uVar5 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar11 - uVar5,
                  SBORROW8(lVar11,uVar5))) goto LAB_1040af11c;
            uVar6 = 0;
            lVar9 = lVar9 + -1;
            pbVar8 = pbVar8 + 1;
          } while (lVar9 != 0);
        }
        else {
          if (uVar7 == 0) goto LAB_1040af11c;
          lVar9 = 0;
          ppbVar3 = &pbStack_80;
          do {
            if (((9 < *(byte *)ppbVar3 - 0x30) ||
                (lVar10 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
               (uVar5 = (ulong)(byte)(*(byte *)ppbVar3 - 0x30), lVar9 = lVar10 + uVar5,
               SCARRY8(lVar10,uVar5))) goto LAB_1040af11c;
            uVar6 = 0;
            uVar7 = uVar7 - 1;
            ppbVar3 = (byte **)((long)ppbVar3 + 1);
          } while (uVar7 != 0);
        }
      }
    }
    else {
      uVar5 = uStack_88;
      func_0x000100edba6c(pbStack_90,uStack_88,10);
      uVar6 = (uint)uVar5;
    }
    FUN_1040afbb4(auStack_58,0x11305ec80,&UNK_10dcd3360);
    _swift_bridgeObjectRelease(uStack_88);
    if ((uVar6 & 0xff) != 1) {
      uVar6 = 1;
      goto LAB_1040aedcc;
    }
  }
  uVar6 = 0;
LAB_1040aedcc:
  return uVar6 & 1;
}



/* Entry: 1040af1c0; end: 1040af8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040af1c0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_f0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_58;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_11305ec48);
  _objc_retain();
  lVar5 = lVar4;
  func_0x00010bfc5820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___sypN_11034f1a8;
  if (lVar5 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar5;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
    _objc_release(lVar5);
  }
  lVar5 = param_2;
  func_0x00010bf529e0();
  puVar8 = (undefined8 *)0x0;
  if (lVar5 != 0) {
    lVar13 = 0;
    lVar11 = lVar12;
    do {
      lVar12 = param_2;
      func_0x000107c5dc14();
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)lVar12);
      puVar10 = PTR___ss5Int32VN_11034ee20;
      __ss11AnyHashableVyABxcSHRzlufC
                (&uStack_b0,&uStack_d0,PTR___ss5Int32VN_11034ee20,PTR___ss5Int32VSHsWP_11034ee28);
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1040af8c0);
        (*pcVar3)();
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        _swift_bridgeObjectRelease(lVar11);
        _objc_release(lVar4);
LAB_1040af574:
        func_0x0001007bbff0(&uStack_b0);
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        return;
      }
      _swift_bridgeObjectRetain(lVar11);
      puVar8 = &uStack_b0;
      func_0x000100df95d0(puVar8);
      if (((ulong)puVar10 & 1) == 0) {
        _objc_release(lVar4);
        _swift_bridgeObjectRelease_n(lVar11,2);
        goto LAB_1040af574;
      }
      func_0x0001000bb420(*(long *)(lVar11 + 0x38) + (long)puVar8 * 0x20,&uStack_d0);
      func_0x0001007bbff0(&uStack_b0);
      _swift_bridgeObjectRelease(lVar11);
      func_0x000100102924(&uStack_d0,auStack_88);
      lVar12 = param_2;
      func_0x00010bf529e0();
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1040af8bc);
        (*pcVar3)();
      }
      if (lVar13 == lVar12 + -1) {
        lVar5 = lVar4;
        func_0x000107c4f904();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1040af8d0);
          (*pcVar3)();
        }
        puVar8 = auStack_88;
        func_0x0001006732c8(puVar8,uStack_70);
        __ss27_bridgeAnythingToObjectiveCyyXlxlF();
        lVar12 = lVar5;
        func_0x00010bdc3c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _swift_unknownObjectRelease(puVar8);
        if (lVar12 == 0) {
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(alStack_f0,lVar12);
          _swift_unknownObjectRelease(lVar12);
          func_0x000100102924(alStack_f0,&uStack_d0);
        }
        uVar7 = 0x112d387f8;
        func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
        puVar8 = &uStack_b0;
        _swift_dynamicCast(puVar8,&uStack_d0,uVar7,puVar1 + 8,6);
        if (((ulong)puVar8 & 1) == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
        }
        lVar5 = lVar4;
        func_0x00010bfac860();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          puVar8 = auStack_88;
          func_0x0001006732c8(puVar8,uStack_70);
          __ss27_bridgeAnythingToObjectiveCyyXlxlF();
          lVar12 = lVar5;
          func_0x00010bdc3c00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          _swift_unknownObjectRelease(puVar8);
          if (lVar12 != 0) {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(alStack_f0,lVar12);
            _swift_unknownObjectRelease(lVar12);
            _objc_release(lVar4);
            _swift_bridgeObjectRelease(lVar11);
            func_0x000100102924(alStack_f0,&uStack_d0);
            func_0x000100102924(&uStack_d0,alStack_f0);
            _swift_dynamicCast(&lStack_58,alStack_f0,puVar1 + 8,PTR___sSiN_11034deb0,7);
            FUN_1040afbf4(lStack_58);
            FUN_1040afc48(&uStack_b0,param_1,0x112d387f8,&UNK_10d902650);
            FUN_1040afbb4(&uStack_b0,0x112d387f8,&UNK_10d902650);
            func_0x000100183ab8(auStack_88);
            return;
          }
          _objc_release(lVar4);
          _swift_bridgeObjectRelease(lVar11);
          param_1[1] = 0;
          *param_1 = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          FUN_1040afbb4(&uStack_b0,0x112d387f8,&UNK_10d902650);
          func_0x000100183ab8(auStack_88);
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1040af8d4);
        (*pcVar3)();
      }
      lVar12 = lVar4;
      func_0x00010bfac860();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1040af8c4);
        (*pcVar3)();
      }
      puVar8 = auStack_88;
      func_0x0001006732c8(puVar8,uStack_70);
      __ss27_bridgeAnythingToObjectiveCyyXlxlF();
      lVar6 = lVar12;
      func_0x00010bdc3c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _swift_unknownObjectRelease(puVar8);
      if (lVar6 == 0) {
        _objc_release(lVar4);
        _swift_bridgeObjectRelease(lVar11);
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        func_0x000100183ab8(auStack_88);
        return;
      }
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar6);
      _swift_unknownObjectRelease(lVar6);
      func_0x000100102924(&uStack_d0,&uStack_b0);
      func_0x0001000bb420(&uStack_b0,&uStack_d0);
      puVar8 = &uStack_d0;
      _swift_dynamicCast(alStack_f0,puVar8,puVar1 + 8,PTR___sSiN_11034deb0,7);
      uVar9 = (uint)puVar8;
      lVar12 = alStack_f0[0];
      FUN_1040afbf4();
      if (((uVar9 & 0xff) == 1) || (lVar12 != 6)) {
        uStack_d0 = 0;
        uStack_c8 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x1b);
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (auStack_88,&uStack_d0,puVar1 + 8,PTR___ss26DefaultStringInterpolationVN_11034ec00
                   ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        puVar8 = (undefined8 *)0xd000000000000019;
        __sSS6appendyySSF(0xd000000000000019,0x800000010f1ecce0);
        uVar2 = uStack_c8;
        uVar7 = uStack_d0;
        FUN_1040afb44();
        _swift_allocError(&UNK_110742330,puVar8,0,0);
        *puVar8 = uVar7;
        puVar8[1] = uVar2;
        *(undefined1 *)(puVar8 + 2) = 2;
        _swift_willThrow();
        _swift_bridgeObjectRelease(lVar11);
        _objc_release(lVar4);
        func_0x000100183ab8(&uStack_b0);
        func_0x000100183ab8(auStack_88);
        return;
      }
      lVar12 = lVar4;
      func_0x000107c4f904();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1040af8c8);
        (*pcVar3)();
      }
      puVar8 = auStack_88;
      func_0x0001006732c8(puVar8,uStack_70);
      __ss27_bridgeAnythingToObjectiveCyyXlxlF();
      lVar6 = lVar12;
      func_0x00010bdc3c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _swift_unknownObjectRelease(puVar8);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1040af8cc);
        (*pcVar3)();
      }
      __ss018_bridgeAnyObjectToB0yypyXlSgF(alStack_f0,lVar6);
      _swift_unknownObjectRelease(lVar6);
      _objc_release(lVar4);
      func_0x000100102924(alStack_f0,&uStack_d0);
      uVar7 = 0;
      FUN_1040afc04(0);
      _swift_dynamicCast(&lStack_58,&uStack_d0,puVar1 + 8,uVar7,7);
      lVar4 = lStack_58;
      lVar6 = lStack_58;
      func_0x00010bfc5820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        func_0x000100183ab8(&uStack_b0);
        _swift_bridgeObjectRelease(lVar11);
        lVar12 = 0;
      }
      else {
        lVar12 = lVar6;
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
        _swift_bridgeObjectRelease(lVar11);
        _objc_release(lVar6);
        func_0x000100183ab8(&uStack_b0);
      }
      lVar13 = lVar13 + 1;
      puVar8 = auStack_88;
      func_0x000100183ab8();
      lVar11 = lVar12;
    } while (lVar5 != lVar13);
  }
  FUN_1040afb44();
  _swift_allocError(&UNK_110742330,puVar8,0,0);
  *puVar8 = 0xd00000000000002e;
  puVar8[1] = 0x800000010f1ecd00;
  *(undefined1 *)(puVar8 + 2) = 2;
  _swift_willThrow();
  _objc_release(lVar4);
  _swift_bridgeObjectRelease(lVar12);
  return;
}



/* Entry: 1040af8d4; end: 1040afa9f;  */

undefined * FUN_1040af8d4(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x21;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined *puStack_70;
  char cStack_68;
  undefined1 auStack_60 [32];
  undefined1 *puStack_40;
  undefined1 uStack_38;
  
  puVar3 = auStack_60;
  puVar4 = param_2;
  FUN_1040af1c0();
  if (unaff_x21 == 0) {
    uStack_38 = SUB81(puVar4,0);
    puStack_40 = puVar3;
    FUN_1040afc48(auStack_60,&uStack_90,0x11305ec88,&UNK_10dcd3368);
    if (lStack_78 != 0) {
      func_0x000100102924(&uStack_90,param_1);
      FUN_1040afc48(auStack_60,&uStack_90,0x11305ec88,&UNK_10dcd3368);
      if (cStack_68 != '\x01') {
        FUN_1040afbb4(auStack_60,0x11305ec88,&UNK_10dcd3368);
        FUN_1040afbb4(&uStack_90,0x112d387f8,&UNK_10d902650);
        return puStack_70;
      }
      func_0x000100183ab8(param_1);
    }
    FUN_1040afbb4(&uStack_90,0x112d387f8,&UNK_10d902650);
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x3d);
    puVar5 = (undefined8 *)0x800000010f1ecca0;
    __sSS6appendyySSF(0xd00000000000003b);
    func_0x00010bf6e340(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_2);
    __sSS6appendyySSF(puVar4,puVar5);
    _swift_bridgeObjectRelease();
    uVar2 = uStack_88;
    uVar1 = uStack_90;
    FUN_1040afb44();
    param_2 = &UNK_110742330;
    _swift_allocError(&UNK_110742330,puVar5,0,0);
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    *(undefined1 *)(puVar5 + 2) = 0;
    _swift_willThrow();
    FUN_1040afbb4(auStack_60,0x11305ec88,&UNK_10dcd3368);
  }
  return param_2;
}



/* Entry: 1040afaa0; end: 1040afaff; -[_TtC24SCRTUSFilteringEvaluator30RTUSFilteringEvaluationVisitor init] */

void FUN_1040afaa0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCRTUSFilteringEvaluator.RTUSFilteringEvaluationVisitor",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040afacc);
  (*pcVar1)();
}



/* Entry: 1040afb00; end: 1040afb0f; -[_TtC24SCRTUSFilteringEvaluator30RTUSFilteringEvaluationVisitor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040afb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305ec48));
  return;
}



/* Entry: 1040afb10; end: 1040afb2f;  */

void FUN_1040afb10(void)

{
  _objc_opt_self(&PTR_PTR_11298c7f0);
  return;
}



/* Entry: 1040afb30; end: 1040afb43;  */

void FUN_1040afb30(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110742270;
  if (lRam000000011305eca8 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011305eca8 = param_1;
  }
  return;
}



/* Entry: 1040afb44; end: 1040afb83;  */

void FUN_1040afb44(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ec78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3460;
  _swift_getWitnessTable(&UNK_10dcd3460,&UNK_110742330);
  puRam000000011305ec78 = puVar1;
  return;
}



/* Entry: 1040afb84; end: 1040afbb3;  */

bool FUN_1040afb84(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1040afbb4; end: 1040afbf3;  */

undefined8 FUN_1040afbb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1040afbf4; end: 1040afc03;  */

undefined1  [16] FUN_1040afbf4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xe) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xd < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1040afc04; end: 1040afc47;  */

void FUN_1040afc04(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ec90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e2e08;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam000000011305ec90 = puVar1;
  return;
}



/* Entry: 1040afc48; end: 1040afc8f;  */

undefined8 FUN_1040afc48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1040afc90; end: 1040afcb7;  */

void FUN_1040afc90(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110742230;
  if (lRam000000011305ec98 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011305ec98 = param_1;
  }
  return;
}



/* Entry: 1040afcb8; end: 1040afcfb;  */

void FUN_1040afcb8(long param_1,long *param_2,long param_3)

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



/* Entry: 1040afcfc; end: 1040afde3;  */

void FUN_1040afcfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1040afde4; end: 1040afe7f;  */

undefined8 * FUN_1040afde4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x0001040afda4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1040afe80; end: 1040afec3;  */

undefined8 * FUN_1040afe80(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001040afdcc(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1040afec4; end: 1040aff7b;  */

int FUN_1040afec4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1040aff7c; end: 1040b0323;  */

/* WARNING: Removing unreachable block (ram,0x0001040b005c) */
/* WARNING: Removing unreachable block (ram,0x0001040b00fc) */
/* WARNING: Removing unreachable block (ram,0x0001040b0100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1040aff7c(double param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  long lStack_80;
  long lStack_78;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar9 = 1;
  }
  else {
    lVar2 = 0;
    FUN_1040afb10();
    lVar3 = lVar2;
    _objc_allocWithZone();
    *(long *)(lVar3 + _DAT_11305ec48) = param_2;
    puVar5 = PTR_s_init_1125d9248;
    lStack_80 = lVar3;
    lStack_78 = lVar2;
    _objc_retain(param_2);
    _objc_retain();
    _objc_retain();
    plVar4 = &lStack_80;
    _objc_msgSendSuper2(plVar4,puVar5);
    _CACurrentMediaTime();
    lVar3 = param_3;
    dVar11 = param_1;
    func_0x000107c508cc();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b0324);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    FUN_1040ad738();
    uVar9 = (uint)lVar2;
    _objc_release(lVar3);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11305ecb0);
    lVar3 = param_2;
    func_0x00010bfc52e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___sSiN_11034deb0;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar8);
    uVar7 = 0;
    if (param_5 != 0) {
      uVar7 = param_4;
    }
    lVar2 = -0x2000000000000000;
    if (param_5 != 0) {
      lVar2 = param_5;
    }
    _swift_bridgeObjectRetain(param_5);
    uVar6 = uVar7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar2);
    _swift_bridgeObjectRelease(lVar2);
    func_0x00010af64908(uVar10,uVar9 & 1,lVar3,puVar5,uVar6,1);
    _objc_release(lVar3);
    _objc_release(puVar5);
    _objc_release(uVar6);
    lVar3 = param_2;
    func_0x00010bfc52e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___sSiN_11034deb0;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar8);
    _swift_bridgeObjectRetain(param_5);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar2);
    _swift_bridgeObjectRelease(lVar2);
    _CACurrentMediaTime();
    func_0x00010af64f2c((dVar11 - param_1) * 1000000.0,uVar10,lVar3,puVar5,uVar7);
    _objc_release(param_2);
    _objc_release(param_3);
    _objc_release(plVar4);
    _objc_release(lVar3);
    _objc_release(puVar5);
    _objc_release(uVar7);
  }
  return uVar9 & 1;
}



/* Entry: 1040b0324; end: 1040b03eb; -[RTUSFilteringEvaluator evaluateFilterWithEvent:tree:product:payloadId:] */

uint FUN_1040b0324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_1040aff7c(param_3,param_4,param_5,param_2,param_6);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1040b03ec; end: 1040b041f;  */

void FUN_1040b03ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040b0420; end: 1040b042f; -[RTUSFilteringEvaluator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305ecb0));
  return;
}



/* Entry: 1040b0430; end: 1040b044f;  */

void FUN_1040b0430(void)

{
  _objc_opt_self(&PTR_PTR_11298c8b0);
  return;
}



/* Entry: 1040b0450; end: 1040b06a7;  */

void FUN_1040b0450(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  func_0x000100083b20(&uStack_68);
  puVar4 = PTR_PTR_1126adbb0;
  _objc_allocWithZone(PTR_PTR_1126adbb0);
  func_0x00010bfee200();
  uVar5 = uVar1;
  func_0x000107c50958(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126adbb8;
  _objc_allocWithZone(PTR_PTR_1126adbb8);
  _objc_retain(puVar4);
  func_0x00010c0013c0(puVar6,param_3,uVar5,puVar4);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x000107c50958(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126adbc0;
  _objc_allocWithZone(PTR_PTR_1126adbc0);
  func_0x00010c0013c0();
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar8 = PTR_PTR_1126adbc8;
  _objc_allocWithZone(PTR_PTR_1126adbc8);
  func_0x00010c02be40();
  uVar5 = uVar2;
  func_0x000107c4f800(uVar2,param_3,2,0x29,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  uVar9 = uStack_68;
  func_0x000107c5cec4(uStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x000107c50958(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126adbd0;
  _objc_allocWithZone();
  func_0x00010c001560();
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar10);
  if (puVar11 != (undefined *)0x0) {
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(uStack_68);
    _swift_unknownObjectRelease(uVar2);
    _objc_release(uVar1);
    *param_1 = puVar11;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b06a8);
  (*pcVar3)();
}



/* Entry: 1040b06a8; end: 1040b06db;  */

undefined1  [16] FUN_1040b06a8(void)

{
  return ZEXT816(0x110742430);
}



/* Entry: 1040b06dc; end: 1040b07b3;  */

void FUN_1040b06dc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040b07b4; end: 1040b07d3;  */

void FUN_1040b07b4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1040b07d4; end: 1040b0813;  */

void FUN_1040b07d4(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ecf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd35b0;
  _swift_getWitnessTable(&UNK_10dcd35b0,&UNK_1107424a8);
  puRam000000011305ecf0 = puVar1;
  return;
}



/* Entry: 1040b0814; end: 1040b0823;  */

undefined1  [16] FUN_1040b0814(void)

{
  return ZEXT816(0x1107424a8);
}



/* Entry: 1040b0824; end: 1040b0833; -[SCRTUSProductConfig eventTTLSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040b0824(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11305ecf8);
}



/* Entry: 1040b0834; end: 1040b0843; -[SCRTUSProductConfig diskQuotaBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040b0834(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11305ed00);
}



/* Entry: 1040b0844; end: 1040b0853; -[SCRTUSProductConfig eventCountLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040b0844(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11305ed08);
}



/* Entry: 1040b0854; end: 1040b0863; -[SCRTUSProductConfig purgeEventsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1040b0854(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11305ed10);
}



/* Entry: 1040b0864; end: 1040b0903; -[SCRTUSProductConfig eventPayloadIdToEventFilterParseTreeMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0864(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11305ed20);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001004c0060(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x0001004c0060(0,0x11305ed50,&PTR_PTR_1126adbd8);
    func_0x000100120cb0();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1040b0904; end: 1040b09b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305ecf8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305ed00) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11305ed08) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11305ed10) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11305ed18) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11305ed20) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040b09b8; end: 1040b0a13; -[SCRTUSProductConfig init] */

void FUN_1040b09b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("RTUSConfigService.RTUSProductConfig",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b09e4);
  (*pcVar1)();
}



/* Entry: 1040b0a14; end: 1040b0a4b; -[SCRTUSProductConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0a14(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11305ed18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11305ed20));
  return;
}



/* Entry: 1040b0a4c; end: 1040b0a7b;  */

undefined1  [16] FUN_1040b0a4c(void)

{
  return ZEXT816(0x1107425c8);
}



/* Entry: 1040b0a7c; end: 1040b0b03; -[_TtC30CompositeConfigServiceProvider46CompositeConfigValueProviderParamsProviderImpl params] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0a7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11305ed80);
  _objc_retain();
  _swift_retain(uVar2);
  uVar1 = 0x11305ed88;
  func_0x0001000285a8(0x11305ed88,&UNK_10dcd3778);
  func_0x000100075034(&uStack_38,FUN_1040b0b98,0,uVar1);
  _swift_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 1040b0b04; end: 1040b0b97; -[_TtC30CompositeConfigServiceProvider46CompositeConfigValueProviderParamsProviderImpl setParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11305ed80);
  uStack_40 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _swift_retain(uVar1);
  func_0x000100075034(FUN_1040b0c4c,auStack_50,PTR___sytN_11034f1b0 + 8);
  _objc_release(param_3);
  _swift_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1040b0b98; end: 1040b0bc3;  */

void FUN_1040b0b98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _objc_retain();
  return;
}



/* Entry: 1040b0bc4; end: 1040b0c07;  */

void FUN_1040b0bc4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _objc_release(*param_1);
  *param_1 = uVar1;
  _objc_retain(uVar1);
  return;
}



/* Entry: 1040b0c08; end: 1040b0c3b;  */

void FUN_1040b0c08(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


