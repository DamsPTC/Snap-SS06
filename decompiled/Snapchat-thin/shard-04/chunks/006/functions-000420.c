/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103700228; end: 10370026f; -[SCMusicTopicViewerServicesProvider musicSingleSectionPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700228(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7e0;
  func_0x000107c61428(param_1 + _DAT_112f8a7e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103700270; end: 10370027b; -[SCMusicTopicViewerServicesProvider setMusicSingleSectionPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7e0;
  func_0x000107c61428(param_1 + _DAT_112f8a7e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10370027c; end: 1037002db;  */

void FUN_10370027c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1037002dc; end: 1037008a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037002dc(void)

{
  long lVar1;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f180();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c40e04();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c42ae8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c44d68();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4bffc();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c5b610();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                lVar1 = lVar6;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c4d284();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  lVar1 = lVar7;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c4d280();
                  func_0x000107c61180();
                  if (lVar9 == 0) {
                    func_0x000107c61170(lVar1);
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61170(lVar5);
                    func_0x000107c61170(lVar6);
                    func_0x000107c61170(lVar7);
                    lVar1 = lVar8;
                  }
                  else {
                    lVar10 = unaff_x20;
                    func_0x000107c4d21c();
                    func_0x000107c61180();
                    if (lVar10 == 0) {
                      func_0x000107c61170(lVar1);
                      func_0x000107c61170(lVar2);
                      func_0x000107c61170(lVar3);
                      func_0x000107c61170(lVar4);
                      func_0x000107c61170(lVar5);
                      func_0x000107c61170(lVar6);
                      func_0x000107c61170(lVar7);
                      func_0x000107c61170(lVar8);
                      lVar1 = lVar9;
                    }
                    else {
                      lVar11 = unaff_x20;
                      func_0x000107c5b620();
                      func_0x000107c61180();
                      if (lVar11 == 0) {
                        func_0x000107c61170(lVar1);
                        func_0x000107c61170(lVar2);
                        func_0x000107c61170(lVar3);
                        func_0x000107c61170(lVar4);
                        func_0x000107c61170(lVar5);
                        func_0x000107c61170(lVar6);
                        func_0x000107c61170(lVar7);
                        func_0x000107c61170(lVar8);
                        func_0x000107c61170(lVar9);
                        lVar1 = lVar10;
                      }
                      else {
                        lVar12 = unaff_x20;
                        func_0x000107c40014();
                        func_0x000107c61180();
                        if (lVar12 == 0) {
                          func_0x000107c61170(lVar1);
                          func_0x000107c61170(lVar2);
                          func_0x000107c61170(lVar3);
                          func_0x000107c61170(lVar4);
                          func_0x000107c61170(lVar5);
                          func_0x000107c61170(lVar6);
                          func_0x000107c61170(lVar7);
                          func_0x000107c61170(lVar8);
                          func_0x000107c61170(lVar9);
                          func_0x000107c61170(lVar10);
                          lVar1 = lVar11;
                        }
                        else {
                          lVar13 = unaff_x20;
                          func_0x000107c5cc50();
                          func_0x000107c61180();
                          if (lVar13 != 0) {
                            lVar14 = 0;
                            func_0x0001036fe178();
                            func_0x000107c613fc();
                            uVar15 = *(undefined8 *)(lVar2 + _DAT_112f8a680);
                            *(undefined8 *)(lVar14 + 0x10) = uVar15;
                            uVar16 = *(undefined8 *)(lVar3 + _DAT_112f8a650);
                            *(undefined8 *)(lVar14 + 0x18) = uVar16;
                            uVar17 = *(undefined8 *)(lVar4 + _DAT_112f8a6b0);
                            *(undefined8 *)(lVar14 + 0x20) = uVar17;
                            uVar18 = *(undefined8 *)(lVar5 + _DAT_112f8a6e0);
                            *(undefined8 *)(lVar14 + 0x28) = uVar18;
                            uVar19 = *(undefined8 *)(lVar6 + _DAT_112f8a710);
                            *(undefined8 *)(lVar14 + 0x30) = uVar19;
                            *(long *)(lVar14 + 0x38) = lVar7;
                            *(long *)(lVar14 + 0x40) = lVar8;
                            *(long *)(lVar14 + 0x48) = lVar9;
                            *(long *)(lVar14 + 0x50) = lVar10;
                            *(long *)(lVar14 + 0x58) = lVar1;
                            *(long *)(lVar14 + 0x60) = lVar11;
                            *(long *)(lVar14 + 0x68) = lVar12;
                            *(long *)(lVar14 + 0x70) = lVar13;
                            uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112f8a7e8);
                            *(long *)(unaff_x20 + _DAT_112f8a7e8) = lVar14;
                            func_0x000107c61174(lVar1);
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174(lVar12);
                            func_0x000107c61174(lVar13);
                            func_0x000107c6157c(uVar15);
                            func_0x000107c6157c(uVar16);
                            func_0x000107c6157c(uVar17);
                            func_0x000107c6157c(uVar18);
                            func_0x000107c6157c(uVar19);
                            func_0x000107c6157c(lVar14);
                            func_0x000107c61574(uVar20);
                            func_0x0001036fdbb4();
                            func_0x000107c61170(lVar1);
                            func_0x000107c61170(lVar2);
                            func_0x000107c61170(lVar3);
                            func_0x000107c61170(lVar4);
                            func_0x000107c61170(lVar5);
                            func_0x000107c61170(lVar6);
                            func_0x000107c61170(lVar7);
                            func_0x000107c61170(lVar8);
                            func_0x000107c61170(lVar9);
                            func_0x000107c61170(lVar10);
                            func_0x000107c61170(lVar11);
                            func_0x000107c61170(lVar12);
                            func_0x000107c61170(lVar13);
                            func_0x000107c61574(lVar14);
                            return;
                          }
                          func_0x000107c61170(lVar1);
                          func_0x000107c61170(lVar2);
                          func_0x000107c61170(lVar3);
                          func_0x000107c61170(lVar4);
                          func_0x000107c61170(lVar5);
                          func_0x000107c61170(lVar6);
                          func_0x000107c61170(lVar7);
                          func_0x000107c61170(lVar8);
                          func_0x000107c61170(lVar9);
                          func_0x000107c61170(lVar10);
                          func_0x000107c61170(lVar11);
                          lVar1 = lVar12;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1037008a8; end: 103700933; -[SCMusicTopicViewerServicesProvider provide] */

void FUN_1037008a8(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1037002dc();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MusicTopicViewerImplementation/SCMusicTopicViewerServicesProvider.swift",0x47
                      ,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103700934);
  (*pcVar1)();
}



/* Entry: 103700934; end: 103700967; -[SCMusicTopicViewerServicesProvider __safeProvide] */

void FUN_103700934(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037002dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103700968; end: 1037009ab; -[SCMusicTopicViewerServicesProvider end] */

void FUN_103700968(undefined8 param_1)

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



/* Entry: 1037009ac; end: 103700fcb;  */

void FUN_1037009ac(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef0ea2760)) ||
       (func_0x000107c605b8(0xd000000000000016,0x800000010f15d8a0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53060();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef0ea2740)) ||
         (func_0x000107c605b8(0xd000000000000012,0x800000010f15d8c0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53b98();
      }
      else {
        uVar2 = 0x726553746e657665;
        if (((param_2 == 0x726553746e657665) && (param_3 == -0x12ffff8c9a9c968a)) ||
           (func_0x000107c605b8(0x726553746e657665,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c546d8();
        }
        else {
          if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0ea2720)) {
            uVar2 = 0xd000000000000015;
            func_0x000107c605b8(0xd000000000000015,0x800000010f15d8e0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0ea2700)) {
                uVar2 = 0xd000000000000015;
                func_0x000107c605b8(0xd000000000000015,0x800000010f15d900,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0x726553636973756d;
                  if (((param_2 == 0x726553636973756d) && (param_3 == -0x12ffff8c9a9c968a)) ||
                     (func_0x000107c605b8(0x726553636973756d,0xed00007365636976,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c56870();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10d0ec0)) ||
                       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef2f140,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c56838();
                    }
                    else {
                      uVar2 = 0xd00000000000001d;
                      if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef0ea26e0)) ||
                         (func_0x000107c605b8(0xd00000000000001d,0x800000010f15d920,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c59550();
                      }
                      else {
                        uVar2 = 0;
                        if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0))
                           || (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c536e0();
                        }
                        else {
                          uVar2 = 0;
                          if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0fc12d0))
                             || (func_0x000107c605b8(0xd000000000000024,0x800000010f03ed30,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c59f14();
                          }
                          else {
                            uVar2 = 0xd000000000000017;
                            if (((param_2 == -0x2fffffffffffffe9) &&
                                (param_3 == -0x7ffffffef10d0ea0)) ||
                               (func_0x000107c605b8(0xd000000000000017,0x800000010ef2f160,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c59548();
                            }
                            else {
                              if ((param_2 != -0x2fffffffffffffdc) ||
                                 (param_3 != -0x7ffffffef0ea26c0)) {
                                uVar2 = 0;
                                func_0x000107c605b8(0xd000000000000024,0x800000010f15d940,param_2,
                                                    param_3,0);
                                if ((uVar2 & 1) == 0) {
                                  func_0x000107c602fc(0x15);
                                  func_0x000107c6142c(0xe000000000000000);
                                  func_0x000107c5fb78(param_2,param_3);
                                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                      0x800000010ef0fc20,
                                                                                                            
                                                  "MusicTopicViewerImplementation/SCMusicTopicViewerServicesProvider.swift"
                                                  ,0x47,2,0x67,0);
                    /* WARNING: Does not return */
                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103700fcc);
                                  (*pcVar1)();
                                }
                              }
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c56874();
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_103700a38;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c560e8();
              goto LAB_103700a38;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55094();
        }
      }
    }
  }
LAB_103700a38:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103700fcc; end: 103701077; -[SCMusicTopicViewerServicesProvider setValue:forIvarName:] */

void FUN_103700fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037009ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103701078; end: 1037011b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701078(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f8a780,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a788,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a790,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a798,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a7a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a7a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a7b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a7b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a7c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a7c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a7d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f8a7d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8a7e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f8a7e8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037011b8; end: 1037011d7; -[SCMusicTopicViewerServicesProvider init] */

void FUN_1037011b8(void)

{
  FUN_103701078();
  return;
}



/* Entry: 1037011d8; end: 10370120b;  */

void FUN_1037011d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10370120c; end: 103701303; -[SCMusicTopicViewerServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370120c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f8a780);
  func_0x000107c61610(param_1 + _DAT_112f8a788);
  func_0x000107c61610(param_1 + _DAT_112f8a790);
  func_0x000107c61610(param_1 + _DAT_112f8a798);
  func_0x000107c61610(param_1 + _DAT_112f8a7a0);
  func_0x000107c61610(param_1 + _DAT_112f8a7a8);
  func_0x000107c61610(param_1 + _DAT_112f8a7b0);
  func_0x000107c61610(param_1 + _DAT_112f8a7b8);
  func_0x000107c61610(param_1 + _DAT_112f8a7c0);
  func_0x000107c61610(param_1 + _DAT_112f8a7c8);
  func_0x000107c61610(param_1 + _DAT_112f8a7d0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8a7d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8a7e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8a7e8));
  return;
}



/* Entry: 103701304; end: 103701323;  */

void FUN_103701304(void)

{
  func_0x000107c61168(&PTR_PTR_112f8a830);
  return;
}



/* Entry: 103701324; end: 10370136b; -[SCMusicTopicViewerEventServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701324(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a8f0;
  func_0x000107c61428(param_1 + _DAT_112f8a8f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10370136c; end: 103701637; -[SCMusicTopicViewerEventServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370136c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a8f0;
  func_0x000107c61428(param_1 + _DAT_112f8a8f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103701638; end: 10370166b; -[SCMusicTopicViewerEventServiceProvider provide] */

void FUN_103701638(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037013c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10370166c; end: 10370169f; -[SCMusicTopicViewerEventServiceProvider __safeProvide] */

void FUN_10370166c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103701520();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037016a0; end: 1037016e3; -[SCMusicTopicViewerEventServiceProvider end] */

void FUN_1037016a0(undefined8 param_1)

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



/* Entry: 1037016e4; end: 103701803;  */

void FUN_1037016e4(long param_1,long param_2,long param_3)

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
                        "MusicTopicViewerImplementation/SCMusicTopicViewerEventServiceProvider.swift"
                        ,0x4b,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103701804);
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



/* Entry: 103701804; end: 1037018af; -[SCMusicTopicViewerEventServiceProvider setValue:forIvarName:] */

void FUN_103701804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037016e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037018b0; end: 10370190f; -[SCMusicTopicViewerEventServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037018b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f8a8f0,0);
  *(undefined8 *)(param_1 + _DAT_112f8a8f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103701910; end: 103701943;  */

void FUN_103701910(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103701944; end: 10370197b; -[SCMusicTopicViewerEventServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701944(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f8a8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8a8f8));
  return;
}



/* Entry: 10370197c; end: 10370199b;  */

void FUN_10370197c(void)

{
  func_0x000107c61168(&PTR_PTR_112f8a940);
  return;
}



/* Entry: 10370199c; end: 1037019a7; -[SCMusicTopicViewerHeaderProviderServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370199c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a9a0;
  func_0x000107c61428(param_1 + _DAT_112f8a9a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037019a8; end: 1037019b3; -[SCMusicTopicViewerHeaderProviderServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037019a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a9a0;
  func_0x000107c61428(param_1 + _DAT_112f8a9a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037019b4; end: 1037019bf; -[SCMusicTopicViewerHeaderProviderServiceProvider composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037019b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a9a8;
  func_0x000107c61428(param_1 + _DAT_112f8a9a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037019c0; end: 1037019cb; -[SCMusicTopicViewerHeaderProviderServiceProvider setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037019c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a9a8;
  func_0x000107c61428(param_1 + _DAT_112f8a9a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037019cc; end: 1037019d7; -[SCMusicTopicViewerHeaderProviderServiceProvider eventServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037019cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a9b0;
  func_0x000107c61428(param_1 + _DAT_112f8a9b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037019d8; end: 1037019e3; -[SCMusicTopicViewerHeaderProviderServiceProvider setEventServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037019d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a9b0;
  func_0x000107c61428(param_1 + _DAT_112f8a9b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037019e4; end: 1037019ef; -[SCMusicTopicViewerHeaderProviderServiceProvider externalMusicTweaksServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037019e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a9b8;
  func_0x000107c61428(param_1 + _DAT_112f8a9b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037019f0; end: 1037019fb; -[SCMusicTopicViewerHeaderProviderServiceProvider setExternalMusicTweaksServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037019f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a9b8;
  func_0x000107c61428(param_1 + _DAT_112f8a9b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037019fc; end: 103701a07; -[SCMusicTopicViewerHeaderProviderServiceProvider musicProviderPluginScopeFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037019fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a9c0;
  func_0x000107c61428(param_1 + _DAT_112f8a9c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103701a08; end: 103701a13; -[SCMusicTopicViewerHeaderProviderServiceProvider setMusicProviderPluginScopeFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a9c0;
  func_0x000107c61428(param_1 + _DAT_112f8a9c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103701a14; end: 103701a1f; -[SCMusicTopicViewerHeaderProviderServiceProvider musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701a14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a9c8;
  func_0x000107c61428(param_1 + _DAT_112f8a9c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103701a20; end: 103701a2b; -[SCMusicTopicViewerHeaderProviderServiceProvider setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a9c8;
  func_0x000107c61428(param_1 + _DAT_112f8a9c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103701a2c; end: 103701a37; -[SCMusicTopicViewerHeaderProviderServiceProvider objcMusicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701a2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a9d0;
  func_0x000107c61428(param_1 + _DAT_112f8a9d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103701a38; end: 103701a7b;  */

void FUN_103701a38(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103701a7c; end: 103701a87; -[SCMusicTopicViewerHeaderProviderServiceProvider setObjcMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a9d0;
  func_0x000107c61428(param_1 + _DAT_112f8a9d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103701a88; end: 103701adb;  */

void FUN_103701a88(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103701adc; end: 103701df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701adc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c42ae8();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c42cc4();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4d26c();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4d280();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c4d99c();
              func_0x000107c61180();
              if (lVar7 != 0) {
                lVar8 = 0;
                func_0x0001036fd580();
                func_0x000107c613fc();
                puVar9 = &UNK_1106863f8;
                func_0x000107c613fc(&UNK_1106863f8,0x48,7);
                *(long *)(puVar9 + 0x10) = lVar1;
                *(long *)(puVar9 + 0x18) = lVar2;
                *(long *)(puVar9 + 0x20) = lVar3;
                *(long *)(puVar9 + 0x28) = lVar4;
                *(long *)(puVar9 + 0x30) = lVar5;
                *(long *)(puVar9 + 0x38) = lVar6;
                *(long *)(puVar9 + 0x40) = lVar7;
                func_0x0001000285a8(0x112f8a2d8,&UNK_10dbff770);
                func_0x000107c613fc();
                func_0x000107c61174();
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(lVar6);
                func_0x000107c61174(lVar7);
                pcVar10 = FUN_103701df4;
                func_0x0001000bdd8c(FUN_103701df4,puVar9);
                *(code **)(lVar8 + 0x10) = pcVar10;
                uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f8a9d8);
                *(long *)(unaff_x20 + _DAT_112f8a9d8) = lVar8;
                func_0x000107c6157c(lVar8);
                func_0x000107c61574(uVar13);
                uVar13 = *(undefined8 *)(lVar8 + 0x10);
                lVar11 = 0;
                FUN_1036ffa24();
                lVar12 = lVar11;
                func_0x000107c610f8();
                *(undefined8 *)(lVar12 + _DAT_112f8a6e0) = uVar13;
                puVar9 = PTR_s_init_1125d9248;
                lStack_70 = lVar12;
                lStack_68 = lVar11;
                func_0x000107c6157c(uVar13);
                func_0x000107c61154(&lStack_70,puVar9);
                func_0x000107c61574(lVar8);
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar7);
                return;
              }
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              lVar1 = lVar6;
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103701df4; end: 103701e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103701df4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001000d224c(&uStack_70);
  uVar1 = uStack_70;
  func_0x000107c614f0();
  uStack_78 = uStack_68;
  auStack_98[0] = uStack_70;
  func_0x000103a7f854();
  FUN_10370eba0(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x00010370e080(uVar2,uVar3,auStack_98,uVar1,uVar4,uVar5,uVar6);
  *param_1 = uVar2;
  return;
}



/* Entry: 103701e08; end: 103701e93; -[SCMusicTopicViewerHeaderProviderServiceProvider provide] */

void FUN_103701e08(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_103701adc();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MusicTopicViewerImplementation/SCMusicTopicViewerHeaderProviderServiceProvider.swift"
                      ,0x54,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103701e94);
  (*pcVar1)();
}



/* Entry: 103701e94; end: 103701ec7; -[SCMusicTopicViewerHeaderProviderServiceProvider __safeProvide] */

void FUN_103701e94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103701adc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103701ec8; end: 103701f0b; -[SCMusicTopicViewerHeaderProviderServiceProvider end] */

void FUN_103701ec8(undefined8 param_1)

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



/* Entry: 103701f0c; end: 1037022cf;  */

void FUN_103701f0c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x726553746e657665;
        if (((param_2 == 0x726553746e657665) && (param_3 == -0x12ffff8c9a9c968a)) ||
           (func_0x000107c605b8(0x726553746e657665,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c546d8();
        }
        else {
          uVar2 = 0xd00000000000001b;
          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d7f80)) ||
             (func_0x000107c605b8(0xd00000000000001b,0x800000010ef28080,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c54814();
          }
          else {
            uVar2 = 0xd000000000000027;
            if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0ea25e0)) ||
               (func_0x000107c605b8(0xd000000000000027,0x800000010f15da20,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5685c();
            }
            else {
              uVar2 = 0x726553636973756d;
              if (((param_2 == 0x726553636973756d) && (param_3 == -0x12ffff8c9a9c968a)) ||
                 (func_0x000107c605b8(0x726553636973756d,0xed00007365636976,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c56870();
              }
              else {
                uVar2 = 0xd000000000000011;
                if (((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10d1700)) &&
                   (func_0x000107c605b8(0xd000000000000011,0x800000010ef2e900,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "MusicTopicViewerImplementation/SCMusicTopicViewerHeaderProviderServiceProvider.swift"
                                      ,0x54,2,0x48,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037022d0);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c56bc0();
              }
            }
          }
        }
        goto LAB_103701f98;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_103701f98:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037022d0; end: 10370237b; -[SCMusicTopicViewerHeaderProviderServiceProvider setValue:forIvarName:] */

void FUN_1037022d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103701f0c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10370237c; end: 103702453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370237c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f8a9a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a9a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a9b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a9b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a9c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a9c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f8a9d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f8a9d8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103702454; end: 103702473; -[SCMusicTopicViewerHeaderProviderServiceProvider init] */

void FUN_103702454(void)

{
  FUN_10370237c();
  return;
}



/* Entry: 103702474; end: 1037024a7;  */

void FUN_103702474(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037024a8; end: 10370253f; -[SCMusicTopicViewerHeaderProviderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037024a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f8a9a0);
  func_0x000107c61610(param_1 + _DAT_112f8a9a8);
  func_0x000107c61610(param_1 + _DAT_112f8a9b0);
  func_0x000107c61610(param_1 + _DAT_112f8a9b8);
  func_0x000107c61610(param_1 + _DAT_112f8a9c0);
  func_0x000107c61610(param_1 + _DAT_112f8a9c8);
  func_0x000107c61610(param_1 + _DAT_112f8a9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8a9d8));
  return;
}



/* Entry: 103702540; end: 10370255f;  */

void FUN_103702540(void)

{
  func_0x000107c61168(&PTR_PTR_112f8aa20);
  return;
}



/* Entry: 103702560; end: 10370256b; -[SCMusicTopicViewerLoggingContextServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103702560(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8aab0;
  func_0x000107c61428(param_1 + _DAT_112f8aab0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10370256c; end: 103702577; -[SCMusicTopicViewerLoggingContextServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370256c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8aab0;
  func_0x000107c61428(param_1 + _DAT_112f8aab0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103702578; end: 103702583; -[SCMusicTopicViewerLoggingContextServiceProvider storiesBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103702578(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8aab8;
  func_0x000107c61428(param_1 + _DAT_112f8aab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103702584; end: 10370258f; -[SCMusicTopicViewerLoggingContextServiceProvider setStoriesBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103702584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8aab8;
  func_0x000107c61428(param_1 + _DAT_112f8aab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103702590; end: 10370259b; -[SCMusicTopicViewerLoggingContextServiceProvider musicLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103702590(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8aac0;
  func_0x000107c61428(param_1 + _DAT_112f8aac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10370259c; end: 1037025df;  */

void FUN_10370259c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037025e0; end: 1037025eb; -[SCMusicTopicViewerLoggingContextServiceProvider setMusicLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037025e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8aac0;
  func_0x000107c61428(param_1 + _DAT_112f8aac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037025ec; end: 10370263f;  */

void FUN_1037025ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103702640; end: 103702807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103702640(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5bf38();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d230();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        func_0x0001036fd968();
        func_0x000107c613fc();
        puVar5 = &UNK_110686420;
        func_0x000107c613fc(&UNK_110686420,0x28,7);
        *(long *)(puVar5 + 0x10) = lVar1;
        *(long *)(puVar5 + 0x18) = lVar2;
        *(long *)(puVar5 + 0x20) = lVar3;
        func_0x0001000285a8(0x112f8a3b0,&UNK_10dbff7b0);
        func_0x000107c613fc();
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        pcVar6 = FUN_103702808;
        func_0x0001000bdd8c(FUN_103702808,puVar5);
        *(code **)(lVar4 + 0x10) = pcVar6;
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f8aac8);
        *(long *)(unaff_x20 + _DAT_112f8aac8) = lVar4;
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar9);
        uVar9 = *(undefined8 *)(lVar4 + 0x10);
        lVar7 = 0;
        FUN_1036ffab4();
        lVar8 = lVar7;
        func_0x000107c610f8();
        *(undefined8 *)(lVar8 + _DAT_112f8a710) = uVar9;
        puVar5 = PTR_s_init_1125d9248;
        lStack_60 = lVar8;
        lStack_58 = lVar7;
        func_0x000107c6157c(uVar9);
        func_0x000107c61154(&lStack_60,puVar5);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103702808; end: 103702813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103702808(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar7 = 0;
  func_0x0001043a86b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar10 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar3 + _DAT_1130746f8);
  *puVar10 = *(undefined1 *)(lVar12 + _DAT_1130748a8);
  iVar5 = *(int *)(lVar7 + 0x14);
  func_0x000107c61174(*(undefined8 *)(lVar12 + _DAT_1130748b0));
  func_0x0001043b0d5c(puVar10 + iVar5);
  iVar5 = *(int *)(lVar7 + 0x18);
  bVar2 = *(long *)(lVar12 + _DAT_1130748b8) == 0;
  if (!bVar2) {
    func_0x000107c61174();
    func_0x0001043b0d5c(puVar10 + iVar5);
  }
  lVar7 = 0;
  func_0x0001043aa0ac();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar10 + iVar5,bVar2,1,lVar7);
  func_0x000107c5cc68();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1036fd8fc);
    (*pcVar6)();
  }
  func_0x0001000285a8(0x112f8a488,&UNK_10dbff7f0);
  lVar7 = lVar8;
  func_0x0001000bda74(lVar8);
  func_0x000107c61170(lVar8);
  func_0x0001000285a8(0x112d68918,&UNK_10d92c580);
  func_0x000107c4d1f8(uVar11);
  func_0x000107c61180();
  uVar9 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  puVar1 = (undefined8 *)(lVar3 + _DAT_113074700);
  uVar11 = *puVar1;
  uVar4 = puVar1[1];
  FUN_103714bf0(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar4);
  func_0x000103713db8(puVar10,lVar7,uVar9,uVar11,uVar4);
  *param_1 = puVar10;
  return;
}



/* Entry: 103702814; end: 10370289f; -[SCMusicTopicViewerLoggingContextServiceProvider provide] */

void FUN_103702814(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_103702640();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MusicTopicViewerImplementation/SCMusicTopicViewerLoggingContextServiceProvider.swift"
                      ,0x54,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037028a0);
  (*pcVar1)();
}



/* Entry: 1037028a0; end: 1037028d3; -[SCMusicTopicViewerLoggingContextServiceProvider __safeProvide] */

void FUN_1037028a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103702640();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037028d4; end: 103702917; -[SCMusicTopicViewerLoggingContextServiceProvider end] */

void FUN_1037028d4(undefined8 param_1)

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



/* Entry: 103702918; end: 103702b1f;  */

void FUN_103702918(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0fe57f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f01a810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef1032af0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010efcd510,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "MusicTopicViewerImplementation/SCMusicTopicViewerLoggingContextServiceProvider.swift"
                                ,0x54,2,0x35,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103702b20);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56844();
        goto LAB_1037029a4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c598fc();
  }
LAB_1037029a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103702b20; end: 103702bcb; -[SCMusicTopicViewerLoggingContextServiceProvider setValue:forIvarName:] */

void FUN_103702b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103702918(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103702bcc; end: 103702c53; -[SCMusicTopicViewerLoggingContextServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103702bcc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f8aab0,0);
  func_0x000107c61614(param_1 + _DAT_112f8aab8,0);
  func_0x000107c61614(param_1 + _DAT_112f8aac0,0);
  *(undefined8 *)(param_1 + _DAT_112f8aac8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103702c54; end: 103702c87;  */

void FUN_103702c54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103702c88; end: 103702cdf; -[SCMusicTopicViewerLoggingContextServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103702c88(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f8aab0);
  func_0x000107c61610(param_1 + _DAT_112f8aab8);
  func_0x000107c61610(param_1 + _DAT_112f8aac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8aac8));
  return;
}



/* Entry: 103702ce0; end: 103702d47;  */

void FUN_103702ce0(void)

{
  func_0x000107c61168(&PTR_PTR_112f8ab10);
  return;
}



/* Entry: 103702d48; end: 103702e87;  */

byte FUN_103702d48(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0)
       ) && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
             (func_0x000107c605b8(), (uVar1 & 1) != 0)))) &&
     (((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0 &&
      (((*(byte *)((long)param_1 + 0x21) ^ *(byte *)((long)param_2 + 0x21)) & 1) == 0)))) {
    bVar2 = *(byte *)((long)param_1 + 0x22) ^ *(byte *)((long)param_2 + 0x22) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 103702e88; end: 103702f0b;  */

undefined8 * FUN_103702e88(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  return param_1;
}



/* Entry: 103702f0c; end: 103702f1f;  */

void FUN_103702f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined4 *)((long)param_1 + 0x1f) = *(undefined4 *)((long)param_2 + 0x1f);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 103702f20; end: 103702f7b;  */

undefined8 * FUN_103702f20(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  return param_1;
}



/* Entry: 103702f7c; end: 10370302f;  */

int FUN_103702f7c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x23) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103703030; end: 1037030db;  */

void FUN_103703030(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037030dc; end: 1037030ff;  */

void FUN_1037030dc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 103703100; end: 1037033ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103703100(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  func_0x000107c610f8();
  lVar4 = _DAT_112f8ab98;
  lVar6 = unaff_x20 + _DAT_112f8ab98;
  lVar8 = 0;
  func_0x000107c61614();
  plVar1 = (long *)(unaff_x20 + _DAT_112f8aba0);
  func_0x000107c5eec4(auStack_88 + (-0x18 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  func_0x000107c5eeac();
  (**(code **)(lVar9 + 8))(auStack_88 + (-0x18 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),lVar5);
  *plVar1 = lVar6;
  plVar1[1] = lVar8;
  *(undefined8 *)(unaff_x20 + _DAT_112f8ab80) = param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f8ab88);
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  puVar2[1] = param_2[1];
  *puVar2 = uVar10;
  puVar2[3] = uVar12;
  puVar2[2] = uVar11;
  *(undefined4 *)((long)puVar2 + 0x1f) = *(undefined4 *)((long)param_2 + 0x1f);
  *(undefined8 *)(unaff_x20 + _DAT_112f8ab90) = param_3;
  func_0x000107c61428(unaff_x20 + lVar4,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_4);
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar7 = auStack_88;
  func_0x000107c61154(puVar7,puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  return puVar7;
}



/* Entry: 1037033f0; end: 10370344f; -[MusicSingleSectionPickerScope init] */

void FUN_1037033f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicSingleSectionPickerScope.MusicSingleSectionPickerScope",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10370341c);
  (*pcVar1)();
}



/* Entry: 103703450; end: 1037034bb; -[MusicSingleSectionPickerScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103703484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103703488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703450(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f8ab80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112f8ab88 + 0x18));
  return;
}



/* Entry: 1037034bc; end: 1037034bf;  */

void FUN_1037034bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8aba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbffb10;
  func_0x000107c61520(&UNK_10dbffb10,&UNK_110686568);
  puRam0000000112f8aba8 = puVar1;
  return;
}



/* Entry: 1037034c0; end: 1037034ff;  */

void FUN_1037034c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8aba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbffb10;
  func_0x000107c61520(&UNK_10dbffb10,&UNK_110686568);
  puRam0000000112f8aba8 = puVar1;
  return;
}



/* Entry: 103703500; end: 10370350f;  */

undefined1  [16] FUN_103703500(void)

{
  return ZEXT816(0x110686568);
}



/* Entry: 103703510; end: 10370352f;  */

void FUN_103703510(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5bd8);
  return;
}



/* Entry: 103703530; end: 10370353b; -[SCMusicPickerUIConfiguration actionButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703530(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f8abd8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f8abd8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10370353c; end: 103703547; -[SCMusicPickerUIConfiguration titleText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370353c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f8abe0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f8abe0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103703548; end: 10370358f;  */

void FUN_103703548(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103703590; end: 10370359f; -[SCMusicPickerUIConfiguration hidesActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103703590(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f8abe8);
}



/* Entry: 1037035a0; end: 1037035af; -[SCMusicPickerUIConfiguration showsInformationButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1037035a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f8abf0);
}



/* Entry: 1037035b0; end: 1037035bf; -[SCMusicPickerUIConfiguration showsRowFavoriteButtonInsteadOfPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1037035b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f8abf8);
}



/* Entry: 1037035c0; end: 103703673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037035c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8abd8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8abe0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112f8abe8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112f8abf0) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112f8abf8) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103703674; end: 10370373b; -[SCMusicPickerUIConfiguration initWithActionButtonText:titleText:hidesActionButton:showsInformationButton:showsRowFavoriteButtonInsteadOfPlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8abd8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8abe0);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_1 + _DAT_112f8abe8) = param_5;
  *(undefined1 *)(param_1 + _DAT_112f8abf0) = param_6;
  *(undefined1 *)(param_1 + _DAT_112f8abf8) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10370373c; end: 1037037ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370373c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c610f8();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8abd8);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8abe0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined1 *)(unaff_x20 + _DAT_112f8abe8) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(unaff_x20 + _DAT_112f8abf0) = *(undefined1 *)((long)param_1 + 0x21);
  func_0x000100402194(&uStack_40,auStack_60);
  func_0x000100402194(&uStack_50,auStack_60);
  FUN_103703800(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112f8abf8) = *(undefined1 *)((long)param_1 + 0x22);
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103703800; end: 103703833;  */

undefined8 FUN_103703800(undefined8 param_1)

{
  (*(code *)(undefined *)0x103702e14)();
  return param_1;
}



/* Entry: 103703834; end: 103703867; -[SCMusicPickerUIConfiguration hash] */

undefined8 FUN_103703834(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103703868();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103703868; end: 103703947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703868(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f8abd8);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f8abd8))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f8abe0);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f8abe0))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112f8abe8));
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112f8abf0));
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112f8abf8));
  func_0x000107c606a4();
  return;
}



/* Entry: 103703948; end: 103703ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103703948(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar10 = &lStack_88;
    func_0x000107c6147c(plVar10,auStack_80,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar10 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_112f8abd8);
      if (lVar9 == *(long *)(lStack_88 + _DAT_112f8abd8) &&
          ((long *)(unaff_x20 + _DAT_112f8abd8))[1] == ((long *)(lStack_88 + _DAT_112f8abd8))[1]) {
        uVar7 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar7 = (uint)lVar9;
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_112f8abe0);
      if (lVar9 == *(long *)(lStack_88 + _DAT_112f8abe0) &&
          ((long *)(unaff_x20 + _DAT_112f8abe0))[1] == ((long *)(lStack_88 + _DAT_112f8abe0))[1]) {
        uVar8 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar8 = (uint)lVar9;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_112f8abe8);
      bVar2 = *(byte *)(lStack_88 + _DAT_112f8abe8);
      bVar3 = *(byte *)(unaff_x20 + _DAT_112f8abf0);
      bVar4 = *(byte *)(lStack_88 + _DAT_112f8abf0);
      bVar5 = *(byte *)(unaff_x20 + _DAT_112f8abf8);
      bVar6 = *(byte *)(lStack_88 + _DAT_112f8abf8);
      func_0x000107c61170(lStack_88);
      uVar7 = uVar7 & uVar8 & ((bVar1 ^ bVar2) ^ 1) & ((bVar3 ^ bVar4) ^ 1) & ((bVar5 ^ bVar6) ^ 1);
      goto LAB_103703a94;
    }
  }
  uVar7 = 0;
LAB_103703a94:
  return uVar7 & 1;
}



/* Entry: 103703ab8; end: 103703b37; -[SCMusicPickerUIConfiguration isEqual:] */

uint FUN_103703ab8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103703948(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}


