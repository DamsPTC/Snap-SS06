/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d7dea8; end: 102d7dee7;  */

void FUN_102d7dea8(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000100dfa6ec(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102d7dee8; end: 102d7def3;  */

void FUN_102d7dee8(long param_1,long param_2)

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



/* Entry: 102d7def4; end: 102d7df03; -[_TtC25ConvoLiveActivityServices25ConvoLiveActivityServices convoLiveActivityManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7def4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14d50));
  return;
}



/* Entry: 102d7df04; end: 102d7df9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7df04(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14d50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7df9c; end: 102d7dffb; -[_TtC25ConvoLiveActivityServices25ConvoLiveActivityServices init] */

void FUN_102d7df9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConvoLiveActivityServices.ConvoLiveActivityServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7dfc8);
  (*pcVar1)();
}



/* Entry: 102d7dffc; end: 102d7e00b; -[_TtC25ConvoLiveActivityServices25ConvoLiveActivityServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7dffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f14d50));
  return;
}



/* Entry: 102d7e00c; end: 102d7e02b;  */

void FUN_102d7e00c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4740);
  return;
}



/* Entry: 102d7e02c; end: 102d7e077;  */

void FUN_102d7e02c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f14d80,&UNK_10db4a150);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102d7e078,param_1);
  return;
}



/* Entry: 102d7e078; end: 102d7e0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7e078(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102d7e238();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f14d88) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102d7e0e0; end: 102d7e12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7e0e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14d88) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7e12c; end: 102d7e237; -[_TtC39SCChatLockedConversationAlertScopeProxy49SCChatLockedConversationAlertScopeBuilderServices buildWithCurrentUserSnapchatter:group:delegate:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7e12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126ab658;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c4630c(puVar1,param_2,param_3,param_4,param_5,param_6);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_68[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102d7e238; end: 102d7e287;  */

void FUN_102d7e238(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4800);
  return;
}



/* Entry: 102d7e288; end: 102d7e2cb; -[_TtC39SCChatLockedConversationAlertScopeProxy49SCChatLockedConversationAlertScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7e288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f14d88));
  return;
}



/* Entry: 102d7e2cc; end: 102d7e3a3;  */

void FUN_102d7e2cc(void)

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



/* Entry: 102d7e3a4; end: 102d7e3c3;  */

void FUN_102d7e3a4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102d7e3c4; end: 102d7e403;  */

void FUN_102d7e3c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a2b0;
  func_0x000107c61520(&UNK_10db4a2b0,&UNK_1105cd740);
  puRam0000000112f14dd0 = puVar1;
  return;
}



/* Entry: 102d7e404; end: 102d7e413;  */

undefined1  [16] FUN_102d7e404(void)

{
  return ZEXT816(0x1105cd740);
}



/* Entry: 102d7e414; end: 102d7e4a7;  */

long FUN_102d7e414(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102d7e4a8; end: 102d7e4bb;  */

bool FUN_102d7e4a8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d7e4bc; end: 102d7e567;  */

void FUN_102d7e4bc(void)

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



/* Entry: 102d7e568; end: 102d7e56b;  */

void FUN_102d7e568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a3c0;
  func_0x000107c61520(&UNK_10db4a3c0,&UNK_1105cd8c0);
  puRam0000000112f14dd8 = puVar1;
  return;
}



/* Entry: 102d7e56c; end: 102d7e5ab;  */

void FUN_102d7e56c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a3c0;
  func_0x000107c61520(&UNK_10db4a3c0,&UNK_1105cd8c0);
  puRam0000000112f14dd8 = puVar1;
  return;
}



/* Entry: 102d7e5ac; end: 102d7e70f;  */

int FUN_102d7e5ac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d7e628;
        goto LAB_102d7e60c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d7e60c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102d7e628:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d7e710; end: 102d7ec47;  */

long FUN_102d7e710(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102d7ec48; end: 102d7ec57; -[SCMessagingPlaybackTransitionConfiguration baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ec48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14de0));
  return;
}



/* Entry: 102d7ec58; end: 102d7ec67; -[SCMessagingPlaybackTransitionConfiguration shouldRefreshBaseViewOnDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102d7ec58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f14de8);
}



/* Entry: 102d7ec68; end: 102d7ec77; -[SCMessagingPlaybackTransitionConfiguration useCircularTransitions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102d7ec68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f14df0);
}



/* Entry: 102d7ec78; end: 102d7eceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ec78(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14de0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f14de8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f14df0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7ecec; end: 102d7ed6b; -[SCMessagingPlaybackTransitionConfiguration initWithBaseView:shouldRefreshBaseViewOnDismissal:useCircularTransitions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ecec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f14de0) = param_3;
  *(undefined1 *)(param_1 + _DAT_112f14de8) = param_4;
  *(undefined1 *)(param_1 + _DAT_112f14df0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102d7ed6c; end: 102d7edcb; -[SCMessagingPlaybackTransitionConfiguration init] */

void FUN_102d7ed6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMessagingPlaybackScope.MessagingPlaybackTransitionConfiguration",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7ed98);
  (*pcVar1)();
}



/* Entry: 102d7edcc; end: 102d7eddb; -[SCMessagingPlaybackTransitionConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7edcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f14de0));
  return;
}



/* Entry: 102d7eddc; end: 102d7edfb;  */

void FUN_102d7eddc(void)

{
  func_0x000107c61168(&PTR_PTR_1128a48c0);
  return;
}



/* Entry: 102d7edfc; end: 102d7ee47; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7edfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f14e20);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f14e20))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d7ee48; end: 102d7ee57; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope target] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ee48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14e28));
  return;
}



/* Entry: 102d7ee58; end: 102d7ee67; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ee58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14e30));
  return;
}



/* Entry: 102d7ee68; end: 102d7ee77; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope actionEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ee68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14e38));
  return;
}



/* Entry: 102d7ee78; end: 102d7ee87; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope transitionConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ee78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14e40));
  return;
}



/* Entry: 102d7ee88; end: 102d7ee93; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ee88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14e48;
  func_0x000107c61428(param_1 + _DAT_112f14e48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7ee94; end: 102d7ee9f; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7ee94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14e48;
  func_0x000107c61428(param_1 + _DAT_112f14e48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7eea0; end: 102d7eeab; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope parentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7eea0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14e50;
  func_0x000107c61428(param_1 + _DAT_112f14e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7eeac; end: 102d7eeef;  */

void FUN_102d7eeac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102d7eef0; end: 102d7eefb; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope setParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7eef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f14e50;
  func_0x000107c61428(param_1 + _DAT_112f14e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7eefc; end: 102d7ef4f;  */

void FUN_102d7eefc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d7ef50; end: 102d7f0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102d7ef50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112f14e48;
  func_0x000107c61614(unaff_x20 + _DAT_112f14e48,0);
  lVar4 = _DAT_112f14e50;
  func_0x000107c61614(unaff_x20 + _DAT_112f14e50,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14e20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f14e28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14e30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f14e38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f14e40) = param_6;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_7);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_8);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar5 = auStack_a0;
  func_0x000107c61154(puVar5,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_8);
  return puVar5;
}



/* Entry: 102d7f0ec; end: 102d7f1f3; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope initWithConversationId:target:configuration:actionEvents:transitionConfiguration:delegate:parentViewController:] */

undefined8
FUN_102d7f0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_9);
  FUN_102d7f2e0(param_3,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_9);
  return param_3;
}



/* Entry: 102d7f1f4; end: 102d7f253; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope init] */

void FUN_102d7f1f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMessagingPlaybackScope.SCMessagingPlaybackScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7f220);
  (*pcVar1)();
}



/* Entry: 102d7f254; end: 102d7f2df; -[_TtC24SCMessagingPlaybackScope24SCMessagingPlaybackScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d7f2c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d7f2c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d7f254(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f14e20 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f14e28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f14e30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f14e38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f14e40));
  param_1 = param_1 + _DAT_112f14e48;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d7f2e0; end: 102d7f433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7f2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112f14e48;
  func_0x000107c61614(unaff_x20 + _DAT_112f14e48,0);
  lVar4 = _DAT_112f14e50;
  func_0x000107c61614(unaff_x20 + _DAT_112f14e50,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14e20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f14e28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14e30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f14e38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f14e40) = param_6;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_7);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_8);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&stack0xffffffffffffff60,puVar2);
  return;
}



/* Entry: 102d7f434; end: 102d7f453;  */

void FUN_102d7f434(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4990);
  return;
}



/* Entry: 102d7f454; end: 102d7f4ff;  */

void FUN_102d7f454(void)

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



/* Entry: 102d7f500; end: 102d7f53f;  */

void FUN_102d7f500(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102d7f540; end: 102d7f55b; -[SCMessagingPlaybackActions description] */

void FUN_102d7f540(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7f55c; end: 102d7f5a3; -[SCMessagingPlaybackActions init] */

void FUN_102d7f55c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMessagingPlaybackScope/SCMessagingPlaybackActionsWrapper.swift",0x40,2,0x29
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7f5a4);
  (*pcVar1)();
}



/* Entry: 102d7f5a4; end: 102d7f5a7; -[SCMessagingPlaybackActions copyWithZone:] */

void FUN_102d7f5a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d7f5a8; end: 102d7f5af; +[SCMessagingPlaybackActions dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7f5a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112f14e80) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7f5b0; end: 102d7f5b7; +[SCMessagingPlaybackActions dismissIfFullScreenIsShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7f5b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112f14e80) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7f5b8; end: 102d7f607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7f5b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112f14e80) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7f608; end: 102d7f623; -[SCMessagingPlaybackActions matchDismiss:dismissIfFullScreenIsShown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7f608(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_112f14e80) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000102d7f620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 102d7f624; end: 102d7f677;  */

void FUN_102d7f624(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d7f678; end: 102d7f7df;  */

int FUN_102d7f678(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d7f6f4;
        goto LAB_102d7f6d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d7f6d8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102d7f6f4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d7f7e0; end: 102d7f81f;  */

void FUN_102d7f7e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a520;
  func_0x000107c61520(&UNK_10db4a520,&UNK_1105cdaa8);
  puRam0000000112f14eb0 = puVar1;
  return;
}



/* Entry: 102d7f820; end: 102d7f8cb;  */

void FUN_102d7f820(void)

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



/* Entry: 102d7f8cc; end: 102d7f90b;  */

void FUN_102d7f8cc(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102d7f90c; end: 102d7f92b; -[SCMessagingPlaybackTarget description] */

void FUN_102d7f90c(void)

{
  FUN_102d7fc68();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7f92c; end: 102d7f973; -[SCMessagingPlaybackTarget init] */

void FUN_102d7f92c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMessagingPlaybackScope/SCMessagingPlaybackTargetWrapper.swift",0x3f,2,0x33,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7f974);
  (*pcVar1)();
}



/* Entry: 102d7f974; end: 102d7f977; -[SCMessagingPlaybackTarget copyWithZone:] */

void FUN_102d7f974(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d7f978; end: 102d7f9db; +[SCMessagingPlaybackTarget snapchatterWithUserId:isLockedConversation:isCampaignConversation:] */

void FUN_102d7f978(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  FUN_102d7fcfc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d7f9dc; end: 102d7faef; +[SCMessagingPlaybackTarget groupWithGroupId:isLockedConversation:] */

void FUN_102d7f9dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  FUN_102d7fdbc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d7faf0; end: 102d7fb43; -[SCMessagingPlaybackTarget matchSnapchatter:group:] */

void FUN_102d7faf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000102d7fa30(FUN_102d8003c,auStack_40,0x102d80044,auStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d7fb44; end: 102d7fbf3;  */

void FUN_102d7fb44(undefined8 param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_3 & 1,param_4 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d7fbf4; end: 102d7fc27;  */

void FUN_102d7fbf4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d7fc28; end: 102d7fc67; -[SCMessagingPlaybackTarget .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d7fc48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d7fc4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7fc28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f14ec0 + 8))
  ;
  return;
}



/* Entry: 102d7fc68; end: 102d7fcfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d7fc68(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112f14eb8) == '\x01') {
    if (*(char *)(param_1 + _DAT_112f14ee0) != '\x02') {
      return *(undefined8 *)(param_1 + _DAT_112f14ed8);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7fcf4);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_112f14ec8) == '\x02') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7fcf8);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_112f14ed0) != '\x02') {
    return *(undefined8 *)(param_1 + _DAT_112f14ec0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7fcfc);
  (*pcVar1)();
}



/* Entry: 102d7fcfc; end: 102d7fdbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7fcfc(long param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_102d7fe74();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112f14eb8) = 0;
  plVar1 = (long *)(lVar5 + _DAT_112f14ec0);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined1 *)(lVar5 + _DAT_112f14ec8) = param_3;
  *(undefined1 *)(lVar5 + _DAT_112f14ed0) = param_4;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f14ed8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_112f14ee0) = 2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61154(&lStack_50,puVar3);
  return;
}



/* Entry: 102d7fdbc; end: 102d7fe73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7fdbc(long param_1,long param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_102d7fe74();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112f14eb8) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f14ec0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_112f14ec8) = 2;
  *(undefined1 *)(lVar5 + _DAT_112f14ed0) = 2;
  plVar2 = (long *)(lVar5 + _DAT_112f14ed8);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  *(undefined1 *)(lVar5 + _DAT_112f14ee0) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 102d7fe74; end: 102d7fe93;  */

void FUN_102d7fe74(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4b40);
  return;
}



/* Entry: 102d7fe94; end: 102d7fffb;  */

int FUN_102d7fe94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d7ff10;
        goto LAB_102d7fef4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d7fef4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102d7ff10:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d7fffc; end: 102d8003b;  */

void FUN_102d7fffc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a600;
  func_0x000107c61520(&UNK_10db4a600,&UNK_1105cdb90);
  puRam0000000112f14f10 = puVar1;
  return;
}



/* Entry: 102d8003c; end: 102d8004b;  */

void FUN_102d8003c(undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3 & 1,param_4 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d8004c; end: 102d8005b; -[SCFriendsFeedSnapTapLatency snapTapStartTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d8004c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14f18);
}



/* Entry: 102d8005c; end: 102d8006b; -[SCFriendsFeedSnapTapLatency fetchTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d8005c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14f20);
}



/* Entry: 102d8006c; end: 102d8007b; -[SCFriendsFeedSnapTapLatency dispatchMainTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d8006c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14f28);
}



/* Entry: 102d8007c; end: 102d8008b; -[SCFriendsFeedSnapTapLatency scopeExposedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d8007c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14f30);
}



/* Entry: 102d8008c; end: 102d8009b; -[SCFriendsFeedSnapTapLatency senderFetchTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d8008c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14f38);
}



/* Entry: 102d8009c; end: 102d800ab; -[SCFriendsFeedSnapTapLatency initialGroupFetchTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d8009c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14f40);
}



/* Entry: 102d800ac; end: 102d800bb; -[SCFriendsFeedSnapTapLatency operaSessionInitTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d800ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14f48);
}



/* Entry: 102d800bc; end: 102d8017f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d800bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14f18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f14f20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f14f28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14f30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f14f38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f14f40) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f14f48) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d80180; end: 102d8024b; -[SCFriendsFeedSnapTapLatency initWithSnapTapStartTime:fetchTimestamp:dispatchMainTimestamp:scopeExposedTimestamp:senderFetchTimestamp:initialGroupFetchTimestamp:operaSessionInitTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d80180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_8;
  func_0x000107c614f0();
  *(undefined8 *)(param_8 + _DAT_112f14f18) = param_1;
  *(undefined8 *)(param_8 + _DAT_112f14f20) = param_2;
  *(undefined8 *)(param_8 + _DAT_112f14f28) = param_3;
  *(undefined8 *)(param_8 + _DAT_112f14f30) = param_4;
  *(undefined8 *)(param_8 + _DAT_112f14f38) = param_5;
  *(undefined8 *)(param_8 + _DAT_112f14f40) = param_6;
  *(undefined8 *)(param_8 + _DAT_112f14f48) = param_7;
  lStack_70 = param_8;
  lStack_68 = lVar1;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d8024c; end: 102d802ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8024c(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112f14f18) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f14f20) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112f14f28) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112f14f30) = uVar1;
  uVar1 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_112f14f38) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112f14f40) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112f14f48) = param_1[6];
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d802f0; end: 102d802f3; -[SCFriendsFeedSnapTapLatency copyWithZone:] */

void FUN_102d802f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d802f4; end: 102d8031f; -[SCFriendsFeedSnapTapLatency description] */

void FUN_102d802f4(void)

{
  undefined1 auStack_48 [56];
  
  FUN_102d807e8(auStack_48);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d80320; end: 102d80367; -[SCFriendsFeedSnapTapLatency init] */

void FUN_102d80320(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMessagingPlaybackScope/SCFriendsFeedSnapTapLatencyWrapper.swift",0x41,2,
                      0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d80368);
  (*pcVar1)();
}



/* Entry: 102d80368; end: 102d80383; +[SCFriendsFeedSnapTapLatencyBuilder friendsFeedSnapTapLatency] */

void FUN_102d80368(void)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d80384; end: 102d803c3; +[SCFriendsFeedSnapTapLatencyBuilder friendsFeedSnapTapLatencyWithExistingFriendsFeedSnapTapLatency:] */

void FUN_102d80384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_102d80850(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d803c4; end: 102d803db; -[SCFriendsFeedSnapTapLatencyBuilder withSnapTapStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d803c4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f14f50);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102d803dc; end: 102d803f3; -[SCFriendsFeedSnapTapLatencyBuilder withFetchTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d803dc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f14f58);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102d803f4; end: 102d8040b; -[SCFriendsFeedSnapTapLatencyBuilder withDispatchMainTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d803f4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f14f60);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102d8040c; end: 102d80423; -[SCFriendsFeedSnapTapLatencyBuilder withScopeExposedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8040c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f14f68);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102d80424; end: 102d8043b; -[SCFriendsFeedSnapTapLatencyBuilder withSenderFetchTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d80424(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f14f70);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102d8043c; end: 102d80453; -[SCFriendsFeedSnapTapLatencyBuilder withInitialGroupFetchTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8043c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f14f78);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}


