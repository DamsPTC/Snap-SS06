/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103456bfc; end: 103456cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103456bfc(undefined8 param_1,long param_2)

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
    FUN_10344c2a8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f6b9a0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103456cd4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f6b9a8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f6c908);
    *(long **)(unaff_x20 + _DAT_112f6c908) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103456cd4; end: 103456cfb; -[SCSCSnapEditorScopedServicesSaberEntryPoint begin] */

void FUN_103456cd4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103456bfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103456cfc; end: 103456e73;  */

/* WARNING: Possible PIC construction at 0x000103456d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103456dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103456d68) */
/* WARNING: Removing unreachable block (ram,0x000103456e00) */
/* WARNING: Removing unreachable block (ram,0x000103456e18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103456cfc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f6c908);
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



/* Entry: 103456e74; end: 103456e7b;  */

void FUN_103456e74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103456e7c; end: 103456eaf; -[SCSCSnapEditorScopedServicesSaberEntryPoint end] */

void FUN_103456e7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103456cfc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103456eb0; end: 103456fcf;  */

void FUN_103456eb0(long param_1,long param_2,long param_3)

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
                        "SnapEditorScopeGraphBridge/SCSCSnapEditorScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x40,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103456fd0);
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



/* Entry: 103456fd0; end: 10345707b; -[SCSCSnapEditorScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103456fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103456eb0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10345707c; end: 1034570db; -[SCSCSnapEditorScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345707c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f6c900,0);
  *(undefined8 *)(param_1 + _DAT_112f6c908) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034570dc; end: 10345710f;  */

void FUN_1034570dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103457110; end: 103457147; -[SCSCSnapEditorScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103457110(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f6c900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6c908));
  return;
}



/* Entry: 103457148; end: 103457167;  */

void FUN_103457148(void)

{
  func_0x000107c61168(&PTR_PTR_1128dbbe0);
  return;
}



/* Entry: 103457168; end: 10345716f; -[_TtC30LensCarouselPreviewIntegration50LensCarouselPreviewActivationConfigurationProvider selectionWithActivationSelection:] */

void FUN_103457168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(param_3);
  return;
}



/* Entry: 103457170; end: 1034571c7; -[_TtC30LensCarouselPreviewIntegration50LensCarouselPreviewActivationConfigurationProvider activationUIConfigurationFor:] */

void FUN_103457170(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_3;
  if (param_3 == 0) {
    puVar1 = (undefined8 *)0x0;
    func_0x0001044ff654();
    func_0x00010450e7f8();
    uVar2 = *puVar1;
    func_0x000107c61174(uVar2);
    lVar3 = 1;
    func_0x0001044fca38(1,uVar2);
  }
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1034571c8; end: 1034571db; -[_TtC30LensCarouselPreviewIntegration50LensCarouselPreviewActivationConfigurationProvider updateLastAppliedConfiguration:] */

void FUN_1034571c8(void)

{
  return;
}



/* Entry: 1034571dc; end: 1034571fb;  */

void FUN_1034571dc(void)

{
  func_0x000107c61168(&PTR_PTR_112f6c978);
  return;
}



/* Entry: 1034571fc; end: 10345720b;  */

void FUN_1034571fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345720c; end: 10345722b;  */

void FUN_10345720c(void)

{
  func_0x000107c61168(&PTR_PTR_112f6ca10);
  return;
}



/* Entry: 10345722c; end: 103457287;  */

void FUN_10345722c(void)

{
  func_0x0001000285a8(0x112eb3590,&UNK_10dac8838);
  func_0x000104886440();
  return;
}



/* Entry: 103457288; end: 10345728b;  */

void FUN_103457288(void)

{
  return;
}



/* Entry: 10345728c; end: 1034572af;  */

void FUN_10345728c(undefined8 param_1,code *param_2)

{
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1034572b0; end: 1034572b3;  */

void FUN_1034572b0(void)

{
  return;
}



/* Entry: 1034572b4; end: 103457333;  */

void FUN_1034572b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = &UNK_10dbcabf0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  uVar2 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined4 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103457334; end: 10345747b;  */

void FUN_103457334(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar5 = &puStack_80;
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x38) = 1;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = &UNK_110657f98;
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_110657f98,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_103457a70;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100b83e24;
    puStack_68 = &UNK_110657fb0;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c4db94(uVar6);
    func_0x000107c60bd0(ppuVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c613fc(&UNK_110657f98,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcStack_60 = (code *)0x103457a94;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined *)0x103457abc;
    puStack_68 = &UNK_110657fd8;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c4db94(uVar6);
    func_0x000107c60bd0(ppuVar5);
  }
  return;
}



/* Entry: 10345747c; end: 103457617;  */

void FUN_10345747c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      lVar1 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c3d1a0();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x0001000b637c();
      func_0x000107c61170(lVar1);
      uVar3 = 0x103457aac;
      func_0x0001000bfde0(0x103457aac,0,PTR___sSbN_11034dd40);
      func_0x000107c61574(lVar2);
      plVar7 = *(long **)(param_2 + 0x28);
      plVar4 = plVar7;
      func_0x000107c615f0();
      func_0x000100471e0c();
      func_0x000107c61574(uVar3);
      func_0x000107c615e8(plVar7);
      puVar5 = &UNK_110657f98;
      func_0x000107c613fc(&UNK_110657f98,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,param_2);
      uVar3 = 0x103457aa4;
      puVar6 = puVar5;
      (**(code **)(*plVar4 + 0x60))(0x103457aa4);
      func_0x000107c61574(plVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c614f0(uVar3);
      pcVar8 = *(code **)(puVar6 + 0x18);
      func_0x000107c6157c(*(undefined8 *)(param_2 + 0x30));
      (*pcVar8)();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(uVar3);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 103457618; end: 103457673;  */

void FUN_103457618(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103457674(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103457674; end: 10345775b;  */

/* WARNING: Possible PIC construction at 0x0001034576e4: Changing call to branch */

void FUN_103457674(byte param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 + 0x38) != '\x01') || ((param_1 & 1) == *(byte *)(unaff_x20 + 0x39))) {
    return;
  }
  *(byte *)(unaff_x20 + 0x39) = param_1 & 1;
  if ((param_1 & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x3a) = 0;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4500c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c5be74();
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      if (*(char *)(unaff_x20 + 0x3b) != '\x01') {
        return;
      }
      *(undefined1 *)(unaff_x20 + 0x3a) = 1;
      func_0x000107c4500c();
      func_0x000107c61180();
      if (lVar2 == 0) {
        return;
      }
      func_0x000107c4e47c();
    }
    else {
      func_0x000107c5bbc0();
      func_0x000107c61180();
      func_0x000107c61170();
      lVar2 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10345775c; end: 1034578f7;  */

void FUN_10345775c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      lVar1 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c4b188();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x0001000b637c();
      func_0x000107c61170(lVar1);
      uVar3 = 0x103457ab0;
      func_0x0001000bfde0(0x103457ab0,0,PTR___sSbN_11034dd40);
      func_0x000107c61574(lVar2);
      plVar7 = *(long **)(param_2 + 0x28);
      plVar4 = plVar7;
      func_0x000107c615f0();
      func_0x000100471e0c();
      func_0x000107c61574(uVar3);
      func_0x000107c615e8(plVar7);
      puVar5 = &UNK_110657f98;
      func_0x000107c613fc(&UNK_110657f98,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,param_2);
      uVar3 = 0x103457a9c;
      puVar6 = puVar5;
      (**(code **)(*plVar4 + 0x60))(0x103457a9c);
      func_0x000107c61574(plVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c614f0(uVar3);
      pcVar8 = *(code **)(puVar6 + 0x18);
      func_0x000107c6157c(*(undefined8 *)(param_2 + 0x30));
      (*pcVar8)();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(uVar3);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1034578f8; end: 1034579c3;  */

void FUN_1034578f8(byte *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  bVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (((*(char *)(param_2 + 0x38) == '\x01') &&
      (*(byte *)(param_2 + 0x3b) = bVar1, (*(byte *)(param_2 + 0x39) & 1) != 0)) &&
     (bVar1 != *(byte *)(param_2 + 0x3a))) {
    *(byte *)(param_2 + 0x3a) = bVar1;
    uVar2 = *(ulong *)(param_2 + 0x10);
    func_0x000107c4500c();
    func_0x000107c61180();
    if ((bVar1 & 1) == 0) {
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c4a3e0();
        if ((uVar3 & 1) != 0) {
          func_0x000107c5073c(uVar2);
        }
        goto LAB_103457998;
      }
    }
    else if (uVar2 != 0) {
      func_0x000107c4e47c();
LAB_103457998:
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uVar2);
      return;
    }
  }
  func_0x000107c61574();
  return;
}



/* Entry: 1034579c4; end: 103457a0b;  */

void FUN_1034579c4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 103457a0c; end: 103457a6f;  */

void FUN_103457a0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103457a70; end: 103457abf;  */

void FUN_103457a70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long *plVar8;
  code *pcVar9;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      lVar2 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c3d1a0();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x0001000b637c();
      func_0x000107c61170(lVar2);
      uVar4 = 0x103457aac;
      func_0x0001000bfde0(0x103457aac,0,PTR___sSbN_11034dd40);
      func_0x000107c61574(lVar3);
      plVar8 = *(long **)(lVar1 + 0x28);
      plVar5 = plVar8;
      func_0x000107c615f0();
      func_0x000100471e0c();
      func_0x000107c61574(uVar4);
      func_0x000107c615e8(plVar8);
      puVar6 = &UNK_110657f98;
      func_0x000107c613fc(&UNK_110657f98,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,lVar1);
      uVar4 = 0x103457aa4;
      puVar7 = puVar6;
      (**(code **)(*plVar5 + 0x60))(0x103457aa4);
      func_0x000107c61574(plVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c614f0(uVar4);
      pcVar9 = *(code **)(puVar7 + 0x18);
      func_0x000107c6157c(*(undefined8 *)(lVar1 + 0x30));
      (*pcVar9)();
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(uVar4);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 103457ac0; end: 103457b9b;  */

void FUN_103457ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110658010;
  func_0x000107c613fc(&UNK_110658010,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  pcStack_50 = FUN_103457c6c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110658028;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 103457b9c; end: 103457c0f;  */

void FUN_103457b9c(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  func_0x000100c82230();
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(char *)(param_1 + 0x39) == '\x01') {
    *(undefined2 *)(param_1 + 0x39) = 0;
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000107c4500c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5be74();
      func_0x000107c615e8(lVar1);
    }
  }
  (*param_3)();
  return;
}



/* Entry: 103457c10; end: 103457c6b;  */

void FUN_103457c10(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103457c6c; end: 103457c93;  */

void FUN_103457c6c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000100c82230(lVar2,*(undefined8 *)(unaff_x20 + 0x18),pcVar1,
                      *(undefined8 *)(unaff_x20 + 0x28));
  *(undefined1 *)(lVar2 + 0x38) = 0;
  if (*(char *)(lVar2 + 0x39) == '\x01') {
    *(undefined2 *)(lVar2 + 0x39) = 0;
    lVar2 = *(long *)(lVar2 + 0x10);
    func_0x000107c4500c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5be74();
      func_0x000107c615e8(lVar2);
    }
  }
  (*pcVar1)();
  return;
}



/* Entry: 103457c94; end: 103457d13; -[_TtC30LensCarouselPreviewIntegration30LensCarouselSnapEditorWorkflow carouselView] */

void FUN_103457c94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0x20);
  func_0x000107c6157c();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
  }
  else {
    puVar1 = puVar2;
    func_0x000107c403bc();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
  }
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103457d14; end: 103457d73; -[_TtC30LensCarouselPreviewIntegration30LensCarouselSnapEditorWorkflow beginFilterItemUpdateListening] */

void FUN_103457d14(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3d038();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103457d74; end: 103457d77; -[_TtC30LensCarouselPreviewIntegration30LensCarouselSnapEditorWorkflow stopFilterItemUpdateListening] */

void FUN_103457d74(void)

{
  return;
}



/* Entry: 103457d78; end: 103457dd3; -[_TtC30LensCarouselPreviewIntegration30LensCarouselSnapEditorWorkflow setCarouselHidden:] */

void FUN_103457d78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c6157c();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5a8ac();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103457dd4; end: 10345838f;  */

undefined * FUN_103457dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puVar10;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar5 = (undefined8 *)0xd000000000000026;
    uVar9 = 0x800000010f151a20;
    func_0x0001048db000(0xd000000000000026,0x800000010f151a20,0xd00000000000008a,0x800000010f151a50,
                        0x49);
    puVar6 = puVar5;
    func_0x0001018e0ad8();
    puVar1 = &UNK_1107b6098;
    func_0x000107c613f8(&UNK_1107b6098,puVar6,0,0);
    *puVar6 = puVar5;
    puVar6[1] = uVar9;
    puVar7 = puVar1;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar1);
    func_0x000107c451ac(puVar4);
    func_0x000107c61180();
  }
  else {
    puVar10 = *(undefined **)(unaff_x20 + 0x28);
    uVar9 = param_1;
    func_0x000107c434c4(param_1);
    func_0x000107c61180();
    uVar2 = uVar9;
    func_0x000107c5faec();
    func_0x000107c61170(uVar9);
    FUN_1034850c8(0);
    uVar9 = param_2;
    FUN_103484cd0(uVar2,param_2);
    uVar8 = uVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
    func_0x000107c434d0();
    func_0x000107c61180();
    func_0x000107c6142c(param_2);
    func_0x000107c61170(uVar2);
    if (puVar10 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x000107c602fc(0x22);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c434c4(param_1);
      func_0x000107c61180();
      uVar9 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb78(uVar9,uVar8);
      func_0x000107c6142c(uVar8);
      func_0x000107c5fb78(0x2e,0xe100000000000000);
      puVar6 = (undefined8 *)0xd00000000000001f;
      uVar9 = 0x800000010f151ae0;
      func_0x0001048db000(0xd00000000000001f,0x800000010f151ae0,0xd00000000000008a,
                          0x800000010f151a50,0x4c);
      puVar5 = puVar6;
      func_0x0001018e0ad8();
      puVar10 = &UNK_1107b6098;
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar6;
      puVar5[1] = uVar9;
      puVar7 = puVar10;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar10);
      func_0x000107c451ac(puVar4);
      func_0x000107c61180();
      func_0x000107c615e8(puVar1);
    }
    else {
      func_0x0001000a8868(unaff_x20 + 0x30,*(undefined8 *)(unaff_x20 + 0x48));
      puVar7 = puVar10;
      FUN_10346702c(puVar10);
      func_0x000107c434f0();
      if ((int)param_1 == 4) {
        puVar3 = puVar7;
        func_0x000107c4045c(puVar7);
        func_0x000107c61180();
        puVar4 = puVar1;
        func_0x000107c4b1c0(puVar1);
        func_0x000107c61180();
        func_0x000107c615e8(puVar1);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar7);
        puVar7 = puVar3;
      }
      else {
        puVar4 = puVar10;
        func_0x00010345811c(puVar10,puVar7);
        func_0x000107c615e8(puVar1);
        func_0x000107c61170(puVar10);
      }
    }
  }
  func_0x000107c61170(puVar7);
  return puVar4;
}



/* Entry: 103458390; end: 1034583e7; -[_TtC30LensCarouselPreviewIntegration30LensCarouselSnapEditorWorkflow iconForCarouselItem:] */

void FUN_103458390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_103457dd4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034583e8; end: 103458407;  */

void FUN_1034583e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103458408,0,0);
  return;
}



/* Entry: 103458408; end: 1034584c3;  */

void FUN_103458408(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  plVar4 = (long *)(unaff_x22 + 0x10);
  func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x22 + 0x28));
  lVar5 = *plVar4;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x103458474;
  lVar1 = *(long *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  plVar4[6] = *(long *)(unaff_x22 + 0x60);
  plVar4[7] = lVar5;
  plVar4[4] = lVar3;
  plVar4[5] = lVar1;
  plVar4[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10346093c,0,0);
  return;
}



/* Entry: 1034584c4; end: 103458503;  */

void FUN_1034584c4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x38);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103458500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103458504; end: 103458577;  */

void FUN_103458504(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103458578; end: 1034585f7;  */

void FUN_103458578(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1034585f8;
  plVar5[0xb] = lVar4;
  plVar5[0xc] = lVar6;
  plVar5[9] = lVar3;
  plVar5[10] = lVar2;
  plVar5[7] = param_1;
  plVar5[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103458408,0,0);
  return;
}



/* Entry: 1034585f8; end: 103458633;  */

void FUN_1034585f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103458630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103458634; end: 10345882b;  */

long FUN_103458634(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_40 = FUN_10345882c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103118914;
  puStack_48 = &UNK_110658078;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x000100b5e6d0(0);
  func_0x000107c610f8();
  func_0x000103f957fc(puVar1,uVar3);
  uVar3 = 0;
  func_0x000103f95730(0);
  func_0x000107c610f8();
  func_0x000103f9549c(puVar1,uVar3);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 10345882c; end: 10345884b;  */

void FUN_10345882c(void)

{
  FUN_1034571dc(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10345884c; end: 103458877;  */

void FUN_10345884c(long param_1,long param_2)

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



/* Entry: 103458878; end: 103458917;  */

void FUN_103458878(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103458918; end: 10345892b;  */

void FUN_103458918(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345892c; end: 1034589d7;  */

long FUN_10345892c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f41da8,&UNK_10db8ef70);
  func_0x000107c613fc();
  pcVar1 = FUN_1034589d8;
  func_0x0001000bdd8c(FUN_1034589d8,0);
  uVar2 = 0;
  func_0x000103f94e34(0);
  func_0x000107c610f8();
  func_0x000103f94d78(pcVar1,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar1;
  return unaff_x20;
}



/* Entry: 1034589d8; end: 103458a1b;  */

void FUN_1034589d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_10345720c();
  uVar2 = uVar1;
  func_0x000107c613fc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110657f50;
  *param_1 = uVar2;
  return;
}



/* Entry: 103458a1c; end: 103458a23;  */

void FUN_103458a1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103458a24; end: 103458ac3;  */

void FUN_103458a24(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103458ac4; end: 103458acf;  */

void FUN_103458ac4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103458ad0; end: 103458c2b;  */

long FUN_103458ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110658108;
  func_0x000107c613fc(&UNK_110658108,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112f6ce78;
  func_0x0001000285a8(0x112f6ce78,&UNK_10dbcad80);
  func_0x000107c613fc();
  pcVar3 = FUN_103458db4;
  func_0x0001000bdd8c(FUN_103458db4,puVar1,uVar2);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 103458c2c; end: 103458db3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103458c2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long alStack_80 [4];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar1 = param_2;
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
  func_0x000107c3ee24();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  lVar2 = 0;
  func_0x000103467350();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x20) = 0;
  lVar5 = *(long *)(param_4 + _DAT_112f6df50);
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  uVar7 = *(undefined8 *)(lVar5 + _DAT_112f6dfb0);
  ppuStack_58 = &PTR_DAT_1106591a0;
  uVar4 = 0;
  alStack_80[1] = lVar3;
  lStack_60 = lVar2;
  FUN_103461ffc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_80 + 1,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar6 = *puVar8;
  func_0x000107c6157c(uVar7);
  FUN_10345c328(uVar1,uVar6,uVar7,uVar4);
  func_0x0001000834e4(alStack_80 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 103458db4; end: 103458dbf;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103458db4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  long alStack_80 [4];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = uVar4;
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
  func_0x000107c3ee24();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar2 = 0;
  func_0x000103467350();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x20) = 0;
  lVar5 = *(long *)(lVar5 + _DAT_112f6df50);
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + _DAT_112f6dfb0);
  ppuStack_58 = &PTR_DAT_1106591a0;
  uVar4 = 0;
  alStack_80[1] = lVar3;
  lStack_60 = lVar2;
  FUN_103461ffc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_80 + 1,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar6 = *puVar8;
  func_0x000107c6157c(uVar7);
  FUN_10345c328(uVar1,uVar6,uVar7,uVar4);
  func_0x0001000834e4(alStack_80 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 103458dc0; end: 103458df3;  */

void FUN_103458dc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103458df4; end: 103458edb;  */

void FUN_103458df4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x112f6ce80;
  func_0x0001000285a8(0x112f6ce80,&UNK_10dbcc520);
  pcVar1 = FUN_103458edc;
  func_0x0001000cb480(FUN_103458edc,0,uVar4);
  uVar4 = 0x112f6ce88;
  func_0x0001000285a8(0x112f6ce88,&UNK_10dbcad90);
  uVar2 = 0x103458f18;
  func_0x0001000cb480(0x103458f18,0,uVar4);
  uVar4 = 0x112f6ce90;
  func_0x0001000285a8(0x112f6ce90,&UNK_10dbcc530);
  uVar3 = 0x103458f54;
  func_0x0001000cb480(0x103458f54,0,uVar4);
  uVar4 = 0;
  func_0x000100b5e690(0);
  func_0x000107c610f8();
  func_0x000103f96380(pcVar1,uVar2,uVar3,uVar4);
  func_0x000103f9629c(0);
  func_0x000107c610f8();
  func_0x000103f96008(pcVar1);
  return;
}



/* Entry: 103458edc; end: 103458f8f;  */

void FUN_103458edc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_103461ffc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110658ab0;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 103458f90; end: 103458f97;  */

void FUN_103458f90(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103458f98; end: 103459037;  */

void FUN_103458f98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103459038; end: 10345912b;  */

void FUN_103459038(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x112f6ce80;
  func_0x0001000285a8(0x112f6ce80,&UNK_10dbcc520);
  pcVar1 = FUN_103458edc;
  func_0x0001000cb480(FUN_103458edc,0,uVar4);
  uVar4 = 0x112f6ce88;
  func_0x0001000285a8(0x112f6ce88,&UNK_10dbcad90);
  uVar2 = 0x103458f18;
  func_0x0001000cb480(0x103458f18,0,uVar4);
  uVar4 = 0x112f6ce90;
  func_0x0001000285a8(0x112f6ce90,&UNK_10dbcc530);
  uVar3 = 0x103458f54;
  func_0x0001000cb480(0x103458f54,0,uVar4);
  uVar4 = 0;
  func_0x000100b5e690(0);
  func_0x000107c610f8();
  func_0x000103f96380(pcVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  func_0x000103f9629c(0);
  func_0x000107c610f8();
  func_0x000103f96008(pcVar1,uVar4);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10345912c; end: 10345912f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345912c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  long alStack_80 [4];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = uVar4;
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
  func_0x000107c3ee24();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar2 = 0;
  func_0x000103467350();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x20) = 0;
  lVar5 = *(long *)(lVar5 + _DAT_112f6df50);
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + _DAT_112f6dfb0);
  ppuStack_58 = &PTR_DAT_1106591a0;
  uVar4 = 0;
  alStack_80[1] = lVar3;
  lStack_60 = lVar2;
  FUN_103461ffc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_80 + 1,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar6 = *puVar8;
  func_0x000107c6157c(uVar7);
  FUN_10345c328(uVar1,uVar6,uVar7,uVar4);
  func_0x0001000834e4(alStack_80 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 103459130; end: 10345939f;  */

long FUN_103459130(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_40 = 0x103459328;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103119608;
  puStack_48 = &UNK_110658160;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x00010073d1f4(0);
  func_0x000107c610f8();
  func_0x00010073d268(puVar1,uVar3);
  uVar3 = 0;
  func_0x00010450d4bc(0);
  func_0x000107c610f8();
  func_0x00010450d3a8(puVar1,uVar3);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 1034593a0; end: 1034593cb;  */

void FUN_1034593a0(long param_1,long param_2)

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



/* Entry: 1034593cc; end: 10345946b;  */

void FUN_1034593cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345946c; end: 10345947f;  */

void FUN_10345946c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103459480; end: 103459a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103459480(undefined8 param_1,long param_2,long param_3,char *param_4,long param_5,
                  long param_6,undefined8 param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  code *pcVar18;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  lVar1 = *(long *)(param_8 + _DAT_113082920);
  func_0x000107c61174();
  pcVar2 = param_4;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar3 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar3 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:previewScope:loggerServices:lensPerformerServices:lensCarouselSessionServices:lensCarouselScopedLensCarouselManagementServices:previewFeatureLensExplorerServices:scopedLensFeaturesVisibilityControllerServices:previewFeaturePlusSnapModesServices:previewLensIconImpressionLoggingServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar3;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar3);
  }
  lVar4 = param_2;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar16 = 2;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c4ca5c();
    func_0x000107c615e8(lVar4);
    uVar15 = 1;
    if (lVar5 != 1) {
      uVar15 = 2;
    }
    uVar16 = 0;
    if (lVar5 != 0) {
      uVar16 = uVar15;
    }
  }
  lVar5 = _DAT_113081978;
  uVar10 = *(undefined8 *)(param_10 + _DAT_113035ea8);
  lVar4 = ((undefined8 *)(param_10 + _DAT_113035ea8))[1];
  uVar17 = *(undefined8 *)(param_5 + _DAT_113081978);
  func_0x000107c615f0(uVar10);
  func_0x000107c61174();
  lVar6 = param_6;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar11 = lVar6;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = param_2;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar13 = 2;
  }
  else {
    lVar13 = lVar6;
    func_0x000107c614f0();
    FUN_1034660d4();
    func_0x000107c615e8(lVar6);
  }
  uVar7 = uVar10;
  func_0x000107c614f0(uVar10);
  uVar8 = uVar17;
  lVar14 = lVar11;
  (**(code **)(lVar4 + 8))(uVar17,lVar11,lVar13,uVar16,uVar7,lVar4);
  func_0x000107c615e8(uVar10);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(lVar11);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
  *(long *)(unaff_x20 + 0x18) = lVar14;
  puVar9 = &UNK_1106581d8;
  func_0x000107c613fc(&UNK_1106581d8,0x18,7);
  *(long *)(puVar9 + 0x10) = param_5;
  func_0x0001000285a8(0x112f6d040,&UNK_10dbcae60);
  func_0x000107c613fc();
  lVar4 = param_5;
  func_0x000107c61174();
  pcVar18 = FUN_103459a68;
  func_0x0001000bdd8c(FUN_103459a68,puVar9);
  uVar10 = *(undefined8 *)(param_3 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar11 = 0;
  func_0x000103466a30();
  func_0x000107c613fc();
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(pcVar2);
  func_0x000107c453e4();
  *(undefined **)(lVar11 + 0x28) = puVar9;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(code **)(lVar11 + 0x10) = pcVar18;
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  *(char **)(lVar11 + 0x20) = pcVar2;
  *(long *)(unaff_x20 + 0x28) = lVar11;
  func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
  uVar17 = *(undefined8 *)(*(long *)(param_5 + lVar5) + _DAT_113081858);
  func_0x000107c61174();
  uVar10 = uVar17;
  func_0x0001000bda74();
  func_0x000107c61170(uVar17);
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  lVar5 = param_6;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar6;
  func_0x0001000bda74();
  func_0x000107c61170(lVar6);
  func_0x0001000285a8(0x112f6d048,&UNK_10dbcae68);
  uVar17 = param_7;
  func_0x000107c4b09c();
  func_0x000107c61180();
  uVar7 = uVar17;
  func_0x0001000bda74();
  func_0x000107c61170(uVar17);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar12 = *(undefined8 *)(lVar1 + _DAT_1130828e8);
  func_0x000107c61174();
  uVar17 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  lVar6 = param_2;
  func_0x000107c4f1ec();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x103459a1c);
    (*pcVar18)();
  }
  uVar12 = *(undefined8 *)(param_9 + _DAT_112ff3ea8);
  lVar13 = 0;
  func_0x000103464acc();
  func_0x000107c613fc();
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar12);
  func_0x000107c453e4();
  *(long *)(lVar13 + 0x10) = lVar5;
  *(undefined8 *)(lVar13 + 0x18) = uVar7;
  *(undefined8 *)(lVar13 + 0x20) = uVar17;
  *(undefined8 *)(lVar13 + 0x28) = uVar10;
  *(undefined **)(lVar13 + 0x30) = puVar9;
  *(long *)(lVar13 + 0x38) = lVar6;
  *(undefined8 *)(lVar13 + 0x40) = uVar12;
  *(long *)(unaff_x20 + 0x20) = lVar13;
  uVar10 = uVar8;
  func_0x000107c614f0(uVar8);
  pcVar18 = *(code **)(lVar14 + 8);
  func_0x000107c615f0(uVar8);
  (*pcVar18)(uVar10,lVar14);
  func_0x000107c615e8(uVar8);
  func_0x000107c6157c(lVar11);
  FUN_103466504();
  func_0x000107c61574(lVar11);
  func_0x000107c6157c(lVar13);
  FUN_1034639f4();
  func_0x000107c61574(lVar13);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(pcVar2);
  return unaff_x20;
}



/* Entry: 103459a1c; end: 103459a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103459a1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + _DAT_113081978) + _DAT_113081858);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103459a68; end: 103459a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103459a68(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081978) + _DAT_113081858);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103459a6c; end: 103459abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103459a6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081978) + _DAT_113081858);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103459abc; end: 103459b3b;  */

undefined8 FUN_103459abc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    func_0x000107c615f0(lVar2);
    func_0x000103f6ac34(lVar1,uVar3);
    func_0x000107c615e8(lVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(long *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c615e8(uVar3);
  return 0;
}



/* Entry: 103459b3c; end: 103459b6f;  */

void FUN_103459b3c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103459b70; end: 103459b73;  */

void FUN_103459b70(void)

{
  return;
}



/* Entry: 103459b74; end: 103459b97;  */

undefined8 FUN_103459b74(void)

{
  FUN_103459abc();
  return 0;
}



/* Entry: 103459b98; end: 103459bb7;  */

void FUN_103459b98(void)

{
  func_0x000107c61168(&PTR_PTR_112f6d090);
  return;
}



/* Entry: 103459bb8; end: 103459d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103459bb8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c613fc();
  uVar4 = *(undefined8 *)(param_5 + _DAT_113082920);
  uVar5 = *(undefined8 *)(*(long *)(param_3 + _DAT_113038be0) + _DAT_113038cc0);
  uVar6 = *(undefined8 *)(param_4 + _DAT_113038858);
  puVar1 = &UNK_110658220;
  func_0x000107c613fc(&UNK_110658220,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  func_0x0001000285a8(0x112f420e8,&UNK_10db8f0b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61580(uVar5,2);
  func_0x000107c61580(uVar6,2);
  func_0x000107c61174(uVar4);
  pcVar2 = FUN_103459ec8;
  func_0x0001000bdd8c(FUN_103459ec8,puVar1);
  uVar3 = 0;
  FUN_103475eb8(0);
  func_0x000107c610f8();
  func_0x000103475dfc(pcVar2,uVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar5);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 103459d50; end: 103459ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103459d50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar1 = 0x10345a038;
  func_0x0001000bdd8c(0x10345a038,param_2);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130828e8);
  func_0x0001000bda74(uVar2);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar3 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  uVar4 = 0;
  func_0x000103464d44(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar6 = 0;
  FUN_103476260();
  uVar7 = uVar6;
  func_0x000107c613fc();
  FUN_103475f30(uVar1,uVar2,uVar3,uVar4,uVar5,uVar7);
  func_0x0001000834e4(auStack_78);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = uVar1;
  return;
}



/* Entry: 103459ec8; end: 103459ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103459ec8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  uVar2 = 0x10345a038;
  func_0x0001000bdd8c(0x10345a038,uVar6);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_1130828e8);
  func_0x0001000bda74(uVar3);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  uVar5 = 0;
  func_0x000103464d44(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar6 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar7 = 0;
  FUN_103476260();
  uVar8 = uVar7;
  func_0x000107c613fc();
  FUN_103475f30(uVar2,uVar3,uVar4,uVar5,uVar6,uVar8);
  func_0x0001000834e4(auStack_78);
  param_1[3] = uVar7;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = uVar2;
  return;
}



/* Entry: 103459ed4; end: 103459f4f;  */

void FUN_103459ed4(long param_1)

{
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,lStack_40);
  *(long *)(param_1 + 0x18) = lStack_40;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lStack_38 + 8);
  func_0x0001000c5db4(param_1);
  (**(code **)(*(long *)(lStack_40 + -8) + 0x10))();
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103459f50; end: 103459f83;  */

void FUN_103459f50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103459f84; end: 103459f8b;  */

void FUN_103459f84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103459f8c; end: 10345a02b;  */

void FUN_103459f8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345a02c; end: 10345a03f;  */

void FUN_10345a02c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345a040; end: 10345a2a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10345a040(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  uVar3 = param_2;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  uVar1 = *(undefined8 *)(param_3 + _DAT_113036458);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar3 = *(undefined8 *)(param_3 + _DAT_113036498);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  lVar2 = *(long *)(param_4 + _DAT_113070fc8);
  func_0x000107c61174();
  func_0x000107c61170(param_4);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_113070f60);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(lVar2);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return unaff_x20;
}



/* Entry: 10345a2a4; end: 10345a427;  */

code * FUN_10345a2a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_110658260;
  func_0x000107c613fc(&UNK_110658260,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,uVar1);
  puVar4 = &UNK_110658288;
  func_0x000107c613fc(&UNK_110658288,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined **)(puVar4 + 0x30) = puVar3;
  func_0x0001000285a8(0x112f6d1d0,&UNK_10dbcaf18);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar7);
  pcVar5 = FUN_10345a5d8;
  func_0x0001000bdd8c(FUN_10345a5d8,puVar4);
  func_0x0001000285a8(0x112f6d1d8,&UNK_10dbcaf20);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_10345a5e8;
  func_0x0001000bdd8c(FUN_10345a5e8,pcVar5);
  func_0x0001000285a8(0x112f6d1e0,&UNK_10dbcaf28);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x10345a61c;
  func_0x0001000bdd8c(0x10345a61c,pcVar5);
  uVar8 = 0;
  func_0x000103bcf71c(0);
  func_0x000107c610f8();
  func_0x000103bcf5d0(pcVar6,uVar7,uVar8);
  func_0x000107c61574(pcVar5);
  return pcVar6;
}



/* Entry: 10345a428; end: 10345a5d7;  */

void FUN_10345a428(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_78,0,0);
  lVar1 = param_6 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ad1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4b6c0(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61428(param_6 + 0x10,auStack_90,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    lVar1 = param_6;
    func_0x000107c5b1b8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5b198();
      func_0x000107c61180();
      lVar3 = param_6;
      func_0x000107c5b634();
      if ((int)lVar3 == 1) {
        func_0x00010345ec30(lVar2);
      }
      func_0x000107c61170(param_6);
      func_0x000107c615e8(lVar1);
      param_6 = lVar2;
    }
    func_0x000107c61170(param_6);
  }
  FUN_10346b1e0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c();
  func_0x00010346aa70();
  *param_1 = param_2;
  return;
}



/* Entry: 10345a5d8; end: 10345a5e7;  */

void FUN_10345a5d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar8 + 0x10,auStack_78,0,0);
  lVar4 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4ad1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000107c4b6c0(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
    }
  }
  func_0x000107c61428(lVar8 + 0x10,auStack_90,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    lVar4 = lVar8;
    func_0x000107c5b1b8();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5b198();
      func_0x000107c61180();
      lVar6 = lVar8;
      func_0x000107c5b634();
      if ((int)lVar6 == 1) {
        func_0x00010345ec30(lVar5);
      }
      func_0x000107c61170(lVar8);
      func_0x000107c615e8(lVar4);
      lVar8 = lVar5;
    }
    func_0x000107c61170(lVar8);
  }
  FUN_10346b1e0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c();
  func_0x00010346aa70();
  *param_1 = uVar7;
  return;
}



/* Entry: 10345a5e8; end: 10345a657;  */

void FUN_10345a5e8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10345a658; end: 10345a68b;  */

void FUN_10345a658(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 10345a68c; end: 10345a6ef;  */

void FUN_10345a68c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345a6f0; end: 10345a77f;  */

void FUN_10345a6f0(undefined8 param_1)

{
  if (lRam0000000112f6d210 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e767adc);
  return;
}



/* Entry: 10345a780; end: 10345a7a3;  */

void FUN_10345a780(undefined8 *param_1,undefined8 param_2)

{
  FUN_10345a2a4();
  *param_1 = param_2;
  return;
}



/* Entry: 10345a7a4; end: 10345adab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10345a7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  uVar10 = *(undefined8 *)(param_6 + _DAT_113038fc8);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1106582c8;
  func_0x000107c613fc(&UNK_1106582c8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  pcStack_70 = FUN_10345ae2c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10345ae34;
  puStack_78 = &UNK_1106582e0;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = &UNK_110658318;
  func_0x000107c613fc(&UNK_110658318,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  func_0x0001000285a8(0x112f6d2d8,&UNK_10dbcaf90);
  func_0x000107c613fc();
  func_0x000107c61174(puVar1);
  uVar4 = 0x10345ae88;
  func_0x0001000bdd8c(0x10345ae88,puVar2);
  puVar2 = &UNK_110658340;
  func_0x000107c613fc(&UNK_110658340,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  func_0x0001000285a8(0x112f6d2e0,&UNK_10dbcaf98);
  func_0x000107c613fc();
  func_0x000107c61174(uVar10);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(param_3);
  pcVar5 = FUN_10345afe0;
  func_0x0001000bdd8c(FUN_10345afe0,puVar2);
  lVar6 = 0;
  FUN_103461a24();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(code **)(lVar7 + _DAT_112f6dfb0) = pcVar5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar7;
  lStack_98 = lVar6;
  func_0x000107c6157c(pcVar5);
  plVar8 = &lStack_a0;
  func_0x000107c61154(plVar8,puVar2);
  lVar6 = 0;
  FUN_103461970();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long **)(lVar7 + _DAT_112f6df50) = plVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_b0 = lVar7;
  lStack_a8 = lVar6;
  func_0x000107c61174(plVar8);
  plVar9 = &lStack_b0;
  func_0x000107c61154(plVar9,puVar2);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  *(long **)(unaff_x20 + 0x10) = plVar9;
  return unaff_x20;
}



/* Entry: 10345adac; end: 10345ae2b;  */

undefined * FUN_10345adac(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_2 != 0) {
    puVar2 = PTR_PTR_1126ad2d0;
    func_0x000107c610f8(PTR_PTR_1126ad2d0);
    func_0x000107c46610();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(param_2);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10345ae2c);
  (*pcVar1)();
}



/* Entry: 10345ae2c; end: 10345ae33;  */

undefined * FUN_10345ae2c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c421c8(uVar2);
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126ad2d0;
    func_0x000107c610f8(PTR_PTR_1126ad2d0);
    func_0x000107c46610();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10345ae2c);
  (*pcVar1)();
}


