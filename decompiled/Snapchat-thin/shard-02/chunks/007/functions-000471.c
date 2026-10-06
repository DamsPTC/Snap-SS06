/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102089e4c; end: 102089e6b;  */

void FUN_102089e4c(void)

{
  func_0x000107c61168(&PTR_PTR_11281bb40);
  return;
}



/* Entry: 102089e6c; end: 102089e93;  */

void FUN_102089e6c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104c45e0;
  if (lRam0000000112e550e8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e550e8 = param_1;
  }
  return;
}



/* Entry: 102089e94; end: 102089ed7;  */

void FUN_102089e94(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102089ed8; end: 102089f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102089ed8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e55080);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c526c0(uVar3,uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102089f70; end: 10208a01b;  */

void FUN_102089f70(void)

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



/* Entry: 10208a01c; end: 10208a03f;  */

void FUN_10208a01c(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10208a040; end: 10208a083; -[SCFriendsFeedOverPullOrchestrator didNavigate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10208a040(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e55100;
  func_0x000107c61428(param_1 + _DAT_112e55100,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10208a084; end: 10208a0d3; -[SCFriendsFeedOverPullOrchestrator setDidNavigate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208a084(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e55100;
  func_0x000107c61428(param_1 + _DAT_112e55100,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10208a0d4; end: 10208a0eb; -[SCFriendsFeedOverPullOrchestrator isActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10208a0d4(long param_1)

{
  return *(char *)(param_1 + _DAT_112e55108) != '\0';
}



/* Entry: 10208a0ec; end: 10208ab8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10208a0ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112e55100) = 0;
  lVar8 = _DAT_112e55110;
  func_0x000107c61614(unaff_x20 + _DAT_112e55110,0);
  lVar9 = _DAT_112e55118;
  func_0x000107c61614(unaff_x20 + _DAT_112e55118,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e55120);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112e55128;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112e55130;
  puVar4 = &UNK_10da57260;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112e55108) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e55138) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e55140) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e55148) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e55150) = 0;
  func_0x00010099be78();
  func_0x00010057bc30();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    bVar3 = false;
    puVar13 = (undefined *)0x1;
  }
  else {
    puVar13 = puVar4;
    func_0x000107c4f684();
    func_0x000107c61180();
    bVar3 = puVar13 != (undefined *)0x0;
    if (puVar13 == (undefined *)0x0) {
      puVar13 = (undefined *)0x1;
    }
    else {
      func_0x000107c61170();
      func_0x000107c61170();
      func_0x00010099be78();
      func_0x00010057bc30();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        puVar13 = (undefined *)0x1;
        bVar3 = true;
        goto LAB_10208a270;
      }
      puVar13 = puVar4;
      func_0x000107c5d9c8();
    }
    func_0x000107c61170(puVar4);
  }
LAB_10208a270:
  *(long *)(unaff_x20 + _DAT_112e55158) = param_1;
  FUN_102089e4c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  FUN_102088bb4(puVar13,bVar3);
  *(undefined **)(unaff_x20 + _DAT_112e55160) = puVar13;
  func_0x000107c61604(unaff_x20 + lVar8,param_2);
  func_0x000107c61604(unaff_x20 + lVar9,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112e55168) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e55170) = *(undefined8 *)(param_1 + _DAT_112e551e0);
  func_0x000107c61174();
  uVar5 = 0;
  uVar11 = 0;
  if ((param_6 & 1) != 0) {
    FUN_10208c39c();
  }
  uVar12 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar11;
  func_0x000107c6142c(uVar12);
  puVar6 = auStack_70;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000107c5a744(0x4054000000000000,param_2);
  func_0x000107c57c90(param_2);
  uVar7 = *(undefined8 *)(*(long *)(puVar6 + _DAT_112e55160) + _DAT_112e55080);
  func_0x000107c61174();
  uVar5 = uVar7;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar11 = uVar5;
  func_0x000107c402a0(0x4069000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c521e8(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c49774(param_3);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  lVar8 = 0x112d360b8;
  FUN_10208c324(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 5;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  uVar5 = uVar7;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar11 = param_3;
  func_0x000107c3f75c(param_3);
  func_0x000107c61180();
  uVar12 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(lVar8 + 0x20) = uVar12;
  uVar5 = uVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar11 = param_4;
  func_0x000107c5cbe4(param_4);
  func_0x000107c61180();
  uVar12 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(lVar8 + 0x28) = uVar12;
  uVar5 = 0;
  FUN_10208c704(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar9 = lVar8;
  func_0x000107c5fc48(lVar8,uVar5);
  func_0x000107c61574(lVar8);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(lVar9);
  puVar4 = &UNK_1104c47c0;
  func_0x000107c613fc(&UNK_1104c47c0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar6);
  pcStack_80 = FUN_10208c2dc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10206bee8;
  puStack_88 = &UNK_1104c47d8;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_78);
  uVar5 = param_7;
  func_0x000107c5c320(param_7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  return puVar6;
}



/* Entry: 10208ab8c; end: 10208ac3b; -[SCFriendsFeedOverPullOrchestrator initWithResolver:pullToRefreshView:parentView:tableView:grapheneV2:hasCustomTheme:feedInteractionEventObservable:] */

void FUN_10208ab8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  func_0x00010208a63c(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 10208ac3c; end: 10208ac97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ac3c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c4ff34(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e55160) + _DAT_112e55080));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10208ac98; end: 10208ad0b; -[SCFriendsFeedOverPullOrchestrator dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ac98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + _DAT_112e55160) + _DAT_112e55080);
  func_0x000107c61174();
  func_0x000107c4ff34(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10208ad0c; end: 10208ada7; -[SCFriendsFeedOverPullOrchestrator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ad0c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e55158));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e55160));
  func_0x000107c61610(param_1 + _DAT_112e55110);
  func_0x000107c61610(param_1 + _DAT_112e55118);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e55168));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e55120 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e55128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e55130));
  return;
}



/* Entry: 10208ada8; end: 10208aeb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ada8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e55130);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1104c4940;
    func_0x000107c613fc(&UNK_1104c4940,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = param_2;
    uStack_68 = 0x10208c74c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104c4958;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 10208aeb4; end: 10208af9f;  */

void FUN_10208aeb4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010445c960(0x10208c754,param_2,0x10208c75c,param_2,FUN_10208c764,param_2,FUN_10208b114,0,
                      FUN_10208c780,param_2,FUN_10208c788,param_2,0x10208c7a0,param_2,0x10208c7e4,
                      param_2,FUN_10208b2bc,0);
  return;
}



/* Entry: 10208afa0; end: 10208b0b7;  */

/* WARNING: Possible PIC construction at 0x00010208b054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208b084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010208b058) */
/* WARNING: Removing unreachable block (ram,0x00010208b05c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208afa0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar4 = _DAT_112e551d8;
  lVar5 = *(long *)(unaff_x20 + _DAT_112e55158);
  lVar6 = *(long *)(lVar5 + _DAT_112e551d8);
  plVar1 = (long *)(lVar5 + _DAT_112e551d0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *(undefined8 *)(lVar5 + _DAT_112e551c8) = param_1;
  func_0x000107c61434(lVar3);
  FUN_10208d504();
  if ((*(char *)(unaff_x20 + _DAT_112e55108) != '\0') && (*(long *)(lVar5 + lVar4) == lVar6)) {
    lVar4 = plVar1[1];
    if (lVar4 == 0) {
      if (lVar3 == 0) {
        return;
      }
    }
    else {
      if (lVar3 == 0) {
        func_0x00010208b16c();
        *(undefined1 *)(unaff_x20 + _DAT_112e55150) = 1;
        return;
      }
      if (*plVar1 != lVar2 || lVar4 != lVar3) {
        func_0x000107c605b8(*plVar1,lVar4,lVar2,lVar3,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 10208b0b8; end: 10208b113;  */

void FUN_10208b0b8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10208afa0(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10208b114; end: 10208b117;  */

void FUN_10208b114(void)

{
  return;
}



/* Entry: 10208b118; end: 10208b2bb;  */

void FUN_10208b118(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x00010208b16c();
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10208b2bc; end: 10208b2bf;  */

void FUN_10208b2bc(void)

{
  return;
}



/* Entry: 10208b2c0; end: 10208b58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208b2c0(double param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_70 [48];
  
  if (((*(byte *)(unaff_x20 + _DAT_112e55138) & 1) == 0) &&
     ((*(byte *)(unaff_x20 + _DAT_112e55150) & 1) == 0)) {
    dVar4 = -param_1;
    if (0.0 < param_1) {
      dVar4 = 0.0;
    }
    dVar3 = dVar4;
    if (((param_2 & 1) != 0) ||
       ((*(char *)(unaff_x20 + _DAT_112e55108) != '\0' && (dVar3 = 0.0, dVar4 == 0.0)))) {
      func_0x00010208b464(dVar3);
    }
    FUN_10208b58c();
    if ((*(char *)(unaff_x20 + _DAT_112e55108) == '\x02') &&
       (263.0 <= dVar4 != (bool)*(char *)(unaff_x20 + _DAT_112e55140))) {
      *(bool *)(unaff_x20 + _DAT_112e55140) = 263.0 <= dVar4;
      lVar1 = unaff_x20 + _DAT_112e55110;
      func_0x000107c61618();
      if (lVar1 != 0) {
        if (dVar4 < 263.0) {
          uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e55158) + _DAT_112e551d8);
          func_0x00010208b6ec(uVar2);
        }
        else {
          uVar2 = 0;
        }
        func_0x000107c53cf4(lVar1,param_3,uVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(uVar2);
      }
    }
    dVar3 = dVar4 * 0.25;
    if (dVar4 <= 0.0) {
      dVar3 = 0.0;
    }
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e55160) + _DAT_112e55080);
    func_0x000107c60890(auStack_70,0,dVar3);
    func_0x000107c5a03c(uVar2,param_3,auStack_70);
  }
  return;
}



/* Entry: 10208b58c; end: 10208b90b;  */

/* WARNING: Possible PIC construction at 0x00010208b5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208b60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208b694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010208b5dc) */
/* WARNING: Removing unreachable block (ram,0x00010208b5e0) */
/* WARNING: Removing unreachable block (ram,0x00010208b5f0) */
/* WARNING: Removing unreachable block (ram,0x00010208b610) */
/* WARNING: Removing unreachable block (ram,0x00010208b5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208b58c(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar4 = _DAT_112e55110;
  cVar1 = *(char *)(unaff_x20 + _DAT_112e55108);
  lVar3 = unaff_x20 + _DAT_112e55110;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c410a8();
    func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  if (cVar1 == '\x02') {
    if (((*(byte *)(unaff_x20 + _DAT_112e55140) & 1) == 0) &&
       ((*(byte *)(unaff_x20 + _DAT_112e55148) & 1) == 0)) {
      *(undefined1 *)(unaff_x20 + _DAT_112e55148) = 1;
      lVar2 = _DAT_112e551d8;
      lVar5 = *(long *)(unaff_x20 + _DAT_112e55158);
      lVar3 = *(long *)(lVar5 + _DAT_112e551d8);
      func_0x00010208b6ec();
      if (lVar3 != 0) {
        lVar4 = unaff_x20 + lVar4;
        func_0x000107c61618();
        if (lVar4 != 0) {
          func_0x000107c53cf4();
          lVar3 = lVar4;
          goto code_r0x000107c61170;
        }
      }
      FUN_10208c11c(*(undefined8 *)(lVar5 + lVar2),&UNK_1064eaa7c);
      goto code_r0x000107c61170;
    }
  }
  else {
    *(undefined1 *)(unaff_x20 + _DAT_112e55148) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112e55140) = 0;
  }
  return;
}



/* Entry: 10208b90c; end: 10208b94b; -[SCFriendsFeedOverPullOrchestrator handleScrollOffset:isDragging:] */

void FUN_10208b90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10208b2c0(param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10208b94c; end: 10208be07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208b94c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112e55158);
  uVar2 = *(undefined8 *)(lVar8 + _DAT_112e551d0);
  uVar3 = ((undefined8 *)(lVar8 + _DAT_112e551d0))[1];
  uVar7 = *(undefined8 *)(lVar8 + _DAT_112e551d8);
  cVar4 = *(char *)(unaff_x20 + _DAT_112e55108);
  func_0x000107c61434(uVar3);
  if ((cVar4 == '\x02') && (uVar5 = *(ulong *)(lVar8 + _DAT_112e551e0), uVar5 != 0)) {
    FUN_10208c97c();
    if (uVar5 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar9 = uVar5;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c();
    func_0x00010208bb3c(0);
    lVar8 = _DAT_112e55100;
    if (uVar9 != 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112e55100,auStack_58,1,0);
      *(undefined1 *)(unaff_x20 + lVar8) = 1;
      FUN_10208c11c(uVar7,&UNK_1064ead3c);
      lVar6 = _DAT_112e55110;
      lVar8 = unaff_x20 + _DAT_112e55110;
      func_0x000107c61618();
      if (lVar8 != 0) {
        func_0x000107c53cf4();
        func_0x000107c61170(lVar8);
      }
      *(undefined1 *)(unaff_x20 + _DAT_112e55140) = 0;
      lVar6 = unaff_x20 + lVar6;
      func_0x000107c61618();
      if (lVar6 != 0) {
        func_0x000107c5d01c();
        func_0x000107c61170(lVar6);
      }
      lVar6 = 0;
      FUN_10208ed28();
      lVar8 = lVar6;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar8 + _DAT_112e55210);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(lVar8 + _DAT_112e55218) = uVar7;
      lStack_68 = lVar8;
      lStack_60 = lVar6;
      func_0x000107c61154(&lStack_68,PTR_s_init_1125d9248);
      return;
    }
    func_0x000107c6142c(uVar3);
  }
  else {
    func_0x00010208bb3c(0);
    func_0x000107c6142c(uVar3);
    if (cVar4 == '\0') {
      return;
    }
  }
  FUN_10208c11c(uVar7,&UNK_1064eaffc);
  return;
}



/* Entry: 10208be08; end: 10208be3b; -[SCFriendsFeedOverPullOrchestrator handleRelease] */

void FUN_10208be08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10208b94c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10208be3c; end: 10208bfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208be3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  lVar5 = _DAT_112e551d8;
  lVar7 = *(long *)(unaff_x20 + _DAT_112e55158);
  lVar8 = *(long *)(lVar7 + _DAT_112e551d8);
  puVar1 = (ulong *)(lVar7 + _DAT_112e551d0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar9 = *(undefined8 *)(lVar7 + _DAT_112e551b8);
  *(undefined8 *)(lVar7 + _DAT_112e551b8) = param_1;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar9);
  lVar4 = _DAT_112e551c0;
  func_0x000107c61428(lVar7 + _DAT_112e551c0,auStack_78,1,0);
  uVar9 = *(undefined8 *)(lVar7 + lVar4);
  *(undefined8 *)(lVar7 + lVar4) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar9);
  *(undefined8 *)(lVar7 + _DAT_112e551c8) = param_3;
  FUN_10208d504();
  if (*(char *)(unaff_x20 + _DAT_112e55108) == '\0') {
LAB_10208bf68:
    func_0x000107c6142c(uVar3);
    return;
  }
  if (*(long *)(lVar7 + lVar5) == lVar8) {
    if (puVar1[1] != 0) {
      if (uVar3 != 0) {
        uVar6 = *puVar1;
        if (uVar6 == uVar2 && puVar1[1] == uVar3) goto LAB_10208bf68;
        func_0x000107c605b8();
        func_0x000107c6142c(uVar3);
        if ((uVar6 & 1) != 0) {
          return;
        }
      }
      goto LAB_10208bf80;
    }
    if (uVar3 == 0) {
      return;
    }
  }
  func_0x000107c6142c(uVar3);
LAB_10208bf80:
  func_0x00010208b16c();
  *(undefined1 *)(unaff_x20 + _DAT_112e55150) = 1;
  return;
}



/* Entry: 10208bfb8; end: 10208c07b; -[SCFriendsFeedOverPullOrchestrator updateShortcuts:shortcutBadges:currentShortcutType:] */

/* WARNING: Possible PIC construction at 0x00010208c060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010208c064) */

void FUN_10208bfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10208c704(0,0x112e551a8,&PTR_PTR_1126ce438);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  func_0x000107c61174(param_1);
  FUN_10208be3c(param_3,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10208c07c; end: 10208c0a3; -[SCFriendsFeedOverPullOrchestrator resetGesture] */

void FUN_10208c07c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010208b16c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10208c0a4; end: 10208c10b; -[SCFriendsFeedOverPullOrchestrator prepareForNewDrag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208c0a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e55100;
  func_0x000107c61428(param_1 + _DAT_112e55100,auStack_38,1,0);
  *(undefined1 *)(param_1 + lVar1) = 0;
  *(undefined1 *)(param_1 + _DAT_112e55150) = 0;
  func_0x000107c61174(param_1);
  func_0x00010208b16c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10208c10c; end: 10208c11b; -[SCFriendsFeedOverPullOrchestrator cancelRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208c10c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112e55138) = 0;
  return;
}



/* Entry: 10208c11c; end: 10208c2af;  */

/* WARNING: Possible PIC construction at 0x00010208c188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208c1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208c20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208c224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208c23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208c25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010208c288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010208c260) */
/* WARNING: Removing unreachable block (ram,0x00010208c240) */
/* WARNING: Removing unreachable block (ram,0x00010208c228) */
/* WARNING: Removing unreachable block (ram,0x00010208c210) */
/* WARNING: Removing unreachable block (ram,0x00010208c1a8) */
/* WARNING: Removing unreachable block (ram,0x00010208c18c) */
/* WARNING: Removing unreachable block (ram,0x00010208c28c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208c11c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x65757274;
  if (param_1 != 0) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (param_1 != 0) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000105bddfd4();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c6057c(_DAT_112e55170,PTR___sSiN_11034deb0,
                        PTR___sSis23CustomStringConvertiblesWP_11034df00);
    if (*(long *)(unaff_x20 + _DAT_112e55168) != 0) {
      func_0x000107c5fadc(uVar1,uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10208c2b0; end: 10208c2db; -[SCFriendsFeedOverPullOrchestrator init] */

void FUN_10208c2b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCFriendsFeedOverPull.OverPullOrchestrator",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10208c2dc);
  (*pcVar1)();
}



/* Entry: 10208c2dc; end: 10208c323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208c2dc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e55130);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1104c4940;
    func_0x000107c613fc(&UNK_1104c4940,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = unaff_x20;
    uStack_68 = 0x10208c74c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104c4958;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(param_1);
    func_0x000107c6157c();
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 10208c324; end: 10208c39b;  */

void FUN_10208c324(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10208c704(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10208c39c; end: 10208c53b;  */

void FUN_10208c39c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  
  func_0x00010099be78();
  func_0x00010057bc30();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x000107c4f688();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar7 = 0x32505f656d656854;
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    uVar3 = uVar7;
    uVar4 = param_2;
    func_0x000107c5fbb4(0x32505f656d656854,0xea00000000005f52,lVar2,param_2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_2);
      return;
    }
    func_0x000107c5fb5c(0x32505f656d656854,0xea00000000005f52);
    uVar5 = param_2;
    func_0x0001011a7878();
    func_0x000107c6142c(param_2);
    func_0x000107c5fb2c(uVar7,lVar2,uVar5,uVar4);
    func_0x000107c6142c(uVar4);
    uVar4 = 0x5f;
    uVar6 = 0;
    func_0x00010143c25c(0x5f,0xe100000000000000,uVar7,lVar2);
    if ((uVar6 & 0xff) != 1) {
      uVar5 = 0xf;
      lVar1 = lVar2;
      func_0x000107c5fbd8(0xf,uVar4,uVar7,lVar2);
      func_0x000107c6142c(lVar2);
      func_0x000107c5fb2c(uVar5,uVar4,uVar7,lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar1);
      return;
    }
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10208c53c; end: 10208c55b;  */

void FUN_10208c53c(void)

{
  func_0x000107c61168(&PTR_PTR_11281bc38);
  return;
}



/* Entry: 10208c55c; end: 10208c6c3;  */

int FUN_10208c55c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10208c5d8;
        goto LAB_10208c5bc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10208c5bc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10208c5d8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10208c6c4; end: 10208c703;  */

void FUN_10208c6c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e551a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5730c;
  func_0x000107c61520(&UNK_10da5730c,&UNK_1104c48a8);
  puRam0000000112e551a0 = puVar1;
  return;
}



/* Entry: 10208c704; end: 10208c743;  */

void FUN_10208c704(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10208c744; end: 10208c763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208c744(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e55088;
  if (lVar2 != 0) {
    func_0x000107c526c0(0,*(undefined8 *)(lVar2 + _DAT_112e55088));
    uVar3 = *(undefined8 *)(lVar2 + lVar1);
    func_0x000107c6088c(&uStack_90,0x3fe999999999999a,0x3fe999999999999a);
    func_0x000107c60888(&uStack_90,0xc0043eee03e1961a);
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x000107c60884(&uStack_f0,&uStack_90,&uStack_c0);
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    func_0x000107c5a03c(uVar3);
    lVar1 = _DAT_112e55090;
    func_0x000107c526c0(0,*(undefined8 *)(lVar2 + _DAT_112e55090));
    uVar3 = *(undefined8 *)(lVar2 + lVar1);
    func_0x000107c6088c(&uStack_90,0x3fe999999999999a,0x3fe999999999999a);
    func_0x000107c5a03c(uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10208c764; end: 10208c77f;  */

void FUN_10208c764(void)

{
  func_0x00010208b210();
  return;
}



/* Entry: 10208c780; end: 10208c787;  */

void FUN_10208c780(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x00010208b16c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10208c788; end: 10208c7bb;  */

void FUN_10208c788(void)

{
  func_0x00010208b268();
  return;
}



/* Entry: 10208c7bc; end: 10208c7e7;  */

void FUN_10208c7bc(long param_1,long param_2)

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



/* Entry: 10208c7e8; end: 10208c97b;  */

void FUN_10208c7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10208c97c; end: 10208d08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10208c97c(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puStack_120;
  undefined *apuStack_f8 [3];
  undefined *apuStack_e0 [3];
  undefined *apuStack_c8 [3];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  ppuVar12 = *(undefined ***)(unaff_x20 + _DAT_112e551b8);
  if ((ulong)ppuVar12 >> 0x3e == 0) {
    ppuVar15 = *(undefined ***)(((ulong)ppuVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppuVar15 = (undefined **)((ulong)ppuVar12 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < ppuVar12) {
      ppuVar15 = ppuVar12;
    }
    func_0x000107c60480();
  }
  lVar4 = _DAT_112e551c0;
  func_0x000107c61434(ppuVar12);
  if (ppuVar15 == (undefined **)0x0) {
    puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar13 = (undefined *)0x0;
    puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)ppuVar12 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)ppuVar12 & 0xffffffffffffff8) + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10208d074);
          (*pcVar5)();
        }
        puVar6 = ppuVar12[(long)(puVar13 + 4)];
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar13;
        param_2 = ppuVar12;
        FUN_10208dfe4();
      }
      ppuVar1 = (undefined **)(puVar13 + 1);
      if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10208d070);
        (*pcVar5)();
      }
      puVar7 = puVar6;
      func_0x000107c5aaf0();
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x000107c5d0f0();
      func_0x000107c61170(puVar7);
      if (puVar8 == (undefined *)0xf) {
        func_0x000107c61170(puVar6);
      }
      else {
        puVar7 = puVar6;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        puVar9 = puVar7;
        func_0x000107c4a684();
        func_0x000107c61170(puVar7);
        if (((ulong)puVar9 & 1) == 0) {
          if (param_1 == 3) {
            if (puVar8 == (undefined *)0x4) goto LAB_10208cff0;
            puVar7 = puVar6;
            func_0x000107c5aaf0();
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c5aaf8();
            func_0x000107c61180();
            func_0x000107c61170(puVar7);
            puVar7 = puVar8;
            func_0x000107c5faec();
            func_0x000107c61170(puVar8);
            ppuVar11 = &puStack_b0;
            func_0x000107c61428(unaff_x20 + lVar4,ppuVar11,0x20,0);
            ppuVar16 = *(undefined ***)(unaff_x20 + lVar4);
            if (ppuVar16[2] != (undefined *)0x0) {
              func_0x000107c61434(ppuVar16);
              ppuVar11 = param_2;
              func_0x000100029284();
              if (((ulong)ppuVar11 & 1) != 0) {
                uVar10 = *(undefined8 *)(ppuVar16[7] + (long)puVar7 * 8);
                func_0x000107c61174(uVar10);
                func_0x000107c614a8(&puStack_b0);
                func_0x000107c6142c(ppuVar16);
                func_0x000107c6142c(param_2);
                puVar7 = &UNK_1104c4a68;
                func_0x000107c613fc(&UNK_1104c4a68,0x11,7);
                pbVar14 = puVar7 + 0x10;
                *pbVar14 = 0;
                puVar8 = &UNK_1104c4ae0;
                func_0x000107c613fc(&UNK_1104c4ae0,0x20,7);
                *(undefined **)(puVar8 + 0x10) = puVar7;
                *(undefined **)(puVar8 + 0x18) = puVar6;
                pcStack_90 = (code *)0x10208e3e8;
                puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_a8 = 0x42000000;
                pcStack_a0 = FUN_10208ddac;
                puStack_98 = &UNK_1104c4af8;
                ppuVar11 = &puStack_b0;
                puStack_88 = puVar8;
                func_0x000107c60bc4(ppuVar11);
                puVar8 = puStack_88;
                func_0x000107c61174(puVar6);
                func_0x000107c6157c(puVar7);
                func_0x000107c61574(puVar8);
                func_0x000107c4c6bc(uVar10);
                func_0x000107c61170(uVar10);
                func_0x000107c60bd0(ppuVar11);
                param_2 = apuStack_e0;
                func_0x000107c61428(pbVar14,param_2,0,0);
                bVar3 = *pbVar14;
                goto LAB_10208cdb8;
              }
LAB_10208cfc8:
              func_0x000107c6142c(param_2);
              param_2 = ppuVar16;
            }
          }
          else if (param_1 == 2) {
            if (puVar8 != (undefined *)0x4) goto LAB_10208cff0;
            puVar7 = puVar6;
            func_0x000107c5aaf0();
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c5aaf8();
            func_0x000107c61180();
            func_0x000107c61170(puVar7);
            puVar7 = puVar8;
            func_0x000107c5faec();
            func_0x000107c61170(puVar8);
            ppuVar11 = &puStack_b0;
            func_0x000107c61428(unaff_x20 + lVar4,ppuVar11,0x20,0);
            ppuVar16 = *(undefined ***)(unaff_x20 + lVar4);
            if (ppuVar16[2] != (undefined *)0x0) {
              func_0x000107c61434(ppuVar16);
              ppuVar11 = param_2;
              func_0x000100029284();
              if (((ulong)ppuVar11 & 1) == 0) goto LAB_10208cfc8;
              uVar10 = *(undefined8 *)(ppuVar16[7] + (long)puVar7 * 8);
              func_0x000107c61174(uVar10);
              func_0x000107c614a8(&puStack_b0);
              func_0x000107c6142c(ppuVar16);
              func_0x000107c6142c(param_2);
              puVar7 = &UNK_1104c4a68;
              func_0x000107c613fc(&UNK_1104c4a68,0x11,7);
              pbVar14 = puVar7 + 0x10;
              *pbVar14 = 0;
              puVar8 = &UNK_1104c4b30;
              func_0x000107c613fc(&UNK_1104c4b30,0x20,7);
              *(undefined **)(puVar8 + 0x10) = puVar7;
              *(undefined **)(puVar8 + 0x18) = puVar6;
              pcStack_90 = (code *)0x10208e3ec;
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a8 = 0x42000000;
              pcStack_a0 = FUN_10208ddac;
              puStack_98 = &UNK_1104c4b48;
              ppuVar11 = &puStack_b0;
              puStack_88 = puVar8;
              func_0x000107c60bc4(ppuVar11);
              puVar8 = puStack_88;
              func_0x000107c61174(puVar6);
              func_0x000107c6157c(puVar7);
              func_0x000107c61574(puVar8);
              func_0x000107c4c6bc(uVar10);
              func_0x000107c61170(uVar10);
              func_0x000107c60bd0(ppuVar11);
              param_2 = apuStack_f8;
              func_0x000107c61428(pbVar14,param_2,0,0);
              bVar3 = *pbVar14;
LAB_10208cdb8:
              func_0x000107c61574(puVar7);
joined_r0x00010208cfa4:
              if ((bVar3 & 1) == 0) {
                func_0x000107c61170(puVar6);
              }
              else {
                puVar7 = puStack_120;
                func_0x000107c61558();
                puStack_80 = puStack_120;
                if (((ulong)puVar7 & 1) == 0) {
                  param_2 = (undefined **)(*(long *)(puStack_120 + 0x10) + 1);
                  FUN_10208dea4(0,param_2,1);
                }
                uVar2 = *(ulong *)(puStack_80 + 0x10);
                ppuVar11 = (undefined **)(uVar2 + 1);
                if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar2) {
                  param_2 = ppuVar11;
                  FUN_10208dea4(1 < *(ulong *)(puStack_80 + 0x18),ppuVar11,1);
                }
                *(undefined ***)(puStack_80 + 0x10) = ppuVar11;
                *(undefined **)(puStack_80 + uVar2 * 8 + 0x20) = puVar6;
                puStack_120 = puStack_80;
              }
              goto LAB_10208ca18;
            }
          }
          else {
            puVar7 = puVar6;
            func_0x000107c5aaf0();
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c5aaf8();
            func_0x000107c61180();
            func_0x000107c61170(puVar7);
            puVar7 = puVar8;
            func_0x000107c5faec();
            func_0x000107c61170(puVar8);
            ppuVar11 = &puStack_b0;
            func_0x000107c61428(unaff_x20 + lVar4,ppuVar11,0x20,0);
            ppuVar16 = *(undefined ***)(unaff_x20 + lVar4);
            if (ppuVar16[2] != (undefined *)0x0) {
              func_0x000107c61434(ppuVar16);
              ppuVar11 = param_2;
              func_0x000100029284();
              if (((ulong)ppuVar11 & 1) != 0) {
                uVar10 = *(undefined8 *)(ppuVar16[7] + (long)puVar7 * 8);
                func_0x000107c61174(uVar10);
                func_0x000107c614a8(&puStack_b0);
                func_0x000107c6142c(ppuVar16);
                func_0x000107c6142c(param_2);
                puVar7 = &UNK_1104c4a68;
                func_0x000107c613fc(&UNK_1104c4a68,0x11,7);
                pbVar14 = puVar7 + 0x10;
                *pbVar14 = 0;
                puVar8 = &UNK_1104c4a90;
                func_0x000107c613fc(&UNK_1104c4a90,0x20,7);
                *(undefined **)(puVar8 + 0x10) = puVar7;
                *(undefined **)(puVar8 + 0x18) = puVar6;
                pcStack_90 = FUN_10208e1fc;
                puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_a8 = 0x42000000;
                pcStack_a0 = FUN_10208ddac;
                puStack_98 = &UNK_1104c4aa8;
                ppuVar11 = &puStack_b0;
                puStack_88 = puVar8;
                func_0x000107c60bc4(ppuVar11);
                puVar8 = puStack_88;
                func_0x000107c6157c(puVar7);
                func_0x000107c61174(puVar6);
                func_0x000107c61574(puVar8);
                func_0x000107c4c6bc(uVar10);
                func_0x000107c61170(uVar10);
                func_0x000107c60bd0(ppuVar11);
                param_2 = apuStack_c8;
                func_0x000107c61428(pbVar14,param_2,0,0);
                bVar3 = *pbVar14;
                func_0x000107c61574(puVar7);
                goto joined_r0x00010208cfa4;
              }
              func_0x000107c6142c(param_2);
              param_2 = ppuVar16;
            }
          }
          func_0x000107c6142c(param_2);
          func_0x000107c614a8(&puStack_b0);
          param_2 = ppuVar11;
        }
LAB_10208cff0:
        func_0x000107c61170(puVar6);
      }
LAB_10208ca18:
      puVar13 = puVar13 + 1;
    } while (ppuVar1 != ppuVar15);
  }
  func_0x000107c6142c(ppuVar12);
  return puStack_120;
}



/* Entry: 10208d08c; end: 10208d3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10208d08c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if ((long)param_1 < 6) {
    if ((long)param_1 < 3) {
      if (param_1 == 0) {
        lVar6 = -0x2fffffffffffffea;
        func_0x000107c5fadc(0xd000000000000016,0x800000010f05f8a0);
        uVar7 = 0xd000000000000015;
        func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
        uVar8 = 0;
        func_0x000107c5fe40(0);
        lVar9 = lVar6;
        uVar10 = uVar7;
        func_0x0001000f6108(lVar6,uVar7,uVar8);
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e4c0);
          (*pcVar2)();
        }
        lVar6 = lVar9;
        func_0x000107c5faec(lVar9);
        func_0x000107c61170(lVar9);
        auVar15._8_8_ = uVar10;
        auVar15._0_8_ = lVar6;
        return auVar15;
      }
      if (param_1 == 2) {
        lVar9 = -0x2fffffffffffffeb;
        func_0x000107c5fadc(0xd000000000000015,0x800000010f05f920);
        uVar7 = 0xd000000000000015;
        func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
        uVar8 = 0;
        func_0x000107c5fe40(0);
        lVar6 = lVar9;
        uVar10 = uVar7;
        func_0x0001000f6108(lVar9,uVar7,uVar8);
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e720);
          (*pcVar2)();
        }
        lVar9 = lVar6;
        func_0x000107c5faec(lVar6);
        func_0x000107c61170(lVar6);
        auVar18._8_8_ = uVar10;
        auVar18._0_8_ = lVar9;
        return auVar18;
      }
    }
    else {
      if (param_1 == 3) {
        lVar9 = -0x2fffffffffffffec;
        func_0x000107c5fadc(0xd000000000000014,0x800000010f05f940);
        uVar7 = 0xd000000000000015;
        func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
        uVar8 = 0;
        func_0x000107c5fe40(0);
        lVar6 = lVar9;
        uVar10 = uVar7;
        func_0x0001000f6108(lVar9,uVar7,uVar8);
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e7ec);
          (*pcVar2)();
        }
        lVar9 = lVar6;
        func_0x000107c5faec(lVar6);
        func_0x000107c61170(lVar6);
        auVar19._8_8_ = uVar10;
        auVar19._0_8_ = lVar9;
        return auVar19;
      }
      if (param_1 == 4) {
        lVar9 = -0x2fffffffffffffec;
        func_0x000107c5fadc(0xd000000000000014,0x800000010f05f8e0);
        uVar7 = 0xd000000000000015;
        func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
        uVar8 = 0;
        func_0x000107c5fe40(0);
        lVar6 = lVar9;
        uVar10 = uVar7;
        func_0x0001000f6108(lVar9,uVar7,uVar8);
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e58c);
          (*pcVar2)();
        }
        lVar9 = lVar6;
        func_0x000107c5faec(lVar6);
        func_0x000107c61170(lVar6);
        auVar16._8_8_ = uVar10;
        auVar16._0_8_ = lVar9;
        return auVar16;
      }
    }
  }
  else if ((long)param_1 < 0x10) {
    if (param_1 == 6) goto LAB_10208e984;
    if (param_1 == 8) {
      lVar6 = -0x2fffffffffffffea;
      func_0x000107c5fadc(0xd000000000000016,0x800000010f05f960);
      uVar7 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
      uVar8 = 0;
      func_0x000107c5fe40(0);
      lVar9 = lVar6;
      uVar10 = uVar7;
      func_0x0001000f6108(lVar6,uVar7,uVar8);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e8b8);
        (*pcVar2)();
      }
      lVar6 = lVar9;
      func_0x000107c5faec(lVar9);
      func_0x000107c61170(lVar9);
      auVar20._8_8_ = uVar10;
      auVar20._0_8_ = lVar6;
      return auVar20;
    }
  }
  else {
    if (param_1 == 0x10) {
      lVar9 = -0x2fffffffffffffec;
      func_0x000107c5fadc(0xd000000000000014,0x800000010f05f900);
      uVar7 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
      uVar8 = 0;
      func_0x000107c5fe40(0);
      lVar6 = lVar9;
      uVar10 = uVar7;
      func_0x0001000f6108(lVar9,uVar7,uVar8);
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e658);
        (*pcVar2)();
      }
      lVar9 = lVar6;
      func_0x000107c5faec(lVar6);
      func_0x000107c61170(lVar6);
      auVar17._8_8_ = uVar10;
      auVar17._0_8_ = lVar9;
      return auVar17;
    }
    if (param_1 == 0x11) {
LAB_10208e984:
      lVar9 = -0x2fffffffffffffec;
      func_0x000107c5fadc(0xd000000000000014,0x800000010f05f9a0);
      uVar7 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
      uVar8 = 0;
      func_0x000107c5fe40(0);
      lVar6 = lVar9;
      uVar10 = uVar7;
      func_0x0001000f6108(lVar9,uVar7,uVar8);
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10208ea50);
        (*pcVar2)();
      }
      lVar9 = lVar6;
      func_0x000107c5faec(lVar6);
      func_0x000107c61170(lVar6);
      auVar22._8_8_ = uVar10;
      auVar22._0_8_ = lVar9;
      return auVar22;
    }
    if (param_1 == 0x12) {
      lVar6 = -0x2fffffffffffffe8;
      func_0x000107c5fadc(0xd000000000000018,0x800000010f05f980);
      uVar7 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
      uVar8 = 0;
      func_0x000107c5fe40(0);
      lVar9 = lVar6;
      uVar10 = uVar7;
      func_0x0001000f6108(lVar6,uVar7,uVar8);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e984);
        (*pcVar2)();
      }
      lVar6 = lVar9;
      func_0x000107c5faec(lVar9);
      func_0x000107c61170(lVar9);
      auVar21._8_8_ = uVar10;
      auVar21._0_8_ = lVar6;
      return auVar21;
    }
  }
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112e551b8);
  if (uVar11 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar12 = uVar11;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar11);
  if (uVar12 != 0) {
    uVar13 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10208d3a4);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar13;
        param_2 = uVar11;
        FUN_10208dfe4();
      }
      uVar1 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10208d3a0);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c5aaf0();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar4);
      if (uVar5 == param_1) {
        func_0x000107c6142c(uVar11);
        uVar12 = uVar3;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        uVar11 = uVar12;
        func_0x000107c5cab0();
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        uVar12 = uVar11;
        func_0x000107c5faec();
        uVar13 = param_2;
        func_0x000107c61170(uVar11);
        goto LAB_10208d304;
      }
      func_0x000107c61170(uVar3);
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar12);
  }
  func_0x000107c6142c(uVar11);
  uVar12 = 0;
  uVar13 = param_2;
  param_2 = 0xe000000000000000;
LAB_10208d304:
  func_0x00010208ea50();
  lVar6 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
  lVar9 = lVar6;
  func_0x00010075bbf0();
  *(long *)(lVar6 + 0x40) = lVar9;
  *(ulong *)(lVar6 + 0x20) = uVar12;
  *(ulong *)(lVar6 + 0x28) = param_2;
  uVar12 = uVar13;
  func_0x000107c5fb00(uVar11,uVar13,lVar6);
  func_0x000107c6142c(uVar13);
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = uVar11;
  return auVar14;
}



/* Entry: 10208d3bc; end: 10208d45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208d3bc(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e551d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e551d8) = 0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112e551b8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_112e551c0;
  FUN_102089d4c();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e551c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e551e0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10208d460; end: 10208d503; -[SCFriendsFeedOverPullTargetResolver initWithTreatment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208d460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112e551d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112e551d8) = 0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_1 + _DAT_112e551b8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_112e551c0;
  FUN_102089d4c();
  *(undefined **)(param_1 + lVar2) = puVar4;
  *(undefined8 *)(param_1 + _DAT_112e551c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e551e0) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10208d504; end: 10208d8d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208d504(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112e551e0);
  if (uVar7 != 0) {
    FUN_10208c97c();
    if (uVar7 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      lVar4 = _DAT_112e551c8;
    }
    else {
      uVar15 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar15 = uVar7;
      }
      func_0x000107c60480();
      lVar4 = _DAT_112e551c8;
    }
    _DAT_112e551c8 = lVar4;
    if (uVar15 != 0) {
      uVar13 = uVar7 & 0xc000000000000001;
      if (*(long *)(unaff_x20 + lVar4) == 0) {
        if (uVar13 == 0) {
          if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10208d8b8);
            (*pcVar5)();
          }
          uVar14 = *(ulong *)(uVar7 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar14 = 0;
          param_2 = uVar7;
          FUN_10208dfe4();
        }
        func_0x000107c6142c(uVar7);
        uVar7 = uVar14;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        uVar15 = uVar7;
        func_0x000107c5aaf8();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        uVar7 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        puVar3 = (ulong *)(unaff_x20 + _DAT_112e551d0);
        uVar15 = puVar3[1];
        *puVar3 = uVar7;
        puVar3[1] = param_2;
        func_0x000107c6142c(uVar15);
        uVar7 = uVar14;
        func_0x000107c5aaf0();
      }
      else {
        uVar14 = 0;
        uVar12 = uVar7 & 0xffffffffffffff8;
        while( true ) {
          if (uVar15 == uVar14) {
            if (uVar13 == 0) {
              if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10208d8d0);
                (*pcVar5)();
              }
              uVar14 = *(ulong *)(uVar7 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar14 = 0;
              param_2 = uVar7;
              FUN_10208dfe4();
            }
            func_0x000107c6142c(uVar7);
            uVar7 = uVar14;
            func_0x000107c5aaf0();
            func_0x000107c61180();
            uVar15 = uVar7;
            func_0x000107c5aaf8();
            func_0x000107c61180();
            func_0x000107c61170(uVar7);
            uVar7 = uVar15;
            func_0x000107c5faec();
            func_0x000107c61170(uVar15);
            puVar3 = (ulong *)(unaff_x20 + _DAT_112e551d0);
            uVar15 = puVar3[1];
            *puVar3 = uVar7;
            puVar3[1] = param_2;
            func_0x000107c6142c(uVar15);
            uVar7 = uVar14;
            func_0x000107c5aaf0();
            goto LAB_10208d82c;
          }
          lVar1 = uVar7 + uVar14 * 8;
          if (uVar13 == 0) {
            if (*(ulong *)(uVar12 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10208d87c);
              (*pcVar5)();
            }
            uVar8 = *(ulong *)(lVar1 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar14;
            param_2 = uVar7;
            FUN_10208dfe4();
          }
          uVar9 = uVar8;
          func_0x000107c5aaf0();
          func_0x000107c61180();
          uVar10 = uVar9;
          func_0x000107c5d0f0();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar8);
          if (uVar10 == *(ulong *)(unaff_x20 + lVar4)) break;
          bVar6 = SCARRY8(uVar14,1);
          uVar14 = uVar14 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10208d880);
            (*pcVar5)();
          }
        }
        if (uVar7 >> 0x3e == 0) {
          uVar15 = *(ulong *)(uVar12 + 0x10);
        }
        else {
          uVar15 = uVar12;
          if ((uVar7 & 0x8000000000000000) != 0) {
            uVar15 = uVar7;
          }
          func_0x000107c60480();
        }
        if (SBORROW8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10208d8d4);
          (*pcVar5)();
        }
        if ((long)(uVar15 - 1) <= (long)uVar14) goto LAB_10208d77c;
        uVar14 = uVar14 + 1;
        if (uVar13 == 0) {
          if (*(ulong *)(uVar12 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10208d8d8);
            (*pcVar5)();
          }
          uVar14 = *(ulong *)(lVar1 + 0x28);
          func_0x000107c61174();
        }
        else {
          param_2 = uVar7;
          FUN_10208dfe4();
        }
        func_0x000107c6142c(uVar7);
        uVar7 = uVar14;
        func_0x000107c5aaf0();
        func_0x000107c61180();
        uVar15 = uVar7;
        func_0x000107c5aaf8();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        uVar7 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        puVar3 = (ulong *)(unaff_x20 + _DAT_112e551d0);
        uVar15 = puVar3[1];
        *puVar3 = uVar7;
        puVar3[1] = param_2;
        func_0x000107c6142c(uVar15);
        uVar7 = uVar14;
        func_0x000107c5aaf0();
      }
LAB_10208d82c:
      func_0x000107c61180();
      uVar15 = uVar7;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar14);
      goto LAB_10208d84c;
    }
LAB_10208d77c:
    func_0x000107c6142c();
  }
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e551d0);
  uVar11 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c6142c(uVar11);
  uVar15 = 0;
LAB_10208d84c:
  *(ulong *)(unaff_x20 + _DAT_112e551d8) = uVar15;
  return;
}



/* Entry: 10208d8d8; end: 10208d9ef; -[SCFriendsFeedOverPullTargetResolver updateShortcuts:shortcutBadges:currentShortcutType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208d8d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = 0;
  func_0x00010208e1b8(0);
  func_0x000107c5fc54(param_3,uVar2);
  uVar2 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e551b8);
  *(undefined8 *)(param_1 + _DAT_112e551b8) = param_3;
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar2);
  lVar1 = _DAT_112e551c0;
  func_0x000107c61428(param_1 + _DAT_112e551c0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_4;
  func_0x000107c61434(param_4);
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + _DAT_112e551c8) = param_5;
  FUN_10208d504();
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10208d9f0; end: 10208ddab;  */

void FUN_10208d9f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  param_2 = param_2 + 0x10;
  puVar3 = &UNK_1104c4b80;
  func_0x000107c613fc(&UNK_1104c4b80,0x18,7);
  *(long *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_1104c4ba8;
  func_0x000107c613fc(&UNK_1104c4ba8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10208e24c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10208e290;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011a7a34;
  puStack_88 = &UNK_1104c4bc0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104c4bf8;
  func_0x000107c613fc(&UNK_1104c4bf8,0x18,7);
  *(long *)(puVar6 + 0x10) = param_2;
  puVar7 = &UNK_1104c4c20;
  func_0x000107c613fc(&UNK_1104c4c20,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10208e2b0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x10208e2f0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_1104c4c38;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1104c4c70;
  func_0x000107c613fc(&UNK_1104c4c70,0x20,7);
  *(long *)(puVar9 + 0x10) = param_2;
  *(undefined8 *)(puVar9 + 0x18) = param_3;
  puVar10 = &UNK_1104c4c98;
  func_0x000107c613fc(&UNK_1104c4c98,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x10208e310;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uStack_80 = 0x10208e3f0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_1104c4cb0;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar12 = puStack_78;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_1104c4ce8;
  func_0x000107c613fc(&UNK_1104c4ce8,0x18,7);
  *(long *)(puVar12 + 0x10) = param_2;
  puVar13 = &UNK_1104c4d10;
  func_0x000107c613fc(&UNK_1104c4d10,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = 0x10208e358;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  uStack_80 = 0x10208e398;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100eb5728;
  puStack_88 = &UNK_1104c4d28;
  ppuVar14 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4(ppuVar14);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar1);
  func_0x000107c4c5bc(param_1);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x58,0x7c,0x1e,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10208dda0);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x58,0x7e,0x19,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10208dda4);
    (*pcVar2)();
  }
  puVar3 = puVar10;
  func_0x000107c61544(puVar10,"",0x58,0x80,0x20,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10208dda8);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  func_0x000107c61544(puVar13,"",0x58,0x82,0x18,1);
  func_0x000107c61574(puVar13);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10208ddac);
  (*pcVar2)();
}



/* Entry: 10208ddac; end: 10208ddf7;  */

void FUN_10208ddac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10208ddf8; end: 10208de57; -[SCFriendsFeedOverPullTargetResolver init] */

void FUN_10208ddf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCFriendsFeedOverPull.OverPullTargetResolver",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10208de24);
  (*pcVar1)();
}



/* Entry: 10208de58; end: 10208dea3; -[SCFriendsFeedOverPullTargetResolver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010208de78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010208de7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208de58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e551d0 + 8))
  ;
  return;
}



/* Entry: 10208dea4; end: 10208debf;  */

void FUN_10208dea4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10208dec0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10208dec0; end: 10208dfe3;  */

undefined * FUN_10208dec0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10208dfe4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x00010208c300();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x00010208e1b8(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10208dfe4; end: 10208e197;  */

ulong FUN_10208dfe4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e0c8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e0cc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ce438;
    func_0x000107c61168(PTR_PTR_1126ce438);
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
    puVar4 = PTR_PTR_1126ce438;
    func_0x000107c61168(PTR_PTR_1126ce438);
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
  func_0x00010208e1b8(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10208e198);
  (*pcVar2)();
}



/* Entry: 10208e198; end: 10208e1fb;  */

void FUN_10208e198(void)

{
  func_0x000107c61168(&PTR_PTR_11281bd68);
  return;
}



/* Entry: 10208e1fc; end: 10208e21f;  */

void FUN_10208e1fc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x10) + 0x10;
  puVar5 = &UNK_1104c4b80;
  func_0x000107c613fc(&UNK_1104c4b80,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar1;
  puVar6 = &UNK_1104c4ba8;
  func_0x000107c613fc(&UNK_1104c4ba8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10208e24c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10208e290;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011a7a34;
  puStack_88 = &UNK_1104c4bc0;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4();
  puVar8 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_1104c4bf8;
  func_0x000107c613fc(&UNK_1104c4bf8,0x18,7);
  *(long *)(puVar8 + 0x10) = lVar1;
  puVar9 = &UNK_1104c4c20;
  func_0x000107c613fc(&UNK_1104c4c20,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x10208e2b0;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  uStack_80 = 0x10208e2f0;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_1104c4c38;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar11 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar11);
  puVar11 = &UNK_1104c4c70;
  func_0x000107c613fc(&UNK_1104c4c70,0x20,7);
  *(long *)(puVar11 + 0x10) = lVar1;
  *(undefined8 *)(puVar11 + 0x18) = uVar2;
  puVar12 = &UNK_1104c4c98;
  func_0x000107c613fc(&UNK_1104c4c98,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = 0x10208e310;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  uStack_80 = 0x10208e3f0;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_1104c4cb0;
  ppuVar13 = &puStack_a0;
  puStack_78 = puVar12;
  func_0x000107c60bc4(ppuVar13);
  puVar14 = puStack_78;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar14);
  puVar14 = &UNK_1104c4ce8;
  func_0x000107c613fc(&UNK_1104c4ce8,0x18,7);
  *(long *)(puVar14 + 0x10) = lVar1;
  puVar15 = &UNK_1104c4d10;
  func_0x000107c613fc(&UNK_1104c4d10,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = 0x10208e358;
  *(undefined **)(puVar15 + 0x18) = puVar14;
  uStack_80 = 0x10208e398;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100eb5728;
  puStack_88 = &UNK_1104c4d28;
  ppuVar16 = &puStack_a0;
  puStack_78 = puVar15;
  func_0x000107c60bc4(ppuVar16);
  puVar3 = puStack_78;
  func_0x000107c6157c(puVar15);
  func_0x000107c61574(puVar3);
  func_0x000107c4c5bc(param_1);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x58,0x7c,0x1e,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10208dda0);
    (*pcVar4)();
  }
  puVar5 = puVar9;
  func_0x000107c61544(puVar9,"",0x58,0x7e,0x19,1);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10208dda4);
    (*pcVar4)();
  }
  puVar5 = puVar12;
  func_0x000107c61544(puVar12,"",0x58,0x80,0x20,1);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(puVar12);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10208dda8);
    (*pcVar4)();
  }
  puVar5 = puVar15;
  func_0x000107c61544(puVar15,"",0x58,0x82,0x18,1);
  func_0x000107c61574(puVar15);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10208ddac);
  (*pcVar4)();
}



/* Entry: 10208e220; end: 10208e24b;  */

void FUN_10208e220(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10208e24c; end: 10208e3b7;  */

void FUN_10208e24c(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61428(uVar1,auStack_38,1,0);
  *(bool *)uVar1 = param_1 != 0;
  return;
}



/* Entry: 10208e3b8; end: 10208e3f3;  */

void FUN_10208e3b8(long param_1,long param_2)

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



/* Entry: 10208e3f4; end: 10208eb17;  */

undefined1  [16] FUN_10208e3f4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f05f8a0);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05f8c0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10208e4c0);
  (*pcVar1)();
}



/* Entry: 10208eb18; end: 10208eb73; -[SCFriendsFeedOverPullResult targetShortcutId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208eb18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112e55210))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e55210);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10208eb74; end: 10208eb87; -[SCFriendsFeedOverPullResult targetShortcutType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10208eb74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112e55218);
}



/* Entry: 10208eb88; end: 10208ebf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208eb88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e55210);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e55218) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10208ebf4; end: 10208ec77; -[SCFriendsFeedOverPullResult initWithTargetShortcutId:targetShortcutType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ebf4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112e55210);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112e55218) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10208ec78; end: 10208ec7b; -[SCFriendsFeedOverPullResult copyWithZone:] */

void FUN_10208ec78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10208ec7c; end: 10208ec97; -[SCFriendsFeedOverPullResult description] */

void FUN_10208ec7c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10208ec98; end: 10208ed13; -[SCFriendsFeedOverPullResult init] */

void FUN_10208ec98(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCFriendsFeedOverPull/OverPullResultWrapper.swift",0x31,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10208ece0);
  (*pcVar1)();
}



/* Entry: 10208ed14; end: 10208ed27; -[SCFriendsFeedOverPullResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ed14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e55210 + 8))
  ;
  return;
}



/* Entry: 10208ed28; end: 10208ed47;  */

void FUN_10208ed28(void)

{
  func_0x000107c61168(&PTR_PTR_11281be50);
  return;
}



/* Entry: 10208ed48; end: 10208ed4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ed48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e55210);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e55218) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10208ed4c; end: 10208edbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ed4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e55248) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e55250) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e55258) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10208edc0; end: 10208ee4f; -[PublicGroupsScope initWithViewContainer:presentingViewController:jiraDebugInfoSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208edc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e55248) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e55250) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e55258) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10208ee50; end: 10208ee83;  */

void FUN_10208ee50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10208ee84; end: 10208eecb; -[PublicGroupsScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010208eea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010208eea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ee84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e55248));
  return;
}



/* Entry: 10208eecc; end: 10208eeeb;  */

void FUN_10208eecc(void)

{
  func_0x000107c61168(&PTR_PTR_11281bf20);
  return;
}



/* Entry: 10208eeec; end: 10208ef0b; -[SponsoredSnapsModalScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208eeec(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e55288));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10208ef0c; end: 10208ef53; -[SponsoredSnapsModalScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ef0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e55290;
  func_0x000107c61428(param_1 + _DAT_112e55290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10208ef54; end: 10208efab; -[SponsoredSnapsModalScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208ef54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e55290;
  func_0x000107c61428(param_1 + _DAT_112e55290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10208efac; end: 10208efbb; -[SponsoredSnapsModalScope headerSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208efac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e55298));
  return;
}



/* Entry: 10208efbc; end: 10208f083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10208efbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112e55290;
  func_0x000107c61614(unaff_x20 + _DAT_112e55290,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e55288) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112e55298) = 0;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 10208f084; end: 10208f1ff; -[SponsoredSnapsModalScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208f084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112e55290;
  func_0x000107c61614(param_1 + _DAT_112e55290,0);
  *(undefined8 *)(param_1 + _DAT_112e55288) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_112e55298) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 10208f200; end: 10208f2bb; -[SponsoredSnapsModalScope initWithUiContainer:delegate:headerSnapshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208f200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112e55290;
  func_0x000107c61614(param_1 + _DAT_112e55290,0);
  *(undefined8 *)(param_1 + _DAT_112e55288) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_112e55298) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 10208f2bc; end: 10208f2ef;  */

void FUN_10208f2bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10208f2f0; end: 10208f337; -[SponsoredSnapsModalScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10208f2f0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e55288));
  func_0x0001011d42c0(param_1 + _DAT_112e55290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e55298));
  return;
}



/* Entry: 10208f338; end: 10208f357;  */

void FUN_10208f338(void)

{
  func_0x000107c61168(&PTR_PTR_11281bff0);
  return;
}



/* Entry: 10208f358; end: 10208f3ff; -[_TtC36FriendsFeedItemServiceImplementation26FriendsFeedItemServiceImpl userIdFor:] */

void FUN_10208f358(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_3;
  func_0x000107cf9bb0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar1);
      func_0x000107c5fadc(lVar2,param_2);
      func_0x000107c6142c(param_2);
      goto LAB_10208f3f0;
    }
  }
  func_0x000107c61170(param_3);
  lVar2 = 0;
LAB_10208f3f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10208f400; end: 10208f407; -[_TtC36FriendsFeedItemServiceImplementation26FriendsFeedItemServiceImpl isSnapchatBot:] */

undefined1 FUN_10208f400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10208f408; end: 10208f443; -[_TtC36FriendsFeedItemServiceImplementation26FriendsFeedItemServiceImpl init] */

void FUN_10208f408(undefined8 param_1)

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



/* Entry: 10208f444; end: 10208f4b7;  */

void FUN_10208f444(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10208f4b8; end: 10208f563;  */

void FUN_10208f4b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_30 = FUN_10208f564;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  pcStack_40 = FUN_10208f580;
  puStack_38 = &UNK_1104c4ed8;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  FUN_102120900(0);
  func_0x000107c610f8();
  func_0x000102120844(puVar1);
  return;
}



/* Entry: 10208f564; end: 10208f57f;  */

void FUN_10208f564(void)

{
  func_0x00010208f478(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10208f580; end: 10208f5b7;  */

void FUN_10208f580(long param_1)

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



/* Entry: 10208f5b8; end: 10208f5e3;  */

void FUN_10208f5b8(long param_1,long param_2)

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



/* Entry: 10208f5e4; end: 10208f64f;  */

void FUN_10208f5e4(undefined8 param_1)

{
  if (lRam0000000112e55318 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ad754);
  return;
}



/* Entry: 10208f650; end: 10208f70f;  */

void FUN_10208f650(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_40 = FUN_10208f564;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10208f580;
  puStack_48 = &UNK_1104c4f00;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_102120900(0);
  func_0x000107c610f8();
  func_0x000102120844(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}


