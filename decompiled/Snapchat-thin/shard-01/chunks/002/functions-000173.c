/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e117c0; end: 100e11883;  */

void FUN_100e117c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d382a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a5d68;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d382a0 = puVar1;
  return;
}



/* Entry: 100e11884; end: 100e11993;  */

/* WARNING: Possible PIC construction at 0x000100e1196c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e11970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e11884(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_112d38800) + _DAT_112d38808);
  lVar8 = puVar1[1];
  if (lVar8 != 0) {
    uVar11 = *(undefined8 *)(param_2 + _DAT_112d38810);
    uVar5 = ((undefined8 *)(param_2 + _DAT_112d38810))[1];
    puVar2 = (undefined8 *)(param_2 + _DAT_112d38818);
    puVar3 = (undefined8 *)(param_2 + _DAT_112d38820);
    uVar9 = *(undefined8 *)(param_2 + _DAT_112d38828);
    puVar4 = (undefined8 *)(param_2 + _DAT_112d38830);
    uVar10 = *(undefined8 *)(param_2 + _DAT_112d38838);
    uVar6 = *(undefined4 *)(param_2 + _DAT_112d38840);
    *param_1 = *puVar1;
    param_1[1] = lVar8;
    param_1[2] = uVar11;
    param_1[3] = uVar5;
    uVar11 = puVar2[1];
    uVar13 = *puVar2;
    uVar12 = puVar3[1];
    uVar15 = puVar3[1];
    uVar14 = *puVar3;
    param_1[5] = puVar2[1];
    param_1[4] = uVar13;
    param_1[7] = uVar15;
    param_1[6] = uVar14;
    param_1[8] = uVar9;
    uVar13 = *puVar4;
    param_1[10] = puVar4[1];
    param_1[9] = uVar13;
    param_1[0xb] = uVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar11);
    func_0x000107c61434(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(uVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e11994);
  (*pcVar7)();
}



/* Entry: 100e11994; end: 100e11c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e11994(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_108;
  long lStack_100;
  byte bStack_f8;
  undefined4 uStack_f7;
  undefined3 uStack_f3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined3 uStack_74;
  
  if (*(char *)(param_2 + _DAT_112d387e0) == '\x01') {
    lVar9 = *(long *)(param_2 + _DAT_112d387f0);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e11b24);
      (*pcVar7)();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar9 + _DAT_112d38848) + _DAT_112d38868);
    lVar10 = puVar1[1];
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e11b2c);
      (*pcVar7)();
    }
    bVar6 = *(byte *)(*(long *)(lVar9 + _DAT_112d38848) + _DAT_112d38870);
    if (bVar6 == 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e11b30);
      (*pcVar7)();
    }
    uVar12 = *puVar1;
    uVar2 = *(undefined8 *)(lVar9 + _DAT_112d38850);
    uVar4 = ((undefined8 *)(lVar9 + _DAT_112d38850))[1];
    uVar3 = *(undefined8 *)(lVar9 + _DAT_112d38858);
    uVar5 = ((undefined8 *)(lVar9 + _DAT_112d38858))[1];
    uVar11 = *(undefined8 *)(lVar9 + _DAT_112d38860);
    func_0x000107c61434(uVar5);
    func_0x000107c61174();
    func_0x000107c61434(lVar10);
    func_0x000107c61434(uVar4);
    uVar8 = 1;
    lStack_100 = lVar10;
    uStack_e8 = uVar4;
    uStack_d8 = uVar5;
    uStack_d0 = uVar11;
    uStack_108 = uVar12;
    uStack_f0 = uVar2;
    uStack_e0 = uVar3;
    bStack_f8 = bVar6 & 1;
  }
  else {
    if (*(long *)(param_2 + _DAT_112d387e8) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e11b28);
      (*pcVar7)();
    }
    FUN_100e11884(&uStack_108);
    uVar8 = 0;
    uStack_78 = uStack_f7;
    uStack_74 = uStack_f3;
    uStack_80 = uStack_a8;
    uStack_98 = uStack_c0;
    uStack_a0 = uStack_c8;
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
  }
  *param_1 = uStack_108;
  param_1[1] = lStack_100;
  *(byte *)(param_1 + 2) = bStack_f8;
  *(undefined4 *)((long)param_1 + 0x11) = uStack_78;
  *(uint *)((long)param_1 + 0x14) = CONCAT31(uStack_74,uStack_78._3_1_);
  param_1[3] = uStack_f0;
  param_1[4] = uStack_e8;
  param_1[5] = uStack_e0;
  param_1[6] = uStack_d8;
  param_1[7] = uStack_d0;
  param_1[9] = uStack_98;
  param_1[8] = uStack_a0;
  param_1[0xb] = uStack_88;
  param_1[10] = uStack_90;
  *(undefined4 *)(param_1 + 0xc) = uStack_80;
  *(undefined1 *)((long)param_1 + 100) = uVar8;
  return;
}



/* Entry: 100e11c4c; end: 100e11ce7;  */

undefined8 FUN_100e11c4c(undefined8 param_1)

{
  FUN_100e0d994();
  return param_1;
}



/* Entry: 100e11ce8; end: 100e11d27;  */

void FUN_100e11ce8(void)

{
  func_0x000107c61168(&PTR_PTR_112798f08);
  return;
}



/* Entry: 100e11d28; end: 100e11deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e11d28(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_112d38848) + _DAT_112d38868);
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100e11de8);
    (*pcVar5)();
  }
  bVar4 = *(byte *)(*(long *)(param_2 + _DAT_112d38848) + _DAT_112d38870);
  if (bVar4 != 2) {
    uVar8 = *(undefined8 *)(param_2 + _DAT_112d38850);
    uVar3 = ((undefined8 *)(param_2 + _DAT_112d38850))[1];
    puVar2 = (undefined8 *)(param_2 + _DAT_112d38858);
    uVar7 = *(undefined8 *)(param_2 + _DAT_112d38860);
    *param_1 = *puVar1;
    param_1[1] = lVar6;
    *(byte *)(param_1 + 2) = bVar4 & 1;
    param_1[3] = uVar8;
    param_1[4] = uVar3;
    uVar8 = puVar2[1];
    uVar9 = *puVar2;
    param_1[6] = puVar2[1];
    param_1[5] = uVar9;
    param_1[7] = uVar7;
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e11dec);
  (*pcVar5)();
}



/* Entry: 100e11dec; end: 100e11e0b;  */

void FUN_100e11dec(void)

{
  func_0x000107c61168(&PTR_PTR_112798d60);
  return;
}



/* Entry: 100e11e0c; end: 100e1207f;  */

undefined8 FUN_100e11e0c(void)

{
  return 0;
}



/* Entry: 100e12080; end: 100e120bf;  */

void FUN_100e12080(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d389a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d902798;
  func_0x000107c61520(&UNK_10d902798,&UNK_110354f68);
  puRam0000000112d389a0 = puVar1;
  return;
}



/* Entry: 100e120c0; end: 100e120c3;  */

void FUN_100e120c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d389a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d902838;
  func_0x000107c61520(&UNK_10d902838,&UNK_110354ed8);
  puRam0000000112d389a8 = puVar1;
  return;
}



/* Entry: 100e120c4; end: 100e12103;  */

void FUN_100e120c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d389a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d902838;
  func_0x000107c61520(&UNK_10d902838,&UNK_110354ed8);
  puRam0000000112d389a8 = puVar1;
  return;
}



/* Entry: 100e12104; end: 100e12107;  */

void FUN_100e12104(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d389b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9028d8;
  func_0x000107c61520(&UNK_10d9028d8,&UNK_110354e48);
  puRam0000000112d389b0 = puVar1;
  return;
}



/* Entry: 100e12108; end: 100e12147;  */

void FUN_100e12108(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d389b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9028d8;
  func_0x000107c61520(&UNK_10d9028d8,&UNK_110354e48);
  puRam0000000112d389b0 = puVar1;
  return;
}



/* Entry: 100e12148; end: 100e1218f;  */

undefined8 FUN_100e12148(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100e12190; end: 100e121b7;  */

void FUN_100e12190(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100e121b8; end: 100e121bb; -[SCCampaignUXConfig copyWithZone:] */

void FUN_100e121b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100e121bc; end: 100e121bf; -[SCBillboardCampaignMetadata copyWithZone:] */

void FUN_100e121bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100e121c0; end: 100e121c3; -[SCFeedHeaderPromptIcon copyWithZone:] */

void FUN_100e121c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100e121c4; end: 100e121cf; -[SCFeedHeaderPromptUXConfig copyWithZone:] */

void FUN_100e121c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100e121d0; end: 100e121d3; -[SCProfileActivityCardIcon copyWithZone:] */

void FUN_100e121d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100e121d4; end: 100e121d7; -[SCProfileActivityCardUXConfig copyWithZone:] */

void FUN_100e121d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100e121d8; end: 100e121fb; -[SCCampaignCooldownConfig copyWithZone:] */

void FUN_100e121d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100e121fc; end: 100e1220b; -[SCContextualRankOverride rank] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100e121fc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112d389c8);
}



/* Entry: 100e1220c; end: 100e12267; -[SCContextualRankOverride category] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1220c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d389d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d389d0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e12268; end: 100e1226f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e12268(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112d389c8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d389d0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e12270; end: 100e123cb; -[SCContextualRankOverride initWithRank:category:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e12270(long param_1,long param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined4 *)(param_1 + _DAT_112d389c8) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112d389d0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e123cc; end: 100e1248b; -[SCContextualRankOverride hash] */

undefined8 FUN_100e123cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100e12400();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100e1248c; end: 100e125ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100e1248c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  long lVar7;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
    return 0;
  }
  plVar3 = &lStack_58;
  func_0x000107c6147c(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,lVar5,6);
  if (((ulong)plVar3 & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(unaff_x20 + _DAT_112d389c8);
  iVar2 = *(int *)(lStack_58 + _DAT_112d389c8);
  lVar5 = ((long *)(unaff_x20 + _DAT_112d389d0))[1];
  lVar7 = ((long *)(lStack_58 + _DAT_112d389d0))[1];
  if (lVar5 == 0) {
    func_0x000107c61434(lVar7);
    func_0x000107c61170(lStack_58);
    if (lVar7 != 0) {
      func_0x000107c6142c(lVar7);
      uVar6 = 0;
      goto LAB_100e1258c;
    }
LAB_100e12588:
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    if (lVar7 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d389d0);
      if (lVar4 == *(long *)(lStack_58 + _DAT_112d389d0) && lVar5 == lVar7) {
        func_0x000107c61170(lStack_58);
        goto LAB_100e12588;
      }
      func_0x000107c605b8();
      uVar6 = (uint)lVar4;
    }
    func_0x000107c61170(lStack_58);
  }
LAB_100e1258c:
  return iVar1 == iVar2 & uVar6;
}



/* Entry: 100e125ac; end: 100e1262b; -[SCContextualRankOverride isEqual:] */

uint FUN_100e125ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_100e1248c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100e1262c; end: 100e1262f; -[SCContextualRankOverride copyWithZone:] */

void FUN_100e1262c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100e12630; end: 100e1264b; -[SCContextualRankOverride description] */

void FUN_100e12630(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1264c; end: 100e126c7; -[SCContextualRankOverride init] */

void FUN_100e1264c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "BillboardGrpcService/ContextualRankOverrideWrapper.swift",0x38,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e12694);
  (*pcVar1)();
}



/* Entry: 100e126c8; end: 100e126db; -[SCContextualRankOverride .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e126c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d389d0 + 8))
  ;
  return;
}



/* Entry: 100e126dc; end: 100e126fb;  */

void FUN_100e126dc(void)

{
  func_0x000107c61168(&PTR_PTR_112799360);
  return;
}



/* Entry: 100e126fc; end: 100e12717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e126fc(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112d389c8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d389d0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e12718; end: 100e127c3;  */

void FUN_100e12718(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100e127c4; end: 100e127e7;  */

void FUN_100e127c4(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 100e127e8; end: 100e1280f;  */

void FUN_100e127e8(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x18) == '\x03') {
    lVar1 = unaff_x20;
    FUN_100e12810();
    *(char *)(unaff_x20 + 0x18) = (char)lVar1;
  }
  return;
}



/* Entry: 100e12810; end: 100e12903;  */

bool FUN_100e12810(byte *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  pbVar1 = param_1;
  func_0x0001000ad07c();
  if ((*pbVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar2 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010ef11c00);
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      lVar4 = lVar3;
      func_0x000107c49804();
      func_0x000107c61170(lVar3);
      if ((int)lVar4 == 2) {
        return (bool)2;
      }
      return (int)lVar4 == 1;
    }
  }
  return false;
}



/* Entry: 100e12904; end: 100e12937; -[_TtC45ChangeUsernameCOFConfigServicesImplementation34ChangeUsernameCOFConfigServiceImpl initWithCircumstanceEngine:] */

long FUN_100e12904(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c615f0(param_3);
  return param_1;
}



/* Entry: 100e12938; end: 100e129d7;  */

bool FUN_100e12938(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  if ((bRam00000001137fea48 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    uVar1 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010ef11c00);
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    param_1 = (int)uVar1;
    if (lVar2 != 0) {
      func_0x000107c42c04(lVar2);
      func_0x000107c615e8(lVar2);
      param_1 = (int)lVar2;
    }
    bRam00000001137fea48 = 1;
  }
  FUN_100e127e8();
  return (param_1 - 1U & 0xfe) == 0;
}



/* Entry: 100e129d8; end: 100e12a0b; -[_TtC45ChangeUsernameCOFConfigServicesImplementation34ChangeUsernameCOFConfigServiceImpl shouldSkipUsernameInReg] */

uint FUN_100e129d8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_100e12938();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 100e12a0c; end: 100e12a47; -[_TtC45ChangeUsernameCOFConfigServicesImplementation34ChangeUsernameCOFConfigServiceImpl shouldSkipPasswordWhenChangingUsername] */

bool FUN_100e12a0c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  iVar1 = (int)uVar2;
  FUN_100e127e8();
  func_0x000107c61574(param_1);
  return (iVar1 - 1U & 0xfe) == 0;
}



/* Entry: 100e12a48; end: 100e12a7f; -[_TtC45ChangeUsernameCOFConfigServicesImplementation34ChangeUsernameCOFConfigServiceImpl shouldShowFHP] */

bool FUN_100e12a48(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_100e127e8();
  func_0x000107c61574(param_1);
  return (uVar1 & 0xff) == 2;
}



/* Entry: 100e12a80; end: 100e12ac3;  */

void FUN_100e12a80(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e12ac4; end: 100e12c2b;  */

int FUN_100e12ac4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100e12b40;
        goto LAB_100e12b24;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100e12b24:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100e12b40:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100e12c2c; end: 100e12c6b;  */

void FUN_100e12c2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d38aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d902ab4;
  func_0x000107c61520(&UNK_10d902ab4,&UNK_1103550d0);
  puRam0000000112d38aa8 = puVar1;
  return;
}



/* Entry: 100e12c6c; end: 100e12d27;  */

void FUN_100e12c6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 100e12d28; end: 100e12d2f;  */

void FUN_100e12d28(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x10);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e12d28);
      (*pcVar1)();
    }
    func_0x000107c61574(lVar3);
    lVar3 = 0;
    func_0x000100e12aa4();
    func_0x000107c613fc();
    *(undefined1 *)(lVar3 + 0x18) = 3;
    *(long *)(lVar3 + 0x10) = lVar2;
  }
  return;
}



/* Entry: 100e12d30; end: 100e12d67;  */

void FUN_100e12d30(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100e12d68; end: 100e12d8b;  */

void FUN_100e12d68(long param_1,long param_2)

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



/* Entry: 100e12d8c; end: 100e12e2b;  */

void FUN_100e12d8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e12e2c; end: 100e12f13;  */

void FUN_100e12e2c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110355148;
  func_0x000107c613fc(&UNK_110355148,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x100e12f1c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100e12d30;
  puStack_48 = &UNK_110355160;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  FUN_10151db1c(0);
  func_0x000107c610f8();
  func_0x00010151da8c();
  *param_1 = puVar1;
  return;
}



/* Entry: 100e12f14; end: 100e12f1f;  */

void FUN_100e12f14(long param_1,long param_2)

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



/* Entry: 100e12f20; end: 100e12f67; -[SCChangeUsernameCOFConfigServiceProvider applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e12f20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38b88;
  func_0x000107c61428(param_1 + _DAT_112d38b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e12f68; end: 100e13123; -[SCChangeUsernameCOFConfigServiceProvider setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e12f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38b88;
  func_0x000107c61428(param_1 + _DAT_112d38b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e13124; end: 100e13147;  */

void FUN_100e13124(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x10);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e12d28);
      (*pcVar1)();
    }
    func_0x000107c61574(lVar3);
    lVar3 = 0;
    func_0x000100e12aa4();
    func_0x000107c613fc();
    *(undefined1 *)(lVar3 + 0x18) = 3;
    *(long *)(lVar3 + 0x10) = lVar2;
  }
  return;
}



/* Entry: 100e13148; end: 100e131d3; -[SCChangeUsernameCOFConfigServiceProvider provide] */

void FUN_100e13148(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000100e12fc0();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ChangeUsernameCOFConfigServicesImplementation/SCChangeUsernameCOFConfigServiceProvider.swift"
                      ,0x5c,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e131d4);
  (*pcVar1)();
}



/* Entry: 100e131d4; end: 100e13207; -[SCChangeUsernameCOFConfigServiceProvider __safeProvide] */

void FUN_100e131d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100e12fc0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e13208; end: 100e1324b; -[SCChangeUsernameCOFConfigServiceProvider end] */

void FUN_100e13208(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1324c; end: 100e13377;  */

void FUN_100e1324c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef10f0340)) {
    uVar2 = 0xd000000000000025;
    func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      func_0x000107c602fc(0x15);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                          "ChangeUsernameCOFConfigServicesImplementation/SCChangeUsernameCOFConfigServiceProvider.swift"
                          ,0x5c,2,0x29,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e13378);
      (*pcVar1)();
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52844();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e13378; end: 100e13423; -[SCChangeUsernameCOFConfigServiceProvider setValue:forIvarName:] */

void FUN_100e13378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100e1324c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e13424; end: 100e13483; -[SCChangeUsernameCOFConfigServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e13424(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d38b88,0);
  *(undefined8 *)(param_1 + _DAT_112d38b90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e13484; end: 100e134b7;  */

void FUN_100e13484(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e134b8; end: 100e134ef; -[SCChangeUsernameCOFConfigServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e134b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d38b88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d38b90));
  return;
}



/* Entry: 100e134f0; end: 100e1350f;  */

void FUN_100e134f0(void)

{
  func_0x000107c61168(&PTR_PTR_112d38bd8);
  return;
}



/* Entry: 100e13510; end: 100e1351b;  */

void FUN_100e13510(long param_1,long param_2)

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



/* Entry: 100e1351c; end: 100e13523; -[_TtC31ChangeUsernameFHPSignalProvider31ChangeUsernameFHPSignalProvider preCheckSource] */

undefined8 FUN_100e1351c(void)

{
  return 0x20;
}



/* Entry: 100e13524; end: 100e1373f;  */

void FUN_100e13524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_1103552d0;
  func_0x000107c613fc(&UNK_1103552d0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_1103552f8;
  func_0x000107c613fc(&UNK_1103552f8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x100e13f38;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100e13f40;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100e13994;
  puStack_88 = &UNK_110355310;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110355348;
  func_0x000107c613fc(&UNK_110355348,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  puVar7 = &UNK_110355370;
  func_0x000107c613fc(&UNK_110355370,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_100e13f60;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_100e13f68;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x100de58f0;
  puStack_88 = &UNK_110355388;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c750(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x70,0x3a,0x1f,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e1373c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x70,0x42,0x16,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e13740);
  (*pcVar2)();
}



/* Entry: 100e13740; end: 100e13993;  */

void FUN_100e13740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)puVar8 - extraout_x8_00;
  lVar12 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = uVar9 - extraout_x8_01;
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  func_0x0001009f0578(param_1,lVar7);
  func_0x0001009f0578(param_2,lVar7 + lVar12);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar2 = lVar7;
  (*pcVar10)(lVar7,1,lVar1);
  if ((int)lVar2 == 1) {
    lVar12 = lVar7 + lVar12;
    (*pcVar10)(lVar12,1,lVar1);
    if ((int)lVar12 == 1) {
      func_0x000100e13f88(lVar7,0x112d373d8,&UNK_10d9014c0);
LAB_100e13940:
      uVar6 = 1;
      goto LAB_100e13944;
    }
LAB_100e138b8:
    func_0x000100e13f88(lVar7,0x112d373d0,&UNK_10d90f8f0);
  }
  else {
    func_0x0001009f0578(lVar7,uVar9);
    lVar2 = lVar7 + lVar12;
    (*pcVar10)(lVar2,1,lVar1);
    if ((int)lVar2 == 1) {
      (**(code **)(lVar11 + 8))(uVar9,lVar1);
      goto LAB_100e138b8;
    }
    puVar3 = puVar8;
    (**(code **)(lVar11 + 0x20))(puVar8,lVar7 + lVar12,lVar1);
    FUN_100df4c40();
    uVar4 = uVar9;
    func_0x000107c5fab8(uVar9,puVar8,lVar1,puVar3);
    pcVar10 = *(code **)(lVar11 + 8);
    (*pcVar10)(puVar8,lVar1);
    (*pcVar10)(uVar9,lVar1);
    func_0x000100e13f88(lVar7,0x112d373d8,&UNK_10d9014c0);
    if ((uVar4 & 1) != 0) goto LAB_100e13940;
  }
  uVar6 = 0;
LAB_100e13944:
  uVar5 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6010c(uVar6,uVar5);
  func_0x000107c3fefc(param_3);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 100e13994; end: 100e13aeb;  */

void FUN_100e13994(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(lVar4,param_2);
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,param_2 == 0,1);
  if (param_3 != 0) {
    func_0x000107c5ee94(puVar3,param_3);
  }
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,param_3 == 0,1,lVar2);
  (*pcVar1)(lVar4,puVar3);
  func_0x000100e13f88(puVar3,0x112d373d8,&UNK_10d9014c0);
  func_0x000100e13f88(lVar4,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 100e13aec; end: 100e13b2f;  */

void FUN_100e13aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001002ed07c(0);
  uVar1 = 0;
  func_0x000107c6010c(0);
  func_0x000107c3fefc(param_3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100e13b30; end: 100e13b7b;  */

void FUN_100e13b30(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100e13b7c; end: 100e13baf; -[_TtC31ChangeUsernameFHPSignalProvider31ChangeUsernameFHPSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100e13b7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e13c8c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e13bb0; end: 100e13c0f; -[_TtC31ChangeUsernameFHPSignalProvider31ChangeUsernameFHPSignalProvider init] */

void FUN_100e13bb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChangeUsernameFHPSignalProvider.ChangeUsernameFHPSignalProvider",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e13bdc);
  (*pcVar1)();
}



/* Entry: 100e13c10; end: 100e13c6b; -[_TtC31ChangeUsernameFHPSignalProvider31ChangeUsernameFHPSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e13c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e13c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e13c30) */
/* WARNING: Removing unreachable block (ram,0x000100e13c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e13c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d38c38));
  return;
}



/* Entry: 100e13c6c; end: 100e13c8b;  */

void FUN_100e13c6c(void)

{
  func_0x000107c61168(&PTR_PTR_112799478);
  return;
}



/* Entry: 100e13c8c; end: 100e13f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e13c8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (*(char *)(unaff_x20 + _DAT_112d38c50) == '\x01') {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d38c48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      puVar5 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar5);
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d38c40);
      func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112d38c40))[1]);
      lVar3 = lVar1;
      func_0x000107c5da90();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
      if ((int)lVar3 != 0) {
        puVar5 = PTR_PTR_1126ae560;
        func_0x000107c610f8();
        func_0x000107c453e4();
        lVar1 = *(long *)(unaff_x20 + _DAT_112d38c38);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar1 != 0) {
          lVar3 = lVar1;
          func_0x000107c5db1c();
          func_0x000107c61180();
          func_0x000107c615e8(lVar1);
          puVar6 = &UNK_110355280;
          func_0x000107c613fc(&UNK_110355280,0x18,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          pcStack_50 = FUN_100e13f14;
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0x42000000;
          pcStack_60 = FUN_100e13b30;
          puStack_58 = &UNK_110355298;
          puStack_48 = puVar6;
          func_0x000107c60bc4(&puStack_70);
          puVar6 = puStack_48;
          func_0x000107c61174(puVar5);
          func_0x000107c61574(puVar6);
          lVar1 = lVar3;
          func_0x000107c5c320(lVar3);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c61170(lVar3);
          func_0x000107c3e924(lVar1);
          func_0x000107c61170(lVar1);
        }
        puVar6 = puVar5;
        func_0x000107c43bf4(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        return puVar6;
      }
      puVar5 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar5);
    }
  }
  else {
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar5);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 100e13f14; end: 100e13f3f;  */

void FUN_100e13f14(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_1103552d0;
  func_0x000107c613fc(&UNK_1103552d0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  puVar4 = &UNK_1103552f8;
  func_0x000107c613fc(&UNK_1103552f8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x100e13f38;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100e13f40;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100e13994;
  puStack_88 = &UNK_110355310;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110355348;
  func_0x000107c613fc(&UNK_110355348,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  puVar7 = &UNK_110355370;
  func_0x000107c613fc(&UNK_110355370,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_100e13f60;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_100e13f68;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x100de58f0;
  puStack_88 = &UNK_110355388;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c750(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x70,0x3a,0x1f,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e1373c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x70,0x42,0x16,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e13740);
  (*pcVar2)();
}



/* Entry: 100e13f40; end: 100e13f5f;  */

void FUN_100e13f40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e13f60; end: 100e13f67;  */

void FUN_100e13f60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002ed07c(0);
  uVar1 = 0;
  func_0x000107c6010c(0);
  func_0x000107c3fefc(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100e13f68; end: 100e13fc7;  */

void FUN_100e13f68(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e13fc8; end: 100e13fd7;  */

void FUN_100e13fc8(long param_1,long param_2)

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



/* Entry: 100e13fd8; end: 100e141cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e13fd8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  long lVar6;
  
  uVar10 = 0x18;
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_5;
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5db20();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_2 + _DAT_113091ad8);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_4 + _DAT_112daf280);
  lVar11 = *(long *)(param_5 + _DAT_112daf250);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    uVar2 = 0;
  }
  else {
    lVar6 = lVar11;
    func_0x000107c5ad58();
    uVar2 = (undefined1)lVar6;
    func_0x000107c615e8(lVar11);
  }
  lVar7 = 0;
  FUN_100e13c6c();
  lVar6 = lVar7;
  func_0x000107c610f8();
  lVar11 = _DAT_112d38c58;
  puVar8 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar11) = puVar8;
  *(undefined8 *)(lVar6 + _DAT_112d38c38) = uVar3;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d38c40);
  *puVar1 = uVar5;
  puVar1[1] = uVar10;
  *(undefined8 *)(lVar6 + _DAT_112d38c48) = uVar4;
  *(undefined1 *)(lVar6 + _DAT_112d38c50) = uVar2;
  plVar9 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar7;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  uVar3 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 100e141d0; end: 100e141f3;  */

void FUN_100e141d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e141f4; end: 100e141ff;  */

void FUN_100e141f4(void)

{
  return;
}



/* Entry: 100e14200; end: 100e1421f;  */

void FUN_100e14200(void)

{
  func_0x000107c61168(&PTR_PTR_112d38cd0);
  return;
}



/* Entry: 100e14220; end: 100e1422b; -[SCChangeUsernameFHPSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14220(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38d30;
  func_0x000107c61428(param_1 + _DAT_112d38d30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1422c; end: 100e14237; -[SCChangeUsernameFHPSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1422c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38d30;
  func_0x000107c61428(param_1 + _DAT_112d38d30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e14238; end: 100e14243; -[SCChangeUsernameFHPSignalProviderEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14238(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38d38;
  func_0x000107c61428(param_1 + _DAT_112d38d38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e14244; end: 100e1424f; -[SCChangeUsernameFHPSignalProviderEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38d38;
  func_0x000107c61428(param_1 + _DAT_112d38d38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e14250; end: 100e1425b; -[SCChangeUsernameFHPSignalProviderEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14250(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38d40;
  func_0x000107c61428(param_1 + _DAT_112d38d40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1425c; end: 100e14267; -[SCChangeUsernameFHPSignalProviderEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1425c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38d40;
  func_0x000107c61428(param_1 + _DAT_112d38d40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e14268; end: 100e14273; -[SCChangeUsernameFHPSignalProviderEntryPoint changeUsernameStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14268(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38d48;
  func_0x000107c61428(param_1 + _DAT_112d38d48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e14274; end: 100e1427f; -[SCChangeUsernameFHPSignalProviderEntryPoint setChangeUsernameStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38d48;
  func_0x000107c61428(param_1 + _DAT_112d38d48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e14280; end: 100e1428b; -[SCChangeUsernameFHPSignalProviderEntryPoint changeUsernameCOFConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14280(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38d50;
  func_0x000107c61428(param_1 + _DAT_112d38d50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1428c; end: 100e142cf;  */

void FUN_100e1428c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e142d0; end: 100e142db; -[SCChangeUsernameFHPSignalProviderEntryPoint setChangeUsernameCOFConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e142d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38d50;
  func_0x000107c61428(param_1 + _DAT_112d38d50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e142dc; end: 100e1432f;  */

void FUN_100e142dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e14330; end: 100e1460b;  */

/* WARNING: Possible PIC construction at 0x000100e14430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e145a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e145b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e145c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e145d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e144c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e144d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e144b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e144d4) */
/* WARNING: Removing unreachable block (ram,0x000100e144c4) */
/* WARNING: Removing unreachable block (ram,0x000100e145d4) */
/* WARNING: Removing unreachable block (ram,0x000100e145c4) */
/* WARNING: Removing unreachable block (ram,0x000100e145b4) */
/* WARNING: Removing unreachable block (ram,0x000100e145a4) */
/* WARNING: Removing unreachable block (ram,0x000100e14434) */
/* WARNING: Removing unreachable block (ram,0x000100e144f8) */
/* WARNING: Removing unreachable block (ram,0x000100e14474) */
/* WARNING: Removing unreachable block (ram,0x000100e144fc) */
/* WARNING: Removing unreachable block (ram,0x000100e144b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14330(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c5da74();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c5d9b4();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar1;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c3f7d0();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar1;
        }
        else {
          func_0x000107c3f7c0();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            lVar3 = 0;
            FUN_100e14200();
            func_0x000107c613fc();
            *(long *)(lVar3 + 0x10) = unaff_x20;
            func_0x000107c61174(unaff_x20);
            func_0x000107c5db20();
            func_0x000107c61180();
            lVar3 = *(long *)(lVar1 + _DAT_113091ad8);
            func_0x000107c5d984();
            func_0x000107c61180();
            func_0x000107c5faec();
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}


