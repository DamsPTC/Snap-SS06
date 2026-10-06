/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ad6e74; end: 102ad6ecb; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad6eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad6eb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6e74(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eeb7e8);
  func_0x000107c61610(param_1 + _DAT_112eeb7f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb7f8));
  return;
}



/* Entry: 102ad6ecc; end: 102ad6eeb;  */

void FUN_102ad6ecc(void)

{
  func_0x000107c61168(&PTR_PTR_1128867f8);
  return;
}



/* Entry: 102ad6eec; end: 102ad6f33; -[SCSCCaptureScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6eec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb830;
  func_0x000107c61428(param_1 + _DAT_112eeb830,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad6f34; end: 102ad6f8b; -[SCSCCaptureScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb830;
  func_0x000107c61428(param_1 + _DAT_112eeb830,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad6f8c; end: 102ad7063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6f8c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102ad27f8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112eeb518) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ad7064);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112eeb520);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eeb838);
    *(long **)(unaff_x20 + _DAT_112eeb838) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102ad7064; end: 102ad708b; -[SCSCCaptureScopedServicesSaberEntryPoint begin] */

void FUN_102ad7064(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ad6f8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ad708c; end: 102ad7203;  */

/* WARNING: Possible PIC construction at 0x000102ad70f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad718c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad70f8) */
/* WARNING: Removing unreachable block (ram,0x000102ad7190) */
/* WARNING: Removing unreachable block (ram,0x000102ad71a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad708c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eeb838);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102ad7204; end: 102ad720b;  */

void FUN_102ad7204(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102ad720c; end: 102ad723f; -[SCSCCaptureScopedServicesSaberEntryPoint end] */

void FUN_102ad720c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ad708c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ad7240; end: 102ad735f;  */

void FUN_102ad7240(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "CaptureScopeGraphBridge/SCSCCaptureScopedServicesSaberEntryPoint.swift",
                        0x46,2,0x76,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad7360);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ad7360; end: 102ad740b; -[SCSCCaptureScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ad7360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ad7240(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ad740c; end: 102ad746b; -[SCSCCaptureScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad740c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eeb830,0);
  *(undefined8 *)(param_1 + _DAT_112eeb838) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad746c; end: 102ad749f;  */

void FUN_102ad746c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ad74a0; end: 102ad74d7; -[SCSCCaptureScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad74a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eeb830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb838));
  return;
}



/* Entry: 102ad74d8; end: 102ad74f7;  */

void FUN_102ad74d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128868c8);
  return;
}



/* Entry: 102ad74f8; end: 102ad7593;  */

void FUN_102ad74f8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c40f64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4b1dc(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 102ad7594; end: 102ad7627;  */

void FUN_102ad7594(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c40f64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4119c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        func_0x000107c5d0f0(lVar1);
        func_0x000107c61170(lVar1);
      }
    }
  }
  return;
}



/* Entry: 102ad7628; end: 102ad764b;  */

void FUN_102ad7628(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ad764c; end: 102ad766b;  */

void FUN_102ad764c(void)

{
  FUN_102ad74f8();
  return;
}



/* Entry: 102ad766c; end: 102ad7773;  */

void FUN_102ad766c(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102ad7774; end: 102ad7793;  */

void FUN_102ad7774(void)

{
  FUN_102ad7594();
  return;
}



/* Entry: 102ad7794; end: 102ad77a3;  */

void FUN_102ad7794(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102ad77a4; end: 102ad7813;  */

void FUN_102ad77a4(void)

{
  func_0x000107c61168(&PTR_PTR_112eeb8a8);
  return;
}



/* Entry: 102ad7814; end: 102ad781b;  */

bool FUN_102ad7814(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102ad781c; end: 102ad7ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102ad781c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  long lVar16;
  undefined8 uVar17;
  
  func_0x000107c613fc();
  if (*(int *)(param_2 + _DAT_113082420) != 0) {
    uVar17 = *(undefined8 *)(param_5 + _DAT_112fcab50);
    puVar4 = &UNK_1105969f8;
    func_0x000107c613fc(&UNK_1105969f8,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    func_0x0001000285a8(0x112eeb910,&UNK_10db199a0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar17);
    func_0x000107c61174(param_4);
    pcVar5 = FUN_102ad7f24;
    func_0x0001000bdd8c(FUN_102ad7f24,puVar4);
    uVar6 = param_6;
    func_0x000107c4529c();
    func_0x000107c61180();
    uVar12 = param_1;
    func_0x000107c3dff0();
    func_0x000107c61180();
    puVar4 = &UNK_110596a20;
    func_0x000107c613fc(&UNK_110596a20,0x40,7);
    *(undefined8 *)(puVar4 + 0x10) = param_7;
    *(undefined8 *)(puVar4 + 0x18) = uVar17;
    *(code **)(puVar4 + 0x20) = pcVar5;
    *(undefined8 *)(puVar4 + 0x28) = uVar6;
    *(undefined8 *)(puVar4 + 0x30) = param_3;
    *(undefined8 *)(puVar4 + 0x38) = uVar12;
    func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar17);
    func_0x000107c61174(param_7);
    func_0x000107c6157c(pcVar5);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(param_3);
    func_0x000107c61174(uVar12);
    pcVar7 = FUN_102ad8208;
    func_0x0001000bdd8c(FUN_102ad8208,puVar4);
    uVar8 = 0x112d4adc0;
    func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
    uVar9 = 0x102ad820c;
    func_0x0001000cb480(0x102ad820c,0,uVar8);
    uVar8 = uVar9;
    func_0x0001003a5b88();
    func_0x000107c61574(uVar17);
    func_0x000107c61574(pcVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar12);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(uVar9);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,8,0);
    lVar16 = 0;
    do {
      bVar3 = *(byte *)(lVar16 + 0x112eeb940);
      uVar9 = 0x65746172656e6567;
      if (bVar3 != 6) {
        uVar9 = 0x5f69755f736e656c;
      }
      uVar2 = 0xe800000000000000;
      if (bVar3 != 6) {
        uVar2 = 0xee00657461647075;
      }
      uVar14 = 0x800000010f0e9630;
      uVar6 = 0xd00000000000001c;
      if (bVar3 != 4) {
        uVar14 = 0x800000010f0e9610;
        uVar6 = 0xd000000000000015;
      }
      if (bVar3 < 6) {
        uVar2 = uVar14;
        uVar9 = uVar6;
      }
      uVar14 = 0xed00006472616f62;
      uVar6 = 0x79656b5f6e65706f;
      if (bVar3 != 2) {
        uVar14 = 0x800000010f0e9650;
        uVar6 = 0xd00000000000001c;
      }
      pcVar13 = "customization_changed";
      uVar12 = 0xd000000000000011;
      if (bVar3 != 0) {
        pcVar13 = "hide_trending_prompts_button";
        uVar12 = 0xd000000000000015;
      }
      if (bVar3 < 2) {
        uVar14 = (ulong)pcVar13 | 0x8000000000000000;
        uVar6 = uVar12;
      }
      if (bVar3 < 4) {
        uVar2 = uVar14;
        uVar9 = uVar6;
      }
      uVar14 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar14 + 1,1);
      }
      lVar16 = lVar16 + 1;
      *(ulong *)(puVar4 + 0x10) = uVar14 + 1;
      *(undefined8 *)(puVar4 + uVar14 * 0x10 + 0x20) = uVar9;
      *(ulong *)(puVar4 + uVar14 * 0x10 + 0x28) = uVar2;
    } while (lVar16 != 8);
    puVar10 = puVar4;
    func_0x000100403a6c();
    func_0x000107c61574(puVar4);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,2,0);
    uVar2 = *(ulong *)(puVar4 + 0x10);
    uVar14 = *(ulong *)(puVar4 + 0x18);
    uVar15 = uVar14 >> 1;
    lVar16 = uVar2 + 1;
    if (uVar15 <= uVar2) {
      func_0x000100403514(1 < uVar14,lVar16,1);
      uVar14 = *(ulong *)(puVar4 + 0x18);
      uVar15 = uVar14 >> 1;
    }
    *(long *)(puVar4 + 0x10) = lVar16;
    *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = 0x5f6576726573626f;
    *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = 0xed00007374696465;
    lVar1 = uVar2 + 2;
    if ((long)uVar15 < lVar1) {
      func_0x000100403514(1 < uVar14,lVar1,1);
    }
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + lVar16 * 0x10 + 0x20) = 0x79656b5f6e65706f;
    *(undefined8 *)(puVar4 + lVar16 * 0x10 + 0x28) = 0xed00006472616f62;
    puVar11 = puVar4;
    func_0x000100403a6c(puVar4);
    func_0x000107c61574(puVar4);
    func_0x00010105ba6c(puVar11);
    lVar16 = lRam0000000112eebb78;
    func_0x000107c61174(uVar8);
    if (lVar16 != -1) {
      func_0x000107c61568(0x112eebb78,FUN_102ad90a0);
    }
    uVar9 = uRam0000000113804eb0;
    puVar4 = PTR_PTR_1126b0260;
    func_0x000107c610f8(PTR_PTR_1126b0260);
    uVar12 = 0;
    func_0x0001044e4d64(0);
    uVar6 = uVar12;
    func_0x000100f06a9c();
    func_0x000107c5fe08(uVar9,uVar12,uVar6);
    puVar11 = puVar10;
    func_0x000107c5fe08(puVar10,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar10);
    func_0x000107c48360(puVar4);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar11);
    uVar9 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 102ad7ec4; end: 102ad7f23;  */

void FUN_102ad7ec4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_102ad77a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110596988;
  *param_1 = lVar2;
  return;
}



/* Entry: 102ad7f24; end: 102ad7f2b;  */

void FUN_102ad7f24(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_102ad77a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110596988;
  *param_1 = lVar2;
  return;
}



/* Entry: 102ad7f2c; end: 102ad8207;  */

void FUN_102ad7f2c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar10 = param_2;
  func_0x0001003a5b88();
  uVar1 = param_6;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar2 = param_6;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar3 = param_6;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar4 = param_6;
  func_0x000107c3fb78();
  func_0x000107c61180();
  uVar5 = param_6;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c3d1a8();
  func_0x000107c61180();
  lVar6 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar6 + 0x38,0);
  func_0x000107c61614(lVar6 + 0x40,0);
  func_0x000107c61614(lVar6 + 0x48,0);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + 0x68) = puVar7;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar6 + 0x78) = puVar7;
  uVar8 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar6 + 0x80) = uVar8;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  *(undefined8 *)(lVar6 + 0x10) = param_2;
  *(undefined8 *)(lVar6 + 0x18) = uVar10;
  *(undefined8 *)(lVar6 + 0x20) = param_4;
  *(undefined8 *)(lVar6 + 0x28) = param_5;
  *(undefined8 *)(lVar6 + 0x30) = uVar1;
  func_0x000107c61604(lVar6 + 0x38,uVar2);
  func_0x000107c61604(lVar6 + 0x40,uVar3);
  func_0x000107c61604(lVar6 + 0x48,uVar4);
  *(undefined8 *)(lVar6 + 0x50) = uVar5;
  *(undefined8 *)(lVar6 + 0x60) = param_6;
  puVar7 = &UNK_110596a60;
  func_0x000107c613fc(&UNK_110596a60,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,lVar6);
  pcStack_70 = FUN_102ad85c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596a78;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar7;
  func_0x000107c60bc4(ppuVar9);
  puVar7 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(param_6);
  func_0x000107c61574(puVar7);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_6);
  func_0x000107c60bd0(ppuVar9);
  uVar10 = *(undefined8 *)(lVar6 + 0x70);
  *(undefined8 *)(lVar6 + 0x70) = param_7;
  func_0x000107c61170(uVar10);
  *param_1 = lVar6;
  return;
}



/* Entry: 102ad8208; end: 102ad8233;  */

void FUN_102ad8208(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = uVar15;
  func_0x0001003a5b88(uVar15,*(undefined8 *)(unaff_x20 + 0x18));
  uVar4 = uVar9;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar5 = uVar9;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar6 = uVar9;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar7 = uVar9;
  func_0x000107c3fb78();
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c3d1a8();
  func_0x000107c61180();
  lVar10 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar10 + 0x38,0);
  func_0x000107c61614(lVar10 + 0x40,0);
  func_0x000107c61614(lVar10 + 0x48,0);
  *(undefined8 *)(lVar10 + 0x58) = 0;
  puVar11 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar10 + 0x68) = puVar11;
  *(undefined8 *)(lVar10 + 0x70) = 0;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar10 + 0x78) = puVar11;
  uVar12 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar10 + 0x80) = uVar12;
  *(undefined8 *)(lVar10 + 0x88) = 0;
  *(undefined8 *)(lVar10 + 0x90) = 0;
  *(undefined8 *)(lVar10 + 0x98) = 0;
  *(undefined8 *)(lVar10 + 0x10) = uVar15;
  *(undefined8 *)(lVar10 + 0x18) = uVar3;
  *(undefined8 *)(lVar10 + 0x20) = uVar1;
  *(undefined8 *)(lVar10 + 0x28) = uVar2;
  *(undefined8 *)(lVar10 + 0x30) = uVar4;
  func_0x000107c61604(lVar10 + 0x38,uVar5);
  func_0x000107c61604(lVar10 + 0x40,uVar6);
  func_0x000107c61604(lVar10 + 0x48,uVar7);
  *(undefined8 *)(lVar10 + 0x50) = uVar8;
  *(undefined8 *)(lVar10 + 0x60) = uVar9;
  puVar11 = &UNK_110596a60;
  func_0x000107c613fc(&UNK_110596a60,0x18,7);
  func_0x000107c61644(puVar11 + 0x10,lVar10);
  pcStack_70 = FUN_102ad85c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596a78;
  ppuVar13 = &puStack_90;
  puStack_68 = puVar11;
  func_0x000107c60bc4(ppuVar13);
  puVar11 = puStack_68;
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61574(puVar11);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c60bd0(ppuVar13);
  uVar15 = *(undefined8 *)(lVar10 + 0x70);
  *(undefined8 *)(lVar10 + 0x70) = uVar14;
  func_0x000107c61170(uVar15);
  *param_1 = lVar10;
  return;
}



/* Entry: 102ad8234; end: 102ad829f;  */

void FUN_102ad8234(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102ad82a0; end: 102ad82d7;  */

void FUN_102ad82a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102ad82d8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102ad82d8; end: 102ad8543;  */

undefined * FUN_102ad82d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ad8414);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = &SUB_1043fc638;
    FUN_102ad8234(&SUB_1043fc638,0x112de74b8,&UNK_10d9b22f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x0001043fc638(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102ad8544; end: 102ad858f;  */

void FUN_102ad8544(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ad8590; end: 102ad859f;  */

void FUN_102ad8590(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = uVar15;
  func_0x0001003a5b88(uVar15,*(undefined8 *)(unaff_x20 + 0x18));
  uVar4 = uVar9;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar5 = uVar9;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar6 = uVar9;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar7 = uVar9;
  func_0x000107c3fb78();
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c3d1a8();
  func_0x000107c61180();
  lVar10 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar10 + 0x38,0);
  func_0x000107c61614(lVar10 + 0x40,0);
  func_0x000107c61614(lVar10 + 0x48,0);
  *(undefined8 *)(lVar10 + 0x58) = 0;
  puVar11 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar10 + 0x68) = puVar11;
  *(undefined8 *)(lVar10 + 0x70) = 0;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar10 + 0x78) = puVar11;
  uVar12 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar10 + 0x80) = uVar12;
  *(undefined8 *)(lVar10 + 0x88) = 0;
  *(undefined8 *)(lVar10 + 0x90) = 0;
  *(undefined8 *)(lVar10 + 0x98) = 0;
  *(undefined8 *)(lVar10 + 0x10) = uVar15;
  *(undefined8 *)(lVar10 + 0x18) = uVar3;
  *(undefined8 *)(lVar10 + 0x20) = uVar1;
  *(undefined8 *)(lVar10 + 0x28) = uVar2;
  *(undefined8 *)(lVar10 + 0x30) = uVar4;
  func_0x000107c61604(lVar10 + 0x38,uVar5);
  func_0x000107c61604(lVar10 + 0x40,uVar6);
  func_0x000107c61604(lVar10 + 0x48,uVar7);
  *(undefined8 *)(lVar10 + 0x50) = uVar8;
  *(undefined8 *)(lVar10 + 0x60) = uVar9;
  puVar11 = &UNK_110596a60;
  func_0x000107c613fc(&UNK_110596a60,0x18,7);
  func_0x000107c61644(puVar11 + 0x10,lVar10);
  pcStack_70 = FUN_102ad85c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596a78;
  ppuVar13 = &puStack_90;
  puStack_68 = puVar11;
  func_0x000107c60bc4(ppuVar13);
  puVar11 = puStack_68;
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61574(puVar11);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c60bd0(ppuVar13);
  uVar15 = *(undefined8 *)(lVar10 + 0x70);
  *(undefined8 *)(lVar10 + 0x70) = uVar14;
  func_0x000107c61170(uVar15);
  *param_1 = lVar10;
  return;
}



/* Entry: 102ad85a0; end: 102ad85bf;  */

void FUN_102ad85a0(void)

{
  func_0x000107c61168(&PTR_PTR_112eeb988);
  return;
}



/* Entry: 102ad85c0; end: 102ad85e3;  */

void FUN_102ad85c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102ad9780(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102ad85e4; end: 102ad8c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102ad85e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  long lVar16;
  undefined8 uVar17;
  
  func_0x000107c613fc();
  uVar17 = *(undefined8 *)(param_4 + _DAT_112fcab50);
  puVar4 = &UNK_110596ab8;
  func_0x000107c613fc(&UNK_110596ab8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  func_0x0001000285a8(0x112eeb910,&UNK_10db199a0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar17);
  func_0x000107c61174();
  pcVar5 = FUN_102ad8cac;
  func_0x0001000bdd8c(FUN_102ad8cac,puVar4);
  uVar6 = param_5;
  func_0x000107c4529c();
  func_0x000107c61180();
  uVar12 = param_1;
  func_0x000107c3dff0();
  func_0x000107c61180();
  puVar4 = &UNK_110596ae0;
  func_0x000107c613fc(&UNK_110596ae0,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar17;
  *(code **)(puVar4 + 0x18) = pcVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = uVar12;
  func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(pcVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  pcVar7 = FUN_102ad8f7c;
  func_0x0001000bdd8c(FUN_102ad8f7c,puVar4);
  uVar8 = 0x112d4adc0;
  func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
  uVar9 = 0x102ad8f80;
  func_0x0001000cb480(0x102ad8f80,0,uVar8);
  uVar8 = uVar9;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar17);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar9);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,8,0);
  lVar16 = 0;
  do {
    bVar3 = *(byte *)(lVar16 + 0x112eeb940);
    uVar9 = 0x65746172656e6567;
    if (bVar3 != 6) {
      uVar9 = 0x5f69755f736e656c;
    }
    uVar2 = 0xe800000000000000;
    if (bVar3 != 6) {
      uVar2 = 0xee00657461647075;
    }
    uVar14 = 0x800000010f0e9630;
    uVar6 = 0xd00000000000001c;
    if (bVar3 != 4) {
      uVar14 = 0x800000010f0e9610;
      uVar6 = 0xd000000000000015;
    }
    if (bVar3 < 6) {
      uVar2 = uVar14;
      uVar9 = uVar6;
    }
    uVar14 = 0xed00006472616f62;
    uVar6 = 0x79656b5f6e65706f;
    if (bVar3 != 2) {
      uVar14 = 0x800000010f0e9650;
      uVar6 = 0xd00000000000001c;
    }
    pcVar13 = "customization_changed";
    uVar12 = 0xd000000000000011;
    if (bVar3 != 0) {
      pcVar13 = "hide_trending_prompts_button";
      uVar12 = 0xd000000000000015;
    }
    if (bVar3 < 2) {
      uVar14 = (ulong)pcVar13 | 0x8000000000000000;
      uVar6 = uVar12;
    }
    if (bVar3 < 4) {
      uVar2 = uVar14;
      uVar9 = uVar6;
    }
    uVar14 = *(ulong *)(puVar4 + 0x10);
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
      func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar14 + 1,1);
    }
    lVar16 = lVar16 + 1;
    *(ulong *)(puVar4 + 0x10) = uVar14 + 1;
    *(undefined8 *)(puVar4 + uVar14 * 0x10 + 0x20) = uVar9;
    *(ulong *)(puVar4 + uVar14 * 0x10 + 0x28) = uVar2;
  } while (lVar16 != 8);
  puVar10 = puVar4;
  func_0x000100403a6c();
  func_0x000107c61574(puVar4);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,2,0);
  uVar2 = *(ulong *)(puVar4 + 0x10);
  uVar14 = *(ulong *)(puVar4 + 0x18);
  uVar15 = uVar14 >> 1;
  lVar16 = uVar2 + 1;
  if (uVar15 <= uVar2) {
    func_0x000100403514(1 < uVar14,lVar16,1);
    uVar14 = *(ulong *)(puVar4 + 0x18);
    uVar15 = uVar14 >> 1;
  }
  *(long *)(puVar4 + 0x10) = lVar16;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = 0x5f6576726573626f;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = 0xed00007374696465;
  lVar1 = uVar2 + 2;
  if ((long)uVar15 < lVar1) {
    func_0x000100403514(1 < uVar14,lVar1,1);
  }
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + lVar16 * 0x10 + 0x20) = 0x79656b5f6e65706f;
  *(undefined8 *)(puVar4 + lVar16 * 0x10 + 0x28) = 0xed00006472616f62;
  puVar11 = puVar4;
  func_0x000100403a6c(puVar4);
  func_0x000107c61574(puVar4);
  func_0x00010105ba6c(puVar11);
  lVar16 = lRam0000000112eebb78;
  func_0x000107c61174(uVar8);
  if (lVar16 != -1) {
    func_0x000107c61568(0x112eebb78,FUN_102ad90a0);
  }
  uVar9 = uRam0000000113804eb0;
  puVar4 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar12 = 0;
  func_0x0001044e4d64(0);
  uVar6 = uVar12;
  func_0x000100f06a9c();
  func_0x000107c5fe08(uVar9,uVar12,uVar6);
  puVar11 = puVar10;
  func_0x000107c5fe08(puVar10,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar10);
  func_0x000107c48360(puVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar11);
  uVar9 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 102ad8c4c; end: 102ad8cab;  */

void FUN_102ad8c4c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_102ad77a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110596988;
  *param_1 = lVar2;
  return;
}



/* Entry: 102ad8cac; end: 102ad8cb3;  */

void FUN_102ad8cac(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_102ad77a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110596988;
  *param_1 = lVar2;
  return;
}



/* Entry: 102ad8cb4; end: 102ad8f7b;  */

void FUN_102ad8cb4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x0001003a5b88();
  uVar9 = param_5;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar1 = param_5;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar2 = param_5;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar3 = param_5;
  func_0x000107c3fb78();
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c3d1a8();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar5 + 0x38,0);
  func_0x000107c61614(lVar5 + 0x40,0);
  func_0x000107c61614(lVar5 + 0x48,0);
  *(undefined8 *)(lVar5 + 0x58) = 0;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x68) = puVar6;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar5 + 0x78) = puVar6;
  uVar7 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar5 + 0x80) = uVar7;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = param_2;
  *(undefined8 *)(lVar5 + 0x20) = param_3;
  *(undefined8 *)(lVar5 + 0x28) = param_4;
  *(undefined8 *)(lVar5 + 0x30) = uVar9;
  func_0x000107c61604(lVar5 + 0x38,uVar1);
  func_0x000107c61604(lVar5 + 0x40,uVar2);
  func_0x000107c61604(lVar5 + 0x48,uVar3);
  *(undefined8 *)(lVar5 + 0x50) = uVar4;
  *(undefined8 *)(lVar5 + 0x60) = param_5;
  puVar6 = &UNK_110596b20;
  func_0x000107c613fc(&UNK_110596b20,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,lVar5);
  pcStack_70 = FUN_102ad901c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596b38;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar8);
  puVar6 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar6);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_5);
  func_0x000107c60bd0(ppuVar8);
  uVar9 = *(undefined8 *)(lVar5 + 0x70);
  *(undefined8 *)(lVar5 + 0x70) = param_6;
  func_0x000107c61170(uVar9);
  *param_1 = lVar5;
  return;
}



/* Entry: 102ad8f7c; end: 102ad8fa7;  */

void FUN_102ad8f7c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001003a5b88();
  uVar3 = uVar8;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar4 = uVar8;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar5 = uVar8;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar6 = uVar8;
  func_0x000107c3fb78();
  func_0x000107c61180();
  uVar7 = uVar8;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c3d1a8();
  func_0x000107c61180();
  lVar9 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar9 + 0x38,0);
  func_0x000107c61614(lVar9 + 0x40,0);
  func_0x000107c61614(lVar9 + 0x48,0);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + 0x68) = puVar10;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar9 + 0x78) = puVar10;
  uVar11 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar9 + 0x80) = uVar11;
  *(undefined8 *)(lVar9 + 0x88) = 0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = uVar13;
  *(undefined8 *)(lVar9 + 0x20) = uVar2;
  *(undefined8 *)(lVar9 + 0x28) = uVar1;
  *(undefined8 *)(lVar9 + 0x30) = uVar3;
  func_0x000107c61604(lVar9 + 0x38,uVar4);
  func_0x000107c61604(lVar9 + 0x40,uVar5);
  func_0x000107c61604(lVar9 + 0x48,uVar6);
  *(undefined8 *)(lVar9 + 0x50) = uVar7;
  *(undefined8 *)(lVar9 + 0x60) = uVar8;
  puVar10 = &UNK_110596b20;
  func_0x000107c613fc(&UNK_110596b20,0x18,7);
  func_0x000107c61644(puVar10 + 0x10,lVar9);
  pcStack_70 = FUN_102ad901c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596b38;
  ppuVar12 = &puStack_90;
  puStack_68 = puVar10;
  func_0x000107c60bc4(ppuVar12);
  puVar10 = puStack_68;
  func_0x000107c61174(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c60bd0(ppuVar12);
  uVar13 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(lVar9 + 0x70) = uVar14;
  func_0x000107c61170(uVar13);
  *param_1 = lVar9;
  return;
}



/* Entry: 102ad8fa8; end: 102ad8feb;  */

void FUN_102ad8fa8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ad8fec; end: 102ad8ffb;  */

void FUN_102ad8fec(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001003a5b88();
  uVar3 = uVar8;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar4 = uVar8;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar5 = uVar8;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar6 = uVar8;
  func_0x000107c3fb78();
  func_0x000107c61180();
  uVar7 = uVar8;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c3d1a8();
  func_0x000107c61180();
  lVar9 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar9 + 0x38,0);
  func_0x000107c61614(lVar9 + 0x40,0);
  func_0x000107c61614(lVar9 + 0x48,0);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + 0x68) = puVar10;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar9 + 0x78) = puVar10;
  uVar11 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar9 + 0x80) = uVar11;
  *(undefined8 *)(lVar9 + 0x88) = 0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = uVar13;
  *(undefined8 *)(lVar9 + 0x20) = uVar2;
  *(undefined8 *)(lVar9 + 0x28) = uVar1;
  *(undefined8 *)(lVar9 + 0x30) = uVar3;
  func_0x000107c61604(lVar9 + 0x38,uVar4);
  func_0x000107c61604(lVar9 + 0x40,uVar5);
  func_0x000107c61604(lVar9 + 0x48,uVar6);
  *(undefined8 *)(lVar9 + 0x50) = uVar7;
  *(undefined8 *)(lVar9 + 0x60) = uVar8;
  puVar10 = &UNK_110596b20;
  func_0x000107c613fc(&UNK_110596b20,0x18,7);
  func_0x000107c61644(puVar10 + 0x10,lVar9);
  pcStack_70 = FUN_102ad901c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596b38;
  ppuVar12 = &puStack_90;
  puStack_68 = puVar10;
  func_0x000107c60bc4(ppuVar12);
  puVar10 = puStack_68;
  func_0x000107c61174(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c60bd0(ppuVar12);
  uVar13 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(lVar9 + 0x70) = uVar14;
  func_0x000107c61170(uVar13);
  *param_1 = lVar9;
  return;
}



/* Entry: 102ad8ffc; end: 102ad901b;  */

void FUN_102ad8ffc(void)

{
  func_0x000107c61168(&PTR_PTR_112eeba28);
  return;
}



/* Entry: 102ad901c; end: 102ad905f;  */

void FUN_102ad901c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102ad9780(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102ad9060; end: 102ad909f;  */

void FUN_102ad9060(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  func_0x0001044e4b78(param_2,uVar1);
  *param_3 = param_2;
  return;
}



/* Entry: 102ad90a0; end: 102ad939f;  */

void FUN_102ad90a0(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  func_0x000100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  if (lRam0000000112eebb68 != -1) {
    func_0x000107c61568(0x112eebb68,0x102ad9040);
  }
  *(undefined8 *)(param_1 + 0x20) = uRam0000000113804ea0;
  lVar3 = lRam0000000112eebb70;
  func_0x000107c61174();
  if (lVar3 != -1) {
    func_0x000107c61568(0x112eebb70,0x102ad9050);
  }
  uVar4 = uRam0000000113804ea8;
  *(undefined8 *)(param_1 + 0x28) = uRam0000000113804ea8;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 2;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_102ad939c;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    func_0x000100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto joined_r0x000102ad9248;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
joined_r0x000102ad9248:
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(param_1 + 0x10) < 2) {
LAB_102ad939c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ad93a0);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c61174();
    }
    else {
      uVar4 = 1;
      func_0x000100f060ac(1,param_1);
    }
    uVar5 = *(ulong *)(lVar3 + 0x28);
    func_0x000107c60114();
    uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
    uVar6 = uVar5 >> 6;
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
    uVar8 = 1L << (uVar5 & 0x3f);
    if ((uVar8 & uVar7) != 0) {
      func_0x0001044e4d64(0);
      do {
        uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
        func_0x000107c61174();
        uVar6 = uVar7;
        func_0x000107c60118();
        func_0x000107c61170(uVar7);
        if ((uVar6 & 1) != 0) {
          func_0x000107c61170(uVar4);
          goto LAB_102ad931c;
        }
        uVar5 = uVar5 + 1 & ~uVar9;
        uVar6 = uVar5 >> 6;
        uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
        uVar8 = 1L << (uVar5 & 0x3f);
      } while ((uVar8 & uVar7) != 0);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
    *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
    if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_102ad931c:
      func_0x000107c61588(param_1);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = 0;
      func_0x0001044e4d64(0);
      func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
      lRam0000000113804eb0 = lVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ad936c);
  (*pcVar2)();
}



/* Entry: 102ad93a0; end: 102ad9403;  */

ulong FUN_102ad93a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 102ad9404; end: 102ad9697;  */

long FUN_102ad9404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x38,0);
  func_0x000107c61614(unaff_x20 + 0x40,0);
  func_0x000107c61614(unaff_x20 + 0x48,0);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x68) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(unaff_x20 + 0x78) = puVar1;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000107c61604(unaff_x20 + 0x38,param_6);
  func_0x000107c61604(unaff_x20 + 0x40,param_7);
  func_0x000107c61604(unaff_x20 + 0x48,param_8);
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  puVar1 = &UNK_110596b78;
  func_0x000107c613fc(&UNK_110596b78,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,unaff_x20);
  pcStack_70 = FUN_102ade544;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596b90;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar1;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_10);
  func_0x000107c61574(puVar1);
  uVar2 = param_9;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c60bd0(ppuVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  func_0x000107c61170(uVar4);
  return unaff_x20;
}



/* Entry: 102ad9698; end: 102ad96df; -[_TtC25SCInLensCreationApiPlugin32InLensCreationDependencyProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad9698(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eebb80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad96e0; end: 102ad9713;  */

void FUN_102ad96e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ad9714; end: 102ad9723; -[_TtC25SCInLensCreationApiPlugin32InLensCreationDependencyProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad9714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eebb80));
  return;
}



/* Entry: 102ad9724; end: 102ad977f;  */

void FUN_102ad9724(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102ad9780(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102ad9780; end: 102ad99e7;  */

void FUN_102ad9780(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lStack_e0 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar12 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c600f4(lVar12);
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_80,lVar2,lVar3);
  puVar10 = PTR___sypN_11034f1a8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (puStack_68 != (undefined *)0x0) {
    func_0x000100102924(auStack_80,auStack_a8);
    func_0x0001000bb420(auStack_a8,auStack_c8);
    uVar4 = 0;
    FUN_102adedfc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    puVar5 = &uStack_d0;
    puVar11 = auStack_c8;
    func_0x000107c6147c(puVar5,puVar11,puVar10 + 8,uVar4,6);
    uVar4 = uStack_d0;
    if (((ulong)puVar5 & 1) == 0) {
      FUN_102ade810(auStack_a8);
    }
    else {
      uVar6 = uStack_d0;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar4 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      FUN_102ade810(auStack_a8);
      puVar7 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000d182c(puVar9,uVar1 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x20) = uVar4;
      *(undefined1 **)(puVar9 + uVar1 * 0x10 + 0x28) = puVar11;
    }
    func_0x000107c601c0(auStack_80,lVar2,lVar3);
  }
  (**(code **)(lStack_e0 + 8))(lVar12,lVar2);
  puVar10 = puVar9;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar9);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  func_0x000107c61170(uVar4);
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + 0x68));
  puStack_68 = puVar10;
  func_0x000100087bd4(FUN_102adede4,auStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 102ad99e8; end: 102ad9a8f;  */

void FUN_102ad99e8(void)

{
  long unaff_x20;
  
  FUN_102ad9a90();
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61610(unaff_x20 + 0x38);
  func_0x000107c61610(unaff_x20 + 0x40);
  func_0x000107c61610(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102ad9a90; end: 102ad9b07;  */

/* WARNING: Possible PIC construction at 0x000102ad9ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad9ab4) */
/* WARNING: Removing unreachable block (ram,0x000102ad9ae8) */
/* WARNING: Removing unreachable block (ram,0x000102ad9af0) */

void FUN_102ad9a90(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102ad9b08; end: 102ad9b27;  */

void FUN_102ad9b08(void)

{
  FUN_102ad99e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ad9b28; end: 102ad9d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ad9b28(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad9d34);
    (*pcVar1)();
  }
  uVar4 = param_1;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5faec();
  lVar5 = param_2;
  func_0x000107c61170(uVar4);
  if (lRam0000000112eebb70 != -1) {
    lVar5 = 0x102ad9050;
    func_0x000107c61568(0x112eebb70);
  }
  uVar4 = (ulong)*(byte *)(lRam0000000113804ea8 + _DAT_113080f70);
  func_0x0001044e388c();
  if (uVar3 == uVar4 && param_2 == lVar5) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar5);
  }
  else {
    lVar6 = param_2;
    func_0x000107c605b8(uVar3,param_2,uVar4,lVar5,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar5);
    if ((uVar3 & 1) == 0) {
      uVar4 = param_1;
      func_0x000107c5b6c0();
      func_0x000107c61180();
      uVar3 = uVar4;
      func_0x000107c5faec();
      lVar5 = lVar6;
      func_0x000107c61170(uVar4);
      if (lRam0000000112eebb68 != -1) {
        lVar5 = 0x102ad9040;
        func_0x000107c61568(0x112eebb68);
      }
      uVar4 = (ulong)*(byte *)(lRam0000000113804ea0 + _DAT_113080f70);
      func_0x0001044e388c();
      if (uVar3 == uVar4 && lVar6 == lVar5) {
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar5);
      }
      else {
        func_0x000107c605b8(uVar3,lVar6,uVar4,lVar5,0);
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar5);
        if ((uVar3 & 1) == 0) {
          func_0x000103dac9b4(param_1,5,puVar2,0xd000000000000012,0x800000010f0e9700);
          return puVar2;
        }
      }
      func_0x000102ad9f48(param_1,puVar2);
      return puVar2;
    }
  }
  func_0x000102ad9d34(param_1,puVar2);
  return puVar2;
}



/* Entry: 102ad9d34; end: 102ada0bb;  */

/* WARNING: Possible PIC construction at 0x000102ad9d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad9e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad9ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad9ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daca80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacb1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacc08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacc1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dace08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dace34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dace98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb34c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada8f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adab48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adabac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adac04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adac7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adacf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adad00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adad10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adad28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adad40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adad58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adad78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adad98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adadb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adade0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adadf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adae00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adae20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adae30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adac20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaaa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaa80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaa90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaa5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaa6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaa0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adae9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaf14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaf38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adb0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adaf6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adafc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102adafe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ada61c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ada5d8) */
/* WARNING: Removing unreachable block (ram,0x000102ada5dc) */
/* WARNING: Removing unreachable block (ram,0x000102ada60c) */
/* WARNING: Removing unreachable block (ram,0x000102ada5f4) */
/* WARNING: Removing unreachable block (ram,0x000102adafcc) */
/* WARNING: Removing unreachable block (ram,0x000102adaf70) */
/* WARNING: Removing unreachable block (ram,0x000102adb0dc) */
/* WARNING: Removing unreachable block (ram,0x000102adb014) */
/* WARNING: Removing unreachable block (ram,0x000102adaf3c) */
/* WARNING: Removing unreachable block (ram,0x000102adafe4) */
/* WARNING: Removing unreachable block (ram,0x000102adb0f0) */
/* WARNING: Removing unreachable block (ram,0x000102adaff8) */
/* WARNING: Removing unreachable block (ram,0x000102adaf18) */
/* WARNING: Removing unreachable block (ram,0x000102adaf40) */
/* WARNING: Removing unreachable block (ram,0x000102adaf1c) */
/* WARNING: Removing unreachable block (ram,0x000102adaf24) */
/* WARNING: Removing unreachable block (ram,0x000102adaf4c) */
/* WARNING: Removing unreachable block (ram,0x000102adaf2c) */
/* WARNING: Removing unreachable block (ram,0x000102adaee4) */
/* WARNING: Removing unreachable block (ram,0x000102adaea0) */
/* WARNING: Removing unreachable block (ram,0x000102adaee8) */
/* WARNING: Removing unreachable block (ram,0x000102adaef0) */
/* WARNING: Removing unreachable block (ram,0x000102adaec0) */
/* WARNING: Removing unreachable block (ram,0x000102ada7ec) */
/* WARNING: Removing unreachable block (ram,0x000102ada800) */
/* WARNING: Removing unreachable block (ram,0x000102ada814) */
/* WARNING: Removing unreachable block (ram,0x000102ada9d4) */
/* WARNING: Removing unreachable block (ram,0x000102adaa10) */
/* WARNING: Removing unreachable block (ram,0x000102adaa2c) */
/* WARNING: Removing unreachable block (ram,0x000102adaa70) */
/* WARNING: Removing unreachable block (ram,0x000102adaa60) */
/* WARNING: Removing unreachable block (ram,0x000102adaa94) */
/* WARNING: Removing unreachable block (ram,0x000102adaa38) */
/* WARNING: Removing unreachable block (ram,0x000102adaa50) */
/* WARNING: Removing unreachable block (ram,0x000102adaa84) */
/* WARNING: Removing unreachable block (ram,0x000102adaaac) */
/* WARNING: Removing unreachable block (ram,0x000102adac24) */
/* WARNING: Removing unreachable block (ram,0x000102adae34) */
/* WARNING: Removing unreachable block (ram,0x000102ada860) */
/* WARNING: Removing unreachable block (ram,0x000102adae24) */
/* WARNING: Removing unreachable block (ram,0x000102adae04) */
/* WARNING: Removing unreachable block (ram,0x000102adadf4) */
/* WARNING: Removing unreachable block (ram,0x000102adade4) */
/* WARNING: Removing unreachable block (ram,0x000102adadb4) */
/* WARNING: Removing unreachable block (ram,0x000102adad9c) */
/* WARNING: Removing unreachable block (ram,0x000102adad7c) */
/* WARNING: Removing unreachable block (ram,0x000102adad5c) */
/* WARNING: Removing unreachable block (ram,0x000102adad80) */
/* WARNING: Removing unreachable block (ram,0x000102adad84) */
/* WARNING: Removing unreachable block (ram,0x000102adad64) */
/* WARNING: Removing unreachable block (ram,0x000102adad44) */
/* WARNING: Removing unreachable block (ram,0x000102adad2c) */
/* WARNING: Removing unreachable block (ram,0x000102adad14) */
/* WARNING: Removing unreachable block (ram,0x000102adad04) */
/* WARNING: Removing unreachable block (ram,0x000102adacf4) */
/* WARNING: Removing unreachable block (ram,0x000102adac80) */
/* WARNING: Removing unreachable block (ram,0x000102adacb8) */
/* WARNING: Removing unreachable block (ram,0x000102adaca0) */
/* WARNING: Removing unreachable block (ram,0x000102adacbc) */
/* WARNING: Removing unreachable block (ram,0x000102adac08) */
/* WARNING: Removing unreachable block (ram,0x000102adabb0) */
/* WARNING: Removing unreachable block (ram,0x000102adac0c) */
/* WARNING: Removing unreachable block (ram,0x000102adac2c) */
/* WARNING: Removing unreachable block (ram,0x000102adabc4) */
/* WARNING: Removing unreachable block (ram,0x000102adac1c) */
/* WARNING: Removing unreachable block (ram,0x000102adabf0) */
/* WARNING: Removing unreachable block (ram,0x000102adab4c) */
/* WARNING: Removing unreachable block (ram,0x000102adab78) */
/* WARNING: Removing unreachable block (ram,0x000102adab7c) */
/* WARNING: Removing unreachable block (ram,0x000102adaae0) */
/* WARNING: Removing unreachable block (ram,0x000102adab04) */
/* WARNING: Removing unreachable block (ram,0x000102adab84) */
/* WARNING: Removing unreachable block (ram,0x000102adab8c) */
/* WARNING: Removing unreachable block (ram,0x000102adab94) */
/* WARNING: Removing unreachable block (ram,0x000102adab34) */
/* WARNING: Removing unreachable block (ram,0x000102ada98c) */
/* WARNING: Removing unreachable block (ram,0x000102ada9b8) */
/* WARNING: Removing unreachable block (ram,0x000102ada9bc) */
/* WARNING: Removing unreachable block (ram,0x000102adaab4) */
/* WARNING: Removing unreachable block (ram,0x000102ada8fc) */
/* WARNING: Removing unreachable block (ram,0x000102ada924) */
/* WARNING: Removing unreachable block (ram,0x000102ada938) */
/* WARNING: Removing unreachable block (ram,0x000102adaa74) */
/* WARNING: Removing unreachable block (ram,0x000102ada940) */
/* WARNING: Removing unreachable block (ram,0x000102adaa9c) */
/* WARNING: Removing unreachable block (ram,0x000102adaab8) */
/* WARNING: Removing unreachable block (ram,0x000102ada94c) */
/* WARNING: Removing unreachable block (ram,0x000102adaaa4) */
/* WARNING: Removing unreachable block (ram,0x000102ada974) */
/* WARNING: Removing unreachable block (ram,0x000102ada7e0) */
/* WARNING: Removing unreachable block (ram,0x000102adb4a0) */
/* WARNING: Removing unreachable block (ram,0x000102adb458) */
/* WARNING: Removing unreachable block (ram,0x000102adb45c) */
/* WARNING: Removing unreachable block (ram,0x000102adb48c) */
/* WARNING: Removing unreachable block (ram,0x000102adb474) */
/* WARNING: Removing unreachable block (ram,0x000102adb3f4) */
/* WARNING: Removing unreachable block (ram,0x000102adb3d4) */
/* WARNING: Removing unreachable block (ram,0x000102adb3bc) */
/* WARNING: Removing unreachable block (ram,0x000102adb37c) */
/* WARNING: Removing unreachable block (ram,0x000102adb31c) */
/* WARNING: Removing unreachable block (ram,0x000102adb360) */
/* WARNING: Removing unreachable block (ram,0x000102adb2cc) */
/* WARNING: Removing unreachable block (ram,0x000102adb2e4) */
/* WARNING: Removing unreachable block (ram,0x000102adb2f8) */
/* WARNING: Removing unreachable block (ram,0x000102adb2ec) */
/* WARNING: Removing unreachable block (ram,0x000102adb320) */
/* WARNING: Removing unreachable block (ram,0x000102adb350) */
/* WARNING: Removing unreachable block (ram,0x000102adb338) */
/* WARNING: Removing unreachable block (ram,0x000102adb220) */
/* WARNING: Removing unreachable block (ram,0x000102adb2a4) */
/* WARNING: Removing unreachable block (ram,0x000102adb26c) */
/* WARNING: Removing unreachable block (ram,0x000102adb18c) */
/* WARNING: Removing unreachable block (ram,0x000102adb1a4) */
/* WARNING: Removing unreachable block (ram,0x000102adb1fc) */
/* WARNING: Removing unreachable block (ram,0x000102adb1ac) */
/* WARNING: Removing unreachable block (ram,0x000102adb224) */
/* WARNING: Removing unreachable block (ram,0x000102adb254) */
/* WARNING: Removing unreachable block (ram,0x000102adb260) */
/* WARNING: Removing unreachable block (ram,0x000102adb23c) */
/* WARNING: Removing unreachable block (ram,0x000102adb158) */
/* WARNING: Removing unreachable block (ram,0x000102adb15c) */
/* WARNING: Removing unreachable block (ram,0x000103dacb5c) */
/* WARNING: Removing unreachable block (ram,0x000103dacd28) */
/* WARNING: Removing unreachable block (ram,0x000103dace9c) */
/* WARNING: Removing unreachable block (ram,0x000103dace38) */
/* WARNING: Removing unreachable block (ram,0x000103dace74) */
/* WARNING: Removing unreachable block (ram,0x000103dace0c) */
/* WARNING: Removing unreachable block (ram,0x000103dace7c) */
/* WARNING: Removing unreachable block (ram,0x000103dace14) */
/* WARNING: Removing unreachable block (ram,0x000103dacd10) */
/* WARNING: Removing unreachable block (ram,0x000103dacd40) */
/* WARNING: Removing unreachable block (ram,0x000103dacd74) */
/* WARNING: Removing unreachable block (ram,0x000103daceb8) */
/* WARNING: Removing unreachable block (ram,0x000103dacebc) */
/* WARNING: Removing unreachable block (ram,0x000103daceec) */
/* WARNING: Removing unreachable block (ram,0x000103daced4) */
/* WARNING: Removing unreachable block (ram,0x000103dacdac) */
/* WARNING: Removing unreachable block (ram,0x000103dacd58) */
/* WARNING: Removing unreachable block (ram,0x000103daccec) */
/* WARNING: Removing unreachable block (ram,0x000103dacd14) */
/* WARNING: Removing unreachable block (ram,0x000103daccf8) */
/* WARNING: Removing unreachable block (ram,0x000103dacc20) */
/* WARNING: Removing unreachable block (ram,0x000103dacc5c) */
/* WARNING: Removing unreachable block (ram,0x000103dacc40) */
/* WARNING: Removing unreachable block (ram,0x000103dacc0c) */
/* WARNING: Removing unreachable block (ram,0x000103dacbfc) */
/* WARNING: Removing unreachable block (ram,0x000103dacb9c) */
/* WARNING: Removing unreachable block (ram,0x000103dacbb0) */
/* WARNING: Removing unreachable block (ram,0x000103dacba8) */
/* WARNING: Removing unreachable block (ram,0x000103dacbcc) */
/* WARNING: Removing unreachable block (ram,0x000103dacb44) */
/* WARNING: Removing unreachable block (ram,0x000103dacb74) */
/* WARNING: Removing unreachable block (ram,0x000103dacb20) */
/* WARNING: Removing unreachable block (ram,0x000103dacb48) */
/* WARNING: Removing unreachable block (ram,0x000103dacb2c) */
/* WARNING: Removing unreachable block (ram,0x000103dacac4) */
/* WARNING: Removing unreachable block (ram,0x000102adb5ac) */
/* WARNING: Removing unreachable block (ram,0x000102adb574) */
/* WARNING: Removing unreachable block (ram,0x000102adb554) */
/* WARNING: Removing unreachable block (ram,0x000102adb558) */
/* WARNING: Removing unreachable block (ram,0x000102ad9ef4) */
/* WARNING: Removing unreachable block (ram,0x000102ad9edc) */
/* WARNING: Removing unreachable block (ram,0x000102ad9e98) */
/* WARNING: Removing unreachable block (ram,0x000102adb824) */
/* WARNING: Removing unreachable block (ram,0x000102adb810) */
/* WARNING: Removing unreachable block (ram,0x000102adb740) */
/* WARNING: Removing unreachable block (ram,0x000102adb69c) */
/* WARNING: Removing unreachable block (ram,0x000102adb6a4) */
/* WARNING: Removing unreachable block (ram,0x000102adb684) */
/* WARNING: Removing unreachable block (ram,0x000102adb688) */
/* WARNING: Removing unreachable block (ram,0x000102adb64c) */
/* WARNING: Removing unreachable block (ram,0x000102adb6dc) */
/* WARNING: Removing unreachable block (ram,0x000102adb6e4) */
/* WARNING: Removing unreachable block (ram,0x000102adb834) */
/* WARNING: Removing unreachable block (ram,0x000102adb6f4) */
/* WARNING: Removing unreachable block (ram,0x000102adb728) */
/* WARNING: Removing unreachable block (ram,0x000102adb710) */
/* WARNING: Removing unreachable block (ram,0x000102adb72c) */
/* WARNING: Removing unreachable block (ram,0x000102adb668) */
/* WARNING: Removing unreachable block (ram,0x000102adb630) */
/* WARNING: Removing unreachable block (ram,0x000102ad9d78) */
/* WARNING: Removing unreachable block (ram,0x000102ad9dc8) */
/* WARNING: Removing unreachable block (ram,0x000102ad9df4) */
/* WARNING: Removing unreachable block (ram,0x000102ad9dfc) */
/* WARNING: Removing unreachable block (ram,0x000102ada594) */
/* WARNING: Removing unreachable block (ram,0x000102ada650) */
/* WARNING: Removing unreachable block (ram,0x000102ada5bc) */
/* WARNING: Removing unreachable block (ram,0x000102ad9dd0) */
/* WARNING: Removing unreachable block (ram,0x000102ad9e64) */
/* WARNING: Removing unreachable block (ram,0x000102adae40) */
/* WARNING: Removing unreachable block (ram,0x000102adae6c) */
/* WARNING: Removing unreachable block (ram,0x000102adaf7c) */
/* WARNING: Removing unreachable block (ram,0x000102adae90) */
/* WARNING: Removing unreachable block (ram,0x000102ad9ddc) */
/* WARNING: Removing unreachable block (ram,0x000102ada68c) */
/* WARNING: Removing unreachable block (ram,0x000102ada6cc) */
/* WARNING: Removing unreachable block (ram,0x000102ada824) */
/* WARNING: Removing unreachable block (ram,0x000102ada834) */
/* WARNING: Removing unreachable block (ram,0x000102ada708) */
/* WARNING: Removing unreachable block (ram,0x000102ada7e4) */
/* WARNING: Removing unreachable block (ram,0x000102ada74c) */
/* WARNING: Removing unreachable block (ram,0x000102ada7f0) */
/* WARNING: Removing unreachable block (ram,0x000102ada770) */
/* WARNING: Removing unreachable block (ram,0x000102ada80c) */
/* WARNING: Removing unreachable block (ram,0x000102ada7a8) */
/* WARNING: Removing unreachable block (ram,0x000102ada880) */
/* WARNING: Removing unreachable block (ram,0x000102ada888) */
/* WARNING: Removing unreachable block (ram,0x000102ada9c4) */
/* WARNING: Removing unreachable block (ram,0x000102ada8a8) */
/* WARNING: Removing unreachable block (ram,0x000102ada9fc) */
/* WARNING: Removing unreachable block (ram,0x000102adaa20) */
/* WARNING: Removing unreachable block (ram,0x000102ada8b8) */
/* WARNING: Removing unreachable block (ram,0x000102adaa04) */
/* WARNING: Removing unreachable block (ram,0x000102ada8e4) */
/* WARNING: Removing unreachable block (ram,0x000102ada7c8) */
/* WARNING: Removing unreachable block (ram,0x000102ad9d90) */
/* WARNING: Removing unreachable block (ram,0x000102ad9e1c) */
/* WARNING: Removing unreachable block (ram,0x000102ad9f28) */
/* WARNING: Removing unreachable block (ram,0x000102adb414) */
/* WARNING: Removing unreachable block (ram,0x000102adb4d0) */
/* WARNING: Removing unreachable block (ram,0x000102adb43c) */
/* WARNING: Removing unreachable block (ram,0x000102ad9e24) */
/* WARNING: Removing unreachable block (ram,0x000102adb10c) */
/* WARNING: Removing unreachable block (ram,0x000102adb1b8) */
/* WARNING: Removing unreachable block (ram,0x000102adb13c) */
/* WARNING: Removing unreachable block (ram,0x000102ad9d98) */
/* WARNING: Removing unreachable block (ram,0x000102ad9e44) */
/* WARNING: Removing unreachable block (ram,0x000102adb50c) */
/* WARNING: Removing unreachable block (ram,0x000102adb5c4) */
/* WARNING: Removing unreachable block (ram,0x000103dac9b4) */
/* WARNING: Removing unreachable block (ram,0x000103dac9f8) */
/* WARNING: Removing unreachable block (ram,0x000103daca54) */
/* WARNING: Removing unreachable block (ram,0x000103daca84) */
/* WARNING: Removing unreachable block (ram,0x000103daca6c) */
/* WARNING: Removing unreachable block (ram,0x000102adb538) */
/* WARNING: Removing unreachable block (ram,0x000102ad9da0) */
/* WARNING: Removing unreachable block (ram,0x000102ad9e7c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102ad9da8) */
/* WARNING: Removing unreachable block (ram,0x000102adb604) */
/* WARNING: Removing unreachable block (ram,0x000102ada620) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_102ad9d34(undefined8 param_1)

{
  func_0x000107c428b4();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ada0bc; end: 102ada117; -[_TtC25SCInLensCreationApiPlugin30InLensCreationApiPluginHandler handleRequest:] */

void FUN_102ada0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_102ad9b28(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102ada118; end: 102ada24f;  */

void FUN_102ada118(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x78,auStack_68,1,0);
  lVar6 = *(long *)(param_1 + 0x78);
  puVar7 = (ulong *)(lVar6 + 0x40);
  uVar9 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar9 < 0x40) {
    uVar10 = ~(-1L << (-uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *puVar7;
  func_0x000107c61438(lVar6,2);
  lVar8 = 0;
  lVar1 = lVar8;
  while( true ) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      func_0x000107c4218c(*(undefined8 *)
                           (*(long *)(lVar6 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                           lVar1 * 0x200));
      lVar8 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar9 >> 6) <= lVar1) {
      func_0x000107c6142c(lVar6);
      FUN_102adeddc(lVar6,puVar7,~uVar9,lVar8,0);
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      *(undefined **)(param_1 + 0x78) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c6142c(uVar5);
      return;
    }
    uVar10 = puVar7[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ada250);
  (*pcVar3)();
}



/* Entry: 102ada250; end: 102ada277; -[_TtC25SCInLensCreationApiPlugin30InLensCreationApiPluginHandler reset] */

void FUN_102ada250(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_102ad9a90();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102ada278; end: 102ada593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102ada278(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 *puVar13;
  long lVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 auStack_168 [2];
  undefined8 auStack_158 [4];
  long lStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined *apuStack_a8 [2];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4118c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = _DAT_112eebb80;
    lVar14 = *(long *)(unaff_x20 + 0x10);
    if ((lVar14 != 0) &&
       (func_0x000107c61428(lVar14 + _DAT_112eebb80,apuStack_a8,0,0), *(long *)(lVar14 + lVar1) != 0
       )) {
      func_0x000107c41198();
      func_0x000107c61180();
      func_0x000107c61170();
      lVar1 = _DAT_112eebb80;
      ppuVar4 = &puStack_c0;
      func_0x000107c61428(lVar14 + _DAT_112eebb80,ppuVar4,0,0);
      uVar3 = *(ulong *)(lVar14 + lVar1);
      if (uVar3 == 0) {
        uVar16 = 0;
        ppuVar15 = (undefined **)0x0;
        ppuVar9 = ppuVar4;
      }
      else {
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar16 = uVar3;
        func_0x000107c5faec();
        ppuVar9 = ppuVar4;
        func_0x000107c61170(uVar3);
        ppuVar15 = ppuVar4;
      }
      uVar3 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar5 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if (ppuVar15 == (undefined **)0x0) {
        func_0x000107c6142c(ppuVar9);
      }
      else {
        if ((uVar16 == uVar5) && (ppuVar15 == ppuVar9)) {
          func_0x000107c6142c(ppuVar15);
          func_0x000107c6142c(ppuVar9);
          goto LAB_102ada498;
        }
        func_0x000107c605b8(uVar16,ppuVar15,uVar5,ppuVar9,0);
        func_0x000107c6142c(ppuVar15);
        func_0x000107c6142c(ppuVar9);
        if ((uVar16 & 1) != 0) goto LAB_102ada498;
      }
    }
    puVar6 = PTR_PTR_1126a83c0;
    func_0x000107c610f8(PTR_PTR_1126a83c0);
    uVar10 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    puStack_d0 = (undefined *)0x0;
    uStack_c8 = 0;
    func_0x000107c45a34(puVar6);
    func_0x000107c61170(uVar10);
    FUN_102adbc30(param_1,puVar6,param_2);
    func_0x000107c61170(puVar6);
LAB_102ada498:
    puVar6 = &UNK_110596b78;
    func_0x000107c613fc(&UNK_110596b78,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar19 = &UNK_110596d30;
    uVar10 = 0x28;
    func_0x000107c613fc(&UNK_110596d30,0x28,7);
    *(undefined **)(puVar19 + 0x10) = puVar6;
    *(ulong *)(puVar19 + 0x18) = param_1;
    *(undefined8 *)(puVar19 + 0x20) = param_2;
    uStack_70 = 0x102aded78;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x102adee6c;
    puStack_78 = &UNK_110596d48;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar19;
    func_0x000107c60bc4(ppuVar4);
    puVar6 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar6);
    lVar1 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c3e924(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    auVar20._8_8_ = uVar10;
    auVar20._0_8_ = lVar1;
    return auVar20;
  }
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = (undefined *)0x4520746e65696c43;
  puStack_90 = (undefined *)0xec000000726f7272;
  puStack_80 = PTR___sSSN_11034da80;
  func_0x000100102924(&puStack_98,&puStack_78);
  func_0x000107c61434(0xec000000726f7272);
  puVar19 = puVar6;
  func_0x000107c61558(puVar6);
  puStack_98 = puVar6;
  uVar10 = 0x6567617373656d;
  func_0x0001001029e8(&puStack_78,0x6567617373656d,0xe700000000000000,puVar19);
  puVar6 = puStack_98;
  uVar3 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (uVar3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar18 = PTR___sSSSHsWP_11034da90;
  puVar19 = PTR___sSSN_11034da80;
  uVar16 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar17 = puVar6;
  func_0x000107c5f9dc(puVar6,puVar19,PTR___sypN_11034f1a8 + 8,puVar18);
  puStack_78 = (undefined *)0x0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  puVar18 = puStack_78;
  func_0x000107c61174(puStack_78);
  if (puVar12 == (undefined *)0x0) {
    puVar19 = puVar18;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar18);
    func_0x000107c61654();
    func_0x000107c614ac(puVar19);
    puVar18 = (undefined *)0x0;
    puVar19 = (undefined *)0xf000000000000000;
  }
  else {
    puVar18 = puVar12;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar12);
  }
  uVar5 = uVar16;
  puVar12 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(uVar16,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar16);
  if ((ulong)puVar19 >> 0x3c < 0xf) {
    puVar17 = puVar18;
    func_0x000107c5ee20(puVar18,puVar19);
    func_0x0001000b44c0(puVar18,puVar19);
  }
  else {
    puVar17 = (undefined *)0x0;
    puVar19 = puVar12;
  }
  puVar18 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar17);
  func_0x000107c4d664(param_2);
  func_0x000107c6142c(puVar6);
  puVar12 = puVar18;
  func_0x000107c61170(puVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    auVar21._8_8_ = puVar19;
    auVar21._0_8_ = puVar12;
    return auVar21;
  }
  func_0x000107c60e78();
  puStack_c0 = puVar6;
  apuStack_a8[0] = &SUB_103dacc60;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puStack_d0 = puVar18;
  uStack_c8 = uVar5;
  uStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61168();
  puVar7 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar12,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  puStack_e0 = (undefined *)0x0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  puVar19 = puStack_e0;
  func_0x000107c61174();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar19;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar19);
    func_0x000107c61654();
    puVar19 = puVar6;
    func_0x000107c614ac(puVar6);
    puVar12 = (undefined *)0x0;
    puVar13 = (undefined8 *)0xf000000000000000;
    puVar11 = puVar7;
  }
  else {
    puVar12 = puVar6;
    func_0x000107c5ee30();
    puVar19 = puVar6;
    puVar11 = puVar7;
    func_0x000107c61170(puVar6);
    puVar13 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar22._8_8_ = puVar13;
    auVar22._0_8_ = puVar12;
    return auVar22;
  }
  func_0x000107c60e78();
  puStack_f8 = &SUB_103dacd78;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = puVar17;
  uStack_128 = uVar3;
  puStack_120 = puVar18;
  puStack_118 = puVar6;
  puStack_110 = puVar13;
  puStack_108 = puVar12;
  ppuStack_100 = &puStack_b0;
  if ((ulong)puVar11 >> 0x3c < 0xf) {
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar19,puVar11);
    puVar18 = puVar19;
    func_0x000107c5ee20(puVar19,puVar11);
    auStack_158[0] = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    uVar10 = auStack_158[0];
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234(auStack_158,puVar6);
      func_0x0001000b44c0(puVar19,puVar11);
      func_0x000107c615e8(puVar6);
      uVar10 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar7 = auStack_168;
      puVar11 = auStack_158;
      func_0x000107c6147c(puVar7,puVar11,PTR___sypN_11034f1a8 + 8,uVar10,6);
      if ((int)puVar7 == 0) {
        auStack_168[0] = 0;
      }
      goto code_r0x000103dacebc;
    }
    uVar8 = auStack_158[0];
    func_0x000107c61174();
    func_0x000107c5ed30(uVar10);
    func_0x000107c61170(uVar8);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar19,puVar11);
    func_0x000107c614ac(uVar10);
  }
  auStack_168[0] = 0;
code_r0x000103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    auVar23._8_8_ = puVar11;
    auVar23._0_8_ = auStack_168[0];
    return auVar23;
  }
  func_0x000107c60e78(auStack_168[0]);
  return ZEXT816(0x11070f3e8);
}



/* Entry: 102ada594; end: 102ada68b;  */

/* WARNING: Possible PIC construction at 0x000102ada634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dace34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ada638) */
/* WARNING: Removing unreachable block (ram,0x000103dace38) */
/* WARNING: Removing unreachable block (ram,0x000103dace74) */

undefined1  [16] FUN_102ada594(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar13;
  undefined8 unaff_x25;
  undefined *puVar14;
  undefined8 unaff_x26;
  undefined *puVar15;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar9 = unaff_x20 + 0x38;
  lVar4 = param_2;
  func_0x000107c61618();
  if (lVar9 != 0) {
    lVar3 = lVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar3 != 0) {
      unaff_x22 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      unaff_x20 = lVar9;
      if (unaff_x22 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar4);
        unaff_x20 = lVar4;
      }
      func_0x000107c5ae8c(lVar3);
      func_0x000107c61170(unaff_x22);
      uVar6 = 1;
      uVar8 = 0;
      lVar9 = 0;
      unaff_x30 = 0x102ada638;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_2;
      unaff_x21 = lVar3;
      unaff_x23 = param_1;
      unaff_x29 = puVar1;
      goto code_r0x000103dac9b4;
    }
  }
  uVar8 = 0x6520746e65696c43;
  lVar9 = -0x13ffffff8d908d8e;
  uVar6 = 10;
code_r0x000103dac9b4:
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (lVar9 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar8;
    *(long *)((long)register0x00000008 + -0x90) = lVar9;
    *(undefined **)((long)register0x00000008 + -0x80) = PTR___sSSN_11034da80;
    func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x98),
                        (undefined1 *)((long)register0x00000008 + -0x78));
    func_0x000107c61434(lVar9);
    puVar15 = puVar11;
    func_0x000107c61558(puVar11);
    *(undefined **)((long)register0x00000008 + -0x98) = puVar11;
    uVar6 = 0x6567617373656d;
    func_0x0001001029e8((undefined1 *)((long)register0x00000008 + -0x78),0x6567617373656d,
                        0xe700000000000000,puVar15);
    puVar11 = *(undefined **)((long)register0x00000008 + -0x98);
  }
  lVar9 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar14 = PTR___sSSSHsWP_11034da90;
  puVar15 = PTR___sSSN_11034da80;
  lVar4 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar13 = puVar11;
  func_0x000107c5f9dc(puVar11,puVar15,PTR___sypN_11034f1a8 + 8,puVar14);
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x78);
  func_0x000107c61174(uVar6);
  if (puVar5 == (undefined *)0x0) {
    uVar8 = uVar6;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar8);
    puVar14 = (undefined *)0x0;
    puVar15 = (undefined *)0xf000000000000000;
  }
  else {
    puVar14 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
  }
  lVar3 = lVar4;
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  if ((ulong)puVar15 >> 0x3c < 0xf) {
    puVar13 = puVar14;
    func_0x000107c5ee20(puVar14,puVar15);
    func_0x0001000b44c0(puVar14,puVar15);
  }
  else {
    puVar13 = (undefined *)0x0;
    puVar15 = puVar5;
  }
  puVar14 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar13);
  func_0x000107c4d664(param_2);
  func_0x000107c6142c(puVar11);
  puVar5 = puVar14;
  func_0x000107c61170(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
    auVar16._8_8_ = puVar15;
    auVar16._0_8_ = puVar5;
    return auVar16;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0xd0) = puVar14;
  *(long *)((long)register0x00000008 + -200) = lVar3;
  *(undefined **)((long)register0x00000008 + -0xc0) = puVar11;
  *(long *)((long)register0x00000008 + -0xb8) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0xa8) = &SUB_103dacc60;
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar15 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = *(undefined **)((long)register0x00000008 + -0xe0);
  func_0x000107c61174();
  if (puVar11 == (undefined *)0x0) {
    puVar11 = puVar5;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar5);
    func_0x000107c61654();
    puVar5 = puVar11;
    func_0x000107c614ac(puVar11);
    puVar10 = (undefined *)0x0;
    puVar12 = (undefined *)0xf000000000000000;
    puVar7 = puVar15;
  }
  else {
    puVar10 = puVar11;
    func_0x000107c5ee30();
    puVar5 = puVar11;
    puVar7 = puVar15;
    func_0x000107c61170(puVar11);
    puVar12 = puVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xd8)) {
    auVar17._8_8_ = puVar12;
    auVar17._0_8_ = puVar10;
    return auVar17;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0x130) = puVar13;
  *(long *)((long)register0x00000008 + -0x128) = lVar9;
  *(undefined **)((long)register0x00000008 + -0x120) = puVar14;
  *(undefined **)((long)register0x00000008 + -0x118) = puVar11;
  *(undefined **)((long)register0x00000008 + -0x110) = puVar12;
  *(undefined **)((long)register0x00000008 + -0x108) = puVar10;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &SUB_103dacd78;
  *(undefined8 *)((long)register0x00000008 + -0x138) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)puVar7 >> 0x3c < 0xf) {
    puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar5,puVar7);
    puVar15 = puVar5;
    func_0x000107c5ee20(puVar5,puVar7);
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x158);
    if (puVar11 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234((undefined1 *)((long)register0x00000008 + -0x158),puVar11);
      func_0x0001000b44c0(puVar5,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar11);
      auVar18._8_8_ = puVar7;
      auVar18._0_8_ = puVar11;
      return auVar18;
    }
    uVar8 = uVar6;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar5,puVar7);
    func_0x000107c614ac(uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x138)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puVar7;
    return auVar2 << 0x40;
  }
  func_0x000107c60e78(0);
  return ZEXT816(0x11070f3e8);
}



/* Entry: 102ada68c; end: 102adae3f;  */

void FUN_102ada68c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x20;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) goto LAB_102ada834;
  func_0x0001000d224c(&uStack_90);
  uVar15 = uStack_70;
  uVar18 = uStack_78;
  func_0x0001000a8868(&uStack_90,uStack_78);
  (**(code **)(uVar15 + 0x10))();
  if (uVar15 != 0) {
    FUN_102ade810(&uStack_90);
    func_0x0001000d224c(&uStack_90);
    uVar11 = uStack_70;
    uVar19 = uStack_78;
    func_0x0001000a8868(&uStack_90,uStack_78);
    (**(code **)(uVar11 + 8))(uVar19);
    if (uVar11 != 0) {
      FUN_102ade810(&uStack_90);
      lVar3 = *(long *)(unaff_x20 + 0x28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar2);
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar11);
        goto LAB_102ada834;
      }
      func_0x0001000d224c(&uStack_90);
      uVar4 = uStack_78;
      func_0x0001000a8868(&uStack_90,uStack_78);
      uVar7 = uStack_70;
      (**(code **)(uStack_70 + 0x18))();
      if (uVar7 == 0) {
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar11);
        func_0x000107c615e8(lVar3);
        goto LAB_102ada824;
      }
      uVar22 = uVar7;
      FUN_102ade810(&uStack_90);
      uVar21 = param_1;
      func_0x000107c3eb80();
      func_0x000107c61180();
      if (uVar21 == 0) {
        uVar20 = 0;
        uVar22 = 0xf000000000000000;
      }
      else {
        uVar20 = uVar21;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar21);
      }
      uVar21 = uVar20;
      func_0x000103dacd78(uVar20,uVar22);
      func_0x0001000b44c0(uVar20,uVar22);
      if (uVar21 == 0) {
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar7);
        uVar18 = 0x2064696c61766e49;
        uVar19 = 0xec0000004e4f534a;
        goto LAB_102adaa50;
      }
      uVar22 = uVar15;
      uVar20 = uVar21;
      if (*(long *)(uVar21 + 0x10) == 0) {
LAB_102adaa20:
        func_0x000107c6142c(uVar7);
        func_0x000107c6142c(uVar20);
        func_0x000107c6142c(uVar11);
      }
      else {
        func_0x000107c61434(uVar21);
        uVar13 = 0;
        lVar5 = -0x2fffffffffffffee;
        func_0x000100029284(0xd000000000000012);
        if ((uVar13 & 1) == 0) {
          func_0x000107c6142c(uVar7);
          uVar7 = uVar11;
          uVar22 = uVar21;
          uVar20 = uVar15;
          uVar11 = uVar21;
          goto LAB_102adaa20;
        }
        func_0x0001000bb420(*(long *)(uVar21 + 0x38) + lVar5 * 0x20,&uStack_90);
        func_0x000107c6142c(uVar21);
        puVar6 = &uStack_a0;
        func_0x000107c6147c(puVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        uVar1 = uStack_98;
        uVar13 = uStack_a0;
        if (((ulong)puVar6 & 1) == 0) goto LAB_102adaa20;
        uVar22 = uStack_a0 & 0xffffffffffff;
        if ((uStack_98 & 0x2000000000000000) != 0) {
          uVar22 = uStack_98 >> 0x38 & 0xf;
        }
        if (uVar22 != 0) {
          if (*(long *)(uVar21 + 0x10) == 0) {
            uVar22 = 0;
            uVar20 = 0;
          }
          else {
            func_0x000107c61434(uVar21);
            lVar5 = -0x2fffffffffffffe5;
            uVar22 = 0;
            func_0x000100029284(0xd00000000000001b);
            if ((uVar22 & 1) == 0) {
              func_0x000107c6142c(uVar21);
              uVar22 = 0;
              uVar20 = 0;
            }
            else {
              func_0x0001000bb420(*(long *)(uVar21 + 0x38) + lVar5 * 0x20,&uStack_90);
              func_0x000107c6142c(uVar21);
              puVar6 = &uStack_a0;
              func_0x000107c6147c(puVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6)
              ;
              uVar22 = uStack_a0;
              uVar20 = uStack_98;
              if ((int)puVar6 == 0) {
                uVar22 = 0;
                uVar20 = 0;
              }
            }
          }
          uVar16 = uVar20;
          FUN_102adbf50(uVar22,uVar20,uVar13,uVar1);
          func_0x000107c6142c(uVar20);
          uVar20 = uVar13;
          FUN_102add4bc(uVar13,uVar1,uVar22,uVar16);
          if (*(long *)(uVar21 + 0x10) != 0) {
            func_0x000107c61434(uVar21);
            lVar5 = 0x5f77656976657270;
            uVar23 = 0;
            func_0x000100029284(0x5f77656976657270);
            if ((uVar23 & 1) != 0) {
              func_0x0001000bb420(*(long *)(uVar21 + 0x38) + lVar5 * 0x20,&uStack_90);
              func_0x000107c6142c(uVar21);
              puVar6 = &uStack_a0;
              func_0x000107c6147c(puVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6)
              ;
              uVar23 = uStack_a0;
              if ((int)puVar6 == 0) {
                uVar23 = 0;
                uStack_98 = 0;
              }
              goto LAB_102adab94;
            }
            func_0x000107c6142c(uVar21);
          }
          uVar23 = 0;
          uStack_98 = 0;
LAB_102adab94:
          uVar17 = uStack_98;
          FUN_102add5fc(uVar23,uStack_98,uVar22,uVar16);
          func_0x000107c6142c(uStack_98);
          FUN_102ade6d4(uVar22,uVar16);
          if (*(long *)(uVar21 + 0x10) == 0) {
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            func_0x000107c61434(uVar21);
            lVar5 = 0x736e6f69746e656d;
            uVar12 = 0;
            func_0x000100029284(0x736e6f69746e656d);
            if ((uVar12 & 1) == 0) {
              func_0x000107c6142c(uVar21);
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
            }
            else {
              func_0x0001000bb420(*(long *)(uVar21 + 0x38) + lVar5 * 0x20,&uStack_90);
              func_0x000107c6142c(uVar21);
            }
          }
          func_0x000107c6142c(uVar21);
          uVar8 = 0;
          func_0x0001043fc638();
          puVar9 = &uStack_90;
          func_0x0001043fbec4();
          FUN_102aded9c(&uStack_90,0x112d387f8,&UNK_10d902650);
          func_0x000107c5fadc(uVar19,uVar11);
          func_0x000107c6142c(uVar11);
          uVar10 = uVar18;
          func_0x000107c5fadc(uVar18,uVar15);
          uVar11 = uVar22;
          func_0x000107c5fadc(uVar22,uVar16);
          if (uVar20 == 0) {
            uVar21 = 0;
          }
          else {
            uVar21 = uVar20;
            func_0x000107c5c674(uVar20);
            func_0x000107c61180();
          }
          uVar12 = uVar20;
          func_0x000107c3dc80(uVar20);
          func_0x000107c61180();
          func_0x000107c4bc6c(lVar3);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar21);
          func_0x000107c61170(uVar12);
          func_0x000107c5fadc(uVar13,uVar1);
          func_0x000107c6142c(uVar1);
          func_0x000107c5fadc(uVar22,uVar16);
          func_0x000107c6142c(uVar16);
          func_0x000107c5fadc(uVar18,uVar15);
          func_0x000107c6142c(uVar15);
          if (uVar17 == 0) {
            uVar23 = 0;
          }
          else {
            func_0x000107c5fadc(uVar23,uVar17);
            func_0x000107c6142c(uVar17);
          }
          func_0x000107c5fadc(uVar4,uVar7);
          func_0x000107c6142c(uVar7);
          puVar14 = puVar9;
          func_0x000107c5fc48(puVar9,uVar8);
          func_0x000107c6142c(puVar9);
          func_0x000107c53da4(lVar2);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar22);
          func_0x000107c61170(uVar18);
          func_0x000107c61170(uVar23);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(puVar14);
          func_0x000103dac9b4(param_1,1,param_2,0,0);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar20);
          return;
        }
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar7);
        func_0x000107c6142c(uVar21);
        uVar22 = uStack_98;
      }
      func_0x000107c6142c(uVar22);
      uVar18 = 0xd000000000000020;
      uVar19 = 0x800000010f0e9720;
LAB_102adaa50:
      func_0x000103dac9b4(param_1,3,param_2,uVar18,uVar19);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar3);
      return;
    }
    func_0x000107c6142c(uVar15);
  }
LAB_102ada824:
  func_0x000107c615e8(lVar2);
  FUN_102ade810(&uStack_90);
LAB_102ada834:
  func_0x000103dac9b4(param_1,10,param_2,0x4520746e65696c43,0xec000000726f7272);
  return;
}



/* Entry: 102adae40; end: 102adb413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102adae40(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar5 = _DAT_112eebb80;
  lVar10 = *(long *)(unaff_x20 + 0x10);
  if (lVar10 != 0) {
    func_0x000107c61428(lVar10 + _DAT_112eebb80,auStack_98,0,0);
    if (*(long *)(lVar10 + lVar5) != 0) {
      func_0x000107c41198();
      func_0x000107c61180();
      func_0x000107c61170();
      lVar5 = _DAT_112eebb80;
      puVar8 = auStack_b0;
      func_0x000107c61428(lVar10 + _DAT_112eebb80,puVar8,0,0);
      uVar1 = *(ulong *)(lVar10 + lVar5);
      if (uVar1 == 0) {
        uVar12 = 0;
        puVar11 = (undefined1 *)0x0;
        puVar9 = puVar8;
      }
      else {
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar12 = uVar1;
        func_0x000107c5faec();
        puVar9 = puVar8;
        func_0x000107c61170(uVar1);
        puVar11 = puVar8;
      }
      uVar1 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      if (puVar11 == (undefined1 *)0x0) {
        func_0x000107c6142c(puVar9);
      }
      else {
        if ((uVar12 == uVar2) && (puVar11 == puVar9)) {
          func_0x000107c6142c(puVar11);
          func_0x000107c6142c(puVar9);
          goto LAB_102adafe4;
        }
        func_0x000107c605b8(uVar12,puVar11,uVar2,puVar9,0);
        func_0x000107c6142c(puVar11);
        func_0x000107c6142c(puVar9);
        if ((uVar12 & 1) != 0) goto LAB_102adafe4;
      }
    }
  }
  puVar3 = PTR_PTR_1126a83c0;
  func_0x000107c610f8(PTR_PTR_1126a83c0);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c45a34(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000102adc52c(param_1,puVar3,param_2);
  func_0x000107c61170(puVar3);
LAB_102adafe4:
  lVar5 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar10 = lVar5;
    func_0x000107c4118c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    puVar3 = &UNK_110596b78;
    func_0x000107c613fc(&UNK_110596b78,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar6 = &UNK_110596bc8;
    func_0x000107c613fc(&UNK_110596bc8,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar3;
    *(ulong *)(puVar6 + 0x18) = param_1;
    *(undefined8 *)(puVar6 + 0x20) = param_2;
    pcStack_60 = FUN_102ade7ec;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    uStack_70 = 0x102adee6c;
    puStack_68 = &UNK_110596be0;
    ppuVar7 = &puStack_80;
    puStack_58 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar3 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar3);
    lVar5 = lVar10;
    func_0x000107c5c320(lVar10);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar10);
    func_0x000107c3e924(lVar5);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102adb414; end: 102adb84b;  */

/* WARNING: Possible PIC construction at 0x000102adb4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dace34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102adb4b8) */
/* WARNING: Removing unreachable block (ram,0x000103dace38) */
/* WARNING: Removing unreachable block (ram,0x000103dace74) */

undefined1  [16] FUN_102adb414(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar13;
  undefined8 unaff_x25;
  undefined *puVar14;
  undefined8 unaff_x26;
  undefined *puVar15;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar9 = unaff_x20 + 0x38;
  lVar4 = param_2;
  func_0x000107c61618();
  if (lVar9 != 0) {
    lVar3 = lVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar3 != 0) {
      unaff_x22 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      unaff_x20 = lVar9;
      if (unaff_x22 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar4);
        unaff_x20 = lVar4;
      }
      func_0x000107c5d018(lVar3);
      func_0x000107c61170(unaff_x22);
      uVar6 = 1;
      uVar8 = 0;
      lVar9 = 0;
      unaff_x30 = 0x102adb4b8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_2;
      unaff_x21 = lVar3;
      unaff_x23 = param_1;
      unaff_x29 = puVar1;
      goto code_r0x000103dac9b4;
    }
  }
  uVar8 = 0x6520746e65696c43;
  lVar9 = -0x13ffffff8d908d8e;
  uVar6 = 10;
code_r0x000103dac9b4:
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (lVar9 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar8;
    *(long *)((long)register0x00000008 + -0x90) = lVar9;
    *(undefined **)((long)register0x00000008 + -0x80) = PTR___sSSN_11034da80;
    func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x98),
                        (undefined1 *)((long)register0x00000008 + -0x78));
    func_0x000107c61434(lVar9);
    puVar15 = puVar11;
    func_0x000107c61558(puVar11);
    *(undefined **)((long)register0x00000008 + -0x98) = puVar11;
    uVar6 = 0x6567617373656d;
    func_0x0001001029e8((undefined1 *)((long)register0x00000008 + -0x78),0x6567617373656d,
                        0xe700000000000000,puVar15);
    puVar11 = *(undefined **)((long)register0x00000008 + -0x98);
  }
  lVar9 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar14 = PTR___sSSSHsWP_11034da90;
  puVar15 = PTR___sSSN_11034da80;
  lVar4 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar13 = puVar11;
  func_0x000107c5f9dc(puVar11,puVar15,PTR___sypN_11034f1a8 + 8,puVar14);
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x78);
  func_0x000107c61174(uVar6);
  if (puVar5 == (undefined *)0x0) {
    uVar8 = uVar6;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar8);
    puVar14 = (undefined *)0x0;
    puVar15 = (undefined *)0xf000000000000000;
  }
  else {
    puVar14 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
  }
  lVar3 = lVar4;
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  if ((ulong)puVar15 >> 0x3c < 0xf) {
    puVar13 = puVar14;
    func_0x000107c5ee20(puVar14,puVar15);
    func_0x0001000b44c0(puVar14,puVar15);
  }
  else {
    puVar13 = (undefined *)0x0;
    puVar15 = puVar5;
  }
  puVar14 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar13);
  func_0x000107c4d664(param_2);
  func_0x000107c6142c(puVar11);
  puVar5 = puVar14;
  func_0x000107c61170(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
    auVar16._8_8_ = puVar15;
    auVar16._0_8_ = puVar5;
    return auVar16;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0xd0) = puVar14;
  *(long *)((long)register0x00000008 + -200) = lVar3;
  *(undefined **)((long)register0x00000008 + -0xc0) = puVar11;
  *(long *)((long)register0x00000008 + -0xb8) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0xa8) = &SUB_103dacc60;
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar15 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = *(undefined **)((long)register0x00000008 + -0xe0);
  func_0x000107c61174();
  if (puVar11 == (undefined *)0x0) {
    puVar11 = puVar5;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar5);
    func_0x000107c61654();
    puVar5 = puVar11;
    func_0x000107c614ac(puVar11);
    puVar10 = (undefined *)0x0;
    puVar12 = (undefined *)0xf000000000000000;
    puVar7 = puVar15;
  }
  else {
    puVar10 = puVar11;
    func_0x000107c5ee30();
    puVar5 = puVar11;
    puVar7 = puVar15;
    func_0x000107c61170(puVar11);
    puVar12 = puVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xd8)) {
    auVar17._8_8_ = puVar12;
    auVar17._0_8_ = puVar10;
    return auVar17;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0x130) = puVar13;
  *(long *)((long)register0x00000008 + -0x128) = lVar9;
  *(undefined **)((long)register0x00000008 + -0x120) = puVar14;
  *(undefined **)((long)register0x00000008 + -0x118) = puVar11;
  *(undefined **)((long)register0x00000008 + -0x110) = puVar12;
  *(undefined **)((long)register0x00000008 + -0x108) = puVar10;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &SUB_103dacd78;
  *(undefined8 *)((long)register0x00000008 + -0x138) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)puVar7 >> 0x3c < 0xf) {
    puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar5,puVar7);
    puVar15 = puVar5;
    func_0x000107c5ee20(puVar5,puVar7);
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x158);
    if (puVar11 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234((undefined1 *)((long)register0x00000008 + -0x158),puVar11);
      func_0x0001000b44c0(puVar5,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar11);
      auVar18._8_8_ = puVar7;
      auVar18._0_8_ = puVar11;
      return auVar18;
    }
    uVar8 = uVar6;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar5,puVar7);
    func_0x000107c614ac(uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x138)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puVar7;
    return auVar2 << 0x40;
  }
  func_0x000107c60e78(0);
  return ZEXT816(0x11070f3e8);
}



/* Entry: 102adb84c; end: 102adb91f;  */

void FUN_102adb84c(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x98);
    if (lVar2 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar2);
      uVar1 = param_1;
      func_0x000107c5d1a8();
      if (uVar1 < 2) {
        func_0x000107c5d1a8(param_1);
        FUN_102ade858(param_3,param_1 == 1);
        func_0x000107c4d664(lVar2);
        func_0x000107c61574(param_2);
        func_0x000107c61170(lVar2);
        lVar2 = param_3;
      }
      else {
        func_0x000107c61574(param_2);
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102adb920; end: 102adbba3;  */

void FUN_102adb920(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar9 = param_2;
  puVar6 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  puVar1 = puVar9;
  func_0x000107c5faec();
  func_0x000107c61170(puVar9);
  func_0x000107c61428(param_1 + 0x78,&puStack_90,0x20,0);
  puVar9 = *(undefined1 **)(param_1 + 0x78);
  if (*(long *)(puVar9 + 0x10) != 0) {
    func_0x000107c61434(puVar9);
    ppuVar7 = (undefined **)puVar6;
    func_0x000100029284();
    if (((ulong)ppuVar7 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(puVar9 + 0x38) + (long)puVar1 * 8);
      func_0x000107c61174(uVar2);
      func_0x000107c614a8(&puStack_90);
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(puVar9);
      func_0x000107c4218c(uVar2);
      func_0x000107c61170(uVar2);
      goto LAB_102adba10;
    }
    func_0x000107c6142c(puVar6);
    puVar6 = puVar9;
  }
  func_0x000107c6142c(puVar6);
  func_0x000107c614a8(&puStack_90);
LAB_102adba10:
  puVar9 = param_2;
  func_0x000107c4b1dc(param_2);
  func_0x000107c61180();
  puVar1 = puVar9;
  func_0x000107c5faec();
  func_0x000107c61170(puVar9);
  puVar3 = &UNK_110596b78;
  func_0x000107c613fc(&UNK_110596b78,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_1);
  puVar4 = &UNK_110596c18;
  func_0x000107c613fc(&UNK_110596c18,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined1 **)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  pcStack_70 = FUN_102ade84c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x102adee68;
  puStack_78 = &UNK_110596c30;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61428(param_1 + 0x78,&puStack_90,0x21,0);
  if (param_3 == 0) {
    func_0x000102addc7c(puVar1,ppuVar7);
    func_0x000107c6142c(ppuVar7);
    func_0x000107c61170(puVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x000107c61558(uVar2);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0x8000000000000000;
    FUN_102addd38(param_3,puVar1,ppuVar7,uVar2);
    func_0x000107c6142c(ppuVar7);
    *(undefined8 *)(param_1 + 0x78) = uVar8;
  }
  func_0x000107c614a8(&puStack_90);
  return;
}



/* Entry: 102adbba4; end: 102adbc2f;  */

void FUN_102adbba4(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102adeb50(param_1,param_3);
    if ((param_1 & 1) != 0) {
      func_0x000103dac9b4(param_3,1,param_4,0,0);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102adbc30; end: 102adbf03;  */

void FUN_102adbc30(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(long *)(unaff_x20 + 0x88) = param_2;
  lVar6 = param_2;
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  lVar2 = param_2;
  func_0x000107c3eb80();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  lVar2 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x74696465;
  *(undefined8 *)(lVar2 + 0x28) = 0xe400000000000000;
  *(long *)(lVar2 + 0x30) = lVar3;
  *(long *)(lVar2 + 0x38) = lVar6;
  func_0x000107c61434(lVar6);
  lVar9 = lVar2;
  func_0x0001001830b8(lVar2);
  func_0x000107c61588(lVar2);
  uVar1 = 0x112d38308;
  FUN_102aded9c((undefined8 *)(lVar2 + 0x20),0x112d38308,&UNK_10d902040);
  lVar2 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar1);
  }
  func_0x000107c4e33c(param_1);
  func_0x000107c61180();
  puVar7 = PTR___sSSSHsWP_11034da90;
  puVar5 = PTR___sSSN_11034da80;
  lVar10 = param_1;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  lVar4 = lVar9;
  func_0x000100215634(lVar9);
  func_0x000107c6142c(lVar9);
  lVar9 = lVar4;
  func_0x000103dacc60(lVar4);
  func_0x000107c6142c(lVar4);
  lVar4 = lVar10;
  func_0x000107c5f9dc(lVar10,puVar5,puVar5,puVar7);
  func_0x000107c6142c(lVar10);
  if ((ulong)puVar8 >> 0x3c < 0xf) {
    lVar10 = lVar9;
    func_0x000107c5ee20(lVar9,puVar8);
    func_0x0001000b44c0(lVar9,puVar8);
  }
  else {
    lVar10 = 0;
    puVar8 = puVar5;
  }
  puVar5 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c48368();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar10);
  func_0x000107c4d664(param_3);
  lVar2 = param_2;
  func_0x000107c41198();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar9 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar9 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  puVar7 = puVar8;
  FUN_102adbf50(lVar9,puVar8,lVar3,lVar6);
  func_0x000107c6142c(puVar8);
  func_0x000102adc0b4(lVar3,lVar6,param_2,lVar9,puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c6142c(lVar6);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102adbf04; end: 102adbf4f;  */

void FUN_102adbf04(long param_1,undefined8 param_2)

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



/* Entry: 102adbf50; end: 102add437;  */

undefined1  [16] FUN_102adbf50(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  uVar4 = param_2;
  if (param_2 != 0) goto LAB_102adc088;
  uVar1 = *(ulong *)(unaff_x20 + 0x88);
  if (uVar1 != 0) {
    func_0x000107c61174();
    uVar2 = uVar1;
    func_0x000107c41198();
    func_0x000107c61180();
    if (uVar2 == 0) {
      func_0x000107c61170(uVar1);
    }
    else {
      param_1 = uVar2;
      func_0x000107c5faec();
      uVar5 = uVar4;
      func_0x000107c61170(uVar2);
      uVar2 = uVar1;
      func_0x000107c3eb80();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c5faec();
      uVar6 = uVar5;
      func_0x000107c61170(uVar2);
      if ((uVar3 == param_3) && (uVar5 == param_4)) {
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(uVar1);
LAB_102adc048:
        uVar1 = param_1 & 0xffffffffffff;
        if ((uVar4 & 0x2000000000000000) != 0) {
          uVar1 = uVar4 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) goto LAB_102adc088;
      }
      else {
        uVar6 = uVar5;
        func_0x000107c605b8(uVar3,uVar5,param_3,param_4,0);
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(uVar1);
        if ((uVar3 & 1) != 0) goto LAB_102adc048;
      }
      func_0x000107c6142c(uVar4);
      uVar1 = uVar4;
      uVar4 = uVar6;
    }
  }
  func_0x00010011df08();
  func_0x000107c61180();
  param_1 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
LAB_102adc088:
  func_0x000107c61434(param_2);
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 102add438; end: 102add4bb;  */

void FUN_102add438(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    (*param_5)(param_3,param_1,param_4);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102add4bc; end: 102add5fb;  */

ulong FUN_102add4bc(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x000107c4aaf4();
    func_0x000107c61180();
    func_0x000107c615e8(uVar1);
    if (uVar4 == 0) {
      uVar1 = 0;
      uVar4 = *(ulong *)(unaff_x20 + 0x88);
      goto joined_r0x000102add588;
    }
    uVar1 = uVar4;
    func_0x000107c61174();
    uVar2 = uVar1;
    FUN_102ade5a0();
    func_0x000107c61170(uVar1);
    func_0x000107c61174();
    uVar3 = uVar1;
    func_0x000107c3dc80();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if ((uVar3 != 0) && (func_0x000107c61170(uVar3), (uVar2 & 1) != 0)) {
      return uVar4;
    }
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x88);
joined_r0x000102add588:
  if (uVar4 != 0) {
    uVar2 = uVar4;
    func_0x000107c61174();
    uVar3 = uVar2;
    FUN_102ade5a0();
    func_0x000107c61170(uVar1);
    uVar1 = uVar2;
    if ((uVar3 & 1) != 0) {
      return uVar4;
    }
  }
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 102add5fc; end: 102add747;  */

undefined1  [16] FUN_102add5fc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x88);
  if (uVar1 != 0) {
    uVar4 = param_2;
    func_0x000107c41198();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      uVar3 = uVar4;
      func_0x000107c61170(uVar1);
      if (uVar2 == param_3 && uVar4 == param_4) {
        func_0x000107c6142c(uVar4);
        uVar1 = *(ulong *)(unaff_x20 + 0x88);
      }
      else {
        uVar3 = uVar4;
        func_0x000107c605b8(uVar2,uVar4,param_3,param_4,0);
        func_0x000107c6142c(uVar4);
        if ((uVar2 & 1) == 0) goto LAB_102add6f4;
        uVar1 = *(ulong *)(unaff_x20 + 0x88);
      }
      if (uVar1 != 0) {
        func_0x000107c4f1b8();
        func_0x000107c61180();
        if (uVar1 != 0) {
          uVar4 = uVar1;
          func_0x000107c5faec();
          func_0x000107c61170(uVar1);
          uVar1 = uVar4 & 0xffffffffffff;
          if ((uVar3 & 0x2000000000000000) != 0) {
            uVar1 = uVar3 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) goto LAB_102add728;
          func_0x000107c6142c(uVar3);
        }
      }
    }
  }
LAB_102add6f4:
  uVar3 = param_2;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      uVar4 = param_1;
    }
  }
LAB_102add728:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 102add748; end: 102adda0f;  */

void FUN_102add748(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x78,auStack_78,0,0);
  lVar7 = *(long *)(param_1 + 0x78);
  uVar12 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar7 + 0x40);
  func_0x000107c61434();
  lVar18 = 0;
joined_r0x000102add7dc:
  do {
    while (uVar17 == 0) {
      bVar5 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102adda10);
        (*pcVar4)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
        func_0x000107c61574(lVar7);
        return;
      }
      uVar17 = ((ulong *)(lVar7 + 0x40))[lVar18];
    }
    uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 - 1 & uVar17;
    uVar11 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar18 << 6;
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar11 * 0x10);
    uVar10 = *puVar1;
    uVar2 = puVar1[1];
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar11 * 8);
    if (*(long *)(param_2 + 0x10) == 0) {
      func_0x000107c61434(uVar2);
      func_0x000107c61174(uVar13);
    }
    else {
      func_0x000107c6068c(auStack_c0,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar2);
      uVar15 = uVar13;
      func_0x000107c61174();
      puVar8 = auStack_c0;
      func_0x000107c5fb58(puVar8,uVar10,uVar2);
      func_0x000107c606a8();
      uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uVar14 = (ulong)puVar8 & (uVar11 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_2 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
          uVar9 = *puVar1;
          uVar3 = puVar1[1];
          if ((uVar9 == uVar10 && uVar3 == uVar2) ||
             (func_0x000107c605b8(uVar9,uVar3,uVar10,uVar2,0), (uVar9 & 1) != 0)) {
            func_0x000107c61170(uVar15);
            func_0x000107c6142c(uVar2);
            goto joined_r0x000102add7dc;
          }
          uVar14 = uVar14 + 1 & ~uVar11;
        } while ((*(ulong *)(param_2 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
      }
    }
    func_0x000107c4218c(uVar13);
    func_0x000107c61428(param_1 + 0x78,auStack_c0,0x21,0);
    uVar15 = *(undefined8 *)(param_1 + 0x78);
    func_0x000107c61434(uVar15);
    uVar11 = uVar2;
    func_0x000100029284();
    func_0x000107c6142c(uVar15);
    if ((uVar11 & 1) == 0) {
      func_0x000107c6142c(uVar2);
    }
    else {
      iVar6 = (int)*(undefined8 *)(param_1 + 0x78);
      func_0x000107c61558();
      lVar16 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0x8000000000000000;
      if (iVar6 == 0) {
        func_0x000102adde88();
      }
      func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar16 + 0x30) + uVar10 * 0x10 + 8));
      func_0x000107c61170(*(undefined8 *)(*(long *)(lVar16 + 0x38) + uVar10 * 8));
      func_0x000102ade294(uVar10,lVar16);
      func_0x000107c6142c(uVar2);
      *(long *)(param_1 + 0x78) = lVar16;
    }
    func_0x000107c614a8(auStack_c0);
    func_0x000107c61170(uVar13);
  } while( true );
}



/* Entry: 102adda10; end: 102addab7;  */

void FUN_102adda10(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_2;
  func_0x000107c428b4();
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  if (lVar2 == 0x65746172656e6567 && lVar3 == -0x1800000000000000) {
    bVar1 = 1;
  }
  else {
    func_0x000107c605b8(lVar2,lVar3,0x65746172656e6567,0xe800000000000000,0);
    bVar1 = (byte)lVar2;
  }
  func_0x000107c6142c(lVar3);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 102addab8; end: 102addd37;  */

ulong FUN_102addab8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102addb9c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102addba0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a83c8;
    func_0x000107c61168(PTR_PTR_1126a83c8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a83c8;
    func_0x000107c61168(PTR_PTR_1126a83c8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102adedfc(0,0x112de7658,&PTR_PTR_1126a83c8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102addc7c);
  (*pcVar2)();
}



/* Entry: 102addd38; end: 102addff7;  */

void FUN_102addd38(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102adde10);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102addff8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102adddd8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102adde88();
    lVar6 = *unaff_x20;
    goto joined_r0x000102adde24;
  }
  lVar6 = *unaff_x20;
joined_r0x000102adde24:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102adde88);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102addff8; end: 102ade443;  */

void FUN_102addff8(long param_1,ulong param_2)

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
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112eebce0;
  func_0x0001000285a8(0x112eebce0,&UNK_10db19b30);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102ade260:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102ade290);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102ade260;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102ade294);
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
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102ade444; end: 102ade543;  */

undefined * FUN_102ade444(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eebce0,&UNK_10db19b30);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ade540);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ade544);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102ade544; end: 102ade567;  */

void FUN_102ade544(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102ad9780(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102ade568; end: 102ade59f;  */

void FUN_102ade568(void)

{
  FUN_102ada118();
  return;
}



/* Entry: 102ade5a0; end: 102ade6d3;  */

uint FUN_102ade5a0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = param_1;
  uVar3 = param_2;
  func_0x000107c3eb80();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  if (uVar2 == param_2 && uVar3 == param_3) {
LAB_102ade67c:
    uVar4 = 1;
  }
  else {
    func_0x000107c605b8(uVar2,uVar3,param_2,param_3,0);
    func_0x000107c6142c(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      goto LAB_102ade688;
    }
    func_0x000107c41198();
    func_0x000107c61180();
    if (param_1 == 0) {
      uVar4 = 0;
      goto LAB_102ade688;
    }
    uVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    uVar2 = uVar3 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      if ((uVar3 == param_4) && (uVar1 == param_5)) goto LAB_102ade67c;
      func_0x000107c605b8(uVar3,uVar1,param_4,param_5,0);
      uVar4 = (uint)uVar3;
    }
  }
  func_0x000107c6142c(uVar1);
LAB_102ade688:
  return uVar4 & 1;
}



/* Entry: 102ade6d4; end: 102ade7eb;  */

undefined8 FUN_102ade6d4(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,lStack_50);
  lVar1 = lStack_50;
  (**(code **)(lStack_48 + 0x20))();
  if (((uint)lStack_48 & 0xff) == 1) {
    FUN_102ade810(auStack_68);
    return 0;
  }
  FUN_102ade810(auStack_68);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + 0x88);
    if (uVar2 != 0) {
      func_0x000107c41198();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        lVar1 = lStack_48;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        if ((param_1 == uVar3) && (param_2 == lVar1)) {
          func_0x000107c6142c(lVar1);
        }
        else {
          func_0x000107c605b8(param_1,param_2,uVar3,lVar1,0);
          func_0x000107c6142c(lVar1);
          if ((param_1 & 1) == 0) {
            return 1;
          }
        }
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



/* Entry: 102ade7ec; end: 102ade80f;  */

void FUN_102ade7ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102add438(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x102adc52c);
  return;
}



/* Entry: 102ade810; end: 102ade82f;  */

void FUN_102ade810(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102ade824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102ade830; end: 102ade84b;  */

void FUN_102ade830(void)

{
  long unaff_x20;
  
  FUN_102adb920(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102ade84c; end: 102ade857;  */

void FUN_102ade84c(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_102adeb50(param_1,uVar1);
    if ((param_1 & 1) != 0) {
      func_0x000103dac9b4(uVar1,1,uVar3,0,0);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102ade858; end: 102adeb4f;  */

undefined * FUN_102ade858(ulong param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  uVar3 = param_1;
  func_0x000107c4adb4();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c4119c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 != 0) {
      uVar3 = uVar4;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar4);
      if (uVar3 == 3) {
        bVar1 = true;
        goto LAB_102ade8d0;
      }
    }
  }
  bVar1 = false;
LAB_102ade8d0:
  lVar5 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  bVar2 = (param_2 & 1) == 0;
  uVar7 = 0x65757274;
  if (bVar2) {
    uVar7 = 0x65736c6166;
  }
  uVar11 = 0xe400000000000000;
  if (bVar2) {
    uVar11 = 0xe500000000000000;
  }
  *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(lVar5 + 0x28) = 0x800000010f0e9770;
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *(undefined8 *)(lVar5 + 0x38) = uVar11;
  *(undefined8 *)(lVar5 + 0x40) = 0x7079745f736e656c;
  uVar7 = 0x6c5f74706d6f7270;
  if (!bVar1) {
    uVar7 = 0x656e6967616d69;
  }
  uVar11 = 0xeb00000000736e65;
  if (!bVar1) {
    uVar11 = 0xe700000000000000;
  }
  *(undefined8 *)(lVar5 + 0x48) = 0xe900000000000065;
  *(undefined8 *)(lVar5 + 0x50) = uVar7;
  *(undefined8 *)(lVar5 + 0x58) = uVar11;
  lVar6 = lVar5;
  func_0x0001001830b8();
  func_0x000107c61588(lVar5);
  uVar7 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  uVar10 = 2;
  func_0x000107c61408((undefined8 *)(lVar5 + 0x20),2,uVar7);
  uVar3 = param_1;
  func_0x000107c4adb4();
  func_0x000107c61180();
  uVar4 = uVar10;
  if (uVar3 != 0) {
    uVar8 = uVar3;
    func_0x000107c4b334();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar4 = uVar10;
    if (uVar8 != 0) {
      uVar3 = uVar8;
      func_0x000107c5c964();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      uVar8 = uVar3;
      func_0x000107c5faec();
      uVar4 = uVar10;
      func_0x000107c61170(uVar3);
      uVar3 = uVar8 & 0xffffffffffff;
      if ((uVar10 & 0x2000000000000000) != 0) {
        uVar3 = uVar10 >> 0x38 & 0xf;
      }
      if (uVar3 == 0) {
        func_0x000107c6142c(uVar10);
      }
      else {
        lVar5 = lVar6;
        func_0x000107c61558(lVar6);
        func_0x00010018433c(uVar8,uVar10,0xd000000000000015,0x800000010f0e9790,lVar5);
        uVar4 = uVar10;
      }
    }
  }
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
  }
  puVar9 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  lVar5 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c48368(puVar9);
  func_0x000107c6142c(lVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar5);
  return puVar9;
}



/* Entry: 102adeb50; end: 102aded13;  */

undefined1 FUN_102adeb50(ulong param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 uStack_51;
  
  uVar2 = param_2;
  uVar8 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar9 = uVar8;
  func_0x000107c61170(uVar2);
  uVar2 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  if ((uVar3 == uVar4) && (uVar8 == uVar9)) {
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(uVar9);
  }
  else {
    func_0x000107c605b8(uVar3,uVar8,uVar4,uVar9,0);
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(uVar9);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_51 = 0;
  func_0x000107c42af0(param_1);
  func_0x000107c61180();
  puVar5 = &UNK_110596c68;
  func_0x000107c613fc(&UNK_110596c68,0x20,7);
  *(undefined1 **)(puVar5 + 0x10) = &uStack_51;
  *(ulong *)(puVar5 + 0x18) = param_2;
  puVar6 = &UNK_110596c90;
  func_0x000107c613fc(&UNK_110596c90,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_102aded14;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_68 = FUN_102aded1c;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_10006eb60;
  puStack_70 = &UNK_110596ca8;
  ppuVar7 = &puStack_88;
  puStack_60 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_60;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar6);
  func_0x000107c4c644(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(param_1);
  uVar1 = uStack_51;
  func_0x000107c61574(puVar5);
  return uVar1;
}



/* Entry: 102aded14; end: 102aded1b;  */

void FUN_102aded14(void)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = lVar3;
  func_0x000107c428b4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0x65746172656e6567 && lVar5 == -0x1800000000000000) {
    bVar2 = 1;
  }
  else {
    func_0x000107c605b8(lVar4,lVar5,0x65746172656e6567,0xe800000000000000,0);
    bVar2 = (byte)lVar4;
  }
  func_0x000107c6142c(lVar5);
  *pbVar1 = bVar2 & 1;
  return;
}



/* Entry: 102aded1c; end: 102aded3b;  */

void FUN_102aded1c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102aded3c; end: 102aded43;  */

void FUN_102aded3c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 0x98);
    if (lVar4 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar4);
      uVar2 = param_1;
      func_0x000107c5d1a8();
      if (uVar2 < 2) {
        func_0x000107c5d1a8(param_1);
        FUN_102ade858(lVar3,param_1 == 1);
        func_0x000107c4d664(lVar4);
        func_0x000107c61574(lVar1);
        func_0x000107c61170(lVar4);
        lVar4 = lVar3;
      }
      else {
        func_0x000107c61574(lVar1);
      }
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 102aded44; end: 102aded9b;  */

void FUN_102aded44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102aded9c; end: 102adeddb;  */

undefined8 FUN_102aded9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102adeddc; end: 102adede3;  */

void FUN_102adeddc(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102adede4; end: 102adedfb;  */

void FUN_102adede4(void)

{
  long unaff_x20;
  
  FUN_102add748(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102adedfc; end: 102adee3b;  */

void FUN_102adedfc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}


