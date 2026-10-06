/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10288ff3c; end: 10288ff43;  */

void FUN_10288ff3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112ec6230,&UNK_10dae7690);
    uStack_60 = 0;
    func_0x000100854cb0(&uStack_60);
  }
  else {
    uVar2 = param_1;
    FUN_10288ff44(param_1);
    puVar3 = &UNK_11055daa8;
    func_0x000107c613fc(&UNK_11055daa8,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    uVar4 = 0x112ec6200;
    func_0x0001000285a8(0x112ec6200,&UNK_10dae7660);
    func_0x0001000bfde0(FUN_102890f24,puVar3,uVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 10288ff44; end: 102890293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10288ff44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined1 uStack_41;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec61f8);
  func_0x000107c4ce08(lVar1,param_2,param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      puVar5 = &UNK_11055da58;
      func_0x000107c613fc(&UNK_11055da58,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_11055dcb0;
      func_0x000107c613fc(&UNK_11055dcb0,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long *)(puVar6 + 0x18) = lVar4;
      *(undefined8 *)(puVar6 + 0x20) = param_2;
      uVar7 = 0x112dc70e0;
      func_0x0001000285a8(0x112dc70e0,&UNK_10d9878b0);
      func_0x000107c613fc();
      pcVar8 = FUN_102891220;
      func_0x0001000b64ac(FUN_102891220,puVar6,uVar7);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      return pcVar8;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  uStack_41 = (code)0x0;
  pcVar8 = (code *)&uStack_41;
  func_0x000100854cb0(pcVar8);
  func_0x000107c615e8(lVar1);
  return pcVar8;
}



/* Entry: 102890294; end: 1028902bb;  */

void FUN_102890294(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 1028902bc; end: 1028902c7;  */

void FUN_1028902bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1028902c8; end: 10289033f; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1028902c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10288fc8c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102890340; end: 1028904c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102890340(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + _DAT_112ec61e8);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      pcStack_68 = FUN_10289122c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_100ab47f8;
      puStack_70 = &UNK_11055dcc8;
      ppuVar3 = &puStack_88;
      uStack_60 = param_1;
      func_0x000107c60bc4(ppuVar3);
      uVar1 = uStack_60;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(uVar1);
      func_0x000107c403ec(lVar2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_3);
      func_0x0001000b6d30(0);
      func_0x000104885df0(0,0);
      func_0x000107c615e8(lVar2);
      return;
    }
  }
  puStack_88 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff00);
  func_0x000100087f6c(&puStack_88);
  func_0x000100c7f554();
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 1028904c8; end: 102890537;  */

void FUN_1028904c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102890538(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102890538; end: 10289085f;  */

/* WARNING: Possible PIC construction at 0x0001028905f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102890630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028907b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028907c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102890838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102890830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289083c) */
/* WARNING: Removing unreachable block (ram,0x0001028907c8) */
/* WARNING: Removing unreachable block (ram,0x0001028907b8) */
/* WARNING: Removing unreachable block (ram,0x0001028905f8) */
/* WARNING: Removing unreachable block (ram,0x000102890634) */
/* WARNING: Removing unreachable block (ram,0x000102890644) */
/* WARNING: Removing unreachable block (ram,0x000102890648) */
/* WARNING: Removing unreachable block (ram,0x00010289085c) */
/* WARNING: Removing unreachable block (ram,0x00010289065c) */
/* WARNING: Removing unreachable block (ram,0x000102890690) */
/* WARNING: Removing unreachable block (ram,0x0001028906a0) */
/* WARNING: Removing unreachable block (ram,0x000102890620) */
/* WARNING: Removing unreachable block (ram,0x000102890834) */
/* WARNING: Removing unreachable block (ram,0x000102890838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102890538(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec61f8);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112ec61e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar1 = _DAT_112ec61b0;
    if (lVar4 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c61428(unaff_x20 + _DAT_112ec61b0,auStack_78,0,0);
      lVar2 = unaff_x20 + lVar1;
      func_0x000107c61618();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar3);
        lVar2 = lVar4;
      }
      else {
        func_0x000107c5d184();
        func_0x000107c61180();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102890860; end: 102890967;  */

void FUN_102890860(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  puVar1 = &UNK_11055db70;
  func_0x000107c613fc(&UNK_11055db70,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  puVar1[0x20] = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uStack_60 = 0x102890fb0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11055db88;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102890968; end: 102890b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102890968(long param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar6 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112ec61d0) == param_2) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112ec61c8);
      *(undefined8 *)(param_1 + _DAT_112ec61c8) = 0;
      func_0x000107c615e8(uVar1);
      lVar5 = _DAT_112ec61b8;
      if ((param_3 & 1) == 0) {
        func_0x000107c61428(param_1 + _DAT_112ec61b8,auStack_90,0,0);
        lVar5 = param_1 + lVar5;
        func_0x000107c61618();
        if (lVar5 != 0) {
          func_0x000107c42860();
          func_0x000107c615e8(lVar5);
        }
      }
      else {
        uVar1 = param_5;
        func_0x000107c40258(param_5);
        func_0x000107c61180();
        uVar2 = uVar1;
        func_0x000107c5faec();
        puVar7 = puVar6;
        func_0x000107c61170(uVar1);
        func_0x000107c4cde0(param_5);
        func_0x000107c61180();
        uVar1 = param_5;
        func_0x000107c5faec();
        func_0x000107c61170(param_5);
        FUN_102890fc4();
        uVar3 = 0;
        func_0x0001038eac78(0);
        func_0x000107c610f8();
        uVar4 = 9;
        func_0x0001038ea984(uVar3,9,0xe,1,uVar2,puVar6,uVar1,puVar7,0,0,param_6);
        func_0x000100926e50(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar4);
        lVar5 = param_1;
        func_0x000107c61174();
        func_0x000107c61174(param_4);
        func_0x000107c615f0(param_7);
        func_0x0001038ea4b0(param_4,uVar4,param_7,param_1);
        func_0x000107c42c1c(*(undefined8 *)(lVar5 + _DAT_112ec61e0));
        func_0x000107c61170(lVar5);
        func_0x000107c61170(uVar4);
        param_1 = param_4;
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102890b74; end: 102890cb3;  */

void FUN_102890b74(long param_1,undefined8 param_2)

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



/* Entry: 102890cb4; end: 102890d27;  */

/* WARNING: Possible PIC construction at 0x000102890d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102890d10) */

void FUN_102890cb4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b23b8;
  func_0x000107c61168(PTR_PTR_1126b23b8);
  func_0x000107c444fc(param_1);
  func_0x000107c61180();
  func_0x000107c44554(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102890d28; end: 102890d87; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin init] */

void FUN_102890d28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AIRemixChatActionMenuPlugin.AIRemixChatActionMenuPlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102890d54);
  (*pcVar1)();
}



/* Entry: 102890d88; end: 102890f03; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102890e08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102890e0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102890d88(long param_1)

{
  func_0x000100d0ca30(param_1 + _DAT_112ec61b0);
  func_0x000100d0ca30(param_1 + _DAT_112ec61b8);
  func_0x000107c61610(param_1 + _DAT_112ec61c0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec61d8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec61e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec61e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec61f0));
  return;
}



/* Entry: 102890f04; end: 102890f23;  */

void FUN_102890f04(void)

{
  func_0x000107c61168(&PTR_PTR_1128687a0);
  return;
}



/* Entry: 102890f24; end: 102890f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102890f24(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*param_2 == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x0001028900a0(*(undefined8 *)(unaff_x20 + 0x10),uVar1,
                        *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112f14b88));
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102890f78; end: 102890fc3;  */

void FUN_102890f78(void)

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
    FUN_102890538(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102890fc4; end: 1028911cf;  */

undefined8 FUN_102890fc4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  puVar4 = &UNK_11055dbc0;
  func_0x000107c613fc(&UNK_11055dbc0,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_68;
  puVar5 = &UNK_11055dbe8;
  func_0x000107c613fc(&UNK_11055dbe8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1028911d0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_78 = FUN_1028911d8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1011b6bc0;
  puStack_80 = &UNK_11055dc00;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_70;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11055dc38;
  func_0x000107c613fc(&UNK_11055dc38,0x18,7);
  *(undefined8 **)(puVar7 + 0x10) = &uStack_68;
  puVar8 = &UNK_11055dc60;
  func_0x000107c613fc(&UNK_11055dc60,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1028911f8;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_78 = FUN_102891200;
  puStack_98 = puVar1;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1011ac670;
  puStack_80 = &UNK_11055dc78;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar1 = puStack_70;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6d0(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_68;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x70,0xf2,0x14,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028911cc);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x70,0xf9,0x14,1);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1028911d0);
  (*pcVar3)();
}



/* Entry: 1028911d0; end: 1028911d7;  */

/* WARNING: Possible PIC construction at 0x000102890c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102890c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102890c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102890c88) */
/* WARNING: Removing unreachable block (ram,0x000102890c38) */
/* WARNING: Removing unreachable block (ram,0x000102890c98) */

void FUN_1028911d0(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c5fadc();
  if (param_3 == 0) {
    func_0x000107c61168(PTR_PTR_1126b23b8);
    func_0x000107c5daf0();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5db08(param_3);
    func_0x000107c61180();
    func_0x00010901d7c4(param_3);
    func_0x000107c61180();
    func_0x000107c5faec();
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028911d8; end: 1028911f7;  */

void FUN_1028911d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028911f8; end: 1028911ff;  */

/* WARNING: Possible PIC construction at 0x000102890d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102890d10) */

void FUN_1028911f8(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b23b8;
  func_0x000107c61168(PTR_PTR_1126b23b8,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c444fc(param_1);
  func_0x000107c61180();
  func_0x000107c44554(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102891200; end: 10289121f;  */

void FUN_102891200(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102891220; end: 10289122b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102891220(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + _DAT_112ec61e8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar1 != 0) {
      func_0x000107c5fadc(uVar2,uVar4);
      pcStack_68 = FUN_10289122c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_100ab47f8;
      puStack_70 = &UNK_11055dcc8;
      ppuVar3 = &puStack_88;
      uStack_60 = param_1;
      func_0x000107c60bc4(ppuVar3);
      uVar4 = uStack_60;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(uVar4);
      func_0x000107c403ec(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(uVar2);
      func_0x0001000b6d30(0);
      func_0x000104885df0(0,0);
      func_0x000107c615e8(lVar1);
      return;
    }
  }
  puStack_88 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff00);
  func_0x000100087f6c(&puStack_88);
  func_0x000100c7f554();
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10289122c; end: 102891253;  */

void FUN_10289122c(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  func_0x000100087f6c(&uStack_11);
  func_0x000100c7f554();
  return;
}



/* Entry: 102891254; end: 102891293;  */

void FUN_102891254(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102891294; end: 1028912bb;  */

void FUN_102891294(long param_1,long param_2)

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



/* Entry: 1028912bc; end: 1028912bf; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin aiRemixScopeDidComplete] */

void FUN_1028912bc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102890e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028912c0; end: 1028912c3; -[_TtC27AIRemixChatActionMenuPlugin27AIRemixChatActionMenuPlugin dismissPresentedView] */

void FUN_1028912c0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102890e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028912c4; end: 10289137f;  */

void FUN_1028912c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec60d8,&UNK_10dae7550);
  puVar1 = &UNK_11055dd00;
  func_0x000107c613fc(&UNK_11055dd00,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1028915f0,puVar1);
  return;
}



/* Entry: 102891380; end: 1028915ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102891380(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar10 = &lStack_90;
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  uVar3 = 0x112ebc8d8;
  func_0x0001000285a8(0x112ebc8d8,&UNK_10db4b840);
  func_0x000107c610f8();
  func_0x00010017da58(lVar4);
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_68);
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar7 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000100083b20(&uStack_70);
  uVar7 = uStack_70;
  func_0x000107c3f854();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  lVar4 = lStack_78;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_78);
  if (lVar4 != 0) {
    func_0x000100083b20(&lStack_80);
    uVar11 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
    func_0x000107c615f0(uVar11);
    func_0x000107c61170(lStack_80);
    lVar8 = 0;
    FUN_102890f04();
    lVar9 = lVar8;
    func_0x000107c610f8();
    func_0x000107c61614(lVar9 + _DAT_112ec61b0,0);
    func_0x000107c61614(lVar9 + _DAT_112ec61b8,0);
    func_0x000107c61614(lVar9 + _DAT_112ec61c0,0);
    *(undefined8 *)(lVar9 + _DAT_112ec61c8) = 0;
    *(undefined8 *)(lVar9 + _DAT_112ec61d0) = 0;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112ec61d8);
    *puVar1 = uVar6;
    puVar1[1] = uVar3;
    *(undefined **)(lVar9 + _DAT_112ec61e0) = puVar5;
    *(undefined8 *)(lVar9 + _DAT_112ec61e8) = uVar7;
    *(long *)(lVar9 + _DAT_112ec61f0) = lVar4;
    *(undefined8 *)(lVar9 + _DAT_112ec61f8) = uVar11;
    lStack_90 = lVar9;
    lStack_88 = lVar8;
    func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
    *param_1 = plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028915f0);
  (*pcVar2)();
}



/* Entry: 1028915f0; end: 10289160f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028915f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar10 = &lStack_90;
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = lStack_68;
  uVar3 = 0x112ebc8d8;
  func_0x0001000285a8(0x112ebc8d8,&UNK_10db4b840);
  func_0x000107c610f8();
  func_0x00010017da58(lVar4);
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_68);
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar7 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000100083b20(&uStack_70);
  uVar7 = uStack_70;
  func_0x000107c3f854();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  lVar4 = lStack_78;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_78);
  if (lVar4 != 0) {
    func_0x000100083b20(&lStack_80);
    uVar11 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
    func_0x000107c615f0(uVar11);
    func_0x000107c61170(lStack_80);
    lVar8 = 0;
    FUN_102890f04();
    lVar9 = lVar8;
    func_0x000107c610f8();
    func_0x000107c61614(lVar9 + _DAT_112ec61b0,0);
    func_0x000107c61614(lVar9 + _DAT_112ec61b8,0);
    func_0x000107c61614(lVar9 + _DAT_112ec61c0,0);
    *(undefined8 *)(lVar9 + _DAT_112ec61c8) = 0;
    *(undefined8 *)(lVar9 + _DAT_112ec61d0) = 0;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112ec61d8);
    *puVar1 = uVar6;
    puVar1[1] = uVar3;
    *(undefined **)(lVar9 + _DAT_112ec61e0) = puVar5;
    *(undefined8 *)(lVar9 + _DAT_112ec61e8) = uVar7;
    *(long *)(lVar9 + _DAT_112ec61f0) = lVar4;
    *(undefined8 *)(lVar9 + _DAT_112ec61f8) = uVar11;
    lStack_90 = lVar9;
    lStack_88 = lVar8;
    func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
    *param_1 = plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028915f0);
  (*pcVar2)();
}



/* Entry: 102891610; end: 102891827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102891610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102891c8c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_7;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112ec6238) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ec6240) = param_8;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102891828);
  (*pcVar2)();
}



/* Entry: 102891828; end: 102891887; -[_TtC30ChatActionMenuScopeGraphBridge45ChatActionMenuScopeGraphBridgeSaberEntryPoint init] */

void FUN_102891828(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatActionMenuScopeGraphBridge.ChatActionMenuScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102891854);
  (*pcVar1)();
}



/* Entry: 102891888; end: 1028918bf; -[_TtC30ChatActionMenuScopeGraphBridge45ChatActionMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028918a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028918a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102891888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6238));
  return;
}



/* Entry: 1028918c0; end: 1028918e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028918c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec6240),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec6238));
  return;
}



/* Entry: 1028918e8; end: 102891907;  */

void FUN_1028918e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128688a8);
  return;
}



/* Entry: 102891908; end: 10289196b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102891908(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec6398);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10289196c; end: 102891973;  */

void FUN_10289196c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102891974; end: 102891a13;  */

void FUN_102891974(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102891a14; end: 102891a33;  */

void FUN_102891a14(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102891a34; end: 102891abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102891a34(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec6340) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec6348);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102891abc);
  (*pcVar2)();
}



/* Entry: 102891abc; end: 102891ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102891abc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec6340);
  *(undefined **)(unaff_x20 + _DAT_112ec6340) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec6348);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec6348))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11055de58;
  func_0x000107c613fc(&UNK_11055de58,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102891ba8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102891ba4; end: 102891baf;  */

void FUN_102891ba4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102891bb0; end: 102891c0f; -[_TtC30ChatActionMenuScopeGraphBridge43ChatActionMenuScopedServicesSaberEntryPoint init] */

void FUN_102891bb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatActionMenuScopeGraphBridge.ChatActionMenuScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102891bdc);
  (*pcVar1)();
}



/* Entry: 102891c10; end: 102891c47; -[_TtC30ChatActionMenuScopeGraphBridge43ChatActionMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102891c10(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec6348));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6340));
  return;
}



/* Entry: 102891c48; end: 102891c4b;  */

void FUN_102891c48(void)

{
  return;
}



/* Entry: 102891c4c; end: 102891c6b;  */

void FUN_102891c4c(void)

{
  FUN_102891abc();
  return;
}



/* Entry: 102891c6c; end: 102891c8b;  */

void FUN_102891c6c(void)

{
  func_0x000107c61168(&PTR_PTR_112868970);
  return;
}



/* Entry: 102891c8c; end: 102891d5b;  */

undefined8 FUN_102891c8c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ec6378,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102891d5c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102891d5c; end: 102891d7b;  */

void FUN_102891d5c(void)

{
  func_0x000107c61168(&PTR_PTR_112868a38);
  return;
}



/* Entry: 102891d7c; end: 102891f6f;  */

void FUN_102891d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec6380,&UNK_10dae77c8);
  puVar1 = &UNK_11055dea0;
  func_0x000107c613fc(&UNK_11055dea0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_102891f70,puVar1);
  return;
}



/* Entry: 102891f70; end: 102891f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102891f70(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  lVar8 = lVar1;
  FUN_102891d5c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112ec6388) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112ec6390) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112ec6398) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112ec63a0) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112ec63a8) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112ec63b0) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112ec63b8) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 102891f84; end: 102892047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102891f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec6388) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6390) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6398) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec63a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec63a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ec63b0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ec63b8) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102892048; end: 1028920a7; -[_TtC30ChatActionMenuScopeGraphBridge38ChatActionMenuScopeGraphBridgeServices init] */

void FUN_102892048(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatActionMenuScopeGraphBridge.ChatActionMenuScopeGraphBridgeServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102892074);
  (*pcVar1)();
}



/* Entry: 1028920a8; end: 10289212f; -[_TtC30ChatActionMenuScopeGraphBridge38ChatActionMenuScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028920c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028920e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028920e8) */
/* WARNING: Removing unreachable block (ram,0x0001028920c8) */
/* WARNING: Removing unreachable block (ram,0x000102892108) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028920a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec6398));
  return;
}



/* Entry: 102892130; end: 102892163; -[ChatActionMenuScope chatActionMenuScopeGraphBridgeServices] */

void FUN_102892130(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102891c8c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102892164; end: 1028921ef; -[ChatActionMenuScope setChatActionMenuScopeGraphBridgeServices:] */

void FUN_102892164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ec6378,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1028921f0; end: 10289222f;  */

void FUN_1028921f0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102892800,0);
  return;
}



/* Entry: 102892230; end: 10289224b;  */

void FUN_102892230(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1028927ec,param_1);
  return;
}



/* Entry: 10289224c; end: 10289228b;  */

void FUN_10289224c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1028927fc,0);
  return;
}



/* Entry: 10289228c; end: 1028922a7;  */

void FUN_10289228c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1028927e8,param_1);
  return;
}



/* Entry: 1028922a8; end: 1028922e7;  */

void FUN_1028922a8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102892804,0);
  return;
}



/* Entry: 1028922e8; end: 102892303;  */

void FUN_1028922e8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1028927f0,param_1);
  return;
}



/* Entry: 102892304; end: 102892343;  */

void FUN_102892304(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102892808,0);
  return;
}



/* Entry: 102892344; end: 10289235f;  */

void FUN_102892344(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102892360,param_1);
  return;
}



/* Entry: 102892360; end: 1028923d3;  */

void FUN_102892360(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1028923d4; end: 1028923ef;  */

void FUN_1028923d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1028927f4,param_1);
  return;
}



/* Entry: 1028923f0; end: 10289242f;  */

void FUN_1028923f0(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(FUN_102892430,0);
  return;
}



/* Entry: 102892430; end: 102892443;  */

void FUN_102892430(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102892444; end: 10289247f;  */

void FUN_102892444(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102892480; end: 10289249b;  */

void FUN_102892480(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1028927f8,param_1);
  return;
}



/* Entry: 10289249c; end: 1028924eb;  */

void FUN_10289249c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1028924ec; end: 1028924f3;  */

undefined8 FUN_1028924ec(void)

{
  return 0x1b;
}



/* Entry: 1028924f4; end: 10289266b;  */

void FUN_1028924f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11055dec8;
  func_0x000107c613fc(&UNK_11055dec8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10289266c,puVar1);
  return;
}



/* Entry: 10289266c; end: 102892673;  */

void FUN_10289266c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ec6378,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec6378,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11055e0e0;
  func_0x000107c613fc(&UNK_11055e0e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1028927e0;
  func_0x00010058fa64(0x1028927e0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102892674; end: 1028926cf;  */

void FUN_102892674(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec6378,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec6378,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1028926d0; end: 10289280f;  */

undefined ** FUN_1028926d0(void)

{
  return &PTR_DAT_113066568;
}



/* Entry: 102892810; end: 102892857; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892810(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6410;
  func_0x000107c61428(param_1 + _DAT_112ec6410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102892858; end: 1028928af; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6410;
  func_0x000107c61428(param_1 + _DAT_112ec6410,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028928b0; end: 1028928f7; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint aIRemixScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028928b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6418;
  func_0x000107c61428(param_1 + _DAT_112ec6418,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028928f8; end: 102892903; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setAIRemixScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028928f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6418;
  func_0x000107c61428(param_1 + _DAT_112ec6418,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102892904; end: 10289294b; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint chatReactionMenuScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892904(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6420;
  func_0x000107c61428(param_1 + _DAT_112ec6420,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10289294c; end: 102892957; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setChatReactionMenuScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289294c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6420;
  func_0x000107c61428(param_1 + _DAT_112ec6420,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102892958; end: 10289299f; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint modularStickerCutoutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892958(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6428;
  func_0x000107c61428(param_1 + _DAT_112ec6428,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028929a0; end: 1028929ab; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setModularStickerCutoutScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028929a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6428;
  func_0x000107c61428(param_1 + _DAT_112ec6428,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028929ac; end: 1028929f3; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028929ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6430;
  func_0x000107c61428(param_1 + _DAT_112ec6430,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028929f4; end: 1028929ff; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028929f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6430;
  func_0x000107c61428(param_1 + _DAT_112ec6430,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102892a00; end: 102892a47; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint simpleWebBrowserScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892a00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6438;
  func_0x000107c61428(param_1 + _DAT_112ec6438,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102892a48; end: 102892a53; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setSimpleWebBrowserScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6438;
  func_0x000107c61428(param_1 + _DAT_112ec6438,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102892a54; end: 102892a9b; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint messageActionMenuItemPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892a54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6440;
  func_0x000107c61428(param_1 + _DAT_112ec6440,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102892a9c; end: 102892aa7; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setMessageActionMenuItemPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6440;
  func_0x000107c61428(param_1 + _DAT_112ec6440,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102892aa8; end: 102892aef; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint chatActionMenuScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892aa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6448;
  func_0x000107c61428(param_1 + _DAT_112ec6448,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102892af0; end: 102892afb; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setChatActionMenuScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6448;
  func_0x000107c61428(param_1 + _DAT_112ec6448,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102892afc; end: 102892b5b;  */

void FUN_102892afc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102892b5c; end: 102892ff3;  */

/* WARNING: Possible PIC construction at 0x000102892e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102892f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102892f3c) */
/* WARNING: Removing unreachable block (ram,0x000102892f2c) */
/* WARNING: Removing unreachable block (ram,0x000102892f5c) */
/* WARNING: Removing unreachable block (ram,0x000102892f4c) */
/* WARNING: Removing unreachable block (ram,0x000102892f8c) */
/* WARNING: Removing unreachable block (ram,0x000102892f7c) */
/* WARNING: Removing unreachable block (ram,0x000102892fcc) */
/* WARNING: Removing unreachable block (ram,0x000102892fbc) */
/* WARNING: Removing unreachable block (ram,0x000102892fac) */
/* WARNING: Removing unreachable block (ram,0x000102892eb8) */
/* WARNING: Removing unreachable block (ram,0x000102892ea8) */
/* WARNING: Removing unreachable block (ram,0x000102892e98) */
/* WARNING: Removing unreachable block (ram,0x000102892e88) */
/* WARNING: Removing unreachable block (ram,0x000102892e64) */
/* WARNING: Removing unreachable block (ram,0x000102892e54) */
/* WARNING: Removing unreachable block (ram,0x000102892e44) */
/* WARNING: Removing unreachable block (ram,0x000102892e34) */
/* WARNING: Removing unreachable block (ram,0x000102892f1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102892b5c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c3ce68();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3f8f0();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c4d0f4();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c4eaa8();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar5 = unaff_x20;
          func_0x000107c5b040();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c4cd94();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar3);
              lVar3 = lVar4;
            }
            else {
              func_0x000107c3f818();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar3);
                lVar3 = lVar4;
              }
              else {
                lVar6 = 0;
                FUN_1028918e8();
                lVar4 = lVar6;
                func_0x000107c610f8();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                lVar5 = lVar3;
                FUN_102891c8c();
                if (lVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102892ff4);
                  (*pcVar2)();
                }
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uStack_68);
                *(long *)(lVar4 + _DAT_112ec6238) = lVar5;
                *(long *)(lVar4 + _DAT_112ec6240) = unaff_x20;
                lStack_80 = lVar4;
                lStack_78 = lVar6;
                func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102892ff4; end: 10289301b; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102892ff4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102892b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10289301c; end: 10289305f; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint end] */

void FUN_10289301c(undefined8 param_1)

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



/* Entry: 102893060; end: 10289346f;  */

void FUN_102893060(long param_1,long param_2,long param_3)

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
    goto LAB_1028930ec;
  }
  if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef0f8a6f0)) {
    uVar2 = 0xd000000000000013;
    func_0x000107c605b8(0xd000000000000013,0x800000010f075910,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f3b1f0)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010f0c4e10,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c533a4();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0f8a4a0)) ||
           (func_0x000107c605b8(0xd000000000000020,0x800000010f075b60,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c567b8();
        }
        else {
          uVar2 = 0xd000000000000019;
          if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10dfbf0)) ||
             (func_0x000107c605b8(0xd000000000000019,0x800000010ef20410,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57598();
          }
          else {
            if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef1005b50)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd00000000000001c,0x800000010effa4b0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd000000000000027;
                if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0f3b1d0)) ||
                   (func_0x000107c605b8(0xd000000000000027,0x800000010f0c4e30,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c56630();
                }
                else {
                  uVar2 = 0xd00000000000002d;
                  if (((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f3b1a0)) &&
                     (func_0x000107c605b8(0xd00000000000002d,0x800000010f0c4e60,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "ChatActionMenuScopeGraphBridge/SCChatActionMenuScopeGraphBridgeSaberEntryPoint.swift"
                                        ,0x54,2,0x4e,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102893470);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5332c();
                }
                goto LAB_1028930ec;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c592c8();
          }
        }
      }
      goto LAB_1028930ec;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c520b4();
LAB_1028930ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102893470; end: 10289351b; -[SCChatActionMenuScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102893470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102893060(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10289351c; end: 1028935cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289351c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ec6410,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec6418) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6420) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6428) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6430) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6438) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6440) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6448) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6450) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}


