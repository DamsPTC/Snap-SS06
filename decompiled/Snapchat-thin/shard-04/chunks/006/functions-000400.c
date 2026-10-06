/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036ad3f0; end: 1036ad3f7;  */

void FUN_1036ad3f0(char *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (*param_1 != '\x01') {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_1036ad3f8();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1036ad3f8; end: 1036ad563;  */

/* WARNING: Possible PIC construction at 0x0001036ad53c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ad3f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  if ((*(byte *)(*(long *)(unaff_x20 + _DAT_112f865e8) + _DAT_11302bb38) & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112f865f8);
  lVar1 = lVar4;
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2;
  func_0x000107c5b354();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar3;
  func_0x000107c5bcc0();
  func_0x000107c61170(lVar3);
  if (lVar1 != 1) {
    lVar1 = lVar2;
    func_0x000107c5b358();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar3;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar3);
    if (lVar1 != 1) goto code_r0x000107c615e8;
  }
  func_0x000107c42e68();
  func_0x000107c61180();
  lVar1 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar1 != 0) {
    func_0x000107c4bf68(lVar1,param_2,0x3a,0x77,0xffffffffffffffff);
    lVar2 = lVar1;
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1036ad564; end: 1036ad70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ad564(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  ppuVar9 = &puStack_80;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f865e8);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f865f0);
  lVar3 = 0;
  FUN_1036addf0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f86638);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f86640);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112f86648) = 0;
  lVar2 = _DAT_112f86650;
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar5 = "SnapModesPluginProvider";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar4 + lVar2) = pcVar5;
  *(undefined8 *)(lVar4 + _DAT_112f86628) = uVar11;
  *(undefined8 *)(lVar4 + _DAT_112f86630) = uVar10;
  plVar6 = &lStack_50;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  puVar7 = &UNK_11067d580;
  func_0x000107c613fc(&UNK_11067d580,0x18,7);
  *(long **)(puVar7 + 0x10) = plVar6;
  puVar8 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_60 = FUN_1036ad710;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101016bdc;
  puStack_68 = &UNK_11067d598;
  puStack_58 = puVar7;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(plVar6);
  func_0x000107c46b38(puVar8);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puStack_58);
  func_0x000107c59420(param_1);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 1036ad710; end: 1036ad72f;  */

void FUN_1036ad710(void)

{
  FUN_1036ad878();
  return;
}



/* Entry: 1036ad730; end: 1036ad77f; -[_TtC25SnapEditorSnapModesPlugin25SnapEditorSnapModesPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036ad768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ad76c) */

void FUN_1036ad730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036ad564(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036ad780; end: 1036ad7df; -[_TtC25SnapEditorSnapModesPlugin25SnapEditorSnapModesPlugin init] */

void FUN_1036ad780(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorSnapModesPlugin.SnapEditorSnapModesPlugin",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ad7ac);
  (*pcVar1)();
}



/* Entry: 1036ad7e0; end: 1036ad837; -[_TtC25SnapEditorSnapModesPlugin25SnapEditorSnapModesPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ad7e0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f865e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f865f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f865f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f865e0));
  return;
}



/* Entry: 1036ad838; end: 1036ad853;  */

void FUN_1036ad838(long param_1,long param_2)

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



/* Entry: 1036ad854; end: 1036ad873;  */

void FUN_1036ad854(void)

{
  func_0x000107c61168(&PTR_PTR_1128dffd0);
  return;
}



/* Entry: 1036ad874; end: 1036ad877;  */

void FUN_1036ad874(char *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (*param_1 != '\x01') {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_1036ad3f8();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1036ad878; end: 1036ad95f;  */

undefined * FUN_1036ad878(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ad3a0;
  func_0x000107c610f8(PTR_PTR_1126ad3a0);
  func_0x000107c453e4();
  puVar2 = &UNK_11067d5d0;
  func_0x000107c613fc(&UNK_11067d5d0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  uStack_40 = 0x1036adf70;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1036ada7c;
  puStack_48 = &UNK_11067d5e8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c5286c(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126ad3a8;
  func_0x000107c610f8(PTR_PTR_1126ad3a8);
  func_0x000107c453e4();
  func_0x000107c5941c();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1036ad960; end: 1036ada7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ad960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  uVar3 = *(undefined8 *)(param_8 + _DAT_112f86650);
  puVar1 = &UNK_11067d670;
  func_0x000107c613fc(&UNK_11067d670,0x50,7);
  *(long *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_2;
  uStack_70 = 0x1036adfb0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11067d688;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_8);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1036ada7c; end: 1036adb8b;  */

void FUN_1036ada7c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec(param_2);
  }
  func_0x000107c60bc4();
  puVar3 = &UNK_11067d620;
  func_0x000107c613fc(&UNK_11067d620,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  func_0x000107c60bc4();
  puVar4 = &UNK_11067d648;
  func_0x000107c613fc(&UNK_11067d648,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,lVar5,param_3,0x1036adf94,puVar3,0x1036adfa4,puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
  return;
}



/* Entry: 1036adb8c; end: 1036add0f;  */

/* WARNING: Possible PIC construction at 0x0001036adce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036adce4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036adb8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + _DAT_112f86648) != 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112f86638);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000100d58c8c(uVar3,uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112f86640);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c6157c(param_3);
  func_0x000100d58c8c(uVar3,uVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + _DAT_112f86628) + _DAT_11302bac8);
  func_0x000107c6157c(param_5);
  func_0x000107c4d06c(uVar3);
  func_0x000107c61180();
  func_0x0001003445e4(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_8);
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c615f0(uVar3);
  func_0x0001036ae0d0();
  func_0x0001036ae3d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1036add10; end: 1036add6f; -[_TtC25SnapEditorSnapModesPlugin23SnapModesPluginProvider init] */

void FUN_1036add10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorSnapModesPlugin.SnapModesPluginProvider",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036add3c);
  (*pcVar1)();
}



/* Entry: 1036add70; end: 1036addef; -[_TtC25SnapEditorSnapModesPlugin23SnapModesPluginProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036add70(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86628));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86630));
  func_0x000100d58c8c(*(undefined8 *)(param_1 + _DAT_112f86638),
                      ((undefined8 *)(param_1 + _DAT_112f86638))[1]);
  func_0x000100d58c8c(*(undefined8 *)(param_1 + _DAT_112f86640),
                      ((undefined8 *)(param_1 + _DAT_112f86640))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86648));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f86650));
  return;
}



/* Entry: 1036addf0; end: 1036ade0f;  */

void FUN_1036addf0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e00a8);
  return;
}



/* Entry: 1036ade10; end: 1036adeaf; -[_TtC25SnapEditorSnapModesPlugin23SnapModesPluginProvider plusSnapModesTrayScopeDidUpdateMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ade10(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f86638);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f86638))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036adf60(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1036adeb0; end: 1036adf37;  */

/* WARNING: Possible PIC construction at 0x0001036adf04: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036adeb0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f86648);
  *(undefined8 *)(unaff_x20 + _DAT_112f86648) = 0;
  func_0x000107c61170(uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_112f86640);
  pcVar6 = (code *)*plVar1;
  if (pcVar6 == (code *)0x0) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f86638);
    uVar4 = *puVar2;
    uVar3 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    func_0x000100d58c8c(uVar4,uVar3);
    pcVar6 = (code *)*plVar1;
    lVar5 = plVar1[1];
    *plVar1 = 0;
    plVar1[1] = 0;
  }
  else {
    lVar5 = plVar1[1];
    func_0x000107c6157c(lVar5);
    (*pcVar6)();
  }
  if (pcVar6 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar5);
    return;
  }
  return;
}



/* Entry: 1036adf38; end: 1036adf5f; -[_TtC25SnapEditorSnapModesPlugin23SnapModesPluginProvider plusSnapModesTrayScopeDidDismiss] */

void FUN_1036adf38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036adeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036adf60; end: 1036adfcb;  */

void FUN_1036adf60(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1036adfcc; end: 1036ae1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1036adfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112f86698;
  func_0x000107c61614(unaff_x20 + _DAT_112f86698,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f86680) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86688) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f86690);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar4 = auStack_78;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_5);
  return puVar4;
}



/* Entry: 1036ae1d4; end: 1036ae2c7; -[_TtC22PlusSnapModesTrayScope22PlusSnapModesTrayScope initWithUiContainer:selectedModeInfo:captureSessionId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ae1d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  lVar3 = _DAT_112f86698;
  func_0x000107c61614(param_1 + _DAT_112f86698,0);
  *(undefined8 *)(param_1 + _DAT_112f86680) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f86688) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112f86690);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  func_0x000107c61428(param_1 + lVar3,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar4;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_78,puVar2);
  return;
}



/* Entry: 1036ae2c8; end: 1036ae323; -[_TtC22PlusSnapModesTrayScope22PlusSnapModesTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036ae2c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f86680));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86688));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f86690 + 8));
  param_1 = param_1 + _DAT_112f86698;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1036ae324; end: 1036ae38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ae324(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034c750();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f866a8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1036ae38c; end: 1036ae42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ae38c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f866a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036ae42c; end: 1036ae42f;  */

void FUN_1036ae42c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ae430; end: 1036ae463;  */

void FUN_1036ae430(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ae464; end: 1036ae473;  */

undefined1  [16] FUN_1036ae464(void)

{
  return ZEXT816(0x11067d748);
}



/* Entry: 1036ae474; end: 1036ae483; -[_TtC22PlusSnapModesTrayScope37PlusSnapModesTrayScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ae474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f866a8));
  return;
}



/* Entry: 1036ae484; end: 1036ae4a7;  */

undefined8 FUN_1036ae484(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1036ae4a8; end: 1036ae4ab;  */

void FUN_1036ae4a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ae4ac; end: 1036ae573;  */

void FUN_1036ae4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067d818;
  func_0x000107c613fc(&UNK_11067d818,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1036ae574,puVar1);
  return;
}



/* Entry: 1036ae574; end: 1036ae6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ae574(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  if (*(int *)(lStack_68 + _DAT_11302bb18) == 0) {
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar1 = 0x112e5e838;
    func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
    func_0x000107c610f8();
    func_0x00010017da58(lVar2,uVar1);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    func_0x000107c61174(puVar3);
    func_0x000100083b20(&uStack_70);
    func_0x000100083b20(&uStack_78);
    uVar1 = uStack_78;
    func_0x000107c4141c(uStack_78);
    func_0x000107c61180();
    func_0x000107c61170(uStack_78);
    func_0x000100083b20(&uStack_80);
    uVar4 = 0;
    FUN_1036aec4c(0);
    func_0x000107c610f8();
    func_0x0001036ae7c0(lVar5,lStack_68,puVar3,uStack_70,uVar1,uStack_80,uVar4);
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000107c61170(lStack_68);
    lVar5 = 0;
  }
  *param_1 = lVar5;
  return;
}



/* Entry: 1036ae6fc; end: 1036ae70b;  */

undefined1  [16] FUN_1036ae6fc(void)

{
  return ZEXT816(0x11067d840);
}



/* Entry: 1036ae70c; end: 1036aeafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ae70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86700) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86708) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86710) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86718) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86720) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f86728) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036aeafc; end: 1036aeaff;  */

undefined * FUN_1036aeafc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar6 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4b620(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c41050(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c5bcc0(lVar2);
    func_0x000107c61170(lVar2);
  }
  puVar3 = PTR_PTR_1126ad3b0;
  func_0x000107c610f8(PTR_PTR_1126ad3b0);
  func_0x000107c453e4();
  func_0x000107c5922c();
  func_0x0001002ed07c(0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c3ce84(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4ea94();
  func_0x000107c615e8(uVar4);
  func_0x000107c6010c(uVar5);
  func_0x000107c55f70(puVar3,param_2,uVar5);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5cb24(uVar5);
  func_0x000107c61180();
  func_0x000107c5758c(puVar3,param_2,uVar5);
  func_0x000107c61170(uVar5);
  pcStack_50 = FUN_1036af158;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1036aeed8;
  puStack_58 = &UNK_11067d970;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c540e8(puVar3,param_2,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  return puVar3;
}



/* Entry: 1036aeb00; end: 1036aeb4f; -[_TtC31SnapEditorTimerPluginEntryPoint21SnapEditorTimerPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036aeb38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036aeb3c) */

void FUN_1036aeb00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001036ae874(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036aeb50; end: 1036aebaf; -[_TtC31SnapEditorTimerPluginEntryPoint21SnapEditorTimerPlugin init] */

void FUN_1036aeb50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorTimerPluginEntryPoint.SnapEditorTimerPlugin",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036aeb7c);
  (*pcVar1)();
}



/* Entry: 1036aebb0; end: 1036aec27; -[_TtC31SnapEditorTimerPluginEntryPoint21SnapEditorTimerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036aebcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036aebec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036aec0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036aebf0) */
/* WARNING: Removing unreachable block (ram,0x0001036aebd0) */
/* WARNING: Removing unreachable block (ram,0x0001036aec10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036aebb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86700));
  return;
}



/* Entry: 1036aec28; end: 1036aec4b;  */

void FUN_1036aec28(long param_1,long param_2)

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



/* Entry: 1036aec4c; end: 1036aec6b;  */

void FUN_1036aec4c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0328);
  return;
}



/* Entry: 1036aec6c; end: 1036aec73;  */

void FUN_1036aec6c(long param_1,long param_2)

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



/* Entry: 1036aec74; end: 1036aed17;  */

void FUN_1036aec74(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(param_2);
    func_0x0001002ed07c(0);
    func_0x000107c4a564(param_1);
    func_0x000107c6010c();
    func_0x000107c4d664(uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036aed18; end: 1036aeed7;  */

undefined * FUN_1036aed18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar6 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4b620(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c41050(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c5bcc0(lVar2);
    func_0x000107c61170(lVar2);
  }
  puVar3 = PTR_PTR_1126ad3b0;
  func_0x000107c610f8(PTR_PTR_1126ad3b0);
  func_0x000107c453e4();
  func_0x000107c5922c();
  func_0x0001002ed07c(0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c3ce84(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4ea94();
  func_0x000107c615e8(uVar4);
  func_0x000107c6010c(uVar5);
  func_0x000107c55f70(puVar3,param_2,uVar5);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5cb24(uVar5);
  func_0x000107c61180();
  func_0x000107c5758c(puVar3,param_2,uVar5);
  func_0x000107c61170(uVar5);
  pcStack_50 = FUN_1036af158;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1036aeed8;
  puStack_58 = &UNK_11067d970;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c540e8(puVar3,param_2,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  return puVar3;
}



/* Entry: 1036aeed8; end: 1036aef1f;  */

void FUN_1036aeed8(long param_1,undefined8 param_2)

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



/* Entry: 1036aef20; end: 1036af057;  */

/* WARNING: Possible PIC construction at 0x0001036aef64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036af028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036aef68) */
/* WARNING: Removing unreachable block (ram,0x0001036aef6c) */
/* WARNING: Removing unreachable block (ram,0x0001036af044) */
/* WARNING: Removing unreachable block (ram,0x0001036aef90) */
/* WARNING: Removing unreachable block (ram,0x0001036af02c) */

void FUN_1036aef20(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c3ff98(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1036af058; end: 1036af0eb;  */

void FUN_1036af058(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1036af0ec; end: 1036af157; -[_TtC31SnapEditorTimerPluginEntryPoint19TimerPluginProvider plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001036af134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036af138) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1036af0ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x30));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1036af158; end: 1036af177;  */

/* WARNING: Possible PIC construction at 0x0001036aef64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036af028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036aef68) */
/* WARNING: Removing unreachable block (ram,0x0001036aef6c) */
/* WARNING: Removing unreachable block (ram,0x0001036af044) */
/* WARNING: Removing unreachable block (ram,0x0001036aef90) */
/* WARNING: Removing unreachable block (ram,0x0001036af02c) */

void FUN_1036af158(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c3ff98(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1036af178; end: 1036af2c3;  */

void FUN_1036af178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067da50;
  func_0x000107c613fc(&UNK_11067da50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1036af1f8,puVar1);
  return;
}



/* Entry: 1036af2c4; end: 1036af2d3;  */

undefined1  [16] FUN_1036af2c4(void)

{
  return ZEXT816(0x11067da78);
}



/* Entry: 1036af2d4; end: 1036af2ef;  */

void FUN_1036af2d4(void)

{
  func_0x000107c610f8(PTR_PTR_1126ad3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1036af2f0; end: 1036af3b7; -[_TtC36SnapEditorToggleLensPluginEntryPoint26SnapEditorToggleLensPlugin populateDependencies:] */

void FUN_1036af2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_40 = FUN_1036af2d4;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101016bdc;
  puStack_48 = &UNK_11067db30;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_3);
  func_0x000107c46b38(puVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_38);
  func_0x000107c59e74(param_3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1036af3b8; end: 1036af3f3; -[_TtC36SnapEditorToggleLensPluginEntryPoint26SnapEditorToggleLensPlugin init] */

void FUN_1036af3b8(undefined8 param_1)

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



/* Entry: 1036af3f4; end: 1036af427;  */

void FUN_1036af3f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036af428; end: 1036af443;  */

void FUN_1036af428(long param_1,long param_2)

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



/* Entry: 1036af444; end: 1036af463;  */

void FUN_1036af444(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0410);
  return;
}



/* Entry: 1036af464; end: 1036af46b;  */

void FUN_1036af464(long param_1,long param_2)

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



/* Entry: 1036af46c; end: 1036af527;  */

void FUN_1036af46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86868,&UNK_10dbfa2e0);
  puVar1 = &UNK_11067dc10;
  func_0x000107c613fc(&UNK_11067dc10,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1036af528,puVar1);
  return;
}



/* Entry: 1036af528; end: 1036af76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036af528(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar3 = *(long *)(lStack_68 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar4 = lVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    lVar4 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  lVar3 = lVar1;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar5 = lVar1;
    func_0x000107c5b4dc();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000100083b20(&uStack_70);
      uVar6 = uStack_70;
      func_0x000107c51d00(uStack_70);
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      func_0x000100083b20(&lStack_78);
      uVar11 = *(undefined8 *)(lStack_78 + _DAT_11307d3e0);
      func_0x000107c615f0(uVar11);
      func_0x000107c61170(lStack_78);
      func_0x000100083b20(&lStack_80);
      uVar7 = *(undefined8 *)(lStack_80 + _DAT_113077440);
      func_0x000107c61174(uVar7);
      func_0x000107c61170(lStack_80);
      puVar8 = PTR_PTR_1126d1328;
      func_0x000107c610f8(PTR_PTR_1126d1328);
      func_0x000107c49248();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar7);
      func_0x000107c615e8(uVar11);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar3);
      puVar9 = PTR_PTR_1126d1330;
      func_0x000107c610f8(PTR_PTR_1126d1330);
      func_0x000107c46a98();
      puVar10 = PTR_PTR_1126d1340;
      func_0x000107c610f8();
      func_0x000107c493ec();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar1);
      *param_1 = puVar10;
      return;
    }
    func_0x000107c61170(lVar4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1036af770);
    (*pcVar2)();
  }
  func_0x000107c61170(lVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036af764);
  (*pcVar2)();
}



/* Entry: 1036af770; end: 1036af77f;  */

undefined1  [16] FUN_1036af770(void)

{
  return ZEXT816(0x11067dc38);
}



/* Entry: 1036af780; end: 1036af923;  */

void FUN_1036af780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067dd00;
  func_0x000107c613fc(&UNK_11067dd00,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x1036af83c,puVar1);
  return;
}



/* Entry: 1036af924; end: 1036af947;  */

undefined1  [16] FUN_1036af924(void)

{
  return ZEXT816(0x11067dd28);
}



/* Entry: 1036af948; end: 1036af9f3;  */

void FUN_1036af948(void)

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



/* Entry: 1036af9f4; end: 1036afa03;  */

void FUN_1036af9f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1036afa04; end: 1036afb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1036afa04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86870) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86878) = param_1;
  uVar3 = *(undefined8 *)(param_3 + _DAT_112ff4f00);
  *(undefined8 *)(unaff_x20 + _DAT_112f86880) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86888) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86890) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_50,puVar1);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1036afb94; end: 1036afd13;  */

void FUN_1036afb94(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126ad3c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11067ddf0;
  func_0x000107c613fc(&UNK_11067ddf0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1036afd14;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x1036b0924;
  puStack_68 = &UNK_11067de08;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c58eb4(puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_11067de40;
  func_0x000107c613fc(&UNK_11067de40,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_60 = (code *)0x1036b031c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101016bdc;
  puStack_68 = &UNK_11067de58;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(puVar2);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_58);
  func_0x000107c55e5c(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1036afd14; end: 1036b02ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036afd14(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_68 [24];
  
  puVar3 = PTR_PTR_1126b1588;
  func_0x000107c610f8(PTR_PTR_1126b1588);
  func_0x000107c453e4();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  puVar4 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar4 == (undefined *)0x0) {
    func_0x0001036b06c8();
    puVar8 = &UNK_11067dff0;
    func_0x000107c613f8(&UNK_11067dff0,puVar4,0,0);
    *puVar4 = 1;
    puVar4 = puVar8;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar8);
    func_0x000107c43b70(puVar3);
  }
  else {
    func_0x0001000d224c(&puStack_a0);
    puVar6 = puStack_a0;
    puVar5 = puStack_a0;
    func_0x000107c5ac40();
    func_0x000107c615e8(puVar6);
    if ((int)puVar5 != 0) {
      func_0x0001000d224c(&puStack_a0);
      puVar6 = puStack_a0;
      func_0x000107c5d000(puStack_a0);
      func_0x000107c615e8();
      func_0x0001036b06c8();
      puVar8 = &UNK_11067dff0;
      func_0x000107c613f8(&UNK_11067dff0,puVar6,0,0);
      *puVar6 = 0;
      func_0x000107c61654();
      if (puVar8 != (undefined *)0x0) {
        func_0x000107c61170(puVar4);
        puVar4 = puVar8;
        func_0x000107c5ed2c(puVar8);
        func_0x000107c43b70(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c614ac(puVar8);
        return puVar3;
      }
    }
    uVar9 = *(undefined8 *)(*(long *)(puVar4 + _DAT_112f86890) + _DAT_112fcacc8);
    func_0x000107c6157c(uVar9);
    func_0x0001000d224c(&uStack_100);
    func_0x000107c61574(uVar9);
    func_0x000107c614f0(uStack_100);
    (**(code **)(lStack_f8 + 0x18))(&puStack_d0);
    func_0x000107c615e8(uStack_100);
    if (cStack_a8 == -1) {
      func_0x00010101bc14(&puStack_d0);
      puVar1 = (undefined8 *)(*(long *)(puVar4 + _DAT_112f86878) + _DAT_11302bae8);
      lVar11 = puVar1[1];
      if ((lVar11 != 0) &&
         (lVar10 = *(long *)(*(long *)(puVar4 + _DAT_112f86878) + _DAT_11302bb08), lVar10 != 0)) {
        uVar9 = *puVar1;
        func_0x000107c61434(lVar11);
        func_0x000107c61174(lVar10);
        func_0x0001036b014c(uVar9,lVar11,lVar10);
        func_0x000107c6142c(lVar11);
        func_0x000107c61170(lVar10);
      }
    }
    else {
      uStack_98 = uStack_c8;
      puStack_a0 = puStack_d0;
      uStack_90 = uStack_c0;
      uVar9 = *(undefined8 *)(*(long *)(puVar4 + _DAT_112f86888) + _DAT_112fcab50);
      func_0x000107c6157c(uVar9);
      func_0x0001000d224c(&lStack_d8);
      func_0x000107c61574(uVar9);
      func_0x00010101bc9c(&puStack_a0,&puStack_d0);
      func_0x000102ae015c(&puStack_d0,&uStack_100);
      lVar11 = lStack_e0;
      uVar9 = uStack_e8;
      func_0x0001000a8868(&uStack_100,uStack_e8);
      (**(code **)(lVar11 + 0x10))(uVar9,lVar11);
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar11);
      func_0x0001000834e4(&uStack_100);
      func_0x00010101bc9c(&puStack_a0,&puStack_d0);
      func_0x000102ae015c(&puStack_d0,&uStack_100);
      lVar11 = lStack_e0;
      uVar7 = uStack_e8;
      func_0x0001000a8868(&uStack_100,uStack_e8);
      (**(code **)(lVar11 + 0x18))(uVar7,lVar11);
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar11);
      func_0x0001000834e4(&uStack_100);
      lVar11 = lStack_d8;
      func_0x000107c4c208();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(lStack_d8);
      if (lVar11 == 0) {
        func_0x00010101bb90(&puStack_a0);
      }
      else {
        func_0x00010101bc9c(&puStack_a0,&puStack_d0);
        func_0x000102ae015c(&puStack_d0,&uStack_100);
        func_0x0001000a8868(&uStack_100,uStack_e8);
        lVar10 = lStack_e0;
        (**(code **)(lStack_e0 + 0x18))(uStack_e8,lStack_e0);
        func_0x0001036b014c();
        func_0x000107c61170(lVar11);
        func_0x000107c6142c(lVar10);
        func_0x00010101bb90(&puStack_a0);
        func_0x0001000834e4(&uStack_100);
      }
    }
    puVar8 = PTR_PTR_1126b15a8;
    func_0x000107c61168();
    func_0x000107c5d1f4();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b014c);
      (*pcVar2)();
    }
    func_0x000107c43b74(puVar3);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1036b0300; end: 1036b0323;  */

void FUN_1036b0300(long param_1,long param_2)

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



/* Entry: 1036b0324; end: 1036b0373; -[_TtC14LensSendPlugin14LensSendPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036b035c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b0360) */

void FUN_1036b0324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036afb94(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036b0374; end: 1036b05d3;  */

undefined8 FUN_1036b0374(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar4 = &UNK_11067df08;
  func_0x000107c613fc(&UNK_11067df08,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_48;
  puVar5 = &UNK_11067df30;
  func_0x000107c613fc(&UNK_11067df30,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1036b0728;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x1036b091c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  pcStack_68 = FUN_1036b08fc;
  puStack_60 = &UNK_11067df48;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6dc();
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_48;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x50,0x9e,0x1d,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1036b04a4);
  (*pcVar3)();
}



/* Entry: 1036b05d4; end: 1036b0607;  */

void FUN_1036b05d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036b0608; end: 1036b06a7; -[_TtC14LensSendPlugin14LensSendPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036b0634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036b0654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b0638) */
/* WARNING: Removing unreachable block (ram,0x0001036b0658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b0608(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f86870));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86878));
  return;
}



/* Entry: 1036b06a8; end: 1036b0707;  */

void FUN_1036b06a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e04c0);
  return;
}



/* Entry: 1036b0708; end: 1036b0753;  */

void FUN_1036b0708(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036b0754; end: 1036b08bb;  */

int FUN_1036b0754(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1036b07d0;
        goto LAB_1036b07b4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1036b07b4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1036b07d0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1036b08bc; end: 1036b08fb;  */

void FUN_1036b08bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f868c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfa3e8;
  func_0x000107c61520(&UNK_10dbfa3e8,&UNK_11067dff0);
  puRam0000000112f868c8 = puVar1;
  return;
}



/* Entry: 1036b08fc; end: 1036b0927;  */

void FUN_1036b08fc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1036b0928; end: 1036b0a1b;  */

void FUN_1036b0928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067e118;
  func_0x000107c613fc(&UNK_11067e118,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1036b09a8,puVar1);
  return;
}



/* Entry: 1036b0a1c; end: 1036b0a2b;  */

undefined1  [16] FUN_1036b0a1c(void)

{
  return ZEXT816(0x11067e140);
}



/* Entry: 1036b0a2c; end: 1036b0af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b0a2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f868d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f868d8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036b0af4; end: 1036b0c73;  */

void FUN_1036b0af4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126ad3c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11067e208;
  func_0x000107c613fc(&UNK_11067e208,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1036b0c74;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1036b10c8;
  puStack_68 = &UNK_11067e220;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c5573c(puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_11067e258;
  func_0x000107c613fc(&UNK_11067e258,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_60 = (code *)0x1036b1154;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_101016bdc;
  puStack_68 = &UNK_11067e270;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(puVar2);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_58);
  func_0x000107c5686c(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1036b0c74; end: 1036b10c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036b0c74(byte *param_1,byte *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  byte **ppbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  long unaff_x20;
  ulong uVar21;
  byte *pbStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar9 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  puVar10 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar10 != (undefined *)0x0) {
    if (param_2 != (byte *)0x0) {
      pbVar16 = (byte *)((ulong)param_1 & 0xffffffffffff);
      pbVar18 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
      pbVar17 = pbVar16;
      if (((ulong)param_2 & 0x2000000000000000) != 0) {
        pbVar17 = pbVar18;
      }
      if (pbVar17 != (byte *)0x0) {
        if (((ulong)param_2 >> 0x3c & 1) == 0) {
          if (((ulong)param_2 >> 0x3d & 1) != 0) {
            pbStack_98 = param_1;
            uStack_90 = (ulong)param_2 & 0xffffffffffffff;
            uVar20 = (uint)param_1 & 0xff;
            if (uVar20 == 0x2b) {
              if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1036b10c8);
                (*pcVar8)();
              }
              pbVar18 = pbVar18 + -1;
              if (pbVar18 == (byte *)0x0) goto LAB_1036b0f0c;
              uVar21 = 0;
              pbVar17 = (byte *)((ulong)&pbStack_98 | 1);
              do {
                if (((9 < *pbVar17 - 0x30) ||
                    (auVar5._8_8_ = 0, auVar5._0_8_ = uVar21, SUB168(auVar5 * ZEXT816(10),8) != 0))
                   || (uVar19 = uVar21 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
                      uVar21 = uVar19 + uVar1, CARRY8(uVar19,uVar1))) goto LAB_1036b0f0c;
                uVar20 = 0;
                pbVar18 = pbVar18 + -1;
                pbVar17 = pbVar17 + 1;
              } while (pbVar18 != (byte *)0x0);
            }
            else if (uVar20 == 0x2d) {
              if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1036b10c0);
                (*pcVar8)();
              }
              pbVar18 = pbVar18 + -1;
              if (pbVar18 == (byte *)0x0) {
LAB_1036b0f0c:
                uVar20 = 1;
              }
              else {
                uVar21 = 0;
                pbVar17 = (byte *)((ulong)&pbStack_98 | 1);
                do {
                  if (((9 < *pbVar17 - 0x30) ||
                      (auVar3._8_8_ = 0, auVar3._0_8_ = uVar21, SUB168(auVar3 * ZEXT816(10),8) != 0)
                      ) || (uVar19 = uVar21 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
                           uVar21 = uVar19 - uVar1, uVar19 < uVar1)) goto LAB_1036b0f0c;
                  uVar20 = 0;
                  pbVar18 = pbVar18 + -1;
                  pbVar17 = pbVar17 + 1;
                } while (pbVar18 != (byte *)0x0);
              }
            }
            else {
              if (pbVar18 == (byte *)0x0) goto LAB_1036b0f0c;
              uVar21 = 0;
              ppbVar15 = &pbStack_98;
              do {
                if (((9 < *(byte *)ppbVar15 - 0x30) ||
                    (auVar7._8_8_ = 0, auVar7._0_8_ = uVar21, SUB168(auVar7 * ZEXT816(10),8) != 0))
                   || (uVar19 = uVar21 * 10, uVar1 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                      uVar21 = uVar19 + uVar1, CARRY8(uVar19,uVar1))) goto LAB_1036b0f0c;
                uVar20 = 0;
                pbVar18 = pbVar18 + -1;
                ppbVar15 = (byte **)((long)ppbVar15 + 1);
              } while (pbVar18 != (byte *)0x0);
            }
            goto LAB_1036b0f14;
          }
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            func_0x000107c60358();
          }
          else {
            param_1 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
            param_2 = pbVar16;
          }
          if (*param_1 == 0x2b) {
            pbVar17 = param_2 + -1;
            if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1036b10c4);
              (*pcVar8)();
            }
            if (pbVar17 != (byte *)0x0) {
              uVar21 = 0;
              do {
                param_1 = param_1 + 1;
                if (((9 < *param_1 - 0x30) ||
                    (auVar4._8_8_ = 0, auVar4._0_8_ = uVar21, SUB168(auVar4 * ZEXT816(10),8) != 0))
                   || (uVar19 = uVar21 * 10, uVar1 = (ulong)(byte)(*param_1 - 0x30),
                      uVar21 = uVar19 + uVar1, CARRY8(uVar19,uVar1))) goto LAB_1036b0f20;
                pbVar17 = pbVar17 + -1;
              } while (pbVar17 != (byte *)0x0);
              goto LAB_1036b0f70;
            }
            goto LAB_1036b0f20;
          }
          if (*param_1 != 0x2d) {
            if (param_2 != (byte *)0x0) {
              uVar21 = 0;
              pbVar17 = param_1;
              while (pbVar17 != (byte *)0x0) {
                if (((9 < *param_1 - 0x30) ||
                    (auVar6._8_8_ = 0, auVar6._0_8_ = uVar21, SUB168(auVar6 * ZEXT816(10),8) != 0))
                   || (uVar19 = uVar21 * 10, uVar1 = (ulong)(byte)(*param_1 - 0x30),
                      uVar21 = uVar19 + uVar1, CARRY8(uVar19,uVar1))) goto LAB_1036b0f20;
                param_2 = param_2 + -1;
                param_1 = param_1 + 1;
                pbVar17 = param_2;
              }
              goto LAB_1036b0f70;
            }
            goto LAB_1036b0f20;
          }
          pbVar17 = param_2 + -1;
          if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1036b10bc);
            (*pcVar8)();
          }
          if (pbVar17 == (byte *)0x0) goto LAB_1036b0f20;
          uVar21 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (auVar2._8_8_ = 0, auVar2._0_8_ = uVar21, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
               (uVar19 = uVar21 * 10, uVar1 = (ulong)(byte)(*param_1 - 0x30),
               uVar21 = uVar19 - uVar1, uVar19 < uVar1)) goto LAB_1036b0f20;
            pbVar17 = pbVar17 + -1;
          } while (pbVar17 != (byte *)0x0);
        }
        else {
          func_0x000107c61434(param_2);
          pbVar17 = param_2;
          func_0x000100f5015c(param_1,param_2,10);
          uVar20 = (uint)pbVar17;
          func_0x000107c6142c(param_2);
LAB_1036b0f14:
          if ((uVar20 & 0xff) == 1) goto LAB_1036b0f20;
        }
LAB_1036b0f70:
        lVar11 = *(long *)(puVar10 + _DAT_112f868d8);
        func_0x000107c51cd8();
        func_0x000107c61180();
        lVar12 = lVar11;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        puVar13 = puVar10;
        if (lVar12 != 0) {
          puVar13 = (undefined *)0x0;
          func_0x0001000295c4(0);
          func_0x000107c5ffdc();
          puVar14 = &UNK_11067e2a8;
          func_0x000107c613fc(&UNK_11067e2a8,0x18,7);
          *(undefined **)(puVar14 + 0x10) = puVar9;
          pcStack_78 = FUN_1036b1238;
          pbStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_1013b7310;
          puStack_80 = &UNK_11067e2c0;
          ppbVar15 = &pbStack_98;
          puStack_70 = puVar14;
          func_0x000107c60bc4(ppbVar15);
          puVar14 = puStack_70;
          func_0x000107c61174(puVar9);
          func_0x000107c61574(puVar14);
          func_0x000107c42fd8(lVar12);
          func_0x000107c61170(puVar10);
          func_0x000107c60bd0(ppbVar15);
          func_0x000107c615e8(lVar12);
        }
        goto LAB_1036b0f4c;
      }
    }
LAB_1036b0f20:
    func_0x000107c61170();
  }
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(puVar9);
LAB_1036b0f4c:
  func_0x000107c61170(puVar13);
  return puVar9;
}



/* Entry: 1036b10c8; end: 1036b1137;  */

void FUN_1036b10c8(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5faec(param_2);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,lVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1036b1138; end: 1036b115b;  */

void FUN_1036b1138(long param_1,long param_2)

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



/* Entry: 1036b115c; end: 1036b11ab; -[_TtC15MusicSendPlugin15MusicSendPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036b1194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b1198) */

void FUN_1036b115c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036b0af4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036b11ac; end: 1036b11df;  */

void FUN_1036b11ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036b11e0; end: 1036b1217; -[_TtC15MusicSendPlugin15MusicSendPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036b11fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b1200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b11e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f868d0));
  return;
}



/* Entry: 1036b1218; end: 1036b1237;  */

void FUN_1036b1218(void)

{
  func_0x000107c61168(&PTR_PTR_1128e05a0);
  return;
}



/* Entry: 1036b1238; end: 1036b127f;  */

void FUN_1036b1238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1036b1280; end: 1036b128f;  */

void FUN_1036b1280(long param_1,long param_2)

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



/* Entry: 1036b1290; end: 1036b12db;  */

void FUN_1036b1290(undefined8 param_1)

{
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036b12dc,param_1);
  return;
}



/* Entry: 1036b12dc; end: 1036b13c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b12dc(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  puVar1 = PTR_PTR_1133bb530;
  lVar2 = *(long *)(lStack_38 + _DAT_11302bab8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    func_0x000107c61434(lVar2);
    func_0x000100fac3bc();
    if ((param_3 & 1) == 0) {
      func_0x000107c6142c(lVar2);
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + (long)puVar1 * 8);
      func_0x000107c615f0(lVar3);
      func_0x000107c6142c(lVar2);
      puVar1 = PTR_PTR_1126ad3d0;
      func_0x000107c61168(PTR_PTR_1126ad3d0);
      lVar2 = lVar3;
      func_0x000107c6148c(lVar3,puVar1);
      func_0x000107c615e8(lVar3);
      if (lVar2 != 0) {
        FUN_1036b14ac(0);
        func_0x000107c610f8();
        func_0x0001036b1444();
        goto LAB_1036b13ac;
      }
    }
  }
  func_0x000107c61170(lStack_38);
  lStack_38 = 0;
LAB_1036b13ac:
  *param_1 = lStack_38;
  return;
}



/* Entry: 1036b13c4; end: 1036b13d3;  */

undefined1  [16] FUN_1036b13c4(void)

{
  return ZEXT816(0x11067e3a0);
}



/* Entry: 1036b13d4; end: 1036b14ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b13d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  puVar2 = PTR_PTR_1133bb530;
  *(undefined **)(unaff_x20 + _DAT_112f86908) = PTR_PTR_1133bb530;
  *(undefined8 *)(unaff_x20 + _DAT_112f86910) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(puVar2);
  func_0x000107c61154(auStack_30,puVar1);
  return;
}



/* Entry: 1036b14ac; end: 1036b14cb;  */

void FUN_1036b14ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0668);
  return;
}



/* Entry: 1036b14cc; end: 1036b165f;  */

/* WARNING: Possible PIC construction at 0x0001036b1618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b161c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b14cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1133bb530;
  ppuVar3 = &puStack_60;
  lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86910) + _DAT_11302bab8);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    uVar4 = 0;
    func_0x000107c61438(lVar6);
    func_0x000100fac3bc();
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + (long)puVar1 * 8);
      func_0x000107c615f0(lVar5);
      func_0x000107c61430(lVar6,2);
      puVar1 = PTR_PTR_1126ad3d0;
      func_0x000107c61168(PTR_PTR_1126ad3d0);
      lVar6 = lVar5;
      func_0x000107c6148c(lVar5,puVar1);
      if (lVar6 != 0) {
        puVar1 = &UNK_11067e468;
        func_0x000107c613fc(&UNK_11067e468,0x18,7);
        *(long *)(puVar1 + 0x10) = lVar6;
        puVar2 = PTR_PTR_1126b1678;
        func_0x000107c610f8(PTR_PTR_1126b1678);
        pcStack_40 = FUN_1036b1718;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_101016bdc;
        puStack_48 = &UNK_11067e480;
        puStack_38 = puVar1;
        func_0x000107c60bc4(&puStack_60);
        func_0x000107c615f0(lVar5);
        func_0x000107c46b38(puVar2);
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61574(puStack_38);
        func_0x000107c54b94(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
      return;
    }
    func_0x000107c61430(lVar6,2);
  }
  return;
}



/* Entry: 1036b1660; end: 1036b16af; -[_TtC37SnapEditorFramePickerPluginEntryPoint27SnapEditorFramePickerPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036b1698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b169c) */

void FUN_1036b1660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036b14cc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036b16b0; end: 1036b16df;  */

void FUN_1036b16b0(void)

{
  FUN_1036b14ac();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


