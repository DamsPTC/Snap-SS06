/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102575f4c; end: 102575f97;  */

void FUN_102575f4c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ed90(param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c4b788(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102575f98; end: 102575fb3;  */

void FUN_102575f98(long param_1,long param_2)

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



/* Entry: 102575fb4; end: 102576023;  */

undefined8 FUN_102575fb4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1043101ec)(param_2,param_1);
  return param_2;
}



/* Entry: 102576024; end: 10257647f;  */

undefined * FUN_102576024(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102576144);
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
    puVar2 = (undefined *)0x112ea6538;
    func_0x0001000285a8(0x112ea6538,&UNK_10dab9230);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x38) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110520cb0);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x38 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 102576480; end: 1025764cb;  */

undefined8 FUN_102576480(long param_1)

{
  code *pcVar1;
  long lStack_18;
  
  if (param_1 + 1U < 10) {
    return *(undefined8 *)(&UNK_10dab9240 + (param_1 + 1U) * 8);
  }
  lStack_18 = param_1;
  func_0x000107c60614(&UNK_1106a3440,&lStack_18,&UNK_1106a3440,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025764cc);
  (*pcVar1)();
}



/* Entry: 1025764cc; end: 102576803;  */

ulong FUN_1025764cc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010257a1b8();
  uVar2 = 0;
  lVar3 = 1;
  func_0x000102576364(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar1 = *(ulong *)(uVar2 + 0x10);
  lVar4 = uVar1 + 1;
  uVar6 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    lVar3 = lVar4;
    func_0x000102576364(uVar6,lVar4,1,uVar2);
  }
  *(long *)(uVar6 + 0x10) = lVar4;
  lVar4 = uVar6 + uVar1 * 0x30;
  *(undefined8 *)(lVar4 + 0x28) = 0xed00007974696c69;
  *(undefined8 *)(lVar4 + 0x20) = 0x6269737365636341;
  *(undefined8 *)(lVar4 + 0x30) = param_1;
  *(undefined8 *)(lVar4 + 0x38) = param_2;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  uVar2 = uVar6;
  func_0x00010257a284();
  uVar1 = *(ulong *)(uVar6 + 0x10);
  uVar5 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x000102576364(uVar5,uVar1 + 1,1,uVar6);
  }
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  lVar4 = uVar5 + uVar1 * 0x30;
  *(undefined8 *)(lVar4 + 0x28) = 0xef676e6968736172;
  *(undefined8 *)(lVar4 + 0x20) = 0x4320736920707041;
  *(ulong *)(lVar4 + 0x30) = uVar2;
  *(long *)(lVar4 + 0x38) = lVar3;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  func_0x00010257a350();
  uVar1 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x000102576364(uVar6,uVar1 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
  lVar4 = uVar6 + uVar1 * 0x30;
  *(undefined8 *)(lVar4 + 0x20) = 0xd000000000000011;
  *(undefined8 *)(lVar4 + 0x28) = 0x800000010f0aa000;
  *(ulong *)(lVar4 + 0x30) = uVar2;
  *(long *)(lVar4 + 0x38) = lVar3;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  func_0x00010257a41c();
  uVar1 = *(ulong *)(uVar6 + 0x10);
  uVar5 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x000102576364(uVar5,uVar1 + 1,1,uVar6);
  }
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  lVar4 = uVar5 + uVar1 * 0x30;
  *(undefined8 *)(lVar4 + 0x28) = 0xea00000000006564;
  *(undefined8 *)(lVar4 + 0x20) = 0x6f4d2074736f6847;
  *(ulong *)(lVar4 + 0x30) = uVar2;
  *(long *)(lVar4 + 0x38) = lVar3;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  func_0x00010257a4e8();
  uVar1 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x000102576364(uVar6,uVar1 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
  lVar4 = uVar6 + uVar1 * 0x30;
  *(undefined8 *)(lVar4 + 0x20) = 0xd000000000000011;
  *(undefined8 *)(lVar4 + 0x28) = 0x800000010f0aa020;
  *(ulong *)(lVar4 + 0x30) = uVar2;
  *(long *)(lVar4 + 0x38) = lVar3;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  func_0x00010257a5b4();
  uVar1 = *(ulong *)(uVar6 + 0x10);
  uVar5 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x000102576364(uVar5,uVar1 + 1,1,uVar6);
  }
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  lVar4 = uVar5 + uVar1 * 0x30;
  *(undefined8 *)(lVar4 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(lVar4 + 0x28) = 0x800000010f0aa040;
  *(ulong *)(lVar4 + 0x30) = uVar2;
  *(long *)(lVar4 + 0x38) = lVar3;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  func_0x00010257a680();
  uVar1 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x000102576364(uVar6,uVar1 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
  lVar4 = uVar6 + uVar1 * 0x30;
  *(undefined8 *)(lVar4 + 0x28) = 0xed00006e6f697461;
  *(undefined8 *)(lVar4 + 0x20) = 0x636f4c2072756f59;
  *(ulong *)(lVar4 + 0x30) = uVar2;
  *(long *)(lVar4 + 0x38) = lVar3;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  return uVar6;
}



/* Entry: 102576804; end: 10257684f;  */

void FUN_102576804(void)

{
  func_0x000103a2e590(FUN_102565ae4);
  return;
}



/* Entry: 102576850; end: 102576853; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions bitmojiAvatarBuilderCompleted] */

/* WARNING: Possible PIC construction at 0x000102575ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575ea8) */
/* WARNING: Removing unreachable block (ram,0x000102575ec4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102576850(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102576854; end: 102576857; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions bitmojiAvatarBuilderCancelled] */

/* WARNING: Possible PIC construction at 0x000102575ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575ea8) */
/* WARNING: Removing unreachable block (ram,0x000102575ec4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102576854(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102576858; end: 1025769af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102576858(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  puVar1 = &UNK_110521818;
  func_0x000107c613fc(&UNK_110521818,0x18,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  puVar2 = &UNK_110521840;
  func_0x000107c613fc(&UNK_110521840,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab9330;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  uVar5 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 0x51;
  func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab9338,puVar2,uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea6548);
  puVar1 = &UNK_1105214d0;
  func_0x000107c613fc(&UNK_1105214d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,unaff_x20);
  pcStack_40 = FUN_102577f38;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102576ac0;
  puStack_48 = &UNK_110521858;
  ppuVar4 = &puStack_60;
  puStack_38 = puVar1;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_38);
  func_0x000107c50990(uVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1025769b0; end: 102576a1b;  */

void FUN_1025769b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102577f40,uVar1,uVar2);
  return;
}



/* Entry: 102576a1c; end: 102576a5f;  */

void FUN_102576a1c(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000102576a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 102576a60; end: 102576abf;  */

void FUN_102576a60(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5aea0(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102576ac0; end: 102576b07;  */

void FUN_102576ac0(long param_1,undefined8 param_2)

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



/* Entry: 102576b08; end: 102576b73;  */

void FUN_102576b08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102576b74,uVar1,uVar2);
  return;
}



/* Entry: 102576b74; end: 102576bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102576b74(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  uVar2 = lVar1 + _DAT_112ea6540;
  func_0x000107c61618();
  if (uVar2 == 0) {
    bVar4 = true;
  }
  else {
    uVar3 = uVar2;
    func_0x000107c61150();
    bVar4 = (uVar3 & 1) == 0;
    if (!bVar4) {
      func_0x000107c4b914(uVar2);
    }
    func_0x000107c615e8(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102576bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar4);
  return;
}



/* Entry: 102576bfc; end: 102576c1f; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow mainLocationSharingSettingsPageWillPresent] */

void FUN_102576bfc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105217c8;
  puVar2 = &UNK_1105217f0;
  func_0x000107c613fc(&UNK_1105217c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c613fc(&UNK_1105217f0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab9318;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x51;
  func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab9320,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102576c20; end: 102576c8b;  */

void FUN_102576c20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102576c8c,uVar1,uVar2);
  return;
}



/* Entry: 102576c8c; end: 102576d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102576c8c(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  uVar2 = lVar1 + _DAT_112ea6540;
  func_0x000107c61618();
  if (uVar2 == 0) {
    bVar4 = true;
  }
  else {
    uVar3 = uVar2;
    func_0x000107c61150();
    bVar4 = (uVar3 & 1) == 0;
    if (!bVar4) {
      func_0x000107c4b90c(uVar2);
    }
    func_0x000107c615e8(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102576d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar4);
  return;
}



/* Entry: 102576d14; end: 102576d37; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow mainLocationSharingSettingsPageDidPresent] */

void FUN_102576d14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_110521778;
  puVar2 = &UNK_1105217a0;
  func_0x000107c613fc(&UNK_110521778,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c613fc(&UNK_1105217a0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab9300;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x51;
  func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab9308,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102576d38; end: 102576da3;  */

void FUN_102576d38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102576da4,uVar1,uVar2);
  return;
}



/* Entry: 102576da4; end: 102576e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102576da4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar1 = lVar1 + _DAT_112ea6540;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4b908();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102576e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 102576e04; end: 102576e27; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow mainLocationSharingSettingsPageDidDismiss] */

void FUN_102576e04(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_110521728;
  puVar2 = &UNK_110521750;
  func_0x000107c613fc(&UNK_110521728,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c613fc(&UNK_110521750,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab92e8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x51;
  func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab92f0,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102576e28; end: 102576efb;  */

void FUN_102576e28(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(long *)(param_4 + 0x18) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar1 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar2 = 0x51;
  func_0x0001001ca524(0x51,0,0x3c,4,0,0,param_6,param_4,uVar1);
  func_0x000107c61574(param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102576efc; end: 102577027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102576efc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_1105216b0;
  func_0x000107c613fc(&UNK_1105216b0,0x18,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  puVar2 = &UNK_1105216d8;
  func_0x000107c613fc(&UNK_1105216d8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab92c0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  uVar5 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 0x51;
  func_0x0001001ca524(0x51,0,0x3c,4,0,0,&UNK_10dab92d0,puVar2,uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea6548);
  pcStack_40 = FUN_10257711c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102576ac0;
  puStack_48 = &UNK_1105216f0;
  ppuVar4 = &puStack_60;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c50990(uVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102577028; end: 102577093;  */

void FUN_102577028(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102577094,uVar1,uVar2);
  return;
}



/* Entry: 102577094; end: 10257711b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102577094(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  uVar2 = lVar1 + _DAT_112ea6540;
  func_0x000107c61618();
  if (uVar2 == 0) {
    bVar4 = true;
  }
  else {
    uVar3 = uVar2;
    func_0x000107c61150();
    bVar4 = (uVar3 & 1) == 0;
    if (!bVar4) {
      func_0x000107c4b910(uVar2);
    }
    func_0x000107c615e8(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102577118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar4);
  return;
}



/* Entry: 10257711c; end: 102577123;  */

void FUN_10257711c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9bb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitWithCompletion__1125c4880,0);
  return;
}



/* Entry: 102577124; end: 1025771ab; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow mainLocationSharingSettingsPageWillDismiss] */

void FUN_102577124(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102576efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025771ac; end: 1025771bf; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow onlyTheseFriendsSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025771ac(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  puVar1 = &UNK_1105214d0;
  func_0x000107c613fc(&UNK_1105214d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_50 = 0x102577ae0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  puStack_58 = &UNK_110521678;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025771c0; end: 10257721f;  */

void FUN_1025771c0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5ae74(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102577220; end: 102577233; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow exceptTheseFriendsSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102577220(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  puVar1 = &UNK_1105214d0;
  func_0x000107c613fc(&UNK_1105214d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_50 = 0x102577ad8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  puStack_58 = &UNK_110521650;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102577234; end: 102577293;  */

void FUN_102577234(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5aed4(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102577294; end: 1025772a7; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow presentReportAnIssue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102577294(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  puVar1 = &UNK_1105214d0;
  func_0x000107c613fc(&UNK_1105214d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_50 = 0x102577ad0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  puStack_58 = &UNK_110521628;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025772a8; end: 102577307;  */

void FUN_1025772a8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c42c30(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102577308; end: 10257731f; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow presentSuggestAPlace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102577308(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  puVar1 = &UNK_1105214d0;
  func_0x000107c613fc(&UNK_1105214d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  pcStack_50 = FUN_102577ac8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  puStack_58 = &UNK_110521600;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102577320; end: 102577333; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow presentChangeBitmojiOutfit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102577320(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  uStack_40 = 0x10257731c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102576ac0;
  puStack_48 = &UNK_1105215d8;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_1);
  func_0x000107c50990(uVar2,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102577334; end: 102577453;  */

void FUN_102577334(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_2,puVar4);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar4);
  }
  else {
    lVar3 = lVar5;
    (**(code **)(lVar6 + 0x20))(lVar5,puVar4,lVar1);
    func_0x000107c5ed90();
    func_0x000107c42c34(param_1);
    func_0x000107c61170(lVar3);
    (**(code **)(lVar6 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 102577454; end: 1025775f7; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow mainLocationSharingSettingsPageWantsToOpenWithUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102577454(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar9 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)&puStack_70 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar6 - extraout_x12;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar5,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,param_3 == 0,1);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  func_0x000100029394(lVar5,lVar6);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &UNK_110521598;
  func_0x000107c613fc(&UNK_110521598,uVar10 + lVar7,uVar4 | 7);
  func_0x0001001021cc(lVar6,puVar2 + uVar10);
  pcStack_50 = FUN_102577a80;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  puStack_58 = &UNK_1105215b0;
  ppuVar3 = &puStack_70;
  puStack_48 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c50990(uVar8);
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000293e4(lVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025775f8; end: 1025776e3; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow reportIssueWantsDismissWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025775f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  puVar1 = &UNK_110521548;
  func_0x000107c613fc(&UNK_110521548,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uStack_50 = 0x102577a78;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  puStack_58 = &UNK_110521560;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025776e4; end: 102577747;  */

void FUN_1025776e4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c42c24(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102577748; end: 10257775b; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow presentReportBug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102577748(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  puVar1 = &UNK_1105214d0;
  func_0x000107c613fc(&UNK_1105214d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_50 = 0x102577a70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  puStack_58 = &UNK_110521510;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10257775c; end: 1025777bf;  */

void FUN_10257775c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c42c24(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1025777c0; end: 1025777d3; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow presentMakeSuggestion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025777c0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  puVar1 = &UNK_1105214d0;
  func_0x000107c613fc(&UNK_1105214d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_50 = 0x102577a68;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  puStack_58 = &UNK_1105214e8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025777d4; end: 1025778a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025777d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  puVar1 = &UNK_1105214d0;
  func_0x000107c613fc(&UNK_1105214d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102576ac0;
  uStack_58 = param_4;
  uStack_50 = param_3;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025778a8; end: 1025778bf; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow preciseLocationWasRevoked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025778a8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  uStack_40 = 0x102577fd8;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102576ac0;
  puStack_48 = &UNK_110521498;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_1);
  func_0x000107c50990(uVar2,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025778c0; end: 1025778d3; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow shakeReportDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025778c0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  uStack_40 = 0x1025778bc;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102576ac0;
  puStack_48 = &UNK_110521470;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_1);
  func_0x000107c50990(uVar2,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025778d4; end: 1025778eb; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow mapFriendPickerScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025778d4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  uStack_40 = 0x102577fd4;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102576ac0;
  puStack_48 = &UNK_110521448;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_1);
  func_0x000107c50990(uVar2,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025778ec; end: 1025778ff; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow venueEditorScreenDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025778ec(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  uStack_40 = 0x1025778e8;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102576ac0;
  puStack_48 = &UNK_110521420;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_1);
  func_0x000107c50990(uVar2,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102577900; end: 102577993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102577900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea6548);
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102576ac0;
  uStack_48 = param_4;
  uStack_40 = param_3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_1);
  func_0x000107c50990(uVar2,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102577994; end: 1025779f3; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow init] */

void FUN_102577994(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.LocationSharingSettingsWorkflow",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025779c0);
  (*pcVar1)();
}



/* Entry: 1025779f4; end: 102577a2b; -[_TtC39SCLocationSharingSettingsImplementation31LocationSharingSettingsWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025779f4(long param_1)

{
  FUN_102577e58(param_1 + _DAT_112ea6540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea6548));
  return;
}



/* Entry: 102577a2c; end: 102577a4b;  */

void FUN_102577a2c(void)

{
  func_0x000107c61168(&PTR_PTR_11284eec0);
  return;
}



/* Entry: 102577a4c; end: 102577a7f;  */

void FUN_102577a4c(long param_1,long param_2)

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



/* Entry: 102577a80; end: 102577ac7;  */

void FUN_102577a80(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(unaff_x20 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)),puVar5);
  puVar2 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar5);
  }
  else {
    lVar3 = lVar6;
    (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar1);
    func_0x000107c5ed90();
    func_0x000107c42c34(param_1);
    func_0x000107c61170(lVar3);
    (**(code **)(lVar7 + 8))(lVar6,lVar1);
  }
  return;
}



/* Entry: 102577ac8; end: 102577ae7;  */

void FUN_102577ac8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42c30(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102577ae8; end: 102577b33;  */

void FUN_102577ae8(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102577fb4;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102577094,lVar1,lVar3);
  return;
}



/* Entry: 102577b34; end: 102577ba3;  */

void FUN_102577b34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102577fc4;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102577ba4; end: 102577c33;  */

void FUN_102577ba4(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102577bf0;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102576da4,lVar1,lVar3);
  return;
}



/* Entry: 102577c34; end: 102577ca3;  */

void FUN_102577c34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102577ca4;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102577ca4; end: 102577d2b;  */

void FUN_102577ca4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102577cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102577d2c; end: 102577d9b;  */

void FUN_102577d2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102577fc8;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102577d9c; end: 102577de7;  */

void FUN_102577d9c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102577fbc;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102576b74,lVar1,lVar3);
  return;
}



/* Entry: 102577de8; end: 102577e57;  */

void FUN_102577de8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102577fcc;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102577e58; end: 102577e7b;  */

undefined8 FUN_102577e58(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102577e7c; end: 102577ec7;  */

void FUN_102577e7c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102577fc0;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102577f40,lVar1,lVar3);
  return;
}



/* Entry: 102577ec8; end: 102577f37;  */

void FUN_102577ec8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102577fd0;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102577f38; end: 102577fdb;  */

void FUN_102577f38(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5aea0(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102577fdc; end: 1025780ab;  */

undefined1  [16] FUN_102577fdc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffde;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0aa4e0);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025780ac);
  (*pcVar1)();
}



/* Entry: 1025780ac; end: 1025780c7;  */

undefined1  [16] FUN_1025780ac(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x726f6d5f77656976;
  func_0x000107c5fadc(0x726f6d5f77656976,0xe900000000000065);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 1025780c8; end: 10257872b;  */

undefined1  [16] FUN_1025780c8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe1;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0aa2b0);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102578194);
  (*pcVar1)();
}



/* Entry: 10257872c; end: 102578763;  */

undefined1  [16] FUN_10257872c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6f6d5f74736f6867;
  func_0x000107c5fadc(0x6f6d5f74736f6867,0xea00000000006564);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 102578764; end: 1025789c7;  */

undefined1  [16] FUN_102578764(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0aa310);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102578830);
  (*pcVar1)();
}



/* Entry: 1025789c8; end: 1025789eb;  */

undefined1  [16] FUN_1025789c8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6574746f70735f69;
  func_0x000107c5fadc(0x6574746f70735f69,0xef6775625f615f64);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 1025789ec; end: 102578ab7;  */

undefined1  [16] FUN_1025789ec(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0aa370);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102578ab8);
  (*pcVar1)();
}



/* Entry: 102578ab8; end: 102578adb;  */

undefined1  [16] FUN_102578ab8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x5f74736567677573;
  func_0x000107c5fadc(0x5f74736567677573,0xef6563616c705f61);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 102578adc; end: 102578fa3;  */

undefined1  [16] FUN_102578adc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0aa150);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102578ba8);
  (*pcVar1)();
}



/* Entry: 102578fa4; end: 102578fbb;  */

undefined1  [16] FUN_102578fa4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x74726f70707573;
  func_0x000107c5fadc(0x74726f70707573,0xe700000000000000);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 102578fbc; end: 102579153;  */

undefined1  [16] FUN_102578fbc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0aa7d0);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102579088);
  (*pcVar1)();
}



/* Entry: 102579154; end: 102579173;  */

undefined1  [16] FUN_102579154(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6f685f6565726874;
  func_0x000107c5fadc(0x6f685f6565726874,0xeb00000000737275);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 102579174; end: 10257930b;  */

undefined1  [16] FUN_102579174(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0aa660);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102579240);
  (*pcVar1)();
}



/* Entry: 10257930c; end: 10257931f;  */

undefined1  [16] FUN_10257930c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6c65636e6163;
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 102579320; end: 10257971b;  */

undefined1  [16] FUN_102579320(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0aa620);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025793ec);
  (*pcVar1)();
}



/* Entry: 10257971c; end: 102579727;  */

undefined1  [16] FUN_10257971c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6b6f;
  func_0x000107c5fadc(0x6b6f,0xe200000000000000);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 102579728; end: 1025798bf;  */

undefined1  [16] FUN_102579728(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0aa550);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025797f4);
  (*pcVar1)();
}



/* Entry: 1025798c0; end: 1025798eb;  */

undefined1  [16] FUN_1025798c0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x656c62616e65;
  func_0x000107c5fadc(0x656c62616e65,0xe600000000000000);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 1025798ec; end: 10257a017;  */

undefined1  [16] FUN_1025798ec(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffce;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f0aa6c0);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025799b8);
  (*pcVar1)();
}



/* Entry: 10257a018; end: 10257a03b;  */

undefined1  [16] FUN_10257a018(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x625f657461657263;
  func_0x000107c5fadc(0x625f657461657263,0xee00696a6f6d7469);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 10257a03c; end: 10257a74b;  */

undefined1  [16] FUN_10257a03c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0aa120);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257a0ec);
  (*pcVar1)();
}



/* Entry: 10257a74c; end: 10257a7a3;  */

void FUN_10257a74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_10257a7a4(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10257a7a4; end: 10257ac9b;  */

undefined1 *
FUN_10257a7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_b8 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar15 = 0x6e656972466c6c41;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4048000000000000,0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c46db4();
  func_0x000107c53840();
  lVar4 = 0x6b6f;
  func_0x000107c5fadc(0x6b6f,0xe200000000000000);
  func_0x000107c5fadc(0x6e656972466c6c41,0xef7472656c417364);
  uVar5 = 0;
  func_0x000107c5fe40(0);
  lVar6 = lVar4;
  uVar7 = uVar15;
  func_0x0001000f6108(lVar4,uVar15,uVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257ac98);
    (*pcVar1)();
  }
  lVar4 = lVar6;
  func_0x000107c5faec(lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c6157c(param_2);
  func_0x000107c5fadc(lVar4,uVar7);
  func_0x000107c6142c(uVar7);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0aa810);
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100de205c;
  puStack_90 = &UNK_110521900;
  ppuVar8 = &puStack_a8;
  uStack_88 = param_1;
  uStack_80 = param_2;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar10 = puVar9;
  func_0x000107c3dac8();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(uStack_80);
  lVar4 = 0x776f6e5f746f6e;
  func_0x000107c5fadc(0x776f6e5f746f6e,0xe700000000000000);
  uVar15 = 0x6e656972466c6c41;
  func_0x000107c5fadc(0x6e656972466c6c41,0xef7472656c417364);
  uVar5 = 0;
  func_0x000107c5fe40(0);
  lVar6 = lVar4;
  uVar7 = uVar15;
  func_0x0001000f6108(lVar4,uVar15,uVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  if (lVar6 != 0) {
    lVar4 = lVar6;
    func_0x000107c5faec(lVar6);
    func_0x000107c61170(lVar6);
    func_0x000107c6157c(param_4);
    func_0x000107c5fadc(lVar4,uVar7);
    func_0x000107c6142c(uVar7);
    uVar7 = 0xd000000000000019;
    lVar14 = -0x7ffffffef0f557d0;
    func_0x000107c5fadc(0xd000000000000019);
    puStack_a8 = puVar11;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100de205c;
    puStack_90 = &UNK_110521928;
    ppuVar8 = &puStack_a8;
    uStack_88 = param_3;
    uStack_80 = param_4;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c3dac8();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61574(uStack_80);
    puVar11 = PTR_PTR_1126e1550;
    func_0x000107c61168(PTR_PTR_1126e1550);
    func_0x000107c5df40();
    func_0x000107c61180();
    puVar12 = puVar11;
    FUN_10257ade4();
    lVar4 = lVar14;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar14);
    func_0x00010257aeb4();
    func_0x000107c5fadc();
    func_0x000107c6142c();
    func_0x000100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 5;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined **)(lVar4 + 0x20) = puVar10;
    *(undefined **)(lVar4 + 0x28) = puVar9;
    uVar7 = 0;
    func_0x000100dfe1a0(0);
    func_0x000107c61174(puVar10);
    func_0x000107c61174(puVar9);
    lVar6 = lVar4;
    func_0x000107c5fc48(lVar4,uVar7);
    func_0x000107c61574(lVar4);
    puVar13 = auStack_b8;
    func_0x000107c61154(puVar13,PTR_s_initWithAccessoryViewOrViewContr_1125d9980,puVar11,puVar12,
                        lVar14,0,lVar6,0,0,0,0);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_4);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar2);
    return puVar13;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257ac9c);
  (*pcVar1)();
}



/* Entry: 10257ac9c; end: 10257acb7;  */

void FUN_10257ac9c(long param_1,long param_2)

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



/* Entry: 10257acb8; end: 10257ad47; -[SCAllFriendsAlertDialog initWithOkActionCallback:notNowActionCallback:] */

void FUN_10257acb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_110521960;
  func_0x000107c613fc(&UNK_110521960,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_110521988;
  func_0x000107c613fc(&UNK_110521988,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  FUN_10257a7a4(FUN_10257adc8,puVar1,0x10257ade0,puVar2);
  return;
}



/* Entry: 10257ad48; end: 10257adc7; -[SCAllFriendsAlertDialog initWithAccessoryViewOrViewController:title:dialogText:editMode:actions:placeholders:urlStrings:linkHandler:shouldUseDynamicTypeCapableDialog:] */

void FUN_10257ad48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AllFriendsAlert.AllFriendsAlertDialog",0x25,
                      "init(accessoryViewOrViewController:title:dialogText:editMode:actions:placeholders:urlStrings:linkHandler:shouldUseDynamicTypeCapableDialog:)"
                      ,0x8c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257ad74);
  (*pcVar1)();
}



/* Entry: 10257adc8; end: 10257ade3;  */

void FUN_10257adc8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010257add4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10257ade4; end: 10257af83;  */

undefined1  [16] FUN_10257ade4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0aa930);
  uVar3 = 0x6e656972466c6c41;
  func_0x000107c5fadc(0x6e656972466c6c41,0xef7472656c417364);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257aeb4);
  (*pcVar1)();
}



/* Entry: 10257af84; end: 10257b0f7;  */

void FUN_10257af84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  uVar2 = uVar4;
  func_0x000107c5efd4();
  func_0x000107c417e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  lVar3 = unaff_x20;
  func_0x000107c614a0(unaff_x20,param_5);
  if (lVar3 != 0) {
    return;
  }
  func_0x000107c61170(unaff_x20);
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0xd000000000000027,0x800000010f0aa990);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x70797420726f6620,0xeb00000000203a65);
  uVar4 = 0;
  func_0x000107c60714(param_1,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "UIKitExtensions/UICollectionViewCell+Generic.swift",0x32,2,10,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257b0f8);
  (*pcVar1)();
}



/* Entry: 10257b0f8; end: 10257b14b;  */

void FUN_10257b0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614e8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c4fbd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10257b14c; end: 10257b1cb;  */

/* WARNING: Possible PIC construction at 0x00010257b1b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010257b1b4) */

void FUN_10257b14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c614e8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c4fbdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10257b1cc; end: 10257b363;  */

void FUN_10257b1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c5fadc(param_2,param_3);
  uVar4 = param_4;
  func_0x000107c5fadc(param_4,param_5);
  uVar2 = uVar4;
  func_0x000107c5efd4();
  func_0x000107c417e4();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  lVar3 = unaff_x20;
  func_0x000107c614a0(unaff_x20,param_7);
  if (lVar3 != 0) {
    return;
  }
  func_0x000107c61170(unaff_x20);
  func_0x000107c602fc(0x4d);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010f0aa9c0);
  func_0x000107c5fb78(param_4,param_5);
  func_0x000107c5fb78(0x70797420726f6620,0xeb00000000203a65);
  uVar4 = 0;
  func_0x000107c60714(param_1,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "UIKitExtensions/UICollectionViewCell+Generic.swift",0x32,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257b364);
  (*pcVar1)();
}


