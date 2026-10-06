/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10251ffa8; end: 10251ffb3;  */

/* WARNING: Possible PIC construction at 0x00010251dc04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251dc08) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ffa8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112ea3ac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = lVar4;
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar1 = unaff_x20 + _DAT_112ea3ae8;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    func_0x000107c4077c(lVar5);
    (**(code **)(lVar3 + 0x28))(uVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 10251ffb4; end: 102520077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ffb4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar5 = _DAT_112ea3a98;
  func_0x000107c61428(unaff_x20 + _DAT_112ea3a98,auStack_58,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(lVar5);
    func_0x000107c4807c(puVar4);
    lVar1 = unaff_x20 + _DAT_112ea3ae8;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    (**(code **)(lVar3 + 0x10))(puVar4,uVar2,lVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 102520078; end: 102520083;  */

undefined * FUN_102520078(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_11051bfe0;
  func_0x000107c613fc(&UNK_11051bfe0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x1025224f4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1004725e8;
  puStack_48 = &UNK_11051c048;
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



/* Entry: 102520084; end: 102520237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102520084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar1 = &UNK_11051c0a8;
  func_0x000107c613fc(&UNK_11051c0a8,0x30,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  puVar2 = &UNK_11051c0d0;
  func_0x000107c613fc(&UNK_11051c0d0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab62c0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar3 = 0x50;
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab62c8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea3b18);
  lVar4 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  uVar3 = 0;
  func_0x000102522c7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar4 + 0x38) = uVar3;
  *(undefined **)(lVar4 + 0x20) = puVar1;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_2);
  *(undefined8 *)(lVar4 + 0x58) = uVar3;
  *(undefined **)(lVar4 + 0x40) = puVar1;
  uVar3 = 0;
  func_0x000102522c7c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c600f0(lVar4,uVar3);
  func_0x000107c4d664(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 102520238; end: 1025202fb; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102520238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112ea3a98;
  func_0x000107c61428(param_1 + _DAT_112ea3a98,auStack_48,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar2);
    func_0x000107c4807c(puVar1);
    func_0x000107c3e2c0();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1025202fc; end: 102520363; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025202fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea3a98;
  func_0x000107c61428(param_1 + _DAT_112ea3a98,auStack_38,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102520364; end: 102520383; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl permissionsPromptSource] */

void FUN_102520364(void)

{
  func_0x000107c5fadc(0x54414843,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102520384; end: 10252043b; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl updateCurrentUserVisibilityOnMapWithIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102520384(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_38;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 != 0) {
    puVar2 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    uVar1 = ((undefined8 *)(param_1 + _DAT_112ea3ac8))[1];
    *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ea3ac8);
    *(undefined8 *)(puVar2 + 0x28) = uVar1;
    func_0x000107c61434();
  }
  puStack_38 = puVar2;
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&puStack_38);
  func_0x000107c6142c(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10252043c; end: 1025204ef; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl getCurrentUserLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252043c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  puVar3 = *(undefined **)(param_1 + _DAT_112ea3af0);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112ea3af0))[1];
  func_0x000107c614f0();
  pcVar5 = *(code **)(lVar2 + 0x78);
  func_0x000107c61174(param_1);
  (*pcVar5)(puVar3,lVar2);
  func_0x000107c61170(param_1);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  uVar4 = 0;
  func_0x000102522c7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar1;
  func_0x000107c5fc48(puVar1,uVar4);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1025204f0; end: 10252055b;  */

void FUN_1025204f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252055c,uVar1,uVar2);
  return;
}



/* Entry: 10252055c; end: 10252061b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252055c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  lVar1 = *(long *)(lVar1 + _DAT_112ea3ac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4077c();
      *(undefined8 *)(unaff_x22 + 0x10) = param_1;
      *(undefined8 *)(unaff_x22 + 0x18) = param_2;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x4028000000000000;
      *(undefined8 *)(unaff_x22 + 0x38) = 0x4049000000000000;
      *(undefined8 *)(unaff_x22 + 0x30) = 0x4051800000000000;
      *(undefined8 *)(unaff_x22 + 0x48) = 0x4049000000000000;
      *(undefined8 *)(unaff_x22 + 0x40) = 0x4034000000000000;
      *(undefined1 *)(unaff_x22 + 0x50) = 0;
      func_0x0001002a64a8(unaff_x22 + 0x10);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102520618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10252061c; end: 1025206e7; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl handleCenterMapOnUserLocation] */

void FUN_10252061c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11051c2b0;
  func_0x000107c613fc(&UNK_11051c2b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11051c2d8;
  func_0x000107c613fc(&UNK_11051c2d8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab6340;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x50;
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6348,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025206e8; end: 10252085b; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl handleSendDropPinWithCentroid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025206e8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  func_0x000102522c7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c5fc54(param_4,uVar5);
  if ((param_4 & 0xc000000000000001) == 0) {
    if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102520858);
      (*pcVar3)();
    }
    uVar6 = *(undefined8 *)(param_4 + 0x20);
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar6);
    func_0x000107c4223c();
    uVar5 = param_1;
    func_0x000107c61170(uVar6);
    if (*(ulong *)((param_4 & 0xffffffffffffff8) + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10252085c);
      (*pcVar3)();
    }
    iVar4 = (int)*(undefined8 *)(param_4 + 0x28);
    func_0x000107c61174();
  }
  else {
    func_0x000107c61174(param_2);
    uVar6 = 0;
    func_0x000102521e28(0,param_4,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    func_0x000107c4223c();
    uVar5 = param_1;
    func_0x000107c61170(uVar6);
    iVar4 = 1;
    func_0x000102521e28(1,param_4,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
  }
  func_0x000107c4223c();
  func_0x000107c61170();
  func_0x000107c60a00(param_1,uVar5);
  if (iVar4 != 0) {
    lVar1 = param_2 + _DAT_112ea3ae8;
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar6);
    (**(code **)(lVar2 + 0x28))(param_1,uVar5,uVar6,lVar2);
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10252085c; end: 1025208c7;  */

void FUN_10252085c(undefined8 param_1)

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
  (*(code *)PTR__swift_task_switch_110350130)(0x102522e40,uVar1,uVar2);
  return;
}



/* Entry: 1025208c8; end: 1025209bf; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl handleSendPlaceCardWithPlaceID:] */

void FUN_1025208c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174();
  FUN_10251f8a8(param_3,param_2);
  puVar1 = &UNK_11051c260;
  func_0x000107c613fc(&UNK_11051c260,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11051c288;
  func_0x000107c613fc(&UNK_11051c288,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab6330;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  uVar3 = 0x50;
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6338,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025209c0; end: 102520ae3;  */

undefined * FUN_1025209c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_11051bfe0;
  func_0x000107c613fc(&UNK_11051bfe0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11051c0f8;
  func_0x000107c613fc(&UNK_11051c0f8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_10252263c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_11051c110;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar2 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 102520ae4; end: 102520b73;  */

void FUN_102520ae4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102520b74(param_3,param_4,param_1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102520b74; end: 102520d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102520b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea3b50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    func_0x000107c61434(param_2);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar2);
    puVar5 = &UNK_11051bfe0;
    func_0x000107c613fc(&UNK_11051bfe0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar7 = &UNK_11051c350;
    func_0x000107c613fc(&UNK_11051c350,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar5;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    pcStack_50 = FUN_102522a58;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1025214c0;
    puStack_58 = &UNK_11051c368;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c615f0(param_3);
    func_0x000107c61574(puVar5);
    func_0x000107c43134(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar3);
    return;
  }
  puVar5 = PTR_PTR_1126aa9f8;
  func_0x000107c610f8(PTR_PTR_1126aa9f8);
  uVar6 = 0;
  func_0x000102522c7c(0,0x112ea3a68,&PTR_PTR_1126b2160);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar6);
  func_0x000107c4748c(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c4d664(param_3);
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 102520d7c; end: 102520de3; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl getPlaceCardDataObservableWithPlaceID:] */

void FUN_102520d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1025209c0(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102520de4; end: 102520e53;  */

void FUN_102520de4(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102520e54,uVar1,uVar2);
  return;
}



/* Entry: 102520e54; end: 102520feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102520e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  lVar9 = *(long *)(lVar9 + _DAT_112ea3ac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar4 = lVar9;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    if (lVar4 != 0) {
      lVar8 = *(long *)(unaff_x22 + 0x28);
      func_0x000107c4077c(lVar4);
      func_0x000107c61170(lVar4);
      uVar7 = 0x409f400000000000;
      func_0x000108d31f58(param_1,param_2,0x409f400000000000);
      lVar9 = _DAT_112ea3a98;
      func_0x000107c61428(lVar8 + _DAT_112ea3a98,unaff_x22 + 0x10,0,0);
      lVar9 = *(long *)(lVar8 + lVar9);
      if (lVar9 != 0) {
        uVar3 = *(undefined1 *)(unaff_x22 + 0x40);
        lVar4 = *(long *)(unaff_x22 + 0x28);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
        func_0x000107c61174();
        lVar5 = lVar9;
        FUN_10283c7d8();
        puVar6 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        lVar4 = lVar4 + _DAT_112ea3ae8;
        uVar1 = *(undefined8 *)(lVar4 + 0x18);
        lVar8 = *(long *)(lVar4 + 0x20);
        func_0x0001000a8868(lVar4,uVar1);
        (**(code **)(lVar8 + 0x30))(param_1,param_2,uVar7,param_4,puVar6,uVar3,uVar2,uVar1,lVar8);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar9);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102520fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102520fec; end: 1025210e7; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl handleSearchButtonTapWithSearchFirstFlowEnabled:suggestedPlacesConfig:] */

/* WARNING: Possible PIC construction at 0x0001025210cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025210d0) */

void FUN_102520fec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11051c210;
  func_0x000107c613fc(&UNK_11051c210,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar1[0x18] = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puVar2 = &UNK_11051c238;
  func_0x000107c613fc(&UNK_11051c238,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab6320;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  uVar3 = 0x50;
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6328,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1025210e8; end: 102521157;  */

void FUN_1025210e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102521158,uVar1,uVar2);
  return;
}



/* Entry: 102521158; end: 1025211fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102521158(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001025211f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025211fc; end: 1025214bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025211fc(undefined8 param_1,ulong param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_68 [24];
  
  if (param_2 != 0) {
    uVar10 = param_2 & 0xffffffffffffff8;
    if (param_2 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar9 = param_2;
      if (-1 < (long)param_2) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar9 != 0) {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1025214c0);
          (*pcVar1)();
        }
        lVar2 = *(long *)(param_2 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar2 = 0;
        func_0x000102521e28(0,param_2,&PTR_PTR_1126cd890,0x112ea3b90);
      }
      if (param_3 == 0) {
        func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
        param_4 = param_4 + 0x10;
        func_0x000107c61618();
        if (param_4 != 0) {
          lVar3 = *(long *)(param_4 + _DAT_112ea3b58);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar3 == 0) {
            func_0x000107c61170(param_4);
          }
          else {
            func_0x000107c4aad8(lVar2);
            uVar6 = param_1;
            func_0x000107c4b6f0(lVar2);
            lVar4 = lVar3;
            func_0x000107c4408c(param_1,uVar6);
            func_0x000107c61180();
            lVar5 = lVar2;
            func_0x0001068779ec(lVar2,lVar4);
            func_0x000107c61180();
            func_0x000107c61170(param_4);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170();
            if (lVar5 != 0) {
              func_0x00010251c31c();
              func_0x000107c613fc();
              *(undefined8 *)(lVar4 + 0x18) = 3;
              *(undefined8 *)(lVar4 + 0x10) = 1;
              *(long *)(lVar4 + 0x20) = lVar5;
              puVar7 = PTR_PTR_1126aa9f8;
              func_0x000107c610f8(PTR_PTR_1126aa9f8);
              uVar6 = 0;
              func_0x000102522c7c(0,0x112ea3a68,&PTR_PTR_1126b2160);
              func_0x000107c61174(lVar5);
              lVar3 = lVar4;
              func_0x000107c5fc48(lVar4,uVar6);
              func_0x000107c61574(lVar4);
              func_0x000107c4748c(puVar7);
              func_0x000107c61170(lVar3);
              func_0x000107c4d664(param_5);
              func_0x000107c61170(puVar7);
              func_0x000107c3fedc(param_5);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar5);
              return;
            }
          }
        }
      }
      func_0x000107c61170();
    }
  }
  puVar7 = PTR_PTR_1126aa9f8;
  func_0x000107c610f8(PTR_PTR_1126aa9f8);
  uVar6 = 0;
  func_0x000102522c7c(0,0x112ea3a68,&PTR_PTR_1126b2160);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar6);
  func_0x000107c4748c(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c4d664(param_5);
  func_0x000107c61170(puVar7);
  func_0x000107c3fedc(param_5);
  return;
}



/* Entry: 1025214c0; end: 102521553;  */

void FUN_1025214c0(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x000102522c7c(0,0x112ea3b90,&PTR_PTR_1126cd890);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102521554; end: 1025215bb; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl launchEmojiPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102521554(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3af0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea3af0))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x80);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025215bc; end: 10252165b;  */

/* WARNING: Possible PIC construction at 0x000102521644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102521648) */

void FUN_1025215bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11051c328;
  func_0x000107c613fc(&UNK_11051c328,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dab6360;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6370,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10252165c; end: 1025216c7;  */

void FUN_10252165c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025216c8,uVar1,uVar2);
  return;
}



/* Entry: 1025216c8; end: 102521777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025216c8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x38,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_10251747c(lVar3 + _DAT_112ea3ae8,unaff_x22 + 0x10);
    func_0x000107c61170(lVar3);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
    (**(code **)(lVar2 + 0x38))(uVar1,lVar2);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000102521774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3 == 0);
  return;
}



/* Entry: 102521778; end: 1025217bb;  */

void FUN_102521778(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001025217b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1025217bc; end: 102521883; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl presentDirectionsMenuWithLat:lng:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025217bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112ea3af0);
  lVar1 = ((undefined8 *)(param_3 + _DAT_112ea3af0))[1];
  func_0x000107c614f0(uVar2);
  puVar3 = &UNK_11051bfe0;
  func_0x000107c613fc(&UNK_11051bfe0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_3);
  pcVar4 = *(code **)(lVar1 + 0x88);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar3);
  (*pcVar4)(param_1,param_2,0x102522e78,puVar3,uVar2,lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61578(puVar3,2);
  return;
}



/* Entry: 102521884; end: 1025218ab; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl getPinLocationUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102521884(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112ea3b18));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025218ac; end: 1025218b3;  */

undefined8 FUN_1025218ac(void)

{
  return 1;
}



/* Entry: 1025218b4; end: 102521953;  */

void FUN_1025218b4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102521954; end: 102521963;  */

void FUN_102521954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102521964; end: 1025219e3;  */

undefined * FUN_102521964(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1025219e4; end: 1025219ff;  */

ulong FUN_1025219e4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102521b48);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102521964(uVar2,uVar4,FUN_10251c2f8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102521b44);
      (*pcVar1)();
    }
    func_0x000102521b48(0,uVar2,uVar3 + 0x20,param_4,0x112ea3a58,&PTR_PTR_1126aa9d0);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102521a00; end: 102521c63;  */

ulong FUN_102521a00(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102521b48);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102521964(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102521b44);
      (*pcVar1)();
    }
    func_0x000102521b48(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102521c64; end: 102521fe3;  */

ulong FUN_102521c64(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102521d48);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102521d4c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126dab40;
    func_0x000107c61168(PTR_PTR_1126dab40);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126dab40;
    func_0x000107c61168(PTR_PTR_1126dab40);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102522c7c(0,0x112ea39b8,&PTR_PTR_1126dab40);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102521e28);
  (*pcVar2)();
}



/* Entry: 102521fe4; end: 1025224c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102521fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                    undefined8 param_21,long param_22,long param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  lVar3 = param_22;
  func_0x000107c614f0();
  lStack_78 = param_23;
  uStack_70 = param_24;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(param_23 + -8) + 0x20))();
  lVar5 = _DAT_112ea3a90;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_22 + lVar5) = puVar4;
  *(undefined8 *)(param_22 + _DAT_112ea3aa0) = 0;
  lVar2 = _DAT_112ea3af8;
  lVar5 = 0x112ea35c0;
  func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
  lVar6 = lVar5;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(param_22 + lVar2) = lVar6;
  lVar2 = _DAT_112ea3aa8;
  uVar7 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(param_22 + lVar2) = uVar7;
  lVar2 = _DAT_112ea3b00;
  lVar6 = lVar5;
  func_0x000107c613fc(lVar5,*(undefined4 *)(lVar5 + 0x30),*(undefined2 *)(lVar5 + 0x34));
  func_0x0001000c2754();
  *(long *)(param_22 + lVar2) = lVar6;
  lVar2 = _DAT_112ea3ab0;
  func_0x000107c613fc(lVar5,*(undefined4 *)(lVar5 + 0x30),*(undefined2 *)(lVar5 + 0x34));
  func_0x0001000c2754();
  *(long *)(param_22 + lVar2) = lVar5;
  lVar5 = _DAT_112ea3ad8;
  uVar7 = 0x112ea3810;
  func_0x0001000285a8(0x112ea3810,&UNK_10dab6230);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_22 + lVar5) = uVar7;
  lVar5 = _DAT_112ea3ae0;
  uVar7 = 0x112ea2f30;
  func_0x0001000285a8(0x112ea2f30,&UNK_10dab5c10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_22 + lVar5) = uVar7;
  lVar5 = _DAT_112ea3b10;
  uVar7 = 0x112ea35d8;
  func_0x0001000285a8(0x112ea35d8,&UNK_10dab6240);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_22 + lVar5) = uVar7;
  lVar5 = _DAT_112ea3b18;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_22 + lVar5) = puVar4;
  *(undefined8 *)(param_22 + _DAT_112ea3a98) = 0;
  FUN_10251747c(auStack_90,param_22 + _DAT_112ea3ae8);
  puVar1 = (undefined8 *)(param_22 + _DAT_112ea3af0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(param_22 + _DAT_112ea3ac8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(param_22 + _DAT_112ea3b20) = param_6;
  puVar1 = (undefined8 *)(param_22 + _DAT_112ea3b28);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(param_22 + _DAT_112ea3ab8) = param_9;
  *(undefined8 *)(param_22 + _DAT_112ea3b08) = param_10;
  *(undefined8 *)(param_22 + _DAT_112ea3b30) = param_11;
  *(undefined8 *)(param_22 + _DAT_112ea3b38) = param_12;
  *(undefined8 *)(param_22 + _DAT_112ea3ac0) = param_13;
  *(undefined8 *)(param_22 + _DAT_112ea3a88) = param_14;
  *(undefined8 *)(param_22 + _DAT_112ea3a80) = param_15;
  *(undefined8 *)(param_22 + _DAT_112ea3ad0) = param_16;
  *(undefined8 *)(param_22 + _DAT_112ea3b40) = param_17;
  *(undefined8 *)(param_22 + _DAT_112ea3b48) = param_18;
  *(undefined8 *)(param_22 + _DAT_112ea3b50) = param_19;
  *(undefined8 *)(param_22 + _DAT_112ea3b58) = param_20;
  *(undefined8 *)(param_22 + _DAT_112ea3b60) = param_21;
  lStack_a0 = param_22;
  plVar8 = &lStack_a0;
  lStack_98 = lVar3;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_90);
  return plVar8;
}



/* Entry: 1025224c8; end: 1025224fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025224c8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112ea3a98;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112ea3a98,auStack_60,0,0);
    lVar4 = *(long *)(lVar1 + lVar4);
    if (lVar4 != 0) {
      lVar2 = *(long *)(lVar4 + _DAT_112ea39c8);
      if (lVar2 != 0) {
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar4;
        FUN_10251ba60();
        if (lVar3 != 0) {
          func_0x000107c61174();
          func_0x000107c5a588(lVar2);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar2 = lVar3;
        }
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
        lVar1 = lVar4;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1025224fc; end: 10252255f;  */

void FUN_1025224fc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102522e44;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251e16c,0,0);
  return;
}



/* Entry: 102522560; end: 1025225cb;  */

void FUN_102522560(void)

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
  plVar3[1] = 0x102522e48;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102521158,lVar1,lVar2);
  return;
}



/* Entry: 1025225cc; end: 10252263b;  */

void FUN_1025225cc(undefined8 param_1)

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
  plVar3[1] = 0x102522e4c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10252263c; end: 10252264f;  */

void FUN_10252263c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102520b74(uVar1,uVar3,param_1);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102522650; end: 10252266f;  */

void FUN_102522650(void)

{
  func_0x000107c61168(&PTR_PTR_11284bdb0);
  return;
}



/* Entry: 102522670; end: 1025226d3;  */

void FUN_102522670(void)

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
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102522e50;
  *(undefined1 *)(plVar2 + 8) = uVar1;
  plVar2[5] = lVar3;
  plVar2[6] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar2[7] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102520e54,lVar4,lVar3);
  return;
}



/* Entry: 1025226d4; end: 102522743;  */

void FUN_1025226d4(undefined8 param_1)

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
  plVar3[1] = 0x102522e54;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102522744; end: 10252278f;  */

void FUN_102522744(void)

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
  plVar2[1] = 0x102522e58;
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
  (*(code *)PTR__swift_task_switch_110350130)(0x102522e40,lVar1,lVar3);
  return;
}



/* Entry: 102522790; end: 1025227ff;  */

void FUN_102522790(undefined8 param_1)

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
  plVar3[1] = 0x102522e5c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102522800; end: 102522887;  */

void FUN_102522800(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10252284c;
  plVar2[0xb] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xc] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252055c,lVar1,lVar3);
  return;
}



/* Entry: 102522888; end: 1025228f7;  */

void FUN_102522888(undefined8 param_1)

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
  plVar3[1] = 0x102522e60;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1025228f8; end: 10252295b;  */

void FUN_1025228f8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102522e64;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251e16c,0,0);
  return;
}



/* Entry: 10252295c; end: 1025229e7;  */

void FUN_10252295c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1025229a4;
  plVar3[10] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xb] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025216c8,lVar1,lVar2);
  return;
}



/* Entry: 1025229e8; end: 102522a57;  */

void FUN_1025229e8(undefined8 param_1)

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
  plVar3[1] = 0x102522e68;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102522a58; end: 102522a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102522a58(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_2 != 0) {
    uVar12 = param_2 & 0xffffffffffffff8;
    if (param_2 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar11 = param_2;
      if (-1 < (long)param_2) {
        uVar11 = uVar12;
      }
      func_0x000107c60480();
    }
    if (uVar11 != 0) {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1025214c0);
          (*pcVar2)();
        }
        lVar3 = *(long *)(param_2 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar3 = 0;
        func_0x000102521e28(0,param_2,&PTR_PTR_1126cd890,0x112ea3b90);
      }
      if (param_3 == 0) {
        func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
        lVar4 = lVar4 + 0x10;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar5 = *(long *)(lVar4 + _DAT_112ea3b58);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar4);
          }
          else {
            func_0x000107c4aad8(lVar3);
            uVar8 = param_1;
            func_0x000107c4b6f0(lVar3);
            lVar6 = lVar5;
            func_0x000107c4408c(param_1,uVar8);
            func_0x000107c61180();
            lVar7 = lVar3;
            func_0x0001068779ec(lVar3,lVar6);
            func_0x000107c61180();
            func_0x000107c61170(lVar4);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170();
            if (lVar7 != 0) {
              func_0x00010251c31c();
              func_0x000107c613fc();
              *(undefined8 *)(lVar6 + 0x18) = 3;
              *(undefined8 *)(lVar6 + 0x10) = 1;
              *(long *)(lVar6 + 0x20) = lVar7;
              puVar9 = PTR_PTR_1126aa9f8;
              func_0x000107c610f8(PTR_PTR_1126aa9f8);
              uVar8 = 0;
              func_0x000102522c7c(0,0x112ea3a68,&PTR_PTR_1126b2160);
              func_0x000107c61174(lVar7);
              lVar4 = lVar6;
              func_0x000107c5fc48(lVar6,uVar8);
              func_0x000107c61574(lVar6);
              func_0x000107c4748c(puVar9);
              func_0x000107c61170(lVar4);
              func_0x000107c4d664(uVar1);
              func_0x000107c61170(puVar9);
              func_0x000107c3fedc(uVar1);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar7);
              return;
            }
          }
        }
      }
      func_0x000107c61170();
    }
  }
  puVar9 = PTR_PTR_1126aa9f8;
  func_0x000107c610f8(PTR_PTR_1126aa9f8);
  uVar8 = 0;
  func_0x000102522c7c(0,0x112ea3a68,&PTR_PTR_1126b2160);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar8);
  func_0x000107c4748c(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(puVar9);
  func_0x000107c3fedc(uVar1);
  return;
}



/* Entry: 102522a60; end: 102522aab;  */

void FUN_102522a60(void)

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
  plVar2[1] = 0x102522e6c;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251f844,lVar1,lVar3);
  return;
}



/* Entry: 102522aac; end: 102522b1b;  */

void FUN_102522aac(undefined8 param_1)

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
  plVar3[1] = 0x102522e70;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102522b1c; end: 102522b37;  */

void FUN_102522b1c(undefined1 *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102522b38; end: 102522b6f;  */

void FUN_102522b38(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102522b70; end: 102522bd3;  */

void FUN_102522b70(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102522e74;
  plVar4[2] = lVar1;
  plVar4[3] = lVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  plVar4[4] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x10251e810;
  plVar3[0x11] = 2;
  plVar3[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251ec60,0,0);
  return;
}



/* Entry: 102522bd4; end: 102522be3;  */

bool FUN_102522bd4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 102522be4; end: 102522c23;  */

void FUN_102522be4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea3b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab644c;
  func_0x000107c61520(&UNK_10dab644c,&UNK_11051c6b8);
  puRam0000000112ea3b98 = puVar1;
  return;
}



/* Entry: 102522c24; end: 102522c5b;  */

void FUN_102522c24(undefined1 param_1)

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



/* Entry: 102522c5c; end: 102522cbb;  */

void FUN_102522c5c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102522cbc; end: 102522dab;  */

uint FUN_102522cbc(uint *param_1,int param_2)

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



/* Entry: 102522dac; end: 102522deb;  */

void FUN_102522dac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea3ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab6424;
  func_0x000107c61520(&UNK_10dab6424,&UNK_11051c6b8);
  puRam0000000112ea3ba0 = puVar1;
  return;
}



/* Entry: 102522dec; end: 102522e7b;  */

void FUN_102522dec(long param_1,long param_2)

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



/* Entry: 102522e7c; end: 102523077;  */

/* WARNING: Possible PIC construction at 0x000102522fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102522fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102522fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102522fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102522fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102522ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102523008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102523018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102523028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102523038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102523048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010252303c) */
/* WARNING: Removing unreachable block (ram,0x00010252302c) */
/* WARNING: Removing unreachable block (ram,0x00010252301c) */
/* WARNING: Removing unreachable block (ram,0x00010252300c) */
/* WARNING: Removing unreachable block (ram,0x000102522ffc) */
/* WARNING: Removing unreachable block (ram,0x000102522fec) */
/* WARNING: Removing unreachable block (ram,0x000102522fdc) */
/* WARNING: Removing unreachable block (ram,0x000102522fcc) */
/* WARNING: Removing unreachable block (ram,0x000102522fbc) */
/* WARNING: Removing unreachable block (ram,0x000102522fac) */
/* WARNING: Removing unreachable block (ram,0x00010252304c) */

void FUN_102522e7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  code *pcVar24;
  long unaff_x20;
  undefined8 uVar25;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xc0);
  puVar22 = &UNK_11051c830;
  func_0x000107c613fc(&UNK_11051c830,200,7);
  *(undefined8 *)(puVar22 + 0x10) = uVar1;
  *(undefined8 *)(puVar22 + 0x18) = uVar11;
  *(undefined8 *)(puVar22 + 0x20) = uVar23;
  *(undefined8 *)(puVar22 + 0x28) = uVar12;
  *(undefined8 *)(puVar22 + 0x30) = uVar2;
  *(undefined8 *)(puVar22 + 0x38) = uVar13;
  *(undefined8 *)(puVar22 + 0x40) = uVar3;
  *(undefined8 *)(puVar22 + 0x48) = uVar14;
  *(undefined8 *)(puVar22 + 0x50) = uVar4;
  *(undefined8 *)(puVar22 + 0x58) = uVar15;
  *(undefined8 *)(puVar22 + 0x60) = uVar5;
  *(undefined8 *)(puVar22 + 0x68) = uVar16;
  *(undefined8 *)(puVar22 + 0x70) = uVar6;
  *(undefined8 *)(puVar22 + 0x78) = uVar17;
  *(undefined8 *)(puVar22 + 0x80) = uVar7;
  *(undefined8 *)(puVar22 + 0x88) = uVar18;
  *(undefined8 *)(puVar22 + 0x90) = uVar8;
  *(undefined8 *)(puVar22 + 0x98) = uVar19;
  *(undefined8 *)(puVar22 + 0xa0) = uVar9;
  *(undefined8 *)(puVar22 + 0xa8) = uVar20;
  *(undefined8 *)(puVar22 + 0xb0) = uVar10;
  *(undefined8 *)(puVar22 + 0xb8) = uVar21;
  *(undefined8 *)(puVar22 + 0xc0) = uVar25;
  uVar23 = 0x112ea3bb0;
  func_0x0001000285a8(0x112ea3bb0,&UNK_10dab6538);
  func_0x000107c613fc();
  pcVar24 = FUN_10252315c;
  func_0x0001000841fc(FUN_10252315c,puVar22,uVar23);
  func_0x000100084214(&UNK_10dab6500,0x30,2);
  *param_1 = pcVar24;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102523078; end: 102523087;  */

undefined1  [16] FUN_102523078(void)

{
  return ZEXT816(0x11051c810);
}



/* Entry: 102523088; end: 10252315b;  */

void FUN_102523088(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10252315c; end: 10252335f;  */

void FUN_10252315c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x20;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 auStack_70 [2];
  
  uVar20 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar26 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar23 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar24 = *param_2;
  func_0x0001000285a8(0x112ea3bb8,&UNK_10dab6540);
  puVar18 = auStack_70;
  auStack_70[0] = uVar24;
  func_0x0001000838ec();
  puVar19 = puVar18;
  FUN_102619ecc();
  func_0x000100082720("MapCustomizationMetricLoggingHandlerServiceProvider",0x33,2);
  uVar24 = uVar20;
  FUN_102523360(uVar20,uVar9,uVar22,uVar10,uVar1,uVar11);
  func_0x000100082720("HomeLocationEditorScopedFactoryServiceProvider",0x2e,2);
  FUN_10261dcdc(uVar20,uVar2,uVar12,uVar10,uVar3,uVar24,uVar13,uVar4,uVar14,uVar22,puVar18,uVar5);
  func_0x000100082720("MapHomeContextProviderServiceProvider",0x25,2);
  func_0x00010261c748(uVar21,uVar6,uVar11,uVar15,uVar7,uVar16,uVar8,uVar20,uVar17,puVar19,uVar25,
                      uVar26,uVar23,puVar18);
  func_0x000100082720("MapCustomizationTrayViewProviderServiceProvider",0x2f,2);
  uVar22 = uVar20;
  FUN_102618f30(uVar20,puVar18,uVar21);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(puVar19);
  func_0x000107c61574(puVar18);
  func_0x000100082720("MapCustomizationTrayPresenterEntryPointProvider",0x2f,2);
  *param_1 = uVar22;
  return;
}



/* Entry: 102523360; end: 10252350b;  */

void FUN_102523360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea3bc0,&UNK_10dab6550);
  puVar1 = &UNK_11051c900;
  func_0x000107c613fc(&UNK_11051c900,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x102523428,puVar1);
  return;
}



/* Entry: 10252350c; end: 10252351b;  */

undefined1  [16] FUN_10252350c(void)

{
  return ZEXT816(0x11051c928);
}



/* Entry: 10252351c; end: 102523567;  */

void FUN_10252351c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102523568; end: 10252361b;  */

void FUN_102523568(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000285a8(0x112ea3bd0,&UNK_10dab65d8);
  func_0x0001000838ec(param_2);
  FUN_102616a50(uVar6,uVar3,uVar1,uVar4,param_2,uVar2,uVar5);
  func_0x000107c61574(param_2);
  func_0x000100082720("HomeLocationEditorPresenterEntryPointProvider",0x2d,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 10252361c; end: 102523687;  */

void FUN_10252361c(void)

{
  func_0x0001000285a8(0x112ea0e28,&UNK_10dab2e60);
  func_0x0001000823a8(0x10252365c,0);
  return;
}



/* Entry: 102523688; end: 1025236e3; -[_TtC27MapDropShareReportingPlugin27MapDropShareReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_102523688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102523840(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1025236e4; end: 1025236fb; -[_TtC27MapDropShareReportingPlugin27MapDropShareReportingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001025236f8) */

void FUN_1025236e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025236fc; end: 102523703; -[_TtC27MapDropShareReportingPlugin27MapDropShareReportingPlugin isReportableForMessage:] */

undefined8 FUN_1025236fc(void)

{
  return 1;
}



/* Entry: 102523704; end: 10252373f; -[_TtC27MapDropShareReportingPlugin27MapDropShareReportingPlugin init] */

void FUN_102523704(undefined8 param_1)

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



/* Entry: 102523740; end: 102523773;  */

void FUN_102523740(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102523774; end: 10252377b;  */

undefined8 FUN_102523774(void)

{
  return 1;
}



/* Entry: 10252377c; end: 10252381b;  */

void FUN_10252377c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10252381c; end: 10252383f;  */

void FUN_10252381c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102523840; end: 102523ae3;  */

undefined * FUN_102523840(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126b2b98;
  func_0x000107c610f8(PTR_PTR_1126b2b98);
  func_0x000107c453e4();
  func_0x000107c4051c();
  func_0x000107c61180();
  if (param_2 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102523aa4);
      (*pcVar1)();
    }
    puVar4 = puVar3;
    func_0x000107c4c30c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar3 = puVar4;
      func_0x000107c4e72c();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102523aa8);
        (*pcVar1)();
      }
      puVar5 = puVar3;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      if (puVar5 != (undefined *)0x0) {
        puVar3 = puVar4;
        func_0x000107c4e734();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
          func_0x000107c61170(puVar5);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102523ab4);
          (*pcVar1)();
        }
        puVar6 = puVar3;
        func_0x000107c5cb4c();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        if (puVar6 != (undefined *)0x0) {
          func_0x000107c4ab14(puVar4);
          uVar9 = param_1;
          func_0x000107c4c0e4(puVar4);
          puVar3 = puVar4;
          func_0x000107c4e73c();
          func_0x000107c61180();
          if (puVar3 == (undefined *)0x0) {
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar6);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102523ac8);
            (*pcVar1)();
          }
          puVar7 = puVar4;
          func_0x000107c424f8();
          func_0x000107c61180();
          if (puVar7 == (undefined *)0x0) {
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar6);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102523ae4);
            (*pcVar1)();
          }
          puVar8 = PTR_PTR_1126aaa00;
          func_0x000107c610f8(PTR_PTR_1126aaa00);
          func_0x000107c46260(param_1,uVar9);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar6);
          func_0x000107c56210(puVar2);
          puVar3 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          func_0x000107c451b0();
          func_0x000107c61180();
          func_0x000107c61170(puVar2);
          puVar2 = puVar4;
          goto LAB_102523a70;
        }
        func_0x000107c61170(puVar4);
        puVar4 = puVar5;
      }
      func_0x000107c61170(puVar4);
    }
  }
  puVar3 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar5 = puVar3;
  func_0x000102523b3c();
  puVar4 = &UNK_11051caa8;
  func_0x000107c613f8(&UNK_11051caa8,puVar5,0,0);
  puVar8 = puVar4;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar4);
  func_0x000107c451ac(puVar3);
  func_0x000107c61180();
LAB_102523a70:
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar8);
  return puVar3;
}



/* Entry: 102523ae4; end: 102523b1b;  */

undefined ** FUN_102523ae4(void)

{
  return &PTR_DAT_112f2d890;
}



/* Entry: 102523b1c; end: 102523b7b;  */

void FUN_102523b1c(void)

{
  func_0x000107c61168(&PTR_PTR_11284bf50);
  return;
}



/* Entry: 102523b7c; end: 102523c6b;  */

uint FUN_102523b7c(uint *param_1,int param_2)

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



/* Entry: 102523c6c; end: 102523cab;  */

void FUN_102523c6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea3c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab66e8;
  func_0x000107c61520(&UNK_10dab66e8,&UNK_11051caa8);
  puRam0000000112ea3c48 = puVar1;
  return;
}



/* Entry: 102523cac; end: 102523d87;  */

/* WARNING: Possible PIC construction at 0x000102523d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102523d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102523d54) */
/* WARNING: Removing unreachable block (ram,0x000102523d64) */

void FUN_102523cac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11051cc30;
  func_0x000107c613fc(&UNK_11051cc30,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112ea3c58;
  func_0x0001000285a8(0x112ea3c58,&UNK_10dab67c0);
  func_0x000107c613fc();
  pcVar6 = FUN_102523ddc;
  func_0x0001000841fc(FUN_102523ddc,puVar4,uVar5);
  func_0x000100084214(&UNK_10dab6790,0x29,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102523d88; end: 102523d97;  */

undefined1  [16] FUN_102523d88(void)

{
  return ZEXT816(0x11051cc10);
}



/* Entry: 102523d98; end: 102523ddb;  */

void FUN_102523d98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102523ddc; end: 102523eeb;  */

void FUN_102523ddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *param_2;
  func_0x0001000285a8(0x112ea3c60,&UNK_10dab67c8);
  puVar2 = &uStack_58;
  uStack_58 = uVar7;
  func_0x0001000838ec(puVar2);
  FUN_102523eec(uVar3,uVar1,puVar2);
  func_0x000100082720("DropsShareMessageSenderServiceProvider",0x26,2);
  FUN_1025253e4(uVar4);
  func_0x000100082720("SendToScopeExposerServiceProvider",0x21,2);
  FUN_1025254c4(uVar5,uVar3,puVar2,uVar4,uVar6);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  func_0x000100082720("DropsShareWorkflowEntryPointProvider",0x24,2);
  *param_1 = uVar5;
  return;
}



/* Entry: 102523eec; end: 102523f83;  */

void FUN_102523eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea3c68,&UNK_10dab67d0);
  puVar1 = &UNK_11051cd00;
  func_0x000107c613fc(&UNK_11051cd00,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102523f84,puVar1);
  return;
}



/* Entry: 102523f84; end: 102523fbb;  */

/* WARNING: Possible PIC construction at 0x000102523fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102523fa4) */

void FUN_102523f84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x20);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102523fbc; end: 102523fcb;  */

undefined1  [16] FUN_102523fbc(void)

{
  return ZEXT816(0x11051cd28);
}



/* Entry: 102523fcc; end: 102523ffb;  */

/* WARNING: Possible PIC construction at 0x000102523fe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102523fe4) */

void FUN_102523fcc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102523ffc; end: 1025240bb;  */

undefined8 * FUN_102523ffc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}


