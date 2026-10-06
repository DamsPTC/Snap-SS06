/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011ac110; end: 1011ac15b; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin eraseMessageScopeDidDismissAlertView:] */

/* WARNING: Possible PIC construction at 0x0001011ac144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ac148) */

void FUN_1011ac110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011ac1c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011ac15c; end: 1011ac1a7; -[_TtC25EraseChatActionMenuPlugin25EraseChatActionMenuPlugin eraseMessageScopeDidEraseMessage:] */

/* WARNING: Possible PIC construction at 0x0001011ac190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ac194) */

void FUN_1011ac15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001011ac244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011ac1a8; end: 1011ac1c7;  */

void FUN_1011ac1a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5670);
  return;
}



/* Entry: 1011ac1c8; end: 1011ac2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ac1c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  FUN_1011ac038();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d64300);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c6157c(lVar2);
    func_0x000107c45a48(puVar1,param_2,1);
    uStack_28 = 0;
    puStack_30 = puVar1;
    func_0x000100b60be8(&puStack_30);
    func_0x000107c61170(puVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1011ac2bc; end: 1011ac313;  */

undefined * FUN_1011ac2bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_2;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1011ae1c8();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038deb8;
  func_0x000107c613fc(&UNK_11038deb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar7);
  puVar3 = &UNK_11038dee0;
  func_0x000107c613fc(&UNK_11038dee0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uStack_50 = 0x1011ac2cc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100e46924;
  puStack_58 = &UNK_11038def8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea4(puVar1);
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 1011ac314; end: 1011ac5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1011ac314(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 unaff_x20;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  lVar2 = 0;
  FUN_1011ac1a8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112d642f8,0);
  *(undefined8 *)(lVar3 + _DAT_112d64300) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d642e8) = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d642f0);
  *puVar1 = param_4;
  puVar1[1] = &PTR_DAT_110565880;
  puVar11 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  plVar4 = &lStack_70;
  func_0x000107c61154();
  lVar3 = _DAT_112f14b58;
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  lVar2 = _DAT_113083f78;
  uVar5 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  lVar7 = 0;
  FUN_1011ac7ac();
  lVar9 = lVar7;
  func_0x000107c610f8();
  func_0x000107c61614(lVar9 + _DAT_112d643e0,0);
  *(undefined8 *)(lVar9 + _DAT_112d643e8) = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112d643d8);
  *puVar1 = uVar6;
  puVar1[1] = puVar11;
  *(undefined8 *)(lVar9 + _DAT_112d643c8) = param_3;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112d643d0);
  *puVar1 = param_4;
  puVar1[1] = &PTR_DAT_110565880;
  puVar11 = PTR_s_init_1125d9248;
  lStack_80 = lVar9;
  lStack_78 = lVar7;
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  plVar8 = &lStack_80;
  func_0x000107c61154(plVar8);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + lVar3));
  uVar5 = *(undefined8 *)(param_2 + lVar2);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  uVar5 = param_5;
  func_0x000107c4d48c();
  func_0x000107c61180();
  lVar9 = 0;
  FUN_1011ad498();
  lVar2 = lVar9;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d64420);
  *puVar1 = uVar6;
  puVar1[1] = puVar11;
  *(undefined8 *)(lVar2 + _DAT_112d64418) = uVar5;
  plVar10 = &lStack_90;
  lStack_90 = lVar2;
  lStack_88 = lVar9;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + lVar3));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(plVar10);
  return unaff_x20;
}



/* Entry: 1011ac5e0; end: 1011ac5fb;  */

void FUN_1011ac5e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011ac5fc; end: 1011ac61b;  */

void FUN_1011ac5fc(void)

{
  func_0x000107c61168(&PTR_PTR_112d64370);
  return;
}



/* Entry: 1011ac61c; end: 1011ac66f;  */

void FUN_1011ac61c(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_3)(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011ac670; end: 1011ac6ab;  */

void FUN_1011ac670(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1011ac6ac; end: 1011ac6cb; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ac6ac(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d643e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ac6cc; end: 1011ac6df; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ac6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d643e0,param_3);
  return;
}



/* Entry: 1011ac6e0; end: 1011ac73f; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin init] */

void FUN_1011ac6e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EraseChatActionMenuPlugin.EraseQuotedChatActionMenuPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ac70c);
  (*pcVar1)();
}



/* Entry: 1011ac740; end: 1011ac7ab; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ac740(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d643c8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d643d0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d643d8 + 8));
  FUN_100e47454(param_1 + _DAT_112d643e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d643e8));
  return;
}



/* Entry: 1011ac7ac; end: 1011ac7cb;  */

void FUN_1011ac7ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5748);
  return;
}



/* Entry: 1011ac7cc; end: 1011ac7d3; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin itemType] */

undefined8 FUN_1011ac7cc(void)

{
  return 0xb;
}



/* Entry: 1011ac7d4; end: 1011ac7db; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011ac7d4(void)

{
  return 1;
}



/* Entry: 1011ac7dc; end: 1011ac927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011ac7dc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar2 = param_1;
  func_0x000107c49b4c();
  if ((int)uVar2 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112d643d8);
    uVar1 = ((ulong *)(unaff_x20 + _DAT_112d643d8))[1];
    func_0x000107c61434(uVar1);
    uVar3 = param_1;
    func_0x000107c3f91c();
    func_0x000107c61180();
    if (uVar3 == 0) {
      func_0x000107c6142c(uVar1);
    }
    else {
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if (uVar2 == uVar4 && uVar1 == param_2) {
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(param_2);
      }
      else {
        func_0x000107c605b8(uVar2,uVar1,uVar4,param_2,0);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(param_2);
        if ((uVar2 & 1) == 0) goto LAB_1011ac8c4;
      }
      func_0x000107c4a2b4();
      if ((int)param_1 != 0) {
        FUN_1011ae03c();
      }
    }
  }
LAB_1011ac8c4:
  puVar5 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1011ac928; end: 1011ac99f; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011ac928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011ac7dc(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011ac9a0; end: 1011acb4f;  */

undefined * FUN_1011ac9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_2;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x0001011ae294();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038e018;
  func_0x000107c613fc(&UNK_11038e018,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar3 = &UNK_11038e040;
  func_0x000107c613fc(&UNK_11038e040,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_1011ad39c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100e46924;
  puStack_58 = &UNK_11038e058;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea4(puVar1);
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 1011acb50; end: 1011accb7;  */

undefined * FUN_1011acb50(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  ppuVar2 = &puStack_70;
  puVar4 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_70 = puVar7;
    func_0x000104888f7c(&puStack_70);
    func_0x000107c61170(puVar7);
    func_0x000103edf0bc();
    func_0x000107c61574(ppuVar2);
  }
  else {
    puVar1 = param_2;
    func_0x000107c3f918();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      puVar6 = (undefined1 *)0x0;
      puVar5 = puVar4;
    }
    else {
      puVar7 = puVar1;
      func_0x000107c5faec();
      puVar5 = puVar4;
      func_0x000107c61170(puVar1);
      puVar6 = puVar4;
    }
    puVar1 = param_2;
    func_0x000107c40674(param_2);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
    func_0x000107c44a7c(param_2);
    FUN_1011accb8(puVar7,puVar6,puVar3,puVar5,param_2,param_3);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar6);
  }
  return puVar7;
}



/* Entry: 1011accb8; end: 1011acf7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ****
FUN_1011accb8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  long unaff_x20;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  
  lVar3 = unaff_x20 + _DAT_112d643e0;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar3;
    func_0x000107c5d184();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112d643c8);
  lVar3 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    if ((lVar5 != 0) && (param_2 != 0)) {
      uStack_61 = 0;
      uVar8 = *(undefined8 *)(param_6 + _DAT_112f14b88);
      puVar1 = &UNK_11038e090;
      func_0x000107c613fc(&UNK_11038e090,0x18,7);
      *(undefined1 **)(puVar1 + 0x10) = &uStack_61;
      puVar2 = &UNK_11038e0b8;
      func_0x000107c613fc(&UNK_11038e0b8,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x1011ad3c4;
      *(undefined **)(puVar2 + 0x18) = puVar1;
      pcStack_78 = FUN_1011ad3d4;
      pppuStack_98 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_1011ac670;
      puStack_80 = &UNK_11038e0d0;
      ppppuVar6 = &pppuStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppppuVar6);
      func_0x000107c61574(puStack_70);
      func_0x000107c4c6d0(uVar8);
      func_0x000107c60bd0(ppppuVar6);
      lVar3 = *(long *)(unaff_x20 + _DAT_112d643d0 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 8))(param_1,param_2,param_3,param_4,uStack_61,param_5 & 1);
      func_0x000107c42c1c(lVar7);
      func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
      func_0x000107c613fc();
      lVar3 = 0;
      func_0x00010095c380();
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d643e8);
      *(long *)(unaff_x20 + _DAT_112d643e8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c61574(uVar8);
      ppppuVar6 = *(undefined8 *****)(lVar3 + 0x10);
      ppppuVar4 = ppppuVar6;
      func_0x000107c6157c(ppppuVar6);
      func_0x000103edf0bc();
      func_0x000107c61574(puVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61574(lVar3);
      goto LAB_1011acda8;
    }
  }
  else {
    func_0x000107c61170();
  }
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppppuVar6 = &pppuStack_98;
  pppuStack_98 = ppppuVar4;
  func_0x000104888f7c(ppppuVar6);
  func_0x000107c61170(ppppuVar4);
  func_0x000103edf0bc();
LAB_1011acda8:
  func_0x000107c61574(ppppuVar6);
  func_0x000107c615e8(lVar5);
  return ppppuVar4;
}



/* Entry: 1011acf7c; end: 1011ad0ff; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011acf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = param_3;
  func_0x0001000b637c(param_3);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  uVar5 = param_4;
  func_0x0001000b637c(param_4);
  uVar1 = uVar5;
  func_0x0001006c733c();
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar5);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_11038dfc8;
  func_0x000107c613fc(&UNK_11038dfc8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11038dff0;
  func_0x000107c613fc(&UNK_11038dff0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1011ad364;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar5 = 0;
  FUN_1011a4d50(0);
  func_0x000107c61174(param_1);
  pcVar6 = FUN_1011ad36c;
  func_0x0001000d5158(FUN_1011ad36c,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1011ad100; end: 1011ad1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ad100(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d643c8);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5d17c();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c41864(lVar2,param_2,0);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d643e8);
  *(undefined8 *)(unaff_x20 + _DAT_112d643e8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 1011ad1ac; end: 1011ad1d3; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin dismissPresentedView] */

void FUN_1011ad1ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011ad100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011ad1d4; end: 1011ad1d7; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin eraseMessageScopeWillDisplayAlertView:] */

void FUN_1011ad1d4(void)

{
  return;
}



/* Entry: 1011ad1d8; end: 1011ad223; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin eraseMessageScopeDidDismissAlertView:] */

/* WARNING: Possible PIC construction at 0x0001011ad20c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ad210) */

void FUN_1011ad1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011ad270();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011ad224; end: 1011ad26f; -[_TtC25EraseChatActionMenuPlugin31EraseQuotedChatActionMenuPlugin eraseMessageScopeDidEraseMessage:] */

/* WARNING: Possible PIC construction at 0x0001011ad258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ad25c) */

void FUN_1011ad224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001011ad2ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011ad270; end: 1011ad363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ad270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  FUN_1011ad100();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d643e8);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c6157c(lVar2);
    func_0x000107c45a48(puVar1,param_2,1);
    uStack_28 = 0;
    puStack_30 = puVar1;
    func_0x000100b60be8(&puStack_30);
    func_0x000107c61170(puVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1011ad364; end: 1011ad36b;  */

undefined * FUN_1011ad364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_2;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x0001011ae294();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038e018;
  func_0x000107c613fc(&UNK_11038e018,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar7);
  puVar3 = &UNK_11038e040;
  func_0x000107c613fc(&UNK_11038e040,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_1011ad39c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100e46924;
  puStack_58 = &UNK_11038e058;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea4(puVar1);
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 1011ad36c; end: 1011ad39b;  */

void FUN_1011ad36c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011ad39c; end: 1011ad3d3;  */

undefined * FUN_1011ad39c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined **)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar3 = &puStack_70;
  puVar6 = auStack_68;
  func_0x000107c61428(lVar1 + 0x10,puVar6,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_70 = puVar10;
    func_0x000104888f7c(&puStack_70);
    func_0x000107c61170(puVar10);
    func_0x000103edf0bc();
    func_0x000107c61574(ppuVar3);
  }
  else {
    puVar2 = puVar5;
    func_0x000107c3f918();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      puVar9 = (undefined1 *)0x0;
      puVar7 = puVar6;
    }
    else {
      puVar10 = puVar2;
      func_0x000107c5faec();
      puVar7 = puVar6;
      func_0x000107c61170(puVar2);
      puVar9 = puVar6;
    }
    puVar2 = puVar5;
    func_0x000107c40674(puVar5);
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    func_0x000107c44a7c(puVar5);
    FUN_1011accb8(puVar10,puVar9,puVar4,puVar7,puVar5,uVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(puVar9);
  }
  return puVar10;
}



/* Entry: 1011ad3d4; end: 1011ad3f3;  */

void FUN_1011ad3d4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011ad3f4; end: 1011ad3fb;  */

void FUN_1011ad3f4(long param_1,long param_2)

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



/* Entry: 1011ad3fc; end: 1011ad45b; -[_TtC25EraseChatActionMenuPlugin35EraseStoryMediaChatActionMenuPlugin init] */

void FUN_1011ad3fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EraseChatActionMenuPlugin.EraseStoryMediaChatActionMenuPlugin",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ad428);
  (*pcVar1)();
}



/* Entry: 1011ad45c; end: 1011ad497; -[_TtC25EraseChatActionMenuPlugin35EraseStoryMediaChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ad45c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d64418));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d64420 + 8))
  ;
  return;
}



/* Entry: 1011ad498; end: 1011ad4b7;  */

void FUN_1011ad498(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5828);
  return;
}



/* Entry: 1011ad4b8; end: 1011ad4bf; -[_TtC25EraseChatActionMenuPlugin35EraseStoryMediaChatActionMenuPlugin itemType] */

undefined8 FUN_1011ad4b8(void)

{
  return 9;
}



/* Entry: 1011ad4c0; end: 1011ad4c7; -[_TtC25EraseChatActionMenuPlugin35EraseStoryMediaChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011ad4c0(void)

{
  return 0;
}



/* Entry: 1011ad4c8; end: 1011ad693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011ad4c8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar2 = param_1;
  func_0x000107c4a38c();
  if ((int)uVar2 == 0) {
LAB_1011ad558:
    uVar2 = param_1;
    func_0x000107c4a538();
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c5c038();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        uVar2 = *(ulong *)(unaff_x20 + _DAT_112d64420);
        uVar1 = ((ulong *)(unaff_x20 + _DAT_112d64420))[1];
        if (uVar3 == uVar2 && param_2 == uVar1) {
          func_0x000107c6142c(param_2);
        }
        else {
          func_0x000107c605b8(uVar3,param_2,uVar2,uVar1,0);
          func_0x000107c6142c(param_2);
          if ((uVar3 & 1) == 0) goto LAB_1011ad5cc;
        }
        func_0x000107c4a534();
        puVar4 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        if ((param_1 & 1) == 0) goto LAB_1011ad644;
        goto LAB_1011ad638;
      }
    }
LAB_1011ad5cc:
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
  }
  else {
    uVar2 = param_1;
    func_0x000107c516ec();
    func_0x000107c61180();
    if (uVar2 == 0) goto LAB_1011ad558;
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112d64420);
    uVar1 = ((ulong *)(unaff_x20 + _DAT_112d64420))[1];
    if (uVar3 != uVar2 || param_2 != uVar1) {
      func_0x000107c605b8(uVar3,param_2,uVar2,uVar1,0);
      func_0x000107c6142c(param_2);
      if ((uVar3 & 1) != 0) goto LAB_1011ad5ec;
      goto LAB_1011ad5cc;
    }
    func_0x000107c6142c(param_2);
LAB_1011ad5ec:
    func_0x000107c4a398();
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    if ((int)param_1 == 0) goto LAB_1011ad644;
LAB_1011ad638:
    FUN_1011ae03c();
  }
LAB_1011ad644:
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 1011ad694; end: 1011ad70b; -[_TtC25EraseChatActionMenuPlugin35EraseStoryMediaChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011ad694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011ad4c8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011ad70c; end: 1011ad987;  */

void FUN_1011ad70c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar7 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_3;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x0001011ae360();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038e130;
  func_0x000107c613fc(&UNK_11038e130,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar3 = &UNK_11038e158;
  func_0x000107c613fc(&UNK_11038e158,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  pcStack_50 = FUN_1011adfc0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038e170;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1011ad988; end: 1011ade63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ad988(byte *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte **ppbVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  uint uVar16;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  byte *pbStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_c0;
  uVar10 = (ulong)param_1 & 0xffffffffffff;
  uVar12 = param_2 >> 0x38 & 0xf;
  uVar11 = uVar10;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar11 = uVar12;
  }
  if (uVar11 == 0) {
    bVar3 = true;
    goto LAB_1011adc24;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        pbVar13 = param_1;
        uVar10 = param_2;
        func_0x000107c60358();
      }
      else {
        pbVar13 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar13 == 0x2b) {
        if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ade60);
          (*pcVar2)();
        }
        lVar9 = uVar10 - 1;
        if (lVar9 == 0) goto LAB_1011adc0c;
        lVar15 = 0;
        do {
          pbVar13 = pbVar13 + 1;
          if (((9 < *pbVar13 - 0x30) ||
              (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar11 = (ulong)(byte)(*pbVar13 - 0x30), lVar15 = lVar14 + uVar11,
             SCARRY8(lVar14,uVar11))) goto LAB_1011adc0c;
          uVar16 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      else if (*pbVar13 == 0x2d) {
        if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ade58);
          (*pcVar2)();
        }
        lVar9 = uVar10 - 1;
        if (lVar9 == 0) {
LAB_1011adc0c:
          uVar16 = 1;
        }
        else {
          lVar15 = 0;
          do {
            pbVar13 = pbVar13 + 1;
            if (((9 < *pbVar13 - 0x30) ||
                (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f))
               || (uVar11 = (ulong)(byte)(*pbVar13 - 0x30), lVar15 = lVar14 - uVar11,
                  SBORROW8(lVar14,uVar11))) goto LAB_1011adc0c;
            uVar16 = 0;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else {
        if (uVar10 == 0) goto LAB_1011adc0c;
        lVar9 = 0;
        if (pbVar13 == (byte *)0x0) {
          uVar16 = 0;
        }
        else {
          do {
            if (((9 < *pbVar13 - 0x30) ||
                (lVar15 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar11 = (ulong)(byte)(*pbVar13 - 0x30), lVar9 = lVar15 + uVar11,
               SCARRY8(lVar15,uVar11))) goto LAB_1011adc0c;
            uVar16 = 0;
            uVar10 = uVar10 - 1;
            pbVar13 = pbVar13 + 1;
          } while (uVar10 != 0);
        }
      }
    }
    else {
      pbStack_90 = param_1;
      uStack_88 = param_2 & 0xffffffffffffff;
      uVar16 = (uint)param_1 & 0xff;
      if (uVar16 == 0x2b) {
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ade64);
          (*pcVar2)();
        }
        lVar9 = uVar12 - 1;
        if (lVar9 == 0) goto LAB_1011adc0c;
        lVar15 = 0;
        pbVar13 = (byte *)((ulong)&pbStack_90 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar11 = (ulong)(byte)(*pbVar13 - 0x30), lVar15 = lVar14 + uVar11,
             SCARRY8(lVar14,uVar11))) goto LAB_1011adc0c;
          uVar16 = 0;
          lVar9 = lVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (lVar9 != 0);
      }
      else if (uVar16 == 0x2d) {
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ade5c);
          (*pcVar2)();
        }
        lVar9 = uVar12 - 1;
        if (lVar9 == 0) goto LAB_1011adc0c;
        lVar15 = 0;
        pbVar13 = (byte *)((ulong)&pbStack_90 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar11 = (ulong)(byte)(*pbVar13 - 0x30), lVar15 = lVar14 - uVar11,
             SBORROW8(lVar14,uVar11))) goto LAB_1011adc0c;
          uVar16 = 0;
          lVar9 = lVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (lVar9 != 0);
      }
      else {
        if (uVar12 == 0) goto LAB_1011adc0c;
        lVar9 = 0;
        ppbVar7 = &pbStack_90;
        do {
          if (((9 < *(byte *)ppbVar7 - 0x30) ||
              (lVar15 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar11 = (ulong)(byte)(*(byte *)ppbVar7 - 0x30), lVar9 = lVar15 + uVar11,
             SCARRY8(lVar15,uVar11))) goto LAB_1011adc0c;
          uVar16 = 0;
          uVar12 = uVar12 - 1;
          ppbVar7 = (byte **)((long)ppbVar7 + 1);
        } while (uVar12 != 0);
      }
    }
  }
  else {
    func_0x000107c61434(param_2);
    uVar11 = param_2;
    FUN_100fb6b80(param_1,param_2,10);
    uVar16 = (uint)uVar11;
    func_0x000107c6142c(param_2);
  }
  bVar3 = (uVar16 & 0xff) == 1;
LAB_1011adc24:
  FUN_1011adfe4(0,0x112d4e810,&PTR_PTR_1126b0cd8);
  func_0x000107c61434(param_4);
  func_0x000103c1912c(param_3,param_4);
  if (param_3 != 0) {
    if (!bVar3) {
      puVar4 = &UNK_11038e1a8;
      func_0x000107c613fc(&UNK_11038e1a8,0x20,7);
      *(byte **)(puVar4 + 0x10) = param_1;
      *(ulong *)(puVar4 + 0x18) = param_2;
      puVar5 = &UNK_11038e1d0;
      func_0x000107c613fc(&UNK_11038e1d0,0x20,7);
      *(byte **)(puVar5 + 0x10) = param_1;
      *(ulong *)(puVar5 + 0x18) = param_2;
      puVar6 = PTR_PTR_1126b2730;
      func_0x000107c610f8(PTR_PTR_1126b2730);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_1011ae024;
      pbStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11038e1e8;
      ppbVar7 = &pbStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppbVar7);
      uStack_a0 = 0x1011ae028;
      puStack_c0 = puVar1;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_1011adf84;
      puStack_a8 = &UNK_11038e210;
      puStack_98 = puVar5;
      func_0x000107c60bc4(&puStack_c0);
      func_0x000107c61438(param_2,2);
      func_0x000107c48b60(puVar6);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c60bd0(ppbVar7);
      func_0x000107c61574(puStack_98);
      func_0x000107c61574(puStack_68);
      lVar9 = *(long *)(unaff_x20 + _DAT_112d64418);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        lVar15 = lVar9;
        func_0x000107c44174();
        func_0x000107c61180();
        func_0x000107c615e8(lVar9);
        if (lVar15 != 0) {
          puVar4 = puVar6;
          func_0x000107c61174(puVar6);
          func_0x000107c5d56c(lVar15);
          func_0x000107c61170(lVar15);
          func_0x000107c61170(puVar4);
        }
      }
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011ade64; end: 1011adf7b; -[_TtC25EraseChatActionMenuPlugin35EraseStoryMediaChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011ade64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x0001000b637c(param_3);
  uVar1 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar3);
  puVar2 = &UNK_11038e108;
  func_0x000107c613fc(&UNK_11038e108,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uVar3 = 0;
  FUN_1011adfe4(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  func_0x000107c61174(param_1);
  pcVar4 = FUN_1011adf7c;
  func_0x0001000d5158(FUN_1011adf7c,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1011adf7c; end: 1011adf83;  */

void FUN_1011adf7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_70;
  uVar8 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = uVar7;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x0001011ae360();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038e130;
  func_0x000107c613fc(&UNK_11038e130,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar7);
  puVar3 = &UNK_11038e158;
  func_0x000107c613fc(&UNK_11038e158,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  pcStack_50 = FUN_1011adfc0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038e170;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1011adf84; end: 1011adfbf;  */

void FUN_1011adf84(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1011adfc0; end: 1011adfe3;  */

void FUN_1011adfc0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar5 = auStack_58;
  func_0x000107c61428(lVar1 + 0x10,puVar5,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = uVar4;
    func_0x000107c40258(uVar4);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c40674(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    FUN_1011ad988(uVar3,puVar5,uVar2,puVar6);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar6);
  }
  return;
}



/* Entry: 1011adfe4; end: 1011ae023;  */

void FUN_1011adfe4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1011ae024; end: 1011ae03b;  */

void FUN_1011ae024(void)

{
  return;
}



/* Entry: 1011ae03c; end: 1011ae17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1011ae03c(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 uStack_41;
  
  uStack_41 = 1;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f14b98);
  puVar4 = &UNK_11038e248;
  func_0x000107c613fc(&UNK_11038e248,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_41;
  puVar5 = &UNK_11038e270;
  func_0x000107c613fc(&UNK_11038e270,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1011ae180;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_58 = FUN_1011ae18c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x1011a64f8;
  puStack_60 = &UNK_11038e288;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c640(uVar7);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_41;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x7f,6,0x43,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ae180);
  (*pcVar3)();
}



/* Entry: 1011ae180; end: 1011ae18b;  */

void FUN_1011ae180(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1011ae18c; end: 1011ae1ab;  */

void FUN_1011ae18c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011ae1ac; end: 1011ae1c7;  */

void FUN_1011ae1ac(long param_1,long param_2)

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



/* Entry: 1011ae1c8; end: 1011ae42b;  */

undefined1  [16] FUN_1011ae1c8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2aff0);
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef2afa0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ae294);
  (*pcVar1)();
}



/* Entry: 1011ae42c; end: 1011ae437; -[SCEraseChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae42c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64450;
  func_0x000107c61428(param_1 + _DAT_112d64450,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ae438; end: 1011ae443; -[SCEraseChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64450;
  func_0x000107c61428(param_1 + _DAT_112d64450,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ae444; end: 1011ae44f; -[SCEraseChatActionMenuPluginEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae444(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64458;
  func_0x000107c61428(param_1 + _DAT_112d64458,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ae450; end: 1011ae45b; -[SCEraseChatActionMenuPluginEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64458;
  func_0x000107c61428(param_1 + _DAT_112d64458,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ae45c; end: 1011ae467; -[SCEraseChatActionMenuPluginEntryPoint eraseMessageScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae45c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64460;
  func_0x000107c61428(param_1 + _DAT_112d64460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ae468; end: 1011ae473; -[SCEraseChatActionMenuPluginEntryPoint setEraseMessageScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae468(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64460;
  func_0x000107c61428(param_1 + _DAT_112d64460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ae474; end: 1011ae47f; -[SCEraseChatActionMenuPluginEntryPoint nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae474(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64468;
  func_0x000107c61428(param_1 + _DAT_112d64468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ae480; end: 1011ae4c3;  */

void FUN_1011ae480(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011ae4c4; end: 1011ae4cf; -[SCEraseChatActionMenuPluginEntryPoint setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64468;
  func_0x000107c61428(param_1 + _DAT_112d64468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ae4d0; end: 1011ae523;  */

void FUN_1011ae4d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ae524; end: 1011ae56b; -[SCEraseChatActionMenuPluginEntryPoint eraseMessageScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae524(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64470;
  func_0x000107c61428(param_1 + _DAT_112d64470,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011ae56c; end: 1011ae5cf; -[SCEraseChatActionMenuPluginEntryPoint setEraseMessageScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64470;
  func_0x000107c61428(param_1 + _DAT_112d64470,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011ae5d0; end: 1011ae987;  */

/* WARNING: Possible PIC construction at 0x0001011ae75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ae838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ae8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ae8b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ae8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ae8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ae950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ae960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ae940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ae964) */
/* WARNING: Removing unreachable block (ram,0x0001011ae954) */
/* WARNING: Removing unreachable block (ram,0x0001011ae8dc) */
/* WARNING: Removing unreachable block (ram,0x0001011ae8cc) */
/* WARNING: Removing unreachable block (ram,0x0001011ae8bc) */
/* WARNING: Removing unreachable block (ram,0x0001011ae8ac) */
/* WARNING: Removing unreachable block (ram,0x0001011ae83c) */
/* WARNING: Removing unreachable block (ram,0x0001011ae760) */
/* WARNING: Removing unreachable block (ram,0x0001011ae944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ae5d0(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar8 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5da74();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c42a1c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar8);
        lVar8 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c42a24();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar8);
          lVar8 = lVar3;
        }
        else {
          func_0x000107c4d478();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_1011ac5fc();
            func_0x000107c613fc();
            lVar6 = 0;
            FUN_1011ac1a8();
            lVar7 = lVar6;
            func_0x000107c610f8();
            func_0x000107c61614(lVar7 + _DAT_112d642f8,0);
            *(undefined8 *)(lVar7 + _DAT_112d64300) = 0;
            *(long *)(lVar7 + _DAT_112d642e8) = lVar4;
            plVar1 = (long *)(lVar7 + _DAT_112d642f0);
            *plVar1 = lVar5;
            plVar1[1] = (long)&PTR_DAT_110565880;
            puVar2 = PTR_s_init_1125d9248;
            lStack_70 = lVar7;
            lStack_68 = lVar6;
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c61154(&lStack_70,puVar2);
            func_0x000107c4fba8(*(undefined8 *)(lVar8 + _DAT_112f14b58));
            lVar8 = *(long *)(lVar3 + _DAT_113083f78);
            func_0x000107c5d984(lVar8);
            func_0x000107c61180();
            func_0x000107c5faec();
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
  return;
}



/* Entry: 1011ae988; end: 1011ae9af; -[SCEraseChatActionMenuPluginEntryPoint begin] */

void FUN_1011ae988(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011ae5d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011ae9b0; end: 1011ae9f3; -[SCEraseChatActionMenuPluginEntryPoint end] */

void FUN_1011ae9b0(undefined8 param_1)

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



/* Entry: 1011ae9f4; end: 1011aeccf;  */

void FUN_1011ae9f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10d4ff0)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010ef2b010,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c54650();
        }
        else {
          uVar2 = 0xd000000000000017;
          if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ecb20)) ||
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5698c();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef10d4fd0)) &&
               (func_0x000107c605b8(0xd000000000000018,0x800000010ef2b030,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "EraseChatActionMenuPlugin/SCEraseChatActionMenuPluginEntryPoint.swift"
                                  ,0x45,2,0x35,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011aecd0);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c54648();
          }
        }
        goto LAB_1011aea80;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3f8();
  }
LAB_1011aea80:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011aecd0; end: 1011aed7b; -[SCEraseChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011aecd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011ae9f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011aed7c; end: 1011aee23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011aed7c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d64450,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64458,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64460,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64468,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d64470) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d64478) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011aee24; end: 1011aee43; -[SCEraseChatActionMenuPluginEntryPoint init] */

void FUN_1011aee24(void)

{
  FUN_1011aed7c();
  return;
}



/* Entry: 1011aee44; end: 1011aee77;  */

void FUN_1011aee44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011aee78; end: 1011aeeef; -[SCEraseChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011aee78(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d64450);
  func_0x000107c61610(param_1 + _DAT_112d64458);
  func_0x000107c61610(param_1 + _DAT_112d64460);
  func_0x000107c61610(param_1 + _DAT_112d64468);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d64470));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64478));
  return;
}



/* Entry: 1011aeef0; end: 1011aef0f;  */

void FUN_1011aeef0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b58f0);
  return;
}



/* Entry: 1011aef10; end: 1011af043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011aef10(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112d644d8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112d644d8);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010ef2b0f0);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 1011af044; end: 1011af257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011af044(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d644e0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d644e0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001011af0a4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    lVar3 = 0;
  }
  func_0x000107c615f0(lVar3);
  return lVar2;
}



/* Entry: 1011af258; end: 1011af273;  */

void FUN_1011af258(void)

{
  func_0x000107c610f8(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1011af274; end: 1011af2ab;  */

void FUN_1011af274(long param_1)

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



/* Entry: 1011af2ac; end: 1011af2b3; -[_TtC35FavoriteStickerChatActionMenuPlugin35FavoriteStickerChatActionMenuPlugin itemType] */

undefined8 FUN_1011af2ac(void)

{
  return 0x11;
}



/* Entry: 1011af2b4; end: 1011af2bb; -[_TtC35FavoriteStickerChatActionMenuPlugin35FavoriteStickerChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011af2b4(void)

{
  return 2;
}



/* Entry: 1011af2bc; end: 1011af37b;  */

void FUN_1011af2bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c404a8();
    func_0x000107c61170(lVar1);
    if ((int)lVar2 == 0xe) {
      func_0x000107d5eed4();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar1 = param_1;
        FUN_1011af044();
        lVar2 = param_1;
        func_0x000107c4a764(param_1);
        func_0x000107c61180();
        func_0x000107c4a778(lVar1,param_2,lVar2);
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1011af37c; end: 1011af59b; -[_TtC35FavoriteStickerChatActionMenuPlugin35FavoriteStickerChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011af37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011b0cd8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011af59c; end: 1011af887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011af59c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c4a51c();
  if ((int)lVar2 == 0) {
    FUN_1011af2bc();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x0001091620c4();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c44fd4();
      func_0x000107c61180();
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000107c42934(lVar2);
      func_0x000107c61170(param_1);
    }
  }
  else {
    func_0x000107c40e28();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x0001000d224c(&lStack_48);
      if (lStack_48 == 0) {
        func_0x000107c61170(param_1);
      }
      else {
        lVar2 = lStack_48;
        func_0x000107c5bd80();
        func_0x000107c61180();
        func_0x000107c615e8(lStack_48);
        func_0x000107c61170(param_1);
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x000107c5bd8c();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011af75c);
            (*pcVar1)();
          }
          func_0x000107c5faec();
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
          func_0x000107c5caec();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011af760);
            (*pcVar1)();
          }
          func_0x000107c42934();
          func_0x000107c61170(lVar3);
          func_0x000109161f30(lVar2);
          func_0x000107c61180();
          func_0x000107c615e8(lVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 1011af888; end: 1011af8c7;  */

void FUN_1011af888(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1011af8c8; end: 1011afb1f;  */

undefined * FUN_1011af8c8(undefined8 param_1,byte param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar6 = &puStack_b0;
  puVar2 = PTR_PTR_1126a5e70;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar7 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar9 = 0;
  }
  else {
    func_0x000107c61170();
    if ((param_2 & 1) == 0) {
      func_0x000107c2ab58();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011afb20);
        (*pcVar1)();
      }
    }
    else {
      func_0x000107c2ab5c();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011af940);
        (*pcVar1)();
      }
    }
    lVar9 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    puVar8 = puVar7;
    func_0x000107c5fadc(lVar9,puVar7);
    func_0x000107c6142c(puVar7);
    puVar7 = puVar8;
  }
  func_0x000107c59e18(puVar2);
  func_0x000107c61170(lVar9);
  puVar4 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  func_0x000107c592b0(puVar2);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar2);
  func_0x000107c61170(puVar4);
  puVar4 = &UNK_11038e368;
  func_0x000107c613fc(&UNK_11038e368,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar4 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar5 = &UNK_11038e3b8;
  func_0x000107c613fc(&UNK_11038e3b8,0x21,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  puVar5[0x20] = param_2 & 1;
  pcStack_90 = FUN_1011b1134;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_100e46924;
  puStack_98 = &UNK_11038e3d0;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  puVar4 = puStack_88;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar4);
  func_0x000107c56ea4(puVar2);
  func_0x000107c60bd0(ppuVar6);
  return puVar2;
}



/* Entry: 1011afb20; end: 1011afbf3;  */

undefined * FUN_1011afb20(long param_1,undefined *param_2,uint param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_50;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    param_2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_50 = param_2;
    func_0x000104888f7c(&puStack_50);
    func_0x000107c61170(param_2);
    func_0x000103edf0bc();
    func_0x000107c61574(ppuVar1);
  }
  else {
    FUN_1011afbf4(param_2,param_3 & 1);
    func_0x000107c61170(param_1);
  }
  return param_2;
}



/* Entry: 1011afbf4; end: 1011b0377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011afbf4(undefined *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_98;
  ulong uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = param_1;
  uVar10 = param_2;
  FUN_1011af59c();
  if ((uVar10 == 0) || (param_4 == 0)) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    ppuVar7 = &puStack_98;
    puStack_98 = puVar12;
    func_0x000104888f7c(ppuVar7);
    func_0x000107c61170(puVar12);
    func_0x000103edf0bc();
    func_0x000107c61574(ppuVar7);
    FUN_1011b115c(puVar2,uVar10,param_3,param_4);
    return puVar12;
  }
  func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
  uVar11 = 0x18;
  func_0x000107c613fc();
  lVar3 = param_4;
  func_0x000107c61174();
  lVar4 = 0;
  func_0x00010095c380();
  puVar12 = param_1;
  func_0x0001011b03ec();
  puVar5 = param_1;
  func_0x000107c4051c();
  func_0x000107c61180();
  bVar1 = (byte)puVar12;
  if (puVar5 != (undefined *)0x0) {
    puVar12 = puVar5;
    func_0x000107c404a8();
    func_0x000107c61170(puVar5);
    if ((int)puVar12 == 0xe) {
      puVar12 = param_1;
      func_0x000107d5eed4();
      func_0x000107c61180();
      if (puVar12 != (undefined *)0x0) {
        func_0x000103f312b8(0);
        puVar5 = puVar12;
        func_0x000103f306d8();
        func_0x000107c61170(puVar12);
        if (((ulong)puVar5 & 1) != 0) {
          lVar8 = lVar3;
          func_0x000107c61174();
          if ((param_2 & 1) == 0) {
            func_0x000107c61434(uVar10);
            func_0x000107d5eed4();
            func_0x000107c61180();
            if (param_1 == (undefined *)0x0) {
              param_1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8();
              func_0x000107c45a48();
              uStack_90 = uStack_90 & 0xffffffffffffff00;
              puStack_98 = param_1;
              func_0x000100b60be8(&puStack_98);
            }
            else {
              func_0x0001000d224c(&lStack_68);
              if (lStack_68 != 0) {
                lVar9 = lStack_68;
                func_0x000107c3d688(lStack_68);
                func_0x000107c61180();
                func_0x000107c615e8(lStack_68);
                puVar12 = &UNK_11038e368;
                func_0x000107c613fc(&UNK_11038e368,0x18,7);
                func_0x000107c61614(puVar12 + 0x10);
                puVar5 = &UNK_11038e4a8;
                func_0x000107c613fc(&UNK_11038e4a8,0x41,7);
                *(undefined **)(puVar5 + 0x10) = puVar12;
                *(long *)(puVar5 + 0x18) = lVar4;
                *(undefined **)(puVar5 + 0x20) = puVar2;
                *(ulong *)(puVar5 + 0x28) = uVar10;
                *(undefined8 *)(puVar5 + 0x30) = param_3;
                *(long *)(puVar5 + 0x38) = param_4;
                puVar5[0x40] = bVar1 & 1;
                pcStack_78 = FUN_1011b1218;
                puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_90 = 0x42000000;
                pcStack_88 = FUN_1011b0640;
                puStack_80 = &UNK_11038e4c0;
                ppuVar7 = &puStack_98;
                puStack_70 = puVar5;
                func_0x000107c60bc4(ppuVar7);
                puVar2 = puStack_70;
                func_0x000107c61174(lVar8);
                func_0x000107c61434(uVar10);
                func_0x000107c6157c(lVar4);
                func_0x000107c61574(puVar2);
                FUN_1011aef10();
                func_0x000107c5dc64(lVar9);
                func_0x000107c61170(puVar2);
                func_0x000107c61170(param_1);
                func_0x000107c6142c(uVar10);
                func_0x000107c61170(lVar8);
                func_0x000107c60bd0(ppuVar7);
                goto LAB_1011b036c;
              }
            }
            func_0x000107c61170(param_1);
            func_0x000107c6142c(uVar10);
            lVar9 = lVar8;
          }
          else {
            func_0x000107c61174();
            func_0x000107c61434(uVar10);
            lVar9 = lVar8;
            func_0x000107c44fd4();
            func_0x000107c61180();
            if (lVar9 == 0) {
              func_0x000107c5faec();
              func_0x000107c5fadc();
              func_0x000107c6142c(uVar11);
            }
            puVar12 = PTR_PTR_1126be9e8;
            func_0x000107c610f8(PTR_PTR_1126be9e8);
            func_0x000107c46d4c();
            func_0x000107c61170(lVar9);
            func_0x0001000d224c(&lStack_68);
            if (lStack_68 == 0) {
              func_0x000107c61170(puVar12);
              func_0x000107c6142c(uVar10);
              func_0x000107c61170(lVar8);
              lVar9 = lVar8;
            }
            else {
              lVar9 = lStack_68;
              func_0x000107c4ff0c();
              func_0x000107c61180();
              func_0x000107c615e8(lStack_68);
              puVar5 = &UNK_11038e368;
              func_0x000107c613fc(&UNK_11038e368,0x18,7);
              func_0x000107c61614(puVar5 + 0x10);
              puVar6 = &UNK_11038e4f8;
              func_0x000107c613fc(&UNK_11038e4f8,0x41,7);
              *(undefined **)(puVar6 + 0x10) = puVar5;
              *(long *)(puVar6 + 0x18) = lVar4;
              *(undefined **)(puVar6 + 0x20) = puVar2;
              *(ulong *)(puVar6 + 0x28) = uVar10;
              *(undefined8 *)(puVar6 + 0x30) = param_3;
              *(long *)(puVar6 + 0x38) = param_4;
              puVar6[0x40] = bVar1 & 1;
              pcStack_78 = FUN_1011b1260;
              puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_90 = 0x42000000;
              pcStack_88 = FUN_1011b0640;
              puStack_80 = &UNK_11038e510;
              ppuVar7 = &puStack_98;
              puStack_70 = puVar6;
              func_0x000107c60bc4(ppuVar7);
              puVar2 = puStack_70;
              func_0x000107c61174(lVar8);
              func_0x000107c61434(uVar10);
              func_0x000107c6157c(lVar4);
              func_0x000107c61574(puVar2);
              FUN_1011aef10();
              func_0x000107c5dc64(lVar9);
              func_0x000107c61170(puVar2);
              func_0x000107c61170(puVar12);
              func_0x000107c6142c(uVar10);
              func_0x000107c61170(lVar8);
              func_0x000107c61170(lVar8);
              func_0x000107c60bd0(ppuVar7);
            }
          }
LAB_1011b036c:
          func_0x000107c61170(lVar9);
          goto LAB_1011b0134;
        }
      }
    }
  }
  if ((param_2 & 1) == 0) {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) goto LAB_1011b0134;
    lVar8 = lStack_68;
    func_0x000107c3d684(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    puVar12 = &UNK_11038e368;
    func_0x000107c613fc(&UNK_11038e368,0x18,7);
    func_0x000107c61614(puVar12 + 0x10);
    puVar5 = &UNK_11038e408;
    func_0x000107c613fc(&UNK_11038e408,0x48,7);
    *(undefined **)(puVar5 + 0x10) = puVar12;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    *(ulong *)(puVar5 + 0x20) = uVar10;
    *(undefined8 *)(puVar5 + 0x28) = param_3;
    *(long *)(puVar5 + 0x30) = param_4;
    puVar5[0x38] = bVar1 & 1;
    *(long *)(puVar5 + 0x40) = lVar4;
    pcStack_78 = FUN_1011b118c;
    puStack_80 = &UNK_11038e420;
    puStack_70 = puVar5;
  }
  else {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) goto LAB_1011b0134;
    lVar8 = lStack_68;
    func_0x000107c4ff0c(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    puVar12 = &UNK_11038e368;
    func_0x000107c613fc(&UNK_11038e368,0x18,7);
    func_0x000107c61614(puVar12 + 0x10);
    puVar5 = &UNK_11038e458;
    func_0x000107c613fc(&UNK_11038e458,0x48,7);
    *(undefined **)(puVar5 + 0x10) = puVar12;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    *(ulong *)(puVar5 + 0x20) = uVar10;
    *(undefined8 *)(puVar5 + 0x28) = param_3;
    *(long *)(puVar5 + 0x30) = param_4;
    puVar5[0x38] = bVar1 & 1;
    *(long *)(puVar5 + 0x40) = lVar4;
    pcStack_78 = FUN_1011b11d4;
    puStack_80 = &UNK_11038e470;
    puStack_70 = puVar5;
  }
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_1011b0640;
  ppuVar7 = &puStack_98;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_70;
  func_0x000107c61174(lVar3);
  func_0x000107c61434(uVar10);
  func_0x000107c6157c(lVar4);
  func_0x000107c61574(puVar2);
  FUN_1011aef10();
  func_0x000107c5dc64(lVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar8);
LAB_1011b0134:
  puVar12 = *(undefined **)(lVar4 + 0x10);
  puVar2 = puVar12;
  func_0x000107c6157c(puVar12);
  func_0x000103edf0bc();
  func_0x000107c61574(puVar12);
  func_0x000107c61574(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c6142c(uVar10);
  return puVar2;
}



/* Entry: 1011b0378; end: 1011b04ab; -[_TtC35FavoriteStickerChatActionMenuPlugin35FavoriteStickerChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011b0378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001011b0f70(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011b04ac; end: 1011b063f;  */

/* WARNING: Removing unreachable block (ram,0x0001011b063c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b04ac(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x0001000d224c(&puStack_88);
    if (puStack_88 != (undefined *)0x0) {
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        func_0x000107c5ed2c(param_2);
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110dea458;
      puVar1 = PTR_PTR_1126d4d18;
      func_0x000107c61168(PTR_PTR_1126d4d18);
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110dea458);
      func_0x000107c5fadc(param_4,param_5);
      func_0x000107c420fc(puVar1);
      func_0x000107c615e8(puStack_88);
      func_0x000107c61170(param_2);
      func_0x000107c61170(ppuVar2);
      func_0x000107c61170(param_4);
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    uStack_80 = 0;
    puStack_88 = puVar1;
    func_0x000100b60be8(&puStack_88);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1011b0640; end: 1011b06af;  */

void FUN_1011b0640(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1011b06b0; end: 1011b0bcb;  */

/* WARNING: Removing unreachable block (ram,0x0001011b0840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b06b0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x0001000d224c(&puStack_88);
    if (puStack_88 != (undefined *)0x0) {
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        func_0x000107c5ed2c(param_2);
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110dea458;
      puVar1 = PTR_PTR_1126d4d18;
      func_0x000107c61168(PTR_PTR_1126d4d18);
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110dea458);
      func_0x000107c5fadc(param_4,param_5);
      func_0x000107c420fc(puVar1);
      func_0x000107c615e8(puStack_88);
      func_0x000107c61170(param_2);
      func_0x000107c61170(ppuVar2);
      func_0x000107c61170(param_4);
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    uStack_80 = 0;
    puStack_88 = puVar1;
    func_0x000100b60be8(&puStack_88);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1011b0bcc; end: 1011b0c2b; -[_TtC35FavoriteStickerChatActionMenuPlugin35FavoriteStickerChatActionMenuPlugin init] */

void FUN_1011b0bcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FavoriteStickerChatActionMenuPlugin.FavoriteStickerChatActionMenuPlugin",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b0bf8);
  (*pcVar1)();
}



/* Entry: 1011b0c2c; end: 1011b0cc3; -[_TtC35FavoriteStickerChatActionMenuPlugin35FavoriteStickerChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b0c2c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d644a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d644b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d644b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d644c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d644c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d644d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d644d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d644e0));
  return;
}



/* Entry: 1011b0cc4; end: 1011b0cd7;  */

void FUN_1011b0cc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d64518 == (undefined *)0x0 || ((ulong)puRam0000000112d64518 & 1) != 0) {
    puVar1 = &UNK_10e84c2ca;
    func_0x000107c61518(&UNK_10e84c2ca,0x29,0,0);
    puRam0000000112d64518 = puVar1;
  }
  return;
}



/* Entry: 1011b0cd8; end: 1011b10cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011b0cd8(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uStack_48;
  
  uVar2 = param_1;
  func_0x000107c49ac8();
  if ((uVar2 & 1) != 0) goto LAB_1011b0e44;
  uVar2 = param_1;
  func_0x000107c4a51c();
  if (((int)uVar2 == 0) || (uVar2 = param_1, func_0x000107c4a520(), (uVar2 & 1) != 0)) {
    uVar2 = param_1;
    FUN_1011af2bc();
    if (uVar2 == 0) goto LAB_1011b0e44;
    uVar3 = uVar2;
    func_0x000107c42934();
    if ((long)uVar3 < 5) {
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          uVar3 = param_1;
          func_0x000107c4051c();
          func_0x000107c61180();
          if (uVar3 != 0) {
            uVar6 = uVar3;
            func_0x000107c404a8();
            func_0x000107c61170(uVar3);
            if ((int)uVar6 == 0xe) {
              func_0x000107d5eed4();
              func_0x000107c61180();
              if (param_1 != 0) {
                func_0x000103f312b8(0);
                uVar3 = param_1;
                func_0x000103f306d8();
                func_0x000107c61170(param_1);
                if ((uVar3 & 1) != 0) goto LAB_1011b0e3c;
              }
            }
          }
          func_0x0001000d224c(&uStack_48);
          uVar3 = uStack_48;
          func_0x000107c41050();
          func_0x000107c61180();
          func_0x000107c61170(uStack_48);
          func_0x000107c61170(uVar2);
          uVar2 = uVar3;
          goto joined_r0x0001011b0f5c;
        }
        if (uVar3 != 3) goto LAB_1011b0ea8;
      }
    }
    else if (((uVar3 != 5) && (uVar3 != 6)) && (uVar3 != 10)) {
LAB_1011b0ea8:
      func_0x000107c61170(uVar2);
      goto LAB_1011b0e44;
    }
  }
  else {
    func_0x000107c40e28();
    func_0x000107c61180();
    if (param_1 == 0) goto LAB_1011b0e44;
    uVar2 = param_1;
    func_0x000107c4a764();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b0f6c);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c42924();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b0f70);
      (*pcVar1)();
    }
    uVar2 = uVar3;
    func_0x000107c42930();
    func_0x000107c61170(uVar3);
    iVar7 = (int)uVar2;
    if (((iVar7 == 1) || (iVar7 == 4)) || (iVar7 != 2)) goto LAB_1011b0e44;
    func_0x0001000d224c(&uStack_48);
    uVar2 = uStack_48;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uStack_48);
joined_r0x0001011b0f5c:
    if (uVar2 == 0) goto LAB_1011b0e44;
  }
LAB_1011b0e3c:
  func_0x000107c61170(uVar2);
LAB_1011b0e44:
  puVar4 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar4,param_2,puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 1011b10d0; end: 1011b10ef;  */

void FUN_1011b10d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b59d0);
  return;
}



/* Entry: 1011b10f0; end: 1011b10ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b10f0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar7 = *param_1;
  puVar5 = auStack_48;
  lVar6 = 0;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1011af59c(uVar7);
    func_0x000107c61170(lVar1);
    if ((puVar5 != (undefined1 *)0x0) && (func_0x000107c6142c(puVar5), lVar6 != 0)) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar1 != 0) {
        uVar7 = *(undefined8 *)(lVar1 + _DAT_112d644a8);
        func_0x000107c6157c(uVar7);
        func_0x000107c61170(lVar1);
        func_0x0001000d224c(&uStack_68);
        func_0x000107c61574(uVar7);
        lVar1 = CONCAT71(uStack_67,uStack_68);
        if (lVar1 != 0) {
          lVar2 = lVar1;
          func_0x000107c49d30(lVar1);
          func_0x000107c61180();
          func_0x000107c615e8(lVar1);
          func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
          puVar3 = PTR_PTR_1126ae6b8;
          func_0x000107c61168(PTR_PTR_1126ae6b8);
          func_0x000107c43bf8();
          func_0x000107c61180();
          puVar4 = puVar3;
          func_0x0001000b637c();
          func_0x000107c61170(puVar3);
          func_0x0001000bfde0(0x1011af760,0,PTR___sSbN_11034dd40);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c61574(puVar4);
          return;
        }
      }
      func_0x000107c61170(lVar6);
    }
  }
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  uStack_68 = 0;
  func_0x000100854cb0(&uStack_68);
  return;
}



/* Entry: 1011b1100; end: 1011b1133;  */

void FUN_1011b1100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,*(undefined1 *)(param_2 + 1));
  *param_1 = uVar1;
  return;
}


