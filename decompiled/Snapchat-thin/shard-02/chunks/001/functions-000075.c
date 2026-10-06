/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018deabc; end: 1018debf7;  */

code * FUN_1018deabc(ulong param_1,ulong param_2,ulong param_3,code *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018debf8);
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
    pcVar2 = FUN_1018db510;
    FUN_1018dea34(FUN_1018db510,0x112dd0530,&UNK_10d991a10);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
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
    FUN_1018db510(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 1018debf8; end: 1018dec83;  */

void FUN_1018debf8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1018dec84; end: 1018ded1b;  */

/* WARNING: Possible PIC construction at 0x0001018deca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018deca4) */

void FUN_1018dec84(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1018ded1c; end: 1018ded9f;  */

undefined8 * FUN_1018ded1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1018deda0; end: 1018dedfb;  */

undefined8 * FUN_1018deda0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  func_0x000107c61574(param_1[3]);
  uVar2 = param_2[5];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1018dedfc; end: 1018deea7;  */

int FUN_1018dedfc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1018deea8; end: 1018deed3;  */

void FUN_1018deea8(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 1018deed4; end: 1018def8f;  */

undefined8 * FUN_1018deed4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1018def90; end: 1018defdf;  */

undefined8 * FUN_1018def90(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1018defe0; end: 1018df07b;  */

int FUN_1018defe0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1018df07c; end: 1018df0df;  */

/* WARNING: Possible PIC construction at 0x0001018df090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018df094) */

void FUN_1018df07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1018df0e0; end: 1018df14b;  */

undefined8 * FUN_1018df0e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018df14c; end: 1018df18f;  */

undefined8 * FUN_1018df14c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1018df190; end: 1018df22f;  */

int FUN_1018df190(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1018df230; end: 1018df2e3;  */

undefined1 * FUN_1018df230(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1018df2e4; end: 1018df37b;  */

int FUN_1018df2e4(int *param_1,int param_2)

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



/* Entry: 1018df37c; end: 1018df3d7;  */

/* WARNING: Possible PIC construction at 0x0001018df390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018df394) */

void FUN_1018df37c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1018df3d8; end: 1018df433;  */

undefined8 * FUN_1018df3d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018df434; end: 1018df46f;  */

undefined8 * FUN_1018df434(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018df470; end: 1018df51f;  */

int FUN_1018df470(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1018df520; end: 1018df60b;  */

long FUN_1018df520(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    lVar9 = 0x6e776f6e6b6e75;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined1 *)(param_1 + 0x38);
    lVar3 = lVar6;
    uVar7 = uVar1;
    func_0x0001035032c0(lVar6,uVar1,uVar10);
    lVar9 = 0x646578696d;
    puVar8 = (undefined8 *)(param_1 + 0x50);
    do {
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) {
        FUN_1018df60c(lVar6,uVar1,uVar10,uVar2);
        return lVar6;
      }
      lVar4 = puVar8[-2];
      func_0x0001035032c0(lVar4,puVar8[-1],*puVar8);
      func_0x000103559d2c();
      lVar5 = lVar3;
      func_0x000103559d2c(lVar3,uVar7);
      puVar8 = puVar8 + 4;
    } while (lVar4 == lVar5);
  }
  return lVar9;
}



/* Entry: 1018df60c; end: 1018df9fb;  */

undefined1  [16] FUN_1018df60c(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x0001035032c0();
  if ((param_2 & 0xff) == 1) {
    uVar2 = 0xeb000000006c6c61;
    uVar1 = 0x74736e695f707061;
                    /* WARNING: Could not recover jumptable at 0x0001018df658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10d991b0a)[param_1] * 4 + 0x1018df65c))
              (0x74736e695f707061,0xeb000000006c6c61);
    auVar3._8_8_ = uVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = 0xec00000064657a69;
  auVar4._0_8_ = 0x6e676f6365726e75;
  return auVar4;
}



/* Entry: 1018df9fc; end: 1018dfa2f; -[_TtC32UnifiedAdTrackValidationServices32UnifiedAdTrackValidationServices validator] */

void FUN_1018df9fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010040df3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018dfa30; end: 1018dfabb; -[_TtC32UnifiedAdTrackValidationServices32UnifiedAdTrackValidationServices setValidator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018dfa30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dd05e8);
  *(undefined8 *)(param_1 + _DAT_112dd05e8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018dfabc; end: 1018dfb1b; -[_TtC32UnifiedAdTrackValidationServices32UnifiedAdTrackValidationServices init] */

void FUN_1018dfabc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnifiedAdTrackValidationServices.UnifiedAdTrackValidationServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018dfae8);
  (*pcVar1)();
}



/* Entry: 1018dfb1c; end: 1018dfb53; -[_TtC32UnifiedAdTrackValidationServices32UnifiedAdTrackValidationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018dfb1c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd05e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd05e8));
  return;
}



/* Entry: 1018dfb54; end: 1018dfc2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1018dfb54(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_48;
  
  func_0x000107c610f8();
  puVar3 = *(undefined8 **)(param_2 + _DAT_113010a90);
  func_0x000107c6157c(puVar3);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c61574();
  lVar1 = _DAT_112dd0618;
  *(undefined8 *)(unaff_x20 + _DAT_112dd0618) = uStack_48;
  func_0x0001034e2890();
  uVar4 = *puVar3;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(uVar5);
  func_0x0001034e2c54();
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(uVar5);
  puVar2 = auStack_58;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar2;
}



/* Entry: 1018dfc30; end: 1018dfc77;  */

undefined8 FUN_1018dfc30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1018dfd20(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1018dfc78; end: 1018dfccf; +[_TtC18AdAssertEntryPoint18AdAssertEntryPoint attributedTask] */

void FUN_1018dfc78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x00010099a028(0);
  func_0x00010099a048();
  uVar2 = uVar1;
  func_0x00010099a09c();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1018dfcd0; end: 1018dfd03;  */

void FUN_1018dfcd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018dfd04; end: 1018dfd1f; -[_TtC18AdAssertEntryPoint18AdAssertEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018dfd04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd0618));
  return;
}



/* Entry: 1018dfd20; end: 1018dfdd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018dfd20(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  func_0x000107c614f0();
  puVar2 = *(undefined8 **)(param_1 + _DAT_113010a90);
  func_0x000107c6157c(puVar2);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c61574();
  lVar1 = _DAT_112dd0618;
  *(undefined8 *)(unaff_x20 + _DAT_112dd0618) = uStack_38;
  func_0x0001034e2890();
  uVar3 = *puVar2;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c615f0(uVar4);
  func_0x0001034e2c54();
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c61154(&stack0xffffffffffffffb8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018dfdd8; end: 1018dfdf7;  */

void FUN_1018dfdd8(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb3b0);
  return;
}



/* Entry: 1018dfdf8; end: 1018dfe57; -[_TtC35AdCrashLoggingServiceImplementation13AdCrashLogger init] */

void FUN_1018dfdf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdCrashLoggingServiceImplementation.AdCrashLogger",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018dfe24);
  (*pcVar1)();
}



/* Entry: 1018dfe58; end: 1018dfebf; -[_TtC35AdCrashLoggingServiceImplementation13AdCrashLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018dfe58(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd0648));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0650));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0658));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0660));
  param_1 = param_1 + _DAT_112dd0668;
  (*(code *)&DAT_1003cfb00)();
  return param_1;
}



/* Entry: 1018dfec0; end: 1018e027f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018dfec0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long alStack_88 [2];
  undefined1 uStack_78;
  char cStack_71;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(&uStack_70);
  uVar7 = uStack_70;
  func_0x000107c614f0(uStack_70);
  alStack_88[0] = -0x2fffffffffffffe3;
  alStack_88[1] = 0x800000010efbee90;
  uStack_78 = 0;
  (**(code **)(lStack_68 + 8))
            (&cStack_71,alStack_88,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar7,lStack_68);
  func_0x000107c615e8(uStack_70);
  if (cStack_71 != '\x01') {
    return;
  }
  uVar3 = param_6;
  FUN_1018e0360(param_6,param_7);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar3 = param_6;
  func_0x0001018e0444(param_6,param_7);
  if ((uVar3 & 1) != 0) {
    param_8 = 1;
  }
  puVar4 = PTR_PTR_1126b8460;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126a7d58;
  func_0x000107c610f8(PTR_PTR_1126a7d58);
  func_0x000107c453e4();
  func_0x000107c52540(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c3d9e0();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e025c);
    (*pcVar2)();
  }
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c52550(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  FUN_1018e0520(param_6,param_7);
  lVar8 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 4;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  puVar5 = PTR___sSSN_11034da80;
  if (param_8 == 0) {
    uVar7 = 0xe700000000000000;
    uVar9 = 0x676e696e726177;
  }
  else if (param_8 == 2) {
    uVar7 = 0xe400000000000000;
    uVar9 = 0x6f666e69;
  }
  else {
    if (param_8 != 1) {
      alStack_88[0] = param_8;
      func_0x000107c60614(&UNK_1107133d0,alStack_88,&UNK_1107133d0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e0280);
      (*pcVar2)();
    }
    uVar7 = 0xe800000000000000;
    uVar9 = 0x6c61636974697263;
  }
  *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
  lVar6 = lVar8;
  func_0x00010075bbf0();
  *(undefined8 *)(lVar8 + 0x20) = uVar9;
  *(undefined8 *)(lVar8 + 0x28) = uVar7;
  *(undefined **)(lVar8 + 0x60) = puVar5;
  *(long *)(lVar8 + 0x68) = lVar6;
  *(long *)(lVar8 + 0x40) = lVar6;
  *(undefined8 *)(lVar8 + 0x48) = param_4;
  *(undefined8 *)(lVar8 + 0x50) = param_5;
  func_0x000107c61434(param_5);
  uVar7 = 0x4025205d40255b;
  uVar9 = 0xe700000000000000;
  func_0x000107c5fb00(0x4025205d40255b,0xe700000000000000,lVar8);
  pcVar1 = (char *)(unaff_x20 + _DAT_112dd0668);
  if (*pcVar1 == '\x01') {
    lVar8 = *(long *)(unaff_x20 + _DAT_112dd0648);
joined_r0x0001018e0224:
    if (lVar8 != 0) {
      puVar5 = puVar4;
      func_0x000107c61174(puVar4);
      func_0x000107c5fadc(uVar7,uVar9);
      func_0x000107c6142c(uVar9);
      func_0x0001044db3fc(0);
      uVar9 = 0;
      func_0x0001044da404(0,0,0,0xc0);
      func_0x000107c5027c(lVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar5);
      goto LAB_1018e0230;
    }
LAB_1018e0228:
    func_0x000107c6142c(uVar9);
  }
  else {
    if (((pcVar1[1] & 1U) == 0) && (pcVar1[2] != '\x01')) {
      if (param_8 == 2) goto LAB_1018e0228;
      if (param_8 != 1) {
        lVar8 = *(long *)(unaff_x20 + _DAT_112dd0648);
        goto joined_r0x0001018e0224;
      }
      func_0x000107c6142c(uVar9);
    }
    else {
      func_0x000107c6142c(uVar9);
      if (param_8 != 1) goto LAB_1018e0230;
    }
    FUN_1018e0a24(param_1,param_2);
  }
LAB_1018e0230:
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1018e0280; end: 1018e035f; -[_TtC35AdCrashLoggingServiceImplementation13AdCrashLogger assertFailV2WithAdId:errorCode:description:identifier:] */

/* WARNING: Possible PIC construction at 0x0001018e0338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e033c) */

void FUN_1018e0280(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  func_0x000107c5faec(param_5);
  uVar1 = param_2;
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1018dfec0(param_3,uVar2,param_4,param_5,param_2,param_6,uVar1,0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018e0360; end: 1018e051f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1018e0360(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  uStack_70 = 0xd000000000000035;
  uStack_68 = 0x800000010efbef50;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  (**(code **)(lStack_38 + 8))
            (&uStack_50,&uStack_70,&UNK_1107385c8,&PTR_DAT_11304a570,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  uVar1 = uStack_40;
  uStack_40 = param_1;
  lStack_38 = param_2;
  func_0x000100e8b654();
  puVar2 = &uStack_40;
  func_0x000107c6022c(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar1,uVar1);
  func_0x000107c6142c(uStack_48);
  return (uint)puVar2 & 1;
}



/* Entry: 1018e0520; end: 1018e06bf;  */

/* WARNING: Removing unreachable block (ram,0x0001018e0548) */
/* WARNING: Removing unreachable block (ram,0x0001018e0694) */
/* WARNING: Removing unreachable block (ram,0x0001018e0584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e0520(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long alStack_70 [6];
  
  FUN_1018e07b0();
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c3d438();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f24e58;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f24e58);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    puVar4 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(alStack_70);
    if (alStack_70[0] != 0) {
      func_0x000107c45314(alStack_70[0]);
      func_0x000107c61170(alStack_70[0]);
    }
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e06c0);
  (*pcVar1)();
}



/* Entry: 1018e06c0; end: 1018e07af; -[_TtC35AdCrashLoggingServiceImplementation13AdCrashLogger assertFailV2WithAdId:errorCode:description:identifier:severity:] */

/* WARNING: Possible PIC construction at 0x0001018e0784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e0788) */

void FUN_1018e06c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  func_0x000107c5faec(param_5);
  uVar1 = param_2;
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1018dfec0(param_3,uVar2,param_4,param_5,param_2,param_6,uVar1,param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018e07b0; end: 1018e0a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018e07b0(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *puVar8;
  long unaff_x20;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar3 = param_1;
  lVar7 = param_2;
  func_0x000107c5fb1c();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar7);
  uVar4 = 0x5f645c7a2d615e5b;
  func_0x000107c5fadc(0x5f645c7a2d615e5b,0xea00000000002b5d);
  uVar5 = 0x5f;
  func_0x000107c5fadc(0x5f,0xe100000000000000);
  uVar10 = uVar3;
  func_0x000107c51800();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e0a24);
    (*pcVar2)();
  }
  uVar4 = 0x2b5f;
  func_0x000107c5fadc(0x2b5f,0xe200000000000000);
  uVar5 = 0x5f;
  lVar7 = -0x1f00000000000000;
  func_0x000107c5fadc(0x5f);
  uVar3 = uVar10;
  func_0x000107c51800();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  if (uVar3 == 0) {
    lVar7 = 0;
LAB_1018e0940:
    puVar9 = (undefined8 *)(unaff_x20 + _DAT_112dd0668 + 0x88);
    puVar8 = (ulong *)(unaff_x20 + _DAT_112dd0668 + 0x90);
  }
  else {
    uVar10 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if (((uVar10 != param_1) || (lVar7 != param_2)) &&
       (uVar3 = uVar10, func_0x000107c605b8(uVar10,lVar7,param_1,param_2,0), (uVar3 & 1) == 0))
    goto LAB_1018e0940;
    func_0x000107c61434(lVar7);
    uVar3 = uVar10;
    func_0x000107c5fb5c(uVar10,lVar7);
    func_0x000107c6142c(lVar7);
    if (((long)uVar3 < 0) || (lVar1 = unaff_x20 + _DAT_112dd0668, uVar3 < *(ulong *)(lVar1 + 0x70)))
    goto LAB_1018e09f8;
    puVar9 = (undefined8 *)(lVar1 + 0x78);
    puVar8 = (ulong *)(lVar1 + 0x80);
  }
  uVar10 = *puVar8;
  puVar9 = (undefined8 *)*puVar9;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(lVar7);
  func_0x000107c61434(uVar10);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c5fb78(param_1,param_2);
  uVar3 = uVar10;
  func_0x0001048db000(puVar9,uVar10,0xd000000000000063,0x800000010efbeeb0,0x96);
  puVar6 = puVar9;
  FUN_1018e0ad8();
  func_0x000107c613f8(&UNK_1107b6098,puVar6,0,0);
  *puVar6 = puVar9;
  puVar6[1] = uVar3;
  func_0x000107c61654();
  func_0x000107c6142c(uVar10);
LAB_1018e09f8:
  auVar11._8_8_ = lVar7;
  auVar11._0_8_ = uVar10;
  return auVar11;
}



/* Entry: 1018e0a24; end: 1018e0ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e0a24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c5fadc(param_1,param_2);
    }
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dd0668 + 8);
    func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + _DAT_112dd0668 + 0x10));
    func_0x000107c56be4(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1018e0ad8; end: 1018e0b17;  */

void FUN_1018e0ad8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd0698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46ac8;
  func_0x000107c61520(&UNK_10dd46ac8,&UNK_1107b6098);
  puRam0000000112dd0698 = puVar1;
  return;
}



/* Entry: 1018e0b18; end: 1018e0b43;  */

long FUN_1018e0b18(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1018e0b44; end: 1018e0cc7;  */

undefined1 * FUN_1018e0b44(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018e0cc8; end: 1018e0dab;  */

undefined1 * FUN_1018e0cc8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018e0dac; end: 1018e0e6f;  */

int FUN_1018e0dac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1018e0e70; end: 1018e0eaf;  */

void FUN_1018e0e70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd06a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991c24;
  func_0x000107c61520(&UNK_10d991c24,&UNK_11040e240);
  puRam0000000112dd06a0 = puVar1;
  return;
}



/* Entry: 1018e0eb0; end: 1018e0fbb;  */

/* WARNING: Possible PIC construction at 0x0001018e0ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e0f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e0f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e0f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e0f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e0f6c) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f2c) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f80) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f4c) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f50) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f14) */
/* WARNING: Removing unreachable block (ram,0x0001018e0efc) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f94) */

void FUN_1018e0eb0(undefined8 param_1)

{
  byte *unaff_x20;
  
  func_0x000107c60694(*unaff_x20 & 1);
  func_0x000107c60694(unaff_x20[1] & 1);
  func_0x000107c60694(unaff_x20[2] & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018e0fbc; end: 1018e104b;  */

uint FUN_1018e0fbc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_e0 = param_1[0x14];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_30 = param_2[0x14];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  func_0x0001018e10c4(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1018e104c; end: 1018e1087;  */

void FUN_1018e104c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_1018e0eb0(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1018e1088; end: 1018e108b;  */

/* WARNING: Possible PIC construction at 0x0001018e0ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e0f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e0f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e0f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e0f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e0f6c) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f2c) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f80) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f4c) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f50) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f14) */
/* WARNING: Removing unreachable block (ram,0x0001018e0efc) */
/* WARNING: Removing unreachable block (ram,0x0001018e0f94) */

void FUN_1018e1088(undefined8 param_1)

{
  byte *unaff_x20;
  
  func_0x000107c60694(*unaff_x20 & 1);
  func_0x000107c60694(unaff_x20[1] & 1);
  func_0x000107c60694(unaff_x20[2] & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018e108c; end: 1018e1313;  */

void FUN_1018e108c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1018e0eb0(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1018e1314; end: 1018e1367;  */

void FUN_1018e1314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1018e1368; end: 1018e13cf;  */

void FUN_1018e1368(long *param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c3d2d8();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1018e13d0; end: 1018e13fb;  */

/* WARNING: Possible PIC construction at 0x0001018e13dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e13ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e13e0) */
/* WARNING: Removing unreachable block (ram,0x0001018e13f0) */

void FUN_1018e13d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018e13fc; end: 1018e1457;  */

void FUN_1018e13fc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018e1458; end: 1018e14e7;  */

void FUN_1018e1458(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_180 [168];
  undefined1 auStack_d8 [168];
  
  puVar1 = auStack_180;
  func_0x0001003cf5a4(auStack_180,0);
  func_0x0001003cf7c8();
  func_0x0001003cfb68(auStack_180);
  func_0x0001003cf5a4(auStack_d8,1);
  puVar2 = auStack_d8;
  func_0x0001003cf7c8(puVar2);
  func_0x0001003cfb68(auStack_d8);
  uVar3 = 0;
  func_0x0001001d6ef4(0);
  func_0x000107c610f8();
  func_0x0001003cfb9c(puVar1,puVar2,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1018e14e8; end: 1018e14ef;  */

void FUN_1018e14e8(long *param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c3d2d8();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1018e14f0; end: 1018e162b;  */

void FUN_1018e14f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1018e162c; end: 1018e1633;  */

void FUN_1018e162c(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  puVar6 = *(undefined **)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = puVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    uVar4 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    puVar5 = puVar3;
    func_0x000107c3ebdc();
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(uVar4);
    if ((int)puVar5 != 0) {
      FUN_1018e1a38(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar1);
      func_0x000107c61174();
      func_0x0001018e17f0();
      goto LAB_1018e1610;
    }
  }
  puVar6 = PTR_PTR_1126a7d60;
  func_0x000107c610f8();
  func_0x000107c45590();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e162c);
    (*pcVar2)();
  }
LAB_1018e1610:
  *param_1 = puVar6;
  return;
}



/* Entry: 1018e1634; end: 1018e1667;  */

/* WARNING: Possible PIC construction at 0x0001018e1640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e1650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e1644) */
/* WARNING: Removing unreachable block (ram,0x0001018e1654) */

void FUN_1018e1634(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018e1668; end: 1018e16cb;  */

void FUN_1018e1668(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018e16cc; end: 1018e1787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e16cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11304a480);
  func_0x000107c61174();
  uVar4 = uVar1;
  func_0x00010040bf78();
  puVar2 = &UNK_11040e3e0;
  func_0x000107c613fc(&UNK_11040e3e0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  func_0x0001000285a8(0x112dd07e0,&UNK_10d991cc0);
  func_0x000107c613fc();
  pcVar3 = FUN_1018e1788;
  func_0x0001000bdd8c(FUN_1018e1788,puVar2);
  uVar4 = 0;
  func_0x00010022edc4(0);
  func_0x000107c610f8();
  func_0x00010040c0fc(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 1018e1788; end: 1018e178b;  */

void FUN_1018e1788(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  puVar6 = *(undefined **)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = puVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    uVar4 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    puVar5 = puVar3;
    func_0x000107c3ebdc();
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(uVar4);
    if ((int)puVar5 != 0) {
      FUN_1018e1a38(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar1);
      func_0x000107c61174();
      func_0x0001018e17f0();
      goto LAB_1018e1610;
    }
  }
  puVar6 = PTR_PTR_1126a7d60;
  func_0x000107c610f8();
  func_0x000107c45590();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e162c);
    (*pcVar2)();
  }
LAB_1018e1610:
  *param_1 = puVar6;
  return;
}



/* Entry: 1018e178c; end: 1018e1853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e178c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dd08c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dd08d0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018e1854; end: 1018e1997; -[AdOnDeviceFeatureGatingProvider initWithAdConfigProviderV2:adsPreferencesProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e1854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dd08c8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112dd08d0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1018e1998; end: 1018e19cb; -[AdOnDeviceFeatureGatingProvider isEligibleForOnDeviceCanOpenURLUploading] */

uint FUN_1018e1998(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001018e18cc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1018e19cc; end: 1018e19ff;  */

void FUN_1018e19cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018e1a00; end: 1018e1a37; -[AdOnDeviceFeatureGatingProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018e1a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e1a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e1a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd08c8));
  return;
}



/* Entry: 1018e1a38; end: 1018e1a57;  */

void FUN_1018e1a38(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb550);
  return;
}



/* Entry: 1018e1a58; end: 1018e1b17;  */

undefined1  [16] FUN_1018e1a58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  FUN_1018e23fc(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x000107c61168(PTR__OBJC_CLASS___CADisplayLink_1126b94a8);
  func_0x000107c42110();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  func_0x000107c5ff8c(0x41700000,0x41f00000,0x41a00000);
  func_0x000107c576a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  func_0x000107c4c190();
  func_0x000107c61180();
  func_0x000107c3d8fc(puVar1);
  func_0x000107c61170(puVar2);
  auVar3._8_8_ = &PTR_DAT_11040e518;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Entry: 1018e1b18; end: 1018e1d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e1b18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112dd0900;
  func_0x000107c61428(lVar1,auStack_78,0,0);
  uVar3 = *(ulong *)(lVar1 + 0x18);
  lVar5 = *(long *)(lVar1 + 0x20);
  FUN_1018e23fc(lVar1,uVar3);
  lVar10 = *(long *)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffff60 + -extraout_x8;
  (**(code **)(lVar10 + 0x10))(puVar7);
  uVar6 = uVar3;
  (**(code **)(lVar5 + 8))(uVar3,lVar5);
  (**(code **)(lVar10 + 8))(puVar7,uVar3);
  if ((uVar6 & 1) != 0) {
    uVar3 = *(ulong *)(lVar1 + 0x18);
    lVar5 = *(long *)(lVar1 + 0x20);
    FUN_1018e23fc(lVar1,uVar3);
    lVar11 = *(long *)(uVar3 - 8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
    lVar10 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar11 + 0x10))(lVar10);
    uVar6 = uVar3;
    (**(code **)(lVar5 + 0x10))(uVar3,lVar5);
    (**(code **)(lVar11 + 8))(lVar10,uVar3);
    if ((uVar6 & 1) == 0) {
      lVar5 = unaff_x20 + _DAT_112dd0918;
      *(undefined8 *)(lVar5 + 8) = param_2;
      func_0x000107c61604(lVar5,param_1);
      func_0x000107c61428(lVar1,&stack0xffffffffffffff60,0x21,0);
      uVar8 = *(undefined8 *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x20);
      func_0x0001000c6518(lVar1,uVar8);
      (**(code **)(lVar5 + 0x20))(0x3f91111111111111,uVar8,lVar5);
      func_0x000107c614a8(&stack0xffffffffffffff60);
      FUN_1018e2374(lVar1,&stack0xffffffffffffff60);
      FUN_1018e23fc(&stack0xffffffffffffff60,uStack_88);
      (**(code **)(lStack_80 + 0x38))(uStack_88,lStack_80);
      FUN_1018e23b8(&stack0xffffffffffffff60);
      puVar9 = PTR_s_pollAccelerometerData_112524c30;
      pcVar4 = *(code **)(unaff_x20 + _DAT_112dd0908);
      func_0x000107c61174();
      puVar7 = &stack0xffffffffffffff60;
      (*pcVar4)();
      FUN_1018e23b8(&stack0xffffffffffffff60);
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112dd0910);
      uVar8 = *puVar2;
      *puVar2 = puVar7;
      puVar2[1] = puVar9;
      func_0x000107c615e8(uVar8);
    }
  }
  return;
}



/* Entry: 1018e1d80; end: 1018e1ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e1d80(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112dd0910);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = plVar1[1];
    lVar3 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar7 = *(code **)(lVar6 + 0x20);
    func_0x000107c615f0(lVar5);
    (*pcVar7)(lVar3,lVar6);
    func_0x000107c615e8(lVar5);
    lVar5 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar5);
  lVar5 = unaff_x20 + _DAT_112dd0918;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61604(lVar5,0);
  lVar5 = unaff_x20 + _DAT_112dd0900;
  func_0x000107c61428(lVar5,auStack_58,0,0);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x20);
  FUN_1018e23fc(lVar5,uVar2);
  lVar6 = *(long *)(uVar2 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(auStack_80 + -extraout_x8);
  uVar4 = uVar2;
  (**(code **)(lVar3 + 0x10))(uVar2,lVar3);
  (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,uVar2);
  if ((uVar4 & 1) != 0) {
    FUN_1018e2374(lVar5,auStack_80);
    FUN_1018e23fc(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x40))(uStack_68,lStack_60);
    FUN_1018e23b8(auStack_80);
  }
  return;
}



/* Entry: 1018e1ef8; end: 1018e2107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e1ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = unaff_x20 + _DAT_112dd0900;
  func_0x000107c61428(lVar4,auStack_88,0,0);
  lVar5 = *(long *)(lVar4 + 0x18);
  lVar6 = *(long *)(lVar4 + 0x20);
  FUN_1018e23fc(lVar4,lVar5);
  lVar7 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(auStack_a0 + -extraout_x8);
  lVar4 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,lVar6);
  (**(code **)(lVar7 + 8))(auStack_a0 + -extraout_x8,lVar5);
  if (lVar4 != 0) {
    func_0x000107c3cebc(lVar4);
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20 + _DAT_112dd0918;
    lVar5 = lVar4;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar4 + 8);
      lVar4 = lVar5;
      func_0x000107c614f0();
      uStack_98 = 0;
      uStack_90 = 0xe000000000000000;
      func_0x000107c602fc(0x25);
      func_0x000107c5fb78(0xd000000000000017,0x800000010efbf2d0);
      puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar1 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      func_0x000107c5fddc(param_1,&uStack_98,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x3a792c,0xe300000000000000);
      func_0x000107c5fddc(param_2,&uStack_98,puVar1,puVar2);
      func_0x000107c5fb78(0x3a7a2c,0xe300000000000000);
      func_0x000107c5fddc(param_3,&uStack_98,puVar1,puVar2);
      func_0x000107c5fb78(0x3b7d,0xe200000000000000);
      uVar3 = uStack_90;
      (**(code **)(lVar6 + 8))(uStack_98,uStack_90,0,0,lVar4,lVar6);
      func_0x000107c615e8(lVar5);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 1018e2108; end: 1018e212f; -[_TtC38AdPlayableWebViewFactoryImplementation31AdPlayableAccelerometerProvider pollAccelerometerData] */

void FUN_1018e2108(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1018e1ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018e2130; end: 1018e218f; -[_TtC38AdPlayableWebViewFactoryImplementation31AdPlayableAccelerometerProvider init] */

void FUN_1018e2130(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlayableWebViewFactoryImplementation.AdPlayableAccelerometerProvider",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e215c);
  (*pcVar1)();
}



/* Entry: 1018e2190; end: 1018e222b; -[_TtC38AdPlayableWebViewFactoryImplementation31AdPlayableAccelerometerProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018e2190(long param_1)

{
  FUN_1018e23b8(param_1 + _DAT_112dd0900);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd0908 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd0910));
  param_1 = param_1 + _DAT_112dd0918;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1018e222c; end: 1018e2243;  */

void FUN_1018e222c(void)

{
  func_0x000107c4a180();
  return;
}



/* Entry: 1018e2244; end: 1018e224f;  */

void FUN_1018e2244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1018e2250; end: 1018e2287;  */

undefined1  [16] FUN_1018e2250(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = unaff_x20;
  func_0x000107c4a180();
  *(char *)(param_1 + 1) = (char)unaff_x20;
  auVar1._8_8_ = param_1 + 1;
  auVar1._0_8_ = FUN_1018e2288;
  return auVar1;
}



/* Entry: 1018e2288; end: 1018e229f;  */

void FUN_1018e2288(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*param_1,PTR_s_setPaused__112654088,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 1018e22a0; end: 1018e22cf;  */

void FUN_1018e22a0(void)

{
  undefined8 *unaff_x20;
  
  func_0x000107c49998(*unaff_x20);
  return;
}



/* Entry: 1018e22d0; end: 1018e22df;  */

void FUN_1018e22d0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010beec970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*unaff_x20,PTR_s_accelerometerUpdateInterval_112598c00);
  return;
}



/* Entry: 1018e22e0; end: 1018e2317;  */

undefined1  [16] FUN_1018e22e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  param_2[1] = *unaff_x20;
  func_0x000107c3cec4();
  *param_2 = param_1;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = FUN_1018e2318;
  return auVar1;
}



/* Entry: 1018e2318; end: 1018e2327;  */

void FUN_1018e2318(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*param_1,param_1[1],PTR_s_setAccelerometerUpdateInterval__112635d20);
  return;
}



/* Entry: 1018e2328; end: 1018e2343;  */

void FUN_1018e2328(void)

{
  undefined8 *unaff_x20;
  
  func_0x000107c3cec0(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1018e2344; end: 1018e2353;  */

void FUN_1018e2344(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c24d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*unaff_x20,PTR_s_startAccelerometerUpdates_1126710a0);
  return;
}



/* Entry: 1018e2354; end: 1018e2373;  */

void FUN_1018e2354(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb618);
  return;
}



/* Entry: 1018e2374; end: 1018e23b7;  */

long FUN_1018e2374(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1018e23b8; end: 1018e23d7;  */

void FUN_1018e23b8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001018e23cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1018e23d8; end: 1018e23fb;  */

undefined8 FUN_1018e23d8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1018e23fc; end: 1018e241f;  */

long * FUN_1018e23fc(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1018e2420; end: 1018e26c3;  */

void FUN_1018e2420(void)

{
  func_0x000107c602fc(0x3b3);
  func_0x000107c5fb78(0xd0000000000000fd,0x800000010efbf370);
  func_0x000107c5fb78(0x7461686370616e73,0xee00656764697242);
  func_0x000107c5fb78(0xd000000000000032,0x800000010efbf470);
  func_0x000107c5fb78(0x7461686370616e73,0xee00656764697242);
  func_0x000107c5fb78(0x73654d74736f702e,0xee00222865676173);
  func_0x000107c5fb78(0x707061745f617463,0xea00000000006465);
  func_0x000107c5fb78(0x100000000000003c,0x800000010efbf4b0);
  func_0x000107c5fb78(0x7461686370616e73,0xee00656764697242);
  func_0x000107c5fb78(0xd0000000000000b6,0x800000010efbf4f0);
  func_0x000107c5fb78(0x7461686370616e73,0xee00656764697242);
  func_0x000107c5fb78(0xd000000000000032,0x800000010efbf470);
  func_0x000107c5fb78(0x7461686370616e73,0xee00656764697242);
  func_0x000107c5fb78(0xd00000000000009d,0x800000010efbf5b0);
  func_0x000107c5fb78(0xd000000000000014,0x800000010efbf650);
  func_0x000107c5fb78(0x22203a2022,0xe500000000000000);
  func_0x000107c5fb78(0xd000000000000015,0x800000010efbf670);
  func_0x000107c5fb78(0xd00000000000007f,0x800000010efbf690);
  func_0x000107c5fb78(0xd000000000000015,0x800000010efbf710);
  func_0x000107c5fb78(0x22203a2022,0xe500000000000000);
  func_0x000107c5fb78(0xd000000000000016,0x800000010efbf730);
  func_0x000107c5fb78(0xd000000000000018,0x800000010efbf750);
  uRam0000000113803470 = 0;
  uRam0000000113803478 = 0xe000000000000000;
  return;
}



/* Entry: 1018e26c4; end: 1018e27b7;  */

void FUN_1018e26c4(void)

{
  func_0x000107c602fc(0x82);
  func_0x000107c5fb78(0xd00000000000005e,0x800000010efbf2f0);
  func_0x000107c5fb78(0x7461686370616e73,0xee00656764697242);
  func_0x000107c5fb78(0x654d74736f702e3f,0xef22286567617373);
  func_0x000107c5fb78(0x706174,0xe300000000000000);
  func_0x000107c5fb78(0xd000000000000011,0x800000010efbf350);
  uRam0000000113803460 = 0;
  uRam0000000113803468 = 0xe000000000000000;
  return;
}



/* Entry: 1018e27b8; end: 1018e2817; -[_TtC38AdPlayableWebViewFactoryImplementation18AdPlayableJsBridge init] */

void FUN_1018e27b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlayableWebViewFactoryImplementation.AdPlayableJsBridge",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e27e4);
  (*pcVar1)();
}



/* Entry: 1018e2818; end: 1018e2827; -[_TtC38AdPlayableWebViewFactoryImplementation18AdPlayableJsBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018e2818(long param_1)

{
  param_1 = param_1 + _DAT_112dd0948;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1018e2828; end: 1018e2847;  */

void FUN_1018e2828(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb6f0);
  return;
}



/* Entry: 1018e2848; end: 1018e29cf;  */

undefined1  [16] FUN_1018e2848(void)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  undefined1 auVar9 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)&lStack_60;
  iVar4 = (int)&lStack_60;
  iVar5 = (int)&lStack_60;
  uVar6 = unaff_x20;
  func_0x000107c3eb80();
  func_0x000107c61180();
  func_0x000107c60234(&uStack_50);
  func_0x000107c615e8(uVar6);
  puVar1 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&lStack_60,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (iVar3 != 0) goto LAB_1018e29bc;
  func_0x000107c3eb80();
  func_0x000107c61180();
  func_0x000107c60234(&uStack_50);
  func_0x000107c615e8(unaff_x20);
  uVar6 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  func_0x000107c6147c(&lStack_60,&uStack_50,puVar1 + 8,uVar6,6);
  lVar2 = lStack_60;
  if ((iVar4 == 0) || (lStack_60 == 0)) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    if (*(long *)(lStack_60 + 0x10) == 0) {
LAB_1018e2964:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x000107c61434(lStack_60);
      lVar7 = 0x6e6f69746361;
      uVar8 = 0;
      func_0x000100029284(0x6e6f69746361);
      if ((uVar8 & 1) == 0) {
        func_0x000107c6142c(lVar2);
        goto LAB_1018e2964;
      }
      func_0x0001000bb420(*(long *)(lVar2 + 0x38) + lVar7 * 0x20,&uStack_50);
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c6142c(lVar2);
    if (lStack_38 != 0) {
      func_0x000107c6147c(&lStack_60,&uStack_50,puVar1 + 8,PTR___sSSN_11034da80,6);
      if (iVar5 == 0) {
        lStack_60 = 0;
        uStack_58 = 0;
      }
      goto LAB_1018e29bc;
    }
  }
  func_0x00010006e7f4(&uStack_50);
  lStack_60 = 0;
  uStack_58 = 0;
LAB_1018e29bc:
  auVar9._8_8_ = uStack_58;
  auVar9._0_8_ = lStack_60;
  return auVar9;
}



/* Entry: 1018e29d0; end: 1018e2a37; -[_TtC38AdPlayableWebViewFactoryImplementation18AdPlayableJsBridge userContentController:didReceiveScriptMessage:] */

/* WARNING: Possible PIC construction at 0x0001018e2a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e2a1c) */

void FUN_1018e29d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1018e2cc4(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


