/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d82f04; end: 102d8306b;  */

int FUN_102d82f04(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d82f80;
        goto LAB_102d82f64;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d82f64:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_102d82f80:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d8306c; end: 102d830ab;  */

void FUN_102d8306c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f152e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4ab6c;
  func_0x000107c61520(&UNK_10db4ab6c,&UNK_1105ce168);
  puRam0000000112f152e0 = puVar1;
  return;
}



/* Entry: 102d830ac; end: 102d830cb;  */

ulong FUN_102d830ac(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 102d830cc; end: 102d83103;  */

void FUN_102d830cc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d83104; end: 102d8310f;  */

void FUN_102d83104(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102d830c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102d83110; end: 102d8311f; -[_TtC35SCGroupChatNonFriendWarningServices35SCGroupChatNonFriendWarningServices acknowledgmentStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f152e8));
  return;
}



/* Entry: 102d83120; end: 102d8312f; -[_TtC35SCGroupChatNonFriendWarningServices35SCGroupChatNonFriendWarningServices warningChecker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f152f0));
  return;
}



/* Entry: 102d83130; end: 102d831f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83130(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f152e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f152f0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d831f8; end: 102d8326f; -[_TtC35SCGroupChatNonFriendWarningServices35SCGroupChatNonFriendWarningServices initWithAcknowledgmentStore:warningChecker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d831f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f152e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f152f0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102d83270; end: 102d832cf; -[_TtC35SCGroupChatNonFriendWarningServices35SCGroupChatNonFriendWarningServices init] */

void FUN_102d83270(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGroupChatNonFriendWarningServices.SCGroupChatNonFriendWarningServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d8329c);
  (*pcVar1)();
}



/* Entry: 102d832d0; end: 102d83307; -[_TtC35SCGroupChatNonFriendWarningServices35SCGroupChatNonFriendWarningServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d832ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d832f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d832d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f152e8));
  return;
}



/* Entry: 102d83308; end: 102d83327;  */

void FUN_102d83308(void)

{
  func_0x000107c61168(&PTR_PTR_1128a52f0);
  return;
}



/* Entry: 102d83328; end: 102d83337; -[_TtC22PlusMerlinBioPageScope22PlusMerlinBioPageScope presentationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d83328(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f15320);
}



/* Entry: 102d83338; end: 102d8337f; -[_TtC22PlusMerlinBioPageScope22PlusMerlinBioPageScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83338(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f15328;
  func_0x000107c61428(param_1 + _DAT_112f15328,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d83380; end: 102d833d7; -[_TtC22PlusMerlinBioPageScope22PlusMerlinBioPageScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f15328;
  func_0x000107c61428(param_1 + _DAT_112f15328,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d833d8; end: 102d83527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d833d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f15328;
  func_0x000107c61614(unaff_x20 + _DAT_112f15328,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f15320) = param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  puVar2 = auStack_68;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_2);
  return puVar2;
}



/* Entry: 102d83528; end: 102d835bf; -[_TtC22PlusMerlinBioPageScope22PlusMerlinBioPageScope initWithPresentationType:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f15328;
  func_0x000107c61614(param_1 + _DAT_112f15328,0);
  *(undefined8 *)(param_1 + _DAT_112f15320) = param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar1,param_4);
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c61154(&lStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d835c0; end: 102d8361f; -[_TtC22PlusMerlinBioPageScope22PlusMerlinBioPageScope init] */

void FUN_102d835c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusMerlinBioPageScope.PlusMerlinBioPageScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d835ec);
  (*pcVar1)();
}



/* Entry: 102d83620; end: 102d8362f; -[_TtC22PlusMerlinBioPageScope22PlusMerlinBioPageScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d83620(long param_1)

{
  param_1 = param_1 + _DAT_112f15328;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d83630; end: 102d8369b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83630(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034c6e4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f15360) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102d8369c; end: 102d836a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8369c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034c6e4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f15360) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102d836a4; end: 102d83743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d836a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f15360) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d83744; end: 102d837cb; -[_TtC22PlusMerlinBioPageScope37PlusMerlinBioPageScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102d837cc; end: 102d8382b; -[_TtC22PlusMerlinBioPageScope37PlusMerlinBioPageScopeFactoryServices init] */

void FUN_102d837cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusMerlinBioPageScope.PlusMerlinBioPageScopeFactoryServices",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d837f8);
  (*pcVar1)();
}



/* Entry: 102d8382c; end: 102d8384b; -[_TtC22PlusMerlinBioPageScope37PlusMerlinBioPageScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8382c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f15360));
  return;
}



/* Entry: 102d8384c; end: 102d83afb;  */

long FUN_102d8384c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102d83afc; end: 102d83b1b; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83afc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f15398));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d83b1c; end: 102d83b2b; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f153a0));
  return;
}



/* Entry: 102d83b2c; end: 102d83b77; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83b2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f153a8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f153a8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d83b78; end: 102d83bbf; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83b78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f153b0;
  func_0x000107c61428(param_1 + _DAT_112f153b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d83bc0; end: 102d83c17; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f153b0;
  func_0x000107c61428(param_1 + _DAT_112f153b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d83c18; end: 102d83c27; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_102d83c18(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112f153b8);
}



/* Entry: 102d83c28; end: 102d83d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102d83c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112f153b0;
  func_0x000107c61614(unaff_x20 + _DAT_112f153b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f15398) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f153a0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f153a8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  *(undefined4 *)(unaff_x20 + _DAT_112f153b8) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_5);
  return puVar4;
}



/* Entry: 102d83d44; end: 102d83d93;  */

undefined8
FUN_102d83d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102d84080();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 102d83d94; end: 102d83e43; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope initWithUIContainer:loggingContext:conversationId:delegate:source:] */

undefined8
FUN_102d83d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  uVar1 = param_3;
  FUN_102d84080(param_3,param_4,param_5,param_2,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_6);
  return uVar1;
}



/* Entry: 102d83e44; end: 102d83e6f; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope init] */

void FUN_102d83e44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusStreakRestorePurchaseScope.PlusStreakRestorePurchaseScope",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d83e70);
  (*pcVar1)();
}



/* Entry: 102d83e70; end: 102d83ecb; -[_TtC30PlusStreakRestorePurchaseScope30PlusStreakRestorePurchaseScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d83e70(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f15398));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f153a0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f153a8 + 8));
  param_1 = param_1 + _DAT_112f153b0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d83ecc; end: 102d83f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83ecc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100356ffc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f153c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102d83f38; end: 102d83f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83f38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f153c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d83f84; end: 102d8400b; -[_TtC30PlusStreakRestorePurchaseScope45PlusStreakRestorePurchaseScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d83f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102d8400c; end: 102d84037; -[_TtC30PlusStreakRestorePurchaseScope45PlusStreakRestorePurchaseScopeFactoryServices init] */

void FUN_102d8400c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusStreakRestorePurchaseScope.PlusStreakRestorePurchaseScopeFactoryServices"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d84038);
  (*pcVar1)();
}



/* Entry: 102d84038; end: 102d8403b;  */

void FUN_102d84038(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d8403c; end: 102d8406f;  */

void FUN_102d8403c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d84070; end: 102d8407f; -[_TtC30PlusStreakRestorePurchaseScope45PlusStreakRestorePurchaseScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f153c8));
  return;
}



/* Entry: 102d84080; end: 102d84173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112f153b0;
  func_0x000107c61614(unaff_x20 + _DAT_112f153b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f15398) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f153a0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f153a8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  *(undefined4 *)(unaff_x20 + _DAT_112f153b8) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 102d84174; end: 102d84197;  */

undefined8 FUN_102d84174(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d84198; end: 102d841b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84198(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100356ffc();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f153c8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102d841b4; end: 102d841ff; -[SCPlusStreakRestorePurchaseLoggingContext streakRestoreSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d841b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f15420);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f15420))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d84200; end: 102d8420f; -[SCPlusStreakRestorePurchaseLoggingContext sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d84200(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f15428);
}



/* Entry: 102d84210; end: 102d8421f; -[SCPlusStreakRestorePurchaseLoggingContext snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d84210(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f15430);
}



/* Entry: 102d84220; end: 102d8422b; -[SCPlusStreakRestorePurchaseLoggingContext snapSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84220(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f15438))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f15438);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d8422c; end: 102d84237; -[SCPlusStreakRestorePurchaseLoggingContext captureSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8422c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f15440))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f15440);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d84238; end: 102d8428f;  */

void FUN_102d84238(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d84290; end: 102d84353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f15420);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f15428) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f15430) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f15438);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f15440);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d84354; end: 102d84453; -[SCPlusStreakRestorePurchaseLoggingContext initWithStreakRestoreSessionId:sourcePageType:snapSource:snapSessionId:captureSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84354(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_6 == 0) {
    lVar5 = 0;
    lVar4 = param_2;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec();
    lVar4 = lVar5;
  }
  if (param_7 == 0) {
    param_7 = 0;
    lVar4 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112f15420);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f15428) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f15430) = param_5;
  plVar2 = (long *)(param_1 + _DAT_112f15438);
  *plVar2 = param_6;
  plVar2[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_112f15440);
  *plVar2 = param_7;
  plVar2[1] = lVar4;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d84454; end: 102d845f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84454(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c610f8();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f15420);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined8 *)(unaff_x20 + _DAT_112f15428) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112f15430) = param_1[3];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f15438);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f15440);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000101223174(&uStack_50,auStack_70);
  func_0x000101223174(&uStack_60,auStack_70);
  FUN_102d845f4(param_1);
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d845f4; end: 102d84627;  */

undefined8 FUN_102d845f4(undefined8 param_1)

{
  (*(code *)(undefined *)0x102d83878)();
  return param_1;
}



/* Entry: 102d84628; end: 102d8462b; -[SCPlusStreakRestorePurchaseLoggingContext copyWithZone:] */

void FUN_102d84628(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d8462c; end: 102d8465f; -[SCPlusStreakRestorePurchaseLoggingContext description] */

void FUN_102d8462c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d84660; end: 102d846db; -[SCPlusStreakRestorePurchaseLoggingContext init] */

void FUN_102d84660(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "PlusStreakRestorePurchaseScope/PlusStreakRestorePurchaseLoggingContextWrapper.swift"
                      ,0x53,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d846a8);
  (*pcVar1)();
}



/* Entry: 102d846dc; end: 102d8472f; -[SCPlusStreakRestorePurchaseLoggingContext .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d846fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d84700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d846dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f15420 + 8))
  ;
  return;
}



/* Entry: 102d84730; end: 102d8474f;  */

void FUN_102d84730(void)

{
  func_0x000107c61168(&PTR_PTR_1128a56e0);
  return;
}



/* Entry: 102d84750; end: 102d8488b;  */

bool FUN_102d84750(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000100f115fc(0);
  uVar3 = unaff_x20;
  func_0x000107c5fc54(unaff_x20,uVar2);
  func_0x000107c61170(unaff_x20);
  uVar8 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar6 = uVar8;
    if (0x7fffffffffffffff < uVar3) {
      uVar6 = uVar3;
    }
    func_0x000107c60480();
  }
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 - 1;
    if (uVar7 == 0) break;
    if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d84870);
      (*pcVar1)();
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d84874);
        (*pcVar1)();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d84878);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(uVar3 + 0x20 + uVar6 * 8);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar6;
      func_0x000100f040d0(uVar6,uVar3);
    }
    func_0x000107c40718(param_1,param_2);
    uVar5 = uVar4;
    func_0x000107c4eadc();
    func_0x000107c61170(uVar4);
  } while ((int)uVar5 == 0);
  func_0x000107c6142c(uVar3);
  return uVar7 != 0;
}



/* Entry: 102d8488c; end: 102d84903; -[SCPresenceContainer pointInside:withEvent:] */

uint FUN_102d8488c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102d84750(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return (uint)param_5 & 1;
}



/* Entry: 102d84904; end: 102d849b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d84904(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar1 = _DAT_112f154a0;
  func_0x000107c61614(unaff_x20 + _DAT_112f154a0,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  uVar2 = 0;
  func_0x000102d84d90();
  uStack_38 = uVar2;
  func_0x000107c61154(0,0,0,0,auStack_40,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c3d94c(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 102d849b4; end: 102d84a67; -[SCPresenceContainer initWithTableContentInsetUpdater:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d849b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = _DAT_112f154a0;
  plVar4 = &lStack_40;
  func_0x000107c61614(param_1 + _DAT_112f154a0,0);
  func_0x000107c61604(param_1 + lVar2,param_3);
  uVar3 = 0;
  func_0x000102d84d90();
  puVar1 = PTR_s_initWithFrame__1125e2948;
  lStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(0,0,0,0,&lStack_40,puVar1);
  func_0x000107c61180();
  func_0x000107c3d94c(param_3);
  func_0x000107c61170(plVar4);
  func_0x000107c615e8(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 102d84a68; end: 102d84a9b;  */

void FUN_102d84a68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d84a9c; end: 102d84d6f;  */

undefined * FUN_102d84a9c(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f15498,&UNK_10db4aef0);
    func_0x000107c602e8();
    puVar1 = puVar11;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined *)0x0;
      puVar7 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar12 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d84d6c);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(param_1 + (long)puVar12 * 8 + 0x20);
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c61174();
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          func_0x000100f115fc(0);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c61170(uVar5);
              goto LAB_102d84c88;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d84d70);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_102d84c88:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar11);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = puVar12;
        func_0x000100f040d0(puVar12,param_1);
        bVar3 = SCARRY8((long)puVar12,1);
        puVar12 = puVar12 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d84d64);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          func_0x000100f115fc(0);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c615e8(puVar7);
              goto joined_r0x000102d84b74;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined **)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d84d68);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
joined_r0x000102d84b74:
      } while (puVar12 != puVar11);
    }
  }
  return puVar1;
}



/* Entry: 102d84d70; end: 102d84daf;  */

void FUN_102d84d70(void)

{
  func_0x000107c61168(&PTR_PTR_1128a57c8);
  return;
}



/* Entry: 102d84db0; end: 102d84e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d84db0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = _DAT_112f154a0;
  func_0x000107c61614(unaff_x20 + _DAT_112f154a0,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61154(0,0,0,0,auStack_40,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c3d94c(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 102d84e54; end: 102d84eff; -[SCTableContentInsetAlterView initWithTableContentInsetUpdater:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d84e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = _DAT_112f154a0;
  plVar3 = &lStack_40;
  func_0x000107c61614(param_1 + _DAT_112f154a0,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_3);
  func_0x000102d84d90();
  puVar1 = PTR_s_initWithFrame__1125e2948;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(0,0,0,0,&lStack_40,puVar1);
  func_0x000107c61180();
  func_0x000107c3d94c(param_3);
  func_0x000107c61170(plVar3);
  func_0x000107c615e8(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 102d84f00; end: 102d84f6b; -[SCTableContentInsetAlterView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84f00(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112f154a0,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCTableContentInsetUpdater/SCTableContentInsetAlterView.swift",0x3d,2,0x12,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d84f6c);
  (*pcVar1)();
}



/* Entry: 102d84f6c; end: 102d84fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84f6c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f154a0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5005c();
    func_0x000107c615e8();
  }
  func_0x000102d84d90();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d84fcc; end: 102d8503f; -[SCTableContentInsetAlterView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d84fcc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1 + _DAT_112f154a0;
  func_0x000107c61618();
  func_0x000107c61174();
  lVar2 = param_1;
  if (lVar1 != 0) {
    func_0x000107c5005c(lVar1);
    func_0x000107c615e8();
    lVar2 = lVar1;
  }
  func_0x000102d84d90();
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d85040; end: 102d8504f; -[SCTableContentInsetAlterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d85040(long param_1)

{
  param_1 = param_1 + _DAT_112f154a0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d85050; end: 102d85073;  */

undefined8 FUN_102d85050(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d85074; end: 102d850ef; -[SCTableContentInsetAlterView removeFromSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d85074(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000102d84d90();
  puVar1 = PTR_s_removeFromSuperview_112628c78;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  lVar2 = param_1 + _DAT_112f154a0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5005c();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d850f0; end: 102d85173; -[SCTableContentInsetAlterView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d850f0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_30;
  ulong uStack_28;
  
  uVar2 = param_1;
  func_0x000102d84d90();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_30,puVar1);
  uVar2 = param_1;
  func_0x000107c49eac();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + _DAT_112f154a0;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c5d658();
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d85174; end: 102d851af; -[SCTableContentInsetAlterView isHidden] */

void FUN_102d85174(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000102d84d90();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 102d851b0; end: 102d851df; -[SCTableContentInsetAlterView setHidden:] */

void FUN_102d851b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102d851e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d851e0; end: 102d8526f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d851e0(uint param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000102d84d90();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_setHidden__1126479f8,param_1 & 1);
  lVar1 = unaff_x20;
  func_0x000107c49eac();
  lVar2 = unaff_x20 + _DAT_112f154a0;
  func_0x000107c61618();
  if ((int)lVar1 == 0) {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c5d658(lVar2);
  }
  else {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c5d660(lVar2);
  }
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 102d85270; end: 102d8529b; -[SCTableContentInsetAlterView initWithFrame:] */

void FUN_102d85270(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTableContentInsetUpdater.TableContentInsetAlterView",0x35,"init(frame:)",
                      0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d8529c);
  (*pcVar1)();
}



/* Entry: 102d8529c; end: 102d8533b;  */

int FUN_102d8529c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102d8533c; end: 102d8537b;  */

undefined8 FUN_102d8533c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_102d868ec(param_1);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 102d8537c; end: 102d853bb; -[SCTableContentInsetUpdater initWithTableControllerInsetUpdater:] */

undefined8 FUN_102d8537c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_102d868ec(param_3);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 102d853bc; end: 102d85457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d853bc(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112f154d8 + 8) == '\x01') {
    lVar1 = unaff_x20 + _DAT_112f154e0;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    FUN_102d85594();
  }
  else {
    lVar1 = unaff_x20 + _DAT_112f154e0;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    FUN_102d85594();
  }
  func_0x000107c5d65c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102d85458; end: 102d854f7; -[SCTableContentInsetUpdater addViewAlteringInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d85458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x000107c61428(param_1 + _DAT_112f154d0,auStack_50,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_102d85934(&uStack_38,param_3);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uStack_38);
  FUN_102d853bc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d854f8; end: 102d85593; -[SCTableContentInsetUpdater removeViewAlteringInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d854f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + _DAT_112f154d0,auStack_48,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d86490(param_3);
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(uVar1);
  FUN_102d853bc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d85594; end: 102d857af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102d85594(double param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  
  lVar11 = _DAT_112f154d0;
  func_0x000107c61428(unaff_x20 + _DAT_112f154d0,auStack_b0,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar11);
  if ((uVar6 & 0xc000000000000001) == 0) {
    uVar7 = -1L << ((ulong)*(byte *)(uVar6 + 0x20) & 0x3f);
    puVar8 = (ulong *)(uVar6 + 0x38);
    uVar9 = ~uVar7;
    uVar7 = -uVar7;
    uVar5 = 0xffffffffffffffff;
    if (uVar7 < 0x40) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *puVar8;
    uVar7 = uVar6;
    func_0x000107c61438(uVar6,2);
    lVar11 = 0;
    uVar10 = uVar6;
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c61438(uVar6,2);
    func_0x000107c60288();
    uVar3 = 0;
    func_0x000100f115fc(0);
    uVar4 = uVar3;
    func_0x000102d869f8();
    func_0x000107c5fe30(&uStack_98,uVar7,uVar3,uVar4);
    puVar8 = puStack_90;
    uVar9 = uStack_88;
    uVar10 = uStack_98;
    lVar11 = lStack_80;
    uVar5 = uStack_78;
  }
  dVar15 = 0.0;
  uVar13 = uVar5;
  lVar1 = lVar11;
  if ((long)uVar10 < 0) goto LAB_102d856e8;
  while( true ) {
    while (uVar5 != 0) {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = *(ulong *)(*(long *)(uVar10 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                        lVar1 * 0x200);
      uStack_b8 = uVar7;
      func_0x000107c61174(uVar7);
      uVar5 = uVar5 - 1 & uVar5;
      dVar14 = param_1;
      lVar12 = lVar11;
      while( true ) {
        lVar11 = lVar1;
        if (uVar7 == 0) goto LAB_102d85764;
        func_0x000107c438d4(uVar7);
        func_0x000107c609b0();
        param_1 = dVar14;
        func_0x000107c61170();
        dVar15 = dVar15 + dVar14;
        uVar13 = uVar5;
        lVar1 = lVar11;
        if (-1 < (long)uVar10) break;
LAB_102d856e8:
        func_0x000107c602ac();
        if (uVar7 == 0) goto LAB_102d85760;
        uVar4 = 0;
        uStack_c0 = uVar7;
        func_0x000100f115fc(0);
        func_0x000107c6147c(&uStack_b8,&uStack_c0,PTR___syXlN_11034f1a0 + 8,uVar4,7);
        uVar5 = uVar13;
        uVar7 = uStack_b8;
        dVar14 = param_1;
        lVar1 = lVar11;
        lVar12 = lVar11;
      }
    }
    lVar12 = lVar1 + 1;
    if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d857b0);
      (*pcVar2)();
    }
    if ((long)(uVar9 + 0x40 >> 6) <= lVar12) break;
    uVar5 = puVar8[lVar12];
    lVar1 = lVar12;
  }
  uVar13 = 0;
LAB_102d85760:
  uStack_b8 = 0;
  lVar12 = lVar11;
LAB_102d85764:
  FUN_102d86a3c(uVar10,puVar8,uVar9,lVar12,uVar13);
  func_0x000107c6142c(uVar6);
  return dVar15;
}



/* Entry: 102d857b0; end: 102d857d7; -[SCTableContentInsetUpdater updateTableContentInset] */

void FUN_102d857b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d853bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d857d8; end: 102d85873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d857d8(void)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  
  if (*(char *)((double *)(unaff_x20 + _DAT_112f154d8) + 1) == '\x01') {
    lVar1 = unaff_x20 + _DAT_112f154e0;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    dVar2 = 0.0;
  }
  else {
    dVar2 = *(double *)(unaff_x20 + _DAT_112f154d8);
    lVar1 = unaff_x20 + _DAT_112f154e0;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    if (dVar2 < 0.0) {
      dVar2 = 0.0;
    }
  }
  func_0x000107c5d65c(dVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102d85874; end: 102d8589b; -[SCTableContentInsetUpdater updateTableContentInsetForHiddenContainer] */

void FUN_102d85874(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d857d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d8589c; end: 102d858fb; -[SCTableContentInsetUpdater init] */

void FUN_102d8589c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTableContentInsetUpdater.TableContentInsetUpdater",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d858c8);
  (*pcVar1)();
}



/* Entry: 102d858fc; end: 102d85933; -[SCTableContentInsetUpdater .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d858fc(long param_1)

{
  FUN_102d869b4(param_1 + _DAT_112f154e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f154d0));
  return;
}



/* Entry: 102d85934; end: 102d86093;  */

undefined8 FUN_102d85934(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    func_0x000100f115fc(0);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x000102d85d48();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      func_0x000100f115fc(0);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d85b5c);
      (*pcVar1)();
    }
    func_0x000102d85b5c(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_102d861e4(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_102d86410(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 102d86094; end: 102d861e3;  */

void FUN_102d86094(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112f15498,&UNK_10db4aef0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_102d86170;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_102d86170:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102d861e4);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_102d861bc;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_102d861bc:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102d861e4; end: 102d8640f;  */

void FUN_102d861e4(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112f15498;
  func_0x0001000285a8(0x112f15498,&UNK_10db4aef0);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_102d863e0:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102d8640c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_102d863e0;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102d86410);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 102d86410; end: 102d8648f;  */

void FUN_102d86410(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 102d86490; end: 102d8675f;  */

ulong FUN_102d86490(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  uVar5 = *unaff_x20;
  if ((uVar5 & 0xc000000000000001) == 0) {
    func_0x000100f115fc(0);
    uVar1 = *(ulong *)(uVar5 + 0x28);
    func_0x000107c60114();
    uVar4 = -1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
    uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
      do {
        uVar2 = *(ulong *)(*(long *)(uVar5 + 0x30) + uVar1 * 8);
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c60118();
        func_0x000107c61170(uVar2);
        if ((uVar3 & 1) != 0) {
          uVar5 = *unaff_x20;
          func_0x000107c61558();
          uVar4 = *unaff_x20;
          if ((uVar5 & 1) == 0) {
            FUN_102d86094();
          }
          uVar5 = *(ulong *)(*(long *)(uVar4 + 0x30) + uVar1 * 8);
          FUN_102d86760(uVar1);
          *unaff_x20 = uVar4;
          return uVar5;
        }
        uVar1 = uVar1 + 1 & ~uVar4;
      } while ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
    }
  }
  else {
    uVar1 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar1 = uVar5;
    }
    func_0x000107c61434(uVar5);
    func_0x000107c61174();
    uVar4 = param_1;
    func_0x000107c602b0();
    func_0x000107c61170(param_1);
    if ((uVar4 & 1) != 0) {
      func_0x000102d86614(uVar1,param_1);
      func_0x000107c6142c(uVar5);
      return uVar1;
    }
    func_0x000107c6142c(uVar5);
  }
  return 0;
}



/* Entry: 102d86760; end: 102d868eb;  */

void FUN_102d86760(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *unaff_x20;
  lVar1 = lVar9 + 0x38;
  uVar7 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  uVar8 = 1L << (uVar10 & 0x3f);
  if ((uVar8 & *(ulong *)(lVar1 + (uVar10 >> 6) * 8)) == 0) {
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar7 = ~uVar7;
    uVar6 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    if ((*(ulong *)(lVar1 + (uVar10 >> 6) * 8) & uVar8) != 0) {
      uVar8 = uVar6 + 1 & uVar7;
      do {
        uVar6 = *(ulong *)(lVar9 + 0x28);
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar10 * 8);
        func_0x000107c61174(uVar5);
        func_0x000107c60114();
        func_0x000107c61170(uVar5);
        uVar6 = uVar6 & uVar7;
        if ((long)param_1 < (long)uVar8) {
          if (uVar8 <= uVar6 || (long)uVar6 <= (long)param_1) {
LAB_102d86850:
            puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + param_1 * 8);
            puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar10 * 8);
            if ((param_1 != uVar10) || (puVar3 + 1 <= puVar2)) {
              *puVar2 = *puVar3;
              param_1 = uVar10;
            }
          }
        }
        else if (uVar8 <= uVar6 && (long)uVar6 <= (long)param_1) goto LAB_102d86850;
        uVar10 = uVar10 + 1 & uVar7;
      } while ((*(ulong *)(lVar1 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
    }
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar7);
  }
  if (!SBORROW8(*(long *)(lVar9 + 0x10),1)) {
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
    *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102d868ec);
  (*pcVar4)();
}


