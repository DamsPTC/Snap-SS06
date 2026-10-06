/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b98530; end: 102b9855b;  */

void FUN_102b98530(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b9855c; end: 102b98563;  */

void FUN_102b9855c(undefined8 *param_1)

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
  puVar1 = &UNK_1105a74c8;
  func_0x000107c613fc(&UNK_1105a74c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b97804;
  func_0x00010058fa64(FUN_102b97804,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b98564; end: 102b985eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b98564(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102b98924();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112efb0c8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112efb0d0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b985ec);
  (*pcVar1)();
}



/* Entry: 102b985ec; end: 102b9864b; -[_TtC38SpotlightRecommendTrayScopeGraphBridge53SpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b985ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightRecommendTrayScopeGraphBridge.SpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b98618);
  (*pcVar1)();
}



/* Entry: 102b9864c; end: 102b98683; -[_TtC38SpotlightRecommendTrayScopeGraphBridge53SpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b98668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9866c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9864c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb0c8));
  return;
}



/* Entry: 102b98684; end: 102b986ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b98684(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efb0d0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efb0c8));
  return;
}



/* Entry: 102b986ac; end: 102b986cb;  */

void FUN_102b986ac(void)

{
  func_0x000107c61168(&PTR_PTR_112891860);
  return;
}



/* Entry: 102b986cc; end: 102b98753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b986cc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efb100) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efb108);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b98754);
  (*pcVar2)();
}



/* Entry: 102b98754; end: 102b9883b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b98754(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efb100);
  *(undefined **)(unaff_x20 + _DAT_112efb100) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efb108);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efb108))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a77e0;
  func_0x000107c613fc(&UNK_1105a77e0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102b98840,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b9883c; end: 102b98847;  */

void FUN_102b9883c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b98848; end: 102b988a7; -[_TtC38SpotlightRecommendTrayScopeGraphBridge53SCSpotlightRecommendTrayScopedServicesSaberEntryPoint init] */

void FUN_102b98848(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightRecommendTrayScopeGraphBridge.SCSpotlightRecommendTrayScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b98874);
  (*pcVar1)();
}



/* Entry: 102b988a8; end: 102b988df; -[_TtC38SpotlightRecommendTrayScopeGraphBridge53SCSpotlightRecommendTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b988a8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efb108));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb100));
  return;
}



/* Entry: 102b988e0; end: 102b988e3;  */

void FUN_102b988e0(void)

{
  return;
}



/* Entry: 102b988e4; end: 102b98903;  */

void FUN_102b988e4(void)

{
  FUN_102b98754();
  return;
}



/* Entry: 102b98904; end: 102b98923;  */

void FUN_102b98904(void)

{
  func_0x000107c61168(&PTR_PTR_112891928);
  return;
}



/* Entry: 102b98924; end: 102b989f3;  */

undefined8 FUN_102b98924(void)

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
  
  func_0x000107c61428(0x112efb138,&uStack_40,0x20,0);
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
    FUN_102b989f4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102b989f4; end: 102b98a13;  */

void FUN_102b989f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128919f0);
  return;
}



/* Entry: 102b98a14; end: 102b98a7f;  */

void FUN_102b98a14(void)

{
  func_0x0001000285a8(0x112efb140,&UNK_10db2b1d8);
  func_0x0001000823a8(0x102b98a54,0);
  return;
}



/* Entry: 102b98a80; end: 102b98abb; -[_TtC38SpotlightRecommendTrayScopeGraphBridge46SpotlightRecommendTrayScopeGraphBridgeServices init] */

void FUN_102b98a80(undefined8 param_1)

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



/* Entry: 102b98abc; end: 102b98aef;  */

void FUN_102b98abc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b98af0; end: 102b98af7;  */

undefined8 FUN_102b98af0(void)

{
  return 0x1b;
}



/* Entry: 102b98af8; end: 102b98c6f;  */

void FUN_102b98af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a7828;
  func_0x000107c613fc(&UNK_1105a7828,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102b98c70,puVar1);
  return;
}



/* Entry: 102b98c70; end: 102b98c77;  */

void FUN_102b98c70(undefined8 *param_1)

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
  func_0x000107c61428(0x112efb138,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efb138,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a78c0;
  func_0x000107c613fc(&UNK_1105a78c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102b98d24;
  func_0x00010058fa64(0x102b98d24,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b98c78; end: 102b98cd3;  */

void FUN_102b98c78(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efb138,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efb138,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102b98cd4; end: 102b98d2b;  */

undefined ** FUN_102b98cd4(void)

{
  return &PTR_DAT_113066fe8;
}



/* Entry: 102b98d2c; end: 102b98d73; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b98d2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb198;
  func_0x000107c61428(param_1 + _DAT_112efb198,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b98d74; end: 102b98dcb; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b98d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb198;
  func_0x000107c61428(param_1 + _DAT_112efb198,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b98dcc; end: 102b98e13; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint spotlightRecommendTrayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b98dcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb1a0;
  func_0x000107c61428(param_1 + _DAT_112efb1a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b98e14; end: 102b98e77; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint setSpotlightRecommendTrayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b98e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb1a0;
  func_0x000107c61428(param_1 + _DAT_112efb1a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b98e78; end: 102b98fab;  */

/* WARNING: Possible PIC construction at 0x000102b98f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b98f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b98f68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b98f34) */
/* WARNING: Removing unreachable block (ram,0x000102b98f50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b98e78(void)

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
  func_0x000107c5b93c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102b986ac();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102b98924();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b98fac);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112efb0c8) = lVar5;
    *(long *)(lVar4 + _DAT_112efb0d0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102b98fac; end: 102b98fd3; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102b98fac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b98e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b98fd4; end: 102b99017; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint end] */

void FUN_102b98fd4(undefined8 param_1)

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



/* Entry: 102b99018; end: 102b991af;  */

void FUN_102b99018(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0f07330)) {
      uVar2 = 0xd000000000000035;
      func_0x000107c605b8(0xd000000000000035,0x800000010f0f8cd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpotlightRecommendTrayScopeGraphBridge/SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint.swift"
                            ,100,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b991b0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59708();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b991b0; end: 102b9925b; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102b991b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b99018(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b9925c; end: 102b992c7; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9925c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efb198,0);
  *(undefined8 *)(param_1 + _DAT_112efb1a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112efb1a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b992c8; end: 102b992fb;  */

void FUN_102b992c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b992fc; end: 102b99343; -[SCSpotlightRecommendTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b99328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9932c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b992fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efb198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb1a0));
  return;
}



/* Entry: 102b99344; end: 102b99363;  */

void FUN_102b99344(void)

{
  func_0x000107c61168(&PTR_PTR_112891aa0);
  return;
}



/* Entry: 102b99364; end: 102b993ab; -[SCSCSpotlightRecommendTrayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b99364(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb1d8;
  func_0x000107c61428(param_1 + _DAT_112efb1d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b993ac; end: 102b99403; -[SCSCSpotlightRecommendTrayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b993ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb1d8;
  func_0x000107c61428(param_1 + _DAT_112efb1d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b99404; end: 102b994db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b99404(undefined8 param_1,long param_2)

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
    FUN_102b98904();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efb100) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b994dc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efb108);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efb1e0);
    *(long **)(unaff_x20 + _DAT_112efb1e0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102b994dc; end: 102b99503; -[SCSCSpotlightRecommendTrayScopedServicesSaberEntryPoint begin] */

void FUN_102b994dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b99404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b99504; end: 102b9967b;  */

/* WARNING: Possible PIC construction at 0x000102b9956c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b99604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b99570) */
/* WARNING: Removing unreachable block (ram,0x000102b99608) */
/* WARNING: Removing unreachable block (ram,0x000102b99620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b99504(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efb1e0);
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



/* Entry: 102b9967c; end: 102b99683;  */

void FUN_102b9967c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b99684; end: 102b996b7; -[SCSCSpotlightRecommendTrayScopedServicesSaberEntryPoint end] */

void FUN_102b99684(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b99504();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b996b8; end: 102b997d7;  */

void FUN_102b996b8(long param_1,long param_2,long param_3)

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
                        "SpotlightRecommendTrayScopeGraphBridge/SCSCSpotlightRecommendTrayScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b997d8);
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



/* Entry: 102b997d8; end: 102b99883; -[SCSCSpotlightRecommendTrayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102b997d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b996b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b99884; end: 102b998e3; -[SCSCSpotlightRecommendTrayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b99884(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efb1d8,0);
  *(undefined8 *)(param_1 + _DAT_112efb1e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b998e4; end: 102b99917;  */

void FUN_102b998e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b99918; end: 102b9994f; -[SCSCSpotlightRecommendTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b99918(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efb1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb1e0));
  return;
}



/* Entry: 102b99950; end: 102b9996f;  */

void FUN_102b99950(void)

{
  func_0x000107c61168(&PTR_PTR_112891b68);
  return;
}



/* Entry: 102b99970; end: 102b999bf;  */

void FUN_102b99970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 102b999c0; end: 102b999cf;  */

void FUN_102b999c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 102b999d0; end: 102b99da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b999d0(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar14 = _DAT_11306ea00;
  lVar16 = *(long *)(unaff_x20 + 0x10);
  puVar3 = *(undefined **)(lVar16 + _DAT_11306ea00);
  func_0x000107c4ad6c();
  func_0x000107c61180();
  puVar13 = PTR___sypN_11034f1a8;
  if (puVar3 == (undefined *)0x0) {
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    puVar4 = puVar3;
    puVar15 = PTR___ss11AnyHashableVN_11034e448;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar3);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dca718;
    func_0x000107c5faec();
    ppuStack_c0 = ppuVar5;
    puStack_b8 = puVar15;
    func_0x000107c61434(puVar15);
    puVar3 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&lStack_b0,&ppuStack_c0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(puVar4 + 0x10) == 0) {
LAB_102b99ad0:
      uStack_78 = 0;
      lStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(puVar4);
      plVar6 = &lStack_b0;
      func_0x000100df95d0(plVar6);
      if (((ulong)puVar3 & 1) == 0) {
        func_0x000107c6142c(puVar4);
        goto LAB_102b99ad0;
      }
      func_0x0001000bb420(*(long *)(puVar4 + 0x38) + (long)plVar6 * 0x20,&lStack_80);
      func_0x000107c6142c(puVar15);
      puVar15 = puVar4;
    }
    func_0x000107c6142c(puVar15);
    func_0x000107c6142c(puVar4);
    func_0x0001007bbff0(&lStack_b0);
    if (lStack_68 != 0) {
      uVar7 = 0;
      FUN_102b99e88(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
      plVar6 = &lStack_b0;
      func_0x000107c6147c(plVar6,&lStack_80,puVar13 + 8,uVar7,6);
      lVar1 = lStack_b0;
      if (((ulong)plVar6 & 1) == 0) {
        return;
      }
      func_0x000107c4d744();
      func_0x000107c61180();
      if (lStack_b0 == 0) {
        uStack_78 = 0;
        lStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x000107c60234(&lStack_80);
        func_0x000107c615e8(lStack_b0);
      }
      uStack_a8 = uStack_78;
      lStack_b0 = lStack_80;
      lStack_98 = lStack_68;
      uStack_a0 = uStack_70;
      if (lStack_68 != 0) {
        uVar7 = 0x112efb210;
        func_0x0001000285a8(0x112efb210,&UNK_10db2b398);
        pppuVar8 = &ppuStack_c0;
        func_0x000107c6147c(pppuVar8,&lStack_b0,puVar13 + 8,uVar7,6);
        ppuVar5 = ppuStack_c0;
        if (((ulong)pppuVar8 & 1) == 0) {
          func_0x000107c61170(lVar1);
          return;
        }
        uVar7 = *(undefined8 *)(lVar16 + _DAT_11306ea08);
        lVar17 = *(long *)(unaff_x20 + 0x20);
        func_0x000107c61434();
        func_0x000107c5b4b0();
        func_0x000107c61180();
        if (lVar17 != 0) {
          uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
          func_0x000107c51d00();
          func_0x000107c61180();
          uVar18 = *(undefined8 *)(lVar16 + lVar14);
          uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_112fb6910);
          lVar10 = 0;
          func_0x000102b9cf08();
          lVar11 = lVar10;
          func_0x000107c610f8();
          lVar14 = _DAT_112efb330;
          func_0x000107c615f0(ppuVar5);
          func_0x000107c61174();
          func_0x000107c61174();
          uVar12 = uVar19;
          FUN_102b9b714();
          *(undefined8 *)(lVar11 + lVar14) = uVar12;
          lVar14 = _DAT_112efb338;
          FUN_102b9b86c();
          *(undefined8 *)(lVar11 + lVar14) = uVar12;
          lVar14 = _DAT_112efb340;
          puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c5a050();
          *(undefined **)(lVar11 + lVar14) = puVar13;
          *(undefined8 *)(lVar11 + _DAT_112efb350) = 0;
          lVar14 = lVar11 + _DAT_112efb368;
          *(undefined8 *)(lVar14 + 8) = 0;
          func_0x000107c61614(lVar14,0);
          *(undefined8 *)(lVar11 + _DAT_112efb348) = uVar7;
          *(long *)(lVar11 + _DAT_112efb358) = lVar17;
          *(undefined8 *)(lVar11 + _DAT_112efb360) = uVar9;
          *(undefined ***)(lVar14 + 8) = &PTR_DAT_1105a79d0;
          func_0x000107c61604();
          *(undefined ***)(lVar11 + _DAT_112efb370) = ppuVar5;
          *(undefined8 *)(lVar11 + _DAT_112efb378) = uVar18;
          *(undefined8 *)(lVar11 + _DAT_112efb380) = uVar19;
          plVar6 = &lStack_d0;
          lStack_d0 = lVar11;
          lStack_c8 = lVar10;
          func_0x000107c61154(plVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
          func_0x000107c3e2c0(*(undefined8 *)(lVar16 + _DAT_11306e9f8));
          func_0x000107c61170(lVar1);
          func_0x000107c615e8(ppuVar5);
          func_0x000107c61170(plVar6);
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b99da8);
        (*pcVar2)();
      }
      func_0x000107c61170(lVar1);
      plVar6 = &lStack_b0;
      goto LAB_102b99b60;
    }
  }
  plVar6 = &lStack_80;
LAB_102b99b60:
  func_0x00010006e7f4(plVar6);
  return;
}



/* Entry: 102b99da8; end: 102b99e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b99da8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306e9f8),param_2,0);
  return 0;
}



/* Entry: 102b99e14; end: 102b99e33;  */

void FUN_102b99e14(void)

{
  FUN_102b999d0();
  return;
}



/* Entry: 102b99e34; end: 102b99e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b99e34(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_11306e9f8),param_2,0);
  return 0;
}



/* Entry: 102b99e88; end: 102b99fbb;  */

void FUN_102b99e88(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b99fbc; end: 102b9a0cb;  */

undefined * FUN_102b99fbc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0f8e60);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c55260(puVar1);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c5a378(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 102b9a0cc; end: 102b9ab07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b9a0cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long unaff_x20;
  
  lVar2 = _DAT_112efb2d0;
  uVar7 = param_1;
  func_0x000102b99ec8();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar7;
  lVar2 = _DAT_112efb2d8;
  puVar6 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f8df0);
  func_0x000107c520f4(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c5a050(puVar6);
  func_0x000107c61170(puVar6);
  puVar8 = puVar6;
  func_0x000107c5a100();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  lVar2 = _DAT_112efb2e0;
  FUN_102b99fbc();
  *(undefined **)(unaff_x20 + lVar2) = puVar8;
  lVar2 = _DAT_112efb2e8;
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar9 = puVar8;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar6);
  func_0x000107c61170(puVar9);
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  lVar2 = _DAT_112efb2f0;
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar9 = puVar8;
  func_0x000107c5af88(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c3fdd0(0x3fd999999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c52b50(puVar6);
  func_0x000107c61170(puVar10);
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efb300);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar6 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112efb2f8) = puVar6;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c();
  }
  FUN_102b9b1b4();
  puVar11 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar11,PTR_s_initWithStyle_reuseIdentifier__1125f1528,param_1,param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3fa94(puVar8);
  func_0x000107c61180();
  func_0x000107c52b50(puVar11);
  func_0x000107c61170(puVar8);
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  lVar2 = _DAT_112efb2d0;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar12);
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  lVar3 = _DAT_112efb2d8;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar12);
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  lVar4 = _DAT_112efb2e0;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar12);
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  lVar5 = _DAT_112efb2e8;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar12);
  puVar6 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c46e04();
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0f8ea0);
  func_0x000107c520f4(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c5a050(puVar6);
  func_0x000107c3d89c(*(undefined8 *)(puVar11 + lVar2));
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar9 + 0x18) = 0x23;
  *(undefined8 *)(puVar9 + 0x10) = 0x11;
  uVar13 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  puVar14 = puVar12;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  uVar7 = uVar13;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar9 + 0x20) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c40290(0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar9 + 0x28) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c40290(0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar9 + 0x30) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  puVar14 = puVar12;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  uVar7 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar9 + 0x38) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar3);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c5ce8c(uVar15);
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c40284(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar9 + 0x40) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar3);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  puVar14 = puVar12;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  uVar7 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar9 + 0x48) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar4);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  puVar14 = puVar12;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  uVar7 = uVar13;
  func_0x000107c40284(0xc038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar9 + 0x50) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar4);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  puVar14 = puVar12;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  uVar7 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar9 + 0x58) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar3);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(puVar11 + lVar4);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c402a8(0xc028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar9 + 0x60) = uVar7;
  puVar16 = puVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar10 = puVar16;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar7);
  *(undefined **)(puVar9 + 0x68) = puVar10;
  puVar16 = puVar6;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar10 = puVar16;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar7);
  *(undefined **)(puVar9 + 0x70) = puVar10;
  puVar16 = puVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c4acb0(uVar7);
  func_0x000107c61180();
  puVar10 = puVar16;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar7);
  *(undefined **)(puVar9 + 0x78) = puVar10;
  puVar10 = puVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar7 = *(undefined8 *)(puVar11 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar16 = puVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  *(undefined **)(puVar9 + 0x80) = puVar16;
  uVar13 = *(undefined8 *)(puVar11 + lVar5);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar12);
  *(undefined8 *)(puVar9 + 0x88) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar5);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  uVar7 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar12);
  *(undefined8 *)(puVar9 + 0x90) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar5);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c40510(puVar11);
  func_0x000107c61180();
  puVar14 = puVar12;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  uVar7 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar9 + 0x98) = uVar7;
  uVar13 = *(undefined8 *)(puVar11 + lVar5);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c40290(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar9 + 0xa0) = uVar7;
  uVar7 = 0;
  FUN_102b9b6d4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar10 = puVar9;
  func_0x000107c5fc48(puVar9,uVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c3d048(puVar8);
  func_0x000107c61170(puVar10);
  func_0x000107c58de8(puVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar11);
  return puVar11;
}



/* Entry: 102b9ab08; end: 102b9ab4f; -[_TtC22SpotlightRecommendTray35SpotlightRecommendTrayTableViewCell initWithStyle:reuseIdentifier:] */

void FUN_102b9ab08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  FUN_102b9a0cc(param_3,param_4,param_2);
  return;
}



/* Entry: 102b9ab50; end: 102b9ab77; -[_TtC22SpotlightRecommendTray35SpotlightRecommendTrayTableViewCell initWithCoder:] */

void FUN_102b9ab50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b9b4f4();
  return;
}



/* Entry: 102b9ab78; end: 102b9afb3;  */

/* WARNING: Possible PIC construction at 0x000102b9ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ac7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9aca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ad2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ad64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ad9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9adbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9add4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9adec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9af34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9af44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9af54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9afa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9af58) */
/* WARNING: Removing unreachable block (ram,0x000102b9af48) */
/* WARNING: Removing unreachable block (ram,0x000102b9af38) */
/* WARNING: Removing unreachable block (ram,0x000102b9adf0) */
/* WARNING: Removing unreachable block (ram,0x000102b9afa4) */
/* WARNING: Removing unreachable block (ram,0x000102b9ae20) */
/* WARNING: Removing unreachable block (ram,0x000102b9add8) */
/* WARNING: Removing unreachable block (ram,0x000102b9adc0) */
/* WARNING: Removing unreachable block (ram,0x000102b9ada0) */
/* WARNING: Removing unreachable block (ram,0x000102b9ad68) */
/* WARNING: Removing unreachable block (ram,0x000102b9ad30) */
/* WARNING: Removing unreachable block (ram,0x000102b9aca4) */
/* WARNING: Removing unreachable block (ram,0x000102b9acbc) */
/* WARNING: Removing unreachable block (ram,0x000102b9acc4) */
/* WARNING: Removing unreachable block (ram,0x000102b9af80) */
/* WARNING: Removing unreachable block (ram,0x000102b9accc) */
/* WARNING: Removing unreachable block (ram,0x000102b9ac80) */
/* WARNING: Removing unreachable block (ram,0x000102b9ac44) */
/* WARNING: Removing unreachable block (ram,0x000102b9ac60) */
/* WARNING: Removing unreachable block (ram,0x000102b9ac4c) */
/* WARNING: Removing unreachable block (ram,0x000102b9ac64) */
/* WARNING: Removing unreachable block (ram,0x000102b9afac) */
/* WARNING: Removing unreachable block (ram,0x000102b9af84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9ab78(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar2 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar4 = param_1[1];
  if (uVar4 == 0) {
LAB_102b9ac08:
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efb2d8);
    if (param_1[3] == 0) {
      uVar3 = 0;
      goto LAB_102b9ac30;
    }
    uVar3 = param_1[2];
  }
  else {
    uVar3 = *param_1;
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_102b9ac08;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efb2d8);
  }
  func_0x000107c5fadc(uVar3);
LAB_102b9ac30:
  func_0x000107c59c6c(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102b9afb4; end: 102b9b0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9afb4(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_4 + 0x10,puVar2,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 == 0) {
    return;
  }
  if (param_1 == 0) goto LAB_102b9b0d8;
  if (param_2 == 0) {
    puVar4 = *(undefined1 **)(param_4 + _DAT_112efb300 + 8);
    func_0x000107c61174(param_1);
LAB_102b9b09c:
    if (puVar4 == (undefined1 *)0x0) {
LAB_102b9b0b8:
      func_0x000107c4d664(*(undefined8 *)(param_4 + _DAT_112efb2f8));
    }
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c3e544();
    func_0x000107c61180();
    uVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    puVar4 = (undefined1 *)((ulong *)(param_4 + _DAT_112efb300))[1];
    if (puVar2 == (undefined1 *)0x0) goto LAB_102b9b09c;
    if (puVar4 != (undefined1 *)0x0) {
      uVar3 = *(ulong *)(param_4 + _DAT_112efb300);
      if (uVar1 == uVar3 && puVar4 == puVar2) {
        func_0x000107c6142c(puVar2);
      }
      else {
        func_0x000107c605b8(uVar1,puVar2,uVar3,puVar4,0);
        func_0x000107c6142c(puVar2);
        if ((uVar1 & 1) == 0) goto LAB_102b9b0cc;
      }
      goto LAB_102b9b0b8;
    }
    func_0x000107c6142c(puVar2);
  }
LAB_102b9b0cc:
  func_0x000107c61170(param_4);
  param_4 = param_1;
LAB_102b9b0d8:
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 102b9b0f8; end: 102b9b127;  */

void FUN_102b9b0f8(void)

{
  FUN_102b9b1b4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b9b128; end: 102b9b1b3; -[_TtC22SpotlightRecommendTray35SpotlightRecommendTrayTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9b128(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efb2d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efb2d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efb2e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efb2e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efb2f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efb2f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112efb300 + 8))
  ;
  return;
}



/* Entry: 102b9b1b4; end: 102b9b1d3;  */

void FUN_102b9b1b4(void)

{
  func_0x000107c61168(&PTR_PTR_112891c28);
  return;
}



/* Entry: 102b9b1d4; end: 102b9b23f;  */

long FUN_102b9b1d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102b9b240; end: 102b9b2bb;  */

undefined8 * FUN_102b9b240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 102b9b2bc; end: 102b9b387;  */

undefined8 * FUN_102b9b2bc(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102b9b388; end: 102b9b3fb;  */

undefined8 * FUN_102b9b388(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102b9b3fc; end: 102b9b4f3;  */

int FUN_102b9b3fc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102b9b4f4; end: 102b9b6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9b4f4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar2 = _DAT_112efb2d0;
  func_0x000102b99ec8();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112efb2d8;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61174();
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f8df0);
  func_0x000107c520f4(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c5a050(puVar4);
  func_0x000107c61170(puVar4);
  puVar6 = puVar4;
  func_0x000107c5a100();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112efb2e0;
  FUN_102b99fbc();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  lVar2 = _DAT_112efb2e8;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar7 = puVar6;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar7);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112efb2f0;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c3fdd0(0x3fd999999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar7);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efb300);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SpotlightRecommendTray/SpotlightRecommendTrayTableViewCell.swift",0x40,2,0x7d
                      ,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b9b6d4);
  (*pcVar3)();
}



/* Entry: 102b9b6d4; end: 102b9b713;  */

void FUN_102b9b6d4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b9b714; end: 102b9b86b;  */

undefined * FUN_102b9b714(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x000107c469d8(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c58f5c(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0f8f90);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c57f34(0x4051000000000000,puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c5928c();
  func_0x000107c59284(puVar1);
  func_0x000107c61170(puVar1);
  FUN_102b9b1b4(0);
  func_0x000107c614e8();
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0f8ec0);
  func_0x000107c4fbd4(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 102b9b86c; end: 102b9b973;  */

undefined * FUN_102b9b86c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0f8f70);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c5a050(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c59c74();
  func_0x000107c5a100(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c56ba8(puVar1);
  func_0x000108f596bc();
  func_0x000107c61180();
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 102b9b974; end: 102b9b99b; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController initWithCoder:] */

void FUN_102b9b974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102b9d488();
  return;
}



/* Entry: 102b9b99c; end: 102b9c423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9b99c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar8 = &puStack_a0;
  func_0x000102b9cf08();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewDidLoad_112684cd8);
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c174);
    (*pcVar1)();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(lVar7);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(puVar2);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efb330);
  func_0x000107c53fcc(uVar9);
  func_0x000107c53e08(uVar9);
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c178);
    (*pcVar1)();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efb338);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c17c);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c180);
    (*pcVar1)();
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112efb340);
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 0x19;
  *(undefined8 *)(lVar7 + 0x10) = 0xc;
  uVar3 = uVar10;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c184);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar6 = uVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar7 + 0x20) = uVar6;
  uVar3 = uVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c188);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar6 = uVar3;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  uVar3 = uVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c18c);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar6 = uVar3;
  func_0x000107c40284(0xc028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  uVar3 = uVar10;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c40290(0x4043000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  *(undefined8 *)(lVar7 + 0x38) = uVar6;
  uVar3 = uVar11;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c40290(0x4047000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  uVar3 = uVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar7 + 0x48) = uVar6;
    uVar3 = uVar11;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c194);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar7 + 0x50) = uVar6;
    uVar3 = uVar11;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c198);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar7 + 0x58) = uVar6;
    uVar3 = uVar9;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c19c);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar7 + 0x60) = uVar6;
    uVar3 = uVar9;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar4;
      func_0x000107c5ce8c(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      uVar6 = uVar3;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar5);
      *(undefined8 *)(lVar7 + 0x68) = uVar6;
      uVar3 = uVar9;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c3ec1c(uVar10);
      func_0x000107c61180();
      uVar6 = uVar3;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar7 + 0x70) = uVar6;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c5cbe4(uVar11);
      func_0x000107c61180();
      uVar10 = uVar9;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar11);
      *(undefined8 *)(lVar7 + 0x78) = uVar10;
      uVar9 = 0;
      FUN_102b9d5b8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar7;
      func_0x000107c5fc48(lVar7,uVar9);
      func_0x000107c61574(lVar7);
      func_0x000107c3d048(puVar2);
      func_0x000107c61170(lVar4);
      lVar7 = *(long *)(unaff_x20 + _DAT_112efb358);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 != 0) {
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efb348);
        func_0x000107c5fc48(uVar9,PTR___sSSN_11034da80);
        uVar10 = 0;
        FUN_102b9d5b8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar2 = &UNK_1105a7ae0;
        func_0x000107c613fc(&UNK_1105a7ae0,0x18,7);
        func_0x000107c61614(puVar2 + 0x10);
        pcStack_80 = FUN_102b9d594;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100f6151c;
        puStack_88 = &UNK_1105a7af8;
        puStack_78 = puVar2;
        func_0x000107c60bc4(&puStack_a0);
        func_0x000107c61574(puStack_78);
        func_0x000107c5b4f8(lVar7);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar10);
      }
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      func_0x000107c41570();
      func_0x000107c61180();
      func_0x000107c3d7bc();
      func_0x000107c61170(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c1a0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c190);
  (*pcVar1)();
}



/* Entry: 102b9c424; end: 102b9c613;  */

void FUN_102b9c424(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  lVar6 = *param_2;
  lVar7 = lVar6;
  func_0x000107c42120();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar5 = 0;
    lVar7 = 0;
    lVar2 = param_3;
  }
  else {
    lVar5 = lVar7;
    func_0x000107c5faec();
    lVar2 = param_3;
    func_0x000107c61170(lVar7);
    lVar7 = param_3;
  }
  lVar3 = lVar6;
  func_0x000107c5db08();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar8 = 0;
    lStack_58 = 0;
    lVar4 = lVar2;
  }
  else {
    lVar8 = lVar3;
    func_0x000107c5faec();
    lVar4 = lVar2;
    func_0x000107c61170(lVar3);
    lStack_58 = lVar2;
  }
  lVar2 = lVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lStack_70 = 0;
    lStack_68 = 0;
    lVar3 = lVar4;
  }
  else {
    lStack_68 = lVar2;
    func_0x000107c5faec();
    lVar3 = lVar4;
    func_0x000107c61170(lVar2);
    lStack_70 = lVar4;
  }
  lVar2 = lVar6;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  lVar4 = lVar3;
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar4 = lVar3;
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      lVar4 = lVar3;
      func_0x000107c61170(lVar1);
      goto LAB_102b9c548;
    }
  }
  lVar2 = 0;
  lVar3 = 0;
LAB_102b9c548:
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar6 = 0;
    lVar4 = 0;
  }
  else {
    lVar1 = lVar6;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar1 == 0) {
      lVar6 = 0;
      lVar4 = 0;
    }
    else {
      lVar6 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
  }
  *param_1 = lVar5;
  param_1[1] = lVar7;
  param_1[2] = lVar8;
  param_1[3] = lStack_58;
  param_1[4] = lStack_68;
  param_1[5] = lStack_70;
  param_1[6] = lVar2;
  param_1[7] = lVar3;
  param_1[8] = lVar6;
  param_1[9] = lVar4;
  return;
}



/* Entry: 102b9c614; end: 102b9c69f; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController viewDidLoad] */

void FUN_102b9c614(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b9b99c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b9c6a0; end: 102b9c71b; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController dealloc] */

void FUN_102b9c6a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168();
  func_0x000107c61174();
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
  func_0x000107c61170();
  func_0x000102b9cf08();
  uStack_30 = param_1;
  puStack_28 = puVar1;
  func_0x000107c61154(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b9c71c; end: 102b9c7e3; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b9c738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9c758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9c788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9c7c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9c78c) */
/* WARNING: Removing unreachable block (ram,0x000102b9c75c) */
/* WARNING: Removing unreachable block (ram,0x000102b9c73c) */
/* WARNING: Removing unreachable block (ram,0x000102b9c7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9c71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb330));
  return;
}



/* Entry: 102b9c7e4; end: 102b9c867; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController dismissViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9c7e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_112efb368;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + _DAT_11306e9f8);
    func_0x000107c61174(param_1);
    func_0x000107c41864(uVar2,param_2,0);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102b9c868; end: 102b9cedb;  */

/* WARNING: Possible PIC construction at 0x000102b9c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9c99c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9c9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ca04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ca30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ca4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ca84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9cae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9caf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9cb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ccd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9cce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ce8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ce9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9ceac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9cea0) */
/* WARNING: Removing unreachable block (ram,0x000102b9ce90) */
/* WARNING: Removing unreachable block (ram,0x000102b9ce74) */
/* WARNING: Removing unreachable block (ram,0x000102b9cce4) */
/* WARNING: Removing unreachable block (ram,0x000102b9ced8) */
/* WARNING: Removing unreachable block (ram,0x000102b9cd74) */
/* WARNING: Removing unreachable block (ram,0x000102b9ce78) */
/* WARNING: Removing unreachable block (ram,0x000102b9ce80) */
/* WARNING: Removing unreachable block (ram,0x000102b9ce0c) */
/* WARNING: Removing unreachable block (ram,0x000102b9ccd4) */
/* WARNING: Removing unreachable block (ram,0x000102b9ccbc) */
/* WARNING: Removing unreachable block (ram,0x000102b9cb60) */
/* WARNING: Removing unreachable block (ram,0x000102b9caf4) */
/* WARNING: Removing unreachable block (ram,0x000102b9cb64) */
/* WARNING: Removing unreachable block (ram,0x000102b9cb68) */
/* WARNING: Removing unreachable block (ram,0x000102b9cc40) */
/* WARNING: Removing unreachable block (ram,0x000102b9cbf0) */
/* WARNING: Removing unreachable block (ram,0x000102b9cc60) */
/* WARNING: Removing unreachable block (ram,0x000102b9cb38) */
/* WARNING: Removing unreachable block (ram,0x000102b9cae4) */
/* WARNING: Removing unreachable block (ram,0x000102b9ca88) */
/* WARNING: Removing unreachable block (ram,0x000102b9cab0) */
/* WARNING: Removing unreachable block (ram,0x000102b9ca90) */
/* WARNING: Removing unreachable block (ram,0x000102b9cab8) */
/* WARNING: Removing unreachable block (ram,0x000102b9ca50) */
/* WARNING: Removing unreachable block (ram,0x000102b9ca34) */
/* WARNING: Removing unreachable block (ram,0x000102b9ca54) */
/* WARNING: Removing unreachable block (ram,0x000102b9ca5c) */
/* WARNING: Removing unreachable block (ram,0x000102b9ca38) */
/* WARNING: Removing unreachable block (ram,0x000102b9ca08) */
/* WARNING: Removing unreachable block (ram,0x000102b9c9b0) */
/* WARNING: Removing unreachable block (ram,0x000102b9c9a0) */
/* WARNING: Removing unreachable block (ram,0x000102b9c914) */
/* WARNING: Removing unreachable block (ram,0x000102b9c964) */
/* WARNING: Removing unreachable block (ram,0x000102b9c91c) */
/* WARNING: Removing unreachable block (ram,0x000102b9c970) */
/* WARNING: Removing unreachable block (ram,0x000102b9c930) */
/* WARNING: Removing unreachable block (ram,0x000102b9c974) */
/* WARNING: Removing unreachable block (ram,0x000102b9ceb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9c868(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(unaff_x20 + _DAT_112efb378);
    lVar1 = lVar5;
    func_0x000107c4dee8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4dec4();
      func_0x000107c61180();
      if (lVar5 != 0) {
        puVar2 = PTR_PTR_1126b23a0;
        func_0x000107c61168(PTR_PTR_1126b23a0);
        func_0x000107c5fadc(lVar4,lVar3);
        func_0x000107c5d994(puVar2);
        func_0x000107c61180();
        lVar1 = lVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102b9cedc; end: 102b9cf27; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController initWithNibName:bundle:] */

void FUN_102b9cedc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightRecommendTray.SpotlightRecommendTrayViewController",0x3b,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9cf08);
  (*pcVar1)();
}



/* Entry: 102b9cf28; end: 102b9cf47; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b9cf28(long param_1)

{
  if (*(long *)(param_1 + _DAT_112efb350) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + _DAT_112efb350) + 0x10);
  }
  return 0;
}



/* Entry: 102b9cf48; end: 102b9d087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b9cf48(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_e0 [80];
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
  
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0f8ec0);
  uVar3 = uVar2;
  func_0x000107c5efd4();
  func_0x000107c417dc(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  FUN_102b9b1b4(0);
  func_0x000107c61484(param_1,uVar3,0,0,0);
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112efb350);
  if (uVar6 != 0) {
    uVar4 = uVar6;
    func_0x000107c61434();
    func_0x000107c5efe4();
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9d084);
      (*pcVar1)();
    }
    if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9d088);
      (*pcVar1)();
    }
    lVar5 = uVar6 + uVar4 * 0x50;
    uStack_88 = *(undefined8 *)(lVar5 + 0x28);
    uStack_90 = *(undefined8 *)(lVar5 + 0x20);
    uStack_78 = *(undefined8 *)(lVar5 + 0x38);
    uStack_80 = *(undefined8 *)(lVar5 + 0x30);
    uStack_68 = *(undefined8 *)(lVar5 + 0x48);
    uStack_70 = *(undefined8 *)(lVar5 + 0x40);
    uStack_58 = *(undefined8 *)(lVar5 + 0x58);
    uStack_60 = *(undefined8 *)(lVar5 + 0x50);
    uStack_48 = *(undefined8 *)(lVar5 + 0x68);
    uStack_50 = *(undefined8 *)(lVar5 + 0x60);
    FUN_102b9d2e0(&uStack_90,auStack_e0);
    func_0x000107c6142c(uVar6);
    FUN_102b9ab78(&uStack_90,*(undefined8 *)(unaff_x20 + _DAT_112efb360));
    func_0x000102b9d31c(&uStack_90);
  }
  return param_1;
}



/* Entry: 102b9d088; end: 102b9d14f; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController tableView:cellForRowAtIndexPath:] */

void FUN_102b9d088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_102b9cf48(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102b9d150; end: 102b9d21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9d150(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_d0 [80];
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
  
  uVar2 = param_1;
  func_0x000107c5efd4();
  func_0x000107c41818(param_1);
  func_0x000107c61170(uVar2);
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112efb350);
  if (uVar5 != 0) {
    uVar3 = uVar5;
    func_0x000107c61434();
    func_0x000107c5efe4();
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9d21c);
      (*pcVar1)();
    }
    if (*(ulong *)(uVar5 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9d220);
      (*pcVar1)();
    }
    lVar4 = uVar5 + uVar3 * 0x50;
    uStack_78 = *(undefined8 *)(lVar4 + 0x28);
    uStack_80 = *(undefined8 *)(lVar4 + 0x20);
    uStack_68 = *(undefined8 *)(lVar4 + 0x38);
    uStack_70 = *(undefined8 *)(lVar4 + 0x30);
    uStack_58 = *(undefined8 *)(lVar4 + 0x48);
    uStack_60 = *(undefined8 *)(lVar4 + 0x40);
    uStack_48 = *(undefined8 *)(lVar4 + 0x58);
    uStack_50 = *(undefined8 *)(lVar4 + 0x50);
    uStack_38 = *(undefined8 *)(lVar4 + 0x68);
    uStack_40 = *(undefined8 *)(lVar4 + 0x60);
    FUN_102b9d2e0(&uStack_80,auStack_d0);
    func_0x000107c6142c(uVar5);
    FUN_102b9c868(&uStack_80);
    func_0x000102b9d31c(&uStack_80);
  }
  return;
}



/* Entry: 102b9d220; end: 102b9d2df; -[_TtC22SpotlightRecommendTray36SpotlightRecommendTrayViewController tableView:didSelectRowAtIndexPath:] */

void FUN_102b9d220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b9d150(param_3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 102b9d2e0; end: 102b9d34f;  */

undefined8 FUN_102b9d2e0(undefined8 param_1,undefined8 param_2)

{
  FUN_102b9b240(param_2,param_1);
  return param_2;
}



/* Entry: 102b9d350; end: 102b9d36b;  */

void FUN_102b9d350(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102b9d36c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102b9d36c; end: 102b9d553;  */

undefined * FUN_102b9d36c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b9d488);
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
    puVar3 = (undefined *)0x112efb3b0;
    func_0x0001000285a8(0x112efb3b0,&UNK_10db2b4f8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1105a7a58);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102b9d554; end: 102b9d593;  */

undefined8 FUN_102b9d554(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102b9d594; end: 102b9d5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9d594(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_d8,0,0);
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar4 == 0) {
      return;
    }
    lVar3 = lVar4 + _DAT_112efb368;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + _DAT_11306e9f8);
      func_0x000107c615f0(uVar5);
      func_0x000107c41864();
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(uVar5);
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = param_1;
        if (-1 < (long)param_1) {
          uVar7 = uVar6;
        }
        func_0x000107c60480();
      }
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar7 != 0) {
        puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_102b9d350(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c424);
          (*pcVar1)();
        }
        uVar8 = 0;
        do {
          puVar9 = puStack_88;
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(long *)(uVar6 + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9c404);
              (*pcVar1)();
            }
            uVar2 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar2 = uVar8;
            func_0x00010103193c(uVar8,param_1);
          }
          uStack_e0 = uVar2;
          FUN_102b9c424(&uStack_d8,&uStack_e0);
          func_0x000107c61170(uVar2);
          uVar2 = *(ulong *)(puVar9 + 0x10);
          puStack_88 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
            FUN_102b9d350(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
          }
          uVar8 = uVar8 + 1;
          *(ulong *)(puStack_88 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x28) = uStack_d0;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x20) = uStack_d8;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x58) = uStack_a0;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x50) = uStack_a8;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x68) = uStack_90;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x60) = uStack_98;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x38) = uStack_c0;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x30) = uStack_c8;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x48) = uStack_b0;
          *(undefined8 *)(puStack_88 + uVar2 * 0x50 + 0x40) = uStack_b8;
          puVar9 = puStack_88;
        } while (uVar7 != uVar8);
      }
      uVar5 = *(undefined8 *)(lVar4 + _DAT_112efb350);
      *(undefined **)(lVar4 + _DAT_112efb350) = puVar9;
      func_0x000107c61170();
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_d8,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      return;
    }
    lVar4 = *(long *)(lVar3 + _DAT_112efb330);
    func_0x000107c61174(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c4fd7c(lVar4);
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102b9d5b8; end: 102b9d61b;  */

void FUN_102b9d5b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b9d61c; end: 102b9d687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9d61c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102b9da10();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efb3c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b9d688; end: 102b9d6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9d688(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efb3c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b9d6f4; end: 102b9d753; -[_TtC50ContextHeroContextMenuScopedFactoryServiceProvider38SCContextHeroContextMenuScopedServices init] */

void FUN_102b9d6f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextHeroContextMenuScopedFactoryServiceProvider.SCContextHeroContextMenuScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9d720);
  (*pcVar1)();
}



/* Entry: 102b9d754; end: 102b9d763; -[_TtC50ContextHeroContextMenuScopedFactoryServiceProvider38SCContextHeroContextMenuScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9d754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efb3c0));
  return;
}


