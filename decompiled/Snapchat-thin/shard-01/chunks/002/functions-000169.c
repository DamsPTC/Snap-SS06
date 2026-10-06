/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100dfdb8c; end: 100dfdbdf; -[_TtC28BillboardLogoutActionHandler28BillboardLogoutActionHandler handleOnTapActionWithContext:] */

/* WARNING: Possible PIC construction at 0x000100dfdbc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfdbcc) */

void FUN_100dfdb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100dfda7c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100dfdbe0; end: 100dfdd3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfdbe0(undefined8 param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d37b50));
  func_0x000107c61180();
  func_0x000107c615e8();
  pcVar2 = "didFinishRequest(with:)";
  func_0x0001000c10c0("didFinishRequest(with:)");
  func_0x000107c61180();
  puVar3 = &UNK_110353e88;
  func_0x000107c613fc(&UNK_110353e88,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110353eb0;
  func_0x000107c613fc(&UNK_110353eb0,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcStack_50 = FUN_100dfe1e4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110353ec8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e590(pcVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d37b70);
  pcVar7 = (code *)*puVar1;
  if (pcVar7 == (code *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = puVar1[1];
    func_0x000107c6157c(uVar8);
    (*pcVar7)();
    func_0x00010058d43c(pcVar7,uVar8);
    uVar8 = *puVar1;
  }
  uVar6 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar8,uVar6);
  return;
}



/* Entry: 100dfdd40; end: 100dfddc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfdd40(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d37b60;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c5da6c(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 100dfddc8; end: 100dfde17; -[_TtC28BillboardLogoutActionHandler28BillboardLogoutActionHandler didFinishRequestWithLogout:] */

/* WARNING: Possible PIC construction at 0x000100dfde00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfde04) */

void FUN_100dfddc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100dfdbe0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100dfde18; end: 100dfdfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfde18(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000108b9aa74();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfdfb8);
    (*pcVar1)();
  }
  lVar2 = param_1;
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  lVar3 = lVar2;
  func_0x000108b9a8c4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    pcStack_50 = FUN_100dfe010;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100de205c;
    puStack_58 = &UNK_110353e50;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uStack_48);
    *(undefined **)(lVar2 + 0x20) = puVar5;
    puVar5 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    uVar6 = 0;
    FUN_100dfe1a0(0);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar6);
    func_0x000107c61574(lVar2);
    func_0x000107c4656c(puVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
    func_0x000107c59bc8(puVar5);
    lVar2 = unaff_x20 + _DAT_112d37b68;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c3e2c0();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(puVar5);
    return;
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfdfc4);
  (*pcVar1)();
}



/* Entry: 100dfdfc4; end: 100dfe00f; -[_TtC28BillboardLogoutActionHandler28BillboardLogoutActionHandler didFailRequestWithLogout:] */

/* WARNING: Possible PIC construction at 0x000100dfdff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfdffc) */

void FUN_100dfdfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100dfe100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100dfe010; end: 100dfe013;  */

void FUN_100dfe010(void)

{
  return;
}



/* Entry: 100dfe014; end: 100dfe073; -[_TtC28BillboardLogoutActionHandler28BillboardLogoutActionHandler init] */

void FUN_100dfe014(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BillboardLogoutActionHandler.BillboardLogoutActionHandler",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfe040);
  (*pcVar1)();
}



/* Entry: 100dfe074; end: 100dfe0df; -[_TtC28BillboardLogoutActionHandler28BillboardLogoutActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe074(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d37b50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d37b58));
  FUN_100c973f0(param_1 + _DAT_112d37b60);
  FUN_100c973f0(param_1 + _DAT_112d37b68);
  if (*(long *)(param_1 + _DAT_112d37b70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d37b70))[1]);
    return;
  }
  return;
}



/* Entry: 100dfe0e0; end: 100dfe0ff;  */

void FUN_100dfe0e0(void)

{
  func_0x000107c61168(&PTR_PTR_112798618);
  return;
}



/* Entry: 100dfe100; end: 100dfe183;  */

/* WARNING: Possible PIC construction at 0x000100dfe15c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfe160) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe100(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d37b50));
  func_0x000107c61180();
  func_0x000107c615e8();
  FUN_100dfde18();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d37b70);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)0x0;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar2)();
  }
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 100dfe184; end: 100dfe19f;  */

void FUN_100dfe184(long param_1,long param_2)

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



/* Entry: 100dfe1a0; end: 100dfe1e3;  */

void FUN_100dfe1a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d360a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d360a8 = puVar1;
  return;
}



/* Entry: 100dfe1e4; end: 100dfe1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe1e4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d37b60;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5da6c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 100dfe200; end: 100dfe3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100dfe200(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c613fc();
  lVar4 = _DAT_113091ae8;
  func_0x000107c61428(param_4 + _DAT_113091ae8,auStack_78,0,0);
  lVar4 = param_4 + lVar4;
  func_0x000107c61618(lVar4);
  lVar5 = 0;
  FUN_100dfe0e0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar3 = _DAT_112d37b60;
  func_0x000107c61614(lVar6 + _DAT_112d37b60,0);
  func_0x000107c61614(lVar6 + _DAT_112d37b68,0);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d37b70);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112d37b50) = param_2;
  *(undefined8 *)(lVar6 + _DAT_112d37b58) = param_3;
  func_0x000107c61604(lVar6 + lVar3,lVar4);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar6;
  lStack_80 = lVar5;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  plVar7 = &lStack_88;
  func_0x000107c61154(plVar7,puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(lVar4);
  uVar8 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(uVar8);
  return unaff_x20;
}



/* Entry: 100dfe3b4; end: 100dfe3cf;  */

void FUN_100dfe3b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100dfe3d0; end: 100dfe3ef;  */

void FUN_100dfe3d0(void)

{
  func_0x000107c61168(&PTR_PTR_112d37be0);
  return;
}



/* Entry: 100dfe3f0; end: 100dfe3fb; -[SCBillboardLogoutActionHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe3f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37c38;
  func_0x000107c61428(param_1 + _DAT_112d37c38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfe3fc; end: 100dfe407; -[SCBillboardLogoutActionHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37c38;
  func_0x000107c61428(param_1 + _DAT_112d37c38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfe408; end: 100dfe413; -[SCBillboardLogoutActionHandlerEntryPoint logoutScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe408(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37c40;
  func_0x000107c61428(param_1 + _DAT_112d37c40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfe414; end: 100dfe41f; -[SCBillboardLogoutActionHandlerEntryPoint setLogoutScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37c40;
  func_0x000107c61428(param_1 + _DAT_112d37c40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfe420; end: 100dfe42b; -[SCBillboardLogoutActionHandlerEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe420(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37c48;
  func_0x000107c61428(param_1 + _DAT_112d37c48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfe42c; end: 100dfe46f;  */

void FUN_100dfe42c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100dfe470; end: 100dfe47b; -[SCBillboardLogoutActionHandlerEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe470(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37c48;
  func_0x000107c61428(param_1 + _DAT_112d37c48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfe47c; end: 100dfe4cf;  */

void FUN_100dfe47c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfe4d0; end: 100dfe517; -[SCBillboardLogoutActionHandlerEntryPoint logoutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe4d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37c50;
  func_0x000107c61428(param_1 + _DAT_112d37c50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100dfe518; end: 100dfe57b; -[SCBillboardLogoutActionHandlerEntryPoint setLogoutScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe518(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37c50;
  func_0x000107c61428(param_1 + _DAT_112d37c50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100dfe57c; end: 100dfe7df;  */

/* WARNING: Possible PIC construction at 0x000100dfe700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfe734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfe744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfe754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfe7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfe7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfe7b4) */
/* WARNING: Removing unreachable block (ram,0x000100dfe758) */
/* WARNING: Removing unreachable block (ram,0x000100dfe748) */
/* WARNING: Removing unreachable block (ram,0x000100dfe738) */
/* WARNING: Removing unreachable block (ram,0x000100dfe704) */
/* WARNING: Removing unreachable block (ram,0x000100dfe7a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfe57c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = unaff_x20;
  func_0x000107c4c084();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = unaff_x20;
    func_0x000107c4c08c();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c5da74();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_100dfe3d0(0);
        func_0x000107c613fc();
        lVar4 = _DAT_113091ae8;
        func_0x000107c61428(unaff_x20 + _DAT_113091ae8,auStack_78,0,0);
        lVar4 = unaff_x20 + lVar4;
        func_0x000107c61618(lVar4);
        lVar7 = 0;
        FUN_100dfe0e0();
        lVar8 = lVar7;
        func_0x000107c610f8();
        lVar3 = _DAT_112d37b60;
        func_0x000107c61614(lVar8 + _DAT_112d37b60,0);
        func_0x000107c61614(lVar8 + _DAT_112d37b68,0);
        puVar1 = (undefined8 *)(lVar8 + _DAT_112d37b70);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(long *)(lVar8 + _DAT_112d37b50) = lVar5;
        *(long *)(lVar8 + _DAT_112d37b58) = lVar6;
        func_0x000107c61604(lVar8 + lVar3,lVar4);
        puVar2 = PTR_s_init_1125d9248;
        lStack_88 = lVar8;
        lStack_80 = lVar7;
        func_0x000107c61174(lVar5);
        func_0x000107c61174(lVar6);
        func_0x000107c61174(lVar5);
        func_0x000107c61174(lVar6);
        func_0x000107c61154(&lStack_88,puVar2);
        lVar4 = lVar5;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 100dfe7e0; end: 100dfe807; -[SCBillboardLogoutActionHandlerEntryPoint begin] */

void FUN_100dfe7e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100dfe57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dfe808; end: 100dfe84b; -[SCBillboardLogoutActionHandlerEntryPoint end] */

void FUN_100dfe808(undefined8 param_1)

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



/* Entry: 100dfe84c; end: 100dfeab7;  */

void FUN_100dfe84c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10eeb40)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef114c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef630)) ||
           (func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a3f8();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10eeb20)) &&
             (func_0x000107c605b8(0xd000000000000012,0x800000010ef114e0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "BillboardLogoutActionHandler/SCBillboardLogoutActionHandlerEntryPoint.swift"
                                ,0x4b,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfeab8);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56128();
        }
        goto LAB_100dfe8d8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56130();
  }
LAB_100dfe8d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100dfeab8; end: 100dfeb63; -[SCBillboardLogoutActionHandlerEntryPoint setValue:forIvarName:] */

void FUN_100dfeab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100dfe84c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100dfeb64; end: 100dfebf7; -[SCBillboardLogoutActionHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfeb64(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d37c38,0);
  func_0x000107c61614(param_1 + _DAT_112d37c40,0);
  func_0x000107c61614(param_1 + _DAT_112d37c48,0);
  *(undefined8 *)(param_1 + _DAT_112d37c50) = 0;
  *(undefined8 *)(param_1 + _DAT_112d37c58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100dfebf8; end: 100dfec2b;  */

void FUN_100dfebf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100dfec2c; end: 100dfec93; -[SCBillboardLogoutActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfec2c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d37c38);
  func_0x000107c61610(param_1 + _DAT_112d37c40);
  func_0x000107c61610(param_1 + _DAT_112d37c48);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d37c50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d37c58));
  return;
}



/* Entry: 100dfec94; end: 100dfecb3;  */

void FUN_100dfec94(void)

{
  func_0x000107c61168(&PTR_PTR_1127986f8);
  return;
}



/* Entry: 100dfecb4; end: 100dfecbb; -[_TtC50BillboardOpenIncentiveCampaignDetailsActionHandler50BillboardOpenIncentiveCampaignDetailsActionHandler actionHandlerType] */

undefined8 FUN_100dfecb4(void)

{
  return 0x1f;
}



/* Entry: 100dfecbc; end: 100dfed73; -[_TtC50BillboardOpenIncentiveCampaignDetailsActionHandler50BillboardOpenIncentiveCampaignDetailsActionHandler handleOnTapActionWithContext:] */

/* WARNING: Possible PIC construction at 0x000100dfed4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfed50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfecbc(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  
  if (param_3 != 0) {
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c5d17c();
    func_0x000107c61180();
    FUN_10132b1b8(0);
    func_0x000107c610f8();
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x00010132b058(param_3,param_1,&PTR_DAT_110353fb8);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112d37c88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfed74);
  (*pcVar1)();
}



/* Entry: 100dfed74; end: 100dfedd3; -[_TtC50BillboardOpenIncentiveCampaignDetailsActionHandler50BillboardOpenIncentiveCampaignDetailsActionHandler init] */

void FUN_100dfed74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BillboardOpenIncentiveCampaignDetailsActionHandler.BillboardOpenIncentiveCampaignDetailsActionHandler"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfeda0);
  (*pcVar1)();
}



/* Entry: 100dfedd4; end: 100dfede3; -[_TtC50BillboardOpenIncentiveCampaignDetailsActionHandler50BillboardOpenIncentiveCampaignDetailsActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfedd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d37c88));
  return;
}



/* Entry: 100dfede4; end: 100dfee3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfede4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d37c88);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 100dfee3c; end: 100dfee5b;  */

void FUN_100dfee3c(void)

{
  func_0x000107c61168(&PTR_PTR_1127987d0);
  return;
}



/* Entry: 100dfee5c; end: 100dfef2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100dfee5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  lVar2 = 0;
  FUN_100dfee3c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d37c88) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar1);
  uVar5 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar5);
  return unaff_x20;
}



/* Entry: 100dfef30; end: 100dfef4b;  */

void FUN_100dfef30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100dfef4c; end: 100dfef6b;  */

void FUN_100dfef4c(void)

{
  func_0x000107c61168(&PTR_PTR_112d37cf8);
  return;
}



/* Entry: 100dfef6c; end: 100dfefb3; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfef6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37d50;
  func_0x000107c61428(param_1 + _DAT_112d37d50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfefb4; end: 100dff00b; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfefb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37d50;
  func_0x000107c61428(param_1 + _DAT_112d37d50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dff00c; end: 100dff053; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint incentiveCampaignDetailsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dff00c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37d58;
  func_0x000107c61428(param_1 + _DAT_112d37d58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100dff054; end: 100dff0b7; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint setIncentiveCampaignDetailsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dff054(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37d58;
  func_0x000107c61428(param_1 + _DAT_112d37d58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100dff0b8; end: 100dff1f7; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100dff180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dff190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dff1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dff1d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dff194) */
/* WARNING: Removing unreachable block (ram,0x000100dff184) */
/* WARNING: Removing unreachable block (ram,0x000100dff1b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dff0b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar5 = param_1;
  if (lVar2 != 0) {
    func_0x000107c452c4();
    func_0x000107c61180();
    lVar5 = lVar2;
    if (param_1 != 0) {
      FUN_100dfef4c(0);
      func_0x000107c613fc();
      lVar3 = 0;
      FUN_100dfee3c();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(long *)(lVar4 + _DAT_112d37c88) = param_1;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar3;
      func_0x000107c61174(param_1);
      func_0x000107c61154(&lStack_50,puVar1);
      func_0x000107c4e9e4(lVar2);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 100dff1f8; end: 100dff23b; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint end] */

void FUN_100dff1f8(undefined8 param_1)

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



/* Entry: 100dff23c; end: 100dff3d3;  */

void FUN_100dff23c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef10eea40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010ef115c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BillboardOpenIncentiveCampaignDetailsActionHandler/SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint.swift"
                            ,0x77,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100dff3d4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55348();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100dff3d4; end: 100dff47f; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint setValue:forIvarName:] */

void FUN_100dff3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100dff23c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100dff480; end: 100dff4eb; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dff480(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d37d50,0);
  *(undefined8 *)(param_1 + _DAT_112d37d58) = 0;
  *(undefined8 *)(param_1 + _DAT_112d37d60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100dff4ec; end: 100dff51f;  */

void FUN_100dff4ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100dff520; end: 100dff567; -[SCBillboardOpenIncentiveCampaignDetailsActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dff520(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d37d50);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d37d58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d37d60));
  return;
}



/* Entry: 100dff568; end: 100dff587;  */

void FUN_100dff568(void)

{
  func_0x000107c61168(&PTR_PTR_112798890);
  return;
}



/* Entry: 100dff588; end: 100dff58f; -[_TtC33OneTapLoginBillboardActionHandler33OneTapLoginBillboardActionHandler actionHandlerType] */

undefined8 FUN_100dff588(void)

{
  return 0x1b;
}



/* Entry: 100dff590; end: 100dff733;  */

/* WARNING: Possible PIC construction at 0x000100dff6c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dff6cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dff590(undefined1 *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d37d90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4dfb4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      pcVar4 = "handleOnTapAction(with:)";
      func_0x0001000c10c0("handleOnTapAction(with:)");
      func_0x000107c61180();
      puVar5 = &UNK_110354080;
      func_0x000107c613fc(&UNK_110354080,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1103540a8;
      func_0x000107c613fc(&UNK_1103540a8,0x30,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long *)(puVar6 + 0x18) = lVar2;
      *(undefined8 *)(puVar6 + 0x20) = param_2;
      *(undefined1 **)(puVar6 + 0x28) = param_1;
      pcStack_50 = FUN_100dffba8;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_1103540c0;
      puStack_48 = puVar6;
      func_0x000107c60bc4(&puStack_70);
      puVar5 = puStack_48;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar5);
      func_0x000107c4e590(pcVar4);
      param_1 = (undefined1 *)ppuVar7;
      goto code_r0x000107c60bd0;
    }
  }
  if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100dff734);
    (*pcVar1)();
  }
  func_0x000107c4db74();
  func_0x000107c61180();
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  (**(code **)(param_1 + 0x10))();
code_r0x000107c60bd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_1);
  return;
}



/* Entry: 100dff734; end: 100dff7b3;  */

void FUN_100dff734(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100dff7b4);
      (*pcVar1)();
    }
    FUN_100dff7b4(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100dff7b4; end: 100dff99f;  */

void FUN_100dff7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  puVar3 = &UNK_110354080;
  func_0x000107c613fc(&UNK_110354080,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103540f8;
  func_0x000107c613fc(&UNK_1103540f8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  puVar3 = &UNK_110354120;
  func_0x000107c613fc(&UNK_110354120,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c5fadc(param_1,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x100dffbd0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110354138;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar2);
  uStack_80 = 0x100dffbd8;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110354160;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  uVar7 = param_1;
  func_0x000105c59bd4(param_1,ppuVar5,ppuVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_1);
  func_0x000107c59bc8(uVar7);
  func_0x000107c5d17c(param_3);
  func_0x000107c61180();
  func_0x000107c3e2c0();
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(param_3);
  return;
}



/* Entry: 100dff9a0; end: 100dffad3; -[_TtC33OneTapLoginBillboardActionHandler33OneTapLoginBillboardActionHandler handleOnTapActionWithContext:] */

/* WARNING: Possible PIC construction at 0x000100dff9dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dff9e0) */

void FUN_100dff9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100dff590(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100dffad4; end: 100dffb17;  */

void FUN_100dffad4(long param_1)

{
  func_0x000107c4db74();
  func_0x000107c61180();
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(param_1);
    return;
  }
  return;
}



/* Entry: 100dffb18; end: 100dffb77; -[_TtC33OneTapLoginBillboardActionHandler33OneTapLoginBillboardActionHandler init] */

void FUN_100dffb18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OneTapLoginBillboardActionHandler.OneTapLoginBillboardActionHandler",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dffb44);
  (*pcVar1)();
}



/* Entry: 100dffb78; end: 100dffb87; -[_TtC33OneTapLoginBillboardActionHandler33OneTapLoginBillboardActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dffb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d37d90));
  return;
}



/* Entry: 100dffb88; end: 100dffba7;  */

void FUN_100dffb88(void)

{
  func_0x000107c61168(&PTR_PTR_112798958);
  return;
}



/* Entry: 100dffba8; end: 100dffbef;  */

void FUN_100dffba8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_48,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100dff7b4);
      (*pcVar4)();
    }
    FUN_100dff7b4(uVar2,uVar1,lVar3);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 100dffbf0; end: 100dffcc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100dffbf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c4ac84();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_100dffb88();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d37d90) = uVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  uVar1 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 100dffcc4; end: 100dffcdf;  */

void FUN_100dffcc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100dffce0; end: 100dffcff;  */

void FUN_100dffce0(void)

{
  func_0x000107c61168(&PTR_PTR_112d37e00);
  return;
}



/* Entry: 100dffd00; end: 100dffd0b; -[SCOneTapLoginBillboardActionHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dffd00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37e58;
  func_0x000107c61428(param_1 + _DAT_112d37e58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dffd0c; end: 100dffd17; -[SCOneTapLoginBillboardActionHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dffd0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37e58;
  func_0x000107c61428(param_1 + _DAT_112d37e58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dffd18; end: 100dffd23; -[SCOneTapLoginBillboardActionHandlerEntryPoint oneTapLoginRegistryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dffd18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37e60;
  func_0x000107c61428(param_1 + _DAT_112d37e60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dffd24; end: 100dffd67;  */

void FUN_100dffd24(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100dffd68; end: 100dffd73; -[SCOneTapLoginBillboardActionHandlerEntryPoint setOneTapLoginRegistryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dffd68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37e60;
  func_0x000107c61428(param_1 + _DAT_112d37e60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dffd74; end: 100dffdc7;  */

void FUN_100dffd74(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dffdc8; end: 100dfff0b; -[SCOneTapLoginBillboardActionHandlerEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100dffe94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dffea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dffec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dffeec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dffea8) */
/* WARNING: Removing unreachable block (ram,0x000100dffe98) */
/* WARNING: Removing unreachable block (ram,0x000100dffec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dffdc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar4 = param_1;
  if (lVar1 != 0) {
    func_0x000107c4ddd4();
    func_0x000107c61180();
    lVar4 = lVar1;
    if (param_1 != 0) {
      FUN_100dffce0(0);
      func_0x000107c613fc();
      func_0x000107c4ac84();
      func_0x000107c61180();
      lVar2 = 0;
      FUN_100dffb88();
      lVar3 = lVar2;
      func_0x000107c610f8();
      *(long *)(lVar3 + _DAT_112d37d90) = param_1;
      lStack_50 = lVar3;
      lStack_48 = lVar2;
      func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
      func_0x000107c4e9e4(lVar1);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 100dfff0c; end: 100dfff4f; -[SCOneTapLoginBillboardActionHandlerEntryPoint end] */

void FUN_100dfff0c(undefined8 param_1)

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



/* Entry: 100dfff50; end: 100e000e7;  */

void FUN_100dfff50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10ee940)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010ef116c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OneTapLoginBillboardActionHandler/SCOneTapLoginBillboardActionHandlerEntryPoint.swift"
                            ,0x55,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e000e8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56f80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e000e8; end: 100e00193; -[SCOneTapLoginBillboardActionHandlerEntryPoint setValue:forIvarName:] */

void FUN_100e000e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100dfff50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e00194; end: 100e00207; -[SCOneTapLoginBillboardActionHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e00194(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d37e58,0);
  func_0x000107c61614(param_1 + _DAT_112d37e60,0);
  *(undefined8 *)(param_1 + _DAT_112d37e68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e00208; end: 100e0023b;  */

void FUN_100e00208(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e0023c; end: 100e00283; -[SCOneTapLoginBillboardActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0023c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d37e58);
  func_0x000107c61610(param_1 + _DAT_112d37e60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d37e68));
  return;
}



/* Entry: 100e00284; end: 100e002a3;  */

void FUN_100e00284(void)

{
  func_0x000107c61168(&PTR_PTR_112798a18);
  return;
}



/* Entry: 100e002a4; end: 100e003ab;  */

/* WARNING: Possible PIC construction at 0x000100e00360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e00370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e00380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e00374) */
/* WARNING: Removing unreachable block (ram,0x000100e00364) */
/* WARNING: Removing unreachable block (ram,0x000100e00384) */

void FUN_100e002a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110354258;
  func_0x000107c613fc(&UNK_110354258,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uVar2 = 0x112d37ea0;
  func_0x0001000285a8(0x112d37ea0,&UNK_10d901d08);
  func_0x000107c613fc();
  pcVar3 = FUN_100e0049c;
  func_0x0001000841fc(FUN_100e0049c,puVar1,uVar2);
  func_0x000100084214(&UNK_10d901cd0,0x30,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100e003ac; end: 100e00437;  */

void FUN_100e003ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  FUN_100e0abdc(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000100082720("BillboardGrpcRankingServiceProvider",0x23,2);
  uVar1 = param_3;
  FUN_100e0e338();
  func_0x000107c61574(param_3);
  func_0x000100082720("BillboardGrpcServicesEntryPointProvider",0x27,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100e00438; end: 100e00447;  */

undefined1  [16] FUN_100e00438(void)

{
  return ZEXT816(0x110354238);
}



/* Entry: 100e00448; end: 100e0049b;  */

void FUN_100e00448(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100e0049c; end: 100e004af;  */

void FUN_100e0049c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100e0abdc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100082720("BillboardGrpcRankingServiceProvider",0x23,2);
  uVar2 = uVar1;
  FUN_100e0e338();
  func_0x000107c61574(uVar1);
  func_0x000100082720("BillboardGrpcServicesEntryPointProvider",0x27,2);
  *param_1 = uVar2;
  return;
}



/* Entry: 100e004b0; end: 100e006e7;  */

void FUN_100e004b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  return;
}



/* Entry: 100e006e8; end: 100e006fb;  */

/* WARNING: Possible PIC construction at 0x000100e00360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e00370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e00380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e00374) */
/* WARNING: Removing unreachable block (ram,0x000100e00364) */
/* WARNING: Removing unreachable block (ram,0x000100e00384) */

void FUN_100e006e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_110354258;
  func_0x000107c613fc(&UNK_110354258,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112d37ea0;
  func_0x0001000285a8(0x112d37ea0,&UNK_10d901d08);
  func_0x000107c613fc();
  pcVar8 = FUN_100e0049c;
  func_0x0001000841fc(FUN_100e0049c,puVar6,uVar7);
  func_0x000100084214(&UNK_10d901cd0,0x30,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100e006fc; end: 100e0083f;  */

/* WARNING: Possible PIC construction at 0x000100e00708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e00718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e00728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0071c) */
/* WARNING: Removing unreachable block (ram,0x000100e0070c) */
/* WARNING: Removing unreachable block (ram,0x000100e0072c) */

void FUN_100e006fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e00840; end: 100e00863;  */

void FUN_100e00840(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100e00520();
  *param_1 = param_2;
  return;
}



/* Entry: 100e00864; end: 100e0086f; -[SCBillboardGrpcServiceScopedFactoryServiceProviderSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e00864(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37fe8;
  func_0x000107c61428(param_1 + _DAT_112d37fe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e00870; end: 100e0087b; -[SCBillboardGrpcServiceScopedFactoryServiceProviderSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e00870(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37fe8;
  func_0x000107c61428(param_1 + _DAT_112d37fe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e0087c; end: 100e00887; -[SCBillboardGrpcServiceScopedFactoryServiceProviderSaberServiceProvider billboardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0087c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37ff0;
  func_0x000107c61428(param_1 + _DAT_112d37ff0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e00888; end: 100e00893; -[SCBillboardGrpcServiceScopedFactoryServiceProviderSaberServiceProvider setBillboardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e00888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37ff0;
  func_0x000107c61428(param_1 + _DAT_112d37ff0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e00894; end: 100e0089f; -[SCBillboardGrpcServiceScopedFactoryServiceProviderSaberServiceProvider sCApplicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e00894(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37ff8;
  func_0x000107c61428(param_1 + _DAT_112d37ff8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e008a0; end: 100e008ab; -[SCBillboardGrpcServiceScopedFactoryServiceProviderSaberServiceProvider setSCApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e008a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37ff8;
  func_0x000107c61428(param_1 + _DAT_112d37ff8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e008ac; end: 100e008b7; -[SCBillboardGrpcServiceScopedFactoryServiceProviderSaberServiceProvider sCFriendsFeedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e008ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38000;
  func_0x000107c61428(param_1 + _DAT_112d38000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


