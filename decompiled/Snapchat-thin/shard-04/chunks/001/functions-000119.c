/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10317e9ec; end: 10317ea1f; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317e9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f47420);
  *(undefined8 *)(param_1 + _DAT_112f47420) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10317ea20; end: 10317ea3f; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin inputContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317ea20(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f47428);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10317ea40; end: 10317ea9b; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin setInputContext:] */

/* WARNING: Possible PIC construction at 0x00010317ea88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317ea8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317ea40(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61604(param_1 + _DAT_112f47428,param_3);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10317ea9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10317ea9c; end: 10317ef03;  */

/* WARNING: Possible PIC construction at 0x00010317eba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317ec18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317ec34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317ec44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317ec54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317ec9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317ec58) */
/* WARNING: Removing unreachable block (ram,0x00010317ec48) */
/* WARNING: Removing unreachable block (ram,0x00010317ec38) */
/* WARNING: Removing unreachable block (ram,0x00010317ec1c) */
/* WARNING: Removing unreachable block (ram,0x00010317ebac) */
/* WARNING: Removing unreachable block (ram,0x00010317eca0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317ea9c(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = unaff_x20 + _DAT_112f47428;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f47438))[1];
    if (lVar3 != 0) {
      lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f47430))[1];
      if (lVar5 != 0) {
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f47438);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f47430);
        puVar1 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c61434(lVar3);
        func_0x000107c61434(lVar5);
        func_0x000107c4807c(puVar1);
        func_0x000107c5cbdc(lVar2);
        func_0x000107c61180();
        puVar1 = PTR_PTR_1126cb350;
        func_0x000107c610f8(PTR_PTR_1126cb350);
        func_0x000107c5fadc(uVar6,lVar5);
        func_0x000107c6142c(lVar5);
        func_0x000107c5fadc(uVar4,lVar3);
        func_0x000107c6142c(lVar3);
        func_0x000107c4619c(puVar1);
        goto code_r0x000107c61170;
      }
    }
    func_0x000107c61170();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f47410);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10317ef04; end: 10317f003;  */

void FUN_10317ef04(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *param_1;
  uStack_60 = 0x10317f644;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100b61264;
  puStack_68 = &UNK_110617ba0;
  uStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar2);
  uStack_60 = 0x10317f668;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10317f38c;
  puStack_68 = &UNK_110617bc8;
  uStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c4c6bc(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10317f004; end: 10317f0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317f004(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f47410;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112f47410);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c61170();
      uVar3 = *(undefined8 *)(param_2 + lVar1);
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c615e8(uVar3);
    }
  }
  return;
}



/* Entry: 10317f0f8; end: 10317f38b;  */

/* WARNING: Possible PIC construction at 0x00010317f2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317f314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317f254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317f290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317f268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317f294) */
/* WARNING: Removing unreachable block (ram,0x00010317f258) */
/* WARNING: Removing unreachable block (ram,0x00010317f2a0) */
/* WARNING: Removing unreachable block (ram,0x00010317f318) */
/* WARNING: Removing unreachable block (ram,0x00010317f338) */
/* WARNING: Removing unreachable block (ram,0x00010317f2dc) */
/* WARNING: Removing unreachable block (ram,0x00010317f26c) */
/* WARNING: Removing unreachable block (ram,0x00010317f2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317f0f8(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  lVar1 = param_1;
  func_0x000107c5ac8c();
  if ((int)lVar1 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f47410);
    lVar1 = lVar3;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar3);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
    return;
  }
  lVar1 = param_1;
  func_0x000107c4f868();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar6 = 0;
    puVar4 = (ulong *)(unaff_x20 + _DAT_112f47438);
    puVar7 = puVar4 + 1;
    uVar2 = *puVar7;
LAB_10317f1f4:
    uVar5 = 0;
    if (uVar2 == 0) {
LAB_10317f1fc:
      lVar1 = *(long *)(unaff_x20 + _DAT_112f47430);
      uVar6 = ((long *)(unaff_x20 + _DAT_112f47430))[1];
      func_0x000107c61434(uVar6);
      func_0x000107c40674();
      func_0x000107c61180();
      lVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar2 = param_2;
      if ((uVar6 != 0) && ((uVar2 = uVar6, lVar1 != lVar3 || (uVar6 != param_2)))) {
        func_0x000107c605b8(lVar1,uVar6,lVar3,param_2,0);
      }
      goto code_r0x000107c6142c;
    }
  }
  else {
    uVar6 = *(ulong *)(lVar1 + _DAT_113083728);
    uVar5 = ((ulong *)(lVar1 + _DAT_113083728))[1];
    func_0x000107c61434(uVar5);
    func_0x000107c61170(lVar1);
    puVar4 = (ulong *)(unaff_x20 + _DAT_112f47438);
    puVar7 = puVar4 + 1;
    uVar2 = *puVar7;
    if (uVar5 == 0) goto LAB_10317f1f4;
    if ((uVar2 != 0) &&
       ((uVar6 == *puVar4 && uVar2 == uVar5 ||
        (uVar2 = uVar6, param_2 = uVar5, func_0x000107c605b8(), (uVar2 & 1) != 0))))
    goto LAB_10317f1fc;
  }
  uVar2 = *puVar7;
  *puVar4 = uVar6;
  *puVar7 = uVar5;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10317f38c; end: 10317f3d7;  */

void FUN_10317f38c(long param_1,undefined8 param_2)

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



/* Entry: 10317f3d8; end: 10317f437; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin init] */

void FUN_10317f3d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatInputReactionMenuPlugin.ChatInputReactionMenuPlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317f404);
  (*pcVar1)();
}



/* Entry: 10317f438; end: 10317f4c7; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317f438(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47410));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47418));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47420));
  func_0x00010317f5c8(param_1 + _DAT_112f47428);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f47430 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f47438 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f47440));
  return;
}



/* Entry: 10317f4c8; end: 10317f4e7;  */

void FUN_10317f4c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd760);
  return;
}



/* Entry: 10317f4e8; end: 10317f4ef; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin position] */

undefined8 FUN_10317f4e8(void)

{
  return 0;
}



/* Entry: 10317f4f0; end: 10317f4f7; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin pluginType] */

undefined8 FUN_10317f4f0(void)

{
  return 3;
}



/* Entry: 10317f4f8; end: 10317f4fb; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin configureInputItem:] */

void FUN_10317f4f8(void)

{
  return;
}



/* Entry: 10317f4fc; end: 10317f59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317f4fc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47428);
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000104397ca0();
    uStack_40 = *puVar2;
    uStack_38 = puVar2[1];
    func_0x000107c61434();
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c5fbd4(&uStack_40,PTR___sSSN_11034da80,
                        PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0)
    ;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
    func_0x000107c3dd2c(puVar1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 10317f5a0; end: 10317f5eb; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin didReactToMessage] */

void FUN_10317f5a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10317f4fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317f5ec; end: 10317f63b;  */

void FUN_10317f5ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f47470 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d38358;
  func_0x00010002969c(0x112d38358,&UNK_10d902090);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f47470 = puVar2;
  return;
}



/* Entry: 10317f63c; end: 10317f677;  */

void FUN_10317f63c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar3 = &puStack_80;
  uVar4 = *param_1;
  uStack_60 = 0x10317f644;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100b61264;
  puStack_68 = &UNK_110617ba0;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  uStack_60 = 0x10317f668;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10317f38c;
  puStack_68 = &UNK_110617bc8;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4c6bc(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10317f678; end: 10317f67b; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin createItemController] */

void FUN_10317f678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10317f67c; end: 10317f67f; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin createDrawer] */

void FUN_10317f67c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10317f680; end: 10317f767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317f680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f47478) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f47480) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f47488) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10317f768; end: 10317f7c7; -[_TtC27ChatInputReactionMenuPlugin31ChatInputReactionPluginProvider init] */

void FUN_10317f768(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatInputReactionMenuPlugin.ChatInputReactionPluginProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317f794);
  (*pcVar1)();
}



/* Entry: 10317f7c8; end: 10317f80f; -[_TtC27ChatInputReactionMenuPlugin31ChatInputReactionPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010317f7e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317f7e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317f7c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f47478));
  return;
}



/* Entry: 10317f810; end: 10317f817; -[_TtC27ChatInputReactionMenuPlugin31ChatInputReactionPluginProvider providerType] */

undefined8 FUN_10317f810(void)

{
  return 1;
}



/* Entry: 10317f818; end: 10317f88b; -[_TtC27ChatInputReactionMenuPlugin31ChatInputReactionPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_10317f818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10317f894(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10317f88c; end: 10317f893; -[_TtC27ChatInputReactionMenuPlugin31ChatInputReactionPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_10317f88c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10317f894; end: 10317f93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317f894(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f47488);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5e0c8();
    func_0x000107c615e8(lVar1);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f47478);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f47480);
  FUN_10317f4c8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_1);
  func_0x00010317ece8(uVar3,uVar2,param_1);
  return;
}



/* Entry: 10317f940; end: 10317f95f;  */

void FUN_10317f940(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd850);
  return;
}



/* Entry: 10317f960; end: 10317fddf;  */

void FUN_10317f960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_110617ca8;
  func_0x000107c613fc(&UNK_110617ca8,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(0x10317fa94,puVar1);
  return;
}



/* Entry: 10317fde0; end: 10317fdef;  */

undefined1  [16] FUN_10317fde0(void)

{
  return ZEXT816(0x110617cd0);
}



/* Entry: 10317fdf0; end: 10317fe4b; +[_TtC35SCMessagingFeatureAttachmentHelpers35SCMessagingFeatureAttachmentHelpers createNotificationDisplayHintAttachmentWithHintType:] */

void FUN_10317fdf0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_10317feb8(param_3);
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = param_3;
    func_0x000107c5ee20();
    func_0x0001000b44c0(param_3,param_2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10317fe4c; end: 10317fe87; -[_TtC35SCMessagingFeatureAttachmentHelpers35SCMessagingFeatureAttachmentHelpers init] */

void FUN_10317fe4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_10317ff80();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10317fe88; end: 10317feb7;  */

void FUN_10317fe88(void)

{
  FUN_10317ff80();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10317feb8; end: 10317ff7f;  */

undefined1  [16] FUN_10317feb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_PTR_1126be758;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126dd910;
  func_0x000107c610f8(PTR_PTR_1126dd910);
  func_0x000107c453e4();
  func_0x000107c5515c();
  func_0x000107c56af8(puVar1);
  puVar3 = puVar1;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    puVar4 = (undefined *)0x0;
    param_2 = 0xf000000000000000;
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar4;
  return auVar5;
}



/* Entry: 10317ff80; end: 10317ff9f;  */

void FUN_10317ff80(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd920);
  return;
}



/* Entry: 10317ffa0; end: 10317ffb7;  */

void FUN_10317ffa0(void)

{
  uRam0000000112f47508 = 0x4082c00000000000;
  return;
}



/* Entry: 10317ffb8; end: 1031802af;  */

void FUN_10317ffb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 auStack_150 [64];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_58;
  
  uVar5 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
  func_0x000107c5faec();
  puStack_e8 = PTR___ss6UInt32VN_11034f020;
  uStack_100 = 0x61616320;
  uVar6 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
  uStack_110 = uVar5;
  uStack_108 = param_2;
  func_0x000107c5faec();
  puVar3 = PTR___sSiN_11034deb0;
  puStack_b8 = PTR___sSiN_11034deb0;
  uStack_d0 = 0xac44;
  uVar5 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
  uStack_e0 = uVar6;
  uStack_d8 = param_2;
  func_0x000107c5faec();
  puStack_88 = puVar3;
  uStack_a0 = 1;
  uVar6 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
  uStack_b0 = uVar5;
  uStack_a8 = param_2;
  func_0x000107c5faec();
  puStack_58 = puVar3;
  uStack_70 = 32000;
  uStack_80 = uVar6;
  uStack_78 = param_2;
  func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
  lVar7 = 4;
  func_0x000107c60498();
  func_0x000100216788(&uStack_110,&uStack_160);
  uVar11 = uStack_158;
  uVar9 = uStack_160;
  func_0x000107c6157c(lVar7);
  uVar8 = uVar9;
  uVar10 = uVar11;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103180294);
    (*pcVar4)();
  }
  lVar1 = lVar7 + 0x40;
  uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar8 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
  *puVar2 = uVar9;
  puVar2[1] = uVar11;
  func_0x000100102924(auStack_150,*(long *)(lVar7 + 0x38) + uVar8 * 0x20);
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103180298);
    (*pcVar4)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  func_0x000100216788(&uStack_e0,&uStack_160);
  uVar11 = uStack_158;
  uVar9 = uStack_160;
  uVar8 = uStack_160;
  uVar10 = uStack_158;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10318029c);
    (*pcVar4)();
  }
  uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar8 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
  *puVar2 = uVar9;
  puVar2[1] = uVar11;
  func_0x000100102924(auStack_150,*(long *)(lVar7 + 0x38) + uVar8 * 0x20);
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1031802a0);
    (*pcVar4)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  func_0x000100216788(&uStack_b0,&uStack_160);
  uVar11 = uStack_158;
  uVar9 = uStack_160;
  uVar8 = uStack_160;
  uVar10 = uStack_158;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1031802a4);
    (*pcVar4)();
  }
  uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar8 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
  *puVar2 = uVar9;
  puVar2[1] = uVar11;
  func_0x000100102924(auStack_150,*(long *)(lVar7 + 0x38) + uVar8 * 0x20);
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1031802a8);
    (*pcVar4)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  func_0x000100216788(&uStack_80,&uStack_160);
  uVar9 = uStack_160;
  uVar11 = uStack_158;
  func_0x000100029284();
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1031802ac);
    (*pcVar4)();
  }
  uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar9 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
  *puVar2 = uStack_160;
  puVar2[1] = uStack_158;
  func_0x000100102924(auStack_150,*(long *)(lVar7 + 0x38) + uVar9 * 0x20);
  func_0x000107c61574(lVar7);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(&uStack_110,4,uVar5);
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lRam0000000112f474f0 = lVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1031802b0);
  (*pcVar4)();
}



/* Entry: 1031802b0; end: 103180353;  */

void FUN_1031802b0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  lVar1 = 0;
  func_0x000103182028();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  lVar1 = 0;
  func_0x00010318203c();
  *(long *)(unaff_x22 + 0x28) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103180354;
                    /* WARNING: Could not recover jumptable at 0x000103180350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1031839f8();
  return;
}



/* Entry: 103180354; end: 1031803c3;  */

void FUN_103180354(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1031803c4;
  }
  else {
    *(undefined8 *)(lVar2 + 0x50) = param_2;
    pcVar1 = FUN_103180500;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1031803c4; end: 1031804ff;  */

code * FUN_1031803c4(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE_02;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *UNRECOVERED_JUMPTABLE_01;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long unaff_x22;
  long lVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  code *pcVar31;
  code *pcVar32;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  long lStack_330;
  long lStack_328;
  code *pcStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong *puStack_2f0;
  code *pcStack_2e8;
  long lStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  code *pcStack_298;
  long lStack_290;
  long lStack_288;
  ulong uStack_280;
  code *pcStack_278;
  long lStack_270;
  code *pcStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  undefined *puStack_240;
  code *pcStack_238;
  ulong *puStack_230;
  code *pcStack_228;
  ulong uStack_220;
  code *pcStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  ulong uStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined *puStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_40;
  long *plStack_38;
  
  if ((*(uint *)(unaff_x22 + 0x48) & 1) == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar6 = *(undefined8 **)(unaff_x22 + 0x10);
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar15 = 1;
LAB_103180490:
    func_0x000107c6159c(puVar6,uVar14,uVar15);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c615c0(uVar14);
    UNRECOVERED_JUMPTABLE_02 = *(code **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001031804bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return UNRECOVERED_JUMPTABLE_02;
  }
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar15 = 0x4004000000000000;
    uVar14 = param_1;
  }
  else {
    func_0x000107c4223c();
    uVar14 = param_1;
    func_0x000107c61170(lVar4);
    uVar15 = param_1;
  }
  *(undefined8 *)(unaff_x22 + 0x58) = uVar15;
  uVar5 = *(ulong *)(*(long *)(unaff_x22 + 0x18) + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar5 == 0) {
    uVar8 = 200;
  }
  else {
    uVar8 = uVar5;
    func_0x000107c49820();
    func_0x000107c61170();
    if ((long)uVar8 < 0x33) {
      uVar8 = 0x32;
    }
  }
  *(ulong *)(unaff_x22 + 0x60) = uVar8;
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar14;
  func_0x000107c5fd5c();
  if ((uVar5 & 1) != 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar6 = *(undefined8 **)(unaff_x22 + 0x10);
    uVar15 = 2;
    goto LAB_103180490;
  }
  plVar7 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x103180554;
  lVar4 = *(long *)(unaff_x22 + 0x18);
  lVar23 = *(long *)(unaff_x22 + 0x20);
  uVar14 = 0;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(plVar7 + 0x26) = 0;
  plVar7[0xf] = lVar23;
  plVar7[0x10] = lVar4;
  lVar4 = 0;
  func_0x000103182014();
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar8 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x11] = uVar8;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x12] = uVar5;
  lVar4 = 0;
  func_0x000107c5eec8();
  plVar7[0x13] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x14] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x15] = uVar5;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar7[0x16] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x17] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar8 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x18] = uVar8;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x19] = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    UNRECOVERED_JUMPTABLE_02 = (code *)0x103180a4c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lStack_40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(plVar7[0x10] + 0x28);
  plVar7[0x1a] = lVar4;
  plVar9 = (long *)0xf0;
  plStack_38 = plVar7;
  func_0x000107c615b8();
  plVar7[0x1b] = (long)plVar9;
  *plVar9 = (long)plVar7;
  plVar9[1] = (long)FUN_103180acc;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_40) {
    plVar9[0x18] = lVar4;
    UNRECOVERED_JUMPTABLE_02 = FUN_103183bd0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_50 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
  pcStack_48 = FUN_103180acc;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *plVar7;
  plVar7 = (long *)*plVar7;
  *(long **)(lVar23 + 0xe0) = plVar9;
  *(long *)(lVar23 + 0xe8) = lVar4;
  uVar15 = uVar14;
  func_0x000107c615c0(*(undefined8 *)(lVar23 + 0xd8));
  if (lVar4 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE_02 = FUN_103180b80;
      goto LAB_107c615e0;
    }
  }
  else {
    *(undefined8 *)(lVar23 + 0x108) = uVar14;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE_02 = FUN_103180e7c;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_50 | 0x1000000000000000;
  pcStack_78 = FUN_103180b80;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = plVar7[0x1c];
  lStack_f0 = plVar7[0x1d];
  lVar23 = plVar7[0x18];
  puVar12 = (undefined *)plVar7[0x19];
  lStack_108 = plVar7[0x16];
  lStack_110 = plVar7[0x17];
  lVar16 = plVar7[0x14];
  lVar18 = plVar7[0x15];
  lVar29 = plVar7[0x13];
  lStack_f8 = plVar7[0x10];
  lStack_100 = plVar7[0x11];
  puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar10 = puVar22;
  func_0x000107c415e0(puVar22);
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c5edb4(lVar23,puVar11);
  func_0x000107c61170(puVar11);
  uStack_e8 = 0x5f76615f74616863;
  uStack_e0 = 0xe800000000000000;
  func_0x000107c5eec4(lVar18);
  func_0x000107c5eeac();
  (**(code **)(lVar16 + 8))(lVar18,lVar29);
  func_0x000107c5fb78(puVar11,uVar15);
  func_0x000107c6142c(uVar15);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  uVar14 = uStack_e0;
  func_0x000107c5ed9c(puVar12,uStack_e8,uStack_e0);
  func_0x000107c6142c(uVar14);
  UNRECOVERED_JUMPTABLE_02 = *(code **)(lStack_110 + 8);
  plVar7[0x1e] = (long)UNRECOVERED_JUMPTABLE_02;
  (*UNRECOVERED_JUMPTABLE_02)(lVar23,lStack_108);
  lVar18 = lStack_f0;
  FUN_1031815d8(lStack_100,puVar12,lVar4,plVar7 + 10);
  if (lVar18 == 0) {
    lVar18 = plVar7[0x11];
    plVar9 = (long *)plVar7[0x12];
    func_0x000107c61170(plVar7[0x1c]);
    func_0x000103182080(lVar18,plVar9,0x103182014);
    lVar18 = *plVar9;
    plVar7[0x22] = lVar18;
    puVar6 = (undefined8 *)0x50;
    func_0x000107c615b8();
    plVar7[0x23] = (long)puVar6;
    *puVar6 = plVar7;
    puVar6[1] = FUN_103180f58;
    plVar9 = (long *)0x0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
      puVar6[2] = lVar18;
      UNRECOVERED_JUMPTABLE_02 = FUN_10318187c;
      goto LAB_107c615e0;
    }
  }
  else {
    plVar7[0x20] = plVar7[0xb];
    plVar7[0x1f] = plVar7[10];
    func_0x000107c61170(plVar7[0x1c]);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar10 = puVar22;
    func_0x000107c5ed90();
    plVar20 = plVar7 + 0xe;
    *plVar20 = 0;
    puVar12 = puVar22;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar22);
    plVar9 = (long *)*plVar20;
    if (((ulong)puVar12 & 1) == 0) {
      plVar20 = plVar9;
      func_0x000107c61174(plVar9);
      func_0x000107c5ed30();
      func_0x000107c61170(plVar20);
      func_0x000107c61654();
      func_0x000107c614ac(plVar9);
    }
    else {
      func_0x000107c61174(plVar9);
      plVar9 = plVar20;
    }
    lVar18 = plVar7[0x1a];
    plVar7[2] = (long)plVar7;
    plVar7[3] = (long)FUN_10318146c;
    func_0x000107c61448(plVar7 + 2,0);
    FUN_103183860();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) goto LAB_107c61444;
  }
  func_0x000107c60e78();
  uStack_120 = (ulong)&uStack_80 | 0x1000000000000000;
  pcStack_118 = FUN_103180e7c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar7[0x21];
  plVar20 = (long *)plVar7[0xf];
  *plVar20 = plVar7[0x1c];
  plVar20[1] = lVar17;
  lVar17 = 0;
  puStack_140 = puVar12;
  plStack_138 = plVar9;
  lStack_130 = lVar18;
  plStack_128 = plVar7;
  func_0x00010318203c();
  func_0x000107c6159c(plVar20,lVar17,1);
  (**(code **)(*(long *)(lVar17 + -8) + 0x38))(plVar20,0,1,lVar17);
  lVar18 = plVar7[0x18];
  uVar8 = plVar7[0x15];
  uVar5 = plVar7[0x11];
  UNRECOVERED_JUMPTABLE_02 = (code *)plVar7[0x12];
  func_0x000107c615c0(plVar7[0x19]);
  func_0x000107c615c0(lVar18);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(UNRECOVERED_JUMPTABLE_02);
  func_0x000107c615c0(uVar5);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar7[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
                    /* WARNING: Could not recover jumptable at 0x000103180f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_160 = (ulong)&uStack_120 | 0x1000000000000000;
  pcStack_158 = FUN_103180f58;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar7;
  *(char *)(lStack_168 + 0x68) = (char)UNRECOVERED_JUMPTABLE_01;
  *(long **)(lStack_168 + 0x60) = plVar7;
  uVar13 = *(ulong *)(lStack_168 + 0x118);
  plVar9 = (long *)*plVar7;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    UNRECOVERED_JUMPTABLE_02 = FUN_103180fd4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_103180fd4;
  plStack_1a8 = *(long **)PTR____stack_chk_guard_11034bdc0;
  uStack_1a0 = uVar5;
  pcStack_198 = UNRECOVERED_JUMPTABLE_02;
  uStack_190 = uVar8;
  plStack_188 = plVar9;
  func_0x000107c5fd5c();
  if ((uVar13 & 1) == 0) {
    if ((char)plVar9[0xd] != '\x01') {
LAB_103181130:
      plVar7 = (long *)0x70;
      func_0x000107c615b8();
      plVar9[0x25] = (long)plVar7;
      UNRECOVERED_JUMPTABLE_01 = FUN_103181308;
      goto LAB_103181148;
    }
    iVar3 = (int)plVar9[0x22];
    func_0x000107c4a2f8();
    if (iVar3 == 0) goto LAB_103181130;
    lVar18 = plVar9[0x1c];
    lVar24 = plVar9[0x12];
    lVar17 = plVar9[0x26];
    lVar27 = plVar9[0xf];
    (*(code *)plVar9[0x1e])(plVar9[0x19],plVar9[0x16]);
    func_0x000107c61170(lVar18);
    lVar18 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    iVar3 = *(int *)(lVar18 + 0x30);
    func_0x000103182080(lVar24,lVar27,0x103182014);
    *(char *)(lVar27 + iVar3) = (char)lVar17;
    lVar18 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar27,lVar18,0);
    (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar27,0,1,lVar18);
    lVar18 = plVar9[0x18];
    uVar8 = plVar9[0x15];
    uVar5 = plVar9[0x11];
    UNRECOVERED_JUMPTABLE_02 = (code *)plVar9[0x12];
    func_0x000107c615c0(plVar9[0x19]);
    func_0x000107c615c0(lVar18);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(UNRECOVERED_JUMPTABLE_02);
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar9[1];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010318112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  else {
    plVar7 = (long *)0x70;
    func_0x000107c615b8();
    plVar9[0x24] = (long)plVar7;
    UNRECOVERED_JUMPTABLE_01 = FUN_103181190;
LAB_103181148:
    uVar2 = uStack_190;
    pcVar30 = pcStack_198;
    uVar13 = uStack_1a0;
    *plVar7 = (long)plVar9;
    plVar7[1] = (long)UNRECOVERED_JUMPTABLE_01;
    lVar18 = plVar9[0x10];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_1a8) {
      uStack_180 = uStack_180 & 0xefffffffffffffff | 0x1000000000000000;
      uStack_190 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      plVar7[0xb] = plVar9[0x12];
      plVar7[0xc] = lVar18;
      plStack_188 = plVar7;
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_190) {
        UNRECOVERED_JUMPTABLE_02 = FUN_103181ba4;
      }
      else {
        func_0x000107c60e78();
        uStack_1a0 = (ulong)&uStack_180 | 0x1000000000000000;
        pcStack_1b8 = pcVar30;
        uStack_1b0 = uVar2;
        pcStack_198 = FUN_103181ba4;
        uStack_1c0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = (undefined8 *)plVar7[0xb];
        lVar4 = plVar7[0xc];
        uVar14 = *puVar6;
        plStack_1a8 = plVar7;
        func_0x000107c53fcc(uVar14);
        func_0x000107c5bdf4(uVar14);
        lVar23 = 0;
        func_0x000103182014();
        plVar7[0xd] = lVar23;
        plVar9 = *(long **)((long)puVar6 + (long)*(int *)(lVar23 + 0x18));
        uVar14 = *(undefined8 *)(lVar4 + 0x28);
        plVar7[2] = (long)plVar7;
        plVar7[3] = (long)FUN_103181c58;
        func_0x000107c61448(plVar7 + 2,0);
        FUN_103183860();
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_1c0) {
LAB_107c61444:
          UNRECOVERED_JUMPTABLE_02 = (code *)(plVar7 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE_02);
          return UNRECOVERED_JUMPTABLE_02;
        }
        func_0x000107c60e78();
        uStack_1d0 = (ulong)&uStack_1a0 | 0x1000000000000000;
        pcStack_1c8 = FUN_103181c58;
        uStack_1e0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        pcStack_1d8 = (code *)*plVar7;
        lVar4 = *plVar7;
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_1e0) {
          func_0x000107c60e78();
          uStack_1f0 = (ulong)&uStack_1d0 | 0x1000000000000000;
          uStack_210 = uVar13;
          pcStack_1e8 = FUN_103181cc4;
          pcStack_218 = *(code **)PTR____stack_chk_guard_11034bdc0;
          lVar23 = *(long *)(lVar4 + 0x68);
          puVar12 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          puStack_208 = puVar6;
          uStack_200 = uVar14;
          pcStack_1f8 = (code *)lVar4;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar22 = puVar12;
          func_0x000107c5ed90((long)*(int *)(lVar23 + 0x14));
          *(undefined8 *)(lVar4 + 0x50) = 0;
          puVar10 = puVar12;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar22);
          func_0x000107c61170(puVar12);
          puVar22 = *(undefined **)(lVar4 + 0x50);
          if ((int)puVar10 == 0) {
            puVar12 = puVar22;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(puVar12);
            func_0x000107c61654();
            func_0x000107c614ac(puVar22);
          }
          else {
            func_0x000107c61174(puVar22);
          }
          UNRECOVERED_JUMPTABLE_02 = *(code **)(lVar4 + 8);
          if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_218) {
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_02)();
            return UNRECOVERED_JUMPTABLE_02;
          }
          func_0x000107c60e78();
          pcStack_228 = FUN_103181dcc;
          lVar4 = *plVar9;
          *(long *)UNRECOVERED_JUMPTABLE_02 = lVar4;
          puStack_240 = puVar22;
          pcStack_238 = (code *)puVar12;
          puStack_230 = &uStack_1f0;
          func_0x000107c6157c(lVar4);
          return (code *)(lVar4 + 0x10);
        }
        UNRECOVERED_JUMPTABLE_02 = FUN_103181cc4;
      }
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_1c0 = (ulong)&uStack_180 | 0x1000000000000000;
  pcStack_1b8 = FUN_103181190;
  uStack_1d0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1c8 = (code *)*plVar9;
  plVar9 = (long *)*plVar9;
  func_0x000107c615c0(*(undefined8 *)(pcStack_1c8 + 0x120));
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_1d0) {
    UNRECOVERED_JUMPTABLE_02 = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    uStack_1e0 = (ulong)&uStack_1c0 | 0x1000000000000000;
    pcStack_1d8 = FUN_103181204;
    uStack_210 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar9[0x1e];
    lVar17 = plVar9[0x19];
    lVar18 = plVar9[0x16];
    lVar24 = plVar9[0x12];
    lVar27 = plVar9[0xf];
    puStack_208 = (undefined8 *)lVar29;
    uStack_200 = uVar5;
    pcStack_1f8 = UNRECOVERED_JUMPTABLE_02;
    uStack_1f0 = uVar8;
    pcStack_1e8 = (code *)plVar9;
    func_0x000107c61170(plVar9[0x1c]);
    (*UNRECOVERED_JUMPTABLE_01)(lVar17,lVar18);
    func_0x0001031820c4(lVar24,0x103182014);
    lVar18 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar27,lVar18,2);
    (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar27,0,1,lVar18);
    lVar18 = plVar9[0x18];
    lVar24 = plVar9[0x15];
    lVar29 = plVar9[0x11];
    lVar17 = plVar9[0x12];
    func_0x000107c615c0(plVar9[0x19]);
    func_0x000107c615c0(lVar18);
    func_0x000107c615c0(lVar24);
    func_0x000107c615c0(lVar17);
    func_0x000107c615c0(lVar29);
    UNRECOVERED_JUMPTABLE_02 = (code *)plVar9[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_210) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_02)();
      return UNRECOVERED_JUMPTABLE_02;
    }
    func_0x000107c60e78();
    uStack_220 = (ulong)&uStack_1e0 | 0x1000000000000000;
    pcStack_218 = FUN_103181308;
    puStack_230 = *(ulong **)PTR____stack_chk_guard_11034bdc0;
    pcStack_228 = (code *)*plVar9;
    plVar9 = (long *)*plVar9;
    func_0x000107c615c0(*(undefined8 *)((long)pcStack_228 + 0x128));
    if ((ulong *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_230) {
      UNRECOVERED_JUMPTABLE_02 = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      puStack_240 = (undefined *)((ulong)&uStack_220 | 0x1000000000000000);
      pcStack_238 = FUN_10318137c;
      lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar30 = (code *)plVar9[0x1e];
      lVar27 = plVar9[0x19];
      lVar18 = plVar9[0x16];
      lVar25 = plVar9[0x12];
      lVar28 = plVar9[0xf];
      pcStack_268 = UNRECOVERED_JUMPTABLE_01;
      lStack_260 = lVar29;
      lStack_258 = lVar17;
      lStack_250 = lVar24;
      plStack_248 = plVar9;
      func_0x000107c61170(plVar9[0x1c]);
      (*pcVar30)(lVar27,lVar18);
      func_0x0001031820c4(lVar25,0x103182014);
      lVar18 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar28,1,1,lVar18);
      lVar18 = plVar9[0x18];
      lVar24 = plVar9[0x15];
      lVar29 = plVar9[0x11];
      lVar17 = plVar9[0x12];
      func_0x000107c615c0(plVar9[0x19]);
      func_0x000107c615c0(lVar18);
      func_0x000107c615c0(lVar24);
      func_0x000107c615c0(lVar17);
      func_0x000107c615c0(lVar29);
      UNRECOVERED_JUMPTABLE_02 = (code *)plVar9[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_02)();
        return UNRECOVERED_JUMPTABLE_02;
      }
      func_0x000107c60e78();
      uStack_280 = (ulong)&puStack_240 | 0x1000000000000000;
      pcStack_278 = FUN_10318146c;
      lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_288 = *plVar9;
      lVar18 = *plVar9;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_290) {
        func_0x000107c60e78();
        uStack_2a0 = (ulong)&uStack_280 | 0x1000000000000000;
        pcStack_298 = FUN_1031814d8;
        lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar14 = *(undefined8 *)(lVar18 + 0xf8);
        uVar1 = *(undefined8 *)(lVar18 + 0x100);
        pcVar31 = *(code **)(lVar18 + 0xf0);
        uVar21 = *(undefined8 *)(lVar18 + 200);
        uVar19 = *(undefined8 *)(lVar18 + 0xb0);
        puVar26 = *(undefined8 **)(lVar18 + 0x78);
        uStack_2d0 = uVar15;
        pcStack_2c8 = pcVar30;
        lStack_2c0 = lVar29;
        lStack_2b8 = lVar17;
        lStack_2b0 = lVar24;
        lStack_2a8 = lVar18;
        func_0x000107c61170(*(undefined8 *)(lVar18 + 0xe0));
        (*pcVar31)(uVar21,uVar19);
        *puVar26 = uVar14;
        puVar26[1] = uVar1;
        lVar29 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar26,lVar29,1);
        pcVar30 = (code *)0x0;
        puVar6 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar29 + -8) + 0x38))(puVar26,0,1,lVar29);
        uVar15 = *(undefined8 *)(lVar18 + 0xc0);
        uVar19 = *(undefined8 *)(lVar18 + 0xa8);
        uVar1 = *(undefined8 *)(lVar18 + 0x88);
        UNRECOVERED_JUMPTABLE_02 = *(code **)(lVar18 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar18 + 200));
        func_0x000107c615c0(uVar15);
        func_0x000107c615c0(uVar19);
        func_0x000107c615c0(UNRECOVERED_JUMPTABLE_02);
        func_0x000107c615c0(uVar1);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar18 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return UNRECOVERED_JUMPTABLE_01;
        }
        func_0x000107c60e78();
        pcStack_2e8 = FUN_1031815d8;
        lVar29 = 0;
        lStack_340 = lVar4;
        lStack_330 = lVar16;
        lStack_328 = lVar23;
        pcStack_320 = pcVar31;
        uStack_318 = uVar14;
        uStack_310 = uVar1;
        lStack_308 = lVar18;
        uStack_300 = uVar15;
        uStack_2f8 = uVar19;
        puStack_2f0 = &uStack_2a0;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
        pcVar31 = (code *)((long)&uStack_350 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        pcVar32 = *(code **)(extraout_x12 + 0x10);
        (*pcVar32)(pcVar31,UNRECOVERED_JUMPTABLE_01,lVar29);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar14 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar14);
        func_0x0001010416fc(pcVar31,uVar14);
        if (UNRECOVERED_JUMPTABLE_02 == (code *)0x0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          UNRECOVERED_JUMPTABLE_02 = pcVar31;
          func_0x000107c4ee28();
          func_0x000107c61170(pcVar31);
          if (((ulong)UNRECOVERED_JUMPTABLE_02 & 1) == 0) {
            uStack_348 = 7;
            uStack_350 = 0;
            uVar14 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar14 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar14);
            }
            func_0x000107c61170(pcVar31);
            uVar14 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            UNRECOVERED_JUMPTABLE_02 = pcVar31;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)UNRECOVERED_JUMPTABLE_02 != 0) {
              lVar4 = 0;
              func_0x000103182014();
              (*pcVar32)((long)extraout_x8 + (long)*(int *)(lVar4 + 0x14),UNRECOVERED_JUMPTABLE_01,
                         lVar29);
              *extraout_x8 = (ulong)pcVar31;
              *(code **)((long)extraout_x8 + (long)*(int *)(lVar4 + 0x18)) = pcVar30;
              func_0x000107c61174(pcVar30);
              return pcVar30;
            }
            uStack_348 = 8;
            uStack_350 = 0;
            uVar14 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar14 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar14);
            }
            func_0x000107c61170(pcVar31);
            uVar14 = 8;
          }
        }
        else {
          uStack_348 = 6;
          uStack_350 = 0;
          uVar14 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar14 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar14);
          }
          func_0x000107c614ac(UNRECOVERED_JUMPTABLE_02);
          uVar14 = 6;
          pcVar31 = UNRECOVERED_JUMPTABLE_02;
        }
        *puVar6 = 0;
        puVar6[1] = uVar14;
        return pcVar31;
      }
      UNRECOVERED_JUMPTABLE_02 = FUN_1031814d8;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_02,0,0);
  return UNRECOVERED_JUMPTABLE_02;
}



/* Entry: 103180500; end: 10318059b;  */

void FUN_103180500(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x50);
  *puVar1 = uVar3;
  func_0x000107c6159c(puVar1,uVar2,1);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103180550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318059c; end: 1031806a3;  */

void FUN_10318059c(void)

{
  undefined1 auVar1 [16];
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  pcVar3 = *(code **)(*(long *)(unaff_x22 + 0x30) + 0x30);
  *(code **)(unaff_x22 + 0x78) = pcVar3;
  uVar5 = uVar6;
  (*pcVar3)(uVar6,1,*(undefined8 *)(unaff_x22 + 0x28));
  if ((int)uVar5 != 1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000103182080(uVar6,uVar5,0x10318203c);
    func_0x000103182080(uVar5,uVar8,0x10318203c);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010318069c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(ulong *)(unaff_x22 + 0x60);
  func_0x0001031820c4(uVar6,0x103182028);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  if (SUB168(auVar1 * ZEXT816(1000000),8) == 0) {
    lVar7 = uVar4 * 1000000;
    *(long *)(unaff_x22 + 0x80) = lVar7;
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1031806a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(lVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1031806a4);
  (*pcVar3)();
}



/* Entry: 1031806a4; end: 10318074b;  */

void FUN_1031806a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
  if (unaff_x20 == 0) {
    uVar1 = 0x103183854;
  }
  else {
    func_0x000107c614ac();
    uVar1 = 0x103183858;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10318074c; end: 10318082b;  */

void FUN_10318074c(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = uVar3;
  (**(code **)(unaff_x22 + 0x78))(uVar3,1,*(undefined8 *)(unaff_x22 + 0x28));
  if ((int)uVar2 == 1) {
    func_0x0001031820c4(uVar3,0x103182028);
    plVar1 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10318082c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (*(undefined8 *)(unaff_x22 + 0x80));
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000103182080(uVar3,uVar2,0x10318203c);
  func_0x000103182080(uVar2,uVar4,0x10318203c);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103180828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318082c; end: 10318088b;  */

void FUN_10318082c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10318088c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x10318385c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10318088c; end: 10318095b;  */

code * FUN_10318088c(double param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE_02;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *UNRECOVERED_JUMPTABLE_01;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long unaff_x22;
  long lVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  code *pcVar31;
  code *pcVar32;
  ulong unaff_x29;
  double dVar33;
  double dVar34;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  long lStack_330;
  long lStack_328;
  code *pcStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong *puStack_2f0;
  code *pcStack_2e8;
  long lStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  code *pcStack_298;
  long lStack_290;
  long lStack_288;
  ulong uStack_280;
  code *pcStack_278;
  long lStack_270;
  code *pcStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  undefined *puStack_240;
  code *pcStack_238;
  ulong *puStack_230;
  code *pcStack_228;
  ulong uStack_220;
  code *pcStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  ulong uStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined *puStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_40;
  long *plStack_38;
  ulong uStack_30;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  func_0x000107c5fd5c();
  if ((param_2 & 1) != 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x10);
    uVar15 = 2;
LAB_1031808ec:
    func_0x000107c6159c(puVar4,uVar14,uVar15);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c615c0(uVar14);
    UNRECOVERED_JUMPTABLE_02 = *(code **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x000103180918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return UNRECOVERED_JUMPTABLE_02;
  }
  dVar33 = *(double *)(unaff_x22 + 0x68);
  dVar34 = *(double *)(unaff_x22 + 0x58);
  func_0x000107c6071c();
  if (dVar34 < param_1 - dVar33) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x10);
    puVar4[1] = 0xe;
    *puVar4 = 0;
    uVar15 = 1;
    goto LAB_1031808ec;
  }
  plVar5 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103180704;
  lVar6 = *(long *)(unaff_x22 + 0x18);
  lVar23 = *(long *)(unaff_x22 + 0x20);
  uVar14 = 1;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(plVar5 + 0x26) = 1;
  plVar5[0xf] = lVar23;
  plVar5[0x10] = lVar6;
  lVar6 = 0;
  func_0x000103182014();
  uVar8 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x11] = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar8;
  lVar6 = 0;
  func_0x000107c5eec8();
  plVar5[0x13] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x14] = lVar6;
  uVar8 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x15] = uVar8;
  lVar6 = 0;
  func_0x000107c5ede0();
  plVar5[0x16] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x17] = lVar6;
  uVar8 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x18] = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x19] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    UNRECOVERED_JUMPTABLE_02 = (code *)0x103180a4c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  lStack_40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(plVar5[0x10] + 0x28);
  plVar5[0x1a] = lVar6;
  plVar9 = (long *)0xf0;
  plStack_38 = plVar5;
  func_0x000107c615b8();
  plVar5[0x1b] = (long)plVar9;
  *plVar9 = (long)plVar5;
  plVar9[1] = (long)FUN_103180acc;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_40) {
    plVar9[0x18] = lVar6;
    UNRECOVERED_JUMPTABLE_02 = FUN_103183bd0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_50 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_48 = FUN_103180acc;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *plVar5;
  plVar5 = (long *)*plVar5;
  *(long **)(lVar23 + 0xe0) = plVar9;
  *(long *)(lVar23 + 0xe8) = lVar6;
  uVar15 = uVar14;
  func_0x000107c615c0(*(undefined8 *)(lVar23 + 0xd8));
  if (lVar6 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE_02 = FUN_103180b80;
      goto LAB_107c615e0;
    }
  }
  else {
    *(undefined8 *)(lVar23 + 0x108) = uVar14;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE_02 = FUN_103180e7c;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_50 | 0x1000000000000000;
  pcStack_78 = FUN_103180b80;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = plVar5[0x1c];
  lStack_f0 = plVar5[0x1d];
  lVar23 = plVar5[0x18];
  puVar12 = (undefined *)plVar5[0x19];
  lStack_108 = plVar5[0x16];
  lStack_110 = plVar5[0x17];
  lVar16 = plVar5[0x14];
  lVar18 = plVar5[0x15];
  lVar29 = plVar5[0x13];
  lStack_f8 = plVar5[0x10];
  lStack_100 = plVar5[0x11];
  puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar10 = puVar22;
  func_0x000107c415e0(puVar22);
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c5edb4(lVar23,puVar11);
  func_0x000107c61170(puVar11);
  uStack_e8 = 0x5f76615f74616863;
  uStack_e0 = 0xe800000000000000;
  func_0x000107c5eec4(lVar18);
  func_0x000107c5eeac();
  (**(code **)(lVar16 + 8))(lVar18,lVar29);
  func_0x000107c5fb78(puVar11,uVar15);
  func_0x000107c6142c(uVar15);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  uVar14 = uStack_e0;
  func_0x000107c5ed9c(puVar12,uStack_e8,uStack_e0);
  func_0x000107c6142c(uVar14);
  UNRECOVERED_JUMPTABLE_02 = *(code **)(lStack_110 + 8);
  plVar5[0x1e] = (long)UNRECOVERED_JUMPTABLE_02;
  (*UNRECOVERED_JUMPTABLE_02)(lVar23,lStack_108);
  lVar18 = lStack_f0;
  FUN_1031815d8(lStack_100,puVar12,lVar6,plVar5 + 10);
  if (lVar18 == 0) {
    lVar18 = plVar5[0x11];
    plVar9 = (long *)plVar5[0x12];
    func_0x000107c61170(plVar5[0x1c]);
    func_0x000103182080(lVar18,plVar9,0x103182014);
    lVar18 = *plVar9;
    plVar5[0x22] = lVar18;
    puVar4 = (undefined8 *)0x50;
    func_0x000107c615b8();
    plVar5[0x23] = (long)puVar4;
    *puVar4 = plVar5;
    puVar4[1] = FUN_103180f58;
    plVar9 = (long *)0x0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
      puVar4[2] = lVar18;
      UNRECOVERED_JUMPTABLE_02 = FUN_10318187c;
      goto LAB_107c615e0;
    }
  }
  else {
    plVar5[0x20] = plVar5[0xb];
    plVar5[0x1f] = plVar5[10];
    func_0x000107c61170(plVar5[0x1c]);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar10 = puVar22;
    func_0x000107c5ed90();
    plVar20 = plVar5 + 0xe;
    *plVar20 = 0;
    puVar12 = puVar22;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar22);
    plVar9 = (long *)*plVar20;
    if (((ulong)puVar12 & 1) == 0) {
      plVar20 = plVar9;
      func_0x000107c61174(plVar9);
      func_0x000107c5ed30();
      func_0x000107c61170(plVar20);
      func_0x000107c61654();
      func_0x000107c614ac(plVar9);
    }
    else {
      func_0x000107c61174(plVar9);
      plVar9 = plVar20;
    }
    lVar18 = plVar5[0x1a];
    plVar5[2] = (long)plVar5;
    plVar5[3] = (long)FUN_10318146c;
    func_0x000107c61448(plVar5 + 2,0);
    FUN_103183860();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) goto LAB_107c61444;
  }
  func_0x000107c60e78();
  uStack_120 = (ulong)&uStack_80 | 0x1000000000000000;
  pcStack_118 = FUN_103180e7c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar5[0x21];
  plVar20 = (long *)plVar5[0xf];
  *plVar20 = plVar5[0x1c];
  plVar20[1] = lVar17;
  lVar17 = 0;
  puStack_140 = puVar12;
  plStack_138 = plVar9;
  lStack_130 = lVar18;
  plStack_128 = plVar5;
  func_0x00010318203c();
  func_0x000107c6159c(plVar20,lVar17,1);
  (**(code **)(*(long *)(lVar17 + -8) + 0x38))(plVar20,0,1,lVar17);
  lVar18 = plVar5[0x18];
  uVar7 = plVar5[0x15];
  uVar8 = plVar5[0x11];
  UNRECOVERED_JUMPTABLE_02 = (code *)plVar5[0x12];
  func_0x000107c615c0(plVar5[0x19]);
  func_0x000107c615c0(lVar18);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(UNRECOVERED_JUMPTABLE_02);
  func_0x000107c615c0(uVar8);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar5[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
                    /* WARNING: Could not recover jumptable at 0x000103180f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_160 = (ulong)&uStack_120 | 0x1000000000000000;
  pcStack_158 = FUN_103180f58;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar5;
  *(char *)(lStack_168 + 0x68) = (char)UNRECOVERED_JUMPTABLE_01;
  *(long **)(lStack_168 + 0x60) = plVar5;
  uVar13 = *(ulong *)(lStack_168 + 0x118);
  plVar9 = (long *)*plVar5;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    UNRECOVERED_JUMPTABLE_02 = FUN_103180fd4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_103180fd4;
  plStack_1a8 = *(long **)PTR____stack_chk_guard_11034bdc0;
  uStack_1a0 = uVar8;
  pcStack_198 = UNRECOVERED_JUMPTABLE_02;
  uStack_190 = uVar7;
  plStack_188 = plVar9;
  func_0x000107c5fd5c();
  if ((uVar13 & 1) == 0) {
    if ((char)plVar9[0xd] != '\x01') {
LAB_103181130:
      plVar5 = (long *)0x70;
      func_0x000107c615b8();
      plVar9[0x25] = (long)plVar5;
      UNRECOVERED_JUMPTABLE_01 = FUN_103181308;
      goto LAB_103181148;
    }
    iVar3 = (int)plVar9[0x22];
    func_0x000107c4a2f8();
    if (iVar3 == 0) goto LAB_103181130;
    lVar18 = plVar9[0x1c];
    lVar24 = plVar9[0x12];
    lVar17 = plVar9[0x26];
    lVar27 = plVar9[0xf];
    (*(code *)plVar9[0x1e])(plVar9[0x19],plVar9[0x16]);
    func_0x000107c61170(lVar18);
    lVar18 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    iVar3 = *(int *)(lVar18 + 0x30);
    func_0x000103182080(lVar24,lVar27,0x103182014);
    *(char *)(lVar27 + iVar3) = (char)lVar17;
    lVar18 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar27,lVar18,0);
    (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar27,0,1,lVar18);
    lVar18 = plVar9[0x18];
    uVar7 = plVar9[0x15];
    uVar8 = plVar9[0x11];
    UNRECOVERED_JUMPTABLE_02 = (code *)plVar9[0x12];
    func_0x000107c615c0(plVar9[0x19]);
    func_0x000107c615c0(lVar18);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(UNRECOVERED_JUMPTABLE_02);
    func_0x000107c615c0(uVar8);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar9[1];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010318112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  else {
    plVar5 = (long *)0x70;
    func_0x000107c615b8();
    plVar9[0x24] = (long)plVar5;
    UNRECOVERED_JUMPTABLE_01 = FUN_103181190;
LAB_103181148:
    uVar2 = uStack_190;
    pcVar30 = pcStack_198;
    uVar13 = uStack_1a0;
    *plVar5 = (long)plVar9;
    plVar5[1] = (long)UNRECOVERED_JUMPTABLE_01;
    lVar18 = plVar9[0x10];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_1a8) {
      uStack_180 = uStack_180 & 0xefffffffffffffff | 0x1000000000000000;
      uStack_190 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      plVar5[0xb] = plVar9[0x12];
      plVar5[0xc] = lVar18;
      plStack_188 = plVar5;
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_190) {
        UNRECOVERED_JUMPTABLE_02 = FUN_103181ba4;
      }
      else {
        func_0x000107c60e78();
        uStack_1a0 = (ulong)&uStack_180 | 0x1000000000000000;
        pcStack_1b8 = pcVar30;
        uStack_1b0 = uVar2;
        pcStack_198 = FUN_103181ba4;
        uStack_1c0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        puVar4 = (undefined8 *)plVar5[0xb];
        lVar6 = plVar5[0xc];
        uVar14 = *puVar4;
        plStack_1a8 = plVar5;
        func_0x000107c53fcc(uVar14);
        func_0x000107c5bdf4(uVar14);
        lVar23 = 0;
        func_0x000103182014();
        plVar5[0xd] = lVar23;
        plVar9 = *(long **)((long)puVar4 + (long)*(int *)(lVar23 + 0x18));
        uVar14 = *(undefined8 *)(lVar6 + 0x28);
        plVar5[2] = (long)plVar5;
        plVar5[3] = (long)FUN_103181c58;
        func_0x000107c61448(plVar5 + 2,0);
        FUN_103183860();
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_1c0) {
LAB_107c61444:
          UNRECOVERED_JUMPTABLE_02 = (code *)(plVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE_02);
          return UNRECOVERED_JUMPTABLE_02;
        }
        func_0x000107c60e78();
        uStack_1d0 = (ulong)&uStack_1a0 | 0x1000000000000000;
        pcStack_1c8 = FUN_103181c58;
        uStack_1e0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        pcStack_1d8 = (code *)*plVar5;
        lVar6 = *plVar5;
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_1e0) {
          func_0x000107c60e78();
          uStack_1f0 = (ulong)&uStack_1d0 | 0x1000000000000000;
          uStack_210 = uVar13;
          pcStack_1e8 = FUN_103181cc4;
          pcStack_218 = *(code **)PTR____stack_chk_guard_11034bdc0;
          lVar23 = *(long *)(lVar6 + 0x68);
          puVar12 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          puStack_208 = puVar4;
          uStack_200 = uVar14;
          pcStack_1f8 = (code *)lVar6;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar22 = puVar12;
          func_0x000107c5ed90((long)*(int *)(lVar23 + 0x14));
          *(undefined8 *)(lVar6 + 0x50) = 0;
          puVar10 = puVar12;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar22);
          func_0x000107c61170(puVar12);
          puVar22 = *(undefined **)(lVar6 + 0x50);
          if ((int)puVar10 == 0) {
            puVar12 = puVar22;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(puVar12);
            func_0x000107c61654();
            func_0x000107c614ac(puVar22);
          }
          else {
            func_0x000107c61174(puVar22);
          }
          UNRECOVERED_JUMPTABLE_02 = *(code **)(lVar6 + 8);
          if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 != pcStack_218) {
            func_0x000107c60e78();
            pcStack_228 = FUN_103181dcc;
            lVar6 = *plVar9;
            *(long *)UNRECOVERED_JUMPTABLE_02 = lVar6;
            puStack_240 = puVar22;
            pcStack_238 = (code *)puVar12;
            puStack_230 = &uStack_1f0;
            func_0x000107c6157c(lVar6);
            return (code *)(lVar6 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_02)();
          return UNRECOVERED_JUMPTABLE_02;
        }
        UNRECOVERED_JUMPTABLE_02 = FUN_103181cc4;
      }
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_1c0 = (ulong)&uStack_180 | 0x1000000000000000;
  pcStack_1b8 = FUN_103181190;
  uStack_1d0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1c8 = (code *)*plVar9;
  plVar9 = (long *)*plVar9;
  func_0x000107c615c0(*(undefined8 *)(pcStack_1c8 + 0x120));
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_1d0) {
    UNRECOVERED_JUMPTABLE_02 = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    uStack_1e0 = (ulong)&uStack_1c0 | 0x1000000000000000;
    pcStack_1d8 = FUN_103181204;
    uStack_210 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar9[0x1e];
    lVar17 = plVar9[0x19];
    lVar18 = plVar9[0x16];
    lVar24 = plVar9[0x12];
    lVar27 = plVar9[0xf];
    puStack_208 = (undefined8 *)lVar29;
    uStack_200 = uVar8;
    pcStack_1f8 = UNRECOVERED_JUMPTABLE_02;
    uStack_1f0 = uVar7;
    pcStack_1e8 = (code *)plVar9;
    func_0x000107c61170(plVar9[0x1c]);
    (*UNRECOVERED_JUMPTABLE_01)(lVar17,lVar18);
    func_0x0001031820c4(lVar24,0x103182014);
    lVar18 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar27,lVar18,2);
    (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar27,0,1,lVar18);
    lVar18 = plVar9[0x18];
    lVar24 = plVar9[0x15];
    lVar29 = plVar9[0x11];
    lVar17 = plVar9[0x12];
    func_0x000107c615c0(plVar9[0x19]);
    func_0x000107c615c0(lVar18);
    func_0x000107c615c0(lVar24);
    func_0x000107c615c0(lVar17);
    func_0x000107c615c0(lVar29);
    UNRECOVERED_JUMPTABLE_02 = (code *)plVar9[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_210) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_02)();
      return UNRECOVERED_JUMPTABLE_02;
    }
    func_0x000107c60e78();
    uStack_220 = (ulong)&uStack_1e0 | 0x1000000000000000;
    pcStack_218 = FUN_103181308;
    puStack_230 = *(ulong **)PTR____stack_chk_guard_11034bdc0;
    pcStack_228 = (code *)*plVar9;
    plVar9 = (long *)*plVar9;
    func_0x000107c615c0(*(undefined8 *)((long)pcStack_228 + 0x128));
    if ((ulong *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_230) {
      UNRECOVERED_JUMPTABLE_02 = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      puStack_240 = (undefined *)((ulong)&uStack_220 | 0x1000000000000000);
      pcStack_238 = FUN_10318137c;
      lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar30 = (code *)plVar9[0x1e];
      lVar27 = plVar9[0x19];
      lVar18 = plVar9[0x16];
      lVar25 = plVar9[0x12];
      lVar28 = plVar9[0xf];
      pcStack_268 = UNRECOVERED_JUMPTABLE_01;
      lStack_260 = lVar29;
      lStack_258 = lVar17;
      lStack_250 = lVar24;
      plStack_248 = plVar9;
      func_0x000107c61170(plVar9[0x1c]);
      (*pcVar30)(lVar27,lVar18);
      func_0x0001031820c4(lVar25,0x103182014);
      lVar18 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar28,1,1,lVar18);
      lVar18 = plVar9[0x18];
      lVar24 = plVar9[0x15];
      lVar29 = plVar9[0x11];
      lVar17 = plVar9[0x12];
      func_0x000107c615c0(plVar9[0x19]);
      func_0x000107c615c0(lVar18);
      func_0x000107c615c0(lVar24);
      func_0x000107c615c0(lVar17);
      func_0x000107c615c0(lVar29);
      UNRECOVERED_JUMPTABLE_02 = (code *)plVar9[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_02)();
        return UNRECOVERED_JUMPTABLE_02;
      }
      func_0x000107c60e78();
      uStack_280 = (ulong)&puStack_240 | 0x1000000000000000;
      pcStack_278 = FUN_10318146c;
      lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_288 = *plVar9;
      lVar18 = *plVar9;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_290) {
        func_0x000107c60e78();
        uStack_2a0 = (ulong)&uStack_280 | 0x1000000000000000;
        pcStack_298 = FUN_1031814d8;
        lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar14 = *(undefined8 *)(lVar18 + 0xf8);
        uVar1 = *(undefined8 *)(lVar18 + 0x100);
        pcVar31 = *(code **)(lVar18 + 0xf0);
        uVar21 = *(undefined8 *)(lVar18 + 200);
        uVar19 = *(undefined8 *)(lVar18 + 0xb0);
        puVar26 = *(undefined8 **)(lVar18 + 0x78);
        uStack_2d0 = uVar15;
        pcStack_2c8 = pcVar30;
        lStack_2c0 = lVar29;
        lStack_2b8 = lVar17;
        lStack_2b0 = lVar24;
        lStack_2a8 = lVar18;
        func_0x000107c61170(*(undefined8 *)(lVar18 + 0xe0));
        (*pcVar31)(uVar21,uVar19);
        *puVar26 = uVar14;
        puVar26[1] = uVar1;
        lVar29 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar26,lVar29,1);
        pcVar30 = (code *)0x0;
        puVar4 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar29 + -8) + 0x38))(puVar26,0,1,lVar29);
        uVar15 = *(undefined8 *)(lVar18 + 0xc0);
        uVar19 = *(undefined8 *)(lVar18 + 0xa8);
        uVar1 = *(undefined8 *)(lVar18 + 0x88);
        UNRECOVERED_JUMPTABLE_02 = *(code **)(lVar18 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar18 + 200));
        func_0x000107c615c0(uVar15);
        func_0x000107c615c0(uVar19);
        func_0x000107c615c0(UNRECOVERED_JUMPTABLE_02);
        func_0x000107c615c0(uVar1);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar18 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return UNRECOVERED_JUMPTABLE_01;
        }
        func_0x000107c60e78();
        pcStack_2e8 = FUN_1031815d8;
        lVar29 = 0;
        lStack_340 = lVar6;
        lStack_330 = lVar16;
        lStack_328 = lVar23;
        pcStack_320 = pcVar31;
        uStack_318 = uVar14;
        uStack_310 = uVar1;
        lStack_308 = lVar18;
        uStack_300 = uVar15;
        uStack_2f8 = uVar19;
        puStack_2f0 = &uStack_2a0;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
        pcVar31 = (code *)((long)&uStack_350 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        pcVar32 = *(code **)(extraout_x12 + 0x10);
        (*pcVar32)(pcVar31,UNRECOVERED_JUMPTABLE_01,lVar29);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar14 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar14);
        func_0x0001010416fc(pcVar31,uVar14);
        if (UNRECOVERED_JUMPTABLE_02 == (code *)0x0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          UNRECOVERED_JUMPTABLE_02 = pcVar31;
          func_0x000107c4ee28();
          func_0x000107c61170(pcVar31);
          if (((ulong)UNRECOVERED_JUMPTABLE_02 & 1) == 0) {
            uStack_348 = 7;
            uStack_350 = 0;
            uVar14 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar14 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar14);
            }
            func_0x000107c61170(pcVar31);
            uVar14 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            UNRECOVERED_JUMPTABLE_02 = pcVar31;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)UNRECOVERED_JUMPTABLE_02 != 0) {
              lVar6 = 0;
              func_0x000103182014();
              (*pcVar32)((long)extraout_x8 + (long)*(int *)(lVar6 + 0x14),UNRECOVERED_JUMPTABLE_01,
                         lVar29);
              *extraout_x8 = (ulong)pcVar31;
              *(code **)((long)extraout_x8 + (long)*(int *)(lVar6 + 0x18)) = pcVar30;
              func_0x000107c61174(pcVar30);
              return pcVar30;
            }
            uStack_348 = 8;
            uStack_350 = 0;
            uVar14 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar14 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar14);
            }
            func_0x000107c61170(pcVar31);
            uVar14 = 8;
          }
        }
        else {
          uStack_348 = 6;
          uStack_350 = 0;
          uVar14 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar14 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar14);
          }
          func_0x000107c614ac(UNRECOVERED_JUMPTABLE_02);
          uVar14 = 6;
          pcVar31 = UNRECOVERED_JUMPTABLE_02;
        }
        *puVar4 = 0;
        puVar4[1] = uVar14;
        return pcVar31;
      }
      UNRECOVERED_JUMPTABLE_02 = FUN_1031814d8;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_02,0,0);
  return UNRECOVERED_JUMPTABLE_02;
}



/* Entry: 10318095c; end: 103180acb;  */

code * FUN_10318095c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *UNRECOVERED_JUMPTABLE_01;
  ulong uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long *unaff_x22;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  code *pcVar31;
  code *pcVar32;
  ulong unaff_x29;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  long lStack_330;
  long lStack_328;
  code *pcStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong *puStack_2f0;
  code *pcStack_2e8;
  long lStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  code *pcStack_298;
  long lStack_290;
  long lStack_288;
  ulong uStack_280;
  code *pcStack_278;
  long lStack_270;
  code *pcStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  undefined *puStack_240;
  code *pcStack_238;
  ulong *puStack_230;
  code *pcStack_228;
  ulong uStack_220;
  code *pcStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  ulong uStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined *puStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_40;
  ulong auStack_30 [3];
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  auStack_30[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  *(char *)(unaff_x22 + 0x26) = (char)param_2;
  unaff_x22[0xf] = param_1;
  unaff_x22[0x10] = unaff_x20;
  lVar6 = 0;
  func_0x000103182014();
  uVar8 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x11] = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x12] = uVar8;
  lVar6 = 0;
  func_0x000107c5eec8();
  unaff_x22[0x13] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  unaff_x22[0x14] = lVar6;
  uVar8 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x15] = uVar8;
  lVar6 = 0;
  func_0x000107c5ede0();
  unaff_x22[0x16] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  unaff_x22[0x17] = lVar6;
  uVar8 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x18] = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x19] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_30[2]) {
    UNRECOVERED_JUMPTABLE = (code *)0x103180a4c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  auStack_30[0] = (ulong)&uStack_10 | 0x1000000000000000;
  auStack_30[1] = 0x103180a4c;
  lStack_40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(unaff_x22[0x10] + 0x28);
  unaff_x22[0x1a] = lVar6;
  puVar9 = (undefined8 *)0xf0;
  func_0x000107c615b8();
  unaff_x22[0x1b] = (long)puVar9;
  *puVar9 = unaff_x22;
  puVar9[1] = FUN_103180acc;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_40) {
    puVar9[0x18] = lVar6;
    UNRECOVERED_JUMPTABLE = FUN_103183bd0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_50 = (ulong)auStack_30 | 0x1000000000000000;
  pcStack_48 = FUN_103180acc;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *unaff_x22;
  plVar26 = (long *)*unaff_x22;
  *(undefined8 **)(lVar22 + 0xe0) = puVar9;
  *(long *)(lVar22 + 0xe8) = lVar6;
  uVar20 = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar22 + 0xd8));
  if (lVar6 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE = FUN_103180b80;
      goto LAB_107c615e0;
    }
  }
  else {
    *(undefined8 *)(lVar22 + 0x108) = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE = FUN_103180e7c;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_50 | 0x1000000000000000;
  pcStack_78 = FUN_103180b80;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = plVar26[0x1c];
  lStack_f0 = plVar26[0x1d];
  lVar22 = plVar26[0x18];
  puVar12 = (undefined *)plVar26[0x19];
  lStack_108 = plVar26[0x16];
  lStack_110 = plVar26[0x17];
  lVar1 = plVar26[0x14];
  lVar15 = plVar26[0x15];
  lVar29 = plVar26[0x13];
  lStack_f8 = plVar26[0x10];
  lStack_100 = plVar26[0x11];
  puVar21 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar10 = puVar21;
  func_0x000107c415e0(puVar21);
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c5edb4(lVar22,puVar11);
  func_0x000107c61170(puVar11);
  uStack_e8 = 0x5f76615f74616863;
  uStack_e0 = 0xe800000000000000;
  func_0x000107c5eec4(lVar15);
  func_0x000107c5eeac();
  (**(code **)(lVar1 + 8))(lVar15,lVar29);
  func_0x000107c5fb78(puVar11,uVar20);
  func_0x000107c6142c(uVar20);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  uVar2 = uStack_e0;
  func_0x000107c5ed9c(puVar12,uStack_e8,uStack_e0);
  func_0x000107c6142c(uVar2);
  UNRECOVERED_JUMPTABLE = *(code **)(lStack_110 + 8);
  plVar26[0x1e] = (long)UNRECOVERED_JUMPTABLE;
  (*UNRECOVERED_JUMPTABLE)(lVar22,lStack_108);
  lVar15 = lStack_f0;
  FUN_1031815d8(lStack_100,puVar12,lVar6,plVar26 + 10);
  if (lVar15 == 0) {
    lVar15 = plVar26[0x11];
    plVar17 = (long *)plVar26[0x12];
    func_0x000107c61170(plVar26[0x1c]);
    func_0x000103182080(lVar15,plVar17,0x103182014);
    lVar15 = *plVar17;
    plVar26[0x22] = lVar15;
    puVar9 = (undefined8 *)0x50;
    func_0x000107c615b8();
    plVar26[0x23] = (long)puVar9;
    *puVar9 = plVar26;
    puVar9[1] = FUN_103180f58;
    plVar17 = (long *)0x0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
      puVar9[2] = lVar15;
      UNRECOVERED_JUMPTABLE = FUN_10318187c;
      goto LAB_107c615e0;
    }
  }
  else {
    plVar26[0x20] = plVar26[0xb];
    plVar26[0x1f] = plVar26[10];
    func_0x000107c61170(plVar26[0x1c]);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar10 = puVar21;
    func_0x000107c5ed90();
    plVar18 = plVar26 + 0xe;
    *plVar18 = 0;
    puVar12 = puVar21;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar21);
    plVar17 = (long *)*plVar18;
    if (((ulong)puVar12 & 1) == 0) {
      plVar18 = plVar17;
      func_0x000107c61174(plVar17);
      func_0x000107c5ed30();
      func_0x000107c61170(plVar18);
      func_0x000107c61654();
      func_0x000107c614ac(plVar17);
    }
    else {
      func_0x000107c61174(plVar17);
      plVar17 = plVar18;
    }
    lVar15 = plVar26[0x1a];
    plVar26[2] = (long)plVar26;
    plVar26[3] = (long)FUN_10318146c;
    func_0x000107c61448(plVar26 + 2,0);
    FUN_103183860();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) goto LAB_107c61444;
  }
  func_0x000107c60e78();
  uStack_120 = (ulong)&uStack_80 | 0x1000000000000000;
  pcStack_118 = FUN_103180e7c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = plVar26[0x21];
  plVar18 = (long *)plVar26[0xf];
  *plVar18 = plVar26[0x1c];
  plVar18[1] = lVar14;
  lVar14 = 0;
  puStack_140 = puVar12;
  plStack_138 = plVar17;
  lStack_130 = lVar15;
  plStack_128 = plVar26;
  func_0x00010318203c();
  func_0x000107c6159c(plVar18,lVar14,1);
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(plVar18,0,1,lVar14);
  lVar15 = plVar26[0x18];
  uVar7 = plVar26[0x15];
  uVar8 = plVar26[0x11];
  UNRECOVERED_JUMPTABLE = (code *)plVar26[0x12];
  func_0x000107c615c0(plVar26[0x19]);
  func_0x000107c615c0(lVar15);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
  func_0x000107c615c0(uVar8);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar26[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
                    /* WARNING: Could not recover jumptable at 0x000103180f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_160 = (ulong)&uStack_120 | 0x1000000000000000;
  pcStack_158 = FUN_103180f58;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar26;
  *(char *)(lStack_168 + 0x68) = (char)UNRECOVERED_JUMPTABLE_01;
  *(long **)(lStack_168 + 0x60) = plVar26;
  uVar13 = *(ulong *)(lStack_168 + 0x118);
  plVar17 = (long *)*plVar26;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    UNRECOVERED_JUMPTABLE = FUN_103180fd4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_103180fd4;
  plStack_1a8 = *(long **)PTR____stack_chk_guard_11034bdc0;
  uStack_1a0 = uVar8;
  pcStack_198 = UNRECOVERED_JUMPTABLE;
  uStack_190 = uVar7;
  plStack_188 = plVar17;
  func_0x000107c5fd5c();
  if ((uVar13 & 1) == 0) {
    if ((char)plVar17[0xd] != '\x01') {
LAB_103181130:
      plVar26 = (long *)0x70;
      func_0x000107c615b8();
      plVar17[0x25] = (long)plVar26;
      UNRECOVERED_JUMPTABLE_01 = FUN_103181308;
      goto LAB_103181148;
    }
    iVar5 = (int)plVar17[0x22];
    func_0x000107c4a2f8();
    if (iVar5 == 0) goto LAB_103181130;
    lVar15 = plVar17[0x1c];
    lVar23 = plVar17[0x12];
    lVar14 = plVar17[0x26];
    lVar27 = plVar17[0xf];
    (*(code *)plVar17[0x1e])(plVar17[0x19],plVar17[0x16]);
    func_0x000107c61170(lVar15);
    lVar15 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    iVar5 = *(int *)(lVar15 + 0x30);
    func_0x000103182080(lVar23,lVar27,0x103182014);
    *(char *)(lVar27 + iVar5) = (char)lVar14;
    lVar15 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar27,lVar15,0);
    (**(code **)(*(long *)(lVar15 + -8) + 0x38))(lVar27,0,1,lVar15);
    lVar15 = plVar17[0x18];
    uVar7 = plVar17[0x15];
    uVar8 = plVar17[0x11];
    UNRECOVERED_JUMPTABLE = (code *)plVar17[0x12];
    func_0x000107c615c0(plVar17[0x19]);
    func_0x000107c615c0(lVar15);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
    func_0x000107c615c0(uVar8);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar17[1];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010318112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  else {
    plVar26 = (long *)0x70;
    func_0x000107c615b8();
    plVar17[0x24] = (long)plVar26;
    UNRECOVERED_JUMPTABLE_01 = FUN_103181190;
LAB_103181148:
    uVar4 = uStack_190;
    pcVar30 = pcStack_198;
    uVar13 = uStack_1a0;
    *plVar26 = (long)plVar17;
    plVar26[1] = (long)UNRECOVERED_JUMPTABLE_01;
    lVar15 = plVar17[0x10];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_1a8) {
      uStack_180 = uStack_180 & 0xefffffffffffffff | 0x1000000000000000;
      uStack_190 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      plVar26[0xb] = plVar17[0x12];
      plVar26[0xc] = lVar15;
      plStack_188 = plVar26;
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_190) {
        UNRECOVERED_JUMPTABLE = FUN_103181ba4;
      }
      else {
        func_0x000107c60e78();
        uStack_1a0 = (ulong)&uStack_180 | 0x1000000000000000;
        pcStack_1b8 = pcVar30;
        uStack_1b0 = uVar4;
        pcStack_198 = FUN_103181ba4;
        uStack_1c0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        puVar9 = (undefined8 *)plVar26[0xb];
        lVar6 = plVar26[0xc];
        uVar20 = *puVar9;
        plStack_1a8 = plVar26;
        func_0x000107c53fcc(uVar20);
        func_0x000107c5bdf4(uVar20);
        lVar22 = 0;
        func_0x000103182014();
        plVar26[0xd] = lVar22;
        plVar17 = *(long **)((long)puVar9 + (long)*(int *)(lVar22 + 0x18));
        uVar20 = *(undefined8 *)(lVar6 + 0x28);
        plVar26[2] = (long)plVar26;
        plVar26[3] = (long)FUN_103181c58;
        func_0x000107c61448(plVar26 + 2,0);
        FUN_103183860();
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_1c0) {
LAB_107c61444:
          UNRECOVERED_JUMPTABLE = (code *)(plVar26 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x000107c60e78();
        uStack_1d0 = (ulong)&uStack_1a0 | 0x1000000000000000;
        pcStack_1c8 = FUN_103181c58;
        uStack_1e0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        pcStack_1d8 = (code *)*plVar26;
        lVar6 = *plVar26;
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_1e0) {
          func_0x000107c60e78();
          uStack_1f0 = (ulong)&uStack_1d0 | 0x1000000000000000;
          uStack_210 = uVar13;
          pcStack_1e8 = FUN_103181cc4;
          pcStack_218 = *(code **)PTR____stack_chk_guard_11034bdc0;
          lVar22 = *(long *)(lVar6 + 0x68);
          puVar12 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          puStack_208 = puVar9;
          uStack_200 = uVar20;
          pcStack_1f8 = (code *)lVar6;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar21 = puVar12;
          func_0x000107c5ed90((long)*(int *)(lVar22 + 0x14));
          *(undefined8 *)(lVar6 + 0x50) = 0;
          puVar10 = puVar12;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar21);
          func_0x000107c61170(puVar12);
          puVar21 = *(undefined **)(lVar6 + 0x50);
          if ((int)puVar10 == 0) {
            puVar12 = puVar21;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(puVar12);
            func_0x000107c61654();
            func_0x000107c614ac(puVar21);
          }
          else {
            func_0x000107c61174(puVar21);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
          if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_218) {
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return UNRECOVERED_JUMPTABLE;
          }
          func_0x000107c60e78();
          pcStack_228 = FUN_103181dcc;
          lVar6 = *plVar17;
          *(long *)UNRECOVERED_JUMPTABLE = lVar6;
          puStack_240 = puVar21;
          pcStack_238 = (code *)puVar12;
          puStack_230 = &uStack_1f0;
          func_0x000107c6157c(lVar6);
          return (code *)(lVar6 + 0x10);
        }
        UNRECOVERED_JUMPTABLE = FUN_103181cc4;
      }
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_1c0 = (ulong)&uStack_180 | 0x1000000000000000;
  pcStack_1b8 = FUN_103181190;
  uStack_1d0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1c8 = (code *)*plVar17;
  plVar17 = (long *)*plVar17;
  func_0x000107c615c0(*(undefined8 *)(pcStack_1c8 + 0x120));
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_1d0) {
    UNRECOVERED_JUMPTABLE = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    uStack_1e0 = (ulong)&uStack_1c0 | 0x1000000000000000;
    pcStack_1d8 = FUN_103181204;
    uStack_210 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar17[0x1e];
    lVar14 = plVar17[0x19];
    lVar15 = plVar17[0x16];
    lVar23 = plVar17[0x12];
    lVar27 = plVar17[0xf];
    puStack_208 = (undefined8 *)lVar29;
    uStack_200 = uVar8;
    pcStack_1f8 = UNRECOVERED_JUMPTABLE;
    uStack_1f0 = uVar7;
    pcStack_1e8 = (code *)plVar17;
    func_0x000107c61170(plVar17[0x1c]);
    (*UNRECOVERED_JUMPTABLE_01)(lVar14,lVar15);
    func_0x0001031820c4(lVar23,0x103182014);
    lVar15 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar27,lVar15,2);
    (**(code **)(*(long *)(lVar15 + -8) + 0x38))(lVar27,0,1,lVar15);
    lVar15 = plVar17[0x18];
    lVar23 = plVar17[0x15];
    lVar29 = plVar17[0x11];
    lVar14 = plVar17[0x12];
    func_0x000107c615c0(plVar17[0x19]);
    func_0x000107c615c0(lVar15);
    func_0x000107c615c0(lVar23);
    func_0x000107c615c0(lVar14);
    func_0x000107c615c0(lVar29);
    UNRECOVERED_JUMPTABLE = (code *)plVar17[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_210) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    func_0x000107c60e78();
    uStack_220 = (ulong)&uStack_1e0 | 0x1000000000000000;
    pcStack_218 = FUN_103181308;
    puStack_230 = *(ulong **)PTR____stack_chk_guard_11034bdc0;
    pcStack_228 = (code *)*plVar17;
    plVar17 = (long *)*plVar17;
    func_0x000107c615c0(*(undefined8 *)((long)pcStack_228 + 0x128));
    if ((ulong *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_230) {
      UNRECOVERED_JUMPTABLE = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      puStack_240 = (undefined *)((ulong)&uStack_220 | 0x1000000000000000);
      pcStack_238 = FUN_10318137c;
      lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar30 = (code *)plVar17[0x1e];
      lVar27 = plVar17[0x19];
      lVar15 = plVar17[0x16];
      lVar24 = plVar17[0x12];
      lVar28 = plVar17[0xf];
      pcStack_268 = UNRECOVERED_JUMPTABLE_01;
      lStack_260 = lVar29;
      lStack_258 = lVar14;
      lStack_250 = lVar23;
      plStack_248 = plVar17;
      func_0x000107c61170(plVar17[0x1c]);
      (*pcVar30)(lVar27,lVar15);
      func_0x0001031820c4(lVar24,0x103182014);
      lVar15 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar15 + -8) + 0x38))(lVar28,1,1,lVar15);
      lVar15 = plVar17[0x18];
      lVar23 = plVar17[0x15];
      lVar29 = plVar17[0x11];
      lVar14 = plVar17[0x12];
      func_0x000107c615c0(plVar17[0x19]);
      func_0x000107c615c0(lVar15);
      func_0x000107c615c0(lVar23);
      func_0x000107c615c0(lVar14);
      func_0x000107c615c0(lVar29);
      UNRECOVERED_JUMPTABLE = (code *)plVar17[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uStack_280 = (ulong)&puStack_240 | 0x1000000000000000;
      pcStack_278 = FUN_10318146c;
      lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_288 = *plVar17;
      lVar15 = *plVar17;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_290) {
        func_0x000107c60e78();
        uStack_2a0 = (ulong)&uStack_280 | 0x1000000000000000;
        pcStack_298 = FUN_1031814d8;
        lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar2 = *(undefined8 *)(lVar15 + 0xf8);
        uVar3 = *(undefined8 *)(lVar15 + 0x100);
        pcVar31 = *(code **)(lVar15 + 0xf0);
        uVar19 = *(undefined8 *)(lVar15 + 200);
        uVar16 = *(undefined8 *)(lVar15 + 0xb0);
        puVar25 = *(undefined8 **)(lVar15 + 0x78);
        uStack_2d0 = uVar20;
        pcStack_2c8 = pcVar30;
        lStack_2c0 = lVar29;
        lStack_2b8 = lVar14;
        lStack_2b0 = lVar23;
        lStack_2a8 = lVar15;
        func_0x000107c61170(*(undefined8 *)(lVar15 + 0xe0));
        (*pcVar31)(uVar19,uVar16);
        *puVar25 = uVar2;
        puVar25[1] = uVar3;
        lVar29 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar25,lVar29,1);
        pcVar30 = (code *)0x0;
        puVar9 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar29 + -8) + 0x38))(puVar25,0,1,lVar29);
        uVar20 = *(undefined8 *)(lVar15 + 0xc0);
        uVar16 = *(undefined8 *)(lVar15 + 0xa8);
        uVar3 = *(undefined8 *)(lVar15 + 0x88);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar15 + 200));
        func_0x000107c615c0(uVar20);
        func_0x000107c615c0(uVar16);
        func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
        func_0x000107c615c0(uVar3);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar15 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return UNRECOVERED_JUMPTABLE_01;
        }
        func_0x000107c60e78();
        pcStack_2e8 = FUN_1031815d8;
        lVar29 = 0;
        lStack_340 = lVar6;
        lStack_330 = lVar1;
        lStack_328 = lVar22;
        pcStack_320 = pcVar31;
        uStack_318 = uVar2;
        uStack_310 = uVar3;
        lStack_308 = lVar15;
        uStack_300 = uVar20;
        uStack_2f8 = uVar16;
        puStack_2f0 = &uStack_2a0;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
        pcVar31 = (code *)((long)&uStack_350 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        pcVar32 = *(code **)(extraout_x12 + 0x10);
        (*pcVar32)(pcVar31,UNRECOVERED_JUMPTABLE_01,lVar29);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar20 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar20);
        func_0x0001010416fc(pcVar31,uVar20);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          UNRECOVERED_JUMPTABLE = pcVar31;
          func_0x000107c4ee28();
          func_0x000107c61170(pcVar31);
          if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
            uStack_348 = 7;
            uStack_350 = 0;
            uVar20 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar20 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar20);
            }
            func_0x000107c61170(pcVar31);
            uVar20 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            UNRECOVERED_JUMPTABLE = pcVar31;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)UNRECOVERED_JUMPTABLE != 0) {
              lVar6 = 0;
              func_0x000103182014();
              (*pcVar32)((long)extraout_x8 + (long)*(int *)(lVar6 + 0x14),UNRECOVERED_JUMPTABLE_01,
                         lVar29);
              *extraout_x8 = (ulong)pcVar31;
              *(code **)((long)extraout_x8 + (long)*(int *)(lVar6 + 0x18)) = pcVar30;
              func_0x000107c61174(pcVar30);
              return pcVar30;
            }
            uStack_348 = 8;
            uStack_350 = 0;
            uVar20 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar20 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar20);
            }
            func_0x000107c61170(pcVar31);
            uVar20 = 8;
          }
        }
        else {
          uStack_348 = 6;
          uStack_350 = 0;
          uVar20 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar20 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_350,&UNK_1106185a0,uVar20);
          }
          func_0x000107c614ac(UNRECOVERED_JUMPTABLE);
          uVar20 = 6;
          pcVar31 = UNRECOVERED_JUMPTABLE;
        }
        *puVar9 = 0;
        puVar9[1] = uVar20;
        return pcVar31;
      }
      UNRECOVERED_JUMPTABLE = FUN_1031814d8;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 103180acc; end: 103180b7f;  */

code * FUN_103180acc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE_01;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  long *unaff_x22;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  code *pcVar31;
  code *pcVar32;
  ulong unaff_x29;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  long lStack_2f0;
  long lStack_2e8;
  code *pcStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong *puStack_2b0;
  code *pcStack_2a8;
  long lStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  ulong uStack_260;
  code *pcStack_258;
  long lStack_250;
  long lStack_248;
  ulong uStack_240;
  code *pcStack_238;
  long lStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long *plStack_208;
  undefined *puStack_200;
  code *pcStack_1f8;
  ulong *puStack_1f0;
  code *pcStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  code *pcStack_188;
  ulong uStack_180;
  code *pcStack_178;
  ulong uStack_170;
  long *plStack_168;
  ulong uStack_160;
  code *pcStack_158;
  ulong uStack_150;
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_108;
  undefined *puStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_30;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *unaff_x22;
  plVar25 = (long *)*unaff_x22;
  *(undefined8 *)(lVar21 + 0xe0) = param_1;
  *(long *)(lVar21 + 0xe8) = unaff_x20;
  uVar19 = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar21 + 0xd8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_30) {
      UNRECOVERED_JUMPTABLE = FUN_103180b80;
      goto LAB_107c615e0;
    }
  }
  else {
    *(undefined8 *)(lVar21 + 0x108) = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_30) {
      UNRECOVERED_JUMPTABLE = FUN_103180e7c;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_38 = FUN_103180b80;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = plVar25[0x1c];
  lStack_b0 = plVar25[0x1d];
  lVar10 = plVar25[0x18];
  puVar8 = (undefined *)plVar25[0x19];
  lStack_c8 = plVar25[0x16];
  lStack_d0 = plVar25[0x17];
  lVar1 = plVar25[0x14];
  lVar13 = plVar25[0x15];
  lVar29 = plVar25[0x13];
  lStack_b8 = plVar25[0x10];
  lStack_c0 = plVar25[0x11];
  puVar20 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar6 = puVar20;
  func_0x000107c415e0(puVar20);
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c5edb4(lVar10,puVar7);
  func_0x000107c61170(puVar7);
  uStack_a8 = 0x5f76615f74616863;
  uStack_a0 = 0xe800000000000000;
  func_0x000107c5eec4(lVar13);
  func_0x000107c5eeac();
  (**(code **)(lVar1 + 8))(lVar13,lVar29);
  func_0x000107c5fb78(puVar7,uVar19);
  func_0x000107c6142c(uVar19);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  uVar2 = uStack_a0;
  func_0x000107c5ed9c(puVar8,uStack_a8,uStack_a0);
  func_0x000107c6142c(uVar2);
  UNRECOVERED_JUMPTABLE = *(code **)(lStack_d0 + 8);
  plVar25[0x1e] = (long)UNRECOVERED_JUMPTABLE;
  (*UNRECOVERED_JUMPTABLE)(lVar10,lStack_c8);
  lVar13 = lStack_b0;
  FUN_1031815d8(lStack_c0,puVar8,lVar21,plVar25 + 10);
  if (lVar13 == 0) {
    lVar13 = plVar25[0x11];
    plVar16 = (long *)plVar25[0x12];
    func_0x000107c61170(plVar25[0x1c]);
    func_0x000103182080(lVar13,plVar16,0x103182014);
    lVar13 = *plVar16;
    plVar25[0x22] = lVar13;
    puVar11 = (undefined8 *)0x50;
    func_0x000107c615b8();
    plVar25[0x23] = (long)puVar11;
    *puVar11 = plVar25;
    puVar11[1] = FUN_103180f58;
    plVar16 = (long *)0x0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      puVar11[2] = lVar13;
      UNRECOVERED_JUMPTABLE = FUN_10318187c;
      goto LAB_107c615e0;
    }
  }
  else {
    plVar25[0x20] = plVar25[0xb];
    plVar25[0x1f] = plVar25[10];
    func_0x000107c61170(plVar25[0x1c]);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar6 = puVar20;
    func_0x000107c5ed90();
    plVar17 = plVar25 + 0xe;
    *plVar17 = 0;
    puVar8 = puVar20;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar20);
    plVar16 = (long *)*plVar17;
    if (((ulong)puVar8 & 1) == 0) {
      plVar17 = plVar16;
      func_0x000107c61174(plVar16);
      func_0x000107c5ed30();
      func_0x000107c61170(plVar17);
      func_0x000107c61654();
      func_0x000107c614ac(plVar16);
    }
    else {
      func_0x000107c61174(plVar16);
      plVar16 = plVar17;
    }
    lVar13 = plVar25[0x1a];
    plVar25[2] = (long)plVar25;
    plVar25[3] = (long)FUN_10318146c;
    func_0x000107c61448(plVar25 + 2,0);
    FUN_103183860();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) goto LAB_107c61444;
  }
  func_0x000107c60e78();
  uStack_e0 = (ulong)&uStack_40 | 0x1000000000000000;
  pcStack_d8 = FUN_103180e7c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = plVar25[0x21];
  plVar17 = (long *)plVar25[0xf];
  *plVar17 = plVar25[0x1c];
  plVar17[1] = lVar12;
  lVar12 = 0;
  puStack_100 = puVar8;
  plStack_f8 = plVar16;
  lStack_f0 = lVar13;
  plStack_e8 = plVar25;
  func_0x00010318203c();
  func_0x000107c6159c(plVar17,lVar12,1);
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(plVar17,0,1,lVar12);
  lVar13 = plVar25[0x18];
  uVar14 = plVar25[0x15];
  uVar26 = plVar25[0x11];
  UNRECOVERED_JUMPTABLE = (code *)plVar25[0x12];
  func_0x000107c615c0(plVar25[0x19]);
  func_0x000107c615c0(lVar13);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
  func_0x000107c615c0(uVar26);
  UNRECOVERED_JUMPTABLE_01 = (code *)plVar25[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
                    /* WARNING: Could not recover jumptable at 0x000103180f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_120 = (ulong)&uStack_e0 | 0x1000000000000000;
  pcStack_118 = FUN_103180f58;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = *plVar25;
  *(char *)(lStack_128 + 0x68) = (char)UNRECOVERED_JUMPTABLE_01;
  *(long **)(lStack_128 + 0x60) = plVar25;
  uVar9 = *(ulong *)(lStack_128 + 0x118);
  plVar16 = (long *)*plVar25;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    UNRECOVERED_JUMPTABLE = FUN_103180fd4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_140 = (ulong)&uStack_120 | 0x1000000000000000;
  pcStack_138 = FUN_103180fd4;
  plStack_168 = *(long **)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = uVar26;
  pcStack_158 = UNRECOVERED_JUMPTABLE;
  uStack_150 = uVar14;
  plStack_148 = plVar16;
  func_0x000107c5fd5c();
  if ((uVar9 & 1) == 0) {
    if ((char)plVar16[0xd] != '\x01') {
LAB_103181130:
      plVar25 = (long *)0x70;
      func_0x000107c615b8();
      plVar16[0x25] = (long)plVar25;
      UNRECOVERED_JUMPTABLE_01 = FUN_103181308;
      goto LAB_103181148;
    }
    iVar5 = (int)plVar16[0x22];
    func_0x000107c4a2f8();
    if (iVar5 == 0) goto LAB_103181130;
    lVar13 = plVar16[0x1c];
    lVar22 = plVar16[0x12];
    lVar12 = plVar16[0x26];
    lVar27 = plVar16[0xf];
    (*(code *)plVar16[0x1e])(plVar16[0x19],plVar16[0x16]);
    func_0x000107c61170(lVar13);
    lVar13 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    iVar5 = *(int *)(lVar13 + 0x30);
    func_0x000103182080(lVar22,lVar27,0x103182014);
    *(char *)(lVar27 + iVar5) = (char)lVar12;
    lVar13 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar27,lVar13,0);
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar27,0,1,lVar13);
    lVar13 = plVar16[0x18];
    uVar14 = plVar16[0x15];
    uVar26 = plVar16[0x11];
    UNRECOVERED_JUMPTABLE = (code *)plVar16[0x12];
    func_0x000107c615c0(plVar16[0x19]);
    func_0x000107c615c0(lVar13);
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
    func_0x000107c615c0(uVar26);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar16[1];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_168) {
                    /* WARNING: Could not recover jumptable at 0x00010318112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  else {
    plVar25 = (long *)0x70;
    func_0x000107c615b8();
    plVar16[0x24] = (long)plVar25;
    UNRECOVERED_JUMPTABLE_01 = FUN_103181190;
LAB_103181148:
    uVar4 = uStack_150;
    pcVar30 = pcStack_158;
    uVar9 = uStack_160;
    *plVar25 = (long)plVar16;
    plVar25[1] = (long)UNRECOVERED_JUMPTABLE_01;
    lVar13 = plVar16[0x10];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_168) {
      uStack_140 = uStack_140 & 0xefffffffffffffff | 0x1000000000000000;
      uStack_150 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      plVar25[0xb] = plVar16[0x12];
      plVar25[0xc] = lVar13;
      plStack_148 = plVar25;
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_150) {
        UNRECOVERED_JUMPTABLE = FUN_103181ba4;
      }
      else {
        func_0x000107c60e78();
        uStack_160 = (ulong)&uStack_140 | 0x1000000000000000;
        pcStack_178 = pcVar30;
        uStack_170 = uVar4;
        pcStack_158 = FUN_103181ba4;
        uStack_180 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        puVar11 = (undefined8 *)plVar25[0xb];
        lVar21 = plVar25[0xc];
        uVar19 = *puVar11;
        plStack_168 = plVar25;
        func_0x000107c53fcc(uVar19);
        func_0x000107c5bdf4(uVar19);
        lVar10 = 0;
        func_0x000103182014();
        plVar25[0xd] = lVar10;
        plVar16 = *(long **)((long)puVar11 + (long)*(int *)(lVar10 + 0x18));
        uVar19 = *(undefined8 *)(lVar21 + 0x28);
        plVar25[2] = (long)plVar25;
        plVar25[3] = (long)FUN_103181c58;
        func_0x000107c61448(plVar25 + 2,0);
        FUN_103183860();
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_180) {
LAB_107c61444:
          UNRECOVERED_JUMPTABLE = (code *)(plVar25 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x000107c60e78();
        uStack_190 = (ulong)&uStack_160 | 0x1000000000000000;
        pcStack_188 = FUN_103181c58;
        uStack_1a0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        pcStack_198 = (code *)*plVar25;
        lVar21 = *plVar25;
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_1a0) {
          func_0x000107c60e78();
          uStack_1b0 = (ulong)&uStack_190 | 0x1000000000000000;
          uStack_1d0 = uVar9;
          pcStack_1a8 = FUN_103181cc4;
          pcStack_1d8 = *(code **)PTR____stack_chk_guard_11034bdc0;
          lVar10 = *(long *)(lVar21 + 0x68);
          puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          puStack_1c8 = puVar11;
          uStack_1c0 = uVar19;
          pcStack_1b8 = (code *)lVar21;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar20 = puVar8;
          func_0x000107c5ed90((long)*(int *)(lVar10 + 0x14));
          *(undefined8 *)(lVar21 + 0x50) = 0;
          puVar6 = puVar8;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar20);
          func_0x000107c61170(puVar8);
          puVar20 = *(undefined **)(lVar21 + 0x50);
          if ((int)puVar6 == 0) {
            puVar8 = puVar20;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(puVar8);
            func_0x000107c61654();
            func_0x000107c614ac(puVar20);
          }
          else {
            func_0x000107c61174(puVar20);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 8);
          if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_1d8) {
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return UNRECOVERED_JUMPTABLE;
          }
          func_0x000107c60e78();
          pcStack_1e8 = FUN_103181dcc;
          lVar21 = *plVar16;
          *(long *)UNRECOVERED_JUMPTABLE = lVar21;
          puStack_200 = puVar20;
          pcStack_1f8 = (code *)puVar8;
          puStack_1f0 = &uStack_1b0;
          func_0x000107c6157c(lVar21);
          return (code *)(lVar21 + 0x10);
        }
        UNRECOVERED_JUMPTABLE = FUN_103181cc4;
      }
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)&uStack_140 | 0x1000000000000000;
  pcStack_178 = FUN_103181190;
  uStack_190 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  pcStack_188 = (code *)*plVar16;
  plVar16 = (long *)*plVar16;
  func_0x000107c615c0(*(undefined8 *)(pcStack_188 + 0x120));
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_190) {
    UNRECOVERED_JUMPTABLE = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    uStack_1a0 = (ulong)&uStack_180 | 0x1000000000000000;
    pcStack_198 = FUN_103181204;
    uStack_1d0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar16[0x1e];
    lVar12 = plVar16[0x19];
    lVar13 = plVar16[0x16];
    lVar22 = plVar16[0x12];
    lVar27 = plVar16[0xf];
    puStack_1c8 = (undefined8 *)lVar29;
    uStack_1c0 = uVar26;
    pcStack_1b8 = UNRECOVERED_JUMPTABLE;
    uStack_1b0 = uVar14;
    pcStack_1a8 = (code *)plVar16;
    func_0x000107c61170(plVar16[0x1c]);
    (*UNRECOVERED_JUMPTABLE_01)(lVar12,lVar13);
    func_0x0001031820c4(lVar22,0x103182014);
    lVar13 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar27,lVar13,2);
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar27,0,1,lVar13);
    lVar13 = plVar16[0x18];
    lVar22 = plVar16[0x15];
    lVar29 = plVar16[0x11];
    lVar12 = plVar16[0x12];
    func_0x000107c615c0(plVar16[0x19]);
    func_0x000107c615c0(lVar13);
    func_0x000107c615c0(lVar22);
    func_0x000107c615c0(lVar12);
    func_0x000107c615c0(lVar29);
    UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    func_0x000107c60e78();
    uStack_1e0 = (ulong)&uStack_1a0 | 0x1000000000000000;
    pcStack_1d8 = FUN_103181308;
    puStack_1f0 = *(ulong **)PTR____stack_chk_guard_11034bdc0;
    pcStack_1e8 = (code *)*plVar16;
    plVar16 = (long *)*plVar16;
    func_0x000107c615c0(*(undefined8 *)((long)pcStack_1e8 + 0x128));
    if ((ulong *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_1f0) {
      UNRECOVERED_JUMPTABLE = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      puStack_200 = (undefined *)((ulong)&uStack_1e0 | 0x1000000000000000);
      pcStack_1f8 = FUN_10318137c;
      lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar30 = (code *)plVar16[0x1e];
      lVar27 = plVar16[0x19];
      lVar13 = plVar16[0x16];
      lVar23 = plVar16[0x12];
      lVar28 = plVar16[0xf];
      pcStack_228 = UNRECOVERED_JUMPTABLE_01;
      lStack_220 = lVar29;
      lStack_218 = lVar12;
      lStack_210 = lVar22;
      plStack_208 = plVar16;
      func_0x000107c61170(plVar16[0x1c]);
      (*pcVar30)(lVar27,lVar13);
      func_0x0001031820c4(lVar23,0x103182014);
      lVar13 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar28,1,1,lVar13);
      lVar13 = plVar16[0x18];
      lVar22 = plVar16[0x15];
      lVar29 = plVar16[0x11];
      lVar12 = plVar16[0x12];
      func_0x000107c615c0(plVar16[0x19]);
      func_0x000107c615c0(lVar13);
      func_0x000107c615c0(lVar22);
      func_0x000107c615c0(lVar12);
      func_0x000107c615c0(lVar29);
      UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uStack_240 = (ulong)&puStack_200 | 0x1000000000000000;
      pcStack_238 = FUN_10318146c;
      lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_248 = *plVar16;
      lVar13 = *plVar16;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_250) {
        func_0x000107c60e78();
        uStack_260 = (ulong)&uStack_240 | 0x1000000000000000;
        pcStack_258 = FUN_1031814d8;
        lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar2 = *(undefined8 *)(lVar13 + 0xf8);
        uVar3 = *(undefined8 *)(lVar13 + 0x100);
        pcVar31 = *(code **)(lVar13 + 0xf0);
        uVar18 = *(undefined8 *)(lVar13 + 200);
        uVar15 = *(undefined8 *)(lVar13 + 0xb0);
        puVar24 = *(undefined8 **)(lVar13 + 0x78);
        uStack_290 = uVar19;
        pcStack_288 = pcVar30;
        lStack_280 = lVar29;
        lStack_278 = lVar12;
        lStack_270 = lVar22;
        lStack_268 = lVar13;
        func_0x000107c61170(*(undefined8 *)(lVar13 + 0xe0));
        (*pcVar31)(uVar18,uVar15);
        *puVar24 = uVar2;
        puVar24[1] = uVar3;
        lVar29 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar24,lVar29,1);
        pcVar30 = (code *)0x0;
        puVar11 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar29 + -8) + 0x38))(puVar24,0,1,lVar29);
        uVar19 = *(undefined8 *)(lVar13 + 0xc0);
        uVar15 = *(undefined8 *)(lVar13 + 0xa8);
        uVar3 = *(undefined8 *)(lVar13 + 0x88);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar13 + 200));
        func_0x000107c615c0(uVar19);
        func_0x000107c615c0(uVar15);
        func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
        func_0x000107c615c0(uVar3);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar13 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return UNRECOVERED_JUMPTABLE_01;
        }
        func_0x000107c60e78();
        pcStack_2a8 = FUN_1031815d8;
        lVar29 = 0;
        lStack_300 = lVar21;
        lStack_2f0 = lVar1;
        lStack_2e8 = lVar10;
        pcStack_2e0 = pcVar31;
        uStack_2d8 = uVar2;
        uStack_2d0 = uVar3;
        lStack_2c8 = lVar13;
        uStack_2c0 = uVar19;
        uStack_2b8 = uVar15;
        puStack_2b0 = &uStack_260;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
        pcVar31 = (code *)((long)&uStack_310 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        pcVar32 = *(code **)(extraout_x12 + 0x10);
        (*pcVar32)(pcVar31,UNRECOVERED_JUMPTABLE_01,lVar29);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar19 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar19);
        func_0x0001010416fc(pcVar31,uVar19);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          UNRECOVERED_JUMPTABLE = pcVar31;
          func_0x000107c4ee28();
          func_0x000107c61170(pcVar31);
          if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
            uStack_308 = 7;
            uStack_310 = 0;
            uVar19 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar19 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_310,&UNK_1106185a0,uVar19);
            }
            func_0x000107c61170(pcVar31);
            uVar19 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            UNRECOVERED_JUMPTABLE = pcVar31;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)UNRECOVERED_JUMPTABLE != 0) {
              lVar21 = 0;
              func_0x000103182014();
              (*pcVar32)((long)extraout_x8 + (long)*(int *)(lVar21 + 0x14),UNRECOVERED_JUMPTABLE_01,
                         lVar29);
              *extraout_x8 = (ulong)pcVar31;
              *(code **)((long)extraout_x8 + (long)*(int *)(lVar21 + 0x18)) = pcVar30;
              func_0x000107c61174(pcVar30);
              return pcVar30;
            }
            uStack_308 = 8;
            uStack_310 = 0;
            uVar19 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar19 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_310,&UNK_1106185a0,uVar19);
            }
            func_0x000107c61170(pcVar31);
            uVar19 = 8;
          }
        }
        else {
          uStack_308 = 6;
          uStack_310 = 0;
          uVar19 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar19 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_310,&UNK_1106185a0,uVar19);
          }
          func_0x000107c614ac(UNRECOVERED_JUMPTABLE);
          uVar19 = 6;
          pcVar31 = UNRECOVERED_JUMPTABLE;
        }
        *puVar11 = 0;
        puVar11[1] = uVar19;
        return pcVar31;
      }
      UNRECOVERED_JUMPTABLE = FUN_1031814d8;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 103180b80; end: 103180e7b;  */

code * FUN_103180b80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *UNRECOVERED_JUMPTABLE_01;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long *unaff_x22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  code *pcVar28;
  code *pcVar29;
  code *pcVar30;
  ulong unaff_x29;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong *puStack_280;
  code *pcStack_278;
  long lStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  ulong uStack_210;
  code *pcStack_208;
  long lStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long *plStack_1d8;
  undefined *puStack_1d0;
  code *pcStack_1c8;
  ulong *puStack_1c0;
  code *pcStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  ulong uStack_190;
  code *pcStack_188;
  ulong uStack_180;
  code *pcStack_178;
  ulong uStack_170;
  code *pcStack_168;
  ulong uStack_160;
  code *pcStack_158;
  ulong uStack_150;
  code *pcStack_148;
  ulong uStack_140;
  long *plStack_138;
  ulong uStack_130;
  code *pcStack_128;
  ulong uStack_120;
  long *plStack_118;
  ulong uStack_110;
  code *pcStack_108;
  long lStack_100;
  ulong uStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = unaff_x22[0x1c];
  lStack_80 = unaff_x22[0x1d];
  lVar9 = unaff_x22[0x18];
  puVar7 = (undefined *)unaff_x22[0x19];
  lStack_98 = unaff_x22[0x16];
  lStack_a0 = unaff_x22[0x17];
  lVar1 = unaff_x22[0x14];
  lVar12 = unaff_x22[0x15];
  lVar27 = unaff_x22[0x13];
  lStack_88 = unaff_x22[0x10];
  lStack_90 = unaff_x22[0x11];
  puVar19 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar5 = puVar19;
  func_0x000107c415e0(puVar19);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c5edb4(lVar9,puVar6);
  func_0x000107c61170(puVar6);
  uStack_78 = 0x5f76615f74616863;
  uStack_70 = 0xe800000000000000;
  func_0x000107c5eec4(lVar12);
  func_0x000107c5eeac();
  (**(code **)(lVar1 + 8))(lVar12,lVar27);
  func_0x000107c5fb78(puVar6,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  uVar18 = uStack_70;
  func_0x000107c5ed9c(puVar7,uStack_78,uStack_70);
  func_0x000107c6142c(uVar18);
  UNRECOVERED_JUMPTABLE = *(code **)(lStack_a0 + 8);
  unaff_x22[0x1e] = (long)UNRECOVERED_JUMPTABLE;
  (*UNRECOVERED_JUMPTABLE)(lVar9,lStack_98);
  lVar12 = lStack_80;
  FUN_1031815d8(lStack_90,puVar7,lVar23,unaff_x22 + 10);
  if (lVar12 == 0) {
    lVar12 = unaff_x22[0x11];
    plVar15 = (long *)unaff_x22[0x12];
    func_0x000107c61170(unaff_x22[0x1c]);
    func_0x000103182080(lVar12,plVar15,0x103182014);
    lVar12 = *plVar15;
    unaff_x22[0x22] = lVar12;
    puVar10 = (undefined8 *)0x50;
    func_0x000107c615b8();
    unaff_x22[0x23] = (long)puVar10;
    *puVar10 = unaff_x22;
    puVar10[1] = FUN_103180f58;
    plVar15 = (long *)0x0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
      puVar10[2] = lVar12;
      UNRECOVERED_JUMPTABLE = FUN_10318187c;
      goto LAB_107c615e0;
    }
  }
  else {
    unaff_x22[0x20] = unaff_x22[0xb];
    unaff_x22[0x1f] = unaff_x22[10];
    func_0x000107c61170(unaff_x22[0x1c]);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar5 = puVar19;
    func_0x000107c5ed90();
    plVar16 = unaff_x22 + 0xe;
    *plVar16 = 0;
    puVar7 = puVar19;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar19);
    plVar15 = (long *)*plVar16;
    if (((ulong)puVar7 & 1) == 0) {
      plVar16 = plVar15;
      func_0x000107c61174(plVar15);
      func_0x000107c5ed30();
      func_0x000107c61170(plVar16);
      func_0x000107c61654();
      func_0x000107c614ac(plVar15);
    }
    else {
      func_0x000107c61174(plVar15);
      plVar15 = plVar16;
    }
    lVar12 = unaff_x22[0x1a];
    unaff_x22[2] = (long)unaff_x22;
    unaff_x22[3] = (long)FUN_10318146c;
    func_0x000107c61448(unaff_x22 + 2,0);
    FUN_103183860();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) goto LAB_107c61444;
  }
  func_0x000107c60e78();
  uStack_b0 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_a8 = FUN_103180e7c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = unaff_x22[0x21];
  plVar16 = (long *)unaff_x22[0xf];
  *plVar16 = unaff_x22[0x1c];
  plVar16[1] = lVar11;
  lVar11 = 0;
  puStack_d0 = puVar7;
  plStack_c8 = plVar15;
  lStack_c0 = lVar12;
  func_0x00010318203c();
  func_0x000107c6159c(plVar16,lVar11,1);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(plVar16,0,1,lVar11);
  lVar12 = unaff_x22[0x18];
  uVar13 = unaff_x22[0x15];
  uVar24 = unaff_x22[0x11];
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x12];
  func_0x000107c615c0(unaff_x22[0x19]);
  func_0x000107c615c0(lVar12);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
  func_0x000107c615c0(uVar24);
  UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
                    /* WARNING: Could not recover jumptable at 0x000103180f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_01;
  }
  func_0x000107c60e78();
  uStack_f0 = (ulong)&uStack_b0 | 0x1000000000000000;
  pcStack_e8 = FUN_103180f58;
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  *(char *)(lVar12 + 0x68) = (char)UNRECOVERED_JUMPTABLE_01;
  *(long **)(lVar12 + 0x60) = unaff_x22;
  uVar8 = *(ulong *)(lVar12 + 0x118);
  plVar15 = (long *)*unaff_x22;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    UNRECOVERED_JUMPTABLE = FUN_103180fd4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_110 = (ulong)&uStack_f0 | 0x1000000000000000;
  pcStack_108 = FUN_103180fd4;
  plStack_138 = *(long **)PTR____stack_chk_guard_11034bdc0;
  uStack_130 = uVar24;
  pcStack_128 = UNRECOVERED_JUMPTABLE;
  uStack_120 = uVar13;
  plStack_118 = plVar15;
  func_0x000107c5fd5c();
  if ((uVar8 & 1) == 0) {
    if ((char)plVar15[0xd] != '\x01') {
LAB_103181130:
      unaff_x22 = (long *)0x70;
      func_0x000107c615b8();
      plVar15[0x25] = (long)unaff_x22;
      UNRECOVERED_JUMPTABLE_01 = FUN_103181308;
      goto LAB_103181148;
    }
    iVar4 = (int)plVar15[0x22];
    func_0x000107c4a2f8();
    if (iVar4 == 0) goto LAB_103181130;
    lVar12 = plVar15[0x1c];
    lVar20 = plVar15[0x12];
    lVar11 = plVar15[0x26];
    lVar25 = plVar15[0xf];
    (*(code *)plVar15[0x1e])(plVar15[0x19],plVar15[0x16]);
    func_0x000107c61170(lVar12);
    lVar12 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    iVar4 = *(int *)(lVar12 + 0x30);
    func_0x000103182080(lVar20,lVar25,0x103182014);
    *(char *)(lVar25 + iVar4) = (char)lVar11;
    lVar12 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar25,lVar12,0);
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar25,0,1,lVar12);
    lVar12 = plVar15[0x18];
    uVar13 = plVar15[0x15];
    uVar24 = plVar15[0x11];
    UNRECOVERED_JUMPTABLE = (code *)plVar15[0x12];
    func_0x000107c615c0(plVar15[0x19]);
    func_0x000107c615c0(lVar12);
    func_0x000107c615c0(uVar13);
    func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
    func_0x000107c615c0(uVar24);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar15[1];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_138) {
                    /* WARNING: Could not recover jumptable at 0x00010318112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  else {
    unaff_x22 = (long *)0x70;
    func_0x000107c615b8();
    plVar15[0x24] = (long)unaff_x22;
    UNRECOVERED_JUMPTABLE_01 = FUN_103181190;
LAB_103181148:
    uVar3 = uStack_120;
    pcVar28 = pcStack_128;
    uVar8 = uStack_130;
    *unaff_x22 = (long)plVar15;
    unaff_x22[1] = (long)UNRECOVERED_JUMPTABLE_01;
    lVar12 = plVar15[0x10];
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_138) {
      uStack_110 = uStack_110 & 0xefffffffffffffff | 0x1000000000000000;
      uStack_120 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      unaff_x22[0xb] = plVar15[0x12];
      unaff_x22[0xc] = lVar12;
      plStack_118 = unaff_x22;
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_120) {
        UNRECOVERED_JUMPTABLE = FUN_103181ba4;
      }
      else {
        func_0x000107c60e78();
        uStack_130 = (ulong)&uStack_110 | 0x1000000000000000;
        pcStack_148 = pcVar28;
        uStack_140 = uVar3;
        pcStack_128 = FUN_103181ba4;
        uStack_150 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        puVar10 = (undefined8 *)unaff_x22[0xb];
        lVar23 = unaff_x22[0xc];
        uVar18 = *puVar10;
        plStack_138 = unaff_x22;
        func_0x000107c53fcc(uVar18);
        func_0x000107c5bdf4(uVar18);
        lVar9 = 0;
        func_0x000103182014();
        unaff_x22[0xd] = lVar9;
        plVar15 = *(long **)((long)puVar10 + (long)*(int *)(lVar9 + 0x18));
        uVar18 = *(undefined8 *)(lVar23 + 0x28);
        unaff_x22[2] = (long)unaff_x22;
        unaff_x22[3] = (long)FUN_103181c58;
        func_0x000107c61448(unaff_x22 + 2,0);
        FUN_103183860();
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_150) {
LAB_107c61444:
          UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x000107c60e78();
        uStack_160 = (ulong)&uStack_130 | 0x1000000000000000;
        pcStack_158 = FUN_103181c58;
        uStack_170 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        pcStack_168 = (code *)*unaff_x22;
        lVar23 = *unaff_x22;
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_170) {
          func_0x000107c60e78();
          uStack_180 = (ulong)&uStack_160 | 0x1000000000000000;
          uStack_1a0 = uVar8;
          pcStack_178 = FUN_103181cc4;
          pcStack_1a8 = *(code **)PTR____stack_chk_guard_11034bdc0;
          lVar9 = *(long *)(lVar23 + 0x68);
          puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          puStack_198 = puVar10;
          uStack_190 = uVar18;
          pcStack_188 = (code *)lVar23;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar19 = puVar7;
          func_0x000107c5ed90((long)*(int *)(lVar9 + 0x14));
          *(undefined8 *)(lVar23 + 0x50) = 0;
          puVar5 = puVar7;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar19);
          func_0x000107c61170(puVar7);
          puVar19 = *(undefined **)(lVar23 + 0x50);
          if ((int)puVar5 == 0) {
            puVar7 = puVar19;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(puVar7);
            func_0x000107c61654();
            func_0x000107c614ac(puVar19);
          }
          else {
            func_0x000107c61174(puVar19);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar23 + 8);
          if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return UNRECOVERED_JUMPTABLE;
          }
          func_0x000107c60e78();
          pcStack_1b8 = FUN_103181dcc;
          lVar23 = *plVar15;
          *(long *)UNRECOVERED_JUMPTABLE = lVar23;
          puStack_1d0 = puVar19;
          pcStack_1c8 = (code *)puVar7;
          puStack_1c0 = &uStack_180;
          func_0x000107c6157c(lVar23);
          return (code *)(lVar23 + 0x10);
        }
        UNRECOVERED_JUMPTABLE = FUN_103181cc4;
      }
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_150 = (ulong)&uStack_110 | 0x1000000000000000;
  pcStack_148 = FUN_103181190;
  uStack_160 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  pcStack_158 = (code *)*plVar15;
  plVar15 = (long *)*plVar15;
  func_0x000107c615c0(*(undefined8 *)(pcStack_158 + 0x120));
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_160) {
    UNRECOVERED_JUMPTABLE = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    uStack_170 = (ulong)&uStack_150 | 0x1000000000000000;
    pcStack_168 = FUN_103181204;
    uStack_1a0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar15[0x1e];
    lVar11 = plVar15[0x19];
    lVar12 = plVar15[0x16];
    lVar20 = plVar15[0x12];
    lVar25 = plVar15[0xf];
    puStack_198 = (undefined8 *)lVar27;
    uStack_190 = uVar24;
    pcStack_188 = UNRECOVERED_JUMPTABLE;
    uStack_180 = uVar13;
    pcStack_178 = (code *)plVar15;
    func_0x000107c61170(plVar15[0x1c]);
    (*UNRECOVERED_JUMPTABLE_01)(lVar11,lVar12);
    func_0x0001031820c4(lVar20,0x103182014);
    lVar12 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar25,lVar12,2);
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar25,0,1,lVar12);
    lVar12 = plVar15[0x18];
    lVar20 = plVar15[0x15];
    lVar27 = plVar15[0x11];
    lVar11 = plVar15[0x12];
    func_0x000107c615c0(plVar15[0x19]);
    func_0x000107c615c0(lVar12);
    func_0x000107c615c0(lVar20);
    func_0x000107c615c0(lVar11);
    func_0x000107c615c0(lVar27);
    UNRECOVERED_JUMPTABLE = (code *)plVar15[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_1a0) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    func_0x000107c60e78();
    uStack_1b0 = (ulong)&uStack_170 | 0x1000000000000000;
    pcStack_1a8 = FUN_103181308;
    puStack_1c0 = *(ulong **)PTR____stack_chk_guard_11034bdc0;
    pcStack_1b8 = (code *)*plVar15;
    plVar15 = (long *)*plVar15;
    func_0x000107c615c0(*(undefined8 *)((long)pcStack_1b8 + 0x128));
    if ((ulong *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_1c0) {
      UNRECOVERED_JUMPTABLE = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      puStack_1d0 = (undefined *)((ulong)&uStack_1b0 | 0x1000000000000000);
      pcStack_1c8 = FUN_10318137c;
      lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar28 = (code *)plVar15[0x1e];
      lVar25 = plVar15[0x19];
      lVar12 = plVar15[0x16];
      lVar21 = plVar15[0x12];
      lVar26 = plVar15[0xf];
      pcStack_1f8 = UNRECOVERED_JUMPTABLE_01;
      lStack_1f0 = lVar27;
      lStack_1e8 = lVar11;
      lStack_1e0 = lVar20;
      plStack_1d8 = plVar15;
      func_0x000107c61170(plVar15[0x1c]);
      (*pcVar28)(lVar25,lVar12);
      func_0x0001031820c4(lVar21,0x103182014);
      lVar12 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar26,1,1,lVar12);
      lVar12 = plVar15[0x18];
      lVar20 = plVar15[0x15];
      lVar27 = plVar15[0x11];
      lVar11 = plVar15[0x12];
      func_0x000107c615c0(plVar15[0x19]);
      func_0x000107c615c0(lVar12);
      func_0x000107c615c0(lVar20);
      func_0x000107c615c0(lVar11);
      func_0x000107c615c0(lVar27);
      UNRECOVERED_JUMPTABLE = (code *)plVar15[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uStack_210 = (ulong)&puStack_1d0 | 0x1000000000000000;
      pcStack_208 = FUN_10318146c;
      lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_218 = *plVar15;
      lVar12 = *plVar15;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_220) {
        func_0x000107c60e78();
        uStack_230 = (ulong)&uStack_210 | 0x1000000000000000;
        pcStack_228 = FUN_1031814d8;
        lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar18 = *(undefined8 *)(lVar12 + 0xf8);
        uVar2 = *(undefined8 *)(lVar12 + 0x100);
        pcVar29 = *(code **)(lVar12 + 0xf0);
        uVar17 = *(undefined8 *)(lVar12 + 200);
        uVar14 = *(undefined8 *)(lVar12 + 0xb0);
        puVar22 = *(undefined8 **)(lVar12 + 0x78);
        uStack_260 = param_2;
        pcStack_258 = pcVar28;
        lStack_250 = lVar27;
        lStack_248 = lVar11;
        lStack_240 = lVar20;
        lStack_238 = lVar12;
        func_0x000107c61170(*(undefined8 *)(lVar12 + 0xe0));
        (*pcVar29)(uVar17,uVar14);
        *puVar22 = uVar18;
        puVar22[1] = uVar2;
        lVar27 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar22,lVar27,1);
        pcVar28 = (code *)0x0;
        puVar10 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar27 + -8) + 0x38))(puVar22,0,1,lVar27);
        uVar2 = *(undefined8 *)(lVar12 + 0xc0);
        uVar17 = *(undefined8 *)(lVar12 + 0xa8);
        uVar14 = *(undefined8 *)(lVar12 + 0x88);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar12 + 200));
        func_0x000107c615c0(uVar2);
        func_0x000107c615c0(uVar17);
        func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
        func_0x000107c615c0(uVar14);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar12 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return UNRECOVERED_JUMPTABLE_01;
        }
        func_0x000107c60e78();
        pcStack_278 = FUN_1031815d8;
        lVar27 = 0;
        lStack_2d0 = lVar23;
        lStack_2c0 = lVar1;
        lStack_2b8 = lVar9;
        pcStack_2b0 = pcVar29;
        uStack_2a8 = uVar18;
        uStack_2a0 = uVar14;
        lStack_298 = lVar12;
        uStack_290 = uVar2;
        uStack_288 = uVar17;
        puStack_280 = &uStack_230;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar27 + -8) + 0x40));
        pcVar29 = (code *)((long)&uStack_2e0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        pcVar30 = *(code **)(extraout_x12 + 0x10);
        (*pcVar30)(pcVar29,UNRECOVERED_JUMPTABLE_01,lVar27);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar18 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar18);
        func_0x0001010416fc(pcVar29,uVar18);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          UNRECOVERED_JUMPTABLE = pcVar29;
          func_0x000107c4ee28();
          func_0x000107c61170(pcVar29);
          if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
            uStack_2d8 = 7;
            uStack_2e0 = 0;
            uVar18 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar18 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_2e0,&UNK_1106185a0,uVar18);
            }
            func_0x000107c61170(pcVar29);
            uVar18 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            UNRECOVERED_JUMPTABLE = pcVar29;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)UNRECOVERED_JUMPTABLE != 0) {
              lVar23 = 0;
              func_0x000103182014();
              (*pcVar30)((long)extraout_x8 + (long)*(int *)(lVar23 + 0x14),UNRECOVERED_JUMPTABLE_01,
                         lVar27);
              *extraout_x8 = (ulong)pcVar29;
              *(code **)((long)extraout_x8 + (long)*(int *)(lVar23 + 0x18)) = pcVar28;
              func_0x000107c61174(pcVar28);
              return pcVar28;
            }
            uStack_2d8 = 8;
            uStack_2e0 = 0;
            uVar18 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar18 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_2e0,&UNK_1106185a0,uVar18);
            }
            func_0x000107c61170(pcVar29);
            uVar18 = 8;
          }
        }
        else {
          uStack_2d8 = 6;
          uStack_2e0 = 0;
          uVar18 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar18 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_2e0,&UNK_1106185a0,uVar18);
          }
          func_0x000107c614ac(UNRECOVERED_JUMPTABLE);
          uVar18 = 6;
          pcVar29 = UNRECOVERED_JUMPTABLE;
        }
        *puVar10 = 0;
        puVar10[1] = uVar18;
        return pcVar29;
      }
      UNRECOVERED_JUMPTABLE = FUN_1031814d8;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 103180e7c; end: 103180f57;  */

code * FUN_103180e7c(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  long *unaff_x22;
  code *pcVar21;
  undefined8 uStack_240;
  undefined8 uStack_238;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = unaff_x22[0x21];
  plVar16 = (long *)unaff_x22[0xf];
  *plVar16 = unaff_x22[0x1c];
  plVar16[1] = lVar12;
  lVar12 = 0;
  func_0x00010318203c();
  func_0x000107c6159c(plVar16,lVar12,1);
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(plVar16,0,1,lVar12);
  lVar12 = unaff_x22[0x18];
  lVar14 = unaff_x22[0x15];
  lVar13 = unaff_x22[0x11];
  lVar19 = unaff_x22[0x12];
  func_0x000107c615c0(unaff_x22[0x19]);
  func_0x000107c615c0(lVar12);
  func_0x000107c615c0(lVar14);
  func_0x000107c615c0(lVar19);
  func_0x000107c615c0(lVar13);
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000103180f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *unaff_x22;
  *(char *)(lVar13 + 0x68) = (char)UNRECOVERED_JUMPTABLE;
  *(long **)(lVar13 + 0x60) = unaff_x22;
  uVar2 = *(ulong *)(lVar13 + 0x118);
  plVar16 = (long *)*unaff_x22;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    UNRECOVERED_JUMPTABLE = FUN_103180fd4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd5c();
  if ((uVar2 & 1) == 0) {
    if ((char)plVar16[0xd] != '\x01') {
LAB_103181130:
      plVar3 = (long *)0x70;
      func_0x000107c615b8();
      plVar16[0x25] = (long)plVar3;
      UNRECOVERED_JUMPTABLE = FUN_103181308;
      goto LAB_103181148;
    }
    iVar1 = (int)plVar16[0x22];
    func_0x000107c4a2f8();
    if (iVar1 == 0) goto LAB_103181130;
    lVar13 = plVar16[0x1c];
    lVar11 = plVar16[0x12];
    lVar19 = plVar16[0x26];
    lVar14 = plVar16[0xf];
    (*(code *)plVar16[0x1e])(plVar16[0x19],plVar16[0x16]);
    func_0x000107c61170(lVar13);
    lVar13 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    iVar1 = *(int *)(lVar13 + 0x30);
    func_0x000103182080(lVar11,lVar14,0x103182014);
    *(char *)(lVar14 + iVar1) = (char)lVar19;
    lVar13 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar14,lVar13,0);
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar14,0,1,lVar13);
    lVar13 = plVar16[0x18];
    lVar14 = plVar16[0x15];
    lVar19 = plVar16[0x11];
    lVar11 = plVar16[0x12];
    func_0x000107c615c0(plVar16[0x19]);
    func_0x000107c615c0(lVar13);
    func_0x000107c615c0(lVar14);
    func_0x000107c615c0(lVar11);
    func_0x000107c615c0(lVar19);
    UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010318112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    plVar3 = (long *)0x70;
    func_0x000107c615b8();
    plVar16[0x24] = (long)plVar3;
    UNRECOVERED_JUMPTABLE = FUN_103181190;
LAB_103181148:
    *plVar3 = (long)plVar16;
    plVar3[1] = (long)UNRECOVERED_JUMPTABLE;
    lVar13 = plVar16[0x10];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3[0xb] = plVar16[0x12];
      plVar3[0xc] = lVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        UNRECOVERED_JUMPTABLE = FUN_103181ba4;
      }
      else {
        func_0x000107c60e78();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar10 = (undefined8 *)plVar3[0xb];
        uVar18 = *puVar10;
        func_0x000107c53fcc(uVar18);
        func_0x000107c5bdf4(uVar18);
        lVar12 = 0;
        func_0x000103182014();
        plVar3[0xd] = lVar12;
        plVar16 = *(long **)((long)puVar10 + (long)*(int *)(lVar12 + 0x18));
        plVar3[2] = (long)plVar3;
        plVar3[3] = (long)FUN_103181c58;
        func_0x000107c61448(plVar3 + 2,0);
        FUN_103183860();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
          UNRECOVERED_JUMPTABLE = (code *)(plVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x000107c60e78();
        lVar12 = *plVar3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
        {
          func_0x000107c60e78();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar19 = *(long *)(lVar12 + 0x68);
          puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar6 = puVar5;
          func_0x000107c5ed90((long)*(int *)(lVar19 + 0x14));
          *(undefined8 *)(lVar12 + 0x50) = 0;
          puVar7 = puVar5;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar5);
          uVar18 = *(undefined8 *)(lVar12 + 0x50);
          if ((int)puVar7 == 0) {
            uVar8 = uVar18;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(uVar8);
            func_0x000107c61654();
            func_0x000107c614ac(uVar18);
          }
          else {
            func_0x000107c61174(uVar18);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
            func_0x000107c60e78();
            lVar12 = *plVar16;
            *(long *)UNRECOVERED_JUMPTABLE = lVar12;
            func_0x000107c6157c(lVar12);
            return (code *)(lVar12 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return UNRECOVERED_JUMPTABLE;
        }
        UNRECOVERED_JUMPTABLE = FUN_103181cc4;
      }
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*plVar16;
  func_0x000107c615c0(*(undefined8 *)(*plVar16 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    UNRECOVERED_JUMPTABLE = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE = (code *)plVar3[0x1e];
    lVar13 = plVar3[0x19];
    lVar12 = plVar3[0x16];
    lVar19 = plVar3[0x12];
    lVar14 = plVar3[0xf];
    func_0x000107c61170(plVar3[0x1c]);
    (*UNRECOVERED_JUMPTABLE)(lVar13,lVar12);
    func_0x0001031820c4(lVar19,0x103182014);
    lVar12 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar14,lVar12,2);
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar14,0,1,lVar12);
    lVar12 = plVar3[0x18];
    lVar14 = plVar3[0x15];
    lVar13 = plVar3[0x11];
    lVar19 = plVar3[0x12];
    func_0x000107c615c0(plVar3[0x19]);
    func_0x000107c615c0(lVar12);
    func_0x000107c615c0(lVar14);
    func_0x000107c615c0(lVar19);
    func_0x000107c615c0(lVar13);
    UNRECOVERED_JUMPTABLE = (code *)plVar3[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar16 = (long *)*plVar3;
    func_0x000107c615c0(*(undefined8 *)(*plVar3 + 0x128));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      UNRECOVERED_JUMPTABLE = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE = (code *)plVar16[0x1e];
      lVar13 = plVar16[0x19];
      lVar12 = plVar16[0x16];
      lVar19 = plVar16[0x12];
      lVar14 = plVar16[0xf];
      func_0x000107c61170(plVar16[0x1c]);
      (*UNRECOVERED_JUMPTABLE)(lVar13,lVar12);
      func_0x0001031820c4(lVar19,0x103182014);
      lVar12 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar14,1,1,lVar12);
      lVar12 = plVar16[0x18];
      lVar14 = plVar16[0x15];
      lVar13 = plVar16[0x11];
      lVar19 = plVar16[0x12];
      func_0x000107c615c0(plVar16[0x19]);
      func_0x000107c615c0(lVar12);
      func_0x000107c615c0(lVar14);
      func_0x000107c615c0(lVar19);
      func_0x000107c615c0(lVar13);
      UNRECOVERED_JUMPTABLE = (code *)plVar16[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      lVar12 = *plVar16;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
        func_0x000107c60e78();
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar18 = *(undefined8 *)(lVar12 + 0xf8);
        uVar8 = *(undefined8 *)(lVar12 + 0x100);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0xf0);
        uVar17 = *(undefined8 *)(lVar12 + 200);
        uVar15 = *(undefined8 *)(lVar12 + 0xb0);
        puVar20 = *(undefined8 **)(lVar12 + 0x78);
        func_0x000107c61170(*(undefined8 *)(lVar12 + 0xe0));
        (*UNRECOVERED_JUMPTABLE)(uVar17,uVar15);
        *puVar20 = uVar18;
        puVar20[1] = uVar8;
        lVar13 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar20,lVar13,1);
        pcVar9 = (code *)0x0;
        puVar10 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(puVar20,0,1,lVar13);
        uVar18 = *(undefined8 *)(lVar12 + 0xc0);
        uVar15 = *(undefined8 *)(lVar12 + 0xa8);
        uVar8 = *(undefined8 *)(lVar12 + 0x88);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar12 + 200));
        func_0x000107c615c0(uVar18);
        func_0x000107c615c0(uVar15);
        func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
        func_0x000107c615c0(uVar8);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar12 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return UNRECOVERED_JUMPTABLE_00;
        }
        func_0x000107c60e78();
        lVar12 = 0;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
        pcVar4 = (code *)((long)&uStack_240 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        pcVar21 = *(code **)(extraout_x12 + 0x10);
        (*pcVar21)(pcVar4,UNRECOVERED_JUMPTABLE_00,lVar12);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar18 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar18);
        func_0x0001010416fc(pcVar4,uVar18);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          UNRECOVERED_JUMPTABLE = pcVar4;
          func_0x000107c4ee28();
          func_0x000107c61170(pcVar4);
          if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
            uStack_238 = 7;
            uStack_240 = 0;
            uVar18 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar18 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_240,&UNK_1106185a0,uVar18);
            }
            func_0x000107c61170(pcVar4);
            uVar18 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            UNRECOVERED_JUMPTABLE = pcVar4;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)UNRECOVERED_JUMPTABLE != 0) {
              lVar13 = 0;
              func_0x000103182014();
              (*pcVar21)((long)extraout_x8 + (long)*(int *)(lVar13 + 0x14),UNRECOVERED_JUMPTABLE_00,
                         lVar12);
              *extraout_x8 = (ulong)pcVar4;
              *(code **)((long)extraout_x8 + (long)*(int *)(lVar13 + 0x18)) = pcVar9;
              func_0x000107c61174(pcVar9);
              return pcVar9;
            }
            uStack_238 = 8;
            uStack_240 = 0;
            uVar18 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar18 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_240,&UNK_1106185a0,uVar18);
            }
            func_0x000107c61170(pcVar4);
            uVar18 = 8;
          }
        }
        else {
          uStack_238 = 6;
          uStack_240 = 0;
          uVar18 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar18 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_240,&UNK_1106185a0,uVar18);
          }
          func_0x000107c614ac(UNRECOVERED_JUMPTABLE);
          uVar18 = 6;
          pcVar4 = UNRECOVERED_JUMPTABLE;
        }
        *puVar10 = 0;
        puVar10[1] = uVar18;
        return pcVar4;
      }
      UNRECOVERED_JUMPTABLE = FUN_1031814d8;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 103180f58; end: 103180fd3;  */

code * FUN_103180f58(undefined1 param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar4;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long *unaff_x22;
  long *plVar19;
  long lVar20;
  code *pcVar21;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  *(undefined1 *)(lVar12 + 0x68) = param_1;
  *(long **)(lVar12 + 0x60) = unaff_x22;
  uVar2 = *(ulong *)(lVar12 + 0x118);
  plVar19 = (long *)*unaff_x22;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    UNRECOVERED_JUMPTABLE_01 = FUN_103180fd4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd5c();
  if ((uVar2 & 1) == 0) {
    if ((char)plVar19[0xd] != '\x01') {
LAB_103181130:
      plVar3 = (long *)0x70;
      func_0x000107c615b8();
      plVar19[0x25] = (long)plVar3;
      UNRECOVERED_JUMPTABLE_01 = FUN_103181308;
      goto LAB_103181148;
    }
    iVar1 = (int)plVar19[0x22];
    func_0x000107c4a2f8();
    if (iVar1 == 0) goto LAB_103181130;
    lVar12 = plVar19[0x1c];
    lVar13 = plVar19[0x12];
    lVar17 = plVar19[0x26];
    lVar20 = plVar19[0xf];
    (*(code *)plVar19[0x1e])(plVar19[0x19],plVar19[0x16]);
    func_0x000107c61170(lVar12);
    lVar12 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    iVar1 = *(int *)(lVar12 + 0x30);
    func_0x000103182080(lVar13,lVar20,0x103182014);
    *(char *)(lVar20 + iVar1) = (char)lVar17;
    lVar12 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar20,lVar12,0);
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar20,0,1,lVar12);
    lVar12 = plVar19[0x18];
    lVar20 = plVar19[0x15];
    lVar17 = plVar19[0x11];
    lVar13 = plVar19[0x12];
    func_0x000107c615c0(plVar19[0x19]);
    func_0x000107c615c0(lVar12);
    func_0x000107c615c0(lVar20);
    func_0x000107c615c0(lVar13);
    func_0x000107c615c0(lVar17);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar19[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010318112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  else {
    plVar3 = (long *)0x70;
    func_0x000107c615b8();
    plVar19[0x24] = (long)plVar3;
    UNRECOVERED_JUMPTABLE_01 = FUN_103181190;
LAB_103181148:
    *plVar3 = (long)plVar19;
    plVar3[1] = (long)UNRECOVERED_JUMPTABLE_01;
    lVar12 = plVar19[0x10];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3[0xb] = plVar19[0x12];
      plVar3[0xc] = lVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        UNRECOVERED_JUMPTABLE_01 = FUN_103181ba4;
      }
      else {
        func_0x000107c60e78();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar10 = (undefined8 *)plVar3[0xb];
        uVar16 = *puVar10;
        func_0x000107c53fcc(uVar16);
        func_0x000107c5bdf4(uVar16);
        lVar11 = 0;
        func_0x000103182014();
        plVar3[0xd] = lVar11;
        plVar19 = *(long **)((long)puVar10 + (long)*(int *)(lVar11 + 0x18));
        plVar3[2] = (long)plVar3;
        plVar3[3] = (long)FUN_103181c58;
        func_0x000107c61448(plVar3 + 2,0);
        FUN_103183860();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
          UNRECOVERED_JUMPTABLE_01 = (code *)(plVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE_01);
          return UNRECOVERED_JUMPTABLE_01;
        }
        func_0x000107c60e78();
        lVar11 = *plVar3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
        {
          func_0x000107c60e78();
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar17 = *(long *)(lVar11 + 0x68);
          puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar6 = puVar5;
          func_0x000107c5ed90((long)*(int *)(lVar17 + 0x14));
          *(undefined8 *)(lVar11 + 0x50) = 0;
          puVar7 = puVar5;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar5);
          uVar16 = *(undefined8 *)(lVar11 + 0x50);
          if ((int)puVar7 == 0) {
            uVar8 = uVar16;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(uVar8);
            func_0x000107c61654();
            func_0x000107c614ac(uVar16);
          }
          else {
            func_0x000107c61174(uVar16);
          }
          UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar11 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
            func_0x000107c60e78();
            lVar11 = *plVar19;
            *(long *)UNRECOVERED_JUMPTABLE_01 = lVar11;
            func_0x000107c6157c(lVar11);
            return (code *)(lVar11 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return UNRECOVERED_JUMPTABLE_01;
        }
        UNRECOVERED_JUMPTABLE_01 = FUN_103181cc4;
      }
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*plVar19;
  func_0x000107c615c0(*(undefined8 *)(*plVar19 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    UNRECOVERED_JUMPTABLE_01 = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar3[0x1e];
    lVar12 = plVar3[0x19];
    lVar11 = plVar3[0x16];
    lVar17 = plVar3[0x12];
    lVar20 = plVar3[0xf];
    func_0x000107c61170(plVar3[0x1c]);
    (*UNRECOVERED_JUMPTABLE_01)(lVar12,lVar11);
    func_0x0001031820c4(lVar17,0x103182014);
    lVar11 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar20,lVar11,2);
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar20,0,1,lVar11);
    lVar11 = plVar3[0x18];
    lVar20 = plVar3[0x15];
    lVar12 = plVar3[0x11];
    lVar17 = plVar3[0x12];
    func_0x000107c615c0(plVar3[0x19]);
    func_0x000107c615c0(lVar11);
    func_0x000107c615c0(lVar20);
    func_0x000107c615c0(lVar17);
    func_0x000107c615c0(lVar12);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar3[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19 = (long *)*plVar3;
    func_0x000107c615c0(*(undefined8 *)(*plVar3 + 0x128));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      UNRECOVERED_JUMPTABLE_01 = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_01 = (code *)plVar19[0x1e];
      lVar12 = plVar19[0x19];
      lVar11 = plVar19[0x16];
      lVar17 = plVar19[0x12];
      lVar20 = plVar19[0xf];
      func_0x000107c61170(plVar19[0x1c]);
      (*UNRECOVERED_JUMPTABLE_01)(lVar12,lVar11);
      func_0x0001031820c4(lVar17,0x103182014);
      lVar11 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar20,1,1,lVar11);
      lVar11 = plVar19[0x18];
      lVar20 = plVar19[0x15];
      lVar12 = plVar19[0x11];
      lVar17 = plVar19[0x12];
      func_0x000107c615c0(plVar19[0x19]);
      func_0x000107c615c0(lVar11);
      func_0x000107c615c0(lVar20);
      func_0x000107c615c0(lVar17);
      func_0x000107c615c0(lVar12);
      UNRECOVERED_JUMPTABLE_01 = (code *)plVar19[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_01)();
        return UNRECOVERED_JUMPTABLE_01;
      }
      func_0x000107c60e78();
      lVar11 = *plVar19;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
        func_0x000107c60e78();
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar16 = *(undefined8 *)(lVar11 + 0xf8);
        uVar8 = *(undefined8 *)(lVar11 + 0x100);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar11 + 0xf0);
        uVar15 = *(undefined8 *)(lVar11 + 200);
        uVar14 = *(undefined8 *)(lVar11 + 0xb0);
        puVar18 = *(undefined8 **)(lVar11 + 0x78);
        func_0x000107c61170(*(undefined8 *)(lVar11 + 0xe0));
        (*UNRECOVERED_JUMPTABLE_01)(uVar15,uVar14);
        *puVar18 = uVar16;
        puVar18[1] = uVar8;
        lVar12 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar18,lVar12,1);
        pcVar9 = (code *)0x0;
        puVar10 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(puVar18,0,1,lVar12);
        uVar16 = *(undefined8 *)(lVar11 + 0xc0);
        uVar14 = *(undefined8 *)(lVar11 + 0xa8);
        uVar8 = *(undefined8 *)(lVar11 + 0x88);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar11 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar11 + 200));
        func_0x000107c615c0(uVar16);
        func_0x000107c615c0(uVar14);
        func_0x000107c615c0(UNRECOVERED_JUMPTABLE_01);
        func_0x000107c615c0(uVar8);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar11 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return UNRECOVERED_JUMPTABLE_00;
        }
        func_0x000107c60e78();
        lVar11 = 0;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
        pcVar4 = (code *)((long)&uStack_200 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        pcVar21 = *(code **)(extraout_x12 + 0x10);
        (*pcVar21)(pcVar4,UNRECOVERED_JUMPTABLE_00,lVar11);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar16 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar16);
        func_0x0001010416fc(pcVar4,uVar16);
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          UNRECOVERED_JUMPTABLE_01 = pcVar4;
          func_0x000107c4ee28();
          func_0x000107c61170(pcVar4);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            uStack_1f8 = 7;
            uStack_200 = 0;
            uVar16 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar16 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_200,&UNK_1106185a0,uVar16);
            }
            func_0x000107c61170(pcVar4);
            uVar16 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            UNRECOVERED_JUMPTABLE_01 = pcVar4;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)UNRECOVERED_JUMPTABLE_01 != 0) {
              lVar12 = 0;
              func_0x000103182014();
              (*pcVar21)((long)extraout_x8 + (long)*(int *)(lVar12 + 0x14),UNRECOVERED_JUMPTABLE_00,
                         lVar11);
              *extraout_x8 = (ulong)pcVar4;
              *(code **)((long)extraout_x8 + (long)*(int *)(lVar12 + 0x18)) = pcVar9;
              func_0x000107c61174(pcVar9);
              return pcVar9;
            }
            uStack_1f8 = 8;
            uStack_200 = 0;
            uVar16 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar16 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_200,&UNK_1106185a0,uVar16);
            }
            func_0x000107c61170(pcVar4);
            uVar16 = 8;
          }
        }
        else {
          uStack_1f8 = 6;
          uStack_200 = 0;
          uVar16 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar16 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_200,&UNK_1106185a0,uVar16);
          }
          func_0x000107c614ac(UNRECOVERED_JUMPTABLE_01);
          uVar16 = 6;
          pcVar4 = UNRECOVERED_JUMPTABLE_01;
        }
        *puVar10 = 0;
        puVar10[1] = uVar16;
        return pcVar4;
      }
      UNRECOVERED_JUMPTABLE_01 = FUN_1031814d8;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_01,0,0);
  return UNRECOVERED_JUMPTABLE_01;
}



/* Entry: 103180fd4; end: 10318118f;  */

code * FUN_103180fd4(ulong param_1)

{
  int iVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE_01;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *unaff_x22;
  long lVar19;
  code *pcVar20;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    if ((char)unaff_x22[0xd] != '\x01') {
LAB_103181130:
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      unaff_x22[0x25] = (long)plVar2;
      UNRECOVERED_JUMPTABLE_01 = FUN_103181308;
      goto LAB_103181148;
    }
    iVar1 = (int)unaff_x22[0x22];
    func_0x000107c4a2f8();
    if (iVar1 == 0) goto LAB_103181130;
    lVar13 = unaff_x22[0x1c];
    lVar11 = unaff_x22[0x12];
    lVar17 = unaff_x22[0x26];
    lVar19 = unaff_x22[0xf];
    (*(code *)unaff_x22[0x1e])(unaff_x22[0x19],unaff_x22[0x16]);
    func_0x000107c61170(lVar13);
    lVar13 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    iVar1 = *(int *)(lVar13 + 0x30);
    func_0x000103182080(lVar11,lVar19,0x103182014);
    *(char *)(lVar19 + iVar1) = (char)lVar17;
    lVar13 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar19,lVar13,0);
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar19,0,1,lVar13);
    lVar13 = unaff_x22[0x18];
    lVar19 = unaff_x22[0x15];
    lVar17 = unaff_x22[0x11];
    lVar11 = unaff_x22[0x12];
    func_0x000107c615c0(unaff_x22[0x19]);
    func_0x000107c615c0(lVar13);
    func_0x000107c615c0(lVar19);
    func_0x000107c615c0(lVar11);
    func_0x000107c615c0(lVar17);
    UNRECOVERED_JUMPTABLE_01 = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010318112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
  }
  else {
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    unaff_x22[0x24] = (long)plVar2;
    UNRECOVERED_JUMPTABLE_01 = FUN_103181190;
LAB_103181148:
    *plVar2 = (long)unaff_x22;
    plVar2[1] = (long)UNRECOVERED_JUMPTABLE_01;
    lVar13 = unaff_x22[0x10];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar2[0xb] = unaff_x22[0x12];
      plVar2[0xc] = lVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        UNRECOVERED_JUMPTABLE_01 = FUN_103181ba4;
      }
      else {
        func_0x000107c60e78();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar9 = (undefined8 *)plVar2[0xb];
        uVar15 = *puVar9;
        func_0x000107c53fcc(uVar15);
        func_0x000107c5bdf4(uVar15);
        lVar10 = 0;
        func_0x000103182014();
        plVar2[0xd] = lVar10;
        plVar16 = *(long **)((long)puVar9 + (long)*(int *)(lVar10 + 0x18));
        plVar2[2] = (long)plVar2;
        plVar2[3] = (long)FUN_103181c58;
        func_0x000107c61448(plVar2 + 2,0);
        FUN_103183860();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
          UNRECOVERED_JUMPTABLE_01 = (code *)(plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE_01);
          return UNRECOVERED_JUMPTABLE_01;
        }
        func_0x000107c60e78();
        lVar10 = *plVar2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
        {
          func_0x000107c60e78();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar17 = *(long *)(lVar10 + 0x68);
          puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar5 = puVar4;
          func_0x000107c5ed90((long)*(int *)(lVar17 + 0x14));
          *(undefined8 *)(lVar10 + 0x50) = 0;
          puVar6 = puVar4;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar4);
          uVar15 = *(undefined8 *)(lVar10 + 0x50);
          if ((int)puVar6 == 0) {
            uVar7 = uVar15;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(uVar7);
            func_0x000107c61654();
            func_0x000107c614ac(uVar15);
          }
          else {
            func_0x000107c61174(uVar15);
          }
          UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar10 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
            func_0x000107c60e78();
            lVar10 = *plVar16;
            *(long *)UNRECOVERED_JUMPTABLE_01 = lVar10;
            func_0x000107c6157c(lVar10);
            return (code *)(lVar10 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return UNRECOVERED_JUMPTABLE_01;
        }
        UNRECOVERED_JUMPTABLE_01 = FUN_103181cc4;
      }
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE_01 = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar2[0x1e];
    lVar13 = plVar2[0x19];
    lVar10 = plVar2[0x16];
    lVar17 = plVar2[0x12];
    lVar19 = plVar2[0xf];
    func_0x000107c61170(plVar2[0x1c]);
    (*UNRECOVERED_JUMPTABLE_01)(lVar13,lVar10);
    func_0x0001031820c4(lVar17,0x103182014);
    lVar10 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar19,lVar10,2);
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar19,0,1,lVar10);
    lVar10 = plVar2[0x18];
    lVar19 = plVar2[0x15];
    lVar13 = plVar2[0x11];
    lVar17 = plVar2[0x12];
    func_0x000107c615c0(plVar2[0x19]);
    func_0x000107c615c0(lVar10);
    func_0x000107c615c0(lVar19);
    func_0x000107c615c0(lVar17);
    func_0x000107c615c0(lVar13);
    UNRECOVERED_JUMPTABLE_01 = (code *)plVar2[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_01;
    }
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar16 = (long *)*plVar2;
    func_0x000107c615c0(*(undefined8 *)(*plVar2 + 0x128));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      UNRECOVERED_JUMPTABLE_01 = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_01 = (code *)plVar16[0x1e];
      lVar13 = plVar16[0x19];
      lVar10 = plVar16[0x16];
      lVar17 = plVar16[0x12];
      lVar19 = plVar16[0xf];
      func_0x000107c61170(plVar16[0x1c]);
      (*UNRECOVERED_JUMPTABLE_01)(lVar13,lVar10);
      func_0x0001031820c4(lVar17,0x103182014);
      lVar10 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar19,1,1,lVar10);
      lVar10 = plVar16[0x18];
      lVar19 = plVar16[0x15];
      lVar13 = plVar16[0x11];
      lVar17 = plVar16[0x12];
      func_0x000107c615c0(plVar16[0x19]);
      func_0x000107c615c0(lVar10);
      func_0x000107c615c0(lVar19);
      func_0x000107c615c0(lVar17);
      func_0x000107c615c0(lVar13);
      UNRECOVERED_JUMPTABLE_01 = (code *)plVar16[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_01)();
        return UNRECOVERED_JUMPTABLE_01;
      }
      func_0x000107c60e78();
      lVar10 = *plVar16;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
        func_0x000107c60e78();
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar15 = *(undefined8 *)(lVar10 + 0xf8);
        uVar7 = *(undefined8 *)(lVar10 + 0x100);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar10 + 0xf0);
        uVar14 = *(undefined8 *)(lVar10 + 200);
        uVar12 = *(undefined8 *)(lVar10 + 0xb0);
        puVar18 = *(undefined8 **)(lVar10 + 0x78);
        func_0x000107c61170(*(undefined8 *)(lVar10 + 0xe0));
        (*UNRECOVERED_JUMPTABLE_01)(uVar14,uVar12);
        *puVar18 = uVar15;
        puVar18[1] = uVar7;
        lVar13 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar18,lVar13,1);
        pcVar8 = (code *)0x0;
        puVar9 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(puVar18,0,1,lVar13);
        uVar15 = *(undefined8 *)(lVar10 + 0xc0);
        uVar12 = *(undefined8 *)(lVar10 + 0xa8);
        uVar7 = *(undefined8 *)(lVar10 + 0x88);
        UNRECOVERED_JUMPTABLE_01 = *(code **)(lVar10 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar10 + 200));
        func_0x000107c615c0(uVar15);
        func_0x000107c615c0(uVar12);
        func_0x000107c615c0(UNRECOVERED_JUMPTABLE_01);
        func_0x000107c615c0(uVar7);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar10 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return UNRECOVERED_JUMPTABLE_00;
        }
        func_0x000107c60e78();
        lVar10 = 0;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
        pcVar3 = (code *)((long)&uStack_1e0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        pcVar20 = *(code **)(extraout_x12 + 0x10);
        (*pcVar20)(pcVar3,UNRECOVERED_JUMPTABLE_00,lVar10);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar15 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar15);
        func_0x0001010416fc(pcVar3,uVar15);
        if (UNRECOVERED_JUMPTABLE_01 == (code *)0x0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          UNRECOVERED_JUMPTABLE_01 = pcVar3;
          func_0x000107c4ee28();
          func_0x000107c61170(pcVar3);
          if (((ulong)UNRECOVERED_JUMPTABLE_01 & 1) == 0) {
            uStack_1d8 = 7;
            uStack_1e0 = 0;
            uVar15 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar15 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_1e0,&UNK_1106185a0,uVar15);
            }
            func_0x000107c61170(pcVar3);
            uVar15 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            UNRECOVERED_JUMPTABLE_01 = pcVar3;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)UNRECOVERED_JUMPTABLE_01 != 0) {
              lVar13 = 0;
              func_0x000103182014();
              (*pcVar20)((long)extraout_x8 + (long)*(int *)(lVar13 + 0x14),UNRECOVERED_JUMPTABLE_00,
                         lVar10);
              *extraout_x8 = (ulong)pcVar3;
              *(code **)((long)extraout_x8 + (long)*(int *)(lVar13 + 0x18)) = pcVar8;
              func_0x000107c61174(pcVar8);
              return pcVar8;
            }
            uStack_1d8 = 8;
            uStack_1e0 = 0;
            uVar15 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar15 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_1e0,&UNK_1106185a0,uVar15);
            }
            func_0x000107c61170(pcVar3);
            uVar15 = 8;
          }
        }
        else {
          uStack_1d8 = 6;
          uStack_1e0 = 0;
          uVar15 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar15 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_1e0,&UNK_1106185a0,uVar15);
          }
          func_0x000107c614ac(UNRECOVERED_JUMPTABLE_01);
          uVar15 = 6;
          pcVar3 = UNRECOVERED_JUMPTABLE_01;
        }
        *puVar9 = 0;
        puVar9[1] = uVar15;
        return pcVar3;
      }
      UNRECOVERED_JUMPTABLE_01 = FUN_1031814d8;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_01,0,0);
  return UNRECOVERED_JUMPTABLE_01;
}



/* Entry: 103181190; end: 103181203;  */

void FUN_103181190(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *unaff_x22;
  long *plVar13;
  long *plVar14;
  long lVar15;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar16;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x120));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    UNRECOVERED_JUMPTABLE = FUN_103181204;
  }
  else {
    func_0x000107c60e78();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE = (code *)plVar13[0x1e];
    lVar9 = plVar13[0x19];
    lVar6 = plVar13[0x16];
    lVar11 = plVar13[0x12];
    lVar15 = plVar13[0xf];
    func_0x000107c61170(plVar13[0x1c]);
    (*UNRECOVERED_JUMPTABLE)(lVar9,lVar6);
    func_0x0001031820c4(lVar11,0x103182014);
    lVar6 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(lVar15,lVar6,2);
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar15,0,1,lVar6);
    lVar6 = plVar13[0x18];
    lVar15 = plVar13[0x15];
    lVar9 = plVar13[0x11];
    lVar11 = plVar13[0x12];
    func_0x000107c615c0(plVar13[0x19]);
    func_0x000107c615c0(lVar6);
    func_0x000107c615c0(lVar15);
    func_0x000107c615c0(lVar11);
    func_0x000107c615c0(lVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar13[1])();
      return;
    }
    func_0x000107c60e78();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = (long *)*plVar13;
    func_0x000107c615c0(*(undefined8 *)(*plVar13 + 0x128));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      UNRECOVERED_JUMPTABLE = FUN_10318137c;
    }
    else {
      func_0x000107c60e78();
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE = (code *)plVar14[0x1e];
      lVar9 = plVar14[0x19];
      lVar6 = plVar14[0x16];
      lVar11 = plVar14[0x12];
      lVar15 = plVar14[0xf];
      func_0x000107c61170(plVar14[0x1c]);
      (*UNRECOVERED_JUMPTABLE)(lVar9,lVar6);
      func_0x0001031820c4(lVar11,0x103182014);
      lVar6 = 0;
      func_0x00010318203c();
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar15,1,1,lVar6);
      lVar6 = plVar14[0x18];
      lVar15 = plVar14[0x15];
      lVar9 = plVar14[0x11];
      lVar11 = plVar14[0x12];
      func_0x000107c615c0(plVar14[0x19]);
      func_0x000107c615c0(lVar6);
      func_0x000107c615c0(lVar15);
      func_0x000107c615c0(lVar11);
      func_0x000107c615c0(lVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar14[1])();
        return;
      }
      func_0x000107c60e78();
      lVar6 = *plVar14;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
        func_0x000107c60e78();
        lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar3 = *(undefined8 *)(lVar6 + 0xf8);
        uVar1 = *(undefined8 *)(lVar6 + 0x100);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0xf0);
        uVar10 = *(undefined8 *)(lVar6 + 200);
        uVar8 = *(undefined8 *)(lVar6 + 0xb0);
        puVar12 = *(undefined8 **)(lVar6 + 0x78);
        func_0x000107c61170(*(undefined8 *)(lVar6 + 0xe0));
        (*UNRECOVERED_JUMPTABLE)(uVar10,uVar8);
        *puVar12 = uVar3;
        puVar12[1] = uVar1;
        lVar9 = 0;
        func_0x00010318203c();
        func_0x000107c6159c(puVar12,lVar9,1);
        uVar8 = 0;
        puVar5 = (undefined8 *)0x1;
        (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar12,0,1,lVar9);
        uVar3 = *(undefined8 *)(lVar6 + 0xc0);
        uVar10 = *(undefined8 *)(lVar6 + 0xa8);
        uVar1 = *(undefined8 *)(lVar6 + 0x88);
        lVar9 = *(long *)(lVar6 + 0x90);
        func_0x000107c615c0(*(undefined8 *)(lVar6 + 200));
        func_0x000107c615c0(uVar3);
        func_0x000107c615c0(uVar10);
        func_0x000107c615c0(lVar9);
        func_0x000107c615c0(uVar1);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        func_0x000107c60e78();
        lVar6 = 0;
        func_0x000107c5ede0();
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
        uVar2 = (long)&uStack_1a0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
        pcVar16 = *(code **)(extraout_x12 + 0x10);
        (*pcVar16)(uVar2,UNRECOVERED_JUMPTABLE,lVar6);
        if (lRam0000000112f474e8 != -1) {
          func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
        }
        uVar3 = uRam0000000112f474f0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
        func_0x000107c61434(uVar3);
        func_0x0001010416fc(uVar2,uVar3);
        if (lVar9 == 0) {
          func_0x000107c61174();
          func_0x000107c5668c();
          uVar4 = uVar2;
          func_0x000107c4ee28();
          func_0x000107c61170(uVar2);
          if ((uVar4 & 1) == 0) {
            uStack_198 = 7;
            uStack_1a0 = 0;
            uVar3 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar3 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_1a0,&UNK_1106185a0,uVar3);
            }
            func_0x000107c61170(uVar2);
            uVar3 = 7;
          }
          else {
            if (lRam0000000112f47500 != -1) {
              func_0x000107c61568(0x112f47500,FUN_10317ffa0);
            }
            uVar4 = uVar2;
            func_0x000107c4fa98(uRam0000000112f47508);
            if ((int)uVar4 != 0) {
              lVar9 = 0;
              func_0x000103182014();
              (*pcVar16)((long)extraout_x8 + (long)*(int *)(lVar9 + 0x14),UNRECOVERED_JUMPTABLE,
                         lVar6);
              *extraout_x8 = uVar2;
              *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar9 + 0x18)) = uVar8;
              func_0x000107c61174(uVar8);
              return;
            }
            uStack_198 = 8;
            uStack_1a0 = 0;
            uVar3 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar3 != 0) {
              FUN_103182100();
              func_0x000107c61658(&uStack_1a0,&UNK_1106185a0,uVar3);
            }
            func_0x000107c61170(uVar2);
            uVar3 = 8;
          }
        }
        else {
          uStack_198 = 6;
          uStack_1a0 = 0;
          uVar3 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar3 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_1a0,&UNK_1106185a0,uVar3);
          }
          func_0x000107c614ac(lVar9);
          uVar3 = 6;
        }
        *puVar5 = 0;
        puVar5[1] = uVar3;
        return;
      }
      UNRECOVERED_JUMPTABLE = FUN_1031814d8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 103181204; end: 103181307;  */

void FUN_103181204(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *unaff_x22;
  long *plVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar15;
  undefined8 uStack_180;
  undefined8 uStack_178;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x1e];
  lVar9 = unaff_x22[0x19];
  lVar7 = unaff_x22[0x16];
  lVar11 = unaff_x22[0x12];
  lVar14 = unaff_x22[0xf];
  func_0x000107c61170(unaff_x22[0x1c]);
  (*UNRECOVERED_JUMPTABLE)(lVar9,lVar7);
  func_0x0001031820c4(lVar11,0x103182014);
  lVar7 = 0;
  func_0x00010318203c();
  func_0x000107c6159c(lVar14,lVar7,2);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar14,0,1,lVar7);
  lVar7 = unaff_x22[0x18];
  lVar14 = unaff_x22[0x15];
  lVar9 = unaff_x22[0x11];
  lVar11 = unaff_x22[0x12];
  func_0x000107c615c0(unaff_x22[0x19]);
  func_0x000107c615c0(lVar7);
  func_0x000107c615c0(lVar14);
  func_0x000107c615c0(lVar11);
  func_0x000107c615c0(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000103181300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x128));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    UNRECOVERED_JUMPTABLE = FUN_10318137c;
  }
  else {
    func_0x000107c60e78();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE = (code *)plVar13[0x1e];
    lVar9 = plVar13[0x19];
    lVar7 = plVar13[0x16];
    lVar11 = plVar13[0x12];
    lVar14 = plVar13[0xf];
    func_0x000107c61170(plVar13[0x1c]);
    (*UNRECOVERED_JUMPTABLE)(lVar9,lVar7);
    func_0x0001031820c4(lVar11,0x103182014);
    lVar7 = 0;
    func_0x00010318203c();
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar14,1,1,lVar7);
    lVar7 = plVar13[0x18];
    lVar14 = plVar13[0x15];
    lVar9 = plVar13[0x11];
    lVar11 = plVar13[0x12];
    func_0x000107c615c0(plVar13[0x19]);
    func_0x000107c615c0(lVar7);
    func_0x000107c615c0(lVar14);
    func_0x000107c615c0(lVar11);
    func_0x000107c615c0(lVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar13[1])();
      return;
    }
    func_0x000107c60e78();
    lVar7 = *plVar13;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar3 = *(undefined8 *)(lVar7 + 0xf8);
      uVar1 = *(undefined8 *)(lVar7 + 0x100);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0xf0);
      uVar10 = *(undefined8 *)(lVar7 + 200);
      uVar8 = *(undefined8 *)(lVar7 + 0xb0);
      puVar12 = *(undefined8 **)(lVar7 + 0x78);
      func_0x000107c61170(*(undefined8 *)(lVar7 + 0xe0));
      (*UNRECOVERED_JUMPTABLE)(uVar10,uVar8);
      *puVar12 = uVar3;
      puVar12[1] = uVar1;
      lVar9 = 0;
      func_0x00010318203c();
      func_0x000107c6159c(puVar12,lVar9,1);
      uVar8 = 0;
      puVar5 = (undefined8 *)0x1;
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar12,0,1,lVar9);
      uVar3 = *(undefined8 *)(lVar7 + 0xc0);
      uVar10 = *(undefined8 *)(lVar7 + 0xa8);
      uVar1 = *(undefined8 *)(lVar7 + 0x88);
      lVar9 = *(long *)(lVar7 + 0x90);
      func_0x000107c615c0(*(undefined8 *)(lVar7 + 200));
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar10);
      func_0x000107c615c0(lVar9);
      func_0x000107c615c0(uVar1);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      lVar7 = 0;
      func_0x000107c5ede0();
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      uVar2 = (long)&uStack_180 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      pcVar15 = *(code **)(extraout_x12 + 0x10);
      (*pcVar15)(uVar2,UNRECOVERED_JUMPTABLE,lVar7);
      if (lRam0000000112f474e8 != -1) {
        func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
      }
      uVar3 = uRam0000000112f474f0;
      func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
      func_0x000107c61434(uVar3);
      func_0x0001010416fc(uVar2,uVar3);
      if (lVar9 == 0) {
        func_0x000107c61174();
        func_0x000107c5668c();
        uVar4 = uVar2;
        func_0x000107c4ee28();
        func_0x000107c61170(uVar2);
        if ((uVar4 & 1) == 0) {
          uStack_178 = 7;
          uStack_180 = 0;
          uVar3 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar3 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_180,&UNK_1106185a0,uVar3);
          }
          func_0x000107c61170(uVar2);
          uVar3 = 7;
        }
        else {
          if (lRam0000000112f47500 != -1) {
            func_0x000107c61568(0x112f47500,FUN_10317ffa0);
          }
          uVar4 = uVar2;
          func_0x000107c4fa98(uRam0000000112f47508);
          if ((int)uVar4 != 0) {
            lVar9 = 0;
            func_0x000103182014();
            (*pcVar15)((long)extraout_x8 + (long)*(int *)(lVar9 + 0x14),UNRECOVERED_JUMPTABLE,lVar7)
            ;
            *extraout_x8 = uVar2;
            *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar9 + 0x18)) = uVar8;
            func_0x000107c61174(uVar8);
            return;
          }
          uStack_178 = 8;
          uStack_180 = 0;
          uVar3 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar3 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_180,&UNK_1106185a0,uVar3);
          }
          func_0x000107c61170(uVar2);
          uVar3 = 8;
        }
      }
      else {
        uStack_178 = 6;
        uStack_180 = 0;
        uVar3 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar3 != 0) {
          FUN_103182100();
          func_0x000107c61658(&uStack_180,&UNK_1106185a0,uVar3);
        }
        func_0x000107c614ac(lVar9);
        uVar3 = 6;
      }
      *puVar5 = 0;
      puVar5[1] = uVar3;
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_1031814d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 103181308; end: 10318137b;  */

void FUN_103181308(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *unaff_x22;
  long *plVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar15;
  undefined8 uStack_140;
  undefined8 uStack_138;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x128));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    UNRECOVERED_JUMPTABLE = FUN_10318137c;
  }
  else {
    func_0x000107c60e78();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    UNRECOVERED_JUMPTABLE = (code *)plVar13[0x1e];
    lVar9 = plVar13[0x19];
    lVar6 = plVar13[0x16];
    lVar11 = plVar13[0x12];
    lVar14 = plVar13[0xf];
    func_0x000107c61170(plVar13[0x1c]);
    (*UNRECOVERED_JUMPTABLE)(lVar9,lVar6);
    func_0x0001031820c4(lVar11,0x103182014);
    lVar6 = 0;
    func_0x00010318203c();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar14,1,1,lVar6);
    lVar6 = plVar13[0x18];
    lVar14 = plVar13[0x15];
    lVar9 = plVar13[0x11];
    lVar11 = plVar13[0x12];
    func_0x000107c615c0(plVar13[0x19]);
    func_0x000107c615c0(lVar6);
    func_0x000107c615c0(lVar14);
    func_0x000107c615c0(lVar11);
    func_0x000107c615c0(lVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar13[1])();
      return;
    }
    func_0x000107c60e78();
    lVar6 = *plVar13;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar3 = *(undefined8 *)(lVar6 + 0xf8);
      uVar1 = *(undefined8 *)(lVar6 + 0x100);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0xf0);
      uVar10 = *(undefined8 *)(lVar6 + 200);
      uVar8 = *(undefined8 *)(lVar6 + 0xb0);
      puVar12 = *(undefined8 **)(lVar6 + 0x78);
      func_0x000107c61170(*(undefined8 *)(lVar6 + 0xe0));
      (*UNRECOVERED_JUMPTABLE)(uVar10,uVar8);
      *puVar12 = uVar3;
      puVar12[1] = uVar1;
      lVar9 = 0;
      func_0x00010318203c();
      func_0x000107c6159c(puVar12,lVar9,1);
      uVar8 = 0;
      puVar5 = (undefined8 *)0x1;
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar12,0,1,lVar9);
      uVar3 = *(undefined8 *)(lVar6 + 0xc0);
      uVar10 = *(undefined8 *)(lVar6 + 0xa8);
      uVar1 = *(undefined8 *)(lVar6 + 0x88);
      lVar9 = *(long *)(lVar6 + 0x90);
      func_0x000107c615c0(*(undefined8 *)(lVar6 + 200));
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar10);
      func_0x000107c615c0(lVar9);
      func_0x000107c615c0(uVar1);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      lVar6 = 0;
      func_0x000107c5ede0();
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      uVar2 = (long)&uStack_140 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      pcVar15 = *(code **)(extraout_x12 + 0x10);
      (*pcVar15)(uVar2,UNRECOVERED_JUMPTABLE,lVar6);
      if (lRam0000000112f474e8 != -1) {
        func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
      }
      uVar3 = uRam0000000112f474f0;
      func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
      func_0x000107c61434(uVar3);
      func_0x0001010416fc(uVar2,uVar3);
      if (lVar9 == 0) {
        func_0x000107c61174();
        func_0x000107c5668c();
        uVar4 = uVar2;
        func_0x000107c4ee28();
        func_0x000107c61170(uVar2);
        if ((uVar4 & 1) == 0) {
          uStack_138 = 7;
          uStack_140 = 0;
          uVar3 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar3 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_140,&UNK_1106185a0,uVar3);
          }
          func_0x000107c61170(uVar2);
          uVar3 = 7;
        }
        else {
          if (lRam0000000112f47500 != -1) {
            func_0x000107c61568(0x112f47500,FUN_10317ffa0);
          }
          uVar4 = uVar2;
          func_0x000107c4fa98(uRam0000000112f47508);
          if ((int)uVar4 != 0) {
            lVar9 = 0;
            func_0x000103182014();
            (*pcVar15)((long)extraout_x8 + (long)*(int *)(lVar9 + 0x14),UNRECOVERED_JUMPTABLE,lVar6)
            ;
            *extraout_x8 = uVar2;
            *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar9 + 0x18)) = uVar8;
            func_0x000107c61174(uVar8);
            return;
          }
          uStack_138 = 8;
          uStack_140 = 0;
          uVar3 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar3 != 0) {
            FUN_103182100();
            func_0x000107c61658(&uStack_140,&UNK_1106185a0,uVar3);
          }
          func_0x000107c61170(uVar2);
          uVar3 = 8;
        }
      }
      else {
        uStack_138 = 6;
        uStack_140 = 0;
        uVar3 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar3 != 0) {
          FUN_103182100();
          func_0x000107c61658(&uStack_140,&UNK_1106185a0,uVar3);
        }
        func_0x000107c614ac(lVar9);
        uVar3 = 6;
      }
      *puVar5 = 0;
      puVar5[1] = uVar3;
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_1031814d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 10318137c; end: 10318146b;  */

void FUN_10318137c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *unaff_x22;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar14;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x1e];
  lVar9 = unaff_x22[0x19];
  lVar7 = unaff_x22[0x16];
  lVar11 = unaff_x22[0x12];
  lVar13 = unaff_x22[0xf];
  func_0x000107c61170(unaff_x22[0x1c]);
  (*UNRECOVERED_JUMPTABLE)(lVar9,lVar7);
  func_0x0001031820c4(lVar11,0x103182014);
  lVar7 = 0;
  func_0x00010318203c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar13,1,1,lVar7);
  lVar7 = unaff_x22[0x18];
  lVar13 = unaff_x22[0x15];
  lVar9 = unaff_x22[0x11];
  lVar11 = unaff_x22[0x12];
  func_0x000107c615c0(unaff_x22[0x19]);
  func_0x000107c615c0(lVar7);
  func_0x000107c615c0(lVar13);
  func_0x000107c615c0(lVar11);
  func_0x000107c615c0(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000103181464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar3 = *(undefined8 *)(lVar7 + 0xf8);
    uVar1 = *(undefined8 *)(lVar7 + 0x100);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0xf0);
    uVar10 = *(undefined8 *)(lVar7 + 200);
    uVar8 = *(undefined8 *)(lVar7 + 0xb0);
    puVar12 = *(undefined8 **)(lVar7 + 0x78);
    func_0x000107c61170(*(undefined8 *)(lVar7 + 0xe0));
    (*UNRECOVERED_JUMPTABLE)(uVar10,uVar8);
    *puVar12 = uVar3;
    puVar12[1] = uVar1;
    lVar9 = 0;
    func_0x00010318203c();
    func_0x000107c6159c(puVar12,lVar9,1);
    uVar8 = 0;
    puVar5 = (undefined8 *)0x1;
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar12,0,1,lVar9);
    uVar3 = *(undefined8 *)(lVar7 + 0xc0);
    uVar10 = *(undefined8 *)(lVar7 + 0xa8);
    uVar1 = *(undefined8 *)(lVar7 + 0x88);
    lVar9 = *(long *)(lVar7 + 0x90);
    func_0x000107c615c0(*(undefined8 *)(lVar7 + 200));
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(lVar9);
    func_0x000107c615c0(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
    lVar7 = 0;
    func_0x000107c5ede0();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    uVar2 = (long)&uStack_120 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    pcVar14 = *(code **)(extraout_x12 + 0x10);
    (*pcVar14)(uVar2,UNRECOVERED_JUMPTABLE,lVar7);
    if (lRam0000000112f474e8 != -1) {
      func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
    }
    uVar3 = uRam0000000112f474f0;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
    func_0x000107c61434(uVar3);
    func_0x0001010416fc(uVar2,uVar3);
    if (lVar9 == 0) {
      func_0x000107c61174();
      func_0x000107c5668c();
      uVar4 = uVar2;
      func_0x000107c4ee28();
      func_0x000107c61170(uVar2);
      if ((uVar4 & 1) == 0) {
        uStack_118 = 7;
        uStack_120 = 0;
        uVar3 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar3 != 0) {
          FUN_103182100();
          func_0x000107c61658(&uStack_120,&UNK_1106185a0,uVar3);
        }
        func_0x000107c61170(uVar2);
        uVar3 = 7;
      }
      else {
        if (lRam0000000112f47500 != -1) {
          func_0x000107c61568(0x112f47500,FUN_10317ffa0);
        }
        uVar4 = uVar2;
        func_0x000107c4fa98(uRam0000000112f47508);
        if ((int)uVar4 != 0) {
          lVar9 = 0;
          func_0x000103182014();
          (*pcVar14)((long)extraout_x8 + (long)*(int *)(lVar9 + 0x14),UNRECOVERED_JUMPTABLE,lVar7);
          *extraout_x8 = uVar2;
          *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar9 + 0x18)) = uVar8;
          func_0x000107c61174(uVar8);
          return;
        }
        uStack_118 = 8;
        uStack_120 = 0;
        uVar3 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar3 != 0) {
          FUN_103182100();
          func_0x000107c61658(&uStack_120,&UNK_1106185a0,uVar3);
        }
        func_0x000107c61170(uVar2);
        uVar3 = 8;
      }
    }
    else {
      uStack_118 = 6;
      uStack_120 = 0;
      uVar3 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar3 != 0) {
        FUN_103182100();
        func_0x000107c61658(&uStack_120,&UNK_1106185a0,uVar3);
      }
      func_0x000107c614ac(lVar9);
      uVar3 = 6;
    }
    *puVar5 = 0;
    puVar5[1] = uVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031814d8,0,0);
  return;
}



/* Entry: 10318146c; end: 1031814d7;  */

void FUN_10318146c(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *unaff_x22;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  lVar11 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1031814d8,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(lVar11 + 0xf8);
  uVar1 = *(undefined8 *)(lVar11 + 0x100);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0xf0);
  uVar9 = *(undefined8 *)(lVar11 + 200);
  uVar8 = *(undefined8 *)(lVar11 + 0xb0);
  puVar10 = *(undefined8 **)(lVar11 + 0x78);
  func_0x000107c61170(*(undefined8 *)(lVar11 + 0xe0));
  (*UNRECOVERED_JUMPTABLE)(uVar9,uVar8);
  *puVar10 = uVar4;
  puVar10[1] = uVar1;
  lVar2 = 0;
  func_0x00010318203c();
  func_0x000107c6159c(puVar10,lVar2,1);
  uVar8 = 0;
  puVar6 = (undefined8 *)0x1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar10,0,1,lVar2);
  uVar4 = *(undefined8 *)(lVar11 + 0xc0);
  uVar9 = *(undefined8 *)(lVar11 + 0xa8);
  uVar1 = *(undefined8 *)(lVar11 + 0x88);
  lVar2 = *(long *)(lVar11 + 0x90);
  func_0x000107c615c0(*(undefined8 *)(lVar11 + 200));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(lVar2);
  func_0x000107c615c0(uVar1);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    func_0x000107c60e78();
    lVar11 = 0;
    func_0x000107c5ede0();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    uVar3 = (long)&uStack_e0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    pcVar12 = *(code **)(extraout_x12 + 0x10);
    (*pcVar12)(uVar3,UNRECOVERED_JUMPTABLE,lVar11);
    if (lRam0000000112f474e8 != -1) {
      func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
    }
    uVar4 = uRam0000000112f474f0;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
    func_0x000107c61434(uVar4);
    func_0x0001010416fc(uVar3,uVar4);
    if (lVar2 == 0) {
      func_0x000107c61174();
      func_0x000107c5668c();
      uVar5 = uVar3;
      func_0x000107c4ee28();
      func_0x000107c61170(uVar3);
      if ((uVar5 & 1) == 0) {
        uStack_d8 = 7;
        uStack_e0 = 0;
        uVar4 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_103182100();
          func_0x000107c61658(&uStack_e0,&UNK_1106185a0,uVar4);
        }
        func_0x000107c61170(uVar3);
        uVar4 = 7;
      }
      else {
        if (lRam0000000112f47500 != -1) {
          func_0x000107c61568(0x112f47500,FUN_10317ffa0);
        }
        uVar5 = uVar3;
        func_0x000107c4fa98(uRam0000000112f47508);
        if ((int)uVar5 != 0) {
          lVar2 = 0;
          func_0x000103182014();
          (*pcVar12)((long)extraout_x8 + (long)*(int *)(lVar2 + 0x14),UNRECOVERED_JUMPTABLE,lVar11);
          *extraout_x8 = uVar3;
          *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar2 + 0x18)) = uVar8;
          func_0x000107c61174(uVar8);
          return;
        }
        uStack_d8 = 8;
        uStack_e0 = 0;
        uVar4 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_103182100();
          func_0x000107c61658(&uStack_e0,&UNK_1106185a0,uVar4);
        }
        func_0x000107c61170(uVar3);
        uVar4 = 8;
      }
    }
    else {
      uStack_d8 = 6;
      uStack_e0 = 0;
      uVar4 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_103182100();
        func_0x000107c61658(&uStack_e0,&UNK_1106185a0,uVar4);
      }
      func_0x000107c614ac(lVar2);
      uVar4 = 6;
    }
    *puVar6 = 0;
    puVar6[1] = uVar4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1031814d8; end: 1031815d7;  */

void FUN_1031814d8(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar10 = *(undefined8 **)(unaff_x22 + 0x78);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  (*UNRECOVERED_JUMPTABLE)(uVar9,uVar8);
  *puVar10 = uVar4;
  puVar10[1] = uVar1;
  lVar2 = 0;
  func_0x00010318203c();
  func_0x000107c6159c(puVar10,lVar2,1);
  uVar8 = 0;
  puVar6 = (undefined8 *)0x1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar10,0,1,lVar2);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(lVar2);
  func_0x000107c615c0(uVar1);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x0001031815d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  lVar7 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  uVar3 = (long)&uStack_c0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pcVar11 = *(code **)(extraout_x12 + 0x10);
  (*pcVar11)(uVar3,UNRECOVERED_JUMPTABLE,lVar7);
  if (lRam0000000112f474e8 != -1) {
    func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
  }
  uVar4 = uRam0000000112f474f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
  func_0x000107c61434(uVar4);
  func_0x0001010416fc(uVar3,uVar4);
  if (lVar2 == 0) {
    func_0x000107c61174();
    func_0x000107c5668c();
    uVar5 = uVar3;
    func_0x000107c4ee28();
    func_0x000107c61170(uVar3);
    if ((uVar5 & 1) == 0) {
      uStack_b8 = 7;
      uStack_c0 = 0;
      uVar4 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_103182100();
        func_0x000107c61658(&uStack_c0,&UNK_1106185a0,uVar4);
      }
      func_0x000107c61170(uVar3);
      uVar4 = 7;
    }
    else {
      if (lRam0000000112f47500 != -1) {
        func_0x000107c61568(0x112f47500,FUN_10317ffa0);
      }
      uVar5 = uVar3;
      func_0x000107c4fa98(uRam0000000112f47508);
      if ((int)uVar5 != 0) {
        lVar2 = 0;
        func_0x000103182014();
        (*pcVar11)((long)extraout_x8 + (long)*(int *)(lVar2 + 0x14),UNRECOVERED_JUMPTABLE,lVar7);
        *extraout_x8 = uVar3;
        *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar2 + 0x18)) = uVar8;
        func_0x000107c61174(uVar8);
        return;
      }
      uStack_b8 = 8;
      uStack_c0 = 0;
      uVar4 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_103182100();
        func_0x000107c61658(&uStack_c0,&UNK_1106185a0,uVar4);
      }
      func_0x000107c61170(uVar3);
      uVar4 = 8;
    }
  }
  else {
    uStack_b8 = 6;
    uStack_c0 = 0;
    uVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar4 != 0) {
      FUN_103182100();
      func_0x000107c61658(&uStack_c0,&UNK_1106185a0,uVar4);
    }
    func_0x000107c614ac(lVar2);
    uVar4 = 6;
  }
  *puVar6 = 0;
  puVar6[1] = uVar4;
  return;
}



/* Entry: 1031815d8; end: 103181863;  */

void FUN_1031815d8(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar2 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar6 = *(code **)(extraout_x12 + 0x10);
  (*pcVar6)(uVar2,param_2,lVar1);
  if (lRam0000000112f474e8 != -1) {
    func_0x000107c61568(0x112f474e8,FUN_10317ffb8);
  }
  uVar3 = uRam0000000112f474f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50);
  func_0x000107c61434(uVar3);
  func_0x0001010416fc(uVar2,uVar3);
  if (unaff_x21 == 0) {
    func_0x000107c61174();
    func_0x000107c5668c();
    uVar4 = uVar2;
    func_0x000107c4ee28();
    func_0x000107c61170(uVar2);
    if ((uVar4 & 1) == 0) {
      uStack_68 = 7;
      uStack_70 = 0;
      uVar3 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar3 != 0) {
        FUN_103182100();
        func_0x000107c61658(&uStack_70,&UNK_1106185a0,uVar3);
      }
      func_0x000107c61170(uVar2);
      uVar3 = 7;
    }
    else {
      if (lRam0000000112f47500 != -1) {
        func_0x000107c61568(0x112f47500,FUN_10317ffa0);
      }
      uVar4 = uVar2;
      func_0x000107c4fa98(uRam0000000112f47508);
      if ((int)uVar4 != 0) {
        lVar5 = 0;
        func_0x000103182014();
        (*pcVar6)((long)param_1 + (long)*(int *)(lVar5 + 0x14),param_2,lVar1);
        *param_1 = uVar2;
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18)) = param_3;
        func_0x000107c61174(param_3);
        return;
      }
      uStack_68 = 8;
      uStack_70 = 0;
      uVar3 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar3 != 0) {
        FUN_103182100();
        func_0x000107c61658(&uStack_70,&UNK_1106185a0,uVar3);
      }
      func_0x000107c61170(uVar2);
      uVar3 = 8;
    }
  }
  else {
    uStack_68 = 6;
    uStack_70 = 0;
    uVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar3 != 0) {
      FUN_103182100();
      func_0x000107c61658(&uStack_70,&UNK_1106185a0,uVar3);
    }
    func_0x000107c614ac();
    uVar3 = 6;
  }
  *param_4 = 0;
  param_4[1] = uVar3;
  return;
}



/* Entry: 103181864; end: 10318187b;  */

void FUN_103181864(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318187c,0,0);
  return;
}



/* Entry: 10318187c; end: 1031818db;  */

void FUN_10318187c(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c41014(*(undefined8 *)(unaff_x22 + 0x10));
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1031818dc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(20000000);
  return;
}



/* Entry: 1031818dc; end: 103181937;  */

void FUN_1031818dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103181938;
  }
  else {
    *(long *)(lVar2 + 0x38) = unaff_x20;
    pcVar1 = FUN_103181a10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103181938; end: 103181a0f;  */

void FUN_103181938(void)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x22;
  double dVar4;
  double dVar5;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x20);
  dVar4 = *(double *)(unaff_x22 + 0x18);
  dVar5 = dVar4 + 0.01;
  func_0x000107c41014(*(undefined8 *)(unaff_x22 + 0x10));
  *(double *)(unaff_x22 + 0x30) = dVar4;
  if (dVar4 <= dVar5) {
    *(ulong *)(unaff_x22 + 0x20) = uVar3 + 0x14;
    if (0xe5 < uVar3) goto LAB_1031819f4;
    plVar1 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar1;
    pcVar2 = FUN_1031818dc;
  }
  else {
    *(ulong *)(unaff_x22 + 0x40) = uVar3 + 0x14;
    if (0xe5 < uVar3) {
LAB_1031819f4:
                    /* WARNING: Could not recover jumptable at 0x000103181a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(0);
      return;
    }
    plVar1 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar1;
    pcVar2 = FUN_103181a44;
  }
  *plVar1 = unaff_x22;
  plVar1[1] = (long)pcVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(20000000);
  return;
}



/* Entry: 103181a10; end: 103181a43;  */

void FUN_103181a10(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000103181a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 103181a44; end: 103181a9f;  */

void FUN_103181a44(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103181aa0;
  }
  else {
    *(long *)(lVar2 + 0x38) = unaff_x20;
    pcVar1 = FUN_103181a10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103181aa0; end: 103181b3f;  */

void FUN_103181aa0(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x22;
  double dVar3;
  double dVar4;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x40);
  dVar3 = *(double *)(unaff_x22 + 0x30);
  dVar4 = dVar3 + 0.01;
  func_0x000107c41014(*(undefined8 *)(unaff_x22 + 0x10));
  if ((dVar3 <= dVar4) && (*(ulong *)(unaff_x22 + 0x40) = uVar2 + 0x14, uVar2 < 0xe6)) {
    plVar1 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_103181a44;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (20000000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103181b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(dVar4 < dVar3);
  return;
}



/* Entry: 103181b40; end: 103181ba3;  */

code * FUN_103181b40(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0xb] = param_1;
  unaff_x22[0xc] = unaff_x20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    UNRECOVERED_JUMPTABLE = FUN_103181ba4;
  }
  else {
    func_0x000107c60e78();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = (undefined8 *)unaff_x22[0xb];
    uVar8 = *puVar1;
    func_0x000107c53fcc(uVar8);
    func_0x000107c5bdf4(uVar8);
    lVar6 = 0;
    func_0x000103182014();
    unaff_x22[0xd] = lVar6;
    plVar9 = *(long **)((long)puVar1 + (long)*(int *)(lVar6 + 0x18));
    unaff_x22[2] = (long)unaff_x22;
    unaff_x22[3] = (long)FUN_103181c58;
    func_0x000107c61448(unaff_x22 + 2,0);
    FUN_103183860();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
    func_0x000107c60e78();
    lVar6 = *unaff_x22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar10 = *(long *)(lVar6 + 0x68);
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5ed90((long)*(int *)(lVar10 + 0x14));
      *(undefined8 *)(lVar6 + 0x50) = 0;
      puVar4 = puVar2;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      uVar8 = *(undefined8 *)(lVar6 + 0x50);
      if ((int)puVar4 == 0) {
        uVar5 = uVar8;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(uVar5);
        func_0x000107c61654();
        func_0x000107c614ac(uVar8);
      }
      else {
        func_0x000107c61174(uVar8);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      lVar6 = *plVar9;
      *(long *)UNRECOVERED_JUMPTABLE = lVar6;
      func_0x000107c6157c(lVar6);
      return (code *)(lVar6 + 0x10);
    }
    UNRECOVERED_JUMPTABLE = FUN_103181cc4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 103181ba4; end: 103181c57;  */

code * FUN_103181ba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *unaff_x22;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)unaff_x22[0xb];
  uVar8 = *puVar1;
  func_0x000107c53fcc(uVar8,param_2,0);
  func_0x000107c5bdf4(uVar8);
  lVar2 = 0;
  func_0x000103182014();
  unaff_x22[0xd] = lVar2;
  plVar9 = *(long **)((long)puVar1 + (long)*(int *)(lVar2 + 0x18));
  unaff_x22[2] = (long)unaff_x22;
  unaff_x22[3] = (long)FUN_103181c58;
  func_0x000107c61448(unaff_x22 + 2,0);
  FUN_103183860();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar2 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    UNRECOVERED_JUMPTABLE = FUN_103181cc4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103181cc4,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(lVar2 + 0x68);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5ed90((long)*(int *)(lVar10 + 0x14));
  *(undefined8 *)(lVar2 + 0x50) = 0;
  puVar5 = puVar3;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  uVar8 = *(undefined8 *)(lVar2 + 0x50);
  if ((int)puVar5 == 0) {
    uVar6 = uVar8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar8);
  }
  else {
    func_0x000107c61174(uVar8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar2 = *plVar9;
  *(long *)UNRECOVERED_JUMPTABLE = lVar2;
  func_0x000107c6157c(lVar2);
  return (code *)(lVar2 + 0x10);
}



/* Entry: 103181c58; end: 103181cc3;  */

code * FUN_103181c58(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long lVar8;
  
  lVar8 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    UNRECOVERED_JUMPTABLE = FUN_103181cc4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103181cc4,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar8 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90((long)*(int *)(lVar6 + 0x14));
  *(undefined8 *)(lVar8 + 0x50) = 0;
  puVar3 = puVar1;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  uVar7 = *(undefined8 *)(lVar8 + 0x50);
  if ((int)puVar3 == 0) {
    uVar4 = uVar7;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x000107c614ac(uVar7);
  }
  else {
    func_0x000107c61174(uVar7);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar8 = *param_2;
  *(long *)UNRECOVERED_JUMPTABLE = lVar8;
  func_0x000107c6157c(lVar8);
  return (code *)(lVar8 + 0x10);
}



/* Entry: 103181cc4; end: 103181dcb;  */

code * FUN_103181cc4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(unaff_x22 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90((long)*(int *)(lVar6 + 0x14));
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  puVar3 = puVar1;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  if ((int)puVar3 == 0) {
    uVar4 = uVar7;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x000107c614ac(uVar7);
  }
  else {
    func_0x000107c61174(uVar7);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar5 = *param_2;
  *(long *)UNRECOVERED_JUMPTABLE = lVar5;
  func_0x000107c6157c(lVar5);
  return (code *)(lVar5 + 0x10);
}



/* Entry: 103181dcc; end: 103181e2b;  */

long FUN_103181dcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103181e2c; end: 103181f0b;  */

long FUN_103181e2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar3;
  (*(code *)**(undefined8 **)(lVar3 + -8))();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  func_0x000107c615f0();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 103181f0c; end: 103181f6b;  */

undefined8 * FUN_103181f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000834e4();
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c615e8(uVar1);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61170(uVar2);
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 103181f6c; end: 10318204f;  */

int FUN_103181f6c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103182050; end: 10318207f;  */

void FUN_103182050(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 103182080; end: 1031820ff;  */

undefined8 FUN_103182080(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103182100; end: 10318213f;  */

void FUN_103182100(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f474f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db94c00;
  func_0x000107c61520(&UNK_10db94c00,&UNK_1106185a0);
  puRam0000000112f474f8 = puVar1;
  return;
}



/* Entry: 103182140; end: 1031822fb;  */

/* WARNING: Possible PIC construction at 0x0001031822a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031822a4) */

long * FUN_103182140(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar8 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    func_0x00010318203c();
    lVar10 = *(long *)(lVar3 + -8);
    plVar4 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,1,lVar3);
    if ((int)plVar4 != 0) {
      uVar7 = *(undefined8 *)(lVar8 + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
      return param_1;
    }
    plVar4 = param_2;
    func_0x000107c614c4(param_2,lVar3);
    if ((int)plVar4 == 1) {
      uVar6 = param_2[1];
      if (uVar6 < 0xf) {
        lVar8 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = lVar8;
      }
      else {
        *param_1 = *param_2;
        param_1[1] = uVar6;
        func_0x000107c61434();
      }
      uVar7 = 1;
    }
    else {
      if ((int)plVar4 != 0) {
        uVar7 = *(undefined8 *)(lVar10 + 0x40);
        goto code_r0x000107c610b4;
      }
      lVar9 = *param_2;
      *param_1 = lVar9;
      lVar8 = 0;
      func_0x000103182014();
      iVar2 = *(int *)(lVar8 + 0x14);
      lVar5 = 0;
      func_0x000107c5ede0();
      pcVar11 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
      func_0x000107c61174(lVar9);
      (*pcVar11)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar5);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x18));
      func_0x000107c61174();
      lVar8 = 0x112f474e0;
      func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
      uVar7 = 0;
    }
    func_0x000107c6159c(param_1,lVar3,uVar7);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar8 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1031822fc; end: 1031823c7;  */

/* WARNING: Possible PIC construction at 0x000103182364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103182368) */

void FUN_1031822fc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0;
  func_0x00010318203c();
  puVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)puVar2 == 0) {
    puVar2 = param_1;
    func_0x000107c614c4(param_1,lVar1);
    if ((int)puVar2 == 1) {
      if (0xe < (ulong)param_1[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
        return;
      }
    }
    else if ((int)puVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
  }
  return;
}



/* Entry: 1031823c8; end: 10318282b;  */

/* WARNING: Possible PIC construction at 0x000103182504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103182508) */

undefined8 * FUN_1031823c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar2 = 0;
  func_0x00010318203c();
  lVar8 = *(long *)(lVar2 + -8);
  puVar3 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar2);
  if ((int)puVar3 != 0) {
    uVar7 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
    return param_1;
  }
  puVar3 = param_2;
  func_0x000107c614c4(param_2,lVar2);
  if ((int)puVar3 == 1) {
    uVar6 = param_2[1];
    if (uVar6 < 0xf) {
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar6;
      func_0x000107c61434();
    }
    uVar7 = 1;
  }
  else {
    if ((int)puVar3 != 0) {
      uVar7 = *(undefined8 *)(lVar8 + 0x40);
      goto code_r0x000107c610b4;
    }
    uVar7 = *param_2;
    *param_1 = uVar7;
    lVar4 = 0;
    func_0x000103182014();
    iVar1 = *(int *)(lVar4 + 0x14);
    lVar5 = 0;
    func_0x000107c5ede0();
    pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
    func_0x000107c61174(uVar7);
    (*pcVar9)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
    func_0x000107c61174();
    lVar4 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
    uVar7 = 0;
  }
  func_0x000107c6159c(param_1,lVar2,uVar7);
  (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar2);
  return param_1;
}



/* Entry: 10318282c; end: 10318295f;  */

/* WARNING: Possible PIC construction at 0x0001031828b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031828b8) */

undefined8 * FUN_10318282c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = 0;
  func_0x00010318203c();
  lVar7 = *(long *)(lVar2 + -8);
  puVar3 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar2);
  if ((int)puVar3 == 0) {
    puVar3 = param_2;
    func_0x000107c614c4(param_2,lVar2);
    if ((int)puVar3 == 0) {
      *param_1 = *param_2;
      lVar4 = 0;
      func_0x000103182014();
      iVar1 = *(int *)(lVar4 + 0x14);
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x20))
                ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
      lVar4 = 0x112f474e0;
      func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
      func_0x000107c6159c(param_1,lVar2,0);
      (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar2);
      return param_1;
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6);
  return param_1;
}



/* Entry: 103182960; end: 103182b73;  */

/* WARNING: Possible PIC construction at 0x0001031829e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031829e4) */

undefined8 * FUN_103182960(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar2 = 0;
  func_0x00010318203c();
  lVar8 = *(long *)(lVar2 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  puVar3 = param_1;
  (*pcVar9)(param_1,1,lVar2);
  puVar4 = param_2;
  (*pcVar9)(param_2,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 == 0) {
      if (param_1 != param_2) {
        func_0x0001031820c4(param_1,0x10318203c);
        puVar3 = param_2;
        func_0x000107c614c4(param_2,lVar2);
        if ((int)puVar3 != 0) {
          uVar7 = *(undefined8 *)(lVar8 + 0x40);
          goto code_r0x000107c610b4;
        }
        *param_1 = *param_2;
        lVar8 = 0;
        func_0x000103182014();
        iVar1 = *(int *)(lVar8 + 0x14);
        lVar5 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar5 + -8) + 0x20))
                  ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x18)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x18));
        lVar8 = 0x112f474e0;
        func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
        func_0x000107c6159c(param_1,lVar2,0);
      }
      return param_1;
    }
    func_0x0001031820c4(param_1,0x10318203c);
  }
  else if ((int)puVar4 == 0) {
    puVar3 = param_2;
    func_0x000107c614c4(param_2,lVar2);
    if ((int)puVar3 == 0) {
      *param_1 = *param_2;
      lVar5 = 0;
      func_0x000103182014();
      iVar1 = *(int *)(lVar5 + 0x14);
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))
                ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar6);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
      lVar5 = 0x112f474e0;
      func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
      func_0x000107c6159c(param_1,lVar2,0);
      (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar2);
      return param_1;
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x40);
    goto code_r0x000107c610b4;
  }
  uVar7 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
  return param_1;
}



/* Entry: 103182b74; end: 103182b8b;  */

void FUN_103182b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103182b8c; end: 103182bc3;  */

void FUN_103182b8c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010318203c();
                    /* WARNING: Could not recover jumptable at 0x000103182bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  return;
}



/* Entry: 103182bc4; end: 103182bc7;  */

void FUN_103182bc4(void)

{
  return;
}



/* Entry: 103182bc8; end: 103182c5b;  */

void FUN_103182bc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010318203c();
                    /* WARNING: Could not recover jumptable at 0x000103182c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,1,lVar1);
  return;
}



/* Entry: 103182c5c; end: 103182dbb;  */

long * FUN_103182c5c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar3 == 1) {
      uVar5 = param_2[1];
      if (uVar5 < 0xf) {
        lVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = lVar7;
      }
      else {
        *param_1 = *param_2;
        param_1[1] = uVar5;
        func_0x000107c61434();
      }
      uVar6 = 1;
    }
    else {
      if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar7 + 0x40));
        return param_1;
      }
      lVar8 = *param_2;
      *param_1 = lVar8;
      lVar7 = 0;
      func_0x000103182014();
      iVar2 = *(int *)(lVar7 + 0x14);
      lVar4 = 0;
      func_0x000107c5ede0();
      pcVar9 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
      func_0x000107c61174(lVar8);
      (*pcVar9)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar4);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x18));
      func_0x000107c61174();
      lVar7 = 0x112f474e0;
      func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
      uVar6 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar6);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar7 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103182dbc; end: 103182e57;  */

/* WARNING: Possible PIC construction at 0x000103182de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103182de8) */

void FUN_103182dbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107c614c4();
  if ((int)puVar1 == 1) {
    if (0xe < (ulong)param_1[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
      return;
    }
  }
  else if ((int)puVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(*param_1);
    return;
  }
  return;
}



/* Entry: 103182e58; end: 1031830e7;  */

undefined8 * FUN_103182e58(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 == 1) {
    uVar5 = param_2[1];
    if (uVar5 < 0xf) {
      uVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar6;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar5;
      func_0x000107c61434();
    }
    uVar6 = 1;
  }
  else {
    if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    uVar6 = *param_2;
    *param_1 = uVar6;
    lVar3 = 0;
    func_0x000103182014();
    iVar1 = *(int *)(lVar3 + 0x14);
    lVar4 = 0;
    func_0x000107c5ede0();
    pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
    func_0x000107c61174(uVar6);
    (*pcVar7)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
    func_0x000107c61174();
    lVar3 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar3 + 0x30));
    uVar6 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar6);
  return param_1;
}



/* Entry: 1031830e8; end: 1031832bf;  */

undefined8 * FUN_1031830e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  *param_1 = *param_2;
  lVar3 = 0;
  func_0x000103182014();
  iVar1 = *(int *)(lVar3 + 0x14);
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
  lVar3 = 0x112f474e0;
  func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar3 + 0x30));
  func_0x000107c6159c(param_1,param_3,0);
  return param_1;
}



/* Entry: 1031832c0; end: 1031832ef;  */

void FUN_1031832c0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001031832c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 1031832f0; end: 10318336f;  */

void FUN_1031832f0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_50 [32];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000103182014();
  if (param_2 < 0x40) {
    func_0x000107c61504(auStack_50,*(long *)(lVar1 + -8) + 0x40,&UNK_10db94628);
    puStack_28 = &UNK_10db94640;
    puStack_30 = auStack_50;
    func_0x000107c61528(param_1,0x100,2,&puStack_30);
  }
  return;
}



/* Entry: 103183370; end: 10318341f;  */

long * FUN_103183370(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61174(lVar5);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    func_0x000107c61174();
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar5);
  }
  return param_1;
}



/* Entry: 103183420; end: 103183477;  */

/* WARNING: Possible PIC construction at 0x00010318343c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103183440) */

void FUN_103183420(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 103183478; end: 1031834ff;  */

undefined8 * FUN_103183478(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  func_0x000107c61174(uVar3);
  (*pcVar4)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  func_0x000107c61174();
  return param_1;
}



/* Entry: 103183500; end: 103183667;  */

undefined8 * FUN_103183500(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  lVar2 = (long)*(int *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)((long)param_1 + lVar2);
  *(undefined8 *)((long)param_1 + lVar2) = *(undefined8 *)((long)param_2 + lVar2);
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  return param_1;
}



/* Entry: 103183668; end: 10318367f;  */

void FUN_103183668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103183680; end: 10318371f;  */

void FUN_103183680(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  lVar2 = 0x13f;
  puStack_38 = puVar1;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103183720; end: 10318377b;  */

undefined8 * FUN_103183720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10318377c; end: 1031837b7;  */

undefined8 * FUN_10318377c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}


