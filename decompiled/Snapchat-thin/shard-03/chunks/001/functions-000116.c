/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10255ee94; end: 10255eec7;  */

undefined8 FUN_10255ee94(undefined8 param_1)

{
  FUN_1025683cc();
  return param_1;
}



/* Entry: 10255eec8; end: 10255eecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255eec8(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long alStack_68 [3];
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  uVar1 = 0;
  FUN_1025699b8(0);
  plVar2 = alStack_68;
  func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)plVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(alStack_68[0] + _DAT_112ea5ae8);
    func_0x000107c61434(uVar5);
    func_0x000107c61170(alStack_68[0]);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    uVar1 = uVar5;
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + _DAT_112ea5488);
      *(undefined8 *)(lVar3 + _DAT_112ea5488) = uVar5;
      func_0x000107c61170();
    }
    func_0x000107c6142c(uVar1);
    func_0x000107c61428(unaff_x20 + 0x10,alStack_68,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      FUN_10255a1ac();
      func_0x000107c61170(lVar3);
      func_0x000107c4fd7c(lVar4);
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 10255eed0; end: 10255ef0f;  */

void FUN_10255eed0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10255ef10; end: 10255ef67;  */

void FUN_10255ef10(long param_1,long param_2)

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



/* Entry: 10255ef68; end: 10255ef6b; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255ef68(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0;
  FUN_10255f074();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112ea54b0);
  func_0x000107c6159c(lVar5);
  lVar3 = 0;
  func_0x00010255eff4();
  lVar2 = lVar3;
  func_0x000107c610f8();
  FUN_10255ecf0(lVar5,lVar2 + _DAT_113804730);
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar3;
  func_0x000107c61174(param_1);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  func_0x00010255ed34(lVar5);
  func_0x000107c424b8(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10255ef6c; end: 10255ef7b; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255ef6c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0;
  FUN_10255f074();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112ea54b0);
  func_0x000107c6159c(lVar5);
  lVar3 = 0;
  func_0x00010255eff4();
  lVar2 = lVar3;
  func_0x000107c610f8();
  FUN_10255ecf0(lVar5,lVar2 + _DAT_113804730);
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar3;
  func_0x000107c61174(param_1);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  func_0x00010255ed34(lVar5);
  func_0x000107c424b8(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10255ef7c; end: 10255efdb; -[_TtC39SCLocationSharingSettingsImplementation25MainSettingsPageActionBox init] */

void FUN_10255ef7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.MainSettingsPageActionBox",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10255efa8);
  (*pcVar1)();
}



/* Entry: 10255efdc; end: 10255f007; -[_TtC39SCLocationSharingSettingsImplementation25MainSettingsPageActionBox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10255efdc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_113804730;
  lVar1 = 0;
  FUN_10255f074();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10255f008; end: 10255f073;  */

void FUN_10255f008(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_10255f074();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 10255f074; end: 10255f087;  */

void FUN_10255f074(undefined8 param_1)

{
  if (lRam0000000112ea5608 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6e1b08);
  return;
}



/* Entry: 10255f088; end: 10255f0b7;  */

void FUN_10255f088(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 10255f0b8; end: 10255f1a7;  */

long * FUN_10255f0b8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar2 == 1) {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      uVar3 = 1;
    }
    else {
      if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
        return param_1;
      }
      lVar5 = 0;
      func_0x000107c5eff8();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      uVar3 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10255f1a8; end: 10255f203;  */

void FUN_10255f1a8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x000107c614c4();
  if ((int)uVar1 == 1) {
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  else {
    if ((int)uVar1 != 0) {
      return;
    }
    lVar2 = 0;
    func_0x000107c5eff8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010255f1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return;
}



/* Entry: 10255f204; end: 10255f543;  */

undefined8 FUN_10255f204(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar2 == 1) {
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
    uVar2 = 1;
  }
  else {
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar1 = 0;
    func_0x000107c5eff8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
    uVar2 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar2);
  return param_1;
}



/* Entry: 10255f544; end: 10255f573;  */

void FUN_10255f544(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010255f54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10255f574; end: 10255f633;  */

void FUN_10255f574(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eff8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x000107c5ede0();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c61528(param_1,0x100,2,&lStack_30);
    }
  }
  return;
}



/* Entry: 10255f634; end: 10255f72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255f634(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112ea5698);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ea56a8);
    uVar1 = ((undefined8 *)(param_1 + _DAT_112ea56a8))[1];
    func_0x000107c615f0(uVar4);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c6142c(uVar1);
    uVar1 = uVar4;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ea5650);
    *(undefined8 *)(param_1 + _DAT_112ea5650) = uVar1;
    func_0x000107c61170(uVar2);
    lVar3 = param_1;
    func_0x000107c424e8();
    func_0x000107c61180();
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c60bd0(lVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10255f730; end: 10255f737;  */

void FUN_10255f730(void)

{
  return;
}



/* Entry: 10255f738; end: 10255f987;  */

void FUN_10255f738(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar6 = &UNK_110520598;
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  puVar4 = &UNK_1105205e8;
  func_0x000107c613fc(&UNK_1105205e8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x102565ab4;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x10256811c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10103b938;
  puStack_90 = &UNK_110520600;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar7);
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar6 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar7 = &UNK_110520638;
  func_0x000107c613fc(&UNK_110520638,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x102565abc;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_88 = FUN_102565ac4;
  puStack_a8 = puVar9;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10103b93c;
  puStack_90 = &UNK_110520650;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_80;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c4c600(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar2);
  puVar9 = puVar4;
  func_0x000107c61544(puVar4,"",0x81,0x94,0x30,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10255f984);
    (*pcVar1)();
  }
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x81,0x97,0x2a,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10255f988);
  (*pcVar1)();
}



/* Entry: 10255f988; end: 10255fb83;  */

void FUN_10255f988(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c424e8();
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c60bd0(lVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10255fb84; end: 10255fc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255fb84(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea56a0);
  func_0x000106b1f544(*(undefined8 *)(unaff_x20 + _DAT_112ea56b8));
  uVar1 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar2 = &UNK_110520598;
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_50 = 0x102565a90;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100ff4e10;
  puStack_58 = &UNK_1105205b0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c42904(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10255fc80; end: 10255fcdf; -[_TtC39SCLocationSharingSettingsImplementation29MainSettingsPageBusinessLogic init] */

void FUN_10255fc80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.MainSettingsPageBusinessLogic",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10255fcac);
  (*pcVar1)();
}



/* Entry: 10255fce0; end: 10255fe8b; -[_TtC39SCLocationSharingSettingsImplementation29MainSettingsPageBusinessLogic .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010255fd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010255fda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010255fdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010255fde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010255fe10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010255fe40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010255fe70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010255fe44) */
/* WARNING: Removing unreachable block (ram,0x00010255fe14) */
/* WARNING: Removing unreachable block (ram,0x00010255fde4) */
/* WARNING: Removing unreachable block (ram,0x00010255fdc4) */
/* WARNING: Removing unreachable block (ram,0x00010255fda4) */
/* WARNING: Removing unreachable block (ram,0x00010255fd70) */
/* WARNING: Removing unreachable block (ram,0x00010255fe74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255fce0(long param_1)

{
  func_0x000100cf9854(param_1 + _DAT_112ea5640);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea5648));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea5650));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea5678));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea5680));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea5688));
  func_0x000100cf9854(param_1 + _DAT_112ea5690);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea5698));
  return;
}



/* Entry: 10255fe8c; end: 10255feab;  */

void FUN_10255fe8c(void)

{
  func_0x000107c61168(&PTR_PTR_112ea5778);
  return;
}



/* Entry: 10255feac; end: 10255ff0f;  */

void FUN_10255feac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000108ffef38(0,puVar1,1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uRam0000000112ea5a58 = uVar2;
  return;
}



/* Entry: 10255ff10; end: 10255ffa3; -[_TtC39SCLocationSharingSettingsImplementation29MainSettingsPageBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255ff10(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10255ffa4();
  lVar3 = 0;
  FUN_1025699b8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_112ea5ae8) = lVar2;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ea5660);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 10255ffa4; end: 1025602a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10255ffa4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_98 [64];
  ulong uStack_58;
  
  uVar1 = 0x112ea58d0;
  func_0x0001000285a8(0x112ea58d0,&UNK_10dab8c58);
  uVar6 = 0x40;
  uVar2 = uVar1;
  func_0x000107c613fc();
  *(undefined8 *)(uVar2 + 0x18) = 4;
  *(undefined8 *)(uVar2 + 0x10) = 2;
  uVar3 = uVar2;
  FUN_1025627a8();
  *(ulong *)(uVar2 + 0x20) = uVar3;
  *(undefined1 *)(uVar2 + 0x28) = uVar6;
  FUN_102562bd0();
  *(ulong *)(uVar2 + 0x30) = uVar3;
  *(undefined1 *)(uVar2 + 0x38) = uVar6;
  lVar10 = *(long *)(unaff_x20 + _DAT_112ea56f8);
  lVar8 = *(long *)(lVar10 + 0x38);
  uVar3 = uVar2;
  if (lVar8 != 0) {
    lVar9 = 0x112ea59c0;
    uStack_58 = uVar2;
    func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x18) = 2;
    *(undefined8 *)(lVar9 + 0x10) = 1;
    uVar7 = *(undefined8 *)(lVar10 + 0x40);
    *(long *)(lVar9 + 0x20) = lVar8;
    *(undefined8 *)(lVar9 + 0x28) = uVar7;
    *(undefined1 *)(lVar9 + 0x78) = 0x50;
    func_0x000107c61174(lVar8);
    uVar3 = 1;
    func_0x00010257625c(1,3,1,uVar2);
    *(undefined8 *)(uVar3 + 0x10) = 3;
    *(long *)(uVar3 + 0x40) = lVar9;
    *(undefined1 *)(uVar3 + 0x48) = 0x60;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112ea56a0);
  uStack_58 = uVar3;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar10 = lVar8;
    func_0x000107c5aa6c();
    if (lVar10 == 2) {
      func_0x0001025621c8();
      lVar9 = *(long *)(lVar10 + 0x10);
      func_0x000107c6142c();
      if (lVar9 != 0) {
        func_0x000102561df0();
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x00010257625c(uVar5,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
        lVar9 = uVar5 + uVar2 * 0x10;
        *(long *)(lVar9 + 0x20) = lVar10;
        *(undefined1 *)(lVar9 + 0x28) = 0xc0;
        func_0x000107c61170(lVar8);
        uVar3 = uVar5;
        uStack_58 = uVar5;
        goto LAB_10256011c;
      }
    }
    func_0x000107c61170(lVar8);
  }
LAB_10256011c:
  if (*(long *)(unaff_x20 + _DAT_112ea56b8) == 0x22) {
    lVar8 = 0x112ea59c0;
    func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
    uVar7 = 0x80;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    lVar10 = lVar8;
    if ((*(long *)(unaff_x20 + _DAT_112ea5650) == 0) ||
       (*(long *)(*(long *)(unaff_x20 + _DAT_112ea5650) + _DAT_112fcd628 + 8) == 0)) {
      FUN_10257a018();
    }
    else {
      func_0x000102579f4c();
    }
    *(long *)(lVar8 + 0x20) = lVar10;
    *(undefined8 *)(lVar8 + 0x28) = uVar7;
    *(undefined1 *)(lVar8 + 0x78) = 0x60;
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x00010257625c(uVar5,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
    lVar10 = uVar5 + uVar2 * 0x10;
    *(long *)(lVar10 + 0x20) = lVar8;
    *(undefined1 *)(lVar10 + 0x28) = 0xa0;
    uStack_58 = uVar5;
  }
  func_0x000107c61534(uVar1,auStack_98);
  *(undefined8 *)(uVar1 + 0x18) = 4;
  *(undefined8 *)(uVar1 + 0x10) = 2;
  uVar7 = 0x112ea59c0;
  func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
  uVar4 = uVar7;
  func_0x000107c61538();
  *(undefined8 *)(uVar1 + 0x20) = uVar4;
  *(undefined1 *)(uVar1 + 0x28) = 0x80;
  func_0x000107c61538(uVar7,0x112ea59d0);
  *(undefined8 *)(uVar1 + 0x30) = uVar7;
  *(undefined1 *)(uVar1 + 0x38) = 0xe0;
  func_0x0001025626b0(uVar1);
  return uStack_58;
}



/* Entry: 1025602a8; end: 102560b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025602a8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar8;
  long unaff_x20;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eff8();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10255f074();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_10255ecf0(param_1 + _DAT_113804730,lVar11);
  lVar5 = lVar11;
  func_0x000107c614c4(lVar11,lVar4);
  iVar1 = (int)lVar5;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      (**(code **)(lVar13 + 0x20))(puVar10,lVar11,lVar3);
      func_0x000102560580(puVar10);
      pcVar8 = *(code **)(lVar13 + 8);
    }
    else {
      if (iVar1 != 1) {
        lVar5 = unaff_x20 + _DAT_112ea5690;
        func_0x000107c61618();
        if (lVar5 == 0) {
          return;
        }
        func_0x000107c4c180();
        goto LAB_102560558;
      }
      (**(code **)(lVar12 + 0x20))(puVar9,lVar11,lVar2);
      lVar5 = unaff_x20 + _DAT_112ea5690;
      func_0x000107c61618();
      if (lVar5 != 0) {
        lVar3 = lVar5;
        func_0x000107c5ed90();
        func_0x000107c4c17c(lVar5);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(lVar3);
      }
      pcVar8 = *(code **)(lVar12 + 8);
      puVar10 = puVar9;
      lVar3 = lVar2;
    }
    (*pcVar8)(puVar10,lVar3);
  }
  else {
    if (iVar1 == 3) {
      lVar5 = unaff_x20 + _DAT_112ea5690;
      func_0x000107c61618();
      if (lVar5 == 0) {
        return;
      }
      func_0x000107c4c184();
    }
    else {
      if (iVar1 == 4) {
        lVar5 = unaff_x20 + _DAT_112ea5690;
        func_0x000107c61618();
        if (lVar5 != 0) {
          func_0x000107c4c178();
          func_0x000107c615e8(lVar5);
        }
        if (*(long *)(unaff_x20 + _DAT_112ea56b8) != 0x2d) {
          return;
        }
        puVar6 = PTR_PTR_1126aa118;
        func_0x000107c610f8(PTR_PTR_1126aa118);
        func_0x000107c453e4();
        func_0x000107c527ac();
        uVar7 = 0x4c5f594d5f454553;
        func_0x000107c5fadc(0x4c5f594d5f454553,0xef4e4f495441434f);
        func_0x000107c58d70(puVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c4bfb0(*(undefined8 *)(unaff_x20 + _DAT_112ea56e0));
        func_0x000107c61170(puVar6);
        return;
      }
      lVar5 = unaff_x20 + _DAT_112ea5690;
      func_0x000107c61618();
      if (lVar5 == 0) {
        return;
      }
      func_0x000107c4c174();
    }
LAB_102560558:
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 102560b94; end: 102560caf; -[_TtC39SCLocationSharingSettingsImplementation29MainSettingsPageBusinessLogic handleAction:] */

/* WARNING: Possible PIC construction at 0x000102560bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102560bd0) */

void FUN_102560b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1025602a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102560cb0; end: 1025611c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102560cb0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar12 = _DAT_112ea5650;
  if (*(long *)(unaff_x20 + _DAT_112ea5650) != 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea5650) + _DAT_112fcd628);
    lVar14 = puVar1[1];
    if (lVar14 != 0) {
      uVar15 = *puVar1;
      uVar17 = *(ulong *)(unaff_x20 + _DAT_112ea56a0);
      func_0x000107c61434(lVar14);
      func_0x000107c4ec80();
      func_0x000107c61180();
      if (uVar17 == 0) {
LAB_102560da0:
        if (*(long *)(unaff_x20 + lVar12) == 0) {
          uVar19 = 0;
          lVar18 = 0;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(unaff_x20 + lVar12) + _DAT_112fcd630);
          uVar19 = *puVar1;
          lVar18 = puVar1[1];
          func_0x000107c61434(lVar18);
        }
        uVar16 = 0;
        plVar11 = (long *)&DAT_112ea5688;
      }
      else {
        uVar3 = uVar17;
        func_0x000107c443c8();
        func_0x000107c61170(uVar17);
        if ((uVar3 & 1) == 0) goto LAB_102560da0;
        lVar18 = -0x1800000000000000;
        uVar19 = 0x3837393934303032;
        uVar16 = 1;
        plVar11 = (long *)&DAT_112ea5680;
      }
      lVar4 = *(long *)(unaff_x20 + *plVar11);
      if (lVar4 == 0) {
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ea56c8);
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ea56a8);
        func_0x000107c5fadc(uVar7,((undefined8 *)(unaff_x20 + _DAT_112ea56a8))[1]);
        uVar5 = uVar15;
        func_0x000107c5fadc(uVar15,lVar14);
        if (lVar18 == 0) {
          uVar19 = 0;
        }
        else {
          func_0x000107c5fadc(uVar19,lVar18);
          func_0x000107c6142c(lVar18);
        }
        puVar6 = PTR_PTR_1126b4bc0;
        func_0x000107c610f8(PTR_PTR_1126b4bc0);
        func_0x000107c491d0();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar19);
        uVar19 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        func_0x000107c5fc48();
        uVar7 = 0;
        func_0x0001000295c4(0);
        func_0x000107c5ffdc();
        puVar8 = &UNK_110520598;
        func_0x000107c613fc(&UNK_110520598,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,unaff_x20);
        puVar9 = &UNK_110520ae8;
        func_0x000107c613fc(&UNK_110520ae8,0x38,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(undefined8 *)(puVar9 + 0x18) = uVar15;
        *(long *)(puVar9 + 0x20) = lVar14;
        puVar9[0x28] = uVar16;
        *(undefined **)(puVar9 + 0x30) = puVar2;
        uStack_70 = 0x102568058;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1010a2bbc;
        puStack_78 = &UNK_110520b00;
        ppuVar10 = &puStack_90;
        puStack_68 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar8 = puStack_68;
        func_0x000107c61174(puVar2);
        func_0x000107c61574(puVar8);
        func_0x000107c4329c(uVar13);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar19);
        func_0x000107c61170(uVar7);
        lVar12 = *(long *)(unaff_x20 + lVar12);
      }
      else {
        func_0x000107c61174();
        func_0x000107c6142c(lVar14);
        func_0x000107c6142c(lVar18);
        func_0x000107c4d664(puVar2);
        func_0x000107c61170(lVar4);
        lVar12 = *(long *)(unaff_x20 + lVar12);
      }
      goto joined_r0x00010256101c;
    }
  }
  if (lRam0000000112ea5a50 != -1) {
    func_0x000107c61568(0x112ea5a50,FUN_10255feac);
  }
  func_0x000107c4d664(puVar2);
  lVar12 = *(long *)(unaff_x20 + lVar12);
joined_r0x00010256101c:
  if (lVar12 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar12 + _DAT_112fcd628);
    func_0x000107c61434(((undefined8 *)(lVar12 + _DAT_112fcd628))[1]);
  }
  return uVar15;
}



/* Entry: 1025611c8; end: 10256171f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1025611c8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  puVar1 = &UNK_110520958;
  func_0x000107c613fc(&UNK_110520958,0x18,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea56a0);
  func_0x000107c61174();
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c443c8();
    func_0x000107c61170(lVar2);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112ea5670) = 1;
  return FUN_102567ec4;
}



/* Entry: 102561720; end: 1025617cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102561720(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
    puVar1 = PTR_PTR_1126b1c10;
    func_0x000107c610f8();
    func_0x000107c495dc(uVar2);
    uVar2 = *(undefined8 *)(param_5 + _DAT_112ea5720);
    *(undefined **)(param_5 + _DAT_112ea5720) = puVar1;
    func_0x000107c615e8(uVar2);
    func_0x000107c61174(puVar1);
    FUN_102567bdc(param_1,param_2,puVar1,param_5);
    func_0x000107c61170(puVar1);
  }
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  return;
}



/* Entry: 1025617d0; end: 102561867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1025617d0(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long unaff_x20;
  ulong uVar5;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112ea56d8);
  uVar3 = uVar5;
  func_0x000107c407bc();
  iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112ea56f0);
  func_0x000107c4a648();
  func_0x000107c4b894();
  iVar4 = (int)uVar3;
  if (uVar5 == 1) {
    iVar2 = 4;
    if (((uVar3 & 0xfffffffd) != 0) && (iVar2 = 4, iVar4 != 1)) {
      iVar2 = 5;
    }
  }
  else if (iVar4 == 4) {
    bVar1 = iVar2 != 0;
    iVar2 = 2;
    if (bVar1) {
      iVar2 = 3;
    }
  }
  else if (iVar4 != 3) {
    iVar2 = 6;
  }
  return iVar2;
}



/* Entry: 102561868; end: 10256194f;  */

void FUN_102561868(ulong *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  
  uVar1 = (uint)param_2 & 0xff;
  if (uVar1 == 1 || (param_2 & 0xff) == 0) {
    if ((param_2 & 0xff) == 0) {
      pcVar3 = FUN_102567e4c;
      func_0x0001025798d4();
      uVar4 = 0;
      goto LAB_102561908;
    }
    pcVar3 = (code *)0x102568120;
LAB_1025618ec:
    func_0x0001025798d4();
  }
  else {
    if (uVar1 - 2 < 2) {
      pcVar3 = (code *)0x102567e64;
      goto LAB_1025618ec;
    }
    if (uVar1 == 4) {
      pcVar3 = FUN_102567e8c;
    }
    else {
      pcVar3 = FUN_102567e84;
    }
    func_0x0001025798c0();
  }
  uVar4 = 1;
LAB_102561908:
  puVar2 = &UNK_110520598;
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = (ulong)pcVar3;
  param_1[3] = (ulong)puVar2;
  *(undefined1 *)(param_1 + 4) = uVar4;
  return;
}



/* Entry: 102561950; end: 102561a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102561950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_1025617d0();
  uVar2 = (uint)param_2;
  if ((uVar2 & 0xff) != 6) {
    FUN_102561868(&uStack_98,param_2);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    func_0x000100bcb1dc(&uStack_70);
    func_0x000107c61574();
    param_2 = uStack_80;
  }
  FUN_102561a8c();
  uVar3 = param_2;
  uVar6 = param_3;
  FUN_102560cb0();
  uVar4 = uVar3;
  uVar7 = uVar6;
  uVar8 = param_4;
  FUN_1025611c8();
  lVar10 = *(long *)(unaff_x20 + _DAT_112ea56a0);
  lVar5 = lVar10;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar5 = lVar10;
    func_0x000107c448a0();
    if ((int)lVar5 == 0) {
      func_0x000107c4487c();
      uVar9 = 0x10000;
      if ((int)lVar10 == 0) {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0x10000;
    }
  }
  else {
    func_0x000107c61170();
    uVar9 = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar3;
  param_1[3] = uVar6;
  param_1[4] = param_4;
  param_1[5] = uVar4;
  uVar1 = 0;
  if ((uVar2 & 0xff) != 6) {
    uVar1 = 0x1000000;
  }
  param_1[6] = uVar7;
  param_1[7] = uVar1 | (uint)uVar8 & 1 | (uint)uVar8 & 0x100 | uVar9;
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  return;
}



/* Entry: 102561a8c; end: 102561d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102561a8c(double param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar11 = 0x112d373d8;
  puVar7 = &UNK_10d9014c0;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = puVar9 + -extraout_x12;
  puVar10 = *(undefined **)(unaff_x20 + _DAT_112ea56a0);
  puVar2 = puVar10;
  func_0x000107c4ec80();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x0001025793ec();
  lVar11 = _DAT_112ea5668;
  *(undefined8 *)(unaff_x20 + _DAT_112ea5668) = 8;
  puVar5 = puVar3;
  puVar6 = puVar7;
  if ((*(byte *)(unaff_x20 + _DAT_112ea5658) & 1) != 0) {
LAB_102561b50:
    FUN_1025798ec();
    func_0x000107c61170(puVar2);
    func_0x000107c6142c(puVar7);
    *(undefined8 *)(unaff_x20 + lVar11) = 2;
    puVar3 = puVar5;
    puVar7 = puVar6;
    goto LAB_102561cf8;
  }
  puVar5 = puVar10;
  func_0x000107c49aa4();
  if ((int)puVar5 != 0) {
    puVar5 = puVar10;
    func_0x000107c4ec80();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar5;
      func_0x000107c443c8();
      func_0x000107c61170(puVar5);
      if ((int)puVar4 != 0) goto LAB_102561b50;
    }
  }
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    puVar5 = puVar10;
    func_0x000107c443c8();
    func_0x000107c61170(puVar10);
    if (((ulong)puVar5 & 1) != 0) {
      if (puVar2 == (undefined *)0x0) goto LAB_102561cf8;
      puVar5 = puVar2;
      func_0x000107c443d0();
      func_0x000107c61180();
      bVar1 = puVar5 == (undefined *)0x0;
      if (bVar1) {
        func_0x000107c5eea4();
      }
      else {
        func_0x000107c5ee94(puVar9);
        func_0x000107c61170(puVar5);
        puVar5 = (undefined *)0x0;
        func_0x000107c5eea4();
      }
      lVar11 = *(long *)(puVar5 + -8);
      (**(code **)(lVar11 + 0x38))(puVar9,bVar1,1,puVar5);
      func_0x0001003a4c00(puVar9,puVar8);
      func_0x000107c5eea4(0);
      puVar6 = puVar8;
      (**(code **)(lVar11 + 0x30))(puVar8,1,puVar5);
      if ((int)puVar6 == 1) {
        func_0x000107c61170(puVar2);
        FUN_10256806c(puVar8,0x112d373d8,&UNK_10d9014c0);
        goto LAB_102561cf8;
      }
      func_0x000107c5ee84();
      (**(code **)(lVar11 + 8))(puVar8,puVar5);
      if (0.0 < param_1) {
        FUN_1025639a4(param_1);
        func_0x000107c61170(puVar2);
        func_0x000107c6142c(puVar7);
        puVar3 = puVar8;
        puVar7 = puVar5;
        goto LAB_102561cf8;
      }
    }
  }
  func_0x000107c61170(puVar2);
LAB_102561cf8:
  auVar12._8_8_ = puVar7;
  auVar12._0_8_ = puVar3;
  return auVar12;
}



/* Entry: 102561d24; end: 102561def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102561d24(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112ea56a0);
  uVar1 = uVar3;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar3 = 0;
    uVar4 = 1;
    goto LAB_102561dd8;
  }
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (uVar3 == 0) {
LAB_102561d90:
    if ((char)((ulong *)(unaff_x20 + _DAT_112ea5660))[1] == '\x01') {
      uVar3 = uVar1;
      func_0x000107c5aa6c(uVar1);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar3 = *(ulong *)(unaff_x20 + _DAT_112ea5660);
    }
  }
  else {
    uVar2 = uVar3;
    func_0x000107c443c8();
    func_0x000107c61170(uVar3);
    if ((uVar2 & 1) == 0) goto LAB_102561d90;
    uVar3 = 0;
    uVar4 = 1;
  }
  func_0x000107c61170(uVar1);
LAB_102561dd8:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 102561df0; end: 1025625b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102561df0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x20;
  undefined8 uVar21;
  ulong uVar22;
  byte *pbVar23;
  undefined *puVar24;
  long lStack_e8;
  
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea5708);
  func_0x000109022114();
  uVar10 = (uint)uVar11;
  func_0x000102579e80();
  puVar12 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar11,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48af4();
  func_0x000107c61170(uVar11);
  puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = 0;
  func_0x000102576144(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar14 = *(ulong *)(uVar13 + 0x10);
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar14) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    func_0x000102576144(uVar13,uVar14 + 1,1);
  }
  *(ulong *)(uVar13 + 0x10) = uVar14 + 1;
  lVar19 = uVar13 + uVar14 * 0x60;
  *(undefined **)(lVar19 + 0x20) = puVar12;
  *(undefined1 *)(lVar19 + 0x78) = 0x80;
  uVar14 = uVar13;
  func_0x0001025621c8();
  uVar22 = *(ulong *)(uVar14 + 0x10);
  if (uVar22 == 0) {
    func_0x000107c6142c();
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_10256610c(0,uVar22,0);
    uVar20 = 0;
    pbVar23 = (byte *)(uVar14 + 0x50);
    lStack_e8 = -0x2fffffffffffffe6;
    do {
      if (*(ulong *)(uVar14 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1025621a4);
        (*pcVar9)();
      }
      uVar11 = *(undefined8 *)(pbVar23 + -0x30);
      uVar4 = *(undefined8 *)(pbVar23 + -0x28);
      uVar2 = *(undefined8 *)(pbVar23 + -0x20);
      uVar5 = *(undefined8 *)(pbVar23 + -0x18);
      bVar8 = pbVar23[-0x10];
      uVar21 = *(undefined8 *)(pbVar23 + -8);
      bVar7 = *pbVar23;
      uVar1 = uVar10 & bVar7;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c61174();
      if (uVar1 == 1) {
        lVar17 = lStack_e8;
        func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a9890);
        uVar15 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027,0x800000010dab8b90);
        uVar16 = 0;
        func_0x000107c5fe40(0);
        lVar19 = lVar17;
        uVar18 = uVar15;
        func_0x0001000f6108(lVar17,uVar15,uVar16);
        func_0x000107c61180();
        func_0x000107c61170(lVar17);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(uVar16);
        if (lVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1025621c4);
          (*pcVar9)();
        }
      }
      else {
        lVar17 = -0x2fffffffffffffeb;
        func_0x000107c5fadc(0xd000000000000015,0x800000010f0a9870);
        uVar15 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027,0x800000010dab8b90);
        uVar16 = 0;
        func_0x000107c5fe40(0);
        lVar19 = lVar17;
        uVar18 = uVar15;
        func_0x0001000f6108(lVar17,uVar15,uVar16);
        func_0x000107c61180();
        func_0x000107c61170(lVar17);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(uVar16);
        if (lVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1025621c8);
          (*pcVar9)();
        }
      }
      lVar17 = lVar19;
      func_0x000107c5faec();
      func_0x000107c61170(lVar19);
      puVar12 = &UNK_110520840;
      func_0x000107c613fc(&UNK_110520840,0x18,7);
      *(long *)(puVar12 + 0x10) = unaff_x20;
      uVar3 = *(ulong *)(puVar24 + 0x10);
      uVar6 = *(ulong *)(puVar24 + 0x18);
      func_0x000107c61174();
      if (uVar6 >> 1 <= uVar3) {
        FUN_10256610c(1 < uVar6,uVar3 + 1,1);
      }
      uVar20 = uVar20 + 1;
      *(ulong *)(puVar24 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar24 + uVar3 * 0x60 + 0x20) = uVar11;
      *(undefined8 *)(puVar24 + uVar3 * 0x60 + 0x28) = uVar4;
      *(undefined8 *)(puVar24 + uVar3 * 0x60 + 0x30) = uVar2;
      *(undefined8 *)(puVar24 + uVar3 * 0x60 + 0x38) = uVar5;
      *(ulong *)(puVar24 + uVar3 * 0x60 + 0x40) = (ulong)bVar8;
      *(undefined8 *)(puVar24 + uVar3 * 0x60 + 0x48) = uVar21;
      *(ulong *)(puVar24 + uVar3 * 0x60 + 0x50) = (ulong)bVar7;
      *(long *)(puVar24 + uVar3 * 0x60 + 0x58) = lVar17;
      *(undefined8 *)(puVar24 + uVar3 * 0x60 + 0x60) = uVar18;
      *(undefined8 *)(puVar24 + uVar3 * 0x60 + 0x68) = 0x102567bd4;
      *(undefined **)(puVar24 + uVar3 * 0x60 + 0x70) = puVar12;
      pbVar23 = pbVar23 + 0x38;
      puVar24[uVar3 * 0x60 + 0x78] = (byte)uVar1 | 0x70;
    } while (uVar22 != uVar20);
    func_0x000107c6142c();
  }
  FUN_1025625b4(puVar24);
  return uVar13;
}



/* Entry: 1025625b4; end: 1025627a7;  */

void FUN_1025625b4(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1025626a4);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    func_0x000102576144();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025626a8);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025626ac);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x60 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_110520c38);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025626b0);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1025627a8; end: 10256299b;  */

void FUN_1025627a8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte bStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_1025617d0();
  uVar3 = (uint)param_1;
  if ((uVar3 & 0xff) != 6) {
    FUN_102561868(&uStack_f8);
    uVar2 = uStack_f0;
    uVar1 = uStack_f8;
    FUN_1025617d0();
    if ((uVar3 & 0xff) == 4) {
      lVar5 = 0x112ea59c0;
      func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(ulong *)(lVar5 + 0x20) = param_1 & 0xff;
      *(undefined8 *)(lVar5 + 0x28) = uVar1;
      *(undefined8 *)(lVar5 + 0x30) = uVar2;
      *(undefined8 *)(lVar5 + 0x38) = uStack_e8;
      *(undefined8 *)(lVar5 + 0x40) = uStack_e0;
      *(ulong *)(lVar5 + 0x48) = (ulong)bStack_d8;
      *(undefined1 *)(lVar5 + 0x78) = 0;
      return;
    }
    if ((uVar3 & 0xff) != 6) {
      lVar5 = 0x112ea59c0;
      func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      uStack_68 = uStack_f0;
      uStack_70 = uStack_f8;
      *(ulong *)(lVar5 + 0x20) = param_1 & 0xff;
      *(undefined8 *)(lVar5 + 0x28) = uVar1;
      *(undefined8 *)(lVar5 + 0x30) = uVar2;
      *(undefined8 *)(lVar5 + 0x38) = uStack_e8;
      *(undefined8 *)(lVar5 + 0x40) = uStack_e0;
      *(ulong *)(lVar5 + 0x48) = (ulong)bStack_d8;
      *(undefined1 *)(lVar5 + 0x78) = 0;
      func_0x000100402194(&uStack_70,&uStack_d0);
      func_0x000107c6157c(uStack_e0);
      FUN_102561950(&uStack_d0);
      func_0x000100bcb1dc(&uStack_70);
      func_0x000107c61574(uStack_e0);
      *(undefined8 *)(lVar5 + 0xa8) = uStack_a8;
      *(undefined8 *)(lVar5 + 0xa0) = uStack_b0;
      *(undefined8 *)(lVar5 + 0xb8) = uStack_98;
      *(undefined8 *)(lVar5 + 0xb0) = uStack_a0;
      *(ulong *)(lVar5 + 200) = CONCAT71(uStack_87,uStack_88);
      *(undefined8 *)(lVar5 + 0xc0) = uStack_90;
      *(undefined8 *)(lVar5 + 0xd1) = uStack_7f;
      *(ulong *)(lVar5 + 0xc9) = CONCAT17(uStack_80,uStack_87);
      *(undefined8 *)(lVar5 + 0x88) = uStack_c8;
      *(undefined8 *)(lVar5 + 0x80) = uStack_d0;
      *(undefined8 *)(lVar5 + 0x98) = uStack_b8;
      *(undefined8 *)(lVar5 + 0x90) = uStack_c0;
      return;
    }
    uStack_68 = uStack_f0;
    uStack_70 = uStack_f8;
    func_0x000100bcb1dc(&uStack_70);
    func_0x000107c61574(uStack_e0);
  }
  lVar5 = 0x112ea59c0;
  func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  lVar4 = lVar5;
  FUN_10256299c();
  *(long *)(lVar5 + 0x20) = lVar4;
  *(undefined1 *)(lVar5 + 0x78) = 0x80;
  FUN_102561950(&uStack_d0);
  *(undefined8 *)(lVar5 + 0xa8) = uStack_a8;
  *(undefined8 *)(lVar5 + 0xa0) = uStack_b0;
  *(undefined8 *)(lVar5 + 0xb8) = uStack_98;
  *(undefined8 *)(lVar5 + 0xb0) = uStack_a0;
  *(ulong *)(lVar5 + 200) = CONCAT71(uStack_87,uStack_88);
  *(undefined8 *)(lVar5 + 0xc0) = uStack_90;
  *(undefined8 *)(lVar5 + 0xd1) = uStack_7f;
  *(ulong *)(lVar5 + 0xc9) = CONCAT17(uStack_80,uStack_87);
  *(undefined8 *)(lVar5 + 0x88) = uStack_c8;
  *(undefined8 *)(lVar5 + 0x80) = uStack_d0;
  *(undefined8 *)(lVar5 + 0x98) = uStack_b8;
  *(undefined8 *)(lVar5 + 0x90) = uStack_c0;
  return;
}



/* Entry: 10256299c; end: 102562bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10256299c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112ea56a0);
  uVar1 = uVar6;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar1 = uVar6;
    func_0x000107c448a0();
    if (((uVar1 & 1) != 0) || (func_0x000107c4487c(), uVar1 = uVar6, (int)uVar6 != 0)) {
      func_0x000102579b50();
      puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      func_0x000107c5fadc(uVar1,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c48af4(puVar4);
      func_0x000107c61170(uVar1);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c61174(puVar4);
      func_0x000107c4adac();
      func_0x000107c3d5c4(puVar4);
      func_0x000107c61170(puVar4);
      goto LAB_102562bac;
    }
  }
  else {
    func_0x000107c61170();
    uVar6 = uVar1;
  }
  func_0x000102579c1c();
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  uVar2 = param_2;
  func_0x000107c5fadc(uVar6,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48af4(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000102579ce8();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  uVar2 = 0x20;
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x000107c5fadc(0x20,0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  func_0x000107c48af4(puVar5);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c4adac(puVar5);
  func_0x000107c3d5c4(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c3dee8(puVar4);
LAB_102562bac:
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 102562bd0; end: 102562db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102562bd0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined1 auVar12 [16];
  
  uVar2 = 0x112ea59c0;
  func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
  puVar8 = (undefined *)0x140;
  func_0x000107c613fc();
  *(undefined8 *)(uVar2 + 0x18) = 6;
  *(undefined8 *)(uVar2 + 0x10) = 3;
  uVar3 = uVar2;
  FUN_102561d24();
  uVar4 = uVar3;
  puVar7 = puVar8;
  func_0x000102560be4();
  uVar1 = 0x100;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  *(ulong *)(uVar2 + 0x20) = uVar3;
  *(ulong *)(uVar2 + 0x28) = uVar1 | (ulong)puVar8 & 0xff;
  *(undefined1 *)(uVar2 + 0x78) = 0x20;
  puVar11 = *(undefined **)(unaff_x20 + _DAT_112ea56a0);
  puVar8 = puVar11;
  func_0x000107c4ec80();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar8 != (undefined *)0x0) {
    puVar5 = puVar8;
    func_0x000107c3ea84();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar5;
      puVar7 = PTR___sSSN_11034da80;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar5);
    }
  }
  puVar8 = puVar6;
  FUN_102562db8();
  puVar9 = puVar7;
  func_0x000107c6142c();
  FUN_102561d24();
  puVar5 = puVar6;
  puVar10 = puVar9;
  func_0x000102560be4();
  *(undefined **)(uVar2 + 0x80) = puVar8;
  *(undefined **)(uVar2 + 0x88) = puVar7;
  uVar1 = 0x100;
  if (((ulong)puVar5 & 1) == 0) {
    uVar1 = 0;
  }
  *(undefined **)(uVar2 + 0x90) = puVar6;
  *(ulong *)(uVar2 + 0x98) = uVar1 | (ulong)puVar9 & 0xff;
  *(undefined1 *)(uVar2 + 0xd8) = 0x30;
  func_0x000107c4ec80();
  func_0x000107c61180();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar11 != (undefined *)0x0) {
    puVar8 = puVar11;
    func_0x000107c5e2b0();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar8 != (undefined *)0x0) {
      puVar7 = puVar8;
      puVar10 = PTR___sSSN_11034da80;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar8);
    }
  }
  puVar8 = puVar7;
  FUN_102562db8();
  puVar11 = puVar10;
  func_0x000107c6142c();
  FUN_102561d24();
  puVar6 = puVar7;
  func_0x000102560be4();
  *(undefined **)(uVar2 + 0xe0) = puVar8;
  *(undefined **)(uVar2 + 0xe8) = puVar10;
  uVar1 = 0x100;
  if (((ulong)puVar6 & 1) == 0) {
    uVar1 = 0;
  }
  *(undefined **)(uVar2 + 0xf0) = puVar7;
  *(ulong *)(uVar2 + 0xf8) = uVar1 | (ulong)puVar11 & 0xff;
  *(undefined1 *)(uVar2 + 0x138) = 0x40;
  auVar12._8_8_ = 0x40;
  auVar12._0_8_ = uVar2;
  return auVar12;
}



/* Entry: 102562db8; end: 102563483;  */

/* WARNING: Removing unreachable block (ram,0x000102563478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102562db8(long param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *****pppppuVar11;
  long extraout_x8;
  undefined8 ***pppuVar12;
  undefined8 ****ppppuVar13;
  ulong uVar14;
  long extraout_x12;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined8 ***pppuVar15;
  undefined8 *****pppppuVar16;
  long unaff_x20;
  undefined8 ****ppppuVar17;
  long lVar18;
  undefined8 *****pppppuVar19;
  undefined8 ****ppppuVar20;
  undefined1 auVar21 [16];
  undefined8 **ppuStack_100;
  undefined8 ***pppuStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  long lStack_80;
  ulong uStack_78;
  
  lVar3 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_f0 = (long)&ppuStack_100 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_1 != 0) {
    ppppuVar13 = *(undefined8 *****)(param_1 + 0x10);
    lVar18 = *(long *)(unaff_x20 + _DAT_112ea5698);
    ppppuVar17 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_e8 = extraout_x14;
    lStack_e0 = extraout_x13;
    lStack_d8 = lVar3;
    if (ppppuVar13 != (undefined8 ****)0x0) {
      ppppuVar20 = (undefined8 ****)0x0;
      ppuStack_100 = (undefined8 **)(param_1 + 0x28);
      pppuStack_f8 = ppppuVar13;
      do {
        ppppuVar5 = ppppuVar20;
        if (ppppuVar20 <= pppuStack_f8) {
          ppppuVar5 = (undefined8 ****)pppuStack_f8;
        }
        pppuVar15 = (undefined8 ***)(ppuStack_100 + (long)ppppuVar20 * 2);
        ppppuVar20 = (undefined8 ****)((long)ppppuVar20 + 1);
        while( true ) {
          if ((long)ppppuVar20 - (long)ppppuVar5 == 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102563470);
            (*pcVar2)();
          }
          pppuVar12 = (undefined8 ***)pppuVar15[-1];
          ppppuVar1 = (undefined8 ****)*pppuVar15;
          func_0x000107c61434(ppppuVar1);
          pppuVar4 = pppuVar12;
          param_2 = ppppuVar1;
          func_0x000107c5fadc(pppuVar12);
          lVar3 = lVar18;
          func_0x000107c43a00();
          func_0x000107c61170(pppuVar4);
          if (4 < (uint)lVar3 || (1 << (ulong)((uint)lVar3 & 0x1f) & 0x19U) == 0) break;
          func_0x000107c6142c(ppppuVar1);
          ppppuVar20 = (undefined8 ****)((long)ppppuVar20 + 1);
          pppuVar15 = pppuVar15 + 2;
          if ((long)ppppuVar20 - (long)ppppuVar13 == 1) goto LAB_102562f74;
        }
        ppppuVar5 = ppppuVar17;
        func_0x000107c61558();
        ppppuStack_90 = ppppuVar17;
        if (((ulong)ppppuVar5 & 1) == 0) {
          param_2 = (undefined8 ****)((long)ppppuVar17[2] + 1);
          func_0x000100403514(0,param_2,1);
        }
        pppuVar15 = ppppuStack_90[2];
        ppppuVar17 = (undefined8 ****)((long)pppuVar15 + 1);
        if ((undefined8 ***)((ulong)ppppuStack_90[3] >> 1) <= pppuVar15) {
          param_2 = ppppuVar17;
          func_0x000100403514((undefined8 ***)0x1 < ppppuStack_90[3],ppppuVar17,1);
        }
        ppppuStack_90[2] = ppppuVar17;
        ppppuStack_90[(long)pppuVar15 * 2 + 4] = pppuVar12;
        ppppuStack_90[(long)pppuVar15 * 2 + 5] = ppppuVar1;
        ppppuVar17 = ppppuStack_90;
      } while (ppppuVar20 != ppppuVar13);
    }
LAB_102562f74:
    pppuVar15 = ppppuVar17[2];
    pppppuVar19 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppuVar15 != (undefined8 ***)0x0) {
      pppuVar12 = (undefined8 ***)0x0;
      pppuStack_f8 = ppppuVar17 + 5;
      ppuStack_100 = (undefined8 **)((long)pppuVar15 - 1);
LAB_102562fa0:
      ppppuVar13 = (undefined8 ****)(pppuStack_f8 + (long)pppuVar12 * 2);
      pppuVar4 = pppuVar12;
      do {
        if (ppppuVar17[2] <= pppuVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102563474);
          (*pcVar2)();
        }
        pppuVar12 = ppppuVar13[-1];
        ppppuVar20 = (undefined8 ****)*ppppuVar13;
        func_0x000107c61434(ppppuVar20);
        param_2 = ppppuVar20;
        func_0x000107c5fadc(pppuVar12);
        lVar3 = lVar18;
        func_0x000107c4c39c();
        func_0x000107c61180();
        func_0x000107c61170(pppuVar12);
        func_0x000107c6142c(ppppuVar20);
        if (lVar3 != 0) {
          ppppuVar20 = *(undefined8 *****)(lVar3 + _DAT_112fcd620);
          ppppuVar5 = (undefined8 ****)((undefined8 *)(lVar3 + _DAT_112fcd620))[1];
          func_0x000107c61434(ppppuVar5);
          func_0x000107c61170(lVar3);
          if (ppppuVar5 != (undefined8 ****)0x0) goto code_r0x000102563030;
        }
        pppuVar4 = (undefined8 ***)((long)pppuVar4 + 1);
        ppppuVar13 = ppppuVar13 + 2;
        if (pppuVar15 == pppuVar4) break;
      } while( true );
    }
LAB_1025630b4:
    func_0x000107c61574(ppppuVar17);
    ppppuStack_90 = pppppuVar19;
    func_0x000107c61434(pppppuVar19);
    FUN_102566240(&ppppuStack_90);
    func_0x000107c6142c();
    ppppuVar17 = ppppuStack_90;
    ppppuVar13 = (undefined8 ****)ppppuStack_90[2];
    if (ppppuVar13 != (undefined8 ****)0x0) {
      if (ppppuVar13 < (undefined8 ****)0x3) {
        ppppuStack_c0 = ppppuStack_90;
        func_0x000107c5ef04(uStack_e8);
        func_0x000107c5eef4();
        (**(code **)(lStack_e0 + 8))(uStack_e8,lStack_d8);
        pppppuVar16 = (undefined8 *****)0xe100000000000000;
        if (param_2 == (undefined8 ****)0x0) {
          pppppuVar19 = (undefined8 *****)0x20;
        }
        else {
          ppppuStack_90 = (undefined8 *****)0x20;
          ppppuStack_88 = (undefined8 *****)0xe100000000000000;
          ppppuStack_b0 = pppppuVar19;
          ppppuStack_a8 = param_2;
          func_0x000107c61434(param_2);
          puVar7 = PTR___sSSSTsWP_11034daa0;
          puVar6 = PTR___sSSN_11034da80;
          pppppuVar16 = &ppppuStack_b0;
          pppppuVar19 = (undefined8 *****)PTR___sSSN_11034da80;
          func_0x000107c5fbd4(pppppuVar16,PTR___sSSN_11034da80,
                              PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,
                              PTR___sSSSTsWP_11034daa0);
          ppppuStack_b0 = pppppuVar16;
          ppppuStack_a8 = pppppuVar19;
          func_0x000107c5fb70(&ppppuStack_90,puVar6,puVar7);
          func_0x000107c6142c(param_2);
          pppppuVar16 = (undefined8 *****)ppppuStack_a8;
          pppppuVar19 = (undefined8 *****)ppppuStack_b0;
        }
        uVar8 = 0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar9 = 0x112d38278;
        FUN_102567e08(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
        pppppuVar11 = pppppuVar16;
        func_0x000107c5fa80(pppppuVar19,pppppuVar16,uVar8,uVar9);
        func_0x000107c61574(ppppuVar17);
      }
      else {
        ppppuStack_88 = ppppuStack_90 + 4;
        uStack_78 = 5;
        lStack_80 = 0;
        pppppuVar19 = (undefined8 *****)ppppuStack_90;
        func_0x000107c6157c();
        func_0x000102579db4();
        lVar3 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        func_0x000107c61574(ppppuVar17);
        ppppuStack_b0 = (undefined8 ****)((long)ppppuVar13 + -2);
        puVar6 = PTR___sSiN_11034deb0;
        puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c();
        *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
        puVar7 = puVar6;
        func_0x00010075bbf0();
        *(undefined **)(lVar3 + 0x40) = puVar7;
        *(undefined **)(lVar3 + 0x20) = puVar6;
        *(undefined **)(lVar3 + 0x28) = puVar10;
        ppppuVar13 = param_2;
        func_0x000107c5fb00(pppppuVar19,param_2,lVar3);
        func_0x000107c6142c(param_2);
        pppppuVar16 = (undefined8 *****)ppppuVar17;
        func_0x000107c6154c();
        ppppuStack_90 = ppppuVar17;
        if ((int)pppppuVar16 == 0) {
          FUN_102566508(2);
          uVar14 = uStack_78 >> 1;
          lVar3 = lStack_80;
        }
        else {
          uVar14 = 2;
          lVar3 = 0;
        }
        if (SBORROW8(uVar14,lVar3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102563478);
          (*pcVar2)();
        }
        FUN_10256633c(uVar14 - lVar3);
        FUN_102566424(uVar14 - lVar3,pppppuVar19,ppppuVar13);
        ppppuVar17 = ppppuStack_90;
        ppppuStack_a8 = ppppuStack_88;
        ppppuStack_b0 = ppppuStack_90;
        uStack_98 = uStack_78;
        lStack_a0 = lStack_80;
        pppppuVar11 = (undefined8 *****)ppppuStack_90;
        func_0x000107c615f0();
        lVar3 = lStack_f0;
        func_0x000107c5ef04(lStack_f0);
        func_0x000107c5eef4();
        (**(code **)(lStack_e0 + 8))(lVar3,lStack_d8);
        pppppuVar16 = (undefined8 *****)0xe100000000000000;
        if (pppppuVar19 == (undefined8 *****)0x0) {
          pppppuVar19 = (undefined8 *****)0x20;
        }
        else {
          ppppuStack_c0 = (undefined8 *****)0x20;
          uStack_b8 = 0xe100000000000000;
          ppppuStack_d0 = pppppuVar11;
          ppppuStack_c8 = pppppuVar19;
          func_0x000107c61434(pppppuVar19);
          puVar7 = PTR___sSSSTsWP_11034daa0;
          puVar6 = PTR___sSSN_11034da80;
          pppppuVar11 = &ppppuStack_d0;
          pppppuVar16 = (undefined8 *****)PTR___sSSN_11034da80;
          func_0x000107c5fbd4(pppppuVar11,PTR___sSSN_11034da80,
                              PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,
                              PTR___sSSSTsWP_11034daa0);
          ppppuStack_d0 = pppppuVar11;
          ppppuStack_c8 = pppppuVar16;
          func_0x000107c5fb70(&ppppuStack_c0,puVar6,puVar7);
          func_0x000107c6142c(pppppuVar19);
          pppppuVar16 = (undefined8 *****)ppppuStack_c8;
          pppppuVar19 = (undefined8 *****)ppppuStack_d0;
        }
        uVar8 = 0x112ea3f28;
        func_0x0001000285a8(0x112ea3f28,&UNK_10dab6d60);
        uVar9 = 0x112ea3f30;
        FUN_102567e08(0x112ea3f30,0x112ea3f28,&UNK_10dab6d60,PTR___ss10ArraySliceVyxGSKsMc_11034e2e0
                     );
        pppppuVar11 = pppppuVar16;
        func_0x000107c5fa80(pppppuVar19,pppppuVar16,uVar8,uVar9);
        func_0x000107c615ec(ppppuVar17,2);
      }
      func_0x000107c6142c(pppppuVar16);
      goto LAB_10256344c;
    }
    func_0x000107c61574(ppppuStack_90);
  }
  pppppuVar19 = (undefined8 *****)0x0;
  pppppuVar11 = (undefined8 *****)0x0;
LAB_10256344c:
  auVar21._8_8_ = pppppuVar11;
  auVar21._0_8_ = pppppuVar19;
  return auVar21;
code_r0x000102563030:
  pppppuVar16 = pppppuVar19;
  func_0x000107c61558();
  pppppuVar11 = pppppuVar19;
  if (((ulong)pppppuVar16 & 1) == 0) {
    param_2 = (undefined8 ****)((long)pppppuVar19[2] + 1);
    pppppuVar11 = (undefined8 *****)0x0;
    func_0x0001000d182c(0,param_2,1,pppppuVar19);
  }
  ppppuVar1 = pppppuVar11[2];
  ppppuVar13 = (undefined8 ****)((long)ppppuVar1 + 1);
  pppppuVar19 = pppppuVar11;
  if ((undefined8 ****)((ulong)pppppuVar11[3] >> 1) <= ppppuVar1) {
    pppppuVar19 = (undefined8 *****)(ulong)((undefined8 ****)0x1 < pppppuVar11[3]);
    param_2 = ppppuVar13;
    func_0x0001000d182c(pppppuVar19,ppppuVar13,1,pppppuVar11);
  }
  pppuVar12 = (undefined8 ***)((long)pppuVar4 + 1);
  pppppuVar19[2] = ppppuVar13;
  pppppuVar19[(long)ppppuVar1 * 2 + 4] = ppppuVar20;
  pppppuVar19[(long)ppppuVar1 * 2 + 5] = ppppuVar5;
  if ((undefined8 ***)ppuStack_100 == pppuVar4) goto LAB_1025630b4;
  goto LAB_102562fa0;
}



/* Entry: 102563484; end: 10256351b;  */

void FUN_102563484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102567994(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10256351c,uVar2,uVar3);
  return;
}



/* Entry: 10256351c; end: 1025637cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256351c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  lVar11 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  lVar10 = _DAT_112ea5678;
  func_0x000107c61428(lVar11 + _DAT_112ea5678,unaff_x22 + 0x10,0x20,0);
  lVar10 = *(long *)(lVar11 + lVar10);
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar11 = *(long *)(unaff_x22 + 0x48);
    uVar8 = *(ulong *)(unaff_x22 + 0x50);
    func_0x000107c61434(lVar10);
    func_0x000100029284();
    if ((uVar8 & 1) != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar3 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + lVar11 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c614a8(unaff_x22 + 0x10);
      func_0x000107c6142c(lVar10);
      func_0x000107c4d664(uVar12);
      goto LAB_1025637a4;
    }
    func_0x000107c6142c(lVar10);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar10 = *(long *)(unaff_x22 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c614a8(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(lVar10 + _DAT_112ea56c8);
  puVar4 = PTR_PTR_1126b4bc0;
  func_0x000107c610f8(PTR_PTR_1126b4bc0);
  func_0x000107c5fadc(uVar12,uVar3);
  uVar3 = uVar13;
  func_0x000107c5fadc(uVar13,uVar1);
  uVar5 = 0x3931303632323031;
  func_0x000107c5fadc(0x3931303632323031,0xe800000000000000);
  func_0x000107c491d0(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  uVar12 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
  uVar3 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar6 = &UNK_110520598;
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,lVar10);
  puVar7 = &UNK_1105208b8;
  func_0x000107c613fc(&UNK_1105208b8,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = uVar13;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(code **)(unaff_x22 + 0x30) = FUN_102567dfc;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1010a2bbc;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1105208d0;
  lVar10 = unaff_x22 + 0x10;
  func_0x000107c60bc4(lVar10);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(uVar13);
  func_0x000107c4329c(uVar9);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(lVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar4);
LAB_1025637a4:
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001025637cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025637d0; end: 1025639a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025637d0(long param_1,ulong param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined1 *param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_68;
  func_0x000107c61428(param_4 + 0x10,puVar4,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if ((param_1 != 0) && (param_2 != 0)) {
      func_0x000107c61174(param_1);
      func_0x000107c3e544();
      func_0x000107c61180();
      uVar2 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      if ((uVar2 == param_5) && (puVar4 == param_6)) {
        func_0x000107c6142c(puVar4);
LAB_1025638a8:
        func_0x000107c4d664(param_7);
        lVar1 = _DAT_112ea5678;
        func_0x000107c61428(param_4 + _DAT_112ea5678,auStack_80,0x21,0);
        func_0x000107c61174(param_1);
        func_0x000107c61434(param_6);
        uVar3 = *(undefined8 *)(param_4 + lVar1);
        func_0x000107c61558(uVar3);
        uVar5 = *(undefined8 *)(param_4 + lVar1);
        *(undefined8 *)(param_4 + lVar1) = 0x8000000000000000;
        func_0x000100fdaeac(param_1,param_5,param_6,uVar3);
        func_0x000107c6142c(param_6);
        *(undefined8 *)(param_4 + lVar1) = uVar5;
        func_0x000107c614a8(auStack_80);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c605b8(uVar2,puVar4,param_5,param_6,0);
      func_0x000107c6142c(puVar4);
      if ((uVar2 & 1) != 0) goto LAB_1025638a8;
      func_0x000107c61170(param_4);
    }
    func_0x000107c61170();
  }
  if (lRam0000000112ea5a50 != -1) {
    func_0x000107c61568(0x112ea5a50,FUN_10255feac);
  }
  func_0x000107c4d664(param_7);
  return;
}



/* Entry: 1025639a4; end: 102563bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1025639a4(double param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar1 = 0;
  func_0x000107c5ef64();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar10 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ee80(uVar10,param_1);
  func_0x000107c5ef54(puVar4);
  uVar3 = uVar10;
  func_0x000107c5ef34();
  (**(code **)(lVar11 + 8))(puVar4);
  if (((uVar3 & 1) == 0) || (param_1 <= 10800.0)) {
    func_0x000102579a84();
    uVar9 = 2;
  }
  else {
    func_0x0001025799b8();
    uVar9 = 8;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112ea5668) = uVar9;
  puVar5 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  lVar8 = lVar1;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5ee70();
  func_0x000107c4b87c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c5faec();
  func_0x000107c61170(puVar5);
  lVar11 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined8 *)(lVar11 + 0x10) = 1;
  *(undefined **)(lVar11 + 0x38) = PTR___sSSN_11034da80;
  lVar7 = lVar11;
  func_0x00010075bbf0();
  *(long *)(lVar11 + 0x40) = lVar7;
  *(undefined **)(lVar11 + 0x20) = puVar6;
  *(long *)(lVar11 + 0x28) = lVar8;
  lVar7 = lVar1;
  func_0x000107c5fb00(puVar4,lVar1,lVar11);
  func_0x000107c6142c(lVar1);
  (**(code **)(lVar12 + 8))(uVar10,lVar2);
  auVar13._8_8_ = lVar7;
  auVar13._0_8_ = puVar4;
  return auVar13;
}



/* Entry: 102563bac; end: 102563d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102563bac(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea56d8);
  puVar1 = &UNK_110520598;
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x102567eac;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100288f10;
  puStack_48 = &UNK_1105208f8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c503ac(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102563d0c; end: 102563db7;  */

void FUN_102563d0c(void)

{
  long in_x4;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(in_x4 + 0x10,auStack_38,0,0);
  in_x4 = in_x4 + 0x10;
  func_0x000107c61618();
  if (in_x4 != 0) {
    FUN_102567684();
    func_0x000107c61170(in_x4);
  }
  return;
}



/* Entry: 102563db8; end: 102563e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102563db8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea56d8);
  puVar1 = &UNK_110520598;
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x102568124;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100288f10;
  puStack_48 = &UNK_110520920;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c503ac(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102563e7c; end: 102563ee7;  */

void FUN_102563e7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102563ee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(400000000)
  ;
  return;
}



/* Entry: 102563ee8; end: 102563f7f;  */

void FUN_102563ee8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  *(long *)(lVar3 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x28));
  uVar1 = 0x112d45220;
  FUN_102567994(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102563f80;
  }
  else {
    pcVar2 = (code *)0x102568130;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 102563f80; end: 102563fc7;  */

void FUN_102563f80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c56c28(uVar1,param_2,1,1);
                    /* WARNING: Could not recover jumptable at 0x000102563fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102563fc8; end: 102564123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102563fc8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if (((uint)param_2 & 0xff) == 1) {
      func_0x000107c56c28(param_5);
    }
    else {
      FUN_10256423c(1,param_1,param_2);
      *(undefined1 *)(param_4 + _DAT_112ea5658) = 1;
      lVar1 = param_4;
      func_0x000107c424e8();
      func_0x000107c61180();
      (**(code **)(lVar1 + 0x10))();
      func_0x000107c60bd0(lVar1);
      puVar2 = &UNK_110520a48;
      func_0x000107c613fc(&UNK_110520a48,0x18,7);
      *(long *)(puVar2 + 0x10) = param_4;
      func_0x000107c61174(param_4);
      uVar3 = 0x51;
      func_0x000100859150(0x51,0,0x3c,4,0,0,&UNK_10dab8cb0,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar3);
    }
    if (param_3 != 0) {
      func_0x000107c420a8(param_3);
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 102564124; end: 10256423b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102564124(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112ea5670) = 0;
    uVar4 = *(undefined8 *)(param_1 + _DAT_112ea56b0);
    uVar1 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar2 = &UNK_110520598;
    func_0x000107c613fc(&UNK_110520598,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    uStack_58 = 0x10256812c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100ff4e10;
    puStack_60 = &UNK_110520ab0;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000107c42b74(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10256423c; end: 1025643bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256423c(ulong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  *(undefined1 *)(unaff_x20 + _DAT_112ea5670) = 0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea56b0);
  uVar1 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar2 = &UNK_110520598;
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puStack_58 = puVar2;
  if (((param_1 & 1) == 0) || (param_3 == '\x01')) {
    pcStack_60 = FUN_102567f9c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ff4e10;
    puStack_68 = &UNK_1105209e8;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c42b74(uVar5);
  }
  else {
    pcStack_60 = (code *)0x102568128;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ff4e10;
    puStack_68 = &UNK_110520a10;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c42918(uVar5);
    ppuVar4 = ppuVar3;
  }
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1025643bc; end: 102564427;  */

void FUN_1025643bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102564428;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (1000000000);
  return;
}



/* Entry: 102564428; end: 1025644bf;  */

void FUN_102564428(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  *(long *)(lVar3 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x28));
  uVar1 = 0x112d45220;
  FUN_102567994(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1025644c0;
  }
  else {
    pcVar2 = (code *)0x102564528;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 1025644c0; end: 10256455b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025644c0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  *(undefined1 *)(lVar1 + _DAT_112ea5658) = 0;
  func_0x000107c424e8();
  func_0x000107c61180();
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102564524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10256455c; end: 1025645eb;  */

void FUN_10256455c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102567994(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025645ec,uVar2,uVar3);
  return;
}



/* Entry: 1025645ec; end: 1025646d3;  */

void FUN_1025645ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar4 = 0;
  func_0x000100dfa6ec(0);
  uVar5 = 0x112d377a8;
  FUN_102567994(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  puVar6 = puVar3;
  func_0x000107c5f9dc(puVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c6142c(puVar3);
  func_0x000107c4de70(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001025646d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025646d4; end: 1025647cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025646d4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112ea5720);
    if (lVar1 != 0) {
      func_0x000107c615f0(lVar1);
      func_0x000107c41864();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1025647cc; end: 102564bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025647cc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long alStack_70 [2];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea56a0);
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    lVar15 = *(long *)(lVar3 + -8);
    (**(code **)(lVar15 + 0x38))(puVar10,1,1,lVar3);
    lVar11 = lVar2;
    func_0x000107c5e2b0();
    func_0x000107c61180();
    if (lVar11 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar11;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar11);
    }
    lVar11 = lVar2;
    func_0x000107c3ea84();
    func_0x000107c61180();
    if (lVar11 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar11;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar11);
    }
    func_0x000107c4ddac(lVar2);
    puVar14 = puVar10;
    (**(code **)(lVar15 + 0x30))(puVar10,1,lVar3);
    if ((int)puVar14 == 1) {
      puVar14 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c5ee70();
      (**(code **)(lVar15 + 8))(puVar10,lVar3);
    }
    if (lVar12 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar12;
      func_0x000107c5fc48(lVar12,PTR___sSSN_11034da80);
      func_0x000107c6142c(lVar12);
    }
    if (lVar13 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar13;
      func_0x000107c5fc48(lVar13,PTR___sSSN_11034da80);
      func_0x000107c6142c(lVar13);
    }
    puVar4 = PTR_PTR_1126bf2d8;
    func_0x000107c610f8();
    func_0x000107c4867c();
    func_0x000107c61170(puVar14);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar3);
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112ea56c0);
    func_0x000107c3db38();
    uVar6 = *(ulong *)(unaff_x20 + _DAT_112ea5708);
    func_0x000109022078();
    if ((((long)uVar5 < 0) || (uVar5 < uVar6)) || (func_0x000109022070(), (int)uVar6 != 0)) {
      lVar11 = unaff_x20 + _DAT_112ea5640;
      func_0x000107c61618();
      if (lVar11 != 0) {
        puVar8 = &UNK_110520598;
        func_0x000107c613fc(&UNK_110520598,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,unaff_x20);
        puVar9 = &UNK_110520728;
        func_0x000107c613fc(&UNK_110520728,0x20,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(undefined **)(puVar9 + 0x18) = puVar4;
        uVar7 = 0;
        FUN_10255b53c(0);
        func_0x000107c6157c(puVar8);
        func_0x000107c61174(puVar4);
        (*(code *)(undefined *)0x10255d184)(FUN_102567aa8,puVar9,uVar7,&PTR_DAT_110520050);
        func_0x000107c61574(puVar8);
        func_0x000107c615e8(lVar11);
        func_0x000107c61574(puVar9);
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar4);
    }
    else {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea5660);
      *puVar1 = 1;
      *(undefined1 *)(puVar1 + 1) = 0;
      lVar11 = unaff_x20;
      func_0x000107c424e8();
      func_0x000107c61180();
      (**(code **)(lVar11 + 0x10))();
      func_0x000107c60bd0(lVar11);
      puVar8 = &UNK_1105206d8;
      func_0x000107c613fc(&UNK_1105206d8,0x30,7);
      *(long *)(puVar8 + 0x10) = unaff_x20;
      *(undefined **)(puVar8 + 0x18) = puVar4;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      puVar9 = &UNK_110520700;
      func_0x000107c613fc(&UNK_110520700,0x20,7);
      *(undefined **)(puVar9 + 0x10) = &UNK_10dab8c38;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      func_0x000107c61174(puVar4);
      func_0x000107c61174(unaff_x20);
      *(undefined **)((long)alStack_70 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
      uVar7 = 0x51;
      func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab8c40,puVar9);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(uVar7);
    }
    return;
  }
  return;
}



/* Entry: 102564bdc; end: 102564f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102564bdc(double param_1,uint param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long extraout_x8;
  undefined8 uVar9;
  long lVar10;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(auStack_d0 + lVar8);
  func_0x000107c5ee8c();
  (**(code **)(lVar10 + 8))(auStack_d0 + lVar8,lVar3);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102564f70);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102564f78);
      (*pcVar2)();
    }
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    lVar3 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_102564f78((long)param_1);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
    lVar3 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_102565008(param_2 & 1,(long)param_1);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61428(param_3 + 0x10,auStack_98,0,0);
    lVar3 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      if ((param_2 & 1) != 0) {
        puVar1 = (undefined8 *)(lVar3 + _DAT_112ea5660);
        *puVar1 = 1;
        *(undefined1 *)(puVar1 + 1) = 0;
        lVar10 = lVar3;
        func_0x000107c424e8();
        func_0x000107c61180();
        (**(code **)(lVar10 + 0x10))();
        func_0x000107c60bd0(lVar10);
        puVar4 = &UNK_110520750;
        func_0x000107c613fc(&UNK_110520750,0x30,7);
        *(long *)(puVar4 + 0x10) = lVar3;
        *(undefined8 *)(puVar4 + 0x18) = param_4;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        puVar5 = &UNK_110520778;
        func_0x000107c613fc(&UNK_110520778,0x20,7);
        *(undefined **)(puVar5 + 0x10) = &UNK_10dab8c48;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        func_0x000107c61174();
        func_0x000107c61174(param_4);
        *(undefined **)((long)alStack_e0 + lVar8) = PTR___sytN_11034f1b0 + 8;
        uVar6 = 0x51;
        func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab8c50,puVar5);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(uVar6);
        lVar8 = _DAT_112ea56c0;
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ea56c0);
        func_0x000107c3db38();
        uVar9 = *(undefined8 *)(lVar3 + lVar8);
        puVar4 = &UNK_110520598;
        func_0x000107c613fc(&UNK_110520598,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,lVar3);
        puVar5 = &UNK_1105207a0;
        func_0x000107c613fc(&UNK_1105207a0,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined8 *)(puVar5 + 0x18) = uVar6;
        pcStack_a8 = FUN_102567bc0;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_1000f6b44;
        puStack_b0 = &UNK_1105207b8;
        ppuVar7 = &puStack_c8;
        puStack_a0 = puVar5;
        func_0x000107c60bc4(ppuVar7);
        puVar4 = puStack_a0;
        func_0x000107c61174(uVar9);
        func_0x000107c61574(puVar4);
        func_0x000107c4e560(uVar9);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(uVar9);
        return;
      }
      func_0x000107c61170();
    }
    func_0x000107c61428(param_3 + 0x10,&puStack_c8,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      lVar8 = param_3;
      func_0x000107c424e8();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      (**(code **)(lVar8 + 0x10))(lVar8);
      func_0x000107c60bd0(lVar8);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102564f74);
  (*pcVar2)();
}



/* Entry: 102564f78; end: 102565007;  */

/* WARNING: Possible PIC construction at 0x000102564fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102564fd4) */

void FUN_102564f78(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1d40;
  func_0x000107c610f8(PTR_PTR_1126b1d40);
  func_0x000107c453e4();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0a9850);
  func_0x000107c56788(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102565008; end: 1025650c3;  */

/* WARNING: Possible PIC construction at 0x000102565088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256508c) */

void FUN_102565008(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126b1d48;
  func_0x000107c610f8(PTR_PTR_1126b1d48);
  func_0x000107c453e4();
  bVar2 = (param_1 & 1) == 0;
  uVar4 = 0x59414b4f;
  if (bVar2) {
    uVar4 = 0x574f4e5f544f4e;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe700000000000000;
  }
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c52194(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1025650c4; end: 102565153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025650c4(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ea56c0);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102565154);
      (*pcVar1)();
    }
    func_0x000107c52624(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102565154; end: 102565223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102565154(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      lVar2 = lVar1;
      func_0x000107c424e8();
      func_0x000107c61180();
      (**(code **)(lVar2 + 0x10))();
      func_0x000107c60bd0(lVar2);
      func_0x000107c61170(lVar1);
      return;
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112ea5640;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      FUN_10255ccf4();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102565224; end: 1025652b7;  */

void FUN_102565224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102567994(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025652b8,uVar2,uVar3);
  return;
}



/* Entry: 1025652b8; end: 102565403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025652b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar8 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  uVar7 = *(undefined8 *)(lVar8 + _DAT_112ea56b0);
  func_0x000106b1f544(*(undefined8 *)(lVar8 + _DAT_112ea56b8));
  uVar3 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar4 = &UNK_110520598;
  func_0x000107c613fc(&UNK_110520598,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,lVar8);
  puVar5 = &UNK_1105207f0;
  func_0x000107c613fc(&UNK_1105207f0,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x102567bc8;
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  puVar6 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100ff4e10;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_110520808;
  func_0x000107c60bc4();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001013c2988(uVar2,uVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c5d538(uVar7);
  func_0x000107c60bd0(puVar6);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102565400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102565404; end: 1025654d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102565404(long param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      lVar1 = param_2;
      func_0x000107c424e8();
      func_0x000107c61180();
      (**(code **)(lVar1 + 0x10))();
      func_0x000107c60bd0(lVar1);
    }
    else {
      lVar1 = param_2 + _DAT_112ea5640;
      func_0x000107c61618();
      if (lVar1 != 0) {
        FUN_10255ccf4();
        func_0x000107c615e8(lVar1);
      }
    }
    if (param_3 != (code *)0x0) {
      (*param_3)(param_1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1025654d4; end: 102565687;  */

void FUN_1025654d4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  if (param_1 == 3) {
    if (param_2 != 0) {
      puVar1 = &UNK_110520598;
      func_0x000107c613fc(&UNK_110520598,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_3);
      pcStack_58 = (code *)0x102568050;
      puStack_60 = &UNK_110520a88;
      puStack_50 = puVar1;
LAB_10256560c:
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      ppuVar2 = &puStack_78;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      func_0x000107c60bc4(ppuVar2);
      func_0x000107c61574(puStack_50);
      func_0x000107c420a8(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c60bd0(ppuVar2);
      return;
    }
  }
  else if (param_1 == 2) {
    if (param_2 != 0) {
      puVar1 = &UNK_110520598;
      func_0x000107c613fc(&UNK_110520598,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_3);
      pcStack_58 = FUN_102568048;
      puStack_60 = &UNK_110520a60;
      puStack_50 = puVar1;
      goto LAB_10256560c;
    }
  }
  else if (param_1 == 1) {
    if (param_2 != 0) {
      func_0x000107c420a8(param_2);
    }
    FUN_1025647cc();
  }
  else {
    func_0x000107c56c28(param_4);
    if (param_2 != 0) {
      func_0x000107c420a8(param_2);
    }
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102565688; end: 102565777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102565688(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ea5690;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c42b20(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102565778; end: 102565963;  */

void FUN_102565778(undefined8 *param_1,ulong param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  
  func_0x000107c5eff4();
  uVar3 = param_2;
  FUN_10255ffa4();
  lVar6 = *(long *)(uVar3 + 0x10);
  func_0x000107c6142c();
  uStack_b0 = 0;
  uStack_a8 = 0;
  if ((long)param_2 < lVar6) {
    func_0x000107c5efe4();
    uVar4 = uVar3;
    FUN_10255ffa4();
    uVar7 = uVar4;
    func_0x000107c5eff4();
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102565950);
      (*pcVar2)();
    }
    if (*(ulong *)(uVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102565954);
      (*pcVar2)();
    }
    lVar6 = uVar4 + uVar7 * 0x10;
    uVar7 = *(ulong *)(lVar6 + 0x20);
    uVar1 = *(undefined1 *)(lVar6 + 0x28);
    FUN_10255ee50(uVar7,uVar1);
    func_0x000107c6142c(uVar4);
    lVar6 = *(long *)(uVar7 + 0x10);
    FUN_10255ee90(uVar7,uVar1);
    if ((long)uVar3 < lVar6) {
      FUN_10255ffa4();
      uVar3 = uVar7;
      func_0x000107c5eff4();
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102565958);
        (*pcVar2)();
      }
      if (*(ulong *)(uVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10256595c);
        (*pcVar2)();
      }
      lVar6 = uVar7 + uVar3 * 0x10;
      lVar8 = *(long *)(lVar6 + 0x20);
      uVar1 = *(undefined1 *)(lVar6 + 0x28);
      FUN_10255ee50(lVar8,uVar1);
      func_0x000107c6142c();
      func_0x000107c5efe4();
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102565960);
        (*pcVar2)();
      }
      if (*(ulong *)(lVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102565964);
        (*pcVar2)();
      }
      lVar6 = lVar8 + uVar7 * 0x60;
      uStack_a8 = *(undefined8 *)(lVar6 + 0x28);
      uStack_b0 = *(undefined8 *)(lVar6 + 0x20);
      uStack_98 = *(undefined8 *)(lVar6 + 0x38);
      uStack_a0 = *(undefined8 *)(lVar6 + 0x30);
      uStack_88 = *(undefined8 *)(lVar6 + 0x48);
      uStack_90 = *(undefined8 *)(lVar6 + 0x40);
      uStack_78 = *(undefined8 *)(lVar6 + 0x58);
      uStack_80 = *(undefined8 *)(lVar6 + 0x50);
      uStack_70 = *(undefined8 *)(lVar6 + 0x60);
      uStack_5f = (undefined7)*(undefined8 *)(lVar6 + 0x71);
      uStack_58 = (undefined1)((ulong)*(undefined8 *)(lVar6 + 0x71) >> 0x38);
      uStack_60 = (undefined1)((ulong)*(undefined8 *)(lVar6 + 0x69) >> 0x38);
      uStack_68 = (undefined1)*(undefined8 *)(lVar6 + 0x68);
      uStack_67 = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x68) >> 8);
      FUN_10255ee54(&uStack_b0,auStack_110);
      FUN_10255ee90(lVar8,uVar1);
      uVar9 = CONCAT71(uStack_67,uStack_68);
      uVar5 = CONCAT71(uStack_5f,uStack_60);
    }
    else {
      uVar5 = 0;
      uStack_58 = 0xfe;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uVar9 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
    }
  }
  else {
    uVar5 = 0;
    uStack_58 = 0xfe;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar9 = 0;
  }
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[9] = uVar9;
  param_1[8] = uStack_70;
  param_1[10] = uVar5;
  *(undefined1 *)(param_1 + 0xb) = uStack_58;
  return;
}



/* Entry: 102565964; end: 1025659ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102565964(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea5720;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea5720);
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
    puVar3 = PTR_PTR_1126b1c10;
    func_0x000107c610f8();
    func_0x000107c495dc(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c615e8(uVar4);
    lVar2 = *(long *)(unaff_x20 + lVar1);
    if (lVar2 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_attachUI__1125a0c08,param_1);
  return;
}



/* Entry: 1025659f0; end: 102565a3f; -[_TtC39SCLocationSharingSettingsImplementation29MainSettingsPageBusinessLogic permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Possible PIC construction at 0x000102565a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102565a2c) */

void FUN_1025659f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102565964(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102565a40; end: 102565a77; -[_TtC39SCLocationSharingSettingsImplementation29MainSettingsPageBusinessLogic permissionsManagerModalPresentationContainer] */

void FUN_102565a40(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  func_0x000107c610f8(PTR_PTR_1126b1c10);
  func_0x000107c495dc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102565a78; end: 102565ac3; -[_TtC39SCLocationSharingSettingsImplementation29MainSettingsPageBusinessLogic shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102565a78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea5728);
  *(undefined8 *)(param_1 + _DAT_112ea5728) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102565ac4; end: 102565ae3;  */

void FUN_102565ac4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102565ae4; end: 102565aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102565ae4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112ea5698);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ea56a8);
    uVar2 = ((undefined8 *)(lVar1 + _DAT_112ea56a8))[1];
    func_0x000107c615f0(uVar5);
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar3,uVar2);
    func_0x000107c6142c(uVar2);
    uVar2 = uVar5;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ea5650);
    *(undefined8 *)(lVar1 + _DAT_112ea5650) = uVar2;
    func_0x000107c61170(uVar3);
    lVar4 = lVar1;
    func_0x000107c424e8();
    func_0x000107c61180();
    (**(code **)(lVar4 + 0x10))();
    func_0x000107c60bd0(lVar4);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102565aec; end: 102565c87;  */

ulong FUN_102565aec(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102565bbc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102565bc0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103a29a98(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103a29a98(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f0a98b0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102565c88);
  (*pcVar2)();
}



/* Entry: 102565c88; end: 102565d67;  */

void FUN_102565c88(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_1;
  uVar5 = param_2;
  FUN_102571508();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar5 & 1;
  uVar3 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102565d38);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < (long)uVar3) {
    uVar4 = (uint)param_2 & 1;
    FUN_102565ea8();
    FUN_102571508();
    uVar2 = uVar3;
    if (((uint)uVar5 & 1) != (uVar4 & 1)) {
      func_0x000107c60624(&UNK_110520fd8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102565d0c);
      (*pcVar1)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_102565d68();
    lVar6 = *unaff_x20;
    goto joined_r0x000102565d4c;
  }
  lVar6 = *unaff_x20;
joined_r0x000102565d4c:
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
    return;
  }
  lVar8 = lVar6 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1025713e4);
    (*pcVar1)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return;
}



/* Entry: 102565d68; end: 102565ea7;  */

void FUN_102565d68(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112ea5ad0,&UNK_10dab9170);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x40);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102565ea8);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_102565e88;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
    } while( true );
  }
LAB_102565e88:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 102565ea8; end: 10256610b;  */

void FUN_102565ea8(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  ulong *puVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112ea5ad0;
  func_0x0001000285a8(0x112ea5ad0,&UNK_10dab9170);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar13);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1025660d8:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *puVar14;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102566108);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar11 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_1025660d8;
        }
        uVar11 = puVar14[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar15 = lVar7;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar5 = 0;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10256610c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 10256610c; end: 102566127;  */

void FUN_10256610c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102566128();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102566128; end: 10256623f;  */

undefined * FUN_102566128(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102566240);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112ea59c0;
    func_0x0001000285a8(0x112ea59c0,&UNK_10dab8c60);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x60) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110520c38);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x60 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 102566240; end: 10256633b;  */

void FUN_102566240(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    func_0x0001016bcd1c();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,PTR___sSSN_11034da80);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_1025669d4(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_102566e58(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 10256633c; end: 102566423;  */

/* WARNING: Possible PIC construction at 0x0001025663bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256655c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025663c0) */
/* WARNING: Removing unreachable block (ram,0x000102566560) */

void FUN_10256633c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *unaff_x20;
  long lVar9;
  
  lVar6 = unaff_x20[2];
  uVar8 = (ulong)unaff_x20[3] >> 1;
  lVar7 = uVar8 - lVar6;
  if (SBORROW8(uVar8,lVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102566404);
    (*pcVar3)();
  }
  if ((unaff_x20[3] & 1) != 0) {
    puVar1 = (undefined *)*unaff_x20;
    lVar2 = unaff_x20[1];
    func_0x000107c605fc(0);
    puVar5 = puVar1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(puVar1);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar9 = *(long *)(puVar5 + 0x10);
    if ((undefined *)(lVar2 + lVar6 * 0x10 + lVar7 * 0x10) != puVar5 + lVar9 * 0x10 + 0x20)
    goto code_r0x000107c61574;
    uVar8 = *(ulong *)(puVar5 + 0x18);
    func_0x000107c61574();
    lVar9 = (uVar8 >> 1) - lVar9;
    bVar4 = SCARRY8(lVar7,lVar9);
    lVar7 = lVar7 + lVar9;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102566424);
      (*pcVar3)();
    }
  }
  if (param_1 + 1 <= lVar7) {
    return;
  }
  lVar7 = param_1 + 1;
  lVar6 = param_1;
  FUN_102566578(param_1,lVar7,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  FUN_102566724();
  FUN_102566734(&stack0xffffffffffffffc8,param_1,0,lVar6,lVar7);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 102566424; end: 102566507;  */

void FUN_102566424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined *puVar7;
  ulong uVar8;
  
  lVar2 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar8 = uVar3 >> 1;
  if (SBORROW8(uVar8,lVar2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1025664f8);
    (*pcVar5)();
  }
  lVar4 = (param_1 + 1) - (uVar8 - lVar2);
  if (SBORROW8(param_1 + 1,uVar8 - lVar2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1025664fc);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    puVar7 = (undefined *)*unaff_x20;
    func_0x000107c605fc(0);
    puVar6 = puVar7;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c615e8(puVar7);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    if (SCARRY8(*(long *)(puVar6 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102566500);
      (*pcVar5)();
    }
    *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + lVar4;
    func_0x000107c61574();
    if (SCARRY8(uVar8,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102566504);
      (*pcVar5)();
    }
    if ((long)(uVar8 + lVar4) < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102566508);
      (*pcVar5)();
    }
    unaff_x20[3] = uVar3 & 1 | (uVar8 + lVar4) * 2;
  }
  puVar1 = (undefined8 *)(unaff_x20[1] + lVar2 * 0x10 + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 102566508; end: 102566577;  */

/* WARNING: Possible PIC construction at 0x00010256655c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102566560) */

void FUN_102566508(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x20;
  long lStack_38;
  
  lVar2 = param_1 + 1;
  lVar1 = param_1;
  FUN_102566578(param_1,lVar2,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  lStack_38 = lVar1;
  FUN_102566724();
  FUN_102566734(&lStack_38,param_1,0,lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar2);
  return;
}



/* Entry: 102566578; end: 102566723;  */

undefined *
FUN_102566578(long param_1,long param_2,undefined *param_3,long param_4,long param_5,ulong param_6)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (param_6 >> 1) - param_5;
  if (SBORROW8(param_6 >> 1,param_5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102566708);
    (*pcVar2)();
  }
  if ((param_6 & 1) == 0) {
    if (param_2 <= lVar8) goto LAB_1025666e0;
  }
  else {
    func_0x000107c605fc(0);
    puVar5 = param_3;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(param_3);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar9 = *(long *)(puVar5 + 0x10);
    puVar1 = (undefined *)(param_4 + param_5 * 0x10 + lVar8 * 0x10);
    if (puVar1 == puVar5 + lVar9 * 0x10 + 0x20) {
      uVar6 = *(ulong *)(puVar5 + 0x18);
      func_0x000107c61574();
      lVar9 = (uVar6 >> 1) - lVar9;
      lVar7 = lVar8 + lVar9;
      if (SCARRY8(lVar8,lVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10256671c);
        (*pcVar2)();
      }
    }
    else {
      func_0x000107c61574();
      lVar7 = lVar8;
    }
    puVar5 = param_3;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (param_2 <= lVar7) {
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c615e8(param_3);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar9 = *(long *)(puVar5 + 0x10);
      if (puVar1 == puVar5 + lVar9 * 0x10 + 0x20) {
        uVar6 = *(ulong *)(puVar5 + 0x18);
        func_0x000107c61574();
        lVar9 = (uVar6 >> 1) - lVar9;
        bVar3 = SCARRY8(lVar8,lVar9);
        lVar8 = lVar8 + lVar9;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102566724);
          (*pcVar2)();
        }
      }
      else {
        func_0x000107c61574();
      }
      goto LAB_1025666e0;
    }
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(param_3);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar9 = *(long *)(puVar5 + 0x10);
    if (puVar1 == puVar5 + lVar9 * 0x10 + 0x20) {
      uVar6 = *(ulong *)(puVar5 + 0x18);
      func_0x000107c61574();
      lVar9 = (uVar6 >> 1) - lVar9;
      bVar3 = SCARRY8(lVar8,lVar9);
      lVar8 = lVar8 + lVar9;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102566720);
        (*pcVar2)();
      }
    }
    else {
      func_0x000107c61574();
    }
  }
  if (lVar8 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102566718);
    (*pcVar2)();
  }
  lVar8 = lVar8 << 1;
LAB_1025666e0:
  if (lVar8 <= param_2) {
    lVar8 = param_2;
  }
  if (lVar8 <= param_1) {
    lVar8 = param_1;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar8 != 0) {
    puVar5 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar5;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(long *)(puVar5 + 0x10) = param_1;
    *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar5;
}



/* Entry: 102566724; end: 102566733;  */

undefined1  [16] FUN_102566724(void)

{
  return ZEXT816(0x1025669d0);
}



/* Entry: 102566734; end: 1025669cf;  */

void FUN_102566734(long *param_1,long param_2,long param_3,code *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar6 = ((ulong)unaff_x20[3] >> 1) - unaff_x20[2];
  if (SBORROW8((ulong)unaff_x20[3] >> 1,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x102566998);
    (*pcVar8)();
  }
  lVar14 = *param_1;
  lVar7 = *(long *)(lVar14 + 0x10) - param_2;
  if (SBORROW8(*(long *)(lVar14 + 0x10),param_2)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10256699c);
    (*pcVar8)();
  }
  lVar11 = lVar7 - param_3;
  if (SBORROW8(lVar7,param_3)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669a0);
    (*pcVar8)();
  }
  if (SBORROW8(lVar6,param_2)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669a4);
    (*pcVar8)();
  }
  lVar7 = (lVar6 - param_2) - lVar11;
  if (SBORROW8(lVar6 - param_2,lVar11)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669a8);
    (*pcVar8)();
  }
  uVar1 = lVar14 + 0x20;
  lVar13 = uVar1 + param_2 * 0x10;
  uVar3 = lVar13 + param_3 * 0x10;
  lVar9 = lVar6;
  FUN_10256746c();
  if (lVar9 == 0) {
    lVar15 = unaff_x20[2];
    lVar6 = lVar15 + param_2;
    if (SCARRY8(lVar15,param_2)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669bc);
      (*pcVar8)();
    }
    if (lVar6 < lVar15) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669c0);
      (*pcVar8)();
    }
    if (SBORROW8(lVar6,lVar15)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669c4);
      (*pcVar8)();
    }
    lVar13 = unaff_x20[1];
    func_0x000107c6140c(uVar1,lVar13 + lVar15 * 0x10,lVar6 - lVar15,PTR___sSSN_11034da80);
    (*param_4)(uVar1 + (lVar6 - lVar15) * 0x10,param_3);
    lVar11 = lVar6 + lVar7;
    if (SCARRY8(lVar6,lVar7)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669c8);
      (*pcVar8)();
    }
    uVar12 = (ulong)unaff_x20[3] >> 1;
    if ((long)uVar12 < lVar11) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669cc);
      (*pcVar8)();
    }
    if (SBORROW8(uVar12,lVar11)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669d0);
      (*pcVar8)();
    }
    func_0x000107c6140c(uVar3,lVar13 + lVar11 * 0x10,uVar12 - lVar11,PTR___sSSN_11034da80);
  }
  else {
    lVar15 = unaff_x20[2];
    uVar12 = unaff_x20[1] + lVar15 * 0x10;
    uVar4 = uVar12 + param_2 * 0x10;
    lVar2 = lVar9 + 0x20;
    lVar10 = uVar12 - lVar2;
    lVar5 = lVar10 + 0xf;
    if (-1 < lVar10) {
      lVar5 = lVar10;
    }
    func_0x000107c61408(lVar2,lVar5 >> 4,PTR___sSSN_11034da80);
    if ((uVar1 != uVar12) || (uVar4 <= uVar1)) {
      func_0x000107c610b8(uVar1,uVar12,param_2 << 4);
    }
    func_0x000107c61408(uVar4,lVar7,PTR___sSSN_11034da80);
    (*param_4)(lVar13,param_3);
    uVar4 = uVar4 + lVar7 * 0x10;
    if ((uVar3 != uVar4) || (uVar4 + lVar11 * 0x10 <= uVar3)) {
      func_0x000107c610b8(uVar3,uVar4,lVar11 * 0x10);
    }
    lVar6 = uVar12 + lVar6 * 0x10;
    lVar11 = (lVar2 + *(long *)(lVar9 + 0x10) * 0x10) - lVar6;
    lVar7 = lVar11 + 0xf;
    if (-1 < lVar11) {
      lVar7 = lVar11;
    }
    func_0x000107c61408(lVar6,lVar7 >> 4,PTR___sSSN_11034da80);
    *(undefined8 *)(lVar9 + 0x10) = 0;
    func_0x000107c61574(lVar9);
  }
  func_0x000107c615e8(*unaff_x20);
  if (SBORROW8(0,lVar15)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669ac);
    (*pcVar8)();
  }
  lVar6 = lVar15 + *(long *)(lVar14 + 0x10);
  if (SCARRY8(lVar15,*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669b0);
    (*pcVar8)();
  }
  if (lVar6 < lVar15) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669b4);
    (*pcVar8)();
  }
  if (-1 < lVar6) {
    *unaff_x20 = lVar14;
    unaff_x20[1] = uVar1 + lVar15 * -0x10;
    unaff_x20[2] = lVar15;
    unaff_x20[3] = lVar6 * 2 | 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(lVar14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1025669b8);
  (*pcVar8)();
}



/* Entry: 1025669d0; end: 1025669d3;  */

void FUN_1025669d0(void)

{
  return;
}



/* Entry: 1025669d4; end: 102566e57;  */

void FUN_1025669d4(undefined **param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x21;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puVar21 = PTR___sSSN_11034da80;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = param_3[1];
  if (0 < lVar11) {
    ppuVar4 = param_1;
    lVar15 = 0;
    do {
      lVar18 = lVar15 + 1;
      ppuVar6 = ppuVar4;
      if (lVar18 < lVar11) {
        puVar17 = (undefined8 *)(*param_3 + lVar18 * 0x10);
        uStack_70 = *puVar17;
        uStack_68 = puVar17[1];
        lVar19 = lVar15 * 0x10;
        puVar20 = (undefined8 *)(*param_3 + lVar19);
        puVar17 = puVar20 + 5;
        puStack_80 = (undefined *)*puVar20;
        uStack_78 = puVar20[1];
        func_0x000100e8b654();
        ppuVar5 = &puStack_80;
        func_0x000107c60204(ppuVar5,puVar21,puVar21,ppuVar4,ppuVar4);
        ppuVar6 = ppuVar5;
        lVar14 = lVar15 + 2;
        do {
          lVar22 = lVar14;
          lVar18 = lVar11;
          if (lVar11 == lVar22) break;
          uStack_70 = puVar17[-1];
          uStack_68 = *puVar17;
          puStack_80 = (undefined *)puVar17[-3];
          uStack_78 = puVar17[-2];
          ppuVar6 = &puStack_80;
          func_0x000107c60204(ppuVar6,puVar21,puVar21,ppuVar4,ppuVar4);
          puVar17 = puVar17 + 2;
          lVar14 = lVar22 + 1;
          lVar18 = lVar22;
        } while ((ppuVar5 == (undefined **)0xffffffffffffffff) !=
                 (ppuVar6 != (undefined **)0xffffffffffffffff));
        if (ppuVar5 == (undefined **)0xffffffffffffffff) {
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e34);
            (*pcVar2)();
          }
          if (lVar15 < lVar18) {
            lVar22 = *param_3;
            lVar13 = lVar18 << 4;
            lVar14 = lVar18;
            lVar11 = lVar15;
            do {
              lVar14 = lVar14 + -1;
              if (lVar11 != lVar14) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e4c);
                  (*pcVar2)();
                }
                puVar17 = (undefined8 *)(lVar22 + lVar19);
                lVar1 = lVar22 + lVar13;
                uVar10 = *puVar17;
                uVar12 = puVar17[1];
                uVar23 = *(undefined8 *)(lVar1 + -0x10);
                puVar17[1] = *(undefined8 *)(lVar1 + -8);
                *puVar17 = uVar23;
                *(undefined8 *)(lVar1 + -0x10) = uVar10;
                *(undefined8 *)(lVar1 + -8) = uVar12;
              }
              lVar11 = lVar11 + 1;
              lVar13 = lVar13 + -0x10;
              lVar19 = lVar19 + 0x10;
            } while (lVar11 < lVar14);
          }
        }
      }
      lVar11 = param_3[1];
      lVar19 = lVar18;
      if (lVar18 < lVar11) {
        if (SBORROW8(lVar18,lVar15)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e28);
          (*pcVar2)();
        }
        if (lVar18 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e2c);
            (*pcVar2)();
          }
          lVar14 = lVar15 + param_4;
          if (lVar11 <= lVar15 + param_4) {
            lVar14 = lVar11;
          }
          if (lVar14 < lVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e30);
            (*pcVar2)();
          }
          if (lVar18 != lVar14) {
            lVar22 = *param_3;
            func_0x000100e8b654();
            puVar17 = (undefined8 *)(lVar22 + lVar18 * 0x10);
            lVar11 = lVar15 - lVar18;
            do {
              puVar20 = (undefined8 *)(lVar22 + lVar18 * 0x10);
              uVar10 = *puVar20;
              uVar12 = puVar20[1];
              lVar19 = lVar11;
              puVar20 = puVar17;
              do {
                puStack_80 = (undefined *)puVar20[-2];
                uStack_78 = puVar20[-1];
                ppuVar4 = &puStack_80;
                uStack_70 = uVar10;
                uStack_68 = uVar12;
                func_0x000107c60204(ppuVar4,puVar21,puVar21,ppuVar6,ppuVar6);
                if (ppuVar4 != (undefined **)0xffffffffffffffff) break;
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e38);
                  (*pcVar2)();
                }
                uVar10 = *puVar20;
                uVar12 = puVar20[1];
                puVar20[1] = puVar20[-1];
                *puVar20 = puVar20[-2];
                puVar20[-1] = uVar12;
                puVar20 = puVar20 + -2;
                *puVar20 = uVar10;
                bVar3 = lVar19 != -1;
                lVar19 = lVar19 + 1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              puVar17 = puVar17 + 2;
              lVar11 = lVar11 + -1;
              lVar19 = lVar14;
            } while (lVar18 != lVar14);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar19 < lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e1c);
        (*pcVar2)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar16 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar16 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar16 + 1;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x28) = lVar19;
      puStack_58 = puVar9;
      if (*param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e50);
        (*pcVar2)();
      }
      ppuVar4 = &puStack_58;
      FUN_102566f58(ppuVar4,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102566dec;
      lVar11 = param_3[1];
      lVar15 = lVar19;
    } while (lVar19 < lVar11);
  }
  puVar9 = puStack_58;
  puVar21 = *param_1;
  if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e58);
    (*pcVar2)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar16 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar16) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e54);
      (*pcVar2)();
    }
    lVar19 = uVar16 - 1;
    lVar18 = *(long *)(puVar9 + uVar16 * 0x10);
    lVar15 = *(long *)(puVar9 + lVar19 * 0x10 + 0x28);
    FUN_1025671c0(lVar11 + lVar18 * 0x10,lVar11 + *(long *)(puVar9 + lVar19 * 0x10 + 0x20) * 0x10,
                  lVar11 + lVar15 * 0x10,puVar21);
    if (unaff_x21 != 0) break;
    if (lVar15 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e20);
      (*pcVar2)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar16 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102566e24);
      (*pcVar2)();
    }
    *(long *)(puVar9 + uVar16 * 0x10) = lVar18;
    *(long *)((long)(puVar9 + uVar16 * 0x10) + 8) = lVar15;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar19);
    puVar9 = puStack_58;
    uVar16 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_102566dec:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 102566e58; end: 102566f57;  */

void FUN_102566e58(long param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    lVar4 = param_1;
    func_0x000100e8b654();
    puVar1 = PTR___sSSN_11034da80;
    param_1 = param_1 - param_3;
    puVar6 = (undefined8 *)(lVar8 + param_3 * 0x10);
    do {
      puVar7 = (undefined8 *)(lVar8 + param_3 * 0x10);
      uStack_70 = *puVar7;
      uStack_68 = puVar7[1];
      puVar7 = puVar6;
      lVar9 = param_1;
      do {
        uStack_80 = puVar7[-2];
        uStack_78 = puVar7[-1];
        puVar5 = &uStack_80;
        func_0x000107c60204(puVar5,puVar1,puVar1,lVar4,lVar4);
        if (puVar5 != (undefined8 *)0xffffffffffffffff) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102566f58);
          (*pcVar2)();
        }
        uStack_70 = *puVar7;
        uStack_68 = puVar7[1];
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7[-1] = uStack_68;
        puVar7 = puVar7 + -2;
        *puVar7 = uStack_70;
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102566f58; end: 1025671bf;  */

undefined8 FUN_102566f58(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10256702c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1025671a8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102567090:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102567198);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1025671a0);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102567180);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102567184);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10256718c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102567194);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_10256702c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102567188);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102567190);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10256719c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1025671a4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102567090;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1025671ac);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102567174);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1025671c0);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1025671c0(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102567178);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10256717c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1025671c0; end: 10256746b;  */

undefined8
FUN_1025671c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = (long)param_2 - (long)param_1;
  lVar6 = lVar12 + 0xf;
  if (-1 < lVar12) {
    lVar6 = lVar12;
  }
  lVar6 = lVar6 >> 4;
  lVar13 = (long)param_3 - (long)param_2;
  lVar9 = lVar13 + 0xf;
  if (-1 < lVar13) {
    lVar9 = lVar13;
  }
  lVar9 = lVar9 >> 4;
  if (lVar6 < lVar9) {
    if (((param_4 < param_1) || (param_1 + lVar6 * 2 <= param_4)) ||
       (puVar4 = param_1, param_4 != param_1)) {
      puVar4 = param_4;
      func_0x000107c610b8(param_4,param_1,lVar6 << 4);
    }
    puVar10 = param_4 + lVar6 * 2;
    puVar5 = param_1;
    if ((0xf < lVar12) && (param_2 < param_3)) {
      func_0x000100e8b654();
      puVar2 = PTR___sSSN_11034da80;
      do {
        uStack_70 = *param_2;
        uStack_68 = param_2[1];
        uStack_80 = *param_4;
        uStack_78 = param_4[1];
        puVar3 = &uStack_80;
        func_0x000107c60204(puVar3,puVar2,puVar2,puVar4,puVar4);
        if (puVar3 == (undefined8 *)0xffffffffffffffff) {
          puVar11 = param_2 + 2;
          puVar7 = param_4;
          puVar3 = param_2;
        }
        else {
          puVar11 = param_2;
          puVar7 = param_4 + 2;
          puVar3 = param_4;
        }
        param_4 = puVar7;
        param_2 = puVar11;
        if (puVar5 != puVar3) {
          uVar14 = *puVar3;
          puVar5[1] = puVar3[1];
          *puVar5 = uVar14;
        }
        puVar5 = puVar5 + 2;
      } while ((param_4 < puVar10) && (param_2 < param_3));
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar9 * 2 <= param_4)) ||
       (puVar4 = param_1, param_4 != param_2)) {
      puVar4 = param_4;
      func_0x000107c610b8(param_4,param_2,lVar9 << 4);
    }
    puVar3 = param_4 + lVar9 * 2;
    puVar10 = puVar3;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0xf < lVar13)) {
      func_0x000100e8b654();
      do {
        puVar7 = param_2 + -2;
        puVar11 = param_3;
        while( true ) {
          param_3 = puVar11 + -2;
          puVar10 = puVar3 + -2;
          uStack_70 = *puVar10;
          uStack_68 = puVar3[-1];
          uStack_80 = param_2[-2];
          uStack_78 = param_2[-1];
          puVar5 = &uStack_80;
          func_0x000107c60204(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar4,puVar4);
          if (puVar5 == (undefined8 *)0xffffffffffffffff) break;
          if (puVar11 != puVar3) {
            uVar14 = *puVar10;
            puVar11[-1] = puVar3[-1];
            *param_3 = uVar14;
          }
          puVar5 = param_2;
          puVar3 = puVar10;
          puVar11 = param_3;
          if (puVar10 <= param_4) goto LAB_102567408;
        }
        if (puVar11 != param_2) {
          uVar14 = *puVar7;
          puVar11[-1] = param_2[-1];
          *param_3 = uVar14;
        }
        puVar10 = puVar3;
        puVar5 = puVar7;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar3));
    }
  }
LAB_102567408:
  uVar8 = (long)puVar10 - (long)param_4;
  uVar1 = uVar8 + 0xf;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  if ((puVar5 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 10256746c; end: 102567683;  */

void FUN_10256746c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *unaff_x20;
  long lVar9;
  
  iVar4 = (int)*unaff_x20;
  func_0x000107c6154c();
  if (iVar4 != 0) {
    lVar6 = unaff_x20[2];
    uVar8 = (ulong)unaff_x20[3] >> 1;
    lVar2 = uVar8 - lVar6;
    if (SBORROW8(uVar8,lVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1025675a4);
      (*pcVar3)();
    }
    puVar1 = (undefined *)*unaff_x20;
    lVar6 = unaff_x20[1] + lVar6 * 0x10;
    lVar7 = lVar2;
    if ((unaff_x20[3] & 1) != 0) {
      func_0x000107c605fc(0);
      puVar5 = puVar1;
      func_0x000107c615f0();
      func_0x000107c61480();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c615e8(puVar1);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar9 = *(long *)(puVar5 + 0x10);
      if ((undefined *)(lVar6 + lVar2 * 0x10) == puVar5 + lVar9 * 0x10 + 0x20) {
        uVar8 = *(ulong *)(puVar5 + 0x18);
        func_0x000107c61574();
        lVar9 = (uVar8 >> 1) - lVar9;
        lVar7 = lVar2 + lVar9;
        if (SCARRY8(lVar2,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1025675c8);
          (*pcVar3)();
        }
      }
      else {
        func_0x000107c61574();
      }
    }
    if (param_1 <= lVar7) {
      func_0x000107c605fc(0);
      puVar5 = puVar1;
      func_0x000107c615f0();
      func_0x000107c61480();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c615e8(puVar1);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar6 = lVar6 - (long)puVar5;
      lVar7 = lVar6 + -0x20;
      lVar6 = lVar6 + -0x11;
      if (-1 < lVar7) {
        lVar6 = lVar7;
      }
      lVar7 = lVar2 + (lVar6 >> 4);
      if (SCARRY8(lVar2,lVar6 >> 4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1025675a8);
        (*pcVar3)();
      }
      if (lVar7 < *(long *)(puVar5 + 0x10)) {
        func_0x0001025675c8(lVar7,*(long *)(puVar5 + 0x10),0);
      }
    }
  }
  return;
}



/* Entry: 102567684; end: 102567883;  */

void FUN_102567684(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long alStack_60 [2];
  
  lVar1 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000107c5faec(*(undefined8 *)PTR__UIApplicationOpenSettingsURLString_110345a80);
  func_0x000107c5edd0(puVar10);
  func_0x000107c6142c(puVar3);
  puVar2 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_10256806c(puVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcVar12 = *(code **)(lVar13 + 0x20);
    (*pcVar12)(lVar7,puVar10,lVar1);
    (**(code **)(lVar13 + 0x10))(lVar8,lVar7,lVar1);
    uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar11 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
    puVar3 = &UNK_110520688;
    func_0x000107c613fc(&UNK_110520688,uVar11 + lVar9,uVar6 | 7);
    (*pcVar12)(puVar3 + uVar11,lVar8,lVar1);
    puVar4 = &UNK_1105206b0;
    func_0x000107c613fc(&UNK_1105206b0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = &UNK_10dab8c18;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined **)(lVar7 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar5 = 0x51;
    func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab8c20,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
    (**(code **)(lVar13 + 8))(lVar7,lVar1);
  }
  return;
}


