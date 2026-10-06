/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102510db8; end: 102510e7f; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter emojiPickerScopeDidCompleteWith:] */

/* WARNING: Possible PIC construction at 0x000102510e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102510e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102510e60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102510e3c) */
/* WARNING: Removing unreachable block (ram,0x000102510e14) */
/* WARNING: Removing unreachable block (ram,0x000102510e64) */

void FUN_102510db8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = param_3;
  func_0x000107c424f8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5faec();
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102510e80; end: 102510e97; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter emojiPickerScopeWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102510e80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea3600);
  *(undefined8 *)(param_1 + _DAT_112ea3600) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102510e98; end: 102510ebf; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter didCloseDirectionsSheetWithAction:] */

void FUN_102510e98(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025114b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102510ec0; end: 102510f6f; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Possible PIC construction at 0x000102510f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102510f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102510f3c) */
/* WARNING: Removing unreachable block (ram,0x000102510f4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102510ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_112ea35a0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c4807c(puVar2,param_2,lVar1,1);
    func_0x000107c3e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102510f70; end: 102510fcf; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102510f70(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_112ea35a0;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102510fd0; end: 102511063; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter permissionsPromptSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102510fd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_112ea3650) == '\0') {
    uVar2 = 0xee00454c49464f52;
    uVar1 = 0x505f444e45495246;
  }
  else if (*(char *)(param_1 + _DAT_112ea3650) == '\x01') {
    uVar2 = 0xe400000000000000;
    uVar1 = 0x54414843;
  }
  else {
    uVar2 = 0x800000010f0a7d80;
    uVar1 = 0xd000000000000019;
  }
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102511064; end: 1025110ab; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter onShareLocationActionCompletedWith:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102511064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uStack_21;
  
  uStack_21 = param_4;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025110ac; end: 1025110c3; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025110ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea3608);
  *(undefined8 *)(param_1 + _DAT_112ea3608) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1025110c4; end: 1025110db; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter mapLocationSearchTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025110c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea35f0);
  *(undefined8 *)(param_1 + _DAT_112ea35f0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1025110dc; end: 1025112b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025110dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(&UNK_10dab5d40 + (ulong)*(byte *)(unaff_x20 + _DAT_112ea3650) * 8);
  puVar1 = &UNK_11051b3b0;
  func_0x000107c613fc(&UNK_11051b3b0,0x30,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  puVar2 = &UNK_11051b3d8;
  func_0x000107c613fc(&UNK_11051b3d8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab5c20;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar4 = uVar5;
  func_0x0001001ca524(uVar5,0,0x3c,4,0,0,&UNK_10dab5c30,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x00010007d980(uVar5,0,0x3c);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea35e8);
  lVar3 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  uVar4 = 0;
  FUN_1025116b4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined **)(lVar3 + 0x20) = puVar1;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_2);
  *(undefined8 *)(lVar3 + 0x58) = uVar4;
  *(undefined **)(lVar3 + 0x40) = puVar1;
  uVar4 = 0;
  FUN_1025116b4(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c600f0(lVar3,uVar4);
  func_0x000107c4d664(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1025112b8; end: 102511327;  */

void FUN_1025112b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102511328,uVar1,uVar2);
  return;
}



/* Entry: 102511328; end: 1025113cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102511328(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  puVar2 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar2 = uVar1;
  func_0x0001002a64a8(puVar2);
  *puVar2 = uVar4;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0x4028000000000000;
  *(undefined8 *)(unaff_x22 + 0x38) = 0x4049000000000000;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x4051800000000000;
  *(undefined8 *)(unaff_x22 + 0x48) = 0x4049000000000000;
  *(undefined8 *)(unaff_x22 + 0x40) = 0x4034000000000000;
  *(undefined1 *)(unaff_x22 + 0x50) = 0;
  func_0x0001002a64a8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001025113c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025113cc; end: 102511433; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter mapLocationSearchTrayDidSelectLocationWithCoordinates:placeSelectionUpdate:] */

/* WARNING: Possible PIC construction at 0x000102511418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251141c) */

void FUN_1025113cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_1025110dc(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102511434; end: 102511477; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter webBrowserDidDismiss:] */

void FUN_102511434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1025116f4();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102511478; end: 1025114b7; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter trayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102511478(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea35f8);
  *(undefined8 *)(param_1 + _DAT_112ea35f8) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar1);
  func_0x0001025107d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025114b8; end: 10251159b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025114b8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar3 = lStack_38;
  lVar2 = lStack_38;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_38);
    lVar3 = lStack_38;
    func_0x000107c4ffe8(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c615e8(lVar3);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea3610);
  pcVar5 = (code *)*puVar1;
  if (pcVar5 == (code *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = puVar1[1];
    func_0x000107c6157c(uVar6);
    (*pcVar5)();
    func_0x00010058d43c(pcVar5,uVar6);
    uVar6 = *puVar1;
  }
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar6,uVar4);
  return;
}



/* Entry: 10251159c; end: 102511607;  */

void FUN_10251159c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102511608;
  plVar3[0xd] = lVar4;
  plVar3[0xe] = lVar5;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xf] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102511328,lVar1,lVar2);
  return;
}



/* Entry: 102511608; end: 102511643;  */

void FUN_102511608(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102511640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102511644; end: 1025116b3;  */

void FUN_102511644(undefined8 param_1)

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
  plVar3[1] = 0x102511914;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1025116b4; end: 1025116f3;  */

void FUN_1025116b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1025116f4; end: 10251178b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025116f4(void)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_38);
    lVar2 = lStack_38;
    func_0x000107c4ffe8(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10251178c; end: 10251179b;  */

undefined1  [16] FUN_10251178c(void)

{
  return ZEXT816(0x11051b400);
}



/* Entry: 10251179c; end: 1025117bb;  */

void FUN_10251179c(void)

{
  func_0x000107c61168(&PTR_PTR_11284b4a0);
  return;
}



/* Entry: 1025117bc; end: 10251181f;  */

void FUN_1025117bc(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102511918;
  *(undefined1 *)((long)plVar2 + 0x31) = uVar1;
  plVar2[9] = lVar3;
  plVar2[10] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar2[0xb] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102510034,lVar4,lVar3);
  return;
}



/* Entry: 102511820; end: 10251188f;  */

void FUN_102511820(undefined8 param_1)

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
  plVar3[1] = 0x10251191c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102511890; end: 1025118e7;  */

void FUN_102511890(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102511920;
  plVar3[2] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[3] = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  plVar3[5] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_1025108f4;
  plVar2[0x10] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025109c8,0,0);
  return;
}



/* Entry: 1025118e8; end: 102511923;  */

void FUN_1025118e8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c44ed0();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61170(param_1);
  }
  *(bool *)*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28) = param_1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102511924; end: 1025119af;  */

void FUN_102511924(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112ea3698;
  func_0x0001000285a8(0x112ea3698,&UNK_10dac6810);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1025119b0; end: 1025119c7;  */

void FUN_1025119b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112ea3698;
  func_0x0001000285a8(0x112ea3698,&UNK_10dac6810);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1025119c8; end: 102511cc3;  */

void FUN_1025119c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea36a0,&UNK_10dab5db0);
  puVar1 = &UNK_11051b508;
  func_0x000107c613fc(&UNK_11051b508,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_102511cc4,puVar1);
  return;
}



/* Entry: 102511cc4; end: 102511cff;  */

void FUN_102511cc4(void)

{
  long unaff_x20;
  
  func_0x000102511afc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102511d00; end: 102511e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102511d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea36a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36d0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36d8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36e0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36e8) = param_9;
  puVar1 = (undefined1 *)(unaff_x20 + _DAT_112ea36f0);
  *puVar1 = param_10;
  *(undefined8 *)(puVar1 + 8) = param_12;
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ea36f8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3700) = param_15;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102511e48; end: 102511f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102511e48(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auVar3 [16];
  
  param_1[2] = *(long *)(unaff_x20 + _DAT_112ea36e8);
  func_0x000100083b20(param_1 + 1);
  lVar2 = param_1[1];
  lVar1 = lVar2 + _DAT_112ea35a0;
  func_0x000107c61618();
  func_0x000107c61170(lVar2);
  *param_1 = lVar1;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = 0x102511eb8;
  return auVar3;
}



/* Entry: 102511f60; end: 102511faf;  */

void FUN_102511f60(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102511fb0;
  plVar1[0x10] = 2;
  plVar1[0x11] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102512064,0,0);
  return;
}



/* Entry: 102511fb0; end: 102512023;  */

void FUN_102511fb0(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x20) = param_1 & 1;
    pcVar1 = FUN_102512024;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x102512038;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102512024; end: 102512063;  */

void FUN_102512024(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000102512034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102512064; end: 10251222b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102512064(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar4;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar4;
  func_0x000107c61170(lVar1);
  if (lVar4 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10251222c;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    func_0x000100083b20(unaff_x22 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar3 = &UNK_11051b700;
    func_0x000107c613fc(&UNK_11051b700,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_102514970;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1013b7310;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051b718;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c50330(lVar4);
    func_0x000107c60bd0(lVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_102514930();
  func_0x000107c613f8(&UNK_11051b838,lVar1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102512228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10251222c; end: 1025122a3;  */

void FUN_10251222c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10251226c,0,0);
  return;
}



/* Entry: 1025122a4; end: 1025123bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025122a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  uVar9 = 0;
  uVar10 = 0;
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0xff;
    uVar7 = 0;
    uVar8 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
      uVar4 = 0;
      uVar3 = 0xff;
      uVar7 = 0;
      uVar8 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      func_0x000107c4077c();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
      uVar3 = 0;
      uVar6 = 0x4049000000000000;
      uVar5 = 0x4034000000000000;
      uVar8 = 0x4049000000000000;
      uVar7 = 0x4051800000000000;
      uVar4 = 0x4028000000000000;
      uVar9 = param_2;
      uVar10 = param_3;
    }
  }
  param_1[1] = uVar10;
  *param_1 = uVar9;
  param_1[2] = uVar4;
  param_1[3] = 0;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  *(undefined1 *)(param_1 + 8) = uVar3;
  return;
}



/* Entry: 1025123bc; end: 102512513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025123bc(void)

{
  byte *pbVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  pbVar1 = (byte *)(unaff_x20 + _DAT_112ea36f0);
  lVar3 = *(long *)(pbVar1 + 0x10);
  if (lVar3 == 0) {
    func_0x0001000285a8(0x112d6cfe8,&UNK_10d92fd10);
    func_0x00010283c73c(0);
  }
  else {
    uVar5 = *(undefined8 *)(pbVar1 + 8);
    uVar4 = *(undefined8 *)(&UNK_10dab5f88 + (ulong)*pbVar1 * 8);
    puVar2 = &UNK_11051b530;
    func_0x000107c613fc(&UNK_11051b530,0x28,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x18) = uVar5;
    *(long *)(puVar2 + 0x20) = lVar3;
    func_0x000107c61434(lVar3);
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x0001001ca524(uVar4,0,0x3c,4,0,0,&UNK_10dab5dc8,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar5);
    func_0x00010007d980(uVar4,0,0x3c);
    func_0x000100083b20(&lStack_48);
    uVar5 = *(undefined8 *)(lStack_48 + _DAT_112ea35b8);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lStack_48);
    FUN_10283c69c();
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 102512514; end: 102512583;  */

void FUN_102512514(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(long *)(unaff_x22 + 0x40) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102512584;
  plVar2[0x11] = 2;
  plVar2[0x12] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102512c44,0,0);
  return;
}



/* Entry: 102512584; end: 102512637;  */

void FUN_102512584(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x68);
  *(long *)(lVar4 + 0x70) = unaff_x20;
  func_0x000107c615c0();
  uVar2 = *(undefined8 *)(lVar4 + 0x58);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x78) = param_1;
    func_0x000100eea164();
    func_0x000107c5fca8();
    *(undefined8 *)(lVar4 + 0x80) = uVar2;
    *(undefined8 *)(lVar4 + 0x88) = uVar1;
    pcVar3 = FUN_102512638;
  }
  else {
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_102512afc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 102512638; end: 10251285f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102512638(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x78) != 1) {
    plVar3 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102512860;
    lVar2 = *(long *)(unaff_x22 + 0x40);
    plVar3[0x10] = 2;
    plVar3[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102512064,0,0);
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61574();
  lVar6 = *(long *)(unaff_x22 + 0x70);
  FUN_102512e30();
  if (lVar6 == 0) {
    if (lVar2 == 2) {
      FUN_102512ef0();
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
        func_0x000100083b20(unaff_x22 + 0x30);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
        lVar2 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar2 + 0x18) = 2;
        *(undefined8 *)(lVar2 + 0x10) = 1;
        *(undefined8 *)(lVar2 + 0x20) = uVar4;
        *(undefined8 *)(lVar2 + 0x28) = uVar1;
        func_0x000107c61434(uVar1);
        FUN_1025103a0(lVar2);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(uVar5);
        goto LAB_102512844;
      }
      func_0x000100083b20(unaff_x22 + 0x38);
      lVar2 = *(long *)(unaff_x22 + 0x38);
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112ea35b8);
      func_0x000107c6157c(uVar4);
      func_0x000107c61170(lVar2);
      *(undefined1 *)(unaff_x22 + 0xa3) = 1;
      lVar2 = unaff_x22 + 0xa3;
    }
    else {
      func_0x000100083b20(unaff_x22 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
      FUN_1025106bc();
      func_0x000107c61170(uVar4);
      func_0x000100083b20(unaff_x22 + 0x28);
      lVar2 = *(long *)(unaff_x22 + 0x28);
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112ea35b8);
      func_0x000107c6157c(uVar4);
      func_0x000107c61170(lVar2);
      *(undefined1 *)(unaff_x22 + 0xa2) = 0;
      lVar2 = unaff_x22 + 0xa2;
    }
    func_0x0001002a64a8(lVar2);
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar2 = *(long *)(unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112ea35b8);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar2);
    *(undefined1 *)(unaff_x22 + 0xa0) = 0;
    func_0x0001002a64a8(unaff_x22 + 0xa0);
    func_0x000107c614ac(lVar6);
  }
  func_0x000107c61574(uVar4);
LAB_102512844:
                    /* WARNING: Could not recover jumptable at 0x00010251285c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102512860; end: 1025128cf;  */

void FUN_102512860(byte param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x90));
  if (unaff_x20 == 0) {
    *(byte *)(lVar4 + 0xa4) = param_1 & 1;
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    pcVar1 = FUN_1025128d0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    pcVar1 = FUN_102512b94;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1025128d0; end: 102512afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025128d0(void)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0xa4);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61574();
  if (cVar2 == '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x98);
    FUN_102512e30();
    if (lVar7 == 0) {
      if (lVar3 == 2) {
        FUN_102512ef0();
        if (lVar3 != 0) {
          uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
          func_0x000100083b20(unaff_x22 + 0x30);
          uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
          lVar3 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c613fc();
          *(undefined8 *)(lVar3 + 0x18) = 2;
          *(undefined8 *)(lVar3 + 0x10) = 1;
          *(undefined8 *)(lVar3 + 0x20) = uVar5;
          *(undefined8 *)(lVar3 + 0x28) = uVar1;
          func_0x000107c61434(uVar1);
          FUN_1025103a0(lVar3);
          func_0x000107c61574(lVar3);
          func_0x000107c61170(uVar6);
          goto LAB_1025129b8;
        }
        func_0x000100083b20(unaff_x22 + 0x38);
        lVar3 = *(long *)(unaff_x22 + 0x38);
        uVar5 = *(undefined8 *)(lVar3 + _DAT_112ea35b8);
        func_0x000107c6157c(uVar5);
        func_0x000107c61170(lVar3);
        *(undefined1 *)(unaff_x22 + 0xa3) = 1;
        puVar4 = (undefined1 *)(unaff_x22 + 0xa3);
      }
      else {
        func_0x000100083b20(unaff_x22 + 0x20);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
        FUN_1025106bc();
        func_0x000107c61170(uVar5);
        func_0x000100083b20(unaff_x22 + 0x28);
        lVar3 = *(long *)(unaff_x22 + 0x28);
        uVar5 = *(undefined8 *)(lVar3 + _DAT_112ea35b8);
        func_0x000107c6157c(uVar5);
        func_0x000107c61170(lVar3);
        *(undefined1 *)(unaff_x22 + 0xa2) = 0;
        puVar4 = (undefined1 *)(unaff_x22 + 0xa2);
      }
      goto LAB_1025129a8;
    }
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112ea35b8);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lVar3);
    *(undefined1 *)(unaff_x22 + 0xa0) = 0;
    func_0x0001002a64a8(unaff_x22 + 0xa0);
    func_0x000107c614ac(lVar7);
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x18);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112ea35b8);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lVar3);
    puVar4 = (undefined1 *)(unaff_x22 + 0xa1);
    *puVar4 = 0;
LAB_1025129a8:
    func_0x0001002a64a8(puVar4);
  }
  func_0x000107c61574(uVar5);
LAB_1025129b8:
                    /* WARNING: Could not recover jumptable at 0x0001025129d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102512afc; end: 102512b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102512afc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112ea35b8);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(lVar2);
  *(undefined1 *)(unaff_x22 + 0xa0) = 0;
  func_0x0001002a64a8();
  func_0x000107c614ac(uVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102512b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102512b94; end: 102512c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102512b94(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112ea35b8);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(lVar2);
  *(undefined1 *)(unaff_x22 + 0xa0) = 0;
  func_0x0001002a64a8();
  func_0x000107c614ac(uVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102512c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102512c2c; end: 102512c43;  */

void FUN_102512c2c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102512c44,0,0);
  return;
}



/* Entry: 102512c44; end: 102512db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102512c44(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x98) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102512db8;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_11051b750;
    func_0x000107c613fc(&UNK_11051b750,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x102514988;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1010ca3e8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051b768;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4318c(lVar3);
    func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_102514930();
  func_0x000107c613f8(&UNK_11051b838,lVar1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102512db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102512db8; end: 102512e2f;  */

void FUN_102512db8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102512df8,0,0);
  return;
}



/* Entry: 102512e30; end: 102512eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102512e30(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = lStack_28;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    FUN_102514930();
    func_0x000107c613f8(&UNK_11051b838,lVar3,0,0);
    func_0x000107c61654();
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4b894(lVar2);
    func_0x000107c615e8(lVar2);
  }
  return lVar1;
}



/* Entry: 102512ef0; end: 1025131bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102512ef0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lStack_68;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112ea36f0 + 0x10);
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea36f0 + 8);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar1 = lStack_68;
    func_0x000107c4ec94();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000100083b20(&lStack_68);
      lVar1 = lStack_68;
      lVar3 = *(long *)(lStack_68 + _DAT_112fcd5d8);
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      lVar1 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar1 != 0) {
        func_0x000100083b20(&lStack_68);
        lVar3 = lStack_68;
        lVar4 = lStack_68;
        func_0x000107c4c440();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar3 == 0) {
          func_0x000107c615e8(lVar2);
          lVar2 = lVar1;
        }
        else {
          func_0x000100083b20(&lStack_68);
          lVar4 = lStack_68;
          lVar6 = lStack_68;
          func_0x000107c5d9dc();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          lVar4 = lVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar4 != 0) {
            func_0x000107c5fadc(uVar9,lVar8);
            func_0x000100083b20(&lStack_68);
            lVar5 = *(long *)(lStack_68 + _DAT_113083f78);
            func_0x000107c61174();
            func_0x000107c61170(lStack_68);
            lVar6 = lVar5;
            func_0x000107c5d984();
            func_0x000107c61180();
            func_0x000107c61170(lVar5);
            if (lVar6 == 0) {
              lVar6 = 0;
              func_0x000107c5faec(0);
              func_0x000107c5fadc();
              func_0x000107c6142c(lVar8);
            }
            puVar7 = PTR_PTR_1126c7238;
            func_0x000107c61168(PTR_PTR_1126c7238);
            func_0x000107c4b920();
            func_0x000107c615e8(lVar2);
            func_0x000107c615e8(lVar1);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar4);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(lVar6);
            return puVar7;
          }
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar1);
          lVar2 = lVar3;
        }
      }
      func_0x000107c615e8(lVar2);
    }
  }
  return (undefined *)0xb;
}



/* Entry: 1025131bc; end: 1025132a3;  */

undefined * FUN_1025131bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_11051b558;
  func_0x000107c613fc(&UNK_11051b558,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_102514818;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1004725e8;
  puStack_48 = &UNK_11051b570;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1025132a4; end: 102513317;  */

void FUN_1025132a4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102513318(param_1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102513318; end: 1025134ef;  */

/* WARNING: Removing unreachable block (ram,0x00010007d98c) */
/* WARNING: Removing unreachable block (ram,0x0001000ac76c) */
/* WARNING: Removing unreachable block (ram,0x0001000ac764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102513318(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(&UNK_10dab5f88 + (ulong)*(byte *)(unaff_x20 + _DAT_112ea36f0) * 8);
  puVar1 = &UNK_11051b6d8;
  func_0x000107c613fc(&UNK_11051b6d8,0x20,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61174();
  func_0x000107c615f0(param_1);
  uVar2 = uVar3;
  func_0x0001001ca524(uVar3,0,0x3c,4,0,0,&UNK_10dab5e68,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return uVar3;
}



/* Entry: 1025134f0; end: 102513557;  */

void FUN_1025134f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x20) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102513558;
  plVar2[0x10] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251368c,0,0);
  return;
}



/* Entry: 102513558; end: 1025135c3;  */

void FUN_102513558(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined1 *)(lVar2 + 0x41) = param_1;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025135c4,uVar3,uVar1);
  return;
}



/* Entry: 1025135c4; end: 102513673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025135c4(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x41);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  if (cVar1 == '\x01') {
    func_0x000100083b20(unaff_x22 + 0x18);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    uVar2 = *(undefined8 *)(lVar3 + _DAT_112ea35c8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar3);
    *(undefined1 *)(unaff_x22 + 0x40) = 1;
    func_0x0001002a64a8();
    func_0x000107c61574(uVar2);
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000102510520();
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102513670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102513674; end: 10251368b;  */

void FUN_102513674(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251368c,0,0);
  return;
}



/* Entry: 10251368c; end: 1025137c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251368c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c44ef0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x88) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1025137c8;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_11051b688;
    func_0x000107c613fc(&UNK_11051b688,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_1025148c4;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1021c011c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051b6a0;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c43314(lVar3);
    func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001025137c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1025137c8; end: 10251383b;  */

void FUN_1025137c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102513808,0,0);
  return;
}



/* Entry: 10251383c; end: 102513997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251383c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      func_0x000107c4077c();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(param_1);
      func_0x000107c4077c(lVar1);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(param_2);
      lVar5 = 0x112d38c88;
      func_0x000102514494(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,
                          &UNK_10d910f30);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c613fc(lVar5,((ulong)*(uint *)(lVar5 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                          *(ushort *)(lVar5 + 0x34) | 7);
      *(undefined8 *)(lVar5 + 0x18) = 5;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined **)(lVar5 + 0x20) = puVar3;
      *(undefined **)(lVar5 + 0x28) = puVar4;
    }
  }
  return;
}



/* Entry: 102513998; end: 102513a47;  */

void FUN_102513998(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1025139e8;
  plVar1[0x11] = 3;
  plVar1[0x12] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102512c44,0,0);
  return;
}



/* Entry: 102513a48; end: 102513adf;  */

void FUN_102513a48(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x28) == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar1 = 1;
    func_0x000107c5fca0(1);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c3fedc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102513aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102513ae0;
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar2[0x10] = 3;
  plVar2[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102512064,0,0);
  return;
}



/* Entry: 102513ae0; end: 102513b4f;  */

void FUN_102513ae0(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x48) = param_1 & 1;
    pcVar1 = FUN_102513b50;
  }
  else {
    pcVar1 = (code *)0x102513c04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102513b50; end: 102513bc7;  */

void FUN_102513b50(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x22;
  ulong uVar4;
  
  uVar4 = (ulong)*(byte *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = uVar4;
  func_0x000107c5fca0(uVar4);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c3fedc(uVar1);
  FUN_102513c40(uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102513bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102513bc8; end: 102513c3f;  */

void FUN_102513bc8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c3fedc(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102513c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102513c40; end: 102513d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102513c40(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_48;
  
  if (*(char *)(unaff_x20 + _DAT_112ea36f0) != '\0') {
    puVar1 = PTR_PTR_1126d54e0;
    func_0x000107c610f8(PTR_PTR_1126d54e0);
    func_0x000107c453e4();
    func_0x000107c59558();
    func_0x000107c520d8(puVar1);
    func_0x000107c5a0f8(puVar1);
    func_0x000100083b20(&uStack_48);
    func_0x000107c4bfb0(uStack_48);
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(uStack_48);
  }
  return;
}



/* Entry: 102513d08; end: 102513d57;  */

void FUN_102513d08(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c44ed0();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61170(param_1);
  }
  *(bool *)*(undefined8 *)(*(long *)(param_3 + 0x40) + 0x28) = param_1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 102513d58; end: 102513d5f;  */

undefined8 FUN_102513d58(void)

{
  return 1;
}



/* Entry: 102513d60; end: 102513dff;  */

void FUN_102513d60(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102513e00; end: 102513e0f;  */

void FUN_102513e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102513e10; end: 102513e6f; -[_TtC37MapArrivalNotificationsImplementation35MapArrivalNotificationsWorkflowImpl init] */

void FUN_102513e10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationsImplementation.MapArrivalNotificationsWorkflowImpl",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102513e3c);
  (*pcVar1)();
}



/* Entry: 102513e70; end: 10251400b; -[_TtC37MapArrivalNotificationsImplementation35MapArrivalNotificationsWorkflowImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102513e70(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea36f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3700));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112ea36f0 + 0x10));
  return;
}



/* Entry: 10251400c; end: 102514067;  */

code * FUN_10251400c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x5d9f);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_102511e48();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_102514068;
}



/* Entry: 102514068; end: 1025141d3;  */

void FUN_102514068(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1025141d4; end: 102514307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1025141d4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0;
  func_0x000102514a68(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  pcVar2 = FUN_10250fb6c;
  func_0x0001000bfde0(FUN_10250fb6c,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar2);
  pcVar2 = pcVar3;
  func_0x000107c5cb24(pcVar3);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(pcVar3);
  return pcVar2;
}



/* Entry: 102514308; end: 10251436b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102514308(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_112ea35e8);
  func_0x000107c5cb24(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  return uVar1;
}



/* Entry: 10251436c; end: 10251437f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251436c(void)

{
  byte *pbVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  pbVar1 = (byte *)(unaff_x20 + _DAT_112ea36f0);
  lVar3 = *(long *)(pbVar1 + 0x10);
  if (lVar3 == 0) {
    func_0x0001000285a8(0x112d6cfe8,&UNK_10d92fd10);
    func_0x00010283c73c(0);
  }
  else {
    uVar5 = *(undefined8 *)(pbVar1 + 8);
    uVar4 = *(undefined8 *)(&UNK_10dab5f88 + (ulong)*pbVar1 * 8);
    puVar2 = &UNK_11051b530;
    func_0x000107c613fc(&UNK_11051b530,0x28,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x18) = uVar5;
    *(long *)(puVar2 + 0x20) = lVar3;
    func_0x000107c61434(lVar3);
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x0001001ca524(uVar4,0,0x3c,4,0,0,&UNK_10dab5dc8,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar5);
    func_0x00010007d980(uVar4,0,0x3c);
    func_0x000100083b20(&lStack_48);
    uVar5 = *(undefined8 *)(lStack_48 + _DAT_112ea35b8);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lStack_48);
    FUN_10283c69c();
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 102514380; end: 1025143c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102514380(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10250fbd0();
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 1025143c4; end: 102514437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025143c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_10250fcc4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(uStack_48);
  return;
}



/* Entry: 102514438; end: 10251450b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102514438(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10250fec4(param_1,param_2);
  func_0x000107c61170(uStack_38);
  return;
}



/* Entry: 10251450c; end: 1025147ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10251450c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  
  FUN_1025122a4(&puStack_98);
  if (cStack_58 == -1) {
    uVar4 = *(undefined8 *)(&UNK_10dab5f88 + (ulong)*(byte *)(unaff_x20 + _DAT_112ea36f0) * 8);
    puVar3 = &UNK_11051b7a0;
    func_0x000107c613fc(&UNK_11051b7a0,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    func_0x000107c61174();
    uVar5 = 0x112dc3dc8;
    func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
    uVar6 = uVar4;
    func_0x0001001ca524(uVar4,0,0x3c,4,0,0,&UNK_10dab5e90,puVar3,uVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar6);
    func_0x00010007d980(uVar4,0,0x3c);
    uVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(&UNK_10dab5f70 + (ulong)*(byte *)(unaff_x20 + _DAT_112ea36f0) * 8);
    func_0x000100083b20(&puStack_110);
    uVar5 = *(undefined8 *)(puStack_110 + _DAT_112ea35e0);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(puStack_110);
    uStack_108 = uStack_90;
    puStack_110 = puStack_98;
    uStack_f8 = uStack_80;
    uStack_100 = uStack_88;
    uStack_e8 = uStack_70;
    ppuStack_f0 = (undefined **)uStack_78;
    uStack_d8 = uStack_60;
    uStack_e0 = uStack_68;
    uStack_d0 = CONCAT71(uStack_d0._1_7_,cStack_58);
    ppuVar1 = &puStack_110;
    func_0x0001006c71a4();
    func_0x000107c61574(uVar5);
    func_0x0001000285a8(0x112ea3738,&UNK_10dab5ea0);
    puStack_110 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar2 = &puStack_110;
    func_0x000100854cb0();
    puStack_110 = (undefined *)0x0;
    uStack_108 = 0;
    uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
    uStack_e0 = 0x4049000000000000;
    uStack_e8 = 0x4051800000000000;
    uStack_d0 = 0x4049000000000000;
    uStack_d8 = 0x4034000000000000;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    uStack_100 = uVar6;
    ppuStack_f0 = ppuVar1;
    ppuStack_c8 = ppuVar2;
    func_0x000100083b20(&puStack_190);
    uVar5 = *(undefined8 *)(puStack_190 + _DAT_112ed0cb8);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(puStack_190);
    ppuStack_148 = ppuStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_120 = uStack_a0;
    uStack_188 = uStack_108;
    puStack_190 = puStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    ppuStack_170 = ppuStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    func_0x00010008a7c8(&uStack_118,&puStack_190);
    func_0x000107c61574(uVar5);
    func_0x000100083b20(&puStack_190);
    func_0x000107c61574(uStack_118);
    ppuVar1 = ppuStack_170;
    uVar5 = uStack_178;
    func_0x0001000a8868(&puStack_190,uStack_178);
    (*(code *)ppuVar1[2])(uVar5,ppuVar1);
    FUN_102514a34(&puStack_110);
    func_0x0001000834e4(&puStack_190);
  }
  return uVar5;
}



/* Entry: 1025147ac; end: 102514817;  */

void FUN_1025147ac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102514bf0;
  plVar4[9] = lVar2;
  plVar4[10] = lVar5;
  plVar4[8] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[0xb] = lVar2;
  func_0x000107c5fce8();
  plVar4[0xc] = lVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  plVar4[0xd] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102512584;
  plVar3[0x11] = 2;
  plVar3[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102512c44,0,0);
  return;
}



/* Entry: 102514818; end: 10251483b;  */

void FUN_102514818(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102513318(param_1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10251483c; end: 102514893;  */

void FUN_10251483c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102514bf8;
  plVar3[4] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[5] = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  plVar3[7] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_102513558;
  plVar2[0x10] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251368c,0,0);
  return;
}



/* Entry: 102514894; end: 1025148a3;  */

undefined1  [16] FUN_102514894(void)

{
  return ZEXT816(0x11051b668);
}



/* Entry: 1025148a4; end: 1025148c3;  */

void FUN_1025148a4(void)

{
  func_0x000107c61168(&PTR_PTR_11284b610);
  return;
}



/* Entry: 1025148c4; end: 1025148cb;  */

void FUN_1025148c4(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c44ed0();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61170(param_1);
  }
  *(bool *)*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28) = param_1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1025148cc; end: 10251492f;  */

void FUN_1025148cc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102514bf4;
  plVar4[2] = lVar1;
  plVar4[3] = lVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  plVar4[4] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x1025139e8;
  plVar3[0x11] = 3;
  plVar3[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102512c44,0,0);
  return;
}



/* Entry: 102514930; end: 10251496f;  */

void FUN_102514930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea3730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab5f28;
  func_0x000107c61520(&UNK_10dab5f28,&UNK_11051b838);
  puRam0000000112ea3730 = puVar1;
  return;
}



/* Entry: 102514970; end: 10251499f;  */

void FUN_102514970(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1025149a0; end: 1025149f7;  */

void FUN_1025149a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1025149f8;
  plVar2[2] = param_1;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102511fb0;
  plVar1[0x10] = 2;
  plVar1[0x11] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102512064,0,0);
  return;
}



/* Entry: 1025149f8; end: 102514a33;  */

void FUN_1025149f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102514a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102514a34; end: 102514aa7;  */

undefined8 FUN_102514a34(undefined8 param_1)

{
  FUN_10297c250();
  return param_1;
}



/* Entry: 102514aa8; end: 102514b97;  */

uint FUN_102514aa8(uint *param_1,int param_2)

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



/* Entry: 102514b98; end: 102514bd7;  */

void FUN_102514b98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea3740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab5f00;
  func_0x000107c61520(&UNK_10dab5f00,&UNK_11051b838);
  puRam0000000112ea3740 = puVar1;
  return;
}



/* Entry: 102514bd8; end: 102514bfb;  */

void FUN_102514bd8(long param_1,long param_2)

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



/* Entry: 102514bfc; end: 102514f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102514bfc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  long *plVar8;
  long lStack_88;
  long lStack_80;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(alStack_78);
  lVar3 = alStack_78[0];
  lVar2 = alStack_78[0] + _DAT_112ea35a0;
  func_0x000107c61618();
  func_0x000107c61170(lVar3);
  if (lVar2 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    func_0x000107c61170(lVar2);
    func_0x000100083b20(alStack_78);
    lVar2 = alStack_78[0];
    lVar3 = alStack_78[0];
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(alStack_78);
    lVar2 = alStack_78[0];
    lVar4 = alStack_78[0];
    func_0x000107c4141c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar4;
    func_0x000107c41414();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    func_0x000100083b20(alStack_78);
    lVar4 = alStack_78[0];
    func_0x000107c5da38();
    func_0x000107c61180();
    func_0x000107c61170(alStack_78[0]);
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000100083b20(alStack_78);
    func_0x0001000a8868(alStack_78,uStack_60);
    uVar6 = 5;
    (**(code **)(lStack_58 + 8))(5,uStack_60,lStack_58);
    lVar7 = 0;
    FUN_102515a10();
    lVar4 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112ea37a8) = 0;
    *(undefined8 *)(lVar4 + _DAT_112ea37b0) = unaff_x20;
    *(long *)(lVar4 + _DAT_112ea37b8) = lVar3;
    *(long *)(lVar4 + _DAT_112ea37c0) = lVar2;
    *(long *)(lVar4 + _DAT_112ea37c8) = lVar5;
    *(undefined8 *)(lVar4 + _DAT_112ea37d0) = uVar6;
    puVar1 = PTR_s_initWithFrame__1125e2948;
    lStack_88 = lVar4;
    lStack_80 = lVar7;
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar2);
    func_0x000107c615f0(lVar5);
    plVar8 = &lStack_88;
    func_0x000107c61154(0,0,0,0,plVar8,puVar1);
    func_0x000107c61180();
    FUN_102515378();
    func_0x000107c61170(plVar8);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar5);
    func_0x0001000834e4(alStack_78);
  }
  return plVar8;
}



/* Entry: 102514f38; end: 10251513b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102514f38(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lStack_70;
  long lStack_68;
  
  plVar6 = &lStack_70;
  lVar3 = param_2;
  FUN_102515234();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea3770;
  uVar5 = 0x112e5c570;
  func_0x0001000285a8(0x112e5c570,&UNK_10dab5c40);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(long *)(lVar4 + _DAT_112ea3760) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112ea3750) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112ea3758) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112ea3768) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112ea3748) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61154(&lStack_70,puVar1);
  *param_1 = plVar6;
  return;
}


