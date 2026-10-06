/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033e13ec; end: 1033e1407;  */

void FUN_1033e13ec(long param_1,long param_2)

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



/* Entry: 1033e1408; end: 1033e1433;  */

void FUN_1033e1408(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033e1434; end: 1033e1453;  */

void FUN_1033e1434(void)

{
  FUN_1033e1190();
  return;
}



/* Entry: 1033e1454; end: 1033e145b;  */

undefined8 FUN_1033e1454(void)

{
  return 0;
}



/* Entry: 1033e145c; end: 1033e147b;  */

void FUN_1033e145c(void)

{
  func_0x000107c61168(&PTR_PTR_112f63930);
  return;
}



/* Entry: 1033e147c; end: 1033e14ab;  */

void FUN_1033e147c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1033e14ac; end: 1033e14b7;  */

void FUN_1033e14ac(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1033e14b8; end: 1033e14d3;  */

void FUN_1033e14b8(void)

{
  func_0x0001005c5748(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1033e14d4; end: 1033e14db;  */

void FUN_1033e14d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1033e14dc; end: 1033e157b;  */

void FUN_1033e14dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033e157c; end: 1033e15ab;  */

void FUN_1033e157c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001005c5748();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1033e15ac; end: 1033e1cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1033e15ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,long param_8,long param_9,
             undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  uVar11 = 0x10;
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_8 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  uVar15 = *(undefined8 *)(param_6 + _DAT_112fcab40);
  uVar13 = *(undefined8 *)(param_6 + _DAT_112fcab48);
  uVar5 = *(undefined8 *)(param_9 + _DAT_112fcaac0);
  puVar7 = &UNK_11064e528;
  func_0x000107c613fc(&UNK_11064e528,0x58,7);
  *(undefined8 *)(puVar7 + 0x10) = param_2;
  *(undefined8 *)(puVar7 + 0x18) = param_5;
  *(undefined8 *)(puVar7 + 0x20) = uVar15;
  *(undefined8 *)(puVar7 + 0x28) = uVar13;
  *(undefined8 *)(puVar7 + 0x30) = param_7;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = param_10;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  *(undefined8 *)(puVar7 + 0x50) = uVar11;
  func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar13);
  func_0x000107c61174();
  func_0x000107c6157c(uVar5);
  func_0x000107c61174();
  func_0x000107c61434(uVar11);
  pcVar8 = FUN_1033e1cb4;
  func_0x0001000bdd8c(FUN_1033e1cb4,puVar7);
  uVar6 = 0x112d4adc0;
  func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
  uVar5 = 0x1033e1cb8;
  func_0x0001000cb480(0x1033e1cb8,0,uVar6);
  uVar6 = uVar5;
  func_0x0001003a5b88();
  func_0x000107c6142c(uVar11);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar5);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,8,0);
  lVar14 = 0;
  do {
    bVar4 = *(byte *)(lVar14 + 0x112f63838);
    pcVar12 = "show_retry_disclaimer";
    uVar5 = 0xd000000000000010;
    if (bVar4 != 6) {
      pcVar12 = "cesSaberEntryPoint.swift";
      uVar5 = 0xd000000000000015;
    }
    uVar11 = 0x6d6f72705f746573;
    if (bVar4 != 4) {
      uVar11 = 0x6d6f72705f746567;
    }
    uVar2 = (ulong)pcVar12 | 0x8000000000000000;
    if (bVar4 < 6) {
      uVar2 = 0xef617461645f7470;
      uVar5 = uVar11;
    }
    uVar3 = 0xec00000065736e6f;
    uVar11 = 0x707365725f746567;
    if (bVar4 != 2) {
      uVar3 = 0xef65736e6f707365;
      uVar11 = 0x725f657461657263;
    }
    uVar1 = 0xea00000000007470;
    uVar13 = 0x6d6f72705f746567;
    if (bVar4 != 0) {
      uVar1 = 0xed000074706d6f72;
      uVar13 = 0x705f657461657263;
    }
    if (bVar4 < 2) {
      uVar3 = uVar1;
      uVar11 = uVar13;
    }
    if (bVar4 < 4) {
      uVar2 = uVar3;
      uVar5 = uVar11;
    }
    uVar3 = *(ulong *)(puVar7 + 0x10);
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
      func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
    }
    lVar14 = lVar14 + 1;
    *(ulong *)(puVar7 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar7 + uVar3 * 0x10 + 0x20) = uVar5;
    *(ulong *)(puVar7 + uVar3 * 0x10 + 0x28) = uVar2;
  } while (lVar14 != 8);
  puVar9 = puVar7;
  func_0x000100403a6c(puVar7);
  func_0x000107c61574(puVar7);
  lVar14 = lRam0000000112f64070;
  func_0x000107c61174(uVar6);
  if (lVar14 != -1) {
    func_0x000107c61568(0x112f64070,FUN_1033ebb04);
  }
  uVar5 = uRam0000000113807300;
  puVar7 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar13 = 0;
  func_0x0001044e4d64(0);
  uVar11 = uVar13;
  func_0x000100f06a9c();
  func_0x000107c5fe08(uVar5,uVar13,uVar11);
  puVar10 = puVar9;
  func_0x000107c5fe08(puVar9,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar9);
  func_0x000107c48360(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar10);
  uVar5 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  return unaff_x20;
}



/* Entry: 1033e1cb4; end: 1033e1cdf;  */

void FUN_1033e1cb4(void)

{
  long unaff_x20;
  
  func_0x0001033e1b10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1033e1ce0; end: 1033e1d8f;  */

void FUN_1033e1ce0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033e1d90; end: 1033e2397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1033e1d90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9,
             undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined *puVar12;
  char *pcVar13;
  long lVar14;
  undefined8 unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  
  func_0x000107c613fc();
  uVar15 = *(undefined8 *)(param_3 + _DAT_112f643d8);
  puVar5 = &UNK_11064e570;
  func_0x000107c613fc(&UNK_11064e570,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_10;
  func_0x0001000285a8(0x112f5df40,&UNK_10dbb8aa0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar6 = FUN_1033e2420;
  func_0x0001000bdd8c();
  uVar7 = *(undefined8 *)(param_9 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uVar16 = *(undefined8 *)(param_7 + _DAT_112fcab40);
  uVar7 = *(undefined8 *)(param_7 + _DAT_112fcab48);
  puVar9 = &UNK_11064e598;
  func_0x000107c613fc(&UNK_11064e598,0x60,7);
  *(undefined8 *)(puVar9 + 0x10) = param_4;
  *(undefined8 *)(puVar9 + 0x18) = uVar15;
  *(undefined8 *)(puVar9 + 0x20) = param_6;
  *(undefined8 *)(puVar9 + 0x28) = uVar16;
  *(undefined8 *)(puVar9 + 0x30) = uVar7;
  *(undefined8 *)(puVar9 + 0x38) = param_8;
  *(code **)(puVar9 + 0x40) = pcVar6;
  *(undefined8 *)(puVar9 + 0x48) = param_11;
  *(undefined8 *)(puVar9 + 0x50) = uVar8;
  *(undefined **)(puVar9 + 0x58) = puVar5;
  func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174();
  func_0x000107c6157c(pcVar6);
  func_0x000107c61174();
  func_0x000107c61434(puVar5);
  pcVar10 = FUN_1033e26ac;
  func_0x0001000bdd8c(FUN_1033e26ac,puVar9);
  uVar8 = 0x112d4adc0;
  func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
  uVar7 = 0x1033e26b0;
  func_0x0001000cb480(0x1033e26b0,0,uVar8);
  uVar8 = uVar7;
  func_0x0001003a5b88();
  func_0x000107c6142c(puVar5);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar7);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,8,0);
  lVar14 = 0;
  do {
    bVar4 = *(byte *)(lVar14 + 0x112f63838);
    pcVar13 = "show_retry_disclaimer";
    uVar7 = 0xd000000000000010;
    if (bVar4 != 6) {
      pcVar13 = "cesSaberEntryPoint.swift";
      uVar7 = 0xd000000000000015;
    }
    uVar16 = 0x6d6f72705f746573;
    if (bVar4 != 4) {
      uVar16 = 0x6d6f72705f746567;
    }
    uVar2 = (ulong)pcVar13 | 0x8000000000000000;
    if (bVar4 < 6) {
      uVar2 = 0xef617461645f7470;
      uVar7 = uVar16;
    }
    uVar3 = 0xec00000065736e6f;
    uVar16 = 0x707365725f746567;
    if (bVar4 != 2) {
      uVar3 = 0xef65736e6f707365;
      uVar16 = 0x725f657461657263;
    }
    uVar1 = 0xea00000000007470;
    uVar11 = 0x6d6f72705f746567;
    if (bVar4 != 0) {
      uVar1 = 0xed000074706d6f72;
      uVar11 = 0x705f657461657263;
    }
    if (bVar4 < 2) {
      uVar3 = uVar1;
      uVar16 = uVar11;
    }
    if (bVar4 < 4) {
      uVar2 = uVar3;
      uVar7 = uVar16;
    }
    uVar3 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
      func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar3 + 1,1);
    }
    lVar14 = lVar14 + 1;
    *(ulong *)(puVar5 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar5 + uVar3 * 0x10 + 0x20) = uVar7;
    *(ulong *)(puVar5 + uVar3 * 0x10 + 0x28) = uVar2;
  } while (lVar14 != 8);
  puVar9 = puVar5;
  func_0x000100403a6c(puVar5);
  func_0x000107c61574(puVar5);
  lVar14 = lRam0000000112f64070;
  func_0x000107c61174(uVar8);
  if (lVar14 != -1) {
    func_0x000107c61568(0x112f64070,FUN_1033ebb04);
  }
  uVar7 = uRam0000000113807300;
  puVar5 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar11 = 0;
  func_0x0001044e4d64(0);
  uVar16 = uVar11;
  func_0x000100f06a9c();
  func_0x000107c5fe08(uVar7,uVar11,uVar16);
  puVar12 = puVar9;
  func_0x000107c5fe08(puVar9,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar9);
  func_0x000107c48360(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar12);
  uVar7 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar15);
  func_0x000107c61574(pcVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  return unaff_x20;
}



/* Entry: 1033e2398; end: 1033e241f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2398(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_2 + _DAT_113070090);
  lVar2 = 0;
  func_0x0001033e2874();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f63b98) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  param_1[3] = lVar2;
  param_1[4] = &PTR_DAT_11064e5e8;
  *param_1 = plVar4;
  return;
}



/* Entry: 1033e2420; end: 1033e2427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2420(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113070090);
  lVar2 = 0;
  func_0x0001033e2874();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f63b98) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  param_1[3] = lVar2;
  param_1[4] = &PTR_DAT_11064e5e8;
  *param_1 = plVar4;
  return;
}



/* Entry: 1033e2428; end: 1033e26ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2428(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c4af30();
  func_0x000107c61180();
  uVar1 = param_7;
  func_0x000107c4f4b8();
  func_0x000107c61180();
  func_0x000107c44498();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_9 + _DAT_1130344f0);
  uVar7 = *(undefined8 *)(param_9 + _DAT_1130344e8);
  lVar2 = 0;
  FUN_1033eb340();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  func_0x0001000285a8(0x112f63848,&UNK_10dbbfc50);
  func_0x000107c613fc();
  lVar3 = 0;
  func_0x00010095c380();
  *(long *)(lVar2 + 0xa8) = lVar3;
  *(undefined8 *)(lVar2 + 200) = 1;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(long *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_5;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  *(undefined8 *)(lVar2 + 0x40) = param_6;
  *(undefined1 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar2 + 0x70) = param_8;
  *(undefined8 *)(lVar2 + 0x80) = uVar6;
  *(undefined8 *)(lVar2 + 0x88) = uVar7;
  *(undefined8 *)(lVar2 + 0xb0) = uVar8;
  *(undefined8 *)(lVar2 + 0xb8) = param_10;
  *(undefined8 *)(lVar2 + 0xc0) = param_11;
  uVar5 = *(undefined8 *)(*(long *)(param_3 + _DAT_112f63da0) + 0x10);
  puVar4 = &UNK_11064e610;
  func_0x000107c613fc(&UNK_11064e610,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,lVar2);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(param_7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c61434(param_11);
  func_0x000107c6157c(uVar5);
  func_0x00010075a04c(0,1,FUN_1033e2894,puVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_7);
  *param_1 = lVar2;
  return;
}



/* Entry: 1033e26ac; end: 1033e26d7;  */

void FUN_1033e26ac(void)

{
  long unaff_x20;
  
  FUN_1033e2428(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1033e26d8; end: 1033e2737; -[_TtC21SCLensPromptApiPluginP33_C1E891B50FF375DD8B4339A193B22EC943PlayGamesLensFullScreenSnapCapturingAdapter init] */

void FUN_1033e26d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPromptApiPlugin.PlayGamesLensFullScreenSnapCapturingAdapter",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033e2704);
  (*pcVar1)();
}



/* Entry: 1033e2738; end: 1033e2747; -[_TtC21SCLensPromptApiPluginP33_C1E891B50FF375DD8B4339A193B22EC943PlayGamesLensFullScreenSnapCapturingAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f63b98));
  return;
}



/* Entry: 1033e2748; end: 1033e2793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2748(void)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  func_0x000107c3f5a8(uStack_28);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 1033e2794; end: 1033e27bb;  */

void FUN_1033e2794(void)

{
  return;
}



/* Entry: 1033e27bc; end: 1033e2893;  */

void FUN_1033e27bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033e2894; end: 1033e289b;  */

void FUN_1033e2894(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1033e3bb0();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1033e289c; end: 1033e2953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033e289c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f643d8);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1033e2954; end: 1033e2adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2954(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306fae0);
  puVar2 = &UNK_11064e650;
  func_0x000107c613fc(&UNK_11064e650,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1033e2b48;
  *(long *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_1033e2b50;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1019dec60;
  puStack_58 = &UNK_11064e668;
  ppuVar3 = &puStack_70;
  puStack_48 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar4 = puStack_48;
  func_0x000107c61174(uVar5);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c590(uVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_70 = puVar4;
  func_0x000100b60084(&puStack_70);
  func_0x000107c61574();
  func_0x000107c61170(puVar4);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x8a,0x18,0x25,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033e2adc);
  (*pcVar1)();
}



/* Entry: 1033e2adc; end: 1033e2b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2adc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  long in_x7;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(in_x7 + 0x18);
  func_0x000107c4f4a8();
  func_0x000107c61180();
  lVar1 = _DAT_112f63da8;
  func_0x000107c61428(lVar3 + _DAT_112f63da8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined8 *)(lVar3 + lVar1) = in_x6;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033e2b48; end: 1033e2b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2b48(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4f4a8();
  func_0x000107c61180();
  lVar1 = _DAT_112f63da8;
  func_0x000107c61428(lVar3 + _DAT_112f63da8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined8 *)(lVar3 + lVar1) = in_x6;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033e2b50; end: 1033e2b73;  */

void FUN_1033e2b50(void)

{
  FUN_10334d9e0();
  return;
}



/* Entry: 1033e2b74; end: 1033e2b8f;  */

void FUN_1033e2b74(long param_1,long param_2)

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



/* Entry: 1033e2b90; end: 1033e2bbb;  */

void FUN_1033e2b90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033e2bbc; end: 1033e2bdb;  */

void FUN_1033e2bbc(void)

{
  FUN_1033e2954();
  return;
}



/* Entry: 1033e2bdc; end: 1033e2be3;  */

undefined8 FUN_1033e2bdc(void)

{
  return 0;
}



/* Entry: 1033e2be4; end: 1033e2c23;  */

void FUN_1033e2be4(void)

{
  func_0x000107c61168(&PTR_PTR_112f63c08);
  return;
}



/* Entry: 1033e2c24; end: 1033e2c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2c24(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  uVar1 = 0;
  func_0x0001005c5748();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_1033f0224();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f643d8) = uVar1;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033e2c8c; end: 1033e2c9b;  */

void FUN_1033e2c8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033e2c9c; end: 1033e2d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2c9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar1 = 0;
  func_0x0001005c5748();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_1033f0224();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f643d8) = uVar1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 1033e2d14; end: 1033e2d7f;  */

void FUN_1033e2d14(undefined8 param_1)

{
  if (lRam0000000112f63c98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7625ac);
  return;
}



/* Entry: 1033e2d80; end: 1033e308f;  */

void FUN_1033e2d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 *param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_80 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = puVar3 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_4,puVar3);
  puVar2 = puVar3;
  (**(code **)(lVar7 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4();
    puVar8 = puVar3;
  }
  else {
    puVar2 = puVar8;
    (**(code **)(lVar7 + 0x20))(puVar8,puVar3,lVar1);
    if (param_6 >> 0x3c < 0xf) {
      func_0x00010139a774();
      func_0x000107c613fc();
      *(undefined8 *)(puVar2 + 0x18) = 5;
      *(undefined8 *)(puVar2 + 0x10) = 2;
      puVar4 = PTR_PTR_1126b1d00;
      func_0x000107c610f8();
      uVar6 = param_5;
      puStack_70 = param_7;
      func_0x00010006c00c(param_5,param_6);
      func_0x000107c5ed90();
      uVar5 = param_5;
      func_0x000107c5ee20(param_5,param_6);
      uStack_78 = param_5;
      func_0x000107c49150();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      *(undefined **)(puVar2 + 0x20) = puVar4;
      puVar4 = PTR_PTR_1126b1d00;
      func_0x000107c610f8();
      uVar6 = param_2;
      func_0x00010006c00c(param_2,param_3);
      func_0x000107c5ed90();
      uVar5 = param_2;
      func_0x000107c5ee20(param_2,param_3);
      func_0x00010006c090(param_2,param_3);
      func_0x000107c49150();
      func_0x000107c61170(uVar6);
      param_7 = puStack_70;
      func_0x000107c61170(uVar5);
      func_0x0001000b44c0(uStack_78,param_6);
      (**(code **)(lVar7 + 8))(puVar8,lVar1);
      *(undefined **)(puVar2 + 0x28) = puVar4;
      goto LAB_1033e3064;
    }
    (**(code **)(lVar7 + 8))(puVar8,lVar1);
  }
  func_0x00010139a774();
  func_0x000107c613fc();
  *(undefined8 *)(puVar8 + 0x18) = 3;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  puVar4 = PTR_PTR_1126b1d00;
  func_0x000107c610f8();
  uVar6 = param_2;
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c5ed90();
  uVar5 = param_2;
  func_0x000107c5ee20(param_2,param_3);
  func_0x00010006c090(param_2,param_3);
  func_0x000107c49150();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  *(undefined **)(puVar8 + 0x20) = puVar4;
  puVar2 = puVar8;
LAB_1033e3064:
  uVar6 = *param_7;
  *param_7 = puVar2;
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 1033e3090; end: 1033e30bb;  */

void FUN_1033e3090(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3[1];
  *param_3 = param_1;
  param_3[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1033e30bc; end: 1033e32eb;  */

undefined1  [16]
FUN_1033e30bc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ushort uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  
  if (param_1 == (undefined *)0x0) {
    uVar6 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1033e3120:
    func_0x000107c61434(param_1);
    if (uVar6 == 0) {
      func_0x000107c6142c(puVar9);
    }
    else {
      uVar7 = 0;
      puVar8 = (undefined8 *)(puVar9 + 0x28);
      dVar13 = 0.0;
      do {
        if (*(ulong *)(puVar9 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033e32ec);
          (*pcVar1)();
        }
        lVar3 = puVar8[-1];
        uVar4 = *puVar8;
        dVar12 = (double)puVar8[2];
        dVar11 = (double)puVar8[1];
        dVar14 = (double)puVar8[3];
        dVar15 = (double)puVar8[4];
        func_0x000107c61438(uVar4,2);
        lVar2 = lVar3;
        func_0x000107c5fb5c(lVar3,uVar4);
        func_0x000107c6142c(uVar4);
        if (lVar2 == 0) {
          func_0x000107c6142c(uVar4);
LAB_1033e329c:
          func_0x000107c6142c(puVar9);
          uVar5 = 0x800000010f149670;
          uVar4 = 0xd00000000000004c;
          goto LAB_1033e32c0;
        }
        func_0x000107c5fb5c(lVar3,uVar4);
        func_0x000107c6142c(uVar4);
        if (0x18 < lVar3) goto LAB_1033e329c;
        uVar10 = NEON_umaxv(CONCAT44(CONCAT22(-(ushort)(dVar12 < 0.05),-(ushort)(dVar11 < 0.05)),
                                     CONCAT22(-(ushort)(0.95 < dVar12),-(ushort)(0.95 < dVar11))),2)
        ;
        if ((uVar10 & 1) != 0) {
LAB_1033e3270:
          func_0x000107c6142c(puVar9);
          goto LAB_1033e3278;
        }
        dVar11 = dVar14 / dVar15;
        if (dVar15 < dVar14) {
          dVar11 = dVar15 / dVar14;
        }
        if (dVar11 < 0.125) goto LAB_1033e3270;
        uVar7 = uVar7 + 1;
        dVar13 = dVar13 + dVar14 * dVar15;
        puVar8 = puVar8 + 7;
      } while (uVar6 != uVar7);
      func_0x000107c6142c(puVar9);
      if (0.4 < dVar13) goto LAB_1033e3278;
    }
    FUN_1033e32ec(param_1,param_2,param_3,param_4,param_5);
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar9 = param_1;
    if (uVar6 < 0x11) goto LAB_1033e3120;
LAB_1033e3278:
    uVar4 = 0xd0000000000000a9;
    uVar5 = 0x800000010f1495c0;
  }
LAB_1033e32c0:
  auVar16._8_8_ = uVar5;
  auVar16._0_8_ = uVar4;
  return auVar16;
}



/* Entry: 1033e32ec; end: 1033e3433;  */

void FUN_1033e32ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  
  if (param_1 != 0) {
    func_0x0001000d224c(auStack_b8);
    lVar7 = lStack_98;
    uVar1 = uStack_a0;
    func_0x0001000a8868(auStack_b8,uStack_a0);
    (**(code **)(lVar7 + 0x38))(param_2,param_3,param_4,param_5,uVar1,lVar7);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)(param_1 + 0x50);
      do {
        lVar4 = lStack_98;
        uVar3 = uStack_a0;
        uVar1 = puVar5[-6];
        uVar2 = puVar5[-5];
        uVar8 = puVar5[-4];
        uVar9 = puVar5[-3];
        uVar10 = puVar5[-2];
        uVar11 = puVar5[-1];
        uVar12 = *puVar5;
        func_0x0001000a8868(auStack_b8,uStack_a0);
        pcVar6 = *(code **)(lVar4 + 0x28);
        func_0x000107c61434(uVar2);
        (*pcVar6)(uVar8,uVar9,uVar10,uVar11,uVar12,uVar1,uVar2,param_2,param_3,param_4,param_5,uVar3
                  ,lVar4);
        func_0x000107c6142c(uVar2);
        lVar7 = lVar7 + -1;
        puVar5 = puVar5 + 7;
      } while (lVar7 != 0);
    }
    func_0x0001000834e4(auStack_b8);
  }
  return;
}



/* Entry: 1033e3434; end: 1033e35cf;  */

ulong FUN_1033e3434(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033e3504);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033e3508);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001044b8ee8(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001044b8ee8(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f1496c0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033e35d0);
  (*pcVar2)();
}



/* Entry: 1033e35d0; end: 1033e39e7;  */

void FUN_1033e35d0(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long extraout_x8;
  undefined1 *puVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 >> 0x3e == 0) {
    if (1 < *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10)) {
LAB_1033e3644:
      uVar8 = param_1 & 0xc000000000000001;
      if (uVar8 == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1033e39e4);
          (*pcVar13)();
        }
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar2 = 0;
        param_2 = param_1;
        func_0x00010101b75c();
      }
      lVar4 = lVar2;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        lVar3 = lVar4;
        func_0x000107c5ee30();
        uVar11 = param_2;
        func_0x000107c61170(lVar4);
        uStack_68 = param_2;
        if (uVar8 == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) < 2) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1033e39e8);
            (*pcVar13)();
          }
          lVar4 = *(long *)(param_1 + 0x28);
          func_0x000107c61174();
        }
        else {
          lVar4 = 1;
          uVar11 = param_1;
          func_0x00010101b75c(1,param_1);
        }
        lVar5 = lVar4;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          lVar6 = lVar5;
          lStack_70 = lVar3;
          func_0x000107c5ee30(lVar5);
          func_0x000107c61170(lVar5);
          if (uVar8 == 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x28);
            func_0x000107c61174(uVar7);
          }
          else {
            uVar7 = 1;
            func_0x00010101b75c(1,param_1);
          }
          puVar9 = PTR_PTR_1126bbd50;
          func_0x000107c61168();
          uVar10 = uVar7;
          puStack_78 = puVar9;
          func_0x000107c5d7e8(uVar7);
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          func_0x000107c5edb4(puVar12,uVar10);
          func_0x000107c61170(uVar10);
          func_0x000107c5ed90();
          pcVar13 = *(code **)(lVar14 + 8);
          (*pcVar13)(puVar12,lVar1);
          lVar3 = lVar6;
          func_0x000107c5ee20(lVar6,uVar11);
          lVar4 = lVar2;
          func_0x000107c5d7e8(lVar2);
          func_0x000107c61180();
          func_0x000107c5edb4(puVar12);
          func_0x000107c61170(lVar4);
          func_0x000107c5ed90();
          (*pcVar13)(puVar12,lVar1);
          uVar8 = uStack_68;
          lVar14 = lStack_70;
          lVar1 = lStack_70;
          func_0x000107c5ee20(lStack_70,uStack_68);
          func_0x000107c45168(puStack_78);
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          func_0x00010006c090(lVar14,uVar8);
          func_0x00010006c090(lVar6,uVar11);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(lVar3);
          goto LAB_1033e3948;
        }
        func_0x000107c61170(lVar2);
        param_2 = uStack_68;
        func_0x00010006c090(lVar3,uStack_68);
      }
      if (param_1 >> 0x3e != 0) goto LAB_1033e39a8;
    }
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar8 = param_1;
    }
    uVar11 = uVar8;
    func_0x000107c60480();
    if ((1 < (long)uVar11) && (func_0x000107c60480(), uVar8 != 0)) goto LAB_1033e3644;
LAB_1033e39a8:
    uVar8 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    return;
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1033e39d0);
      (*pcVar13)();
    }
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000107c61174();
    param_1 = param_2;
  }
  else {
    lVar2 = 0;
    func_0x00010101b75c(0,param_1);
  }
  lVar4 = lVar2;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(lVar2);
    return;
  }
  lVar3 = lVar4;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar4);
  puVar9 = PTR_PTR_1126bbd50;
  func_0x000107c61168(PTR_PTR_1126bbd50);
  lVar4 = lVar2;
  func_0x000107c5d7e8(lVar2);
  func_0x000107c61180();
  func_0x000107c5edb4(puVar12);
  func_0x000107c61170(lVar4);
  func_0x000107c5ed90();
  (**(code **)(lVar14 + 8))(puVar12,lVar1);
  lVar1 = lVar3;
  func_0x000107c5ee20(lVar3,param_1);
  func_0x000107c45168(puVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x00010006c090(lVar3,param_1);
LAB_1033e3948:
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1033e39e8; end: 1033e3a13;  */

void FUN_1033e39e8(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[2]);
  return;
}



/* Entry: 1033e3a14; end: 1033e3abf;  */

undefined8 * FUN_1033e3a14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1033e3ac0; end: 1033e3b07;  */

undefined8 * FUN_1033e3ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1033e3b08; end: 1033e3baf;  */

int FUN_1033e3b08(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033e3bb0; end: 1033e4413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e3bb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  undefined8 *unaff_x20;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar17 = *unaff_x20;
  lVar4 = 0;
  func_0x000107c5f7fc();
  lStack_d8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar15 = (long)&lStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_e0 = lVar15;
  func_0x000107c5f824();
  lStack_f0 = *(long *)(lVar5 + -8);
  lStack_e8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)0x0;
  func_0x000107c5f804();
  lVar16 = puVar6[-1];
  puVar7 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar5 = _DAT_112f63da8;
  lVar19 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar14 = unaff_x20[3];
  if (lVar14 == 0) {
LAB_1033e3cf8:
    FUN_1033e4414();
    puVar8 = &UNK_11064ead0;
    func_0x000107c613f8(&UNK_11064ead0,puVar7,0,0);
    *puVar7 = 0xd000000000000020;
    puVar7[1] = 0x800000010f1496e0;
    puVar7[2] = 3;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar8);
    return;
  }
  func_0x000107c61428(lVar14 + _DAT_112f63da8,auStack_80,0,0);
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(lVar14 + lVar5) == 0) goto LAB_1033e3cf8;
  func_0x000107c4f490();
  func_0x000107c61180();
  func_0x000107c61170();
  lVar5 = _DAT_112f63da8;
  func_0x000107c61428(lVar14 + _DAT_112f63da8,auStack_98,0,0);
  puVar7 = *(undefined8 **)(lVar14 + lVar5);
  if (puVar7 != (undefined8 *)0x0) {
    func_0x000107c50660();
    func_0x000107c61180();
    if (puVar7 != (undefined8 *)0x0) {
      func_0x000107c61170();
      goto LAB_1033e3cf8;
    }
  }
  puVar8 = &UNK_11064e758;
  lStack_120 = lVar15;
  func_0x000107c613fc(&UNK_11064e758,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  puVar9 = &UNK_11064e780;
  puStack_f8 = puVar8;
  func_0x000107c613fc(&UNK_11064e780,0x20,7);
  *(undefined8 *)(puVar9 + 0x18) = 0xf000000000000000;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  puVar8 = &UNK_11064e7a8;
  lVar15 = 0x11;
  puStack_110 = puVar9;
  func_0x000107c613fc(&UNK_11064e7a8,0x11,7);
  puVar8[0x10] = 0;
  puStack_100 = puVar8;
  func_0x000107c60f34();
  lVar10 = *(long *)(lVar14 + lVar5);
  lStack_118 = lVar4;
  puStack_108 = puVar8;
  if (lVar10 == 0) {
LAB_1033e4054:
    lVar10 = 0;
    uVar18 = 0;
  }
  else {
    func_0x000107c4f478();
    func_0x000107c61180();
    uVar18 = lVar15;
    if (lVar10 != 0) {
      lVar4 = lVar10;
      func_0x000107c5faec();
      uVar13 = lVar15;
      lStack_130 = lVar4;
      func_0x000107c61170(lVar10);
      lVar4 = *(long *)(lVar14 + lVar5);
      uVar18 = uVar13;
      if (lVar4 != 0) {
        lStack_128 = lVar15;
        func_0x000107c5c040();
        func_0x000107c61180();
        uVar18 = uVar13;
        lVar15 = lStack_128;
        if (lVar4 != 0) {
          lVar15 = lVar4;
          func_0x000107c5faec();
          uVar18 = uVar13;
          func_0x000107c61170(lVar4);
          lVar4 = unaff_x20[9];
          if (lVar4 != 0) {
            func_0x000107c5c734();
            func_0x000107c61180();
            puVar8 = puStack_108;
            if (lVar4 != 0) {
              uStack_148 = unaff_x20[10];
              lStack_150 = lVar15;
              lStack_138 = lVar4;
              func_0x000107c60f38(puStack_108);
              lVar5 = 0x112d38280;
              func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
              func_0x000107c613fc();
              lVar15 = lStack_128;
              lVar4 = lStack_130;
              *(undefined8 *)(lVar5 + 0x18) = 2;
              *(undefined8 *)(lVar5 + 0x10) = 1;
              *(long *)(lVar5 + 0x20) = lStack_130;
              *(long *)(lVar5 + 0x28) = lStack_128;
              func_0x000107c61434(lStack_128);
              lVar14 = lVar5;
              func_0x000107c5fc48(lVar5,PTR___sSSN_11034da80);
              lStack_140 = lVar14;
              func_0x000107c61574(lVar5);
              puVar9 = &UNK_11064e7d0;
              func_0x000107c613fc(&UNK_11064e7d0,0x18,7);
              func_0x000107c61644(puVar9 + 0x10);
              puVar11 = &UNK_11064e898;
              func_0x000107c613fc(&UNK_11064e898,0x68,7);
              puVar3 = puStack_f8;
              puVar2 = puStack_100;
              puVar1 = puStack_110;
              uVar18 = uStack_148;
              *(long *)(puVar11 + 0x10) = lVar4;
              *(long *)(puVar11 + 0x18) = lVar15;
              *(long *)(puVar11 + 0x20) = lStack_150;
              *(undefined8 *)(puVar11 + 0x28) = uVar13;
              *(undefined **)(puVar11 + 0x30) = puVar9;
              *(undefined **)(puVar11 + 0x38) = puVar8;
              *(undefined8 *)(puVar11 + 0x40) = uStack_148;
              *(undefined **)(puVar11 + 0x48) = puStack_100;
              *(undefined **)(puVar11 + 0x50) = puStack_110;
              *(undefined **)(puVar11 + 0x58) = puStack_f8;
              *(undefined8 *)(puVar11 + 0x60) = uVar17;
              pcStack_a8 = FUN_1033e5de0;
              puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_c0 = 0x42000000;
              pcStack_b8 = (code *)0x1033e53e4;
              puStack_b0 = &UNK_11064e8b0;
              ppuVar12 = &puStack_c8;
              puStack_a0 = puVar11;
              func_0x000107c60bc4(ppuVar12);
              puVar8 = puStack_a0;
              func_0x000107c61174(uVar18);
              func_0x000107c6157c(puVar2);
              func_0x000107c6157c(puVar1);
              func_0x000107c6157c(puVar3);
              func_0x000107c61174(puStack_108);
              func_0x000107c61574(puVar8);
              lVar4 = lStack_138;
              lVar5 = lStack_140;
              func_0x000107c5bf70(lStack_138);
              func_0x000107c60bd0(ppuVar12);
              func_0x000107c615e8(lVar4);
              func_0x000107c61170(lVar5);
              goto LAB_1033e41ec;
            }
          }
          func_0x000107c6142c(lStack_128);
          lVar15 = uVar13;
        }
      }
      func_0x000107c6142c(lVar15);
    }
    lVar4 = *(long *)(lVar14 + lVar5);
    lVar15 = uVar18;
    if (lVar4 == 0) goto LAB_1033e4054;
    func_0x000107c4c988();
    func_0x000107c61180();
    lVar15 = uVar18;
    if (lVar4 == 0) goto LAB_1033e4054;
    lVar10 = lVar4;
    func_0x000107c5faec();
    lVar15 = uVar18;
    func_0x000107c61170(lVar4);
  }
  uVar17 = *(undefined8 *)(puStack_f8 + 0x18);
  *(long *)(puStack_f8 + 0x10) = lVar10;
  *(undefined8 *)(puStack_f8 + 0x18) = uVar18;
  func_0x000107c6142c(uVar17);
  lVar4 = *(long *)(lVar14 + lVar5);
  if (lVar4 == 0) {
    puStack_100[0x10] = 0;
  }
  else {
    func_0x000107c4a6d0();
    lVar5 = *(long *)(lVar14 + lVar5);
    puStack_100[0x10] = (char)lVar4;
    if (lVar5 != 0) {
      func_0x000107c4e158();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar4 = lVar5;
        func_0x000107c5faec();
        func_0x000107c61170(lVar5);
        lVar5 = unaff_x20[0xc];
        if (lVar5 != 0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          puVar8 = puStack_108;
          if (lVar5 != 0) {
            func_0x000107c60f38(puStack_108);
            func_0x000107c5fadc(lVar4,lVar15);
            func_0x000107c6142c(lVar15);
            puVar9 = &UNK_11064e7d0;
            func_0x000107c613fc(&UNK_11064e7d0,0x18,7);
            func_0x000107c61644(puVar9 + 0x10);
            puVar11 = &UNK_11064e848;
            func_0x000107c613fc(&UNK_11064e848,0x28,7);
            puVar1 = puStack_110;
            *(undefined **)(puVar11 + 0x10) = puStack_110;
            *(undefined **)(puVar11 + 0x18) = puVar9;
            *(undefined **)(puVar11 + 0x20) = puVar8;
            pcStack_a8 = (code *)0x1033e5dd4;
            puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_c0 = 0x42000000;
            pcStack_b8 = FUN_1033e5590;
            puStack_b0 = &UNK_11064e860;
            ppuVar12 = &puStack_c8;
            puStack_a0 = puVar11;
            func_0x000107c60bc4(ppuVar12);
            puVar9 = puStack_a0;
            func_0x000107c61174(puVar8);
            func_0x000107c6157c(puVar1);
            func_0x000107c61574(puVar9);
            func_0x000107c50780(lVar5);
            func_0x000107c61180();
            func_0x000107c615e8();
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(lVar4);
            goto LAB_1033e41ec;
          }
        }
        func_0x000107c6142c(lVar15);
      }
    }
  }
LAB_1033e41ec:
  func_0x0001000295c4(0);
  (**(code **)(lVar16 + 0x68))
            (lVar19,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,puVar6);
  lVar5 = lVar19;
  func_0x000107c5fff0();
  lStack_128 = lVar5;
  (**(code **)(lVar16 + 8))(lVar19,puVar6);
  puVar8 = &UNK_11064e7d0;
  func_0x000107c613fc(&UNK_11064e7d0,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar9 = &UNK_11064e7f8;
  func_0x000107c613fc(&UNK_11064e7f8,0x30,7);
  puVar2 = puStack_f8;
  puVar1 = puStack_100;
  puVar11 = puStack_110;
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(undefined **)(puVar9 + 0x18) = puStack_f8;
  *(undefined **)(puVar9 + 0x20) = puStack_110;
  *(undefined **)(puVar9 + 0x28) = puStack_100;
  pcStack_a8 = FUN_1033e5714;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)&UNK_1000f6b44;
  puStack_b0 = &UNK_11064e810;
  ppuVar12 = &puStack_c8;
  puStack_a0 = puVar9;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar8);
  lVar4 = lStack_120;
  func_0x000107c5f808(lStack_120);
  puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar17 = 0x112d4af88;
  func_0x0001033e6e7c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar18 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar13 = uVar18;
  func_0x0001001c7f30();
  lVar14 = lStack_e0;
  lVar15 = lStack_118;
  func_0x000107c60264(lStack_e0,&puStack_d0,uVar18,uVar13,lStack_118,uVar17);
  puVar9 = puStack_108;
  lVar5 = lStack_128;
  func_0x000107c5ffb8(lVar4,lVar14,lStack_128,ppuVar12);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar5);
  (**(code **)(lStack_d8 + 8))(lVar14,lVar15);
  (**(code **)(lStack_f0 + 8))(lVar4,lStack_e8);
  puVar9 = puStack_a0;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  return;
}



/* Entry: 1033e4414; end: 1033e4453;  */

void FUN_1033e4414(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f63d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbfd0c;
  func_0x000107c61520(&UNK_10dbbfd0c,&UNK_11064ead0);
  puRam0000000112f63d38 = puVar1;
  return;
}



/* Entry: 1033e4454; end: 1033e4e6b;  */

/* WARNING: Possible PIC construction at 0x0001033e4608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e4798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e4a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e4948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e4a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e451c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033e4a40) */
/* WARNING: Removing unreachable block (ram,0x0001033e494c) */
/* WARNING: Removing unreachable block (ram,0x0001033e4a94) */
/* WARNING: Removing unreachable block (ram,0x0001033e479c) */
/* WARNING: Removing unreachable block (ram,0x0001033e460c) */
/* WARNING: Removing unreachable block (ram,0x0001033e4614) */
/* WARNING: Removing unreachable block (ram,0x0001033e4934) */
/* WARNING: Removing unreachable block (ram,0x0001033e4624) */
/* WARNING: Removing unreachable block (ram,0x0001033e4520) */
/* WARNING: Removing unreachable block (ram,0x0001033e47b4) */
/* WARNING: Removing unreachable block (ram,0x0001033e45b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e4454(ulong param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,long param_6
                  ,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_80 [4];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    lVar3 = param_2;
    uVar10 = param_3;
    func_0x000100029284();
    uVar9 = param_1;
    if ((uVar10 & 1) != 0) {
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x38) + lVar3 * 8);
      func_0x000107c61434(uVar9);
      func_0x000107c6142c(param_1);
      if (uVar9 >> 0x3e == 0) {
        uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar10 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar10 = uVar9;
        }
        func_0x000107c60480();
      }
      if (uVar10 != 0) {
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1033e4a9c);
            (*pcVar2)();
          }
          lVar3 = *(long *)(uVar9 + 0x20);
          func_0x000107c61174();
        }
        else {
          lVar3 = 0;
          FUN_1033e3434(0,uVar9);
        }
        uVar10 = ((ulong *)(lVar3 + _DAT_11307f518))[1];
        if ((uVar10 != 0) &&
           ((uVar8 = *(ulong *)(lVar3 + _DAT_11307f518), uVar8 == param_4 && uVar10 == param_5 ||
            (func_0x000107c605b8(uVar8,uVar10,param_4,param_5,0), (uVar8 & 1) != 0)))) {
          func_0x000107c6142c(uVar9);
          lVar1 = _DAT_11307f538;
          lVar4 = *(long *)(lVar3 + _DAT_11307f538);
          if (lVar4 != 0) {
            func_0x000107c61174();
            lVar5 = lVar4;
            func_0x000107c3ef0c();
            func_0x000107c61180();
            if (lVar5 != 0) {
              func_0x000107c5faec();
              goto code_r0x000107c61170;
            }
            func_0x000107c61170(lVar4);
          }
          uStack_c8 = 0;
          uStack_c0 = 0xe000000000000000;
          func_0x000107c602fc(0x32);
          func_0x000107c6142c(uStack_c0);
          uStack_c8 = 0x666e49616964654d;
          uStack_c0 = 0xeb00000000203a6f;
          auStack_80[0] = *(undefined8 *)(lVar3 + lVar1);
          func_0x000107c61174();
          uVar6 = 0x112f63d48;
          func_0x0001000285a8(0x112f63d48,&UNK_10dbbfcf8);
          func_0x000107c5fb18(auStack_80,uVar6);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar6);
          func_0x000107c5fb78(0x654b65686361430a,0xeb00000000203a79);
          lVar3 = *(long *)(lVar3 + lVar1);
          if (lVar3 != 0) {
            func_0x000107c3ef0c();
            func_0x000107c61180();
            if (lVar3 != 0) {
              func_0x000107c5faec();
              goto code_r0x000107c61170;
            }
          }
          func_0x000107c5fb78();
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(0xd000000000000018,0x800000010f149760);
          func_0x000107c6142c(uStack_c0);
          func_0x000107c60f3c(param_7);
        }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
    }
    func_0x000107c6142c(uVar9);
  }
  uStack_c8 = 0;
  uStack_c0 = 0xe000000000000000;
  func_0x000107c602fc(0x46);
  func_0x000107c5fb78(0xd000000000000022,0x800000010f149710);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f149740);
  func_0x000107c5fb78(param_4,param_5);
  func_0x000107c5fb78(0x7461646174654d0a,0xee00203a70614d61);
  uVar6 = 0x112f63d40;
  func_0x0001000285a8(0x112f63d40,&UNK_10dbbfcf0);
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c5f9ec(param_1,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(uStack_c0);
  func_0x000107c61428(param_6 + 0x10,&uStack_c8,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61648();
  if (param_6 != 0) {
    lVar3 = *(long *)(param_6 + 0x38);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50240();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61574(param_6);
  }
  func_0x000107c60f3c(param_7);
  return;
}



/* Entry: 1033e4e6c; end: 1033e5103;  */

undefined1  [16] FUN_1033e4e6c(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  uVar10 = *unaff_x20;
  puVar3 = &UNK_11064e758;
  uVar9 = 0x20;
  func_0x000107c613fc(&UNK_11064e758,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  lVar8 = param_1;
  func_0x000107c440cc();
  if ((int)lVar8 == 0) {
    func_0x000107c4407c();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar8 = 0;
      uVar9 = 0;
    }
    else {
      lVar8 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    uVar10 = *(undefined8 *)(puVar3 + 0x18);
    *(long *)(puVar3 + 0x10) = lVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar9;
    func_0x000107c6142c(uVar10);
    goto LAB_1033e5058;
  }
  func_0x000107c5bdec();
  func_0x000107c61180();
  lVar8 = param_1;
  func_0x000107c43e90();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar8 == 0) {
LAB_1033e5020:
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
  }
  else {
    uStack_70 = 0x1033e6dcc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_102176288;
    puStack_78 = &UNK_11064e950;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_11064e988;
    func_0x000107c613fc(&UNK_11064e988,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    uStack_70 = 0x1033e6dd4;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10217628c;
    puStack_78 = &UNK_11064e9a0;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar7 = lVar8;
    func_0x000107c4c6f0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar8);
    if (lVar7 == 0) goto LAB_1033e5020;
    func_0x000107c60234(&puStack_90,lVar7);
    func_0x000107c615e8(lVar7);
  }
  FUN_1033e6e3c(&puStack_90,0x112d387f8,&UNK_10d902650);
LAB_1033e5058:
  func_0x000107c61428(puVar3 + 0x10,&puStack_90,0,0);
  if (*(long *)(puVar3 + 0x18) == 0) {
    lVar8 = unaff_x20[7];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar9 = 0x6e696d6165727473;
      func_0x000107c5fadc(0x6e696d6165727473,0xe900000000000067);
      func_0x000107c502b0(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(uVar9);
    }
  }
  auVar1 = *(undefined1 (*) [16])(puVar3 + 0x10);
  func_0x000107c61434(*(undefined8 *)(puVar3 + 0x18));
  func_0x000107c61574(puVar3);
  return auVar1;
}



/* Entry: 1033e5104; end: 1033e5177;  */

void FUN_1033e5104(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c60f3c(param_4);
  return;
}



/* Entry: 1033e5178; end: 1033e538b;  */

void FUN_1033e5178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  lVar1 = unaff_x20[0xb];
  if (lVar1 != 0) {
    uVar7 = *unaff_x20;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5c080();
      puVar2 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c4766c(puVar2);
      func_0x000107c61170(param_3);
      puVar3 = PTR_PTR_1126b1060;
      func_0x000107c610f8(PTR_PTR_1126b1060);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c47d08(puVar3);
      func_0x000107c61170(puVar4);
      puVar4 = &UNK_11064e7d0;
      func_0x000107c613fc(&UNK_11064e7d0,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar5 = &UNK_11064e9d8;
      func_0x000107c613fc(&UNK_11064e9d8,0x38,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      *(code **)(puVar5 + 0x20) = param_5;
      *(undefined8 *)(puVar5 + 0x28) = param_6;
      *(undefined8 *)(puVar5 + 0x30) = uVar7;
      uStack_70 = 0x1033e6ddc;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100f17d9c;
      puStack_78 = &UNK_11064e9f0;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c615f0(param_1);
      func_0x000107c6157c(param_6);
      func_0x000107c61574(puVar4);
      func_0x000107c50784(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      return;
    }
  }
  (*param_5)(0,0);
  return;
}



/* Entry: 1033e538c; end: 1033e545b;  */

void FUN_1033e538c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1033e545c; end: 1033e558f;  */

void FUN_1033e545c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,1,0);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  func_0x000100de78a0(param_1,param_2);
  func_0x0001000b44c0(uVar1,uVar2);
  func_0x000107c61428(param_4 + 0x10,auStack_80,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar3 = *(ulong *)(param_4 + 0x18);
  if (uVar3 >> 0x3c < 0xf) {
    func_0x000100de78a0(uVar1,uVar3);
    func_0x0001000b44c0(uVar1,uVar3);
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  else {
    func_0x000100de78a0(uVar1,uVar3);
    func_0x0001000b44c0(uVar1,uVar3);
    func_0x000107c61428(param_5 + 0x10,auStack_98,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61648();
    if (param_5 != 0) {
      lVar4 = *(long *)(param_5 + 0x38);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c50248();
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c61574(param_5);
    }
  }
  func_0x000107c60f3c(param_6);
  return;
}



/* Entry: 1033e5590; end: 1033e5713;  */

void FUN_1033e5590(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    func_0x000107c6157c(uVar2);
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar4 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    func_0x000107c61170(lVar3);
  }
  (*pcVar1)(param_2,lVar4,param_3);
  func_0x0001000b44c0(param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1033e5714; end: 1033e571f;  */

void FUN_1033e5714(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar9 + 0x10,auStack_58,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61648();
  if (lVar9 != 0) {
    func_0x000107c61428(lVar6 + 0x10,auStack_70,0,0);
    uVar1 = *(undefined8 *)(lVar6 + 0x10);
    uVar4 = *(undefined8 *)(lVar6 + 0x18);
    func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    func_0x000107c61428(lVar7 + 0x10,auStack_a0,0,0);
    uVar8 = *(undefined1 *)(lVar7 + 0x10);
    func_0x000107c61434(uVar4);
    func_0x000100de78a0(uVar2,uVar5);
    FUN_1033e5720(uVar1,uVar4,uVar2,uVar5,uVar8);
    func_0x0001000b44c0(uVar2,uVar5);
    func_0x000107c61574(lVar9);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 1033e5720; end: 1033e5db7;  */

/* WARNING: Possible PIC construction at 0x0001033e63cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e6534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e65a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e6678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e5d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e5d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033e667c) */
/* WARNING: Removing unreachable block (ram,0x0001033e65a4) */
/* WARNING: Removing unreachable block (ram,0x0001033e6538) */
/* WARNING: Removing unreachable block (ram,0x0001033e6674) */
/* WARNING: Removing unreachable block (ram,0x0001033e654c) */
/* WARNING: Removing unreachable block (ram,0x0001033e656c) */
/* WARNING: Removing unreachable block (ram,0x0001033e63d0) */
/* WARNING: Removing unreachable block (ram,0x0001033e5d54) */
/* WARNING: Removing unreachable block (ram,0x0001033e6468) */

void FUN_1033e5720(undefined8 param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  uint uStack_bc;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  undefined1 *puStack_88;
  undefined7 uStack_87;
  undefined *puStack_80;
  undefined *apuStack_78 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *unaff_x20;
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5ede0();
  lVar12 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar7 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = puVar7 + -extraout_x12;
  if (param_2 != 0) {
    func_0x000100de78a0(param_3,param_4);
    puVar3 = param_3;
    puVar2 = param_4;
    func_0x0001000b44c0();
    if (0xe < (ulong)param_4 >> 0x3c) {
      puVar13 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_1033e5db4;
      lVar12 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar9 = (undefined8 *)((long)&ppuStack_90 - extraout_x8_00);
      puVar1 = (undefined8 *)0x0;
      func_0x000107c5ede0();
      lVar14 = puVar1[-1];
      puVar2 = puVar1;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
      lVar12 = (long)puVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      if (param_2 != 0) {
        func_0x000107c5edd0(puVar9,param_1);
        puVar2 = puVar9;
        (**(code **)(lVar14 + 0x30))(puVar9,1,puVar1);
        if ((int)puVar2 != 1) {
          (**(code **)(lVar14 + 0x20))(lVar12,puVar9,puVar1);
          puVar3 = PTR_PTR_1126b1d00;
          func_0x000107c610f8();
          puVar13 = puVar3;
          func_0x000107c5ed90();
          func_0x000107c49150();
          func_0x000107c61170(puVar13);
          if (lRam0000000112f63f28 != -1) {
            puVar13 = (undefined *)0x112f63f28;
            func_0x000107c61568(0x112f63f28,FUN_1033e7760);
          }
          puStack_88 = (undefined1 *)
                       ((CONCAT71(uStack_87,(char)param_5) & 0xffffffffffffff01 ^ 0xff) &
                       0xffffffffffffff01);
          FUN_1033e6dfc();
          puVar4 = &UNK_11064efc8;
          puVar7 = (undefined1 *)&stack0xffffffffffffff78;
          func_0x000107c5eb4c(puVar7,&UNK_11064efc8,puVar13);
          puStack_88 = puVar7;
          puStack_80 = puVar4;
          apuStack_78[0] = puVar3;
          func_0x000107c61174(puVar3);
          func_0x00010006c00c(puVar7,puVar4);
          func_0x000100b60084(&stack0xffffffffffffff78);
          puVar13 = apuStack_78[0];
          func_0x00010006c090(puStack_88,puStack_80);
          func_0x000107c61170(puVar13);
          lVar8 = unaff_x20[7];
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar8 != 0) {
            puVar13 = (undefined *)0x6f65646976;
            if ((param_5 & 1) == 0) {
              puVar13 = (undefined *)0x6567616d69;
            }
            func_0x000107c5fadc(puVar13,0xe500000000000000);
            func_0x000107c6142c(0xe500000000000000);
            func_0x000107c5025c(lVar8);
            func_0x000107c61170(puVar3);
            func_0x000107c615e8(lVar8);
            puVar3 = puVar13;
          }
          func_0x000107c61170(puVar3);
          func_0x00010006c090(puVar7,puVar4);
          (**(code **)(lVar14 + 8))(lVar12,puVar1);
          return;
        }
        FUN_1033e6e3c(puVar9,0x112d36580,&UNK_10d9016d0);
        puVar2 = puVar9;
      }
      FUN_1033e4414();
      puVar3 = &UNK_11064ead0;
      func_0x000107c613f8(&UNK_11064ead0,puVar2,0,0);
      *puVar2 = 0xd000000000000017;
      puVar2[1] = 0x800000010f149830;
      puVar2[2] = 8;
      func_0x00010488ade0();
      goto code_r0x000107c614ac;
    }
    puVar2 = (undefined8 *)0x0;
    uStack_bc = param_5;
    func_0x0001000b44c0(0,0xf000000000000000);
    FUN_1033e7540();
    if (puVar2 != (undefined8 *)0x0) {
      if (unaff_x20[0xf] != 0) {
        lStack_c8 = unaff_x20[0xf];
        func_0x000107c615f0();
        func_0x000107c5ee20(param_3,param_4);
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c61168();
        func_0x000107c51770();
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        if (puVar3 != (undefined *)0x0) {
          func_0x000107c57144(puVar2);
          func_0x000107c61170(puVar3);
        }
        func_0x000107c5ed80(puVar13,param_1,param_2);
        puVar3 = (undefined *)0x34706d2e;
        puVar9 = (undefined8 *)0xe400000000000000;
        func_0x000107c5fbb8(0x34706d2e,0xe400000000000000,param_1,param_2);
        if (((ulong)puVar3 & 1) == 0) {
          puStack_a8 = (undefined *)0x0;
          puStack_a0 = (undefined8 *)0xe000000000000000;
          puVar4 = (undefined *)0x10;
          puStack_d0 = puVar2;
          func_0x000107c602fc();
          puVar2 = puStack_a0;
          func_0x0001005c6500();
          func_0x000107c61180();
          puVar3 = puVar4;
          func_0x000107c5faec();
          func_0x000107c6142c(puVar2);
          func_0x000107c61170(puVar4);
          uVar5 = 0x5f74706d6f72702f;
          uVar10 = 0xe800000000000000;
          puStack_a8 = puVar3;
          puStack_a0 = puVar9;
          func_0x000107c5fb78(0x5f74706d6f72702f,0xe800000000000000);
          func_0x00010011df08();
          func_0x000107c61180();
          uVar15 = uVar5;
          func_0x000107c5faec();
          func_0x000107c61170(uVar5);
          func_0x000107c5fb78(uVar15,uVar10);
          func_0x000107c6142c(uVar10);
          func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
          puVar2 = puStack_a0;
          func_0x000107c5ed80(puVar7,puStack_a8,puStack_a0);
          func_0x000107c6142c(puVar2);
          pcStack_d8 = *(code **)(lVar12 + 8);
          (*pcStack_d8)(puVar13,puVar1);
          (**(code **)(lVar12 + 0x20))(puVar13,puVar7,puVar1);
          puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          uVar15 = param_1;
          lVar14 = param_2;
          func_0x000107c5fadc(param_1,param_2);
          uVar5 = uVar15;
          func_0x000107c5edc4();
          func_0x000107c5fadc();
          func_0x000107c6142c(lVar14);
          puStack_a8 = (undefined *)0x0;
          puVar4 = puVar3;
          func_0x000107c4b66c();
          func_0x000107c61170(puVar3);
          func_0x000107c61170(uVar15);
          func_0x000107c61170(uVar5);
          puVar3 = puStack_a8;
          if ((int)puVar4 == 0) {
            puVar13 = puStack_a8;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(puVar13);
            func_0x000107c61654();
            puStack_a8 = (undefined *)0x0;
            puStack_a0 = (undefined8 *)0xe000000000000000;
            func_0x000107c602fc(0x5a);
            func_0x000107c5fb78(0xd00000000000002f,0x800000010f149850);
            uVar11 = 0x112d393f0;
            apuStack_78[0] = puVar3;
            func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
            func_0x000107c603d0(apuStack_78,&puStack_a8,uVar11,
                                PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                               );
            func_0x000107c5fb78(0xd000000000000012,0x800000010f149880);
            func_0x000107c5fb78(param_1,param_2);
            uVar11 = 0x800000010f1498a0;
            func_0x000107c5fb78(0xd000000000000013,0x800000010f1498a0);
            func_0x000107c5edc4();
            func_0x000107c5fb78();
            func_0x000107c6142c(uVar11);
            puVar2 = puStack_a0;
            func_0x000107c6142c();
            FUN_1033e4414();
            func_0x000107c613f8(&UNK_11064ead0,puVar2,0,0);
            *puVar2 = 0xd000000000000017;
            puVar2[1] = 0x800000010f149830;
            puVar2[2] = 8;
            func_0x00010488ade0();
            goto code_r0x000107c614ac;
          }
          func_0x000107c61174();
          puVar2 = puStack_d0;
        }
        func_0x000107c5ed90();
        lVar14 = lStack_c8;
        lVar8 = lStack_c8;
        func_0x000107c5dde4(lStack_c8);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c5a534(puVar2);
        func_0x000107c615e8(lVar8);
        puVar3 = &UNK_11064e7d0;
        func_0x000107c613fc(&UNK_11064e7d0,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,unaff_x20);
        puVar4 = &UNK_11064ea28;
        func_0x000107c613fc(&UNK_11064ea28,0x28,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        puVar4[0x18] = (byte)uStack_bc & 1;
        *(undefined8 *)(puVar4 + 0x20) = uVar11;
        puStack_88 = (undefined1 *)0x1033e6dec;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_a0 = (undefined8 *)0x42000000;
        puStack_98 = &UNK_101ef3328;
        ppuStack_90 = (undefined1 **)&UNK_11064ea40;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar4;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_80);
        func_0x000107c434fc(puVar2);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar14);
        func_0x000107c615e8(puVar2);
        (**(code **)(lVar12 + 8))();
        puVar2 = puVar1;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return;
        }
        goto LAB_1033e5db4;
      }
      func_0x000107c615e8();
    }
  }
  FUN_1033e4414();
  puVar3 = &UNK_11064ead0;
  func_0x000107c613f8(&UNK_11064ead0,puVar2,0,0);
  *puVar2 = 0xd000000000000017;
  puVar2[1] = 0x800000010f149830;
  puVar2[2] = 8;
  puVar13 = puVar3;
  func_0x00010488ade0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
LAB_1033e5db4:
    func_0x000107c60e78();
    uVar11 = puVar2[5];
    uVar15 = puVar2[4];
    *(undefined8 *)(puVar13 + 0x28) = puVar2[5];
    *(undefined8 *)(puVar13 + 0x20) = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(uVar11);
    return;
  }
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 1033e5db8; end: 1033e5ddf;  */

void FUN_1033e5db8(long param_1,long param_2)

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



/* Entry: 1033e5de0; end: 1033e5e1b;  */

void FUN_1033e5de0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1033e4454(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1033e5e1c; end: 1033e6167;  */

/* WARNING: Removing unreachable block (ram,0x0001033e5fb0) */

void FUN_1033e5e1c(long param_1,long param_2,long param_3,code *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *apcStack_90 [3];
  long lStack_78;
  long lStack_70;
  
  lVar2 = 0;
  lVar6 = param_2;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)apcStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = param_1;
  func_0x000107c440d0();
  if ((int)lVar11 == 0) {
    func_0x000107c4407c();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c61428(param_3 + 0x10,&lStack_78,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61648();
      if (param_3 != 0) {
        lVar6 = *(long *)(param_3 + 0x38);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar6 != 0) {
          uVar7 = 0x657274735f6e6f6e;
          func_0x000107c5fadc(0x657274735f6e6f6e,0xed0000676e696d61);
          func_0x000107c502b0(lVar6);
          func_0x000107c615e8(lVar6);
          func_0x000107c61170(uVar7);
        }
        func_0x000107c61574(param_3);
      }
      lVar11 = 0;
      lVar6 = 0;
    }
    else {
      lVar11 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
  }
  else {
    lStack_78 = 0;
    lStack_70 = 0xe000000000000000;
    lVar3 = 0x10;
    apcStack_90[0] = param_4;
    func_0x000107c602fc();
    lVar11 = lStack_70;
    func_0x0001005c6500();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c6142c(lVar11);
    func_0x000107c61170(lVar3);
    uVar5 = 0x5f74706d6f72702f;
    uVar8 = 0xe800000000000000;
    lStack_78 = lVar4;
    lStack_70 = lVar6;
    func_0x000107c5fb78(0x5f74706d6f72702f,0xe800000000000000);
    func_0x00010011df08();
    func_0x000107c61180();
    uVar7 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    func_0x000107c5fb78(uVar7,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
    lVar6 = lStack_70;
    lVar11 = lStack_78;
    lVar4 = lStack_70;
    func_0x000107c5ed80(lVar10,lStack_78,lStack_70);
    func_0x000107c5b190();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033e6168);
      (*pcVar1)();
    }
    lVar3 = param_2;
    func_0x000107c5ee30();
    func_0x000107c61170(param_2);
    func_0x000107c5ee40(lVar10,0,lVar3,lVar4);
    func_0x00010006c090(lVar3,lVar4);
    (**(code **)(lVar9 + 8))(lVar10,lVar2);
    param_4 = apcStack_90[0];
  }
  (*param_4)(lVar11,lVar6);
  func_0x000107c6142c(lVar6);
  return;
}



/* Entry: 1033e6168; end: 1033e628b;  */

void FUN_1033e6168(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = param_3;
  func_0x000107c5faec();
  func_0x000107c61428(param_3 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  *(long *)(param_3 + 0x18) = lVar2;
  func_0x000107c6142c(uVar1);
  *(undefined **)(param_1 + 0x18) = PTR___sytN_11034f1b0 + 8;
  return;
}



/* Entry: 1033e628c; end: 1033e6d93;  */

/* WARNING: Removing unreachable block (ram,0x0001033e6468) */
/* WARNING: Removing unreachable block (ram,0x0001033e6674) */
/* WARNING: Removing unreachable block (ram,0x0001033e654c) */
/* WARNING: Removing unreachable block (ram,0x0001033e656c) */

void FUN_1033e628c(undefined8 param_1,long param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 **ppuStack_90;
  undefined1 *puStack_88;
  undefined7 uStack_87;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)((long)&ppuStack_90 - extraout_x8);
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5ede0();
  lVar10 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    func_0x000107c5edd0(puVar3,param_1);
    puVar2 = puVar3;
    (**(code **)(lVar10 + 0x30))(puVar3,1,puVar1);
    if ((int)puVar2 != 1) {
      (**(code **)(lVar10 + 0x20))(lVar9,puVar3,puVar1);
      puVar4 = PTR_PTR_1126b1d00;
      func_0x000107c610f8();
      puVar5 = puVar4;
      func_0x000107c5ed90();
      func_0x000107c49150();
      func_0x000107c61170(puVar5);
      if (lRam0000000112f63f28 != -1) {
        puVar5 = (undefined *)0x112f63f28;
        func_0x000107c61568(0x112f63f28,FUN_1033e7760);
      }
      puStack_88 = (undefined1 *)((CONCAT71(uStack_87,param_3) ^ 0xff) & 0xffffffffffffff01);
      FUN_1033e6dfc();
      puVar8 = &UNK_11064efc8;
      puVar6 = (undefined1 *)&stack0xffffffffffffff78;
      func_0x000107c5eb4c(puVar6,&UNK_11064efc8,puVar5);
      puStack_88 = puVar6;
      puStack_80 = puVar8;
      puStack_78 = puVar4;
      func_0x000107c61174(puVar4);
      func_0x00010006c00c(puVar6,puVar8);
      func_0x000100b60084(&stack0xffffffffffffff78);
      puVar5 = puStack_78;
      func_0x00010006c090(puStack_88,puStack_80);
      func_0x000107c61170(puVar5);
      lVar7 = *(long *)(unaff_x20 + 0x38);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 != 0) {
        puVar5 = (undefined *)0x6f65646976;
        if ((param_3 & 1) == 0) {
          puVar5 = (undefined *)0x6567616d69;
        }
        func_0x000107c5fadc(puVar5,0xe500000000000000);
        func_0x000107c6142c(0xe500000000000000);
        func_0x000107c5025c(lVar7);
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar7);
        puVar4 = puVar5;
      }
      func_0x000107c61170(puVar4);
      func_0x00010006c090(puVar6,puVar8);
      (**(code **)(lVar10 + 8))(lVar9,puVar1);
      return;
    }
    FUN_1033e6e3c(puVar3,0x112d36580,&UNK_10d9016d0);
    puVar2 = puVar3;
  }
  FUN_1033e4414();
  puVar5 = &UNK_11064ead0;
  func_0x000107c613f8(&UNK_11064ead0,puVar2,0,0);
  *puVar2 = 0xd000000000000017;
  puVar2[1] = 0x800000010f149830;
  puVar2[2] = 8;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 1033e6d94; end: 1033e6dc3;  */

void FUN_1033e6d94(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001033e4ab8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1033e6dc4; end: 1033e6dfb;  */

void FUN_1033e6dc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c60f3c(uVar2);
  return;
}



/* Entry: 1033e6dfc; end: 1033e6e3b;  */

void FUN_1033e6dfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f63d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc005c;
  func_0x000107c61520(&UNK_10dbc005c,&UNK_11064efc8);
  puRam0000000112f63d98 = puVar1;
  return;
}



/* Entry: 1033e6e3c; end: 1033e6ebb;  */

undefined8 FUN_1033e6e3c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1033e6ebc; end: 1033e6ec3;  */

void FUN_1033e6ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1033e6ec4; end: 1033e6ef7;  */

undefined8 * FUN_1033e6ec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1033e6ef8; end: 1033e6f4b;  */

undefined8 * FUN_1033e6ef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1033e6f4c; end: 1033e6f87;  */

undefined8 * FUN_1033e6f4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1033e6f88; end: 1033e7067;  */

int FUN_1033e6f88(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033e7068; end: 1033e753f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033e7068(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  func_0x0001000285a8(0x112f63848,&UNK_10dbbfc50);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  *(long *)(unaff_x20 + 0xa8) = lVar1;
  *(undefined8 *)(unaff_x20 + 200) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined1 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_17;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_18;
  if (param_2 == 0) {
    func_0x000107c6157c(uVar3);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + _DAT_112f63da0) + 0x10);
    puVar2 = &UNK_11064eb28;
    func_0x000107c613fc(&UNK_11064eb28,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,unaff_x20);
    func_0x000107c61174();
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(param_14);
    func_0x000107c6157c(param_15);
    func_0x000107c6157c(param_16);
    func_0x000107c61174();
    func_0x000107c6157c(uVar4);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174();
    func_0x000107c615f0(param_13);
    func_0x00010075a04c(0,1,FUN_1033e78ec,puVar2);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c615e8(param_13);
    func_0x000107c61574(param_14);
    func_0x000107c61574(param_15);
    func_0x000107c61574(param_16);
  }
  return unaff_x20;
}



/* Entry: 1033e7540; end: 1033e759b;  */

long FUN_1033e7540(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 200);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_1033e779c();
    uVar3 = *(undefined8 *)(unaff_x20 + 200);
    *(long *)(unaff_x20 + 200) = lVar1;
    func_0x000107c615f0();
    FUN_1033eb330(uVar3);
  }
  FUN_1033eb88c(lVar2);
  return lVar1;
}



/* Entry: 1033e759c; end: 1033e763b; -[_TtC21SCLensPromptApiPlugin28LensPromptDependencyProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e759c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f63da8) = 0;
  func_0x000107c61614(param_1 + _DAT_112f63db0,0);
  lVar1 = _DAT_112f63da0;
  func_0x0001000285a8(0x112f63840,&UNK_10dbbfa00);
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x00010095c380();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033e763c; end: 1033e766f;  */

void FUN_1033e763c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033e7670; end: 1033e76b7; -[_TtC21SCLensPromptApiPlugin28LensPromptDependencyProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e7670(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f63da8));
  FUN_1033e78f4(param_1 + _DAT_112f63db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f63da0));
  return;
}



/* Entry: 1033e76b8; end: 1033e775f;  */

void FUN_1033e76b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eb0c();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  uVar2 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___s10Foundation11JSONDecoderC19KeyDecodingStrategyO14useDefaultKeysyA2EmFWC_110350308
             ,lVar1);
  func_0x000107c5eb10(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uRam00000001138072e0 = uVar2;
  return;
}



/* Entry: 1033e7760; end: 1033e779b;  */

void FUN_1033e7760(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  uRam00000001138072d8 = uVar1;
  return;
}



/* Entry: 1033e779c; end: 1033e7897;  */

long FUN_1033e779c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c4288;
  func_0x000107c61168(PTR_PTR_1126c4288);
  func_0x000107c30878();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3089c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c3087c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c40b98();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar4 != 0) {
        func_0x000107c58bec(lVar4);
        func_0x000107c5513c(lVar4);
        func_0x000107c615f0(lVar4);
        func_0x000107c529f4();
        func_0x000107c615e8(lVar4);
      }
      goto LAB_1033e787c;
    }
  }
  lVar4 = 0;
LAB_1033e787c:
  func_0x000107c61170(puVar1);
  return lVar4;
}



/* Entry: 1033e7898; end: 1033e78eb;  */

void FUN_1033e7898(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1033e3bb0();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1033e78ec; end: 1033e78f3;  */

void FUN_1033e78ec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1033e3bb0();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1033e78f4; end: 1033e7917;  */

undefined8 FUN_1033e78f4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1033e7918; end: 1033e7d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033e7918(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1033e7d38);
    (*pcVar2)();
  }
  uVar6 = param_1;
  func_0x000107c428b4();
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  FUN_1033ec46c(uVar4,param_2);
  if (((uint)uVar4 & 0xff) == 8) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x13);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0xd000000000000011;
    uStack_68 = 0x800000010ef25cd0;
    uVar6 = param_1;
    func_0x000107c428b4(param_1);
    func_0x000107c61180();
    uVar4 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x000107c5fb78(uVar4,param_2);
    func_0x000107c6142c(param_2);
    uVar1 = uStack_68;
    func_0x000103dac9b4(param_1,5,puVar3,uStack_70,uStack_68);
    func_0x000107c6142c(uVar1);
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x20);
    func_0x000107c5fb78(0xd00000000000001e,0x800000010f149950);
    uStack_71 = (undefined1)uVar4;
    pcVar2 = (code *)&uStack_70;
    func_0x000107c603d0(&uStack_71,pcVar2,&UNK_11064eeb8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_68);
    uVar6 = param_1;
    func_0x000107c5b6c0();
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c5faec();
    pcVar7 = pcVar2;
    func_0x000107c61170(uVar6);
    if (lRam0000000112f64058 != -1) {
      pcVar7 = FUN_1033eba94;
      func_0x000107c61568(0x112f64058);
    }
    uVar6 = (ulong)*(byte *)(lRam00000001138072f8 + _DAT_113080f70);
    func_0x0001044e388c();
    if (uVar5 == uVar6 && pcVar2 == pcVar7) {
      func_0x000107c6142c(pcVar2);
      func_0x000107c6142c(pcVar7);
    }
    else {
      pcVar8 = pcVar2;
      func_0x000107c605b8(uVar5,pcVar2,uVar6,pcVar7,0);
      func_0x000107c6142c(pcVar2);
      func_0x000107c6142c(pcVar7);
      if ((uVar5 & 1) == 0) {
        uVar6 = param_1;
        func_0x000107c5b6c0();
        func_0x000107c61180();
        uVar5 = uVar6;
        func_0x000107c5faec();
        pcVar2 = pcVar8;
        func_0x000107c61170(uVar6);
        if (lRam0000000112f64060 != -1) {
          pcVar2 = (code *)0x1033ebaa4;
          func_0x000107c61568(0x112f64060);
        }
        uVar6 = (ulong)*(byte *)(lRam00000001138072f0 + _DAT_113080f70);
        func_0x0001044e388c();
        if ((uVar5 == uVar6) && (pcVar8 == pcVar2)) {
          func_0x000107c6142c(pcVar8);
          func_0x000107c6142c(pcVar2);
        }
        else {
          pcVar7 = pcVar8;
          func_0x000107c605b8(uVar5,pcVar8,uVar6,pcVar2,0);
          func_0x000107c6142c(pcVar8);
          func_0x000107c6142c(pcVar2);
          if ((uVar5 & 1) == 0) {
            uVar6 = param_1;
            func_0x000107c5b6c0();
            func_0x000107c61180();
            uVar5 = uVar6;
            func_0x000107c5faec();
            pcVar2 = pcVar7;
            func_0x000107c61170(uVar6);
            if (lRam0000000112f64068 != -1) {
              pcVar2 = (code *)0x1033ebab4;
              func_0x000107c61568(0x112f64068);
            }
            uVar6 = (ulong)*(byte *)(lRam00000001138072e8 + _DAT_113080f70);
            func_0x0001044e388c();
            if ((uVar5 == uVar6) && (pcVar7 == pcVar2)) {
              func_0x000107c6142c(pcVar7);
              func_0x000107c6142c(pcVar2);
            }
            else {
              func_0x000107c605b8(uVar5,pcVar7,uVar6,pcVar2,0);
              func_0x000107c6142c(pcVar7);
              func_0x000107c6142c(pcVar2);
              if ((uVar5 & 1) == 0) {
                return puVar3;
              }
            }
            func_0x0001033e7fe0(param_1,puVar3,uVar4);
            return puVar3;
          }
        }
        func_0x0001033e7e4c(param_1,puVar3,uVar4);
        return puVar3;
      }
    }
    func_0x0001033e7d38(param_1,puVar3,uVar4);
  }
  return puVar3;
}



/* Entry: 1033e7d38; end: 1033e8187;  */

/* WARNING: Possible PIC construction at 0x0001033e8524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e85e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daca80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacc1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e7db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e7e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e89c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e8a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e886c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033e8c1c) */
/* WARNING: Removing unreachable block (ram,0x0001033e8c0c) */
/* WARNING: Removing unreachable block (ram,0x0001033e8bd0) */
/* WARNING: Removing unreachable block (ram,0x0001033e8bc0) */
/* WARNING: Removing unreachable block (ram,0x0001033e8d38) */
/* WARNING: Removing unreachable block (ram,0x0001033e8d28) */
/* WARNING: Removing unreachable block (ram,0x0001033e8c2c) */
/* WARNING: Removing unreachable block (ram,0x0001033e8b0c) */
/* WARNING: Removing unreachable block (ram,0x0001033e8c24) */
/* WARNING: Removing unreachable block (ram,0x0001033e8afc) */
/* WARNING: Removing unreachable block (ram,0x0001033e8ac0) */
/* WARNING: Removing unreachable block (ram,0x0001033e8aa8) */
/* WARNING: Removing unreachable block (ram,0x0001033e8a18) */
/* WARNING: Removing unreachable block (ram,0x0001033e89c8) */
/* WARNING: Removing unreachable block (ram,0x0001033e8958) */
/* WARNING: Removing unreachable block (ram,0x0001033e8d60) */
/* WARNING: Removing unreachable block (ram,0x0001033e8928) */
/* WARNING: Removing unreachable block (ram,0x0001033e7e18) */
/* WARNING: Removing unreachable block (ram,0x0001033e7dbc) */
/* WARNING: Removing unreachable block (ram,0x000103dacc20) */
/* WARNING: Removing unreachable block (ram,0x000103dacc5c) */
/* WARNING: Removing unreachable block (ram,0x000103dacd14) */
/* WARNING: Removing unreachable block (ram,0x000103daccf8) */
/* WARNING: Removing unreachable block (ram,0x000103dacd40) */
/* WARNING: Removing unreachable block (ram,0x000103dacd74) */
/* WARNING: Removing unreachable block (ram,0x000103dacdac) */
/* WARNING: Removing unreachable block (ram,0x000103dace7c) */
/* WARNING: Removing unreachable block (ram,0x000103daceb8) */
/* WARNING: Removing unreachable block (ram,0x000103dace14) */
/* WARNING: Removing unreachable block (ram,0x000103dace74) */
/* WARNING: Removing unreachable block (ram,0x000103dacebc) */
/* WARNING: Removing unreachable block (ram,0x000103daceec) */
/* WARNING: Removing unreachable block (ram,0x000103daced4) */
/* WARNING: Removing unreachable block (ram,0x000103dacd58) */
/* WARNING: Removing unreachable block (ram,0x000103dacc40) */
/* WARNING: Removing unreachable block (ram,0x000103dacb9c) */
/* WARNING: Removing unreachable block (ram,0x000103dacbb0) */
/* WARNING: Removing unreachable block (ram,0x000103dacba8) */
/* WARNING: Removing unreachable block (ram,0x000103dacbcc) */
/* WARNING: Removing unreachable block (ram,0x0001033e8594) */
/* WARNING: Removing unreachable block (ram,0x0001033e8528) */
/* WARNING: Removing unreachable block (ram,0x0001033e8614) */
/* WARNING: Removing unreachable block (ram,0x0001033e8548) */
/* WARNING: Removing unreachable block (ram,0x0001033e8554) */
/* WARNING: Removing unreachable block (ram,0x0001033e8620) */
/* WARNING: Removing unreachable block (ram,0x0001033e8624) */
/* WARNING: Removing unreachable block (ram,0x0001033e8564) */
/* WARNING: Removing unreachable block (ram,0x0001033e8870) */
/* WARNING: Removing unreachable block (ram,0x0001033e8aa0) */
/* WARNING: Removing unreachable block (ram,0x0001033e8b40) */
/* WARNING: Removing unreachable block (ram,0x0001033e8b94) */
/* WARNING: Removing unreachable block (ram,0x0001033e8c30) */
/* WARNING: Removing unreachable block (ram,0x0001033e8b9c) */
/* WARNING: Removing unreachable block (ram,0x0001033e8c40) */
/* WARNING: Removing unreachable block (ram,0x0001033e8b7c) */
/* WARNING: Removing unreachable block (ram,0x0001033e890c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e7d38(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x20;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puStack_98;
  undefined8 *apuStack_90 [2];
  undefined *puStack_80;
  undefined8 auStack_78 [3];
  
  if (param_3 == '\x01') {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    puVar7 = param_2;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar13 = *(long *)(unaff_x20 + 0x28);
      lVar3 = lVar13;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar5 = lVar3;
        func_0x000107c4b3f8();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        if (lVar5 != 0) {
          func_0x000107c5faec();
          puVar15 = puVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar13 != 0) {
            lVar3 = lVar13;
            func_0x000107c4b474();
            func_0x000107c61180();
            func_0x000107c615e8(lVar13);
            if (lVar3 != 0) {
              func_0x000107c5faec();
              func_0x000107c61170(lVar3);
              puVar12 = param_1;
              func_0x000107c3eb80();
              func_0x000107c61180();
              if (puVar12 == (undefined8 *)0x0) {
                puVar14 = (undefined8 *)0x0;
                puVar15 = (undefined8 *)0xc000000000000000;
              }
              else {
                puVar14 = puVar12;
                func_0x000107c5ee30();
                func_0x000107c61170(puVar12);
              }
              if (lRam0000000112f63f38 != -1) {
                puVar12 = (undefined8 *)0x112f63f38;
                func_0x000107c61568(0x112f63f38,FUN_1033e76b8);
              }
              FUN_1033eb798();
              func_0x000107c5eb1c(&puStack_98,&UNK_11064f0d8,puVar14,puVar15,&UNK_11064f0d8,puVar12)
              ;
              func_0x00010006c090(puVar14);
              puVar12 = apuStack_90[0];
              puVar10 = puStack_98;
              puVar14 = apuStack_90[0];
              func_0x000107c61434();
              func_0x00010011df08();
              func_0x000107c61180();
              if (puVar14 == (undefined8 *)0x0) {
                func_0x000107c5faec();
                func_0x000107c5fadc();
                puVar12 = puVar15;
              }
              else {
                func_0x000107c5faec();
                if (puVar12 == (undefined8 *)0x0) {
                  func_0x000107c4b678();
                  func_0x000107c61180();
                  puVar12 = puVar7;
                  if (param_1 != (undefined8 *)0x0) {
                    uVar6 = 0;
                    func_0x000102a4cf50(0);
                    puVar12 = param_1;
                    func_0x000107c5fc54(param_1,uVar6);
                    func_0x000107c61170(param_1);
                    if ((ulong)puVar12 >> 0x3e == 0) {
                      puVar7 = *(undefined8 **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar7 = (undefined8 *)((ulong)puVar12 & 0xffffffffffffff8);
                      if ((undefined8 *)0x7fffffffffffffff < puVar12) {
                        puVar7 = puVar12;
                      }
                      func_0x000107c60480();
                    }
                    if (0 < (long)puVar7) {
                      FUN_1033e35d0(puVar12);
                    }
                  }
                }
                else {
                  uVar1 = (ulong)puVar10 & 0xffffffffffff;
                  if (((ulong)puVar12 & 0x2000000000000000) != 0) {
                    uVar1 = (ulong)puVar12 >> 0x38 & 0xf;
                  }
                  if (uVar1 != 0) {
                    func_0x000107c61168(PTR_PTR_1126bbd50);
                    func_0x000107c5fadc(puVar10,puVar12);
                  }
                }
              }
              goto code_r0x000107c6142c;
            }
          }
          func_0x000107c615e8(lVar4);
          puVar12 = puVar7;
          goto code_r0x000107c6142c;
        }
      }
      func_0x000107c615e8(lVar4);
    }
  }
  else {
    if (param_3 != '\0') {
      func_0x000107c602fc(0x13);
      puVar12 = (undefined8 *)0xe000000000000000;
      goto code_r0x000107c6142c;
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = _DAT_112f63da8;
    if (lVar3 != 0) {
      lVar13 = *(long *)(unaff_x20 + 0x18);
      if (lVar13 != 0) {
        puVar12 = auStack_78;
        func_0x000107c61428(lVar13 + _DAT_112f63da8,puVar12,0,0);
        lVar4 = *(long *)(lVar13 + lVar4);
        if (lVar4 != 0) {
          func_0x000107c4f490();
          func_0x000107c61180();
          lVar3 = lVar4;
          func_0x000107c5faec();
          func_0x000107c61170(lVar4);
          lVar4 = _DAT_112f63da8;
          func_0x000107c61428(lVar13 + _DAT_112f63da8,apuStack_90,0,0);
          lVar4 = *(long *)(lVar13 + lVar4);
          if (lVar4 != 0) {
            func_0x000107c4f48c();
            func_0x000107c61180();
            func_0x000107c5ee30();
            func_0x000107c61170(lVar4);
            func_0x000107c5fadc(lVar3,puVar12);
          }
          goto code_r0x000107c6142c;
        }
      }
      func_0x000103dac9b4(param_1,3,param_2,0xd000000000000023,0x800000010f149970);
      func_0x000107c615e8(lVar3);
      return;
    }
  }
  puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_98 = (undefined *)0xd000000000000024;
  apuStack_90[0] = (undefined8 *)0x800000010ef25cf0;
  puStack_80 = PTR___sSSN_11034da80;
  func_0x000100102924(&puStack_98,auStack_78,param_2);
  func_0x000107c61434(0x800000010ef25cf0);
  puVar8 = puVar10;
  func_0x000107c61558(puVar10);
  puStack_98 = puVar10;
  puVar12 = (undefined8 *)0x6567617373656d;
  func_0x0001001029e8(auStack_78,0x6567617373656d,0xe700000000000000,puVar8);
  puVar10 = puStack_98;
  puVar7 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (puVar7 == (undefined8 *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
  }
  else {
    func_0x000107c4e33c(param_1);
    func_0x000107c61180();
    puVar2 = PTR___sSSSHsWP_11034da90;
    puVar8 = PTR___sSSN_11034da80;
    puVar12 = param_1;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_1);
    puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x000107c5f9dc(puVar10,puVar8,PTR___sypN_11034f1a8 + 8,puVar2);
    auStack_78[0] = 0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    uVar6 = auStack_78[0];
    func_0x000107c61174(auStack_78[0]);
    if (puVar9 == (undefined *)0x0) {
      uVar11 = uVar6;
      func_0x000107c5ed30();
      func_0x000107c61170(uVar6);
      func_0x000107c61654();
      func_0x000107c614ac(uVar11);
    }
    else {
      func_0x000107c5ee30(puVar9);
      func_0x000107c61170(puVar9);
    }
    func_0x000107c5f9dc(puVar12,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar12);
  return;
}



/* Entry: 1033e8188; end: 1033e81e3; -[_TtC21SCLensPromptApiPlugin27LensPromptApiRequestHandler handleRequest:] */

void FUN_1033e8188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1033e7918(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1033e81e4; end: 1033e83fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e81e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) goto LAB_1033e83cc;
  lVar2 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = _DAT_112f63da8;
    if (lVar3 != 0) {
      lVar8 = *(long *)(unaff_x20 + 0x18);
      if (lVar8 == 0) {
LAB_1033e8320:
        func_0x000107c615e8(lVar1);
      }
      else {
        puVar5 = auStack_78;
        func_0x000107c61428(lVar8 + _DAT_112f63da8,puVar5,0,0);
        lVar2 = *(long *)(lVar8 + lVar2);
        if (lVar2 == 0) goto LAB_1033e8320;
        func_0x000107c4f490();
        func_0x000107c61180();
        lVar4 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        lVar2 = _DAT_112f63da8;
        puVar6 = *(undefined1 **)(unaff_x20 + 0x98);
        if (puVar6 == (undefined1 *)0x0) {
          func_0x000107c615e8(lVar1);
LAB_1033e8360:
          func_0x000107c6142c(puVar5);
        }
        else {
          uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
          func_0x000107c61428(lVar8 + _DAT_112f63da8,auStack_90,0,0);
          lVar2 = *(long *)(lVar8 + lVar2);
          if (lVar2 == 0) {
            func_0x000107c61434(puVar6);
LAB_1033e8344:
            if ((*(byte *)(unaff_x20 + 0xa0) & 1) != 0) {
              func_0x000107c615e8(lVar1);
              func_0x000107c6142c(puVar5);
              puVar5 = puVar6;
              goto LAB_1033e8360;
            }
            func_0x000107c5fadc(lVar4,puVar5);
            func_0x000107c6142c(puVar5);
            func_0x000107c5fadc(uVar7,puVar6);
            func_0x000107c6142c(puVar6);
            func_0x000107c4bbf4(lVar1);
            func_0x000107c615e8(lVar1);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(uVar7);
          }
          else {
            func_0x000107c61434(puVar6);
            func_0x000107c50660();
            func_0x000107c61180();
            if (lVar2 == 0) goto LAB_1033e8344;
            func_0x000107c615e8(lVar1);
            func_0x000107c6142c(puVar6);
            func_0x000107c6142c(puVar5);
            func_0x000107c61170(lVar3);
            lVar3 = lVar2;
          }
        }
      }
      func_0x000107c61170(lVar3);
      goto LAB_1033e83cc;
    }
  }
  func_0x000107c615e8(lVar1);
LAB_1033e83cc:
  *(undefined1 *)(unaff_x20 + 0xa0) = 0;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  func_0x000107c6142c(uVar7);
  return;
}



/* Entry: 1033e83fc; end: 1033e8423; -[_TtC21SCLensPromptApiPlugin27LensPromptApiRequestHandler reset] */

void FUN_1033e83fc(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_1033e81e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1033e8424; end: 1033e97fb;  */

/* WARNING: Possible PIC construction at 0x0001033e860c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033e8610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1033e8424(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long unaff_x19;
  undefined *puVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined *puVar18;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar19;
  undefined1 *unaff_x25;
  undefined *puVar20;
  undefined1 *unaff_x26;
  undefined *puVar21;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  uint uStack_d4;
  long lStack_d0;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar10 = &stack0xfffffffffffffff0;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar12 = _DAT_112f63da8;
  if (lVar3 == 0) {
    pcVar1 = "Error on client. Please report issue";
    uVar14 = 0xd000000000000024;
    uVar13 = 10;
  }
  else {
    unaff_x23 = *(long *)(unaff_x20 + 0x18);
    if (unaff_x23 != 0) {
      puVar11 = auStack_78;
      func_0x000107c61428(_DAT_112f63da8 + unaff_x23,puVar11,0,0);
      lVar4 = *(long *)(puVar12 + unaff_x23);
      unaff_x25 = puVar12;
      if (lVar4 != 0) {
        uStack_c4 = SUB84(param_3,0);
        func_0x000107c4f490();
        func_0x000107c61180();
        lVar6 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
        param_3 = _DAT_112f63da8;
        puVar12 = auStack_90;
        func_0x000107c61428(_DAT_112f63da8 + unaff_x23,puVar12,0,0);
        lVar4 = *(long *)(param_3 + unaff_x23);
        if (lVar4 != 0) {
          uStack_e8 = param_2;
          func_0x000107c4f48c();
          func_0x000107c61180();
          lVar5 = lVar4;
          func_0x000107c5ee30();
          uStack_d4 = (uint)param_4;
          func_0x000107c61170(lVar4);
          func_0x000107c5fadc(lVar6,puVar11);
          lStack_e0 = lVar6;
          func_0x000107c6142c(puVar11);
          uVar2 = uStack_d4;
          puVar10 = puVar12;
          lStack_d0 = lVar5;
          func_0x000107c5ee20(lVar5,puVar12);
          uVar14 = uStack_e8;
          if ((uVar2 & 1) == 0) {
            lVar4 = 0;
          }
          else {
            lVar6 = *(long *)(param_3 + unaff_x23);
            if (lVar6 != 0) {
              func_0x000107c4f4c0();
              func_0x000107c61180();
              if (lVar6 != 0) {
                lVar4 = lVar6;
                func_0x000107c5faec();
                func_0x000107c61170(lVar6);
                func_0x000107c5fadc(lVar4,puVar10);
                func_0x000107c6142c(puVar10);
                goto LAB_1033e8624;
              }
            }
            lVar4 = 0;
          }
LAB_1033e8624:
          puVar17 = &UNK_11064eb28;
          func_0x000107c613fc(&UNK_11064eb28,0x18,7);
          func_0x000107c61644(puVar17 + 0x10);
          puVar21 = &UNK_11064eb50;
          func_0x000107c613fc(&UNK_11064eb50,0x2a,7);
          *(undefined **)(puVar21 + 0x10) = puVar17;
          *(long *)(puVar21 + 0x18) = param_1;
          *(undefined8 *)(puVar21 + 0x20) = uVar14;
          puVar21[0x28] = (byte)uStack_c4 & 1;
          puVar21[0x29] = (byte)uVar2 & 1;
          pcStack_a0 = FUN_1033eb360;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          pcStack_b0 = FUN_1031f3148;
          puStack_a8 = &UNK_11064eb68;
          ppuVar7 = &puStack_c0;
          puStack_98 = puVar21;
          func_0x000107c60bc4(ppuVar7);
          puVar17 = puStack_98;
          func_0x000107c61174(param_1);
          func_0x000107c61174(uVar14);
          func_0x000107c61574(puVar17);
          lVar6 = lStack_e0;
          func_0x000107c44214(lVar3);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar4);
          func_0x00010006c090(lStack_d0,puVar12);
          func_0x000107c615e8(lVar3);
          auVar22._8_8_ = puVar12;
          auVar22._0_8_ = lVar3;
          return auVar22;
        }
        func_0x000107c6142c(puVar11);
        unaff_x25 = puVar11;
      }
    }
    pcVar1 = "Missing reply parameters for prompt";
    uVar13 = 3;
    uVar14 = 0xd000000000000023;
    unaff_x30 = 0x1033e8610;
    register0x00000008 = (BADSPACEBASE *)auStack_f0;
    unaff_x19 = lVar3;
    unaff_x21 = param_1;
    unaff_x22 = param_4;
    unaff_x24 = param_2;
    unaff_x26 = param_3;
    unaff_x29 = puVar10;
  }
  puVar17 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar15 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (uVar15 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar14;
    *(ulong *)((long)register0x00000008 + -0x90) = uVar15;
    *(undefined **)((long)register0x00000008 + -0x80) = PTR___sSSN_11034da80;
    func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x98),
                        (undefined1 *)((long)register0x00000008 + -0x78));
    func_0x000107c61434(uVar15);
    puVar21 = puVar17;
    func_0x000107c61558(puVar17);
    *(undefined **)((long)register0x00000008 + -0x98) = puVar17;
    uVar13 = 0x6567617373656d;
    func_0x0001001029e8((undefined1 *)((long)register0x00000008 + -0x78),0x6567617373656d,
                        0xe700000000000000,puVar21);
    puVar17 = *(undefined **)((long)register0x00000008 + -0x98);
  }
  lVar3 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar13);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar20 = PTR___sSSSHsWP_11034da90;
  puVar21 = PTR___sSSN_11034da80;
  lVar4 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar19 = puVar17;
  func_0x000107c5f9dc(puVar17,puVar21,PTR___sypN_11034f1a8 + 8,puVar20);
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar19);
  uVar14 = *(undefined8 *)((long)register0x00000008 + -0x78);
  func_0x000107c61174(uVar14);
  if (puVar8 == (undefined *)0x0) {
    uVar13 = uVar14;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar14);
    func_0x000107c61654();
    func_0x000107c614ac(uVar13);
    puVar20 = (undefined *)0x0;
    puVar21 = (undefined *)0xf000000000000000;
  }
  else {
    puVar20 = puVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar8);
  }
  lVar6 = lVar4;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  if ((ulong)puVar21 >> 0x3c < 0xf) {
    puVar19 = puVar20;
    func_0x000107c5ee20(puVar20,puVar21);
    func_0x0001000b44c0(puVar20,puVar21);
  }
  else {
    puVar19 = (undefined *)0x0;
    puVar21 = puVar8;
  }
  puVar20 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar19);
  func_0x000107c4d664(param_2);
  func_0x000107c6142c(puVar17);
  puVar8 = puVar20;
  func_0x000107c61170(puVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
    auVar23._8_8_ = puVar21;
    auVar23._0_8_ = puVar8;
    return auVar23;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0xd0) = puVar20;
  *(long *)((long)register0x00000008 + -200) = lVar6;
  *(undefined **)((long)register0x00000008 + -0xc0) = puVar17;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0xa8) = &UNK_103dacc60;
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar21 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = *(undefined **)((long)register0x00000008 + -0xe0);
  func_0x000107c61174();
  if (puVar17 == (undefined *)0x0) {
    puVar17 = puVar8;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar8);
    func_0x000107c61654();
    puVar9 = puVar17;
    func_0x000107c614ac(puVar17);
    puVar16 = (undefined *)0x0;
    puVar18 = (undefined *)0xf000000000000000;
    puVar8 = puVar21;
  }
  else {
    puVar16 = puVar17;
    func_0x000107c5ee30();
    puVar9 = puVar17;
    puVar8 = puVar21;
    func_0x000107c61170(puVar17);
    puVar18 = puVar21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xd8)) {
    auVar24._8_8_ = puVar18;
    auVar24._0_8_ = puVar16;
    return auVar24;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0x130) = puVar19;
  *(long *)((long)register0x00000008 + -0x128) = lVar3;
  *(undefined **)((long)register0x00000008 + -0x120) = puVar20;
  *(undefined **)((long)register0x00000008 + -0x118) = puVar17;
  *(undefined **)((long)register0x00000008 + -0x110) = puVar18;
  *(undefined **)((long)register0x00000008 + -0x108) = puVar16;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &UNK_103dacd78;
  *(undefined8 *)((long)register0x00000008 + -0x138) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)puVar8 >> 0x3c < 0xf) {
    puVar17 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar9,puVar8);
    puVar21 = puVar9;
    func_0x000107c5ee20(puVar9,puVar8);
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar21);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x158);
    if (puVar17 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234((undefined1 *)((long)register0x00000008 + -0x158),puVar17);
      func_0x0001000b44c0(puVar9,puVar8);
      func_0x000107c615e8(puVar17);
      uVar14 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar10 = (undefined1 *)((long)register0x00000008 + -0x168);
      puVar8 = (undefined *)((long)register0x00000008 + -0x158);
      func_0x000107c6147c(puVar10,puVar8,PTR___sypN_11034f1a8 + 8,uVar14,6);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x168);
      if ((int)puVar10 == 0) {
        uVar14 = 0;
      }
      goto code_r0x000103dacebc;
    }
    uVar13 = uVar14;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar9,puVar8);
    func_0x000107c614ac(uVar14);
  }
  uVar14 = 0;
code_r0x000103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x138)) {
    func_0x000107c60e78(uVar14);
    return ZEXT816(0x11070f3e8);
  }
  auVar25._8_8_ = puVar8;
  auVar25._0_8_ = uVar14;
  return auVar25;
}



/* Entry: 1033e97fc; end: 1033e989b;  */

void FUN_1033e97fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,uint param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_1033e989c(param_4,param_5,param_6 & 1,param_7 & 1,param_1,param_2);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 1033e989c; end: 1033eadcf;  */

/* WARNING: Possible PIC construction at 0x0001033ea1e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033ea1e8) */
/* WARNING: Removing unreachable block (ram,0x0001033ea110) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_1033e989c(long param_1,undefined8 param_2,byte param_3,byte param_4,long *param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long **pplVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined *puVar22;
  undefined1 *puVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_1a0 [8];
  code *pcStack_198;
  code *pcStack_190;
  undefined8 *puStack_188;
  long *plStack_168;
  long lStack_160;
  undefined8 auStack_158 [4];
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar19 = 0x112d36580;
  puVar12 = (undefined8 *)&UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar23 = auStack_1a0 + -extraout_x8;
  puVar3 = (undefined8 *)0x0;
  func_0x000107c5ede0();
  lVar19 = puVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  puStack_98 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar21 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((param_5 == (long *)0x0) || (param_6 != 0)) {
    lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000100102924(&puStack_98,&uStack_78);
    func_0x000107c61434(0x800000010f1496e0);
    puVar24 = puStack_98;
    func_0x000107c61558(puStack_98);
    uVar13 = 0x6567617373656d;
    func_0x0001001029e8(&uStack_78,0x6567617373656d,0xe700000000000000,puVar24);
    lVar19 = param_1;
    func_0x000107c50374();
    func_0x000107c61180();
    if (lVar19 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar13);
    }
    func_0x000107c4e33c();
    func_0x000107c61180();
    puVar15 = PTR___sSSSHsWP_11034da90;
    puVar24 = PTR___sSSN_11034da80;
    lVar18 = param_1;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_1);
    puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    puVar22 = puStack_98;
    func_0x000107c5f9dc(puStack_98,puVar24,PTR___sypN_11034f1a8 + 8,puVar15);
    uStack_78 = 0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c61170(puVar22);
    uVar13 = uStack_78;
    func_0x000107c61174(uStack_78);
    if (puVar11 == (undefined *)0x0) {
      uVar9 = uVar13;
      func_0x000107c5ed30();
      func_0x000107c61170(uVar13);
      func_0x000107c61654();
      func_0x000107c614ac(uVar9);
      puVar15 = (undefined *)0x0;
      puVar24 = (undefined *)0xf000000000000000;
    }
    else {
      puVar15 = puVar11;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar11);
    }
    lVar14 = lVar18;
    puVar11 = PTR___sSSN_11034da80;
    func_0x000107c5f9dc(lVar18,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar18);
    if ((ulong)puVar24 >> 0x3c < 0xf) {
      puVar22 = puVar15;
      func_0x000107c5ee20(puVar15,puVar24);
      func_0x0001000b44c0(puVar15,puVar24);
    }
    else {
      puVar22 = (undefined *)0x0;
      puVar24 = puVar11;
    }
    puVar15 = PTR_PTR_1126b0278;
    func_0x000107c610f8();
    func_0x000107c48368();
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(puVar22);
    func_0x000107c4d664(param_2);
    func_0x000107c6142c(puStack_98);
    func_0x000107c61170(puVar15);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
      auVar26._8_8_ = puVar24;
      auVar26._0_8_ = puVar15;
      return auVar26;
    }
    func_0x000107c60e78();
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar24 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    puVar12 = (undefined8 *)PTR___sSSN_11034da80;
    func_0x000107c5f9dc(puVar15,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    puStack_e0 = (undefined *)0x0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    func_0x000107c61174();
    if (puVar24 == (undefined *)0x0) {
      puVar24 = puStack_e0;
      func_0x000107c5ed30();
      func_0x000107c61170(puStack_e0);
      func_0x000107c61654();
      func_0x000107c614ac(puVar24);
      puVar15 = (undefined *)0x0;
      puVar16 = (undefined8 *)0xf000000000000000;
      puVar3 = puVar12;
    }
    else {
      puVar15 = puVar24;
      func_0x000107c5ee30();
      puVar3 = puVar12;
      func_0x000107c61170(puVar24);
      puVar16 = puVar12;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      auVar27._8_8_ = puVar16;
      auVar27._0_8_ = puVar15;
      return auVar27;
    }
    func_0x000107c60e78();
    lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((ulong)puVar3 >> 0x3c < 0xf) {
      puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x000107c61168();
      func_0x00010006c00c(puVar24,puVar3);
      puVar11 = puVar24;
      func_0x000107c5ee20(puVar24,puVar3);
      auStack_158[0] = 0;
      func_0x000107c3ab8c();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      uVar13 = auStack_158[0];
      if (puVar15 != (undefined *)0x0) {
        func_0x000107c61174();
        func_0x000107c60234(auStack_158,puVar15);
        func_0x0001000b44c0(puVar24,puVar3);
        func_0x000107c615e8(puVar15);
        uVar13 = 0x112d472a8;
        func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
        pplVar10 = &plStack_168;
        puVar3 = auStack_158;
        func_0x000107c6147c(pplVar10,puVar3,PTR___sypN_11034f1a8 + 8,uVar13,6);
        if ((int)pplVar10 == 0) {
          plStack_168 = (long *)0x0;
        }
        goto code_r0x000103dacebc;
      }
      uVar9 = auStack_158[0];
      func_0x000107c61174();
      func_0x000107c5ed30(uVar13);
      func_0x000107c61170(uVar9);
      func_0x000107c61654();
      func_0x0001000b44c0(puVar24,puVar3);
      func_0x000107c614ac(uVar13);
    }
    plStack_168 = (long *)0x0;
code_r0x000103dacebc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
      auVar28._8_8_ = puVar3;
      auVar28._0_8_ = plStack_168;
      return auVar28;
    }
    func_0x000107c60e78(plStack_168);
    return ZEXT816(0x11070f3e8);
  }
  puStack_188 = puVar3;
  lStack_160 = param_1;
  func_0x000107c61174();
  plStack_168 = param_5;
  func_0x000107c4f490();
  func_0x000107c61180();
  plVar4 = param_5;
  if (param_5 == (long *)0x0) {
    puVar3 = (undefined8 *)0x0;
    if ((param_4 & 1) != 0) goto LAB_1033e99f8;
LAB_1033e9a58:
    lVar18 = 0;
    puVar16 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) goto LAB_1033e9a64;
LAB_1033e9c04:
    func_0x000107c61170(param_5);
    func_0x000107c6142c(puVar16);
  }
  else {
    func_0x000107c5faec();
    puVar3 = puVar12;
    if ((param_4 & 1) == 0) goto LAB_1033e9a58;
LAB_1033e99f8:
    lVar18 = _DAT_112f63da8;
    lVar14 = *(long *)(unaff_x20 + 0x18);
    if (lVar14 == 0) goto LAB_1033e9a58;
    puVar16 = auStack_158;
    func_0x000107c61428(lVar14 + _DAT_112f63da8,puVar16,0,0);
    lVar14 = *(long *)(lVar14 + lVar18);
    puVar12 = puVar16;
    if (lVar14 == 0) {
LAB_1033e9bf0:
      lVar18 = 0;
      puVar16 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c4f4c0();
      func_0x000107c61180();
      puVar12 = puVar16;
      if (lVar14 == 0) goto LAB_1033e9bf0;
      lVar18 = lVar14;
      func_0x000107c5faec();
      puVar12 = puVar16;
      func_0x000107c61170(lVar14);
    }
    if (puVar3 == (undefined8 *)0x0) goto LAB_1033e9c04;
LAB_1033e9a64:
    if (puVar16 != (undefined8 *)0x0) {
      puVar12 = puVar3;
      FUN_1033eb454();
      func_0x0001000d224c(&puStack_130);
      func_0x000107c6142c(puVar3);
      func_0x000107c5fadc(lVar18,puVar16);
      func_0x000107c6142c(puVar16);
      puVar24 = &UNK_11064eb28;
      func_0x000107c613fc(&UNK_11064eb28,0x18,7);
      func_0x000107c61644(puVar24 + 0x10);
      puVar15 = &UNK_11064ec90;
      puVar11 = (undefined *)0x49;
      func_0x000107c613fc(&UNK_11064ec90,0x49,7);
      lVar19 = lStack_160;
      plVar5 = plStack_168;
      *(undefined **)(puVar15 + 0x10) = puVar24;
      *(long *)(puVar15 + 0x18) = lStack_160;
      *(long **)(puVar15 + 0x20) = plStack_168;
      *(undefined8 *)(puVar15 + 0x28) = param_2;
      puVar15[0x30] = param_3 & 1;
      *(long **)(puVar15 + 0x38) = plVar4;
      *(undefined8 **)(puVar15 + 0x40) = puVar12;
      puVar15[0x48] = param_4 & 1;
      pcStack_c0 = FUN_1033eb724;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_d8 = 0x42000000;
      pcStack_d0 = FUN_1033eadd0;
      puStack_c8 = (undefined8 *)&UNK_11064eca8;
      ppuVar6 = &puStack_e0;
      puStack_b8 = puVar15;
      func_0x000107c60bc4(ppuVar6);
      puVar24 = puStack_b8;
      func_0x000107c61174(plVar5);
      func_0x000107c61174(lVar19);
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar24);
      func_0x000107c43ef4(puStack_130);
      func_0x000107c61170(plVar5);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(puStack_130);
      func_0x000107c61170(param_5);
      func_0x000107c61170(lVar18);
      goto LAB_1033ea3e8;
    }
    func_0x000107c6142c(puVar3);
    func_0x000107c61170(param_5);
  }
  plVar4 = plStack_168;
  plVar5 = *(long **)(unaff_x20 + 0xb8);
  puVar3 = *(undefined8 **)(unaff_x20 + 0xc0);
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0;
  puStack_90 = (undefined *)0x0;
  if ((param_4 & 1) == 0) {
    plVar5 = plStack_168;
    func_0x000107c4f474();
    func_0x000107c61180();
    if (plVar5 == (long *)0x0) goto LAB_1033e9fe0;
    puVar24 = &UNK_11064eba0;
    func_0x000107c613fc(&UNK_11064eba0,0x18,7);
    *(undefined ***)(puVar24 + 0x10) = &puStack_90;
    puVar15 = &UNK_11064ebc8;
    func_0x000107c613fc(&UNK_11064ebc8,0x20,7);
    pcStack_190 = FUN_1033eb404;
    *(code **)(puVar15 + 0x10) = FUN_1033eb404;
    *(undefined **)(puVar15 + 0x18) = puVar24;
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_c0 = FUN_1033eb40c;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_d8 = 0x42000000;
    pcStack_d0 = (code *)0x1033e7380;
    puStack_c8 = (undefined8 *)&UNK_11064ebe0;
    ppuVar6 = &puStack_e0;
    puStack_188 = (undefined8 *)puVar24;
    puStack_b8 = puVar15;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_b8);
    puVar24 = &UNK_11064ec18;
    func_0x000107c613fc(&UNK_11064ec18,0x18,7);
    *(undefined ***)(puVar24 + 0x10) = &puStack_88;
    puVar15 = &UNK_11064ec40;
    puVar12 = (undefined8 *)0x20;
    func_0x000107c613fc(&UNK_11064ec40,0x20,7);
    pcStack_198 = FUN_1033eb42c;
    *(code **)(puVar15 + 0x10) = FUN_1033eb42c;
    *(undefined **)(puVar15 + 0x18) = puVar24;
    pcStack_c0 = FUN_1033eb434;
    puStack_e0 = puVar11;
    lStack_d8 = 0x42000000;
    pcStack_d0 = (code *)&UNK_100de6bdc;
    puStack_c8 = (undefined8 *)&UNK_11064ec58;
    ppuVar7 = &puStack_e0;
    puStack_b8 = puVar15;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_b8);
    func_0x000107c4c660(plVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(plVar5);
    uVar13 = uStack_80;
    puVar15 = puStack_88;
  }
  else {
    plVar20 = plStack_168;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (plVar20 == (long *)0x0) {
LAB_1033e9e4c:
      plVar5 = plVar4;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar3 = puVar12;
    }
    else {
      plVar17 = plVar20;
      func_0x000107c5faec();
      puVar16 = puVar12;
      func_0x000107c61170(plVar20);
      if ((plVar5 == plVar17) && (puVar3 == puVar12)) {
        func_0x000107c6142c(puVar12);
        puVar12 = puVar16;
      }
      else {
        func_0x000107c605b8(plVar5,puVar3,plVar17,puVar12,0);
        func_0x000107c6142c(puVar12);
        puVar12 = puVar3;
        if (((ulong)plVar5 & 1) == 0) goto LAB_1033e9e4c;
      }
      plVar20 = plVar4;
      func_0x000107c5d0a8();
      func_0x000107c61180();
      if (plVar20 == (long *)0x0) goto LAB_1033e9fe0;
      plVar5 = plVar20;
      func_0x000107c4fa00();
      func_0x000107c61180();
      func_0x000107c61170(plVar20);
      puVar3 = puVar12;
    }
    puVar12 = puVar3;
    if (plVar5 != (long *)0x0) {
      plVar20 = plVar5;
      func_0x000107c5faec();
      puVar12 = puVar3;
      func_0x000107c61170(plVar5);
      uVar1 = (ulong)plVar20 & 0xffffffffffff;
      if (((ulong)puVar3 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar3 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        puStack_e0 = (undefined *)0xd000000000000020;
        lStack_d8 = 0x800000010f1499a0;
        func_0x000107c5fb78(plVar20,puVar3);
        func_0x000107c6142c(puVar3);
        lVar18 = lStack_d8;
        func_0x000107c5edd0(puVar23,puStack_e0,lStack_d8);
        func_0x000107c6142c(lVar18);
        puVar8 = puVar23;
        (**(code **)(lVar19 + 0x30))(puVar23,1,puStack_188);
        puVar12 = puStack_188;
        if ((int)puVar8 == 1) {
          puVar12 = (undefined8 *)0x112d36580;
          FUN_1033eb758(puVar23,0x112d36580,&UNK_10d9016d0);
          goto LAB_1033e9fe0;
        }
        (**(code **)(lVar19 + 0x20))(lVar21,puVar23,puStack_188);
        puVar24 = &SUB_102a4cf50;
        FUN_1033eb2c4(&SUB_102a4cf50,0x112d5d2e8,&UNK_10d923ac0);
        func_0x000107c613fc();
        *(undefined8 *)(puVar24 + 0x18) = 3;
        *(undefined8 *)(puVar24 + 0x10) = 1;
        puVar15 = PTR_PTR_1126b1d00;
        func_0x000107c610f8();
        puVar11 = puVar15;
        func_0x000107c5ed90();
        func_0x000107c49150();
        func_0x000107c61170(puVar11);
        (**(code **)(lVar19 + 8))(lVar21);
        *(undefined **)(puVar24 + 0x20) = puVar15;
        puVar3 = (undefined8 *)0x0;
        puStack_90 = puVar24;
      }
      func_0x000107c6142c(puVar3);
    }
LAB_1033e9fe0:
    pcStack_190 = (code *)0x0;
    puStack_188 = (undefined8 *)0x0;
    pcStack_198 = (code *)0x0;
    puVar24 = (undefined *)0x0;
    uVar13 = 0;
    puVar15 = (undefined *)0x0;
  }
  func_0x000107c61434(uVar13);
  plVar5 = plVar4;
  func_0x000107c4b424();
  func_0x000107c61180();
  if (plVar5 == (long *)0x0) {
    plVar20 = (long *)0x0;
    puVar16 = (undefined8 *)0x0;
    puVar3 = puVar12;
  }
  else {
    plVar20 = plVar5;
    func_0x000107c5faec();
    puVar3 = puVar12;
    func_0x000107c61170(plVar5);
    puVar16 = puVar12;
  }
  if ((param_3 & 1) == 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (plVar4 == (long *)0x0) {
      plVar17 = (long *)0x0;
      puVar3 = (undefined8 *)0x0;
    }
    else {
      plVar17 = plVar4;
      func_0x000107c5faec();
      func_0x000107c61170(plVar4);
    }
  }
  else {
    plVar17 = (long *)0x0;
    puVar3 = (undefined8 *)0x1;
    plVar4 = plVar5;
  }
  pcStack_c0 = (code *)0x0;
  puStack_b8 = (undefined *)0x0;
  uStack_a0 = 0;
  puStack_98 = (undefined *)0x0;
  puStack_e0 = puVar15;
  lStack_d8 = uVar13;
  pcStack_d0 = (code *)plVar20;
  puStack_c8 = puVar16;
  plStack_b0 = plVar17;
  puStack_a8 = puVar3;
  if (lRam0000000112f63f28 != -1) {
    plVar4 = &lRam0000000112f63f28;
    func_0x000107c61568(&lRam0000000112f63f28,FUN_1033e7760);
  }
  uStack_108 = puStack_b8;
  uStack_110 = pcStack_c0;
  puStack_f8 = puStack_a8;
  plStack_100 = plStack_b0;
  puStack_e8 = puStack_98;
  uStack_f0 = uStack_a0;
  puStack_118 = puStack_c8;
  plStack_120 = (long *)pcStack_d0;
  uStack_128 = lStack_d8;
  puStack_130 = puStack_e0;
  FUN_1033eb390();
  puVar15 = &UNK_11064f160;
  ppuVar6 = &puStack_130;
  func_0x000107c5eb4c(ppuVar6,&UNK_11064f160,plVar4);
  puVar11 = puVar15;
  FUN_1033eb3d0(&puStack_e0);
  lVar19 = lStack_160;
  lVar21 = lStack_160;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar21 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar11);
  }
  func_0x000107c4e33c(lVar19);
  func_0x000107c61180();
  puVar22 = PTR___sSSSHsWP_11034da90;
  puVar11 = PTR___sSSN_11034da80;
  lVar18 = lVar19;
  func_0x000107c5f9e8();
  func_0x000107c61170(lVar19);
  puVar2 = puStack_90;
  func_0x00010006c00c(ppuVar6,puVar15);
  func_0x000107c61434(puVar2);
  lVar19 = lVar18;
  func_0x000107c5f9dc(lVar18,puVar11,puVar11,puVar22);
  func_0x000107c6142c(lVar18);
  ppuVar7 = ppuVar6;
  func_0x000107c5ee20(ppuVar6,puVar15);
  func_0x00010006c090(ppuVar6,puVar15);
  if (puVar2 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar13 = 0;
    func_0x000102a4cf50(0);
    puVar11 = puVar2;
    func_0x000107c5fc48(puVar2,uVar13);
    func_0x000107c6142c(puVar2);
  }
  puVar22 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c48368();
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(puVar11);
  func_0x000107c4d664(param_2);
  func_0x000107c61170(puVar22);
  func_0x00010006c090(ppuVar6,puVar15);
  lVar19 = lStack_160;
  plVar4 = plStack_168;
  func_0x000107c6142c(puStack_90);
  func_0x000107c6142c(uStack_80);
  func_0x000100d47018(pcStack_190,puStack_188);
  func_0x000100d47018(pcStack_198);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar21 = lVar19;
  func_0x000107c5faec();
  puVar11 = puVar24;
  func_0x000107c61170(lVar19);
  func_0x000107c61170(plVar4);
  lVar18 = *(long *)(unaff_x20 + 0x98);
  *(long *)(unaff_x20 + 0x90) = lVar21;
  *(undefined **)(unaff_x20 + 0x98) = puVar24;
  func_0x000107c6142c(lVar18);
LAB_1033ea3e8:
  auVar25._8_8_ = puVar11;
  auVar25._0_8_ = lVar18;
  return auVar25;
}



/* Entry: 1033eadd0; end: 1033eae1f;  */

void FUN_1033eadd0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1033eae20; end: 1033eb1e7;  */

/* WARNING: Possible PIC construction at 0x0001033eaf1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033eaf20) */

undefined1  [16]
FUN_1033eae20(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x19;
  undefined *puVar11;
  undefined1 *unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar14;
  undefined8 unaff_x25;
  undefined *puVar15;
  undefined8 unaff_x26;
  undefined *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar8 = param_10;
  uVar3 = param_9;
  puVar1 = &uStack_b0;
  puVar7 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    uStack_90 = param_12;
    uStack_98 = param_11;
    func_0x0001000d224c(auStack_88);
    unaff_x20 = auStack_88;
    func_0x0001000a8868(unaff_x20,uStack_70);
    uStack_b0 = uStack_70;
    lStack_a8 = lStack_68;
    (**(code **)(lStack_68 + 8))(param_7,param_8,uVar3,uVar8,uStack_98,uStack_90,param_1,param_2);
    func_0x0001000834e4(auStack_88);
    uVar8 = 1;
    uVar9 = 0;
    lVar10 = 0;
    unaff_x30 = 0x1033eaf20;
    unaff_x19 = param_5;
    unaff_x21 = param_4;
  }
  else {
    lVar10 = -0x7ffffffef0eb6600;
    uVar8 = 8;
    uVar9 = 0xd000000000000016;
    puVar1 = (undefined8 *)register0x00000008;
    param_2 = unaff_x22;
    param_8 = unaff_x23;
    param_1 = unaff_x24;
    param_7 = unaff_x25;
    uVar3 = unaff_x26;
    puVar7 = unaff_x29;
  }
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)((long)puVar1 + -0x50) = uVar3;
  *(undefined8 *)((long)puVar1 + -0x48) = param_7;
  *(undefined8 *)((long)puVar1 + -0x40) = param_1;
  *(undefined8 *)((long)puVar1 + -0x38) = param_8;
  *(undefined8 *)((long)puVar1 + -0x30) = param_2;
  *(long *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined1 **)((long)puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)((long)puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)((long)puVar1 + -0x10) = puVar7;
  *(undefined8 *)((long)puVar1 + -8) = unaff_x30;
  *(undefined8 *)((long)puVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (lVar10 != 0) {
    *(undefined8 *)((long)puVar1 + -0x98) = uVar9;
    *(long *)((long)puVar1 + -0x90) = lVar10;
    *(undefined **)((long)puVar1 + -0x80) = PTR___sSSN_11034da80;
    func_0x000100102924((undefined1 *)((long)puVar1 + -0x98),(undefined1 *)((long)puVar1 + -0x78));
    func_0x000107c61434(lVar10);
    puVar16 = puVar12;
    func_0x000107c61558(puVar12);
    *(undefined **)((long)puVar1 + -0x98) = puVar12;
    uVar8 = 0x6567617373656d;
    func_0x0001001029e8((undefined1 *)((long)puVar1 + -0x78),0x6567617373656d,0xe700000000000000,
                        puVar16);
    puVar12 = *(undefined **)((long)puVar1 + -0x98);
  }
  lVar10 = param_4;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar10 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar15 = PTR___sSSSHsWP_11034da90;
  puVar16 = PTR___sSSN_11034da80;
  lVar2 = param_4;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_4);
  puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar14 = puVar12;
  func_0x000107c5f9dc(puVar12,puVar16,PTR___sypN_11034f1a8 + 8,puVar15);
  *(undefined8 *)((long)puVar1 + -0x78) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  uVar3 = *(undefined8 *)((long)puVar1 + -0x78);
  func_0x000107c61174(uVar3);
  if (puVar5 == (undefined *)0x0) {
    uVar8 = uVar3;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x000107c614ac(uVar8);
    puVar15 = (undefined *)0x0;
    puVar16 = (undefined *)0xf000000000000000;
  }
  else {
    puVar15 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
  }
  lVar4 = lVar2;
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar2);
  if ((ulong)puVar16 >> 0x3c < 0xf) {
    puVar14 = puVar15;
    func_0x000107c5ee20(puVar15,puVar16);
    func_0x0001000b44c0(puVar15,puVar16);
  }
  else {
    puVar14 = (undefined *)0x0;
    puVar16 = puVar5;
  }
  puVar15 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar14);
  func_0x000107c4d664(param_5);
  func_0x000107c6142c(puVar12);
  puVar5 = puVar15;
  func_0x000107c61170(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x58)) {
    auVar17._8_8_ = puVar16;
    auVar17._0_8_ = puVar5;
    return auVar17;
  }
  func_0x000107c60e78();
  *(undefined **)((long)puVar1 + -0xd0) = puVar15;
  *(long *)((long)puVar1 + -200) = lVar4;
  *(undefined **)((long)puVar1 + -0xc0) = puVar12;
  *(undefined8 *)((long)puVar1 + -0xb8) = param_5;
  *(undefined1 **)((long)puVar1 + -0xb0) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0xa8) = &UNK_103dacc60;
  *(undefined8 *)((long)puVar1 + -0xd8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar16 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  *(undefined8 *)((long)puVar1 + -0xe0) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = *(undefined **)((long)puVar1 + -0xe0);
  func_0x000107c61174();
  if (puVar12 == (undefined *)0x0) {
    puVar12 = puVar5;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar5);
    func_0x000107c61654();
    puVar6 = puVar12;
    func_0x000107c614ac(puVar12);
    puVar11 = (undefined *)0x0;
    puVar13 = (undefined *)0xf000000000000000;
    puVar5 = puVar16;
  }
  else {
    puVar11 = puVar12;
    func_0x000107c5ee30();
    puVar6 = puVar12;
    puVar5 = puVar16;
    func_0x000107c61170(puVar12);
    puVar13 = puVar16;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0xd8)) {
    auVar18._8_8_ = puVar13;
    auVar18._0_8_ = puVar11;
    return auVar18;
  }
  func_0x000107c60e78();
  *(undefined **)((long)puVar1 + -0x130) = puVar14;
  *(long *)((long)puVar1 + -0x128) = lVar10;
  *(undefined **)((long)puVar1 + -0x120) = puVar15;
  *(undefined **)((long)puVar1 + -0x118) = puVar12;
  *(undefined **)((long)puVar1 + -0x110) = puVar13;
  *(undefined **)((long)puVar1 + -0x108) = puVar11;
  *(undefined1 **)((long)puVar1 + -0x100) = (undefined1 *)((long)puVar1 + -0xb0);
  *(undefined **)((long)puVar1 + -0xf8) = &UNK_103dacd78;
  *(undefined8 *)((long)puVar1 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)puVar5 >> 0x3c < 0xf) {
    puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar6,puVar5);
    puVar16 = puVar6;
    func_0x000107c5ee20(puVar6,puVar5);
    *(undefined8 *)((long)puVar1 + -0x158) = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    uVar3 = *(undefined8 *)((long)puVar1 + -0x158);
    if (puVar12 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234((undefined1 *)((long)puVar1 + -0x158),puVar12);
      func_0x0001000b44c0(puVar6,puVar5);
      func_0x000107c615e8(puVar12);
      uVar3 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar7 = (undefined1 *)((long)puVar1 + -0x168);
      puVar5 = (undefined *)((long)puVar1 + -0x158);
      func_0x000107c6147c(puVar7,puVar5,PTR___sypN_11034f1a8 + 8,uVar3,6);
      uVar3 = *(undefined8 *)((long)puVar1 + -0x168);
      if ((int)puVar7 == 0) {
        uVar3 = 0;
      }
      goto code_r0x000103dacebc;
    }
    uVar8 = uVar3;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar3);
    func_0x000107c61170(uVar8);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar6,puVar5);
    func_0x000107c614ac(uVar3);
  }
  uVar3 = 0;
code_r0x000103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar1 + -0x138)) {
    func_0x000107c60e78(uVar3);
    return ZEXT816(0x11070f3e8);
  }
  auVar19._8_8_ = puVar5;
  auVar19._0_8_ = uVar3;
  return auVar19;
}



/* Entry: 1033eb1e8; end: 1033eb2c3;  */

void FUN_1033eb1e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  FUN_1033eb330(*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 1033eb2c4; end: 1033eb32f;  */

void FUN_1033eb2c4(code *param_1,ulong *param_2,long *param_3)

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



/* Entry: 1033eb330; end: 1033eb33f;  */

void FUN_1033eb330(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1033eb340; end: 1033eb35f;  */

void FUN_1033eb340(void)

{
  func_0x000107c61168(&PTR_PTR_112f63e20);
  return;
}



/* Entry: 1033eb360; end: 1033eb38f;  */

void FUN_1033eb360(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  bVar3 = *(byte *)(unaff_x20 + 0x29);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_1033e989c(uVar1,uVar5,bVar2 & 1,bVar3 & 1,param_1,param_2);
    func_0x000107c61574(lVar4);
  }
  return;
}


