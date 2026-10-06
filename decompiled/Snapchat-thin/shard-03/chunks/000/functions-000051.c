/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102422634; end: 102422693; -[_TtC44ComposerSendToStoryOnboardingServiceProvider38ComposerSendToStoryOnboardingPresenter init] */

void FUN_102422634(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSendToStoryOnboardingServiceProvider.ComposerSendToStoryOnboardingPresenter"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102422660);
  (*pcVar1)();
}



/* Entry: 102422694; end: 1024226fb; -[_TtC44ComposerSendToStoryOnboardingServiceProvider38ComposerSendToStoryOnboardingPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024226c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024226e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024226c4) */
/* WARNING: Removing unreachable block (ram,0x0001024226e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422694(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e98100));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e98108));
  return;
}



/* Entry: 1024226fc; end: 10242271b;  */

void FUN_1024226fc(void)

{
  func_0x000107c61168(&PTR_PTR_11283d520);
  return;
}



/* Entry: 10242271c; end: 10242274f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242271c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e98100);
  *(undefined8 *)(unaff_x20 + _DAT_112e98100) = param_1;
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_1);
  return;
}



/* Entry: 102422750; end: 10242279b; -[_TtC44ComposerSendToStoryOnboardingServiceProvider38ComposerSendToStoryOnboardingPresenter didDismissCustomStoryMembers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422750(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e98118);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10242279c; end: 1024227e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242279c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112e98100);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112e98120);
      func_0x000107c615f0(lVar4);
      func_0x000107c61174(uVar5);
      func_0x000107c5fadc(uVar2,uVar3);
      func_0x000107c3edb4(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112e98118));
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024227e8; end: 10242285f;  */

void FUN_1024227e8(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x00010431a374(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)(1);
  return;
}



/* Entry: 102422860; end: 10242286b;  */

void FUN_102422860(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102422868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10242286c; end: 1024228a3;  */

void FUN_10242286c(void)

{
  long unaff_x20;
  
  func_0x000102421c58(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                      *(undefined1 *)(unaff_x20 + 0x29),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1024228a4; end: 1024228a7;  */

void FUN_1024228a4(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x00010431a374(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)(param_1);
  return;
}



/* Entry: 1024228a8; end: 1024228e7;  */

void FUN_1024228a8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x00010431a374(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)(param_1);
  return;
}



/* Entry: 1024228e8; end: 1024228eb;  */

void FUN_1024228e8(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x00010431a374(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)();
  return;
}



/* Entry: 1024228ec; end: 102422917;  */

void FUN_1024228ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102422918; end: 10242294f;  */

void FUN_102422918(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x00010431a374(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)();
  return;
}



/* Entry: 102422950; end: 102422973;  */

void FUN_102422950(long param_1,long param_2)

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



/* Entry: 102422974; end: 102422a03;  */

void FUN_102422974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  return;
}



/* Entry: 102422a04; end: 102422a2b;  */

void FUN_102422a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  return;
}



/* Entry: 102422a2c; end: 102422c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102422a2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar9 != 0) {
    uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_11302c6c0);
    puVar10 = &UNK_110504cc8;
    func_0x000107c613fc(&UNK_110504cc8,0x30,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar11;
    *(undefined8 *)(puVar10 + 0x18) = uVar4;
    *(long *)(puVar10 + 0x20) = lVar9;
    *(undefined8 *)(puVar10 + 0x28) = uVar14;
    func_0x0001000285a8(0x112e98150,&UNK_10daa34e0);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c61174(lVar9);
    pcVar7 = FUN_102422d84;
    func_0x0001000bdd8c(FUN_102422d84,puVar10);
    puVar10 = &UNK_110504cf0;
    func_0x000107c613fc(&UNK_110504cf0,0x28,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar11;
    *(undefined8 *)(puVar10 + 0x18) = uVar1;
    *(undefined8 *)(puVar10 + 0x20) = uVar8;
    func_0x0001000285a8(0x112e98158,&UNK_10daa34e8);
    func_0x000107c613fc();
    func_0x000107c61174(uVar11);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar8);
    pcVar12 = FUN_102422e70;
    func_0x0001000bdd8c(FUN_102422e70,puVar10);
    puVar10 = &UNK_110504d18;
    func_0x000107c613fc(&UNK_110504d18,0x30,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar2;
    *(undefined8 *)(puVar10 + 0x18) = uVar5;
    *(undefined8 *)(puVar10 + 0x20) = uVar3;
    *(undefined8 *)(puVar10 + 0x28) = uVar6;
    func_0x0001000285a8(0x112e98160,&UNK_10daa34f0);
    func_0x000107c613fc();
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar6);
    pcVar13 = FUN_102422f8c;
    func_0x0001000bdd8c(FUN_102422f8c,puVar10);
    FUN_1024232cc(0);
    func_0x000107c610f8();
    func_0x0001024231b0(pcVar7,pcVar12,pcVar13);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar14);
    return pcVar7;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x102422c7c);
  (*pcVar7)();
}



/* Entry: 102422c7c; end: 102422d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422c7c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  func_0x000107c41104();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(param_3 + _DAT_11302d2e0);
    uVar6 = *(undefined8 *)(param_3 + _DAT_11302d2d8);
    lVar3 = 0;
    FUN_102421ad0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112e980b0) = param_2;
    *(undefined8 *)(lVar4 + _DAT_112e980b8) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_112e980c0) = uVar6;
    *(undefined8 *)(lVar4 + _DAT_112e980c8) = param_4;
    *(undefined8 *)(lVar4 + _DAT_112e980d0) = param_5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61154(&lStack_60,puVar1);
    *param_1 = plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102422d84);
  (*pcVar2)();
}



/* Entry: 102422d84; end: 102422d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422d84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_60;
  long lStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_60;
  func_0x000107c41104();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar10 = *(undefined8 *)(lVar7 + _DAT_11302d2e0);
    uVar9 = *(undefined8 *)(lVar7 + _DAT_11302d2d8);
    lVar6 = 0;
    FUN_102421ad0();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(long *)(lVar7 + _DAT_112e980b0) = lVar5;
    *(undefined8 *)(lVar7 + _DAT_112e980b8) = uVar10;
    *(undefined8 *)(lVar7 + _DAT_112e980c0) = uVar9;
    *(undefined8 *)(lVar7 + _DAT_112e980c8) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112e980d0) = uVar2;
    puVar3 = PTR_s_init_1125d9248;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c61174(uVar10);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61154(&lStack_60,puVar3);
    *param_1 = plVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102422d84);
  (*pcVar4)();
}



/* Entry: 102422d90; end: 102422e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422d90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  lVar3 = param_2;
  func_0x000107c410f8();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102422e6c);
    (*pcVar2)();
  }
  func_0x000107c410fc();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar4 = 0;
    FUN_1024207e4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(long *)(lVar5 + _DAT_112e98068) = lVar3;
    *(long *)(lVar5 + _DAT_112e98070) = param_2;
    *(undefined8 *)(lVar5 + _DAT_112e98078) = param_3;
    *(undefined8 *)(lVar5 + _DAT_112e98080) = param_4;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61154(&lStack_50,puVar1);
    *param_1 = plVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102422e70);
  (*pcVar2)();
}



/* Entry: 102422e70; end: 102422e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422e70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar8 = &lStack_50;
  lVar4 = lVar5;
  func_0x000107c410f8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102422e6c);
    (*pcVar3)();
  }
  func_0x000107c410fc();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = 0;
    FUN_1024207e4();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(long *)(lVar7 + _DAT_112e98068) = lVar4;
    *(long *)(lVar7 + _DAT_112e98070) = lVar5;
    *(undefined8 *)(lVar7 + _DAT_112e98078) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112e98080) = uVar9;
    puVar2 = PTR_s_init_1125d9248;
    lStack_50 = lVar7;
    lStack_48 = lVar6;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar9);
    func_0x000107c61154(&lStack_50,puVar2);
    *param_1 = plVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102422e70);
  (*pcVar3)();
}



/* Entry: 102422e7c; end: 102422f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422e7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  FUN_1024226fc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e98100) = 0;
  *(undefined8 *)(lVar3 + _DAT_112e98108) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e98110) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112e98118) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112e98120) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_1105049d0;
  return;
}



/* Entry: 102422f50; end: 102422f8b;  */

void FUN_102422f50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102422f8c; end: 102422f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422f8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = 0;
  FUN_1024226fc();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112e98100) = 0;
  *(undefined8 *)(lVar7 + _DAT_112e98108) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112e98110) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112e98118) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112e98120) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  param_1[1] = &PTR_DAT_1105049d0;
  return;
}



/* Entry: 102422f98; end: 102423117;  */

/* WARNING: Possible PIC construction at 0x000102422fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102422fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102422fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102422fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102422fe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102422fd8) */
/* WARNING: Removing unreachable block (ram,0x000102422fc8) */
/* WARNING: Removing unreachable block (ram,0x000102422fb8) */
/* WARNING: Removing unreachable block (ram,0x000102422fa8) */
/* WARNING: Removing unreachable block (ram,0x000102422fe8) */

void FUN_102422f98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102423118; end: 10242313b;  */

void FUN_102423118(undefined8 *param_1,undefined8 param_2)

{
  FUN_102422a2c();
  *param_1 = param_2;
  return;
}



/* Entry: 10242313c; end: 102423223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242313c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e98288) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e98290) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e98298) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102423224; end: 102423283; -[_TtC37ComposerSendToStoryOnboardingServices37ComposerSendToStoryOnboardingServices init] */

void FUN_102423224(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSendToStoryOnboardingServices.ComposerSendToStoryOnboardingServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102423250);
  (*pcVar1)();
}



/* Entry: 102423284; end: 1024232cb; -[_TtC37ComposerSendToStoryOnboardingServices37ComposerSendToStoryOnboardingServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024232a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024232a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102423284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e98288));
  return;
}



/* Entry: 1024232cc; end: 1024232eb;  */

void FUN_1024232cc(void)

{
  func_0x000107c61168(&PTR_PTR_11283d600);
  return;
}



/* Entry: 1024232ec; end: 1024233fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1024232ec(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112e98330;
  uVar3 = (uint)*(byte *)(unaff_x20 + _DAT_112e98330);
  if (*(byte *)(unaff_x20 + _DAT_112e98330) == 2) {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112e982e0);
    uVar2 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f09a4e0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    *(char *)(unaff_x20 + lVar1) = (char)uVar3;
  }
  return uVar3 & 1;
}



/* Entry: 1024233fc; end: 10242357f;  */

/* WARNING: Possible PIC construction at 0x000102423428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010242342c) */
/* WARNING: Removing unreachable block (ram,0x000102423554) */
/* WARNING: Removing unreachable block (ram,0x000102423430) */
/* WARNING: Removing unreachable block (ram,0x00010242345c) */
/* WARNING: Removing unreachable block (ram,0x000102423460) */
/* WARNING: Removing unreachable block (ram,0x000102423474) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024233fc(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112e982e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102423580; end: 102423627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102423580(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e98328;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e98328);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((*(char *)(unaff_x20 + _DAT_112e982f0) == '\x01') &&
       (FUN_102424550(), puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8, ((ulong)puVar2 & 1) != 0))
    {
      puVar3 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61434(puVar3);
    func_0x000107c6142c(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61434(puVar2);
  return puVar3;
}



/* Entry: 102423628; end: 10242375f;  */

/* WARNING: Possible PIC construction at 0x000102423654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102423658) */
/* WARNING: Removing unreachable block (ram,0x000102423738) */
/* WARNING: Removing unreachable block (ram,0x00010242365c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102423628(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112e982e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102423760; end: 1024237eb; -[_TtC50ComposerSendToRankedRecipientsStoreServiceProvider33ComposerRankedRecipientsDataStore fetchEncodedSubjects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102423760(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112e98310) == 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    FUN_102423580();
    lVar2 = lVar1;
    FUN_102423628();
    func_0x000107c6142c(lVar1);
    func_0x000107c5cb24(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c5cb24(*(long *)(param_1 + _DAT_112e98310));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024237ec; end: 1024238eb; -[_TtC50ComposerSendToRankedRecipientsStoreServiceProvider33ComposerRankedRecipientsDataStore fetchRankedRecipientIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024237ec(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112e98318) == 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    FUN_1024233fc();
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c5cb24(*(long *)(param_1 + _DAT_112e98318));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024238ec; end: 102423e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1024238ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined8 uVar14;
  
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e982c8) + _DAT_1130349f0);
  puVar5 = &UNK_110504e90;
  func_0x000107c613fc(&UNK_110504e90,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar12;
  func_0x0001000285a8(0x112d6c540,&UNK_10d92f3c0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0x102424724;
  func_0x0001000b64ac(0x102424724,puVar5);
  uVar4 = *(undefined1 *)(unaff_x20 + _DAT_112e982f0);
  lVar11 = *(long *)(unaff_x20 + _DAT_112e982d0);
  uVar14 = *(undefined8 *)(lVar11 + _DAT_113034cb8);
  uVar9 = *(undefined8 *)(lVar11 + _DAT_113034cb0);
  uVar2 = ((undefined8 *)(lVar11 + _DAT_113034cb0))[1];
  puVar13 = *(undefined **)(lVar11 + _DAT_113034cf8);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    puVar5 = puVar13;
  }
  uVar1 = *(undefined8 *)(lVar11 + _DAT_113034cf0);
  uVar3 = ((undefined8 *)(lVar11 + _DAT_113034cf0))[1];
  uVar7 = uVar6;
  func_0x000102001dd8();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(puVar13);
  func_0x000107c61434(uVar3);
  func_0x0001000c2068(uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e98308);
  func_0x000104885238(uVar8);
  func_0x000107c61574(uVar7);
  puVar13 = &UNK_110504eb8;
  func_0x000107c613fc(&UNK_110504eb8,0x48,7);
  puVar13[0x10] = uVar4;
  *(undefined8 *)(puVar13 + 0x18) = uVar9;
  *(undefined8 *)(puVar13 + 0x20) = uVar2;
  *(undefined8 *)(puVar13 + 0x28) = uVar1;
  *(undefined8 *)(puVar13 + 0x30) = uVar3;
  *(undefined **)(puVar13 + 0x38) = puVar5;
  *(undefined8 *)(puVar13 + 0x40) = uVar14;
  puVar5 = &UNK_110504ee0;
  func_0x000107c613fc(&UNK_110504ee0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10242472c;
  *(undefined **)(puVar5 + 0x18) = puVar13;
  uVar9 = 0;
  func_0x000103aa7ef0(0);
  pcVar10 = FUN_10242475c;
  func_0x0001000bfde0(FUN_10242475c,puVar5,uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar5);
  return pcVar10;
}



/* Entry: 102423e48; end: 10242433b;  */

void FUN_102423e48(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_100;
  ulong uStack_e8;
  ulong uStack_d8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar5 = *param_2;
  func_0x000107c4fa70();
  func_0x000107c61180();
  uVar6 = 0;
  FUN_1024247c8(0,0x112d726d8,&PTR_PTR_1126b5438);
  uVar7 = uVar5;
  func_0x000107c5fc54(uVar5,uVar6);
  func_0x000107c61170(uVar5);
  if (uVar7 >> 0x3e == 0) {
    uStack_d8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_d8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uStack_d8 = uVar7;
    }
    func_0x000107c60480();
  }
  uStack_e8 = uVar7 & 0xffffffffffffff8;
  puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0;
  while( true ) {
    if (uStack_d8 == uVar5) {
      func_0x000107c6142c(uVar7);
      puVar16 = puStack_100;
      func_0x00010102c3b8(puStack_100);
      func_0x000107c6142c(puStack_100);
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      puVar17 = puVar16;
      func_0x000107c5fc48(puVar16,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar16);
      func_0x000107c45788();
      func_0x000107c61170(puVar17);
      *param_1 = puVar15;
      return;
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_e8 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102424314);
        (*pcVar4)();
      }
      uVar8 = *(ulong *)(uVar7 + uVar5 * 8 + 0x20);
      func_0x000107c61174(uVar8);
    }
    else {
      uVar8 = uVar5;
      func_0x000102424840(uVar5,uVar7);
    }
    uVar1 = uVar5 + 1;
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102424310);
      (*pcVar4)();
    }
    uStack_88 = 0;
    lStack_80 = 0;
    puVar16 = &UNK_110504f30;
    func_0x000107c613fc(&UNK_110504f30,0x18,7);
    *(undefined8 **)(puVar16 + 0x10) = &uStack_88;
    puVar15 = &UNK_110504f58;
    func_0x000107c613fc(&UNK_110504f58,0x20,7);
    *(code **)(puVar15 + 0x10) = FUN_102424a04;
    *(undefined **)(puVar15 + 0x18) = puVar16;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_102424a0c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10131cd50;
    puStack_a0 = &UNK_110504f70;
    ppuVar9 = &puStack_b8;
    puStack_90 = puVar15;
    func_0x000107c60bc4();
    puVar17 = puStack_90;
    func_0x000107c61174(uVar8);
    func_0x000107c6157c(puVar15);
    func_0x000107c61574(puVar17);
    puVar17 = &UNK_110504fa8;
    func_0x000107c613fc(&UNK_110504fa8,0x18,7);
    *(undefined8 **)(puVar17 + 0x10) = &uStack_88;
    puVar10 = &UNK_110504fd0;
    func_0x000107c613fc(&UNK_110504fd0,0x20,7);
    *(undefined8 *)(puVar10 + 0x10) = 0x102424a48;
    *(undefined **)(puVar10 + 0x18) = puVar17;
    pcStack_98 = FUN_102424a50;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10131ce88;
    puStack_a0 = &UNK_110504fe8;
    ppuVar11 = &puStack_b8;
    puStack_90 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar12 = puStack_90;
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(puVar12);
    puVar12 = &UNK_110505020;
    func_0x000107c613fc(&UNK_110505020,0x18,7);
    *(undefined8 **)(puVar12 + 0x10) = &uStack_88;
    puVar13 = &UNK_110505048;
    func_0x000107c613fc(&UNK_110505048,0x20,7);
    *(code **)(puVar13 + 0x10) = FUN_102424a70;
    *(undefined **)(puVar13 + 0x18) = puVar12;
    pcStack_98 = FUN_102424a78;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    puStack_a8 = (undefined *)0x102424808;
    puStack_a0 = &UNK_110505060;
    ppuVar14 = &puStack_b8;
    puStack_90 = puVar13;
    func_0x000107c60bc4(ppuVar14);
    puVar2 = puStack_90;
    func_0x000107c6157c(puVar13);
    func_0x000107c61574(puVar2);
    func_0x000107c4c72c(uVar8);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar9);
    lVar3 = lStack_80;
    uVar6 = uStack_88;
    func_0x000107c61574(puVar16);
    puVar16 = puVar15;
    func_0x000107c61544(puVar15,"",0x82,7,0x1a,1);
    func_0x000107c61574(puVar17);
    func_0x000107c61574(puVar15);
    if (((ulong)puVar16 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102424318);
      (*pcVar4)();
    }
    puVar16 = puVar10;
    func_0x000107c61544(puVar10,"",0x82,9,0x1b,1);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar16 & 1) != 0) break;
    puVar16 = puVar13;
    func_0x000107c61544(puVar13,"",0x82,0xb,0x22,1);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar8);
    func_0x000107c61574(puVar13);
    if (((ulong)puVar16 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102424320);
      (*pcVar4)();
    }
    uVar5 = uVar5 + 1;
    if (lVar3 != 0) {
      puVar16 = puStack_100;
      func_0x000107c61558();
      puVar15 = puStack_100;
      if (((ulong)puVar16 & 1) == 0) {
        puVar15 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puStack_100 + 0x10) + 1,1,puStack_100);
      }
      uVar5 = *(ulong *)(puVar15 + 0x10);
      puStack_100 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar5) {
        puStack_100 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
        func_0x0001000d182c(puStack_100,uVar5 + 1,1,puVar15);
      }
      *(ulong *)(puStack_100 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puStack_100 + uVar5 * 0x10 + 0x20) = uVar6;
      *(long *)(puStack_100 + uVar5 * 0x10 + 0x28) = lVar3;
      uVar5 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10242431c);
  (*pcVar4)();
}



/* Entry: 10242433c; end: 102424463;  */

void FUN_10242433c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puStack_48;
  
  if (param_2 == (long *)0x0) {
    FUN_1024247c8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    puStack_48 = puVar2;
    func_0x000100087f6c(&puStack_48);
    func_0x000107c61170(puVar2);
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    func_0x000107c61174();
    plVar1 = param_2;
    func_0x0001000b637c();
    pcVar3 = *(code **)(*plVar1 + 0x70);
    func_0x000107c6157c(param_1);
    (*pcVar3)(FUN_10242478c,param_1,FUN_102424464,0);
    func_0x000107c61170(param_2);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102424464; end: 102424467;  */

void FUN_102424464(void)

{
  return;
}



/* Entry: 102424468; end: 10242454f;  */

void FUN_102424468(undefined8 param_1,undefined1 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puStack_68;
  
  puStack_68 = (undefined *)0x0;
  func_0x000107c5fc50(param_1,&puStack_68,PTR___sSSN_11034da80);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_68 != (undefined *)0x0) {
    puVar1 = puStack_68;
  }
  func_0x000107c3ebcc();
  func_0x000103aa7ef0(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_7);
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_8);
  func_0x000103aa7c30(param_3 & 1,param_4,param_5,param_6,param_7,param_8,puVar1,param_9,param_2);
  return;
}



/* Entry: 102424550; end: 1024245d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102424550(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112e98320;
  uVar3 = (uint)*(byte *)(unaff_x20 + _DAT_112e98320);
  if (*(byte *)(unaff_x20 + _DAT_112e98320) == 2) {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112e982e0);
    uVar2 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010f09a480);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    *(char *)(unaff_x20 + lVar1) = (char)uVar3;
  }
  return uVar3 & 1;
}



/* Entry: 1024245d8; end: 102424637; -[_TtC50ComposerSendToRankedRecipientsStoreServiceProvider33ComposerRankedRecipientsDataStore init] */

void FUN_1024245d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSendToRankedRecipientsStoreServiceProvider.ComposerRankedRecipientsDataStore"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102424604);
  (*pcVar1)();
}



/* Entry: 102424638; end: 1024246ff; -[_TtC50ComposerSendToRankedRecipientsStoreServiceProvider33ComposerRankedRecipientsDataStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102424638(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e982c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e982d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e982d8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e982e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e982e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e982f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e98300));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e98308));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e98310));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e98318));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e98328));
  return;
}



/* Entry: 102424700; end: 10242471f;  */

void FUN_102424700(void)

{
  func_0x000107c61168(&PTR_PTR_11283d6d0);
  return;
}



/* Entry: 102424720; end: 10242472b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102424720(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e982c8) + _DAT_1130349f0);
  puVar5 = &UNK_110504e90;
  func_0x000107c613fc(&UNK_110504e90,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar12;
  func_0x0001000285a8(0x112d6c540,&UNK_10d92f3c0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0x102424724;
  func_0x0001000b64ac(0x102424724,puVar5);
  uVar4 = *(undefined1 *)(unaff_x20 + _DAT_112e982f0);
  lVar11 = *(long *)(unaff_x20 + _DAT_112e982d0);
  uVar14 = *(undefined8 *)(lVar11 + _DAT_113034cb8);
  uVar9 = *(undefined8 *)(lVar11 + _DAT_113034cb0);
  uVar2 = ((undefined8 *)(lVar11 + _DAT_113034cb0))[1];
  puVar13 = *(undefined **)(lVar11 + _DAT_113034cf8);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    puVar5 = puVar13;
  }
  uVar1 = *(undefined8 *)(lVar11 + _DAT_113034cf0);
  uVar3 = ((undefined8 *)(lVar11 + _DAT_113034cf0))[1];
  uVar7 = uVar6;
  func_0x000102001dd8();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(puVar13);
  func_0x000107c61434(uVar3);
  func_0x0001000c2068(uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e98308);
  func_0x000104885238(uVar8);
  func_0x000107c61574(uVar7);
  puVar13 = &UNK_110504eb8;
  func_0x000107c613fc(&UNK_110504eb8,0x48,7);
  puVar13[0x10] = uVar4;
  *(undefined8 *)(puVar13 + 0x18) = uVar9;
  *(undefined8 *)(puVar13 + 0x20) = uVar2;
  *(undefined8 *)(puVar13 + 0x28) = uVar1;
  *(undefined8 *)(puVar13 + 0x30) = uVar3;
  *(undefined **)(puVar13 + 0x38) = puVar5;
  *(undefined8 *)(puVar13 + 0x40) = uVar14;
  puVar5 = &UNK_110504ee0;
  func_0x000107c613fc(&UNK_110504ee0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10242472c;
  *(undefined **)(puVar5 + 0x18) = puVar13;
  uVar9 = 0;
  func_0x000103aa7ef0(0);
  pcVar10 = FUN_10242475c;
  func_0x0001000bfde0(FUN_10242475c,puVar5,uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar5);
  return pcVar10;
}



/* Entry: 10242472c; end: 10242475b;  */

void FUN_10242472c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102424468(param_1,param_2,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10242475c; end: 10242478b;  */

void FUN_10242475c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10242478c; end: 1024247b3;  */

void FUN_10242478c(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 1024247b4; end: 1024247c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1024247b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long extraout_x8;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined2 auStack_a0 [4];
  undefined8 auStack_98 [3];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uStack_6c = (uint)*(byte *)(unaff_x20 + 0x21);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + lVar2;
  uVar8 = *param_1;
  func_0x0001000285a8(0x112e98370,&UNK_10daa3688);
  FUN_1024247c8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar7 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  puVar4 = puVar9;
  func_0x000107c5fff0(puVar9);
  (**(code **)(lVar7 + 8))(puVar9,lVar3);
  FUN_102425180(*(undefined8 *)(lVar1 + _DAT_113034cc0));
  func_0x0001000d224c(&uStack_68);
  *(undefined8 *)((long)auStack_98 + lVar2) = uStack_68;
  *(undefined8 *)((long)auStack_98 + lVar2 + 8) = uVar8;
  *(undefined2 *)((long)auStack_a0 + lVar2) = 0x100;
  uVar8 = uStack_78;
  func_0x000107c4fa10(uStack_78);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(uStack_68);
  uVar5 = uVar8;
  func_0x0001000b637c(uVar8);
  func_0x000107c61170(uVar8);
  uVar8 = 0;
  FUN_1024247c8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar6 = FUN_102423e48;
  func_0x0001000bfde0(FUN_102423e48,0,uVar8);
  func_0x000107c61574(uVar5);
  return pcVar6;
}



/* Entry: 1024247c8; end: 102424807;  */

void FUN_1024247c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102424808; end: 102424a03;  */

void FUN_102424808(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102424a04; end: 102424a0b;  */

void FUN_102424a04(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar3 = 0;
    param_2 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = plVar2[1];
  *plVar2 = lVar3;
  plVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 102424a0c; end: 102424a2b;  */

void FUN_102424a0c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102424a2c; end: 102424a4f;  */

void FUN_102424a2c(long param_1,long param_2)

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



/* Entry: 102424a50; end: 102424a6f;  */

void FUN_102424a50(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102424a70; end: 102424a77;  */

void FUN_102424a70(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long *plVar4;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  plVar4 = plVar2;
  func_0x000107c44c54();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar3 = 0;
    plVar4 = (long *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = plVar2[1];
  *plVar2 = lVar3;
  plVar2[1] = (long)plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 102424a78; end: 102424a97;  */

void FUN_102424a78(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102424a98; end: 102424ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102424a98(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  FUN_1024247c8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar6 + 0x68))
            (puVar5,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
  puVar2 = puVar5;
  func_0x000107c5fff0(puVar5);
  (**(code **)(lVar6 + 8))(puVar5,lVar1);
  func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
  func_0x000107c3db90(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = uVar4;
  func_0x0001000b637c(uVar4);
  func_0x000107c61170(uVar4);
  return uVar3;
}



/* Entry: 102424ab8; end: 102424b0f;  */

void FUN_102424ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 102424b10; end: 102424b23;  */

void FUN_102424b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 102424b24; end: 10242503f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102424b24(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *apuStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined *apuStack_80 [4];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000003a;
  func_0x0001000a9a18(0xd00000000000003a,0x800000010f09a510);
  func_0x000107c61170(uVar2);
  lVar16 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c51cdc();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c4cdb8();
    func_0x000107c61180();
    uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112e984a0);
    lVar6 = 0;
    FUN_102424700();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112e98310) = 0;
    *(undefined8 *)(lVar7 + _DAT_112e98318) = 0;
    *(undefined1 *)(lVar7 + _DAT_112e98320) = 2;
    *(undefined8 *)(lVar7 + _DAT_112e98328) = 0;
    *(undefined1 *)(lVar7 + _DAT_112e98330) = 2;
    *(undefined1 *)(lVar7 + _DAT_112e98338) = 2;
    *(undefined1 *)(lVar7 + _DAT_112e98340) = 2;
    uVar20 = *(undefined8 *)(lVar16 + _DAT_1130348f8);
    *(undefined8 *)(lVar7 + _DAT_112e982c8) = uVar20;
    uVar15 = *(undefined8 *)(lVar16 + _DAT_113034910);
    *(undefined8 *)(lVar7 + _DAT_112e982d0) = uVar15;
    *(long *)(lVar7 + _DAT_112e982e0) = lVar4;
    uVar18 = *(undefined8 *)(lVar16 + _DAT_113034908);
    *(undefined8 *)(lVar7 + _DAT_112e982d8) = uVar18;
    *(undefined8 *)(lVar7 + _DAT_112e982e8) = uVar2;
    *(undefined1 *)(lVar7 + _DAT_112e982f0) = *(undefined1 *)(lVar16 + _DAT_113034928);
    *(undefined8 *)(lVar7 + _DAT_112e982f8) = uVar5;
    *(undefined8 *)(lVar7 + _DAT_112e98300) = uVar19;
    lVar17 = *(long *)(lVar16 + _DAT_1130348d8);
    apuStack_80[0] = PTR_DAT_1126a0af8;
    lVar16 = lVar17;
    func_0x000107c61494(lVar17,1,apuStack_80);
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    if (lVar16 == 0) {
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c61174(uVar18);
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar5);
      func_0x000107c61580(uVar19,2);
      func_0x000107c61174(uVar20);
      func_0x000107c61174(uVar15);
      func_0x000107c615f0(lVar4);
      func_0x000107c45a48();
      ppuVar10 = apuStack_a8;
      apuStack_a8[0] = puVar9;
      func_0x000100854cb0();
      func_0x000107c61170(puVar9);
    }
    else {
      func_0x000107c61174(uVar18);
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar5);
      func_0x000107c615f0(lVar17);
      func_0x000107c61580(uVar19,2);
      func_0x000107c61174(uVar20);
      func_0x000107c61174(uVar15);
      func_0x000107c615f0(lVar4);
      func_0x000107c4a210(lVar16);
      func_0x000107c61180();
      lVar8 = lVar16;
      func_0x0001000b637c();
      func_0x000107c61170(lVar16);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      ppuVar10 = apuStack_a8;
      apuStack_a8[0] = puVar9;
      func_0x0001006c71a4();
      func_0x000107c61170(puVar9);
      func_0x000107c615e8(lVar17);
      func_0x000107c61574(lVar8);
    }
    *(undefined ***)(lVar7 + _DAT_112e98308) = ppuVar10;
    plVar11 = &lStack_90;
    lStack_90 = lVar7;
    lStack_88 = lVar6;
    func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
    func_0x000107c61180();
    plVar14 = plVar11;
    FUN_1024232ec();
    if (((ulong)plVar14 & 1) == 0) {
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(uVar19);
      plVar14 = plVar11;
    }
    else {
      func_0x000102423374();
      if (((ulong)plVar14 & 1) == 0) {
        FUN_102423580();
        plVar12 = plVar14;
        FUN_102423628();
        func_0x000107c6142c(plVar14);
        plVar13 = plVar12;
        func_0x000107c4f63c();
        func_0x000107c61180();
        func_0x000107c61170(plVar12);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61574(uVar19);
        plVar14 = *(long **)((long)plVar11 + _DAT_112e98310);
        *(long **)((long)plVar11 + _DAT_112e98310) = plVar13;
      }
      else {
        FUN_1024233fc();
        plVar12 = plVar14;
        func_0x000107c4f63c();
        func_0x000107c61180();
        func_0x000107c61170(plVar14);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61574(uVar19);
        plVar14 = *(long **)((long)plVar11 + _DAT_112e98318);
        *(long **)((long)plVar11 + _DAT_112e98318) = plVar12;
      }
      func_0x000107c61170(plVar11);
    }
    func_0x000107c61170(plVar14);
    uVar2 = 0;
    FUN_1024254cc(0);
    func_0x000107c610f8();
    func_0x00010242542c(plVar11,&PTR_DAT_110504e70,uVar2);
    func_0x000107c61428(param_1,apuStack_a8,0,0);
    uVar2 = *param_1;
    func_0x000107c61174(uVar2);
    func_0x0001000aa0a8(uVar3);
    func_0x000107c61170(uVar2);
    return plVar11;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102425040);
  (*pcVar1)();
}



/* Entry: 102425040; end: 102425073;  */

/* WARNING: Possible PIC construction at 0x00010242504c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010242505c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102425050) */
/* WARNING: Removing unreachable block (ram,0x000102425060) */

void FUN_102425040(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102425074; end: 1024250d7;  */

void FUN_102425074(void)

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



/* Entry: 1024250d8; end: 10242515b;  */

void FUN_1024250d8(undefined8 param_1)

{
  if (lRam0000000112e983d8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d675c);
  return;
}



/* Entry: 10242515c; end: 10242517f;  */

void FUN_10242515c(undefined8 *param_1,undefined8 param_2)

{
  FUN_102424b24();
  *param_1 = param_2;
  return;
}



/* Entry: 102425180; end: 102425197;  */

undefined8 FUN_102425180(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 == -1) {
    uVar1 = 0xffffffffffffffff;
  }
  if (param_1 == 0x17) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 102425198; end: 1024252a7;  */

void FUN_102425198(long param_1,long param_2)

{
  long lVar1;
  long *in_x5;
  long lVar2;
  
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = in_x5[1];
  *in_x5 = lVar2;
  in_x5[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 1024252a8; end: 10242533f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024252a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e984a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102425340; end: 10242539f; -[ComposerSendToSessionVisibilityLoggerService init] */

void FUN_102425340(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSendToSessionVisibilityLoggerService.ComposerSendToSessionVisibilityLoggerService"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10242536c);
  (*pcVar1)();
}



/* Entry: 1024253a0; end: 1024253af; -[ComposerSendToSessionVisibilityLoggerService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024253a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e984a0));
  return;
}



/* Entry: 1024253b0; end: 1024253cf;  */

void FUN_1024253b0(void)

{
  func_0x000107c61168(&PTR_PTR_11283d808);
  return;
}



/* Entry: 1024253d0; end: 102425487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024253d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e984d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102425488; end: 1024254bb;  */

void FUN_102425488(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024254bc; end: 1024254cb; -[ComposerSendToRankedRecipientsStoreService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024254bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e984d0));
  return;
}



/* Entry: 1024254cc; end: 1024254eb;  */

void FUN_1024254cc(void)

{
  func_0x000107c61168(&PTR_PTR_11283d8c8);
  return;
}



/* Entry: 1024254ec; end: 1024255ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024254ec(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  if (*(long *)(param_2 + _DAT_113034cb8) == 4) {
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5ad60();
      func_0x000107c615e8(uVar1);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    if ((*(int *)(param_2 + _DAT_113034cc8) != 1) &&
       ((*(byte *)(param_1 + _DAT_113034b18) & 1) == 0)) {
      uVar2 = *(ulong *)(unaff_x20 + 0x18);
      uVar1 = uVar2;
      func_0x000108faa7c0();
      if ((uVar1 & 1) == 0) {
        func_0x000108faa7ac(uVar2);
      }
    }
  }
  return;
}



/* Entry: 1024255ac; end: 10242561f; -[_TtC26SendToSharingConfiguration37SendToSharingConfigurationServiceImpl shouldIncludeShareSheetWith:sendToAttribution:] */

uint FUN_1024255ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1024254ec(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102425620; end: 10242566b;  */

void FUN_102425620(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10242566c; end: 1024258bb;  */

long FUN_10242566c(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c4dae0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5bcc4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102425728);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x10) = lVar3;
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10242572c);
  (*pcVar1)();
}



/* Entry: 1024258bc; end: 1024258d7;  */

void FUN_1024258bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1024258d8; end: 102425923;  */

void FUN_1024258d8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102425924; end: 1024259a7;  */

void FUN_102425924(undefined8 param_1)

{
  if (lRam0000000112e985d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d68c4);
  return;
}



/* Entry: 1024259a8; end: 1024259cb;  */

void FUN_1024259a8(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001024257d4();
  *param_1 = param_2;
  return;
}



/* Entry: 1024259cc; end: 102425a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024259cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102425dc0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e98688) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102425a38; end: 102425aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102425a38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e98688) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102425aa4; end: 102425b03; -[_TtC42AddFriendSheetScopedFactoryServiceProvider30SCAddFriendSheetScopedServices init] */

void FUN_102425aa4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendSheetScopedFactoryServiceProvider.SCAddFriendSheetScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102425ad0);
  (*pcVar1)();
}



/* Entry: 102425b04; end: 102425b13; -[_TtC42AddFriendSheetScopedFactoryServiceProvider30SCAddFriendSheetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102425b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e98688));
  return;
}



/* Entry: 102425b14; end: 102425b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102425b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110505550;
  func_0x000107c613fc(&UNK_110505550,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102425e9c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102425b80; end: 102425c1b;  */

void FUN_102425b80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110505460;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110505460;
  return;
}



/* Entry: 102425c1c; end: 102425c53;  */

void FUN_102425c1c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102425c54; end: 102425c5b;  */

undefined8 FUN_102425c54(void)

{
  return 0x1b;
}



/* Entry: 102425c5c; end: 102425d8f;  */

void FUN_102425c5c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110505578;
  func_0x000107c613fc(&UNK_110505578,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102425e74;
  func_0x00010058fa64(FUN_102425e74,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102425d90; end: 102425dbf;  */

undefined ** FUN_102425d90(void)

{
  return &PTR_DAT_112ff2330;
}



/* Entry: 102425dc0; end: 102425ddf;  */

void FUN_102425dc0(void)

{
  func_0x000107c61168(&PTR_PTR_11283d988);
  return;
}



/* Entry: 102425de0; end: 102425e2f;  */

undefined1  [16] FUN_102425de0(void)

{
  return ZEXT816(0x1105054b0);
}



/* Entry: 102425e30; end: 102425e73;  */

void FUN_102425e30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e986f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa800;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e986f0 = puVar1;
  return;
}



/* Entry: 102425e74; end: 102425e9b;  */

void FUN_102425e74(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102425e9c; end: 102425eaf;  */

void FUN_102425e9c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


