/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10139f2ac; end: 10139f31f; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f2ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d78858,0);
  func_0x000107c61614(param_1 + _DAT_112d78860,0);
  *(undefined8 *)(param_1 + _DAT_112d78868) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10139f320; end: 10139f353;  */

void FUN_10139f320(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10139f354; end: 10139f39b; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f354(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d78858);
  func_0x000107c61610(param_1 + _DAT_112d78860);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d78868));
  return;
}



/* Entry: 10139f39c; end: 10139f3bb;  */

void FUN_10139f39c(void)

{
  func_0x000107c61168(&PTR_PTR_1127cd3a0);
  return;
}



/* Entry: 10139f3bc; end: 10139f3c7; -[SCPreviewFeatureAIContentFeedbackServicesProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f3bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78898;
  func_0x000107c61428(param_1 + _DAT_112d78898,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139f3c8; end: 10139f3d3; -[SCPreviewFeatureAIContentFeedbackServicesProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78898;
  func_0x000107c61428(param_1 + _DAT_112d78898,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139f3d4; end: 10139f3df; -[SCPreviewFeatureAIContentFeedbackServicesProvider previewScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f3d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d788a0;
  func_0x000107c61428(param_1 + _DAT_112d788a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139f3e0; end: 10139f3eb; -[SCPreviewFeatureAIContentFeedbackServicesProvider setPreviewScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f3e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d788a0;
  func_0x000107c61428(param_1 + _DAT_112d788a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139f3ec; end: 10139f3f7; -[SCPreviewFeatureAIContentFeedbackServicesProvider ctlServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f3ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d788a8;
  func_0x000107c61428(param_1 + _DAT_112d788a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139f3f8; end: 10139f403; -[SCPreviewFeatureAIContentFeedbackServicesProvider setCtlServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d788a8;
  func_0x000107c61428(param_1 + _DAT_112d788a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139f404; end: 10139f40f; -[SCPreviewFeatureAIContentFeedbackServicesProvider filterControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d788b0;
  func_0x000107c61428(param_1 + _DAT_112d788b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139f410; end: 10139f41b; -[SCPreviewFeatureAIContentFeedbackServicesProvider setFilterControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d788b0;
  func_0x000107c61428(param_1 + _DAT_112d788b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139f41c; end: 10139f427; -[SCPreviewFeatureAIContentFeedbackServicesProvider asyncTaskCompletionAnnouncerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f41c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d788b8;
  func_0x000107c61428(param_1 + _DAT_112d788b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139f428; end: 10139f46b;  */

void FUN_10139f428(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10139f46c; end: 10139f477; -[SCPreviewFeatureAIContentFeedbackServicesProvider setAsyncTaskCompletionAnnouncerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d788b8;
  func_0x000107c61428(param_1 + _DAT_112d788b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139f478; end: 10139f4cb;  */

void FUN_10139f478(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139f4cc; end: 10139f513; -[SCPreviewFeatureAIContentFeedbackServicesProvider generativeContentReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f4cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d788c0;
  func_0x000107c61428(param_1 + _DAT_112d788c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10139f514; end: 10139f577; -[SCPreviewFeatureAIContentFeedbackServicesProvider setGenerativeContentReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d788c0;
  func_0x000107c61428(param_1 + _DAT_112d788c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10139f578; end: 10139f8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f578(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4f198();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c43e40();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c40e24();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c434a0();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c3e278();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = 0;
              func_0x00010139eb00();
              func_0x000107c613fc();
              puVar8 = PTR_PTR_1126ae810;
              func_0x000107c610f8();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c453e4();
              *(undefined **)(lVar7 + 0x40) = puVar8;
              *(undefined8 *)(lVar7 + 0x48) = 0;
              *(long *)(lVar7 + 0x10) = lVar1;
              *(long *)(lVar7 + 0x18) = lVar2;
              *(long *)(lVar7 + 0x20) = lVar3;
              *(long *)(lVar7 + 0x28) = lVar4;
              *(long *)(lVar7 + 0x30) = lVar5;
              func_0x000107c61174();
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              lVar9 = lVar6;
              func_0x000107c3dd34();
              func_0x000107c61180();
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar6);
              *(long *)(lVar7 + 0x38) = lVar9;
              uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d788c8);
              *(long *)(unaff_x20 + _DAT_112d788c8) = lVar7;
              func_0x000107c6157c(lVar7);
              func_0x000107c61574();
              FUN_10139e418();
              func_0x000107c6162c(lVar7);
              func_0x000107c61628();
              func_0x000107c61574();
              puVar8 = &UNK_1103ab238;
              func_0x000107c613fc(&UNK_1103ab238,0x20,7);
              *(long *)(puVar8 + 0x10) = lVar7;
              *(undefined8 *)(puVar8 + 0x18) = uVar12;
              func_0x0001000285a8(0x112d786a0,&UNK_10d937de0);
              func_0x000107c613fc();
              func_0x000107c61174(uVar12);
              pcVar10 = FUN_10139f8dc;
              func_0x0001000bdd8c(FUN_10139f8dc,puVar8);
              uVar11 = 0;
              FUN_1013a00a4(0);
              func_0x000107c610f8();
              func_0x00010139ffe8(pcVar10,uVar11);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar6);
              func_0x000107c61574(lVar7);
              func_0x000107c61170(uVar12);
              return;
            }
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            lVar1 = lVar5;
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10139f8dc; end: 10139f8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139f8dc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  long unaff_x20;
  undefined1 auVar15 [16];
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = lVar1;
  func_0x000107c6162c();
  uVar4 = *(undefined8 *)(lVar8 + 0x10);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar5 = uVar4;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c6162c(lVar1);
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar4 = uVar6;
  func_0x000107c5b1fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c6162c(lVar1);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar6 = uVar7;
  func_0x000107c3da60();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c6162c(lVar1);
  uVar7 = *(undefined8 *)(lVar1 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  func_0x000107c6162c(lVar1);
  lVar8 = *(long *)(lVar1 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar9 = *(undefined8 *)(lVar8 + _DAT_112ff6390);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  func_0x000107c6162c(lVar1);
  lVar8 = *(long *)(lVar1 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar10 = *(undefined8 *)(lVar8 + _DAT_112ff6380);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  lVar11 = 0;
  FUN_10139e0a0();
  lVar8 = lVar11;
  func_0x000107c610f8();
  auVar15 = NEON_fmov(0x402c000000000000,8);
  puVar3 = (undefined8 *)(lVar8 + _DAT_112d785b0);
  puVar3[1] = auVar15._8_8_;
  *puVar3 = auVar15._0_8_;
  lVar1 = _DAT_112d785b8;
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar13 = puVar12;
  func_0x000107c3fdd0(0x3fd3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  *(undefined **)(lVar8 + lVar1) = puVar13;
  *(undefined8 *)(lVar8 + _DAT_112d785c0) = 0;
  lVar1 = _DAT_112d785c8;
  puVar12 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar1) = puVar12;
  *(undefined1 *)(lVar8 + _DAT_112d785d0) = 0;
  *(undefined1 *)(lVar8 + _DAT_112d785d8) = 0;
  *(undefined8 *)(lVar8 + _DAT_112d78578) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112d78580) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112d78588) = uVar6;
  *(undefined8 *)(lVar8 + _DAT_112d78590) = uVar7;
  *(undefined8 *)(lVar8 + _DAT_112d78598) = uVar9;
  *(undefined8 *)(lVar8 + _DAT_112d785a0) = uVar10;
  *(undefined8 *)(lVar8 + _DAT_112d785a8) = uVar2;
  puVar12 = PTR_s_init_1125d9248;
  lStack_70 = lVar8;
  lStack_68 = lVar11;
  func_0x000107c61174(uVar2);
  plVar14 = &lStack_70;
  func_0x000107c61154(plVar14,puVar12);
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 10139f8e4; end: 10139f96f; -[SCPreviewFeatureAIContentFeedbackServicesProvider provide] */

void FUN_10139f8e4(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10139f578();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PreviewFeatureAIContentFeedbackImpl/SCPreviewFeatureAIContentFeedbackServicesProvider.swift"
                      ,0x5b,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10139f970);
  (*pcVar1)();
}



/* Entry: 10139f970; end: 10139f9a3; -[SCPreviewFeatureAIContentFeedbackServicesProvider __safeProvide] */

void FUN_10139f970(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10139f578();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10139f9a4; end: 10139f9e7; -[SCPreviewFeatureAIContentFeedbackServicesProvider end] */

void FUN_10139f9a4(undefined8 param_1)

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



/* Entry: 10139f9e8; end: 10139fd37;  */

void FUN_10139f9e8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10cf600)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010ef30a00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x69767265536c7463;
        if (((param_2 == 0x69767265536c7463) && (param_3 == -0x14ffffffff8c9a9d)) ||
           (func_0x000107c605b8(0x69767265536c7463,0xeb00000000736563,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53bb4();
        }
        else {
          uVar2 = 0xd000000000000019;
          if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10c5810)) ||
             (func_0x000107c605b8(0xd000000000000019,0x800000010ef3a7f0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c549c4();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10dfd50)) ||
               (func_0x000107c605b8(0xd000000000000024,0x800000010ef202b0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5295c();
            }
            else {
              uVar2 = 0xd000000000000023;
              if (((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef10c57f0)) &&
                 (func_0x000107c605b8(0xd000000000000023,0x800000010ef3a810,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "PreviewFeatureAIContentFeedbackImpl/SCPreviewFeatureAIContentFeedbackServicesProvider.swift"
                                    ,0x5b,2,0x46,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10139fd38);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c54e40();
            }
          }
        }
        goto LAB_10139fa74;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c577dc();
  }
LAB_10139fa74:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10139fd38; end: 10139fde3; -[SCPreviewFeatureAIContentFeedbackServicesProvider setValue:forIvarName:] */

void FUN_10139fd38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10139f9e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10139fde4; end: 10139fe9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139fde4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d78898,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d788a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d788a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d788b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d788b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d788c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d788c8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10139fea0; end: 10139febf; -[SCPreviewFeatureAIContentFeedbackServicesProvider init] */

void FUN_10139fea0(void)

{
  FUN_10139fde4();
  return;
}



/* Entry: 10139fec0; end: 10139fef3;  */

void FUN_10139fec0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10139fef4; end: 10139ff7b; -[SCPreviewFeatureAIContentFeedbackServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139fef4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d78898);
  func_0x000107c61610(param_1 + _DAT_112d788a0);
  func_0x000107c61610(param_1 + _DAT_112d788a8);
  func_0x000107c61610(param_1 + _DAT_112d788b0);
  func_0x000107c61610(param_1 + _DAT_112d788b8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d788c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d788c8));
  return;
}



/* Entry: 10139ff7c; end: 10139ff9b;  */

void FUN_10139ff7c(void)

{
  func_0x000107c61168(&PTR_PTR_112d78910);
  return;
}



/* Entry: 10139ff9c; end: 1013a0033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139ff9c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d78998) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013a0034; end: 1013a0093; -[_TtC34PreviewFeatureAIContentFeedbackAPI42PreviewFeatureAIContentFeedbackAPIServices init] */

void FUN_1013a0034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFeatureAIContentFeedbackAPI.PreviewFeatureAIContentFeedbackAPIServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a0060);
  (*pcVar1)();
}



/* Entry: 1013a0094; end: 1013a00a3; -[_TtC34PreviewFeatureAIContentFeedbackAPI42PreviewFeatureAIContentFeedbackAPIServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a0094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d78998));
  return;
}



/* Entry: 1013a00a4; end: 1013a00c3;  */

void FUN_1013a00a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127cd4b0);
  return;
}



/* Entry: 1013a00c4; end: 1013a0123;  */

undefined * FUN_1013a00c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x20);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1013a07c4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x20) = puVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61434(puVar1);
  return puVar2;
}



/* Entry: 1013a0124; end: 1013a0363;  */

long FUN_1013a0124(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x00010006c804();
  FUN_1013a00c4();
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    lVar1 = param_1;
    uVar3 = param_2;
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      lVar1 = *(long *)(*(long *)(lVar5 + 0x38) + lVar1 * 8);
      func_0x000107c61174(lVar1);
      func_0x000107c6142c(lVar5);
      goto LAB_1013a01fc;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c6142c(lVar5);
  lVar1 = param_1;
  func_0x0001013a0228(param_1,param_2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174();
  uVar2 = uVar4;
  func_0x000107c61434(uVar4);
  func_0x000107c61558();
  FUN_1013a03d8(lVar1,param_1,param_2,uVar2);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
LAB_1013a01fc:
  func_0x000107c6142c(lVar5);
  func_0x000100070bfc();
  return lVar1;
}



/* Entry: 1013a0364; end: 1013a036b;  */

undefined8 FUN_1013a0364(void)

{
  return 0;
}



/* Entry: 1013a036c; end: 1013a03a3;  */

void FUN_1013a036c(long param_1)

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



/* Entry: 1013a03a4; end: 1013a03d7;  */

void FUN_1013a03a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013a03d8; end: 1013a0527;  */

void FUN_1013a03d8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013a04b0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1013a0528(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013a0478);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1013a15b0();
    lVar6 = *unaff_x20;
    goto joined_r0x0001013a04c4;
  }
  lVar6 = *unaff_x20;
joined_r0x0001013a04c4:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013a0528);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1013a0528; end: 1013a07c3;  */

void FUN_1013a0528(long param_1,ulong param_2)

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
  uVar6 = 0x112d78a78;
  func_0x0001000285a8(0x112d78a78,&UNK_10d9381e0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1013a0790:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1013a07c0);
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
          goto LAB_1013a0790;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1013a07c4);
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



/* Entry: 1013a07c4; end: 1013a08c3;  */

undefined * FUN_1013a07c4(long param_1)

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
    func_0x0001000285a8(0x112d78a78,&UNK_10d9381e0);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1013a08c0);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1013a08c4);
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



/* Entry: 1013a08c4; end: 1013a08df;  */

void FUN_1013a08c4(long param_1,long param_2)

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



/* Entry: 1013a08e0; end: 1013a0927;  */

void FUN_1013a08e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 1013a0928; end: 1013a0963;  */

void FUN_1013a0928(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013a0964; end: 1013a0983;  */

void FUN_1013a0964(void)

{
  func_0x000100b9724c();
  return;
}



/* Entry: 1013a0984; end: 1013a09a7;  */

undefined8 FUN_1013a0984(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x28);
  *(undefined8 *)(*unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1013a09a8; end: 1013a0a8f;  */

void FUN_1013a09a8(long param_1,undefined8 param_2)

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



/* Entry: 1013a0a90; end: 1013a0adf;  */

void FUN_1013a0a90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013a0ae0; end: 1013a0ae7;  */

void FUN_1013a0ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1013a0ae8; end: 1013a0b03;  */

void FUN_1013a0ae8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001013a09f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),1);
  return;
}



/* Entry: 1013a0b04; end: 1013a0b1b;  */

void FUN_1013a0b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1013a0b1c; end: 1013a0bc7;  */

void FUN_1013a0b1c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013a0bc8; end: 1013a0c27; -[_TtC23LensStoryLensProcessing23LensStoryLifecycleEvent init] */

void FUN_1013a0bc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensStoryLensProcessing.LensStoryLifecycleEvent",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a0bf4);
  (*pcVar1)();
}



/* Entry: 1013a0c28; end: 1013a0c37; -[_TtC23LensStoryLensProcessing23LensStoryLifecycleEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a0c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d78bf0));
  return;
}



/* Entry: 1013a0c38; end: 1013a0c57;  */

void FUN_1013a0c38(void)

{
  func_0x000107c61168(&PTR_PTR_1127cd570);
  return;
}



/* Entry: 1013a0c58; end: 1013a0dbf;  */

int FUN_1013a0c58(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013a0cd4;
        goto LAB_1013a0cb8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013a0cb8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1013a0cd4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013a0dc0; end: 1013a0dff;  */

void FUN_1013a0dc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d78c20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93815c;
  func_0x000107c61520(&UNK_10d93815c,&UNK_1103ab560);
  puRam0000000112d78c20 = puVar1;
  return;
}



/* Entry: 1013a0e00; end: 1013a0e07;  */

undefined8 FUN_1013a0e00(void)

{
  return 1;
}



/* Entry: 1013a0e08; end: 1013a0ea7;  */

void FUN_1013a0e08(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013a0ea8; end: 1013a0eb7;  */

void FUN_1013a0ea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1013a0eb8; end: 1013a0ff3;  */

void FUN_1013a0eb8(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x000107c6157c(uVar3);
  func_0x00010006c804();
  func_0x000107c61574(uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x70);
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x68);
    func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
    func_0x000107c61434(lVar4);
    lVar6 = lVar5;
    FUN_1013a0124(lVar5,lVar4);
    lVar1 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar1 != 0) {
      func_0x000107c4139c(lVar1);
      func_0x000107c615e8(lVar1);
    }
    plVar2 = (long *)(unaff_x20 + 0x10);
    func_0x0001000a8868(plVar2,*(undefined8 *)(unaff_x20 + 0x28));
    lVar6 = *plVar2;
    func_0x00010006c804();
    FUN_1013a00c4();
    func_0x0001013a14f4(lVar5,lVar4);
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    *(long **)(lVar6 + 0x20) = plVar2;
    func_0x000107c6142c(uVar3);
    func_0x000100070bfc();
    func_0x000107c6142c(lVar4);
  }
  func_0x000100070bfc();
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1013a0ff4; end: 1013a1013;  */

void FUN_1013a0ff4(void)

{
  FUN_1013a0eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013a1014; end: 1013a108b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a1014(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1013a108c(*(undefined8 *)(param_1 + _DAT_112d78bf0),
                  *(undefined1 *)(param_1 + _DAT_112d78be8));
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1013a108c; end: 1013a11b3;  */

void FUN_1013a108c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  uVar5 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c506e4();
  func_0x000107c61180();
  FUN_1013a1200(param_2,uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  puVar3 = &UNK_1103ab608;
  func_0x000107c613fc(&UNK_1103ab608,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uStack_50 = 0x1013a18e0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1010186a8;
  puStack_58 = &UNK_1103ab620;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c5dc64(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1013a11b4; end: 1013a11ff;  */

void FUN_1013a11b4(long param_1,undefined8 param_2)

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



/* Entry: 1013a1200; end: 1013a1463;  */

undefined * FUN_1013a1200(char param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = param_2;
  FUN_1013a0124(param_2,param_3);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar9 = puVar3;
    FUN_1013a18e8();
    puVar2 = &UNK_1103ab6c8;
    func_0x000107c613f8(&UNK_1103ab6c8,puVar9,0,0);
    puVar9 = puVar2;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar2);
    func_0x000107c451ac(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar9);
  }
  else {
    puVar3 = puVar2;
    if (param_1 == '\x01') {
      func_0x000107c4edfc();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(puVar2);
    }
    else {
      func_0x00010006c804();
      lVar8 = *(long *)(unaff_x20 + 0x70);
      if ((lVar8 != 0) &&
         (((puVar9 = *(undefined **)(unaff_x20 + 0x68), puVar9 != param_2 || (lVar8 != param_3)) &&
          (puVar4 = puVar9, func_0x000107c605b8(puVar9,lVar8,param_2,param_3,0),
          ((ulong)puVar4 & 1) == 0)))) {
        func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
        func_0x000107c61434(lVar8);
        puVar4 = puVar9;
        FUN_1013a0124(puVar9,lVar8);
        puVar5 = puVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        if (puVar5 != (undefined *)0x0) {
          func_0x000107c4139c(puVar5);
          func_0x000107c615e8(puVar5);
        }
        plVar6 = (long *)(unaff_x20 + 0x10);
        func_0x0001000a8868(plVar6,*(undefined8 *)(unaff_x20 + 0x28));
        lVar10 = *plVar6;
        func_0x00010006c804();
        FUN_1013a00c4();
        func_0x0001013a14f4(puVar9,lVar8);
        func_0x000107c61170();
        uVar7 = *(undefined8 *)(lVar10 + 0x20);
        *(long **)(lVar10 + 0x20) = plVar6;
        func_0x000107c6142c(uVar7);
        func_0x000100070bfc();
        func_0x000107c6142c(lVar8);
      }
      uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
      *(undefined **)(unaff_x20 + 0x68) = param_2;
      *(long *)(unaff_x20 + 0x70) = param_3;
      func_0x000107c6142c(uVar7);
      func_0x000107c61434(param_3);
      func_0x000107c3d080(puVar2);
      func_0x000107c61180();
      func_0x000100070bfc();
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(puVar2);
    }
  }
  return puVar3;
}



/* Entry: 1013a1464; end: 1013a15af;  */

/* WARNING: Possible PIC construction at 0x0001013a14a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a14a8) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

void FUN_1013a1464(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    func_0x0001002ed07c(0);
    param_2 = 1;
    func_0x000107c6010c(1);
    func_0x000107c3fefc(param_3);
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1013a15b0; end: 1013a171f;  */

void FUN_1013a15b0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112d78a78,&UNK_10d9381e0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1013a168c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1013a168c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1013a1720);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1013a16f8;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1013a16f8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1013a1720; end: 1013a18cf;  */

void FUN_1013a1720(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_1013a1814:
          if ((long)param_1 < (long)uVar8) goto LAB_1013a179c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_1013a1814;
LAB_1013a179c:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1013a18d0);
  (*pcVar5)();
}



/* Entry: 1013a18d0; end: 1013a18e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a18d0(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1013a108c(*(undefined8 *)(param_1 + _DAT_112d78bf0),
                  *(undefined1 *)(param_1 + _DAT_112d78be8));
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1013a18e8; end: 1013a1927;  */

void FUN_1013a18e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d78ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d938274;
  func_0x000107c61520(&UNK_10d938274,&UNK_1103ab6c8);
  puRam0000000112d78ce8 = puVar1;
  return;
}



/* Entry: 1013a1928; end: 1013a1a17;  */

uint FUN_1013a1928(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1013a1a18; end: 1013a1a57;  */

void FUN_1013a1a18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d78cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93824c;
  func_0x000107c61520(&UNK_10d93824c,&UNK_1103ab6c8);
  puRam0000000112d78cf0 = puVar1;
  return;
}



/* Entry: 1013a1a58; end: 1013a1a5f;  */

void FUN_1013a1a58(long param_1,long param_2)

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



/* Entry: 1013a1a60; end: 1013a1abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a1a60(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d78d18);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    func_0x000107c61574(uVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1013a1ac0; end: 1013a1af3; -[SCLensStoryLensProcessingEntryPoint end] */

void FUN_1013a1ac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013a1a60();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013a1af4; end: 1013a1b27;  */

void FUN_1013a1af4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013a1b28; end: 1013a1b8f; -[SCLensStoryLensProcessingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a1b28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d78cf8);
  func_0x000107c61610(param_1 + _DAT_112d78d00);
  func_0x000107c61610(param_1 + _DAT_112d78d08);
  func_0x000107c61610(param_1 + _DAT_112d78d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d78d18));
  return;
}



/* Entry: 1013a1b90; end: 1013a1baf;  */

void FUN_1013a1b90(void)

{
  func_0x000107c61168(&PTR_PTR_1127cd638);
  return;
}



/* Entry: 1013a1bb0; end: 1013a1c1f;  */

void FUN_1013a1bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = 0x6569666c6573796d;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xe800000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1013a1c20; end: 1013a1d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a1c20(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_60;
  long lStack_58;
  
  plVar10 = &lStack_60;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar6);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_112f97078);
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = 0;
    FUN_1013a24a0();
    lVar9 = lVar8;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar9 + _DAT_112d78e18);
    *puVar1 = 0x626e4f49416e6547;
    puVar1[1] = 0xef676e696472616f;
    *(undefined8 *)(lVar9 + _DAT_112d78e68) = 999;
    *(undefined4 *)(lVar9 + _DAT_112d78e70) = 0;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112d78e10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar9 + _DAT_112d78e20) = uVar12;
    *(undefined8 *)(lVar9 + _DAT_112d78e28) = uVar11;
    *(long *)(lVar9 + _DAT_112d78e30) = lVar7;
    puVar4 = PTR_s_init_1125d9248;
    lStack_60 = lVar9;
    lStack_58 = lVar8;
    func_0x000107c61174(uVar12);
    func_0x000107c61154(&lStack_60,puVar4);
    func_0x000107c4fba8(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(plVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1013a1d98);
  (*pcVar5)();
}



/* Entry: 1013a1d98; end: 1013a1de3;  */

void FUN_1013a1d98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013a1de4; end: 1013a1e03;  */

void FUN_1013a1de4(void)

{
  FUN_1013a1c20();
  return;
}



/* Entry: 1013a1e04; end: 1013a1e0b;  */

undefined8 FUN_1013a1e04(void)

{
  return 0;
}



/* Entry: 1013a1e0c; end: 1013a1e2b;  */

void FUN_1013a1e0c(void)

{
  func_0x000107c61168(&PTR_PTR_112d78d88);
  return;
}



/* Entry: 1013a1e2c; end: 1013a1e77; -[_TtC24GenAIOnboardingDeeplinks23MySelfieDeeplinksPlugin identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a1e2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d78e18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d78e18))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013a1e78; end: 1013a1e7f; -[_TtC24GenAIOnboardingDeeplinks23MySelfieDeeplinksPlugin priority] */

undefined8 FUN_1013a1e78(void)

{
  return 999;
}



/* Entry: 1013a1e80; end: 1013a1f33; -[_TtC24GenAIOnboardingDeeplinks23MySelfieDeeplinksPlugin canProvideProcessorForFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1013a1e80(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  func_0x000107c5faec();
  plVar1 = (long *)(param_1 + _DAT_112d78e10);
  lVar4 = *plVar1;
  lVar2 = plVar1[1];
  func_0x000107c61174(param_1);
  func_0x000107c5fb5c(lVar4,lVar2);
  if (lVar4 < 1) {
    uVar3 = 0;
  }
  else if (param_3 == *plVar1 && param_2 == plVar1[1]) {
    uVar3 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,*plVar1,plVar1[1],0);
    uVar3 = (uint)param_3;
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return uVar3 & 1;
}



/* Entry: 1013a1f34; end: 1013a1f3b; -[_TtC24GenAIOnboardingDeeplinks23MySelfieDeeplinksPlugin isValidDeepLink:] */

undefined8 FUN_1013a1f34(void)

{
  return 1;
}



/* Entry: 1013a1f3c; end: 1013a2057; -[_TtC24GenAIOnboardingDeeplinks23MySelfieDeeplinksPlugin makeDeepLinkProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a1f3c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d78e20);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112d78e28);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112d78e30);
  func_0x0001013a24c0();
  lVar3 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d78e50);
  *puVar1 = 0x696472616f626e6f;
  puVar1[1] = 0xea0000000000676e;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d78e58);
  *puVar1 = 0x6974617669746361;
  puVar1[1] = 0xea00000000006e6f;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d78e60);
  *puVar1 = 0x73676e6974746573;
  puVar1[1] = 0xe800000000000000;
  *(undefined8 *)(lVar3 + _DAT_112d78e38) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112d78e40) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112d78e48) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_40,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013a2058; end: 1013a2083; -[_TtC24GenAIOnboardingDeeplinks23MySelfieDeeplinksPlugin init] */

void FUN_1013a2058(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIOnboardingDeeplinks.MySelfieDeeplinksPlugin",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a2084);
  (*pcVar1)();
}



/* Entry: 1013a2084; end: 1013a208f;  */

void FUN_1013a2084(void)

{
  FUN_1013a24a0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013a2090; end: 1013a20ff; -[_TtC24GenAIOnboardingDeeplinks23MySelfieDeeplinksPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013a20d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a20d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a2090(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d78e10 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d78e18 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d78e20));
  return;
}



/* Entry: 1013a2100; end: 1013a2107; -[_TtC24GenAIOnboardingDeeplinks25MySelfieDeeplinkProcessor shouldForceNavigation] */

undefined8 FUN_1013a2100(void)

{
  return 0;
}



/* Entry: 1013a2108; end: 1013a216b; -[_TtC24GenAIOnboardingDeeplinks25MySelfieDeeplinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1013a2108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1013a24e0(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013a216c; end: 1013a216f; -[_TtC24GenAIOnboardingDeeplinks25MySelfieDeeplinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1013a216c(void)

{
  return;
}



/* Entry: 1013a2170; end: 1013a23b3;  */

/* WARNING: Possible PIC construction at 0x0001013a21ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013a21e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013a2248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013a2258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013a224c) */
/* WARNING: Removing unreachable block (ram,0x0001013a21ec) */
/* WARNING: Removing unreachable block (ram,0x0001013a2254) */
/* WARNING: Removing unreachable block (ram,0x0001013a2224) */
/* WARNING: Removing unreachable block (ram,0x0001013a21b0) */
/* WARNING: Removing unreachable block (ram,0x0001013a2270) */
/* WARNING: Removing unreachable block (ram,0x0001013a21b4) */
/* WARNING: Removing unreachable block (ram,0x0001013a2280) */
/* WARNING: Removing unreachable block (ram,0x0001013a21d0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001013a225c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013a2170(undefined8 param_1)

{
  func_0x00010451338c();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013a23b4; end: 1013a23df; -[_TtC24GenAIOnboardingDeeplinks25MySelfieDeeplinkProcessor init] */

void FUN_1013a23b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIOnboardingDeeplinks.MySelfieDeeplinkProcessor",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013a23e0);
  (*pcVar1)();
}



/* Entry: 1013a23e0; end: 1013a23eb;  */

void FUN_1013a23e0(void)

{
  (*(code *)0x1013a24c0)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


