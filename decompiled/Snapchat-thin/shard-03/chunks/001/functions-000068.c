/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102461c70; end: 102461c7f;  */

undefined1  [16] FUN_102461c70(void)

{
  return ZEXT816(0x11050c0a0);
}



/* Entry: 102461c80; end: 102461c9f;  */

void FUN_102461c80(void)

{
  func_0x000107c61168(&PTR_PTR_112842868);
  return;
}



/* Entry: 102461ca0; end: 102461d2f; -[_TtC24BitmojiExtensionSettings33BitmojiExtensionSettingsPresenter didDismissBitmojiExtensionSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461ca0(long param_1)

{
  long lVar1;
  ulong *puStack_38;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000100083b20(&puStack_38);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_38) + 0x68))();
  func_0x000107c61170(puStack_38);
  if (lVar1 != 0) {
    func_0x000107c41b00(lVar1);
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102461d30; end: 102461d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461d30(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long alStack_70 [3];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000100083b20(alStack_70);
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(alStack_70[0] + _DAT_112f96890);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(alStack_70[0]);
    func_0x000107c3e2c0(uVar4);
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61428(lVar3 + 0x10,alStack_70,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + _DAT_112e9be60) = uVar1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102461d44; end: 102461d8f;  */

void FUN_102461d44(undefined8 param_1)

{
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102461e3c,param_1);
  return;
}



/* Entry: 102461d90; end: 102461e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461d90(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar2 = param_2;
  FUN_1024622f0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e9bec0) = 0;
  lVar1 = _DAT_112e9bec8;
  puVar4 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c3cf30();
  func_0x000107c61180();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(long *)(lVar3 + _DAT_112e9bed0) = param_2;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_50,puVar4);
  *param_1 = plVar5;
  return;
}



/* Entry: 102461e3c; end: 102461e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461e3c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  puVar4 = auStack_50;
  lVar2 = unaff_x20;
  FUN_1024622f0();
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e9bec0) = 0;
  lVar1 = _DAT_112e9bec8;
  puVar3 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c3cf30();
  func_0x000107c61180();
  *(undefined **)(lVar2 + lVar1) = puVar3;
  *(long *)(lVar2 + _DAT_112e9bed0) = unaff_x20;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_50,puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 102461e44; end: 102461ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461e44(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9bec0) = 0;
  lVar1 = _DAT_112e9bec8;
  puVar2 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c3cf30();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9bed0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102461ed0; end: 102461f17; -[_TtC24BitmojiExtensionSettings49BitmojiKeyboardExtensionSettingsRowProviderPlugin sectionRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461ed0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9bec8;
  func_0x000107c61428(param_1 + _DAT_112e9bec8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102461f18; end: 102461f7b; -[_TtC24BitmojiExtensionSettings49BitmojiKeyboardExtensionSettingsRowProviderPlugin setSectionRow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9bec8;
  func_0x000107c61428(param_1 + _DAT_112e9bec8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102461f7c; end: 102462047; -[_TtC24BitmojiExtensionSettings49BitmojiKeyboardExtensionSettingsRowProviderPlugin rowViewModel] */

void FUN_102461f7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_102469ce4();
  puVar1 = PTR_PTR_1126aeaf0;
  func_0x000107c610f8(PTR_PTR_1126aeaf0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48dac(puVar1);
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c5b58c();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102462048; end: 1024621cb;  */

/* WARNING: Possible PIC construction at 0x000102462098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102462194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024621a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102462198) */
/* WARNING: Removing unreachable block (ram,0x00010246209c) */
/* WARNING: Removing unreachable block (ram,0x0001024621a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102462048(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (param_1 == (undefined *)0x0) {
    return;
  }
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x000107c4d508();
  func_0x000107c61180();
  lVar3 = _DAT_112e9bec0;
  if ((puVar1 != (undefined *)0x0) && (*(long *)(unaff_x20 + _DAT_112e9bec0) == 0)) {
    param_1 = PTR_PTR_1126aead0;
    func_0x000107c610f8();
    func_0x000107c47994();
    func_0x00010033361c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x0001037df41c();
    func_0x000100083b20(&uStack_58);
    uVar2 = uStack_58;
    puStack_60 = param_1;
    func_0x00010008a7c8(&uStack_58,&puStack_60);
    func_0x000107c61574(uVar2);
    func_0x000100083b20(&puStack_60);
    func_0x000107c61574(uStack_58);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puStack_60;
    func_0x000107c615e8(uVar2);
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c4ee7c();
      func_0x000107c615e8(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024621cc; end: 10246221f; -[_TtC24BitmojiExtensionSettings49BitmojiKeyboardExtensionSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x000102462208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246220c) */

void FUN_1024621cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102462048(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102462220; end: 10246227f; -[_TtC24BitmojiExtensionSettings49BitmojiKeyboardExtensionSettingsRowProviderPlugin init] */

void FUN_102462220(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiExtensionSettings.BitmojiKeyboardExtensionSettingsRowProviderPlugin",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10246224c);
  (*pcVar1)();
}



/* Entry: 102462280; end: 1024622c7; -[_TtC24BitmojiExtensionSettings49BitmojiKeyboardExtensionSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102462280(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9bed0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9bec0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9bec8));
  return;
}



/* Entry: 1024622c8; end: 1024622ef; -[_TtC24BitmojiExtensionSettings49BitmojiKeyboardExtensionSettingsRowProviderPlugin didDismissBitmojiExtensionSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024622c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e9bec0);
  *(undefined8 *)(param_1 + _DAT_112e9bec0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1024622f0; end: 10246230f;  */

void FUN_1024622f0(void)

{
  func_0x000107c61168(&PTR_PTR_112842960);
  return;
}



/* Entry: 102462310; end: 10246235b;  */

void FUN_102462310(undefined8 param_1)

{
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102462408,param_1);
  return;
}



/* Entry: 10246235c; end: 102462407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246235c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar2 = param_2;
  FUN_1024628bc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e9bf00) = 0;
  lVar1 = _DAT_112e9bf08;
  puVar4 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c3cf30();
  func_0x000107c61180();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(long *)(lVar3 + _DAT_112e9bf10) = param_2;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_50,puVar4);
  *param_1 = plVar5;
  return;
}



/* Entry: 102462408; end: 10246240f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102462408(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  puVar4 = auStack_50;
  lVar2 = unaff_x20;
  FUN_1024628bc();
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e9bf00) = 0;
  lVar1 = _DAT_112e9bf08;
  puVar3 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c3cf30();
  func_0x000107c61180();
  *(undefined **)(lVar2 + lVar1) = puVar3;
  *(long *)(lVar2 + _DAT_112e9bf10) = unaff_x20;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_50,puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 102462410; end: 10246249b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102462410(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9bf00) = 0;
  lVar1 = _DAT_112e9bf08;
  puVar2 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c3cf30();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9bf10) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10246249c; end: 1024624e3; -[_TtC24BitmojiExtensionSettings49BitmojiMessagesExtensionSettingsRowProviderPlugin sectionRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246249c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9bf08;
  func_0x000107c61428(param_1 + _DAT_112e9bf08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024624e4; end: 102462547; -[_TtC24BitmojiExtensionSettings49BitmojiMessagesExtensionSettingsRowProviderPlugin setSectionRow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024624e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9bf08;
  func_0x000107c61428(param_1 + _DAT_112e9bf08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102462548; end: 102462613; -[_TtC24BitmojiExtensionSettings49BitmojiMessagesExtensionSettingsRowProviderPlugin rowViewModel] */

void FUN_102462548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000102469d08();
  puVar1 = PTR_PTR_1126aeaf0;
  func_0x000107c610f8(PTR_PTR_1126aeaf0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48dac(puVar1);
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c5b58c();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102462614; end: 102462797;  */

/* WARNING: Possible PIC construction at 0x000102462664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102462760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102462770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102462764) */
/* WARNING: Removing unreachable block (ram,0x000102462668) */
/* WARNING: Removing unreachable block (ram,0x000102462774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102462614(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (param_1 == (undefined *)0x0) {
    return;
  }
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x000107c4d508();
  func_0x000107c61180();
  lVar3 = _DAT_112e9bf00;
  if ((puVar1 != (undefined *)0x0) && (*(long *)(unaff_x20 + _DAT_112e9bf00) == 0)) {
    param_1 = PTR_PTR_1126aead0;
    func_0x000107c610f8();
    func_0x000107c47994();
    func_0x00010033361c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x0001037df41c();
    func_0x000100083b20(&uStack_58);
    uVar2 = uStack_58;
    puStack_60 = param_1;
    func_0x00010008a7c8(&uStack_58,&puStack_60);
    func_0x000107c61574(uVar2);
    func_0x000100083b20(&puStack_60);
    func_0x000107c61574(uStack_58);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puStack_60;
    func_0x000107c615e8(uVar2);
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c4ee7c();
      func_0x000107c615e8(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102462798; end: 1024627eb; -[_TtC24BitmojiExtensionSettings49BitmojiMessagesExtensionSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001024627d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024627d8) */

void FUN_102462798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102462614(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024627ec; end: 10246284b; -[_TtC24BitmojiExtensionSettings49BitmojiMessagesExtensionSettingsRowProviderPlugin init] */

void FUN_1024627ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiExtensionSettings.BitmojiMessagesExtensionSettingsRowProviderPlugin",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102462818);
  (*pcVar1)();
}



/* Entry: 10246284c; end: 102462893; -[_TtC24BitmojiExtensionSettings49BitmojiMessagesExtensionSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246284c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9bf10));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9bf00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9bf08));
  return;
}



/* Entry: 102462894; end: 1024628bb; -[_TtC24BitmojiExtensionSettings49BitmojiMessagesExtensionSettingsRowProviderPlugin didDismissBitmojiExtensionSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102462894(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e9bf00);
  *(undefined8 *)(param_1 + _DAT_112e9bf00) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1024628bc; end: 1024628db;  */

void FUN_1024628bc(void)

{
  func_0x000107c61168(&PTR_PTR_112842a30);
  return;
}



/* Entry: 1024628dc; end: 102462a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024628dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e9bf88;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9bf88);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000102462940();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102462a58; end: 102462cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102462a58(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR_PTR_1126e2158;
  func_0x000107c610f8(PTR_PTR_1126e2158);
  func_0x000107c453e4();
  func_0x000107c547d8();
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112e9bf50);
    func_0x000107c615f0(uVar11);
    func_0x000107c61170(param_1);
    func_0x000107c4bfb0(uVar11);
    func_0x000107c615e8(uVar11);
  }
  func_0x000107c5edd0(puVar10,0x3a736d73,0xe400000000000000);
  puVar3 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x000107c61170(puVar2);
    func_0x0001000293e4(puVar10);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar9,puVar10,lVar1);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5ed90();
    puVar7 = puVar5;
    func_0x000107c3f3f4();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar12 + 8))(lVar9,lVar1);
      func_0x000107c61170(puVar2);
    }
    else {
      func_0x000107c5a9c4(puVar4);
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5ed90();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar8 = 0;
      func_0x000100dfa6ec(0);
      uVar11 = 0x112d377a8;
      FUN_102464db0(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
      puVar7 = puVar6;
      func_0x000107c5f9dc(puVar6,uVar8,PTR___sypN_11034f1a8 + 8,uVar11);
      func_0x000107c6142c(puVar6);
      func_0x000107c4de70(puVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      (**(code **)(lVar12 + 8))(lVar9,lVar1);
    }
  }
  return;
}



/* Entry: 102462cf8; end: 102462f07;  */

undefined * FUN_102462cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c59c74(puVar1);
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  FUN_102469a84();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 102462f08; end: 102463723;  */

/* WARNING: Possible PIC construction at 0x000102462f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102462fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246316c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024631a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246327c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024632a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024632f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246337c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024633e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024634a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024634cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246350c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246355c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024635ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024635d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102463660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024636a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102463664) */
/* WARNING: Removing unreachable block (ram,0x00010246363c) */
/* WARNING: Removing unreachable block (ram,0x0001024635d8) */
/* WARNING: Removing unreachable block (ram,0x000102463720) */
/* WARNING: Removing unreachable block (ram,0x00010246360c) */
/* WARNING: Removing unreachable block (ram,0x0001024635b0) */
/* WARNING: Removing unreachable block (ram,0x000102463560) */
/* WARNING: Removing unreachable block (ram,0x00010246371c) */
/* WARNING: Removing unreachable block (ram,0x000102463594) */
/* WARNING: Removing unreachable block (ram,0x000102463510) */
/* WARNING: Removing unreachable block (ram,0x0001024634d0) */
/* WARNING: Removing unreachable block (ram,0x0001024634ac) */
/* WARNING: Removing unreachable block (ram,0x00010246345c) */
/* WARNING: Removing unreachable block (ram,0x000102463718) */
/* WARNING: Removing unreachable block (ram,0x000102463490) */
/* WARNING: Removing unreachable block (ram,0x000102463438) */
/* WARNING: Removing unreachable block (ram,0x0001024633e8) */
/* WARNING: Removing unreachable block (ram,0x000102463714) */
/* WARNING: Removing unreachable block (ram,0x00010246341c) */
/* WARNING: Removing unreachable block (ram,0x000102463380) */
/* WARNING: Removing unreachable block (ram,0x000102463710) */
/* WARNING: Removing unreachable block (ram,0x0001024633b0) */
/* WARNING: Removing unreachable block (ram,0x000102463324) */
/* WARNING: Removing unreachable block (ram,0x000102463708) */
/* WARNING: Removing unreachable block (ram,0x000102463338) */
/* WARNING: Removing unreachable block (ram,0x00010246370c) */
/* WARNING: Removing unreachable block (ram,0x000102463350) */
/* WARNING: Removing unreachable block (ram,0x0001024632fc) */
/* WARNING: Removing unreachable block (ram,0x0001024632a8) */
/* WARNING: Removing unreachable block (ram,0x000102463700) */
/* WARNING: Removing unreachable block (ram,0x0001024632bc) */
/* WARNING: Removing unreachable block (ram,0x000102463704) */
/* WARNING: Removing unreachable block (ram,0x0001024632e0) */
/* WARNING: Removing unreachable block (ram,0x000102463280) */
/* WARNING: Removing unreachable block (ram,0x00010246322c) */
/* WARNING: Removing unreachable block (ram,0x0001024636f8) */
/* WARNING: Removing unreachable block (ram,0x000102463240) */
/* WARNING: Removing unreachable block (ram,0x0001024636fc) */
/* WARNING: Removing unreachable block (ram,0x000102463264) */
/* WARNING: Removing unreachable block (ram,0x0001024631a4) */
/* WARNING: Removing unreachable block (ram,0x0001024636f4) */
/* WARNING: Removing unreachable block (ram,0x0001024631e4) */
/* WARNING: Removing unreachable block (ram,0x000102463170) */
/* WARNING: Removing unreachable block (ram,0x0001024636f0) */
/* WARNING: Removing unreachable block (ram,0x000102463184) */
/* WARNING: Removing unreachable block (ram,0x00010246313c) */
/* WARNING: Removing unreachable block (ram,0x0001024636ec) */
/* WARNING: Removing unreachable block (ram,0x000102463150) */
/* WARNING: Removing unreachable block (ram,0x000102463108) */
/* WARNING: Removing unreachable block (ram,0x0001024636e4) */
/* WARNING: Removing unreachable block (ram,0x000102463124) */
/* WARNING: Removing unreachable block (ram,0x0001024636e8) */
/* WARNING: Removing unreachable block (ram,0x00010246312c) */
/* WARNING: Removing unreachable block (ram,0x000102463084) */
/* WARNING: Removing unreachable block (ram,0x0001024636d8) */
/* WARNING: Removing unreachable block (ram,0x000102463094) */
/* WARNING: Removing unreachable block (ram,0x0001024636dc) */
/* WARNING: Removing unreachable block (ram,0x0001024630a4) */
/* WARNING: Removing unreachable block (ram,0x0001024636e0) */
/* WARNING: Removing unreachable block (ram,0x0001024630b4) */
/* WARNING: Removing unreachable block (ram,0x00010246304c) */
/* WARNING: Removing unreachable block (ram,0x0001024636d4) */
/* WARNING: Removing unreachable block (ram,0x000102463054) */
/* WARNING: Removing unreachable block (ram,0x000102463034) */
/* WARNING: Removing unreachable block (ram,0x0001024636d0) */
/* WARNING: Removing unreachable block (ram,0x000102463038) */
/* WARNING: Removing unreachable block (ram,0x000102462fc8) */
/* WARNING: Removing unreachable block (ram,0x000102462f84) */
/* WARNING: Removing unreachable block (ram,0x0001024636cc) */
/* WARNING: Removing unreachable block (ram,0x000102462f90) */
/* WARNING: Removing unreachable block (ram,0x0001024636a4) */

void FUN_102462f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = PTR_PTR_1126b0620;
  func_0x000107c61168(PTR_PTR_1126b0620);
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000102469df8();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c3d728(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 102463724; end: 1024637b3;  */

void FUN_102463724(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102464db0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024637b4,uVar2,uVar3);
  return;
}



/* Entry: 1024637b4; end: 102463893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024637b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112e9bf48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c3e544();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c5faec();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar1);
        goto LAB_102463878;
      }
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
LAB_102463878:
                    /* WARNING: Could not recover jumptable at 0x000102463890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102463894; end: 102463923;  */

void FUN_102463894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102464db0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102463924,uVar2,uVar3);
  return;
}



/* Entry: 102463924; end: 1024639b7;  */

void FUN_102463924(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1024639b8;
    plVar2[0x14] = *(long *)(unaff_x22 + 0x28);
    plVar2[0x15] = lVar4;
    lVar3 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar2[0x16] = lVar4;
    lVar4 = 0x112d45220;
    FUN_102464db0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8();
    plVar2[0x17] = lVar3;
    plVar2[0x18] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102463b18,lVar3,lVar4);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001024639b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1024639b8; end: 102463a1f;  */

void FUN_1024639b8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102463a20;
  }
  else {
    pcVar2 = (code *)0x102463a54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x48));
  return;
}



/* Entry: 102463a20; end: 102463a87;  */

void FUN_102463a20(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000102463a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102463a88; end: 102463b17;  */

void FUN_102463a88(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102464db0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102463b18,uVar2,uVar3);
  return;
}



/* Entry: 102463b18; end: 102463b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102463b18(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = _DAT_112e9bf68;
  lVar1 = _DAT_112e9bf40;
  *(undefined8 *)(unaff_x22 + 200) = _DAT_112e9bf70;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + lVar1);
  *(undefined8 *)(unaff_x22 + 0xe8) = 0;
  uVar2 = uRam0000000112e9c020;
  *(undefined8 *)(unaff_x22 + 0xf0) = uRam0000000112e9c018;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar2;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102463b90,0,0);
  return;
}



/* Entry: 102463b90; end: 102463e53;  */

void FUN_102463b90(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  
  uVar16 = *(ulong *)(unaff_x22 + 0xd8);
  if (uVar16 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xf8));
    uVar18 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    pcVar6 = FUN_102463e54;
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    func_0x000107c61598(unaff_x22 + 0x50,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(unaff_x22 + 0x50);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar16;
    lVar12 = SUB168(auVar2 * auVar4,8);
    uVar14 = *(ulong *)(unaff_x22 + 0x50) * uVar16;
    uVar13 = *(ulong *)(unaff_x22 + 0xd8);
    if (uVar14 < uVar16) {
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = -uVar13 / uVar13;
      }
      uVar16 = -uVar13 - uVar16 * uVar13;
      if (uVar14 < uVar16) {
        do {
          uVar13 = *(ulong *)(unaff_x22 + 0xd8);
          *(undefined8 *)(unaff_x22 + 0x50) = 0;
          func_0x000107c61598(unaff_x22 + 0x50,8);
        } while (*(ulong *)(unaff_x22 + 0x50) * uVar13 < uVar16);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulong *)(unaff_x22 + 0x50);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar13;
        lVar12 = SUB168(auVar3 * auVar5,8);
        uVar13 = *(ulong *)(unaff_x22 + 0xd8);
      }
    }
    if ((long)uVar13 <= lVar12) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102463e54);
      (*pcVar6)();
    }
    lVar17 = *(long *)(unaff_x22 + 0xe0);
    lVar12 = *(long *)(unaff_x22 + 0xa0) + lVar12 * 0x10;
    uVar18 = *(undefined8 *)(lVar12 + 0x20);
    uVar11 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x100) = uVar11;
    func_0x000107c61434(uVar11);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x108) = lVar17;
    if (lVar17 != 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102463edc;
      lVar12 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar12,1);
      puVar7 = &UNK_11050c1a0;
      func_0x000107c613fc(&UNK_11050c1a0,0x18,7);
      plVar15 = (long *)(puVar7 + 0x10);
      *plVar15 = 0;
      func_0x000107c5fadc(uVar8,uVar1);
      func_0x000107c5fadc(uVar18,uVar11);
      func_0x000107c42f80();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(uVar8);
      puVar9 = &UNK_11050c1c8;
      func_0x000107c613fc(&UNK_11050c1c8,0x20,7);
      *(undefined **)(puVar9 + 0x10) = puVar7;
      *(long *)(puVar9 + 0x18) = lVar12;
      *(code **)(unaff_x22 + 0x70) = FUN_102464d84;
      *(undefined **)(unaff_x22 + 0x78) = puVar9;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1010a3098;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11050c1e0;
      lVar12 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar12);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(uVar18);
      lVar10 = lVar17;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c60bd0(lVar12);
      func_0x000107c61170(lVar17);
      func_0x000107c61428(plVar15,unaff_x22 + 0x80,1,0);
      lVar12 = *plVar15;
      *plVar15 = lVar10;
      func_0x000107c61574(puVar7);
      func_0x000107c61170(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar18);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    pcVar6 = FUN_102464e14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,uVar18,uVar11);
  return;
}



/* Entry: 102463e54; end: 102463edb;  */

void FUN_102463e54(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xe8) + 1;
  if (lVar1 == 0x10) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000102463e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar1 * 0x10 + 0x112e9c018);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(lVar1 * 0x10 + 0x112e9c020);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102463b90,0,0);
  return;
}



/* Entry: 102463edc; end: 102463f47;  */

void FUN_102463edc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(lVar2 + 0x98);
    pcVar1 = FUN_102463f48;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_102464138;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102463f48; end: 102463f93;  */

void FUN_102463f48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615e8(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102463f94,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 102463f94; end: 102464137;  */

void FUN_102463f94(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)(unaff_x22 + 0x118);
  if (lVar6 != 0) {
    lVar7 = *(long *)(unaff_x22 + 200);
    lVar8 = *(long *)(unaff_x22 + 0xa8);
    func_0x000107c61428(lVar8 + lVar7,unaff_x22 + 0x50,0x21,0);
    uVar5 = *(ulong *)(lVar8 + lVar7);
    func_0x000107c61174();
    uVar3 = uVar5;
    func_0x000107c61550();
    *(ulong *)(lVar8 + lVar7) = uVar5;
    if ((((int)uVar3 == 0) || ((long)uVar5 < 0)) || (uVar3 = uVar5, (uVar5 >> 0x3e & 1) != 0)) {
      if (uVar5 >> 0x3e == 0) {
        uVar2 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar2 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar2 = uVar5;
        }
        func_0x000107c60480(uVar2);
      }
      lVar7 = *(long *)(unaff_x22 + 200);
      lVar8 = *(long *)(unaff_x22 + 0xa8);
      uVar3 = 0;
      func_0x0001013420bc(0,uVar2 + 1,1,uVar5);
      *(ulong *)(lVar8 + lVar7) = uVar3;
    }
    uVar4 = uVar3 & 0xffffffffffffff8;
    uVar5 = *(ulong *)(uVar4 + 0x10);
    uVar2 = uVar3;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar5) {
      uVar2 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001013420bc(uVar2,uVar5 + 1,1,uVar3);
      uVar4 = uVar2 & 0xffffffffffffff8;
    }
    lVar7 = *(long *)(unaff_x22 + 200);
    lVar8 = *(long *)(unaff_x22 + 0xd0);
    lVar9 = *(long *)(unaff_x22 + 0xa8);
    *(ulong *)(uVar4 + 0x10) = uVar5 + 1;
    *(long *)(uVar4 + uVar5 * 8 + 0x20) = lVar6;
    *(ulong *)(lVar9 + lVar7) = uVar2;
    func_0x000107c614a8(unaff_x22 + 0x50);
    if (*(long *)(lVar9 + lVar8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102464138);
      (*pcVar1)();
    }
    func_0x000107c4fd7c();
    func_0x000107c61170(lVar6);
  }
  lVar6 = *(long *)(unaff_x22 + 0xe8) + 1;
  if (lVar6 == 0x10) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001024640ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0xe8) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar6 * 0x10 + 0x112e9c018);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(lVar6 * 0x10 + 0x112e9c020);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102463b90,0,0);
  return;
}



/* Entry: 102464138; end: 102464183;  */

void FUN_102464138(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102464184,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 102464184; end: 1024641b7;  */

void FUN_102464184(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001024641b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1024641b8; end: 1024641df; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionIMessageSettingsViewController viewDidLoad] */

void FUN_1024641b8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102462dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024641e0; end: 102464267; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionIMessageSettingsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024641e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = param_1 + _DAT_112e9bf58;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41b00();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102464268; end: 10246429b; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionIMessageSettingsViewController getTitle] */

void FUN_102464268(undefined8 param_1,undefined8 param_2)

{
  func_0x000102469d08();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10246429c; end: 1024642c7; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionIMessageSettingsViewController init] */

void FUN_10246429c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiExtensionSettings.BitmojiExtensionIMessageSettingsViewController",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024642c8);
  (*pcVar1)();
}



/* Entry: 1024642c8; end: 1024642cb;  */

void FUN_1024642c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024642cc; end: 102464397; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionIMessageSettingsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024642e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102464328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246436c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246432c) */
/* WARNING: Removing unreachable block (ram,0x0001024642ec) */
/* WARNING: Removing unreachable block (ram,0x000102464370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024642cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9bf40));
  return;
}



/* Entry: 102464398; end: 1024643b7;  */

void FUN_102464398(void)

{
  func_0x000107c61168(&PTR_PTR_112842b00);
  return;
}



/* Entry: 1024643b8; end: 10246441f; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionIMessageSettingsViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024643b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = _DAT_112e9bf70;
  func_0x000107c61428(param_1 + _DAT_112e9bf70,auStack_38,0,0);
  uVar3 = *(ulong *)(param_1 + lVar2);
  if (uVar3 >> 0x3e != 0) {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    func_0x000107c60480(uVar1);
  }
  return;
}



/* Entry: 102464420; end: 1024645c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102464420(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9bf78);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112e9bf78))[1]);
  uVar3 = uVar4;
  func_0x000107c5efd4();
  func_0x000107c417e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar4 = 0;
  FUN_102464bcc(0);
  func_0x000107c61484(param_1,uVar4,0,0,0);
  lVar5 = param_1;
  func_0x000107c5efec();
  lVar1 = _DAT_112e9bf70;
  func_0x000107c61428(unaff_x20 + _DAT_112e9bf70,auStack_58,0,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar8 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar6 = uVar8;
    }
    func_0x000107c60480();
  }
  if (lVar5 < (long)uVar6) {
    uVar6 = *(ulong *)(param_1 + _DAT_112e9bfc0);
    func_0x000107c61174();
    uVar8 = uVar6;
    func_0x000107c5efec();
    func_0x000107c61428(unaff_x20 + lVar1,auStack_70,0x20,0);
    uVar7 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar7 & 0xc000000000000001) == 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024645c0);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024645c4);
        (*pcVar2)();
      }
      uVar8 = *(ulong *)(uVar7 + uVar8 * 8 + 0x20);
      func_0x000107c61174(uVar8);
    }
    else {
      func_0x000100f95e24(uVar8);
    }
    func_0x000107c614a8(auStack_70);
    func_0x000107c55258(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar8);
  }
  return param_1;
}



/* Entry: 1024645c4; end: 10246468b; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionIMessageSettingsViewController collectionView:cellForItemAtIndexPath:] */

void FUN_1024645c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_102464420(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10246468c; end: 1024647b7; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionIMessageSettingsViewController collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_10246468c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5)
  ;
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  uVar3 = param_4;
  func_0x000107c61490(param_4,puVar2,0,0,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c4cf90(uVar3);
  func_0x000107c3ec60(param_3);
  func_0x000107c609cc();
  func_0x000107c40468(param_3);
  func_0x000107c40468(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 1024647b8; end: 102464aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024647b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  puVar3 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar1 = _DAT_112e9bfc0;
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112e9bfc0;
  uVar10 = *(undefined8 *)(puVar3 + _DAT_112e9bfc0);
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c53840(uVar10);
  func_0x000107c5a050(*(undefined8 *)(puVar3 + lVar1));
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(puVar5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar6 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 9;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar10 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar10 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar10 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar6 + 0x30) = uVar10;
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar8 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar10 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar6 + 0x38) = uVar10;
  uVar10 = 0;
  func_0x000100847984(0);
  puVar9 = puVar6;
  func_0x000107c5fc48(puVar6,uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  return puVar4;
}



/* Entry: 102464aec; end: 102464b0b; -[_TtC24BitmojiExtensionSettingsP33_9C81355BE8E1F0456D968F17329EEF5311StickerCell initWithFrame:] */

void FUN_102464aec(void)

{
  FUN_1024647b8();
  return;
}



/* Entry: 102464b0c; end: 102464b87; -[_TtC24BitmojiExtensionSettingsP33_9C81355BE8E1F0456D968F17329EEF5311StickerCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102464b0c(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112e9bfc0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "BitmojiExtensionSettings/BitmojiExtensionIMessageSettingsViewController.swift"
                      ,0x4d,2,0xdf,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102464b88);
  (*pcVar2)();
}



/* Entry: 102464b88; end: 102464bbb;  */

void FUN_102464b88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102464bbc; end: 102464bcb; -[_TtC24BitmojiExtensionSettingsP33_9C81355BE8E1F0456D968F17329EEF5311StickerCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102464bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9bfc0));
  return;
}



/* Entry: 102464bcc; end: 102464c33;  */

void FUN_102464bcc(void)

{
  func_0x000107c61168(&PTR_PTR_112842c10);
  return;
}



/* Entry: 102464c34; end: 102464c7f;  */

void FUN_102464c34(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102464c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 102464c80; end: 102464ccf;  */

void FUN_102464c80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102464e20;
  plVar4[5] = param_1;
  plVar4[6] = unaff_x20;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[7] = lVar3;
  lVar3 = 0x112d45220;
  FUN_102464db0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[8] = lVar2;
  plVar4[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102463924,lVar2,lVar3);
  return;
}



/* Entry: 102464cd0; end: 102464d47;  */

void FUN_102464cd0(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102464d48;
  plVar7[5] = lVar3;
  plVar7[6] = lVar5;
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar6,(code *)((long)iVar1 + (long)piVar2),uVar4);
  plVar7[7] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = 0x10245fd84;
                    /* WARNING: Could not recover jumptable at 0x00010245fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 102464d48; end: 102464d83;  */

void FUN_102464d48(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102464d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102464d84; end: 102464daf;  */

void FUN_102464d84(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &UNK_11050be50;
  func_0x000107c613fc(&UNK_11050be50,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  puVar5 = &UNK_11050be78;
  func_0x000107c613fc(&UNK_11050be78,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1024605e4;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102460614;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_11050be90;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11050bec8;
  func_0x000107c613fc(&UNK_11050bec8,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar10;
  puVar8 = &UNK_11050bef0;
  func_0x000107c613fc(&UNK_11050bef0,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_102460634;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_80 = 0x10246064c;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11050bf08;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar2);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61428(lVar1 + 0x10,&puStack_a0,0,0);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_b8,1,0);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar10);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",99,0x44,0x25,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar8;
    func_0x000107c61544(puVar8,"",99,0x46,0x1c,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar4 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024601a0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10246019c);
  (*pcVar3)();
}



/* Entry: 102464db0; end: 102464e13;  */

void FUN_102464db0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102464e14; end: 102464e27;  */

void FUN_102464e14(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xe8) + 1;
  if (lVar1 == 0x10) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000102463e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar1 * 0x10 + 0x112e9c018);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(lVar1 * 0x10 + 0x112e9c020);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102463b90,0,0);
  return;
}



/* Entry: 102464e28; end: 102465077;  */

undefined * FUN_102464e28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c59c74(puVar1);
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000102469c18();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 102465078; end: 102465357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102465078(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR_PTR_1126e2158;
  func_0x000107c610f8(PTR_PTR_1126e2158);
  func_0x000107c453e4();
  func_0x000107c547d8();
  puVar3 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112e9c128);
    func_0x000107c615f0(uVar11);
    func_0x000107c61170(param_1);
    func_0x000107c4bfb0(uVar11);
    func_0x000107c615e8(uVar11);
  }
  func_0x000107c5faec(*(undefined8 *)PTR__UIApplicationOpenSettingsURLString_110345a80);
  func_0x000107c5edd0(puVar10);
  func_0x000107c6142c(puVar3);
  puVar3 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x000107c61170(puVar2);
    FUN_102467e18(puVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar9,puVar10,lVar1);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5ed90();
    puVar7 = puVar5;
    func_0x000107c3f3f4();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar12 + 8))(lVar9,lVar1);
      func_0x000107c61170(puVar2);
    }
    else {
      func_0x000107c5a9c4(puVar4);
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5ed90();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102467940(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d377b0,&UNK_10d913200,0x112d377b8,
                    &UNK_10d9016f0);
      uVar8 = 0;
      func_0x000100dfa6ec(0);
      uVar11 = 0x112d377a8;
      func_0x000102467e58(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
      puVar7 = puVar6;
      func_0x000107c5f9dc(puVar6,uVar8,PTR___sypN_11034f1a8 + 8,uVar11);
      func_0x000107c6142c(puVar6);
      func_0x000107c4de70(puVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      (**(code **)(lVar12 + 8))(lVar9,lVar1);
    }
  }
  return;
}



/* Entry: 102465358; end: 102465493;  */

void FUN_102465358(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  FUN_102465494();
  puVar2 = &UNK_11050c240;
  puVar1 = puVar2;
  func_0x000107c613fc(&UNK_11050c240,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c613fc(&UNK_11050c240,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11050c268;
  func_0x000107c613fc(&UNK_11050c268,0x30,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10daa9ed8;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined **)(puVar3 + 0x20) = &UNK_10daa9ee8;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  func_0x000107c61580(puVar1,2);
  func_0x000107c61580(puVar2,2);
  uVar4 = 2;
  func_0x000100859150(2,0,0x10,4,0,0,&UNK_10daa9ef0,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61578(puVar1,2);
  func_0x000107c61578(puVar2,2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 102465494; end: 1024664f7;  */

/* WARNING: Possible PIC construction at 0x000102465518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024655d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246563c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024656b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024656d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024657d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024659c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024659e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102465fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102466010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102466048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024660a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024660f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246611c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246616c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102466190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024661d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102466218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102466234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246625c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024662b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102466324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102466360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024663d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102466408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024663d4) */
/* WARNING: Removing unreachable block (ram,0x000102466364) */
/* WARNING: Removing unreachable block (ram,0x000102466464) */
/* WARNING: Removing unreachable block (ram,0x000102466468) */
/* WARNING: Removing unreachable block (ram,0x00010246636c) */
/* WARNING: Removing unreachable block (ram,0x000102466490) */
/* WARNING: Removing unreachable block (ram,0x00010246637c) */
/* WARNING: Removing unreachable block (ram,0x000102466328) */
/* WARNING: Removing unreachable block (ram,0x000102466388) */
/* WARNING: Removing unreachable block (ram,0x000102466330) */
/* WARNING: Removing unreachable block (ram,0x0001024662b4) */
/* WARNING: Removing unreachable block (ram,0x000102466440) */
/* WARNING: Removing unreachable block (ram,0x0001024662f0) */
/* WARNING: Removing unreachable block (ram,0x000102466260) */
/* WARNING: Removing unreachable block (ram,0x000102466238) */
/* WARNING: Removing unreachable block (ram,0x00010246621c) */
/* WARNING: Removing unreachable block (ram,0x0001024661d4) */
/* WARNING: Removing unreachable block (ram,0x0001024664f4) */
/* WARNING: Removing unreachable block (ram,0x000102466200) */
/* WARNING: Removing unreachable block (ram,0x000102466194) */
/* WARNING: Removing unreachable block (ram,0x000102466170) */
/* WARNING: Removing unreachable block (ram,0x000102466120) */
/* WARNING: Removing unreachable block (ram,0x0001024664f0) */
/* WARNING: Removing unreachable block (ram,0x000102466154) */
/* WARNING: Removing unreachable block (ram,0x0001024660fc) */
/* WARNING: Removing unreachable block (ram,0x0001024660ac) */
/* WARNING: Removing unreachable block (ram,0x0001024664ec) */
/* WARNING: Removing unreachable block (ram,0x0001024660e0) */
/* WARNING: Removing unreachable block (ram,0x00010246604c) */
/* WARNING: Removing unreachable block (ram,0x000102466014) */
/* WARNING: Removing unreachable block (ram,0x000102465fec) */
/* WARNING: Removing unreachable block (ram,0x000102465f94) */
/* WARNING: Removing unreachable block (ram,0x000102465f3c) */
/* WARNING: Removing unreachable block (ram,0x000102465ee4) */
/* WARNING: Removing unreachable block (ram,0x000102465e90) */
/* WARNING: Removing unreachable block (ram,0x000102465e3c) */
/* WARNING: Removing unreachable block (ram,0x000102465de8) */
/* WARNING: Removing unreachable block (ram,0x000102465d94) */
/* WARNING: Removing unreachable block (ram,0x000102465d68) */
/* WARNING: Removing unreachable block (ram,0x000102465d18) */
/* WARNING: Removing unreachable block (ram,0x0001024664e8) */
/* WARNING: Removing unreachable block (ram,0x000102465d4c) */
/* WARNING: Removing unreachable block (ram,0x000102465cf0) */
/* WARNING: Removing unreachable block (ram,0x000102465ca0) */
/* WARNING: Removing unreachable block (ram,0x0001024664e4) */
/* WARNING: Removing unreachable block (ram,0x000102465cd4) */
/* WARNING: Removing unreachable block (ram,0x000102465c48) */
/* WARNING: Removing unreachable block (ram,0x000102465c20) */
/* WARNING: Removing unreachable block (ram,0x000102465bd0) */
/* WARNING: Removing unreachable block (ram,0x0001024664e0) */
/* WARNING: Removing unreachable block (ram,0x000102465c04) */
/* WARNING: Removing unreachable block (ram,0x000102465ba8) */
/* WARNING: Removing unreachable block (ram,0x000102465b58) */
/* WARNING: Removing unreachable block (ram,0x0001024664dc) */
/* WARNING: Removing unreachable block (ram,0x000102465b8c) */
/* WARNING: Removing unreachable block (ram,0x000102465af8) */
/* WARNING: Removing unreachable block (ram,0x000102465ad0) */
/* WARNING: Removing unreachable block (ram,0x000102465ab4) */
/* WARNING: Removing unreachable block (ram,0x000102465a64) */
/* WARNING: Removing unreachable block (ram,0x0001024664d8) */
/* WARNING: Removing unreachable block (ram,0x000102465a98) */
/* WARNING: Removing unreachable block (ram,0x000102465a3c) */
/* WARNING: Removing unreachable block (ram,0x0001024659ec) */
/* WARNING: Removing unreachable block (ram,0x0001024664d4) */
/* WARNING: Removing unreachable block (ram,0x000102465a20) */
/* WARNING: Removing unreachable block (ram,0x0001024659c4) */
/* WARNING: Removing unreachable block (ram,0x000102465974) */
/* WARNING: Removing unreachable block (ram,0x0001024664d0) */
/* WARNING: Removing unreachable block (ram,0x0001024659a8) */
/* WARNING: Removing unreachable block (ram,0x000102465954) */
/* WARNING: Removing unreachable block (ram,0x000102465904) */
/* WARNING: Removing unreachable block (ram,0x0001024664cc) */
/* WARNING: Removing unreachable block (ram,0x000102465938) */
/* WARNING: Removing unreachable block (ram,0x000102465884) */
/* WARNING: Removing unreachable block (ram,0x00010246582c) */
/* WARNING: Removing unreachable block (ram,0x0001024657d4) */
/* WARNING: Removing unreachable block (ram,0x00010246577c) */
/* WARNING: Removing unreachable block (ram,0x0001024656dc) */
/* WARNING: Removing unreachable block (ram,0x0001024656b8) */
/* WARNING: Removing unreachable block (ram,0x00010246568c) */
/* WARNING: Removing unreachable block (ram,0x000102465640) */
/* WARNING: Removing unreachable block (ram,0x0001024664c8) */
/* WARNING: Removing unreachable block (ram,0x00010246566c) */
/* WARNING: Removing unreachable block (ram,0x00010246560c) */
/* WARNING: Removing unreachable block (ram,0x0001024664c4) */
/* WARNING: Removing unreachable block (ram,0x000102465620) */
/* WARNING: Removing unreachable block (ram,0x0001024655d8) */
/* WARNING: Removing unreachable block (ram,0x0001024664c0) */
/* WARNING: Removing unreachable block (ram,0x0001024655ec) */
/* WARNING: Removing unreachable block (ram,0x000102465588) */
/* WARNING: Removing unreachable block (ram,0x000102465594) */
/* WARNING: Removing unreachable block (ram,0x000102465598) */
/* WARNING: Removing unreachable block (ram,0x0001024655a0) */
/* WARNING: Removing unreachable block (ram,0x0001024655a4) */
/* WARNING: Removing unreachable block (ram,0x0001024664bc) */
/* WARNING: Removing unreachable block (ram,0x0001024655b8) */
/* WARNING: Removing unreachable block (ram,0x00010246555c) */
/* WARNING: Removing unreachable block (ram,0x0001024664b8) */
/* WARNING: Removing unreachable block (ram,0x000102465570) */
/* WARNING: Removing unreachable block (ram,0x00010246551c) */
/* WARNING: Removing unreachable block (ram,0x0001024664b4) */
/* WARNING: Removing unreachable block (ram,0x000102465528) */
/* WARNING: Removing unreachable block (ram,0x00010246640c) */

void FUN_102465494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = PTR_PTR_1126b0620;
  func_0x000107c61168(PTR_PTR_1126b0620);
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000102469f90();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c3d728(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1024664f8; end: 102466587;  */

void FUN_1024664f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d45220;
  func_0x000102467e58(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102466588,uVar2,uVar3);
  return;
}



/* Entry: 102466588; end: 102466667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102466588(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112e9c120);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c3e544();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c5faec();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar1);
        goto LAB_10246664c;
      }
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
LAB_10246664c:
                    /* WARNING: Could not recover jumptable at 0x000102466664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102466668; end: 1024666ff;  */

void FUN_102466668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  func_0x000102467e58(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102466700,uVar2,uVar3);
  return;
}



/* Entry: 102466700; end: 1024667b3;  */

void FUN_102466700(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x68) = lVar2;
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1024667b4,uVar3,uVar1);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001024667b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1024667b4; end: 10246683b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024667b4(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x60) + _DAT_112e9c118);
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10246683c;
                    /* WARNING: Could not recover jumptable at 0x000102466838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102460264(uVar2,0x3230303139303032,0xe800000000000000,*(undefined8 *)(unaff_x22 + 0x28),1);
  return;
}



/* Entry: 10246683c; end: 102466897;  */

void FUN_10246683c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102466898;
  }
  else {
    pcVar1 = FUN_10246691c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x78));
  return;
}



/* Entry: 102466898; end: 10246691b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102466898(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  if (lVar3 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_102467ee0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar3 = *(long *)(unaff_x22 + 0x60);
    func_0x000107c55258(*(undefined8 *)(lVar3 + _DAT_112e9c140));
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = (code *)0x102466990;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar4,uVar2);
  return;
}



/* Entry: 10246691c; end: 1024669c3;  */

void FUN_10246691c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10246695c,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1024669c4; end: 102466a6b; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionKeyboardDisabledViewController viewDidLoad] */

void FUN_1024669c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102465358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102466a6c; end: 102466a9b; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionKeyboardDisabledViewController viewDidDisappear:] */

void FUN_102466a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001024669ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102466a9c; end: 102466acf; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionKeyboardDisabledViewController getTitle] */

void FUN_102466a9c(undefined8 param_1,undefined8 param_2)

{
  FUN_102469ce4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102466ad0; end: 10246731f;  */

undefined *
FUN_102466ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6)

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
  ulong uVar14;
  long unaff_x20;
  double dVar15;
  undefined1 auStack_c0 [72];
  undefined *puStack_78;
  
  func_0x000102467a54(param_2,param_3,param_4,param_5);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c52610(puVar4);
  func_0x000107c59594(0x4024000000000000,puVar4);
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar5 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c59c74();
  func_0x000107c5a100(puVar5);
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar5);
  puVar6 = puVar13;
  func_0x000107c5af88(puVar13);
  func_0x000107c61180();
  func_0x000107c52b50(puVar5);
  func_0x000107c61170(puVar6);
  puVar6 = puVar13;
  func_0x000107c5af88(puVar13);
  func_0x000107c61180();
  func_0x000107c59c78(puVar5);
  func_0x000107c61170(puVar6);
  puVar6 = PTR___sSiN_11034deb0;
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puStack_78 = (undefined *)param_1;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar7);
  func_0x000107c59c6c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c5a050(puVar5);
  puVar6 = puVar5;
  func_0x000107c4aba4(puVar5);
  func_0x000107c61180();
  func_0x000107c539d4(0x4028000000000000);
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c4aba4(puVar5);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c5e308(puVar5);
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c521e8(puVar7);
  func_0x000107c61170(puVar7);
  puVar6 = puVar5;
  func_0x000107c44d9c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar7 = puVar6;
  func_0x000107c40290(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c521e8(puVar7);
  func_0x000107c61170(puVar7);
  puVar6 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c56ba8();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
    func_0x000107c609b0();
    func_0x000107c61170(unaff_x20);
    func_0x000107c5a100(puVar6);
    puVar7 = puVar13;
    func_0x000107c5af88(puVar13);
    func_0x000107c61180();
    func_0x000107c59c78(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c529c4(puVar6);
    func_0x000107c3d5b4(puVar4);
    func_0x000107c61174(puVar6);
    func_0x000107c3d5b4(puVar4);
    puVar7 = puVar3;
    func_0x000107c3d89c();
    func_0x0001008478a8();
    puVar8 = puVar7;
    func_0x000107c613fc();
    dVar15 = 1.48219693752374e-323;
    *(undefined8 *)(puVar8 + 0x18) = 7;
    *(undefined8 *)(puVar8 + 0x10) = 3;
    puVar9 = puVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar10 = puVar3;
    func_0x000107c5cbe4(puVar3);
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    *(undefined **)(puVar8 + 0x20) = puVar11;
    puVar9 = puVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar10 = puVar3;
    func_0x000107c4acb0(puVar3);
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    *(undefined **)(puVar8 + 0x28) = puVar11;
    puVar9 = puVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar10 = puVar3;
    func_0x000107c5ce8c(puVar3);
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    *(undefined **)(puVar8 + 0x30) = puVar11;
    puStack_78 = puVar8;
    if ((param_6 & 1) == 0) {
      func_0x000107c61170(puVar6);
      puVar13 = puVar4;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar7 = puVar3;
      func_0x000107c3ec1c(puVar3);
      func_0x000107c61180();
      puVar9 = puVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar7);
      uVar14 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar14 + 0x10);
      puVar13 = puVar8;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
        func_0x0001011d8f3c(puVar13,uVar1 + 1,1,puVar8);
        uVar14 = (ulong)puVar13 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar14 + uVar1 * 8 + 0x20) = puVar9;
      puStack_78 = puVar13;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5af88(puVar13);
      func_0x000107c61180();
      func_0x000107c52b50(puVar8);
      func_0x000107c61170(puVar13);
      func_0x000107c5a050(puVar8);
      func_0x000107c3d89c(puVar3);
      puVar13 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51820();
      func_0x000107c61170(puVar13);
      func_0x000107c61534(puVar7,auStack_c0);
      *(undefined8 *)(puVar7 + 0x18) = 0xb;
      *(undefined8 *)(puVar7 + 0x10) = 5;
      puVar13 = puVar8;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar9 = puVar4;
      func_0x000107c3ec1c(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar10 = puVar13;
      func_0x000107c40284(0x4024000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar9);
      *(undefined **)(puVar7 + 0x20) = puVar10;
      puVar13 = puVar8;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar9 = puVar6;
      func_0x000107c4acb0(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar10 = puVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar9);
      *(undefined **)(puVar7 + 0x28) = puVar10;
      puVar13 = puVar8;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar9 = puVar3;
      func_0x000107c5ce8c(puVar3);
      func_0x000107c61180();
      puVar10 = puVar13;
      func_0x000107c40284(0x4044000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar9);
      *(undefined **)(puVar7 + 0x30) = puVar10;
      puVar13 = puVar8;
      func_0x000107c44d9c();
      func_0x000107c61180();
      puVar9 = puVar13;
      func_0x000107c40290(1.0 / dVar15);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      *(undefined **)(puVar7 + 0x38) = puVar9;
      puVar13 = puVar8;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar9 = puVar3;
      func_0x000107c3ec1c(puVar3);
      func_0x000107c61180();
      puVar10 = puVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar9);
      *(undefined **)(puVar7 + 0x40) = puVar10;
      func_0x0001011d6d7c(puVar7);
      func_0x000107c61170(puVar8);
    }
    puVar13 = puStack_78;
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar12 = 0;
    FUN_102467db4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar8 = puVar13;
    func_0x000107c5fc48(puVar13,uVar12);
    func_0x000107c3d048(puVar7);
    func_0x000107c6142c(puVar13);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102467320);
  (*pcVar2)();
}



/* Entry: 102467320; end: 1024674c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102467320(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  double dVar6;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLayoutSubviews_112684cc8);
  puVar1 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e9c150);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x00010085b3c8(0x4018000000000000,0x3fb47ae147ae147b,0,0,puVar1,uVar5,puVar3);
  func_0x000107c61170(puVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9c158);
  uVar5 = uVar4;
  func_0x000107c4aba4(uVar4);
  func_0x000107c61180();
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  dVar6 = 0.55;
  puVar1 = puVar2;
  func_0x000107c3fdd0(0x3fe199999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c3ab24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c52df8(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c4aba4(uVar4);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar1);
  func_0x000107c52e0c(1.0 / dVar6,uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1024674c4; end: 1024674eb; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionKeyboardDisabledViewController viewDidLayoutSubviews] */

void FUN_1024674c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102467320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024674ec; end: 10246754b; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionKeyboardDisabledViewController init] */

void FUN_1024674ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiExtensionSettings.BitmojiExtensionKeyboardDisabledViewController",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102467518);
  (*pcVar1)();
}



/* Entry: 10246754c; end: 102467603; -[_TtC24BitmojiExtensionSettings46BitmojiExtensionKeyboardDisabledViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102467568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024675a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024675c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024675e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024675cc) */
/* WARNING: Removing unreachable block (ram,0x0001024675ac) */
/* WARNING: Removing unreachable block (ram,0x00010246756c) */
/* WARNING: Removing unreachable block (ram,0x0001024675ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246754c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9c118));
  return;
}



/* Entry: 102467604; end: 102467623;  */

void FUN_102467604(void)

{
  func_0x000107c61168(&PTR_PTR_112842cc8);
  return;
}



/* Entry: 102467624; end: 1024676af;  */

void FUN_102467624(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar3);
  puVar2 = auStack_88;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  FUN_1024676b0(param_1,puVar2);
  return;
}



/* Entry: 1024676b0; end: 1024677a7;  */

undefined1  [16] FUN_1024676b0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_102467788;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_102467788:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 1024677a8; end: 1024677ef;  */

void FUN_1024677a8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1024677f0;
  plVar5[5] = unaff_x20;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[6] = lVar3;
  uVar4 = 0x112d45220;
  func_0x000102467e58(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102466588,lVar2,uVar4);
  return;
}



/* Entry: 1024677f0; end: 10246783b;  */

void FUN_1024677f0(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102467838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 10246783c; end: 10246788b;  */

void FUN_10246783c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102467ee4;
  plVar4[5] = param_1;
  plVar4[6] = unaff_x20;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar4[7] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[8] = lVar3;
  lVar3 = 0x112d45220;
  func_0x000102467e58(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar4[9] = lVar3;
  func_0x000107c5fca8();
  plVar4[10] = lVar2;
  plVar4[0xb] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102466700,lVar2,lVar3);
  return;
}



/* Entry: 10246788c; end: 102467903;  */

void FUN_10246788c(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102467904;
  plVar7[5] = lVar3;
  plVar7[6] = lVar5;
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar6,(code *)((long)iVar1 + (long)piVar2),uVar4);
  plVar7[7] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = 0x10245fd84;
                    /* WARNING: Could not recover jumptable at 0x00010245fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}


