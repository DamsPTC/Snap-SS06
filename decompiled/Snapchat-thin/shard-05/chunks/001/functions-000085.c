/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b0549c; end: 103b05603;  */

int FUN_103b0549c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b05518;
        goto LAB_103b054fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b054fc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103b05518:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b05604; end: 103b05643;  */

void FUN_103b05604(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54338;
  func_0x000107c61520(&UNK_10dc54338,&UNK_1106d1ed8);
  puRam0000000112feb840 = puVar1;
  return;
}



/* Entry: 103b05644; end: 103b05647;  */

void FUN_103b05644(undefined8 param_1)

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



/* Entry: 103b05648; end: 103b056bb;  */

void FUN_103b05648(undefined8 param_1)

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



/* Entry: 103b056bc; end: 103b056bf;  */

void FUN_103b056bc(undefined8 param_1)

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



/* Entry: 103b056c0; end: 103b056eb; +[YouTubePreviewPlaybackMessageHandler messageName] */

void FUN_103b056c0(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010f19e790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b056ec; end: 103b05747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b056ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb848);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b05748; end: 103b057db; -[YouTubePreviewPlaybackMessageHandler initWithPlaybackStartedCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05748(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar4 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_1106d1fd0;
    func_0x000107c613fc(&UNK_1106d1fd0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_3;
    pcVar4 = FUN_103b05b4c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112feb848);
  *puVar1 = pcVar4;
  puVar1[1] = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b057dc; end: 103b05853; +[YouTubePreviewPlaybackMessageHandler userScript] */

void FUN_103b057dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_103b05904();
  puVar1 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c488ac(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103b05854; end: 103b058bb; -[YouTubePreviewPlaybackMessageHandler userContentController:didReceiveScriptMessage:] */

/* WARNING: Possible PIC construction at 0x000103b0589c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b058a0) */

void FUN_103b05854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b05a60(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b058bc; end: 103b058ef;  */

void FUN_103b058bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b058f0; end: 103b05903; -[YouTubePreviewPlaybackMessageHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b058f0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112feb848) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112feb848))[1]);
    return;
  }
  return;
}



/* Entry: 103b05904; end: 103b05a5f;  */

/* WARNING: Removing unreachable block (ram,0x000103b05a2c) */

undefined1  [16] FUN_103b05904(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [16];
  
  lVar1 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  FUN_103b05b2c();
  func_0x000107c614e8();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010dc543c0);
  uVar3 = 0x736a;
  uVar6 = 0xe200000000000000;
  func_0x000107c5fadc(0x736a,0xe200000000000000);
  puVar4 = puVar5;
  func_0x000107c4e444();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    uVar2 = 0xe000000000000000;
  }
  else {
    puVar5 = puVar4;
    func_0x000107c5faec(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c5fb04(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    uVar2 = uVar6;
    func_0x000107c5facc(puVar5,uVar6,auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c6142c(uVar6);
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = puVar5;
  return auVar7;
}



/* Entry: 103b05a60; end: 103b05b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05a60(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  uVar1 = 0;
  func_0x000107c3eb80();
  func_0x000107c61180();
  func_0x000107c60234(auStack_50);
  func_0x000107c615e8(param_1);
  func_0x000107c6147c(auStack_60,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if ((uVar1 & 1) != 0) {
    lVar2 = 0x112d3cde0;
    func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
    func_0x000107c61538();
    func_0x000107c604c4();
    func_0x000107c6142c(uStack_58);
    if ((lVar2 == 0) && (*(code **)(unaff_x20 + _DAT_112feb848) != (code *)0x0)) {
      (**(code **)(unaff_x20 + _DAT_112feb848))();
    }
  }
  return;
}



/* Entry: 103b05b2c; end: 103b05b4b;  */

void FUN_103b05b2c(void)

{
  func_0x000107c61168(&PTR_PTR_112927fc8);
  return;
}



/* Entry: 103b05b4c; end: 103b05b57;  */

void FUN_103b05b4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b05b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103b05b58; end: 103b05b67; -[SaturnChatHeaderServices saturnStatusProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feb8b8));
  return;
}



/* Entry: 103b05b68; end: 103b05bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05b68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feb8b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b05c00; end: 103b05c5f; -[SaturnChatHeaderServices init] */

void FUN_103b05c00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnChatHeaderServices.SaturnChatHeaderServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b05c2c);
  (*pcVar1)();
}



/* Entry: 103b05c60; end: 103b05c6f; -[SaturnChatHeaderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112feb8b8));
  return;
}



/* Entry: 103b05c70; end: 103b05e47;  */

long FUN_103b05c70(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b05e48; end: 103b05e53; -[SCSaturnStatusComponents title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05e48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feb8e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feb8e8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b05e54; end: 103b05e5f; -[SCSaturnStatusComponents time] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05e54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feb8f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feb8f0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b05e60; end: 103b05ea7;  */

void FUN_103b05e60(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b05ea8; end: 103b05eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb8e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb8f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b05eb0; end: 103b06037; -[SCSaturnStatusComponents initWithTitle:time:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b05eb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112feb8e8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112feb8f0);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b06038; end: 103b0603b; -[SCSaturnStatusComponents copyWithZone:] */

void FUN_103b06038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b0603c; end: 103b06057; -[SCSaturnStatusComponents description] */

void FUN_103b0603c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b06058; end: 103b060d3; -[SCSaturnStatusComponents init] */

void FUN_103b06058(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SaturnChatHeaderServices/SaturnStatusComponentsWrapper.swift",0x3c,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b060a0);
  (*pcVar1)();
}



/* Entry: 103b060d4; end: 103b06113; -[SCSaturnStatusComponents .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b060f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b060f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b060d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112feb8e8 + 8))
  ;
  return;
}



/* Entry: 103b06114; end: 103b06133;  */

void FUN_103b06114(void)

{
  func_0x000107c61168(&PTR_PTR_112928148);
  return;
}



/* Entry: 103b06134; end: 103b0613b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b06134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb8e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb8f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0613c; end: 103b06163; +[_TtC31ArroyoAnalyticsDataModelHelpers31ArroyoAnalyticsDataModelHelpers snapSendSourceFor:] */

long FUN_103b0613c(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  func_0x000107c3de40();
  lVar1 = -(ulong)(param_3 != 2);
  if (param_3 == 1) {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 103b06164; end: 103b0617b; +[_TtC31ArroyoAnalyticsDataModelHelpers31ArroyoAnalyticsDataModelHelpers memoriesSendSourceFor:] */

undefined8 FUN_103b06164(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (param_3 == 9) {
    uVar1 = 1;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 103b0617c; end: 103b0619b;  */

void FUN_103b0617c(void)

{
  func_0x000107c61168(&PTR_PTR_112928218);
  return;
}



/* Entry: 103b0619c; end: 103b061d7; -[_TtC31ArroyoAnalyticsDataModelHelpers31ArroyoAnalyticsDataModelHelpers init] */

void FUN_103b0619c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b0617c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b061d8; end: 103b06207;  */

void FUN_103b061d8(void)

{
  FUN_103b0617c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b06208; end: 103b06293; +[_TtC20TurnBasedLensesUtils29TurnBasedContextualTextHelper turnBasedLabelTextForLensConfigInfo:senderFirstName:] */

void FUN_103b06208(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b06740();
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_2);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_4);
    func_0x000107c6142c(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b06294; end: 103b06327; +[_TtC20TurnBasedLensesUtils29TurnBasedContextualTextHelper playedGameLabelTextWithSenderFirstName:lensName:] */

void FUN_103b06294(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c5faec(param_3);
  lVar1 = param_2;
  func_0x000107c5faec(param_4);
  lVar2 = param_2;
  FUN_103b0694c(param_3,param_2,param_4,lVar1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar1);
  if (lVar2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b06328; end: 103b0632b;  */

void FUN_103b06328(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c4f710();
  if (((int)uVar1 == 3) && (uVar1 = param_1, func_0x000107c49b7c(), (uVar1 & 1) == 0)) {
    func_0x000107c4b2c0();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb5c(uVar1,param_2);
      func_0x000107c6142c(param_2);
    }
  }
  return;
}



/* Entry: 103b0632c; end: 103b06363; +[_TtC20TurnBasedLensesUtils29TurnBasedContextualTextHelper shouldShowTurnBasedHeaderForLensConfigInfo:] */

uint FUN_103b0632c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b06a4c();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103b06364; end: 103b066cf;  */

void FUN_103b06364(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar2 = param_1;
  func_0x000107c4f710();
  if ((int)uVar2 != 3) {
    return;
  }
  uVar2 = param_1;
  func_0x000107c49b7c();
  uVar7 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x000107c4b2c0();
    func_0x000107c61180();
    if (uVar2 == 0) {
      return;
    }
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    uVar7 = param_2;
    func_0x000107c5fb5c();
    func_0x000107c6142c(param_2);
    if ((long)uVar3 < 1) {
      return;
    }
  }
  uVar2 = param_1;
  func_0x000107c49b7c();
  uVar3 = param_1;
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x000107c4b2c0();
    func_0x000107c61180();
    if (uVar2 == 0) {
      return;
    }
    uVar4 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    uVar2 = uVar4;
    uVar10 = uVar7;
    func_0x000107c5fb5c(uVar4,uVar7);
    if ((long)uVar2 < 1) {
      func_0x000107c6142c(uVar7);
      return;
    }
    func_0x000107c44ac8();
    if ((int)uVar3 == 0) {
      func_0x000103b06fcc();
      lVar5 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
      lVar6 = lVar5;
      func_0x00010075bbf0();
      *(long *)(lVar5 + 0x40) = lVar6;
      *(ulong *)(lVar5 + 0x20) = uVar4;
      *(undefined8 *)(lVar5 + 0x28) = uVar7;
      uVar7 = uVar10;
    }
    else {
      func_0x000103b06f00();
      lVar5 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      func_0x000107c519c8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b066d0);
        (*pcVar1)();
      }
      uVar2 = param_1;
      func_0x000107c5dc0c();
      func_0x000107c61170();
      puVar8 = PTR___ss5Int64Vs7CVarArgsWP_11034ee78;
      *(undefined **)(lVar5 + 0x38) = PTR___ss5Int64VN_11034ee50;
      *(undefined **)(lVar5 + 0x40) = puVar8;
      *(ulong *)(lVar5 + 0x20) = uVar2;
      *(undefined **)(lVar5 + 0x60) = PTR___sSSN_11034da80;
      func_0x00010075bbf0();
      *(ulong *)(lVar5 + 0x68) = param_1;
      *(ulong *)(lVar5 + 0x48) = uVar4;
      *(undefined8 *)(lVar5 + 0x50) = uVar7;
      uVar7 = uVar10;
    }
    uVar10 = uVar7;
    func_0x000107c5fb00(uVar3,uVar7,lVar5);
  }
  else {
    func_0x000107c44ac8();
    if ((int)uVar3 == 0) {
      func_0x000103b06e34();
      goto LAB_103b06624;
    }
    func_0x000103b06d68();
    lVar5 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    func_0x000107c519c8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b066cc);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61170(param_1);
    puVar8 = PTR___ss5Int64Vs7CVarArgsWP_11034ee78;
    *(undefined **)(lVar5 + 0x38) = PTR___ss5Int64VN_11034ee50;
    *(undefined **)(lVar5 + 0x40) = puVar8;
    *(ulong *)(lVar5 + 0x20) = uVar2;
    uVar10 = uVar7;
    func_0x000107c5fb00(uVar3,uVar7,lVar5);
  }
  func_0x000107c6142c(uVar7);
  uVar7 = uVar10;
LAB_103b06624:
  puVar8 = PTR_PTR_1126c68c8;
  func_0x000107c61168(PTR_PTR_1126c68c8);
  func_0x000107c5af5c();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126c68c0;
  func_0x000107c610f8(PTR_PTR_1126c68c0);
  uVar2 = uVar3;
  func_0x000107c5fadc(uVar3,uVar7);
  func_0x000107c5fadc(uVar3,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c48c9c(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103b066d0; end: 103b0670b; -[_TtC20TurnBasedLensesUtils29TurnBasedContextualTextHelper init] */

void FUN_103b066d0(undefined8 param_1)

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



/* Entry: 103b0670c; end: 103b0673f;  */

void FUN_103b0670c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b06740; end: 103b0694b;  */

void FUN_103b06740(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar4 = param_1;
  lVar9 = param_2;
  func_0x000107c4f710();
  if ((int)lVar4 == 3) {
    lVar4 = param_1;
    func_0x000107c4b2c0();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lVar4 = lVar5;
      func_0x000107c5fb5c(lVar5,lVar9);
      if ((lVar4 < 1) ||
         (lVar4 = param_2, uVar10 = param_3, func_0x000107c5fb5c(param_2,param_3), lVar4 < 1)) {
        func_0x000107c6142c(lVar9);
      }
      else {
        lVar4 = param_1;
        func_0x000107c44ac8();
        if ((int)lVar4 == 0) {
          func_0x000103b06bd0();
          lVar7 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x18) = 4;
          *(undefined8 *)(lVar7 + 0x10) = 2;
          puVar1 = PTR___sSSN_11034da80;
          *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
          lVar8 = lVar7;
          func_0x00010075bbf0();
          *(long *)(lVar7 + 0x20) = param_2;
          *(undefined8 *)(lVar7 + 0x28) = param_3;
          *(undefined **)(lVar7 + 0x60) = puVar1;
          *(long *)(lVar7 + 0x68) = lVar8;
          *(long *)(lVar7 + 0x40) = lVar8;
          *(long *)(lVar7 + 0x48) = lVar5;
          *(long *)(lVar7 + 0x50) = lVar9;
          func_0x000107c61434(param_3);
        }
        else {
          FUN_103b06b04();
          lVar7 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x18) = 6;
          *(undefined8 *)(lVar7 + 0x10) = 3;
          puVar1 = PTR___sSSN_11034da80;
          *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
          lVar8 = lVar7;
          func_0x00010075bbf0();
          *(long *)(lVar7 + 0x40) = lVar8;
          *(long *)(lVar7 + 0x20) = param_2;
          *(undefined8 *)(lVar7 + 0x28) = param_3;
          func_0x000107c61434(param_3);
          func_0x000107c519c8();
          func_0x000107c61180();
          if (param_1 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103b0694c);
            (*pcVar3)();
          }
          lVar6 = param_1;
          func_0x000107c5dc0c();
          func_0x000107c61170(param_1);
          puVar2 = PTR___ss5Int64Vs7CVarArgsWP_11034ee78;
          *(undefined **)(lVar7 + 0x60) = PTR___ss5Int64VN_11034ee50;
          *(undefined **)(lVar7 + 0x68) = puVar2;
          *(long *)(lVar7 + 0x48) = lVar6;
          *(undefined **)(lVar7 + 0x88) = puVar1;
          *(long *)(lVar7 + 0x90) = lVar8;
          *(long *)(lVar7 + 0x70) = lVar5;
          *(long *)(lVar7 + 0x78) = lVar9;
        }
        func_0x000107c5fb00(lVar4,uVar10,lVar7);
        func_0x000107c6142c(uVar10);
      }
    }
  }
  return;
}



/* Entry: 103b0694c; end: 103b06a4b;  */

undefined1  [16] FUN_103b0694c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar4 = param_1;
  func_0x000107c5fb5c();
  if ((lVar4 < 1) ||
     (lVar4 = param_3, uVar5 = param_4, func_0x000107c5fb5c(param_3,param_4), lVar4 < 1)) {
    lVar4 = 0;
    uVar6 = 0;
  }
  else {
    func_0x000103b06c9c();
    lVar2 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 4;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
    lVar3 = lVar2;
    func_0x00010075bbf0();
    *(long *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(undefined **)(lVar2 + 0x60) = puVar1;
    *(long *)(lVar2 + 0x68) = lVar3;
    *(long *)(lVar2 + 0x40) = lVar3;
    *(long *)(lVar2 + 0x48) = param_3;
    *(undefined8 *)(lVar2 + 0x50) = param_4;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    uVar6 = uVar5;
    func_0x000107c5fb00(lVar4,uVar5,lVar2);
    func_0x000107c6142c(uVar5);
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = lVar4;
  return auVar7;
}



/* Entry: 103b06a4c; end: 103b06ae3;  */

void FUN_103b06a4c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c4f710();
  if (((int)uVar1 == 3) && (uVar1 = param_1, func_0x000107c49b7c(), (uVar1 & 1) == 0)) {
    func_0x000107c4b2c0();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb5c(uVar1,param_2);
      func_0x000107c6142c(param_2);
    }
  }
  return;
}



/* Entry: 103b06ae4; end: 103b06b03;  */

void FUN_103b06ae4(void)

{
  func_0x000107c61168(&PTR_PTR_1129282c8);
  return;
}



/* Entry: 103b06b04; end: 103b07097;  */

undefined1  [16] FUN_103b06b04(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f19e980);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010dc544d0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b06bd0);
  (*pcVar1)();
}



/* Entry: 103b07098; end: 103b070a7;  */

undefined1  [16] FUN_103b07098(void)

{
  return ZEXT816(0x1106d21d8);
}



/* Entry: 103b070a8; end: 103b077eb;  */

void FUN_103b070a8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 103b077ec; end: 103b077fb; -[_TtC22SCReactionsDetailScope22SCReactionsDetailScope viewModelObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b077ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feb970));
  return;
}



/* Entry: 103b077fc; end: 103b0781b; -[_TtC22SCReactionsDetailScope22SCReactionsDetailScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b077fc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112feb978));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b0781c; end: 103b07863; -[_TtC22SCReactionsDetailScope22SCReactionsDetailScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0781c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112feb980;
  func_0x000107c61428(param_1 + _DAT_112feb980,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b07864; end: 103b078bb; -[_TtC22SCReactionsDetailScope22SCReactionsDetailScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b07864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112feb980;
  func_0x000107c61428(param_1 + _DAT_112feb980,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b078bc; end: 103b078db; -[_TtC22SCReactionsDetailScope22SCReactionsDetailScope focusedMessageCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b078bc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112feb988));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b078dc; end: 103b079e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b078dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112feb980;
  func_0x000107c61614(unaff_x20 + _DAT_112feb980,0);
  *(undefined8 *)(unaff_x20 + _DAT_112feb970) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112feb978) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112feb988) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_2);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return puVar3;
}



/* Entry: 103b079e8; end: 103b07ac3; -[_TtC22SCReactionsDetailScope22SCReactionsDetailScope initWithViewModelObservable:focusedMessageCell:uiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b079e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112feb980;
  func_0x000107c61614(param_1 + _DAT_112feb980,0);
  *(undefined8 *)(param_1 + _DAT_112feb970) = param_3;
  *(undefined8 *)(param_1 + _DAT_112feb978) = param_5;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_6);
  *(undefined8 *)(param_1 + _DAT_112feb988) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_78,puVar1);
  return;
}



/* Entry: 103b07ac4; end: 103b07b23; -[_TtC22SCReactionsDetailScope22SCReactionsDetailScope init] */

void FUN_103b07ac4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCReactionsDetailScope.SCReactionsDetailScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b07af0);
  (*pcVar1)();
}



/* Entry: 103b07b24; end: 103b07b7b; -[_TtC22SCReactionsDetailScope22SCReactionsDetailScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b07b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b07b54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b07b24(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112feb970));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112feb978));
  return;
}



/* Entry: 103b07b7c; end: 103b07b9b;  */

void FUN_103b07b7c(void)

{
  func_0x000107c61168(&PTR_PTR_112928378);
  return;
}



/* Entry: 103b07b9c; end: 103b07db3;  */

long FUN_103b07b9c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b07db4; end: 103b07e53; -[SCChatConversationReactionMetadata reactionMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b07db4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112feb9b8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103b08064(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    FUN_103b08064(0,0x112ea4a00,&PTR_PTR_1126bea48);
    func_0x000100120cb0();
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b07e54; end: 103b07e67; -[SCChatConversationReactionMetadata hasUnseenReactions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b07e54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feb9c0);
}



/* Entry: 103b07e68; end: 103b07f33; -[SCChatConversationReactionMetadata initWithReactionMetadata:hasUnseenReactions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b07e68(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_103b08064(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = 0;
    FUN_103b08064(0,0x112ea4a00,&PTR_PTR_1126bea48);
    uVar4 = uVar3;
    func_0x000100120cb0();
    func_0x000107c5f9e8(param_3,uVar2,uVar3,uVar4);
  }
  *(long *)(param_1 + _DAT_112feb9b8) = param_3;
  *(undefined1 *)(param_1 + _DAT_112feb9c0) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b07f34; end: 103b07f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b07f34(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feb9b8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112feb9c0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b07f98; end: 103b07f9b; -[SCChatConversationReactionMetadata copyWithZone:] */

void FUN_103b07f98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b07f9c; end: 103b07fb7; -[SCChatConversationReactionMetadata description] */

void FUN_103b07f9c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b07fb8; end: 103b08033; -[SCChatConversationReactionMetadata init] */

void FUN_103b07fb8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCReactionsDetailScope/SCChatConversationReactionMetadataWrapper.swift",0x46,
                      2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b08000);
  (*pcVar1)();
}



/* Entry: 103b08034; end: 103b08043; -[SCChatConversationReactionMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112feb9b8));
  return;
}



/* Entry: 103b08044; end: 103b08063;  */

void FUN_103b08044(void)

{
  func_0x000107c61168(&PTR_PTR_112928450);
  return;
}



/* Entry: 103b08064; end: 103b080a3;  */

void FUN_103b08064(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b080a4; end: 103b080a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b080a4(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feb9b8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112feb9c0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b080a8; end: 103b080f3; -[SCChatMessageReaction userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b080a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feb9f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feb9f0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b080f4; end: 103b08103; -[SCChatMessageReaction type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b080f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feb9f8));
  return;
}



/* Entry: 103b08104; end: 103b08113; -[SCChatMessageReaction reactionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feba00));
  return;
}



/* Entry: 103b08114; end: 103b0816f; -[SCChatMessageReaction userDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08114(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112feba08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112feba08);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b08170; end: 103b0817f; -[SCChatMessageReaction isFromCurrentUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b08170(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feba10);
}



/* Entry: 103b08180; end: 103b08233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb9f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112feb9f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112feba00) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feba08);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112feba10) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b08234; end: 103b0831f; -[SCChatMessageReaction initWithUserId:type:reactionId:userDisplayName:isFromCurrentUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08234(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_6 == 0) {
    param_6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112feb9f0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112feb9f8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112feba00) = param_5;
  plVar2 = (long *)(param_1 + _DAT_112feba08);
  *plVar2 = param_6;
  plVar2[1] = lVar5;
  *(undefined1 *)(param_1 + _DAT_112feba10) = param_7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 103b08320; end: 103b0840f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b08320(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_c0;
  func_0x000107c610f8();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb9f0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = *(undefined1 *)(param_1 + 6);
  func_0x000100402194(&uStack_40,&uStack_a0);
  func_0x000103b07200(&uStack_70,&uStack_a0);
  puVar1 = &uStack_70;
  FUN_103b08a64();
  *(undefined8 **)(unaff_x20 + _DAT_112feb9f8) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112feba00) = param_1[7];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feba08);
  puVar1[1] = uStack_98;
  *puVar1 = uStack_a0;
  *(undefined1 *)(unaff_x20 + _DAT_112feba10) = *(undefined1 *)(param_1 + 10);
  func_0x000107c61174();
  func_0x000101223174(&uStack_a0,auStack_b0);
  func_0x000107c61154(auStack_c0,PTR_s_init_1125d9248);
  func_0x000103b085f0(param_1);
  return puVar2;
}



/* Entry: 103b08410; end: 103b08413; -[SCChatMessageReaction copyWithZone:] */

void FUN_103b08410(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b08414; end: 103b0845b; -[SCChatMessageReaction description] */

void FUN_103b08414(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  FUN_103b0845c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b0845c; end: 103b08513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b0845c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x000103b08bb8(&uStack_78,*(undefined8 *)(unaff_x20 + _DAT_112feb9f8));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112feba00);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112feba08 + 8);
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000103b072f8(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar2);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 103b08514; end: 103b0858f; -[SCChatMessageReaction init] */

void FUN_103b08514(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCReactionsDetailScope/SCChatMessageReactionWrapper.swift",0x39,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0855c);
  (*pcVar1)();
}



/* Entry: 103b08590; end: 103b08623; -[SCChatMessageReaction .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b085b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b085b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112feb9f0 + 8))
  ;
  return;
}



/* Entry: 103b08624; end: 103b08643;  */

void FUN_103b08624(void)

{
  func_0x000107c61168(&PTR_PTR_112928520);
  return;
}



/* Entry: 103b08644; end: 103b086ef;  */

void FUN_103b08644(void)

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



/* Entry: 103b086f0; end: 103b0872f;  */

void FUN_103b086f0(undefined1 *param_1,long *param_2)

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



/* Entry: 103b08730; end: 103b08763; -[SCChatMessageReactionType description] */

void FUN_103b08730(void)

{
  undefined1 auStack_38 [40];
  
  func_0x000103b08bb8(auStack_38);
  func_0x000103b08ff0(auStack_38);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b08764; end: 103b087ab; -[SCChatMessageReactionType init] */

void FUN_103b08764(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCReactionsDetailScope/SCChatMessageReactionTypeWrapper.swift",0x3d,2,0x33,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b087ac);
  (*pcVar1)();
}



/* Entry: 103b087ac; end: 103b087af; -[SCChatMessageReactionType copyWithZone:] */

void FUN_103b087ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b087b0; end: 103b0884b; +[SCChatMessageReactionType bitmojiWithIntentId:reaction:avatarId:] */

void FUN_103b087b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_3;
  func_0x000103b08c84(param_3,param_4,param_5,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0884c; end: 103b08917; +[SCChatMessageReactionType emojiWithEmoji:] */

void FUN_103b0884c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_103b08d44();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b08918; end: 103b0896b; -[SCChatMessageReactionType matchBitmoji:emoji:] */

void FUN_103b08918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000103b08884(FUN_103b08fb0,auStack_40,FUN_103b08fb8,auStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b0896c; end: 103b089cf;  */

void FUN_103b0896c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b089d0; end: 103b08a03;  */

void FUN_103b089d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b08a04; end: 103b08a63; -[SCChatMessageReactionType .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b08a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b08a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08a04(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112feba50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112feba58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112feba60 + 8))
  ;
  return;
}



/* Entry: 103b08a64; end: 103b08d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08a64(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  uVar8 = *param_1;
  uVar3 = param_1[1];
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_103b08de8();
    puVar6 = param_1;
    func_0x000107c610f8();
    *(undefined1 *)((long)puVar6 + _DAT_112feba40) = 1;
    *(undefined8 *)((long)puVar6 + _DAT_112feba50) = 0;
    *(undefined8 *)((long)puVar6 + _DAT_112feba58) = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_112feba60);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_112feba48);
    *puVar1 = uVar8;
    puVar1[1] = uVar3;
    puStack_50 = puVar6;
    puStack_48 = param_1;
    func_0x000107c61154(&puStack_50,PTR_s_init_1125d9248);
  }
  else {
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    puVar6 = param_1;
    FUN_103b08de8();
    puVar7 = puVar6;
    func_0x000107c610f8();
    *(undefined1 *)((long)puVar7 + _DAT_112feba40) = 0;
    *(undefined8 *)((long)puVar7 + _DAT_112feba50) = uVar8;
    *(undefined8 *)((long)puVar7 + _DAT_112feba58) = uVar3;
    puVar1 = (undefined8 *)((long)puVar7 + _DAT_112feba60);
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)puVar7 + _DAT_112feba48);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar5 = PTR_s_init_1125d9248;
    puStack_60 = puVar7;
    puStack_58 = puVar6;
    func_0x000107c61174(uVar8);
    func_0x000107c61174();
    func_0x000107c61434(uVar4);
    func_0x000107c61174(uVar3);
    func_0x000107c61154(&puStack_60,puVar5);
    func_0x000103b08ff0(param_1);
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103b08d44; end: 103b08de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b08d44(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_103b08de8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112feba40) = 1;
  *(undefined8 *)(lVar5 + _DAT_112feba50) = 0;
  *(undefined8 *)(lVar5 + _DAT_112feba58) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112feba60);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_112feba48);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}


