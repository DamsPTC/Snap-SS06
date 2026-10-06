/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e434a0; end: 102e434e3;  */

void FUN_102e434a0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102e434e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 102e434e4; end: 102e43503;  */

void FUN_102e434e4(void)

{
  return;
}



/* Entry: 102e43504; end: 102e43583; -[_TtC31MapAddFriendSharingConfirmation27SharingConfirmationWorkflow didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

/* WARNING: Possible PIC construction at 0x000102e43560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e43564) */

void FUN_102e43504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_102e43cd8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e43584; end: 102e43587; -[_TtC31MapAddFriendSharingConfirmation27SharingConfirmationWorkflow didSelectBlocklistCellWithBlocklistFriends:] */

void FUN_102e43584(void)

{
  return;
}



/* Entry: 102e43588; end: 102e4367b;  */

/* WARNING: Possible PIC construction at 0x000102e43660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e43664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e43588(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_102e41dbc();
  FUN_102e40df4(*(undefined8 *)(unaff_x20 + _DAT_112f1fd88),0);
  puVar1 = &UNK_1105dbcc8;
  func_0x000107c613fc(&UNK_1105dbcc8,0x18,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  puVar2 = &UNK_1105dbcf0;
  func_0x000107c613fc(&UNK_1105dbcf0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10db58ab8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10db58ac0,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102e4367c; end: 102e436d7; -[_TtC31MapAddFriendSharingConfirmation27SharingConfirmationWorkflow didNotShareLocationWithUserId:] */

void FUN_102e4367c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102e43588(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102e436d8; end: 102e437cf; -[_TtC31MapAddFriendSharingConfirmation27SharingConfirmationWorkflow didShareLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e436d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f1fd88);
  func_0x000107c61174();
  FUN_102e40df4(uVar4,1);
  puVar1 = &UNK_1105dbc78;
  func_0x000107c613fc(&UNK_1105dbc78,0x18,7);
  *(long *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_1105dbca0;
  func_0x000107c613fc(&UNK_1105dbca0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10db58aa8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 0x10;
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10db58ab0,puVar2,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e437d0; end: 102e439a3;  */

/* WARNING: Possible PIC construction at 0x000102e43980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e43984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e437d0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar1 = _DAT_112f1fd70;
  if (*(long *)(unaff_x20 + _DAT_112f1fd70) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  puVar2 = PTR_PTR_1126b1c10;
  func_0x000107c610f8(PTR_PTR_1126b1c10);
  func_0x000107c495dc(uVar8);
  func_0x00010038318c(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar2);
  lVar3 = unaff_x20;
  func_0x000107c61174();
  puVar4 = puVar2;
  func_0x0001038b4d54(puVar2,lVar3,0xffffffffffffffff);
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + _DAT_112f1fd68) + _DAT_112fa8fd8);
  func_0x000107c3eccc();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar8;
  func_0x000107c615e8(uVar7);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c4ab7c();
  }
  func_0x000106745ae8(*(undefined8 *)(*(long *)(lVar3 + _DAT_112f1fd60) + 0x18),1);
  puVar5 = &UNK_1105dbc28;
  func_0x000107c613fc(&UNK_1105dbc28,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar3;
  puVar6 = &UNK_1105dbc50;
  func_0x000107c613fc(&UNK_1105dbc50,0x20,7);
  *(undefined **)(puVar6 + 0x10) = &UNK_10db58a88;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  func_0x000107c61174(lVar3);
  uVar8 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10db58a98,puVar6,uVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar6);
  return;
}



/* Entry: 102e439a4; end: 102e439cb; -[_TtC31MapAddFriendSharingConfirmation27SharingConfirmationWorkflow didOpenMapSettings] */

void FUN_102e439a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e437d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e439cc; end: 102e439cf; -[_TtC31MapAddFriendSharingConfirmation27SharingConfirmationWorkflow tray:positionDidChange:] */

void FUN_102e439cc(void)

{
  return;
}



/* Entry: 102e439d0; end: 102e43a47; -[_TtC31MapAddFriendSharingConfirmation27SharingConfirmationWorkflow tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e439d0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112f1fd78);
  if (lVar1 == 0) {
    param_1 = 0x4082200000000000;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174(lVar1);
    FUN_102e4125c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  return param_1;
}



/* Entry: 102e43a48; end: 102e43a5f; -[_TtC31MapAddFriendSharingConfirmation27SharingConfirmationWorkflow locationSharingSettingsScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e43a48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f1fd70);
  *(undefined8 *)(param_1 + _DAT_112f1fd70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102e43a60; end: 102e43aab;  */

void FUN_102e43a60(void)

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
  plVar2[1] = 0x102e441c8;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e431bc,lVar1,lVar3);
  return;
}



/* Entry: 102e43aac; end: 102e43b1b;  */

void FUN_102e43aac(undefined8 param_1)

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
  plVar3[1] = 0x102e441d0;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102e43b1c; end: 102e43bab;  */

void FUN_102e43b1c(void)

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
  plVar2[1] = 0x102e43b68;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e431bc,lVar1,lVar3);
  return;
}



/* Entry: 102e43bac; end: 102e43c1b;  */

void FUN_102e43bac(undefined8 param_1)

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
  plVar3[1] = 0x102e441d8;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102e43c1c; end: 102e43c67;  */

void FUN_102e43c1c(void)

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
  plVar2[1] = 0x102e441cc;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e431bc,lVar1,lVar3);
  return;
}



/* Entry: 102e43c68; end: 102e43cd7;  */

void FUN_102e43c68(undefined8 param_1)

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
  plVar3[1] = 0x102e441d4;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102e43cd8; end: 102e44013;  */

void FUN_102e43cd8(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if ((param_2 & 1) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e44014);
      (*pcVar2)();
    }
    puVar3 = &UNK_1105dbd18;
    func_0x000107c613fc(&UNK_1105dbd18,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = &UNK_1105dbd40;
    func_0x000107c613fc(&UNK_1105dbd40,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_102e44014;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_102e4404c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101d0df08;
    puStack_88 = &UNK_1105dbd58;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4();
    puVar4 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    pcStack_80 = FUN_102e434e4;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101d0e08c;
    puStack_88 = &UNK_1105dbd80;
    ppuVar6 = &puStack_a0;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
    pcStack_80 = (code *)0x102e434e8;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101bd3ff8;
    puStack_88 = &UNK_1105dbda8;
    ppuVar7 = &puStack_a0;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_78);
    pcStack_80 = (code *)0x102e434ec;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101d0e174;
    puStack_88 = &UNK_1105dbdd0;
    ppuVar8 = &puStack_a0;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_78);
    pcStack_80 = (code *)0x102e434f0;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101bd41dc;
    puStack_88 = &UNK_1105dbdf8;
    ppuVar9 = &puStack_a0;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_78);
    pcStack_80 = (code *)0x102e434f4;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101d0e2d0;
    puStack_88 = &UNK_1105dbe20;
    ppuVar10 = &puStack_a0;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_78);
    pcStack_80 = (code *)0x102e434f8;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101d0e354;
    puStack_88 = &UNK_1105dbe48;
    ppuVar11 = &puStack_a0;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    pcStack_80 = (code *)0x102e43500;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101d0e3bc;
    puStack_88 = &UNK_1105dbe70;
    ppuVar12 = &puStack_a0;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    pcStack_80 = (code *)0x102e434fc;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101d0e354;
    puStack_88 = &UNK_1105dbe98;
    ppuVar13 = &puStack_a0;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    func_0x000107c4c57c(param_1);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 102e44014; end: 102e4404b;  */

void FUN_102e44014(void)

{
  FUN_102e43350();
  return;
}



/* Entry: 102e4404c; end: 102e4408b;  */

void FUN_102e4404c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e4408c; end: 102e440a7;  */

void FUN_102e4408c(long param_1,long param_2)

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



/* Entry: 102e440a8; end: 102e4410b;  */

void FUN_102e440a8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102e4410c;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4340c,0,0);
  return;
}



/* Entry: 102e4410c; end: 102e44147;  */

void FUN_102e4410c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e44144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e44148; end: 102e44187;  */

void FUN_102e44148(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e44188; end: 102e441db;  */

void FUN_102e44188(long param_1,long param_2)

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



/* Entry: 102e441dc; end: 102e4436f;  */

undefined * FUN_102e441dc(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  
  FUN_102e4459c();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar2);
    func_0x000107c61170(puVar3);
    lVar4 = lVar1;
    func_0x000107c50764();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(lVar4);
        return (undefined *)0x0;
      }
      lVar6 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
      lVar5 = lVar6;
      func_0x000107c5ee20(lVar6,puVar7);
      func_0x000107c51770(puVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x00010006c090(lVar6,puVar7);
      func_0x000107c61170(lVar5);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar2);
      return puVar3;
    }
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar1);
    param_1 = puVar2;
  }
  func_0x000107c61170(param_1);
  return (undefined *)0x0;
}



/* Entry: 102e44370; end: 102e44553;  */

/* WARNING: Possible PIC construction at 0x000102e444e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e444e8) */

void FUN_102e44370(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  uVar5 = param_4;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c60bb8();
  func_0x000107c61180();
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x000107c5ee30();
    func_0x000107c61170(param_3);
    uVar3 = (ulong)((uint)param_4 & 1);
    FUN_102e4459c(param_1,param_2,uVar3);
    func_0x000107c5ee80((long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),
                        0x40f5180000000000);
    func_0x000107c5ee20(lVar2,uVar5);
    func_0x000107c5ee70();
    pcStack_80 = FUN_102e44554;
    uStack_78 = 0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100ab47f8;
    puStack_88 = &UNK_1105dbf70;
    ppuVar4 = &puStack_a0;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c5168c(lVar1);
    func_0x00010006c090(lVar2,uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c60bd0(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102e44554; end: 102e44557;  */

void FUN_102e44554(void)

{
  return;
}



/* Entry: 102e44558; end: 102e4459b;  */

void FUN_102e44558(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e4459c; end: 102e4477f;  */

undefined * FUN_102e4459c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar5 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  lVar6 = lVar5;
  func_0x000107c613fc();
  puVar9 = PTR___sSdN_11034dd90;
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  puVar3 = PTR___sSds7CVarArgsWP_11034ddc0;
  *(undefined **)(lVar6 + 0x38) = puVar9;
  *(undefined **)(lVar6 + 0x40) = puVar3;
  *(undefined8 *)(lVar6 + 0x20) = param_1;
  uVar7 = 0x66332e25;
  uVar10 = 0xe400000000000000;
  func_0x000107c5fb00(0x66332e25,0xe400000000000000,lVar6);
  func_0x000107c613fc(lVar5,0x48,7);
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined **)(lVar5 + 0x38) = puVar9;
  *(undefined **)(lVar5 + 0x40) = puVar3;
  *(undefined8 *)(lVar5 + 0x20) = param_2;
  uVar8 = 0x66332e25;
  uVar11 = 0xe400000000000000;
  func_0x000107c5fb00(0x66332e25,0xe400000000000000,lVar5);
  bVar4 = (param_3 & 1) == 0;
  uVar1 = 0x746867696c2d;
  if (bVar4) {
    uVar1 = 0x6b7261642d;
  }
  uVar2 = 0xe600000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c61434(uVar10);
  func_0x000107c5fb78(0x2c,0xe100000000000000);
  func_0x000107c6142c(uVar10);
  func_0x000107c61434(uVar10);
  func_0x000107c5fb78(uVar8,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar10);
  func_0x000107c61434(uVar10);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar10);
  puVar9 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(uVar7,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c4766c(puVar9);
  func_0x000107c61170(uVar7);
  return puVar9;
}



/* Entry: 102e44780; end: 102e447a3;  */

void FUN_102e44780(long param_1,long param_2)

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



/* Entry: 102e447a4; end: 102e44843;  */

void FUN_102e447a4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e44844; end: 102e4486f;  */

void FUN_102e44844(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e44870; end: 102e4496b;  */

void FUN_102e44870(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x000107c61168();
  func_0x000107c41030();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5d9c8();
  *(undefined **)(unaff_x22 + 0x28) = puVar2;
  func_0x000107c61170(puVar1);
  uVar3 = (ulong)(puVar2 == (undefined *)0x1);
  FUN_102e441dc(uVar7,uVar6);
  if (uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102e448fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000103b3e84c(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                      0x402e000000000000,0x4090000000000000,0x4090000000000000,0x4080000000000000,
                      0x4080000000000000);
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  plVar4 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102e4496c;
  lVar5 = *(long *)(unaff_x22 + 0x20);
  plVar4[0x29] = uVar3;
  plVar4[0x2a] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e46b9c,0,0);
  return;
}



/* Entry: 102e4496c; end: 102e449e7;  */

void FUN_102e4496c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102e449bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar3 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e449e8,0,0);
  return;
}



/* Entry: 102e449e8; end: 102e44a3f;  */

void FUN_102e449e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = uVar2;
  FUN_102e44a40(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),uVar2,
                *(long *)(unaff_x22 + 0x28) == 1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102e44a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102e44a40; end: 102e450c7;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_102e44a40(double param_1,double param_2,long param_3,uint param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long unaff_x20;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  dVar26 = param_1;
  dVar28 = param_2;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 == 0) {
    return (undefined *)0x0;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5fadc(uVar6,*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = lVar5;
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (lVar4 != 0) {
    func_0x000107c4077c(lVar4);
    dVar29 = param_2;
    func_0x000103b3e784(param_2,0x402e000000000000);
    dVar29 = (double)(long)dVar29;
    if (0x7fefffffffffffff < (ulong)ABS(dVar29)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450a8);
      (*pcVar2)();
    }
    if (dVar29 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450ac);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar29) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450b0);
      (*pcVar2)();
    }
    dVar27 = param_1;
    func_0x000103b3e7c8(param_1,0x402e000000000000);
    dVar27 = (double)(long)dVar27;
    if (0x7fefffffffffffff < (ulong)ABS(dVar27)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450b4);
      (*pcVar2)();
    }
    if (dVar27 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450b8);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar27) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450bc);
      (*pcVar2)();
    }
    lVar13 = 0;
    lVar25 = (long)dVar29;
    lVar24 = (long)dVar27;
    puVar22 = (ulong *)(param_3 + 0x40);
    uVar20 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if (-uVar20 < 0x40) {
      uVar15 = ~(-1L << (-uVar20 & 0x3f));
    }
    uVar15 = uVar15 & *puVar22;
    uVar1 = uVar15;
    lVar18 = lVar13;
    do {
      while (lVar14 = lVar18, uVar16 = uVar1, uVar15 == 0) {
        bVar3 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4509c);
          (*pcVar2)();
        }
        if ((long)(0x3f - uVar20 >> 6) <= lVar13) {
          func_0x000107c61434(param_3);
          FUN_102e46f74();
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(lVar4);
          return (undefined *)0x0;
        }
        uVar1 = uVar16;
        lVar18 = lVar14;
        uVar15 = puVar22[lVar13];
      }
      uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      plVar17 = (long *)(*(long *)(param_3 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x18 +
                        lVar13 * 0x600);
      uVar1 = uVar15;
      lVar18 = lVar13;
    } while (*plVar17 != lVar25 || plVar17[1] != lVar24);
    func_0x000107c61438(param_3,2);
    FUN_102e46f74(param_3,puVar22,~uVar20,lVar14,uVar16);
    func_0x000103b3e848(dVar26,dVar28,0x402e000000000000,0x4090000000000000,0x4090000000000000);
    uVar20 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
      uVar15 = ~(-1L << (uVar20 & 0x3f));
    }
    uVar15 = uVar15 & *(ulong *)(param_3 + 0x40);
    if (uVar15 == 0) {
      lVar18 = 0;
      uVar20 = uVar20 + 0x3f >> 6;
      lVar13 = 0;
      do {
        if (uVar20 - 1 == lVar13) goto LAB_102e45050;
        lVar14 = lVar13 + 1;
        uVar15 = *(ulong *)(param_3 + 0x48 + lVar13 * 8);
        lVar18 = lVar18 + -0x40;
        lVar13 = lVar14;
      } while (uVar15 == 0);
      uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) - lVar18;
    }
    else {
      lVar14 = 0;
      uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar18 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
      uVar15 = uVar15 - 1 & uVar15;
      uVar20 = uVar20 + 0x3f >> 6;
    }
    lVar13 = *(long *)(*(long *)(param_3 + 0x30) + lVar18 * 0x18);
    lVar18 = lVar13;
    while( true ) {
      while (lVar19 = lVar18, lVar23 = lVar13, uVar15 != 0) {
        uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 - 1 & uVar15;
        lVar13 = *(long *)(*(long *)(param_3 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x18
                          + lVar14 * 0x600);
        lVar18 = lVar13;
        if (lVar19 <= lVar13) {
          lVar13 = lVar23;
          lVar18 = lVar19;
        }
      }
      bVar3 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450a0);
        (*pcVar2)();
      }
      if ((long)uVar20 <= lVar14) break;
      uVar15 = puVar22[lVar14];
      lVar13 = lVar23;
      lVar18 = lVar19;
    }
    uVar20 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
      uVar15 = ~(-1L << (uVar20 & 0x3f));
    }
    uVar15 = uVar15 & *(ulong *)(param_3 + 0x40);
    if (uVar15 == 0) {
      lVar18 = 0;
      uVar20 = uVar20 + 0x3f >> 6;
      lVar13 = 0;
      do {
        if (uVar20 - 1 == lVar13) goto LAB_102e45050;
        lVar14 = lVar13 + 1;
        uVar15 = *(ulong *)(param_3 + 0x48 + lVar13 * 8);
        lVar18 = lVar18 + -0x40;
        lVar13 = lVar14;
      } while (uVar15 == 0);
      uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) - lVar18;
    }
    else {
      lVar14 = 0;
      uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar18 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
      uVar15 = uVar15 - 1 & uVar15;
      uVar20 = uVar20 + 0x3f >> 6;
    }
    lVar13 = *(long *)(*(long *)(param_3 + 0x30) + lVar18 * 0x18 + 8);
    lVar18 = lVar13;
    while( true ) {
      while (lVar19 = lVar18, lVar21 = lVar13, uVar15 != 0) {
        uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 - 1 & uVar15;
        lVar13 = *(long *)(*(long *)(param_3 + 0x30) +
                           (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar14 << 6) * 0x18 + 8);
        lVar18 = lVar13;
        if (lVar19 <= lVar13) {
          lVar13 = lVar21;
          lVar18 = lVar19;
        }
      }
      bVar3 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450a4);
        (*pcVar2)();
      }
      if ((long)uVar20 <= lVar14) break;
      uVar15 = puVar22[lVar14];
      lVar13 = lVar21;
      lVar18 = lVar19;
    }
    if (SBORROW8(lVar25,lVar23)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450c0);
      (*pcVar2)();
    }
    if (SBORROW8(lVar24,lVar21)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450c4);
      (*pcVar2)();
    }
    puVar7 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(0x4080000000000000,0x4080000000000000);
    puVar8 = &UNK_1105dc020;
    func_0x000107c613fc(&UNK_1105dc020,0x60,7);
    *(long *)(puVar8 + 0x10) = param_3;
    *(long *)(puVar8 + 0x18) = lVar23;
    *(undefined8 *)(puVar8 + 0x28) = 0x4090000000000000;
    *(undefined8 *)(puVar8 + 0x20) = 0x4090000000000000;
    *(long *)(puVar8 + 0x30) = lVar21;
    *(double *)(puVar8 + 0x38) = dVar26 + (double)(lVar25 - lVar23) * 1024.0 + -256.0;
    *(double *)(puVar8 + 0x40) = dVar28 + (double)(lVar24 - lVar21) * 1024.0 + -256.0;
    *(undefined8 *)(puVar8 + 0x50) = 0x4080000000000000;
    *(undefined8 *)(puVar8 + 0x48) = 0x4080000000000000;
    *(long *)(puVar8 + 0x58) = param_3;
    puVar9 = &UNK_1105dc048;
    func_0x000107c613fc(&UNK_1105dc048,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x102e46f7c;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    pcStack_a0 = FUN_102e46f98;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100f9148c;
    puStack_a8 = &UNK_1105dc060;
    ppuVar10 = &puStack_c0;
    puStack_98 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar11 = puStack_98;
    func_0x000107c61438(param_3,2);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(puVar11);
    puVar11 = puVar7;
    func_0x000107c45138(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    puVar12 = puVar9;
    func_0x000107c61544(puVar9,"",0x75,0xa4,0x2a,1);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e450c8);
      (*pcVar2)();
    }
    FUN_102e44370(param_1,param_2,puVar11,param_4 & 1);
    func_0x000107c61574(puVar8);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c6142c(param_3);
    func_0x000107c61170(puVar7);
    return puVar11;
  }
LAB_102e45060:
  func_0x000107c615e8(lVar5);
  return (undefined *)0x0;
LAB_102e45050:
  func_0x000107c6142c(param_3);
  func_0x000107c61170(lVar4);
  goto LAB_102e45060;
}



/* Entry: 102e450c8; end: 102e45207; -[_TtC48MapNativeStaticMapFetchingServicesImplementation25MapNativeStaticMapFetcher generateStaticMapWithCoordinate:completionHandler:] */

void FUN_102e450c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  puVar1 = &UNK_1105dbfa8;
  func_0x000107c613fc(&UNK_1105dbfa8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1105dbfd0;
  func_0x000107c613fc(&UNK_1105dbfd0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10db58bc0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1105dbff8;
  func_0x000107c613fc(&UNK_1105dbff8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10db58bd0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_3);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10db58be0,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 102e45208; end: 102e45277;  */

void FUN_102e45208(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(long *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)0x50;
  func_0x000107c6157c(param_4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102e45278;
  plVar1[4] = param_4;
  plVar1[2] = param_1;
  plVar1[3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e44870,0,0);
  return;
}



/* Entry: 102e45278; end: 102e45313;  */

void FUN_102e45278(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x20));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    unaff_x20 = 0;
    lVar2 = param_1;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    param_1 = unaff_x20;
    lVar2 = 0;
  }
  (**(code **)(*(long *)(lVar4 + 0x10) + 0x10))(*(long *)(lVar4 + 0x10),lVar2,unaff_x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000102e45310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 102e45314; end: 102e453bb;  */

void FUN_102e45314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  lVar3 = 0x112f1ff48;
  func_0x0001000285a8(0x112f1ff48,&UNK_10db58c30);
  *(long *)(unaff_x22 + 0x90) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e453bc,0,0);
  return;
}



/* Entry: 102e453bc; end: 102e45693;  */

void FUN_102e453bc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar8 = *(long *)(unaff_x22 + 0x80);
  lVar11 = *(long *)(lVar8 + 0x10);
  if (lVar11 != 0) {
    uVar5 = **(undefined8 **)(unaff_x22 + 0x78);
    lVar2 = 0;
    func_0x000107c5fd0c();
    lVar12 = *(long *)(lVar2 + -8);
    puVar15 = (undefined8 *)(lVar8 + 0x30);
    pcVar6 = *(code **)(lVar12 + 0x38);
    do {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar13 = *(ulong *)(unaff_x22 + 0x88);
      uVar9 = puVar15[-2];
      uVar1 = puVar15[-1];
      uVar18 = *puVar15;
      (*pcVar6)(uVar10,1,1,lVar2);
      puVar3 = &UNK_1105dc098;
      func_0x000107c613fc(&UNK_1105dc098,0x40,7);
      plVar16 = (long *)(puVar3 + 0x10);
      *(undefined8 *)(puVar3 + 0x18) = 0;
      *plVar16 = 0;
      *(ulong *)(puVar3 + 0x20) = uVar13;
      *(undefined8 *)(puVar3 + 0x28) = uVar9;
      *(undefined8 *)(puVar3 + 0x30) = uVar1;
      *(undefined8 *)(puVar3 + 0x38) = uVar18;
      func_0x0001000abe04(uVar10,uVar4);
      (**(code **)(lVar12 + 0x30))(uVar4,1,lVar2);
      func_0x000107c6157c(uVar13);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
      if ((int)uVar4 == 1) {
        FUN_102e4714c(uVar9,0x112d453c8,&UNK_10d90ac60);
        uVar13 = 0x3100;
        lVar8 = *plVar16;
        if (lVar8 == 0) goto LAB_102e45548;
LAB_102e4557c:
        lVar14 = *(long *)(puVar3 + 0x18);
        lVar17 = lVar8;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar8);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar8);
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar12 + 8))(uVar9,lVar2);
        uVar13 = uVar13 & 0xff | 0x3100;
        lVar8 = *plVar16;
        if (lVar8 != 0) goto LAB_102e4557c;
LAB_102e45548:
        lVar17 = 0;
        lVar14 = 0;
      }
      func_0x000107c6157c(puVar3);
      uVar4 = 0x112f1ff30;
      func_0x0001000285a8(0x112f1ff30,&UNK_10db58c10);
      puVar7 = (undefined8 *)0x0;
      if (lVar14 != 0 || lVar17 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar17;
        *(long *)(unaff_x22 + 0x28) = lVar14;
        puVar7 = (undefined8 *)(unaff_x22 + 0x10);
      }
      puVar15 = puVar15 + 3;
      uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
      *(undefined8 *)(unaff_x22 + 0x50) = 1;
      *(undefined8 **)(unaff_x22 + 0x58) = puVar7;
      *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
      func_0x000107c615bc(uVar13,unaff_x22 + 0x50,uVar4,&UNK_10db58c40,puVar3);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar13);
      FUN_102e4714c(uVar9,0x112d453c8,&UNK_10d90ac60);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = **(undefined8 **)(unaff_x22 + 0x78);
  uVar5 = 0x112f1ff30;
  func_0x0001000285a8(0x112f1ff30,&UNK_10db58c10);
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd80(uVar10,uVar9,uVar5,uVar4,PTR___ss5ErrorWS_11034ee10);
  plVar16 = (long *)(ulong)*(uint *)(PTR___sScg8IteratorV4nextxSgyYaKFTu_11034fe80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar16;
  *plVar16 = unaff_x22;
  plVar16[1] = (long)FUN_102e45694;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg8IteratorV4nextxSgyYaKF_11034fe78)
            (plVar16,unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 102e45694; end: 102e456fb;  */

void FUN_102e45694(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    *(undefined **)(lVar2 + 0xc0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    pcVar1 = FUN_102e456fc;
  }
  else {
    *(undefined **)(lVar2 + 0xd8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    *(long *)(lVar2 + 0xe0) = unaff_x20;
    pcVar1 = FUN_102e4598c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102e456fc; end: 102e45927;  */

void FUN_102e456fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x22;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x30);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  uVar13 = *(ulong *)(unaff_x22 + 0xc0);
  if (lVar5 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar11 = *(ulong **)(unaff_x22 + 0x70);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x90));
    *puVar11 = uVar13;
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102e45838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar16 = *(ulong *)(unaff_x22 + 0x38);
  uVar17 = *(ulong *)(unaff_x22 + 0x40);
  func_0x000107c61174();
  uVar6 = uVar13;
  func_0x000107c61558();
  *(ulong *)(unaff_x22 + 0x68) = uVar13;
  uVar7 = uVar15;
  uVar9 = uVar16;
  FUN_102e46660(uVar17);
  uVar12 = (ulong)~(uint)uVar9 & 1;
  lVar14 = *(long *)(uVar13 + 0x10) + uVar12;
  if (!SCARRY8(*(long *)(uVar13 + 0x10),uVar12)) {
    if (*(long *)(*(long *)(unaff_x22 + 0xc0) + 0x18) < lVar14) {
      FUN_102e468d0(lVar14,uVar6);
      uVar7 = uVar15;
      uVar13 = uVar16;
      FUN_102e46660(uVar17);
      if (((uint)uVar9 & 1) != ((uint)uVar13 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                  (&UNK_1106d68c0);
        return;
      }
    }
    else if ((uVar6 & 1) == 0) {
      FUN_102e4675c();
    }
    lVar14 = *(long *)(unaff_x22 + 0x68);
    *(long *)(unaff_x22 + 200) = lVar14;
    if ((uVar9 & 1) == 0) {
      lVar1 = lVar14 + (uVar7 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar11 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 0x18);
      *puVar11 = uVar15;
      puVar11[1] = uVar16;
      puVar11[2] = uVar17;
      *(long *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = lVar5;
      func_0x000107c61170(lVar5);
      if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102e45928);
        (*pcVar4)();
      }
      *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
      *(long *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = lVar5;
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar5);
    }
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScg8IteratorV4nextxSgyYaKFTu_11034fe80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_102e45928;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg8IteratorV4nextxSgyYaKF_11034fe78)
              (plVar8,(ulong *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x90));
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102e45910);
  (*pcVar4)();
}



/* Entry: 102e45928; end: 102e4598b;  */

void FUN_102e45928(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 200);
    pcVar1 = FUN_102e456fc;
  }
  else {
    *(undefined8 *)(lVar2 + 0xd8) = *(undefined8 *)(lVar2 + 200);
    *(long *)(lVar2 + 0xe0) = unaff_x20;
    pcVar1 = FUN_102e4598c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102e4598c; end: 102e459fb;  */

void FUN_102e4598c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c6142c(uVar4);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102e459f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e459fc; end: 102e45a6b;  */

void FUN_102e459fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102e45a6c;
  plVar1[0x17] = param_5;
  plVar1[0x16] = param_1;
  plVar1[0x14] = param_6;
  plVar1[0x15] = param_7;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x18] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar1[0x19] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0x1a] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1b] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e45bc0,0,0);
  return;
}



/* Entry: 102e45a6c; end: 102e45aff;  */

void FUN_102e45a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102e45ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  *(undefined8 *)(lVar2 + 0x30) = param_3;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e45b00,0,0);
  return;
}



/* Entry: 102e45b00; end: 102e45b2b;  */

void FUN_102e45b00(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  auVar4 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x30),
                    *(undefined1 (*) [16])(unaff_x22 + 0x30),8,1);
  puVar2[1] = auVar4._8_8_;
  *puVar2 = auVar4._0_8_;
  puVar2[2] = uVar3;
  puVar2[3] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102e45b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e45b2c; end: 102e45bbf;  */

void FUN_102e45b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 200) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e45bc0,0,0);
  return;
}



/* Entry: 102e45bc0; end: 102e45eab;  */

void FUN_102e45bc0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x22;
  undefined8 *puVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0xb8) + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xe0) = lVar6;
  if (lVar6 == 0) {
    func_0x000102e4710c();
    func_0x000107c613f8(&UNK_1105dc180,lVar6,0,0);
    func_0x000107c61654();
  }
  else {
    dVar14 = *(double *)(unaff_x22 + 0xb0);
    func_0x000102e48204(0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102e45ea4);
      (*pcVar5)();
    }
    if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102e45ea8);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102e45eac);
      (*pcVar5)();
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    lVar2 = *(long *)(unaff_x22 + 0xd0);
    lVar9 = *(long *)(unaff_x22 + 0xb8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    puVar7 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
    func_0x000107c61168(PTR__OBJC_CLASS___UITraitCollection_1126b6d80);
    func_0x000107c41030();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(lVar9 + 0x48);
    func_0x000107c615f0(uVar13);
    FUN_102e47d6c(uVar15,uVar1,uVar3,(long)dVar14,puVar7,uVar13,0,0);
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(puVar7);
    (**(code **)(lVar2 + 0x30))(uVar15,1,uVar8);
    if ((int)uVar15 != 1) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
      (**(code **)(*(long *)(unaff_x22 + 0xd0) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xc0),
                 *(undefined8 *)(unaff_x22 + 200));
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102e45eac;
      lVar9 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar9,1);
      puVar10 = PTR_PTR_1126b20c0;
      func_0x000107c61168(PTR_PTR_1126b20c0);
      puVar11 = puVar10;
      func_0x000107c5ed90();
      puVar7 = &UNK_1105dc0c0;
      func_0x000107c613fc(&UNK_1105dc0c0,0x30,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar8;
      *(undefined8 *)(puVar7 + 0x18) = uVar1;
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(puVar7 + 0x20) = uVar15;
      puVar12 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar12 = puVar4;
      *(long *)(puVar7 + 0x28) = lVar9;
      *(code **)(unaff_x22 + 0x70) = FUN_102e4718c;
      *(undefined **)(unaff_x22 + 0x78) = puVar7;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_10130cf28;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1105dc0d8;
      func_0x000107c60bc4(puVar12);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000106879dc0(puVar10,puVar11,lVar6,puVar12);
      func_0x000107c60bd0(puVar12);
      func_0x000107c61170(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    FUN_102e4714c(uVar8,0x112d36580,&UNK_10d9016d0);
    func_0x000102e4710c();
    func_0x000107c613f8(&UNK_1105dc180,uVar8,0,0);
    func_0x000107c61654();
    func_0x000107c615e8(lVar6);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000102e45d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e45eac; end: 102e45f27;  */

void FUN_102e45eac(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)(lVar2 + 0x80);
    *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(lVar2 + 0x98);
    pcVar1 = FUN_102e45f28;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_102e45f98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102e45f28; end: 102e45f97;  */

void FUN_102e45f28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe0));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102e45f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xf0),
             *(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x108));
  return;
}



/* Entry: 102e45f98; end: 102e45ffb;  */

void FUN_102e45f98(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  lVar2 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe0));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102e45ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e45ffc; end: 102e4627b;  */

void FUN_102e45ffc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8,long param_9,long param_10,
                  long param_11)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lVar18;
  
  uVar7 = 1L << ((ulong)*(byte *)(param_8 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_8 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_8 + 0x40);
  uVar3 = param_8;
  func_0x000107c61434();
  lVar8 = 0;
  while( true ) {
    do {
      while (uVar11 == 0) {
        bVar2 = SCARRY8(lVar8,1);
        lVar8 = lVar8 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e46274);
          (*pcVar1)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar8) goto LAB_102e4623c;
        uVar11 = ((ulong *)(param_8 + 0x40))[lVar8];
      }
      uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      plVar6 = (long *)(*(long *)(param_8 + 0x30) + LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) * 0x18
                       + lVar8 * 0x600);
      lVar9 = *plVar6;
      if (SBORROW8(lVar9,param_9)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e46278);
        (*pcVar1)();
      }
      uVar10 = plVar6[1];
      if (SBORROW8(uVar10,param_10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4627c);
        (*pcVar1)();
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar18 = plVar6[2];
      dVar16 = param_1 * (double)(lVar9 - param_9);
      dVar17 = param_2 * (double)(long)(uVar10 - param_10);
      dVar12 = dVar16;
      dVar13 = dVar17;
      dVar14 = param_1;
      dVar15 = param_2;
      func_0x000107c609d8(dVar16,dVar17,param_1,param_2,param_3,param_4,param_5,param_6);
      func_0x000107c609e0();
    } while ((uVar3 & 1) != 0);
    if (*(long *)(param_11 + 0x10) == 0) goto LAB_102e4623c;
    func_0x000107c61434(param_11);
    FUN_102e46660(lVar18);
    if ((uVar10 & 1) == 0) break;
    uVar3 = *(ulong *)(*(long *)(param_11 + 0x38) + lVar9 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(param_11);
    uVar10 = uVar3;
    func_0x000107c3ab2c();
    func_0x000107c61180();
    if (uVar10 != 0) {
      uVar4 = uVar10;
      func_0x000107c60954(dVar12 - dVar16,dVar13 - dVar17,dVar14,dVar15);
      func_0x000107c61170(uVar10);
      if (uVar4 != 0) {
        puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c45af0();
        func_0x000107c422c0(dVar12 - param_3,dVar13 - param_4,dVar14,dVar15,0x3ff0000000000000);
        func_0x000107c422bc(dVar12 - param_3,dVar13 - param_4,dVar14,dVar15,puVar5);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar5);
      }
    }
    func_0x000107c61170();
  }
  func_0x000107c6142c(param_11);
LAB_102e4623c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_8);
  return;
}



/* Entry: 102e4627c; end: 102e46373;  */

void FUN_102e4627c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (param_3 == 0) {
    if (param_2 != 0) {
      puVar4 = *(undefined8 **)(*(long *)(param_6 + 0x40) + 0x28);
      *puVar4 = param_4;
      puVar4[1] = param_5;
      puVar4[2] = param_1;
      puVar4[3] = param_2;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_6);
      return;
    }
    func_0x000102e4710c();
    puVar1 = &UNK_1105dc180;
    func_0x000107c613f8(&UNK_1105dc180,param_2,0,0);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar1;
  }
  else {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_3;
    func_0x000107c614b0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_6,uVar2);
  return;
}



/* Entry: 102e46374; end: 102e46407;  */

void FUN_102e46374(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102e46408; end: 102e4647f;  */

void FUN_102e46408(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102e46480;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x50;
  func_0x000107c6157c(lVar2);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_102e45278;
  plVar4[4] = lVar2;
  plVar4[2] = lVar5;
  plVar4[3] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e44870,0,0);
  return;
}



/* Entry: 102e46480; end: 102e464bb;  */

void FUN_102e46480(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e464b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e464bc; end: 102e46533;  */

void FUN_102e464bc(void)

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
  plVar5[1] = 0x102e472d8;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102e46534; end: 102e4659b;  */

void FUN_102e46534(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e4656c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e4659c; end: 102e4661f;  */

void FUN_102e4659c(undefined8 param_1)

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
  plVar5[1] = 0x102e472e0;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102e46620; end: 102e4665f;  */

void FUN_102e46620(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e4665c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e46660; end: 102e466db;  */

void FUN_102e46660(double param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_2;
  func_0x000103b3e3c8(param_1,param_2,param_3);
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    puVar3 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 0x18);
    if ((double)puVar3[2] == param_1 && (*puVar3 == param_2 && puVar3[1] == param_3)) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102e466dc; end: 102e4675b;  */

void FUN_102e466dc(double param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    plVar2 = (long *)(*(long *)(unaff_x20 + 0x30) + param_4 * 0x18);
    if ((double)plVar2[2] == param_1 && (*plVar2 == param_2 && plVar2[1] == param_3)) {
      return;
    }
    param_4 = param_4 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102e4675c; end: 102e468cf;  */

void FUN_102e4675c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x0001000285a8(0x112f1ff50,&UNK_10db58c48);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar11 || lVar1 + uVar8 * 8 <= lVar6 + 0x40U) {
      func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102e46838;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x18);
        uVar13 = puVar3[2];
        uVar7 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar10 * 0x18);
        uVar14 = *puVar3;
        puVar4[1] = puVar3[1];
        *puVar4 = uVar14;
        puVar4[2] = uVar13;
        *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar10 * 8) = uVar7;
        func_0x000107c61174();
        if (uVar8 != 0) break;
LAB_102e46838:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102e468d0);
            (*pcVar5)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102e468a8;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_102e468a8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 102e468d0; end: 102e46b83;  */

void FUN_102e468d0(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_b8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar17 = 0x112f1ff50;
  func_0x0001000285a8(0x112f1ff50,&UNK_10db58c48);
  lVar5 = lVar16;
  func_0x000107c60490(lVar16,lVar1,param_2,uVar17);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_102e46b4c:
    func_0x000107c61574(lVar16);
    *unaff_x20 = lVar5;
    return;
  }
  puVar15 = (ulong *)(lVar16 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar18 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102e46b80);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar14 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_102e46b4c;
        }
        uVar14 = puVar15[lVar18];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar18 = lVar7;
    }
    uVar8 = LZCOUNT(uVar6) | lVar18 << 6;
    puVar11 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar8 * 0x18);
    uVar6 = *puVar11;
    uVar2 = puVar11[1];
    uVar19 = puVar11[2];
    uVar17 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + uVar8 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar17);
    }
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar5 + 0x28));
    uVar12 = uVar6;
    func_0x000103b3e3c8(uVar19,uVar6,uVar2);
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
    uVar9 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar9 + 1;
        if ((uVar12 == uVar8) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102e46b84);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar12 != uVar8) {
          uVar9 = uVar12;
        }
        bVar3 = (bool)(uVar12 == uVar8 | bVar3);
        uVar12 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar9 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    puVar11 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar8 * 0x18);
    *puVar11 = uVar6;
    puVar11[1] = uVar2;
    puVar11[2] = uVar19;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar8 * 8) = uVar17;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar18;
  } while( true );
}



/* Entry: 102e46b84; end: 102e46b9b;  */

void FUN_102e46b84(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e46b9c,0,0);
  return;
}



/* Entry: 102e46b9c; end: 102e46ccf;  */

void FUN_102e46b9c(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x148);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar6 = 0x112f1ff30;
    func_0x0001000285a8(0x112f1ff30,&UNK_10db58c10);
    uVar4 = 0x112f1ff40;
    func_0x0001000285a8(0x112f1ff40,&UNK_10db58c28);
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x158) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_102e46cd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )(plVar5,unaff_x22 + 0x130,uVar6,uVar4,0,0,&UNK_10db58c08,unaff_x22 + 0x110,uVar6,uVar4);
    return;
  }
  uVar6 = 0x112f1ff30;
  func_0x0001000285a8(0x112f1ff30,&UNK_10db58c10);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar6;
  func_0x000107c615ac(unaff_x22 + 0x10,uVar6);
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x10;
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x168) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102e46d28;
  lVar7 = *(long *)(unaff_x22 + 0x150);
  plVar5[0x10] = *(long *)(unaff_x22 + 0x148);
  plVar5[0x11] = lVar7;
  plVar5[0xe] = unaff_x22 + 0x140;
  plVar5[0xf] = unaff_x22 + 0x138;
  lVar7 = 0x112f1ff48;
  func_0x0001000285a8(0x112f1ff48,&UNK_10db58c30);
  plVar5[0x12] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar5[0x13] = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x14] = uVar2;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x15] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x16] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e453bc,0,0);
  return;
}



/* Entry: 102e46cd0; end: 102e46d27;  */

void FUN_102e46cd0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x158));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102e46d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102e46d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x130));
  return;
}



/* Entry: 102e46d28; end: 102e46dd3;  */

void FUN_102e46d28(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x170) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x168));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102e46e54,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x178) = plVar1;
  func_0x0001000285a8(0x112f1ff38,&UNK_10db58c20);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_102e46dd4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 102e46dd4; end: 102e46e53;  */

void FUN_102e46dd4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e46e1c,0,0);
  return;
}



/* Entry: 102e46e54; end: 102e46ee7;  */

void FUN_102e46e54(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar2;
  func_0x0001000285a8(0x112f1ff38,&UNK_10db58c20);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102e46ee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 102e46ee8; end: 102e46f2f;  */

void FUN_102e46ee8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e46f30,0,0);
  return;
}



/* Entry: 102e46f30; end: 102e46f73;  */

void FUN_102e46f30(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102e46f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e46f74; end: 102e46f97;  */

void FUN_102e46f74(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102e46f98; end: 102e46fb7;  */

void FUN_102e46f98(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e46fb8; end: 102e46fd3;  */

void FUN_102e46fb8(long param_1,long param_2)

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



/* Entry: 102e46fd4; end: 102e4703f;  */

void FUN_102e46fd4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102e472d4;
  plVar4[0x10] = lVar5;
  plVar4[0x11] = lVar1;
  plVar4[0xe] = param_1;
  plVar4[0xf] = param_2;
  lVar5 = 0x112f1ff48;
  func_0x0001000285a8(0x112f1ff48,&UNK_10db58c30);
  plVar4[0x12] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x13] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x14] = uVar2;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e453bc,0,0);
  return;
}



/* Entry: 102e47040; end: 102e470cf;  */

void FUN_102e47040(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102e470d0;
  plVar7[2] = param_1;
  plVar4 = (long *)0x110;
  func_0x000107c615b8(0x110,uVar1,uVar2);
  plVar7[3] = (long)plVar4;
  *plVar4 = (long)plVar7;
  plVar4[1] = (long)FUN_102e45a6c;
  plVar4[0x17] = lVar6;
  plVar4[0x16] = lVar9;
  plVar4[0x14] = lVar3;
  plVar4[0x15] = lVar8;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar5;
  lVar6 = 0;
  func_0x000107c5ede0();
  plVar4[0x19] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar4[0x1a] = lVar6;
  uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1b] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e45bc0,0,0);
  return;
}



/* Entry: 102e470d0; end: 102e4714b;  */

void FUN_102e470d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e47108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e4714c; end: 102e4718b;  */

undefined8 FUN_102e4714c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102e4718c; end: 102e4728b;  */

void FUN_102e4718c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (param_2 == 0) {
    if (param_1 != 0) {
      puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28);
      *puVar5 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar5[1] = uVar2;
      puVar5[2] = uVar6;
      puVar5[3] = param_1;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
      return;
    }
    func_0x000102e4710c();
    puVar1 = &UNK_1105dc180;
    func_0x000107c613f8(&UNK_1105dc180,param_1,0,0);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar5 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar5 = puVar1;
  }
  else {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar2);
  return;
}



/* Entry: 102e4728c; end: 102e472cb;  */

void FUN_102e4728c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1ff60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db58cbc;
  func_0x000107c61520(&UNK_10db58cbc,&UNK_1105dc180);
  puRam0000000112f1ff60 = puVar1;
  return;
}



/* Entry: 102e472cc; end: 102e472e3;  */

void FUN_102e472cc(long param_1,long param_2)

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



/* Entry: 102e472e4; end: 102e47467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e472e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = 0x48;
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return unaff_x20;
}



/* Entry: 102e47468; end: 102e4759b;  */

undefined * FUN_102e47468(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c40430();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x000102e4457c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_1105dc200;
  func_0x000107c613fc(&UNK_1105dc200,0x20,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(long *)(puVar4 + 0x18) = lVar2;
  pcStack_50 = FUN_102e476b0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102e476b8;
  puStack_58 = &UNK_1105dc218;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  uVar1 = 0;
  func_0x000100326090(0);
  func_0x000107c610f8();
  func_0x0001038ba424(puVar3,uVar1);
  func_0x000107c61574(lVar2);
  return puVar3;
}



/* Entry: 102e4759c; end: 102e476af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e4759c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174();
  func_0x000107c44f4c();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61434(uVar2);
  func_0x000107c5b034();
  func_0x000107c61180();
  lVar5 = *(long *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + _DAT_11307d3e0);
  func_0x000107c615f0(uVar10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = 0;
    func_0x000102e463e8();
    func_0x000107c613fc();
    uVar7 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(long *)(lVar6 + 0x48) = lVar5;
    *(undefined8 *)(lVar6 + 0x50) = uVar7;
    *(undefined8 *)(lVar6 + 0x10) = uVar4;
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    *(undefined8 *)(lVar6 + 0x20) = uVar1;
    *(undefined8 *)(lVar6 + 0x28) = uVar2;
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(undefined8 *)(lVar6 + 0x38) = uVar10;
    *(undefined8 *)(lVar6 + 0x40) = param_2;
    func_0x000107c6157c(param_2);
    return lVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102e476b0);
  (*pcVar3)();
}



/* Entry: 102e476b0; end: 102e476b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e476b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(lVar7 + 0x20);
  uVar9 = *(undefined8 *)(lVar7 + 0x28);
  func_0x000107c61174();
  func_0x000107c44f4c();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  uVar2 = *(undefined8 *)(lVar7 + 0x18);
  uVar10 = *(undefined8 *)(lVar7 + 0x30);
  func_0x000107c61434(uVar2);
  func_0x000107c5b034();
  func_0x000107c61180();
  lVar6 = *(long *)(lVar7 + 0x40);
  uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + _DAT_11307d3e0);
  func_0x000107c615f0(uVar11);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = 0;
    func_0x000102e463e8();
    func_0x000107c613fc();
    uVar8 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(long *)(lVar7 + 0x48) = lVar6;
    *(undefined8 *)(lVar7 + 0x50) = uVar8;
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
    *(undefined8 *)(lVar7 + 0x18) = uVar9;
    *(undefined8 *)(lVar7 + 0x20) = uVar1;
    *(undefined8 *)(lVar7 + 0x28) = uVar2;
    *(undefined8 *)(lVar7 + 0x30) = uVar10;
    *(undefined8 *)(lVar7 + 0x38) = uVar11;
    *(undefined8 *)(lVar7 + 0x40) = uVar3;
    func_0x000107c6157c(uVar3);
    return lVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102e476b0);
  (*pcVar4)();
}



/* Entry: 102e476b8; end: 102e476ef;  */

void FUN_102e476b8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102e476f0; end: 102e4770b;  */

void FUN_102e476f0(long param_1,long param_2)

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



/* Entry: 102e4770c; end: 102e47747;  */

/* WARNING: Possible PIC construction at 0x000102e47720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e47730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e47724) */
/* WARNING: Removing unreachable block (ram,0x000102e47734) */

void FUN_102e4770c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102e47748; end: 102e477b3;  */

void FUN_102e47748(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c();
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e477b4; end: 102e4783f;  */

void FUN_102e477b4(undefined8 param_1)

{
  if (lRam0000000112f1ff90 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e734c5c);
  return;
}



/* Entry: 102e47840; end: 102e47863;  */

void FUN_102e47840(undefined8 *param_1,undefined8 param_2)

{
  FUN_102e47468();
  *param_1 = param_2;
  return;
}



/* Entry: 102e47864; end: 102e47c0b;  */

void FUN_102e47864(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1110f0);
  uVar6 = 0x6e61424e5a6e4a62;
  uVar11 = 0xeb00000000795131;
  func_0x000107c5fadc(0x6e61424e5a6e4a62);
  uVar7 = param_8;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  uVar13 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uVar12 = param_10;
  if (param_10 == 0) {
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168();
    func_0x000107c4c194();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c5ce94();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar8 = puVar9;
    func_0x000107c5d9c8();
    func_0x000107c61170(puVar9);
    bVar5 = puVar8 != (undefined *)0x2;
    pcVar1 = "tilezen-style-legacy";
    if (bVar5) {
      pcVar1 = "rows-satellite-dark";
    }
    pcVar2 = "MAP_SNAPZEN_STATIC_DARK_STYLE";
    uVar7 = 0xd00000000000001d;
    if (bVar5) {
      pcVar2 = "MAP_SNAPZEN_STATIC_LIGHT_STYLE";
      uVar7 = 0xd00000000000001e;
    }
    uVar6 = 0xd000000000000019;
    if (bVar5) {
      uVar6 = 0xd000000000000014;
    }
    func_0x000107c5fadc(uVar7,(ulong)pcVar1 | 0x8000000000000000);
    uVar12 = (ulong)pcVar2 | 0x8000000000000000;
    func_0x000107c5fadc(uVar6);
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    param_9 = param_8;
    func_0x000107c5faec();
    func_0x000107c61170(param_8);
  }
  lVar10 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = 0x10;
  *(undefined8 *)(lVar10 + 0x10) = 8;
  func_0x000107c61434();
  func_0x0001090219a0();
  puVar8 = PTR___sSSN_11034da80;
  bVar5 = (int)param_10 == 0;
  uVar7 = 0x2d676e6967617473;
  if (bVar5) {
    uVar7 = 0x737761;
  }
  uVar6 = 0xeb00000000737761;
  if (bVar5) {
    uVar6 = 0xe300000000000000;
  }
  *(undefined **)(lVar10 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined8 *)(lVar10 + 0x20) = uVar7;
  *(undefined8 *)(lVar10 + 0x28) = uVar6;
  *(undefined **)(lVar10 + 0x60) = puVar8;
  *(ulong *)(lVar10 + 0x68) = param_10;
  *(ulong *)(lVar10 + 0x40) = param_10;
  *(undefined8 *)(lVar10 + 0x48) = param_9;
  *(ulong *)(lVar10 + 0x50) = uVar12;
  puVar3 = PTR___sSds7CVarArgsWP_11034ddc0;
  puVar9 = PTR___sSdN_11034dd90;
  *(undefined **)(lVar10 + 0x88) = PTR___sSdN_11034dd90;
  *(undefined **)(lVar10 + 0x90) = puVar3;
  *(undefined8 *)(lVar10 + 0x70) = param_3;
  *(undefined **)(lVar10 + 0xb0) = puVar9;
  *(undefined **)(lVar10 + 0xb8) = puVar3;
  *(undefined8 *)(lVar10 + 0x98) = param_2;
  *(undefined **)(lVar10 + 0xd8) = puVar9;
  *(undefined **)(lVar10 + 0xe0) = puVar3;
  *(undefined8 *)(lVar10 + 0xc0) = param_6;
  puVar3 = PTR___sSis7CVarArgsWP_11034df08;
  puVar9 = PTR___sSiN_11034deb0;
  if (0x7fefffffffffffff < (ulong)ABS(param_4)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102e47bf8);
    (*pcVar4)();
  }
  if (param_4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102e47bfc);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= param_4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102e47c00);
    (*pcVar4)();
  }
  *(undefined **)(lVar10 + 0x100) = PTR___sSiN_11034deb0;
  *(undefined **)(lVar10 + 0x108) = puVar3;
  *(long *)(lVar10 + 0xe8) = (long)param_4;
  if (0x7fefffffffffffff < (ulong)ABS(param_5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102e47c04);
    (*pcVar4)();
  }
  if (param_5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102e47c08);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= param_5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102e47c0c);
    (*pcVar4)();
  }
  *(undefined **)(lVar10 + 0x128) = puVar9;
  *(undefined **)(lVar10 + 0x130) = puVar3;
  *(long *)(lVar10 + 0x110) = (long)param_5;
  *(undefined **)(lVar10 + 0x150) = puVar8;
  *(ulong *)(lVar10 + 0x158) = param_10;
  *(undefined8 *)(lVar10 + 0x138) = uVar13;
  *(undefined8 *)(lVar10 + 0x140) = uVar11;
  uVar13 = 0x800000010f111110;
  func_0x000107c5fb00(0xd00000000000005e,0x800000010f111110,lVar10);
  func_0x000107c5edd0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar13);
  return;
}



/* Entry: 102e47c0c; end: 102e47d6b; +[SCStaticMapUtilities mapInHouseStaticMapURLFor:width:height:zoom:traitCollection:configProvider:customStyle:] */

void FUN_102e47c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffff90 + -extraout_x8;
  if (param_10 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_10);
  }
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_9);
  FUN_102e47864(puVar5,param_1,param_2,param_3,param_4,param_5);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c6142c(puVar4);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102e47d6c; end: 102e48053;  */

void FUN_102e47d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1110f0);
  uVar6 = 0x6e61424e5a6e4a62;
  uVar10 = 0xeb00000000795131;
  func_0x000107c5fadc(0x6e61424e5a6e4a62);
  uVar12 = param_6;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar5 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  uVar11 = param_8;
  if (param_8 == 0) {
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168();
    func_0x000107c4c194();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5ce94();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar8;
    func_0x000107c5d9c8();
    func_0x000107c61170(puVar8);
    pcVar1 = "rows-satellite-light";
    pcVar2 = "MAP_SNAPZEN_STATIC_TILE_MAP_BUTTON_DARK_STYLE";
    if (puVar7 != (undefined *)0x2) {
      pcVar1 = "@4x.png?api_key=%@";
      pcVar2 = "MAP_SNAPZEN_STATIC_TILE_MAP_BUTTONLIGHT_STYLE";
    }
    uVar12 = 0xd000000000000033;
    if (puVar7 != (undefined *)0x2) {
      uVar12 = 0xd000000000000034;
    }
    uVar6 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,(ulong)pcVar1 | 0x8000000000000000);
    uVar11 = (ulong)(pcVar2 + 0x10) | 0x8000000000000000;
    func_0x000107c5fadc(uVar12);
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar6);
    param_7 = param_6;
    func_0x000107c5faec();
    func_0x000107c61170(param_6);
  }
  lVar9 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 0xc;
  *(undefined8 *)(lVar9 + 0x10) = 6;
  func_0x000107c61434();
  func_0x0001090219a0();
  puVar7 = PTR___sSSN_11034da80;
  bVar4 = (int)param_8 == 0;
  uVar12 = 0x2d676e6967617473;
  if (bVar4) {
    uVar12 = 0x737761;
  }
  uVar6 = 0xeb00000000737761;
  if (bVar4) {
    uVar6 = 0xe300000000000000;
  }
  *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined8 *)(lVar9 + 0x20) = uVar12;
  *(undefined8 *)(lVar9 + 0x28) = uVar6;
  *(undefined **)(lVar9 + 0x60) = puVar7;
  *(ulong *)(lVar9 + 0x68) = param_8;
  *(ulong *)(lVar9 + 0x40) = param_8;
  *(undefined8 *)(lVar9 + 0x48) = param_7;
  *(ulong *)(lVar9 + 0x50) = uVar11;
  puVar3 = PTR___sSis7CVarArgsWP_11034df08;
  puVar8 = PTR___sSiN_11034deb0;
  *(undefined **)(lVar9 + 0x88) = PTR___sSiN_11034deb0;
  *(undefined **)(lVar9 + 0x90) = puVar3;
  *(undefined8 *)(lVar9 + 0x70) = param_4;
  *(undefined **)(lVar9 + 0xb0) = puVar8;
  *(undefined **)(lVar9 + 0xb8) = puVar3;
  *(undefined8 *)(lVar9 + 0x98) = param_2;
  *(undefined **)(lVar9 + 0xd8) = puVar8;
  *(undefined **)(lVar9 + 0xe0) = puVar3;
  *(undefined8 *)(lVar9 + 0xc0) = param_3;
  *(undefined **)(lVar9 + 0x100) = puVar7;
  *(ulong *)(lVar9 + 0x108) = param_8;
  *(undefined8 *)(lVar9 + 0xe8) = uVar5;
  *(undefined8 *)(lVar9 + 0xf0) = uVar10;
  uVar12 = 0x800000010f111170;
  func_0x000107c5fb00(0xd000000000000052,0x800000010f111170,lVar9);
  func_0x000107c5edd0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar12);
  return;
}



/* Entry: 102e48054; end: 102e48193; +[SCStaticMapUtilities mapInHouseStaticMapTileURLFor:tileY:zoom:traitCollection:configProvider:customStyle:] */

void FUN_102e48054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  if (param_8 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_8);
  }
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  FUN_102e47d6c(puVar5,param_3,param_4,param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c6142c(puVar4);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


