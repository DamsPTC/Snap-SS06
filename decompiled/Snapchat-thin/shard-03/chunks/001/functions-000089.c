/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024d1a94; end: 1024d1ab3;  */

void FUN_1024d1a94(void)

{
  func_0x000107c61168(&PTR_PTR_1128481e0);
  return;
}



/* Entry: 1024d1ab4; end: 1024d1b83;  */

undefined8 FUN_1024d1ab4(void)

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
  
  func_0x000107c61428(0x112ea0af8,&uStack_40,0x20,0);
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
    FUN_1024d1b84();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1024d1b84; end: 1024d1ba3;  */

void FUN_1024d1b84(void)

{
  func_0x000107c61168(&PTR_PTR_1128482a8);
  return;
}



/* Entry: 1024d1ba4; end: 1024d1c0f;  */

void FUN_1024d1ba4(void)

{
  func_0x0001000285a8(0x112ea0b00,&UNK_10dab2968);
  func_0x0001000823a8(0x1024d1be4,0);
  return;
}



/* Entry: 1024d1c10; end: 1024d1c4b; -[_TtC31SpotlightWidgetScopeGraphBridge39SpotlightWidgetScopeGraphBridgeServices init] */

void FUN_1024d1c10(undefined8 param_1)

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



/* Entry: 1024d1c4c; end: 1024d1c7f;  */

void FUN_1024d1c4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024d1c80; end: 1024d1cb3; -[SpotlightWidgetScope spotlightWidgetScopeGraphBridgeServices] */

void FUN_1024d1c80(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024d1ab4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024d1cb4; end: 1024d1d3f; -[SpotlightWidgetScope setSpotlightWidgetScopeGraphBridgeServices:] */

void FUN_1024d1cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ea0af8,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1024d1d40; end: 1024d1d47;  */

undefined8 FUN_1024d1d40(void)

{
  return 0x1b;
}



/* Entry: 1024d1d48; end: 1024d1ebf;  */

void FUN_1024d1d48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110515ef8;
  func_0x000107c613fc(&UNK_110515ef8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024d1ec0,puVar1);
  return;
}



/* Entry: 1024d1ec0; end: 1024d1ec7;  */

void FUN_1024d1ec0(undefined8 *param_1)

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
  func_0x000107c61428(0x112ea0af8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ea0af8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110515f90;
  func_0x000107c613fc(&UNK_110515f90,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024d1f74;
  func_0x00010058fa64(0x1024d1f74,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024d1ec8; end: 1024d1f23;  */

void FUN_1024d1ec8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ea0af8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ea0af8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1024d1f24; end: 1024d1f7b;  */

undefined ** FUN_1024d1f24(void)

{
  return &PTR_DAT_113067150;
}



/* Entry: 1024d1f7c; end: 1024d1fc3; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d1f7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea0b58;
  func_0x000107c61428(param_1 + _DAT_112ea0b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d1fc4; end: 1024d201b; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d1fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea0b58;
  func_0x000107c61428(param_1 + _DAT_112ea0b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024d201c; end: 1024d2063; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint spotlightWidgetScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d201c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea0b60;
  func_0x000107c61428(param_1 + _DAT_112ea0b60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024d2064; end: 1024d20c7; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint setSpotlightWidgetScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d2064(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea0b60;
  func_0x000107c61428(param_1 + _DAT_112ea0b60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024d20c8; end: 1024d21fb;  */

/* WARNING: Possible PIC construction at 0x0001024d2180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d219c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d21b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d2184) */
/* WARNING: Removing unreachable block (ram,0x0001024d21a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d20c8(void)

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
  func_0x000107c5b9ac();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1024d183c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1024d1ab4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d21fc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ea0a88) = lVar5;
    *(long *)(lVar4 + _DAT_112ea0a90) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1024d21fc; end: 1024d2223; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1024d21fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024d20c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024d2224; end: 1024d2267; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint end] */

void FUN_1024d2224(undefined8 param_1)

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



/* Entry: 1024d2268; end: 1024d23ff;  */

void FUN_1024d2268(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0f5a120)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f0a5ee0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpotlightWidgetScopeGraphBridge/SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d2400);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59758();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024d2400; end: 1024d24ab; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1024d2400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024d2268(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024d24ac; end: 1024d2517; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d24ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea0b58,0);
  *(undefined8 *)(param_1 + _DAT_112ea0b60) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea0b68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d2518; end: 1024d254b;  */

void FUN_1024d2518(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024d254c; end: 1024d2593; -[SCSpotlightWidgetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024d2578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d257c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d254c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea0b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0b60));
  return;
}



/* Entry: 1024d2594; end: 1024d25b3;  */

void FUN_1024d2594(void)

{
  func_0x000107c61168(&PTR_PTR_112848358);
  return;
}



/* Entry: 1024d25b4; end: 1024d25fb; -[SCSpotlightWidgetScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d25b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea0b98;
  func_0x000107c61428(param_1 + _DAT_112ea0b98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d25fc; end: 1024d2653; -[SCSpotlightWidgetScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d25fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea0b98;
  func_0x000107c61428(param_1 + _DAT_112ea0b98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024d2654; end: 1024d272b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d2654(undefined8 param_1,long param_2)

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
    FUN_1024d1a94();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ea0ac0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024d272c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ea0ac8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea0ba0);
    *(long **)(unaff_x20 + _DAT_112ea0ba0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1024d272c; end: 1024d2753; -[SCSpotlightWidgetScopedServicesSaberEntryPoint begin] */

void FUN_1024d272c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024d2654();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024d2754; end: 1024d28cb;  */

/* WARNING: Possible PIC construction at 0x0001024d27bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d2854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d27c0) */
/* WARNING: Removing unreachable block (ram,0x0001024d2858) */
/* WARNING: Removing unreachable block (ram,0x0001024d2870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d2754(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea0ba0);
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



/* Entry: 1024d28cc; end: 1024d28d3;  */

void FUN_1024d28cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024d28d4; end: 1024d2907; -[SCSpotlightWidgetScopedServicesSaberEntryPoint end] */

void FUN_1024d28d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024d2754();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024d2908; end: 1024d2a27;  */

void FUN_1024d2908(long param_1,long param_2,long param_3)

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
                        "SpotlightWidgetScopeGraphBridge/SCSpotlightWidgetScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d2a28);
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



/* Entry: 1024d2a28; end: 1024d2ad3; -[SCSpotlightWidgetScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1024d2a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024d2908(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024d2ad4; end: 1024d2b33; -[SCSpotlightWidgetScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d2ad4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea0b98,0);
  *(undefined8 *)(param_1 + _DAT_112ea0ba0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d2b34; end: 1024d2b67;  */

void FUN_1024d2b34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024d2b68; end: 1024d2b9f; -[SCSpotlightWidgetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d2b68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea0b98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0ba0));
  return;
}



/* Entry: 1024d2ba0; end: 1024d2bbf;  */

void FUN_1024d2ba0(void)

{
  func_0x000107c61168(&PTR_PTR_112848420);
  return;
}



/* Entry: 1024d2bc0; end: 1024d2ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024d2bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea0bd0;
  func_0x000107c61614(unaff_x20 + _DAT_112ea0bd0,0);
  lVar1 = unaff_x20 + _DAT_112ea0bd8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(lVar1 + 8) = param_3;
  func_0x000107c61604(lVar1,param_2);
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1024d2ee8; end: 1024d2f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d2ee8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ea0bd0;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c3da08(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1024d2f60; end: 1024d2fbb; -[_TtC15SpotlightWidget28SpotlightPreviewLauncherImpl launchSpotlightPreviewWithSnapId:] */

void FUN_1024d2f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x0001024d2c88(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024d2fbc; end: 1024d301b; -[_TtC15SpotlightWidget28SpotlightPreviewLauncherImpl init] */

void FUN_1024d2fbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightWidget.SpotlightPreviewLauncherImpl",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d2fe8);
  (*pcVar1)();
}



/* Entry: 1024d301c; end: 1024d3053; -[_TtC15SpotlightWidget28SpotlightPreviewLauncherImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024d3038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d303c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024d301c(long param_1)

{
  param_1 = param_1 + _DAT_112ea0bd0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024d3054; end: 1024d3177;  */

undefined * FUN_1024d3054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d5ca0;
  func_0x000107c610f8(PTR_PTR_1126d5ca0);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c593e4(puVar1);
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126c9298;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59850();
  puVar3 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    param_2 = 0xc000000000000000;
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
  }
  puVar3 = puVar4;
  func_0x000107c5ee20(puVar4,param_2);
  func_0x00010006c090(puVar4,param_2);
  func_0x000107c54534(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c5388c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 1024d3178; end: 1024d319b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3178(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ea0bd0;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c3da08(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1024d319c; end: 1024d31bb;  */

void FUN_1024d319c(void)

{
  func_0x000107c61168(&PTR_PTR_1128484e0);
  return;
}



/* Entry: 1024d31bc; end: 1024d321f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024d31bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea0c08;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea0c08);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1024d3220();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1024d3220; end: 1024d33a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024d3220(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  plVar8 = &lStack_70;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112ea0c18);
  func_0x000107c5cb24(uVar5);
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112ea0c20);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea0c38);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112ea0c38))[1];
  lVar6 = 0;
  FUN_1024d319c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar4 = _DAT_112ea0bd0;
  func_0x000107c61614(lVar7 + _DAT_112ea0bd0,0);
  lVar1 = lVar7 + _DAT_112ea0bd8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61604(lVar7 + lVar4,uVar11);
  *(undefined8 *)(lVar1 + 8) = uVar3;
  func_0x000107c61604(lVar1,uVar2);
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  puVar9 = PTR_PTR_1126aa940;
  func_0x000107c610f8(PTR_PTR_1126aa940);
  func_0x000107c47fcc();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(plVar8);
  puVar10 = PTR_PTR_1126aa948;
  func_0x000107c610f8(PTR_PTR_1126aa948);
  func_0x000107c49520();
  func_0x000107c5a050();
  func_0x000107c61170(puVar9);
  return puVar10;
}



/* Entry: 1024d33a4; end: 1024d3473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d33a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0c08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea0c10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea0c18) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea0c20) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea0c28) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea0c30) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea0c38);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x000107c61154(auStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 1024d3474; end: 1024d34d7; -[_TtC15SpotlightWidget24SpotlightWidgetContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3474(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea0c08) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SpotlightWidget/SpotlightWidgetContainer.swift",0x2e,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d34d8);
  (*pcVar1)();
}



/* Entry: 1024d34d8; end: 1024d37fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d34d8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d37e8);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c562fc(lVar3);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d37ec);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_1024d31bc();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  lVar2 = _DAT_112ea0c08;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea0c08);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d37f0);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar7 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d37f8);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar7 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar3 + 0x30) = uVar7;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar2 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar7 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar2);
      *(undefined8 *)(lVar3 + 0x38) = uVar7;
      uVar4 = 0;
      func_0x000100847984(0);
      lVar2 = lVar3;
      func_0x000107c5fc48(lVar3,uVar4);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar8);
      func_0x000107c61170(lVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d37fc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d37f4);
  (*pcVar1)();
}



/* Entry: 1024d37fc; end: 1024d3823; -[_TtC15SpotlightWidget24SpotlightWidgetContainer viewDidLoad] */

void FUN_1024d37fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024d34d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024d3824; end: 1024d3883; -[_TtC15SpotlightWidget24SpotlightWidgetContainer initWithNibName:bundle:] */

void FUN_1024d3824(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightWidget.SpotlightWidgetContainer",0x28,"init(nibName:bundle:)",0x15,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d3850);
  (*pcVar1)();
}



/* Entry: 1024d3884; end: 1024d390b; -[_TtC15SpotlightWidget24SpotlightWidgetContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024d38b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d38b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3884(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea0c10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0c18));
  return;
}



/* Entry: 1024d390c; end: 1024d392b;  */

void FUN_1024d390c(void)

{
  func_0x000107c61168(&PTR_PTR_1128485a8);
  return;
}



/* Entry: 1024d392c; end: 1024d396f;  */

void FUN_1024d392c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1024d3970; end: 1024d397f;  */

void FUN_1024d3970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1024d3980; end: 1024d3bc3;  */

/* WARNING: Possible PIC construction at 0x0001024d3a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d3b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d3b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d3b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d3b6c) */
/* WARNING: Removing unreachable block (ram,0x0001024d3b5c) */
/* WARNING: Removing unreachable block (ram,0x0001024d3a10) */
/* WARNING: Removing unreachable block (ram,0x0001024d3a14) */
/* WARNING: Removing unreachable block (ram,0x0001024d3b98) */
/* WARNING: Removing unreachable block (ram,0x0001024d3a44) */
/* WARNING: Removing unreachable block (ram,0x0001024d3ba0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3980(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c509b4(lVar3);
    func_0x000107c61180();
    lVar1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1024d3bc4; end: 1024d3bf7;  */

void FUN_1024d3bc4(void)

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



/* Entry: 1024d3bf8; end: 1024d3c17;  */

void FUN_1024d3bf8(void)

{
  FUN_1024d3980();
  return;
}



/* Entry: 1024d3c18; end: 1024d3c1f;  */

undefined8 FUN_1024d3c18(void)

{
  return 0;
}



/* Entry: 1024d3c20; end: 1024d3c3f;  */

void FUN_1024d3c20(void)

{
  func_0x000107c61168(&PTR_PTR_112ea0ca8);
  return;
}



/* Entry: 1024d3c40; end: 1024d3c8b;  */

void FUN_1024d3c40(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024d3d64,param_1);
  return;
}



/* Entry: 1024d3c8c; end: 1024d3d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3c8c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  FUN_1024d3f4c();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112feb6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar4 = 0;
  FUN_1024d42d8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ea0d48) = uVar3;
  plVar6 = &lStack_58;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *(long **)(lVar2 + _DAT_112ea0d18) = plVar6;
  plVar6 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = lVar1;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x000107c61574(param_2);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 1024d3d64; end: 1024d3d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3d64(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [16];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_1024d3f4c();
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_112feb6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar2 = 0;
  FUN_1024d42d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea0d48) = uVar1;
  plVar4 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112ea0d18) = plVar4;
  puVar5 = auStack_68;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61574();
  *param_1 = (long)puVar5;
  return;
}



/* Entry: 1024d3d6c; end: 1024d3e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024d3d6c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c610f8();
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_112feb6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar2 = 0;
  FUN_1024d42d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea0d48) = uVar1;
  plVar4 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112ea0d18) = plVar4;
  puVar5 = auStack_68;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar5;
}



/* Entry: 1024d3e38; end: 1024d3ec7; -[_TtC32SCLensSpotlightSharePageLauncher36LensSpotlightSharePageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3e38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ea0d18);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1024d3ec8; end: 1024d3ecb; -[_TtC32SCLensSpotlightSharePageLauncher36LensSpotlightSharePageLauncherPlugin setNativePayloadHandlers:] */

void FUN_1024d3ec8(void)

{
  return;
}



/* Entry: 1024d3ecc; end: 1024d3f2b; -[_TtC32SCLensSpotlightSharePageLauncher36LensSpotlightSharePageLauncherPlugin init] */

void FUN_1024d3ecc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensSpotlightSharePageLauncher.LensSpotlightSharePageLauncherPlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d3ef8);
  (*pcVar1)();
}



/* Entry: 1024d3f2c; end: 1024d3f4b; -[_TtC32SCLensSpotlightSharePageLauncher36LensSpotlightSharePageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0d18));
  return;
}



/* Entry: 1024d3f4c; end: 1024d3f6b;  */

void FUN_1024d3f4c(void)

{
  func_0x000107c61168(&PTR_PTR_112848698);
  return;
}



/* Entry: 1024d3f6c; end: 1024d3fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d3f6c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0d48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d3fb8; end: 1024d3fcf; -[_TtC32SCLensSpotlightSharePageLauncher39SCLensSpotlightSharePageLauncherHandler payloadClass] */

void FUN_1024d3fb8(void)

{
  FUN_1024d3fd4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1024d3fd0; end: 1024d3fd3; -[_TtC32SCLensSpotlightSharePageLauncher39SCLensSpotlightSharePageLauncherHandler setPayloadClass:] */

void FUN_1024d3fd0(void)

{
  return;
}



/* Entry: 1024d3fd4; end: 1024d4017;  */

void FUN_1024d3fd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea0d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c68b0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ea0d50 = puVar1;
  return;
}



/* Entry: 1024d4018; end: 1024d4197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d4018(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100672b50(param_1,&uStack_80);
  if (lStack_68 != 0) {
    uVar1 = 0;
    FUN_1024d3fd4(0);
    puVar2 = &uStack_88;
    func_0x000107c6147c(puVar2,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112ea0d48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar1 = uStack_88;
      func_0x000107c5d17c(uStack_88);
      func_0x000107c61180();
      uVar4 = uStack_88;
      func_0x000107c40110(uStack_88);
      func_0x000107c61180();
      func_0x000107c5b65c(uStack_88);
      uVar5 = uStack_88;
      func_0x000107c5b660(uStack_88);
      func_0x000107c61180();
      func_0x000107c5def0(uStack_88);
      func_0x000107c42f44(uStack_88);
      func_0x000107c4ab68(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(uVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
    }
    if (param_2 == (code *)0x0) {
      func_0x000107c61170(uStack_88);
      return;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    (*param_2)(0,&uStack_80);
    func_0x000107c61170(uStack_88);
  }
  func_0x00010006e7f4(&uStack_80);
  return;
}



/* Entry: 1024d4198; end: 1024d4267; -[_TtC32SCLensSpotlightSharePageLauncher39SCLensSpotlightSharePageLauncherHandler launchWithPayload:completion:] */

void FUN_1024d4198(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105161b0;
    func_0x000107c613fc(&UNK_1105161b0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_1024d434c;
  }
  FUN_1024d4018(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1024d4268; end: 1024d42c7; -[_TtC32SCLensSpotlightSharePageLauncher39SCLensSpotlightSharePageLauncherHandler init] */

void FUN_1024d4268(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensSpotlightSharePageLauncher.SCLensSpotlightSharePageLauncherHandler",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d4294);
  (*pcVar1)();
}



/* Entry: 1024d42c8; end: 1024d42d7; -[_TtC32SCLensSpotlightSharePageLauncher39SCLensSpotlightSharePageLauncherHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d42c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0d48));
  return;
}



/* Entry: 1024d42d8; end: 1024d42f7;  */

void FUN_1024d42d8(void)

{
  func_0x000107c61168(&PTR_PTR_112848758);
  return;
}



/* Entry: 1024d42f8; end: 1024d434b; -[_TtC32SCLensSpotlightSharePageLauncher39SCLensSpotlightSharePageLauncherHandler removeSpotlightScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d42f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ea0d48);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c50010();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024d434c; end: 1024d435b;  */

void FUN_1024d434c(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 1024d435c; end: 1024d43fb;  */

void FUN_1024d435c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1024d43fc; end: 1024d440b;  */

void FUN_1024d43fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1024d440c; end: 1024d4467; -[_TtC35SCSpotlightCommentSharePageLauncher42SCSpotlightCommentSharePageLauncherHandler payloadClass] */

void FUN_1024d440c(void)

{
  func_0x0001024d4424(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1024d4468; end: 1024d446b; -[_TtC35SCSpotlightCommentSharePageLauncher42SCSpotlightCommentSharePageLauncherHandler setPayloadClass:] */

void FUN_1024d4468(void)

{
  return;
}



/* Entry: 1024d446c; end: 1024d44b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d446c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0d88) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d44b8; end: 1024d4667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d44b8(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100672b50(param_1,&uStack_80);
  if (lStack_68 == 0) {
    puVar4 = &uStack_80;
    func_0x00010006e7f4(puVar4);
  }
  else {
    uVar1 = 0;
    func_0x0001024d4424(0);
    puVar4 = &uStack_88;
    func_0x000107c6147c(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112ea0d88);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uVar1 = uStack_88;
        func_0x000107c5d17c(uStack_88);
        func_0x000107c61180();
        uVar3 = uStack_88;
        func_0x000107c40110(uStack_88);
        func_0x000107c61180();
        func_0x000107c5b65c(uStack_88);
        func_0x000107c5def0(uStack_88);
        func_0x000107c42f44(uStack_88);
        func_0x000107c4ab68(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(uVar1);
        func_0x000107c61170(uVar3);
      }
      if (param_2 == (code *)0x0) {
        func_0x000107c61170(uStack_88);
        return;
      }
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      (*param_2)(0,&uStack_80);
      func_0x000107c61170(uStack_88);
      goto LAB_1024d4634;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  FUN_1024d4668();
  puVar5 = &UNK_1105162f0;
  func_0x000107c613f8(&UNK_1105162f0,puVar4,0,0);
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  (*param_2)();
  func_0x000107c614ac(puVar5);
LAB_1024d4634:
  func_0x00010006e7f4(&uStack_80);
  return;
}



/* Entry: 1024d4668; end: 1024d46a7;  */

void FUN_1024d4668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea0d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab2d78;
  func_0x000107c61520(&UNK_10dab2d78,&UNK_1105162f0);
  puRam0000000112ea0d90 = puVar1;
  return;
}



/* Entry: 1024d46a8; end: 1024d4777; -[_TtC35SCSpotlightCommentSharePageLauncher42SCSpotlightCommentSharePageLauncherHandler launchWithPayload:completion:] */

void FUN_1024d46a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110516310;
    func_0x000107c613fc(&UNK_110516310,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_1024d498c;
  }
  FUN_1024d44b8(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1024d4778; end: 1024d47d7; -[_TtC35SCSpotlightCommentSharePageLauncher42SCSpotlightCommentSharePageLauncherHandler init] */

void FUN_1024d4778(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightCommentSharePageLauncher.SCSpotlightCommentSharePageLauncherHandler"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d47a4);
  (*pcVar1)();
}



/* Entry: 1024d47d8; end: 1024d47e7; -[_TtC35SCSpotlightCommentSharePageLauncher42SCSpotlightCommentSharePageLauncherHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d47d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0d88));
  return;
}



/* Entry: 1024d47e8; end: 1024d4807;  */

void FUN_1024d47e8(void)

{
  func_0x000107c61168(&PTR_PTR_112848818);
  return;
}



/* Entry: 1024d4808; end: 1024d485b; -[_TtC35SCSpotlightCommentSharePageLauncher42SCSpotlightCommentSharePageLauncherHandler removeSpotlightScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d4808(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ea0d88);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c50010();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024d485c; end: 1024d494b;  */

uint FUN_1024d485c(uint *param_1,int param_2)

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



/* Entry: 1024d494c; end: 1024d498b;  */

void FUN_1024d494c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea0dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab2d50;
  func_0x000107c61520(&UNK_10dab2d50,&UNK_1105162f0);
  puRam0000000112ea0dc0 = puVar1;
  return;
}



/* Entry: 1024d498c; end: 1024d4993;  */

void FUN_1024d498c(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 1024d4994; end: 1024d49df;  */

void FUN_1024d4994(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024d4ab8,param_1);
  return;
}



/* Entry: 1024d49e0; end: 1024d4ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d49e0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  FUN_1024d4ca0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112feb6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar4 = 0;
  FUN_1024d47e8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ea0d88) = uVar3;
  plVar6 = &lStack_58;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *(long **)(lVar2 + _DAT_112ea0dc8) = plVar6;
  plVar6 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = lVar1;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x000107c61574(param_2);
  *param_1 = (long)plVar6;
  return;
}


