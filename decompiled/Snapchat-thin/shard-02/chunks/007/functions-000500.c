/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10212ab8c; end: 10212abc3; -[_TtC27MemberRolesScopeGraphBridge42SCMemberRolesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212ab8c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5a940));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5a938));
  return;
}



/* Entry: 10212abc4; end: 10212abc7;  */

void FUN_10212abc4(void)

{
  return;
}



/* Entry: 10212abc8; end: 10212abe7;  */

void FUN_10212abc8(void)

{
  FUN_10212aa38();
  return;
}



/* Entry: 10212abe8; end: 10212ac07;  */

void FUN_10212abe8(void)

{
  func_0x000107c61168(&PTR_PTR_11281ff00);
  return;
}



/* Entry: 10212ac08; end: 10212acd7;  */

undefined8 FUN_10212ac08(void)

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
  
  func_0x000107c61428(0x112e5a970,&uStack_40,0x20,0);
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
    FUN_10212acd8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10212acd8; end: 10212acf7;  */

void FUN_10212acd8(void)

{
  func_0x000107c61168(&PTR_PTR_11281ffc8);
  return;
}



/* Entry: 10212acf8; end: 10212ad63;  */

void FUN_10212acf8(void)

{
  func_0x0001000285a8(0x112e5a978,&UNK_10da60238);
  func_0x0001000823a8(0x10212ad38,0);
  return;
}



/* Entry: 10212ad64; end: 10212ad9f; -[_TtC27MemberRolesScopeGraphBridge35MemberRolesScopeGraphBridgeServices init] */

void FUN_10212ad64(undefined8 param_1)

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



/* Entry: 10212ada0; end: 10212add3;  */

void FUN_10212ada0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10212add4; end: 10212addb;  */

undefined8 FUN_10212add4(void)

{
  return 0x1b;
}



/* Entry: 10212addc; end: 10212af53;  */

void FUN_10212addc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104cf170;
  func_0x000107c613fc(&UNK_1104cf170,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10212af54,puVar1);
  return;
}



/* Entry: 10212af54; end: 10212af5b;  */

void FUN_10212af54(undefined8 *param_1)

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
  func_0x000107c61428(0x112e5a970,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e5a970,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104cf208;
  func_0x000107c613fc(&UNK_1104cf208,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10212b008;
  func_0x00010058fa64(0x10212b008,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10212af5c; end: 10212afb7;  */

void FUN_10212af5c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e5a970,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e5a970,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10212afb8; end: 10212b00f;  */

undefined ** FUN_10212afb8(void)

{
  return &PTR_DAT_112e97850;
}



/* Entry: 10212b010; end: 10212b057; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b010(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5a9d0;
  func_0x000107c61428(param_1 + _DAT_112e5a9d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10212b058; end: 10212b0af; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5a9d0;
  func_0x000107c61428(param_1 + _DAT_112e5a9d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10212b0b0; end: 10212b0f7; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint memberRolesScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b0b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5a9d8;
  func_0x000107c61428(param_1 + _DAT_112e5a9d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10212b0f8; end: 10212b15b; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint setMemberRolesScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5a9d8;
  func_0x000107c61428(param_1 + _DAT_112e5a9d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10212b15c; end: 10212b28f;  */

/* WARNING: Possible PIC construction at 0x00010212b214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010212b230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010212b24c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010212b218) */
/* WARNING: Removing unreachable block (ram,0x00010212b234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b15c(void)

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
  func_0x000107c4caf4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10212a990();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10212ac08();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10212b290);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e5a900) = lVar5;
    *(long *)(lVar4 + _DAT_112e5a908) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10212b290; end: 10212b2b7; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10212b290(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10212b15c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10212b2b8; end: 10212b2fb; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint end] */

void FUN_10212b2b8(undefined8 param_1)

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



/* Entry: 10212b2fc; end: 10212b493;  */

void FUN_10212b2fc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0f9b9e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f064620,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemberRolesScopeGraphBridge/SCMemberRolesScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4e,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10212b494);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c564f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10212b494; end: 10212b53f; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10212b494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10212b2fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10212b540; end: 10212b5ab; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b540(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5a9d0,0);
  *(undefined8 *)(param_1 + _DAT_112e5a9d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5a9e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10212b5ac; end: 10212b5df;  */

void FUN_10212b5ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10212b5e0; end: 10212b627; -[SCMemberRolesScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010212b60c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010212b610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b5e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5a9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5a9d8));
  return;
}



/* Entry: 10212b628; end: 10212b647;  */

void FUN_10212b628(void)

{
  func_0x000107c61168(&PTR_PTR_112820078);
  return;
}



/* Entry: 10212b648; end: 10212b68f; -[SCSCMemberRolesScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b648(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5aa10;
  func_0x000107c61428(param_1 + _DAT_112e5aa10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10212b690; end: 10212b6e7; -[SCSCMemberRolesScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5aa10;
  func_0x000107c61428(param_1 + _DAT_112e5aa10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10212b6e8; end: 10212b7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b6e8(undefined8 param_1,long param_2)

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
    FUN_10212abe8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5a938) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10212b7c0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e5a940);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5aa18);
    *(long **)(unaff_x20 + _DAT_112e5aa18) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10212b7c0; end: 10212b7e7; -[SCSCMemberRolesScopedServicesSaberEntryPoint begin] */

void FUN_10212b7c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10212b6e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10212b7e8; end: 10212b95f;  */

/* WARNING: Possible PIC construction at 0x00010212b850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010212b8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010212b854) */
/* WARNING: Removing unreachable block (ram,0x00010212b8ec) */
/* WARNING: Removing unreachable block (ram,0x00010212b904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212b7e8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5aa18);
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



/* Entry: 10212b960; end: 10212b967;  */

void FUN_10212b960(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10212b968; end: 10212b99b; -[SCSCMemberRolesScopedServicesSaberEntryPoint end] */

void FUN_10212b968(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10212b7e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10212b99c; end: 10212babb;  */

void FUN_10212b99c(long param_1,long param_2,long param_3)

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
                        "MemberRolesScopeGraphBridge/SCSCMemberRolesScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x30,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10212babc);
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



/* Entry: 10212babc; end: 10212bb67; -[SCSCMemberRolesScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10212babc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10212b99c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10212bb68; end: 10212bbc7; -[SCSCMemberRolesScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212bb68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5aa10,0);
  *(undefined8 *)(param_1 + _DAT_112e5aa18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10212bbc8; end: 10212bbfb;  */

void FUN_10212bbc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10212bbfc; end: 10212bc33; -[SCSCMemberRolesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212bbfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5aa10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5aa18));
  return;
}



/* Entry: 10212bc34; end: 10212bc53;  */

void FUN_10212bc34(void)

{
  func_0x000107c61168(&PTR_PTR_112820140);
  return;
}



/* Entry: 10212bc54; end: 10212bd7f;  */

void FUN_10212bc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104cf310;
  func_0x000107c613fc(&UNK_1104cf310,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_4;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(FUN_10212bd80,puVar1);
  return;
}



/* Entry: 10212bd80; end: 10212c46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212bd80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  uVar19 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_2;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000033;
  func_0x0001000a9a18(0xd000000000000033,0x800000010f0646f0);
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&puStack_c0);
  puVar5 = puStack_c0;
  puVar4 = puStack_c0;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
LAB_10212be90:
    func_0x000100083b20(&puStack_c0);
    puVar5 = puStack_c0;
    puVar6 = puStack_c0;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170(puVar20);
      goto LAB_10212c3f4;
    }
    func_0x000100083b20(&puStack_c0);
    puVar5 = puStack_c0;
    puVar7 = puStack_c0;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar5 != (undefined *)0x0) {
      puVar8 = puVar5;
      func_0x000107c51f40();
      func_0x000107c61180();
      func_0x000107c615e8(puVar5);
      puVar9 = PTR_PTR_1126b1b70;
      func_0x000107c610f8();
      func_0x000107c472a0();
      func_0x000107c61174();
      func_0x000100083b20(&puStack_c0);
      puVar5 = puStack_c0;
      func_0x000107c3ee24(puStack_c0);
      func_0x000107c61180();
      func_0x000107c61170(puStack_c0);
      puVar10 = PTR_PTR_1126b1b78;
      func_0x000107c610f8();
      func_0x000107c468a0();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar9);
      puVar11 = PTR_PTR_1126ddd70;
      func_0x000107c610f8();
      func_0x000107c48018();
      puVar12 = PTR_PTR_1126ddd28;
      func_0x000107c610f8();
      func_0x000107c45db0();
      puVar13 = PTR_PTR_1126ddd30;
      func_0x000107c610f8();
      func_0x000107c4587c();
      puVar14 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar5 = &UNK_1104cf358;
      func_0x000107c613fc(&UNK_1104cf358,0x28,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar19;
      *(undefined8 *)(puVar5 + 0x18) = uVar21;
      *(undefined **)(puVar5 + 0x20) = puVar6;
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a0 = FUN_10212c480;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      uStack_b0 = 0x10212caa8;
      puStack_a8 = &UNK_1104cf370;
      ppuVar15 = &puStack_c0;
      puStack_98 = puVar5;
      func_0x000107c60bc4(ppuVar15);
      puVar5 = puStack_98;
      func_0x000107c6157c(uVar19);
      func_0x000107c6157c(uVar21);
      func_0x000107c615f0(puVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c3e4fc(puVar14);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar15);
      puVar16 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      pcStack_a0 = FUN_10212c6a4;
      puStack_c0 = puVar7;
      uStack_b8 = 0x42000000;
      uStack_b0 = 0x10212caa4;
      puStack_a8 = &UNK_1104cf398;
      ppuVar15 = &puStack_c0;
      puStack_98 = (undefined *)uVar18;
      func_0x000107c60bc4(ppuVar15);
      puVar5 = puStack_98;
      func_0x000107c6157c(uVar18);
      func_0x000107c61574(puVar5);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar15);
      puVar17 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar5 = &UNK_1104cf3d0;
      func_0x000107c613fc(&UNK_1104cf3d0,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = uVar1;
      pcStack_a0 = FUN_10212c710;
      puStack_c0 = puVar7;
      uStack_b8 = 0x42000000;
      uStack_b0 = 0x10212caac;
      puStack_a8 = &UNK_1104cf3e8;
      ppuVar15 = &puStack_c0;
      puStack_98 = puVar5;
      func_0x000107c60bc4(ppuVar15);
      puVar5 = puStack_98;
      func_0x000107c61174();
      func_0x000107c6157c(uVar1);
      func_0x000107c61574(puVar5);
      func_0x000107c3e4fc(puVar17);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c61174();
      func_0x000107c61174(puVar17);
      func_0x000107c615f0(puVar8);
      func_0x000107c61174(puVar14);
      func_0x000107c61174(puVar11);
      func_0x000107c61174();
      func_0x000100083b20(&puStack_c0);
      puVar5 = puStack_c0;
      uVar21 = *(undefined8 *)(puStack_c0 + _DAT_113092298);
      func_0x000107c615f0(uVar21);
      func_0x000107c61170(puVar5);
      func_0x000107c61174();
      func_0x000100083b20(&uStack_c8);
      uVar19 = uStack_c8;
      func_0x000107c4afc4();
      func_0x000107c61180();
      func_0x000107c61170(uStack_c8);
      func_0x000100083b20(&uStack_d0);
      uVar18 = uStack_d0;
      func_0x000107c4b518();
      func_0x000107c61180();
      func_0x000107c61170(uStack_d0);
      puVar5 = PTR_PTR_1126de4f8;
      func_0x000107c610f8();
      func_0x000107c4725c();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(uVar19);
      func_0x000107c61170(puVar16);
      func_0x000107c615e8(uVar21);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar14);
      func_0x000107c615e8(puVar8);
      func_0x000107c61170(puVar17);
      func_0x0001000a0a8c(0);
      func_0x000107c61174();
      puVar7 = puVar5;
      func_0x000104494b00();
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(puVar6);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar17);
      func_0x000107c615e8(puVar8);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
      *param_1 = puVar7;
      goto LAB_10212c41c;
    }
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(puVar6);
  }
  else {
    puVar20 = puVar5;
    func_0x000107c4ae10();
    func_0x000107c61180();
    func_0x000107c615e8(puVar5);
    puVar5 = puVar20;
    func_0x000107c426e0();
    if ((int)puVar5 != 0) goto LAB_10212be90;
    func_0x000107c61170(puVar4);
    puVar4 = puVar20;
LAB_10212c3f4:
    func_0x000107c61170(puVar4);
  }
  *param_1 = 0;
LAB_10212c41c:
  func_0x000107c61428(param_2,&puStack_c0,0,0);
  uVar19 = *param_2;
  func_0x000107c61174(uVar19);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar19);
  return;
}



/* Entry: 10212c470; end: 10212c47f;  */

undefined1  [16] FUN_10212c470(void)

{
  return ZEXT816(0x1104cf338);
}



/* Entry: 10212c480; end: 10212c687;  */

undefined * FUN_10212c480(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&puStack_90);
  puVar1 = puStack_90;
  func_0x000107c4af44();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c3e5c8();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    puVar1 = puVar3;
    func_0x000107c5fc54(puVar3,PTR___sSSN_11034da80);
    func_0x000107c61170(puVar3);
  }
  uVar4 = uStack_88;
  func_0x000107c5190c(uStack_88);
  func_0x000107c61180();
  puVar2 = &UNK_1104cf420;
  func_0x000107c613fc(&UNK_1104cf420,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  pcStack_60 = FUN_10212c8a8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10212c854;
  puStack_68 = &UNK_1104cf438;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  puVar2 = puStack_58;
  func_0x000107c61434(puVar1);
  func_0x000107c61574(puVar2);
  uVar6 = uVar4;
  func_0x000107c436a8(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar4);
  uVar4 = uStack_88;
  func_0x000107c51900(uStack_88);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126a9f10;
  func_0x000107c610f8(PTR_PTR_1126a9f10);
  puVar3 = puVar1;
  func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar1);
  func_0x000107c484b4(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puStack_90);
  func_0x000107c61170(uStack_88);
  return puVar2;
}



/* Entry: 10212c688; end: 10212c6a3;  */

void FUN_10212c688(long param_1,long param_2)

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



/* Entry: 10212c6a4; end: 10212c70f;  */

undefined * FUN_10212c6a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c444a4(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  puVar2 = PTR_PTR_1126a9f08;
  func_0x000107c610f8(PTR_PTR_1126a9f08);
  func_0x000107c46be8();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 10212c710; end: 10212c81b;  */

long FUN_10212c710(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4d734();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      func_0x000100083b20(&lStack_38);
      lVar1 = lStack_38;
      func_0x000107c4ad3c();
      func_0x000107c61180();
      func_0x000107c61170(lStack_38);
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c5d368(lVar2);
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        return lVar1;
      }
      return 0;
    }
  }
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4ad38(lStack_38);
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  return lVar2;
}



/* Entry: 10212c81c; end: 10212c853;  */

void FUN_10212c81c(long param_1)

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



/* Entry: 10212c854; end: 10212c8a7;  */

void FUN_10212c854(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10212c8a8; end: 10212ca8b;  */

long FUN_10212c8a8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = 0;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar13 = *(ulong *)(lVar9 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar12;
    if (uVar12 <= uVar13) {
      uVar1 = uVar13;
    }
    puVar10 = (undefined8 *)(lVar9 + 0x28 + uVar12 * 0x10);
    do {
      if (uVar13 == uVar12) {
        uVar7 = 0;
        func_0x00010109d9b8(0);
        puVar8 = puVar6;
        func_0x000107c5fc48(puVar6,uVar7);
        func_0x000107c6142c(puVar6);
        puVar6 = PTR_PTR_1126de658;
        func_0x000107c610f8(PTR_PTR_1126de658);
        func_0x000107c453e4();
        func_0x000107c51ff4();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
        if (param_1 != 0) {
          return param_1;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10212ca8c);
        (*pcVar3)();
      }
      uVar12 = uVar12 + 1;
      if (uVar1 + 1 == uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10212ca88);
        (*pcVar3)();
      }
      uVar7 = puVar10[-1];
      uVar2 = *puVar10;
      puVar8 = PTR_PTR_1126b6868;
      func_0x000107c610f8();
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar7,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c47914();
      func_0x000107c61170(uVar7);
      puVar10 = puVar10 + 2;
    } while (puVar8 == (undefined *)0x0);
    puVar5 = puVar6;
    func_0x000107c61550();
    if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
       (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar4 = puVar6;
        }
        func_0x000107c60480(puVar4);
      }
      puVar5 = (undefined *)0x0;
      func_0x00010109d890(0,puVar4 + 1,1,puVar6);
    }
    uVar11 = (ulong)puVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar11 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x00010109d890(puVar6,uVar1 + 1,1,puVar5);
      uVar11 = (ulong)puVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar11 + uVar1 * 8 + 0x20) = puVar8;
  } while( true );
}



/* Entry: 10212ca8c; end: 10212caaf;  */

void FUN_10212ca8c(long param_1,long param_2)

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



/* Entry: 10212cab0; end: 10212cafb;  */

void FUN_10212cab0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10212cafc,param_1);
  return;
}



/* Entry: 10212cafc; end: 10212cbf7;  */

void FUN_10212cafc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_10212cc08;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104cf500;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = puVar1;
  func_0x000100a0dc54(puVar1,0xd000000000000030,0x800000010f064730);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10212cbf8; end: 10212cc07;  */

undefined1  [16] FUN_10212cbf8(void)

{
  return ZEXT816(0x1104cf4f0);
}



/* Entry: 10212cc08; end: 10212cc73;  */

undefined * FUN_10212cc08(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4fe38(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  puVar2 = PTR_PTR_1126c30e8;
  func_0x000107c610f8(PTR_PTR_1126c30e8);
  func_0x000107c4911c();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 10212cc74; end: 10212cc8f;  */

void FUN_10212cc74(long param_1,long param_2)

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



/* Entry: 10212cc90; end: 10212ce9b;  */

void FUN_10212cc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104cf5b8;
  func_0x000107c613fc(&UNK_1104cf5b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10212ce9c,puVar1);
  return;
}



/* Entry: 10212ce9c; end: 10212ceb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212ce9c(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  cVar1 = *(char *)(*(long *)(lStack_48 + _DAT_113059cd0) + _DAT_11307ce50);
  func_0x000107c61170();
  if (cVar1 == '\x02') {
    func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
    func_0x000100083b20(&lStack_48);
    lVar5 = lStack_48;
    uVar2 = *(undefined8 *)(lStack_48 + _DAT_1130344b8);
    func_0x000107c61174();
    func_0x000107c61170(lVar5);
    uVar3 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&lStack_48);
    uVar2 = *(undefined8 *)(lStack_48 + _DAT_112fa6458);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lStack_48);
    lVar4 = 0;
    FUN_10212cfa0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5aa50) = uVar3;
    *(undefined8 *)(lVar5 + _DAT_112e5aa58) = uVar2;
    plVar6 = &lStack_58;
    lStack_58 = lVar5;
    lStack_50 = lVar4;
    func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
    func_0x0001000a0a8c(0);
    plVar7 = plVar6;
    func_0x000104494b00();
    func_0x000107c61170(plVar6);
  }
  else {
    plVar7 = (long *)0x0;
  }
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 10212ceb8; end: 10212cf07;  */

void FUN_10212ceb8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e5aa48 != 0) {
    return;
  }
  puVar1 = &UNK_1104cf600;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e5aa48 = param_1;
  return;
}



/* Entry: 10212cf08; end: 10212cf67; -[_TtC28DailyGamesBackgroundPrefetch30DailyGamesBackgroundPrefetcher init] */

void FUN_10212cf08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DailyGamesBackgroundPrefetch.DailyGamesBackgroundPrefetcher",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10212cf34);
  (*pcVar1)();
}



/* Entry: 10212cf68; end: 10212cf9f; -[_TtC28DailyGamesBackgroundPrefetch30DailyGamesBackgroundPrefetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010212cf84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010212cf88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212cf68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5aa50));
  return;
}



/* Entry: 10212cfa0; end: 10212cfbf;  */

void FUN_10212cfa0(void)

{
  func_0x000107c61168(&PTR_PTR_112820200);
  return;
}



/* Entry: 10212cfc0; end: 10212cfe3;  */

void FUN_10212cfc0(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010212cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 10212cfe4; end: 10212d00f; -[_TtC28DailyGamesBackgroundPrefetch30DailyGamesBackgroundPrefetcher dataSyncerIdentifier] */

void FUN_10212cfe4(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0647b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10212d010; end: 10212d017; -[_TtC28DailyGamesBackgroundPrefetch30DailyGamesBackgroundPrefetcher submitOnRegister] */

undefined8 FUN_10212d010(void)

{
  return 1;
}



/* Entry: 10212d018; end: 10212d223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10212d018(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    lVar9 = 0xc;
  }
  else {
    lVar9 = lStack_48;
    func_0x000107c41204();
    func_0x000107c615e8(lStack_48);
  }
  uVar8 = lVar9 * 0xe10;
  if (SUB168(SEXT816(lVar9) * SEXT816(0xe10),8) != (long)uVar8 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10212d214);
    (*pcVar1)();
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10212d218);
    (*pcVar1)();
  }
  if (uVar8 >> 0x20 == 0) {
    func_0x000107c57d34(puVar4);
    func_0x000107c57c1c(puVar3);
    func_0x000107c55974(puVar2);
    puVar5 = PTR_PTR_1126b7240;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c56a40();
    func_0x000107c52c2c(puVar5);
    puVar6 = puVar5;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10212d220);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar6);
    puVar6 = puVar5;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c3d93c();
      func_0x000107c61170(puVar6);
      uVar7 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010f0647b0);
      func_0x000107c57688(puVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c55958(puVar2);
      func_0x000107c54734(puVar2);
      uVar7 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010f0647b0);
      func_0x000107c5597c(puVar2);
      func_0x000107c61170(uVar7);
      func_0x000107c55968(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      return puVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10212d224);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10212d21c);
  (*pcVar1)();
}



/* Entry: 10212d224; end: 10212d257; -[_TtC28DailyGamesBackgroundPrefetch30DailyGamesBackgroundPrefetcher jobConfig] */

void FUN_10212d224(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10212d018();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10212d258; end: 10212d39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212d258(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long lStack_48;
  
  uVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001007d6c6c(1,0xd00000000000001c,0x800000010f064770,uVar3,&PTR_DAT_1104cf610);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    lVar1 = lStack_48;
    func_0x000107c41200();
    func_0x000107c615e8(lStack_48);
    if ((int)lVar1 != 0) {
      puVar2 = &UNK_1104cf668;
      func_0x000107c613fc(&UNK_1104cf668,0x30,7);
      *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
      *(code **)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      *(undefined8 *)(puVar2 + 0x28) = uVar3;
      func_0x000107c61174();
      FUN_10212d7c8(param_1,param_2);
      uVar3 = 0xb;
      func_0x0001001ca524(0xb,4,0x38,4,0,0,&UNK_10da604e8,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar3);
      return;
    }
  }
  if (param_1 != (code *)0x0) {
    (*param_1)(0,0);
  }
  return;
}



/* Entry: 10212d39c; end: 10212d3b7;  */

void FUN_10212d39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10212d3b8,0,0);
  return;
}



/* Entry: 10212d3b8; end: 10212d447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212d3b8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10212d448;
                    /* WARNING: Could not recover jumptable at 0x00010212d444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar3,lVar2);
  return;
}



/* Entry: 10212d448; end: 10212d4ab;  */

void FUN_10212d448(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  *(long *)(lVar3 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x60));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10212d4ac;
  }
  else {
    pcVar2 = FUN_10212d4ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10212d4ac; end: 10212d4eb;  */

void FUN_10212d4ac(void)

{
  long unaff_x22;
  
  if (*(code **)(unaff_x22 + 0x40) != (code *)0x0) {
    (**(code **)(unaff_x22 + 0x40))(0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010212d4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10212d4ec; end: 10212d617;  */

void FUN_10212d4ec(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c602fc(0x13);
  puVar3 = (undefined8 *)(unaff_x22 + 0x20);
  *puVar3 = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000011,0x800000010f064790);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x30),puVar3,uVar5,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x0001007d6c6c(3,*puVar3,uVar5,uVar2,&PTR_DAT_1104cf610);
  func_0x000107c6142c(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  if (lVar4 == 0) {
    func_0x000107c614ac(uVar5);
  }
  else {
    pcVar1 = *(code **)(unaff_x22 + 0x40);
    uVar2 = uVar5;
    func_0x000107c5ed2c(uVar5);
    (*pcVar1)(1,uVar2);
    func_0x000107c614ac(uVar5);
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010212d614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10212d618; end: 10212d6a3; -[_TtC28DailyGamesBackgroundPrefetch30DailyGamesBackgroundPrefetcher onSync:] */

void FUN_10212d618(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1104cf640;
    func_0x000107c613fc(&UNK_1104cf640,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10212d70c;
  }
  func_0x000107c61174(param_1);
  FUN_10212d258(pcVar2,puVar1);
  FUN_10212d6a4(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10212d6a4; end: 10212d6b3;  */

void FUN_10212d6a4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 10212d6b4; end: 10212d70b;  */

void FUN_10212d6b4(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10212d70c; end: 10212d713;  */

void FUN_10212d70c(undefined8 param_1,long param_2)

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



/* Entry: 10212d714; end: 10212d78b;  */

void FUN_10212d714(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10212d78c;
  plVar5[9] = lVar2;
  plVar5[10] = lVar4;
  plVar5[7] = lVar1;
  plVar5[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10212d3b8,0,0);
  return;
}



/* Entry: 10212d78c; end: 10212d7c7;  */

void FUN_10212d78c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010212d7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10212d7c8; end: 10212d7d7;  */

void FUN_10212d7c8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10212d7d8; end: 10212d9a7;  */

/* WARNING: Removing unreachable block (ram,0x00010212d9a4) */

undefined * FUN_10212d7d8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_58 [24];
  
  puVar7 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar7,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e20ef8;
    func_0x000107c61174();
    ppuVar2 = ppuVar1;
    FUN_10212e1a4();
    puVar5 = PTR_PTR_1126b1490;
    func_0x000107c61168(PTR_PTR_1126b1490);
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5c388(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126b1498;
    func_0x000107c610f8(PTR_PTR_1126b1498);
    func_0x000107c5fadc(ppuVar2,puVar7);
    func_0x000107c6142c(puVar7);
    func_0x000107c48694(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(ppuVar1);
    func_0x000107c61170(ppuVar2);
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 10212d9a8; end: 10212da8f; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin shortcutForSource:] */

void FUN_10212d9a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_1104cf720;
  func_0x000107c613fc(&UNK_1104cf720,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  pcStack_40 = FUN_10212df50;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1011ea2b4;
  puStack_48 = &UNK_1104cf738;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c41654(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10212da90; end: 10212daf7; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin recipientsForSource:] */

void FUN_10212da90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x0001011eb06c(0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c4a8a4(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10212daf8; end: 10212db0f; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin shortcutId] */

/* WARNING: Removing unreachable block (ram,0x00010212db0c) */

void FUN_10212daf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10212db10; end: 10212db13; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin pauseUpdates] */

void FUN_10212db10(void)

{
  return;
}



/* Entry: 10212db14; end: 10212db17; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin resumeUpdates] */

void FUN_10212db14(void)

{
  return;
}



/* Entry: 10212db18; end: 10212db1f; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin alwaysShow] */

undefined8 FUN_10212db18(void)

{
  return 1;
}



/* Entry: 10212db20; end: 10212db27; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin shortcutType] */

undefined8 FUN_10212db20(void)

{
  return 0x13;
}



/* Entry: 10212db28; end: 10212db8f; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin friendsFeedItemsObservable] */

void FUN_10212db28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x0001011eb06c(0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c4a8a4(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10212db90; end: 10212db93; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin selectShortcut] */

void FUN_10212db90(void)

{
  return;
}



/* Entry: 10212db94; end: 10212db97; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin deselectShortcut] */

void FUN_10212db94(void)

{
  return;
}



/* Entry: 10212db98; end: 10212db9b; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin incrementImpressionCount] */

void FUN_10212db98(void)

{
  return;
}



/* Entry: 10212db9c; end: 10212dd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10212db9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined *apuStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = &uStack_70;
  func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e5aa88);
  func_0x000107c43ca8(uVar1);
  func_0x000107c61180();
  uVar8 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuVar3 = apuStack_68;
  apuStack_68[0] = puVar2;
  func_0x0001006c71a4(ppuVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(uVar8);
  puVar2 = PTR___sSiN_11034deb0;
  pcVar4 = FUN_10212dd8c;
  func_0x0001000bfde0(FUN_10212dd8c,0,PTR___sSiN_11034deb0);
  func_0x000107c61574(ppuVar3);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5aa90) + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(apuStack_68);
  func_0x000107c61574(uVar8);
  func_0x0001000a8868(apuStack_68,uStack_50);
  uVar8 = uStack_50;
  (**(code **)(lStack_48 + 0x10))(uStack_50,lStack_48);
  uStack_70 = 0;
  func_0x0001006c71a4(&uStack_70);
  func_0x000107c61574(uVar8);
  func_0x0001000834e4(apuStack_68);
  puVar6 = (undefined1 *)puVar5;
  func_0x0001006c733c(puVar5);
  pcVar7 = FUN_10212ddc8;
  func_0x0001000bfde0(FUN_10212ddc8,0,puVar2);
  func_0x000107c61574(puVar6);
  puVar2 = PTR___sSiSQsWP_11034ded0;
  func_0x0001000c2068(PTR___sSiSQsWP_11034ded0);
  func_0x000107c61574(pcVar7);
  uVar8 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar7 = FUN_10212dde0;
  func_0x0001000bfde0(FUN_10212dde0,0,uVar8);
  func_0x000107c61574(puVar2);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar7);
  return puVar2;
}



/* Entry: 10212dd8c; end: 10212ddc7;  */

void FUN_10212dd8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x000103b90f24(0);
  func_0x000103b8efdc(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10212ddc8; end: 10212dddf;  */

void FUN_10212ddc8(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_2,param_2[1])) {
    *param_1 = *param_2 + param_2[1];
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10212dde0);
  (*pcVar1)();
}



/* Entry: 10212dde0; end: 10212de63;  */

void FUN_10212dde0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *param_2;
  puVar1 = PTR_PTR_1126b14f0;
  func_0x000107c61168(PTR_PTR_1126b14f0);
  if (lVar3 < 1) {
    func_0x000107c41f38();
  }
  else {
    func_0x000107c40828();
  }
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4e01c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10212de64; end: 10212de97; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin badgeObservable] */

void FUN_10212de64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10212db9c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10212de98; end: 10212def7; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin init] */

void FUN_10212de98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesFriendsFeedShortcutsDataPlugin.GamesFriendsFeedShortcutsDataPlugin",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10212dec4);
  (*pcVar1)();
}



/* Entry: 10212def8; end: 10212df2f; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212def8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5aa88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5aa90));
  return;
}



/* Entry: 10212df30; end: 10212df4f;  */

void FUN_10212df30(void)

{
  func_0x000107c61168(&PTR_PTR_1128202c8);
  return;
}


