/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029e9f58; end: 1029e9f9b; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029e9f58(undefined8 param_1)

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



/* Entry: 1029e9f9c; end: 1029ea20b;  */

void FUN_1029e9f9c(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0f89950)) ||
       (func_0x000107c605b8(0xd000000000000024,0x800000010f0766b0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58370();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f284c0)) &&
             (func_0x000107c605b8(0xd000000000000034,0x800000010f0d7b40,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "GenAIDreamsOnboardingScopeGraphBridge/SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x62,2,0x39,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ea20c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c54dd4();
          goto LAB_1029ea028;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a68c();
    }
  }
LAB_1029ea028:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029ea20c; end: 1029ea2b7; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029ea20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029e9f9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029ea2b8; end: 1029ea33b; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ea2b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed6238,0);
  *(undefined8 *)(param_1 + _DAT_112ed6240) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed6248) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed6250) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed6258) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029ea33c; end: 1029ea36f;  */

void FUN_1029ea33c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029ea370; end: 1029ea3d7; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029ea39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ea3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ea3a0) */
/* WARNING: Removing unreachable block (ram,0x0001029ea3c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ea370(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed6238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed6240));
  return;
}



/* Entry: 1029ea3d8; end: 1029ea3f7;  */

void FUN_1029ea3d8(void)

{
  func_0x000107c61168(&PTR_PTR_11287c118);
  return;
}



/* Entry: 1029ea3f8; end: 1029ea43f; -[SCSCGenAIDreamsOnboardingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ea3f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed6288;
  func_0x000107c61428(param_1 + _DAT_112ed6288,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029ea440; end: 1029ea497; -[SCSCGenAIDreamsOnboardingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ea440(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed6288;
  func_0x000107c61428(param_1 + _DAT_112ed6288,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029ea498; end: 1029ea56f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ea498(undefined8 param_1,long param_2)

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
    FUN_1029e93f8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed6190) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ea570);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed6198);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed6290);
    *(long **)(unaff_x20 + _DAT_112ed6290) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029ea570; end: 1029ea597; -[SCSCGenAIDreamsOnboardingScopedServicesSaberEntryPoint begin] */

void FUN_1029ea570(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029ea498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029ea598; end: 1029ea70f;  */

/* WARNING: Possible PIC construction at 0x0001029ea600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ea698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ea604) */
/* WARNING: Removing unreachable block (ram,0x0001029ea69c) */
/* WARNING: Removing unreachable block (ram,0x0001029ea6b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ea598(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed6290);
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



/* Entry: 1029ea710; end: 1029ea717;  */

void FUN_1029ea710(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029ea718; end: 1029ea74b; -[SCSCGenAIDreamsOnboardingScopedServicesSaberEntryPoint end] */

void FUN_1029ea718(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029ea598();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029ea74c; end: 1029ea86b;  */

void FUN_1029ea74c(long param_1,long param_2,long param_3)

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
                        "GenAIDreamsOnboardingScopeGraphBridge/SCSCGenAIDreamsOnboardingScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ea86c);
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



/* Entry: 1029ea86c; end: 1029ea917; -[SCSCGenAIDreamsOnboardingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029ea86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029ea74c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029ea918; end: 1029ea977; -[SCSCGenAIDreamsOnboardingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ea918(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed6288,0);
  *(undefined8 *)(param_1 + _DAT_112ed6290) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029ea978; end: 1029ea9ab;  */

void FUN_1029ea978(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029ea9ac; end: 1029ea9e3; -[SCSCGenAIDreamsOnboardingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ea9ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed6288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed6290));
  return;
}



/* Entry: 1029ea9e4; end: 1029eaa03;  */

void FUN_1029ea9e4(void)

{
  func_0x000107c61168(&PTR_PTR_11287c1f0);
  return;
}



/* Entry: 1029eaa04; end: 1029eab1f;  */

undefined * FUN_1029eaa04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = *(undefined **)(unaff_x20 + 0x40);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168();
    puVar2 = &UNK_1105818e8;
    func_0x000107c613fc(&UNK_1105818e8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    pcStack_40 = FUN_1029eb1a8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1004725e8;
    puStack_48 = &UNK_110581978;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c408f0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar1;
    func_0x000107c4f63c();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined **)(unaff_x20 + 0x40) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar4);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1029eab20; end: 1029ead33;  */

/* WARNING: Possible PIC construction at 0x0001029eab7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029eabc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029eac1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029eacd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ead14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029eac20) */
/* WARNING: Removing unreachable block (ram,0x0001029ead18) */
/* WARNING: Removing unreachable block (ram,0x0001029eac2c) */
/* WARNING: Removing unreachable block (ram,0x0001029ead10) */
/* WARNING: Removing unreachable block (ram,0x0001029eac40) */
/* WARNING: Removing unreachable block (ram,0x0001029eabc8) */
/* WARNING: Removing unreachable block (ram,0x0001029eab80) */
/* WARNING: Removing unreachable block (ram,0x0001029eacd8) */

void FUN_1029eab20(undefined8 param_1,uint param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if ((param_2 & 1) == 0) {
    func_0x000108c2be28();
    func_0x000107c61180();
  }
  else {
    func_0x000108c2be44();
    func_0x000107c61180();
  }
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1029ead34; end: 1029eaed7;  */

undefined * FUN_1029ead34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = *(undefined **)(unaff_x20 + 0x48);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168();
    puVar2 = &UNK_1105818e8;
    func_0x000107c613fc(&UNK_1105818e8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    uStack_40 = 0x1029eb168;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1004725e8;
    puStack_48 = &UNK_110581900;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c408f0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar1;
    func_0x000107c4f63c();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined **)(unaff_x20 + 0x48) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar4);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1029eaed8; end: 1029eb0d3;  */

/* WARNING: Possible PIC construction at 0x0001029eaf60: Changing call to branch */

void FUN_1029eaed8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e1c30;
  func_0x000107c610f8(PTR_PTR_1126e1c30);
  func_0x000107c453e4();
  func_0x000107c59560();
  func_0x000107c59558(puVar1);
  puVar2 = *(undefined **)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c40fec();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c54314(puVar1);
      puVar1 = puVar3;
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c54198(puVar1);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar4);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1029eb0d4; end: 1029eb183;  */

void FUN_1029eb0d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1029eb184; end: 1029eb1a7;  */

void FUN_1029eb184(long param_1,long param_2)

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



/* Entry: 1029eb1a8; end: 1029eb1c3;  */

void FUN_1029eb1a8(void)

{
  func_0x0001029eae50();
  return;
}



/* Entry: 1029eb1c4; end: 1029eb1e7;  */

void FUN_1029eb1c4(long param_1,long param_2)

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



/* Entry: 1029eb1e8; end: 1029eb293;  */

void FUN_1029eb1e8(void)

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



/* Entry: 1029eb294; end: 1029eb407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029eb294(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = &puStack_70;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ed63a0);
  lVar2 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ed63b0);
  lVar2 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  if (*(char *)(unaff_x20 + _DAT_112ed63c0) == '\x02') {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ed6398) + _DAT_113074c10);
    if (param_1 == (code *)0x0) {
      func_0x000107c615f0(uVar3);
      ppuVar5 = (undefined **)0x0;
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000b0c7c;
      puStack_58 = &UNK_110581a68;
      pcStack_50 = param_1;
      uStack_48 = param_2;
      func_0x000107c60bc4(&puStack_70);
      uVar1 = uStack_48;
      func_0x000107c615f0(uVar3);
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c41864(uVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(uVar3);
  }
  else if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1029eb408; end: 1029eb45b; -[_TtC42SCGenAIDreamsOnboardingScopeImplementation31GenAIDreamsOnboardingRouterImpl generativeAIOnboardingScopeDidCompleteWithCancelled:genAIIdentity:] */

/* WARNING: Possible PIC construction at 0x0001029eb444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029eb448) */

void FUN_1029eb408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1029eb8c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1029eb45c; end: 1029eb45f; -[_TtC42SCGenAIDreamsOnboardingScopeImplementation31GenAIDreamsOnboardingRouterImpl generativeAIOnboardingScopeWillCompleteWithCancelled:] */

void FUN_1029eb45c(void)

{
  return;
}



/* Entry: 1029eb460; end: 1029eb503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029eb460(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074c20;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed6398);
  func_0x000107c61428(lVar2 + _DAT_113074c20,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c42314();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      func_0x000107c60234(param_1,lVar1);
      func_0x000107c615e8(lVar1);
      return;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1029eb504; end: 1029eb5db; -[_TtC42SCGenAIDreamsOnboardingScopeImplementation31GenAIDreamsOnboardingRouterImpl generativeAIOnboardingScopeGetSettingsExposer] */

void FUN_1029eb504(undefined8 param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  func_0x000107c61174();
  FUN_1029eb460(auStack_60);
  func_0x000107c61170(param_1);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    func_0x000107c605b0(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1029eb5dc; end: 1029eb63b; -[_TtC42SCGenAIDreamsOnboardingScopeImplementation31GenAIDreamsOnboardingRouterImpl init] */

void FUN_1029eb5dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIDreamsOnboardingScopeImplementation.GenAIDreamsOnboardingRouterImpl",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029eb608);
  (*pcVar1)();
}



/* Entry: 1029eb63c; end: 1029eb6b3; -[_TtC42SCGenAIDreamsOnboardingScopeImplementation31GenAIDreamsOnboardingRouterImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029eb658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029eb688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029eb65c) */
/* WARNING: Removing unreachable block (ram,0x0001029eb68c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029eb63c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed6398));
  return;
}



/* Entry: 1029eb6b4; end: 1029eb6d3;  */

void FUN_1029eb6b4(void)

{
  func_0x000107c61168(&PTR_PTR_11287c2b0);
  return;
}



/* Entry: 1029eb6d4; end: 1029eb717; -[_TtC42SCGenAIDreamsOnboardingScopeImplementation31GenAIDreamsOnboardingRouterImpl webBrowserDidDismiss:] */

void FUN_1029eb6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1029eb950();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029eb718; end: 1029eb87f;  */

int FUN_1029eb718(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1029eb794;
        goto LAB_1029eb778;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1029eb778:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1029eb794:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1029eb880; end: 1029eb8bf;  */

void FUN_1029eb880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed63f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db00a7c;
  func_0x000107c61520(&UNK_10db00a7c,&UNK_110581a28);
  puRam0000000112ed63f8 = puVar1;
  return;
}



/* Entry: 1029eb8c0; end: 1029eb94f;  */

/* WARNING: Possible PIC construction at 0x0001029eb908: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029eb8c0(uint param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed63a0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + _DAT_112ed63b8;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    FUN_1029ec7e4(param_1 & 1);
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1029eb950; end: 1029eb9ef;  */

/* WARNING: Possible PIC construction at 0x0001029eb990: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029eb950(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed63b0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + _DAT_112ed63b8;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x0001029ec874();
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1029eb9f0; end: 1029eba0b;  */

void FUN_1029eb9f0(long param_1,long param_2)

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



/* Entry: 1029eba0c; end: 1029ec44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029eba0c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *apuStack_180 [3];
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 auStack_118 [3];
  long lStack_100;
  undefined **ppuStack_f8;
  undefined8 auStack_f0 [3];
  long lStack_d8;
  undefined **ppuStack_d0;
  long alStack_c8 [3];
  long lStack_b0;
  undefined **ppuStack_a8;
  long *aplStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_120 = param_6;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_8;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(long *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_9;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61174();
  uStack_130 = param_1;
  func_0x000107c61174();
  uStack_138 = param_8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lStack_148 = param_2;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029ebf24);
    (*pcVar3)();
  }
  uStack_140 = param_3;
  func_0x000107c43d50();
  func_0x000107c61180();
  uStack_150 = param_4;
  func_0x000107c5b034();
  func_0x000107c61180();
  lStack_128 = param_5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029ebf28);
    (*pcVar3)();
  }
  uVar4 = *(undefined8 *)(lStack_120 + _DAT_113083868);
  func_0x000107c61174();
  uStack_158 = param_7;
  func_0x000107c42328();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x0001029eb148();
  lVar6 = lVar5;
  func_0x000107c613fc();
  lVar11 = lStack_128;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(long *)(lVar6 + 0x10) = param_2;
  *(undefined8 *)(lVar6 + 0x18) = param_3;
  *(undefined8 *)(lVar6 + 0x20) = param_4;
  *(long *)(lVar6 + 0x28) = param_5;
  *(undefined8 *)(lVar6 + 0x30) = uVar4;
  *(undefined8 *)(lVar6 + 0x38) = param_7;
  lVar7 = lStack_128;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029ebf2c);
    (*pcVar3)();
  }
  lVar8 = 0;
  FUN_1029eb6b4();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar1 = lVar9 + _DAT_112ed63b8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  uVar4 = uStack_138;
  *(undefined1 *)(lVar9 + _DAT_112ed63c0) = 0;
  *(undefined8 *)(lVar9 + _DAT_112ed63c8) = 0;
  *(undefined8 *)(lVar9 + _DAT_112ed6398) = uStack_130;
  *(undefined8 *)(lVar9 + _DAT_112ed63a0) = uStack_138;
  *(long *)(lVar9 + _DAT_112ed63a8) = lVar7;
  *(undefined8 *)(lVar9 + _DAT_112ed63b0) = param_9;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_138 = uVar4;
  func_0x000107c61174();
  plVar10 = &lStack_78;
  apuStack_180[2] = (undefined1 *)param_9;
  func_0x000107c61154(plVar10,puVar2);
  func_0x000107c61180();
  uVar4 = uStack_140;
  uVar13 = uStack_140;
  func_0x000107c43d50();
  func_0x000107c61180();
  uStack_160 = uVar13;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lStack_168 = lVar11;
  if (lVar11 != 0) {
    ppuStack_80 = &PTR_DAT_110581a38;
    ppuStack_a8 = &PTR_DAT_1105818b0;
    lVar11 = 0;
    alStack_c8[0] = lVar6;
    lStack_b0 = lVar5;
    aplStack_a0[0] = plVar10;
    lStack_88 = lVar8;
    func_0x0001029ecab8();
    func_0x000107c613fc();
    func_0x0001000c6518(aplStack_a0,lVar8);
    apuStack_180[1] = (undefined1 *)apuStack_180;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    puVar14 = (undefined8 *)((long)apuStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar14);
    func_0x0001000c6518(alStack_c8,lVar5);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    puVar12 = (undefined8 *)((long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(puVar12);
    auStack_f0[0] = *puVar14;
    uVar13 = *puVar12;
    ppuStack_d0 = &PTR_DAT_110581a38;
    ppuStack_f8 = &PTR_DAT_1105818b0;
    lStack_100 = lVar5;
    lStack_d8 = lVar8;
    func_0x000107c61174();
    func_0x000107c6157c(lVar6);
    func_0x000107c61170(uStack_150);
    func_0x000107c61170(lStack_128);
    func_0x000107c61170(apuStack_180[2]);
    func_0x000107c61170(lStack_120);
    func_0x000107c61170(lStack_148);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uStack_158);
    auStack_118[0] = uVar13;
    func_0x000107c61170(plVar10);
    func_0x000107c61574(lVar6);
    func_0x000107c61170(uStack_138);
    *(undefined8 *)(lVar11 + 0x10) = uStack_130;
    func_0x000100d1692c(auStack_f0,lVar11 + 0x18);
    func_0x000100d1692c(auStack_118,lVar11 + 0x40);
    *(undefined8 *)(lVar11 + 0x68) = uStack_160;
    *(long *)(lVar11 + 0x70) = lStack_168;
    func_0x0001000834e4(alStack_c8);
    func_0x0001000834e4(aplStack_a0);
    *(long *)(unaff_x20 + 0x38) = lVar11;
    *(undefined ***)((long)plVar10 + _DAT_112ed63b8 + 8) = &PTR_DAT_110581af0;
    func_0x000107c61604((long)plVar10 + _DAT_112ed63b8,lVar11);
    func_0x000107c61170(plVar10);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1029ebf30);
  (*pcVar3)();
}



/* Entry: 1029ec450; end: 1029ec48b;  */

void FUN_1029ec450(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_1029ec5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1029ec48c; end: 1029ec4fb;  */

undefined8 FUN_1029ec48c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000a8868(lVar2 + 0x18,*(undefined8 *)(lVar2 + 0x30));
    func_0x000107c6157c(lVar2);
    FUN_1029eb294(0,0);
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1029ec4fc; end: 1029ec547;  */

void FUN_1029ec4fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029ec548; end: 1029ec5ab;  */

void FUN_1029ec548(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x38);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_1029ec5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1029ec5ac; end: 1029ec5cb;  */

void FUN_1029ec5ac(void)

{
  func_0x000107c61168(&PTR_PTR_112ed6440);
  return;
}



/* Entry: 1029ec5cc; end: 1029ec7e3;  */

/* WARNING: Possible PIC construction at 0x0001029ec624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ec638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ec654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ec63c) */
/* WARNING: Removing unreachable block (ram,0x0001029ec650) */
/* WARNING: Removing unreachable block (ram,0x0001029ec648) */
/* WARNING: Removing unreachable block (ram,0x0001029ec654) */
/* WARNING: Removing unreachable block (ram,0x0001029ec628) */
/* WARNING: Removing unreachable block (ram,0x0001029ec658) */
/* WARNING: Removing unreachable block (ram,0x0001029ec67c) */
/* WARNING: Removing unreachable block (ram,0x0001029ec704) */
/* WARNING: Removing unreachable block (ram,0x0001029ec694) */

void FUN_1029ec5cc(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + 0x40,*(undefined8 *)(unaff_x20 + 0x58));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c5ce94();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1029ec7e4; end: 1029ec923;  */

void FUN_1029ec7e4(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x30));
  puVar2 = &UNK_110581b20;
  func_0x000107c613fc(&UNK_110581b20,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  func_0x000107c6157c(puVar2);
  uVar1 = 0x1029ecae8;
  if ((param_1 & 1) == 0) {
    uVar1 = 0x1029ecae0;
  }
  FUN_1029eb294(uVar1,puVar2);
  func_0x000107c61578(puVar2,2);
  return;
}



/* Entry: 1029ec924; end: 1029eca73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ec924(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    lVar1 = _DAT_113074c20;
    func_0x000107c61428(lVar2 + _DAT_113074c20,auStack_50,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c4230c(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1029eca74; end: 1029ecad7;  */

void FUN_1029eca74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029ecad8; end: 1029ecaef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ecad8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    lVar1 = _DAT_113074c20;
    func_0x000107c61428(lVar2 + _DAT_113074c20,auStack_50,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c42308(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1029ecaf0; end: 1029ecb83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ecaf0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ed6588;
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56330();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6590) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6598) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029ecb84; end: 1029ece4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ecb84(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = 0;
  func_0x000107c5fb10();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_110581c28;
  func_0x000107c613fc(&UNK_110581c28,0x11,7);
  puVar4[0x10] = 0;
  puVar5 = PTR_PTR_1126b7040;
  func_0x000107c61168(PTR_PTR_1126b7040);
  func_0x000107c5aa24();
  func_0x000107c61180();
  puStack_a0 = (undefined *)0x656c756465686373;
  uStack_98 = 0xee00293a78696628;
  puVar6 = puVar5;
  func_0x000107c5fb04(lVar10);
  func_0x000100e8b654();
  lVar7 = lVar10;
  func_0x000107c60220(lVar10,PTR___sSSN_11034da80,puVar6);
  (**(code **)(lVar11 + 8))(lVar10,lVar3);
  if (lVar7 != 0) {
    puVar6 = &UNK_110581c50;
    func_0x000107c613fc(&UNK_110581c50,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar4;
    *(undefined8 *)(puVar6 + 0x18) = param_1;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1029ece50;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000b0c7c;
    puStack_88 = &UNK_110581c68;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar6);
    puVar9 = puVar5;
    func_0x000107c3eaf8(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c6142c(lVar7);
    func_0x000107c61170(puVar5);
    puVar5 = &UNK_110581ca0;
    func_0x000107c613fc(&UNK_110581ca0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_110581cc8;
    func_0x000107c613fc(&UNK_110581cc8,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    *(undefined8 *)(puVar6 + 0x20) = param_1;
    pcStack_80 = FUN_1029ecfa0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000b0c7c;
    puStack_88 = &UNK_110581ce0;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar8);
    puVar1 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c615f0(param_1);
    func_0x000107c61174(puVar9);
    func_0x000107c6157c(puVar5);
    func_0x000100fff654(FUN_1029ecfa0,puVar6);
    func_0x000107c61574(puVar1);
    func_0x000107c5362c(puVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(puVar9);
    func_0x000107c3d7d0(*(undefined8 *)(unaff_x20 + _DAT_112ed6588));
    func_0x000107c61574(puVar4);
    func_0x000107c61170(puVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ece50);
  (*pcVar2)();
}



/* Entry: 1029ece50; end: 1029ece9f;  */

void FUN_1029ece50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c43664(uVar2,param_2,0);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  *(char *)(lVar1 + 0x10) = (char)uVar2;
  return;
}



/* Entry: 1029ecea0; end: 1029ecebb;  */

void FUN_1029ecea0(long param_1,long param_2)

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



/* Entry: 1029ecebc; end: 1029ecf9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ecebc(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    if (*(char *)(param_2 + 0x10) == '\x01') {
      *(undefined8 *)(param_1 + _DAT_112ed6590) = 0;
      func_0x000107c3f484(*(undefined8 *)(param_1 + _DAT_112ed6588));
      if (*(long *)(param_1 + _DAT_112ed6598) != 0) {
        func_0x000107c4bb74();
      }
    }
    else {
      if (SCARRY8(*(long *)(param_1 + _DAT_112ed6590),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ecfa0);
        (*pcVar1)();
      }
      *(long *)(param_1 + _DAT_112ed6590) = *(long *)(param_1 + _DAT_112ed6590) + 1;
      if (*(long *)(param_1 + _DAT_112ed6598) != 0) {
        func_0x000107c4bb70();
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029ecfa0; end: 1029ecfab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ecfa0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_60,0,0);
    if (*(char *)(lVar1 + 0x10) == '\x01') {
      *(undefined8 *)(lVar3 + _DAT_112ed6590) = 0;
      func_0x000107c3f484(*(undefined8 *)(lVar3 + _DAT_112ed6588));
      if (*(long *)(lVar3 + _DAT_112ed6598) != 0) {
        func_0x000107c4bb74();
      }
    }
    else {
      if (SCARRY8(*(long *)(lVar3 + _DAT_112ed6590),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ecfa0);
        (*pcVar2)();
      }
      *(long *)(lVar3 + _DAT_112ed6590) = *(long *)(lVar3 + _DAT_112ed6590) + 1;
      if (*(long *)(lVar3 + _DAT_112ed6598) != 0) {
        func_0x000107c4bb70();
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1029ecfac; end: 1029ed00b; -[SCCameraFixScheduler init] */

void FUN_1029ecfac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraStabilityServicesImpl.CameraFixScheduler",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ecfd8);
  (*pcVar1)();
}



/* Entry: 1029ed00c; end: 1029ed043; -[SCCameraFixScheduler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed00c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed6588));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed6598));
  return;
}



/* Entry: 1029ed044; end: 1029ed063;  */

void FUN_1029ed044(void)

{
  func_0x000107c61168(&PTR_PTR_11287c3a0);
  return;
}



/* Entry: 1029ed064; end: 1029ed0c7;  */

void FUN_1029ed064(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110581d18;
  if (lRam0000000112ed65c8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ed65c8 = param_1;
  }
  return;
}



/* Entry: 1029ed0c8; end: 1029ed10b;  */

void FUN_1029ed0c8(long param_1,long *param_2,long param_3)

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



/* Entry: 1029ed10c; end: 1029ed137;  */

void FUN_1029ed10c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1029ed138; end: 1029ed197; -[_TtC29SCCameraStabilityServicesImpl31CameraFrameRenderedStateMachine initWithTransitions:initialState:name:logContext:] */

void FUN_1029ed138(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraStabilityServicesImpl.CameraFrameRenderedStateMachine",0x3d,
                      "init(transitions:initialState:name:logContext:)",0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ed164);
  (*pcVar1)();
}



/* Entry: 1029ed198; end: 1029ed213; -[_TtC29SCCameraStabilityServicesImpl31CameraFrameRenderedStateMachine nameOfEvent:forStateMachine:] */

void FUN_1029ed198(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (param_3 == 0) {
    uVar2 = 0x6e6552656d617266;
  }
  uVar1 = 0xe000000000000000;
  if (param_3 == 0) {
    uVar1 = 0xed00006465726564;
  }
  uVar3 = 0x7465736572;
  if (param_3 != 1) {
    uVar3 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (param_3 != 1) {
    uVar2 = uVar1;
  }
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1029ed214; end: 1029ed287; -[_TtC29SCCameraStabilityServicesImpl31CameraFrameRenderedStateMachine nameOfState:forStateMachine:] */

void FUN_1029ed214(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (param_3 == 0) {
    uVar2 = 0x676e6974696177;
  }
  uVar1 = 0xe000000000000000;
  if (param_3 == 0) {
    uVar1 = 0xe700000000000000;
  }
  uVar3 = 0x64657265646e6572;
  if (param_3 != 1) {
    uVar3 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (param_3 != 1) {
    uVar2 = uVar1;
  }
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1029ed288; end: 1029ed28f; -[_TtC29SCCameraStabilityServicesImpl31CameraFrameRenderedStateMachine stateMachineForState:ofParentStateMachine:] */

void FUN_1029ed288(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1029ed290; end: 1029ed2df;  */

void FUN_1029ed290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  func_0x0001000e959c(param_1,param_2,param_3);
  return;
}



/* Entry: 1029ed2e0; end: 1029ed35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed2e0(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((param_2 & 1) != 0) {
      lVar1 = *(long *)(param_1 + _DAT_112ed6688);
      if (lVar1 != 0) {
        func_0x000107c615f0(lVar1);
        func_0x000107c4ba60();
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1029ed35c; end: 1029ed367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed35c(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((bVar1 & 1) != 0) {
      lVar2 = *(long *)(lVar2 + _DAT_112ed6688);
      if (lVar2 != 0) {
        func_0x000107c615f0(lVar2);
        func_0x000107c4ba60();
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1029ed368; end: 1029ed45b; -[SCCameraFrameStabilityMonitorImpl startCameraCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed368(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112ed66a0);
  puVar1 = &UNK_110581de8;
  func_0x000107c613fc(&UNK_110581de8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110581ed8;
  func_0x000107c613fc(&UNK_110581ed8,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_3;
  uStack_40 = 0x1029ed9b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110581ef0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029ed45c; end: 1029ed4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed45c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112ed6690);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c5ba38();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1029ed4d4; end: 1029ed4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed4d4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _DAT_112ed6690);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c5ba38();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1029ed4dc; end: 1029ed4ef; -[SCCameraFrameStabilityMonitorImpl prepareToReceiveFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed4dc(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ed66a0);
  puVar1 = &UNK_110581de8;
  func_0x000107c613fc(&UNK_110581de8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_50 = 0x1029ed9c4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110581ea0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029ed4f0; end: 1029ed577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed4f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112ed6690) != 0) {
      func_0x000107c5bdf4();
    }
    lVar1 = *(long *)(param_1 + _DAT_112ed6688);
    if (lVar1 != 0) {
      func_0x000107c615f0(lVar1);
      func_0x000107c4ba64();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029ed578; end: 1029ed57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed578(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112ed6690) != 0) {
      func_0x000107c5bdf4();
    }
    lVar2 = *(long *)(lVar1 + _DAT_112ed6688);
    if (lVar2 != 0) {
      func_0x000107c615f0(lVar2);
      func_0x000107c4ba64();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029ed580; end: 1029ed593; -[SCCameraFrameStabilityMonitorImpl frameReceived] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed580(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ed66a0);
  puVar1 = &UNK_110581de8;
  func_0x000107c613fc(&UNK_110581de8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_50 = 0x1029ed9c0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110581e78;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029ed594; end: 1029ed667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ed66a0);
  puVar1 = &UNK_110581de8;
  func_0x000107c613fc(&UNK_110581de8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_4;
  uStack_50 = param_3;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029ed668; end: 1029ed6d7;  */

/* WARNING: Possible PIC construction at 0x0001029ed67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ed680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed668(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112ed66a0));
  return;
}



/* Entry: 1029ed6d8; end: 1029ed71f; -[SCCameraFrameStabilityMonitorImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029ed6f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ed6f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed6d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed66a0));
  return;
}



/* Entry: 1029ed720; end: 1029ed86b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed720(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112ed6688) != 0) {
      func_0x000107c4ba5c();
    }
    lVar5 = *(long *)(param_1 + _DAT_112ed6760);
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112ed6758);
      puVar1 = &UNK_110581f28;
      func_0x000107c613fc(&UNK_110581f28,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_1);
      puVar2 = &UNK_110581f50;
      func_0x000107c613fc(&UNK_110581f50,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(long *)(puVar2 + 0x18) = lVar5;
      pcStack_68 = FUN_1029ed988;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110581f68;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c61174(lVar5);
      func_0x000107c61174();
      func_0x000107c61574(puVar1);
      func_0x000107c4e590(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029ed86c; end: 1029ed873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed86c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112ed6688) != 0) {
      func_0x000107c4ba5c();
    }
    lVar6 = *(long *)(lVar1 + _DAT_112ed6760);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112ed6758);
      puVar2 = &UNK_110581f28;
      func_0x000107c613fc(&UNK_110581f28,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar1);
      puVar3 = &UNK_110581f50;
      func_0x000107c613fc(&UNK_110581f50,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = lVar6;
      pcStack_68 = FUN_1029ed988;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110581f68;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar2 = puStack_60;
      func_0x000107c61174(lVar6);
      func_0x000107c61174();
      func_0x000107c61574(puVar2);
      func_0x000107c4e590(uVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029ed874; end: 1029ed893;  */

void FUN_1029ed874(void)

{
  func_0x000107c61168(&PTR_PTR_11287c4b8);
  return;
}



/* Entry: 1029ed894; end: 1029ed987; -[SCCameraFrameStabilityMonitorImpl cameraHeathMonitorDidDetectFailedCameraOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ed66a0);
  puVar1 = &UNK_110581de8;
  func_0x000107c613fc(&UNK_110581de8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_50 = 0x1029ed9bc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110581e50;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029ed988; end: 1029ed9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed988(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ed6750;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112ed6750,auStack_90,0,0);
    uVar10 = *(ulong *)(lVar3 + lVar1);
    if (uVar10 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar4 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      uVar10 = *(ulong *)(lVar3 + lVar1);
      uVar4 = uVar10 & 0xffffffffffffff8;
      if (uVar10 >> 0x3e == 0) {
        uVar12 = *(ulong *)(uVar4 + 0x10);
      }
      else {
        uVar12 = uVar4;
        if (0x7fffffffffffffff < uVar10) {
          uVar12 = uVar10;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar13 = 0;
      while (uVar12 != uVar13) {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar4 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a8);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar10 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          func_0x0001029efcf0(uVar13,uVar10);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a4);
          (*pcVar2)();
        }
        uVar11 = uVar13 + 1;
        uVar6 = uVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        uVar13 = uVar13 + 1;
        if (uVar6 != 0) {
          puVar8 = puVar9;
          func_0x000107c61550();
          if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
             (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar7 = puVar9;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            func_0x0001029f4c4c(0,puVar7 + 1,1,puVar9);
          }
          uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar13 = *(ulong *)(uVar5 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001029f4c4c(puVar9,uVar13 + 1,1,puVar8);
            uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar5 + 0x10) = uVar13 + 1;
          *(ulong *)(uVar5 + uVar13 * 8 + 0x20) = uVar6;
          uVar13 = uVar11;
        }
      }
      func_0x000107c6142c(uVar10);
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar8 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar8 = puVar9;
        }
        func_0x000107c60480();
      }
      if (puVar8 != (undefined *)0x0) {
        uVar10 = 0;
        do {
          if (((ulong)puVar9 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9ac);
              (*pcVar2)();
            }
            uVar4 = *(ulong *)(puVar9 + uVar10 * 8 + 0x20);
            func_0x000107c615f0(uVar4);
          }
          else {
            uVar4 = uVar10;
            FUN_1029eff28(uVar10,puVar9);
          }
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a0);
            (*pcVar2)();
          }
          puVar7 = (undefined *)(uVar10 + 1);
          FUN_1029ecb84(uVar4);
          func_0x000107c615e8(uVar4);
          uVar10 = uVar10 + 1;
        } while (puVar7 != puVar8);
      }
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(puVar9);
    }
  }
  return;
}



/* Entry: 1029ed9c8; end: 1029eda87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ed9c8(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed66d0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ed66d8) = param_2;
  *(undefined **)(unaff_x20 + _DAT_112ed6750) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112ed6758;
  pcVar2 = "CameraStabilityMonitorBase";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(unaff_x20 + lVar1) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6760) = param_3;
  uVar3 = 0;
  func_0x0001000e96e0();
  uStack_48 = uVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029eda88; end: 1029edb37; -[SCCameraPermissionStateStabilityMonitorImpl initWithPermissionRequestDelay:permissionStateFixEnabled:fixScheduler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029eda88(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_2 + _DAT_112ed66d0) = param_1;
  *(undefined1 *)(param_2 + _DAT_112ed66d8) = param_4;
  *(undefined **)(param_2 + _DAT_112ed6750) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112ed6758;
  func_0x000107c61174(param_5);
  pcVar2 = "CameraStabilityMonitorBase";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(param_2 + lVar1) = pcVar2;
  *(undefined8 *)(param_2 + _DAT_112ed6760) = param_5;
  uVar3 = 0;
  func_0x0001000e96e0();
  lStack_40 = param_2;
  uStack_38 = uVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029edb38; end: 1029edbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029edb38(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b7018;
  func_0x000107c61168();
  func_0x000107c3e490();
  if (puVar1 != (undefined *)0x3) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a2270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logCameraOpenFailurePermissionNo_1126062a8)
    ;
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112ed66d8) == '\x01') {
    ppuVar3 = &puStack_60;
    lVar5 = *(long *)(unaff_x20 + _DAT_112ed6760);
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6758);
      puVar1 = &UNK_110582150;
      func_0x000107c613fc(&UNK_110582150,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,unaff_x20);
      puVar2 = &UNK_110582218;
      func_0x000107c613fc(&UNK_110582218,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(long *)(puVar2 + 0x18) = lVar5;
      pcStack_40 = FUN_1029eff20;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_110582230;
      puStack_38 = puVar2;
      func_0x000107c60bc4(&puStack_60);
      puVar1 = puStack_38;
      func_0x000107c61174(lVar5);
      func_0x000107c61174();
      func_0x000107c61574(puVar1);
      func_0x000107c4e590(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar5);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a2250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logCameraOpenFailurePermissionIn_1126062a0);
  return;
}



/* Entry: 1029edbac; end: 1029edbf3; -[SCCameraPermissionStateStabilityMonitorImpl cameraPermissionAlreadyBeingRequestedWithLogger:] */

void FUN_1029edbac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1029edb38(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029edbf4; end: 1029edc03; -[SCCameraPermissionStateStabilityMonitorImpl cameraPermissionRequestDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029edbf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ed66d0);
}



/* Entry: 1029edc04; end: 1029edc57;  */

void FUN_1029edc04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029edc58; end: 1029edcd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029edc58(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed6708) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6710) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ed6718) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112ed6720) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029edcd8; end: 1029edd37; -[SCCameraStabilityLogger init] */

void FUN_1029edcd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraStabilityServicesImpl.CameraStabilityLogger",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029edd04);
  (*pcVar1)();
}



/* Entry: 1029edd38; end: 1029edd6f; -[SCCameraStabilityLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029edd54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029edd58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029edd38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed6710));
  return;
}



/* Entry: 1029edd70; end: 1029edd73; -[SCCameraStabilityLogger configureWithSnapSource:isBackCamera:isMainCamera:isMultiCam:cameraType:] */

void FUN_1029edd70(void)

{
  return;
}



/* Entry: 1029edd74; end: 1029edd77; -[SCCameraStabilityLogger logCameraOpenEventStart] */

void FUN_1029edd74(void)

{
  return;
}



/* Entry: 1029edd78; end: 1029edd7b; -[SCCameraStabilityLogger logCameraOpenEventCameraRunning] */

void FUN_1029edd78(void)

{
  return;
}


