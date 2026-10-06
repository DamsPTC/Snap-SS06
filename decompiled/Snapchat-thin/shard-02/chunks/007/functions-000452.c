/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102015a48; end: 102015a7b;  */

void FUN_102015a48(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102015a7c; end: 102015a83;  */

undefined8 FUN_102015a7c(void)

{
  return 0x1b;
}



/* Entry: 102015a84; end: 102015bfb;  */

void FUN_102015a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bcf38;
  func_0x000107c613fc(&UNK_1104bcf38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102015bfc,puVar1);
  return;
}



/* Entry: 102015bfc; end: 102015c03;  */

void FUN_102015bfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e502b8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e502b8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bcfd0;
  func_0x000107c613fc(&UNK_1104bcfd0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102015cb0;
  func_0x00010058fa64(0x102015cb0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102015c04; end: 102015c5f;  */

void FUN_102015c04(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e502b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e502b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102015c60; end: 102015cb7;  */

undefined ** FUN_102015c60(void)

{
  return &PTR_DAT_113076c50;
}



/* Entry: 102015cb8; end: 102015cff; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102015cb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50318;
  func_0x000107c61428(param_1 + _DAT_112e50318,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102015d00; end: 102015d57; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102015d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50318;
  func_0x000107c61428(param_1 + _DAT_112e50318,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102015d58; end: 102015d9f; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint storiesRepostMentionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102015d58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50320;
  func_0x000107c61428(param_1 + _DAT_112e50320,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102015da0; end: 102015e03; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint setStoriesRepostMentionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102015da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50320;
  func_0x000107c61428(param_1 + _DAT_112e50320,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102015e04; end: 102015f37;  */

/* WARNING: Possible PIC construction at 0x000102015ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102015ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102015ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102015ec0) */
/* WARNING: Removing unreachable block (ram,0x000102015edc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102015e04(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5bf80();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102015638();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1020158b0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102015f38);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e50248) = lVar5;
    *(long *)(lVar4 + _DAT_112e50250) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102015f38; end: 102015f5f; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102015f38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102015e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102015f60; end: 102015fa3; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint end] */

void FUN_102015f60(undefined8 param_1)

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



/* Entry: 102015fa4; end: 10201613b;  */

void FUN_102015fa4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0fa8630)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f0579d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StoriesRepostMentionScopeGraphBridge/SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10201613c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59920();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10201613c; end: 1020161e7; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10201613c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102015fa4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1020161e8; end: 102016253; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020161e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50318,0);
  *(undefined8 *)(param_1 + _DAT_112e50320) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50328) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102016254; end: 102016287;  */

void FUN_102016254(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102016288; end: 1020162cf; -[SCStoriesRepostMentionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020162b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020162b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102016288(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50320));
  return;
}



/* Entry: 1020162d0; end: 1020162ef;  */

void FUN_1020162d0(void)

{
  func_0x000107c61168(&PTR_PTR_112817840);
  return;
}



/* Entry: 1020162f0; end: 102016337; -[SCSCStoriesRepostMentionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020162f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50358;
  func_0x000107c61428(param_1 + _DAT_112e50358,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102016338; end: 10201638f; -[SCSCStoriesRepostMentionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102016338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50358;
  func_0x000107c61428(param_1 + _DAT_112e50358,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102016390; end: 102016467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102016390(undefined8 param_1,long param_2)

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
    FUN_102015890();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e50280) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102016468);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e50288);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e50360);
    *(long **)(unaff_x20 + _DAT_112e50360) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102016468; end: 10201648f; -[SCSCStoriesRepostMentionScopedServicesSaberEntryPoint begin] */

void FUN_102016468(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102016390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102016490; end: 102016607;  */

/* WARNING: Possible PIC construction at 0x0001020164f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102016590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020164fc) */
/* WARNING: Removing unreachable block (ram,0x000102016594) */
/* WARNING: Removing unreachable block (ram,0x0001020165ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102016490(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e50360);
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



/* Entry: 102016608; end: 10201660f;  */

void FUN_102016608(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102016610; end: 102016643; -[SCSCStoriesRepostMentionScopedServicesSaberEntryPoint end] */

void FUN_102016610(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102016490();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102016644; end: 102016763;  */

void FUN_102016644(long param_1,long param_2,long param_3)

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
                        "StoriesRepostMentionScopeGraphBridge/SCSCStoriesRepostMentionScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102016764);
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



/* Entry: 102016764; end: 10201680f; -[SCSCStoriesRepostMentionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102016764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102016644(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102016810; end: 10201686f; -[SCSCStoriesRepostMentionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102016810(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50358,0);
  *(undefined8 *)(param_1 + _DAT_112e50360) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102016870; end: 1020168a3;  */

void FUN_102016870(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020168a4; end: 1020168db; -[SCSCStoriesRepostMentionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020168a4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50360));
  return;
}



/* Entry: 1020168dc; end: 1020168fb;  */

void FUN_1020168dc(void)

{
  func_0x000107c61168(&PTR_PTR_112817908);
  return;
}



/* Entry: 1020168fc; end: 102016967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020168fc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102016cf0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e50398) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102016968; end: 1020169d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102016968(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50398) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020169d4; end: 102016a33; -[_TtC48StoryPrivacySettingsScopedFactoryServiceProvider36SCStoryPrivacySettingsScopedServices init] */

void FUN_1020169d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryPrivacySettingsScopedFactoryServiceProvider.SCStoryPrivacySettingsScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102016a00);
  (*pcVar1)();
}



/* Entry: 102016a34; end: 102016a43; -[_TtC48StoryPrivacySettingsScopedFactoryServiceProvider36SCStoryPrivacySettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102016a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e50398));
  return;
}



/* Entry: 102016a44; end: 102016aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102016a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bd1e8;
  func_0x000107c613fc(&UNK_1104bd1e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102016d88,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102016ab0; end: 102016b4b;  */

void FUN_102016ab0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bd0f8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bd0f8;
  return;
}



/* Entry: 102016b4c; end: 102016b83;  */

void FUN_102016b4c(long *param_1)

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



/* Entry: 102016b84; end: 102016b8b;  */

undefined8 FUN_102016b84(void)

{
  return 0x1b;
}



/* Entry: 102016b8c; end: 102016cbf;  */

void FUN_102016b8c(undefined8 *param_1)

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
  puVar1 = &UNK_1104bd210;
  func_0x000107c613fc(&UNK_1104bd210,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102016d60;
  func_0x00010058fa64(FUN_102016d60,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102016cc0; end: 102016cef;  */

undefined ** FUN_102016cc0(void)

{
  return &PTR_DAT_112ff1b40;
}



/* Entry: 102016cf0; end: 102016d0f;  */

void FUN_102016cf0(void)

{
  func_0x000107c61168(&PTR_PTR_1128179c8);
  return;
}



/* Entry: 102016d10; end: 102016d5f;  */

undefined1  [16] FUN_102016d10(void)

{
  return ZEXT816(0x1104bd148);
}



/* Entry: 102016d60; end: 102016d87;  */

void FUN_102016d60(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102016d88; end: 102016d8b;  */

void FUN_102016d88(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102016d8c; end: 102016e57;  */

/* WARNING: Possible PIC construction at 0x000102016e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102016e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102016e30) */
/* WARNING: Removing unreachable block (ram,0x000102016e40) */

void FUN_102016d8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104bd298;
  func_0x000107c613fc(&UNK_1104bd298,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112e50408;
  func_0x0001000285a8(0x112e50408,&UNK_10da4e7b8);
  func_0x000107c613fc();
  pcVar3 = FUN_102017204;
  func_0x0001000841fc(FUN_102017204,puVar1,uVar2);
  func_0x000100084214(&UNK_10da4e780,0x32,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102016e58; end: 102016e73;  */

/* WARNING: Possible PIC construction at 0x000102016e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102016e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102016e30) */
/* WARNING: Removing unreachable block (ram,0x000102016e40) */

void FUN_102016e58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1104bd298;
  func_0x000107c613fc(&UNK_1104bd298,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e50408;
  func_0x0001000285a8(0x112e50408,&UNK_10da4e7b8);
  func_0x000107c613fc();
  pcVar6 = FUN_102017204;
  func_0x0001000841fc(FUN_102017204,puVar4,uVar5);
  func_0x000100084214(&UNK_10da4e780,0x32,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102016e74; end: 102017203;  */

void FUN_102016e74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e50410,&UNK_10da4e7c0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1020185f4();
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeExposerSubjectServiceProvider",0x3e,2);
  puVar3 = puVar2;
  FUN_102018680();
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeExposerObservableServiceProvider",0x41,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102016b4c;
  func_0x0001000823a8(FUN_102016b4c,0);
  func_0x000100082720("SCStoryPrivacySettingsScopedServicesCleanupRelayServiceProvider",0x3f,2);
  puVar5 = puVar2;
  FUN_1020184a8();
  func_0x000100082720("StoryPrivacySettingsScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e50418,&UNK_10da4e7d0);
  puVar6 = &UNK_1104bd2c0;
  func_0x000107c613fc(&UNK_1104bd2c0,0x40,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 **)(puVar6 + 0x38) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102017210;
  func_0x0001000823a8(0x102017210,puVar6);
  func_0x000100082720("SCStoryPrivacySettingsScopeEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e50420,&UNK_10da4e7d8);
  puVar6 = &UNK_1104bd2e8;
  func_0x000107c613fc(&UNK_1104bd2e8,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  pcVar7 = FUN_10201725c;
  func_0x0001000823a8(FUN_10201725c,puVar6);
  func_0x000100082720("SCStoryPrivacySettingsScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e503a0,&UNK_10da4e520);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x102017268;
  func_0x0001000823a8(0x102017268,pcVar7);
  func_0x000100082720("SCStoryPrivacySettingsScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e50390,&UNK_10da4e510);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102017270;
  func_0x0001000823a8(0x102017270,uVar8);
  func_0x000100082720("SCStoryPrivacySettingsScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104bd310;
  func_0x000107c613fc(&UNK_1104bd310,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102017278;
  func_0x0001000823a8(0x102017278,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCStoryPrivacySettingsScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102017204; end: 10201721f;  */

void FUN_102017204(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e50410,&UNK_10da4e7c0);
  puVar2 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_1020185f4();
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeExposerSubjectServiceProvider",0x3e,2);
  puVar4 = puVar3;
  FUN_102018680();
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeExposerObservableServiceProvider",0x41,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102016b4c;
  func_0x0001000823a8(FUN_102016b4c,0);
  func_0x000100082720("SCStoryPrivacySettingsScopedServicesCleanupRelayServiceProvider",0x3f,2);
  puVar6 = puVar3;
  FUN_1020184a8();
  func_0x000100082720("StoryPrivacySettingsScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e50418,&UNK_10da4e7d0);
  puVar7 = &UNK_1104bd2c0;
  func_0x000107c613fc(&UNK_1104bd2c0,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar8;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 **)(puVar7 + 0x38) = puVar4;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar4);
  uVar8 = 0x102017210;
  func_0x0001000823a8(0x102017210,puVar7);
  func_0x000100082720("SCStoryPrivacySettingsScopeEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e50420,&UNK_10da4e7d8);
  puVar7 = &UNK_1104bd2e8;
  func_0x000107c613fc(&UNK_1104bd2e8,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar2;
  *(code **)(puVar7 + 0x20) = pcVar5;
  *(undefined8 **)(puVar7 + 0x28) = puVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar6);
  pcVar9 = FUN_10201725c;
  func_0x0001000823a8(FUN_10201725c,puVar7);
  func_0x000100082720("SCStoryPrivacySettingsScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e503a0,&UNK_10da4e520);
  func_0x000107c6157c(pcVar9);
  uVar10 = 0x102017268;
  func_0x0001000823a8(0x102017268,pcVar9);
  func_0x000100082720("SCStoryPrivacySettingsScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e50390,&UNK_10da4e510);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x102017270;
  func_0x0001000823a8(0x102017270,uVar10);
  func_0x000100082720("SCStoryPrivacySettingsScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_1104bd310;
  func_0x000107c613fc(&UNK_1104bd310,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(code **)(puVar7 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar11 = 0x102017278;
  func_0x0001000823a8(0x102017278,puVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCStoryPrivacySettingsScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 102017220; end: 10201725b;  */

void FUN_102017220(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10201725c; end: 10201727f;  */

void FUN_10201725c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102017c10(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCStoryPrivacySettingsScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102017280; end: 102017a07;  */

void FUN_102017280(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_102017b60();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  func_0x0001000285a8(0x112e50428,&UNK_10da4e7e8);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar5 = PTR_PTR_1126a9df0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f057d10);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa60);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar5);
  uVar7 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f057d30);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f057d60);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  *param_1 = param_2;
  return;
}



/* Entry: 102017a08; end: 102017a53;  */

void FUN_102017a08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102017a54; end: 102017a5b;  */

undefined8 FUN_102017a54(void)

{
  return 0x1b;
}



/* Entry: 102017a5c; end: 102017adf;  */

void FUN_102017a5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102017ba0,param_2,FUN_102017ba4,param_2,FUN_102017bcc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102017ae0; end: 102017b2f;  */

undefined8 FUN_102017ae0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102017b30; end: 102017b5f;  */

void FUN_102017b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104bd328;
  return;
}



/* Entry: 102017b60; end: 102017b7f;  */

void FUN_102017b60(void)

{
  func_0x000107c61168(&PTR_PTR_112e50498);
  return;
}



/* Entry: 102017b80; end: 102017ba3;  */

undefined1  [16] FUN_102017b80(void)

{
  return ZEXT816(0x1104bd368);
}



/* Entry: 102017ba4; end: 102017bcb;  */

void FUN_102017ba4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102017bcc; end: 102017bd3;  */

undefined8 FUN_102017bcc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102017bd4; end: 102017c0f;  */

void FUN_102017bd4(undefined8 *param_1,undefined8 param_2)

{
  FUN_102017c10();
  func_0x0001000a7f38("SCStoryPrivacySettingsScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 102017c10; end: 102017dfb;  */

void FUN_102017c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106dc7f8;
  ppuVar4 = &PTR_DAT_112ff1b40;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e50520;
  func_0x0001000285a8(0x112e50520,&UNK_10da4e960);
  func_0x0001000a6ee8(&UNK_1104bd368,
                      "SCStoryPrivacySettingsScopeEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_102017e70,param_1,uVar2,&UNK_1104bd368,&PTR_DAT_112e50430);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104bd3b8;
  func_0x000107c613fc(&UNK_1104bd3b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bd188,
                      "SCStoryPrivacySettingsScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_102017f20,puVar3,uVar2,&UNK_1104bd188,&PTR_DAT_112e503a8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104bd3e0;
  func_0x000107c613fc(&UNK_1104bd3e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bd5b8,
                      "StoryPrivacySettingsScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_102017f28,puVar3,uVar2,&UNK_1104bd5b8,&PTR_DAT_112e505b8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e50528;
  func_0x0001000285a8(0x112e50528,&UNK_10da4e968);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102017dfc; end: 102017e6f;  */

void FUN_102017dfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102017f9c;
  func_0x0001000823a8(0x102017f9c,param_3);
  func_0x000100082720("SCStoryPrivacySettingsScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102017e70; end: 102017e77;  */

void FUN_102017e70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102017f9c;
  func_0x0001000823a8();
  func_0x000100082720("SCStoryPrivacySettingsScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102017e78; end: 102017f1f;  */

void FUN_102017e78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bd408;
  func_0x000107c613fc(&UNK_1104bd408,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102017f94;
  func_0x0001000823a8(FUN_102017f94,puVar1);
  func_0x000100082720("SCStoryPrivacySettingsScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 102017f20; end: 102017f27;  */

void FUN_102017f20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bd408;
  func_0x000107c613fc(&UNK_1104bd408,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102017f94;
  func_0x0001000823a8(FUN_102017f94,puVar3);
  func_0x000100082720("SCStoryPrivacySettingsScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 102017f28; end: 102017f67;  */

void FUN_102017f28(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102018728(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("StoryPrivacySettingsScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 102017f68; end: 102017f93;  */

void FUN_102017f68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102017f94; end: 102017fa3;  */

void FUN_102017f94(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bd210;
  func_0x000107c613fc(&UNK_1104bd210,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102016d60;
  func_0x00010058fa64(FUN_102016d60,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102017fa4; end: 10201807f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102017fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1020183b8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e50530) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e50538) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102018080);
  (*pcVar1)();
}



/* Entry: 102018080; end: 1020180df; -[_TtC36StoryPrivacySettingsScopeGraphBridge51StoryPrivacySettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_102018080(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryPrivacySettingsScopeGraphBridge.StoryPrivacySettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020180ac);
  (*pcVar1)();
}



/* Entry: 1020180e0; end: 102018117; -[_TtC36StoryPrivacySettingsScopeGraphBridge51StoryPrivacySettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020180fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102018100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020180e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50530));
  return;
}



/* Entry: 102018118; end: 10201813f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018118(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e50538),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e50530));
  return;
}



/* Entry: 102018140; end: 10201815f;  */

void FUN_102018140(void)

{
  func_0x000107c61168(&PTR_PTR_112817a88);
  return;
}



/* Entry: 102018160; end: 1020181e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102018160(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50568) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e50570);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020181e8);
  (*pcVar2)();
}



/* Entry: 1020181e8; end: 1020182cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020181e8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50568);
  *(undefined **)(unaff_x20 + _DAT_112e50568) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50570);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e50570))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bd4d8;
  func_0x000107c613fc(&UNK_1104bd4d8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1020182d4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1020182d0; end: 1020182db;  */

void FUN_1020182d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1020182dc; end: 10201833b; -[_TtC36StoryPrivacySettingsScopeGraphBridge51SCStoryPrivacySettingsScopedServicesSaberEntryPoint init] */

void FUN_1020182dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryPrivacySettingsScopeGraphBridge.SCStoryPrivacySettingsScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102018308);
  (*pcVar1)();
}



/* Entry: 10201833c; end: 102018373; -[_TtC36StoryPrivacySettingsScopeGraphBridge51SCStoryPrivacySettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201833c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e50570));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50568));
  return;
}



/* Entry: 102018374; end: 102018377;  */

void FUN_102018374(void)

{
  return;
}



/* Entry: 102018378; end: 102018397;  */

void FUN_102018378(void)

{
  FUN_1020181e8();
  return;
}



/* Entry: 102018398; end: 1020183b7;  */

void FUN_102018398(void)

{
  func_0x000107c61168(&PTR_PTR_112817b50);
  return;
}



/* Entry: 1020183b8; end: 102018487;  */

undefined8 FUN_1020183b8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e505a0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102018488();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102018488; end: 1020184a7;  */

void FUN_102018488(void)

{
  func_0x000107c61168(&PTR_PTR_112817c18);
  return;
}



/* Entry: 1020184a8; end: 1020184c3;  */

void FUN_1020184a8(undefined8 param_1)

{
  func_0x0001000285a8(0x112e505a8,&UNK_10da4ea38);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102018530,param_1);
  return;
}



/* Entry: 1020184c4; end: 10201852f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020184c4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102018488();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e505b0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102018530; end: 102018537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018530(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102018488();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e505b0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102018538; end: 102018583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018538(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e505b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102018584; end: 1020185e3; -[_TtC36StoryPrivacySettingsScopeGraphBridge44StoryPrivacySettingsScopeGraphBridgeServices init] */

void FUN_102018584(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryPrivacySettingsScopeGraphBridge.StoryPrivacySettingsScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020185b0);
  (*pcVar1)();
}



/* Entry: 1020185e4; end: 1020185f3; -[_TtC36StoryPrivacySettingsScopeGraphBridge44StoryPrivacySettingsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020185e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e505b0));
  return;
}



/* Entry: 1020185f4; end: 10201867f;  */

void FUN_1020185f4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102018634,0);
  return;
}



/* Entry: 102018680; end: 10201869b;  */

void FUN_102018680(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020186ec,param_1);
  return;
}



/* Entry: 10201869c; end: 1020186eb;  */

void FUN_10201869c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1020186ec; end: 10201871f;  */

void FUN_1020186ec(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102018720; end: 102018727;  */

undefined8 FUN_102018720(void)

{
  return 0x1b;
}



/* Entry: 102018728; end: 10201889f;  */

void FUN_102018728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bd520;
  func_0x000107c613fc(&UNK_1104bd520,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1020188a0,puVar1);
  return;
}



/* Entry: 1020188a0; end: 1020188a7;  */

void FUN_1020188a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e505a0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e505a0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bd5f8;
  func_0x000107c613fc(&UNK_1104bd5f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102018974;
  func_0x00010058fa64(0x102018974,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1020188a8; end: 102018903;  */

void FUN_1020188a8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e505a0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e505a0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}


