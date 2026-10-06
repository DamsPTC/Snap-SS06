/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bf7a04; end: 100bf7aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7a04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40750();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bf7b48();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fc3368);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fc3e10);
      *(long *)(unaff_x20 + _DAT_112fc3e10) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bf7aec; end: 100bf7af7; -[SCSCConversationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7aec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc3e00;
  func_0x000107c61428(param_1 + _DAT_112fc3e00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf7af8; end: 100bf7b3b;  */

void FUN_100bf7af8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bf7b3c; end: 100bf7b47; -[SCSCConversationServicesSaberServiceProvider convoActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7b3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc3e08;
  func_0x000107c61428(param_1 + _DAT_112fc3e08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf7b48; end: 100bf7bc3;  */

void FUN_100bf7b48(undefined8 param_1)

{
  if (lRam0000000112fc2bc8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e797e58);
  return;
}



/* Entry: 100bf7bc4; end: 100bf7ca7; +[SyncData descriptor] */

void FUN_100bf7bc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7a00,
                        &PTR____CFConstantStringClassReference_110eee678,&PTR_DAT_1132901d8,
                        &PTR_DAT_1132901f0,3,0x18,0x1c);
    puRam000000011372e010 = puVar1;
  }
  return;
}



/* Entry: 100bf7ca8; end: 100bf7cb3; -[SCTemporaryMutingCategoryPluginEntryPoint setConversationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69ef8;
  func_0x000107c61428(param_1 + _DAT_112d69ef8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf7cb4; end: 100bf7cdb; -[SCTemporaryMutingCategoryPluginEntryPoint begin] */

void FUN_100bf7cb4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100bf7cdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bf7cdc; end: 100bf7dbb;  */

/* WARNING: Possible PIC construction at 0x000100bf7da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf7da8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7cdc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5c898();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c406cc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = 0;
      FUN_100bf7e24(0);
      func_0x000107c613fc();
      FUN_100bf7e44(lVar1,lVar2,lVar3,uVar4);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d69f00);
      *(long *)(unaff_x20 + _DAT_112d69f00) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bf7dbc; end: 100bf7dc7; -[SCTemporaryMutingCategoryPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7dbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69ee8;
  func_0x000107c61428(param_1 + _DAT_112d69ee8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf7dc8; end: 100bf7e0b;  */

void FUN_100bf7dc8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bf7e0c; end: 100bf7e17; -[SCTemporaryMutingCategoryPluginEntryPoint textSendingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7e0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69ef0;
  func_0x000107c61428(param_1 + _DAT_112d69ef0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf7e18; end: 100bf7e23; -[SCTemporaryMutingCategoryPluginEntryPoint conversationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7e18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69ef8;
  func_0x000107c61428(param_1 + _DAT_112d69ef8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf7e24; end: 100bf7e43;  */

void FUN_100bf7e24(void)

{
  func_0x000107c61168(&PTR_PTR_112d69e90);
  return;
}



/* Entry: 100bf7e44; end: 100bf803b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7e44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_80;
  lVar3 = param_3;
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c3cfbc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      lVar5 = 0;
      FUN_100bf803c();
      func_0x000107c613fc();
      *(long *)(lVar5 + 0x10) = lVar4;
      lVar6 = 0;
      func_0x000100bf805c();
      lVar3 = lVar6;
      func_0x000107c610f8();
      *(undefined8 *)(lVar3 + _DAT_112d69d88) = 0;
      *(long *)(lVar3 + _DAT_112d69d80) = lVar5;
      puVar1 = PTR_s_init_1125d9248;
      lStack_70 = lVar3;
      lStack_68 = lVar6;
      func_0x000107c615f0(lVar4);
      func_0x000107c6157c(lVar5);
      plVar7 = &lStack_70;
      func_0x000107c61154(plVar7,puVar1);
      uVar8 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c4fba8();
      func_0x000107c61170(uVar8);
      uVar8 = param_2;
      func_0x000107c5c894();
      func_0x000107c61180();
      lVar6 = 0;
      FUN_100bf82f4();
      lVar3 = lVar6;
      func_0x000107c610f8();
      *(undefined8 *)(lVar3 + _DAT_112d69dc8) = 0;
      *(undefined8 *)(lVar3 + _DAT_112d69db8) = uVar8;
      *(long *)(lVar3 + _DAT_112d69dc0) = lVar5;
      puVar1 = PTR_s_init_1125d9248;
      lStack_80 = lVar3;
      lStack_78 = lVar6;
      func_0x000107c6157c(lVar5);
      func_0x000107c61154(&lStack_80,puVar1);
      uVar8 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c61174(plVar9);
      func_0x000107c4fba8(uVar8);
      func_0x000107c615e8(lVar4);
      func_0x000107c61574(lVar5);
      func_0x000107c61170(plVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(plVar9);
      func_0x000107c61170(plVar9);
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bf803c);
  (*pcVar2)();
}



/* Entry: 100bf803c; end: 100bf807b;  */

void FUN_100bf803c(void)

{
  func_0x000107c61168(&PTR_PTR_112d69d20);
  return;
}



/* Entry: 100bf807c; end: 100bf80f3;  */

/* WARNING: Possible PIC construction at 0x000100bf80d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf80dc) */

void FUN_100bf807c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100bf80f4; end: 100bf80ff;  */

void FUN_100bf80f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1103f7930;
  func_0x000107c613fc(&UNK_1103f7930,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  pcStack_70 = FUN_100bf8344;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103f7948;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar6);
  func_0x000107c614b0(param_2);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_98,uVar5,uVar6,lVar1,param_2);
  func_0x000107c5ffe8(0,lVar9,lVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar10 + 8))(lVar8,lVar1);
  (**(code **)(lVar7 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 100bf8100; end: 100bf82db;  */

void FUN_100bf8100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a0 = param_3;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1103f7930;
  func_0x000107c613fc(&UNK_1103f7930,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  pcStack_70 = FUN_100bf8344;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103f7948;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c614b0(param_2);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_98,uVar5,uVar6,lVar1,param_2);
  func_0x000107c5ffe8(0,lVar9,lVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar10 + 8))(lVar8,lVar1);
  (**(code **)(lVar7 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 100bf82dc; end: 100bf82f3;  */

void FUN_100bf82dc(long param_1,long param_2)

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



/* Entry: 100bf82f4; end: 100bf8313;  */

void FUN_100bf82f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127bd418);
  return;
}



/* Entry: 100bf8314; end: 100bf8317;  */

void FUN_100bf8314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100bf8318; end: 100bf8343;  */

void FUN_100bf8318(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bf8344; end: 100bf834f;  */

void FUN_100bf8344(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x000107c61174();
    (*pcVar2)(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  if (lVar3 != 0) {
    func_0x000107c614b0(lVar3,pcVar2,*(undefined8 *)(unaff_x20 + 0x20));
    (*pcVar2)(lVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(lVar3);
    return;
  }
  return;
}



/* Entry: 100bf8350; end: 100bf843f;  */

void FUN_100bf8350(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c61174();
    (*param_2)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  if (param_4 != 0) {
    func_0x000107c614b0(param_4);
    (*param_2)(param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_4);
    return;
  }
  return;
}



/* Entry: 100bf8440; end: 100bf8517;  */

void FUN_100bf8440(undefined8 param_1,char param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  if (param_2 == '\x01') {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      func_0x0001016baf20(param_1);
      func_0x000107c61574(param_3);
    }
    (*param_5)(param_1);
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      FUN_100bf8518(param_1,param_4,param_5,param_6);
      func_0x000107c61574(param_3);
    }
  }
  return;
}



/* Entry: 100bf8518; end: 100bf87c3;  */

void FUN_100bf8518(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar4 = 0;
  uStack_a8 = param_4;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(param_3);
  (**(code **)(lVar9 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  FUN_100bf87c4();
  uVar10 = (undefined1)*(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = uVar10;
  func_0x0001009b40cc();
  FUN_100bf8de8();
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar5 = &UNK_1103f7b38;
  func_0x000107c613fc(&UNK_1103f7b38,0x22,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uVar12;
  puVar5[0x20] = uVar3;
  puVar5[0x21] = uVar10;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100bf91e4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100ab3660;
  puStack_88 = &UNK_1103f7b50;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  func_0x000107c61574(puVar5);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4f7c0(uVar12);
  func_0x000107c61180();
  puVar5 = &UNK_1103f7a20;
  func_0x000107c613fc(&UNK_1103f7a20,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar7 = &UNK_1103f7b88;
  func_0x000107c613fc(&UNK_1103f7b88,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(undefined8 *)(puVar7 + 0x18) = param_2;
  *(undefined8 *)(puVar7 + 0x20) = uStack_a8;
  *(undefined8 *)(puVar7 + 0x28) = param_5;
  pcStack_80 = FUN_100bfb600;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100ab47f8;
  puStack_88 = &UNK_1103f7ba0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar5 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar5);
  func_0x000107c4e55c(uVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c60bd0(ppuVar6);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bf87bc);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      FUN_100bf8e04((long)param_1);
      FUN_100bf8ed0(param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bf87c4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bf87c0);
  (*pcVar2)();
}



/* Entry: 100bf87c4; end: 100bf885b;  */

/* WARNING: Possible PIC construction at 0x000100bf8828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf882c) */

void FUN_100bf87c4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c50414();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c452f8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf885c);
      (*pcVar1)();
    }
    func_0x000107c45314();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100bf885c; end: 100bf88cf; -[SCTextReplyNotificationCategoryPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf885c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d658d8,0);
  func_0x000107c61614(param_1 + _DAT_112d658e0,0);
  *(undefined8 *)(param_1 + _DAT_112d658e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bf88d0; end: 100bf897b; -[SCTextReplyNotificationCategoryPluginEntryPoint setValue:forIvarName:] */

void FUN_100bf88d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bf897c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100bf897c; end: 100bf8b0f;  */

void FUN_100bf897c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d3be0)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef2c420,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "TextReplyNotificationCategoryPlugin/SCTextReplyNotificationCategoryPluginEntryPoint.swift"
                            ,0x59,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf8b10);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59c90();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bf8b10; end: 100bf8b1b; -[SCTextReplyNotificationCategoryPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf8b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d658d8;
  func_0x000107c61428(param_1 + _DAT_112d658d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf8b1c; end: 100bf8b6f;  */

void FUN_100bf8b1c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf8b70; end: 100bf8b7b; -[SCTextReplyNotificationCategoryPluginEntryPoint setTextSendingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf8b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d658e0;
  func_0x000107c61428(param_1 + _DAT_112d658e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf8b7c; end: 100bf8c3f; -[SCTextReplyNotificationCategoryPluginEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100bf8bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf8c0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf8bf0) */
/* WARNING: Removing unreachable block (ram,0x000100bf8c10) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100bf8b7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c5c898();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      FUN_100bf8c9c(0);
      func_0x000107c613fc();
      FUN_100bf8cbc(lVar1,lVar2);
      param_1 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bf8c40; end: 100bf8c4b; -[SCTextReplyNotificationCategoryPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf8c40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d658d8;
  func_0x000107c61428(param_1 + _DAT_112d658d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf8c4c; end: 100bf8c8f;  */

void FUN_100bf8c4c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bf8c90; end: 100bf8c9b; -[SCTextReplyNotificationCategoryPluginEntryPoint textSendingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf8c90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d658e0;
  func_0x000107c61428(param_1 + _DAT_112d658e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf8c9c; end: 100bf8cbb;  */

void FUN_100bf8c9c(void)

{
  func_0x000107c61168(&PTR_PTR_112d65880);
  return;
}



/* Entry: 100bf8cbc; end: 100bf8d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf8cbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  func_0x000107c5c894();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_100bf8d9c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d657f8);
  *puVar1 = 0x7865745f646e6573;
  puVar1[1] = 0xef796c7065725f74;
  *(undefined8 *)(lVar3 + _DAT_112d65800) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d657f0) = param_2;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100bf8d9c; end: 100bf8dbb;  */

void FUN_100bf8d9c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b76a8);
  return;
}



/* Entry: 100bf8dbc; end: 100bf8de7; +[SCGrapheneIncomingFriendsSyncMetric requestSuccess] */

void FUN_100bf8dbc(void)

{
  func_0x000107c610f4(PTR_PTR_1126b84b0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf8de8; end: 100bf8e03;  */

void FUN_100bf8de8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eee9b8,0,0);
  return;
}



/* Entry: 100bf8e04; end: 100bf8ea3;  */

/* WARNING: Possible PIC construction at 0x000100bf8e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf8e74) */

void FUN_100bf8e04(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c5a8d4();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c452f8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf8ea4);
      (*pcVar1)();
    }
    func_0x000107c3d8d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100bf8ea4; end: 100bf8ecf; +[SCGrapheneIncomingFriendsSyncMetric severLatency] */

void FUN_100bf8ea4(void)

{
  func_0x000107c610f4(PTR_PTR_1126b84b0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf8ed0; end: 100bf91e3;  */

/* WARNING: Possible PIC construction at 0x000100bf8f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf8f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf9024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf917c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf9028) */
/* WARNING: Removing unreachable block (ram,0x000100bf9054) */
/* WARNING: Removing unreachable block (ram,0x000100bf907c) */
/* WARNING: Removing unreachable block (ram,0x000100bf9084) */
/* WARNING: Removing unreachable block (ram,0x000100bf905c) */
/* WARNING: Removing unreachable block (ram,0x000100bf9064) */
/* WARNING: Removing unreachable block (ram,0x000100bf906c) */
/* WARNING: Removing unreachable block (ram,0x000100bf909c) */
/* WARNING: Removing unreachable block (ram,0x000100bf9030) */
/* WARNING: Removing unreachable block (ram,0x000100bf8fd0) */
/* WARNING: Removing unreachable block (ram,0x000100bf90a0) */
/* WARNING: Removing unreachable block (ram,0x000100bf9038) */
/* WARNING: Removing unreachable block (ram,0x000100bf9070) */
/* WARNING: Removing unreachable block (ram,0x000100bf9078) */
/* WARNING: Removing unreachable block (ram,0x000100bf90a8) */
/* WARNING: Removing unreachable block (ram,0x000100bf9040) */
/* WARNING: Removing unreachable block (ram,0x000100bf9048) */
/* WARNING: Removing unreachable block (ram,0x000100bf8fd8) */
/* WARNING: Removing unreachable block (ram,0x000100bf9088) */
/* WARNING: Removing unreachable block (ram,0x000100bf9050) */
/* WARNING: Removing unreachable block (ram,0x000100bf90a4) */
/* WARNING: Removing unreachable block (ram,0x000100bf8f88) */
/* WARNING: Removing unreachable block (ram,0x000100bf8f90) */
/* WARNING: Removing unreachable block (ram,0x000100bf90ac) */
/* WARNING: Removing unreachable block (ram,0x000100bf90b0) */
/* WARNING: Removing unreachable block (ram,0x000100bf8f9c) */
/* WARNING: Removing unreachable block (ram,0x000100bf90c0) */
/* WARNING: Removing unreachable block (ram,0x000100bf8fa4) */
/* WARNING: Removing unreachable block (ram,0x000100bf91e0) */
/* WARNING: Removing unreachable block (ram,0x000100bf8fb4) */
/* WARNING: Removing unreachable block (ram,0x000100bf8fe4) */
/* WARNING: Removing unreachable block (ram,0x000100bf9008) */
/* WARNING: Removing unreachable block (ram,0x000100bf8fe8) */
/* WARNING: Removing unreachable block (ram,0x000100bf9014) */
/* WARNING: Removing unreachable block (ram,0x000100bf9180) */

void FUN_100bf8ed0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  
  lVar1 = param_1;
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c43a68();
    func_0x000107c61180();
    if (param_1 == 0) {
      FUN_100bf9dec(0);
      FUN_100bf9f08(0);
      FUN_100bfa348(0);
      FUN_100bfa464(0);
      puVar4 = PTR_PTR_1126db0d0;
      func_0x000107c610f8(PTR_PTR_1126db0d0);
      func_0x000107c453e4();
      func_0x000107c556d0();
      lVar1 = 0x5f6c616974726170;
      func_0x000107c5fadc(0x5f6c616974726170,0xec000000636e7973);
      func_0x000107c6142c(0xec000000636e7973);
      func_0x000107c59b34(puVar4);
    }
    else {
      uStack_68 = 0;
      uVar3 = 0;
      FUN_100bf9c98(0,0x112dc0708,&PTR_PTR_1126db240);
      func_0x000107c5fc50(param_1,&uStack_68,uVar3);
      lVar1 = param_1;
    }
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5c574();
    if ((int)lVar2 == 2) {
      func_0x0001016bae88();
    }
    else {
      FUN_100bf98ec();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bf91e4; end: 100bf91f3;  */

ulong FUN_100bf91e4(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uStack_2e8;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  cVar4 = *(char *)(unaff_x20 + 0x21);
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar6 = uVar1;
  func_0x000107c43a68();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000100504554();
  func_0x000107c61170(uVar6);
  uVar8 = param_1;
  FUN_100bf99b0(param_1,uVar7);
  func_0x000107c61180();
  uVar6 = uVar1;
  func_0x000107c4ce20();
  func_0x000107c61180();
  uVar9 = uVar6;
  func_0x000107c5c574();
  func_0x000107c61170(uVar6);
  uVar18 = uVar1;
  func_0x000107c43a68();
  func_0x000107c61180();
  uVar6 = uVar18;
  func_0x000107c4080c();
  lVar5 = lRam0000000000000000;
  while (uVar6 != 0) {
    uVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        func_0x000107c61128(uVar18);
      }
      func_0x000105b3f400(param_1,*(undefined8 *)(uVar17 * 8),uVar8,(int)uVar9 == 2,cVar4);
      uVar17 = uVar17 + 1;
    } while (uVar6 != uVar17);
    uVar6 = uVar18;
    func_0x000107c4080c();
  }
  func_0x000107c61170(uVar18);
  uVar6 = param_1;
  if ((int)uVar9 == 2) {
    if (cVar4 == '\0') {
      func_0x000107c2a798(param_1,uVar7);
      uVar6 = 0;
      goto LAB_100bf95e0;
    }
    func_0x000107c2a7dc(param_1,uVar7);
    func_0x000107c61180();
    func_0x000107c61174();
    uVar9 = uVar6;
    func_0x000107c4080c();
    lVar5 = lRam0000000000000000;
    while (uStack_2e8 = uVar6, uVar9 != 0) {
      uVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          func_0x000107c61128(uVar6);
        }
        puVar10 = PTR_PTR_1126c2820;
        FUN_100c36048(PTR_PTR_1126c2820,*(undefined8 *)(uVar18 * 8));
        func_0x000107c61180();
        if (puVar10 != (undefined *)0x0) {
          func_0x000107c61198(puVar10);
          func_0x000107c5c28c(param_1);
          func_0x000107c611b0();
        }
        func_0x000107c61170(puVar10);
        uVar18 = uVar18 + 1;
      } while (uVar9 != uVar18);
      uVar9 = uVar6;
      func_0x000107c4080c();
    }
  }
  else {
    uVar9 = uVar1;
    func_0x000107c5d6e8();
    func_0x000107c61180();
    uStack_2e8 = uVar9;
    func_0x000100504554();
    func_0x000107c61170(uVar9);
    FUN_100bf99b0(param_1,uStack_2e8);
    func_0x000107c61180();
    uVar18 = uVar1;
    func_0x000107c5d6e8();
    func_0x000107c61180();
    uVar9 = uVar18;
    func_0x000107c4080c();
    lVar5 = lRam0000000000000000;
    while (uVar9 != 0) {
      uVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          func_0x000107c61128(uVar18);
        }
        uVar16 = *(undefined8 *)(uVar17 * 8);
        uVar11 = uVar16;
        func_0x000107c5d984(uVar16);
        func_0x000107c61180();
        uVar12 = uVar11;
        func_0x000105b425b4();
        func_0x000107c61180();
        uVar13 = uVar12;
        func_0x000107c4c10c();
        func_0x000107c61180();
        uVar14 = uVar6;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c61170(uVar13);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(uVar11);
        if (uVar14 != 0) {
          func_0x000105b4073c(param_1,uVar16,uVar14,uVar3);
        }
        func_0x000107c61170(uVar14);
        uVar17 = uVar17 + 1;
      } while (uVar9 != uVar17);
      uVar9 = uVar18;
      func_0x000107c4080c();
    }
    func_0x000107c61170(uVar18);
  }
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uStack_2e8);
LAB_100bf95e0:
  uVar9 = uVar1;
  func_0x000107c4ce20(uVar1);
  func_0x000107c61180();
  uVar18 = uVar9;
  func_0x000107c4d650();
  func_0x000107c61180();
  FUN_100bfa024(param_1,uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar9);
  puVar10 = PTR_PTR_1126b1568;
  func_0x000107c43a18();
  if ((int)puVar10 != 0) {
    uVar9 = uVar1;
    func_0x000107c4ce20(uVar1);
    func_0x000107c61180();
    uVar18 = uVar9;
    func_0x000107c5c574();
    func_0x000107c61170(uVar9);
    uVar9 = uVar1;
    func_0x000107c413d0(uVar1);
    func_0x000107c61180();
    func_0x000105b3fef8(param_1,uVar9,(int)uVar18 == 2);
    func_0x000107c61170(uVar9);
  }
  func_0x000107c524d0(uVar2);
  uVar9 = uVar1;
  func_0x000107c44420();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar9 != 0) {
    func_0x000107c44420(uVar1);
    func_0x000107c4d95c(puVar10);
    func_0x000107c61180();
    func_0x000107c524d0(uVar2);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar9 = param_1;
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return uVar9;
  }
  func_0x000107c60e78();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8(uVar9);
  return (ulong)((uint)uVar9 < 4);
}



/* Entry: 100bf91f4; end: 100bf98df;  */

ulong FUN_100bf91f4(ulong param_1,ulong param_2,undefined8 param_3,undefined4 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_2e8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar2 = param_2;
  func_0x000107c43a68();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000100504554();
  func_0x000107c61170(uVar2);
  uVar4 = param_1;
  FUN_100bf99b0(param_1,uVar3);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4ce20();
  func_0x000107c61180();
  uVar12 = uVar2;
  func_0x000107c5c574();
  func_0x000107c61170(uVar2);
  uVar13 = param_2;
  func_0x000107c43a68();
  func_0x000107c61180();
  uVar2 = uVar13;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(uVar13);
      }
      func_0x000105b3f400(param_1,*(undefined8 *)(uVar11 * 8),uVar4,(int)uVar12 == 2,param_5);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
    uVar2 = uVar13;
    func_0x000107c4080c();
  }
  func_0x000107c61170(uVar13);
  if ((int)uVar12 == 2) {
    if ((int)param_5 == 0) {
      func_0x000107c2a798(param_1,uVar3);
      goto LAB_100bf95e0;
    }
    param_5 = param_1;
    func_0x000107c2a7dc(param_1,uVar3);
    func_0x000107c61180();
    func_0x000107c61174();
    uVar2 = param_5;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (uStack_2e8 = param_5, uVar2 != 0) {
      uVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_5);
        }
        puVar5 = PTR_PTR_1126c2820;
        FUN_100c36048(PTR_PTR_1126c2820,*(undefined8 *)(uVar12 * 8));
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) {
          func_0x000107c61198(puVar5);
          func_0x000107c5c28c(param_1);
          func_0x000107c611b0();
        }
        func_0x000107c61170(puVar5);
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
      uVar2 = param_5;
      func_0x000107c4080c();
    }
  }
  else {
    uVar2 = param_2;
    func_0x000107c5d6e8();
    func_0x000107c61180();
    uStack_2e8 = uVar2;
    func_0x000100504554();
    func_0x000107c61170(uVar2);
    param_5 = param_1;
    FUN_100bf99b0(param_1,uStack_2e8);
    func_0x000107c61180();
    uVar12 = param_2;
    func_0x000107c5d6e8();
    func_0x000107c61180();
    uVar2 = uVar12;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(uVar12);
        }
        uVar10 = *(undefined8 *)(uVar13 * 8);
        uVar6 = uVar10;
        func_0x000107c5d984(uVar10);
        func_0x000107c61180();
        uVar7 = uVar6;
        func_0x000105b425b4();
        func_0x000107c61180();
        uVar8 = uVar7;
        func_0x000107c4c10c();
        func_0x000107c61180();
        uVar11 = param_5;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        if (uVar11 != 0) {
          func_0x000105b4073c(param_1,uVar10,uVar11,param_4);
        }
        func_0x000107c61170(uVar11);
        uVar13 = uVar13 + 1;
      } while (uVar2 != uVar13);
      uVar2 = uVar12;
      func_0x000107c4080c();
    }
    func_0x000107c61170(uVar12);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(uStack_2e8);
LAB_100bf95e0:
  uVar2 = param_2;
  func_0x000107c4ce20(param_2);
  func_0x000107c61180();
  uVar12 = uVar2;
  func_0x000107c4d650();
  func_0x000107c61180();
  FUN_100bfa024(param_1,uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  puVar5 = PTR_PTR_1126b1568;
  func_0x000107c43a18();
  if ((int)puVar5 != 0) {
    uVar2 = param_2;
    func_0x000107c4ce20(param_2);
    func_0x000107c61180();
    uVar12 = uVar2;
    func_0x000107c5c574();
    func_0x000107c61170(uVar2);
    uVar2 = param_2;
    func_0x000107c413d0(param_2);
    func_0x000107c61180();
    func_0x000105b3fef8(param_1,uVar2,(int)uVar12 == 2);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c524d0(param_3);
  uVar2 = param_2;
  func_0x000107c44420();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 != 0) {
    func_0x000107c44420(param_2);
    func_0x000107c4d95c(puVar5);
    func_0x000107c61180();
    func_0x000107c524d0(param_3);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  uVar2 = param_1;
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return uVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8(uVar2);
  return (ulong)((uint)uVar2 < 4);
}



/* Entry: 100bf98e0; end: 100bf98eb;  */

bool FUN_100bf98e0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 100bf98ec; end: 100bf9983;  */

/* WARNING: Possible PIC construction at 0x000100bf9950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf9954) */

void FUN_100bf98ec(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c41784();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c452f8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf9984);
      (*pcVar1)();
    }
    func_0x000107c45314();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100bf9984; end: 100bf99af; +[SCGrapheneIncomingFriendsSyncMetric deltaSync] */

void FUN_100bf9984(void)

{
  func_0x000107c610f4(PTR_PTR_1126b84b0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf99b0; end: 100bf9c97;  */

void FUN_100bf99b0(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined **appuStack_d8 [9];
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_160,param_1);
  }
  puVar2 = &uStack_161;
  FUN_100bed558(puVar2);
  func_0x000107c61174(param_2);
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  lVar3 = param_2;
  func_0x000107c40808(param_2);
  func_0x0001004c2bb4(&uStack_180,lVar3);
  puStack_118 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000107c61174(param_2);
  lVar3 = param_2;
  func_0x000107c4080c();
  if (lVar3 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          func_0x000107c61128(param_2);
        }
        uVar9 = *(ulong *)((long)puStack_118 + lVar11 * 8);
        func_0x000107c61174(uVar9);
        uStack_e0 = uVar9;
        func_0x0001004c2d3c(&uStack_180,&uStack_e0);
        func_0x000107c61170(uStack_e0);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = param_2;
      func_0x000107c4080c();
    } while (lVar3 != 0);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x0001004c2e3c(appuStack_d8,0xc,puVar2,&uStack_180);
  puStack_120 = (undefined1 *)0x0;
  puStack_118 = (undefined1 *)0x0;
  plStack_110 = (long *)0x0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  puVar4 = &uStack_160;
  func_0x0001000e77a0(puVar4,appuStack_d8,&puStack_120,&uStack_e0);
  func_0x000107c61180();
  if (puStack_120 != (undefined1 *)0x0) {
    puStack_118 = puStack_120;
    func_0x000107c60e14();
  }
  plVar1 = plStack_70;
  appuStack_d8[0] = &PTR_DAT_110862700;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_120 = auStack_90;
  func_0x000100105004(&puStack_120);
  puStack_120 = (undefined1 *)&uStack_180;
  func_0x000100105004(&puStack_120);
  func_0x0001000e76e0(&uStack_138);
  func_0x000107c61170(uStack_148);
  func_0x000107c61170(uStack_150);
  ppuVar7 = &PTR___NSConcreteGlobalBlock_110ab8770;
  ppuVar8 = &PTR___NSConcreteGlobalBlock_110ab8790;
  puVar5 = puVar4;
  func_0x00010050471c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  lVar3 = param_1;
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8(lVar3);
  func_0x000104bd46a0(lVar3);
  if (*ppuVar7 != (undefined *)0x0) {
    return;
  }
  puVar6 = *ppuVar8;
  func_0x000107c61168();
  func_0x000107c614ec();
  *ppuVar7 = puVar6;
  return;
}



/* Entry: 100bf9c98; end: 100bf9cd7;  */

void FUN_100bf9c98(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100bf9cd8; end: 100bf9dbb; +[IncomingFriend descriptor] */

void FUN_100bf9cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7a50,
                        &PTR____CFConstantStringClassReference_110eee698,&PTR_DAT_1132901d8,
                        &PTR_s_userId_113290490,0x12,0x68,0x1c);
    puRam000000011372e018 = puVar1;
  }
  return;
}



/* Entry: 100bf9dbc; end: 100bf9deb; -[GPBAutocreatedArray copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf9dbc(long param_1)

{
  if (*(long *)(param_1 + _DAT_112796b2c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf52250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112796b2c),PTR_s_copyWithZone__1125b2238);
    return;
  }
  func_0x000107c3dbdc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100bf9dec; end: 100bf9edb;  */

/* WARNING: Possible PIC construction at 0x000100bf9e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf9e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf9ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf9e6c) */
/* WARNING: Removing unreachable block (ram,0x000100bf9ed8) */
/* WARNING: Removing unreachable block (ram,0x000100bf9e80) */
/* WARNING: Removing unreachable block (ram,0x000100bf9e98) */

void FUN_100bf9dec(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c3e8b4();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c452f8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf9ed8);
      (*pcVar1)();
    }
    func_0x000107c61174(puVar2);
    func_0x000107c45318(puVar3,param_2,puVar2,param_1);
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100bf9edc; end: 100bf9f07; +[SCGrapheneIncomingFriendsSyncMetric bidiFriendsReceived] */

void FUN_100bf9edc(void)

{
  func_0x000107c610f4(PTR_PTR_1126b84b0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf9f08; end: 100bf9ff7;  */

/* WARNING: Possible PIC construction at 0x000100bf9f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf9fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf9fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf9f88) */
/* WARNING: Removing unreachable block (ram,0x000100bf9ff4) */
/* WARNING: Removing unreachable block (ram,0x000100bf9f9c) */
/* WARNING: Removing unreachable block (ram,0x000100bf9fb4) */

void FUN_100bf9f08(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c3eb18();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c452f8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf9ff4);
      (*pcVar1)();
    }
    func_0x000107c61174(puVar2);
    func_0x000107c45318(puVar3,param_2,puVar2,param_1);
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100bf9ff8; end: 100bfa023; +[SCGrapheneIncomingFriendsSyncMetric blockedFriendsReceived] */

void FUN_100bf9ff8(void)

{
  func_0x000107c610f4(PTR_PTR_1126b84b0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bfa024; end: 100bfa347;  */

/* WARNING: Possible PIC construction at 0x000100bfa0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa32c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bfa3c8) */
/* WARNING: Removing unreachable block (ram,0x000100bfa434) */
/* WARNING: Removing unreachable block (ram,0x000100bfa3dc) */
/* WARNING: Removing unreachable block (ram,0x000100bfa330) */
/* WARNING: Removing unreachable block (ram,0x000100bfa340) */
/* WARNING: Removing unreachable block (ram,0x000100bfa41c) */
/* WARNING: Removing unreachable block (ram,0x000100bfa37c) */
/* WARNING: Removing unreachable block (ram,0x000100bfa404) */
/* WARNING: Removing unreachable block (ram,0x000100bfa388) */
/* WARNING: Removing unreachable block (ram,0x000100bfa430) */
/* WARNING: Removing unreachable block (ram,0x000100bfa3a0) */
/* WARNING: Removing unreachable block (ram,0x000100bfa2c0) */
/* WARNING: Removing unreachable block (ram,0x000100bfa2c8) */
/* WARNING: Removing unreachable block (ram,0x000100bfa2e4) */
/* WARNING: Removing unreachable block (ram,0x000100bfa328) */
/* WARNING: Removing unreachable block (ram,0x000100bfa274) */
/* WARNING: Removing unreachable block (ram,0x000100bfa2b0) */
/* WARNING: Removing unreachable block (ram,0x000100bfa28c) */
/* WARNING: Removing unreachable block (ram,0x000100bfa264) */
/* WARNING: Removing unreachable block (ram,0x000100bfa230) */
/* WARNING: Removing unreachable block (ram,0x000100bfa1cc) */
/* WARNING: Removing unreachable block (ram,0x000100bfa1bc) */
/* WARNING: Removing unreachable block (ram,0x000100bfa18c) */
/* WARNING: Removing unreachable block (ram,0x000100bfa198) */
/* WARNING: Removing unreachable block (ram,0x000100bfa0f0) */
/* WARNING: Removing unreachable block (ram,0x000100bfa1b4) */
/* WARNING: Removing unreachable block (ram,0x000100bfa12c) */
/* WARNING: Removing unreachable block (ram,0x000100bfa134) */
/* WARNING: Removing unreachable block (ram,0x000100bfa138) */
/* WARNING: Removing unreachable block (ram,0x000100bfa148) */
/* WARNING: Removing unreachable block (ram,0x000100bfa150) */
/* WARNING: Removing unreachable block (ram,0x000100bfa170) */
/* WARNING: Removing unreachable block (ram,0x000100bfa184) */
/* WARNING: Removing unreachable block (ram,0x000100bfa3f4) */

void FUN_100bfa024(long param_1,undefined8 param_2)

{
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61158(PTR_PTR_1126c2828);
  if (param_1 == 0) {
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_f0,param_1);
  }
  lStack_140 = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  uStack_f4 = 0;
  func_0x00010054c81c(&uStack_f0,&lStack_140,&uStack_f4);
  func_0x000107c61180();
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    func_0x000107c60e14();
  }
  func_0x0001000e76e0(&uStack_c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_d8);
  return;
}



/* Entry: 100bfa348; end: 100bfa437;  */

/* WARNING: Possible PIC construction at 0x000100bfa3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bfa3c8) */
/* WARNING: Removing unreachable block (ram,0x000100bfa434) */
/* WARNING: Removing unreachable block (ram,0x000100bfa3dc) */
/* WARNING: Removing unreachable block (ram,0x000100bfa3f4) */

void FUN_100bfa348(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c41760();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c452f8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bfa434);
      (*pcVar1)();
    }
    func_0x000107c61174(puVar2);
    func_0x000107c45318(puVar3,param_2,puVar2,param_1);
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100bfa438; end: 100bfa463; +[SCGrapheneIncomingFriendsSyncMetric deletedFriendsReceived] */

void FUN_100bfa438(void)

{
  func_0x000107c610f4(PTR_PTR_1126b84b0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bfa464; end: 100bfa553;  */

/* WARNING: Possible PIC construction at 0x000100bfa4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfa51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bfa4e4) */
/* WARNING: Removing unreachable block (ram,0x000100bfa550) */
/* WARNING: Removing unreachable block (ram,0x000100bfa4f8) */
/* WARNING: Removing unreachable block (ram,0x000100bfa510) */

void FUN_100bfa464(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c4e4e0();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c452f8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bfa550);
      (*pcVar1)();
    }
    func_0x000107c61174(puVar2);
    func_0x000107c45318(puVar3,param_2,puVar2,param_1);
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100bfa554; end: 100bfa57f; +[SCGrapheneIncomingFriendsSyncMetric pendingFriendsReceived] */

void FUN_100bfa554(void)

{
  func_0x000107c610f4(PTR_PTR_1126b84b0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bfa580; end: 100bfa5d3; -[SCAFriendsFetchEvent setIsIncomingFriendsSync:] */

void FUN_100bfa580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fdaab8,0xd,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100bfa5d4; end: 100bfa647;  */

void FUN_100bfa5d4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61168(param_1);
  lVar1 = param_2;
  FUN_100bfa648();
  func_0x000107c61180();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100bfa648; end: 100bfa963;  */

void FUN_100bfa648(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x000107c61174();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x000107c50940();
    if ((long)puVar1 < 0) {
      puVar1 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      puVar7 = puVar1;
      func_0x000107c41220();
      func_0x000107c61170(puVar1);
      func_0x0001001b9e08(puVar7,&UNK_10f50d471);
      if (puVar7 != (undefined *)0x0) {
        puVar1 = param_1;
        func_0x000107c41080(param_1);
        func_0x000107c6132c(puVar7,1,puVar1);
        puVar1 = puVar7;
        func_0x000107c613a8();
        if ((int)puVar1 == 100) {
          puVar1 = puVar7;
          func_0x000107c61358(puVar7,0);
          puVar2 = PTR_PTR_1126b04a8;
          func_0x000107c421f0();
          func_0x000107c61180();
          func_0x000107c61158(PTR_PTR_1126c2828);
          func_0x000107c6134c(puVar7,1);
          func_0x000107c61350(puVar7,1);
          puVar3 = puVar2;
          func_0x000107c4d9b8();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar2);
          func_0x000107c613a4(puVar7);
          if (puVar3 == (undefined *)0x0) goto LAB_100bfa8d4;
          puVar7 = PTR_PTR_1126c2838;
          func_0x000107c610f4(PTR_PTR_1126c2838);
          puVar2 = puVar3;
          func_0x000107c41080(puVar3);
          puVar4 = puVar3;
          func_0x000107c4a9e4(puVar3);
          puVar5 = puVar3;
          func_0x000107c4f8c0(puVar3);
          func_0x000107c61180();
          puVar6 = puVar3;
          func_0x000107c4a9dc(puVar3);
          FUN_100bfa964(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
          param_1 = puVar3;
          goto LAB_100bfa750;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x000107c50940(param_1);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      func_0x000107c61158(PTR_PTR_1126c2828);
      puVar2 = puVar7;
      func_0x000107c4d9b8();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar7);
      if (puVar2 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126c2838;
        func_0x000107c610f4(PTR_PTR_1126c2838);
        puVar3 = puVar2;
        func_0x000107c41080(puVar2);
        puVar4 = puVar2;
        func_0x000107c4a9e4(puVar2);
        puVar5 = puVar2;
        func_0x000107c4f8c0(puVar2);
        func_0x000107c61180();
        puVar6 = puVar2;
        func_0x000107c4a9dc(puVar2);
        FUN_100bfa964(puVar7,puVar1,puVar3,puVar4,puVar5,puVar6);
        param_1 = puVar2;
LAB_100bfa750:
        func_0x000107c61170(puVar5);
        goto LAB_100bfa8dc;
      }
LAB_100bfa8d4:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_100bfa8dc:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100bfa964; end: 100bfaa1b;  */

undefined1 *
FUN_100bfa964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  func_0x000107c61174(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126fde50;
    lStack_50 = param_1;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      func_0x000107c61174(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      func_0x000107c61170(uVar2);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
    }
  }
  func_0x000107c61170(param_5);
  return puVar3;
}



/* Entry: 100bfaa1c; end: 100bfaa27; -[SCSnapchattersIncomingFriendsSyncTokenChangeRequest table] */

undefined * FUN_100bfaa1c(void)

{
  return &UNK_10f50d44a;
}



/* Entry: 100bfaa28; end: 100bfaa6f; -[SCSnapchattersIncomingFriendsSyncTokenChangeRequest createTableWithSQLite:] */

void FUN_100bfaa28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  func_0x000107c613a0(param_3,&UNK_10df97617,0x95,&uStack_18,0);
  if ((int)param_3 == 0) {
    func_0x000107c613a8(uStack_18);
    func_0x000107c61388(uStack_18);
  }
  return;
}



/* Entry: 100bfaa70; end: 100bfae07; -[SCSnapchattersIncomingFriendsSyncTokenChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_100bfaa70(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_100bfaf14(param_1);
    func_0x000107c61180();
    lVar5 = param_4;
    FUN_100bfaf78(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar9;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f50d507);
    if (lVar5 == 0) goto LAB_100bfada4;
    func_0x000107c61324(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                        (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                        *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    func_0x000107c6132c(lVar5,2,uVar8);
    func_0x000107c613a8();
    if ((int)lVar5 != 0x65) goto LAB_100bfada4;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    func_0x000107c61394();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x000107c57f38(puVar4);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x000107c421f0(PTR_PTR_1126b04a8);
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126c2828);
    func_0x000107c5a210(puVar7);
LAB_100bfad8c:
    func_0x000107c61170(puVar7);
    func_0x000107c61174(puVar4);
    puVar7 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f50d4c5);
        if (param_3 != 0) {
          func_0x000107c6132c();
          func_0x000107c613a8();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x000107c421f0(PTR_PTR_1126b04a8);
            func_0x000107c61180();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            func_0x000107c61158(PTR_PTR_1126c2828);
            func_0x000107c5a210(puVar4);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar4);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            goto LAB_100bfadb0;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_100bfadb0;
    }
    FUN_100bfaf14(param_1);
    func_0x000107c61180();
    lVar5 = param_4;
    FUN_100bfaf78(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f50d556);
    if (param_3 != 0) {
      func_0x000107c61324(param_3,1,*(undefined8 *)(param_4 + 0x30),
                          (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                          *(int *)(param_4 + 0x28),0);
      func_0x000107c6132c(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      func_0x000107c6132c(param_3,3,uVar8);
      func_0x000107c613a8();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x000107c421f0(PTR_PTR_1126b04a8);
        func_0x000107c61180();
        func_0x000107c61158(PTR_PTR_1126c2828);
        func_0x000107c5a210(puVar7);
        goto LAB_100bfad8c;
      }
    }
LAB_100bfada4:
    puVar7 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar4);
LAB_100bfadb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100bfae08; end: 100bfae13; -[SCSnapchattersIncomingFriendsSyncTokenChangeRequest .cxx_destruct] */

void FUN_100bfae08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100bfae14; end: 100bfaf13;  */

void FUN_100bfae14(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_2);
  func_0x000107c61168(param_1);
  puVar5 = PTR_PTR_1126c2838;
  if (param_2 == 0) {
    func_0x000107c61160();
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  }
  else {
    func_0x000107c610f4();
    lVar1 = param_2;
    func_0x000107c41080(param_2);
    lVar2 = param_2;
    func_0x000107c4a9e4(param_2);
    lVar3 = param_2;
    func_0x000107c4f8c0(param_2);
    func_0x000107c61180();
    lVar4 = param_2;
    func_0x000107c4a9dc(param_2);
    FUN_100bfa964(puVar5,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4);
    func_0x000107c61170(lVar3);
  }
  *(undefined4 *)(puVar5 + 0x10) = 1;
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100bfaf14; end: 100bfaf77;  */

void FUN_100bfaf14(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c2828;
    func_0x000107c610f4(PTR_PTR_1126c2828);
    func_0x000107c46314();
    func_0x000107c57f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bfaf78; end: 100bfb19b;  */

ulong FUN_100bfaf78(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  
  func_0x000107c61174(param_2);
  pcVar4 = param_2;
  func_0x000107c41080(param_2);
  pcVar5 = param_2;
  func_0x000107c4a9e4(param_2);
  pcVar6 = param_2;
  func_0x000107c4f8c0();
  func_0x000107c61180();
  func_0x000107c61174();
  if (pcVar6 == (char *)0x0) {
    uVar11 = 0;
    goto LAB_100bfb094;
  }
  pcVar7 = pcVar6;
  func_0x000107c60858(pcVar6,0x8000100);
  uVar11 = param_1;
  if (pcVar7 != (char *)0x0) {
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    func_0x0001001cde08(param_1,pcVar7,pcVar8);
    goto LAB_100bfb094;
  }
  pcVar7 = pcVar6;
  func_0x000107c412d4();
  func_0x000107c61180();
  if (pcVar7 == (char *)0x0) {
    pcVar7 = pcVar6;
    func_0x000107c412d8();
    func_0x000107c61180();
    if (pcVar7 != (char *)0x0) goto LAB_100bfb054;
    uVar11 = 0;
  }
  else {
LAB_100bfb054:
    pcVar9 = pcVar7;
    func_0x000107c61178();
    func_0x000107c3eea8();
    pcVar10 = pcVar7;
    func_0x000107c4adac(pcVar7);
    pcVar8 = "";
    if (pcVar9 != (char *)0x0) {
      pcVar8 = pcVar9;
    }
    func_0x0001001cde08(param_1,pcVar8,pcVar10);
  }
  func_0x000107c61170(pcVar7);
LAB_100bfb094:
  func_0x000107c61170(pcVar6);
  pcVar7 = param_2;
  func_0x000107c4a9dc(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,10,pcVar7,0);
  func_0x0001001ce1c8(param_1,6,pcVar5,0);
  func_0x0001001ce1c8(param_1,4,pcVar4,0);
  func_0x0001001ce2e4(param_1,8,uVar11 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  func_0x000107c61170(pcVar6);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100bfb19c; end: 100bfb1db; +[_TtC16AddFriendsTweaks18SCAddFriendsTweaks friendingEnableAddedMeDebuggingFromTweak] */

undefined1 FUN_100bfb19c(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x113022508,auStack_38,0,0);
  return uRam0000000113022508;
}



/* Entry: 100bfb1dc; end: 100bfb1e7; -[SCPreferences setAddedMeImpressionCountThreshold:] */

void FUN_100bfb1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeeeb8);
  return;
}



/* Entry: 100bfb1e8; end: 100bfb243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bfb1e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001000e3c80();
  func_0x000107c61180();
  func_0x000107c56bd8(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e9f8),param_2,
                      lVar1,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bfb244; end: 100bfb25b; -[SCAFriendsFetchEvent setSyncType:] */

void FUN_100bfb244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de66f8,9,param_3,0);
  return;
}



/* Entry: 100bfb25c; end: 100bfb2af; -[SCAFriendsFetchEvent setAddedMeCount:] */

void FUN_100bfb25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fda9d8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100bfb2b0; end: 100bfb303; -[SCAFriendsFetchEvent setMutualFriendsCount:] */

void FUN_100bfb2b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fdaad8,0xe,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100bfb304; end: 100bfb44b;  */

/* WARNING: Possible PIC construction at 0x000100bfb3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfb3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bfb3dc) */
/* WARNING: Removing unreachable block (ram,0x000100bfb3ec) */

void FUN_100bfb304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_2);
  func_0x000100185438(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e0340;
  func_0x000107c610f4(PTR_PTR_1126e0340);
  func_0x000107c47058(0,0);
  puVar2 = PTR_PTR_1126e0350;
  func_0x0001001c751c(PTR_PTR_1126e0350,puVar1);
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126e0350;
    func_0x000107c3068c(PTR_PTR_1126e0350,puVar1);
    func_0x000107c61180();
  }
  else {
    func_0x0001001cc1f4(puVar1,puVar2);
  }
  func_0x000107c5c28c(param_2);
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100bfb44c; end: 100bfb49f; -[SCAFriendsFetchEvent setDeletedFriendsCount:] */

void FUN_100bfb44c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fdaa98,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100bfb4a0; end: 100bfb4f3; -[SCAFriendsFetchEvent setBlockedFriendsCount:] */

void FUN_100bfb4a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fdaa78,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100bfb4f4; end: 100bfb503; -[SCAFriendsFetchEvent getEventName] */

undefined ** FUN_100bfb4f4(void)

{
  return &PTR____CFConstantStringClassReference_110fda9b8;
}



/* Entry: 100bfb504; end: 100bfb52f;  */

void FUN_100bfb504(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bfb530; end: 100bfb547; -[SCAFriendsFetchEvent getPerUserSamplingRateV2] */

undefined8 FUN_100bfb530(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 100bfb548; end: 100bfb57b;  */

void FUN_100bfb548(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bfb57c; end: 100bfb5ff;  */

void FUN_100bfb57c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bfb600; end: 100bfb60b;  */

void FUN_100bfb600(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  if ((param_1 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010efb6d80);
    func_0x000107c466bc(puVar7);
    func_0x000107c61170(uVar5);
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    puVar7 = (undefined *)0x0;
    if (lVar2 != 0) {
      func_0x000107c4ce20();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bfb740);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c4d650();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000100bfb740(lVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c61170(lVar4);
      puVar7 = (undefined *)0x0;
    }
  }
  puVar6 = puVar7;
  func_0x000107c61174(puVar7);
  (*pcVar1)(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 100bfb60c; end: 100bfb8a3;  */

void FUN_100bfb60c(ulong param_1,long param_2,long param_3,code *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  if ((param_1 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010efb6d80);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    puVar5 = (undefined *)0x0;
    if (param_2 != 0) {
      func_0x000107c4ce20();
      func_0x000107c61180();
      if (param_3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bfb740);
        (*pcVar1)();
      }
      lVar2 = param_3;
      func_0x000107c4d650();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000100bfb740(lVar2);
      func_0x000107c61574(param_2);
      func_0x000107c61170(lVar2);
      puVar5 = (undefined *)0x0;
    }
  }
  puVar4 = puVar5;
  func_0x000107c61174(puVar5);
  (*param_4)(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100bfb8a4; end: 100bfb8eb; -[GPBMessage encodeWithCoder:] */

void FUN_100bfb8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c41214();
  lVar1 = param_1;
  func_0x000107c4adac();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_encodeObject_forKey__1125c25b0,param_1,
               &PTR____CFConstantStringClassReference_11102fab8);
    return;
  }
  return;
}



/* Entry: 100bfb8ec; end: 100bfba6b; -[SCExtensionSharedFile writeData:] */

void FUN_100bfb8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c3b254(param_1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  puStack_58 = &UNK_10bc7f570;
  puStack_50 = &UNK_10bc7f580;
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
  func_0x000107c4692c();
  func_0x000107c4f06c(param_1);
  func_0x000107c61180();
  puVar1 = puStack_68;
  uVar4 = puStack_68[5];
  func_0x000107c61174(param_3);
  func_0x000107c40788(puVar2);
  func_0x000107c61174(uVar4);
  uVar3 = puVar1[5];
  puVar1[5] = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  uVar3 = puStack_68[5];
  func_0x000107c61174(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c60bcc(&uStack_70,8);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100bfba6c; end: 100bfbb47; -[SCExtensionSharedFile _createFileIfNeeded] */

/* WARNING: Possible PIC construction at 0x000100bfbac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfbb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bfbacc) */
/* WARNING: Removing unreachable block (ram,0x000100bfbaec) */
/* WARNING: Removing unreachable block (ram,0x000100bfbad8) */
/* WARNING: Removing unreachable block (ram,0x000100bfbb30) */

void FUN_100bfba6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3b22c();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c4e430(uVar2);
  func_0x000107c61180();
  func_0x000107c43418(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100bfbb48; end: 100bfbc2b; -[SCExtensionSharedFile _createDirectoryIfNeeded] */

/* WARNING: Possible PIC construction at 0x000100bfbb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfbbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bfbc0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bfbb90) */
/* WARNING: Removing unreachable block (ram,0x000100bfbbd4) */
/* WARNING: Removing unreachable block (ram,0x000100bfbc10) */
/* WARNING: Removing unreachable block (ram,0x000100bfbbe0) */

void FUN_100bfbb48(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c4f06c();
    func_0x000107c61180();
    func_0x000107c3ac0c();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100bfbc2c; end: 100bfbca3; -[SCLensMetadataRemoteApiInfo initWithRemoteApiSpecIds:] */

undefined1 * FUN_100bfbc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701908;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bfbca4; end: 100bfbcc7; -[SCLensMetadataRemoteApiInfo copyWithZone:] */

undefined8 FUN_100bfbca4(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bfbcc8; end: 100bfbd3f; -[SCLensMetadataConnectedLensInfo initWithAppId:] */

undefined1 * FUN_100bfbcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127018f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bfbd40; end: 100bfbd63; -[SCLensMetadataConnectedLensInfo copyWithZone:] */

undefined8 FUN_100bfbd40(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bfbd64; end: 100bfbd6f;  */

void FUN_100bfbd64(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uStack_68 = param_1;
  if (uVar1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
    func_0x000107c61434();
    puVar6 = PTR___ss11AnyHashableVN_11034e448;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar9 = uVar1;
    }
    func_0x000107c60480();
    func_0x000107c61434(param_1);
    puVar6 = PTR___ss11AnyHashableVN_11034e448;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___ss11AnyHashableVN_11034e448 = puVar6;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      uVar4 = 0x112e38b20;
      if ((uVar1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100bfbf18);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar1 + uVar10 * 8 + 0x20);
        func_0x000107c615f0();
      }
      else {
        uVar3 = uVar10;
        func_0x000101ebd7a0(uVar10,uVar1);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bfbf14);
        (*pcVar2)();
      }
      uVar11 = uVar10 + 1;
      uStack_90 = uVar3;
      func_0x0001000285a8(0x112e38b20,&UNK_10da23630);
      puVar5 = &uStack_c0;
      func_0x000107c6147c(puVar5,&uStack_90,uVar4,puVar6,6);
      if (((ulong)puVar5 & 1) == 0) {
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
LAB_100bfbdf0:
        func_0x000100a119cc(&uStack_c0);
      }
      else {
        if (lStack_a8 == 0) goto LAB_100bfbdf0;
        uStack_88 = uStack_b8;
        uStack_90 = uStack_c0;
        lStack_78 = lStack_a8;
        uStack_80 = uStack_b0;
        uStack_70 = uStack_a0;
        puVar6 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          FUN_100beb08c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar3 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_100beb08c(puVar8,uVar3 + 1,1,puVar7);
        }
        *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar8 + uVar3 * 0x28 + 0x40) = uStack_70;
        *(undefined8 *)(puVar8 + uVar3 * 0x28 + 0x28) = uStack_88;
        *(ulong *)(puVar8 + uVar3 * 0x28 + 0x20) = uStack_90;
        *(long *)(puVar8 + uVar3 * 0x28 + 0x38) = lStack_78;
        *(undefined8 *)(puVar8 + uVar3 * 0x28 + 0x30) = uStack_80;
        puVar6 = PTR___ss11AnyHashableVN_11034e448;
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar9);
  }
  FUN_100bf13dc(puVar8);
  func_0x000107c6142c(puVar8);
  func_0x000100b60084(&uStack_68);
  func_0x000107c6142c(uStack_68);
  return;
}


