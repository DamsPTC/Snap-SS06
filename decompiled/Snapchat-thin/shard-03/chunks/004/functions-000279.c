/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102861990; end: 102861a7b;  */

/* WARNING: Possible PIC construction at 0x0001028619f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028619fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861990(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4c00);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
  }
  func_0x000107c3ed44(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102861a7c; end: 102861ac7; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin dWebExplainerTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861a7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4bf8);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102861ac8; end: 102861adf; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin numberOfUsersPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861ac8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ec4c18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0df190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112ec4c18),PTR_s_numberOfPresentUsers_112615678);
    return;
  }
  return;
}



/* Entry: 102861ae0; end: 102861b1f; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin numberOfUsersPresentOnWeb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861ae0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ec4c18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0df170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112ec4c18),PTR_s_numberOfPresentDWebUsers_112615670);
    return;
  }
  return;
}



/* Entry: 102861b20; end: 102861b5f;  */

void FUN_102861b20(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102861b60; end: 102861b7b;  */

/* WARNING: Possible PIC construction at 0x0001028619f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028619fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861b60(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ec4c00);
  if (*(long *)(unaff_x20 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,*(long *)(unaff_x20 + 0x28));
  }
  func_0x000107c3ed44(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102861b7c; end: 102861b9b;  */

void FUN_102861b7c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102861b9c; end: 102861bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861b9c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
    func_0x000107c613fc();
    uVar2 = 1;
    func_0x00010008747c();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ec4c30);
    *(undefined8 *)(lVar1 + _DAT_112ec4c30) = uVar2;
    func_0x000107c61574(uVar3);
    *(undefined8 *)(lVar1 + _DAT_112ec4c38) = 0xffffffffffffffff;
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102861bcc; end: 102861c87;  */

void FUN_102861bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110559158;
  func_0x000107c613fc(&UNK_110559158,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102861f40,puVar1);
  return;
}



/* Entry: 102861c88; end: 102861f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861c88(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010f0c3250);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    plVar5 = (long *)0x0;
    if ((int)lVar4 != 0) {
      func_0x000100083b20(&lStack_68);
      lVar4 = lStack_68;
      uVar3 = 0x112ec4c78;
      func_0x0001000285a8(0x112ec4c78,&UNK_10dae4b88);
      func_0x000107c610f8();
      func_0x00010017da58(lVar4,uVar3);
      puVar6 = PTR_PTR_1126a73e0;
      func_0x000107c610f8();
      func_0x000107c4907c();
      func_0x000107c61170(lVar4);
      func_0x000100083b20(&lStack_68);
      func_0x000100083b20(&uStack_70);
      uVar3 = uStack_70;
      func_0x000107c5da38();
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      func_0x000100083b20(&lStack_78);
      uVar9 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
      func_0x000107c615f0(uVar9);
      func_0x000107c61170(lStack_78);
      lVar7 = 0;
      FUN_102861028();
      lVar2 = lVar7;
      func_0x000107c610f8();
      func_0x000107c61614(lVar2 + _DAT_112ec4bd8,0);
      func_0x000107c61614(lVar2 + _DAT_112ec4be0,0);
      *(undefined8 *)(lVar2 + _DAT_112ec4be8) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ec4bf0) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ec4c18) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ec4c20) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ec4c28) = 0;
      lVar4 = _DAT_112ec4c30;
      func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
      func_0x000107c613fc();
      uVar8 = 1;
      func_0x00010008747c();
      *(undefined8 *)(lVar2 + lVar4) = uVar8;
      *(undefined8 *)(lVar2 + _DAT_112ec4c38) = 0xffffffffffffffff;
      *(undefined **)(lVar2 + _DAT_112ec4bf8) = puVar6;
      *(long *)(lVar2 + _DAT_112ec4c00) = lStack_68;
      *(undefined8 *)(lVar2 + _DAT_112ec4c08) = uVar3;
      *(undefined8 *)(lVar2 + _DAT_112ec4c10) = uVar9;
      plVar5 = &lStack_88;
      lStack_88 = lVar2;
      lStack_80 = lVar7;
      func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    }
    *param_1 = (long)plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102861f40);
  (*pcVar1)();
}



/* Entry: 102861f40; end: 102861f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861f40(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010f0c3250);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    plVar5 = (long *)0x0;
    if ((int)lVar4 != 0) {
      func_0x000100083b20(&lStack_68);
      lVar4 = lStack_68;
      uVar3 = 0x112ec4c78;
      func_0x0001000285a8(0x112ec4c78,&UNK_10dae4b88);
      func_0x000107c610f8();
      func_0x00010017da58(lVar4,uVar3);
      puVar6 = PTR_PTR_1126a73e0;
      func_0x000107c610f8();
      func_0x000107c4907c();
      func_0x000107c61170(lVar4);
      func_0x000100083b20(&lStack_68);
      func_0x000100083b20(&uStack_70);
      uVar3 = uStack_70;
      func_0x000107c5da38();
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      func_0x000100083b20(&lStack_78);
      uVar9 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
      func_0x000107c615f0(uVar9);
      func_0x000107c61170(lStack_78);
      lVar7 = 0;
      FUN_102861028();
      lVar2 = lVar7;
      func_0x000107c610f8();
      func_0x000107c61614(lVar2 + _DAT_112ec4bd8,0);
      func_0x000107c61614(lVar2 + _DAT_112ec4be0,0);
      *(undefined8 *)(lVar2 + _DAT_112ec4be8) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ec4bf0) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ec4c18) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ec4c20) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ec4c28) = 0;
      lVar4 = _DAT_112ec4c30;
      func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
      func_0x000107c613fc();
      uVar8 = 1;
      func_0x00010008747c();
      *(undefined8 *)(lVar2 + lVar4) = uVar8;
      *(undefined8 *)(lVar2 + _DAT_112ec4c38) = 0xffffffffffffffff;
      *(undefined **)(lVar2 + _DAT_112ec4bf8) = puVar6;
      *(long *)(lVar2 + _DAT_112ec4c00) = lStack_68;
      *(undefined8 *)(lVar2 + _DAT_112ec4c08) = uVar3;
      *(undefined8 *)(lVar2 + _DAT_112ec4c10) = uVar9;
      plVar5 = &lStack_88;
      lStack_88 = lVar2;
      lStack_80 = lVar7;
      func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    }
    *param_1 = (long)plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102861f40);
  (*pcVar1)();
}



/* Entry: 102861f60; end: 10286246b;  */

void FUN_102861f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110559250;
  func_0x000107c613fc(&UNK_110559250,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000823a8(0x1028620a0,puVar1);
  return;
}



/* Entry: 10286246c; end: 10286247b;  */

undefined1  [16] FUN_10286246c(void)

{
  return ZEXT816(0x110559278);
}



/* Entry: 10286247c; end: 10286248b; -[ComposerChatMediaVideoServices videoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286247c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4c80));
  return;
}



/* Entry: 10286248c; end: 102862523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286248c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec4c80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102862524; end: 102862557;  */

void FUN_102862524(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102862558; end: 102862567; -[ComposerChatMediaVideoServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102862558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4c80));
  return;
}



/* Entry: 102862568; end: 1028625c3; -[_TtC31SCChatTextMessagePluginProviderP33_17887223E51BD52D65769C94DEDC787340RetainingReplyQuotingCameraScopeLauncher initWithScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102862568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ec4cb0) = param_3;
  puVar1 = PTR_s_initWithScopeExposer__1125ee1e0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1,param_3);
  return;
}



/* Entry: 1028625c4; end: 1028625f7;  */

void FUN_1028625c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028625f8; end: 102862607; -[_TtC31SCChatTextMessagePluginProviderP33_17887223E51BD52D65769C94DEDC787340RetainingReplyQuotingCameraScopeLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028625f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4cb0));
  return;
}



/* Entry: 102862608; end: 102862b2f;  */

void FUN_102862608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105593c0;
  func_0x000107c613fc(&UNK_1105593c0,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  *(undefined8 *)(puVar1 + 0x18) = param_10;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_11;
  *(undefined8 *)(puVar1 + 0x48) = param_2;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  *(undefined8 *)(puVar1 + 0x58) = param_7;
  *(undefined8 *)(puVar1 + 0x60) = param_5;
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x10286272c,puVar1);
  return;
}



/* Entry: 102862b30; end: 102862b4f;  */

void FUN_102862b30(void)

{
  func_0x000107c61168(&PTR_PTR_112ec4cf8);
  return;
}



/* Entry: 102862b50; end: 102862b5f;  */

undefined1  [16] FUN_102862b50(void)

{
  return ZEXT816(0x1105593e8);
}



/* Entry: 102862b60; end: 102862d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102862b60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  FUN_102862b30();
  func_0x000107c610f8();
  func_0x000107c484e0();
  func_0x000100083b20(&lStack_58);
  uVar1 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c51d00(uStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c5da30(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&lStack_70);
  uVar6 = *(undefined8 *)(lStack_70 + _DAT_113041e50);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&lStack_78);
  uVar5 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_78);
  puVar4 = PTR_PTR_1126ab488;
  func_0x000107c610f8(PTR_PTR_1126ab488);
  func_0x000107c49320();
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return puVar4;
}



/* Entry: 102862d14; end: 102862d4b;  */

void FUN_102862d14(long param_1)

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



/* Entry: 102862d4c; end: 102862d67;  */

void FUN_102862d4c(long param_1,long param_2)

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



/* Entry: 102862d68; end: 10286308f;  */

void FUN_102862d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110559500;
  func_0x000107c613fc(&UNK_110559500,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x102862e24,puVar1);
  return;
}



/* Entry: 102863090; end: 10286309f;  */

undefined1  [16] FUN_102863090(void)

{
  return ZEXT816(0x110559528);
}



/* Entry: 1028630a0; end: 1028636ab;  */

void FUN_1028630a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105595f0;
  func_0x000107c613fc(&UNK_1105595f0,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(undefined8 *)(puVar1 + 0x28) = param_10;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_3;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x1028631b4,puVar1);
  return;
}



/* Entry: 1028636ac; end: 1028636bb;  */

undefined1  [16] FUN_1028636ac(void)

{
  return ZEXT816(0x110559618);
}



/* Entry: 1028636bc; end: 102863bbf;  */

void FUN_1028636bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_1105596e0;
  func_0x000107c613fc(&UNK_1105596e0,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(0x1028637cc,puVar1);
  return;
}



/* Entry: 102863bc0; end: 102863c2f;  */

void FUN_102863bc0(void)

{
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  func_0x0001000823a8(0x102863c00,0);
  return;
}



/* Entry: 102863c30; end: 102863c4f;  */

undefined1  [16] FUN_102863c30(void)

{
  return ZEXT816(0x110559708);
}



/* Entry: 102863c50; end: 102863ccf;  */

void FUN_102863c50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_1105597f8;
  func_0x000107c613fc(&UNK_1105597f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102863cd0,puVar1);
  return;
}



/* Entry: 102863cd0; end: 102863f93;  */

void FUN_102863cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c5da38(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar2 = uStack_50;
  func_0x000107c5b478(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c5b4b4(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  puVar4 = PTR_PTR_1126ab4c8;
  func_0x000107c610f8();
  func_0x000107c49300();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar4;
  return;
}



/* Entry: 102863f94; end: 10286424b;  */

void FUN_102863f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_110559848;
  func_0x000107c613fc(&UNK_110559848,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x102864050,puVar1);
  return;
}



/* Entry: 10286424c; end: 10286427b;  */

undefined1  [16] FUN_10286424c(void)

{
  return ZEXT816(0x110559870);
}



/* Entry: 10286427c; end: 10286428b; -[MessageForwardScope message] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286427c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4d70));
  return;
}



/* Entry: 10286428c; end: 10286429b; -[MessageForwardScope conversationParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286428c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4d78));
  return;
}



/* Entry: 10286429c; end: 1028642ab; -[MessageForwardScope focusedMessageContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286429c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4d80));
  return;
}



/* Entry: 1028642ac; end: 1028642bb; -[MessageForwardScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028642ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ec4d88);
}



/* Entry: 1028642bc; end: 1028642db; -[MessageForwardScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028642bc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ec4d90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028642dc; end: 102864323; -[MessageForwardScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028642dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec4d98;
  func_0x000107c61428(param_1 + _DAT_112ec4d98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102864324; end: 10286437b; -[MessageForwardScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102864324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec4d98;
  func_0x000107c61428(param_1 + _DAT_112ec4d98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10286437c; end: 1028644c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10286437c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ec4d98;
  func_0x000107c61614(unaff_x20 + _DAT_112ec4d98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d88) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d90) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_5);
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  return puVar3;
}



/* Entry: 1028644c8; end: 102864537;  */

undefined8
FUN_1028644c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1028646cc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  return uVar1;
}



/* Entry: 102864538; end: 102864603; -[MessageForwardScope initWithMessage:focusedMessageContent:conversationParticipants:source:uiContainer:delegate:] */

undefined8
FUN_102864538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  uVar1 = param_3;
  FUN_1028646cc(param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  return uVar1;
}



/* Entry: 102864604; end: 102864663; -[MessageForwardScope init] */

void FUN_102864604(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessageForwardScope.MessageForwardScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102864630);
  (*pcVar1)();
}



/* Entry: 102864664; end: 1028646cb; -[MessageForwardScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102864664(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4d70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4d78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4d80));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec4d90));
  param_1 = param_1 + _DAT_112ec4d98;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1028646cc; end: 1028647d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028646cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ec4d98;
  func_0x000107c61614(unaff_x20 + _DAT_112ec4d98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d88) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4d90) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 1028647d8; end: 1028647fb;  */

undefined8 FUN_1028647d8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1028647fc; end: 10286481b;  */

void FUN_1028647fc(void)

{
  func_0x000107c61168(&PTR_PTR_112866db8);
  return;
}



/* Entry: 10286481c; end: 102864833;  */

bool FUN_10286481c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102864834; end: 102864873;  */

void FUN_102864834(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec4dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae4e10;
  func_0x000107c61520(&UNK_10dae4e10,&UNK_110559950);
  puRam0000000112ec4dc8 = puVar1;
  return;
}



/* Entry: 102864874; end: 10286491f;  */

void FUN_102864874(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102864920; end: 102864957;  */

void FUN_102864920(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 102864958; end: 102864967; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102864958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4dd0));
  return;
}



/* Entry: 102864968; end: 1028649d3; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin setActiveConversationIdObservable:] */

/* WARNING: Possible PIC construction at 0x0001028649ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028649bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028649b0) */
/* WARNING: Removing unreachable block (ram,0x0001028649c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102864968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4dd0);
  *(undefined8 *)(param_1 + _DAT_112ec4dd0) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028649d4; end: 102864ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028649d4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112ec4df0;
  ppuVar4 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112ec4df0) != 0) {
    func_0x000107c4218c();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec4dd0);
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c421ac();
    func_0x000107c61180();
    puVar3 = &UNK_110559a70;
    func_0x000107c613fc(&UNK_110559a70,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_1028670b8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b6fe98;
    puStack_58 = &UNK_110559ad8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar6 = lVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar6;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 102864ae4; end: 102864b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102864ae4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ec4de8);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    func_0x000100075034(FUN_102864b78,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102864b78; end: 102864baf;  */

void FUN_102864b78(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
  *param_1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 102864bb0; end: 102864bbf; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102864bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4dd8));
  return;
}



/* Entry: 102864bc0; end: 102864bf3; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102864bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4dd8);
  *(undefined8 *)(param_1 + _DAT_112ec4dd8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102864bf4; end: 102864cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102864bf4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_48;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ec4dd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4dd8) = 0;
  lVar1 = _DAT_112ec4de8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1027f8eb0();
  puStack_48 = puVar2;
  func_0x0001000285a8(0x112ec2720,&UNK_10dae0ac0);
  func_0x000107c613fc();
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4df0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec4de0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffa8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102864cc4; end: 102864def;  */

/* WARNING: Removing unreachable block (ram,0x000102864d74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102864cc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4de0);
  func_0x000107c4ce08(lVar1,param_2,param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4051c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4eb08();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4e024();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c5fc50();
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61170(lVar1);
    }
  }
  return 0;
}



/* Entry: 102864df0; end: 102864e63; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_102864df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028659d4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102864e64; end: 102864e7b; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102864e78) */

void FUN_102864e64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102864e7c; end: 102864e83; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin pluginType] */

undefined8 FUN_102864e7c(void)

{
  return 0;
}



/* Entry: 102864e84; end: 102864e8b; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_102864e84(void)

{
  return 0;
}



/* Entry: 102864e8c; end: 1028650df; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_102864e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028669e4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028650e0; end: 102865153; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_1028650e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102866b8c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102865154; end: 102865267;  */

void FUN_102865154(long *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar3 = param_2;
    uVar2 = param_3;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar3 * 8);
      func_0x000107c6157c(uVar5);
      func_0x000107c6142c(lVar4);
      goto LAB_102865240;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x0001000285a8(0x112ec26e8,&UNK_10dae0a60);
  func_0x000107c613fc();
  uVar5 = 1;
  func_0x00010008747c();
  func_0x000107c61434(param_3);
  func_0x000107c6157c(uVar5);
  lVar4 = *param_1;
  func_0x000107c61558(lVar4);
  lVar3 = *param_1;
  FUN_1027f6fa0(uVar5,param_2,param_3,lVar4);
  func_0x000107c6142c(param_3);
  *param_1 = lVar3;
LAB_102865240:
  uVar1 = *param_4;
  *param_4 = uVar5;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102865268; end: 1028652db;  */

void FUN_102865268(long *param_1,long *param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *param_2;
  (*param_3)();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_102867058(0,0x112ec4e38,&PTR_PTR_1126ab4e8);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 1028652dc; end: 10286533b; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin init] */

void FUN_1028652dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPollMessageRenderingPlugin.SCPollMessageRenderingPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102865308);
  (*pcVar1)();
}



/* Entry: 10286533c; end: 1028653a3; -[_TtC28SCPollMessageRenderingPlugin28SCPollMessageRenderingPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102865358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286535c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286533c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4dd0));
  return;
}



/* Entry: 1028653a4; end: 10286542f;  */

void FUN_1028653a4(void)

{
  func_0x000107c61168(&PTR_PTR_112866ea0);
  return;
}



/* Entry: 102865430; end: 1028655eb;  */

ulong FUN_102865430(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102865514);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102865518);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102867058(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028655ec);
  (*pcVar2)();
}



/* Entry: 1028655ec; end: 10286563f;  */

void FUN_1028655ec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102865640();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102865640; end: 1028659d3;  */

undefined * FUN_102865640(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102865770);
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
    puVar3 = (undefined *)0x112d5a1b8;
    func_0x0001000285a8(0x112d5a1b8,&UNK_10dae4f00);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
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



/* Entry: 1028659d4; end: 1028667e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028659d4(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined *apuStack_b8 [3];
  undefined8 uStack_a0;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112ec4de0);
  func_0x000107c4ce08(puVar3,param_2,param_1);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c4eb08();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar5;
      func_0x000107c4f7a8();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102865e00);
        (*pcVar2)();
      }
      puVar6 = puVar4;
      func_0x000107c5faec();
      uVar16 = param_2;
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(param_2);
      uVar17 = (ulong)puVar6 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar17 = param_2 >> 0x38 & 0xf;
      }
      if (uVar17 != 0) {
        puVar4 = puVar3;
        func_0x000107c40674();
        func_0x000107c61180();
        puVar6 = puVar4;
        func_0x000107c5faec();
        puVar7 = puVar3;
        uVar17 = uVar16;
        func_0x000107c40258(puVar3);
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5faec();
        puVar9 = puVar5;
        func_0x000107c4f7a8();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar7);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102865e14);
          (*pcVar2)();
        }
        puVar10 = &UNK_110559a70;
        func_0x000107c613fc(&UNK_110559a70,0x18,7);
        func_0x000107c61614(puVar10 + 0x10);
        puStack_90 = puVar6;
        uStack_88 = uVar16;
        func_0x000107c6157c(puVar10);
        func_0x000107c61434(uVar16);
        func_0x000107c5fb78(0x7c,0xe100000000000000);
        func_0x000107c5fb78(puVar8,uVar17);
        uVar1 = uStack_88;
        apuStack_b8[0] = (undefined *)0x0;
        uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ec4de8);
        puStack_80 = puStack_90;
        uStack_78 = uStack_88;
        ppuStack_70 = apuStack_b8;
        func_0x000107c6157c(uVar18);
        func_0x000100075034(FUN_1028670e0,&puStack_90,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar18);
        puVar6 = apuStack_b8[0];
        if (apuStack_b8[0] != (undefined *)0x0) {
          func_0x000107c6142c(uVar1);
          puStack_90 = param_1;
          func_0x000100087c34(&puStack_90);
          puVar11 = PTR_PTR_1126ab4d0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar8 = &UNK_110559ac0;
          func_0x000107c613fc(&UNK_110559ac0,0x20,7);
          *(code **)(puVar8 + 0x10) = FUN_102867098;
          *(undefined **)(puVar8 + 0x18) = puVar10;
          uVar12 = 0;
          FUN_102867058(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c6157c(puVar10);
          uVar18 = 0x1028670dc;
          func_0x0001000d5158(0x1028670dc,puVar8,uVar12);
          func_0x000107c61574(puVar8);
          func_0x0001004575f0();
          func_0x000107c61574(uVar18);
          puVar13 = puVar8;
          func_0x000107c5cb24(puVar8);
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          func_0x000107c57080(puVar11);
          func_0x000107c61170(puVar13);
          puVar8 = PTR_PTR_1126ab4d8;
          func_0x000107c610f8();
          func_0x000107c461a4();
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar9);
          uVar18 = 0x112ec4e20;
          uVar14 = 0;
          FUN_102867058(0,0x112ec4e20,&PTR_PTR_1126ab4e0);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar12 = uVar14;
          func_0x000107c5faec();
          func_0x000107c61170(uVar14);
          uVar14 = 0;
          FUN_102867058(0,0x112ec4e28,&PTR_PTR_1126ab4d8);
          uVar15 = 0;
          puStack_90 = puVar8;
          uStack_78 = uVar14;
          FUN_102867058(0,0x112ec4e30,&PTR_PTR_1126ab4d0);
          apuStack_b8[0] = puVar11;
          uStack_a0 = uVar15;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          func_0x000107c61174(puVar8);
          func_0x000107c61174(puVar11);
          FUN_1027efbc4(uVar12,uVar18,&puStack_90,apuStack_b8);
          func_0x000107c61574(puVar6);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar8);
          func_0x000107c6142c(uVar16);
          func_0x000107c615e8(puVar3);
          func_0x000107c61578(puVar10,2);
          func_0x000107c61170(puVar5);
          func_0x000107c6142c(uVar17);
          return uVar12;
        }
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar9);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102865e30);
        (*pcVar2)();
      }
      func_0x000107c61170(puVar5);
    }
  }
  func_0x000107c615e8(puVar3);
  return 0;
}



/* Entry: 1028667e8; end: 1028669e3;  */

undefined * FUN_1028667e8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  double dVar11;
  
  func_0x000102865e30();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102865624(0,0,0);
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (uVar7 != 0) {
    uVar9 = 0;
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      dVar11 = 0.0;
      if (uVar9 < *(ulong *)(param_2 + 0x10)) {
        dVar11 = (double)*(long *)(param_2 + 0x20 + uVar9 * 8);
      }
      uVar5 = puVar8[-1];
      uVar2 = *puVar8;
      puVar4 = PTR_PTR_1126ab4e8;
      func_0x000107c610f8();
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar5,uVar2);
      func_0x000107c470cc(dVar11);
      func_0x000107c61170(uVar5);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar9 < *(ulong *)(param_4 + 0x10)) {
        puVar10 = *(undefined **)(param_4 + 0x20 + uVar9 * 8);
        func_0x000107c61434(puVar10);
      }
      puVar6 = puVar10;
      func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar10);
      func_0x000107c5a614(puVar4);
      func_0x000107c6142c(uVar2);
      func_0x000107c61170(puVar6);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        func_0x000102865624(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 2;
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar3 + uVar1 * 8 + 0x20) = puVar4;
    } while (uVar7 != uVar9);
  }
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_2);
  return puVar3;
}



/* Entry: 1028669e4; end: 102866b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028669e4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *apuStack_60 [3];
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ec4de0);
  func_0x000107c4ce08(uVar1,param_2,param_1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4051c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  uVar1 = uVar2;
  func_0x000107c4eb08();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c4f7a8();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c5faec();
      uVar3 = uVar3 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar3 = param_2 >> 0x38 & 0xf;
      }
      if (uVar3 != 0) {
        uVar7 = 0x112ec4e60;
        uVar4 = 0;
        FUN_102867058(0,0x112ec4e60,&PTR_PTR_1126ab4f0);
        func_0x000107c614e8();
        func_0x000107c3ff48();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(param_2);
        puVar6 = PTR_PTR_1126ab4f8;
        func_0x000107c610f8();
        func_0x000107c481f8();
        func_0x000107c61170(uVar2);
        uVar4 = 0;
        FUN_102867058(0,0x112ec4e68,&PTR_PTR_1126ab4f8);
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        apuStack_60[0] = puVar6;
        uStack_48 = uVar4;
        func_0x000107c610f8(PTR_PTR_1126c67d8);
        FUN_1027efbc4(uVar5,uVar7,apuStack_60,&uStack_80);
        func_0x000107c61170(uVar1);
        return uVar5;
      }
      func_0x000107c6142c(param_2);
      func_0x000107c61170(uVar1);
      uVar1 = uVar2;
    }
    func_0x000107c61170(uVar1);
  }
  return 0;
}



/* Entry: 102866b8c; end: 102867013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102866b8c(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined *apuStack_b8 [3];
  undefined8 uStack_a0;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112ec4de0);
  func_0x000107c4ce08(puVar3,param_2,param_1);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4f858();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c4eb08();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar5;
      func_0x000107c4f7a8();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102866fe4);
        (*pcVar2)();
      }
      puVar6 = puVar4;
      func_0x000107c5faec();
      uVar16 = param_2;
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(param_2);
      uVar17 = (ulong)puVar6 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar17 = param_2 >> 0x38 & 0xf;
      }
      if (uVar17 != 0) {
        puVar4 = puVar3;
        func_0x000107c40674();
        func_0x000107c61180();
        puVar6 = puVar4;
        func_0x000107c5faec();
        puVar7 = puVar3;
        uVar17 = uVar16;
        func_0x000107c40258(puVar3);
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5faec();
        puVar9 = puVar5;
        func_0x000107c4f7a8();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar7);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102866ff8);
          (*pcVar2)();
        }
        puVar10 = &UNK_110559a70;
        func_0x000107c613fc(&UNK_110559a70,0x18,7);
        func_0x000107c61614(puVar10 + 0x10);
        puStack_90 = puVar6;
        uStack_88 = uVar16;
        func_0x000107c6157c(puVar10);
        func_0x000107c61434(uVar16);
        func_0x000107c5fb78(0x7c,0xe100000000000000);
        func_0x000107c5fb78(puVar8,uVar17);
        uVar1 = uStack_88;
        apuStack_b8[0] = (undefined *)0x0;
        uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ec4de8);
        puStack_80 = puStack_90;
        uStack_78 = uStack_88;
        ppuStack_70 = apuStack_b8;
        func_0x000107c6157c(uVar18);
        func_0x000100075034(0x102867034,&puStack_90,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar18);
        puVar6 = apuStack_b8[0];
        if (apuStack_b8[0] != (undefined *)0x0) {
          func_0x000107c6142c(uVar1);
          puStack_90 = param_1;
          func_0x000100087c34(&puStack_90);
          puVar11 = PTR_PTR_1126ab4d0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar8 = &UNK_110559a98;
          func_0x000107c613fc(&UNK_110559a98,0x20,7);
          *(code **)(puVar8 + 0x10) = FUN_102867014;
          *(undefined **)(puVar8 + 0x18) = puVar10;
          uVar18 = 0;
          FUN_102867058(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c6157c(puVar10);
          pcVar2 = FUN_102867050;
          func_0x0001000d5158(FUN_102867050,puVar8,uVar18);
          func_0x000107c61574(puVar8);
          func_0x0001004575f0();
          func_0x000107c61574(pcVar2);
          puVar12 = puVar8;
          func_0x000107c5cb24(puVar8);
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          func_0x000107c57080(puVar11);
          func_0x000107c61170(puVar12);
          puVar8 = PTR_PTR_1126ab4d8;
          func_0x000107c610f8();
          func_0x000107c461a4();
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar9);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c5914c(puVar8);
          func_0x000107c61170(puVar4);
          uVar18 = 0x112ec4e20;
          uVar13 = 0;
          FUN_102867058(0,0x112ec4e20,&PTR_PTR_1126ab4e0);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar14 = uVar13;
          func_0x000107c5faec();
          func_0x000107c61170(uVar13);
          uVar13 = 0;
          FUN_102867058(0,0x112ec4e28,&PTR_PTR_1126ab4d8);
          uVar15 = 0;
          puStack_90 = puVar8;
          uStack_78 = uVar13;
          FUN_102867058(0,0x112ec4e30,&PTR_PTR_1126ab4d0);
          apuStack_b8[0] = puVar11;
          uStack_a0 = uVar15;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          func_0x000107c61174(puVar8);
          func_0x000107c61174(puVar11);
          FUN_1027efbc4(uVar14,uVar18,&puStack_90,apuStack_b8);
          func_0x000107c61574(puVar6);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar8);
          func_0x000107c6142c(uVar16);
          func_0x000107c615e8(puVar3);
          func_0x000107c61578(puVar10,2);
          func_0x000107c61170(puVar5);
          func_0x000107c6142c(uVar17);
          return uVar14;
        }
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar9);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102867014);
        (*pcVar2)();
      }
      func_0x000107c61170(puVar5);
    }
  }
  func_0x000107c615e8(puVar3);
  return 0;
}



/* Entry: 102867014; end: 10286704f;  */

void FUN_102867014(void)

{
  func_0x000102864f00();
  return;
}



/* Entry: 102867050; end: 102867057;  */

void FUN_102867050(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))
            (lVar1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_102867058(0,0x112ec4e38,&PTR_PTR_1126ab4e8);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 102867058; end: 102867097;  */

void FUN_102867058(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102867098; end: 1028670b7;  */

void FUN_102867098(void)

{
  func_0x000102864f00();
  return;
}



/* Entry: 1028670b8; end: 1028670df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028670b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ec4de8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000100075034(FUN_102864b78,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1028670e0; end: 1028670f3;  */

void FUN_1028670e0(void)

{
  func_0x000102867034();
  return;
}



/* Entry: 1028670f4; end: 10286713f;  */

void FUN_1028670f4(undefined8 param_1)

{
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028671b8,param_1);
  return;
}



/* Entry: 102867140; end: 1028671b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867140(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11301aef0);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_38);
  FUN_1028653a4(0);
  func_0x000107c610f8();
  FUN_102864bf4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1028671b8; end: 1028671cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028671b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11301aef0);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_38);
  FUN_1028653a4(0);
  func_0x000107c610f8();
  FUN_102864bf4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1028671d0; end: 1028671ef; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028671d0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028671f0; end: 102867203; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028671f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4e70,param_3);
  return;
}



/* Entry: 102867204; end: 102867213; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4e78));
  return;
}



/* Entry: 102867214; end: 102867247; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4e78);
  *(undefined8 *)(param_1 + _DAT_112ec4e78) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102867248; end: 102867257; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4e80));
  return;
}



/* Entry: 102867258; end: 10286728b; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102867258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4e80);
  *(undefined8 *)(param_1 + _DAT_112ec4e80) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286728c; end: 102867487; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin valdiContextParamsForMessages:conversationParticipants:] */

void FUN_10286728c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1028678b8(0,0x112dbe420,&PTR_PTR_1126b2d28);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028677b0(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102867488; end: 1028674ff; -[_TtC34SCPollStatusMessageRenderingPlugin34SCPollStatusMessageRenderingPlugin canMergeMessage:withPreviousMessage:] */

uint FUN_102867488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x000102867320(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)uVar2 & 1;
}


