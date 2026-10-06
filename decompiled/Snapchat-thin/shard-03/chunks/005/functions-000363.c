/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029dbee8; end: 1029dbf1b;  */

void FUN_1029dbee8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029dbf1c; end: 1029dbf53; -[SCThirdPartyLoginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dbf1c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed5478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5480));
  return;
}



/* Entry: 1029dbf54; end: 1029dbf73;  */

void FUN_1029dbf54(void)

{
  func_0x000107c61168(&PTR_PTR_11287afd0);
  return;
}



/* Entry: 1029dbf74; end: 1029dbfdf;  */

long FUN_1029dbf74(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar1 = param_1;
  func_0x0001000bda74();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1029dbfe0; end: 1029dc18f;  */

void FUN_1029dbfe0(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    puVar2 = PTR_PTR_1126abc90;
    func_0x000107c610f8(PTR_PTR_1126abc90);
    func_0x000107c453e4();
    func_0x000107c52130();
    func_0x000107c55484(puVar2,param_3,1);
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c41018();
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dc0b0);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dc0b4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dc0b8);
      (*pcVar1)();
    }
    func_0x000107c55480(puVar2,param_3,(long)param_1);
    func_0x000107c4bfb0(lStack_28,param_3,puVar2);
    func_0x000107c615e8(lStack_28);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1029dc190; end: 1029dc1d3;  */

void FUN_1029dc190(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029dc1d4; end: 1029dc66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029dc1d4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  lVar1 = param_2;
  func_0x000107c42294();
  func_0x000107c61180();
  uVar5 = param_4;
  func_0x000107c4d80c(param_4);
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_3 + _DAT_112fbd3b0);
  uVar6 = *(undefined8 *)(param_7 + _DAT_11308d048);
  FUN_1029e156c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x0001029dd604(lVar1,uVar5,uVar7,uVar6);
  uVar7 = *(undefined8 *)(param_5 + _DAT_113083868);
  lVar2 = 0;
  func_0x0001029dc1b4();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = uVar7;
  func_0x0001000bda74();
  *(undefined8 *)(lVar2 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)(param_6 + _DAT_113097748);
  puVar3 = PTR_PTR_1126a6be8;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar5);
  func_0x000107c453e4();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  lVar4 = 0;
  func_0x0001029dc7ac();
  func_0x000107c613fc();
  *(undefined1 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x10) = param_1;
  *(long *)(lVar4 + 0x18) = lVar1;
  *(long *)(lVar4 + 0x20) = lVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  *(undefined **)(lVar4 + 0x30) = puVar3;
  *(long *)(unaff_x20 + 0x18) = lVar4;
  lVar2 = lVar1 + _DAT_112ed57a0;
  func_0x000107c61428(lVar2,auStack_78,1,0);
  *(undefined ***)(lVar2 + 8) = &PTR_DAT_11057fd90;
  func_0x000107c61604(lVar2,lVar4);
  func_0x000107c61170(lVar1);
  return unaff_x20;
}



/* Entry: 1029dc66c; end: 1029dc687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dc66c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) + _DAT_112ed56c8),
             PTR_s_attachUI__1125a0c08,*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18));
  return;
}



/* Entry: 1029dc688; end: 1029dc6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029dc688(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)
                       (*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) + _DAT_112ed56c8),param_2,0);
  return 0;
}



/* Entry: 1029dc6f0; end: 1029dc70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dc6f0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(*unaff_x20 + 0x18) + 0x10) + _DAT_112ed56c8),
             PTR_s_attachUI__1125a0c08,*(undefined8 *)(*(long *)(*unaff_x20 + 0x18) + 0x18));
  return;
}



/* Entry: 1029dc710; end: 1029dc7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029dc710(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)
                       (*(long *)(*(long *)(*unaff_x20 + 0x18) + 0x10) + _DAT_112ed56c8),param_2,0);
  return 0;
}



/* Entry: 1029dc7cc; end: 1029dc817;  */

void FUN_1029dc7cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c4e2ec(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c5bb50(uVar1);
    func_0x000106a5a0d0(*(undefined8 *)(unaff_x20 + 0x30),1);
    *(undefined1 *)(unaff_x20 + 0x38) = 1;
  }
  return;
}



/* Entry: 1029dc818; end: 1029dc81b;  */

void FUN_1029dc818(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c4e2ec(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c5bb50(uVar1);
    func_0x000106a5a0d0(*(undefined8 *)(unaff_x20 + 0x30),1);
    *(undefined1 *)(unaff_x20 + 0x38) = 1;
  }
  return;
}



/* Entry: 1029dc81c; end: 1029dc85b;  */

void FUN_1029dc81c(void)

{
  FUN_1029dbfe0();
  return;
}



/* Entry: 1029dc85c; end: 1029dc86b; -[ThirdPartyLoginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dc85c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed56c8));
  return;
}



/* Entry: 1029dc86c; end: 1029dc8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dc86c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033b870();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed56d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029dc8d4; end: 1029dc91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dc8d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed56d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029dc920; end: 1029dc9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1029dc920(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000100337ccc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed56c8) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_1);
  plVar4 = &lStack_40;
  func_0x000107c61154(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(aplStack_58[0]);
  return plVar4;
}



/* Entry: 1029dc9c4; end: 1029dca1f; -[_TtC20ThirdPartyLoginScope28ThirdPartyLoginScopeServices buildWithUiContainer:] */

void FUN_1029dc9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1029dc920(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029dca20; end: 1029dca23;  */

void FUN_1029dca20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029dca24; end: 1029dca57;  */

void FUN_1029dca24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029dca58; end: 1029dca8b; -[_TtC20ThirdPartyLoginScope28ThirdPartyLoginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dca58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed56d8));
  return;
}



/* Entry: 1029dca8c; end: 1029dcb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029dca8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ed5758;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ed5758);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b0648;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c61180();
    func_0x000107c52e44(0,0,0x4044000000000000,0x4044000000000000);
    puVar2 = puVar3;
    func_0x000107c4aba4(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c539d4(0x4020000000000000,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c552a8(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1029dcb60; end: 1029dccc7;  */

undefined * FUN_1029dcb60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c59a2c();
  func_0x000107c544f8(puVar1);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c59e34(puVar1);
  puVar2 = &UNK_11057ff28;
  func_0x000107c613fc(&UNK_11057ff28,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_50 = FUN_1029dd234;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = 0x42000000;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11057ff40;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61174(puVar1);
  func_0x000107c498ec();
  func_0x000107c52e44(0,0,uVar4,0x4050800000000000,puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1029dccc8; end: 1029dce13;  */

long FUN_1029dccc8(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    FUN_1029dcb60();
    func_0x000107c6142c(param_2);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1029dce14; end: 1029dce4b; -[_TtC27SCThirdPartyLoginSettingsUI38ThirdPartyLoginSettingsLoginSourceCell initWithReuseIdentifier:] */

void FUN_1029dce14(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c5faec(param_3);
  }
  func_0x0001029dcd44();
  return;
}



/* Entry: 1029dce4c; end: 1029dce7f;  */

void FUN_1029dce4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029dce80; end: 1029dcee7; -[_TtC27SCThirdPartyLoginSettingsUI38ThirdPartyLoginSettingsLoginSourceCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029dcebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029dcec0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dce80(long param_1)

{
  FUN_1029dd210(param_1 + _DAT_112ed5748);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed5750));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5758));
  return;
}



/* Entry: 1029dcee8; end: 1029dd093;  */

/* WARNING: Possible PIC construction at 0x0001029dcf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029dcf88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029dcff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029dd044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029dd054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029dd048) */
/* WARNING: Removing unreachable block (ram,0x0001029dcff4) */
/* WARNING: Removing unreachable block (ram,0x0001029dd070) */
/* WARNING: Removing unreachable block (ram,0x0001029dd00c) */
/* WARNING: Removing unreachable block (ram,0x000107c55278) */
/* WARNING: Removing unreachable block (ram,0x00010c1aa340) */
/* WARNING: Removing unreachable block (ram,0x0001029dcf8c) */
/* WARNING: Removing unreachable block (ram,0x0001029dcfc4) */
/* WARNING: Removing unreachable block (ram,0x0001029dcfac) */
/* WARNING: Removing unreachable block (ram,0x0001029dcfd8) */
/* WARNING: Removing unreachable block (ram,0x0001029dcf54) */
/* WARNING: Removing unreachable block (ram,0x0001029dd058) */

void FUN_1029dcee8(long param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c5d200();
  func_0x000107c61180();
  if (param_1 == 1) {
    func_0x0001029e1acc();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59e44(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1029dd094; end: 1029dd10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dd094(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ed5748;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_1029de6a4(param_1);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029dd10c; end: 1029dd1ef;  */

undefined * FUN_1029dd10c(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    func_0x0001000285a8(0x112ed5798);
    puVar3 = puVar7;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined1 *)(param_1 + 0x28);
    do {
      uVar8 = *(ulong *)(puVar9 + -8);
      uVar1 = *puVar9;
      uVar4 = uVar8;
      func_0x000101c86b58();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029dd1ec);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar8;
      *(undefined1 *)(*(long *)(puVar3 + 0x38) + uVar4) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029dd1f0);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + 0x10;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1029dd1f0; end: 1029dd20f;  */

void FUN_1029dd1f0(void)

{
  func_0x000107c61168(&PTR_PTR_11287b210);
  return;
}



/* Entry: 1029dd210; end: 1029dd233;  */

undefined8 FUN_1029dd210(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029dd234; end: 1029dd257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dd234(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ed5748;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_1029de6a4(lVar1);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029dd258; end: 1029dd42f;  */

undefined * FUN_1029dd258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  if (param_1 == 1) {
    ppuVar5 = &puStack_70;
    puVar1 = PTR_PTR_1126aebd8;
    func_0x000107c61168();
    uVar2 = 0xd000000000000055;
    func_0x000107c5fadc(0xd000000000000055,0x800000010f0d67d0);
    uVar3 = 0xd000000000000055;
    func_0x000107c5fadc(0xd000000000000055,0x800000010f0d6830);
    func_0x000107c5183c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    if (puVar1 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126ae560;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x0001048b0ec8(0);
      func_0x000107c610f8();
      uVar2 = 0xd00000000000001e;
      func_0x0001048b0b48(0xd00000000000001e,0x800000010f0d6890,0x27);
      puVar6 = &UNK_11057ff78;
      func_0x000107c613fc(&UNK_11057ff78,0x18,7);
      *(undefined **)(puVar6 + 0x10) = puVar4;
      pcStack_50 = FUN_1029dd430;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_100f4f500;
      puStack_58 = &UNK_11057ff90;
      puStack_48 = puVar6;
      func_0x000107c60bc4(&puStack_70);
      puVar6 = puStack_48;
      func_0x000107c61174(puVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c4226c(param_2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(uVar2);
      puVar6 = puVar4;
      func_0x000107c43bf4(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar4);
    }
    return puVar6;
  }
  return (undefined *)0x0;
}



/* Entry: 1029dd430; end: 1029dd457;  */

void FUN_1029dd430(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_completeWithValue__1125ae900,param_1);
  return;
}



/* Entry: 1029dd458; end: 1029dd7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1029dd458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar6 = auStack_60;
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_112ed57a0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112ed57a8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112ed57b0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1029dd10c();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined **)(unaff_x20 + _DAT_112ed57b8) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112ed57c0) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ed57c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed57d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed57d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed57e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ed57e8) = param_4;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  pcVar5 = 
  "init(onDemandResourceDownloader:notificationPool:thirdPartyLoginService:webBrowsingConfigProvider:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(unaff_x20 + _DAT_112ed57f0) = pcVar5;
  func_0x000107c61154(auStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  FUN_1029dd7b0();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  return puVar6;
}



/* Entry: 1029dd7b0; end: 1029dd8df;  */

/* WARNING: Removing unreachable block (ram,0x0001029dd8c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dd7b0(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *apuStack_60 [4];
  
  apuStack_60[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001029e0ac4(0,1,0);
  uVar5 = uRam0000000112ed5820;
  uVar1 = *(ulong *)(apuStack_60[0] + 0x10);
  puVar4 = (undefined *)(uVar1 + 1);
  if (*(ulong *)(apuStack_60[0] + 0x18) >> 1 <= uVar1) {
    func_0x0001029e0ac4(1 < *(ulong *)(apuStack_60[0] + 0x18),puVar4,1);
  }
  puVar3 = apuStack_60[0];
  *(undefined **)(apuStack_60[0] + 0x10) = puVar4;
  *(undefined8 *)(apuStack_60[0] + uVar1 * 0x10 + 0x20) = uVar5;
  apuStack_60[0][uVar1 * 0x10 + 0x28] = 0;
  func_0x0001000285a8(0x112ed5798,&UNK_10daff138);
  func_0x000107c60498();
  apuStack_60[0] = puVar4;
  FUN_1029e0174(puVar3,1,apuStack_60);
  puVar4 = apuStack_60[0];
  lVar2 = _DAT_112ed57b0;
  func_0x000107c61428(unaff_x20 + _DAT_112ed57b0,apuStack_60,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c6142c(uVar5);
  FUN_1029df054();
  return;
}



/* Entry: 1029dd8e0; end: 1029dd907; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController initWithCoder:] */

void FUN_1029dd8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1029e0f9c();
  return;
}



/* Entry: 1029dd908; end: 1029dd9b7; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dd908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar3 = param_1 + _DAT_112ed57a0;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar2 = lVar3;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar3 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029dd9b8; end: 1029dd9e3; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController initWithNibName:bundle:] */

void FUN_1029dd9b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCThirdPartyLoginSettingsUI.ThirdPartyLoginSettingsViewController",0x41,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dd9e4);
  (*pcVar1)();
}



/* Entry: 1029dd9e4; end: 1029dda43; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController initWithNibName:bundle:transitionType:] */

void FUN_1029dd9e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCThirdPartyLoginSettingsUI.ThirdPartyLoginSettingsViewController",0x41,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029dda10);
  (*pcVar1)();
}



/* Entry: 1029dda44; end: 1029ddafb; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029ddad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ddad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dda44(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed57d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed57d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed57e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed57e8));
  FUN_1029e18fc(param_1 + _DAT_112ed57a0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed57f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed57a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ed57b0));
  return;
}



/* Entry: 1029ddafc; end: 1029ddbdb;  */

undefined * FUN_1029ddafc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x000107c469d8(0,0,0,0);
  func_0x000107c53e08();
  func_0x000107c53fcc(puVar1);
  func_0x000107c58f5c(puVar1);
  puVar2 = puVar1;
  func_0x000107c526bc(puVar1);
  FUN_1029e1080();
  func_0x000107c59b9c(puVar1);
  func_0x000107c61170(puVar2);
  FUN_1029dd1f0(0);
  func_0x000107c614e8();
  uVar3 = 0x756f536e69676f4c;
  func_0x000107c5fadc(0x756f536e69676f4c,0xeb00000000656372);
  func_0x000107c4fbd4(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 1029ddbdc; end: 1029ddc0f; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController loadScrollView] */

void FUN_1029ddbdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029ddafc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029ddc10; end: 1029ddcb3; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController viewDidLoad] */

void FUN_1029ddc10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar3);
  uVar1 = param_1;
  func_0x000107c44ca0(param_1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001029e1e10();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar3);
  func_0x000107c59e18(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029ddcb4; end: 1029de0e7;  */

/* WARNING: Possible PIC construction at 0x0001029de06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029de070) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ddcb4(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar3 = 0;
  func_0x000107c5f7fc();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar5 = *(long *)(unaff_x20 + _DAT_112ed57e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar14 = _DAT_112ed57c8;
  if (lVar5 == 0) {
    return;
  }
  if ((*(byte *)(unaff_x20 + _DAT_112ed57c8) & 1) == 0) {
    puVar6 = &UNK_110580248;
    lStack_e8 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    lStack_e0 = lVar19;
    lStack_d8 = lVar4;
    lStack_d0 = lVar17;
    lStack_c8 = lVar15;
    lStack_c0 = lVar3;
    func_0x000107c613fc(&UNK_110580248,0x18,7);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1029dd10c();
    *(undefined **)(puVar6 + 0x10) = puVar7;
    puVar7 = &UNK_110580270;
    func_0x000107c613fc(&UNK_110580270,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = 0;
    puVar8 = puVar7;
    func_0x000107c60f34();
    *(undefined1 *)(unaff_x20 + lVar14) = 1;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    lVar14 = *(long *)(param_1 + 0x10);
    if (lVar14 != 0) {
      puVar18 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar16 = *puVar18;
        func_0x000107c60f38(puVar8);
        lVar3 = lVar5;
        func_0x000107c43194(lVar5);
        func_0x000107c61180();
        puVar9 = &UNK_110580298;
        func_0x000107c613fc(&UNK_110580298,0x30,7);
        *(undefined **)(puVar9 + 0x10) = puVar6;
        *(undefined8 *)(puVar9 + 0x18) = uVar16;
        *(undefined **)(puVar9 + 0x20) = puVar7;
        *(undefined **)(puVar9 + 0x28) = puVar8;
        uStack_80 = 0x1029e19d8;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_101c871e8;
        puStack_88 = &UNK_1105802b0;
        ppuVar10 = &puStack_a0;
        puStack_78 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar9 = puStack_78;
        func_0x000107c6157c(puVar6);
        func_0x000107c6157c(puVar7);
        func_0x000107c61174(puVar8);
        func_0x000107c61574(puVar9);
        func_0x000107c5dc64(lVar3);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(lVar3);
        lVar14 = lVar14 + -1;
        puVar18 = puVar18 + 1;
      } while (lVar14 != 0);
    }
    lVar14 = *(long *)(unaff_x20 + _DAT_112ed57f0);
    func_0x000107c4f7c0();
    func_0x000107c61180();
    lStack_f0 = lVar14;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029de0e8);
      (*pcVar2)();
    }
    puVar9 = &UNK_1105800e0;
    func_0x000107c613fc(&UNK_1105800e0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,unaff_x20);
    puVar11 = &UNK_1105802e8;
    func_0x000107c613fc(&UNK_1105802e8,0x28,7);
    *(undefined **)(puVar11 + 0x10) = puVar9;
    *(undefined **)(puVar11 + 0x18) = puVar7;
    *(undefined **)(puVar11 + 0x20) = puVar6;
    uStack_80 = 0x1029e19e4;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110580300;
    ppuVar10 = &puStack_a0;
    puStack_78 = puVar11;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(puVar7);
    func_0x000107c6157c(puVar9);
    lVar14 = lStack_e8;
    func_0x000107c5f808(lStack_e8);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar16 = 0x112d4af88;
    FUN_1029e19f0(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar12 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar13 = uVar12;
    func_0x0001001c7f30();
    lVar3 = lStack_d0;
    func_0x000107c60264(lStack_d0,&puStack_a8,uVar12,uVar13,lStack_c0,uVar16);
    func_0x000107c5ffb8(lVar14,lVar3,lStack_f0,ppuVar10);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1029de0e8; end: 1029de16f; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController viewWillAppear:] */

void FUN_1029de0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x0001000285a8(0x112ed5828,&UNK_10daff140);
  func_0x000107c61538();
  FUN_1029ddcb4();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029de170; end: 1029de177; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_1029de170(void)

{
  return 2;
}



/* Entry: 1029de178; end: 1029de1d7; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController tableView:viewForHeaderInSection:] */

void FUN_1029de178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029e1454(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1029de1d8; end: 1029de1df; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController tableView:viewForFooterInSection:] */

void FUN_1029de1d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1029de1e0; end: 1029de203; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController tableView:numberOfRowsInSection:] */

void FUN_1029de1e0(void)

{
  undefined8 in_x3;
  
  FUN_1029e1534(in_x3);
  return;
}



/* Entry: 1029de204; end: 1029de3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1029de204(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  
  uVar2 = 0x756f536e69676f4c;
  func_0x000107c5fadc(0x756f536e69676f4c,0xeb00000000656372);
  uVar4 = uVar2;
  func_0x000107c5efd4();
  uVar3 = param_1;
  func_0x000107c417dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar4 = 0;
  FUN_1029dd1f0(0);
  uVar5 = uVar3;
  func_0x000107c61484(uVar3,uVar4,0,0,0);
  *(undefined ***)(uVar5 + _DAT_112ed5748 + 8) = &PTR_DAT_11057ffb8;
  func_0x000107c61604();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed57d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(uVar5 + _DAT_112ed5750);
  *(undefined8 *)(uVar5 + _DAT_112ed5750) = uVar4;
  func_0x000107c615e8(uVar2);
  func_0x000107c61174();
  uVar6 = uVar3;
  func_0x000107c5efe4();
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029de3d4);
    (*pcVar1)();
  }
  func_0x000107c5eff4();
  func_0x000107c4d930();
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029de3d8);
    (*pcVar1)();
  }
  func_0x000107c30a60(1,uVar6,param_1);
  func_0x000107c59a2c(uVar5);
  func_0x000107c61170();
  func_0x000107c5eff4();
  if (uVar3 == 1) {
    func_0x000107c5efe4();
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029de3e0);
      (*pcVar1)();
    }
    lVar7 = *(long *)(unaff_x20 + _DAT_112ed57c0);
    if (*(ulong *)(lVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029de3e8);
      (*pcVar1)();
    }
    uVar4 = 0;
  }
  else {
    if (uVar3 != 0) {
      return uVar5;
    }
    func_0x000107c5efe4();
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029de3dc);
      (*pcVar1)();
    }
    lVar7 = *(long *)(unaff_x20 + _DAT_112ed57b8);
    if (*(ulong *)(lVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029de3e4);
      (*pcVar1)();
    }
    uVar4 = 1;
  }
  FUN_1029dcee8(*(undefined8 *)(lVar7 + uVar3 * 8 + 0x20),uVar4);
  return uVar5;
}



/* Entry: 1029de3e8; end: 1029de4af; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_1029de3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029de204(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029de4b0; end: 1029de5cb; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController tableView:heightForRowAtIndexPath:] */

undefined8
FUN_1029de4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5)
  ;
  uVar3 = 0;
  FUN_1029dd1f0(0);
  func_0x000107c61174();
  lVar4 = param_4;
  func_0x000107c5efe4();
  if (lVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029de5c8);
    (*pcVar1)();
  }
  func_0x000107c5eff4();
  lVar5 = param_4;
  func_0x000107c4d930();
  if (-1 < lVar5) {
    func_0x000107c614e8(uVar3);
    func_0x000107c30a60(1,lVar4,lVar5);
    func_0x000107c44dac(uVar3);
    func_0x000107c61170(param_4);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029de5cc);
  (*pcVar1)();
}



/* Entry: 1029de5cc; end: 1029de647; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController tableView:heightForHeaderInSection:] */

undefined8 FUN_1029de5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_4;
  func_0x000107c4d930();
  if (lVar1 < 1) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x0001029e1a30(0,0x112ed5830,&PTR_PTR_1126c3020);
    func_0x000107c614e8();
    func_0x000107c44db0();
  }
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 1029de648; end: 1029de6a3; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController tableView:heightForFooterInSection:] */

undefined8 FUN_1029de648(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  lVar1 = param_3;
  func_0x000107c4d930();
  uVar2 = *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
  if (lVar1 < 1) {
    uVar2 = 0x3ff0000000000000;
  }
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 1029de6a4; end: 1029de933;  */

/* WARNING: Possible PIC construction at 0x0001029de780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029de8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029de904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029de784) */
/* WARNING: Removing unreachable block (ram,0x0001029de854) */
/* WARNING: Removing unreachable block (ram,0x0001029de880) */
/* WARNING: Removing unreachable block (ram,0x0001029de8a0) */
/* WARNING: Removing unreachable block (ram,0x0001029de928) */
/* WARNING: Removing unreachable block (ram,0x0001029de8ac) */
/* WARNING: Removing unreachable block (ram,0x0001029de930) */
/* WARNING: Removing unreachable block (ram,0x0001029de8c4) */
/* WARNING: Removing unreachable block (ram,0x0001029de7a4) */
/* WARNING: Removing unreachable block (ram,0x0001029de8f0) */
/* WARNING: Removing unreachable block (ram,0x0001029de7ac) */
/* WARNING: Removing unreachable block (ram,0x0001029de7d8) */
/* WARNING: Removing unreachable block (ram,0x0001029de7f8) */
/* WARNING: Removing unreachable block (ram,0x0001029de924) */
/* WARNING: Removing unreachable block (ram,0x0001029de804) */
/* WARNING: Removing unreachable block (ram,0x0001029de92c) */
/* WARNING: Removing unreachable block (ram,0x0001029de81c) */
/* WARNING: Removing unreachable block (ram,0x0001029de8d4) */
/* WARNING: Removing unreachable block (ram,0x0001029de8dc) */

void FUN_1029de6a4(void)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_70 [32];
  
  lVar1 = 0;
  func_0x000107c5eff8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = unaff_x20;
  func_0x000107c4a714();
  if ((int)lVar1 != 0) {
    func_0x000107c51a60();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
      func_0x000107c61168(PTR__OBJC_CLASS___UITableView_1126aed40);
      lVar1 = unaff_x20;
      func_0x000107c6148c(unaff_x20,puVar2);
      if (lVar1 != 0) {
        func_0x000107c4534c();
        func_0x000107c61180();
        if (lVar1 != 0) {
          func_0x000107c5efdc(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          unaff_x20 = lVar1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
      return;
    }
  }
  return;
}



/* Entry: 1029de934; end: 1029ded37;  */

void FUN_1029de934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 unaff_x20;
  long lVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = param_1;
  func_0x0001029e1ab8();
  puVar4 = &UNK_1105800e0;
  func_0x000107c613fc(&UNK_1105800e0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110580108;
  func_0x000107c613fc(&UNK_110580108,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = param_1;
  func_0x000107c6157c(puVar4);
  func_0x000107c5fadc(lVar3,param_2);
  func_0x000107c6142c(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1029e1920;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_110580120;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x000107c3dac4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar3);
  puVar5 = puStack_78;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  lVar9 = 0x6c65636e6163;
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
  uVar10 = 0;
  func_0x000107c5fe40(0);
  lVar3 = lVar9;
  uVar11 = uVar10;
  func_0x000107c312f4(lVar9,uVar10);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  if (lVar3 != 0) {
    puStack_a0 = puVar1;
    pcStack_80 = FUN_1029dfd18;
    puStack_78 = (undefined *)0x0;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de205c;
    puStack_88 = &UNK_110580148;
    ppuVar6 = &puStack_a0;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c3dac4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
    puVar4 = puStack_78;
    func_0x000107c61574(puStack_78);
    FUN_1029e1ae0();
    lVar3 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    lVar13 = 0x48;
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    lVar9 = lVar3;
    lVar12 = 0;
    lVar15 = 0;
    if (param_1 == 1) {
      func_0x0001029e1acc();
      lVar12 = lVar9;
      lVar15 = lVar13;
    }
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    func_0x00010075bbf0();
    *(long *)(lVar3 + 0x40) = lVar9;
    lVar9 = 0;
    if (lVar15 != 0) {
      lVar9 = lVar12;
    }
    lVar12 = -0x2000000000000000;
    if (lVar15 != 0) {
      lVar12 = lVar15;
    }
    *(long *)(lVar3 + 0x20) = lVar9;
    *(long *)(lVar3 + 0x28) = lVar12;
    uVar10 = uVar11;
    func_0x000107c5fae0(puVar4,uVar11,lVar3);
    uVar14 = uVar10;
    func_0x000107c6142c(uVar11);
    func_0x000107c61574(lVar3);
    func_0x0001029e1bac();
    lVar9 = 0x112d360a8;
    FUN_1029e00fc(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x18) = 5;
    *(undefined8 *)(lVar9 + 0x10) = 2;
    *(undefined **)(lVar9 + 0x20) = puVar8;
    *(undefined **)(lVar9 + 0x28) = puVar7;
    puVar5 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar8);
    func_0x000107c61174(puVar7);
    func_0x000107c5fadc(puVar4,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c5fadc(lVar3,uVar14);
    func_0x000107c6142c(uVar14);
    uVar11 = 0;
    func_0x0001029e1a30(0,0x112d360a8,&PTR_PTR_1126aed70);
    lVar12 = lVar9;
    func_0x000107c5fc48(lVar9,uVar11);
    func_0x000107c61574(lVar9);
    func_0x000107c48d50(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar12);
    func_0x000107c4f018(unaff_x20);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ded38);
  (*pcVar2)();
}



/* Entry: 1029ded38; end: 1029def93;  */

/* WARNING: Possible PIC construction at 0x0001029deef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029def58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029deef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1029ded38(undefined8 param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112ed57e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar1 = _DAT_112ed57c8;
  if (pcVar2 == (char *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return (char *)0x0;
    }
LAB_1029def90:
    func_0x000107c60e78();
    return (char *)(ulong)(*pcVar2 == *param_2);
  }
  if ((*(byte *)(unaff_x20 + _DAT_112ed57c8) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ed57c8) = 1;
    pcVar3 = pcVar2;
    func_0x000107c49678();
    uVar4 = 0;
    if ((int)pcVar3 == 0) {
      uVar8 = uVar4;
      func_0x000107c61174();
      func_0x000107c5ed30(0);
      func_0x000107c61170(uVar8);
      func_0x000107c61654();
      *(undefined1 *)(unaff_x20 + lVar1) = 0;
      func_0x000107c614b0(uVar4);
      FUN_1029df604(uVar4);
      func_0x000107c614ac(uVar4);
      func_0x000107c614ac(uVar4);
    }
    else {
      func_0x000107c61174();
      pcVar3 = pcVar2;
      func_0x000107c4c030(pcVar2);
      func_0x000107c61180();
      uVar4 = 0x112ed5868;
      func_0x0001000285a8(0x112ed5868,&UNK_10daff280);
      func_0x0001000b637c(pcVar3,uVar4);
      plVar5 = (long *)0x1;
      func_0x00010061b458();
      func_0x000107c61574(pcVar3);
      puVar6 = &UNK_1105800e0;
      func_0x000107c613fc(&UNK_1105800e0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_1105801d0;
      func_0x000107c613fc(&UNK_1105801d0,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = param_1;
      uVar4 = 0x1029e194c;
      puVar6 = puVar7;
      (**(code **)(*plVar5 + 0x60))(0x1029e194c);
      func_0x000107c61574(plVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c614f0(uVar4);
      (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112ed57a8),uVar4,puVar6);
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) goto LAB_1029def90;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return pcVar2;
}



/* Entry: 1029def94; end: 1029defa7;  */

bool FUN_1029def94(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1029defa8; end: 1029df053;  */

void FUN_1029defa8(void)

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



/* Entry: 1029df054; end: 1029df3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029df054(void)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *apuStack_58 [3];
  
  lVar3 = lRam0000000112ed5820;
  lVar10 = _DAT_112ed57b0;
  ppuVar8 = apuStack_58;
  func_0x000107c61428(unaff_x20 + _DAT_112ed57b0,ppuVar8,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar9 + 0x10) == 0) {
    func_0x000107c614a8(apuStack_58);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar9);
    lVar4 = lVar3;
    func_0x000101c86b58();
    if (((ulong)ppuVar8 & 1) == 0) {
      func_0x000107c614a8(apuStack_58);
      func_0x000107c6142c(lVar9);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      cVar2 = *(char *)(*(long *)(lVar9 + 0x38) + lVar4);
      func_0x000107c614a8(apuStack_58);
      func_0x000107c6142c(lVar9);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (cVar2 == '\x01') {
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c61558();
        apuStack_58[0] = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_1029e0aa8(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_58[0] + 0x10);
        if (*(ulong *)(apuStack_58[0] + 0x18) >> 1 <= uVar1) {
          FUN_1029e0aa8(1 < *(ulong *)(apuStack_58[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_58[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_58[0] + uVar1 * 8 + 0x20) = lVar3;
        puVar7 = apuStack_58[0];
      }
    }
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ed57b8);
  *(undefined **)(unaff_x20 + _DAT_112ed57b8) = puVar7;
  func_0x000107c6142c(uVar6);
  lVar3 = lRam0000000112ed5820;
  ppuVar8 = apuStack_58;
  func_0x000107c61428(unaff_x20 + lVar10,ppuVar8,0x20,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar10 + 0x10) == 0) {
    func_0x000107c614a8(apuStack_58);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar10);
    lVar9 = lVar3;
    func_0x000101c86b58();
    if (((ulong)ppuVar8 & 1) == 0) {
      func_0x000107c614a8(apuStack_58);
      func_0x000107c6142c(lVar10);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      cVar2 = *(char *)(*(long *)(lVar10 + 0x38) + lVar9);
      func_0x000107c614a8(apuStack_58);
      func_0x000107c6142c(lVar10);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (cVar2 == '\x02') {
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c61558();
        apuStack_58[0] = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_1029e0aa8(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_58[0] + 0x10);
        if (*(ulong *)(apuStack_58[0] + 0x18) >> 1 <= uVar1) {
          FUN_1029e0aa8(1 < *(ulong *)(apuStack_58[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_58[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_58[0] + uVar1 * 8 + 0x20) = lVar3;
        puVar7 = apuStack_58[0];
      }
    }
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ed57c0);
  *(undefined **)(unaff_x20 + _DAT_112ed57c0) = puVar7;
  func_0x000107c6142c(uVar6);
  lVar10 = unaff_x20;
  func_0x000107c4a714();
  if ((int)lVar10 != 0) {
    func_0x000107c51a60();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar7 = PTR__OBJC_CLASS___UITableView_1126aed40;
      func_0x000107c61168(PTR__OBJC_CLASS___UITableView_1126aed40);
      lVar10 = unaff_x20;
      func_0x000107c6148c(unaff_x20,puVar7);
      if (lVar10 != 0) {
        func_0x000107c4fd7c();
      }
      func_0x000107c61170(unaff_x20);
    }
  }
  return;
}



/* Entry: 1029df3f8; end: 1029df603;  */

void FUN_1029df3f8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  if (((uint)param_1 & 0xff) == 3) {
    uVar2 = param_2;
    func_0x000107c61434(uVar4);
    func_0x000101c86b58(param_2);
    func_0x000107c6142c(uVar4);
    if ((uVar2 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      uVar4 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_1029e06e8();
      }
      FUN_1029e0df4(param_2,uVar4);
      *unaff_x20 = uVar4;
    }
  }
  else {
    func_0x000107c61558(uVar4);
    uVar3 = *unaff_x20;
    FUN_1029e0cdc(param_1,param_2,uVar4);
    *unaff_x20 = uVar3;
  }
  return;
}



/* Entry: 1029df604; end: 1029df8d3;  */

/* WARNING: Possible PIC construction at 0x0001029df654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029df6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029df750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029df7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029df850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029df890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029df8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029df8ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029df894) */
/* WARNING: Removing unreachable block (ram,0x0001029df854) */
/* WARNING: Removing unreachable block (ram,0x0001029df8a8) */
/* WARNING: Removing unreachable block (ram,0x0001029df870) */
/* WARNING: Removing unreachable block (ram,0x0001029df7c8) */
/* WARNING: Removing unreachable block (ram,0x0001029df754) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x0001029df6f0) */
/* WARNING: Removing unreachable block (ram,0x0001029df6fc) */
/* WARNING: Removing unreachable block (ram,0x0001029df710) */
/* WARNING: Removing unreachable block (ram,0x0001029df704) */
/* WARNING: Removing unreachable block (ram,0x0001029df730) */
/* WARNING: Removing unreachable block (ram,0x0001029df770) */
/* WARNING: Removing unreachable block (ram,0x0001029df740) */
/* WARNING: Removing unreachable block (ram,0x0001029df658) */
/* WARNING: Removing unreachable block (ram,0x0001029df66c) */
/* WARNING: Removing unreachable block (ram,0x0001029df698) */
/* WARNING: Removing unreachable block (ram,0x0001029df674) */
/* WARNING: Removing unreachable block (ram,0x0001029df6b8) */
/* WARNING: Removing unreachable block (ram,0x0001029df74c) */
/* WARNING: Removing unreachable block (ram,0x0001029df6c8) */
/* WARNING: Removing unreachable block (ram,0x0001029df8a4) */
/* WARNING: Removing unreachable block (ram,0x0001029df8b0) */

void FUN_1029df604(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c614b0();
    func_0x000107c5ed2c(param_1);
    func_0x000107c42210();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1029df8d4; end: 1029dfa23;  */

/* WARNING: Possible PIC construction at 0x0001029dfa00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029dfa04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029df8d4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed57e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(unaff_x20 + _DAT_112ed57c8) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ed57c8) = 1;
    func_0x000107c41704();
    func_0x000107c61180();
    puVar2 = &UNK_1105800e0;
    func_0x000107c613fc(&UNK_1105800e0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_110580180;
    func_0x000107c613fc(&UNK_110580180,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    uStack_50 = 0x1029e1944;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101c871e4;
    puStack_58 = &UNK_110580198;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c5dc64(lVar1);
    func_0x000107c60bd0(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1029dfa24; end: 1029dfb03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dfa24(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + _DAT_112ed57c8) = 0;
    lVar1 = _DAT_112ed57b0;
    if (param_2 == 0) {
      func_0x000107c61428(param_3 + _DAT_112ed57b0,auStack_60,0x21,0);
      uVar2 = *(undefined8 *)(param_3 + lVar1);
      func_0x000107c61558(uVar2);
      uVar3 = *(undefined8 *)(param_3 + lVar1);
      *(undefined8 *)(param_3 + lVar1) = 0x8000000000000000;
      FUN_1029e0cdc(2,param_4,uVar2);
      *(undefined8 *)(param_3 + lVar1) = uVar3;
      func_0x000107c614a8(auStack_60);
      FUN_1029df054();
    }
    else {
      FUN_1029df604(param_2);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1029dfb04; end: 1029dfc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dfb04(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112ed57f0);
    puVar1 = &UNK_1105801f8;
    func_0x000107c613fc(&UNK_1105801f8,0x28,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = uVar3;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    pcStack_68 = FUN_1029e1954;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110580210;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 1029dfc20; end: 1029dfcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029dfc20(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed57b0;
  func_0x000107c61428(param_2 + _DAT_112ed57b0,auStack_48,0x21,0);
  uVar2 = *(undefined8 *)(param_2 + lVar1);
  func_0x000107c61558(uVar2);
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
  FUN_1029e0cdc(1,param_3,uVar2);
  *(undefined8 *)(param_2 + lVar1) = uVar3;
  func_0x000107c614a8(auStack_48);
  FUN_1029df054();
  return;
}



/* Entry: 1029dfcb0; end: 1029dfd17;  */

void FUN_1029dfcb0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c420a8(param_1,param_2,1,0);
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1029df8d4(param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1029dfd18; end: 1029dfd23;  */

void FUN_1029dfd18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1029dfd24; end: 1029dfd2b; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController pageViewName] */

undefined8 FUN_1029dfd24(void)

{
  return 0x148;
}



/* Entry: 1029dfd2c; end: 1029dfdb7;  */

void FUN_1029dfd2c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029e19f0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029dfdb8,uVar2,uVar3);
  return;
}



/* Entry: 1029dfdb8; end: 1029dfde7;  */

void FUN_1029dfdb8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001029dfde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029dfde8; end: 1029dff13; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController exit:] */

void FUN_1029dfde8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110580068;
  func_0x000107c613fc(&UNK_110580068,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110580090;
  func_0x000107c613fc(&UNK_110580090,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10daff250;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1105800b8;
  func_0x000107c613fc(&UNK_1105800b8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10daff260;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10daff270,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1029dff14; end: 1029dffab;  */

void FUN_1029dff14(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029e19f0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029dffac,uVar2,uVar3);
  return;
}



/* Entry: 1029dffac; end: 1029e0017;  */

void FUN_1029dffac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574();
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x000107c5fca8(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029e0018,uVar3,uVar2);
  return;
}



/* Entry: 1029e0018; end: 1029e0057;  */

void FUN_1029e0018(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar1 + 0x10))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001029e0054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029e0058; end: 1029e007f; -[_TtC27SCThirdPartyLoginSettingsUI37ThirdPartyLoginSettingsViewController backgroundExitBehavior] */

void FUN_1029e0058(void)

{
  func_0x00010451429c(0);
  func_0x000104514100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029e0080; end: 1029e00fb;  */

void FUN_1029e0080(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001029e00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1029e00fc; end: 1029e0173;  */

void FUN_1029e00fc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001029e1a30(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1029e0174; end: 1029e04c3;  */

void FUN_1029e0174(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 == 0) {
    func_0x000107c6142c(param_1);
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x20);
    uVar2 = *(undefined1 *)(param_1 + 0x28);
    lVar9 = *param_3;
    uVar11 = uVar10;
    uVar5 = param_2;
    func_0x000101c86b58();
    lVar6 = *(long *)(lVar9 + 0x10);
    uVar7 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar6 + uVar7;
    if (SCARRY8(lVar6,uVar7)) {
LAB_1029e040c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1029e0410);
      (*pcVar3)();
    }
    if (*(long *)(lVar9 + 0x18) < lVar1) {
      uVar7 = (ulong)((uint)param_2 & 1);
      FUN_1029e0834(lVar1);
      uVar11 = uVar10;
      func_0x000101c86b58();
      if (((uint)uVar5 & 1) != ((uint)uVar7 & 1)) {
LAB_1029e0210:
        func_0x000107c60624(&UNK_1106b67a0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029e0220);
        (*pcVar3)();
      }
    }
    else {
      uVar7 = uVar5;
      if ((param_2 & 1) == 0) {
        FUN_1029e06e8();
      }
    }
    if ((uVar5 & 1) == 0) {
      lVar6 = *param_3;
      lVar1 = lVar6 + (uVar11 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar11 & 0x3f);
      *(ulong *)(*(long *)(lVar6 + 0x30) + uVar11 * 8) = uVar10;
      *(undefined1 *)(*(long *)(lVar6 + 0x38) + uVar11) = uVar2;
      if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
LAB_1029e0410:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029e0414);
        (*pcVar3)();
      }
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
      if (uVar13 != 1) {
        puVar12 = (undefined1 *)(param_1 + 0x38);
        uVar11 = 1;
        do {
          if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1029e0418);
            (*pcVar3)();
          }
          uVar10 = *(ulong *)(puVar12 + -8);
          uVar2 = *puVar12;
          lVar9 = *param_3;
          uVar5 = uVar10;
          func_0x000101c86b58();
          lVar6 = *(long *)(lVar9 + 0x10);
          uVar8 = (ulong)~(uint)uVar7 & 1;
          lVar1 = lVar6 + uVar8;
          if (SCARRY8(lVar6,uVar8)) goto LAB_1029e040c;
          uVar8 = uVar7;
          if (*(long *)(lVar9 + 0x18) < lVar1) {
            uVar8 = 1;
            FUN_1029e0834(lVar1);
            uVar5 = uVar10;
            func_0x000101c86b58();
            if (((uint)uVar7 & 1) != ((uint)uVar8 & 1)) goto LAB_1029e0210;
          }
          if ((uVar7 & 1) != 0) goto LAB_1029e023c;
          lVar6 = *param_3;
          lVar1 = lVar6 + (uVar5 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
          *(ulong *)(*(long *)(lVar6 + 0x30) + uVar5 * 8) = uVar10;
          *(undefined1 *)(*(long *)(lVar6 + 0x38) + uVar5) = uVar2;
          if (SCARRY8(*(long *)(lVar6 + 0x10),1)) goto LAB_1029e0410;
          uVar11 = uVar11 + 1;
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
          puVar12 = puVar12 + 0x10;
          uVar7 = uVar8;
        } while (uVar13 != uVar11);
      }
      func_0x000107c6142c(param_1);
    }
    else {
LAB_1029e023c:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c6142c(param_1);
      func_0x000107c614b0(puVar4);
      uVar13 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar13 & 1) != 0) {
        uStack_70 = 0;
        uStack_68 = 0xe000000000000000;
        func_0x000107c602fc(0x1e);
        func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
        uStack_78 = uVar10;
        func_0x000107c603d0(&uStack_78,&uStack_70,&UNK_1106b67a0,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0x27,0xe100000000000000);
        func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                            "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029e04c4);
        (*pcVar3)();
      }
      func_0x000107c614ac(puVar4);
    }
  }
  return;
}



/* Entry: 1029e04c4; end: 1029e06e7;  */

void FUN_1029e04c4(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_1 + 0x40);
  pcVar2 = param_2;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar13 = 0;
  while( true ) {
    while (uVar12 != 0) {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar13 << 6;
      uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar6 * 8);
      uStack_68 = *(undefined1 *)(*(long *)(param_1 + 0x38) + uVar6);
      (*param_2)(&uStack_80,&uStack_70);
      uVar1 = uStack_78;
      uVar6 = uStack_80;
      lVar11 = *param_5;
      uVar4 = uStack_80;
      func_0x000101c86b58();
      lVar7 = *(long *)(lVar11 + 0x10);
      uVar10 = (ulong)~(uint)pcVar2 & 1;
      lVar8 = lVar7 + uVar10;
      if (SCARRY8(lVar7,uVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e06d4);
        (*pcVar2)();
      }
      if (*(long *)(lVar11 + 0x18) < lVar8) {
        pcVar5 = (code *)(ulong)(param_4 & 1);
        FUN_1029e0834(lVar8);
        uVar4 = uVar6;
        func_0x000101c86b58();
        if (((uint)pcVar2 & 1) != ((uint)pcVar5 & 1)) {
          func_0x000107c60624(&UNK_1106b67a0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e06e8);
          (*pcVar2)();
        }
      }
      else {
        pcVar5 = pcVar2;
        if ((param_4 & 1) == 0) {
          FUN_1029e06e8();
        }
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar8 = *param_5;
      if (((ulong)pcVar2 & 1) == 0) {
        lVar7 = lVar8 + (uVar4 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
        *(ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 8) = uVar6;
        *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar4) = uVar1;
        if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e06d8);
          (*pcVar2)();
        }
        *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
      }
      else {
        *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar4) = uVar1;
      }
      param_4 = 1;
      pcVar2 = pcVar5;
    }
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e06d0);
      (*pcVar2)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar13) break;
    uVar12 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  func_0x000107c61578(param_3,2);
  func_0x000107c6142c(param_1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1029e06e8; end: 1029e0833;  */

void FUN_1029e06e8(void)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112ed5798,&UNK_10daff138);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar10 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar10 + 0x40);
    lVar8 = lVar6;
    if (uVar5 == 0) goto LAB_1029e07c0;
    do {
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
      while( true ) {
        uVar2 = *(undefined1 *)(*(long *)(lVar10 + 0x38) + uVar9);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar9 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9 * 8);
        *(undefined1 *)(*(long *)(lVar4 + 0x38) + uVar9) = uVar2;
        lVar8 = lVar6;
        if (uVar5 != 0) break;
LAB_1029e07c0:
        do {
          lVar6 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1029e0834);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar6) goto LAB_1029e0814;
          uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      }
    } while( true );
  }
LAB_1029e0814:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1029e0834; end: 1029e0aa7;  */

void FUN_1029e0834(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112ed5798;
  func_0x0001000285a8(0x112ed5798,&UNK_10daff138);
  lVar6 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1029e0a74:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  puVar15 = (ulong *)(lVar13 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar6 + 0x40;
  lVar8 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1029e0aa4);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar14 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          goto LAB_1029e0a74;
        }
        uVar14 = puVar15[lVar17];
        lVar8 = lVar8 + 1;
      } while (uVar14 == 0);
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar17 << 6;
    uVar16 = *(ulong *)(*(long *)(lVar13 + 0x30) + uVar7 * 8);
    uVar2 = *(undefined1 *)(*(long *)(lVar13 + 0x38) + uVar7);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    uVar11 = uVar16;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar11 = uVar11 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar11 >> 6;
    uVar7 = -1L << (uVar11 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar12 >> 6;
      do {
        uVar11 = uVar9 + 1;
        if ((uVar11 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1029e0aa8);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar11 != uVar7) {
          uVar9 = uVar11;
        }
        bVar3 = (bool)(uVar11 == uVar7 | bVar3);
        uVar11 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar11 == 0xffffffffffffffff);
      uVar11 = ~uVar11;
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = uVar16;
    *(undefined1 *)(*(long *)(lVar6 + 0x38) + uVar7) = uVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar17;
  } while( true );
}



/* Entry: 1029e0aa8; end: 1029e0adf;  */

void FUN_1029e0aa8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1029e0ae0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1029e0ae0; end: 1029e0cdb;  */

undefined * FUN_1029e0ae0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e0be0);
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
    puVar3 = (undefined *)0x112ed5828;
    func_0x0001000285a8(0x112ed5828,&UNK_10daff140);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1029e0cdc; end: 1029e0df3;  */

void FUN_1029e0cdc(undefined1 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000101c86b58();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e0d88);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_1029e0834(lVar5);
    uVar2 = param_2;
    func_0x000101c86b58();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1106b67a0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e0d6c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1029e06e8();
    lVar5 = *unaff_x20;
    goto joined_r0x0001029e0d9c;
  }
  lVar5 = *unaff_x20;
joined_r0x0001029e0d9c:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
    *(undefined1 *)(*(long *)(lVar5 + 0x38) + uVar2) = param_1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e0df4);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    *(undefined1 *)(*(long *)(lVar5 + 0x38) + uVar2) = param_1;
  }
  return;
}



/* Entry: 1029e0df4; end: 1029e0f87;  */

void FUN_1029e0df4(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      uVar8 = *(ulong *)(*(long *)(param_2 + 0x30) + uVar9 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = uVar8 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_1029e0ecc:
          if ((long)param_1 < (long)uVar8) goto LAB_1029e0e70;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 8);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2 || param_1 != uVar9)) {
          *puVar2 = *puVar3;
        }
        puVar4 = (undefined1 *)(*(long *)(param_2 + 0x38) + param_1);
        puVar5 = (undefined1 *)(*(long *)(param_2 + 0x38) + uVar9);
        if ((((long)param_1 < (long)uVar9) || (puVar5 + 1 <= puVar4)) || (param_1 != uVar9)) {
          *puVar4 = *puVar5;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_1029e0ecc;
LAB_1029e0e70:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1029e0f88);
  (*pcVar6)();
}



/* Entry: 1029e0f88; end: 1029e0f9b;  */

void FUN_1029e0f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 1029e0f9c; end: 1029e107f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e0f9c(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ed57a0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112ed57a8;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  lVar1 = _DAT_112ed57b0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1029dd10c();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  *(undefined **)(unaff_x20 + _DAT_112ed57b8) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112ed57c0) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ed57c8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCThirdPartyLoginSettingsUI/ThirdPartyLoginSettingsViewController.swift",0x47
                      ,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1029e1080);
  (*pcVar3)();
}



/* Entry: 1029e1080; end: 1029e1453;  */

undefined * FUN_1029e1080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  dVar10 = 0.0;
  dVar11 = 0.0;
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5a100();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x0001029e1d44();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1);
  func_0x000107c55f80(puVar1);
  func_0x000107c56ba8(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar2);
  dVar11 = dVar11 + -40.0 + -40.0;
  func_0x000107c576a8(dVar11,puVar1);
  func_0x000107c4ecb4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  func_0x000107c498ec();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(0,0,dVar11 + 40.0 + 40.0,dVar10 + 16.0 + 16.0);
  func_0x000107c3d89c();
  func_0x000107c5a050(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar4 = 0x112d360b8;
  FUN_1029e00fc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 9;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  puVar5 = puVar1;
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c4ace0(puVar2);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40284(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar4 + 0x20) = puVar7;
  puVar5 = puVar1;
  func_0x000107c50890();
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c50890(puVar2);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40284(0xc044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar4 + 0x28) = puVar7;
  puVar5 = puVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c5cbe4(puVar2);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar4 + 0x30) = puVar7;
  puVar5 = puVar1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar6 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40284(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar4 + 0x38) = puVar7;
  uVar8 = 0;
  func_0x0001029e1a30(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar9 = lVar4;
  func_0x000107c5fc48(lVar4,uVar8);
  func_0x000107c61574(lVar4);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar9);
  return puVar2;
}



/* Entry: 1029e1454; end: 1029e1533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029e1454(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (param_1 == 1) {
    if (*(long *)(*(long *)(unaff_x20 + _DAT_112ed57c0) + 0x10) == 0) {
      return (undefined *)0x0;
    }
    func_0x0001029e1fb0();
  }
  else {
    if ((param_1 != 0) || (*(long *)(*(long *)(unaff_x20 + _DAT_112ed57b8) + 0x10) == 0)) {
      return (undefined *)0x0;
    }
    FUN_1029e1edc();
  }
  puVar1 = PTR_PTR_1126c3020;
  func_0x000107c610f8(PTR_PTR_1126c3020);
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c59a2c(puVar1);
  return puVar1;
}



/* Entry: 1029e1534; end: 1029e156b;  */

undefined8 FUN_1029e1534(long param_1)

{
  long *plVar1;
  long unaff_x20;
  
  if (param_1 == 0) {
    plVar1 = (long *)&DAT_112ed57b8;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    plVar1 = (long *)&DAT_112ed57c0;
  }
  return *(undefined8 *)(*(long *)(unaff_x20 + *plVar1) + 0x10);
}



/* Entry: 1029e156c; end: 1029e158b;  */

void FUN_1029e156c(void)

{
  func_0x000107c61168(&PTR_PTR_11287b2e8);
  return;
}



/* Entry: 1029e158c; end: 1029e16f3;  */

int FUN_1029e158c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1029e1608;
        goto LAB_1029e15ec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1029e15ec:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1029e1608:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1029e16f4; end: 1029e1733;  */

void FUN_1029e16f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed5860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daff214;
  func_0x000107c61520(&UNK_10daff214,&UNK_110580048);
  puRam0000000112ed5860 = puVar1;
  return;
}



/* Entry: 1029e1734; end: 1029e1797;  */

void FUN_1029e1734(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1029e1798;
  plVar5[2] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec(0,uVar1);
  puVar2 = PTR___sScMMa_11034fc70;
  plVar5[3] = lVar3;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[4] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1029e19f0(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  plVar5[5] = lVar4;
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029dffac,lVar3,lVar4);
  return;
}



/* Entry: 1029e1798; end: 1029e17d3;  */

void FUN_1029e1798(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001029e17d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1029e17d4; end: 1029e184b;  */

void FUN_1029e17d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1029e1a9c;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}


