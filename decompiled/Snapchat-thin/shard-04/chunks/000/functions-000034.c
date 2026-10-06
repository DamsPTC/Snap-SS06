/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fb27b4; end: 102fb27db;  */

void FUN_102fb27b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102fb27dc; end: 102fb27f3;  */

void FUN_102fb27dc(long param_1,long param_2)

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



/* Entry: 102fb27f4; end: 102fb287b; -[_TtC35ComposerSafetyReportServiceProvider32ComposerSafetyReportPageLauncher launchWithReportParams:reportEntrypoint:deckContainer:] */

/* WARNING: Possible PIC construction at 0x000102fb2850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb2854) */

void FUN_102fb27f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_102fb293c(param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102fb287c; end: 102fb28db; -[_TtC35ComposerSafetyReportServiceProvider32ComposerSafetyReportPageLauncher init] */

void FUN_102fb287c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSafetyReportServiceProvider.ComposerSafetyReportPageLauncher",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb28a8);
  (*pcVar1)();
}



/* Entry: 102fb28dc; end: 102fb2913; -[_TtC35ComposerSafetyReportServiceProvider32ComposerSafetyReportPageLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102fb28f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb28fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb28dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f2dce0));
  return;
}



/* Entry: 102fb2914; end: 102fb293b; -[_TtC35ComposerSafetyReportServiceProvider32ComposerSafetyReportPageLauncher reportDidCompleteWithCancelled:] */

void FUN_102fb2914(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102fb2f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fb293c; end: 102fb2f2f;  */

/* WARNING: Possible PIC construction at 0x000102fb2e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fb2ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fb2ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fb2f10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb2ed0) */
/* WARNING: Removing unreachable block (ram,0x000102fb2ec0) */
/* WARNING: Removing unreachable block (ram,0x000102fb2e14) */
/* WARNING: Removing unreachable block (ram,0x000102fb2e18) */
/* WARNING: Removing unreachable block (ram,0x000102fb2ed8) */
/* WARNING: Removing unreachable block (ram,0x000102fb2e34) */
/* WARNING: Removing unreachable block (ram,0x000102fb2f0c) */
/* WARNING: Removing unreachable block (ram,0x000102fb2e4c) */
/* WARNING: Removing unreachable block (ram,0x000102fb2f14) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_102fb293c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c5da10();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c4b2e8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x000107c5b96c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x000107c41144();
        func_0x000107c61180();
        if (lVar1 == 0) {
          lVar1 = param_1;
          func_0x000107c4d3b0();
          func_0x000107c61180();
          if (lVar1 == 0) {
            lVar1 = param_1;
            func_0x000107c4f62c();
            func_0x000107c61180();
            if (lVar1 == 0) {
              lVar1 = param_1;
              func_0x000107c4f674();
              func_0x000107c61180();
              if (lVar1 == 0) {
                lVar1 = param_1;
                func_0x000107c4daf0();
                func_0x000107c61180();
                if (lVar1 == 0) {
                  lVar1 = param_1;
                  func_0x000107c4d718();
                  func_0x000107c61180();
                  if (lVar1 == 0) {
                    lVar1 = param_1;
                    func_0x000107c4c40c();
                    func_0x000107c61180();
                    if (lVar1 == 0) {
                      lVar1 = param_1;
                      func_0x000107c516f0();
                      func_0x000107c61180();
                      if (lVar1 == 0) {
                        lVar1 = param_1;
                        func_0x000107c516f8();
                        func_0x000107c61180();
                        if (lVar1 == 0) {
                          lVar1 = param_1;
                          func_0x000107c5cc40();
                          func_0x000107c61180();
                          if (lVar1 == 0) {
                            lVar1 = param_1;
                            func_0x000107c5b94c();
                            func_0x000107c61180();
                            if (lVar1 == 0) {
                              lVar1 = param_1;
                              func_0x000107c4f670();
                              func_0x000107c61180();
                              if (lVar1 == 0) {
                                lVar1 = param_1;
                                func_0x000107c4f278();
                                func_0x000107c61180();
                                if (lVar1 == 0) {
                                  lVar1 = param_1;
                                  func_0x000107c3f8b0();
                                  func_0x000107c61180();
                                  if (lVar1 == 0) {
                                    lVar1 = param_1;
                                    func_0x000107c3f8c0();
                                    func_0x000107c61180();
                                    if (lVar1 == 0) {
                                      lVar1 = param_1;
                                      func_0x000107c3f960();
                                      func_0x000107c61180();
                                      if (lVar1 == 0) {
                                        lVar1 = param_1;
                                        func_0x000107c4f358();
                                        func_0x000107c61180();
                                        if (lVar1 == 0) {
                                          lVar1 = param_1;
                                          func_0x000107c4ca24();
                                          func_0x000107c61180();
                                          if (lVar1 == 0) {
                                            lVar1 = param_1;
                                            func_0x000107c5bfb8();
                                            func_0x000107c61180();
                                            if (lVar1 == 0) {
                                              lVar1 = param_1;
                                              func_0x000107c3e9fc();
                                              func_0x000107c61180();
                                              if (lVar1 == 0) {
                                                lVar1 = param_1;
                                                func_0x000107c43cd0();
                                                func_0x000107c61180();
                                                if (lVar1 == 0) {
                                                  func_0x000107c4e844();
                                                  func_0x000107c61180();
                                                  if (param_1 == 0) {
                                                    return;
                                                  }
                                                  func_0x000107c61168(PTR_PTR_1126b2e98);
                                                  func_0x000107c4e854();
                                                }
                                                else {
                                                  func_0x000107c61168(PTR_PTR_1126b2e98);
                                                  func_0x000107c43cd4();
                                                  param_1 = lVar1;
                                                }
                                              }
                                              else {
                                                func_0x000107c61168(PTR_PTR_1126b2e98);
                                                func_0x000107c3ea04();
                                                param_1 = lVar1;
                                              }
                                            }
                                            else {
                                              func_0x000107c61168(PTR_PTR_1126b2e98);
                                              func_0x000107c5bfbc();
                                              param_1 = lVar1;
                                            }
                                          }
                                          else {
                                            func_0x000107c61168(PTR_PTR_1126b2e98);
                                            func_0x000107c4ca28();
                                            param_1 = lVar1;
                                          }
                                        }
                                        else {
                                          func_0x000107c61168(PTR_PTR_1126b2e98);
                                          func_0x000107c4f35c();
                                          param_1 = lVar1;
                                        }
                                      }
                                      else {
                                        func_0x000107c61168(PTR_PTR_1126b2e98);
                                        func_0x000107c3f964();
                                        param_1 = lVar1;
                                      }
                                    }
                                    else {
                                      func_0x000107c61168(PTR_PTR_1126b2e98);
                                      func_0x000107c3f8c4();
                                      param_1 = lVar1;
                                    }
                                  }
                                  else {
                                    func_0x000107c61168(PTR_PTR_1126b2e98);
                                    func_0x000107c3f8bc();
                                    param_1 = lVar1;
                                  }
                                }
                                else {
                                  func_0x000107c61168(PTR_PTR_1126b2e98);
                                  func_0x000107c4f27c();
                                  param_1 = lVar1;
                                }
                              }
                              else {
                                func_0x000107c61168(PTR_PTR_1126b2e98);
                                func_0x000107c4f67c();
                                param_1 = lVar1;
                              }
                            }
                            else {
                              func_0x000107c61168(PTR_PTR_1126b2e98);
                              func_0x000107c5b950();
                              param_1 = lVar1;
                            }
                          }
                          else {
                            func_0x000107c61168(PTR_PTR_1126b2e98);
                            func_0x000107c5cc44();
                            param_1 = lVar1;
                          }
                        }
                        else {
                          func_0x000107c61168(PTR_PTR_1126b2e98);
                          func_0x000107c516fc();
                          param_1 = lVar1;
                        }
                      }
                      else {
                        func_0x000107c61168(PTR_PTR_1126b2e98);
                        func_0x000107c516f4();
                        param_1 = lVar1;
                      }
                    }
                    else {
                      func_0x000107c61168(PTR_PTR_1126b2e98);
                      func_0x000107c4c418();
                      param_1 = lVar1;
                    }
                  }
                  else {
                    func_0x000107c61168(PTR_PTR_1126b2e98);
                    func_0x000107c4d71c();
                    param_1 = lVar1;
                  }
                }
                else {
                  func_0x000107c61168(PTR_PTR_1126b2e98);
                  func_0x000107c4daf4();
                  param_1 = lVar1;
                }
              }
              else {
                func_0x000107c61168(PTR_PTR_1126b2e98);
                func_0x000107c4f678();
                param_1 = lVar1;
              }
            }
            else {
              func_0x000107c61168(PTR_PTR_1126b2e98);
              func_0x000107c4f630();
              param_1 = lVar1;
            }
          }
          else {
            func_0x000107c61168(PTR_PTR_1126b2e98);
            func_0x000107c4d3c4();
            param_1 = lVar1;
          }
        }
        else {
          func_0x000107c61168(PTR_PTR_1126b2e98);
          func_0x000107c41150();
          param_1 = lVar1;
        }
      }
      else {
        func_0x000107c61168(PTR_PTR_1126b2e98);
        func_0x000107c5b970();
        param_1 = lVar1;
      }
    }
    else {
      func_0x000107c61168(PTR_PTR_1126b2e98);
      func_0x000107c4b564();
      param_1 = lVar1;
    }
  }
  else {
    func_0x000107c61168(PTR_PTR_1126b2e98);
    func_0x000107c5dae8();
    param_1 = lVar1;
  }
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fb2f30; end: 102fb2fd7;  */

/* WARNING: Possible PIC construction at 0x000102fb2fa4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb2f30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f2dce0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = lVar2;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c4ffe8(lVar2);
      func_0x000107c61180();
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5d17c();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c41864(lVar2,param_2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 102fb2fd8; end: 102fb2ff7;  */

void FUN_102fb2fd8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ad868);
  return;
}



/* Entry: 102fb2ff8; end: 102fb3087; -[_TtC35ComposerSafetyReportServiceProvider43ComposerSafetyReportPageLauncherFactoryImpl safetyReportPageLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb2ff8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f2dd18);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f2dd20);
  lVar2 = 0;
  FUN_102fb2fd8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f2dce0) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112f2dce8) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fb3088; end: 102fb30e7; -[_TtC35ComposerSafetyReportServiceProvider43ComposerSafetyReportPageLauncherFactoryImpl init] */

void FUN_102fb3088(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSafetyReportServiceProvider.ComposerSafetyReportPageLauncherFactoryImpl"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb30b4);
  (*pcVar1)();
}



/* Entry: 102fb30e8; end: 102fb311f; -[_TtC35ComposerSafetyReportServiceProvider43ComposerSafetyReportPageLauncherFactoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102fb3104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb3108) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb30e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f2dd18));
  return;
}



/* Entry: 102fb3120; end: 102fb313f;  */

void FUN_102fb3120(void)

{
  func_0x000107c61168(&PTR_PTR_1128ad930);
  return;
}



/* Entry: 102fb3140; end: 102fb3223;  */

void FUN_102fb3140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102fb3224; end: 102fb322b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb3224(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar7 = &lStack_40;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c3ff98();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  lVar5 = 0;
  FUN_102fb3120();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f2dd18) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112f2dd20) = uVar4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_40,puVar2);
  *param_1 = plVar7;
  return;
}



/* Entry: 102fb322c; end: 102fb3247;  */

/* WARNING: Possible PIC construction at 0x000102fb3238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb323c) */

void FUN_102fb322c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102fb3248; end: 102fb3293;  */

void FUN_102fb3248(void)

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



/* Entry: 102fb3294; end: 102fb3333;  */

void FUN_102fb3294(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112f2dd50,&UNK_10db72320);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_102fb3334;
  func_0x0001000bdd8c();
  pcVar2 = pcVar1;
  func_0x0001003a5b88();
  uVar3 = 0;
  func_0x00010033cfcc(0);
  func_0x000107c610f8();
  func_0x00010076a1f0(pcVar2,uVar3);
  func_0x000107c61574(pcVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102fb3334; end: 102fb3337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb3334(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar7 = &lStack_40;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c3ff98();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  lVar5 = 0;
  FUN_102fb3120();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f2dd18) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112f2dd20) = uVar4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_40,puVar2);
  *param_1 = plVar7;
  return;
}



/* Entry: 102fb3338; end: 102fb33a3;  */

void FUN_102fb3338(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x000102fb7288();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126ac8f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105f6878;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 102fb33a4; end: 102fb3e2b;  */

/* WARNING: Removing unreachable block (ram,0x000102fb3ab8) */
/* WARNING: Removing unreachable block (ram,0x000102fb3e04) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b70) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b7c) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b80) */
/* WARNING: Removing unreachable block (ram,0x000102fb3e08) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b84) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b8c) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b90) */
/* WARNING: Removing unreachable block (ram,0x000102fb3e0c) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb33a4(code *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  double dVar19;
  long alStack_1f0 [2];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  char *pcStack_1a8;
  code *pcStack_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [80];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_100 [80];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = (char *)0x0;
  pcStack_1a0 = param_1;
  func_0x000107c5eea4();
  lVar15 = *(long *)(pcVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = (long)&lStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12;
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f2de38);
  func_0x0001000d224c(&puStack_b0);
  func_0x0001000a8868(&puStack_b0,uStack_98);
  (**(code **)(lStack_90 + 8))(uStack_98,lStack_90);
  func_0x0001000834e4(&puStack_b0);
  func_0x000107c5eea0(lVar17);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f2de30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    pcStack_1a8 = "tyReportServiceProvider";
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar11 = auStack_100;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar16 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar16;
    puVar18 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar5 + 0x28) = puVar11;
    *(undefined8 *)(lVar5 + 0x30) = 0xd00000000000001f;
    *(undefined8 *)(lVar5 + 0x38) = 0x800000010f117660;
    lVar14 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    FUN_102fb3f3c((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar16 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,(ulong)pcStack_1a8 | 0x8000000000000000);
    lVar5 = lVar14;
    func_0x000107c5f9dc(lVar14,puVar18,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar14);
    func_0x000107c466bc();
    func_0x000107c61170(uVar16);
    func_0x000107c61170(lVar5);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    lStack_90 = 0x2000000000000000;
    puStack_b0 = puVar9;
    (*pcStack_1a0)(&puStack_b0);
    func_0x000107c61170(puVar9);
    func_0x0001000d224c(&puStack_130);
    func_0x0001000a8868(&puStack_130,uStack_118);
    (**(code **)(lStack_110 + 0x18))(0x76616e755f666f63,0xef656c62616c6961,uStack_118,lStack_110);
    pcVar3 = *(code **)(lVar15 + 8);
    lVar5 = lVar17;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f2de40);
    uVar10 = ((undefined8 *)(unaff_x20 + _DAT_112f2de40))[1];
    lStack_1c0 = lVar17;
    uStack_1b8 = uVar16;
    uStack_1b0 = param_2;
    pcStack_1a8 = pcVar4;
    func_0x000107c5fadc(uVar6);
    lVar14 = lVar5;
    func_0x000107c4f558();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (lVar14 != 0) {
      lVar7 = lVar14;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lVar8 = lVar7;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar7);
        lStack_90 = 0;
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        uStack_98 = 0;
        uStack_a0 = 0;
        lVar7 = lVar8;
        func_0x00010006c00c(lVar8,uVar10);
        FUN_102fb9a94(&puStack_130);
        uVar2 = (uint)(uVar10 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        lStack_1e0 = lVar5;
        lStack_1d8 = lVar14;
        lStack_1d0 = lVar8;
        if (uVar2 >> 0x1e < 2) {
          if (uVar12 == 0) {
            auStack_198[0] = (undefined1)lVar8;
            auStack_198[1] = (undefined1)((ulong)lVar8 >> 8);
            auStack_198[2] = (undefined1)((ulong)lVar8 >> 0x10);
            auStack_198[3] = (undefined1)((ulong)lVar8 >> 0x18);
            auStack_198[4] = (undefined1)((ulong)lVar8 >> 0x20);
            auStack_198[5] = (undefined1)((ulong)lVar8 >> 0x28);
            auStack_198[6] = (undefined1)((ulong)lVar8 >> 0x30);
            auStack_198[7] = (undefined1)((ulong)lVar8 >> 0x38);
            auStack_198[8] = (undefined1)uVar10;
            auStack_198[9] = (undefined1)(uVar10 >> 8);
            auStack_198[10] = (undefined1)(uVar10 >> 0x10);
            auStack_198[0xb] = (undefined1)(uVar10 >> 0x18);
            auStack_198[0xc] = (undefined1)(uVar10 >> 0x20);
            auStack_198[0xd] = (undefined1)(uVar10 >> 0x28);
            puVar11 = auStack_198 + (uVar10 >> 0x30 & 0xff);
            func_0x000102fb3efc();
            goto LAB_102fb3a90;
          }
          lVar5 = (long)(int)lVar8;
          lVar13 = (lVar8 >> 0x20) - lVar5;
          if (lVar8 >> 0x20 < lVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e20);
            (*pcVar3)();
          }
          func_0x000107c5ec30();
          if (lVar7 != 0) {
            lVar14 = lVar7;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar5,lVar14)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e28);
              (*pcVar3)();
            }
            lVar5 = (lVar5 - lVar14) + lVar7;
            goto LAB_102fb3a48;
          }
          func_0x000107c5ec38();
          lVar14 = 0;
          lVar5 = 0;
LAB_102fb3c28:
          lVar8 = lStack_1d0;
          func_0x000102fb3efc();
          func_0x00010006ae80(lVar5,lVar14,&puStack_b0,0,100,0,&UNK_1105f7128,lVar7);
          func_0x00010006c090(lVar8,uVar10);
        }
        else {
          if (uVar12 == 2) {
            lVar1 = *(long *)(lVar8 + 0x10);
            lVar8 = *(long *)(lVar8 + 0x18);
            func_0x000107c5ec30();
            lVar14 = lVar7;
            lVar5 = lVar7;
            if (lVar7 != 0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar1,lVar14)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e24);
                (*pcVar3)();
              }
              lVar5 = (lVar1 - lVar14) + lVar7;
            }
            lVar13 = lVar8 - lVar1;
            if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3a0c);
              (*pcVar3)();
            }
LAB_102fb3a48:
            func_0x000107c5ec38();
            lVar7 = lVar14;
            if (lVar5 == 0) {
              lVar14 = 0;
            }
            else {
              if (lVar13 <= lVar14) {
                lVar14 = lVar13;
              }
              lVar14 = lVar14 + lVar5;
            }
            goto LAB_102fb3c28;
          }
          func_0x000102fb3efc();
          auStack_198[0] = 0;
          auStack_198[1] = 0;
          auStack_198[2] = 0;
          auStack_198[3] = 0;
          auStack_198[4] = 0;
          auStack_198[5] = 0;
          auStack_198[6] = 0;
          auStack_198[7] = 0;
          auStack_198[8] = 0;
          auStack_198[9] = 0;
          auStack_198[10] = 0;
          auStack_198[0xb] = 0;
          auStack_198[0xc] = 0;
          auStack_198[0xd] = 0;
          puVar11 = auStack_198;
LAB_102fb3a90:
          func_0x00010006ae80(auStack_198,puVar11,&puStack_b0,0,100,0,&UNK_1105f7128,lVar7);
          func_0x00010006c090(lVar8,uVar10);
        }
        uStack_1b0 = uVar10;
        FUN_102fb3f3c(&puStack_b0,0x112d49548,&UNK_10d90fde0);
        lVar7 = lStack_110;
        uVar16 = uStack_118;
        uStack_a8 = uStack_128;
        puStack_b0 = puStack_130;
        uStack_a0 = uStack_120;
        uStack_98 = uStack_118;
        lStack_90 = lStack_110;
        func_0x000107c61434(uStack_120);
        func_0x00010006c00c(uVar16,lVar7);
        (*pcStack_1a0)(&puStack_b0);
        func_0x000107c6142c(uStack_120);
        func_0x00010006c090(uVar16,lVar7);
        lVar5 = lStack_1c8;
        func_0x000107c5eea0(lStack_1c8);
        lVar14 = lStack_1c0;
        puVar18 = puStack_130;
        func_0x000107c5ee68(lStack_1c0);
        pcVar3 = *(code **)(lVar15 + 8);
        (*pcVar3)(lVar5,pcStack_1a8);
        dVar19 = (double)puVar18 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e14);
          (*pcVar3)();
        }
        if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e18);
          (*pcVar3)();
        }
        if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e1c);
          (*pcVar3)();
        }
        pcStack_1a0 = (code *)(long)dVar19;
        func_0x0001000d224c(&puStack_130);
        lVar5 = lStack_110;
        uVar6 = uStack_118;
        func_0x0001000a8868(&puStack_130,uStack_118);
        (**(code **)(lVar5 + 0x10))(uVar6,lVar5);
        func_0x0001000834e4(&puStack_130);
        func_0x0001000d224c(&puStack_130);
        func_0x0001000a8868(&puStack_130,uStack_118);
        (**(code **)(lStack_110 + 0x20))(pcStack_1a0,uStack_118,lStack_110);
        func_0x000107c6142c(uStack_120);
        func_0x000107c615e8(lStack_1e0);
        func_0x00010006c090(uVar16,lVar7);
        func_0x00010006c090(lStack_1d0,uStack_1b0);
        func_0x000107c61170(lStack_1d8);
        (*pcVar3)(lVar14,pcStack_1a8);
        goto LAB_102fb3984;
      }
    }
    lVar7 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar11 = auStack_180;
    func_0x000107c61534();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    uVar16 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar7 + 0x20) = uVar16;
    puVar18 = PTR___sSSN_11034da80;
    *(undefined **)(lVar7 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar7 + 0x28) = puVar11;
    *(undefined8 *)(lVar7 + 0x30) = 0xd000000000000023;
    *(undefined8 *)(lVar7 + 0x38) = 0x800000010f117680;
    lVar8 = lVar7;
    func_0x000100214a84(lVar7);
    func_0x000107c61588(lVar7);
    FUN_102fb3f3c((undefined8 *)(lVar7 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar16 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010f117640);
    lVar7 = lVar8;
    func_0x000107c5f9dc(lVar8,puVar18,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar8);
    func_0x000107c466bc();
    func_0x000107c61170(uVar16);
    func_0x000107c61170(lVar7);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    lStack_90 = 0x2000000000000000;
    puStack_b0 = puVar9;
    (*pcStack_1a0)(&puStack_b0);
    func_0x000107c61170(puVar9);
    func_0x0001000d224c(&puStack_130);
    func_0x0001000a8868(&puStack_130,uStack_118);
    (**(code **)(lStack_110 + 0x18))(0x5f746f6e5f666f63,0xed0000646e756f66,uStack_118,lStack_110);
    func_0x000107c61170(lVar14);
    func_0x000107c615e8(lVar5);
    pcVar3 = *(code **)(lVar15 + 8);
    lVar5 = lStack_1c0;
    pcVar4 = pcStack_1a8;
  }
  (*pcVar3)(lVar5,pcVar4);
LAB_102fb3984:
  func_0x0001000834e4(&puStack_130);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  func_0x000107c60e78();
  *(undefined1 **)(lVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar17 + -8) = FUN_102fb3e2c;
  func_0x000107c60eb0("SecurityConfigImpl.SecurityConfigFetcherImpl",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e58);
  (*pcVar3)();
}



/* Entry: 102fb3e2c; end: 102fb3e8b; -[_TtC18SecurityConfigImpl25SecurityConfigFetcherImpl init] */

void FUN_102fb3e2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SecurityConfigImpl.SecurityConfigFetcherImpl",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb3e58);
  (*pcVar1)();
}



/* Entry: 102fb3e8c; end: 102fb3ed7; -[_TtC18SecurityConfigImpl25SecurityConfigFetcherImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb3e8c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2de30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f2de38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f2de40 + 8))
  ;
  return;
}



/* Entry: 102fb3ed8; end: 102fb3edb;  */

/* WARNING: Removing unreachable block (ram,0x000102fb3ab8) */
/* WARNING: Removing unreachable block (ram,0x000102fb3e04) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b70) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b7c) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b80) */
/* WARNING: Removing unreachable block (ram,0x000102fb3e08) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b84) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b8c) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b90) */
/* WARNING: Removing unreachable block (ram,0x000102fb3e0c) */
/* WARNING: Removing unreachable block (ram,0x000102fb3b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb3ed8(code *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  double dVar19;
  long alStack_1f0 [2];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  char *pcStack_1a8;
  code *pcStack_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [80];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_100 [80];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = (char *)0x0;
  pcStack_1a0 = param_1;
  func_0x000107c5eea4();
  lVar15 = *(long *)(pcVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = (long)&lStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12;
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f2de38);
  func_0x0001000d224c(&puStack_b0);
  func_0x0001000a8868(&puStack_b0,uStack_98);
  (**(code **)(lStack_90 + 8))(uStack_98,lStack_90);
  func_0x0001000834e4(&puStack_b0);
  func_0x000107c5eea0(lVar17);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f2de30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    pcStack_1a8 = "tyReportServiceProvider";
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar11 = auStack_100;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar16 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar16;
    puVar18 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar5 + 0x28) = puVar11;
    *(undefined8 *)(lVar5 + 0x30) = 0xd00000000000001f;
    *(undefined8 *)(lVar5 + 0x38) = 0x800000010f117660;
    lVar14 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    FUN_102fb3f3c((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar16 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,(ulong)pcStack_1a8 | 0x8000000000000000);
    lVar5 = lVar14;
    func_0x000107c5f9dc(lVar14,puVar18,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar14);
    func_0x000107c466bc();
    func_0x000107c61170(uVar16);
    func_0x000107c61170(lVar5);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    lStack_90 = 0x2000000000000000;
    puStack_b0 = puVar9;
    (*pcStack_1a0)(&puStack_b0);
    func_0x000107c61170(puVar9);
    func_0x0001000d224c(&puStack_130);
    func_0x0001000a8868(&puStack_130,uStack_118);
    (**(code **)(lStack_110 + 0x18))(0x76616e755f666f63,0xef656c62616c6961,uStack_118,lStack_110);
    pcVar3 = *(code **)(lVar15 + 8);
    lVar5 = lVar17;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f2de40);
    uVar10 = ((undefined8 *)(unaff_x20 + _DAT_112f2de40))[1];
    lStack_1c0 = lVar17;
    uStack_1b8 = uVar16;
    uStack_1b0 = param_2;
    pcStack_1a8 = pcVar4;
    func_0x000107c5fadc(uVar6);
    lVar14 = lVar5;
    func_0x000107c4f558();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (lVar14 != 0) {
      lVar7 = lVar14;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lVar8 = lVar7;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar7);
        lStack_90 = 0;
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        uStack_98 = 0;
        uStack_a0 = 0;
        lVar7 = lVar8;
        func_0x00010006c00c(lVar8,uVar10);
        FUN_102fb9a94(&puStack_130);
        uVar2 = (uint)(uVar10 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        lStack_1e0 = lVar5;
        lStack_1d8 = lVar14;
        lStack_1d0 = lVar8;
        if (uVar2 >> 0x1e < 2) {
          if (uVar12 == 0) {
            auStack_198[0] = (undefined1)lVar8;
            auStack_198[1] = (undefined1)((ulong)lVar8 >> 8);
            auStack_198[2] = (undefined1)((ulong)lVar8 >> 0x10);
            auStack_198[3] = (undefined1)((ulong)lVar8 >> 0x18);
            auStack_198[4] = (undefined1)((ulong)lVar8 >> 0x20);
            auStack_198[5] = (undefined1)((ulong)lVar8 >> 0x28);
            auStack_198[6] = (undefined1)((ulong)lVar8 >> 0x30);
            auStack_198[7] = (undefined1)((ulong)lVar8 >> 0x38);
            auStack_198[8] = (undefined1)uVar10;
            auStack_198[9] = (undefined1)(uVar10 >> 8);
            auStack_198[10] = (undefined1)(uVar10 >> 0x10);
            auStack_198[0xb] = (undefined1)(uVar10 >> 0x18);
            auStack_198[0xc] = (undefined1)(uVar10 >> 0x20);
            auStack_198[0xd] = (undefined1)(uVar10 >> 0x28);
            puVar11 = auStack_198 + (uVar10 >> 0x30 & 0xff);
            func_0x000102fb3efc();
            goto LAB_102fb3a90;
          }
          lVar5 = (long)(int)lVar8;
          lVar13 = (lVar8 >> 0x20) - lVar5;
          if (lVar8 >> 0x20 < lVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e20);
            (*pcVar3)();
          }
          func_0x000107c5ec30();
          if (lVar7 != 0) {
            lVar14 = lVar7;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar5,lVar14)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e28);
              (*pcVar3)();
            }
            lVar5 = (lVar5 - lVar14) + lVar7;
            goto LAB_102fb3a48;
          }
          func_0x000107c5ec38();
          lVar14 = 0;
          lVar5 = 0;
LAB_102fb3c28:
          lVar8 = lStack_1d0;
          func_0x000102fb3efc();
          func_0x00010006ae80(lVar5,lVar14,&puStack_b0,0,100,0,&UNK_1105f7128,lVar7);
          func_0x00010006c090(lVar8,uVar10);
        }
        else {
          if (uVar12 == 2) {
            lVar1 = *(long *)(lVar8 + 0x10);
            lVar8 = *(long *)(lVar8 + 0x18);
            func_0x000107c5ec30();
            lVar14 = lVar7;
            lVar5 = lVar7;
            if (lVar7 != 0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar1,lVar14)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e24);
                (*pcVar3)();
              }
              lVar5 = (lVar1 - lVar14) + lVar7;
            }
            lVar13 = lVar8 - lVar1;
            if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3a0c);
              (*pcVar3)();
            }
LAB_102fb3a48:
            func_0x000107c5ec38();
            lVar7 = lVar14;
            if (lVar5 == 0) {
              lVar14 = 0;
            }
            else {
              if (lVar13 <= lVar14) {
                lVar14 = lVar13;
              }
              lVar14 = lVar14 + lVar5;
            }
            goto LAB_102fb3c28;
          }
          func_0x000102fb3efc();
          auStack_198[0] = 0;
          auStack_198[1] = 0;
          auStack_198[2] = 0;
          auStack_198[3] = 0;
          auStack_198[4] = 0;
          auStack_198[5] = 0;
          auStack_198[6] = 0;
          auStack_198[7] = 0;
          auStack_198[8] = 0;
          auStack_198[9] = 0;
          auStack_198[10] = 0;
          auStack_198[0xb] = 0;
          auStack_198[0xc] = 0;
          auStack_198[0xd] = 0;
          puVar11 = auStack_198;
LAB_102fb3a90:
          func_0x00010006ae80(auStack_198,puVar11,&puStack_b0,0,100,0,&UNK_1105f7128,lVar7);
          func_0x00010006c090(lVar8,uVar10);
        }
        uStack_1b0 = uVar10;
        FUN_102fb3f3c(&puStack_b0,0x112d49548,&UNK_10d90fde0);
        lVar7 = lStack_110;
        uVar16 = uStack_118;
        uStack_a8 = uStack_128;
        puStack_b0 = puStack_130;
        uStack_a0 = uStack_120;
        uStack_98 = uStack_118;
        lStack_90 = lStack_110;
        func_0x000107c61434(uStack_120);
        func_0x00010006c00c(uVar16,lVar7);
        (*pcStack_1a0)(&puStack_b0);
        func_0x000107c6142c(uStack_120);
        func_0x00010006c090(uVar16,lVar7);
        lVar5 = lStack_1c8;
        func_0x000107c5eea0(lStack_1c8);
        lVar14 = lStack_1c0;
        puVar18 = puStack_130;
        func_0x000107c5ee68(lStack_1c0);
        pcVar3 = *(code **)(lVar15 + 8);
        (*pcVar3)(lVar5,pcStack_1a8);
        dVar19 = (double)puVar18 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e14);
          (*pcVar3)();
        }
        if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e18);
          (*pcVar3)();
        }
        if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e1c);
          (*pcVar3)();
        }
        pcStack_1a0 = (code *)(long)dVar19;
        func_0x0001000d224c(&puStack_130);
        lVar5 = lStack_110;
        uVar6 = uStack_118;
        func_0x0001000a8868(&puStack_130,uStack_118);
        (**(code **)(lVar5 + 0x10))(uVar6,lVar5);
        func_0x0001000834e4(&puStack_130);
        func_0x0001000d224c(&puStack_130);
        func_0x0001000a8868(&puStack_130,uStack_118);
        (**(code **)(lStack_110 + 0x20))(pcStack_1a0,uStack_118,lStack_110);
        func_0x000107c6142c(uStack_120);
        func_0x000107c615e8(lStack_1e0);
        func_0x00010006c090(uVar16,lVar7);
        func_0x00010006c090(lStack_1d0,uStack_1b0);
        func_0x000107c61170(lStack_1d8);
        (*pcVar3)(lVar14,pcStack_1a8);
        goto LAB_102fb3984;
      }
    }
    lVar7 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar11 = auStack_180;
    func_0x000107c61534();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    uVar16 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar7 + 0x20) = uVar16;
    puVar18 = PTR___sSSN_11034da80;
    *(undefined **)(lVar7 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar7 + 0x28) = puVar11;
    *(undefined8 *)(lVar7 + 0x30) = 0xd000000000000023;
    *(undefined8 *)(lVar7 + 0x38) = 0x800000010f117680;
    lVar8 = lVar7;
    func_0x000100214a84(lVar7);
    func_0x000107c61588(lVar7);
    FUN_102fb3f3c((undefined8 *)(lVar7 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar16 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010f117640);
    lVar7 = lVar8;
    func_0x000107c5f9dc(lVar8,puVar18,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar8);
    func_0x000107c466bc();
    func_0x000107c61170(uVar16);
    func_0x000107c61170(lVar7);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    lStack_90 = 0x2000000000000000;
    puStack_b0 = puVar9;
    (*pcStack_1a0)(&puStack_b0);
    func_0x000107c61170(puVar9);
    func_0x0001000d224c(&puStack_130);
    func_0x0001000a8868(&puStack_130,uStack_118);
    (**(code **)(lStack_110 + 0x18))(0x5f746f6e5f666f63,0xed0000646e756f66,uStack_118,lStack_110);
    func_0x000107c61170(lVar14);
    func_0x000107c615e8(lVar5);
    pcVar3 = *(code **)(lVar15 + 8);
    lVar5 = lStack_1c0;
    pcVar4 = pcStack_1a8;
  }
  (*pcVar3)(lVar5,pcVar4);
LAB_102fb3984:
  func_0x0001000834e4(&puStack_130);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  func_0x000107c60e78();
  *(undefined1 **)(lVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar17 + -8) = FUN_102fb3e2c;
  func_0x000107c60eb0("SecurityConfigImpl.SecurityConfigFetcherImpl",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb3e58);
  (*pcVar3)();
}



/* Entry: 102fb3edc; end: 102fb3f3b;  */

void FUN_102fb3edc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ad9f8);
  return;
}



/* Entry: 102fb3f3c; end: 102fb3f7b;  */

undefined8 FUN_102fb3f3c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102fb3f7c; end: 102fb4063;  */

long FUN_102fb3f7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x18) = param_3;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb3ffc);
  (*pcVar1)();
}



/* Entry: 102fb4064; end: 102fb4117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb4064(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083868);
  puVar1 = &UNK_1105f6560;
  func_0x000107c613fc(&UNK_1105f6560,0x20,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  func_0x0001000285a8(0x112f2de78,&UNK_10db723d0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c6157c();
  pcVar2 = FUN_102fb4234;
  func_0x0001000bdd8c(FUN_102fb4234,puVar1);
  func_0x00010034a6c0(0);
  func_0x000107c610f8();
  func_0x000102fb9014(pcVar2);
  return;
}



/* Entry: 102fb4118; end: 102fb4233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb4118(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = 0;
  FUN_102fb3edc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f2de40);
  *puVar1 = 0xd000000000000022;
  puVar1[1] = 0x800000010f117740;
  *(undefined8 *)(lVar3 + _DAT_112f2de30) = uVar7;
  puVar4 = &UNK_1105f65b0;
  func_0x000107c613fc(&UNK_1105f65b0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  func_0x0001000285a8(0x112f2df58,&UNK_10db72410);
  func_0x000107c613fc();
  func_0x000107c61174(uVar7);
  func_0x000107c61174(param_3);
  pcVar5 = FUN_102fb4414;
  func_0x0001000bdd8c(FUN_102fb4414,puVar4);
  *(code **)(lVar3 + _DAT_112f2de38) = pcVar5;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  param_1[1] = &PTR_DAT_1105f6538;
  return;
}



/* Entry: 102fb4234; end: 102fb423b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb4234(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_60;
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  lVar3 = 0;
  FUN_102fb3edc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f2de40);
  *puVar1 = 0xd000000000000022;
  puVar1[1] = 0x800000010f117740;
  *(undefined8 *)(lVar4 + _DAT_112f2de30) = uVar8;
  puVar5 = &UNK_1105f65b0;
  func_0x000107c613fc(&UNK_1105f65b0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  func_0x0001000285a8(0x112f2df58,&UNK_10db72410);
  func_0x000107c613fc();
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar2);
  pcVar6 = FUN_102fb4414;
  func_0x0001000bdd8c(FUN_102fb4414,puVar5);
  *(code **)(lVar4 + _DAT_112f2de38) = pcVar6;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  param_1[1] = &PTR_DAT_1105f6538;
  return;
}



/* Entry: 102fb423c; end: 102fb4257;  */

/* WARNING: Possible PIC construction at 0x000102fb4248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb424c) */

void FUN_102fb423c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102fb4258; end: 102fb42a3;  */

void FUN_102fb4258(void)

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



/* Entry: 102fb42a4; end: 102fb431f;  */

void FUN_102fb42a4(undefined8 param_1)

{
  if (lRam0000000112f2dea8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e73c99c);
  return;
}



/* Entry: 102fb4320; end: 102fb43e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb4320(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083868);
  puVar1 = &UNK_1105f6588;
  func_0x000107c613fc(&UNK_1105f6588,0x20,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  func_0x0001000285a8(0x112f2de78,&UNK_10db723d0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c6157c();
  uVar3 = 0x102fb441c;
  func_0x0001000bdd8c(0x102fb441c,puVar1);
  uVar2 = 0;
  func_0x00010034a6c0(0);
  func_0x000107c610f8();
  func_0x000102fb9014(uVar3,uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 102fb43e8; end: 102fb4413;  */

void FUN_102fb43e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102fb4414; end: 102fb441f;  */

void FUN_102fb4414(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000102fb7288();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126ac8f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105f6878;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar4);
  return;
}



/* Entry: 102fb4420; end: 102fb45a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102fb4420(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f2df60) = *(undefined8 *)(param_2 + _DAT_11307e6a8);
  func_0x000107c61174();
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f2df68) = lVar2;
    func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb44e4);
  (*pcVar1)();
}



/* Entry: 102fb45a8; end: 102fb45ff; +[_TtC18SecurityConfigImpl25SecurityConfigsEntryPoint attributedTask] */

void FUN_102fb45a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x000100933ae0(0);
  func_0x000100933b00();
  uVar2 = uVar1;
  func_0x000100933b54();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102fb4600; end: 102fb49c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb4600(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  long unaff_x20;
  ulong uVar9;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [64];
  undefined1 auStack_168 [280];
  
  uVar9 = *(ulong *)(unaff_x20 + _DAT_112f2df68);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f117770);
  uVar6 = uVar9;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar3);
  if ((int)uVar6 != 0) {
    func_0x000102fb83b8(0);
    func_0x000107c61534();
    uVar2 = 0xd000000000000016;
    FUN_102fb7fdc(0xd000000000000016,0x800000010f1177a0);
    uVar3 = 0;
    func_0x000102fb8764(0);
    func_0x000107c61534();
    FUN_102fb862c();
    uVar4 = 1;
    FUN_102fb86cc(1);
    func_0x000107c61574(uVar3);
    uVar3 = 0x112e28318;
    func_0x0001000285a8(0x112e28318,&UNK_10da17640);
    func_0x000107c61538();
    FUN_102fb86fc();
    func_0x000107c61574(uVar4);
    uVar4 = uVar3;
    func_0x000102fb825c(uVar3);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar2);
    uVar3 = 0;
    FUN_102fb8920(0);
    func_0x000107c61534();
    FUN_102fb8858();
    uVar2 = 1;
    FUN_102fb88e0(1);
    func_0x000107c61574(uVar3);
    uVar3 = 0x4b;
    func_0x000102fb88f0(0x4b);
    func_0x000107c61574(uVar2);
    uVar5 = 3;
    func_0x000102fb8900(3);
    func_0x000107c61574(uVar3);
    uVar2 = uVar5;
    FUN_102fb833c(uVar5);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar4);
    uVar4 = 0;
    FUN_102fb8cc8(0);
    func_0x000107c61534();
    FUN_102fb89e4();
    func_0x000107c61428(&PTR_FUN_112f2e0e8,auStack_168,0,0);
    uVar3 = uRam0000000112f2e0f0;
    puVar1 = PTR_FUN_112f2e0e8;
    func_0x000107c6157c(uRam0000000112f2e0f0);
    uVar6 = uVar9;
    (*(code *)puVar1)(uVar9);
    func_0x000107c61574(uVar3);
    uVar6 = uVar6 & 0xffffffff;
    FUN_102fb89f8(uVar6,2);
    func_0x000107c61574(uVar4);
    uVar4 = 0;
    func_0x000102fb8ce8(0);
    func_0x000107c61534();
    FUN_102fb8ae4();
    func_0x000107c61428(&PTR_DAT_112f2e0f8,auStack_1a8,0,0);
    uVar3 = uRam0000000112f2e100;
    puVar1 = PTR_DAT_112f2e0f8;
    func_0x000107c6157c(uRam0000000112f2e100);
    (*(code *)puVar1)(uVar9);
    func_0x000107c61574(uVar3);
    FUN_102fb8b5c(uVar9);
    func_0x000107c61574(uVar4);
    FUN_102fb8940();
    func_0x000107c61574(uVar9);
    uVar3 = uVar4;
    FUN_102fb89f8(uVar4,1);
    func_0x000107c61574(uVar6);
    func_0x000107c61170(uVar4);
    uVar4 = uVar3;
    FUN_102fb8294(uVar3);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar2);
    uVar3 = 3;
    func_0x000102fb8218(3);
    func_0x000107c61574(uVar4);
    FUN_102fb804c();
    func_0x000107c61574(uVar3);
    lVar7 = *(long *)(unaff_x20 + _DAT_112f2df60);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 == 0) {
      func_0x000107c61170(uVar4);
    }
    else {
      pcStack_1b8 = FUN_102fb49c4;
      uStack_1b0 = 0;
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0x42000000;
      puStack_1c8 = &UNK_100ff4e14;
      puStack_1c0 = &UNK_1105f65e0;
      ppuVar8 = &puStack_1d8;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c5c2c0(lVar7);
      func_0x000107c61170(uVar4);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(lVar7);
    }
  }
  return;
}



/* Entry: 102fb49c4; end: 102fb49c7;  */

void FUN_102fb49c4(void)

{
  return;
}



/* Entry: 102fb49c8; end: 102fb4a27; -[_TtC18SecurityConfigImpl25SecurityConfigsEntryPoint init] */

void FUN_102fb49c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SecurityConfigImpl.SecurityConfigsEntryPoint",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb49f4);
  (*pcVar1)();
}



/* Entry: 102fb4a28; end: 102fb4a7f; -[_TtC18SecurityConfigImpl25SecurityConfigsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb4a28(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f2df68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f2df60));
  return;
}



/* Entry: 102fb4a80; end: 102fb4aa3;  */

undefined8 FUN_102fb4a80(void)

{
  return 0;
}



/* Entry: 102fb4aa4; end: 102fb4ac3;  */

void FUN_102fb4aa4(void)

{
  func_0x000107c61168(&PTR_PTR_1128adac8);
  return;
}



/* Entry: 102fb4ac4; end: 102fb4b8b;  */

void FUN_102fb4ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1105f6638;
  func_0x000107c613fc(&UNK_1105f6638,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102fb4d44,puVar1);
  return;
}



/* Entry: 102fb4b8c; end: 102fb4d43;  */

void FUN_102fb4b8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x0001000285a8(0x112f2dfc8,&UNK_10db72478);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_102fb4dd8;
  func_0x0001000bdd8c(FUN_102fb4dd8,param_2);
  func_0x0001000a0a8c(0);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1105f6680;
  func_0x000107c613fc(&UNK_1105f6680,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(code **)(puVar3 + 0x18) = pcVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  pcStack_70 = FUN_102fb512c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1105f6698;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(pcVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar3 = puVar2;
  func_0x000100a0dc54(puVar2,0xd000000000000016,0x800000010f1177a0);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(pcVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102fb4d44; end: 102fb4d63;  */

void FUN_102fb4d44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000285a8(0x112f2dfc8,&UNK_10db72478);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  pcVar7 = FUN_102fb4dd8;
  func_0x0001000bdd8c(FUN_102fb4dd8,uVar1);
  func_0x0001000a0a8c(0);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar9 = &UNK_1105f6680;
  func_0x000107c613fc(&UNK_1105f6680,0x40,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar4;
  *(code **)(puVar9 + 0x18) = pcVar7;
  *(undefined8 *)(puVar9 + 0x20) = uVar2;
  *(undefined8 *)(puVar9 + 0x28) = uVar5;
  *(undefined8 *)(puVar9 + 0x30) = uVar3;
  *(undefined8 *)(puVar9 + 0x38) = uVar6;
  pcStack_70 = FUN_102fb512c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1105f6698;
  ppuVar10 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_68;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  puVar9 = puVar8;
  func_0x000100a0dc54(puVar8,0xd000000000000016,0x800000010f1177a0);
  func_0x000107c61170(puVar8);
  func_0x000107c61574(pcVar7);
  *param_1 = puVar9;
  return;
}



/* Entry: 102fb4d64; end: 102fb4dd7;  */

void FUN_102fb4d64(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4a7f0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  lVar2 = 0;
  func_0x000102fb7ab8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 102fb4dd8; end: 102fb4ddf;  */

void FUN_102fb4dd8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4a7f0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  lVar2 = 0;
  func_0x000102fb7ab8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 102fb4de0; end: 102fb50df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102fb4de0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x0001000285a8(0x112d4f908,&UNK_10d915820);
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  lVar1 = lStack_68;
  func_0x000107c410ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar2 = lVar1;
  func_0x0001000bda74();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_68);
  uVar10 = *(undefined8 *)(lStack_68 + _DAT_112f2e630);
  func_0x000107c6157c(uVar10);
  func_0x000107c61170(lStack_68);
  func_0x0001000285a8(0x112d5d478,&UNK_10d923b88);
  func_0x000100083b20(&lStack_70);
  lVar4 = lStack_70;
  lVar1 = lStack_70;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar3 = lVar1;
  func_0x0001000bda74();
  func_0x000107c61170(lVar1);
  func_0x0001000285a8(0x112f2dfd0,&UNK_10db72480);
  func_0x000100083b20(&lStack_70);
  lVar4 = lStack_70;
  lVar1 = lStack_70;
  func_0x000107c5da8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar1;
  func_0x0001000bda74();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_70);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  lVar6 = 0;
  FUN_102fb6bf4();
  lVar1 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f2dff8) = 0x5a0;
  *(long *)(lVar1 + _DAT_112f2dfd8) = lVar2;
  *(undefined8 *)(lVar1 + _DAT_112f2dfe0) = param_2;
  *(undefined8 *)(lVar1 + _DAT_112f2dfe8) = uVar10;
  *(long *)(lVar1 + _DAT_112f2dff0) = lVar3;
  *(long *)(lVar1 + _DAT_112f2e008) = lVar4;
  puVar7 = &UNK_1105f66d0;
  func_0x000107c613fc(&UNK_1105f66d0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  func_0x0001000285a8(0x112f2df58,&UNK_10db72410);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar10);
  func_0x000107c61174();
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(lVar4);
  uVar8 = 0x102fb5158;
  func_0x0001000bdd8c(0x102fb5158,puVar7);
  *(undefined8 *)(lVar1 + _DAT_112f2e000) = uVar8;
  plVar9 = &lStack_80;
  lStack_80 = lVar1;
  lStack_78 = lVar6;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(lVar4);
  func_0x000107c61170(uVar5);
  return plVar9;
}



/* Entry: 102fb50e0; end: 102fb512b;  */

void FUN_102fb50e0(void)

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



/* Entry: 102fb512c; end: 102fb515f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102fb512c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d4f908,&UNK_10d915820,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  lVar1 = lStack_68;
  func_0x000107c410ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar2 = lVar1;
  func_0x0001000bda74();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_68);
  uVar10 = *(undefined8 *)(lStack_68 + _DAT_112f2e630);
  func_0x000107c6157c(uVar10);
  func_0x000107c61170(lStack_68);
  func_0x0001000285a8(0x112d5d478,&UNK_10d923b88);
  func_0x000100083b20(&lStack_70);
  lVar4 = lStack_70;
  lVar1 = lStack_70;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar3 = lVar1;
  func_0x0001000bda74();
  func_0x000107c61170(lVar1);
  func_0x0001000285a8(0x112f2dfd0,&UNK_10db72480);
  func_0x000100083b20(&lStack_70);
  lVar4 = lStack_70;
  lVar1 = lStack_70;
  func_0x000107c5da8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar1;
  func_0x0001000bda74();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_70);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  lVar6 = 0;
  FUN_102fb6bf4();
  lVar1 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f2dff8) = 0x5a0;
  *(long *)(lVar1 + _DAT_112f2dfd8) = lVar2;
  *(undefined8 *)(lVar1 + _DAT_112f2dfe0) = uVar8;
  *(undefined8 *)(lVar1 + _DAT_112f2dfe8) = uVar10;
  *(long *)(lVar1 + _DAT_112f2dff0) = lVar3;
  *(long *)(lVar1 + _DAT_112f2e008) = lVar4;
  puVar7 = &UNK_1105f66d0;
  func_0x000107c613fc(&UNK_1105f66d0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  func_0x0001000285a8(0x112f2df58,&UNK_10db72410);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar10);
  func_0x000107c61174();
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(lVar4);
  uVar8 = 0x102fb5158;
  func_0x0001000bdd8c(0x102fb5158,puVar7);
  *(undefined8 *)(lVar1 + _DAT_112f2e000) = uVar8;
  plVar9 = &lStack_80;
  lStack_80 = lVar1;
  lStack_78 = lVar6;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(lVar4);
  func_0x000107c61170(uVar5);
  return plVar9;
}



/* Entry: 102fb5160; end: 102fb526f;  */

void FUN_102fb5160(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x000102fb7288();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126ac8f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105f6878;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 102fb5270; end: 102fb5bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb5270(double param_1,long param_2)

{
  ulong uVar1;
  double dVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x12;
  long unaff_x20;
  long lVar12;
  undefined *puVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *apuStack_190 [8];
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  double dStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  double dStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&puStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5eea0();
  lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  puVar13 = *(undefined **)(unaff_x20 + _DAT_112f2e000);
  if (lVar15 != 0) {
    uStack_1d0 = *(undefined8 *)(unaff_x20 + _DAT_112f2dff0);
    plVar16 = (long *)(*(long *)(param_2 + 0x10) + 0x20);
    do {
      puStack_c8 = (undefined *)plVar16[3];
      puStack_d0 = (undefined *)plVar16[2];
      puStack_b8 = (undefined *)plVar16[5];
      puStack_c0 = (undefined *)plVar16[4];
      lStack_d8 = plVar16[1];
      lStack_e0 = *plVar16;
      puStack_a8 = (undefined *)plVar16[7];
      param_1 = (double)plVar16[6];
      uStack_98 = plVar16[9];
      puStack_a0 = (undefined *)plVar16[8];
      lStack_88 = plVar16[0xb];
      uStack_90 = plVar16[10];
      lStack_80 = plVar16[0xc];
      dStack_b0 = param_1;
      if ((char)lStack_d8 == '\x01') {
        if (lStack_e0 < 2) {
          if (lStack_e0 != 0) {
            FUN_102fb6c28(&lStack_e0,&puStack_150);
            func_0x0001000d224c(&puStack_150);
            dVar2 = dStack_130;
            puVar6 = puStack_138;
            func_0x000102fb7108(&puStack_150,puStack_138);
            (**(code **)((long)dVar2 + 0x28))(0xd00000000000001b,0x800000010f117840,puVar6,dVar2);
            func_0x000102fb712c(&puStack_150);
            uVar1 = uStack_98;
            puVar5 = puStack_a8;
            dVar2 = dStack_b0;
            puVar4 = puStack_b8;
            puVar7 = puStack_c8;
            puVar6 = puStack_d0;
            if ((((uStack_90 & 1) == 0) ||
                (((uStack_98 & (ulong)puStack_a8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0))
               || ((uStack_98 >> 0x3d & 1) != 0)) {
LAB_102fb535c:
              func_0x000102fb6c64(&lStack_e0);
            }
            else {
              puStack_1d8 = puStack_a0;
              puStack_148 = puStack_c8;
              puStack_150 = puStack_d0;
              puStack_138 = puStack_b8;
              puStack_140 = puStack_c0;
              puStack_128 = puStack_a8;
              dStack_130 = dStack_b0;
              uStack_118 = uStack_98;
              puStack_120 = puStack_a0;
              param_1 = dStack_b0;
              FUN_102fb6cc4(&puStack_150,apuStack_190);
              func_0x000107c6142c(puVar4);
              func_0x00010006c090(dVar2,puVar5);
              func_0x00010006c090(puStack_1d8,uVar1);
              uVar1 = (ulong)puVar6 & 0xffffffffffff;
              if (((ulong)puVar7 & 0x2000000000000000) != 0) {
                uVar1 = (ulong)puVar7 >> 0x38 & 0xf;
              }
              if (uVar1 == 0) {
                func_0x000107c6142c(puVar7);
                func_0x000102fb6c64(&lStack_e0);
              }
              else {
                puVar4 = &UNK_1105f6720;
                func_0x000107c613fc(&UNK_1105f6720,0x18,7);
                func_0x000107c61614(puVar4 + 0x10,unaff_x20);
                puVar8 = PTR_PTR_1126b08b0;
                func_0x000107c61168(PTR_PTR_1126b08b0);
                func_0x000107c6157c(puVar4);
                func_0x000107c5fadc(puVar6,puVar7);
                func_0x000107c3f71c(puVar8);
                func_0x000107c61180();
                func_0x000107c61170(puVar6);
                puVar5 = PTR_PTR_1126b17d8;
                func_0x000107c610f8();
                func_0x000107c61174(puVar8);
                puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
                func_0x000107c460ec();
                func_0x000107c61170(puVar8);
                func_0x000107c61170(puVar6);
                if (puVar5 == (undefined *)0x0) {
LAB_102fb59c0:
                  func_0x000107c6142c(puVar7);
                  func_0x000107c61574(puVar4);
                  func_0x000102fb6c64(&lStack_e0);
                  func_0x000107c61574(puVar4);
                  func_0x000107c61170(puVar8);
                }
                else {
                  puStack_1d8 = puVar7;
                  puVar6 = puVar5;
                  func_0x000107c3ecd0();
                  func_0x000107c61180();
                  if (puVar6 == (undefined *)0x0) {
                    func_0x000107c6142c(puStack_1d8);
                    func_0x000107c61574(puVar4);
                    func_0x000102fb6c64(&lStack_e0);
                    func_0x000107c61574(puVar4);
                    func_0x000107c61170(puVar8);
                    goto LAB_102fb5ae0;
                  }
                  puStack_1e0 = puVar6;
                  func_0x0001000d224c(apuStack_190);
                  puVar7 = apuStack_190[0];
                  if (apuStack_190[0] == (undefined *)0x0) {
                    func_0x000107c6142c(puStack_1d8);
                    func_0x000107c61574(puVar4);
                    func_0x000102fb6c64(&lStack_e0);
                    func_0x000107c61574(puVar4);
                    func_0x000107c61170(puVar5);
                    puVar6 = puStack_1e0;
                    puVar5 = puVar8;
                    goto LAB_102fb5ad8;
                  }
                  puVar6 = &UNK_1105f67c0;
                  func_0x000107c613fc(&UNK_1105f67c0,0x20,7);
                  *(code **)(puVar6 + 0x10) = FUN_102fb6d00;
                  *(undefined **)(puVar6 + 0x18) = puVar4;
                  dStack_130 = 2.14671540311506e-314;
                  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
                  puStack_148 = (undefined *)0x42000000;
                  puStack_140 = &UNK_100f17d9c;
                  puStack_138 = &UNK_1105f67d8;
                  ppuVar9 = &puStack_150;
                  puStack_128 = puVar6;
                  func_0x000107c60bc4(ppuVar9);
                  puVar6 = puStack_128;
                  func_0x000107c6157c(puVar4);
                  func_0x000107c61574(puVar6);
                  puVar6 = puStack_1e0;
                  puVar10 = puVar7;
                  func_0x000107c50788();
                  func_0x000107c61180();
                  puStack_1e8 = puVar10;
                  func_0x000107c6142c(puStack_1d8);
                  func_0x000107c61574(puVar4);
                  func_0x000102fb6c64(&lStack_e0);
                  func_0x000107c61170(puVar5);
                  func_0x000107c61170(puVar6);
                  func_0x000107c61170(puVar8);
                  func_0x000107c60bd0(ppuVar9);
                  func_0x000107c61574(puVar4);
                  puStack_1f0 = puStack_1e8;
LAB_102fb5944:
                  func_0x000107c615e8(puStack_1f0);
                  func_0x000107c615e8(puVar7);
                }
              }
            }
          }
        }
        else if (lStack_e0 == 2) {
          FUN_102fb6c28(&lStack_e0,&puStack_150);
          func_0x0001000d224c(&puStack_150);
          dVar2 = dStack_130;
          puVar6 = puStack_138;
          func_0x000102fb7108(&puStack_150,puStack_138);
          (**(code **)((long)dVar2 + 0x28))(0xd00000000000001b,0x800000010f117820,puVar6,dVar2);
          func_0x000102fb712c(&puStack_150);
          uVar1 = uStack_98;
          puVar8 = puStack_a0;
          puVar5 = puStack_a8;
          dVar2 = dStack_b0;
          puVar4 = puStack_b8;
          puVar7 = puStack_c8;
          puVar6 = puStack_d0;
          if ((((uStack_90 & 1) == 0) ||
              (((uStack_98 & (ulong)puStack_a8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0)) ||
             ((uStack_98 >> 0x3d & 1) != 0)) goto LAB_102fb535c;
          puStack_148 = puStack_c8;
          puStack_150 = puStack_d0;
          puStack_138 = puStack_b8;
          puStack_140 = puStack_c0;
          puStack_128 = puStack_a8;
          dStack_130 = dStack_b0;
          uStack_118 = uStack_98;
          puStack_120 = puStack_a0;
          param_1 = dStack_b0;
          puStack_1d8 = puVar13;
          FUN_102fb6cc4(&puStack_150,apuStack_190);
          func_0x000107c6142c(puVar4);
          func_0x00010006c090(dVar2,puVar5);
          func_0x00010006c090(puVar8,uVar1);
          uVar1 = (ulong)puVar6 & 0xffffffffffff;
          if (((ulong)puVar7 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)puVar7 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            func_0x000107c6142c(puVar7);
            func_0x000102fb6c64(&lStack_e0);
            puVar13 = puStack_1d8;
          }
          else {
            puVar4 = &UNK_1105f6720;
            func_0x000107c613fc(&UNK_1105f6720,0x18,7);
            func_0x000107c61614(puVar4 + 0x10,unaff_x20);
            puVar5 = PTR_PTR_1126b08b0;
            func_0x000107c61168(PTR_PTR_1126b08b0);
            func_0x000107c6157c(puVar4);
            func_0x000107c5fadc(puVar6,puVar7);
            func_0x000107c3f71c(puVar5);
            func_0x000107c61180();
            func_0x000107c61170(puVar6);
            puVar6 = PTR_PTR_1126b17d8;
            func_0x000107c610f8();
            func_0x000107c61174(puVar5);
            puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
            func_0x000107c460ec();
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar13);
            puVar13 = puStack_1d8;
            puVar8 = puVar5;
            if (puVar6 == (undefined *)0x0) goto LAB_102fb59c0;
            puStack_1e0 = puVar7;
            puVar7 = puVar6;
            func_0x000107c3ecd0();
            func_0x000107c61180();
            if (puVar7 == (undefined *)0x0) {
              func_0x000107c6142c(puStack_1e0);
              func_0x000107c61574(puVar4);
              func_0x000107c61170(puVar6);
              func_0x000102fb6c64(&lStack_e0);
              func_0x000107c61574(puVar4);
            }
            else {
              puStack_1e8 = puVar7;
              func_0x0001000d224c(apuStack_190);
              puVar7 = apuStack_190[0];
              if (apuStack_190[0] != (undefined *)0x0) {
                puVar8 = &UNK_1105f6770;
                func_0x000107c613fc(&UNK_1105f6770,0x20,7);
                *(code **)(puVar8 + 0x10) = FUN_102fb6c98;
                *(undefined **)(puVar8 + 0x18) = puVar4;
                dStack_130 = 2.1467147726873e-314;
                puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
                puStack_148 = (undefined *)0x42000000;
                puStack_140 = &UNK_100f17d9c;
                puStack_138 = &UNK_1105f6788;
                ppuVar9 = &puStack_150;
                puStack_128 = puVar8;
                func_0x000107c60bc4(ppuVar9);
                puVar8 = puStack_128;
                func_0x000107c6157c(puVar4);
                func_0x000107c61574(puVar8);
                puVar8 = puStack_1e8;
                puVar10 = puVar7;
                func_0x000107c50788();
                func_0x000107c61180();
                puStack_1f0 = puVar10;
                func_0x000107c6142c(puStack_1e0);
                func_0x000107c61574(puVar4);
                func_0x000102fb6c64(&lStack_e0);
                func_0x000107c61170(puVar6);
                func_0x000107c61170(puVar8);
                func_0x000107c61170(puVar5);
                func_0x000107c60bd0(ppuVar9);
                func_0x000107c61574(puVar4);
                goto LAB_102fb5944;
              }
              func_0x000107c6142c(puStack_1e0);
              func_0x000107c61574(puVar4);
              func_0x000102fb6c64(&lStack_e0);
              func_0x000107c61574(puVar4);
              func_0x000107c61170(puVar6);
              puVar6 = puStack_1e8;
LAB_102fb5ad8:
              func_0x000107c61170(puVar6);
            }
LAB_102fb5ae0:
            func_0x000107c61170(puVar5);
          }
        }
        else {
          FUN_102fb6c28(&lStack_e0,&puStack_150);
          func_0x0001000d224c(&puStack_150);
          dVar2 = dStack_130;
          puVar6 = puStack_138;
          func_0x000102fb7108(&puStack_150,puStack_138);
          (**(code **)((long)dVar2 + 0x28))(0x6f6c6c615f6c7275,0xed00007473696c77,puVar6,dVar2);
          func_0x000102fb6c64(&lStack_e0);
          func_0x000102fb712c(&puStack_150);
        }
      }
      plVar16 = plVar16 + 0xd;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  func_0x000107c5eea0(lVar11);
  func_0x000107c5ee68(lVar11 - extraout_x12);
  pcVar14 = *(code **)(lVar12 + 8);
  (*pcVar14)(lVar11,lVar3);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x102fb5bf0);
    (*pcVar14)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x0001000d224c(&lStack_e0);
      puVar6 = puStack_c0;
      puVar13 = puStack_c8;
      func_0x000102fb7108(&lStack_e0,puStack_c8);
      (**(code **)(puVar6 + 0x30))
                (0xd00000000000001f,0x800000010f117860,(long)param_1,puVar13,puVar6);
      (*pcVar14)(lVar11 - extraout_x12,lVar3);
      func_0x000102fb712c(&lStack_e0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x102fb5bf8);
    (*pcVar14)();
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x102fb5bf4);
  (*pcVar14)();
}



/* Entry: 102fb5bf8; end: 102fb5cff; -[_TtC18SecurityConfigImpl27SecurityConfigsJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_102fb5bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_1105f66f8;
  func_0x000107c613fc(&UNK_1105f66f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  pcVar3 = FUN_102fb6c14;
  FUN_102fb6b00(FUN_102fb6c14,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 102fb5d00; end: 102fb5e57;  */

void FUN_102fb5d00(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x00010006c00c(param_1,param_2);
      lVar1 = param_1;
      FUN_102fb6d08(param_1,param_2);
      if (lVar1 == 0) {
        func_0x0001000b44c0(param_1,param_2);
        func_0x000107c61170(param_3);
      }
      else {
        puVar2 = &UNK_1105f6720;
        func_0x000107c613fc(&UNK_1105f6720,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,param_3);
        puVar3 = &UNK_1105f6810;
        func_0x000107c613fc(&UNK_1105f6810,0x20,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(long *)(puVar3 + 0x18) = lVar1;
        func_0x000107c61174(lVar1);
        uVar4 = 5;
        func_0x0001001ca524(5,0,0x5c,4,0,0,&UNK_10db724b8,puVar3,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lVar1);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(uVar4);
        func_0x0001000b44c0(param_1,param_2);
      }
    }
  }
  return;
}



/* Entry: 102fb5e58; end: 102fb5fb3;  */

void FUN_102fb5e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102fb5ec4,0,0);
  return;
}



/* Entry: 102fb5fb4; end: 102fb60f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb5fb4(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c5eea0(uVar1);
  func_0x000107c5ee68(uVar3);
  pcVar6 = *(code **)(lVar4 + 8);
  (*pcVar6)(uVar1,uVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102fb60ec);
    (*pcVar6)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      func_0x000102fb7108(unaff_x22 + 0x10,uVar2);
      (**(code **)(lVar4 + 0x48))((long)param_1,uVar2,lVar4);
      func_0x000107c61170(uVar3);
      (*pcVar6)(uVar1,uVar5);
      func_0x000102fb712c(unaff_x22 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102fb60e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102fb60f4);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102fb60f0);
  (*pcVar6)();
}



/* Entry: 102fb60f4; end: 102fb610b;  */

void FUN_102fb60f4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fb610c,0,0);
  return;
}



/* Entry: 102fb610c; end: 102fb61cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb610c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 200);
  *(long *)(unaff_x22 + 0xe8) = *(long *)(unaff_x22 + 200);
  if (*(long *)(unaff_x22 + 200) != 0) {
    func_0x0001000d224c(unaff_x22 + 0xd0);
    lVar2 = *(long *)(unaff_x22 + 0xd0);
    *(long *)(unaff_x22 + 0xf0) = lVar2;
    func_0x0001000d224c(unaff_x22 + 0x80);
    plVar1 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102fb61cc;
    plVar1[0x1a] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102fb754c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102fb61c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fb61cc; end: 102fb622b;  */

void FUN_102fb61cc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x100) = param_1;
  *(long *)(lVar2 + 0x108) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102fb622c;
  }
  else {
    pcVar1 = FUN_102fb6850;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102fb622c; end: 102fb651b;  */

void FUN_102fb622c(void)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar11 = *(long *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  func_0x000102fb7108(unaff_x22 + 0x80,uVar8);
  (**(code **)(lVar7 + 0x38))(*(undefined8 *)(lVar11 + 0x10),uVar8,lVar7);
  lVar11 = *(long *)(lVar11 + 0x10);
  *(long *)(unaff_x22 + 0x110) = lVar11;
  lVar7 = 0;
  if (lVar11 != 0) {
    lVar11 = 0;
    while( true ) {
      *(long *)(unaff_x22 + 0x118) = lVar11;
      iVar10 = (int)*(undefined8 *)(unaff_x22 + 0xd8);
      lVar11 = *(long *)(unaff_x22 + 0x100) + lVar11 * 0x10;
      uVar5 = *(undefined8 *)(lVar11 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x120) = uVar5;
      uVar9 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x128) = uVar9;
      func_0x000107c61434(uVar9);
      uVar8 = uVar5;
      func_0x000107c5fadc(uVar5,uVar9);
      func_0x000107c4c0e8();
      func_0x000107c61170(uVar8);
      if (iVar10 != 0) {
        bVar2 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        *(long *)(unaff_x22 + 0x130) = lVar7;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb651c);
          (*pcVar1)();
        }
        *(undefined8 *)(unaff_x22 + 0xc0) = 0;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0;
        func_0x000107c5fadc(uVar5,uVar9);
        lVar11 = *(long *)(unaff_x22 + 0xc0);
        if (lVar11 == 0) {
          uVar12 = 0;
        }
        else {
          func_0x000102fb7108(unaff_x22 + 0xa8,lVar11);
          lVar14 = *(long *)(lVar11 + -8);
          uVar3 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar3);
          (**(code **)(lVar14 + 0x10))();
          uVar12 = uVar3;
          func_0x000107c605b0(uVar3,lVar11);
          (**(code **)(lVar14 + 8))(uVar3,lVar11);
          func_0x000107c615c0(uVar3);
          func_0x000102fb712c(unaff_x22 + 0xa8);
        }
        puVar4 = PTR_PTR_1126baa60;
        func_0x000107c610f8();
        func_0x000107c46fcc();
        *(undefined **)(unaff_x22 + 0x138) = puVar4;
        func_0x000107c615e8(uVar12);
        func_0x000107c61170(uVar5);
        if (puVar4 != (undefined *)0x0) {
          uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_102fb651c;
          lVar7 = unaff_x22 + 0x10;
          func_0x000107c61448(lVar7,0);
          puVar4 = &UNK_1105f6838;
          func_0x000107c613fc(&UNK_1105f6838,0x18,7);
          puVar13 = (undefined8 *)(unaff_x22 + 0x50);
          *puVar13 = PTR___NSConcreteStackBlock_11034bd00;
          *(long *)(puVar4 + 0x10) = lVar7;
          *(undefined8 *)(unaff_x22 + 0x70) = 0x102fb7100;
          *(undefined **)(unaff_x22 + 0x78) = puVar4;
          *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x60) = &UNK_1000b0c7c;
          *(undefined **)(unaff_x22 + 0x68) = &UNK_1105f6850;
          func_0x000107c60bc4(puVar13);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
          func_0x000107c50014(uVar8);
          func_0x000107c60bd0(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
      }
      lVar11 = *(long *)(unaff_x22 + 0x110);
      lVar14 = *(long *)(unaff_x22 + 0x118);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x128));
      if (lVar14 + 1 == lVar11) break;
      lVar11 = *(long *)(unaff_x22 + 0x118) + 1;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar11 = *(long *)(unaff_x22 + 0xa0);
  func_0x000102fb7108(unaff_x22 + 0x80,uVar5);
  (**(code **)(lVar11 + 0x40))(lVar7,uVar5,lVar11);
  func_0x000107c6142c(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000107c615e8(uVar8);
  func_0x000102fb712c(unaff_x22 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000102fb6454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fb651c; end: 102fb655b;  */

void FUN_102fb651c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fb655c,0,0);
  return;
}



/* Entry: 102fb655c; end: 102fb684f;  */

void FUN_102fb655c(void)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  func_0x000102fb7108(unaff_x22 + 0x80,uVar6);
  (**(code **)(lVar7 + 0x50))(uVar8,uVar9,0,uVar6,lVar7);
  func_0x000107c61170(uVar5);
  lVar7 = *(long *)(unaff_x22 + 0x130);
  while( true ) {
    do {
      lVar10 = *(long *)(unaff_x22 + 0x110);
      lVar13 = *(long *)(unaff_x22 + 0x118);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x128));
      if (lVar13 + 1 == lVar10) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
        lVar10 = *(long *)(unaff_x22 + 0xa0);
        func_0x000102fb7108(unaff_x22 + 0x80,uVar6);
        (**(code **)(lVar10 + 0x40))(lVar7,uVar6,lVar10);
        func_0x000107c6142c(uVar5);
        func_0x000107c61574(uVar9);
        func_0x000107c615e8(uVar8);
        func_0x000102fb712c(unaff_x22 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000102fb6848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      lVar10 = *(long *)(unaff_x22 + 0x118) + 1;
      *(long *)(unaff_x22 + 0x118) = lVar10;
      uVar11 = *(ulong *)(unaff_x22 + 0xd8);
      lVar10 = *(long *)(unaff_x22 + 0x100) + lVar10 * 0x10;
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x120) = uVar6;
      uVar9 = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x128) = uVar9;
      func_0x000107c61434(uVar9);
      uVar8 = uVar6;
      func_0x000107c5fadc(uVar6,uVar9);
      func_0x000107c4c0e8();
      func_0x000107c61170(uVar8);
    } while ((uVar11 & 1) == 0);
    bVar2 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    *(long *)(unaff_x22 + 0x130) = lVar7;
    if (bVar2) break;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    func_0x000107c5fadc(uVar6,uVar9);
    lVar10 = *(long *)(unaff_x22 + 0xc0);
    if (lVar10 == 0) {
      uVar11 = 0;
    }
    else {
      func_0x000102fb7108(unaff_x22 + 0xa8,lVar10);
      lVar13 = *(long *)(lVar10 + -8);
      uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar3);
      (**(code **)(lVar13 + 0x10))();
      uVar11 = uVar3;
      func_0x000107c605b0(uVar3,lVar10);
      (**(code **)(lVar13 + 8))(uVar3,lVar10);
      func_0x000107c615c0(uVar3);
      func_0x000102fb712c(unaff_x22 + 0xa8);
    }
    puVar4 = PTR_PTR_1126baa60;
    func_0x000107c610f8();
    func_0x000107c46fcc();
    *(undefined **)(unaff_x22 + 0x138) = puVar4;
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar6);
    if (puVar4 != (undefined *)0x0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102fb651c;
      lVar7 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar7,0);
      puVar4 = &UNK_1105f6838;
      func_0x000107c613fc(&UNK_1105f6838,0x18,7);
      puVar12 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar12 = PTR___NSConcreteStackBlock_11034bd00;
      *(long *)(puVar4 + 0x10) = lVar7;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x102fb7100;
      *(undefined **)(unaff_x22 + 0x78) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1000b0c7c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1105f6850;
      func_0x000107c60bc4(puVar12);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c50014(uVar8);
      func_0x000107c60bd0(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb6850);
  (*pcVar1)();
}



/* Entry: 102fb6850; end: 102fb689b;  */

void FUN_102fb6850(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615e8(uVar1);
  func_0x000107c614ac(uVar2);
  func_0x000102fb712c(unaff_x22 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000102fb6898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fb689c; end: 102fb6937;  */

void FUN_102fb689c(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x000100de78a0(param_1,param_2);
      uVar1 = param_1;
      FUN_102fb6d08(param_1,param_2);
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar1);
    }
  }
  return;
}



/* Entry: 102fb6938; end: 102fb6a27;  */

/* WARNING: Possible PIC construction at 0x000102fb6a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fb69cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb69d0) */

void FUN_102fb6938(long param_1,code *param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  
  pcVar3 = param_2;
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == 0) {
    (*param_2)(0,0xf000000000000000);
    return;
  }
  lVar2 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  uVar1 = (uint)((ulong)pcVar3 >> 0x20);
  if (uVar1 >> 0x1e < 2) {
    if (uVar1 >> 0x1e == 0) {
      if (((ulong)pcVar3 & 0xff000000000000) == 0) goto code_r0x00010006c090;
    }
    else if ((long)(int)lVar2 == lVar2 >> 0x20) goto code_r0x00010006c090;
  }
  else if ((uVar1 >> 0x1e != 2) || (*(long *)(lVar2 + 0x10) == *(long *)(lVar2 + 0x18)))
  goto code_r0x00010006c090;
  func_0x00010006c00c(lVar2,pcVar3);
  (*param_2)(lVar2,pcVar3);
code_r0x00010006c090:
  if (uVar1 >> 0x1e != 1) {
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)((ulong)pcVar3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102fb6a28; end: 102fb6a87; -[_TtC18SecurityConfigImpl27SecurityConfigsJobProcessor init] */

void FUN_102fb6a28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SecurityConfigImpl.SecurityConfigsJobProcessor",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb6a54);
  (*pcVar1)();
}



/* Entry: 102fb6a88; end: 102fb6aff; -[_TtC18SecurityConfigImpl27SecurityConfigsJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102fb6aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fb6ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fb6ae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb6ac8) */
/* WARNING: Removing unreachable block (ram,0x000102fb6aa8) */
/* WARNING: Removing unreachable block (ram,0x000102fb6ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb6a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f2dfd8));
  return;
}



/* Entry: 102fb6b00; end: 102fb6bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102fb6b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&uStack_60);
  uVar1 = uStack_60;
  func_0x000107c614f0(uStack_60);
  puVar2 = &UNK_1105f6720;
  func_0x000107c613fc(&UNK_1105f6720,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105f6748;
  func_0x000107c613fc(&UNK_1105f6748,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcVar4 = *(code **)(lStack_58 + 8);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_2);
  (*pcVar4)(0x102fb6c1c,puVar3,uVar1,lStack_58);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_60);
  func_0x000107c61574(puVar3);
  return 0;
}



/* Entry: 102fb6bf4; end: 102fb6c13;  */

void FUN_102fb6bf4(void)

{
  func_0x000107c61168(&PTR_PTR_1128adb90);
  return;
}



/* Entry: 102fb6c14; end: 102fb6c27;  */

void FUN_102fb6c14(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102fb6c28; end: 102fb6c97;  */

undefined8 FUN_102fb6c28(undefined8 param_1,undefined8 param_2)

{
  FUN_102fbcfd0(param_2,param_1);
  return param_2;
}



/* Entry: 102fb6c98; end: 102fb6cc3;  */

void FUN_102fb6c98(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000100de78a0(param_1,param_2);
      uVar2 = param_1;
      FUN_102fb6d08(param_1,param_2);
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 102fb6cc4; end: 102fb6cff;  */

undefined8 FUN_102fb6cc4(undefined8 param_1,undefined8 param_2)

{
  FUN_102fbd400(param_2,param_1);
  return param_2;
}



/* Entry: 102fb6d00; end: 102fb6d07;  */

void FUN_102fb6d00(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x00010006c00c(param_1,param_2);
      lVar2 = param_1;
      FUN_102fb6d08(param_1,param_2);
      if (lVar2 == 0) {
        func_0x0001000b44c0(param_1,param_2);
        func_0x000107c61170(lVar1);
      }
      else {
        puVar3 = &UNK_1105f6720;
        func_0x000107c613fc(&UNK_1105f6720,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar1);
        puVar4 = &UNK_1105f6810;
        func_0x000107c613fc(&UNK_1105f6810,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(long *)(puVar4 + 0x18) = lVar2;
        func_0x000107c61174(lVar2);
        uVar5 = 5;
        func_0x0001001ca524(5,0,0x5c,4,0,0,&UNK_10db724b8,puVar4,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(uVar5);
        func_0x0001000b44c0(param_1,param_2);
      }
    }
  }
  return;
}



/* Entry: 102fb6d08; end: 102fb705f;  */

/* WARNING: Removing unreachable block (ram,0x000102fb6f3c) */

void FUN_102fb6d08(undefined1 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 *unaff_x22;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  uint uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_98 = 0xc000000000000000;
  uStack_a0 = 0;
  uStack_88 = 0xc000000000000000;
  lStack_90 = 0;
  uVar5 = (uint)(param_2 >> 0x20);
  uVar16 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar16 == 0) {
      auStack_c8[0] = SUB81(param_1,0);
      auStack_c8[1] = (undefined1)((ulong)param_1 >> 8);
      auStack_c8[2] = (undefined1)((ulong)param_1 >> 0x10);
      auStack_c8[3] = (undefined1)((ulong)param_1 >> 0x18);
      auStack_c8[4] = (undefined1)((ulong)param_1 >> 0x20);
      auStack_c8[5] = (undefined1)((ulong)param_1 >> 0x28);
      auStack_c8[6] = (undefined1)((ulong)param_1 >> 0x30);
      auStack_c8[7] = (undefined1)((ulong)param_1 >> 0x38);
      auStack_c8[8] = (undefined1)param_2;
      auStack_c8[9] = (undefined1)(param_2 >> 8);
      auStack_c8[10] = (undefined1)(param_2 >> 0x10);
      auStack_c8[0xb] = (undefined1)(param_2 >> 0x18);
      auStack_c8[0xc] = (undefined1)(param_2 >> 0x20);
      auStack_c8[0xd] = (undefined1)(param_2 >> 0x28);
      puVar15 = auStack_c8 + (param_2 >> 0x30 & 0xff);
      FUN_102fb714c();
      puVar17 = auStack_c8;
    }
    else {
      lVar8 = (long)(int)param_1;
      unaff_x22 = (undefined1 *)(((long)param_1 >> 0x20) - lVar8);
      if ((long)param_1 >> 0x20 < lVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102fb7050);
        (*pcVar7)();
      }
      func_0x000107c5ec30();
      if (param_1 == (undefined1 *)0x0) {
        func_0x000107c5ec38();
        puVar17 = (undefined1 *)0x0;
        puVar11 = param_1;
        puVar15 = (undefined1 *)0x0;
      }
      else {
        puVar11 = param_1;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar8,(long)puVar11)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102fb705c);
          (*pcVar7)();
        }
        param_1 = param_1 + (lVar8 - (long)puVar11);
        func_0x000107c5ec38();
        puVar1 = puVar11;
        if ((long)unaff_x22 <= (long)puVar11) {
          puVar1 = unaff_x22;
        }
        puVar17 = (undefined1 *)0x0;
        if (param_1 != (undefined1 *)0x0) {
          puVar17 = param_1;
        }
        puVar15 = (undefined1 *)0x0;
        if (param_1 != (undefined1 *)0x0) {
          puVar15 = puVar1 + (long)param_1;
        }
      }
      FUN_102fb714c();
      param_1 = puVar11;
    }
  }
  else if (uVar16 == 2) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x000107c5ec30();
    puVar11 = param_1;
    puVar17 = param_1;
    if (param_1 != (undefined1 *)0x0) {
      func_0x000107c5ec3c();
      if (SBORROW8(lVar8,(long)puVar11)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102fb7058);
        (*pcVar7)();
      }
      puVar17 = param_1 + (lVar8 - (long)puVar11);
    }
    unaff_x22 = (undefined1 *)(lVar3 - lVar8);
    if (SBORROW8(lVar3,lVar8)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102fb7054);
      (*pcVar7)();
    }
    func_0x000107c5ec38();
    puVar1 = puVar11;
    if ((long)unaff_x22 <= (long)puVar11) {
      puVar1 = unaff_x22;
    }
    puVar15 = (undefined1 *)0x0;
    if (puVar17 != (undefined1 *)0x0) {
      puVar15 = puVar1 + (long)puVar17;
    }
    FUN_102fb714c();
    param_1 = puVar11;
  }
  else {
    FUN_102fb714c();
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    auStack_c8[6] = 0;
    auStack_c8[7] = 0;
    auStack_c8[8] = 0;
    auStack_c8[9] = 0;
    auStack_c8[10] = 0;
    auStack_c8[0xb] = 0;
    auStack_c8[0xc] = 0;
    auStack_c8[0xd] = 0;
    puVar17 = auStack_c8;
    puVar15 = auStack_c8;
  }
  func_0x00010006ae80(puVar17,puVar15,&uStack_80,0,100,0,&UNK_1105f6d40,param_1);
  func_0x000100ee9068(&uStack_80);
  uVar6 = uStack_88;
  lVar8 = lStack_90;
  uVar4 = uStack_98;
  uVar2 = uStack_a0;
  if ((((uStack_b0._4_4_ < 0x80) && (uStack_b0._4_4_ != 0)) &&
      (unaff_x22 = (undefined1 *)(ulong)uStack_a8, -1 < (int)uStack_a8)) && (uStack_a8 != 0)) {
    puVar13 = PTR_PTR_1126ce390;
    func_0x000107c61168();
    uVar12 = uVar2;
    func_0x000107c5ee20(uVar2,uVar4);
    func_0x000107c408f8();
    func_0x000107c61180();
    func_0x00010006c090(uVar2,uVar4);
    func_0x00010006c090(lVar8,uVar6);
    func_0x000107c61170(uVar12);
  }
  else {
    func_0x00010006c090();
    func_0x00010006c090(lVar8,uVar6);
    puVar13 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78(puVar13);
  uVar2 = *(undefined8 *)(lVar8 + 0x10);
  uVar4 = *(undefined8 *)(lVar8 + 0x18);
  puVar14 = (undefined8 *)0x90;
  func_0x000107c615b8();
  *(undefined8 **)(unaff_x22 + 0x10) = puVar14;
  *puVar14 = unaff_x22;
  puVar14[1] = FUN_102fb70c4;
  puVar14[10] = uVar2;
  puVar14[0xb] = uVar4;
  lVar8 = 0;
  func_0x000107c5eea4();
  puVar14[0xc] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  puVar14[0xd] = lVar8;
  uVar10 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar9 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  puVar14[0xe] = uVar9;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  puVar14[0xf] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102fb5ec4,0,0);
  return;
}



/* Entry: 102fb7060; end: 102fb70c3;  */

void FUN_102fb7060(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102fb70c4;
  plVar5[10] = lVar2;
  plVar5[0xb] = lVar1;
  lVar2 = 0;
  func_0x000107c5eea4();
  plVar5[0xc] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar5[0xd] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xe] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xf] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102fb5ec4,0,0);
  return;
}



/* Entry: 102fb70c4; end: 102fb70ff;  */

void FUN_102fb70c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102fb70fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102fb7100; end: 102fb714b;  */

void FUN_102fb7100(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102fb714c; end: 102fb718b;  */

void FUN_102fb714c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db72850;
  func_0x000107c61520(&DAT_10db72850,&UNK_1105f6d40);
  puRam0000000112f2e038 = puVar1;
  return;
}



/* Entry: 102fb718c; end: 102fb719f;  */

void FUN_102fb718c(long param_1,long param_2)

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



/* Entry: 102fb71a0; end: 102fb725b;  */

/* WARNING: Possible PIC construction at 0x000102fb720c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb7210) */

void FUN_102fb71a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ac900;
    func_0x000107c610f8(PTR_PTR_1126ac900);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c55214(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102fb725c; end: 102fb72a7;  */

void FUN_102fb725c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fb72a8; end: 102fb72ef;  */

void FUN_102fb72a8(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11093f998,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 102fb72f0; end: 102fb737f;  */

void FUN_102fb72f0(undefined8 param_1)

{
  code *in_x4;
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*in_x4)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fb7380; end: 102fb73af;  */

void FUN_102fb7380(undefined8 param_1)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11093fbc8,&uStack_40,param_1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 102fb73b0; end: 102fb73cf;  */

void FUN_102fb73b0(void)

{
  FUN_102fb71a0();
  return;
}



/* Entry: 102fb73d0; end: 102fb7523;  */

ulong FUN_102fb73d0(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112f2e108,auStack_48,0,0);
  if ((long)uRam0000000112f2e108 < 0) {
    uVar2 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f1178b0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    if ((int)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb7478);
      (*pcVar1)();
    }
  }
  else {
    param_1 = uRam0000000112f2e108;
    if (uRam0000000112f2e108 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb7418);
      (*pcVar1)();
    }
  }
  return param_1;
}



/* Entry: 102fb7524; end: 102fb754b;  */

undefined1  [16] FUN_102fb7524(void)

{
  return ZEXT816(0x1105f68e0);
}



/* Entry: 102fb754c; end: 102fb78d7;  */

void FUN_102fb754c(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x22;
  
  puVar1 = PTR_PTR_1126b0cb0;
  func_0x000107c610f8();
  func_0x000107c48eb8();
  *(undefined **)(unaff_x22 + 0xd8) = puVar1;
  if (puVar1 == (undefined *)0x0) {
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar6;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar2 + 0x28) = lVar4;
    *(undefined8 *)(lVar2 + 0x30) = 0xd00000000000002e;
    *(undefined8 *)(lVar2 + 0x38) = 0x800000010f1178e0;
    lVar4 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    FUN_102fb7ee8((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010db72540);
    lVar2 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0xd0) + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xe0) = lVar2;
    if (lVar2 != 0) {
      func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
      func_0x000107c4a7e4();
      func_0x000107c61180();
      lVar4 = lVar2;
      func_0x000100759c94();
      *(long *)(unaff_x22 + 0xe8) = lVar4;
      func_0x000107c61170(lVar2);
      plVar3 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xf0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_102fb78d8;
                    /* WARNING: Could not recover jumptable at 0x000102fb7648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)&UNK_101dc0324)();
      return;
    }
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar4 = unaff_x22 + 0x60;
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar6;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar2 + 0x28) = lVar4;
    *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000021;
    *(undefined8 *)(lVar2 + 0x38) = 0x800000010f117910;
    lVar4 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    FUN_102fb7ee8((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010db72540);
    lVar2 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c61170(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102fb78d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fb78d8; end: 102fb7933;  */

void FUN_102fb78d8(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xe8);
  *(undefined8 *)(lVar2 + 0xf8) = param_1;
  *(undefined1 *)(lVar2 + 0x100) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fb7934,0,0);
  return;
}



/* Entry: 102fb7934; end: 102fb7a43;  */

void FUN_102fb7934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0x100);
  lVar6 = *(long *)(unaff_x22 + 0xf8);
  if (cVar3 == '\x01') {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61654();
    func_0x000107c615e8(uVar1);
    func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102fb7994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (lVar6 == 0) {
    lVar5 = 0;
    uVar4 = 0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  }
  else {
    uVar4 = 0;
    func_0x000102fb7f28(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    lVar5 = lVar6;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 0xb0) = lVar5;
  *(undefined8 *)(unaff_x22 + 200) = uVar4;
  func_0x000101dc06f4(lVar6,cVar3);
  lVar5 = unaff_x22 + 0xb0;
  FUN_102fb7c9c(lVar5);
  func_0x000107c61170(uVar1);
  func_0x000101dc0624(lVar6,cVar3);
  func_0x000107c615e8(uVar2);
  func_0x000102fb7ee8(unaff_x22 + 0xb0,0x112d387f8,&UNK_10d902650);
                    /* WARNING: Could not recover jumptable at 0x000102fb7a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar5);
  return;
}



/* Entry: 102fb7a44; end: 102fb7a83;  */

void FUN_102fb7a44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fb7a84,0,0);
  return;
}



/* Entry: 102fb7a84; end: 102fb7a93;  */

void FUN_102fb7a84(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102fb7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102fb7a94; end: 102fb7ad7;  */

void FUN_102fb7a94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fb7ad8; end: 102fb7c9b;  */

ulong FUN_102fb7ad8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fb7bbc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fb7bc0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bacd0;
    func_0x000107c61168(PTR_PTR_1126bacd0);
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
    puVar4 = PTR_PTR_1126bacd0;
    func_0x000107c61168(PTR_PTR_1126bacd0);
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
  func_0x000102fb7f28(0,0x112f2e230,&PTR_PTR_1126bacd0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102fb7c9c);
  (*pcVar2)();
}



/* Entry: 102fb7c9c; end: 102fb7ee7;  */

undefined * FUN_102fb7c9c(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_68;
  
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    FUN_102fb7ee8(auStack_80,0x112d387f8,&UNK_10d902650);
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar4 = 0x112f2e228;
  func_0x0001000285a8(0x112f2e228,&UNK_10db72598);
  ppuVar5 = &puStack_88;
  puVar12 = auStack_80;
  func_0x000107c6147c(ppuVar5,puVar12,PTR___sypN_11034f1a8 + 8,uVar4,6);
  puVar2 = puStack_88;
  if (((ulong)ppuVar5 & 1) == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puStack_88 = PTR___swiftEmptySetSingleton_11034f1d8;
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar14 = *(undefined1 **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar14 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar2) {
      puVar14 = puVar2;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (puVar14 == (undefined1 *)0x0) {
    func_0x000107c6142c(puVar2);
    puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((long)puVar14 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb7ee8);
      (*pcVar3)();
    }
    puVar15 = (undefined1 *)0x0;
    do {
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        puVar6 = *(undefined1 **)(puVar2 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
        puVar13 = puVar12;
      }
      else {
        puVar6 = puVar15;
        puVar13 = puVar2;
        FUN_102fb7ad8();
      }
      puVar7 = puVar6;
      func_0x000107c4a77c();
      func_0x000107c61180();
      puVar12 = puVar13;
      if (puVar7 != (undefined1 *)0x0) {
        puVar8 = puVar7;
        func_0x000107c5faec();
        puVar12 = puVar13;
        func_0x000107c61170(puVar7);
        uVar1 = (ulong)puVar8 & 0xffffffffffff;
        if (((ulong)puVar13 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)puVar13 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          func_0x000107c61434(puVar13);
          puVar7 = auStack_80;
          puVar12 = puVar8;
          func_0x000100403b00(puVar7,puVar8,puVar13);
          func_0x000107c6142c(uStack_78);
          if (((ulong)puVar7 & 1) != 0) {
            puVar9 = puVar11;
            func_0x000107c61558();
            puVar10 = puVar11;
            if (((ulong)puVar9 & 1) == 0) {
              puVar12 = (undefined1 *)(*(long *)(puVar11 + 0x10) + 1);
              puVar10 = (undefined *)0x0;
              func_0x0001000d182c(0,puVar12,1,puVar11);
            }
            uVar1 = *(ulong *)(puVar10 + 0x10);
            puVar7 = (undefined1 *)(uVar1 + 1);
            puVar11 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              puVar12 = puVar7;
              func_0x0001000d182c(puVar11,puVar7,1,puVar10);
            }
            *(undefined1 **)(puVar11 + 0x10) = puVar7;
            *(undefined1 **)(puVar11 + uVar1 * 0x10 + 0x20) = puVar8;
            *(undefined1 **)(puVar11 + uVar1 * 0x10 + 0x28) = puVar13;
            goto LAB_102fb7d4c;
          }
        }
        func_0x000107c6142c(puVar13);
      }
LAB_102fb7d4c:
      puVar15 = puVar15 + 1;
      func_0x000107c61170(puVar6);
    } while (puVar14 != puVar15);
    func_0x000107c6142c(puVar2);
    puVar9 = puStack_88;
  }
  func_0x000107c6142c(puVar9);
  return puVar11;
}



/* Entry: 102fb7ee8; end: 102fb7f67;  */

undefined8 FUN_102fb7ee8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102fb7f68; end: 102fb7fdb;  */

void FUN_102fb7f68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x34) = 1;
  *(undefined4 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x3c) = 1;
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  *(undefined1 *)(unaff_x20 + 0x44) = 1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined4 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x5c) = 1;
  *(undefined4 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 100) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}


