/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102025fd0; end: 102026013; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint end] */

void FUN_102025fd0(undefined8 param_1)

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



/* Entry: 102026014; end: 1020262ef;  */

void FUN_102026014(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0fa6820)) ||
       (func_0x000107c605b8(0xd000000000000026,0x800000010f0597e0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c581e0();
    }
    else {
      uVar2 = 0xd000000000000025;
      if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef0fa67f0)) ||
         (func_0x000107c605b8(0xd000000000000025,0x800000010f059810,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c581e4();
      }
      else {
        if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0fa67c0)) {
          uVar2 = 0xd000000000000023;
          func_0x000107c605b8(0xd000000000000023,0x800000010f059840,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0fa6790)) &&
               (func_0x000107c605b8(0xd00000000000002a,0x800000010f059870,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "FindFriendsScopeGraphBridge/SCFindFriendsScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x4e,2,0x3e,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1020262f0);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c54a0c();
            goto LAB_1020260a0;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58af8();
      }
    }
  }
LAB_1020260a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1020262f0; end: 10202639b; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1020262f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102026014(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10202639c; end: 10202642b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202639c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e51288,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e51290) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e51298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e512a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e512a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e512b0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10202642c; end: 10202644b; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint init] */

void FUN_10202642c(void)

{
  FUN_10202639c();
  return;
}



/* Entry: 10202644c; end: 10202647f;  */

void FUN_10202644c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102026480; end: 1020264f7; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020264ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020264cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020264b0) */
/* WARNING: Removing unreachable block (ram,0x0001020264d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026480(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e51288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e51290));
  return;
}



/* Entry: 1020264f8; end: 102026517;  */

void FUN_1020264f8(void)

{
  func_0x000107c61168(&PTR_PTR_112819030);
  return;
}



/* Entry: 102026518; end: 10202655f; -[SCSCFindFriendsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026518(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e512e0;
  func_0x000107c61428(param_1 + _DAT_112e512e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102026560; end: 1020265b7; -[SCSCFindFriendsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026560(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e512e0;
  func_0x000107c61428(param_1 + _DAT_112e512e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020265b8; end: 10202668f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020265b8(undefined8 param_1,long param_2)

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
    FUN_1020252b4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e511d8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102026690);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e511e0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e512e8);
    *(long **)(unaff_x20 + _DAT_112e512e8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102026690; end: 1020266b7; -[SCSCFindFriendsScopedServicesSaberEntryPoint begin] */

void FUN_102026690(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020265b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020266b8; end: 10202682f;  */

/* WARNING: Possible PIC construction at 0x000102026720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020267b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102026724) */
/* WARNING: Removing unreachable block (ram,0x0001020267bc) */
/* WARNING: Removing unreachable block (ram,0x0001020267d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020266b8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e512e8);
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



/* Entry: 102026830; end: 102026837;  */

void FUN_102026830(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102026838; end: 10202686b; -[SCSCFindFriendsScopedServicesSaberEntryPoint end] */

void FUN_102026838(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1020266b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10202686c; end: 10202698b;  */

void FUN_10202686c(long param_1,long param_2,long param_3)

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
                        "FindFriendsScopeGraphBridge/SCSCFindFriendsScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10202698c);
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



/* Entry: 10202698c; end: 102026a37; -[SCSCFindFriendsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10202698c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10202686c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102026a38; end: 102026a97; -[SCSCFindFriendsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026a38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e512e0,0);
  *(undefined8 *)(param_1 + _DAT_112e512e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102026a98; end: 102026acb;  */

void FUN_102026a98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102026acc; end: 102026b03; -[SCSCFindFriendsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026acc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e512e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e512e8));
  return;
}



/* Entry: 102026b04; end: 102026b23;  */

void FUN_102026b04(void)

{
  func_0x000107c61168(&PTR_PTR_112819110);
  return;
}



/* Entry: 102026b24; end: 102026b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026b24(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102026f18();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e51320) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102026b90; end: 102026bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026b90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e51320) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102026bfc; end: 102026c5b; -[_TtC56RecentlyActiveEducationAlertScopedFactoryServiceProvider44SCRecentlyActiveEducationAlertScopedServices init] */

void FUN_102026bfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationAlertScopedFactoryServiceProvider.SCRecentlyActiveEducationAlertScopedServices"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102026c28);
  (*pcVar1)();
}



/* Entry: 102026c5c; end: 102026c6b; -[_TtC56RecentlyActiveEducationAlertScopedFactoryServiceProvider44SCRecentlyActiveEducationAlertScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e51320));
  return;
}



/* Entry: 102026c6c; end: 102026cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102026c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bf318;
  func_0x000107c613fc(&UNK_1104bf318,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102026fb0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102026cd8; end: 102026d73;  */

void FUN_102026cd8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bf228;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bf228;
  return;
}



/* Entry: 102026d74; end: 102026dab;  */

void FUN_102026d74(long *param_1)

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



/* Entry: 102026dac; end: 102026db3;  */

undefined8 FUN_102026dac(void)

{
  return 0x1b;
}



/* Entry: 102026db4; end: 102026ee7;  */

void FUN_102026db4(undefined8 *param_1)

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
  puVar1 = &UNK_1104bf340;
  func_0x000107c613fc(&UNK_1104bf340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102026f88;
  func_0x00010058fa64(FUN_102026f88,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102026ee8; end: 102026f17;  */

undefined ** FUN_102026ee8(void)

{
  return &PTR_DAT_112e777a0;
}



/* Entry: 102026f18; end: 102026f37;  */

void FUN_102026f18(void)

{
  func_0x000107c61168(&PTR_PTR_1128191d0);
  return;
}



/* Entry: 102026f38; end: 102026f87;  */

undefined1  [16] FUN_102026f38(void)

{
  return ZEXT816(0x1104bf278);
}



/* Entry: 102026f88; end: 102026faf;  */

void FUN_102026f88(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102026fb0; end: 102026fb3;  */

void FUN_102026fb0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102026fb4; end: 10202701f;  */

void FUN_102026fb4(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e51390,&UNK_10da50a80);
  func_0x000107c613fc();
  pcVar1 = FUN_102027030;
  func_0x0001000841fc(FUN_102027030,0);
  func_0x000100084214(&UNK_10da50a40,0x3a,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102027020; end: 10202702f;  */

undefined1  [16] FUN_102027020(void)

{
  return ZEXT816(0x1104bf380);
}



/* Entry: 102027030; end: 102027303;  */

void FUN_102027030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e51398,&UNK_10da50a88);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e513a0,&UNK_10da50a90);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_102027304;
  func_0x0001000823a8(FUN_102027304,puVar1);
  pcVar3 = "RecentlyActiveEducationAlertEntryPointWrapperServiceProvider";
  func_0x000100082720("RecentlyActiveEducationAlertEntryPointWrapperServiceProvider",0x3c,2);
  FUN_102027df4();
  func_0x000100082720("RecentlyActiveEducationAlertScopeGraphBridgeServicesServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102026d74;
  func_0x0001000823a8(FUN_102026d74,0);
  func_0x000100082720("SCRecentlyActiveEducationAlertScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e513a8,&UNK_10da50aa0);
  puVar5 = &UNK_1104bf3a0;
  func_0x000107c613fc(&UNK_1104bf3a0,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar2;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(char **)(puVar5 + 0x20) = pcVar3;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x10202730c;
  func_0x0001000823a8(0x10202730c,puVar5);
  func_0x000100082720("SCRecentlyActiveEducationAlertScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112e51328,&UNK_10da507c0);
  func_0x000107c6157c(uVar8);
  uVar6 = 0x102027318;
  func_0x0001000823a8(0x102027318,uVar8);
  func_0x000100082720("SCRecentlyActiveEducationAlertScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e51318,&UNK_10da507b0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102027320;
  func_0x0001000823a8(0x102027320,uVar6);
  func_0x000100082720("SCRecentlyActiveEducationAlertScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104bf3c8;
  func_0x000107c613fc(&UNK_1104bf3c8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102027328;
  func_0x0001000823a8(0x102027328,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCRecentlyActiveEducationAlertScopeEntryPointProvider",0x35,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102027304; end: 10202732f;  */

void FUN_102027304(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020274dc();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1020297d8(0);
  func_0x000107c610f8();
  FUN_102028d80(uStack_38,uVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_38;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102027330; end: 1020273fb;  */

void FUN_102027330(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020274dc();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1020297d8(0);
  func_0x000107c610f8();
  FUN_102028d80(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  *param_1 = param_2;
  return;
}



/* Entry: 1020273fc; end: 10202741f;  */

void FUN_1020273fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102027420; end: 102027427;  */

undefined8 FUN_102027420(void)

{
  return 0x1b;
}



/* Entry: 102027428; end: 1020274ab;  */

void FUN_102027428(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10202751c,param_2,FUN_102027520,param_2,0x102027548,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1020274ac; end: 1020274db;  */

undefined ** FUN_1020274ac(void)

{
  return &PTR_DAT_112e777a0;
}



/* Entry: 1020274dc; end: 1020274fb;  */

void FUN_1020274dc(void)

{
  func_0x000107c61168(&PTR_PTR_112e51418);
  return;
}



/* Entry: 1020274fc; end: 10202751f;  */

undefined1  [16] FUN_1020274fc(void)

{
  return ZEXT816(0x1104bf420);
}



/* Entry: 102027520; end: 102027573;  */

void FUN_102027520(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102027574; end: 1020275af;  */

void FUN_102027574(undefined8 *param_1,undefined8 param_2)

{
  FUN_1020275b0();
  func_0x0001000a7f38("SCRecentlyActiveEducationAlertScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1020275b0; end: 10202779b;  */

void FUN_1020275b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104ec038;
  ppuVar4 = &PTR_DAT_112e777a0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e51478;
  func_0x0001000285a8(0x112e51478,&UNK_10da50bf0);
  func_0x0001000a6ee8(&UNK_1104bf420,
                      "RecentlyActiveEducationAlertEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_102027810,param_1,uVar2,&UNK_1104bf420,&PTR_DAT_112e513b0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104bf470;
  func_0x000107c613fc(&UNK_1104bf470,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bf628,
                      "RecentlyActiveEducationAlertScopeGraphBridgeScopeInitializationPluginKey",
                      0x48,2,FUN_102027818,puVar3,uVar2,&UNK_1104bf628,&PTR_DAT_112e51508);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104bf498;
  func_0x000107c613fc(&UNK_1104bf498,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bf2b8,
                      "SCRecentlyActiveEducationAlertScopedServicesScopeInitializationPluginKey",
                      0x48,2,FUN_102027900,puVar3,uVar2,&UNK_1104bf2b8,&PTR_DAT_112e51330);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e51480;
  func_0x0001000285a8(0x112e51480,&UNK_10da50bf8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10202779c; end: 10202780f;  */

void FUN_10202779c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10202793c;
  func_0x0001000823a8(0x10202793c,param_3);
  func_0x000100082720("RecentlyActiveEducationAlertEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102027810; end: 102027817;  */

void FUN_102027810(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10202793c;
  func_0x0001000823a8();
  func_0x000100082720("RecentlyActiveEducationAlertEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102027818; end: 102027857;  */

void FUN_102027818(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102027ed8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("RecentlyActiveEducationAlertScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102027858; end: 1020278ff;  */

void FUN_102027858(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bf4c0;
  func_0x000107c613fc(&UNK_1104bf4c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102027934;
  func_0x0001000823a8(FUN_102027934,puVar1);
  func_0x000100082720("SCRecentlyActiveEducationAlertScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102027900; end: 102027907;  */

void FUN_102027900(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bf4c0;
  func_0x000107c613fc(&UNK_1104bf4c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102027934;
  func_0x0001000823a8(FUN_102027934,puVar3);
  func_0x000100082720("SCRecentlyActiveEducationAlertScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102027908; end: 102027933;  */

void FUN_102027908(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102027934; end: 102027943;  */

void FUN_102027934(undefined8 *param_1)

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
  puVar1 = &UNK_1104bf340;
  func_0x000107c613fc(&UNK_1104bf340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102026f88;
  func_0x00010058fa64(FUN_102026f88,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102027944; end: 1020279cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102027944(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102027d04();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e51488) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e51490) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020279cc);
  (*pcVar1)();
}



/* Entry: 1020279cc; end: 102027a2b; -[_TtC44RecentlyActiveEducationAlertScopeGraphBridge59RecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint init] */

void FUN_1020279cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationAlertScopeGraphBridge.RecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020279f8);
  (*pcVar1)();
}



/* Entry: 102027a2c; end: 102027a63; -[_TtC44RecentlyActiveEducationAlertScopeGraphBridge59RecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102027a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102027a4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102027a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e51488));
  return;
}



/* Entry: 102027a64; end: 102027a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102027a64(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e51490),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e51488));
  return;
}



/* Entry: 102027a8c; end: 102027aab;  */

void FUN_102027a8c(void)

{
  func_0x000107c61168(&PTR_PTR_112819290);
  return;
}



/* Entry: 102027aac; end: 102027b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102027aac(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e514c0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e514c8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102027b34);
  (*pcVar2)();
}



/* Entry: 102027b34; end: 102027c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102027b34(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e514c0);
  *(undefined **)(unaff_x20 + _DAT_112e514c0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e514c8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e514c8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bf588;
  func_0x000107c613fc(&UNK_1104bf588,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102027c20,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102027c1c; end: 102027c27;  */

void FUN_102027c1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102027c28; end: 102027c87; -[_TtC44RecentlyActiveEducationAlertScopeGraphBridge59SCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint init] */

void FUN_102027c28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationAlertScopeGraphBridge.SCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102027c54);
  (*pcVar1)();
}



/* Entry: 102027c88; end: 102027cbf; -[_TtC44RecentlyActiveEducationAlertScopeGraphBridge59SCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102027c88(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e514c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e514c0));
  return;
}



/* Entry: 102027cc0; end: 102027cc3;  */

void FUN_102027cc0(void)

{
  return;
}



/* Entry: 102027cc4; end: 102027ce3;  */

void FUN_102027cc4(void)

{
  FUN_102027b34();
  return;
}



/* Entry: 102027ce4; end: 102027d03;  */

void FUN_102027ce4(void)

{
  func_0x000107c61168(&PTR_PTR_112819358);
  return;
}



/* Entry: 102027d04; end: 102027dd3;  */

undefined8 FUN_102027d04(void)

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
  
  func_0x000107c61428(0x112e514f8,&uStack_40,0x20,0);
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
    FUN_102027dd4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102027dd4; end: 102027df3;  */

void FUN_102027dd4(void)

{
  func_0x000107c61168(&PTR_PTR_112819420);
  return;
}



/* Entry: 102027df4; end: 102027e5f;  */

void FUN_102027df4(void)

{
  func_0x0001000285a8(0x112e51500,&UNK_10da50cd8);
  func_0x0001000823a8(0x102027e34,0);
  return;
}



/* Entry: 102027e60; end: 102027e9b; -[_TtC44RecentlyActiveEducationAlertScopeGraphBridge52RecentlyActiveEducationAlertScopeGraphBridgeServices init] */

void FUN_102027e60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102027e9c; end: 102027ecf;  */

void FUN_102027e9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102027ed0; end: 102027ed7;  */

undefined8 FUN_102027ed0(void)

{
  return 0x1b;
}



/* Entry: 102027ed8; end: 10202804f;  */

void FUN_102027ed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bf5d0;
  func_0x000107c613fc(&UNK_1104bf5d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102028050,puVar1);
  return;
}



/* Entry: 102028050; end: 102028057;  */

void FUN_102028050(undefined8 *param_1)

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
  func_0x000107c61428(0x112e514f8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e514f8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bf668;
  func_0x000107c613fc(&UNK_1104bf668,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102028104;
  func_0x00010058fa64(0x102028104,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102028058; end: 1020280b3;  */

void FUN_102028058(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e514f8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e514f8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1020280b4; end: 10202810b;  */

undefined ** FUN_1020280b4(void)

{
  return &PTR_DAT_112e777a0;
}



/* Entry: 10202810c; end: 102028153; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202810c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e51558;
  func_0x000107c61428(param_1 + _DAT_112e51558,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102028154; end: 1020281ab; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102028154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e51558;
  func_0x000107c61428(param_1 + _DAT_112e51558,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020281ac; end: 1020281f3; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint recentlyActiveEducationAlertScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020281ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e51560;
  func_0x000107c61428(param_1 + _DAT_112e51560,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1020281f4; end: 102028257; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint setRecentlyActiveEducationAlertScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020281f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e51560;
  func_0x000107c61428(param_1 + _DAT_112e51560,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102028258; end: 10202838b;  */

/* WARNING: Possible PIC construction at 0x000102028310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202832c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102028348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102028314) */
/* WARNING: Removing unreachable block (ram,0x000102028330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102028258(void)

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
  func_0x000107c4fa20();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102027a8c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102027d04();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10202838c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e51488) = lVar5;
    *(long *)(lVar4 + _DAT_112e51490) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10202838c; end: 1020283b3; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10202838c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102028258();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020283b4; end: 1020283f7; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint end] */

void FUN_1020283b4(undefined8 param_1)

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



/* Entry: 1020283f8; end: 10202858f;  */

void FUN_1020283f8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc5) || (param_3 != -0x7ffffffef0fa6190)) {
      uVar2 = 0xd00000000000003b;
      func_0x000107c605b8(0xd00000000000003b,0x800000010f059e70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "RecentlyActiveEducationAlertScopeGraphBridge/SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x70,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102028590);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57ba8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102028590; end: 10202863b; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102028590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1020283f8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10202863c; end: 1020286a7; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202863c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e51558,0);
  *(undefined8 *)(param_1 + _DAT_112e51560) = 0;
  *(undefined8 *)(param_1 + _DAT_112e51568) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020286a8; end: 1020286db;  */

void FUN_1020286a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020286dc; end: 102028723; -[SCRecentlyActiveEducationAlertScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102028708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010202870c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020286dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e51558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e51560));
  return;
}



/* Entry: 102028724; end: 102028743;  */

void FUN_102028724(void)

{
  func_0x000107c61168(&PTR_PTR_1128194d0);
  return;
}



/* Entry: 102028744; end: 10202878b; -[SCSCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102028744(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e51598;
  func_0x000107c61428(param_1 + _DAT_112e51598,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10202878c; end: 1020287e3; -[SCSCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202878c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e51598;
  func_0x000107c61428(param_1 + _DAT_112e51598,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020287e4; end: 1020288bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020287e4(undefined8 param_1,long param_2)

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
    FUN_102027ce4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e514c0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020288bc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e514c8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e515a0);
    *(long **)(unaff_x20 + _DAT_112e515a0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1020288bc; end: 1020288e3; -[SCSCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint begin] */

void FUN_1020288bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020287e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020288e4; end: 102028a5b;  */

/* WARNING: Possible PIC construction at 0x00010202894c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020289e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102028950) */
/* WARNING: Removing unreachable block (ram,0x0001020289e8) */
/* WARNING: Removing unreachable block (ram,0x000102028a00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020288e4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e515a0);
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



/* Entry: 102028a5c; end: 102028a63;  */

void FUN_102028a5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102028a64; end: 102028a97; -[SCSCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint end] */

void FUN_102028a64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1020288e4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102028a98; end: 102028bb7;  */

void FUN_102028a98(long param_1,long param_2,long param_3)

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
                        "RecentlyActiveEducationAlertScopeGraphBridge/SCSCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint.swift"
                        ,0x70,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102028bb8);
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


