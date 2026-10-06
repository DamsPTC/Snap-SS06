/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10123aee4; end: 10123af03;  */

void FUN_10123aee4(void)

{
  func_0x000107c61168(&PTR_PTR_1127be330);
  return;
}



/* Entry: 10123af04; end: 10123afc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123af04(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_1 == 2) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6a9a8);
    puVar1 = &UNK_110397228;
    func_0x000107c613fc(&UNK_110397228,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_40 = FUN_10123afe8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110397240;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c41864(uVar3);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 10123afc4; end: 10123afe7;  */

undefined8 FUN_10123afc4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10123afe8; end: 10123b00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123afe8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    pcVar2 = *(code **)(lVar5 + _DAT_112d6a9b0);
    uVar3 = ((undefined8 *)(lVar5 + _DAT_112d6a9b0))[1];
    func_0x000100b64c10(pcVar2,uVar3);
    func_0x000107c61170(lVar5);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      func_0x00010058d43c(pcVar2,uVar3);
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + _DAT_112d6a9b0);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar3,uVar4);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar7 = lVar5 + _DAT_112d6a9b8;
    lVar6 = lVar7;
    func_0x000107c61618();
    lVar7 = *(long *)(lVar7 + 8);
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      func_0x000107c614f0(lVar6);
      (**(code **)(lVar7 + 8))();
      func_0x000107c615e8(lVar6);
    }
  }
  return;
}



/* Entry: 10123b00c; end: 10123b123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10123b00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d6a9e8) = 0;
  lVar2 = unaff_x20 + _DAT_112d6a9f0;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6a9f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6aa00) = param_2;
  *(undefined8 *)(lVar2 + 8) = param_5;
  func_0x000107c61604();
  *(undefined8 *)(unaff_x20 + _DAT_112d6aa08) = param_3;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(auStack_60,puVar1,0,0);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar3;
}



/* Entry: 10123b124; end: 10123b143;  */

void FUN_10123b124(void)

{
  func_0x000107c61168(&PTR_PTR_1127be448);
  return;
}



/* Entry: 10123b144; end: 10123b1bf; -[_TtC19AudioEffectsFeature26AudioEffectsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123b144(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d6a9e8) = 0;
  param_1 = param_1 + _DAT_112d6a9f0;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AudioEffectsFeature/AudioEffectsViewController.swift",0x34,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10123b1c0);
  (*pcVar1)();
}



/* Entry: 10123b1c0; end: 10123b2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123b1c0(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  FUN_10123b378();
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6a9e8);
  if (lVar3 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    puVar1 = &UNK_110397278;
    func_0x000107c613fc(&UNK_110397278,0x20,7);
    *(code **)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    pcStack_50 = FUN_10123b970;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110397290;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174(lVar3);
    func_0x000100b64c10(param_1,param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c5e078(lVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10123b2b8; end: 10123b2db;  */

void FUN_10123b2b8(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 10123b2dc; end: 10123b377; -[_TtC19AudioEffectsFeature26AudioEffectsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123b2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a9e8);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c61174();
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c41848();
      func_0x000107c615e8();
    }
  }
  FUN_10123b124();
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_viewWillDisappear__112685438,param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10123b378; end: 10123b96f;  */

/* WARNING: Possible PIC construction at 0x00010123b424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123b92c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123b920) */
/* WARNING: Removing unreachable block (ram,0x00010123b8d4) */
/* WARNING: Removing unreachable block (ram,0x00010123b8b4) */
/* WARNING: Removing unreachable block (ram,0x00010123b86c) */
/* WARNING: Removing unreachable block (ram,0x00010123b96c) */
/* WARNING: Removing unreachable block (ram,0x00010123b880) */
/* WARNING: Removing unreachable block (ram,0x00010123b844) */
/* WARNING: Removing unreachable block (ram,0x00010123b824) */
/* WARNING: Removing unreachable block (ram,0x00010123b7d0) */
/* WARNING: Removing unreachable block (ram,0x00010123b968) */
/* WARNING: Removing unreachable block (ram,0x00010123b804) */
/* WARNING: Removing unreachable block (ram,0x00010123b7b0) */
/* WARNING: Removing unreachable block (ram,0x00010123b760) */
/* WARNING: Removing unreachable block (ram,0x00010123b964) */
/* WARNING: Removing unreachable block (ram,0x00010123b794) */
/* WARNING: Removing unreachable block (ram,0x00010123b740) */
/* WARNING: Removing unreachable block (ram,0x00010123b6cc) */
/* WARNING: Removing unreachable block (ram,0x00010123b960) */
/* WARNING: Removing unreachable block (ram,0x00010123b724) */
/* WARNING: Removing unreachable block (ram,0x00010123b660) */
/* WARNING: Removing unreachable block (ram,0x00010123b638) */
/* WARNING: Removing unreachable block (ram,0x00010123b604) */
/* WARNING: Removing unreachable block (ram,0x00010123b5b4) */
/* WARNING: Removing unreachable block (ram,0x00010123b5cc) */
/* WARNING: Removing unreachable block (ram,0x00010123b5f0) */
/* WARNING: Removing unreachable block (ram,0x00010123b4ec) */
/* WARNING: Removing unreachable block (ram,0x00010123b668) */
/* WARNING: Removing unreachable block (ram,0x00010123b95c) */
/* WARNING: Removing unreachable block (ram,0x00010123b6b8) */
/* WARNING: Removing unreachable block (ram,0x00010123b504) */
/* WARNING: Removing unreachable block (ram,0x00010123b64c) */
/* WARNING: Removing unreachable block (ram,0x00010123b53c) */
/* WARNING: Removing unreachable block (ram,0x00010123b644) */
/* WARNING: Removing unreachable block (ram,0x00010123b554) */
/* WARNING: Removing unreachable block (ram,0x00010123b57c) */
/* WARNING: Removing unreachable block (ram,0x00010123b5a0) */
/* WARNING: Removing unreachable block (ram,0x00010123b4b4) */
/* WARNING: Removing unreachable block (ram,0x00010123b428) */
/* WARNING: Removing unreachable block (ram,0x00010123b454) */
/* WARNING: Removing unreachable block (ram,0x00010123b46c) */
/* WARNING: Removing unreachable block (ram,0x00010123b930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123b378(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d6a9e8) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6750;
  func_0x000107c610f8(PTR_PTR_1126a6750);
  func_0x000107c454d0();
  func_0x00010123bdb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 1;
  func_0x000107c6010c(1);
  func_0x000107c529f8(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10123b970; end: 10123b997;  */

void FUN_10123b970(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 10123b998; end: 10123b9b3;  */

void FUN_10123b998(long param_1,long param_2)

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



/* Entry: 10123b9b4; end: 10123ba0f; -[_TtC19AudioEffectsFeature26AudioEffectsViewController initWithNibName:bundle:] */

void FUN_10123b9b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AudioEffectsFeature.AudioEffectsViewController",0x2e,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10123b9e0);
  (*pcVar1)();
}



/* Entry: 10123ba10; end: 10123ba77; -[_TtC19AudioEffectsFeature26AudioEffectsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10123ba10(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6aa00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a9f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a9e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6aa08));
  param_1 = param_1 + _DAT_112d6a9f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10123ba78; end: 10123ba7f; -[_TtC19AudioEffectsFeature26AudioEffectsViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_10123ba78(void)

{
  return 0;
}



/* Entry: 10123ba80; end: 10123bae3; -[_TtC19AudioEffectsFeature26AudioEffectsViewController onSnapVolumeChangedWithSnapVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123ba80(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112d6a9f8);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e3bc(param_1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10123bae4; end: 10123bb47; -[_TtC19AudioEffectsFeature26AudioEffectsViewController onMusicVolumeChangedWithMusicVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123bae4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112d6a9f8);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e3b8(param_1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10123bb48; end: 10123bca7;  */

void FUN_10123bb48(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "onToolCloseButtonSelected()";
  func_0x0001000c10c0("onToolCloseButtonSelected()");
  func_0x000107c61180();
  puVar2 = &UNK_1103972c8;
  func_0x000107c613fc(&UNK_1103972c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_10123bca8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103972e0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10123bca8; end: 10123bcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123bca8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = lVar1 + _DAT_112d6a9f0;
    lVar2 = lVar3;
    func_0x000107c61618();
    lVar3 = *(long *)(lVar3 + 8);
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c614f0(lVar2);
      (**(code **)(lVar3 + 8))();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10123bcb0; end: 10123bcd7; -[_TtC19AudioEffectsFeature26AudioEffectsViewController onToolCloseButtonSelected] */

void FUN_10123bcb0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10123bb48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10123bcd8; end: 10123bd2b; -[_TtC19AudioEffectsFeature26AudioEffectsViewController onTapAddSound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123bcd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a9f8);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e3c4();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10123bd2c; end: 10123bd7f; -[_TtC19AudioEffectsFeature26AudioEffectsViewController onTapAddVoiceover] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123bd2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a9f8);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e3c8();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10123bd80; end: 10123bd8b; -[_TtC19AudioEffectsFeature26AudioEffectsViewController pushToValdiMarshaller:] */

undefined8 FUN_10123bd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d42c8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 10123bd8c; end: 10123bdef;  */

undefined8 FUN_10123bd8c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10123bdf0; end: 10123bdf7;  */

void FUN_10123bdf0(long param_1,long param_2)

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



/* Entry: 10123bdf8; end: 10123be03; -[SCAudioEffectsFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123bdf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6aa38;
  func_0x000107c61428(param_1 + _DAT_112d6aa38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123be04; end: 10123be0f; -[SCAudioEffectsFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123be04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6aa38;
  func_0x000107c61428(param_1 + _DAT_112d6aa38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123be10; end: 10123be1b; -[SCAudioEffectsFeatureEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123be10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6aa40;
  func_0x000107c61428(param_1 + _DAT_112d6aa40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123be1c; end: 10123be27; -[SCAudioEffectsFeatureEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123be1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6aa40;
  func_0x000107c61428(param_1 + _DAT_112d6aa40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123be28; end: 10123be33; -[SCAudioEffectsFeatureEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123be28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6aa48;
  func_0x000107c61428(param_1 + _DAT_112d6aa48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123be34; end: 10123be77;  */

void FUN_10123be34(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10123be78; end: 10123be83; -[SCAudioEffectsFeatureEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123be78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6aa48;
  func_0x000107c61428(param_1 + _DAT_112d6aa48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123be84; end: 10123bed7;  */

void FUN_10123be84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123bed8; end: 10123bfff;  */

/* WARNING: Possible PIC construction at 0x00010123bf8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123bf9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123bf90) */
/* WARNING: Removing unreachable block (ram,0x00010123bfa0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10123bed8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5dbac();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = 0;
        FUN_10123a9ec();
        func_0x000107c613fc();
        *(long *)(lVar3 + 0x28) = lVar1;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(long *)(lVar3 + 0x18) = lVar2;
        *(long *)(lVar3 + 0x20) = unaff_x20;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(unaff_x20);
        FUN_10123a2d8();
        lVar1 = unaff_x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10123c000; end: 10123c027; -[SCAudioEffectsFeatureEntryPoint begin] */

void FUN_10123c000(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10123bed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10123c028; end: 10123c2df; -[SCAudioEffectsFeatureEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c028(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d6aa50);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_10123a754();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_10123c0bc;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_10123c0bc:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10123c2e0; end: 10123c38b; -[SCAudioEffectsFeatureEntryPoint setValue:forIvarName:] */

void FUN_10123c2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010123c0dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10123c38c; end: 10123c413; -[SCAudioEffectsFeatureEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c38c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6aa38,0);
  func_0x000107c61614(param_1 + _DAT_112d6aa40,0);
  func_0x000107c61614(param_1 + _DAT_112d6aa48,0);
  *(undefined8 *)(param_1 + _DAT_112d6aa50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10123c414; end: 10123c447;  */

void FUN_10123c414(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10123c448; end: 10123c49f; -[SCAudioEffectsFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c448(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6aa38);
  func_0x000107c61610(param_1 + _DAT_112d6aa40);
  func_0x000107c61610(param_1 + _DAT_112d6aa48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6aa50));
  return;
}



/* Entry: 10123c4a0; end: 10123c4bf;  */

void FUN_10123c4a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127be568);
  return;
}



/* Entry: 10123c4c0; end: 10123c517; -[_TtC33PreviewFilterThumbnailImageLoader35SCPreviewFilterThumbnailImageLoader initWithCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d6aa80) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10123c518; end: 10123c58f; -[_TtC33PreviewFilterThumbnailImageLoader35SCPreviewFilterThumbnailImageLoader supportedURLSchemes] */

void FUN_10123c518(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  FUN_10123dae0();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10123c590; end: 10123c5af;  */

void FUN_10123c590(void)

{
  func_0x000107c61168(&PTR_PTR_1127be6f8);
  return;
}



/* Entry: 10123c5b0; end: 10123c6a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c5b0(long *param_1,long param_2,code *param_3)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  byte bStack_41;
  
  lVar3 = *param_1;
  cVar1 = (char)param_1[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_112d6aab0);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&bStack_41);
  func_0x000107c61574(uVar4);
  if ((bStack_41 & 1) == 0) {
    if (cVar1 == '\x01' || lVar3 == 0) {
      (*param_3)(0,0);
    }
    else {
      puVar2 = PTR_PTR_1126b27a8;
      func_0x000107c61168(PTR_PTR_1126b27a8);
      FUN_100f96518(lVar3,cVar1);
      func_0x000107c61174(lVar3);
      func_0x000107c45160(puVar2);
      func_0x000107c61180();
      (*param_3)();
      func_0x000107c61170(puVar2);
      FUN_100f838dc(lVar3,cVar1);
      FUN_100f838dc(lVar3,cVar1);
    }
  }
  return;
}



/* Entry: 10123c6a4; end: 10123c6af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c6a4(long *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  byte bStack_41;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  lVar4 = *param_1;
  cVar2 = (char)param_1[1];
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d6aab0);
  func_0x000107c6157c(uVar5,*(long *)(unaff_x20 + 0x10),pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000c74f0(&bStack_41);
  func_0x000107c61574(uVar5);
  if ((bStack_41 & 1) == 0) {
    if (cVar2 == '\x01' || lVar4 == 0) {
      (*pcVar1)(0,0);
    }
    else {
      puVar3 = PTR_PTR_1126b27a8;
      func_0x000107c61168(PTR_PTR_1126b27a8);
      FUN_100f96518(lVar4,cVar2);
      func_0x000107c61174(lVar4);
      func_0x000107c45160(puVar3);
      func_0x000107c61180();
      (*pcVar1)();
      func_0x000107c61170(puVar3);
      FUN_100f838dc(lVar4,cVar2);
      FUN_100f838dc(lVar4,cVar2);
    }
  }
  return;
}



/* Entry: 10123c6b0; end: 10123c7ab; -[_TtC33PreviewFilterThumbnailImageLoader35SCPreviewFilterThumbnailImageLoader loadImageWithRequestPayload:parameters:completion:] */

void FUN_10123c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c60bc4(param_6);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c60bc4(param_6);
  FUN_10123ca18(auStack_50,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10123c7ac; end: 10123c873; -[_TtC33PreviewFilterThumbnailImageLoader35SCPreviewFilterThumbnailImageLoader requestPayloadWithURL:error:] */

void FUN_10123c7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  func_0x000107c5edb4(lVar3,param_3);
  (**(code **)(lVar4 + 0x10))(puVar2,lVar3,lVar1);
  func_0x000107c6061c(puVar2,lVar1);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10123c874; end: 10123c89f; -[_TtC33PreviewFilterThumbnailImageLoader35SCPreviewFilterThumbnailImageLoader init] */

void FUN_10123c874(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFilterThumbnailImageLoader.SCPreviewFilterThumbnailImageLoader",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10123c8a0);
  (*pcVar1)();
}



/* Entry: 10123c8a0; end: 10123c8a3;  */

void FUN_10123c8a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10123c8a4; end: 10123c8bf; -[_TtC33PreviewFilterThumbnailImageLoader35SCPreviewFilterThumbnailImageLoader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c8a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6aa80));
  return;
}



/* Entry: 10123c8c0; end: 10123c92f; -[_TtC33PreviewFilterThumbnailImageLoader44PreviewFilterThumbnailImageLoaderCancellable cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c8c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6aab0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000100075034(0x10123c8b4,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10123c930; end: 10123c9b3; -[_TtC33PreviewFilterThumbnailImageLoader44PreviewFilterThumbnailImageLoaderCancellable init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c930(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112d6aab0;
  uStack_31 = 0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar3 = &uStack_31;
  func_0x00010006c248();
  *(undefined1 **)(param_1 + lVar1) = puVar3;
  lStack_48 = param_1;
  lStack_40 = lVar2;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10123c9b4; end: 10123c9e7;  */

void FUN_10123c9b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10123c9e8; end: 10123c9f7; -[_TtC33PreviewFilterThumbnailImageLoader44PreviewFilterThumbnailImageLoaderCancellable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c9e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6aab0));
  return;
}



/* Entry: 10123c9f8; end: 10123ca17;  */

void FUN_10123c9f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127be638);
  return;
}



/* Entry: 10123ca18; end: 10123cce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10123ca18(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [32];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_1103973c0;
  func_0x000107c613fc(&UNK_1103973c0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  puVar3 = puVar2;
  FUN_10123c590();
  func_0x000107c610f8();
  func_0x000107c60bc4(param_3);
  func_0x000107c453e4();
  func_0x0001000bb420(param_1,auStack_80);
  puVar4 = puVar9;
  func_0x000107c6147c(puVar9,auStack_80,PTR___sypN_11034f1a8 + 8,lVar1,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar11 + 0x38))(puVar9,1,1,lVar1);
    func_0x0001000293e4(puVar9);
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    (**(code **)(lVar11 + 0x38))(puVar9,0,1,lVar1);
    (**(code **)(lVar11 + 0x20))(lVar10,puVar9,lVar1);
    FUN_10123ea48(0);
    lVar5 = lVar10;
    FUN_10123dd44();
    if (lVar5 == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0,0);
    }
    else {
      lVar6 = *(long *)(param_2 + _DAT_112d6aa80);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,0,0);
      }
      else {
        lVar7 = lVar6;
        func_0x000107c44f8c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar6);
        func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
        lVar6 = lVar7;
        func_0x000100759c94(lVar7,0);
        puVar8 = &UNK_1103973e8;
        func_0x000107c613fc(&UNK_1103973e8,0x28,7);
        *(undefined **)(puVar8 + 0x10) = puVar3;
        *(code **)(puVar8 + 0x18) = FUN_10123cce4;
        *(undefined **)(puVar8 + 0x20) = puVar2;
        func_0x000107c61174(puVar3);
        func_0x000107c6157c(puVar2);
        func_0x00010075a04c(0,0,FUN_10123cd18,puVar8);
        func_0x000107c61574(lVar6);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(lVar5);
        lVar5 = lVar7;
      }
      func_0x000107c61170(lVar5);
    }
    (**(code **)(lVar11 + 8))(lVar10,lVar1);
  }
  func_0x000107c61574(puVar2);
  return puVar3;
}



/* Entry: 10123cce4; end: 10123cceb;  */

void FUN_10123cce4(undefined8 param_1,long param_2)

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



/* Entry: 10123ccec; end: 10123cd17;  */

void FUN_10123ccec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10123cd18; end: 10123cd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123cd18(long *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  byte bStack_41;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  lVar4 = *param_1;
  cVar2 = (char)param_1[1];
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d6aab0);
  func_0x000107c6157c(uVar5,*(long *)(unaff_x20 + 0x10),pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000c74f0(&bStack_41);
  func_0x000107c61574(uVar5);
  if ((bStack_41 & 1) == 0) {
    if (cVar2 == '\x01' || lVar4 == 0) {
      (*pcVar1)(0,0);
    }
    else {
      puVar3 = PTR_PTR_1126b27a8;
      func_0x000107c61168(PTR_PTR_1126b27a8);
      FUN_100f96518(lVar4,cVar2);
      func_0x000107c61174(lVar4);
      func_0x000107c45160(puVar3);
      func_0x000107c61180();
      (*pcVar1)();
      func_0x000107c61170(puVar3);
      FUN_100f838dc(lVar4,cVar2);
      FUN_100f838dc(lVar4,cVar2);
    }
  }
  return;
}



/* Entry: 10123cd20; end: 10123cd63;  */

void FUN_10123cd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10123cd64; end: 10123cec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123cd64(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long *aplStack_a0 [10];
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c3f658();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_10123c9f8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d6aa80) = uVar1;
  plVar4 = &lStack_50;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3ffac();
  func_0x000107c61180();
  lVar3 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar3 != 0) {
    lVar5 = 0x112d6aae0;
    func_0x0001000285a8(0x112d6aae0,&UNK_10d92e060);
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    lVar6 = lVar5;
    aplStack_a0[0] = plVar4;
    FUN_10123cec8();
    func_0x000107c61174(plVar4);
    func_0x000107c602d4(lVar5 + 0x20,aplStack_a0,lVar2,lVar6);
    lVar2 = lVar5;
    func_0x0001007bbc80(lVar5);
    func_0x000107c61588(lVar5);
    func_0x0001007bbff0(lVar5 + 0x20);
    lVar5 = lVar2;
    func_0x000107c5fe08(lVar2,PTR___ss11AnyHashableVN_11034e448,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar2);
    func_0x000107c4fc30(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar5);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(long **)(unaff_x20 + 0x20) = plVar4;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10123cec8; end: 10123cf0b;  */

void FUN_10123cec8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d6aae8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10123c9f8(0xff);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112d6aae8 = puVar2;
  return;
}



/* Entry: 10123cf0c; end: 10123d04b;  */

undefined8 FUN_10123cf0c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long alStack_90 [10];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c61174();
    func_0x000107c3ffac();
    func_0x000107c61180();
    lVar2 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar2 != 0) {
      lVar6 = 0x112d6aae0;
      func_0x0001000285a8(0x112d6aae0,&UNK_10d92e060);
      func_0x000107c61534();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      uVar3 = 0;
      alStack_90[0] = lVar1;
      FUN_10123c9f8(0);
      uVar4 = uVar3;
      FUN_10123cec8();
      func_0x000107c61174(lVar1);
      func_0x000107c602d4(lVar6 + 0x20,alStack_90,uVar3,uVar4);
      lVar5 = lVar6;
      func_0x0001007bbc80(lVar6);
      func_0x000107c61588(lVar6);
      func_0x0001007bbff0(lVar6 + 0x20);
      lVar6 = lVar5;
      func_0x000107c5fe08(lVar5,PTR___ss11AnyHashableVN_11034e448,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      func_0x000107c6142c(lVar5);
      func_0x000107c5d358(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(lVar1);
  }
  return 0;
}



/* Entry: 10123d04c; end: 10123d07f;  */

void FUN_10123d04c(void)

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



/* Entry: 10123d080; end: 10123d0c3;  */

void FUN_10123d080(void)

{
  FUN_10123cd64();
  return;
}



/* Entry: 10123d0c4; end: 10123d2ef;  */

void FUN_10123d0c4(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112d60398;
  func_0x0001000285a8(0x112d60398,&UNK_10d92e0c0);
  lVar5 = lVar14;
  func_0x000107c602e0(lVar14,lVar1,0,uVar4);
  if (*(long *)(lVar14 + 0x10) == 0) {
    func_0x000107c61574(lVar14);
LAB_10123d2c4:
    *unaff_x20 = lVar5;
    return;
  }
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lVar14 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar9 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar15 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10123d2ec);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar15) {
          func_0x000107c61574(lVar14);
          goto LAB_10123d2c4;
        }
        uVar13 = ((ulong *)(lVar14 + 0x38))[lVar15];
        lVar9 = lVar9 + 1;
      } while (uVar13 == 0);
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar15 = lVar9;
    }
    func_0x0001007bbd18(*(long *)(lVar14 + 0x30) + (LZCOUNT(uVar8) | lVar15 << 6) * 0x28,&uStack_88)
    ;
    uVar6 = *(ulong *)(lVar5 + 0x28);
    func_0x000107c602c4();
    uVar12 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar6 >> 6;
    uVar8 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar6 = uVar10 + 1;
        if ((uVar6 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10123d2f0);
          (*pcVar3)();
        }
        uVar10 = 0;
        if (uVar6 != uVar8) {
          uVar10 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar8 | bVar2);
        uVar6 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x30) + uVar8 * 0x28);
    puVar7[4] = uStack_68;
    puVar7[1] = uStack_80;
    *puVar7 = uStack_88;
    puVar7[3] = uStack_70;
    puVar7[2] = uStack_78;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar9 = lVar15;
  } while( true );
}



/* Entry: 10123d2f0; end: 10123d30f;  */

void FUN_10123d2f0(void)

{
  func_0x000107c61168(&PTR_PTR_112d6ab30);
  return;
}



/* Entry: 10123d310; end: 10123d31b; -[SCPreviewFilterThumbnailImageLoaderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123d310(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6aba0;
  func_0x000107c61428(param_1 + _DAT_112d6aba0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123d31c; end: 10123d327; -[SCPreviewFilterThumbnailImageLoaderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123d31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6aba0;
  func_0x000107c61428(param_1 + _DAT_112d6aba0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123d328; end: 10123d333; -[SCPreviewFilterThumbnailImageLoaderEntryPoint composerFrameworkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123d328(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6aba8;
  func_0x000107c61428(param_1 + _DAT_112d6aba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123d334; end: 10123d33f; -[SCPreviewFilterThumbnailImageLoaderEntryPoint setComposerFrameworkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123d334(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6aba8;
  func_0x000107c61428(param_1 + _DAT_112d6aba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123d340; end: 10123d34b; -[SCPreviewFilterThumbnailImageLoaderEntryPoint carouselServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123d340(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6abb0;
  func_0x000107c61428(param_1 + _DAT_112d6abb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123d34c; end: 10123d38f;  */

void FUN_10123d34c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10123d390; end: 10123d39b; -[SCPreviewFilterThumbnailImageLoaderEntryPoint setCarouselServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123d390(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6abb0;
  func_0x000107c61428(param_1 + _DAT_112d6abb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123d39c; end: 10123d3ef;  */

void FUN_10123d39c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123d3f0; end: 10123d507;  */

/* WARNING: Possible PIC construction at 0x00010123d494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123d4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123d498) */
/* WARNING: Removing unreachable block (ram,0x00010123d4a8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10123d3f0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c3ffa8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c3f6b8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar1;
      }
      else {
        lVar2 = 0;
        FUN_10123d2f0();
        func_0x000107c613fc();
        *(long *)(lVar2 + 0x18) = unaff_x20;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(long *)(lVar2 + 0x10) = lVar1;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(unaff_x20);
        FUN_10123cd64();
        lVar2 = unaff_x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10123d508; end: 10123d52f; -[SCPreviewFilterThumbnailImageLoaderEntryPoint begin] */

void FUN_10123d508(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10123d3f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10123d530; end: 10123d6c3;  */

/* WARNING: Possible PIC construction at 0x00010123d590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123d5a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123d594) */
/* WARNING: Removing unreachable block (ram,0x00010123d5a4) */
/* WARNING: Removing unreachable block (ram,0x00010123d680) */
/* WARNING: Removing unreachable block (ram,0x00010123d5b4) */
/* WARNING: Removing unreachable block (ram,0x00010123d688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123d530(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6abb8);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) {
    func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_end_1125c29d0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c6157c(lVar1);
    func_0x000107c3ffac(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10123d6c4; end: 10123d6f7; -[SCPreviewFilterThumbnailImageLoaderEntryPoint end] */

void FUN_10123d6c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10123d530();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10123d6f8; end: 10123d8ff;  */

void FUN_10123d6f8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10cf830)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010ef307d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10cf810)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef307f0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PreviewFilterThumbnailImageLoader/SCPreviewFilterThumbnailImageLoaderEntryPoint.swift"
                                ,0x55,2,0x2d,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10123d900);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53260();
        goto LAB_10123d784;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53688();
  }
LAB_10123d784:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10123d900; end: 10123d9ab; -[SCPreviewFilterThumbnailImageLoaderEntryPoint setValue:forIvarName:] */

void FUN_10123d900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10123d6f8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10123d9ac; end: 10123da33; -[SCPreviewFilterThumbnailImageLoaderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123d9ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6aba0,0);
  func_0x000107c61614(param_1 + _DAT_112d6aba8,0);
  func_0x000107c61614(param_1 + _DAT_112d6abb0,0);
  *(undefined8 *)(param_1 + _DAT_112d6abb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10123da34; end: 10123da67;  */

void FUN_10123da34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10123da68; end: 10123dabf; -[SCPreviewFilterThumbnailImageLoaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123da68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6aba0);
  func_0x000107c61610(param_1 + _DAT_112d6aba8);
  func_0x000107c61610(param_1 + _DAT_112d6abb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6abb8));
  return;
}



/* Entry: 10123dac0; end: 10123dadf;  */

void FUN_10123dac0(void)

{
  func_0x000107c61168(&PTR_PTR_1127be7b0);
  return;
}



/* Entry: 10123dae0; end: 10123daeb;  */

undefined * FUN_10123dae0(void)

{
  return &UNK_1103974c8;
}



/* Entry: 10123daec; end: 10123dcab;  */

void FUN_10123daec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 auStack_b0 [96];
  
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef30870);
  lVar2 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  puVar6 = auStack_b0;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0x692d7265746c6966;
  *(undefined8 *)(lVar2 + 0x28) = 0xe900000000000064;
  func_0x000107c434c4();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  *(undefined1 **)(lVar2 + 0x38) = puVar6;
  *(undefined8 *)(lVar2 + 0x40) = 0x742d7265746c6966;
  *(undefined8 *)(lVar2 + 0x48) = 0xeb00000000657079;
  func_0x000107c434f0();
  puVar4 = PTR___sSuN_11034e220;
  puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c();
  *(undefined **)(lVar2 + 0x50) = puVar4;
  *(undefined **)(lVar2 + 0x58) = puVar7;
  lVar5 = lVar2;
  func_0x0001001830b8(lVar2);
  func_0x000107c61588(lVar2);
  uVar3 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar3);
  lVar2 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  uVar3 = uVar1;
  func_0x000108543d00(uVar1,lVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c5edb4(param_1,uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10123dcac; end: 10123dd43; +[_TtC33PreviewFilterThumbnailTransformer35SCPreviewFilterThumbnailTransformer thumbnailURLFor:] */

void FUN_10123dcac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c61174(param_3);
  FUN_10123daec(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(param_3);
  func_0x000107c5ed90();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10123dd44; end: 10123dd47;  */

undefined * FUN_10123dd44(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  long lVar13;
  byte **ppbVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  ulong uStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  long lStack_80;
  code *pcStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  
  lVar7 = 0;
  func_0x000107c5ebbc();
  lVar23 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  uVar17 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar17 - extraout_x12;
  lStack_a0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar16 = (byte *)(lVar13 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = (long)pbVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = uVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = 0x112d4b5b0;
  uStack_a8 = lVar18 - extraout_x12_03;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (lVar18 - extraout_x12_03) - extraout_x8_00;
  lVar8 = 0;
  func_0x000107c5ec24();
  lVar24 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  uVar22 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ebe4(lVar15,param_1,0);
  lVar13 = lVar15;
  (**(code **)(lVar24 + 0x30))(lVar15,1,lVar8);
  if ((int)lVar13 == 1) {
    FUN_100f14918(lVar15);
  }
  else {
    uVar26 = uVar22;
    pbStack_c8 = pbVar16;
    (**(code **)(lVar24 + 0x20))(uVar22,lVar15,lVar8);
    func_0x000107c5ebc4();
    if (uVar26 != 0) {
      lStack_c0 = lVar24;
      uStack_b8 = uVar22;
      lStack_b0 = lVar8;
      pcStack_88 = *(code **)(uVar26 + 0x10);
      if (*(code **)(uVar26 + 0x10) != (code *)0x0) {
        pcVar25 = (code *)0x0;
        do {
          if (*(code **)(uVar26 + 0x10) <= pcVar25) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x10123e9d0);
            (*pcVar25)();
          }
          uVar21 = (ulong)*(byte *)(lVar23 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar23 + 0x50) ^ 0xffffffffffffffff);
          lStack_80 = *(long *)(lVar23 + 0x48);
          pcStack_90 = *(code **)(lVar23 + 0x10);
          (*pcStack_90)(lVar18,uVar26 + uVar21 + lStack_80 * (long)pcVar25,lVar7);
          pcStack_78 = *(code **)(lVar23 + 0x20);
          uVar22 = uVar17;
          lVar13 = lVar18;
          (*pcStack_78)(uVar17,lVar18,lVar7);
          func_0x000107c5ebb4();
          if ((uVar22 == 0x692d7265746c6966) && (lVar13 == -0x16ffffffffffff9c)) {
            func_0x000107c6142c(uVar26);
            uVar26 = 0xe900000000000064;
LAB_10123e4c8:
            func_0x000107c6142c(uVar26);
            uVar22 = uStack_a8;
            uVar9 = uStack_a8;
            (*pcStack_78)(uStack_a8,uVar17,lVar7);
            func_0x000107c5ebb8();
            pcStack_88 = *(code **)(lVar23 + 8);
            (*pcStack_88)(uVar22,lVar7);
            pcVar25 = pcStack_90;
            lVar8 = lStack_b0;
            uVar26 = uStack_b8;
            lVar13 = lStack_c0;
            if (uVar17 == 0) {
              (**(code **)(lStack_c0 + 8))(uStack_b8,lStack_b0);
              goto LAB_10123e634;
            }
            func_0x000107c5ebc4();
            if (uVar22 == 0) {
              (**(code **)(lVar13 + 8))(uVar26,lVar8);
              goto LAB_10123e49c;
            }
            uVar26 = *(ulong *)(uVar22 + 0x10);
            uStack_d0 = uVar9;
            uStack_a8 = uVar17;
            if (uVar26 == 0) goto LAB_10123e604;
            uVar17 = 0;
            lVar13 = uVar22 + uVar21;
            goto LAB_10123e54c;
          }
          func_0x000107c605b8();
          func_0x000107c6142c(lVar13);
          if ((uVar22 & 1) != 0) goto LAB_10123e4c8;
          pcVar25 = pcVar25 + 1;
          (**(code **)(lVar23 + 8))(uVar17,lVar7);
        } while (pcStack_88 != pcVar25);
      }
      (**(code **)(lStack_c0 + 8))(uStack_b8,lStack_b0);
      uVar17 = uVar26;
      goto LAB_10123e49c;
    }
    (**(code **)(lVar24 + 8))(uVar22,lVar8);
  }
  goto LAB_10123e634;
  while( true ) {
    func_0x000107c605b8();
    func_0x000107c6142c(lVar8);
    if ((uVar9 & 1) != 0) goto LAB_10123e680;
    uVar17 = uVar17 + 1;
    (*pcStack_88)(uVar21,lVar7);
    lVar13 = lVar13 + lStack_80;
    if (uVar26 == uVar17) break;
LAB_10123e54c:
    lVar8 = lStack_a0;
    if (*(ulong *)(uVar22 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x10123e9e0);
      (*pcVar25)();
    }
    (*pcVar25)(lStack_a0,lVar13,lVar7);
    uVar21 = uStack_98;
    uVar9 = uStack_98;
    (*pcStack_78)(uStack_98,lVar8,lVar7);
    func_0x000107c5ebb4();
    if ((uVar9 == 0x742d7265746c6966) && (lVar8 == -0x14ffffffff9a8f87)) {
      func_0x000107c6142c(uVar22);
      uVar22 = 0xeb00000000657079;
LAB_10123e680:
      func_0x000107c6142c(uVar22);
      pbVar19 = pbStack_c8;
      pbVar16 = pbStack_c8;
      (*pcStack_78)(pbStack_c8,uVar21,lVar7);
      func_0x000107c5ebb8();
      (*pcStack_88)(pbVar19,lVar7);
      uVar17 = uStack_a8;
      lVar7 = lStack_b0;
      uVar26 = uStack_b8;
      lVar13 = lStack_c0;
      uVar22 = uStack_d0;
      if (uVar21 == 0) goto LAB_10123e940;
      uVar11 = (ulong)pbVar16 & 0xffffffffffff;
      uVar12 = uVar21 >> 0x38 & 0xf;
      uVar9 = uVar11;
      if ((uVar21 & 0x2000000000000000) != 0) {
        uVar9 = uVar12;
      }
      if (uVar9 == 0) {
        (**(code **)(lStack_c0 + 8))(uStack_b8,lStack_b0);
        func_0x000107c6142c(uVar21);
        goto LAB_10123e49c;
      }
      if ((uVar21 >> 0x3c & 1) != 0) {
        uVar9 = uVar21;
        FUN_10123de44(pbVar16,uVar21,10);
        uVar20 = (uint)uVar9;
        pbVar19 = pbVar16;
        goto LAB_10123e92c;
      }
      if ((uVar21 >> 0x3d & 1) != 0) {
        pbStack_70 = pbVar16;
        uStack_68 = uVar21 & 0xffffffffffffff;
        uVar20 = (uint)pbVar16 & 0xff;
        if (uVar20 == 0x2b) {
          if (uVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x10123ea38);
            (*pcVar25)();
          }
          lVar8 = uVar12 - 1;
          if (lVar8 == 0) goto LAB_10123e924;
          pbVar19 = (byte *)0x0;
          pbVar16 = (byte *)((ulong)&pbStack_70 | 1);
          goto LAB_10123e850;
        }
        if (uVar20 != 0x2d) {
          if (uVar12 == 0) goto LAB_10123e924;
          pbVar19 = (byte *)0x0;
          ppbVar14 = &pbStack_70;
          goto LAB_10123e8e8;
        }
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10123ea30);
          (*pcVar25)();
        }
        lVar8 = uVar12 - 1;
        if (lVar8 == 0) goto LAB_10123e924;
        pbVar19 = (byte *)0x0;
        pbVar16 = (byte *)((ulong)&pbStack_70 | 1);
        goto LAB_10123e7a0;
      }
      if (((ulong)pbVar16 >> 0x3c & 1) == 0) {
        uVar11 = uVar21;
        func_0x000107c60358();
      }
      else {
        pbVar16 = (byte *)((uVar21 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar16 == 0x2b) {
        if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10123ea34);
          (*pcVar25)();
        }
        lVar8 = uVar11 - 1;
        if (lVar8 == 0) goto LAB_10123e924;
        pbVar19 = (byte *)0x0;
        goto LAB_10123e7f8;
      }
      if (*pbVar16 == 0x2d) {
        if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10123ea2c);
          (*pcVar25)();
        }
        lVar8 = uVar11 - 1;
        if (lVar8 == 0) goto LAB_10123e924;
        pbVar19 = (byte *)0x0;
        goto LAB_10123e72c;
      }
      if (uVar11 == 0) goto LAB_10123e924;
      if (pbVar16 != (byte *)0x0) {
        pbVar19 = (byte *)0x0;
        goto LAB_10123e89c;
      }
      uVar20 = 0;
      pbVar19 = (byte *)0x0;
      goto LAB_10123e92c;
    }
  }
LAB_10123e604:
  (**(code **)(lStack_c0 + 8))(uStack_b8,lStack_b0);
  func_0x000107c6142c(uVar22);
  uVar17 = uStack_a8;
  goto LAB_10123e49c;
  while( true ) {
    uVar20 = 0;
    lVar8 = lVar8 + -1;
    pbVar16 = pbVar16 + 1;
    if (lVar8 == 0) break;
LAB_10123e850:
    if (((9 < *pbVar16 - 0x30) ||
        (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar19, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar11 + uVar9), CARRY8(uVar11,uVar9))) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    uVar12 = uVar12 - 1;
    ppbVar14 = (byte **)((long)ppbVar14 + 1);
    if (uVar12 == 0) break;
LAB_10123e8e8:
    if (((9 < *(byte *)ppbVar14 - 0x30) ||
        (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar19, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*(byte *)ppbVar14 - 0x30),
       pbVar19 = (byte *)(uVar11 + uVar9), CARRY8(uVar11,uVar9))) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    lVar8 = lVar8 + -1;
    pbVar16 = pbVar16 + 1;
    if (lVar8 == 0) break;
LAB_10123e7a0:
    if (((9 < *pbVar16 - 0x30) ||
        (auVar2._8_8_ = 0, auVar2._0_8_ = pbVar19, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar11 - uVar9), uVar11 < uVar9)) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) break;
LAB_10123e7f8:
    pbVar16 = pbVar16 + 1;
    if (((9 < *pbVar16 - 0x30) ||
        (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar19, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar11 + uVar9), CARRY8(uVar11,uVar9))) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    uVar11 = uVar11 - 1;
    pbVar16 = pbVar16 + 1;
    if (uVar11 == 0) break;
LAB_10123e89c:
    if (((9 < *pbVar16 - 0x30) ||
        (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar19, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
       (uVar12 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar12 + uVar9), CARRY8(uVar12,uVar9))) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
LAB_10123e924:
  uVar20 = 1;
  pbVar19 = (byte *)0x0;
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) break;
LAB_10123e72c:
    pbVar16 = pbVar16 + 1;
    if (((9 < *pbVar16 - 0x30) ||
        (auVar1._8_8_ = 0, auVar1._0_8_ = pbVar19, SUB168(auVar1 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar11 - uVar9), uVar11 < uVar9)) goto LAB_10123e924;
  }
LAB_10123e92c:
  func_0x000107c6142c(uVar21);
  if ((uVar20 & 0xff) == 1) {
LAB_10123e940:
    (**(code **)(lVar13 + 8))(uVar26,lVar7);
LAB_10123e49c:
    func_0x000107c6142c(uVar17);
LAB_10123e634:
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010123e1c0(pbVar19);
    puVar10 = PTR_PTR_1126b37b0;
    func_0x000107c610f8(PTR_PTR_1126b37b0);
    func_0x000107c5fadc(uVar22,uVar17);
    func_0x000107c6142c(uVar17);
    func_0x000107c46940(puVar10);
    func_0x000107c61170(uVar22);
    (**(code **)(lVar13 + 8))(uVar26,lVar7);
  }
  return puVar10;
}



/* Entry: 10123dd48; end: 10123ddd3; +[_TtC33PreviewFilterThumbnailTransformer35SCPreviewFilterThumbnailTransformer carouselItemFor:] */

void FUN_10123dd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  puVar2 = puVar3;
  FUN_10123e1d0(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10123ddd4; end: 10123de0f; -[_TtC33PreviewFilterThumbnailTransformer35SCPreviewFilterThumbnailTransformer init] */

void FUN_10123ddd4(undefined8 param_1)

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



/* Entry: 10123de10; end: 10123de43;  */

void FUN_10123de10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10123de44; end: 10123df43;  */

/* WARNING: Removing unreachable block (ram,0x00010123df38) */

undefined1  [16] FUN_10123de44(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_10123df44(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_10123df44(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 10123df44; end: 10123e1cf;  */

undefined1  [16] FUN_10123df44(byte *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  char cVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  iVar13 = (int)param_3;
  uVar16 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10123e1c0);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) goto LAB_10123e1b0;
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10123e1b0;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3;
      if ((SUB168(auVar5 * auVar8,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
         CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) goto LAB_10123e194;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar13 + 0x30;
        uVar2 = 0x61;
        if (10 < (long)param_3) {
          uVar2 = iVar13 + 0x57;
        }
        uVar11 = 0x41;
        if (10 < (long)param_3) {
          uVar1 = 0x3a;
          uVar11 = iVar13 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar15 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar17 = (uint)bVar3;
            if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
              uVar16 = 1;
              if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10123e1b0;
              cVar18 = -0x57;
            }
            else {
              cVar18 = -0x37;
            }
          }
          else {
            cVar18 = -0x30;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar15;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_3;
          if ((SUB168(auVar6 * auVar9,8) != 0) ||
             (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
             CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar15;
            return auVar20;
          }
        } while( true );
      }
LAB_10123e194:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10123e1bc);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) {
LAB_10123e1b0:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar16;
      return auVar10 << 0x40;
    }
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10123e1b0;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_3;
      if ((SUB168(auVar4 * auVar7,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 - (byte)(bVar3 + cVar18),
         uVar16 < (byte)(bVar3 + cVar18))) goto LAB_10123e194;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar15;
  return auVar19;
}



/* Entry: 10123e1d0; end: 10123ea37;  */

undefined * FUN_10123e1d0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  long lVar13;
  byte **ppbVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  ulong uStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  long lStack_80;
  code *pcStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  
  lVar7 = 0;
  func_0x000107c5ebbc();
  lVar23 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  uVar17 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar17 - extraout_x12;
  lStack_a0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar16 = (byte *)(lVar13 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = (long)pbVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = uVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = 0x112d4b5b0;
  uStack_a8 = lVar18 - extraout_x12_03;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (lVar18 - extraout_x12_03) - extraout_x8_00;
  lVar8 = 0;
  func_0x000107c5ec24();
  lVar24 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  uVar22 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ebe4(lVar15,param_1,0);
  lVar13 = lVar15;
  (**(code **)(lVar24 + 0x30))(lVar15,1,lVar8);
  if ((int)lVar13 == 1) {
    FUN_100f14918(lVar15);
  }
  else {
    uVar26 = uVar22;
    pbStack_c8 = pbVar16;
    (**(code **)(lVar24 + 0x20))(uVar22,lVar15,lVar8);
    func_0x000107c5ebc4();
    if (uVar26 != 0) {
      lStack_c0 = lVar24;
      uStack_b8 = uVar22;
      lStack_b0 = lVar8;
      pcStack_88 = *(code **)(uVar26 + 0x10);
      if (*(code **)(uVar26 + 0x10) != (code *)0x0) {
        pcVar25 = (code *)0x0;
        do {
          if (*(code **)(uVar26 + 0x10) <= pcVar25) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x10123e9d0);
            (*pcVar25)();
          }
          uVar21 = (ulong)*(byte *)(lVar23 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar23 + 0x50) ^ 0xffffffffffffffff);
          lStack_80 = *(long *)(lVar23 + 0x48);
          pcStack_90 = *(code **)(lVar23 + 0x10);
          (*pcStack_90)(lVar18,uVar26 + uVar21 + lStack_80 * (long)pcVar25,lVar7);
          pcStack_78 = *(code **)(lVar23 + 0x20);
          uVar22 = uVar17;
          lVar13 = lVar18;
          (*pcStack_78)(uVar17,lVar18,lVar7);
          func_0x000107c5ebb4();
          if ((uVar22 == 0x692d7265746c6966) && (lVar13 == -0x16ffffffffffff9c)) {
            func_0x000107c6142c(uVar26);
            uVar26 = 0xe900000000000064;
LAB_10123e4c8:
            func_0x000107c6142c(uVar26);
            uVar22 = uStack_a8;
            uVar9 = uStack_a8;
            (*pcStack_78)(uStack_a8,uVar17,lVar7);
            func_0x000107c5ebb8();
            pcStack_88 = *(code **)(lVar23 + 8);
            (*pcStack_88)(uVar22,lVar7);
            pcVar25 = pcStack_90;
            lVar8 = lStack_b0;
            uVar26 = uStack_b8;
            lVar13 = lStack_c0;
            if (uVar17 == 0) {
              (**(code **)(lStack_c0 + 8))(uStack_b8,lStack_b0);
              goto LAB_10123e634;
            }
            func_0x000107c5ebc4();
            if (uVar22 == 0) {
              (**(code **)(lVar13 + 8))(uVar26,lVar8);
              goto LAB_10123e49c;
            }
            uVar26 = *(ulong *)(uVar22 + 0x10);
            uStack_d0 = uVar9;
            uStack_a8 = uVar17;
            if (uVar26 == 0) goto LAB_10123e604;
            uVar17 = 0;
            lVar13 = uVar22 + uVar21;
            goto LAB_10123e54c;
          }
          func_0x000107c605b8();
          func_0x000107c6142c(lVar13);
          if ((uVar22 & 1) != 0) goto LAB_10123e4c8;
          pcVar25 = pcVar25 + 1;
          (**(code **)(lVar23 + 8))(uVar17,lVar7);
        } while (pcStack_88 != pcVar25);
      }
      (**(code **)(lStack_c0 + 8))(uStack_b8,lStack_b0);
      uVar17 = uVar26;
      goto LAB_10123e49c;
    }
    (**(code **)(lVar24 + 8))(uVar22,lVar8);
  }
  goto LAB_10123e634;
  while( true ) {
    func_0x000107c605b8();
    func_0x000107c6142c(lVar8);
    if ((uVar9 & 1) != 0) goto LAB_10123e680;
    uVar17 = uVar17 + 1;
    (*pcStack_88)(uVar21,lVar7);
    lVar13 = lVar13 + lStack_80;
    if (uVar26 == uVar17) break;
LAB_10123e54c:
    lVar8 = lStack_a0;
    if (*(ulong *)(uVar22 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x10123e9e0);
      (*pcVar25)();
    }
    (*pcVar25)(lStack_a0,lVar13,lVar7);
    uVar21 = uStack_98;
    uVar9 = uStack_98;
    (*pcStack_78)(uStack_98,lVar8,lVar7);
    func_0x000107c5ebb4();
    if ((uVar9 == 0x742d7265746c6966) && (lVar8 == -0x14ffffffff9a8f87)) {
      func_0x000107c6142c(uVar22);
      uVar22 = 0xeb00000000657079;
LAB_10123e680:
      func_0x000107c6142c(uVar22);
      pbVar19 = pbStack_c8;
      pbVar16 = pbStack_c8;
      (*pcStack_78)(pbStack_c8,uVar21,lVar7);
      func_0x000107c5ebb8();
      (*pcStack_88)(pbVar19,lVar7);
      uVar17 = uStack_a8;
      lVar7 = lStack_b0;
      uVar26 = uStack_b8;
      lVar13 = lStack_c0;
      uVar22 = uStack_d0;
      if (uVar21 == 0) goto LAB_10123e940;
      uVar11 = (ulong)pbVar16 & 0xffffffffffff;
      uVar12 = uVar21 >> 0x38 & 0xf;
      uVar9 = uVar11;
      if ((uVar21 & 0x2000000000000000) != 0) {
        uVar9 = uVar12;
      }
      if (uVar9 == 0) {
        (**(code **)(lStack_c0 + 8))(uStack_b8,lStack_b0);
        func_0x000107c6142c(uVar21);
        goto LAB_10123e49c;
      }
      if ((uVar21 >> 0x3c & 1) != 0) {
        uVar9 = uVar21;
        FUN_10123de44(pbVar16,uVar21,10);
        uVar20 = (uint)uVar9;
        pbVar19 = pbVar16;
        goto LAB_10123e92c;
      }
      if ((uVar21 >> 0x3d & 1) != 0) {
        pbStack_70 = pbVar16;
        uStack_68 = uVar21 & 0xffffffffffffff;
        uVar20 = (uint)pbVar16 & 0xff;
        if (uVar20 == 0x2b) {
          if (uVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x10123ea38);
            (*pcVar25)();
          }
          lVar8 = uVar12 - 1;
          if (lVar8 == 0) goto LAB_10123e924;
          pbVar19 = (byte *)0x0;
          pbVar16 = (byte *)((ulong)&pbStack_70 | 1);
          goto LAB_10123e850;
        }
        if (uVar20 != 0x2d) {
          if (uVar12 == 0) goto LAB_10123e924;
          pbVar19 = (byte *)0x0;
          ppbVar14 = &pbStack_70;
          goto LAB_10123e8e8;
        }
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10123ea30);
          (*pcVar25)();
        }
        lVar8 = uVar12 - 1;
        if (lVar8 == 0) goto LAB_10123e924;
        pbVar19 = (byte *)0x0;
        pbVar16 = (byte *)((ulong)&pbStack_70 | 1);
        goto LAB_10123e7a0;
      }
      if (((ulong)pbVar16 >> 0x3c & 1) == 0) {
        uVar11 = uVar21;
        func_0x000107c60358();
      }
      else {
        pbVar16 = (byte *)((uVar21 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar16 == 0x2b) {
        if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10123ea34);
          (*pcVar25)();
        }
        lVar8 = uVar11 - 1;
        if (lVar8 == 0) goto LAB_10123e924;
        pbVar19 = (byte *)0x0;
        goto LAB_10123e7f8;
      }
      if (*pbVar16 == 0x2d) {
        if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10123ea2c);
          (*pcVar25)();
        }
        lVar8 = uVar11 - 1;
        if (lVar8 == 0) goto LAB_10123e924;
        pbVar19 = (byte *)0x0;
        goto LAB_10123e72c;
      }
      if (uVar11 == 0) goto LAB_10123e924;
      if (pbVar16 != (byte *)0x0) {
        pbVar19 = (byte *)0x0;
        goto LAB_10123e89c;
      }
      uVar20 = 0;
      pbVar19 = (byte *)0x0;
      goto LAB_10123e92c;
    }
  }
LAB_10123e604:
  (**(code **)(lStack_c0 + 8))(uStack_b8,lStack_b0);
  func_0x000107c6142c(uVar22);
  uVar17 = uStack_a8;
  goto LAB_10123e49c;
  while( true ) {
    uVar20 = 0;
    lVar8 = lVar8 + -1;
    pbVar16 = pbVar16 + 1;
    if (lVar8 == 0) break;
LAB_10123e850:
    if (((9 < *pbVar16 - 0x30) ||
        (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar19, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar11 + uVar9), CARRY8(uVar11,uVar9))) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    uVar12 = uVar12 - 1;
    ppbVar14 = (byte **)((long)ppbVar14 + 1);
    if (uVar12 == 0) break;
LAB_10123e8e8:
    if (((9 < *(byte *)ppbVar14 - 0x30) ||
        (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar19, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*(byte *)ppbVar14 - 0x30),
       pbVar19 = (byte *)(uVar11 + uVar9), CARRY8(uVar11,uVar9))) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    lVar8 = lVar8 + -1;
    pbVar16 = pbVar16 + 1;
    if (lVar8 == 0) break;
LAB_10123e7a0:
    if (((9 < *pbVar16 - 0x30) ||
        (auVar2._8_8_ = 0, auVar2._0_8_ = pbVar19, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar11 - uVar9), uVar11 < uVar9)) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) break;
LAB_10123e7f8:
    pbVar16 = pbVar16 + 1;
    if (((9 < *pbVar16 - 0x30) ||
        (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar19, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar11 + uVar9), CARRY8(uVar11,uVar9))) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    uVar11 = uVar11 - 1;
    pbVar16 = pbVar16 + 1;
    if (uVar11 == 0) break;
LAB_10123e89c:
    if (((9 < *pbVar16 - 0x30) ||
        (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar19, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
       (uVar12 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar12 + uVar9), CARRY8(uVar12,uVar9))) goto LAB_10123e924;
  }
  goto LAB_10123e92c;
LAB_10123e924:
  uVar20 = 1;
  pbVar19 = (byte *)0x0;
  goto LAB_10123e92c;
  while( true ) {
    uVar20 = 0;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) break;
LAB_10123e72c:
    pbVar16 = pbVar16 + 1;
    if (((9 < *pbVar16 - 0x30) ||
        (auVar1._8_8_ = 0, auVar1._0_8_ = pbVar19, SUB168(auVar1 * ZEXT816(10),8) != 0)) ||
       (uVar11 = (long)pbVar19 * 10, uVar9 = (ulong)(byte)(*pbVar16 - 0x30),
       pbVar19 = (byte *)(uVar11 - uVar9), uVar11 < uVar9)) goto LAB_10123e924;
  }
LAB_10123e92c:
  func_0x000107c6142c(uVar21);
  if ((uVar20 & 0xff) == 1) {
LAB_10123e940:
    (**(code **)(lVar13 + 8))(uVar26,lVar7);
LAB_10123e49c:
    func_0x000107c6142c(uVar17);
LAB_10123e634:
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010123e1c0(pbVar19);
    puVar10 = PTR_PTR_1126b37b0;
    func_0x000107c610f8(PTR_PTR_1126b37b0);
    func_0x000107c5fadc(uVar22,uVar17);
    func_0x000107c6142c(uVar17);
    func_0x000107c46940(puVar10);
    func_0x000107c61170(uVar22);
    (**(code **)(lVar13 + 8))(uVar26,lVar7);
  }
  return puVar10;
}



/* Entry: 10123ea38; end: 10123ea47;  */

undefined1  [16] FUN_10123ea38(void)

{
  return ZEXT816(0x1103974e8);
}



/* Entry: 10123ea48; end: 10123ea67;  */

void FUN_10123ea48(void)

{
  func_0x000107c61168(&PTR_PTR_1127be880);
  return;
}



/* Entry: 10123ea68; end: 10123ec0f;  */

void FUN_10123ea68(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126a6770;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a6778;
  func_0x000107c610f8(PTR_PTR_1126a6778);
  func_0x000107c453e4();
  puVar4 = &UNK_1103975b0;
  func_0x000107c613fc(&UNK_1103975b0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10123eff0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10123eeb8;
  puStack_68 = &UNK_1103975c8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c55af4(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c55d04(puVar2);
  func_0x000107c61170(puVar3);
  puVar4 = &UNK_110397600;
  func_0x000107c613fc(&UNK_110397600,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_60 = (code *)0x10123f014;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101016bdc;
  puStack_68 = &UNK_110397618;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(puVar2);
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_58);
  func_0x000107c55cf0(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return;
}


