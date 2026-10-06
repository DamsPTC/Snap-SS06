/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ef733c; end: 100ef736f; -[SCDeclaredAgeVerificationEntryPoint end] */

void FUN_100ef733c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100ef72cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100ef7370; end: 100ef7a4f;  */

void FUN_100ef7370(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef630)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a3f8();
    }
    else {
      uVar2 = 0xd000000000000013;
      if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10eeb40)) ||
         (func_0x000107c605b8(0xd000000000000013,0x800000010ef114c0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56130();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10f0480)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef0fb80,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c532ec();
        }
        else {
          uVar2 = 0xd000000000000017;
          if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ef230)) ||
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5491c();
          }
          else {
            if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef5d0)) {
              uVar2 = 0xd000000000000017;
              func_0x000107c605b8(0xd000000000000017,0x800000010ef10a30,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef210)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000012,0x800000010ef10df0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) {
                      uVar2 = 0;
                      func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = 0;
                        if (((param_2 == -0x2fffffffffffffd6) && (param_3 == -0x7ffffffef10ef1b0))
                           || (func_0x000107c605b8(0xd00000000000002a,0x800000010ef10e50,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c53644();
                          goto LAB_100ef7400;
                        }
                        if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
                          uVar2 = 0;
                          func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,
                                              0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = 0;
                            if (((param_2 == -0x2fffffffffffffec) &&
                                (param_3 == -0x7ffffffef10ef610)) ||
                               (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c5a2fc();
                            }
                            else {
                              if ((param_2 != -0x2fffffffffffffe6) ||
                                 (param_3 != -0x7ffffffef10ef1f0)) {
                                uVar2 = 0;
                                func_0x000107c605b8(0xd00000000000001a,0x800000010ef10e10,param_2,
                                                    param_3,0);
                                if ((uVar2 & 1) == 0) {
                                  if ((param_2 != -0x2fffffffffffffe9) ||
                                     (param_3 != -0x7ffffffef10ef180)) {
                                    uVar2 = 0xd000000000000017;
                                    func_0x000107c605b8(0xd000000000000017,0x800000010ef10e80,
                                                        param_2,param_3,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = 0xd00000000000001b;
                                      if (((param_2 == -0x2fffffffffffffe5) &&
                                          (param_3 == -0x7ffffffef10f0460)) ||
                                         (func_0x000107c605b8(0xd00000000000001b,0x800000010ef0fba0,
                                                              param_2,param_3,0), (uVar2 & 1) != 0))
                                      {
                                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                        ;
                                        func_0x000107c605b0();
                                        func_0x000107c52594();
                                      }
                                      else {
                                        if ((param_2 != -0x2fffffffffffffee) ||
                                           (param_3 != -0x7ffffffef10eeb20)) {
                                          uVar2 = 0;
                                          func_0x000107c605b8(0xd000000000000012,0x800000010ef114e0,
                                                              param_2,param_3,0);
                                          if ((uVar2 & 1) == 0) {
                                            func_0x000107c602fc(0x15);
                                            func_0x000107c6142c(0xe000000000000000);
                                            func_0x000107c5fb78(param_2,param_3);
                                            func_0x000107c60450("Fatal error",0xb,2,
                                                                0xd000000000000013,
                                                                0x800000010ef0fc20,
                                                                                                                                
                                                  "DeclaredAgeVerificationFeature/SCDeclaredAgeVerificationEntryPoint.swift"
                                                  ,0x48,2,0x6e,0);
                    /* WARNING: Does not return */
                                            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef7a50);
                                            (*pcVar1)();
                                          }
                                        }
                                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                        ;
                                        func_0x000107c605b0();
                                        func_0x000107c56128();
                                      }
                                      goto LAB_100ef7400;
                                    }
                                  }
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c53eb4();
                                  goto LAB_100ef7400;
                                }
                              }
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c52858();
                            }
                            goto LAB_100ef7400;
                          }
                        }
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c53414();
                        goto LAB_100ef7400;
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c52954();
                    goto LAB_100ef7400;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c54798();
                goto LAB_100ef7400;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52598();
          }
        }
      }
    }
  }
LAB_100ef7400:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ef7a50; end: 100ef7afb; -[SCDeclaredAgeVerificationEntryPoint setValue:forIvarName:] */

void FUN_100ef7a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ef7370(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100ef7afc; end: 100ef7c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef7afc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4a0c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a0c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a0d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a0d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a0e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a0e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a0f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a0f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a100,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a108,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a110,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4a118,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4a120) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a128) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a130) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a138) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ef7c5c; end: 100ef7c7b; -[SCDeclaredAgeVerificationEntryPoint init] */

void FUN_100ef7c5c(void)

{
  FUN_100ef7afc();
  return;
}



/* Entry: 100ef7c7c; end: 100ef7caf;  */

void FUN_100ef7c7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ef7cb0; end: 100ef7dc7; -[SCDeclaredAgeVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef7cb0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4a0c0);
  func_0x000107c61610(param_1 + _DAT_112d4a0c8);
  func_0x000107c61610(param_1 + _DAT_112d4a0d0);
  func_0x000107c61610(param_1 + _DAT_112d4a0d8);
  func_0x000107c61610(param_1 + _DAT_112d4a0e0);
  func_0x000107c61610(param_1 + _DAT_112d4a0e8);
  func_0x000107c61610(param_1 + _DAT_112d4a0f0);
  func_0x000107c61610(param_1 + _DAT_112d4a0f8);
  func_0x000107c61610(param_1 + _DAT_112d4a100);
  func_0x000107c61610(param_1 + _DAT_112d4a108);
  func_0x000107c61610(param_1 + _DAT_112d4a110);
  func_0x000107c61610(param_1 + _DAT_112d4a118);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4a120));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4a128));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4a130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4a138));
  return;
}



/* Entry: 100ef7dc8; end: 100ef7de7;  */

void FUN_100ef7dc8(void)

{
  func_0x000107c61168(&PTR_PTR_11279f090);
  return;
}



/* Entry: 100ef7de8; end: 100ef7e57;  */

undefined8 FUN_100ef7de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_100ef7e74(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100ef7e58; end: 100ef7e73;  */

void FUN_100ef7e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ef7e74; end: 100ef7f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef7e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c43b5c();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_100ef82e8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d4a210) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d4a218);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d4a200) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112d4a208) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar2);
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef7f58; end: 100ef7f77;  */

void FUN_100ef7f58(void)

{
  func_0x000107c61168(&PTR_PTR_112d4a1a8);
  return;
}



/* Entry: 100ef7f78; end: 100ef7ffb; -[_TtC38DeclaredAgeVerificationTakeoverFeature39DeclaredAgeVerificationTakeoverProvider canShowCampaign:] */

uint FUN_100ef7f78(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if ((param_3 == -0x2fffffffffffffec) && (param_2 == -0x7ffffffef10e7130)) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 100ef7ffc; end: 100ef8163;  */

/* WARNING: Possible PIC construction at 0x000100ef8040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef813c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef8044) */
/* WARNING: Removing unreachable block (ram,0x000100ef815c) */
/* WARNING: Removing unreachable block (ram,0x000100ef8074) */
/* WARNING: Removing unreachable block (ram,0x000100ef8140) */
/* WARNING: Removing unreachable block (ram,0x000100ef80dc) */
/* WARNING: Removing unreachable block (ram,0x000100ef8160) */
/* WARNING: Removing unreachable block (ram,0x000100ef80e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef7ffc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d4a210);
  *(undefined8 *)(unaff_x20 + _DAT_112d4a210) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ef8164; end: 100ef822b; -[_TtC38DeclaredAgeVerificationTakeoverFeature39DeclaredAgeVerificationTakeoverProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000100ef8208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef820c) */

void FUN_100ef8164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_110366c08;
    func_0x000107c613fc(&UNK_110366c08,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x100ef8494;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_100ef7ffc(param_3,param_4,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ef822c; end: 100ef828b; -[_TtC38DeclaredAgeVerificationTakeoverFeature39DeclaredAgeVerificationTakeoverProvider init] */

void FUN_100ef822c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeclaredAgeVerificationTakeoverFeature.DeclaredAgeVerificationTakeoverProvider"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef8258);
  (*pcVar1)();
}



/* Entry: 100ef828c; end: 100ef82e7; -[_TtC38DeclaredAgeVerificationTakeoverFeature39DeclaredAgeVerificationTakeoverProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef828c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4a200));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4a208));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4a210));
  if (*(long *)(param_1 + _DAT_112d4a218) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d4a218))[1]);
    return;
  }
  return;
}



/* Entry: 100ef82e8; end: 100ef8307;  */

void FUN_100ef82e8(void)

{
  func_0x000107c61168(&PTR_PTR_11279f1c0);
  return;
}



/* Entry: 100ef8308; end: 100ef83d3;  */

/* WARNING: Possible PIC construction at 0x000100ef83ac: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef8308(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d4a210);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d4a200);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4c0(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100ef83d4; end: 100ef83fb; -[_TtC38DeclaredAgeVerificationTakeoverFeature39DeclaredAgeVerificationTakeoverProvider declaredAgeVerificationWillStartAgeVerification] */

void FUN_100ef83d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ef8308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ef83fc; end: 100ef848b; -[_TtC38DeclaredAgeVerificationTakeoverFeature39DeclaredAgeVerificationTakeoverProvider declaredAgeVerificationCompleted] */

/* WARNING: Possible PIC construction at 0x000100ef845c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef8460) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef83fc(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d4a208);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  pcVar2 = *(code **)(param_1 + _DAT_112d4a218);
  if (pcVar2 != (code *)0x0) {
    func_0x000107c6157c(((undefined8 *)(param_1 + _DAT_112d4a218))[1]);
    (*pcVar2)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ef848c; end: 100ef849f; -[_TtC38DeclaredAgeVerificationTakeoverFeature39DeclaredAgeVerificationTakeoverProvider requiresDeclaredAgeCheck] */

undefined8 FUN_100ef848c(void)

{
  return 0;
}



/* Entry: 100ef84a0; end: 100ef84ab; -[SCDeclaredAgeVerificationTakeoverEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef84a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a248;
  func_0x000107c61428(param_1 + _DAT_112d4a248,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef84ac; end: 100ef84b7; -[SCDeclaredAgeVerificationTakeoverEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef84ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a248;
  func_0x000107c61428(param_1 + _DAT_112d4a248,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef84b8; end: 100ef84c3; -[SCDeclaredAgeVerificationTakeoverEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef84b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a250;
  func_0x000107c61428(param_1 + _DAT_112d4a250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef84c4; end: 100ef8507;  */

void FUN_100ef84c4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ef8508; end: 100ef8513; -[SCDeclaredAgeVerificationTakeoverEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef8508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a250;
  func_0x000107c61428(param_1 + _DAT_112d4a250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef8514; end: 100ef8567;  */

void FUN_100ef8514(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef8568; end: 100ef85af; -[SCDeclaredAgeVerificationTakeoverEntryPoint declaredAgeVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef8568(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a258;
  func_0x000107c61428(param_1 + _DAT_112d4a258,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ef85b0; end: 100ef8613; -[SCDeclaredAgeVerificationTakeoverEntryPoint setDeclaredAgeVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef85b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a258;
  func_0x000107c61428(param_1 + _DAT_112d4a258,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ef8614; end: 100ef8717;  */

/* WARNING: Possible PIC construction at 0x000100ef86a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef86b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef86a8) */
/* WARNING: Removing unreachable block (ram,0x000100ef86b8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100ef8614(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3e8cc();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c41448();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_100ef7f58(0);
        func_0x000107c613fc();
        FUN_100ef7e74(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100ef8718; end: 100ef873f; -[SCDeclaredAgeVerificationTakeoverEntryPoint begin] */

void FUN_100ef8718(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ef8614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ef8740; end: 100ef8783; -[SCDeclaredAgeVerificationTakeoverEntryPoint end] */

void FUN_100ef8740(undefined8 param_1)

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



/* Entry: 100ef8784; end: 100ef8987;  */

void FUN_100ef8784(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10eeea0)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000023;
        if (((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef10e7110)) &&
           (func_0x000107c605b8(0xd000000000000023,0x800000010ef18ef0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DeclaredAgeVerificationTakeoverFeature/SCDeclaredAgeVerificationTakeoverEntryPoint.swift"
                              ,0x58,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef8988);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53eb8();
        goto LAB_100ef8810;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c50();
  }
LAB_100ef8810:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ef8988; end: 100ef8a33; -[SCDeclaredAgeVerificationTakeoverEntryPoint setValue:forIvarName:] */

void FUN_100ef8988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ef8784(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100ef8a34; end: 100ef8ab3; -[SCDeclaredAgeVerificationTakeoverEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef8a34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4a248,0);
  func_0x000107c61614(param_1 + _DAT_112d4a250,0);
  *(undefined8 *)(param_1 + _DAT_112d4a258) = 0;
  *(undefined8 *)(param_1 + _DAT_112d4a260) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ef8ab4; end: 100ef8ae7;  */

void FUN_100ef8ab4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ef8ae8; end: 100ef8b3f; -[SCDeclaredAgeVerificationTakeoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef8ae8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4a248);
  func_0x000107c61610(param_1 + _DAT_112d4a250);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4a258));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4a260));
  return;
}



/* Entry: 100ef8b40; end: 100ef8ba3;  */

void FUN_100ef8b40(void)

{
  func_0x000107c61168(&PTR_PTR_11279f298);
  return;
}



/* Entry: 100ef8ba4; end: 100ef8c0f;  */

void FUN_100ef8ba4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110366cb0;
  if (lRam0000000112d4a350 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d4a350 = param_1;
  }
  return;
}



/* Entry: 100ef8c10; end: 100ef8c53;  */

void FUN_100ef8c10(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100ef8c54; end: 100ef8d7b;  */

bool FUN_100ef8c54(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = *param_2;
  uVar1 = *param_1 & 0xff;
  if (uVar1 == 2) {
    if ((uVar2 & 0xff) == 2) {
      return true;
    }
  }
  else if (uVar1 == 3) {
    if ((uVar2 & 0xff) == 3) {
      return true;
    }
  }
  else if ((uVar2 & 0xfe) != 2) {
    uVar2 = uVar2 ^ *param_1;
    return (uVar2 & 1) == 0 && (uVar2 & 0x100) == 0;
  }
  return false;
}



/* Entry: 100ef8d7c; end: 100ef8e67;  */

undefined8 FUN_100ef8d7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x0001000285a8(0x112d4a4b0,&UNK_10d910cf8);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    pcStack_40 = FUN_100ef9588;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ab47f8;
    puStack_48 = &UNK_110366e80;
    uStack_38 = uVar2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(uVar1);
    func_0x000107c503c8(lVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar3);
  }
  return uVar2;
}



/* Entry: 100ef8e68; end: 100ef8e8b;  */

void FUN_100ef8e68(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100ef9334(unaff_x20 + 0x30);
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x50) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 100ef8e8c; end: 100ef8edf;  */

void FUN_100ef8e8c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  FUN_100ef9334(param_1 + 0x30);
  func_0x0001000834e4(param_1 + 0x38);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x60,7);
  return;
}



/* Entry: 100ef8ee0; end: 100ef8f9b;  */

void FUN_100ef8ee0(undefined8 param_1)

{
  if (lRam0000000112d4a390 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6189d8);
  return;
}



/* Entry: 100ef8f9c; end: 100ef8fd3;  */

void FUN_100ef8f9c(ushort *param_1,byte *param_2,ushort *param_3)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  
  bVar2 = *param_2;
  uVar3 = 3;
  if ((bVar2 & 1) == 0) {
    uVar3 = 0;
  }
  uVar1 = (bVar2 & 1) << 8 | 1;
  if (bVar2 >> 6 != 1) {
    uVar1 = *param_3;
  }
  if (bVar2 >> 6 != 0) {
    uVar3 = uVar1;
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 100ef8fd4; end: 100ef8fff;  */

byte * FUN_100ef8fd4(byte *param_1)

{
  if ((*param_1 & 0xc1) == 1) {
    FUN_100ef8d7c();
    return param_1;
  }
  return (byte *)0x0;
}



/* Entry: 100ef9000; end: 100ef9333;  */

/* WARNING: Possible PIC construction at 0x000100ef9530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef9534) */
/* WARNING: Removing unreachable block (ram,0x000100ef9578) */
/* WARNING: Removing unreachable block (ram,0x000100ef9540) */
/* WARNING: Removing unreachable block (ram,0x000100ef955c) */
/* WARNING: Removing unreachable block (ram,0x000100ef9564) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_100ef9000(byte *param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  bVar3 = *param_1;
  if (bVar3 >> 6 == 0) {
    plVar4 = (long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x50));
    lVar1 = *(long *)(*plVar4 + 0x10);
    uVar2 = *(undefined8 *)(*plVar4 + 0x18);
    if (lVar1 == 0) {
      uVar6 = 0xd000000000000010;
      uVar5 = 0x800000010ef18ff0;
    }
    else {
      uVar5 = 0x800000010ef18fd0;
      uVar6 = 0xd000000000000011;
      if (lVar1 != 1) {
        uVar6 = 0;
        uVar5 = 0xe000000000000000;
      }
    }
    func_0x000107c5fadc(uVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000104d21c64(uVar2,uVar6,bVar3 & 1,1);
  }
  else if (bVar3 >> 6 == 1) {
    plVar4 = (long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x50));
    lVar1 = *(long *)(*plVar4 + 0x10);
    uVar2 = *(undefined8 *)(*plVar4 + 0x18);
    if (lVar1 == 0) {
      uVar6 = 0xd000000000000010;
      uVar5 = 0x800000010ef18ff0;
    }
    else {
      uVar5 = 0x800000010ef18fd0;
      uVar6 = 0xd000000000000011;
      if (lVar1 != 1) {
        uVar6 = 0;
        uVar5 = 0xe000000000000000;
      }
    }
    func_0x000107c5fadc(uVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000104d21e4c(uVar2,uVar6,bVar3 & 1,1);
  }
  else {
    plVar4 = (long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x50));
    lVar1 = *(long *)(*plVar4 + 0x10);
    uVar2 = *(undefined8 *)(*plVar4 + 0x18);
    if (lVar1 == 1) {
      uVar6 = 0xd000000000000011;
      uVar5 = 0x800000010ef18fd0;
    }
    else {
      uVar6 = 0;
      if (lVar1 == 0) {
        uVar6 = 0xd000000000000010;
      }
      uVar5 = 0xe000000000000000;
      if (lVar1 == 0) {
        uVar5 = 0x800000010ef18ff0;
      }
    }
    func_0x000107c5fadc(uVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000104d21af0(uVar2,uVar6,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 100ef9334; end: 100ef9357;  */

undefined8 FUN_100ef9334(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100ef9358; end: 100ef9587;  */

/* WARNING: Possible PIC construction at 0x000100ef9530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef9534) */
/* WARNING: Removing unreachable block (ram,0x000100ef9578) */
/* WARNING: Removing unreachable block (ram,0x000100ef9540) */
/* WARNING: Removing unreachable block (ram,0x000100ef955c) */
/* WARNING: Removing unreachable block (ram,0x000100ef9564) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_100ef9358(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar3 = param_1 >> 6 & 3;
  if (uVar3 == 0) {
    plVar4 = (long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x50));
    lVar1 = *(long *)(*plVar4 + 0x10);
    uVar2 = *(undefined8 *)(*plVar4 + 0x18);
    if (lVar1 == 0) {
      uVar6 = 0xd000000000000010;
      uVar5 = 0x800000010ef18ff0;
    }
    else {
      uVar5 = 0x800000010ef18fd0;
      uVar6 = 0xd000000000000011;
      if (lVar1 != 1) {
        uVar6 = 0;
        uVar5 = 0xe000000000000000;
      }
    }
    func_0x000107c5fadc(uVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000104d21c64(uVar2,uVar6,param_1 & 1,1);
  }
  else if (uVar3 == 1) {
    plVar4 = (long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x50));
    lVar1 = *(long *)(*plVar4 + 0x10);
    uVar2 = *(undefined8 *)(*plVar4 + 0x18);
    if (lVar1 == 0) {
      uVar6 = 0xd000000000000010;
      uVar5 = 0x800000010ef18ff0;
    }
    else {
      uVar5 = 0x800000010ef18fd0;
      uVar6 = 0xd000000000000011;
      if (lVar1 != 1) {
        uVar6 = 0;
        uVar5 = 0xe000000000000000;
      }
    }
    func_0x000107c5fadc(uVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000104d21e4c(uVar2,uVar6,param_1 & 1,1);
  }
  else {
    plVar4 = (long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x50));
    lVar1 = *(long *)(*plVar4 + 0x10);
    uVar2 = *(undefined8 *)(*plVar4 + 0x18);
    if (lVar1 == 1) {
      uVar6 = 0xd000000000000011;
      uVar5 = 0x800000010ef18fd0;
    }
    else {
      uVar6 = 0;
      if (lVar1 == 0) {
        uVar6 = 0xd000000000000010;
      }
      uVar5 = 0xe000000000000000;
      if (lVar1 == 0) {
        uVar5 = 0x800000010ef18ff0;
      }
    }
    func_0x000107c5fadc(uVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000104d21af0(uVar2,uVar6,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 100ef9588; end: 100ef95af;  */

void FUN_100ef9588(byte param_1)

{
  byte bStack_11;
  
  bStack_11 = param_1 | 0x40;
  func_0x000100087c34(&bStack_11);
  return;
}



/* Entry: 100ef95b0; end: 100ef9777;  */

void FUN_100ef95b0(long param_1,long param_2)

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



/* Entry: 100ef9778; end: 100ef97ef;  */

long FUN_100ef9778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return unaff_x20;
}



/* Entry: 100ef97f0; end: 100ef9ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef97f0(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong auStack_a0 [4];
  undefined **ppuStack_80;
  undefined1 auStack_78 [24];
  
  uVar11 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = uVar11;
  func_0x000107c4d868();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
LAB_100ef985c:
    lVar6 = _DAT_112d4a918;
    lVar10 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c61428(lVar10 + _DAT_112d4a918,auStack_a0,0,0);
    lVar10 = lVar10 + lVar6;
    func_0x000107c61618();
    if (lVar10 != 0) {
      func_0x000107c5c628();
      func_0x000107c615e8(lVar10);
    }
    return;
  }
  uVar2 = uVar3;
  func_0x000107c44728();
  func_0x000107c615e8(uVar3);
  lVar10 = _DAT_112d4a928;
  if ((uVar2 & 1) != 0) goto LAB_100ef985c;
  lVar15 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(lVar15 + _DAT_112d4a928);
  lVar4 = 0;
  func_0x000100ef8b84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar12;
  puVar5 = PTR_PTR_1126a5ef8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x18) = puVar5;
  func_0x000107c4d868();
  func_0x000107c61180();
  lVar1 = _DAT_112d4a918;
  func_0x000107c61428(lVar15 + _DAT_112d4a918,auStack_78,0,0);
  lVar6 = lVar15 + lVar1;
  func_0x000107c61618(lVar6);
  func_0x000107c6157c(lVar4);
  uVar2 = uVar11;
  func_0x000100ef9e50(uVar11,lVar6,lVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(lVar6);
  plVar13 = *(long **)(unaff_x20 + 0x38);
  *(ulong *)(unaff_x20 + 0x38) = uVar2;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574();
  func_0x000103dbf46c();
  puVar5 = &UNK_110366f80;
  func_0x000107c613fc(&UNK_110366f80,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  pcVar7 = FUN_100ef9f74;
  puVar9 = puVar5;
  (**(code **)(*plVar13 + 0x60))(FUN_100ef9f74);
  func_0x000107c61574(plVar13);
  func_0x000107c61574(puVar5);
  pcVar8 = pcVar7;
  func_0x000107c614f0(pcVar7);
  (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + 0x30),pcVar8,puVar9);
  func_0x000107c615e8(pcVar7);
  uVar11 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar3 = uVar11;
  func_0x000106bfd9f0();
  func_0x000107c615e8(uVar11);
  if (*(long *)(lVar15 + lVar10) == 1) {
    if ((uVar3 & 0xfffffffffffffffe) == 2) goto LAB_100ef9a34;
LAB_100ef9b58:
    lVar15 = lVar15 + lVar1;
    func_0x000107c61618();
    if (lVar15 == 0) goto LAB_100ef9b74;
    func_0x000107c5c628();
  }
  else {
    if ((*(long *)(lVar15 + lVar10) != 0) || (1 < uVar3)) goto LAB_100ef9b58;
LAB_100ef9a34:
    uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_113097748);
    lVar10 = 0;
    FUN_100ef8ee0();
    ppuStack_80 = &PTR_DAT_110366d60;
    uVar12 = 0;
    auStack_a0[0] = uVar2;
    auStack_a0[3] = lVar10;
    FUN_100eff764(0);
    func_0x000107c610f8();
    func_0x0001000c6518(auStack_a0,lVar10);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    plVar13 = (long *)((long)auStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(plVar13);
    lVar10 = *plVar13;
    func_0x000107c6157c(uVar2);
    func_0x000107c615f0(uVar14);
    func_0x000100ef9cd0(lVar10,uVar3,uVar14,uVar12);
    func_0x0001000834e4(auStack_a0);
    uVar12 = *(undefined8 *)(lVar10 + _DAT_112d4a7b0);
    func_0x000107c6157c(uVar12);
    func_0x000103dbf524();
    func_0x000107c61574(uVar12);
    lVar15 = *(long *)(lVar15 + _DAT_112d4a920);
    func_0x000107c615f0(lVar15);
    func_0x000107c3e2c0();
    func_0x000107c61170(lVar10);
  }
  func_0x000107c615e8(lVar15);
LAB_100ef9b74:
  func_0x000107c61574(uVar2);
  func_0x000107c61574(lVar4);
  return;
}



/* Entry: 100ef9ba4; end: 100ef9c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef9ba4(ushort *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  lVar2 = _DAT_112d4a918;
  if (param_2 != 0) {
    if ((uVar1 & 0xfe) != 2) {
      lVar3 = *(long *)(param_2 + 0x10);
      func_0x000107c61428(lVar3 + _DAT_112d4a918,auStack_60,0,0);
      lVar3 = lVar3 + lVar2;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c5c624(lVar3);
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100ef9c5c; end: 100ef9ca7;  */

void FUN_100ef9c5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ef9ca8; end: 100ef9cc7;  */

void FUN_100ef9ca8(void)

{
  FUN_100ef97f0();
  return;
}



/* Entry: 100ef9cc8; end: 100ef9ccf;  */

undefined8 FUN_100ef9cc8(void)

{
  return 0;
}



/* Entry: 100ef9cd0; end: 100ef9f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100ef9cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  FUN_100ef8ee0();
  ppuStack_48 = &PTR_DAT_110366d60;
  *(undefined1 *)(param_4 + _DAT_112d4a788) = 0;
  lVar1 = _DAT_112d4a7a8;
  uVar3 = 0;
  auStack_68[0] = param_1;
  uStack_50 = uVar2;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + lVar1) = uVar3;
  lVar1 = _DAT_112d4a7b0;
  uVar2 = 0x112d4a580;
  func_0x0001000285a8(0x112d4a580,&UNK_10d910f20);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar1) = uVar2;
  *(undefined8 *)(param_4 + _DAT_112d4a7b8) = 0;
  *(undefined8 *)(param_4 + _DAT_112d4a7c0) = 0;
  *(undefined8 *)(param_4 + _DAT_112d4a7c8) = 0;
  *(undefined8 *)(param_4 + _DAT_112d4a7d0) = 0;
  *(undefined8 *)(param_4 + _DAT_112d4a7d8) = 0;
  *(undefined8 *)(param_4 + _DAT_112d4a7e0) = 0;
  *(undefined8 *)(param_4 + _DAT_112d4a7e8) = 0;
  *(undefined8 *)(param_4 + _DAT_112d4a7f0) = 0;
  FUN_100ef9f9c(auStack_68,param_4 + _DAT_112d4a798);
  *(undefined8 *)(param_4 + _DAT_112d4a790) = param_2;
  *(undefined8 *)(param_4 + _DAT_112d4a7a0) = param_3;
  uVar2 = 0;
  FUN_100eff764();
  plVar4 = &lStack_78;
  lStack_78 = param_4;
  uStack_70 = uVar2;
  func_0x000107c61154(plVar4,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(auStack_68);
  return plVar4;
}



/* Entry: 100ef9f74; end: 100ef9f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef9f74(ushort *param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  lVar2 = _DAT_112d4a918;
  if (lVar3 != 0) {
    if ((uVar1 & 0xfe) != 2) {
      lVar3 = *(long *)(lVar3 + 0x10);
      func_0x000107c61428(lVar3 + _DAT_112d4a918,auStack_60,0,0);
      lVar3 = lVar3 + lVar2;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c5c624(lVar3);
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100ef9f7c; end: 100ef9f9b;  */

void FUN_100ef9f7c(void)

{
  func_0x000107c61168(&PTR_PTR_112d4a4f8);
  return;
}



/* Entry: 100ef9f9c; end: 100ef9fdf;  */

long FUN_100ef9f9c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ef9fe0; end: 100ef9ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ef9fe0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a590;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a590);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100ef9ff4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100ef9ff4; end: 100efa0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ef9ff4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d4a588);
  func_0x000107c5fadc(uVar2,((undefined8 *)(param_1 + _DAT_112d4a588))[1]);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c5c600(0x402e000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c55f80(puVar1);
  return puVar1;
}



/* Entry: 100efa0e0; end: 100efa0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efa0e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a598;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a598);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100efa0f4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100efa0f4; end: 100efa1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100efa0f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d4a588 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + _DAT_112d4a588 + 0x18));
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c5c600(0x402e000000000000,*(undefined8 *)PTR__UIFontWeightRegular_110345c40);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1);
  return puVar1;
}



/* Entry: 100efa1d4; end: 100efa1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efa1d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a5a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a5a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100efa1e8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100efa1e8; end: 100efa2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100efa1e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d4a588 + 0x28);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + _DAT_112d4a588 + 0x30));
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c5c600(0x402a000000000000,*(undefined8 *)PTR__UIFontWeightRegular_110345c40);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c5381c(0x447a0000,puVar1);
  return puVar1;
}



/* Entry: 100efa2dc; end: 100efa38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100efa2dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a5a8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d4a5a8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c55258();
    func_0x000107c61174();
    func_0x000107c53840();
    func_0x000107c5a050(puVar3,param_2,0);
    func_0x000107c61170(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100efa38c; end: 100efa39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efa38c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a5b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a5b0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100efa3a0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100efa3a0; end: 100efa483;  */

undefined * FUN_100efa3a0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  lVar1 = param_1;
  FUN_100ef9fe0();
  *(long *)(param_1 + 0x20) = lVar1;
  FUN_100efa1d4();
  *(long *)(param_1 + 0x28) = lVar1;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  func_0x000100efb008(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar1 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
  func_0x000107c45784(puVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c52b2c(puVar2);
  func_0x000107c59594(0x4020000000000000,puVar2);
  func_0x000107c5a050(puVar2);
  return puVar2;
}



/* Entry: 100efa484; end: 100efa497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efa484(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a5b8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a5b8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100efa498();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100efa498; end: 100efa56f;  */

undefined * FUN_100efa498(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  lVar1 = param_1;
  FUN_100efa38c();
  *(long *)(param_1 + 0x20) = lVar1;
  FUN_100efa0e0();
  *(long *)(param_1 + 0x28) = lVar1;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  func_0x000100efb008(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar1 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
  func_0x000107c45784(puVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c52b2c(puVar2);
  func_0x000107c5a050(puVar2);
  return puVar2;
}



/* Entry: 100efa570; end: 100efa583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efa570(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a5c0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a5c0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x100efa5e4)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100efa584; end: 100efa79b;  */

long FUN_100efa584(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 100efa79c; end: 100efad4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100efa79c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined1 auStack_98 [56];
  
  *(undefined8 *)(unaff_x20 + _DAT_112d4a590) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a598) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5c8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4a588);
  uVar12 = *param_1;
  uVar13 = param_1[3];
  uVar9 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar12;
  puVar1[3] = uVar13;
  puVar1[2] = uVar9;
  uVar12 = param_1[4];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar12;
  puVar1[6] = param_1[6];
  FUN_100efaf98(param_1,auStack_98);
  FUN_100efaf78();
  puVar4 = &stack0xffffffffffffff58;
  func_0x000107c61154(0,0,0,0,puVar4,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000107c5a050();
  func_0x000100efa6c8();
  func_0x000107c3d89c(puVar4);
  func_0x000107c61170(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x0001008478a8();
  puVar8 = puVar7;
  func_0x000107c613fc();
  *(undefined8 *)(puVar8 + 0x18) = 9;
  *(undefined8 *)(puVar8 + 0x10) = 4;
  lVar3 = _DAT_112d4a5c8;
  uVar9 = *(undefined8 *)(puVar4 + _DAT_112d4a5c8);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  uVar9 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(puVar8 + 0x28) = uVar12;
  uVar9 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4acb0(puVar4);
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(puVar8 + 0x30) = uVar12;
  uVar9 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5ce8c(puVar4);
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(puVar8 + 0x38) = uVar12;
  uVar9 = 0;
  func_0x000100efb008(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar10 = puVar8;
  func_0x000107c5fc48(puVar8,uVar9);
  func_0x000107c61574(puVar8);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(puVar10);
  FUN_100efa570();
  func_0x000107c3d89c(puVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c613fc(puVar7,((ulong)*(uint *)(puVar7 + 0x30) + 7 & 0x1fffffff8) + 0x30,
                      *(ushort *)(puVar7 + 0x34) | 7);
  *(undefined8 *)(puVar7 + 0x18) = 0xd;
  *(undefined8 *)(puVar7 + 0x10) = 6;
  puVar5 = puVar4;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar11 = puVar5;
  func_0x000107c40290(0x4050800000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  *(undefined1 **)(puVar7 + 0x20) = puVar11;
  FUN_100efa2dc();
  puVar11 = puVar5;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar12 = *(undefined8 *)(puVar4 + _DAT_112d4a5a8);
  func_0x000107c5e308(uVar12);
  func_0x000107c61180();
  puVar5 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  *(undefined1 **)(puVar7 + 0x28) = puVar5;
  lVar2 = _DAT_112d4a5c0;
  uVar13 = *(undefined8 *)(puVar4 + _DAT_112d4a5c0);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c4acb0(uVar14);
  func_0x000107c61180();
  uVar12 = uVar13;
  func_0x000107c40284(0x402c000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar7 + 0x30) = uVar12;
  uVar13 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c5ce8c(uVar14);
  func_0x000107c61180();
  uVar12 = uVar13;
  func_0x000107c40284(0xc02c000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar7 + 0x38) = uVar12;
  uVar13 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar12 = uVar13;
  func_0x000107c40284(0x402c000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar7 + 0x40) = uVar12;
  uVar13 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c3ec1c(uVar14);
  func_0x000107c61180();
  uVar12 = uVar13;
  func_0x000107c40284(0xc02c000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar7 + 0x48) = uVar12;
  puVar8 = puVar7;
  func_0x000107c5fc48(puVar7,uVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000100efafd4(param_1);
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 100efad4c; end: 100efae13; -[_TtC35SystemNotificationPermissionFeature30FriendsNotificationPreviewCell layoutSubviews] */

void FUN_100efad4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  FUN_100efaf78();
  puVar2 = PTR_s_layoutSubviews_112600e60;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  puVar3 = puVar2;
  func_0x000100efa6c8();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000100b74f58(0x4010000000000000,0x3fb999999999999a,0,0,puVar2,puVar3,puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100efae14; end: 100efae47; -[_TtC35SystemNotificationPermissionFeature30FriendsNotificationPreviewCell initWithCoder:] */

undefined8 FUN_100efae14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100efb048();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 100efae48; end: 100efaea3; -[_TtC35SystemNotificationPermissionFeature30FriendsNotificationPreviewCell initWithFrame:] */

void FUN_100efae48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SystemNotificationPermissionFeature.FriendsNotificationPreviewCell",0x42,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100efae74);
  (*pcVar1)();
}



/* Entry: 100efaea4; end: 100efaf77; -[_TtC35SystemNotificationPermissionFeature30FriendsNotificationPreviewCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100efaee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efaf08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efaf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efaf48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100efaf2c) */
/* WARNING: Removing unreachable block (ram,0x000100efaf0c) */
/* WARNING: Removing unreachable block (ram,0x000100efaeec) */
/* WARNING: Removing unreachable block (ram,0x000100efaf4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efaea4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + _DAT_112d4a588;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100efaf78; end: 100efaf97;  */

void FUN_100efaf78(void)

{
  func_0x000107c61168(&PTR_PTR_11279f368);
  return;
}



/* Entry: 100efaf98; end: 100efb047;  */

undefined8 FUN_100efaf98(undefined8 param_1,undefined8 param_2)

{
  FUN_100efc6cc(param_2,param_1);
  return param_2;
}



/* Entry: 100efb048; end: 100efb0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efb048(void)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d4a590) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a598) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5c8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SystemNotificationPermissionFeature/FriendsNotificationPreviewCell.swift",
                      0x48,2,0x80,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100efb0f0);
  (*pcVar1)();
}



/* Entry: 100efb0f0; end: 100efb393;  */

/* WARNING: Possible PIC construction at 0x000100efb1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efb25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efb2cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100efb260) */
/* WARNING: Removing unreachable block (ram,0x000100efb1e0) */
/* WARNING: Removing unreachable block (ram,0x000100efb2d0) */

void FUN_100efb0f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = 0x112d4a710;
  func_0x0001000285a8(0x112d4a710,&UNK_10d910e48);
  uVar6 = 0x100;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  lVar3 = lVar2;
  func_0x000100effd0c();
  uVar4 = 0x73694e5f69746f6e;
  func_0x000107c5fadc(0x73694e5f69746f6e,0xef6e6f63695f6168);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (lRam0000000112d4a718 != -1) {
    func_0x000107c61568(0x112d4a718,FUN_100efb394);
  }
  uVar1 = uRam00000001137ff0b0;
  uVar4 = uRam00000001137ff0a8;
  *(undefined8 *)(lVar2 + 0x20) = 0x616873694e;
  *(undefined8 *)(lVar2 + 0x28) = 0xe500000000000000;
  *(long *)(lVar2 + 0x30) = lVar3;
  *(undefined8 *)(lVar2 + 0x38) = uVar6;
  *(undefined **)(lVar2 + 0x40) = puVar5;
  *(undefined8 *)(lVar2 + 0x48) = uVar4;
  *(undefined8 *)(lVar2 + 0x50) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 100efb394; end: 100efb3b3;  */

void FUN_100efb394(undefined8 param_1,undefined8 param_2)

{
  FUN_100efb3b4();
  uRam00000001137ff0a8 = param_1;
  uRam00000001137ff0b0 = param_2;
  return;
}



/* Entry: 100efb3b4; end: 100efb73f;  */

undefined1  [16] FUN_100efb3b4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_78 = lVar8;
  func_0x000107c5ef64();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d48c78;
  func_0x0001000285a8(0x112d48c78,&UNK_10d90f8c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_02;
  lVar4 = 0x112d48c80;
  func_0x0001000285a8(0x112d48c80,&UNK_10d910e50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar9 - extraout_x8_03;
  lVar4 = 0;
  func_0x000107c5ec74();
  lStack_70 = *(long *)(lVar4 + -8);
  lStack_68 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar12 = lVar14 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar15 + 0x38))(lVar14,1,1,lVar3);
  lVar4 = 0;
  func_0x000107c5efa8();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar9,1,1,lVar4);
  *(undefined1 *)(lVar12 + -8) = 1;
  *(undefined8 *)(lVar12 + -0x10) = 0;
  *(undefined1 *)(lVar12 + -0x18) = 1;
  *(undefined8 *)(lVar12 + -0x20) = 0;
  *(undefined1 *)(lVar12 + -0x28) = 1;
  *(undefined8 *)(lVar12 + -0x30) = 0;
  *(undefined1 *)(lVar12 + -0x38) = 1;
  *(undefined8 *)(lVar12 + -0x40) = 0;
  *(undefined1 *)(lVar12 + -0x48) = 1;
  *(undefined8 *)(lVar12 + -0x50) = 0;
  *(undefined1 *)(lVar12 + -0x58) = 1;
  *(undefined8 *)(lVar12 + -0x60) = 0;
  *(undefined1 *)(lVar12 + -0x68) = 1;
  *(undefined8 *)(lVar12 + -0x70) = 0;
  *(undefined1 *)(lVar12 + -0x78) = 1;
  *(undefined8 *)(lVar12 + -0x80) = 0;
  *(undefined1 *)(lVar12 + -0x88) = 1;
  *(undefined8 *)(lVar12 + -0x90) = 0;
  *(undefined1 *)(lVar12 + -0x98) = 1;
  *(undefined8 *)(lVar12 + -0xa0) = 0;
  *(undefined1 *)(lVar12 + -0xa8) = 1;
  *(undefined8 *)(lVar12 + -0xb0) = 0;
  func_0x000107c5ec70(lVar12,lVar14,lVar9,0,1,0,1,0,1);
  func_0x000107c5ec50(9,0);
  func_0x000107c5ec68(0x29,0);
  func_0x000107c5ef54(lVar8);
  func_0x000107c5ef48(puVar13,lVar12);
  puVar5 = puVar13;
  (**(code **)(lVar11 + 0x30))(puVar13,1,lVar2);
  lVar4 = lStack_78;
  if ((int)puVar5 == 1) {
    func_0x0001000d1dcc(puVar13);
    puVar10 = (undefined *)0x0;
    puVar13 = (undefined1 *)0xe000000000000000;
  }
  else {
    (**(code **)(lVar11 + 0x20))(lStack_78,puVar13,lVar2);
    puVar10 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x000107c61168();
    func_0x000107c5aaec();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100efb740);
      (*pcVar1)();
    }
    puVar6 = puVar10;
    func_0x000107c5ee70();
    puVar7 = puVar10;
    func_0x000107c5c1b8(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar6);
    puVar10 = puVar7;
    func_0x000107c5faec(puVar7);
    func_0x000107c61170(puVar7);
    (**(code **)(lVar11 + 8))(lVar4,lVar2);
  }
  (**(code **)(lVar15 + 8))(lVar8,lVar3);
  (**(code **)(lStack_70 + 8))(lVar12,lStack_68);
  auVar16._8_8_ = puVar13;
  auVar16._0_8_ = puVar10;
  return auVar16;
}



/* Entry: 100efb740; end: 100efb79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efb740(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a5f8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a5f8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100efb7a0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100efb7a0; end: 100efb9e3;  */

undefined * FUN_100efb7a0(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_d0 [56];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (lRam0000000112d4a708 != -1) {
    func_0x000107c61568(0x112d4a708,FUN_100efb0f0);
  }
  lVar2 = lRam00000001137ff0a0;
  lVar8 = *(long *)(lRam00000001137ff0a0 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar8 != 0) {
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100efcad0(0,lVar8,0);
    puVar5 = puStack_98;
    puVar9 = (undefined8 *)(lVar2 + 0x20);
    uVar3 = 0;
    FUN_100efaf78(0);
    do {
      uStack_88 = puVar9[1];
      uStack_90 = *puVar9;
      uStack_78 = puVar9[3];
      uStack_80 = puVar9[2];
      uStack_68 = puVar9[5];
      uStack_70 = puVar9[4];
      uStack_60 = puVar9[6];
      func_0x000107c610f8(uVar3);
      FUN_100efaf98(&uStack_90,auStack_d0);
      puVar4 = &uStack_90;
      FUN_100efa79c();
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_98 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_100efcad0(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_98 + 0x10) = uVar1 + 1;
      *(undefined8 **)(puStack_98 + uVar1 * 8 + 0x20) = puVar4;
      puVar9 = puVar9 + 7;
      lVar8 = lVar8 + -1;
      puVar5 = puStack_98;
    } while (lVar8 != 0);
  }
  if ((ulong)puVar5 >> 0x3e == 0) {
    func_0x000107c61434(puVar5);
    func_0x000107c605f8();
    uVar3 = 0;
    FUN_100efcc10(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar7 = puVar5;
    }
    uVar3 = 0;
    FUN_100efcc10(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61434(puVar5);
    func_0x000107c60458(puVar7,uVar3);
    func_0x000107c6142c(puVar5);
  }
  func_0x000107c6142c(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  FUN_100efcc10(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  puVar6 = puVar7;
  func_0x000107c5fc48(puVar7,uVar3);
  func_0x000107c6142c(puVar7);
  func_0x000107c45784(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c52b2c(puVar5);
  func_0x000107c5a050(puVar5);
  func_0x000107c59594(0x4020000000000000,puVar5);
  return puVar5;
}



/* Entry: 100efb9e4; end: 100efbf27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100efb9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d4a5f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d4a600) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a608) = 0;
  FUN_100efc218();
  puVar2 = &stack0xffffffffffffff70;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar2,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar3 = puVar2;
  FUN_100efb740();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  puVar6 = puVar5;
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 9;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  lVar1 = _DAT_112d4a5f8;
  uVar7 = *(undefined8 *)(puVar2 + _DAT_112d4a5f8);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  uVar7 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ce8c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar6 + 0x28) = uVar8;
  uVar7 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5cbe4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  uVar7 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar6 + 0x38) = uVar8;
  uVar9 = 0;
  FUN_100efcc10(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar10 = puVar6;
  func_0x000107c5fc48(puVar6,uVar9);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170();
  FUN_100efbf48();
  uVar11 = *(undefined8 *)(puVar10 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(puVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c(puVar2);
  func_0x000107c5a050(uVar11);
  func_0x000107c613fc(puVar5,((ulong)*(uint *)(puVar5 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                      *(ushort *)(puVar5 + 0x34) | 7);
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar8 = uVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar7 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  uVar8 = uVar11;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  puVar3 = puVar2;
  func_0x000107c5ce8c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar7 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x28) = uVar7;
  uVar8 = uVar11;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  puVar3 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar7 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  uVar7 = uVar11;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  puVar3 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x38) = uVar8;
  puVar6 = puVar5;
  func_0x000107c5fc48(puVar5,uVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  return puVar2;
}



/* Entry: 100efbf28; end: 100efbf47; -[_TtC35SystemNotificationPermissionFeature30FriendsNotificationPreviewView initWithFrame:] */

void FUN_100efbf28(void)

{
  FUN_100efb9e4();
  return;
}



/* Entry: 100efbf48; end: 100efbfe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efbf48(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a608;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a608);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000100efc648();
    func_0x000107c613fc();
    FUN_100efc8dc(4);
    if (*(long *)(lVar2 + 0x10) != 0) {
      func_0x000107c54b70(0x3fa47ae147ae147b);
    }
    *(undefined1 *)(unaff_x20 + _DAT_112d4a600) = 1;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 100efbfe8; end: 100efc053; -[_TtC35SystemNotificationPermissionFeature30FriendsNotificationPreviewView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efbfe8(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d4a5f8) = 0;
  *(undefined1 *)(param_1 + _DAT_112d4a600) = 0;
  *(undefined8 *)(param_1 + _DAT_112d4a608) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SystemNotificationPermissionFeature/FriendsNotificationPreviewView.swift",
                      0x48,2,100,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100efc054);
  (*pcVar1)();
}



/* Entry: 100efc054; end: 100efc0af; -[_TtC35SystemNotificationPermissionFeature30FriendsNotificationPreviewView layoutSubviews] */

void FUN_100efc054(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_100efc218();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_100efc0b0();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100efc0b0; end: 100efc1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efc0b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112d4a600;
  if (*(char *)(unaff_x20 + _DAT_112d4a600) == '\x01') {
    func_0x000100efc5e0();
    lVar2 = param_1;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c3ec60();
    lVar3 = lVar2;
    func_0x000107c54b80(lVar2);
    FUN_100efb740();
    lVar4 = lVar3;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c3d894(lVar4,param_2,lVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c3ec60();
    lVar3 = param_1;
    func_0x000107c54b80();
    FUN_100efbf48();
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    func_0x000107c61174(uVar5);
    func_0x000107c61574(lVar3);
    uVar6 = uVar5;
    func_0x000107c4aba4(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c562f4(uVar6,param_2,param_1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_1);
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 100efc1d4; end: 100efc1df;  */

void FUN_100efc1d4(void)

{
  FUN_100efc218();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100efc1e0; end: 100efc217; -[_TtC35SystemNotificationPermissionFeature30FriendsNotificationPreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efc1e0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4a5f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4a608));
  return;
}



/* Entry: 100efc218; end: 100efc237;  */

void FUN_100efc218(void)

{
  func_0x000107c61168(&PTR_PTR_11279f528);
  return;
}



/* Entry: 100efc238; end: 100efc4e7;  */

undefined1 * FUN_100efc238(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000100efc5e0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 6;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174(puVar1);
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar6 = 0;
  func_0x000100ef8bfc();
  *(undefined8 *)(lVar2 + 0x38) = uVar6;
  *(undefined **)(lVar2 + 0x20) = puVar4;
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fe0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined8 *)(lVar2 + 0x58) = uVar6;
  *(undefined **)(lVar2 + 0x40) = puVar4;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0x3fee666666666666);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar2 + 0x78) = uVar6;
  *(undefined **)(lVar2 + 0x60) = puVar3;
  lVar7 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar2);
  func_0x000107c535a0(puVar1);
  func_0x000107c61170();
  func_0x000100673624();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 7;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  uVar8 = 0;
  FUN_100efcc10(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar8;
  func_0x000107c60108(0x3fe0000000000000);
  *(undefined8 *)(lVar7 + 0x20) = uVar6;
  func_0x000107c60108(0x3fe0000000000000);
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  uVar6 = 1;
  func_0x000107c60110();
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  lVar2 = lVar7;
  func_0x000107c5fc48(lVar7,uVar8);
  func_0x000107c61574(lVar7);
  func_0x000107c56084(puVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c597c4(0x3fe0000000000000,0,puVar1);
  func_0x000107c54598(0x3fe0000000000000,0x3ff0000000000000,puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 100efc4e8; end: 100efc507; -[_TtC35SystemNotificationPermissionFeature20PreviewGradientLayer init] */

void FUN_100efc4e8(void)

{
  FUN_100efc238();
  return;
}


