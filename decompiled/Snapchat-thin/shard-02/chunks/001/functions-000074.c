/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018d8644; end: 1018d869f; -[_TtC39SCAdAppInstallMetricsValidationServices39SCAdAppInstallMetricsValidationServices init] */

void FUN_1018d8644(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0x616c696176616e55,0xeb00000000656c62,
                      "SCAdAppInstallMetricsValidationServices/SCAdAppInstallMetricsValidationServices.swift"
                      ,0x55,2,0x11,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d86a0);
  (*pcVar1)();
}



/* Entry: 1018d86a0; end: 1018d86df; -[_TtC39SCAdAppInstallMetricsValidationServices39SCAdAppInstallMetricsValidationServices validator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d86a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018d86e0; end: 1018d8713;  */

void FUN_1018d86e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018d8714; end: 1018d8723; -[_TtC39SCAdAppInstallMetricsValidationServices39SCAdAppInstallMetricsValidationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d8714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dd0140));
  return;
}



/* Entry: 1018d8724; end: 1018d8763;  */

void FUN_1018d8724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1018d8764; end: 1018d88f3;  */

void FUN_1018d8764(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126a7d50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_1018dd3f4(0);
  func_0x000107c613fc();
  FUN_1018dd2c0(puVar1,uVar2);
  puVar3 = &UNK_11040da68;
  func_0x000107c613fc(&UNK_11040da68,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x0001000285a8(0x112dd0250,&UNK_10dca67b0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar4 = FUN_1018d8a88;
  func_0x0001000bdd8c(FUN_1018d8a88,puVar3);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x0001000d224c(&uStack_50);
  uVar2 = 0;
  func_0x0001018de9f8(0);
  func_0x000107c613fc();
  puVar3 = puVar1;
  FUN_1018de9b0(puVar1,&PTR_DAT_11040dd70,pcVar4,uStack_50,uStack_48,uVar2);
  func_0x0001018dec64(0);
  func_0x000107c613fc();
  func_0x0001018dec34(puVar1,&PTR_DAT_11040dd70);
  uVar2 = 0;
  FUN_1018dd270(0);
  func_0x000107c610f8();
  FUN_1018dcec0(puVar3,puVar1,uVar2);
  func_0x000107c61574(pcVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 1018d88f4; end: 1018d88fb;  */

void FUN_1018d88f4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126a7d50;
  func_0x000107c610f8(PTR_PTR_1126a7d50,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_1018dd3f4(0);
  func_0x000107c613fc();
  FUN_1018dd2c0(puVar1,uVar2);
  puVar3 = &UNK_11040da68;
  func_0x000107c613fc(&UNK_11040da68,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112dd0250,&UNK_10dca67b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  pcVar4 = FUN_1018d8a88;
  func_0x0001000bdd8c(FUN_1018d8a88,puVar3);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x0001000d224c(&uStack_50);
  uVar5 = 0;
  func_0x0001018de9f8(0);
  func_0x000107c613fc();
  puVar3 = puVar1;
  FUN_1018de9b0(puVar1,&PTR_DAT_11040dd70,pcVar4,uStack_50,uStack_48,uVar5);
  func_0x0001018dec64(0);
  func_0x000107c613fc();
  func_0x0001018dec34(puVar1,&PTR_DAT_11040dd70);
  uVar5 = 0;
  FUN_1018dd270(0);
  func_0x000107c610f8();
  FUN_1018dcec0(puVar3,puVar1,uVar5);
  func_0x000107c61574(pcVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 1018d88fc; end: 1018d8917;  */

/* WARNING: Possible PIC construction at 0x0001018d8908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d890c) */

void FUN_1018d88fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018d8918; end: 1018d8963;  */

void FUN_1018d8918(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018d8964; end: 1018d8a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d8964(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a478);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083868);
  puVar1 = &UNK_11040da40;
  func_0x000107c613fc(&UNK_11040da40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  func_0x0001000285a8(0x112dd0170,&UNK_10d991820);
  func_0x000107c613fc();
  func_0x000107c61580(uVar5,2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  pcVar2 = FUN_1018d8ab8;
  func_0x0001000bdd8c(FUN_1018d8ab8,puVar1);
  uVar3 = 0;
  func_0x00010020da3c(0);
  func_0x000107c610f8();
  func_0x00010040bb64(pcVar2,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1018d8a5c; end: 1018d8a87;  */

void FUN_1018d8a5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018d8a88; end: 1018d8ab7;  */

void FUN_1018d8a88(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1018d8ab8; end: 1018d8abb;  */

void FUN_1018d8ab8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126a7d50;
  func_0x000107c610f8(PTR_PTR_1126a7d50,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_1018dd3f4(0);
  func_0x000107c613fc();
  FUN_1018dd2c0(puVar1,uVar2);
  puVar3 = &UNK_11040da68;
  func_0x000107c613fc(&UNK_11040da68,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112dd0250,&UNK_10dca67b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  pcVar4 = FUN_1018d8a88;
  func_0x0001000bdd8c(FUN_1018d8a88,puVar3);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x0001000d224c(&uStack_50);
  uVar5 = 0;
  func_0x0001018de9f8(0);
  func_0x000107c613fc();
  puVar3 = puVar1;
  FUN_1018de9b0(puVar1,&PTR_DAT_11040dd70,pcVar4,uStack_50,uStack_48,uVar5);
  func_0x0001018dec64(0);
  func_0x000107c613fc();
  func_0x0001018dec34(puVar1,&PTR_DAT_11040dd70);
  uVar5 = 0;
  FUN_1018dd270(0);
  func_0x000107c610f8();
  FUN_1018dcec0(puVar3,puVar1,uVar5);
  func_0x000107c61574(pcVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 1018d8abc; end: 1018d8d5f;  */

void FUN_1018d8abc(void)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0x112dd0310;
  func_0x0001000285a8(0x112dd0310,&UNK_10d991930);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x10;
  *(undefined8 *)(lVar1 + 0x10) = 8;
  puVar2 = &UNK_11040db28;
  func_0x000107c613fc(&UNK_11040db28,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018d8d60;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000029;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010efbe5f0;
  *(undefined8 *)(lVar1 + 0x30) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(code **)(lVar1 + 0x40) = FUN_1018d9aa4;
  *(undefined **)(lVar1 + 0x48) = puVar2;
  puVar2 = &UNK_11040db50;
  func_0x000107c613fc(&UNK_11040db50,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1018d8e68;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0xd000000000000035;
  *(undefined8 *)(lVar1 + 0x58) = 0x800000010efbe620;
  *(undefined8 *)(lVar1 + 0x60) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0x1018d9aac;
  *(undefined **)(lVar1 + 0x78) = puVar2;
  puVar2 = &UNK_11040db78;
  func_0x000107c613fc(&UNK_11040db78,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018d8fd8;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0xd000000000000021;
  *(undefined8 *)(lVar1 + 0x88) = 0x800000010efbe660;
  *(undefined8 *)(lVar1 + 0x90) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0x1018d9ab0;
  *(undefined **)(lVar1 + 0xa8) = puVar2;
  puVar2 = &UNK_11040dba0;
  func_0x000107c613fc(&UNK_11040dba0,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018d90b0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0xd000000000000026;
  *(undefined8 *)(lVar1 + 0xb8) = 0x800000010efbe690;
  *(undefined8 *)(lVar1 + 0xc0) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0x1018d9ab4;
  *(undefined **)(lVar1 + 0xd8) = puVar2;
  puVar2 = &UNK_11040dbc8;
  func_0x000107c613fc(&UNK_11040dbc8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018d91a0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0xd00000000000001a;
  *(undefined8 *)(lVar1 + 0xe8) = 0x800000010efbe6c0;
  *(undefined8 *)(lVar1 + 0xf0) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0x1018d9ab8;
  *(undefined **)(lVar1 + 0x108) = puVar2;
  puVar2 = &UNK_11040dbf0;
  func_0x000107c613fc(&UNK_11040dbf0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1018d922c;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0xd00000000000002e;
  *(undefined8 *)(lVar1 + 0x118) = 0x800000010efbe6e0;
  *(undefined8 *)(lVar1 + 0x120) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0x1018d9abc;
  *(undefined **)(lVar1 + 0x138) = puVar2;
  puVar2 = &UNK_11040dc18;
  func_0x000107c613fc(&UNK_11040dc18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1018d92d4;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x140) = 0xd000000000000031;
  *(undefined8 *)(lVar1 + 0x148) = 0x800000010efbe710;
  *(undefined8 *)(lVar1 + 0x150) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x158) = 0;
  *(undefined8 *)(lVar1 + 0x160) = 0x1018d9ac0;
  *(undefined **)(lVar1 + 0x168) = puVar2;
  puVar2 = &UNK_11040dc40;
  func_0x000107c613fc(&UNK_11040dc40,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018d937c;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0xd00000000000002c;
  *(undefined8 *)(lVar1 + 0x178) = 0x800000010efbe750;
  *(undefined8 *)(lVar1 + 0x180) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x188) = 0;
  *(undefined8 *)(lVar1 + 400) = 0x1018d9ac4;
  *(undefined **)(lVar1 + 0x198) = puVar2;
  lRam0000000113803450 = lVar1;
  return;
}



/* Entry: 1018d8d60; end: 1018d8fd7;  */

undefined8 FUN_1018d8d60(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  ulong uVar9;
  
  uVar9 = in_x4;
  func_0x0001035ccbec(in_x4,in_x5,in_x6);
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
    bVar1 = true;
  }
  else {
    uVar9 = in_x4;
    uVar5 = in_x5;
    uVar8 = in_x6;
    func_0x0001035ccacc(in_x4,in_x5,in_x6);
    func_0x00010006c090(uVar5,uVar8);
    bVar1 = (long)uVar9 < 1;
    uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar4 = in_x4;
  func_0x0001035cc480(in_x4,in_x5,in_x6);
  if ((uVar4 & 1) == 0) {
    in_x4 = 0;
    bVar2 = true;
  }
  else {
    func_0x0001035cc360(in_x4,in_x5,in_x6);
    func_0x00010006c090(in_x5,in_x6);
    bVar2 = (long)in_x4 < 1;
    in_x4 = in_x4 & ((long)in_x4 >> 0x3f ^ 0xffffffffffffffffU);
  }
  if ((bVar1 || bVar2) || (long)in_x4 < (long)uVar9) {
    return 0;
  }
  func_0x000107c602fc(0x19);
  func_0x000107c61434(0x800000010efbe930);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  puVar7 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  puVar3 = PTR___ss5Int64VN_11034ee50;
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x62207473756d2029,0xec000000203e2065);
  func_0x000107c5fb78(0xd000000000000017,0x800000010efbe8d0);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  func_0x000107c6057c(puVar3,puVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  return 0;
}



/* Entry: 1018d8fd8; end: 1018d90af;  */

undefined8 FUN_1018d8fd8(void)

{
  ulong uVar1;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  uVar1 = in_x4;
  func_0x0001035cc480(in_x4,in_x5,in_x6);
  if ((uVar1 & 1) != 0) {
    func_0x0001035cc360(in_x4,in_x5,in_x6);
    func_0x00010006c090(in_x5,in_x6);
    if (0 < (long)in_x4) {
      return 0;
    }
  }
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010efbe8b0);
  return 0;
}



/* Entry: 1018d90b0; end: 1018d919f;  */

undefined8 FUN_1018d90b0(float param_1)

{
  ulong uVar1;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  uVar1 = in_x4;
  func_0x0001035cb404(in_x4,in_x5,in_x6);
  if ((uVar1 & 1) != 0) {
    func_0x0001035cb2c4(in_x4,in_x5,in_x6);
    func_0x00010006c090();
    if (0.0 < param_1) {
      func_0x0001035cb2c4(in_x4,in_x5,in_x6);
      func_0x00010006c090();
      return 0;
    }
  }
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010efbe8b0);
  return 0;
}



/* Entry: 1018d91a0; end: 1018d937b;  */

undefined8 FUN_1018d91a0(void)

{
  ulong uVar1;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  uVar1 = in_x4;
  func_0x0001035cb784(in_x4,in_x5,in_x6);
  if ((uVar1 & 1) != 0) {
    func_0x0001035cb66c(in_x4,in_x5,in_x6);
    func_0x00010006c090(in_x5,in_x6);
  }
  return 0;
}



/* Entry: 1018d937c; end: 1018d943b;  */

undefined8 FUN_1018d937c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong in_x3;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  uVar1 = in_x4;
  func_0x0001035cb784(in_x4,in_x5,in_x6);
  if ((uVar1 & 1) != 0) {
    uVar1 = in_x4;
    uVar2 = in_x5;
    uVar3 = in_x6;
    func_0x0001035cb66c(in_x4,in_x5,in_x6);
    func_0x00010006c090(uVar2,uVar3);
    if (((uVar1 & 1) != 0) && ((in_x3 & 1) == 0)) {
      func_0x0001035cb5e0(in_x4,in_x5,in_x6);
    }
  }
  return 0;
}



/* Entry: 1018d943c; end: 1018d966f;  */

uint FUN_1018d943c(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    uVar4 = 3;
    func_0x000103559d2c(3,1);
    puVar11 = (undefined1 *)(param_1 + 0x38);
    do {
      uVar1 = *(ulong *)(puVar11 + -0x18);
      uVar2 = *(undefined8 *)(puVar11 + -0x10);
      lVar12 = *(long *)(puVar11 + -8);
      uVar3 = *puVar11;
      uVar5 = uVar1;
      func_0x0001035032c0(uVar1,uVar2,lVar12);
      func_0x000103559d2c();
      if (uVar5 == uVar4) {
        func_0x00010006c00c(uVar1,uVar2);
        func_0x000107c6157c(lVar12);
        func_0x00010006c00c(uVar1,uVar2);
        func_0x000107c6157c(lVar12);
        uVar5 = uVar1;
        uVar7 = uVar2;
        lVar9 = lVar12;
        func_0x0001034e4090(uVar1,uVar2,lVar12);
        func_0x00010006c090(uVar1,uVar2);
        func_0x000107c61574(lVar12);
        uVar6 = uVar5;
        func_0x000103595ff8(uVar5,uVar7,lVar9);
        func_0x00010006c090(uVar5,uVar7);
        func_0x000107c61574(lVar9);
        if ((uVar6 & 1) == 0) {
          func_0x00010006c090(uVar1,uVar2);
          func_0x000107c61574(lVar12);
        }
        else {
          func_0x00010006c00c(uVar1,uVar2);
          func_0x000107c6157c(lVar12);
          uVar5 = uVar1;
          uVar7 = uVar2;
          lVar9 = lVar12;
          func_0x0001034e4090(uVar1);
          func_0x00010006c090(uVar1,uVar2);
          func_0x000107c61574(lVar12);
          uVar6 = uVar5;
          uVar8 = uVar7;
          lVar10 = lVar9;
          func_0x000103595ea4(uVar5);
          func_0x00010006c090(uVar5,uVar7);
          func_0x000107c61574(lVar9);
          uVar5 = uVar1;
          lVar9 = lVar12;
          (*param_3)(uVar1,uVar2,lVar12,uVar3,uVar6,uVar8,lVar10);
          uVar14 = (uint)uVar5;
          func_0x00010006c090(uVar1,uVar2);
          func_0x000107c61574(lVar12);
          func_0x00010006c090(uVar6,uVar8);
          func_0x000107c61574(lVar10);
          if (lVar9 != 0) goto LAB_1018d9644;
        }
      }
      puVar11 = puVar11 + 0x20;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar14 = 1;
LAB_1018d9644:
  return uVar14 & 1;
}



/* Entry: 1018d9670; end: 1018d9907;  */

void FUN_1018d9670(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d9760);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    func_0x0001018dc738();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d9764);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d9768);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x30 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_11040de10);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d976c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1018d9908; end: 1018d9a5f;  */

ulong FUN_1018d9908(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d9a60);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d9a54);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1018d9a60(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d9a58);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d9a5c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x0001018dc554(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1018d9a60; end: 1018d9aa3;  */

void FUN_1018d9a60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcfc78 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c0338;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dcfc78 = puVar1;
  return;
}



/* Entry: 1018d9aa4; end: 1018d9adf;  */

uint FUN_1018d9aa4(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    uVar5 = 3;
    func_0x000103559d2c(3,1);
    puVar12 = (undefined1 *)(param_1 + 0x38);
    do {
      uVar1 = *(ulong *)(puVar12 + -0x18);
      uVar3 = *(undefined8 *)(puVar12 + -0x10);
      lVar13 = *(long *)(puVar12 + -8);
      uVar4 = *puVar12;
      uVar6 = uVar1;
      func_0x0001035032c0(uVar1,uVar3,lVar13);
      func_0x000103559d2c();
      if (uVar6 == uVar5) {
        func_0x00010006c00c(uVar1,uVar3);
        func_0x000107c6157c(lVar13);
        func_0x00010006c00c(uVar1,uVar3);
        func_0x000107c6157c(lVar13);
        uVar6 = uVar1;
        uVar8 = uVar3;
        lVar10 = lVar13;
        func_0x0001034e4090(uVar1,uVar3,lVar13);
        func_0x00010006c090(uVar1,uVar3);
        func_0x000107c61574(lVar13);
        uVar7 = uVar6;
        func_0x000103595ff8(uVar6,uVar8,lVar10);
        func_0x00010006c090(uVar6,uVar8);
        func_0x000107c61574(lVar10);
        if ((uVar7 & 1) == 0) {
          func_0x00010006c090(uVar1,uVar3);
          func_0x000107c61574(lVar13);
        }
        else {
          func_0x00010006c00c(uVar1,uVar3);
          func_0x000107c6157c(lVar13);
          uVar6 = uVar1;
          uVar8 = uVar3;
          lVar10 = lVar13;
          func_0x0001034e4090(uVar1);
          func_0x00010006c090(uVar1,uVar3);
          func_0x000107c61574(lVar13);
          uVar7 = uVar6;
          uVar9 = uVar8;
          lVar11 = lVar10;
          func_0x000103595ea4(uVar6);
          func_0x00010006c090(uVar6,uVar8);
          func_0x000107c61574(lVar10);
          uVar6 = uVar1;
          lVar10 = lVar13;
          (*pcVar2)(uVar1,uVar3,lVar13,uVar4,uVar7,uVar9,lVar11);
          uVar15 = (uint)uVar6;
          func_0x00010006c090(uVar1,uVar3);
          func_0x000107c61574(lVar13);
          func_0x00010006c090(uVar7,uVar9);
          func_0x000107c61574(lVar11);
          if (lVar10 != 0) goto LAB_1018d9644;
        }
      }
      puVar12 = puVar12 + 0x20;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uVar15 = 1;
LAB_1018d9644:
  return uVar15 & 1;
}



/* Entry: 1018d9ae0; end: 1018d9dfb;  */

undefined8 FUN_1018d9ae0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar1 = puVar8[-2];
      uVar2 = puVar8[-1];
      uVar6 = *puVar8;
      func_0x00010006c00c(uVar1,uVar2);
      func_0x000107c6157c(uVar6);
      uVar3 = uVar1;
      func_0x0001035cb784(uVar1,uVar2,uVar6);
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar1;
        uVar4 = uVar2;
        uVar5 = uVar6;
        func_0x0001035cb66c(uVar1,uVar2,uVar6);
        func_0x00010006c090(uVar4,uVar5);
        if ((uVar3 & 1) != 0) {
          uVar3 = uVar1;
          func_0x0001035cc6dc(uVar1,uVar2,uVar6);
          if ((uVar3 & 1) == 0) {
LAB_1018d9bb4:
            func_0x00010006c090(uVar1,uVar2);
            func_0x000107c61574(uVar6);
            return 0;
          }
          uVar3 = uVar1;
          uVar4 = uVar2;
          uVar5 = uVar6;
          func_0x0001035cc5bc(uVar1,uVar2,uVar6);
          func_0x00010006c090(uVar4,uVar5);
          if ((long)uVar3 < 1) goto LAB_1018d9bb4;
        }
      }
      puVar8 = puVar8 + 3;
      func_0x00010006c090(uVar1,uVar2);
      func_0x000107c61574(uVar6);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return 1;
}



/* Entry: 1018d9dfc; end: 1018d9f6b;  */

undefined8
FUN_1018d9dfc(undefined8 param_1,undefined8 param_2,long param_3,char param_4,undefined8 param_5,
             undefined8 param_6,long param_7,char param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((param_4 == '\x01' || param_8 == '\x01') || param_7 < param_3) {
    return 0;
  }
  func_0x000107c602fc(0x19);
  func_0x000107c61434(param_2);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  puVar1 = PTR___ss5Int64VN_11034ee50;
  puVar2 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0x62207473756d2029,0xec000000203e2065);
  func_0x000107c5fb78(param_5,param_6);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  func_0x000107c6057c(puVar1,puVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  return 0;
}



/* Entry: 1018d9f6c; end: 1018da1f3;  */

void FUN_1018d9f6c(void)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0x112dd0310;
  func_0x0001000285a8(0x112dd0310,&UNK_10d991930);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x10;
  *(undefined8 *)(lVar1 + 0x10) = 8;
  *(undefined8 *)(lVar1 + 0x20) = 0xd00000000000003c;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010efbea00;
  *(undefined8 *)(lVar1 + 0x30) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(code **)(lVar1 + 0x40) = FUN_1018da1f4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  puVar2 = &UNK_11040dc68;
  func_0x000107c613fc(&UNK_11040dc68,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018da534;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0xd000000000000029;
  *(undefined8 *)(lVar1 + 0x58) = 0x800000010efbea40;
  *(undefined8 *)(lVar1 + 0x60) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(code **)(lVar1 + 0x70) = FUN_1018db140;
  *(undefined **)(lVar1 + 0x78) = puVar2;
  puVar2 = &UNK_11040dc90;
  func_0x000107c613fc(&UNK_11040dc90,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018da63c;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0xd000000000000025;
  *(undefined8 *)(lVar1 + 0x88) = 0x800000010efbea70;
  *(undefined8 *)(lVar1 + 0x90) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0x1018db148;
  *(undefined **)(lVar1 + 0xa8) = puVar2;
  puVar2 = &UNK_11040dcb8;
  func_0x000107c613fc(&UNK_11040dcb8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018da810;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0xd000000000000018;
  *(undefined8 *)(lVar1 + 0xb8) = 0x800000010efbeaa0;
  *(undefined8 *)(lVar1 + 0xc0) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0x1018db14c;
  *(undefined **)(lVar1 + 0xd8) = puVar2;
  puVar2 = &UNK_11040dce0;
  func_0x000107c613fc(&UNK_11040dce0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1018da8e8;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0xd000000000000030;
  *(undefined8 *)(lVar1 + 0xe8) = 0x800000010efbeac0;
  *(undefined8 *)(lVar1 + 0xf0) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0x1018db150;
  *(undefined **)(lVar1 + 0x108) = puVar2;
  puVar2 = &UNK_11040dd08;
  func_0x000107c613fc(&UNK_11040dd08,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018da9fc;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0xd00000000000001a;
  *(undefined8 *)(lVar1 + 0x118) = 0x800000010efbeb00;
  *(undefined8 *)(lVar1 + 0x120) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0x1018db154;
  *(undefined **)(lVar1 + 0x138) = puVar2;
  puVar2 = &UNK_11040dd30;
  func_0x000107c613fc(&UNK_11040dd30,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018dab04;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x140) = 0xd00000000000001c;
  *(undefined8 *)(lVar1 + 0x148) = 0x800000010efbeb20;
  *(undefined8 *)(lVar1 + 0x150) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x158) = 0;
  *(undefined8 *)(lVar1 + 0x160) = 0x1018db158;
  *(undefined **)(lVar1 + 0x168) = puVar2;
  puVar2 = &UNK_11040dd58;
  func_0x000107c613fc(&UNK_11040dd58,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1018dae04;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0xd00000000000001e;
  *(undefined8 *)(lVar1 + 0x178) = 0x800000010efbeb40;
  *(undefined8 *)(lVar1 + 0x180) = 0x1018deea0;
  *(undefined8 *)(lVar1 + 0x188) = 0;
  *(undefined8 *)(lVar1 + 400) = 0x1018db15c;
  *(undefined **)(lVar1 + 0x198) = puVar2;
  lRam0000000113803458 = lVar1;
  return;
}



/* Entry: 1018da1f4; end: 1018da533;  */

undefined8 FUN_1018da1f4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    uVar3 = 4;
    func_0x000103559d2c(4,1);
    puVar15 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar1 = puVar15[-2];
      uVar2 = puVar15[-1];
      uVar14 = *puVar15;
      uVar4 = uVar1;
      func_0x0001035032c0(uVar1,uVar2,uVar14);
      func_0x000103559d2c();
      if (uVar4 == uVar3) {
        func_0x00010006c00c(uVar1,uVar2);
        func_0x000107c6157c(uVar14);
        func_0x00010006c00c(uVar1,uVar2);
        func_0x000107c6157c(uVar14);
        uVar4 = uVar1;
        uVar7 = uVar2;
        uVar10 = uVar14;
        func_0x0001034e4158();
        func_0x00010006c090(uVar1,uVar2);
        func_0x000107c61574(uVar14);
        uVar5 = uVar4;
        func_0x0001035c6f30(uVar4,uVar7,uVar10);
        if ((uVar5 & 1) == 0) {
          func_0x00010006c090(uVar4,uVar7);
          func_0x000107c61574(uVar10);
          func_0x00010006c090(uVar1,uVar2);
          uVar11 = uVar14;
        }
        else {
          uVar5 = uVar4;
          uVar8 = uVar7;
          uVar11 = uVar10;
          func_0x0001035c6dfc();
          func_0x00010006c090(uVar4,uVar7);
          func_0x000107c61574(uVar10);
          uVar4 = uVar5;
          func_0x00010365237c(uVar5,uVar8,uVar11);
          if ((uVar4 & 1) == 0) {
            func_0x00010006c090(uVar5,uVar8);
LAB_1018da420:
            func_0x000107c61574(uVar11);
            func_0x00010006c090(uVar1,uVar2);
            uVar11 = uVar14;
          }
          else {
            uVar4 = uVar5;
            uVar7 = uVar8;
            uVar10 = uVar11;
            func_0x000103652240(uVar5,uVar8,uVar11);
            uVar6 = uVar4;
            func_0x00010365e5a8();
            if ((uVar6 & 1) == 0) {
              func_0x00010006c090(uVar1,uVar2);
              func_0x000107c61574(uVar14);
              func_0x00010006c090(uVar4,uVar7);
              func_0x000107c61574(uVar10);
            }
            else {
              uVar6 = uVar4;
              uVar9 = uVar7;
              uVar12 = uVar10;
              func_0x00010365e490(uVar4,uVar7,uVar10);
              func_0x00010006c090(uVar9,uVar12);
              if (0 < (int)uVar6) {
                uVar6 = uVar4;
                func_0x00010365ec4c(uVar4,uVar7,uVar10);
                if ((uVar6 & 1) == 0) {
LAB_1018da4d4:
                  func_0x00010006c090(uVar4,uVar7);
                  func_0x000107c61574(uVar10);
                  func_0x00010006c090(uVar5,uVar8);
                  func_0x000107c61574(uVar11);
                  func_0x00010006c090(uVar1,uVar2);
                  func_0x000107c61574(uVar14);
                  return 0;
                }
                uVar6 = uVar4;
                uVar9 = uVar7;
                uVar12 = uVar10;
                func_0x00010365eb2c(uVar4,uVar7,uVar10);
                func_0x00010006c090(uVar9,uVar12);
                if ((long)uVar6 < 1) goto LAB_1018da4d4;
                func_0x00010006c090(uVar4,uVar7);
                func_0x000107c61574(uVar10);
                func_0x00010006c090(uVar5,uVar8);
                goto LAB_1018da420;
              }
              func_0x00010006c090(uVar1,uVar2);
              func_0x000107c61574(uVar14);
              func_0x00010006c090(uVar4,uVar7);
              func_0x000107c61574(uVar10);
            }
            func_0x00010006c090(uVar5,uVar8);
          }
        }
        func_0x000107c61574(uVar11);
      }
      puVar15 = puVar15 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return 1;
}



/* Entry: 1018da534; end: 1018da63b;  */

undefined8 FUN_1018da534(void)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  bool bVar8;
  ulong uVar9;
  
  uVar9 = in_x4;
  func_0x0001035cc88c(in_x4,in_x5,in_x6);
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
    bVar8 = true;
  }
  else {
    uVar9 = in_x4;
    uVar6 = in_x5;
    uVar7 = in_x6;
    func_0x0001035cc76c(in_x4,in_x5,in_x6);
    func_0x00010006c090(uVar6,uVar7);
    bVar8 = (long)uVar9 < 1;
    uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar3 = in_x4;
  func_0x0001035cc6dc(in_x4,in_x5,in_x6);
  if ((uVar3 & 1) == 0) {
    in_x4 = 0;
    bVar1 = true;
  }
  else {
    func_0x0001035cc5bc(in_x4,in_x5,in_x6);
    func_0x00010006c090(in_x5,in_x6);
    bVar1 = (long)in_x4 < 1;
    in_x4 = in_x4 & ((long)in_x4 >> 0x3f ^ 0xffffffffffffffffU);
  }
  if ((bVar8 || bVar1) || (long)in_x4 < (long)uVar9) {
    return 0;
  }
  func_0x000107c602fc(0x19);
  func_0x000107c61434(0x800000010efbec80);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  puVar2 = PTR___ss5Int64VN_11034ee50;
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x62207473756d2029,0xec000000203e2065);
  func_0x000107c5fb78(0xd000000000000017,0x800000010efbeb80);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  func_0x000107c6057c(puVar2,puVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  return 0;
}



/* Entry: 1018da63c; end: 1018da80f;  */

undefined8
FUN_1018da63c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = param_5;
  func_0x0001035cb784(param_5,param_6,param_7);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  func_0x0001035cb66c(param_5,param_6,param_7);
  func_0x00010006c090(param_6,param_7);
  if ((param_5 & 1) == 0) {
    return 0;
  }
  func_0x0001034e4158();
  uVar1 = param_1;
  func_0x0001035c6f30();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    uVar3 = param_2;
    uVar5 = param_3;
    func_0x0001035c6dfc();
    uVar9 = uVar1;
    func_0x00010365237c();
    if ((uVar9 & 1) == 0) {
      uVar9 = 0;
      uVar8 = 0xe000000000000000;
    }
    else {
      uVar2 = uVar1;
      uVar4 = uVar3;
      uVar6 = uVar5;
      func_0x000103652240();
      uVar9 = uVar2;
      uVar8 = uVar4;
      uVar7 = uVar6;
      func_0x00010365e768();
      func_0x00010006c090(uVar2,uVar4);
      func_0x000107c61574(uVar6);
      func_0x00010006c090(uVar7,param_4);
      uVar9 = uVar9 & 0xffffffffffff;
    }
    func_0x000107c6142c(uVar8);
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar9 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar9 == 0) {
      func_0x00010006c090(param_1,param_2);
      func_0x000107c61574(param_3);
      func_0x00010006c090(uVar1,uVar3);
      goto LAB_1018da79c;
    }
    func_0x00010006c090(uVar1,uVar3);
    func_0x000107c61574(uVar5);
  }
  func_0x00010006c090(param_1,param_2);
  uVar5 = param_3;
LAB_1018da79c:
  func_0x000107c61574(uVar5);
  return 0;
}



/* Entry: 1018da810; end: 1018da9fb;  */

undefined8 FUN_1018da810(void)

{
  ulong uVar1;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  uVar1 = in_x4;
  func_0x0001035cc480(in_x4,in_x5,in_x6);
  if ((uVar1 & 1) != 0) {
    func_0x0001035cc360(in_x4,in_x5,in_x6);
    func_0x00010006c090(in_x5,in_x6);
    if (0 < (long)in_x4) {
      return 0;
    }
  }
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010efbe8b0);
  return 0;
}



/* Entry: 1018da9fc; end: 1018dab03;  */

undefined8 FUN_1018da9fc(void)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  bool bVar8;
  ulong uVar9;
  
  uVar9 = in_x4;
  func_0x0001035ccbec(in_x4,in_x5,in_x6);
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
    bVar8 = true;
  }
  else {
    uVar9 = in_x4;
    uVar6 = in_x5;
    uVar7 = in_x6;
    func_0x0001035ccacc(in_x4,in_x5,in_x6);
    func_0x00010006c090(uVar6,uVar7);
    bVar8 = (long)uVar9 < 1;
    uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar3 = in_x4;
  func_0x0001035cc480(in_x4,in_x5,in_x6);
  if ((uVar3 & 1) == 0) {
    in_x4 = 0;
    bVar1 = true;
  }
  else {
    func_0x0001035cc360(in_x4,in_x5,in_x6);
    func_0x00010006c090(in_x5,in_x6);
    bVar1 = (long)in_x4 < 1;
    in_x4 = in_x4 & ((long)in_x4 >> 0x3f ^ 0xffffffffffffffffU);
  }
  if ((bVar8 || bVar1) || (long)in_x4 < (long)uVar9) {
    return 0;
  }
  func_0x000107c602fc(0x19);
  func_0x000107c61434(0x800000010efbe930);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  puVar2 = PTR___ss5Int64VN_11034ee50;
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x62207473756d2029,0xec000000203e2065);
  func_0x000107c5fb78(0xd000000000000017,0x800000010efbe8d0);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  func_0x000107c6057c(puVar2,puVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  return 0;
}



/* Entry: 1018dab04; end: 1018dae03;  */

undefined8
FUN_1018dab04(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  func_0x0001034e4158();
  uVar3 = param_1;
  func_0x0001035c6f30();
  if ((uVar3 & 1) != 0) {
    uVar3 = param_1;
    uVar10 = param_2;
    uVar9 = param_3;
    func_0x0001035c6dfc();
    uVar4 = uVar3;
    func_0x00010365237c();
    if ((uVar4 & 1) == 0) {
      func_0x00010006c090(param_1,param_2);
      func_0x000107c61574(param_3);
      func_0x00010006c090(uVar3,uVar10);
      goto LAB_1018dacbc;
    }
    uVar4 = uVar3;
    uVar11 = uVar10;
    uVar15 = uVar9;
    func_0x000103652240(uVar3,uVar10);
    uVar5 = param_5;
    uVar12 = param_6;
    uVar16 = param_7;
    func_0x0001035cc5bc(param_5,param_6,param_7);
    func_0x00010006c090(uVar12,uVar16);
    uVar6 = uVar4;
    uVar12 = uVar11;
    uVar16 = uVar15;
    func_0x00010365eb2c(uVar4,uVar11,uVar15);
    func_0x00010006c090(uVar12,uVar16);
    uVar7 = uVar4;
    uVar12 = uVar11;
    uVar16 = uVar15;
    func_0x00010365e24c(uVar4,uVar11,uVar15);
    func_0x00010006c090(uVar12,uVar16);
    func_0x0001035cc6dc(param_5,param_6,param_7);
    if (((((param_5 & 1) != 0) && (0 < (long)uVar5)) &&
        (uVar8 = uVar4, func_0x00010365ec4c(uVar4,uVar11,uVar15), (uVar8 & 1) != 0)) &&
       (((0 < (long)uVar6 &&
         (uVar8 = uVar4, func_0x00010365e360(uVar4,uVar11,uVar15), (uVar8 & 1) != 0)) &&
        (0 < (long)uVar7)))) {
      if (SCARRY8(uVar6,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018dae04);
        (*pcVar2)();
      }
      if ((long)(uVar6 + uVar7) <= (long)uVar5) {
        func_0x000107c602fc(0x45);
        func_0x000107c5fb78(0xd00000000000002b,0x800000010efbeba0);
        puVar14 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
        puVar1 = PTR___ss5Int64VN_11034ee50;
        puVar13 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
        func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                            PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar13);
        func_0x000107c5fb78(0xd000000000000015,0x800000010efbebd0);
        func_0x000107c6057c(puVar1,puVar14);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar14);
        func_0x000107c5fb78(0x29,0xe100000000000000);
        func_0x00010006c090(uVar4,uVar11);
        func_0x000107c61574(uVar15);
        func_0x00010006c090(uVar3,uVar10);
        func_0x000107c61574(uVar9);
        func_0x00010006c090(param_1,param_2);
        func_0x000107c61574(param_3);
        return 0;
      }
    }
    func_0x00010006c090(uVar4,uVar11);
    func_0x000107c61574(uVar15);
    func_0x00010006c090(uVar3,uVar10);
    func_0x000107c61574(uVar9);
  }
  func_0x00010006c090(param_1,param_2);
  uVar9 = param_3;
LAB_1018dacbc:
  func_0x000107c61574(uVar9);
  return 0;
}



/* Entry: 1018dae04; end: 1018daf0b;  */

undefined8 FUN_1018dae04(void)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  bool bVar8;
  ulong uVar9;
  
  uVar9 = in_x4;
  func_0x0001035cca3c(in_x4,in_x5,in_x6);
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
    bVar8 = true;
  }
  else {
    uVar9 = in_x4;
    uVar6 = in_x5;
    uVar7 = in_x6;
    func_0x0001035cc91c(in_x4,in_x5,in_x6);
    func_0x00010006c090(uVar6,uVar7);
    bVar8 = (long)uVar9 < 1;
    uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar3 = in_x4;
  func_0x0001035cc6dc(in_x4,in_x5,in_x6);
  if ((uVar3 & 1) == 0) {
    in_x4 = 0;
    bVar1 = true;
  }
  else {
    func_0x0001035cc5bc(in_x4,in_x5,in_x6);
    func_0x00010006c090(in_x5,in_x6);
    bVar1 = (long)in_x4 < 1;
    in_x4 = in_x4 & ((long)in_x4 >> 0x3f ^ 0xffffffffffffffffU);
  }
  if ((bVar8 || bVar1) || (long)in_x4 < (long)uVar9) {
    return 0;
  }
  func_0x000107c602fc(0x19);
  func_0x000107c61434(0x800000010efbeb60);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  puVar2 = PTR___ss5Int64VN_11034ee50;
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x62207473756d2029,0xec000000203e2065);
  func_0x000107c5fb78(0xd000000000000017,0x800000010efbeb80);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  func_0x000107c6057c(puVar2,puVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  return 0;
}



/* Entry: 1018daf0c; end: 1018db13f;  */

uint FUN_1018daf0c(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    uVar4 = 4;
    func_0x000103559d2c(4,1);
    puVar11 = (undefined1 *)(param_1 + 0x38);
    do {
      uVar1 = *(ulong *)(puVar11 + -0x18);
      uVar2 = *(undefined8 *)(puVar11 + -0x10);
      lVar12 = *(long *)(puVar11 + -8);
      uVar3 = *puVar11;
      uVar5 = uVar1;
      func_0x0001035032c0(uVar1,uVar2,lVar12);
      func_0x000103559d2c();
      if (uVar5 == uVar4) {
        func_0x00010006c00c(uVar1,uVar2);
        func_0x000107c6157c(lVar12);
        func_0x00010006c00c(uVar1,uVar2);
        func_0x000107c6157c(lVar12);
        uVar5 = uVar1;
        uVar7 = uVar2;
        lVar9 = lVar12;
        func_0x0001034e4158(uVar1,uVar2,lVar12);
        func_0x00010006c090(uVar1,uVar2);
        func_0x000107c61574(lVar12);
        uVar6 = uVar5;
        func_0x0001035c6a14(uVar5,uVar7,lVar9);
        func_0x00010006c090(uVar5,uVar7);
        func_0x000107c61574(lVar9);
        if ((uVar6 & 1) == 0) {
          func_0x00010006c090(uVar1,uVar2);
          func_0x000107c61574(lVar12);
        }
        else {
          func_0x00010006c00c(uVar1,uVar2);
          func_0x000107c6157c(lVar12);
          uVar5 = uVar1;
          uVar7 = uVar2;
          lVar9 = lVar12;
          func_0x0001034e4158(uVar1);
          func_0x00010006c090(uVar1,uVar2);
          func_0x000107c61574(lVar12);
          uVar6 = uVar5;
          uVar8 = uVar7;
          lVar10 = lVar9;
          func_0x0001035c68e0(uVar5);
          func_0x00010006c090(uVar5,uVar7);
          func_0x000107c61574(lVar9);
          uVar5 = uVar1;
          lVar9 = lVar12;
          (*param_3)(uVar1,uVar2,lVar12,uVar3,uVar6,uVar8,lVar10);
          uVar14 = (uint)uVar5;
          func_0x00010006c090(uVar1,uVar2);
          func_0x000107c61574(lVar12);
          func_0x00010006c090(uVar6,uVar8);
          func_0x000107c61574(lVar10);
          if (lVar9 != 0) goto LAB_1018db114;
        }
      }
      puVar11 = puVar11 + 0x20;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar14 = 1;
LAB_1018db114:
  return uVar14 & 1;
}



/* Entry: 1018db140; end: 1018db15f;  */

uint FUN_1018db140(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    uVar5 = 4;
    func_0x000103559d2c(4,1);
    puVar12 = (undefined1 *)(param_1 + 0x38);
    do {
      uVar1 = *(ulong *)(puVar12 + -0x18);
      uVar3 = *(undefined8 *)(puVar12 + -0x10);
      lVar13 = *(long *)(puVar12 + -8);
      uVar4 = *puVar12;
      uVar6 = uVar1;
      func_0x0001035032c0(uVar1,uVar3,lVar13);
      func_0x000103559d2c();
      if (uVar6 == uVar5) {
        func_0x00010006c00c(uVar1,uVar3);
        func_0x000107c6157c(lVar13);
        func_0x00010006c00c(uVar1,uVar3);
        func_0x000107c6157c(lVar13);
        uVar6 = uVar1;
        uVar8 = uVar3;
        lVar10 = lVar13;
        func_0x0001034e4158(uVar1,uVar3,lVar13);
        func_0x00010006c090(uVar1,uVar3);
        func_0x000107c61574(lVar13);
        uVar7 = uVar6;
        func_0x0001035c6a14(uVar6,uVar8,lVar10);
        func_0x00010006c090(uVar6,uVar8);
        func_0x000107c61574(lVar10);
        if ((uVar7 & 1) == 0) {
          func_0x00010006c090(uVar1,uVar3);
          func_0x000107c61574(lVar13);
        }
        else {
          func_0x00010006c00c(uVar1,uVar3);
          func_0x000107c6157c(lVar13);
          uVar6 = uVar1;
          uVar8 = uVar3;
          lVar10 = lVar13;
          func_0x0001034e4158(uVar1);
          func_0x00010006c090(uVar1,uVar3);
          func_0x000107c61574(lVar13);
          uVar7 = uVar6;
          uVar9 = uVar8;
          lVar11 = lVar10;
          func_0x0001035c68e0(uVar6);
          func_0x00010006c090(uVar6,uVar8);
          func_0x000107c61574(lVar10);
          uVar6 = uVar1;
          lVar10 = lVar13;
          (*pcVar2)(uVar1,uVar3,lVar13,uVar4,uVar7,uVar9,lVar11);
          uVar15 = (uint)uVar6;
          func_0x00010006c090(uVar1,uVar3);
          func_0x000107c61574(lVar13);
          func_0x00010006c090(uVar7,uVar9);
          func_0x000107c61574(lVar11);
          if (lVar10 != 0) goto LAB_1018db114;
        }
      }
      puVar12 = puVar12 + 0x20;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uVar15 = 1;
LAB_1018db114:
  return uVar15 & 1;
}



/* Entry: 1018db160; end: 1018db1d7;  */

/* WARNING: Possible PIC construction at 0x0001018db1c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018db1c4) */

void FUN_1018db160(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x64695f656c7572;
  func_0x000107c5fadc(0x64695f656c7572,0xe700000000000000);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c54984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018db1d8; end: 1018db2d3; -[_TtC27UnifiedAdTrackValidatorImpl31SCAUnifiedAdTrackValidationItem setRuleId:] */

/* WARNING: Possible PIC construction at 0x0001018db23c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018db240) */

void FUN_1018db1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = 0x64695f656c7572;
  func_0x000107c5fadc(0x64695f656c7572,0xe700000000000000);
  func_0x000107c54984(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018db2d4; end: 1018db357; -[_TtC27UnifiedAdTrackValidatorImpl31SCAUnifiedAdTrackValidationItem setMessage:] */

/* WARNING: Possible PIC construction at 0x0001018db338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018db33c) */

void FUN_1018db2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = 0x6567617373656d;
  func_0x000107c5fadc(0x6567617373656d,0xe700000000000000);
  func_0x000107c54984(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018db358; end: 1018db3ff; -[_TtC27UnifiedAdTrackValidatorImpl31SCAUnifiedAdTrackValidationItem getFieldNumberToFieldDict] */

void FUN_1018db358(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c61174();
  lVar5 = param_1;
  func_0x000107c402bc();
  func_0x000107c61180();
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___ss11AnyHashableVSHsWP_11034e450;
  puVar1 = PTR___ss11AnyHashableVN_11034e448;
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar5);
    lVar5 = lVar6;
    func_0x000107c5f9dc(lVar6,puVar1,puVar3 + 8,puVar2);
    func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1018db400);
  (*pcVar4)();
}



/* Entry: 1018db400; end: 1018db50f; -[_TtC27UnifiedAdTrackValidatorImpl31SCAUnifiedAdTrackValidationItem toProtoWithAllowedFields:] */

void FUN_1018db400(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    func_0x000107c61174(param_1);
    lVar4 = 0;
  }
  else {
    param_2 = 0;
    func_0x0001002ed07c(0);
    uVar1 = param_2;
    func_0x000100120cb0();
    func_0x000107c5fe10(param_3,param_2,uVar1);
    func_0x000107c61174(param_1);
    lVar4 = param_3;
    func_0x000107c5fe08(param_3,param_2,uVar1);
  }
  lVar2 = param_1;
  func_0x000107c5cb18();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_3);
    lVar4 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5ee30(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_3);
    func_0x000107c61170(lVar2);
    lVar4 = lVar3;
    func_0x000107c5ee20(lVar3,param_2);
    func_0x00010006c090(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1018db510; end: 1018db52f;  */

void FUN_1018db510(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb080);
  return;
}



/* Entry: 1018db530; end: 1018db573; -[_TtC27UnifiedAdTrackValidatorImpl31SCAUnifiedAdTrackValidationItem initWithDrainNestedObjects:] */

void FUN_1018db530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1018db510();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithDrainNestedObjects__1125e1308,param_3);
  return;
}



/* Entry: 1018db574; end: 1018db5af; -[_TtC27UnifiedAdTrackValidatorImpl31SCAUnifiedAdTrackValidationItem init] */

void FUN_1018db574(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1018db510();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018db5b0; end: 1018db5df;  */

void FUN_1018db5b0(void)

{
  FUN_1018db510();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018db5e0; end: 1018db60b; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult getEventName] */

void FUN_1018db5e0(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010efbece0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018db60c; end: 1018db613; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult getEventQoS] */

undefined8 FUN_1018db60c(void)

{
  return 2;
}



/* Entry: 1018db614; end: 1018db61f; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult getPerUserSamplingRate] */

undefined8 FUN_1018db614(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 1018db620; end: 1018db62b; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult getPerUserSamplingRateV2] */

undefined8 FUN_1018db620(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 1018db62c; end: 1018db69f;  */

/* WARNING: Possible PIC construction at 0x0001018db688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018db68c) */

void FUN_1018db62c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x64695f6461;
  func_0x000107c5fadc(0x64695f6461,0xe500000000000000);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c54984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018db6a0; end: 1018db797; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult setAdId:] */

/* WARNING: Possible PIC construction at 0x0001018db700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018db704) */

void FUN_1018db6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = 0x64695f6461;
  func_0x000107c5fadc(0x64695f6461,0xe500000000000000);
  func_0x000107c54984(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018db798; end: 1018db897; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult setItems:] */

/* WARNING: Possible PIC construction at 0x0001018db7f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018db7fc) */

void FUN_1018db798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = 0x736d657469;
  func_0x000107c5fadc(0x736d657469,0xe500000000000000);
  func_0x000107c54984(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018db898; end: 1018db99f; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult setValidationPassed:] */

/* WARNING: Possible PIC construction at 0x0001018db908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018db90c) */

void FUN_1018db898(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efbed10);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54984(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018db9a0; end: 1018dba23; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult setAdType:] */

/* WARNING: Possible PIC construction at 0x0001018dba04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018dba08) */

void FUN_1018db9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = 0x657079745f6461;
  func_0x000107c5fadc(0x657079745f6461,0xe700000000000000);
  func_0x000107c54984(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018dba24; end: 1018dbaaf;  */

/* WARNING: Possible PIC construction at 0x0001018dba94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018dba98) */

void FUN_1018dba24(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x6e6f697461727564;
  func_0x000107c5fadc(0x6e6f697461727564,0xeb00000000736d5f);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c54984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018dbab0; end: 1018dbb4b; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult setDurationMs:] */

/* WARNING: Possible PIC construction at 0x0001018dbb28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018dbb2c) */

void FUN_1018dbab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0x6e6f697461727564;
  func_0x000107c5fadc(0x6e6f697461727564,0xeb00000000736d5f);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c54984(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018dbb4c; end: 1018dbdff;  */

void FUN_1018dbb4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puStack_a0 = (undefined *)0x736d657469;
  uStack_98 = 0xe500000000000000;
  ppuVar5 = &puStack_a0;
  func_0x000107c6061c(ppuVar5,PTR___sSSN_11034da80);
  lVar6 = param_1;
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(ppuVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&puStack_a0,lVar6);
    func_0x000107c615e8(lVar6);
  }
  uStack_78 = uStack_98;
  puStack_80 = puStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    ppuVar5 = &puStack_80;
    func_0x00010006e7f4();
  }
  else {
    uVar7 = 0x112dd0350;
    func_0x0001000285a8(0x112dd0350,&UNK_10d9918e8);
    ppuVar5 = &puStack_b8;
    func_0x000107c6147c(ppuVar5,&puStack_80,PTR___sypN_11034f1a8 + 8,uVar7,6);
    if (((ulong)ppuVar5 & 1) != 0) {
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      if ((ulong)puStack_b8 >> 0x3e == 0) {
        puVar12 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
        puVar1 = PTR___ss11AnyHashableVN_11034e448;
        puVar2 = PTR___ss11AnyHashableVSHsWP_11034e450;
      }
      else {
        puVar12 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_b8) {
          puVar12 = puStack_b8;
        }
        func_0x000107c60480();
        puVar1 = PTR___ss11AnyHashableVN_11034e448;
        puVar2 = PTR___ss11AnyHashableVSHsWP_11034e450;
      }
      PTR___ss11AnyHashableVN_11034e448 = puVar1;
      PTR___ss11AnyHashableVSHsWP_11034e450 = puVar2;
      if (puVar12 != (undefined *)0x0) {
        if ((long)puVar12 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018dbe00);
          (*pcVar4)();
        }
        puVar13 = (undefined *)0x0;
        do {
          if (((ulong)puStack_b8 & 0xc000000000000001) == 0) {
            puVar9 = *(undefined **)(puStack_b8 + (long)puVar13 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar9 = puVar13;
            FUN_1018dc3b0(puVar13,puStack_b8);
          }
          puVar10 = puVar9;
          func_0x000107c3e1c4();
          func_0x000107c61180();
          puVar3 = PTR___sypN_11034f1a8;
          puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
          if (puVar10 != (undefined *)0x0) {
            puVar8 = puVar10;
            func_0x000107c5f9e8();
            func_0x000107c61170(puVar10);
          }
          puVar13 = puVar13 + 1;
          puVar10 = puVar8;
          func_0x000107c5f9dc(puVar8,puVar1,puVar3 + 8,puVar2);
          func_0x000107c6142c(puVar8);
          func_0x000107c3d798(ppuVar5);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar10);
        } while (puVar12 != puVar13);
      }
      func_0x000107c6142c(puStack_b8);
      puStack_80 = (undefined *)0x736d657469;
      uStack_78 = 0xe500000000000000;
      func_0x000107c61174();
      ppuVar11 = &puStack_80;
      func_0x000107c6061c(ppuVar11,PTR___sSSN_11034da80);
      func_0x000107c3ac78(param_1);
      func_0x000107c615e8(ppuVar11);
      func_0x000107c61170(ppuVar5);
      func_0x000107c61170();
    }
  }
  FUN_1018dbe00();
  ppuStack_a8 = ppuVar5;
  func_0x000107c61154(auStack_b0,PTR_s_prepareDictionary__11261fec0,param_1);
  return;
}



/* Entry: 1018dbe00; end: 1018dbe1f;  */

void FUN_1018dbe00(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb140);
  return;
}



/* Entry: 1018dbe20; end: 1018dbe6f; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult prepareDictionary:] */

/* WARNING: Possible PIC construction at 0x0001018dbe58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018dbe5c) */

void FUN_1018dbe20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018dbb4c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018dbe70; end: 1018dbf17; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult getFieldNumberToFieldDict] */

void FUN_1018dbe70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c61174();
  lVar5 = param_1;
  func_0x000107c402bc();
  func_0x000107c61180();
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___ss11AnyHashableVSHsWP_11034e450;
  puVar1 = PTR___ss11AnyHashableVN_11034e448;
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar5);
    lVar5 = lVar6;
    func_0x000107c5f9dc(lVar6,puVar1,puVar3 + 8,puVar2);
    func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1018dbf18);
  (*pcVar4)();
}



/* Entry: 1018dbf18; end: 1018dc22b;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1018dbf18(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 auStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar18 = unaff_x20;
  func_0x000107c44078();
  func_0x000107c61180();
  lVar15 = lVar18;
  func_0x000107c5f9e8();
  func_0x000107c61170(lVar18);
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar19 = -1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uVar19 < 0x40) {
    uVar14 = ~(-1L << (-uVar19 & 0x3f));
  }
  uVar14 = uVar14 & *puVar17;
  func_0x000107c61434(lVar15);
  puVar2 = PTR___sSiN_11034deb0;
  lVar18 = 0;
  lVar11 = lVar18;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (uVar14 != 0) {
      uVar1 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      func_0x0001007bbd18(*(long *)(lVar15 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                          lVar18 * 0xa00,&uStack_88);
      uStack_b8 = uStack_80;
      uStack_c0 = uStack_88;
      uStack_a8 = uStack_70;
      uStack_b0 = uStack_78;
      uStack_a0 = uStack_68;
      puVar6 = auStack_98;
      func_0x000107c6147c(puVar6,&uStack_c0,PTR___ss11AnyHashableVN_11034e448,puVar2,6);
      uVar3 = auStack_98[0];
      lVar11 = lVar18;
      if ((int)puVar6 != 0) {
        puVar7 = puVar9;
        func_0x000107c61558();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          func_0x000101755b54(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          func_0x000101755b54(puVar9,uVar1 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar9 + uVar1 * 8 + 0x20) = uVar3;
      }
    }
    bVar5 = SCARRY8(lVar18,1);
    lVar18 = lVar18 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018dc228);
      (*pcVar4)();
    }
    if ((long)(0x3f - uVar19 >> 6) <= lVar18) break;
    uVar14 = puVar17[lVar18];
  }
  func_0x000107c6142c(lVar15);
  FUN_1018dc54c(lVar15,puVar17,~uVar19,lVar11,0);
  if (*(long *)(puVar9 + 0x10) == 0) {
    lVar18 = 0;
  }
  else {
    lVar15 = *(long *)(puVar9 + 0x20);
    lVar11 = *(long *)(puVar9 + 0x10) + -1;
    lVar18 = lVar15;
    if (lVar11 != 0) {
      plVar12 = (long *)(puVar9 + 0x28);
      lVar16 = lVar15;
      do {
        lVar13 = *plVar12;
        lVar18 = lVar13;
        if (lVar13 <= lVar15) {
          lVar18 = lVar16;
        }
        if (lVar15 <= lVar13) {
          lVar15 = lVar13;
        }
        lVar11 = lVar11 + -1;
        plVar12 = plVar12 + 1;
        lVar16 = lVar18;
      } while (lVar11 != 0);
    }
  }
  func_0x000107c6142c(puVar9);
  if (!SCARRY8(lVar18,7)) {
    if (param_1 != 0) {
      puVar17 = (ulong *)0x0;
      FUN_1018dce40(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar10 = puVar17;
      func_0x000100120cb0();
      func_0x000107c5fe08(param_1,puVar17,puVar10);
    }
    func_0x000107c5cb18();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (unaff_x20 == 0) {
      lVar18 = 0;
      puVar17 = (ulong *)0xf000000000000000;
    }
    else {
      lVar18 = unaff_x20;
      func_0x000107c5ee30(unaff_x20);
      func_0x000107c61170(unaff_x20);
    }
    auVar20._8_8_ = puVar17;
    auVar20._0_8_ = lVar18;
    return auVar20;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1018dc22c);
  (*pcVar4)();
}



/* Entry: 1018dc22c; end: 1018dc2f7; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult toProtoWithAllowedFields:] */

void FUN_1018dc22c(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_2 = 0;
    FUN_1018dce40(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar1 = param_2;
    func_0x000100120cb0();
    func_0x000107c5fe10(param_3,param_2,uVar1);
  }
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  FUN_1018dbf18(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  if (param_2 >> 0x3c < 0xf) {
    lVar3 = lVar2;
    func_0x000107c5ee20(lVar2,param_2);
    func_0x0001000b44c0(lVar2,param_2);
  }
  else {
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1018dc2f8; end: 1018dc2ff; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult getPayloadIdentifier] */

undefined8 FUN_1018dc2f8(void)

{
  return 0;
}



/* Entry: 1018dc300; end: 1018dc343; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult initWithDrainNestedObjects:] */

void FUN_1018dc300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1018dbe00();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithDrainNestedObjects__1125e1308,param_3);
  return;
}



/* Entry: 1018dc344; end: 1018dc37f; -[_TtC27UnifiedAdTrackValidatorImpl33SCAUnifiedAdTrackValidationResult init] */

void FUN_1018dc344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1018dbe00();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018dc380; end: 1018dc3af;  */

void FUN_1018dc380(void)

{
  FUN_1018dbe00();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018dc3b0; end: 1018dc54b;  */

ulong FUN_1018dc3b0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018dc480);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018dc484);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1018db510(0);
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
    FUN_1018db510(0);
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
  func_0x000107c5fb78(0xd00000000000001f,0x800000010efbed30);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018dc54c);
  (*pcVar2)();
}



/* Entry: 1018dc54c; end: 1018dc57b;  */

void FUN_1018dc54c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1018dc57c; end: 1018dca77;  */

ulong FUN_1018dc57c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018dc660);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018dc664);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1018dce40(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018dc738);
  (*pcVar2)();
}



/* Entry: 1018dca78; end: 1018dcb9f;  */

ulong FUN_1018dca78(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018dcba0);
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
  FUN_1018dcca8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018dcb9c);
      (*pcVar1)();
    }
    FUN_1018dcd28(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1018dcba0; end: 1018dcca7;  */

undefined * FUN_1018dcba0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018dcca8);
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
    puVar3 = (undefined *)0x112dd0380;
    func_0x0001000285a8(0x112dd0380,&UNK_10d991918);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11040df18);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1018dcca8; end: 1018dcd27;  */

undefined * FUN_1018dcca8(undefined *param_1,undefined *param_2)

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
    FUN_1018dea18();
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



/* Entry: 1018dcd28; end: 1018dce3f;  */

long FUN_1018dcd28(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018dce3c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018dce40);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1018dce40(0,0x112dcfc78,&PTR_PTR_1126c0338);
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
      FUN_1018dce40(0,0x112dcfc78,&PTR_PTR_1126c0338);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018dce38);
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



/* Entry: 1018dce40; end: 1018dce7f;  */

void FUN_1018dce40(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1018dce80; end: 1018dcebf;  */

void FUN_1018dce80(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1018dcec0(param_1,param_2);
  return;
}



/* Entry: 1018dcec0; end: 1018dcfff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018dcec0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112dd0398;
  uVar2 = 0x112dd0310;
  func_0x0001000285a8(0x112dd0310,&UNK_10d991930);
  func_0x000107c61538();
  if (lRam0000000112dd0318 != -1) {
    func_0x000107c61568(0x112dd0318,FUN_1018d8abc);
  }
  func_0x000107c61434(uRam0000000113803450);
  FUN_1018d9670();
  if (lRam0000000112dd0320 != -1) {
    func_0x000107c61568(0x112dd0320,FUN_1018d9f6c);
  }
  func_0x000107c61434(uRam0000000113803458);
  FUN_1018d9670();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dd03a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dd03a8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018dd000; end: 1018dd147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1018dd000(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  double dVar8;
  
  uVar3 = param_3;
  func_0x000107c61174();
  lVar7 = param_2;
  FUN_1018dd414();
  func_0x000107c61170(param_2);
  func_0x000107c60734();
  lVar1 = *(long *)(unaff_x20 + _DAT_112dd0398);
  lVar4 = lVar7;
  uVar6 = uVar3;
  dVar8 = param_1;
  FUN_1018ddeb0(lVar1,lVar7,uVar3);
  lVar5 = lVar4;
  func_0x000107c60734();
  dVar8 = (dVar8 - param_1) * 1000.0;
  lVar2 = lVar7;
  FUN_1018df520(lVar7);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(lVar7);
  FUN_1018de070(dVar8,lVar1,lVar4,uVar6,lVar2,lVar5,param_3,param_4);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c61434(lVar1);
    func_0x0001018de43c(dVar8);
    func_0x000107c6142c(lVar5);
    lVar5 = lVar1;
  }
  func_0x000107c6142c(lVar5);
  lVar7 = *(long *)(lVar1 + 0x10);
  func_0x000107c6142c(lVar1);
  return lVar7 == 0;
}



/* Entry: 1018dd148; end: 1018dd1c7; -[_TtC27UnifiedAdTrackValidatorImpl23UnifiedAdTrackValidator validateTrackRequest:adIdentifier:] */

uint FUN_1018dd148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1018dd000(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 1018dd1c8; end: 1018dd227; -[_TtC27UnifiedAdTrackValidatorImpl23UnifiedAdTrackValidator init] */

void FUN_1018dd1c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnifiedAdTrackValidatorImpl.UnifiedAdTrackValidator",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018dd1f4);
  (*pcVar1)();
}



/* Entry: 1018dd228; end: 1018dd26f; -[_TtC27UnifiedAdTrackValidatorImpl23UnifiedAdTrackValidator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018dd254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018dd258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018dd228(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dd0398));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dd03a0));
  return;
}



/* Entry: 1018dd270; end: 1018dd28f;  */

void FUN_1018dd270(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb218);
  return;
}



/* Entry: 1018dd290; end: 1018dd2bf;  */

void FUN_1018dd290(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1018dd2c0; end: 1018dd2cb;  */

void FUN_1018dd2c0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1018dd2cc; end: 1018dd2ef;  */

void FUN_1018dd2cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018dd2f0; end: 1018dd35f;  */

/* WARNING: Possible PIC construction at 0x0001018dd344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018dd348) */

void FUN_1018dd2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000105478604(uVar1,param_1,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018dd360; end: 1018dd377;  */

void FUN_1018dd360(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11088b948,&uStack_40,param_1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1018dd378; end: 1018dd3db;  */

/* WARNING: Possible PIC construction at 0x0001018dd3c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018dd3c8) */

void FUN_1018dd378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000105478924(uVar1,param_1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018dd3dc; end: 1018dd3f3;  */

void FUN_1018dd3dc(void)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11088ba38,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1018dd3f4; end: 1018dd413;  */

void FUN_1018dd3f4(void)

{
  func_0x000107c61168(&PTR_PTR_112dd0418);
  return;
}



/* Entry: 1018dd414; end: 1018dde2f;  */

/* WARNING: Removing unreachable block (ram,0x0001018dd808) */
/* WARNING: Removing unreachable block (ram,0x0001018dd8e0) */
/* WARNING: Removing unreachable block (ram,0x0001018dd910) */

undefined1  [16] FUN_1018dd414(long param_1,undefined8 *****param_2,undefined8 *****param_3)

{
  long *plVar1;
  undefined8 *****pppppuVar2;
  undefined *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 *****pppppuVar27;
  undefined *puVar28;
  ulong uVar29;
  undefined8 *****pppppuVar30;
  undefined8 uVar31;
  undefined8 ****ppppuVar32;
  long lVar33;
  undefined8 *****pppppuVar34;
  undefined8 *puVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  undefined *puStack_f0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c49928();
  func_0x000107c61180();
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pppppuVar9 = (undefined8 *****)puVar19;
  if (param_1 != 0) {
    ppppuStack_90 = (undefined8 *****)0x0;
    param_3 = (undefined8 *****)0x0;
    FUN_1018dde70(0,0x112dcfbf8,&PTR_PTR_1126c0340);
    param_2 = &ppppuStack_90;
    func_0x000107c5fc50(param_1);
    func_0x000107c61170(param_1);
    ppppuVar4 = ppppuStack_90;
    if ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0) {
      ppppuStack_90 = (undefined8 ****)puVar19;
      pppppuVar34 = (undefined8 *****)((ulong)ppppuVar4 & 0xffffffffffffff8);
      if ((ulong)ppppuVar4 >> 0x3e == 0) {
        pppppuVar30 = (undefined8 *****)pppppuVar34[2];
      }
      else {
        pppppuVar30 = (undefined8 *****)ppppuVar4;
        if (-1 < (long)ppppuVar4) {
          pppppuVar30 = pppppuVar34;
        }
        func_0x000107c60480();
      }
      if (pppppuVar30 != (undefined8 *****)0x0) {
        ppppuVar32 = (undefined8 ****)0x0;
        do {
          if (((ulong)ppppuVar4 & 0xc000000000000001) == 0) {
            if (pppppuVar34[2] <= ppppuVar32) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dda70);
              (*pcVar7)();
            }
            ppppuVar10 = (undefined8 ****)ppppuVar4[(long)ppppuVar32 + 4];
            func_0x000107c61174();
          }
          else {
            ppppuVar10 = ppppuVar32;
            param_2 = (undefined8 *****)ppppuVar4;
            func_0x0001018dc568();
          }
          pppppuVar14 = (undefined8 *****)((long)ppppuVar32 + 1);
          if (SCARRY8((long)ppppuVar32,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dda6c);
            (*pcVar7)();
          }
          ppppuVar11 = ppppuVar10;
          func_0x000107c4a7d8();
          func_0x000107c61180();
          pppppuVar9 = (undefined8 *****)puVar19;
          if (ppppuVar11 == (undefined8 ****)0x0) {
            func_0x000107c61170(ppppuVar10);
          }
          else {
            ppppuStack_a8 = (undefined8 *****)0x0;
            param_3 = (undefined8 *****)0x0;
            FUN_1018dde70(0,0x112dcfc78,&PTR_PTR_1126c0338);
            param_2 = &ppppuStack_a8;
            func_0x000107c5fc50(ppppuVar11);
            func_0x000107c61170(ppppuVar11);
            ppppuVar11 = ppppuStack_a8;
            func_0x000107c61170(ppppuVar10);
            if ((undefined8 *****)ppppuVar11 != (undefined8 *****)0x0) {
              pppppuVar9 = (undefined8 *****)ppppuVar11;
            }
          }
          func_0x0001018d976c(pppppuVar9);
          ppppuVar32 = (undefined8 ****)((long)ppppuVar32 + 1);
          pppppuVar9 = (undefined8 *****)ppppuStack_90;
        } while (pppppuVar14 != pppppuVar30);
      }
      func_0x000107c6142c(ppppuVar4);
    }
  }
  pppppuVar34 = (undefined8 *****)((ulong)pppppuVar9 & 0xffffffffffffff8);
  if ((ulong)pppppuVar9 >> 0x3e == 0) {
    pppppuVar30 = (undefined8 *****)pppppuVar34[2];
    puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppppuVar30 = pppppuVar34;
    if ((undefined8 *****)0x7fffffffffffffff < pppppuVar9) {
      pppppuVar30 = pppppuVar9;
    }
    func_0x000107c60480();
    puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puStack_f0;
  if (pppppuVar30 != (undefined8 *****)0x0) {
    pppppuVar14 = (undefined8 *****)0x0;
    do {
      while( true ) {
        if (((ulong)pppppuVar9 & 0xc000000000000001) == 0) {
          if (pppppuVar34[2] <= pppppuVar14) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dda68);
            (*pcVar7)();
          }
          pppppuVar12 = (undefined8 *****)pppppuVar9[(long)((long)pppppuVar14 + 4)];
          func_0x000107c61174();
        }
        else {
          pppppuVar12 = pppppuVar14;
          param_2 = pppppuVar9;
          func_0x0001018dc554();
        }
        pppppuVar2 = (undefined8 *****)((long)pppppuVar14 + 1);
        if (SCARRY8((long)pppppuVar14,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dda64);
          (*pcVar7)();
        }
        pppppuVar27 = pppppuVar12;
        func_0x000107c45224();
        func_0x000107c61180();
        if (pppppuVar27 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dde28);
          (*pcVar7)();
        }
        pppppuVar13 = pppppuVar27;
        func_0x000107c41214();
        func_0x000107c61180();
        func_0x000107c61170(pppppuVar27);
        if (pppppuVar13 != (undefined8 *****)0x0) break;
        func_0x000107c61170(pppppuVar12);
        pppppuVar14 = (undefined8 *****)((long)pppppuVar14 + 1);
        if (pppppuVar2 == pppppuVar30) goto LAB_1018ddaa0;
      }
      pppppuVar14 = pppppuVar13;
      func_0x000107c5ee30();
      func_0x000107c61170(pppppuVar13);
      uStack_70 = 0;
      uStack_88 = 0;
      ppppuStack_90 = (undefined8 *****)0x0;
      uStack_78 = 0;
      uStack_80 = 0;
      pppppuVar27 = pppppuVar14;
      pppppuVar13 = param_2;
      func_0x00010006c00c();
      func_0x0001034e5fa0();
      uVar6 = (uint)((ulong)param_2 >> 0x20);
      uVar25 = uVar6 >> 0x1e;
      ppppuStack_a8 = pppppuVar27;
      ppppuStack_a0 = pppppuVar13;
      ppppuStack_98 = param_3;
      if (uVar6 >> 0x1e < 2) {
        if (uVar25 == 0) {
          auStack_c0[0] = SUB81(pppppuVar14,0);
          auStack_c0[1] = (undefined1)((ulong)pppppuVar14 >> 8);
          auStack_c0[2] = (undefined1)((ulong)pppppuVar14 >> 0x10);
          auStack_c0[3] = (undefined1)((ulong)pppppuVar14 >> 0x18);
          auStack_c0[4] = (undefined1)((ulong)pppppuVar14 >> 0x20);
          auStack_c0[5] = (undefined1)((ulong)pppppuVar14 >> 0x28);
          auStack_c0[6] = (undefined1)((ulong)pppppuVar14 >> 0x30);
          auStack_c0[7] = (undefined1)((ulong)pppppuVar14 >> 0x38);
          auStack_c0[8] = SUB81(param_2,0);
          auStack_c0[9] = (undefined1)((ulong)param_2 >> 8);
          auStack_c0[10] = (undefined1)((ulong)param_2 >> 0x10);
          auStack_c0[0xb] = (undefined1)((ulong)param_2 >> 0x18);
          auStack_c0[0xc] = (undefined1)((ulong)param_2 >> 0x20);
          auStack_c0[0xd] = (undefined1)((ulong)param_2 >> 0x28);
          puVar20 = auStack_c0 + ((ulong)param_2 >> 0x30 & 0xff);
          FUN_1018dde30();
LAB_1018dd7f8:
          param_3 = &ppppuStack_90;
          func_0x00010006ae80(auStack_c0,puVar20,param_3,0,100,0,&UNK_11065d640,pppppuVar27);
        }
        else {
          lVar33 = (long)(int)pppppuVar14;
          pppppuVar13 = (undefined8 *****)(((long)pppppuVar14 >> 0x20) - lVar33);
          if ((long)pppppuVar14 >> 0x20 < lVar33) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dda74);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          if (pppppuVar27 == (undefined8 *****)0x0) {
            func_0x000107c5ec38();
            puVar19 = (undefined *)0x0;
            pppppuVar15 = pppppuVar27;
            puVar28 = (undefined *)0x0;
          }
          else {
            pppppuVar15 = pppppuVar27;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar33,(long)pppppuVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dda80);
              (*pcVar7)();
            }
            puVar3 = (undefined *)((lVar33 - (long)pppppuVar15) + (long)pppppuVar27);
            func_0x000107c5ec38();
            pppppuVar27 = pppppuVar15;
            if ((long)pppppuVar13 <= (long)pppppuVar15) {
              pppppuVar27 = pppppuVar13;
            }
            puVar19 = (undefined *)0x0;
            if (puVar3 != (undefined *)0x0) {
              puVar19 = puVar3;
            }
            puVar28 = (undefined *)0x0;
            if (puVar3 != (undefined *)0x0) {
              puVar28 = (undefined *)((long)pppppuVar27 + (long)puVar3);
            }
          }
          FUN_1018dde30();
          param_3 = &ppppuStack_90;
          func_0x00010006ae80(puVar19,puVar28,param_3,0,100,0,&UNK_11065d640,pppppuVar15);
        }
      }
      else {
        if (uVar25 != 2) {
          FUN_1018dde30();
          auStack_c0[0] = 0;
          auStack_c0[1] = 0;
          auStack_c0[2] = 0;
          auStack_c0[3] = 0;
          auStack_c0[4] = 0;
          auStack_c0[5] = 0;
          auStack_c0[6] = 0;
          auStack_c0[7] = 0;
          auStack_c0[8] = 0;
          auStack_c0[9] = 0;
          auStack_c0[10] = 0;
          auStack_c0[0xb] = 0;
          auStack_c0[0xc] = 0;
          auStack_c0[0xd] = 0;
          puVar20 = auStack_c0;
          goto LAB_1018dd7f8;
        }
        ppppuVar4 = pppppuVar14[2];
        ppppuVar32 = pppppuVar14[3];
        func_0x000107c5ec30();
        pppppuVar13 = pppppuVar27;
        if (pppppuVar27 == (undefined8 *****)0x0) {
          puVar19 = (undefined *)0x0;
        }
        else {
          func_0x000107c5ec3c();
          if (SBORROW8((long)ppppuVar4,(long)pppppuVar13)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dda7c);
            (*pcVar7)();
          }
          puVar19 = (undefined *)(((long)ppppuVar4 - (long)pppppuVar13) + (long)pppppuVar27);
        }
        if (SBORROW8((long)ppppuVar32,(long)ppppuVar4)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dda78);
          (*pcVar7)();
        }
        pppppuVar27 = (undefined8 *****)((long)ppppuVar32 - (long)ppppuVar4);
        func_0x000107c5ec38();
        if (puVar19 == (undefined *)0x0) {
          puVar28 = (undefined *)0x0;
        }
        else {
          pppppuVar15 = pppppuVar13;
          if ((long)pppppuVar27 <= (long)pppppuVar13) {
            pppppuVar15 = pppppuVar27;
          }
          puVar28 = (undefined *)((long)pppppuVar15 + (long)puVar19);
        }
        FUN_1018dde30();
        param_3 = &ppppuStack_90;
        func_0x00010006ae80(puVar19,puVar28,param_3,0,100,0,&UNK_11065d640,pppppuVar13);
      }
      func_0x00010006c090(pppppuVar14,param_2);
      func_0x000100ee9068(&ppppuStack_90);
      ppppuVar10 = ppppuStack_98;
      ppppuVar32 = ppppuStack_a0;
      ppppuVar4 = ppppuStack_a8;
      pppppuVar27 = pppppuVar12;
      func_0x000107c448fc();
      if (((ulong)pppppuVar27 & 1) == 0) {
        func_0x000107c61170(pppppuVar12);
        func_0x00010006c090(pppppuVar14);
        uVar8 = 0;
      }
      else {
        pppppuVar27 = pppppuVar12;
        func_0x000107c49f40();
        func_0x000107c61180();
        if (pppppuVar27 == (undefined8 *****)0x0) goto LAB_1018dde2c;
        pppppuVar13 = pppppuVar27;
        func_0x000107c5dc0c();
        uVar8 = SUB81(pppppuVar13,0);
        func_0x000107c61170(pppppuVar12);
        func_0x00010006c090(pppppuVar14);
        func_0x000107c61170(pppppuVar27);
      }
      puVar19 = puStack_f0;
      func_0x000107c61558();
      if (((ulong)puVar19 & 1) == 0) {
        param_2 = (undefined8 *****)(*(long *)(puStack_f0 + 0x10) + 1);
        puStack_f0 = (undefined *)0x0;
        param_3 = (undefined8 *****)0x1;
        func_0x0001018dc970();
      }
      uVar36 = *(ulong *)(puStack_f0 + 0x10);
      if (*(ulong *)(puStack_f0 + 0x18) >> 1 <= uVar36) {
        puStack_f0 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f0 + 0x18));
        param_3 = (undefined8 *****)0x1;
        param_2 = (undefined8 *****)(uVar36 + 1);
        func_0x0001018dc970();
      }
      *(undefined8 ******)(puStack_f0 + 0x10) = (undefined8 *****)(uVar36 + 1);
      *(undefined8 *****)(puStack_f0 + uVar36 * 0x20 + 0x20) = ppppuVar4;
      *(undefined8 *****)(puStack_f0 + uVar36 * 0x20 + 0x28) = ppppuVar32;
      *(undefined8 *****)(puStack_f0 + uVar36 * 0x20 + 0x30) = ppppuVar10;
      puStack_f0[uVar36 * 0x20 + 0x38] = uVar8;
      pppppuVar14 = pppppuVar2;
    } while (pppppuVar2 != pppppuVar30);
  }
LAB_1018ddaa0:
  func_0x000107c6142c(pppppuVar9);
  uVar36 = *(ulong *)(puStack_f0 + 0x10);
  if (uVar36 == 0) {
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar26 = 0;
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar35 = (undefined8 *)(puStack_f0 + uVar26 * 0x20 + 0x30);
      uVar29 = uVar26;
LAB_1018ddb04:
      if (*(ulong *)(puStack_f0 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dde0c);
        (*pcVar7)();
      }
      uVar26 = puVar35[-2];
      uVar5 = puVar35[-1];
      uVar31 = *puVar35;
      uVar16 = uVar26;
      uVar21 = uVar5;
      func_0x0001035032c0(uVar26,uVar5,uVar31);
      if (((uint)uVar21 & 0xff) != 1) goto LAB_1018ddaf4;
      uVar18 = uVar26;
      uVar21 = uVar5;
      uVar24 = uVar31;
      if (0x1a < uVar16) {
LAB_1018ddaec:
        if (uVar16 < 3) goto LAB_1018ddaf4;
        func_0x00010006c00c(uVar26,uVar5);
        func_0x000107c6157c(uVar31);
        uVar16 = uVar26;
        uVar22 = uVar5;
        uVar23 = uVar31;
        func_0x0001034e4090(uVar26,uVar5,uVar31);
        uVar17 = uVar16;
        func_0x000103595ff8();
        func_0x00010006c090(uVar16,uVar22);
        func_0x000107c61574(uVar23);
        if ((uVar17 & 1) != 0) {
          func_0x0001034e4090();
          uVar16 = uVar18;
          uVar22 = uVar21;
          uVar23 = uVar24;
          func_0x000103595ea4();
          goto LAB_1018ddcec;
        }
LAB_1018ddc5c:
        func_0x00010006c090(uVar26,uVar5);
        func_0x000107c61574(uVar31);
LAB_1018ddaf4:
        uVar29 = uVar29 + 1;
        puVar35 = puVar35 + 4;
        if (uVar36 == uVar29) break;
        goto LAB_1018ddb04;
      }
      if ((1L << (uVar16 & 0x3f) & 0x7fffbe0U) != 0) goto LAB_1018ddaf4;
      if (uVar16 != 4) {
        if (uVar16 != 10) goto LAB_1018ddaec;
        func_0x00010006c00c(uVar26,uVar5);
        func_0x000107c6157c(uVar31);
        uVar16 = uVar26;
        uVar22 = uVar5;
        uVar23 = uVar31;
        func_0x0001034e44c0(uVar26,uVar5,uVar31);
        uVar17 = uVar16;
        func_0x00010357ea98();
        func_0x00010006c090(uVar16,uVar22);
        func_0x000107c61574(uVar23);
        if ((uVar17 & 1) != 0) {
          func_0x0001034e44c0();
          uVar16 = uVar18;
          uVar22 = uVar21;
          uVar23 = uVar24;
          func_0x00010357e944();
          goto LAB_1018ddcec;
        }
        goto LAB_1018ddc5c;
      }
      func_0x00010006c00c(uVar26,uVar5);
      func_0x000107c6157c(uVar31);
      uVar16 = uVar26;
      uVar22 = uVar5;
      uVar23 = uVar31;
      func_0x0001034e4158(uVar26,uVar5,uVar31);
      uVar17 = uVar16;
      func_0x0001035c6a14();
      func_0x00010006c090(uVar16,uVar22);
      func_0x000107c61574(uVar23);
      if ((uVar17 & 1) == 0) goto LAB_1018ddc5c;
      func_0x0001034e4158();
      uVar16 = uVar18;
      uVar22 = uVar21;
      uVar23 = uVar24;
      func_0x0001035c68e0();
LAB_1018ddcec:
      func_0x00010006c090(uVar18,uVar21);
      func_0x000107c61574(uVar24);
      func_0x00010006c090(uVar26,uVar5);
      func_0x000107c61574(uVar31);
      puVar19 = puStack_c8;
      func_0x000107c61558();
      if (((ulong)puVar19 & 1) == 0) {
        plVar1 = (long *)(puStack_c8 + 0x10);
        puStack_c8 = (undefined *)0x0;
        func_0x0001018dc854(0,*plVar1 + 1,1);
      }
      uVar18 = *(ulong *)(puStack_c8 + 0x10);
      if (*(ulong *)(puStack_c8 + 0x18) >> 1 <= uVar18) {
        puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puStack_c8 + 0x18));
        func_0x0001018dc854(puVar19,uVar18 + 1,1,puStack_c8);
        puStack_c8 = puVar19;
      }
      uVar26 = uVar29 + 1;
      *(ulong *)(puStack_c8 + 0x10) = uVar18 + 1;
      *(ulong *)(puStack_c8 + uVar18 * 0x18 + 0x20) = uVar16;
      *(undefined8 *)(puStack_c8 + uVar18 * 0x18 + 0x28) = uVar22;
      *(undefined8 *)(puStack_c8 + uVar18 * 0x18 + 0x30) = uVar23;
    } while (uVar36 - 1 != uVar29);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar37._8_8_ = puStack_c8;
    auVar37._0_8_ = puStack_f0;
    return auVar37;
  }
  func_0x000107c60e78();
LAB_1018dde2c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1018dde30);
  (*pcVar7)();
}



/* Entry: 1018dde30; end: 1018dde6f;  */

void FUN_1018dde30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd0478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd0238;
  func_0x000107c61520(&DAT_10dbd0238,&UNK_11065d640);
  puRam0000000112dd0478 = puVar1;
  return;
}



/* Entry: 1018dde70; end: 1018ddeaf;  */

void FUN_1018dde70(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1018ddeb0; end: 1018de06f;  */

undefined * FUN_1018ddeb0(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined *puStack_80;
  
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 == 0) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar14 = 0;
    lVar15 = 0;
    puVar17 = (undefined8 *)(param_1 + 0x48);
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar12 = param_3;
    do {
      uVar2 = puVar17[-5];
      uVar4 = puVar17[-4];
      pcVar7 = (code *)puVar17[-3];
      uVar5 = puVar17[-2];
      pcVar3 = (code *)puVar17[-1];
      uVar6 = *puVar17;
      func_0x000107c61434(uVar4);
      func_0x000107c6157c(uVar5);
      func_0x000107c6157c(uVar6);
      uVar9 = param_2;
      (*pcVar7)(param_2,param_3);
      if ((uVar9 & 1) == 0) {
        func_0x000107c61574(uVar6);
        func_0x000107c61574(uVar5);
        func_0x000107c6142c(uVar4);
        bVar8 = SCARRY8(lVar14,1);
        lVar14 = lVar14 + 1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1018de070);
          (*pcVar7)();
        }
      }
      else {
        bVar8 = SCARRY8(lVar15,1);
        lVar15 = lVar15 + 1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1018de06c);
          (*pcVar7)();
        }
        uVar9 = param_2;
        uVar11 = param_3;
        (*pcVar3)();
        if ((uVar9 & 1) == 0) {
          uVar13 = uVar12;
          func_0x000107c61434(uVar4);
          puVar10 = puStack_80;
          func_0x000107c61558();
          if (((ulong)puVar10 & 1) == 0) {
            plVar1 = (long *)(puStack_80 + 0x10);
            puStack_80 = (undefined *)0x0;
            uVar13 = 1;
            FUN_1018dcba0(0,*plVar1 + 1);
          }
          uVar9 = *(ulong *)(puStack_80 + 0x10);
          if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar9) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
            uVar13 = 1;
            FUN_1018dcba0(puVar10,uVar9 + 1,1,puStack_80);
            puStack_80 = puVar10;
          }
          *(ulong *)(puStack_80 + 0x10) = uVar9 + 1;
          *(undefined8 *)(puStack_80 + uVar9 * 0x20 + 0x20) = uVar2;
          *(undefined8 *)(puStack_80 + uVar9 * 0x20 + 0x28) = uVar4;
          *(undefined8 *)(puStack_80 + uVar9 * 0x20 + 0x30) = uVar11;
          *(undefined8 *)(puStack_80 + uVar9 * 0x20 + 0x38) = uVar12;
        }
        else {
          func_0x000107c6142c(uVar12);
          uVar13 = uVar12;
        }
        func_0x000107c61574(uVar6);
        func_0x000107c61574(uVar5);
        func_0x000107c6142c(uVar4);
        uVar12 = uVar13;
      }
      puVar17 = puVar17 + 6;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return puStack_80;
}



/* Entry: 1018de070; end: 1018de957;  */

void FUN_1018de070(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long alStack_88 [2];
  undefined1 uStack_78;
  char cStack_71;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c614f0(uVar6);
  alStack_88[0] = -0x2fffffffffffffcf;
  alStack_88[1] = 0x800000010efbed90;
  uStack_78 = 0;
  (**(code **)(lVar5 + 8))(&cStack_71,alStack_88,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar6,lVar5);
  if (cStack_71 == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar5 = *(long *)(unaff_x20 + 0x18);
    lVar7 = *(long *)(param_2 + 0x10);
    uVar6 = 0x73736170;
    if (lVar7 != 0) {
      uVar6 = 0x6c696166;
    }
    func_0x000107c614f0(uVar2);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018de3c4);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018de3c8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018de3cc);
      (*pcVar1)();
    }
    (**(code **)(lVar5 + 8))(param_5,param_6,uVar6,0xe400000000000000,(long)param_1,uVar2,lVar5);
    func_0x000107c6142c(0xe400000000000000);
    (**(code **)(lVar5 + 0x10))(param_3,uVar2,lVar5);
    (**(code **)(lVar5 + 0x18))(param_4,uVar2,lVar5);
    if ((lVar7 == 0) && (func_0x0001000d224c(alStack_88), lVar5 = alStack_88[0], alStack_88[0] != 0)
       ) {
      uVar6 = 0;
      FUN_1018dbe00(0);
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar2 = 0x64695f6461;
      func_0x000107c5fadc(0x64695f6461,0xe500000000000000);
      func_0x000107c5fadc(param_7,param_8);
      func_0x000107c54984(uVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(param_7);
      if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) &&
         (puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
         puVar3 != (undefined *)0x0)) {
        uVar2 = 0x736d657469;
        func_0x000107c5fadc(0x736d657469,0xe500000000000000);
        uVar4 = 0;
        FUN_1018db510(0);
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
        func_0x000107c54984(uVar6);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(puVar3);
      }
      uVar2 = 0xd000000000000011;
      func_0x000107c5fadc(0xd000000000000011,0x800000010efbed10);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c54984(uVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar3);
      uVar2 = 0x657079745f6461;
      func_0x000107c5fadc(0x657079745f6461,0xe700000000000000);
      func_0x000107c5fadc(param_5,param_6);
      func_0x000107c54984(uVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(param_5);
      uVar2 = 0x6e6f697461727564;
      func_0x000107c5fadc(0x6e6f697461727564,0xeb00000000736d5f);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1);
      func_0x000107c54984(uVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c4bfb0(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar6);
    }
  }
  return;
}



/* Entry: 1018de958; end: 1018de9af;  */

void FUN_1018de958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1018de9b0; end: 1018de9c3;  */

void FUN_1018de9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1018de9c4; end: 1018dea17;  */

void FUN_1018de9c4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018dea18; end: 1018dea33;  */

void FUN_1018dea18(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112dd0538;
  plVar5 = (long *)&UNK_10d991a20;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1018d9a60();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1018dea34; end: 1018dea9f;  */

void FUN_1018dea34(code *param_1,ulong *param_2,long *param_3)

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



/* Entry: 1018deaa0; end: 1018deabb;  */

void FUN_1018deaa0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1018deabc();
  *unaff_x20 = param_1;
  return;
}


