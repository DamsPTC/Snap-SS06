/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100eaf3b4; end: 100eaf3ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaf3b4(undefined8 param_1)

{
  long *unaff_x20;
  
  (**(code **)(**(long **)(*unaff_x20 + _DAT_112d473d0) + 0x98))();
  FUN_100ead994();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 100eaf400; end: 100eaf43f; -[_TtC12OAuthFeature18OAuthFeatureRouter appealScopeDidCompleteWithSuccess:] */

void FUN_100eaf400(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100eaf6fc(&DAT_112d473d8,0x100eafb78,&UNK_110361420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eaf440; end: 100eaf49b; -[_TtC12OAuthFeature18OAuthFeatureRouter webBrowserDidDismiss:] */

void FUN_100eaf440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_100eaf6fc(&DAT_112d473e0,0x100eafb80,&UNK_1103613f8);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eaf49c; end: 100eaf557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaf49c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  long *plVar5;
  
  lVar2 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = _DAT_112d47410;
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d47410) != 0) {
    func_0x000107c41864();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar3);
  plVar5 = *(long **)(unaff_x20 + _DAT_112d473d0);
  func_0x000107c6159c(puVar4,lVar2,8);
  (**(code **)(*plVar5 + 0xb0))(puVar4);
  func_0x000100eafa34(puVar4,FUN_100eb20b0);
  return;
}



/* Entry: 100eaf558; end: 100eaf57f; -[_TtC12OAuthFeature18OAuthFeatureRouter COSChallengeAbandoned] */

void FUN_100eaf558(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100eaf49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eaf580; end: 100eaf5cb; -[_TtC12OAuthFeature18OAuthFeatureRouter COSChallengeErrorWithError:] */

/* WARNING: Possible PIC construction at 0x000100eaf5b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eaf5b8) */

void FUN_100eaf580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100eaf7cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eaf5cc; end: 100eaf69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaf5cc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  lVar2 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = _DAT_112d47410;
  puVar5 = (undefined8 *)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d47410) != 0) {
    func_0x000107c41864();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar3);
  plVar4 = *(long **)(unaff_x20 + _DAT_112d473d0);
  *puVar5 = param_1;
  func_0x000107c6159c(puVar5,lVar2,5);
  pcVar6 = *(code **)(*plVar4 + 0xb0);
  func_0x000107c61174(param_1);
  (*pcVar6)(puVar5);
  func_0x000100eafa34(puVar5,FUN_100eb20b0);
  return;
}



/* Entry: 100eaf6a0; end: 100eaf6ef; -[_TtC12OAuthFeature18OAuthFeatureRouter COSChallengeCompletedWithBootStrapData:] */

/* WARNING: Possible PIC construction at 0x000100eaf6d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eaf6dc) */

void FUN_100eaf6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100eaf5cc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100eaf6f0; end: 100eaf6f3; -[_TtC12OAuthFeature18OAuthFeatureRouter logOnCOSChallengeReceivedWithChallengeType:] */

void FUN_100eaf6f0(void)

{
  return;
}



/* Entry: 100eaf6f4; end: 100eaf6f7; -[_TtC12OAuthFeature18OAuthFeatureRouter logOnCOSChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_100eaf6f4(void)

{
  return;
}



/* Entry: 100eaf6f8; end: 100eaf6fb; -[_TtC12OAuthFeature18OAuthFeatureRouter logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:] */

void FUN_100eaf6f8(void)

{
  return;
}



/* Entry: 100eaf6fc; end: 100eaf7cb;  */

void FUN_100eaf6fc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + *param_1);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103613e0;
    func_0x000107c613fc(&UNK_1103613e0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    uStack_58 = param_3;
    uStack_50 = param_2;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c5e2a4(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 100eaf7cc; end: 100eaf887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaf7cc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  long *plVar5;
  
  lVar2 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = _DAT_112d47410;
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d47410) != 0) {
    func_0x000107c41864();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar3);
  plVar5 = *(long **)(unaff_x20 + _DAT_112d473d0);
  func_0x000107c6159c(puVar4,lVar2,8);
  (**(code **)(*plVar5 + 0xb0))(puVar4);
  func_0x000100eafa34(puVar4,FUN_100eb20b0);
  return;
}



/* Entry: 100eaf888; end: 100eaf8a3;  */

void FUN_100eaf888(long param_1,long param_2)

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



/* Entry: 100eaf8a4; end: 100eaf8ff;  */

undefined8 FUN_100eaf8a4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100eaf900; end: 100eaf907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaf900(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar3 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + _DAT_112d473f0);
    func_0x000107c615f0(uVar6);
    func_0x000107c61170(lVar3);
    puVar4 = &UNK_1103614f8;
    func_0x000107c613fc(&UNK_1103614f8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar2;
    pcStack_68 = FUN_100eaf95c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000b0c7c;
    puStack_70 = &UNK_110361510;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c6157c(lVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c41864(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 100eaf908; end: 100eaf95b;  */

void FUN_100eaf908(void)

{
  FUN_100eaedc0();
  return;
}



/* Entry: 100eaf95c; end: 100eaf963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eaf95c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = (undefined8 *)((long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    plVar5 = *(long **)(lVar3 + _DAT_112d473d0);
    func_0x000107c6157c(plVar5);
    func_0x000107c61170(lVar3);
    *puVar4 = uVar1;
    func_0x000107c6159c(puVar4,lVar2,2);
    pcVar6 = *(code **)(*plVar5 + 0xb0);
    func_0x000107c61174(uVar1);
    (*pcVar6)(puVar4);
    func_0x000107c61574(plVar5);
    func_0x000100eafa34(puVar4,FUN_100eb20b0);
  }
  return;
}



/* Entry: 100eaf964; end: 100eaf9a3;  */

void FUN_100eaf964(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100eaf9a4; end: 100eaf9ef;  */

void FUN_100eaf9a4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100eaf9f0; end: 100eafa6f;  */

undefined8 FUN_100eaf9f0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100eafa70; end: 100eafa97;  */

void FUN_100eafa70(void)

{
  FUN_100eaedc0();
  return;
}



/* Entry: 100eafa98; end: 100eafa9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100eafa98(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112d473f0);
    func_0x000107c615f0(uVar6);
    func_0x000107c61170(lVar2);
    (**(code **)(lVar9 + 0x10))(auStack_a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,lVar1);
    uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar8 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_1103615e8;
    func_0x000107c613fc(&UNK_1103615e8,uVar8 + lVar7,uVar5 | 7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    (**(code **)(lVar9 + 0x20))
              (puVar3 + uVar8,auStack_a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar1);
    pcStack_78 = FUN_100eafaa0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000b0c7c;
    puStack_80 = &UNK_110361600;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c6157c();
    func_0x000107c61574(puVar3);
    func_0x000107c41864(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uVar6);
  }
  return 1;
}



/* Entry: 100eafaa0; end: 100eafae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eafaa0(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long *plVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    plVar5 = *(long **)(lVar2 + _DAT_112d473d0);
    func_0x000107c6157c(plVar5);
    func_0x000107c61170(lVar2);
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))
              (puVar4,unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar2);
    func_0x000107c6159c(puVar4,lVar1,4);
    (**(code **)(*plVar5 + 0xb0))(puVar4);
    func_0x000107c61574(plVar5);
    func_0x000100eafa34(puVar4,FUN_100eb20b0);
  }
  return;
}



/* Entry: 100eafae8; end: 100eafb1f;  */

/* WARNING: Possible PIC construction at 0x000100eafb08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eafb0c) */

void FUN_100eafae8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_2 >> 0x3e);
  if ((uVar1 != 1) && (uVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100eafb20; end: 100eafb83;  */

void FUN_100eafb20(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100eadacc(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100eafb84; end: 100eafba3;  */

void FUN_100eafb84(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 100eafba4; end: 100eafbbb;  */

void FUN_100eafba4(void)

{
  return;
}



/* Entry: 100eafbbc; end: 100eafc23;  */

uint FUN_100eafbbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) == '\x01') {
LAB_100eafbf8:
      uVar1 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c60118(uVar2,uVar3,uVar1);
      return (uint)uVar2 & 1;
    }
  }
  else if (*(char *)(param_2 + 1) != '\x01') goto LAB_100eafbf8;
  return 0;
}



/* Entry: 100eafc24; end: 100eafc2f;  */

uint FUN_100eafc24(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  uint uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong uStack_220;
  ulong auStack_218 [2];
  ulong *puStack_208;
  long alStack_200 [10];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
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
  undefined1 uStack_70;
  
  lVar2 = 0;
  alStack_200[3] = param_1;
  func_0x000107c5ede0();
  alStack_200[1] = *(long *)(lVar2 + -8);
  alStack_200[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_200[1] + 0x40));
  lVar2 = (long)&uStack_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_218[1] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12;
  lVar3 = 0;
  auStack_218[0] = lVar2;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar9 = (ulong *)(lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_208 = puVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar9 - extraout_x12_00;
  alStack_200[0] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (ulong *)(lVar2 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (ulong *)((long)puVar15 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (ulong *)((long)puVar17 - extraout_x12_03);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)((long)puVar16 - extraout_x12_04);
  lVar2 = 0x112d477c0;
  func_0x0001000285a8(0x112d477c0,&UNK_10d90e7f8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar13 - extraout_x8_01;
  puVar8 = (undefined8 *)(lVar18 + *(int *)(lVar2 + 0x30));
  FUN_100eb64a8(alStack_200[3],lVar18,FUN_100eb20b0);
  FUN_100eb64a8(param_2,puVar8,FUN_100eb20b0);
  alStack_200[3] = lVar18;
  func_0x000107c614c4(lVar18,lVar3);
  lVar2 = alStack_200[0];
  puVar9 = puStack_208;
  iVar1 = (int)lVar18;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        FUN_100eb64a8(alStack_200[3],puVar13,FUN_100eb20b0);
        uStack_98 = puVar13[5];
        uStack_a0 = puVar13[4];
        uStack_88 = puVar13[7];
        uStack_90 = puVar13[6];
        uStack_78 = puVar13[9];
        uStack_80 = puVar13[8];
        uStack_70 = *(undefined1 *)(puVar13 + 10);
        uStack_b8 = puVar13[1];
        uStack_c0 = *puVar13;
        uStack_a8 = puVar13[3];
        uStack_b0 = puVar13[2];
        puVar4 = puVar8;
        func_0x000107c614c4(puVar8,lVar3);
        if ((int)puVar4 != 0) {
          FUN_100eb6744(&uStack_c0,0x112d477c8,&UNK_10d90e800);
          goto LAB_100eb5d04;
        }
        alStack_200[7] = puVar8[3];
        alStack_200[6] = puVar8[2];
        uStack_f8 = puVar8[5];
        uStack_100 = puVar8[4];
        uStack_e8 = puVar8[7];
        uStack_f0 = puVar8[6];
        uStack_d8 = puVar8[9];
        uStack_e0 = puVar8[8];
        alStack_200[5] = puVar8[1];
        alStack_200[4] = *puVar8;
        uStack_118 = puVar8[1];
        uStack_120 = *puVar8;
        uStack_108 = puVar8[3];
        uStack_110 = puVar8[2];
        uStack_158 = puVar13[5];
        uStack_160 = puVar13[4];
        uStack_148 = puVar13[7];
        uStack_150 = puVar13[6];
        uStack_138 = puVar13[9];
        uStack_140 = puVar13[8];
        uStack_178 = puVar13[1];
        uStack_180 = *puVar13;
        uStack_168 = puVar13[3];
        uStack_170 = puVar13[2];
        alStack_200[9] = puVar8[5];
        alStack_200[8] = puVar8[4];
        uStack_1a8 = puVar8[7];
        uStack_1b0 = puVar8[6];
        uStack_198 = puVar8[9];
        uStack_1a0 = puVar8[8];
        uStack_d0 = *(undefined1 *)(puVar8 + 10);
        uStack_130 = *(undefined1 *)(puVar13 + 10);
        uStack_190 = *(undefined1 *)(puVar8 + 10);
        FUN_100ea9794();
        puVar13 = puVar4;
        func_0x000100ea97d4();
        puVar7 = puVar13;
        func_0x000100ea9814();
        puVar8 = &uStack_180;
        func_0x000107c606d0(puVar8,alStack_200 + 4,&UNK_110361290,&UNK_110361330,puVar4,puVar13,
                            puVar7);
        uVar10 = (uint)puVar8;
        FUN_100eb6744(&uStack_120,0x112d477c8,&UNK_10d90e800);
        FUN_100eb6744(&uStack_c0,0x112d477c8,&UNK_10d90e800);
        goto LAB_100eb5cd4;
      }
      FUN_100eb64a8(alStack_200[3],puVar16,FUN_100eb20b0);
      uVar14 = *puVar16;
      puVar13 = puVar8;
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar13 == 1) {
        uVar12 = *puVar8;
LAB_100eb5bb0:
        func_0x0001007bbbf8(0);
        uVar6 = uVar14;
        func_0x000107c60118(uVar14,uVar12);
        uVar10 = (uint)uVar6;
        goto LAB_100eb5cc8;
      }
LAB_100eb5d00:
      func_0x000107c61170(uVar14);
      goto LAB_100eb5d04;
    }
    if (iVar1 == 2) {
      FUN_100eb64a8(alStack_200[3],puVar17,FUN_100eb20b0);
      uVar14 = *puVar17;
      puVar13 = puVar8;
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar13 == 2) {
        uVar12 = *puVar8;
        goto LAB_100eb5bb0;
      }
      goto LAB_100eb5d00;
    }
    FUN_100eb64a8(alStack_200[3],puVar15,FUN_100eb20b0);
    uVar14 = *puVar15;
    puVar13 = puVar8;
    func_0x000107c614c4(puVar8,lVar3);
    if ((int)puVar13 != 3) goto LAB_100eb5d00;
    uVar12 = *puVar8;
    if ((char)puVar15[1] == '\x01') {
      if (*(char *)(puVar8 + 1) != '\x01') goto LAB_100eb5e20;
LAB_100eb5c14:
      func_0x0001007bbbf8(0);
      uVar6 = uVar14;
      func_0x000107c60118(uVar14,uVar12);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar12);
      if ((uVar6 & 1) != 0) goto LAB_100eb5c64;
    }
    else {
      if (*(char *)(puVar8 + 1) != '\x01') goto LAB_100eb5c14;
LAB_100eb5e20:
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar12);
    }
    FUN_100eb2824(alStack_200[3],FUN_100eb20b0);
  }
  else {
    if (iVar1 < 6) {
      if (iVar1 != 4) {
        FUN_100eb64a8(alStack_200[3],puStack_208,FUN_100eb20b0);
        uVar14 = *puVar9;
        puVar13 = puVar8;
        func_0x000107c614c4(puVar8,lVar3);
        if ((int)puVar13 != 5) goto LAB_100eb5d00;
        uVar12 = *puVar8;
        func_0x0001007bbbf8(0);
        uVar6 = uVar14;
        func_0x000107c60118(uVar14,uVar12);
        uVar10 = (uint)uVar6;
LAB_100eb5cc8:
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar12);
LAB_100eb5cd4:
        FUN_100eb2824(alStack_200[3],FUN_100eb20b0);
        goto LAB_100eb5d20;
      }
      FUN_100eb64a8(alStack_200[3],alStack_200[0],FUN_100eb20b0);
      puVar13 = puVar8;
      func_0x000107c614c4(puVar8,lVar3);
      lVar18 = alStack_200[2];
      lVar3 = alStack_200[1];
      uVar14 = auStack_218[0];
      if ((int)puVar13 == 4) {
        pcVar11 = *(code **)(alStack_200[1] + 0x20);
        (*pcVar11)(auStack_218[0],lVar2,alStack_200[2]);
        uVar6 = auStack_218[1];
        (*pcVar11)(auStack_218[1],puVar8,lVar18);
        uVar5 = uVar14;
        func_0x000107c5edac(uVar14,uVar6);
        uVar10 = (uint)uVar5;
        pcVar11 = *(code **)(lVar3 + 8);
        (*pcVar11)(uVar6,lVar18);
        (*pcVar11)(uVar14,lVar18);
        goto LAB_100eb5cd4;
      }
      (**(code **)(alStack_200[1] + 8))(lVar2,alStack_200[2]);
    }
    else if (iVar1 == 6) {
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar8 == 6) goto LAB_100eb5c64;
    }
    else if (iVar1 == 7) {
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar8 == 7) {
LAB_100eb5c64:
        FUN_100eb2824(alStack_200[3],FUN_100eb20b0);
        uVar10 = 1;
        goto LAB_100eb5d20;
      }
    }
    else {
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar8 == 8) goto LAB_100eb5c64;
    }
LAB_100eb5d04:
    FUN_100eb6744(alStack_200[3],0x112d477c0,&UNK_10d90e7f8);
  }
  uVar10 = 0;
LAB_100eb5d20:
  return uVar10 & 1;
}



/* Entry: 100eafc30; end: 100eafcd7;  */

undefined1 * FUN_100eafc30(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d477e8,&UNK_10d90e828);
  func_0x000107c6159c(puVar3,lVar1,6);
  puVar2 = puVar3;
  func_0x000100854cb0(puVar3);
  FUN_100eb2824(puVar3,FUN_100eb20b0);
  return puVar2;
}



/* Entry: 100eafcd8; end: 100eb02c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eafcd8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_290 [2];
  undefined1 auStack_280 [8];
  undefined1 auStack_27f [8];
  undefined1 auStack_277 [8];
  undefined1 auStack_26f [8];
  undefined1 auStack_267 [8];
  undefined1 auStack_25f [8];
  undefined1 auStack_257 [15];
  undefined8 uStack_248;
  char acStack_240 [64];
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)auStack_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_100eb64a8(param_2,puVar12);
  puVar5 = puVar12;
  func_0x000107c614c4(puVar12,lVar4);
  iVar2 = (int)puVar5;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        uVar6 = *puVar12;
        FUN_100eb02c4(param_1,uVar6,param_3);
LAB_100eaff10:
        func_0x000107c61170(uVar6);
        return;
      }
      uVar6 = *puVar12;
      uVar9 = puVar12[1];
      uVar1 = *(undefined1 *)(puVar12 + 2);
      auStack_290[1] = *(undefined8 *)((long)puVar12 + 0x19);
      auStack_290[0] = *(undefined8 *)((long)puVar12 + 0x11);
      stack0xfffffffffffffd88 = *(undefined8 *)((long)puVar12 + 0x29);
      auStack_280 = (undefined1  [8])*(undefined8 *)((long)puVar12 + 0x21);
      stack0xfffffffffffffd98 = (undefined7)*(undefined8 *)((long)puVar12 + 0x39);
      auStack_267[6] = (undefined1)((ulong)*(undefined8 *)((long)puVar12 + 0x39) >> 0x38);
      stack0xfffffffffffffd90 = *(undefined8 *)((long)puVar12 + 0x31);
      stack0xfffffffffffffda7 = puVar12[9];
      auStack_267[6] = (undefined1)puVar12[8];
      stack0xfffffffffffffda0 = (undefined7)((ulong)puVar12[8] >> 8);
      if (*(char *)(puVar12 + 10) != '\x01') {
        uVar7 = 0;
        FUN_100eb2860(0);
        func_0x000107c6159c(param_1,uVar7,10);
        lVar3 = 0;
        func_0x000100eb36a0();
        param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
        param_1[1] = 0x3000000000000000;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        func_0x000100eb6744(param_1,0x112d472c0,&UNK_10d90e810);
        *param_1 = uVar6;
        param_1[1] = uVar9;
        *(undefined1 *)(param_1 + 2) = uVar1;
        *(undefined8 *)((long)param_1 + 0x19) = auStack_290[1];
        *(undefined8 *)((long)param_1 + 0x11) = auStack_290[0];
        *(undefined8 *)((long)param_1 + 0x29) = stack0xfffffffffffffd88;
        *(undefined1 (*) [8])((long)param_1 + 0x21) = auStack_280;
        *(ulong *)((long)param_1 + 0x39) = CONCAT17(auStack_267[6],stack0xfffffffffffffd98);
        *(undefined8 *)((long)param_1 + 0x31) = stack0xfffffffffffffd90;
        param_1[9] = stack0xfffffffffffffda7;
        param_1[8] = CONCAT71(stack0xfffffffffffffda0,auStack_267[6]);
        return;
      }
      *param_1 = uVar6;
      param_1[1] = uVar9;
      *(undefined1 *)(param_1 + 2) = uVar1;
LAB_100eb005c:
      uVar6 = 0;
      FUN_100eb2860(0);
      uVar9 = 6;
    }
    else {
      if (iVar2 != 2) {
        uVar6 = *puVar12;
        FUN_100eb0afc(param_1,uVar6,*(undefined1 *)(puVar12 + 1),param_3);
        goto LAB_100eaff10;
      }
      *param_1 = *puVar12;
      uVar6 = 0;
      FUN_100eb2860(0);
      uVar9 = 2;
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 != 4) {
      uVar6 = *puVar12;
      lVar3 = 0;
      func_0x000100eb36a0();
      puVar11 = (ulong *)(param_3 + *(int *)(lVar3 + 0x14));
      uStack_108 = puVar11[1];
      uStack_110 = *puVar11;
      uStack_f8 = puVar11[3];
      puStack_100 = (ulong *)puVar11[2];
      uStack_e8 = puVar11[5];
      uStack_f0 = puVar11[4];
      uStack_d8 = puVar11[7];
      uStack_e0 = puVar11[6];
      uStack_c8 = puVar11[9];
      uStack_d0 = puVar11[8];
      if (((uStack_108 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
        uStack_1d8 = puVar11[5];
        uStack_1e0 = puVar11[4];
        uStack_1c8 = puVar11[7];
        uStack_1d0 = puVar11[6];
        uStack_1b8 = puVar11[9];
        uStack_1c0 = puVar11[8];
        uStack_1f8 = puVar11[1];
        uStack_200 = *puVar11;
        uStack_1e8 = puVar11[3];
        uStack_1f0 = puVar11[2];
        puVar8 = &uStack_200;
        uStack_c0 = uStack_200;
        uStack_b8 = uStack_1f8;
        puStack_b0 = (ulong *)uStack_1f0;
        uStack_a8 = uStack_1e8;
        uStack_a0 = uStack_1e0;
        uStack_98 = uStack_1d8;
        uStack_90 = uStack_1d0;
        uStack_88 = uStack_1c8;
        uStack_80 = uStack_1c0;
        uStack_78 = uStack_1b8;
        FUN_100eb687c(puVar8,&uStack_160);
        FUN_100eab404();
        func_0x000100eb6744(&uStack_110,0x112d472c0,&UNK_10d90e810);
        *param_1 = uVar6;
        param_1[1] = puVar8;
        uVar6 = 0;
        FUN_100eb2860(0);
        func_0x000107c6159c(param_1,uVar6,7);
        uStack_188 = puVar11[5];
        uStack_190 = puVar11[4];
        uStack_178 = puVar11[7];
        uStack_180 = puVar11[6];
        uStack_168 = puVar11[9];
        uStack_170 = puVar11[8];
        uStack_1a8 = puVar11[1];
        uStack_1b0 = *puVar11;
        uStack_198 = puVar11[3];
        uStack_1a0 = puVar11[2];
        puVar11 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
        puVar11[7] = 0;
        puVar11[6] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[1] = 0x3000000000000000;
        *puVar11 = 0;
        uStack_128 = puVar11[7];
        uStack_130 = puVar11[6];
        uStack_118 = puVar11[9];
        uStack_120 = puVar11[8];
        uStack_148 = puVar11[3];
        uStack_150 = puVar11[2];
        uStack_138 = puVar11[5];
        uStack_140 = puVar11[4];
        uStack_158 = puVar11[1];
        uStack_160 = *puVar11;
        func_0x000100eb6784(&uStack_1b0,auStack_257 + 7,0x112d472c0,&UNK_10d90e810);
        func_0x000100eb6744(&uStack_160,0x112d472c0,&UNK_10d90e810);
        puVar11[5] = uStack_188;
        puVar11[4] = uStack_190;
        puVar11[7] = uStack_178;
        puVar11[6] = uStack_180;
        puVar11[9] = uStack_168;
        puVar11[8] = uStack_170;
        puVar11[1] = uStack_1a8;
        *puVar11 = uStack_1b0;
        puVar11[3] = uStack_198;
        puVar11[2] = uStack_1a0;
        return;
      }
      func_0x000107c61170(uVar6);
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 6;
      uVar6 = 0;
      FUN_100eb2860(0);
      func_0x000107c6159c(param_1,uVar6,6);
      uStack_138 = puVar11[5];
      uStack_140 = puVar11[4];
      uStack_128 = puVar11[7];
      uStack_130 = puVar11[6];
      uStack_118 = puVar11[9];
      uStack_120 = puVar11[8];
      uStack_158 = puVar11[1];
      uStack_160 = *puVar11;
      uStack_148 = puVar11[3];
      uStack_150 = puVar11[2];
      puVar11 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
      puVar11[7] = uStack_d8;
      puVar11[6] = uStack_e0;
      puVar11[9] = uStack_c8;
      puVar11[8] = uStack_d0;
      puVar11[3] = uStack_f8;
      puVar11[2] = (ulong)puStack_100;
      puVar11[5] = uStack_e8;
      puVar11[4] = uStack_f0;
      puVar11[1] = uStack_108;
      *puVar11 = uStack_110;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      uStack_a8 = uStack_f8;
      puStack_b0 = puStack_100;
      uStack_98 = uStack_e8;
      uStack_a0 = uStack_f0;
      uStack_b8 = uStack_108;
      uStack_c0 = uStack_110;
      func_0x000100eb6784(&uStack_160,&uStack_1b0,0x112d472c0,&UNK_10d90e810);
      func_0x000100eb6744(&uStack_c0,0x112d472c0,&UNK_10d90e810);
      puVar11[5] = uStack_138;
      puVar11[4] = uStack_140;
      puVar11[7] = uStack_128;
      puVar11[6] = uStack_130;
      puVar11[9] = uStack_118;
      puVar11[8] = uStack_120;
      puStack_100 = (ulong *)uStack_150;
      uStack_f8 = uStack_148;
      uStack_110 = uStack_160;
      uStack_108 = uStack_158;
      goto LAB_100eb0118;
    }
    pcVar10 = *(code **)(lVar14 + 0x20);
    (*pcVar10)(lVar13,puVar12,lVar3);
    (*pcVar10)(param_1,lVar13,lVar3);
    uVar6 = 0;
    FUN_100eb2860(0);
    uVar9 = 4;
  }
  else {
    if (iVar2 == 6) {
      uStack_160 = uStack_160 & 0xffffffffffffff00;
      puStack_100 = &uStack_160;
      puStack_b0 = puStack_100;
      func_0x00010486ddec(0x100eb7228,&uStack_c0,0x100eb722c,&uStack_110);
      if ((char)uStack_160 == '\x01') {
        FUN_100eb64a8(param_3,param_1,0x100eb36a0);
        return;
      }
      param_1[1] = 0;
      *param_1 = 1;
      *(undefined1 *)(param_1 + 2) = 6;
      goto LAB_100eb005c;
    }
    if (iVar2 == 7) {
      uVar6 = 0;
      FUN_100eb2860(0);
      uVar9 = 9;
    }
    else {
      param_1[1] = 0x8000000000000000;
      *param_1 = 0;
      uVar6 = 0;
      FUN_100eb2860(0);
      uVar9 = 7;
    }
  }
  func_0x000107c6159c(param_1,uVar6,uVar9);
  lVar3 = 0;
  func_0x000100eb36a0();
  puVar11 = (ulong *)(param_3 + *(int *)(lVar3 + 0x14));
  uStack_e8 = puVar11[5];
  uStack_f0 = puVar11[4];
  uStack_d8 = puVar11[7];
  uStack_e0 = puVar11[6];
  uStack_c8 = puVar11[9];
  uStack_d0 = puVar11[8];
  uStack_108 = puVar11[1];
  uStack_110 = *puVar11;
  uStack_f8 = puVar11[3];
  puStack_100 = (ulong *)puVar11[2];
  puVar11 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
  puVar11[1] = 0x3000000000000000;
  *puVar11 = 0;
  puVar11[3] = 0;
  puVar11[2] = 0;
  puVar11[5] = 0;
  puVar11[4] = 0;
  puVar11[7] = 0;
  puVar11[6] = 0;
  puVar11[9] = 0;
  puVar11[8] = 0;
  uStack_b8 = puVar11[1];
  uStack_c0 = *puVar11;
  uStack_a8 = puVar11[3];
  puStack_b0 = (ulong *)puVar11[2];
  uStack_88 = puVar11[7];
  uStack_90 = puVar11[6];
  uStack_78 = puVar11[9];
  uStack_80 = puVar11[8];
  uStack_98 = puVar11[5];
  uStack_a0 = puVar11[4];
  func_0x000100eb6784(&uStack_110,&uStack_160,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_c0,0x112d472c0,&UNK_10d90e810);
  puVar11[5] = uStack_e8;
  puVar11[4] = uStack_f0;
  puVar11[7] = uStack_d8;
  puVar11[6] = uStack_e0;
  puVar11[9] = uStack_c8;
  puVar11[8] = uStack_d0;
LAB_100eb0118:
  puVar11[1] = uStack_108;
  *puVar11 = uStack_110;
  puVar11[3] = uStack_f8;
  puVar11[2] = (ulong)puStack_100;
  return;
}



/* Entry: 100eb02c4; end: 100eb0afb;  */

void FUN_100eb02c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long extraout_x12;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar7 = 0;
  func_0x000100eb36a0();
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar19 = auStack_140 + lVar7;
  FUN_100eb64a8(param_3,param_1,0x100eb36a0);
  func_0x000107c41870();
  func_0x000107c61180();
  uStack_b0 = param_2;
  FUN_100eb64a8(param_3,puVar19,0x100eb36a0);
  uVar17 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar18 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  uVar16 = extraout_x12 + uVar18 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_110361820;
  ppuStack_e8 = (undefined **)uVar18;
  func_0x000107c613fc(&UNK_110361820,uVar16 + 8,uVar17 | 7);
  func_0x000100eb68b8(puVar19,puVar8 + uVar18);
  *(undefined8 *)(puVar8 + uVar16) = param_1;
  puVar9 = &UNK_110361848;
  puStack_b8 = puVar8;
  func_0x000107c613fc(&UNK_110361848,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x100eb68fc;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x100eb724c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100de6b2c;
  puStack_90 = &UNK_110361860;
  ppuVar10 = &puStack_a8;
  puStack_c0 = puVar9;
  puStack_80 = puVar9;
  func_0x000107c60bc4();
  puVar8 = puStack_80;
  ppuStack_d0 = ppuVar10;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar8);
  FUN_100eb64a8(param_3,puVar19,0x100eb36a0);
  uVar18 = uVar17 + 0x18 & (uVar17 ^ 0xffffffffffffffff);
  puVar8 = &UNK_110361898;
  puStack_f8 = (undefined *)extraout_x12;
  func_0x000107c613fc(&UNK_110361898,uVar18 + extraout_x12,uVar17 | 7);
  *(undefined8 *)(puVar8 + 0x10) = param_1;
  puStack_c8 = puVar8;
  func_0x000100eb68b8(puVar19,puVar8 + uVar18);
  puVar9 = &UNK_1103618c0;
  func_0x000107c613fc(&UNK_1103618c0,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_100eb694c;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_88 = (code *)0x100eb6958;
  puStack_a8 = puVar12;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100e27a28;
  puStack_90 = &UNK_1103618d8;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4();
  puVar8 = puStack_80;
  puStack_100 = puVar9;
  ppuStack_d8 = ppuVar10;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar8);
  FUN_100eb64a8(param_3,puVar19,0x100eb36a0);
  puVar8 = &UNK_110361910;
  func_0x000107c613fc(&UNK_110361910,uVar18 + extraout_x12,uVar17 | 7);
  *(undefined8 *)(puVar8 + 0x10) = param_1;
  func_0x000100eb68b8(puVar19,puVar8 + uVar18);
  puVar9 = &UNK_110361938;
  func_0x000107c613fc(&UNK_110361938,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x100eb6ab8;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_88 = FUN_100eb6b20;
  puStack_a8 = puVar12;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100de6b64;
  puStack_90 = &UNK_110361950;
  ppuVar10 = &puStack_a8;
  puStack_108 = puVar8;
  puStack_80 = puVar9;
  func_0x000107c60bc4();
  puVar8 = puStack_80;
  puStack_110 = puVar9;
  ppuStack_e0 = ppuVar10;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar8);
  FUN_100eb64a8(param_3,puVar19,0x100eb36a0);
  puVar8 = &UNK_110361988;
  func_0x000107c613fc(&UNK_110361988,uVar16 + 8,uVar17 | 7);
  func_0x000100eb68b8(puVar19,puVar8 + (long)ppuStack_e8);
  *(undefined8 *)(puVar8 + uVar16) = param_1;
  puVar9 = &UNK_1103619b0;
  func_0x000107c613fc(&UNK_1103619b0,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_100eb6c8c;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_100eb6ccc;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_1103619c8;
  ppuVar10 = &puStack_a8;
  puStack_118 = puVar8;
  puStack_80 = puVar9;
  func_0x000107c60bc4();
  puVar8 = puStack_80;
  puStack_120 = puVar9;
  ppuStack_e8 = ppuVar10;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar8);
  FUN_100eb64a8(param_3,puVar19,0x100eb36a0);
  puVar8 = &UNK_110361a00;
  func_0x000107c613fc(&UNK_110361a00,uVar18 + (long)puStack_f8,uVar17 | 7);
  *(undefined8 *)(puVar8 + 0x10) = param_1;
  func_0x000100eb68b8(puVar19,puVar8 + uVar18);
  puVar9 = &UNK_110361a28;
  func_0x000107c613fc(&UNK_110361a28,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x100eb6cd4;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_88 = FUN_100eb6d30;
  puStack_a8 = puVar12;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100e27a28;
  puStack_90 = &UNK_110361a40;
  ppuVar10 = &puStack_a8;
  puStack_128 = puVar8;
  puStack_80 = puVar9;
  func_0x000107c60bc4();
  puVar8 = puStack_80;
  puStack_138 = puVar9;
  ppuStack_f0 = ppuVar10;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar8);
  FUN_100eb64a8(param_3,puVar19,0x100eb36a0);
  puVar8 = &UNK_110361a78;
  func_0x000107c613fc(&UNK_110361a78,uVar18 + (long)puStack_f8,uVar17 | 7);
  *(undefined8 *)(puVar8 + 0x10) = param_1;
  func_0x000100eb68b8(puVar19,puVar8 + uVar18);
  puVar9 = &UNK_110361aa0;
  func_0x000107c613fc(&UNK_110361aa0,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_100eb6d38;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_88 = FUN_100eb6d90;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100e2469c;
  puStack_90 = &UNK_110361ab8;
  ppuVar11 = &puStack_a8;
  puStack_130 = puVar8;
  puStack_80 = puVar9;
  func_0x000107c60bc4();
  puVar8 = puStack_80;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar8);
  FUN_100eb64a8(param_3,puVar19,0x100eb36a0);
  puVar8 = &UNK_110361af0;
  func_0x000107c613fc(&UNK_110361af0,uVar18 + (long)puStack_f8,uVar17 | 7);
  *(undefined8 *)(puVar8 + 0x10) = param_1;
  func_0x000100eb68b8(puVar19,puVar8 + uVar18);
  puVar12 = &UNK_110361b18;
  func_0x000107c613fc(&UNK_110361b18,0x20,7);
  *(code **)(puVar12 + 0x10) = FUN_100eb6d98;
  *(undefined **)(puVar12 + 0x18) = puVar8;
  pcStack_88 = FUN_100eb6de8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100de6bdc;
  puStack_90 = &UNK_110361b30;
  ppuVar13 = &puStack_a8;
  puStack_f8 = puVar8;
  puStack_80 = puVar12;
  func_0x000107c60bc4();
  puVar8 = puStack_80;
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar8);
  *(undefined ***)((long)auStack_150 + lVar7) = ppuVar13;
  uVar5 = uStack_b0;
  ppuVar4 = ppuStack_d0;
  ppuVar3 = ppuStack_d8;
  ppuVar2 = ppuStack_e0;
  ppuVar1 = ppuStack_e8;
  ppuVar10 = ppuStack_f0;
  func_0x000107c4c764(uStack_b0);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puStack_b8);
  func_0x000107c61170(uVar5);
  puVar8 = puStack_c0;
  puVar14 = puStack_c0;
  func_0x000107c61544(puStack_c0,"",0x4d,0xe0,0x24,1);
  func_0x000107c61574(puStack_c8);
  func_0x000107c61574(puVar8);
  puVar8 = puStack_100;
  if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100eb0ae4);
    (*pcVar6)();
  }
  puVar14 = puStack_100;
  func_0x000107c61544(puStack_100,"",0x4d,0xe9,0x21,1);
  func_0x000107c61574(puStack_108);
  func_0x000107c61574(puVar8);
  puVar8 = puStack_110;
  if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100eb0ae8);
    (*pcVar6)();
  }
  puVar14 = puStack_110;
  func_0x000107c61544(puStack_110,"",0x4d,0xef,0x1f,1);
  func_0x000107c61574(puStack_118);
  func_0x000107c61574(puVar8);
  puVar8 = puStack_120;
  if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100eb0aec);
    (*pcVar6)();
  }
  puVar14 = puStack_120;
  func_0x000107c61544(puStack_120,"",0x4d,0xf5,0x23,1);
  func_0x000107c61574(puStack_128);
  func_0x000107c61574(puVar8);
  puVar8 = puStack_138;
  if (((ulong)puVar14 & 1) == 0) {
    puVar14 = puStack_138;
    func_0x000107c61544(puStack_138,"",0x4d,0xfb,0x23,1);
    func_0x000107c61574(puStack_130);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100eb0af4);
      (*pcVar6)();
    }
    puVar8 = puVar9;
    func_0x000107c61544(puVar9,"",0x4d,0xfd,0x17,1);
    func_0x000107c61574(puStack_f8);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = puVar12;
      func_0x000107c61544(puVar12,"",0x4d,0x100,0x12,1);
      func_0x000107c61574(puVar12);
      if (((ulong)puVar8 & 1) == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100eb0afc);
      (*pcVar6)();
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100eb0af8);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100eb0af0);
  (*pcVar6)();
}



/* Entry: 100eb0afc; end: 100eb0c6b;  */

void FUN_100eb0afc(long *param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 auStack_140 [80];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (((uint)param_3 & 0xff) == 1) {
    func_0x000100eb4a10();
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar5 = 4;
  }
  else {
    func_0x000100eb4680();
    if (param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 6;
      goto LAB_100eb0b84;
    }
    lVar4 = param_2;
    func_0x000107c4cd90();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_2);
    *param_1 = lVar2;
    param_1[1] = param_3;
    uVar5 = 5;
  }
  *(undefined1 *)(param_1 + 2) = uVar5;
LAB_100eb0b84:
  uVar3 = 0;
  FUN_100eb2860();
  func_0x000107c6159c(param_1,uVar3,6);
  lVar4 = 0;
  func_0x000100eb36a0();
  puVar1 = (undefined8 *)(param_4 + *(int *)(lVar4 + 0x14));
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  uStack_e8 = puVar1[1];
  uStack_f0 = *puVar1;
  uStack_d8 = puVar1[3];
  uStack_e0 = puVar1[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x14));
  puVar1[1] = 0x3000000000000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  uStack_58 = puVar1[9];
  uStack_60 = puVar1[8];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  func_0x000100eb6784(&uStack_f0,auStack_140,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_a0,0x112d472c0,&UNK_10d90e810);
  puVar1[5] = uStack_c8;
  puVar1[4] = uStack_d0;
  puVar1[7] = uStack_b8;
  puVar1[6] = uStack_c0;
  puVar1[9] = uStack_a8;
  puVar1[8] = uStack_b0;
  puVar1[1] = uStack_e8;
  *puVar1 = uStack_f0;
  puVar1[3] = uStack_d8;
  puVar1[2] = uStack_e0;
  return;
}



/* Entry: 100eb0c6c; end: 100eb0f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb0c6c(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  code *pcVar11;
  undefined *apuStack_130 [10];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char cStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)apuStack_130 + lVar6);
  FUN_100eb64a8(param_1,puVar9);
  puVar4 = puVar9;
  func_0x000107c614c4(puVar9,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 < 6) {
    if (iVar2 == 0) {
      cStack_b0 = *(char *)((long)&uStack_e0 + lVar6);
      uStack_d8 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x28);
      uStack_e0 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x20);
      uStack_c8 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x38);
      uStack_d0 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x30);
      uStack_b8 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x48);
      uStack_c0 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x40);
      apuStack_130[7] = (undefined *)*(undefined8 *)((long)apuStack_130 + lVar6 + 8);
      apuStack_130[6] = (undefined *)*puVar9;
      apuStack_130[9] = (undefined *)*(undefined8 *)((long)apuStack_130 + lVar6 + 0x18);
      apuStack_130[8] = (undefined *)*(undefined8 *)((long)apuStack_130 + lVar6 + 0x10);
      if (*(char *)((long)&uStack_e0 + lVar6) == '\x01') {
        FUN_100eb6744(apuStack_130 + 6,0x112d477c8,&UNK_10d90e800);
        return;
      }
      uStack_78 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x28);
      uStack_80 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x20);
      uStack_68 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x38);
      uStack_70 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x30);
      uStack_58 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x48);
      uStack_60 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x40);
      uStack_98 = *(undefined8 *)((long)apuStack_130 + lVar6 + 8);
      uStack_a0 = *puVar9;
      uStack_88 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x18);
      uStack_90 = *(undefined8 *)((long)apuStack_130 + lVar6 + 0x10);
      uVar10 = 0x112d477e0;
      func_0x0001000285a8(0x112d477e0,&UNK_10d90e820);
      func_0x000107c613fc();
      uVar5 = 1;
      func_0x00010008747c(1,uVar10);
      lVar6 = *(long *)(unaff_x20 + _DAT_112d47458);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar3 = lVar6;
        FUN_100eab324();
        lVar7 = lVar3;
        func_0x00010011df08();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar10);
        }
        apuStack_130[4] = (undefined *)0x100eb6824;
        apuStack_130[0] = PTR___NSConcreteStackBlock_11034bd00;
        apuStack_130[1] = (undefined *)0x42000000;
        apuStack_130[2] = (undefined *)0x100e27b2c;
        apuStack_130[3] = &UNK_110361798;
        ppuVar8 = apuStack_130;
        apuStack_130[5] = (undefined *)uVar5;
        func_0x000107c60bc4(ppuVar8);
        puVar1 = apuStack_130[5];
        func_0x000107c6157c(uVar5);
        func_0x000107c61574(puVar1);
        func_0x000107c3de04(lVar6);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar7);
      }
      FUN_100eb6744(apuStack_130 + 6,0x112d477c8,&UNK_10d90e800);
      return;
    }
    if (iVar2 == 2) {
      uVar10 = *puVar9;
      FUN_100eb1080(uVar10);
      func_0x000107c61170(uVar10);
      return;
    }
  }
  else {
    if (iVar2 == 7) {
      uVar10 = 0x112d477e0;
      func_0x0001000285a8(0x112d477e0,&UNK_10d90e820);
      func_0x000107c613fc();
      uVar5 = 1;
      func_0x00010008747c(1,uVar10);
      lVar6 = unaff_x20 + _DAT_112d47450;
      uVar10 = *(undefined8 *)(lVar6 + 0x18);
      lVar3 = *(long *)(lVar6 + 0x20);
      func_0x0001000a8868(lVar6,uVar10);
      pcVar11 = *(code **)(lVar3 + 8);
      func_0x000107c6157c(uVar5);
      (*pcVar11)(0x100eb682c,uVar5,uVar10,lVar3);
      func_0x000107c61574(uVar5);
      return;
    }
    if (iVar2 == 6) {
      FUN_100eb0f90();
      return;
    }
  }
  FUN_100eb2824(puVar9,FUN_100eb20b0);
  return;
}



/* Entry: 100eb0f90; end: 100eb107f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100eb0f90(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_70 [16];
  char *pcStack_60;
  undefined1 auStack_50 [16];
  char *pcStack_40;
  char cStack_31;
  
  lVar1 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  cStack_31 = '\0';
  pcStack_60 = &cStack_31;
  pcStack_40 = pcStack_60;
  func_0x00010486ddec(0x100eb7224,auStack_50,0x100eb6834,auStack_70);
  puVar2 = (undefined1 *)0x0;
  if (cStack_31 == '\x01') {
    func_0x0001000285a8(0x112d477e8,&UNK_10d90e828);
    func_0x000107c6159c(puVar3,lVar1,7);
    puVar2 = puVar3;
    func_0x000100854cb0(puVar3);
    FUN_100eb2824(puVar3,FUN_100eb20b0);
  }
  return puVar2;
}



/* Entry: 100eb1080; end: 100eb1293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100eb1080(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  func_0x0001000285a8(0x112d477e0,&UNK_10d90e820);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  lVar4 = *(long *)(unaff_x20 + _DAT_112d47458);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar10 = -0x2000000000000000;
    uVar5 = 0;
    lVar8 = -0x2000000000000000;
    func_0x000107c5fadc(0);
    func_0x000107c4f980();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      lVar10 = lVar8;
    }
    lVar8 = lVar10;
    func_0x000107c5fadc(lVar9,lVar10);
    func_0x000107c6142c();
    func_0x00010011df08();
    func_0x000107c61180();
    if (lVar10 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar8);
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_100eb6844;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x100eb7280;
    puStack_78 = &UNK_1103617c0;
    uStack_68 = uVar3;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(uVar2);
    pcStack_70 = (code *)0x100eb6860;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x100eb7284;
    puStack_78 = &UNK_1103617e8;
    uStack_68 = uVar3;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(uVar2);
    func_0x000107c4f978(lVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar10);
  }
  return uVar3;
}



/* Entry: 100eb1294; end: 100eb14db;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb1294(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 auStack_160 [10];
  byte abStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_50;
  
  lVar4 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)auStack_160 + lVar1);
  FUN_100eb64a8(param_1,puVar8);
  puVar5 = puVar8;
  func_0x000107c614c4(puVar8,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 == 0) {
    uStack_d8 = *(undefined8 *)((long)auStack_160 + lVar1 + 0x28U);
    uStack_e0 = *(undefined8 *)((long)auStack_160 + lVar1 + 0x20U);
    uStack_c8 = *(undefined8 *)((long)auStack_160 + lVar1 + 0x38U);
    uStack_d0 = *(undefined8 *)((long)auStack_160 + lVar1 + 0x30U);
    uStack_b8 = *(undefined8 *)((long)auStack_160 + lVar1 + 0x48U);
    uStack_c0 = *(undefined8 *)((long)auStack_160 + lVar1 + 0x40U);
    bStack_b0 = abStack_110[lVar1];
    uStack_f8 = *(undefined8 *)((long)auStack_160 + lVar1 + 8U);
    uStack_100 = *puVar8;
    uStack_e8 = *(undefined8 *)((long)auStack_160 + lVar1 + 0x18U);
    puStack_f0 = *(undefined8 **)((long)auStack_160 + lVar1 + 0x10U);
    func_0x0001000a8868(unaff_x20 + _DAT_112d47468,
                        *(undefined8 *)(unaff_x20 + _DAT_112d47468 + 0x18));
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    uStack_88 = uStack_e8;
    puStack_90 = puStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    bStack_50 = bStack_b0 & 1;
    uStack_58 = uStack_b8;
    uStack_60 = uStack_c0;
    func_0x000100eb6784(&uStack_100,auStack_160 + 1,0x112d477c8,&UNK_10d90e800);
    FUN_100ea7d10(&uStack_a0);
    func_0x000100eb6744(&uStack_100,0x112d477c8,&UNK_10d90e800);
    func_0x000100eb6744(&uStack_100,0x112d477c8,&UNK_10d90e800);
  }
  else if (iVar3 == 1) {
    uVar9 = *puVar8;
    func_0x0001000a8868(unaff_x20 + _DAT_112d47468,
                        *(undefined8 *)(unaff_x20 + _DAT_112d47468 + 0x18));
    bStack_50 = 0x40;
    uStack_a0 = uVar9;
    func_0x000107c61174(uVar9);
    FUN_100ea7d10(&uStack_a0);
    func_0x000107c61170(uVar9);
    FUN_100eb14dc(uVar9);
    func_0x000107c61170(uVar9);
  }
  else if (iVar3 == 7) {
    plVar6 = (long *)(unaff_x20 + _DAT_112d47468);
    func_0x0001000a8868(plVar6,plVar6[3]);
    uVar9 = *(undefined8 *)(*plVar6 + 0x18);
    auStack_160[1] = 0;
    auStack_160[2] = 0xe000000000000000;
    puStack_f0 = auStack_160 + 1;
    puStack_90 = puStack_f0;
    func_0x00010486ddec(FUN_100eb67cc,&uStack_a0,0x100eb67d4,&uStack_100);
    uVar2 = auStack_160[2];
    uVar7 = auStack_160[1];
    func_0x000107c5fadc(auStack_160[1],auStack_160[2]);
    func_0x000107c6142c(uVar2);
    func_0x000104cf6250(uVar9,uVar7,1);
    func_0x000107c61170(uVar7);
  }
  else {
    FUN_100eb2824(puVar8,FUN_100eb20b0);
  }
  return;
}



/* Entry: 100eb14dc; end: 100eb181b;  */

/* WARNING: Possible PIC construction at 0x000100eb155c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb15a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb17ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eb15ac) */
/* WARNING: Removing unreachable block (ram,0x000100eb1560) */
/* WARNING: Removing unreachable block (ram,0x000100eb158c) */
/* WARNING: Removing unreachable block (ram,0x000100eb1564) */
/* WARNING: Removing unreachable block (ram,0x000100eb17f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb14dc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d47460);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar1 = _DAT_112d47478;
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x00010486e420(0);
    func_0x00010486e314();
    func_0x000107c60118(*(undefined8 *)(unaff_x20 + lVar1),uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 100eb181c; end: 100eb1887;  */

/* WARNING: Possible PIC construction at 0x000100eb1840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb1870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eb1844) */
/* WARNING: Removing unreachable block (ram,0x000100eb1874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb181c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + _DAT_112d47450);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112d47458));
  return;
}



/* Entry: 100eb1888; end: 100eb1927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb1888(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  func_0x000103dbf870();
  lVar1 = _DAT_112d47450;
  plVar2 = param_1;
  func_0x000107c6157c();
  func_0x0001000834e4((long)plVar2 + lVar1);
  func_0x000107c61170(*(undefined8 *)((long)param_1 + _DAT_112d47458));
  func_0x000107c61170(*(undefined8 *)((long)param_1 + _DAT_112d47460));
  func_0x0001000834e4((long)param_1 + _DAT_112d47468);
  func_0x000107c61170(*(undefined8 *)((long)param_1 + _DAT_112d47470));
  uVar3 = *(undefined8 *)((long)param_1 + _DAT_112d47478);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 100eb1928; end: 100eb193b;  */

void FUN_100eb1928(undefined8 param_1)

{
  if (lRam0000000112d474a8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e616ffc);
  return;
}



/* Entry: 100eb193c; end: 100eb198f;  */

void FUN_100eb193c(long param_1)

{
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  puStack_40 = &UNK_10d90e698;
  puStack_28 = &UNK_10d90e698;
  puStack_30 = puStack_38;
  puStack_20 = puStack_38;
  puStack_18 = puStack_38;
  func_0x000107c61524(param_1,0x100,6,&puStack_40,param_1 + 0xd8);
  return;
}



/* Entry: 100eb1990; end: 100eb1baf;  */

long * FUN_100eb1990(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  
  lVar16 = *(long *)(param_3 + -8);
  uVar10 = *(uint *)(lVar16 + 0x50);
  if ((uVar10 >> 0x11 & 1) == 0) {
    plVar13 = param_2;
    func_0x000107c614c4(param_2,param_3);
    iVar12 = (int)plVar13;
    if (iVar12 < 3) {
      if (iVar12 == 0) {
        lVar16 = *param_2;
        lVar5 = param_2[1];
        lVar1 = param_2[2];
        lVar6 = param_2[3];
        lVar2 = param_2[4];
        lVar7 = param_2[5];
        lVar3 = param_2[6];
        lVar8 = param_2[7];
        lVar4 = param_2[8];
        lVar9 = param_2[9];
        lVar11 = param_2[10];
        FUN_100eb1c84(lVar16,lVar5,lVar1,lVar6,lVar2,lVar7,lVar3,lVar8,lVar4,lVar9,(char)lVar11);
        *param_1 = lVar16;
        param_1[1] = lVar5;
        param_1[2] = lVar1;
        param_1[3] = lVar6;
        param_1[4] = lVar2;
        param_1[5] = lVar7;
        param_1[6] = lVar3;
        param_1[7] = lVar8;
        param_1[8] = lVar4;
        param_1[9] = lVar9;
        *(char *)(param_1 + 10) = (char)lVar11;
        uVar14 = 0;
      }
      else if (iVar12 == 1) {
        *param_1 = *param_2;
        func_0x000107c61174();
        uVar14 = 1;
      }
      else {
        if (iVar12 != 2) {
LAB_100eb1b14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar16 + 0x40));
          return param_1;
        }
        *param_1 = *param_2;
        func_0x000107c61174();
        uVar14 = 2;
      }
    }
    else if (iVar12 == 3) {
      lVar16 = param_2[1];
      *param_1 = *param_2;
      *(char *)(param_1 + 1) = (char)lVar16;
      func_0x000107c61174();
      uVar14 = 3;
    }
    else if (iVar12 == 4) {
      lVar16 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar16 + -8) + 0x10))(param_1,param_2,lVar16);
      uVar14 = 4;
    }
    else {
      if (iVar12 != 5) goto LAB_100eb1b14;
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar14 = 5;
    }
    func_0x000107c6159c(param_1,param_3,uVar14);
  }
  else {
    lVar16 = *param_2;
    *param_1 = lVar16;
    uVar15 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar16 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 100eb1bb0; end: 100eb1c83;  */

void FUN_100eb1bb0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar2;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      FUN_100eb1c84(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                    param_1[7],param_1[8],param_1[9],*(undefined1 *)(param_1 + 10));
    }
    else if ((iVar1 == 1) || (iVar1 == 2)) goto LAB_100eb1c00;
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      lVar3 = 0;
      func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000100eb1c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
      return;
    }
    if (iVar1 != 5) {
      return;
    }
  }
LAB_100eb1c00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 100eb1c84; end: 100eb1ca7;  */

void FUN_100eb1c84(void)

{
  char in_stack_00000010;
  code *UNRECOVERED_JUMPTABLE;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (in_stack_00000010 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000100eb1c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100eb1ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100eb1ca8; end: 100eb20af;  */

undefined8 * FUN_100eb1ca8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar12 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar11 = (int)puVar12;
  if (iVar11 < 3) {
    if (iVar11 == 0) {
      uVar14 = *param_2;
      uVar5 = param_2[1];
      uVar1 = param_2[2];
      uVar6 = param_2[3];
      uVar2 = param_2[4];
      uVar7 = param_2[5];
      uVar3 = param_2[6];
      uVar8 = param_2[7];
      uVar4 = param_2[8];
      uVar9 = param_2[9];
      uVar10 = *(undefined1 *)(param_2 + 10);
      FUN_100eb1c84(uVar14,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar10);
      *param_1 = uVar14;
      param_1[1] = uVar5;
      param_1[2] = uVar1;
      param_1[3] = uVar6;
      param_1[4] = uVar2;
      param_1[5] = uVar7;
      param_1[6] = uVar3;
      param_1[7] = uVar8;
      param_1[8] = uVar4;
      param_1[9] = uVar9;
      *(undefined1 *)(param_1 + 10) = uVar10;
      uVar14 = 0;
    }
    else if (iVar11 == 1) {
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar14 = 1;
    }
    else {
      if (iVar11 != 2) {
LAB_100eb1e00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)
                  (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
        return param_1;
      }
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar14 = 2;
    }
  }
  else if (iVar11 == 3) {
    uVar10 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar10;
    func_0x000107c61174();
    uVar14 = 3;
  }
  else if (iVar11 == 4) {
    lVar13 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar13 + -8) + 0x10))(param_1,param_2,lVar13);
    uVar14 = 4;
  }
  else {
    if (iVar11 != 5) goto LAB_100eb1e00;
    *param_1 = *param_2;
    func_0x000107c61174();
    uVar14 = 5;
  }
  func_0x000107c6159c(param_1,param_3,uVar14);
  return param_1;
}



/* Entry: 100eb20b0; end: 100eb20d3;  */

void FUN_100eb20b0(undefined8 param_1)

{
  if (lRam0000000112d47650 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e617084);
  return;
}



/* Entry: 100eb20d4; end: 100eb215b;  */

void FUN_100eb20d4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  puStack_50 = &UNK_10d90e6c8;
  puStack_38 = &UNK_10d90e6e0;
  lVar2 = 0x13f;
  puStack_48 = puVar1;
  puStack_40 = puVar1;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    func_0x000107c61528(param_1,0x100,6,&puStack_50);
  }
  return;
}



/* Entry: 100eb215c; end: 100eb2363;  */

long * FUN_100eb215c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar8 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    func_0x000107c614c4(param_2,param_3);
    iVar3 = (int)plVar4;
    if (iVar3 < 4) {
      if (iVar3 < 2) {
        if (iVar3 == 0) {
          *param_1 = *param_2;
          func_0x000107c61174();
          uVar5 = 0;
        }
        else {
          if (iVar3 != 1) {
LAB_100eb2344:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar8 + 0x40));
            return param_1;
          }
          *param_1 = *param_2;
          func_0x000107c61174();
          uVar5 = 1;
        }
      }
      else if (iVar3 == 2) {
        *param_1 = *param_2;
        func_0x000107c61174();
        uVar5 = 2;
      }
      else {
        if (iVar3 != 3) goto LAB_100eb2344;
        *param_1 = *param_2;
        func_0x000107c61174();
        uVar5 = 3;
      }
    }
    else if (iVar3 < 6) {
      if (iVar3 == 4) {
        lVar8 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
        uVar5 = 4;
      }
      else {
        if (iVar3 != 5) goto LAB_100eb2344;
        lVar8 = param_2[1];
        *param_1 = *param_2;
        lVar7 = param_2[2];
        func_0x000107c61174();
        func_0x00010006c00c(lVar8,lVar7);
        param_1[1] = lVar8;
        param_1[2] = lVar7;
        uVar5 = 5;
      }
    }
    else if (iVar3 == 6) {
      lVar8 = *param_2;
      lVar7 = param_2[1];
      lVar2 = param_2[2];
      FUN_100ea9108(lVar8,lVar7,(char)lVar2);
      *param_1 = lVar8;
      param_1[1] = lVar7;
      *(char *)(param_1 + 2) = (char)lVar2;
      uVar5 = 6;
    }
    else {
      if (iVar3 != 7) goto LAB_100eb2344;
      lVar8 = *param_2;
      lVar7 = param_2[1];
      FUN_100eafae8(lVar8,lVar7);
      *param_1 = lVar8;
      param_1[1] = lVar7;
      uVar5 = 7;
    }
    func_0x000107c6159c(param_1,param_3,uVar5);
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



/* Entry: 100eb2364; end: 100eb244b;  */

/* WARNING: Possible PIC construction at 0x000100eb23b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eaf8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eb23b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100eaf8ec) */

void FUN_100eb2364(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  puVar3 = param_1;
  func_0x000107c614c4();
  iVar2 = (int)puVar3;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if ((iVar2 != 0) && (iVar2 != 1)) {
        return;
      }
    }
    else if ((iVar2 != 2) && (iVar2 != 3)) {
      return;
    }
    uVar4 = *param_1;
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      lVar5 = 0;
      func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000100eb2428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar5 + -8) + 8))(param_1,lVar5);
      return;
    }
    if (iVar2 != 5) {
      return;
    }
    uVar4 = *param_1;
  }
  else {
    if (iVar2 == 6) {
      uVar4 = *param_1;
      bVar1 = *(byte *)(param_1 + 2);
      if (bVar1 < 3) {
        if (bVar1 == 1) goto code_r0x000107c61170;
        if (bVar1 != 2) {
          return;
        }
      }
      else if (((bVar1 != 3) && (bVar1 != 4)) && (bVar1 != 5)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
      return;
    }
    if (iVar2 != 7) {
      return;
    }
    uVar4 = *param_1;
    uVar6 = (uint)((ulong)param_1[1] >> 0x3e);
    if ((uVar6 != 1) && (uVar6 != 0)) {
      return;
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 100eb244c; end: 100eb2823;  */

undefined8 * FUN_100eb244c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar2 = (int)puVar3;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        *param_1 = *param_2;
        func_0x000107c61174();
        uVar5 = 0;
      }
      else {
        if (iVar2 != 1) {
LAB_100eb2608:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)
                    (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
          return param_1;
        }
        *param_1 = *param_2;
        func_0x000107c61174();
        uVar5 = 1;
      }
    }
    else if (iVar2 == 2) {
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar5 = 2;
    }
    else {
      if (iVar2 != 3) goto LAB_100eb2608;
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar5 = 3;
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      uVar5 = 4;
    }
    else {
      if (iVar2 != 5) goto LAB_100eb2608;
      uVar5 = param_2[1];
      *param_1 = *param_2;
      uVar6 = param_2[2];
      func_0x000107c61174();
      func_0x00010006c00c(uVar5,uVar6);
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      uVar5 = 5;
    }
  }
  else if (iVar2 == 6) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar1 = *(undefined1 *)(param_2 + 2);
    FUN_100ea9108(uVar5,uVar6,uVar1);
    *param_1 = uVar5;
    param_1[1] = uVar6;
    *(undefined1 *)(param_1 + 2) = uVar1;
    uVar5 = 6;
  }
  else {
    if (iVar2 != 7) goto LAB_100eb2608;
    uVar5 = *param_2;
    uVar6 = param_2[1];
    FUN_100eafae8(uVar5,uVar6);
    *param_1 = uVar5;
    param_1[1] = uVar6;
    uVar5 = 7;
  }
  func_0x000107c6159c(param_1,param_3,uVar5);
  return param_1;
}



/* Entry: 100eb2824; end: 100eb285f;  */

undefined8 FUN_100eb2824(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100eb2860; end: 100eb2873;  */

void FUN_100eb2860(undefined8 param_1)

{
  if (lRam0000000112d476f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6170ac);
  return;
}



/* Entry: 100eb2874; end: 100eb2907;  */

undefined8 FUN_100eb2874(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar1 == 4) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    func_0x000107c6159c(param_1,param_3,4);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  return param_1;
}



/* Entry: 100eb2908; end: 100eb2913;  */

long FUN_100eb2908(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_1 != param_2) {
    FUN_100eb2824(param_1,FUN_100eb2860);
    lVar1 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)lVar1 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    func_0x000107c6159c(param_1,param_3,4);
  }
  return param_1;
}



/* Entry: 100eb2914; end: 100eb29bb;  */

long FUN_100eb2914(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_1 != param_2) {
    FUN_100eb2824(param_1,param_4);
    lVar1 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)lVar1 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    func_0x000107c6159c(param_1,param_3,4);
  }
  return param_1;
}



/* Entry: 100eb29bc; end: 100eb29bf;  */

void FUN_100eb29bc(void)

{
  return;
}



/* Entry: 100eb29c0; end: 100eb2a53;  */

void FUN_100eb29c0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  puStack_58 = puStack_60;
  puStack_50 = puStack_60;
  puStack_48 = puStack_60;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10d90e700;
    puStack_30 = &UNK_10d90e718;
    puStack_28 = &UNK_10d90e730;
    func_0x000107c61528(param_1,0x100,8,&puStack_60);
  }
  return;
}



/* Entry: 100eb2a54; end: 100eb2d2b;  */

long * FUN_100eb2a54(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) != 0) {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar14 = (ulong)uVar8 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar11 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  lVar11 = 0;
  FUN_100eb2860();
  plVar12 = param_2;
  func_0x000107c614c4(param_2,lVar11);
  iVar10 = (int)plVar12;
  if (iVar10 < 4) {
    if (iVar10 < 2) {
      if (iVar10 == 0) {
        *param_1 = *param_2;
        func_0x000107c61174();
        func_0x000107c6159c(param_1,lVar11,0);
        goto LAB_100eb2c70;
      }
      if (iVar10 == 1) {
        *param_1 = *param_2;
        func_0x000107c61174();
        func_0x000107c6159c(param_1,lVar11,1);
        goto LAB_100eb2c70;
      }
    }
    else {
      if (iVar10 == 2) {
        *param_1 = *param_2;
        func_0x000107c61174();
        func_0x000107c6159c(param_1,lVar11,2);
        goto LAB_100eb2c70;
      }
      if (iVar10 == 3) {
        *param_1 = *param_2;
        func_0x000107c61174();
        func_0x000107c6159c(param_1,lVar11,3);
        goto LAB_100eb2c70;
      }
    }
  }
  else if (iVar10 < 6) {
    if (iVar10 == 4) {
      lVar13 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar13 + -8) + 0x10))(param_1,param_2,lVar13);
      func_0x000107c6159c(param_1,lVar11,4);
      goto LAB_100eb2c70;
    }
    if (iVar10 == 5) {
      lVar13 = param_2[1];
      *param_1 = *param_2;
      lVar16 = param_2[2];
      func_0x000107c61174();
      func_0x00010006c00c(lVar13,lVar16);
      param_1[1] = lVar13;
      param_1[2] = lVar16;
      func_0x000107c6159c(param_1,lVar11,5);
      goto LAB_100eb2c70;
    }
  }
  else {
    if (iVar10 == 6) {
      lVar13 = *param_2;
      lVar16 = param_2[1];
      lVar9 = param_2[2];
      FUN_100ea9108(lVar13,lVar16,(char)lVar9);
      *param_1 = lVar13;
      param_1[1] = lVar16;
      *(char *)(param_1 + 2) = (char)lVar9;
      func_0x000107c6159c(param_1,lVar11,6);
      goto LAB_100eb2c70;
    }
    if (iVar10 == 7) {
      lVar13 = *param_2;
      lVar16 = param_2[1];
      FUN_100eafae8(lVar13,lVar16);
      *param_1 = lVar13;
      param_1[1] = lVar16;
      func_0x000107c6159c(param_1,lVar11,7);
      goto LAB_100eb2c70;
    }
  }
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
LAB_100eb2c70:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar14 = puVar2[1];
  if (((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar17 = puVar2[4];
    uVar19 = puVar2[7];
    uVar18 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar17;
    puVar1[7] = uVar19;
    puVar1[6] = uVar18;
    uVar17 = puVar2[8];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar17;
    uVar19 = *puVar2;
    uVar18 = puVar2[3];
    uVar17 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar19;
    puVar1[3] = uVar18;
    puVar1[2] = uVar17;
  }
  else {
    uVar15 = *puVar2;
    uVar17 = puVar2[2];
    uVar4 = puVar2[3];
    uVar18 = puVar2[4];
    uVar5 = puVar2[5];
    uVar19 = puVar2[6];
    uVar6 = puVar2[7];
    uVar3 = puVar2[8];
    uVar7 = puVar2[9];
    FUN_100ea908c(uVar15,uVar14,uVar17,uVar4,uVar18,uVar5,uVar19,uVar6,uVar3,uVar7);
    *puVar1 = uVar15;
    puVar1[1] = uVar14;
    puVar1[2] = uVar17;
    puVar1[3] = uVar4;
    puVar1[4] = uVar18;
    puVar1[5] = uVar5;
    puVar1[6] = uVar19;
    puVar1[7] = uVar6;
    puVar1[8] = uVar3;
    puVar1[9] = uVar7;
  }
  return param_1;
}



/* Entry: 100eb2d2c; end: 100eb2e4b;  */

void FUN_100eb2d2c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = 0;
  FUN_100eb2860(0);
  puVar3 = param_1;
  func_0x000107c614c4(param_1,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if ((iVar1 != 0) && (iVar1 != 1)) goto LAB_100eb2dbc;
    }
    else if ((iVar1 != 2) && (iVar1 != 3)) goto LAB_100eb2dbc;
    func_0x000107c61170(*param_1);
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
    }
    else if (iVar1 == 5) {
      func_0x000107c61170(*param_1);
      func_0x00010006c090(param_1[1],param_1[2]);
    }
  }
  else if (iVar1 == 6) {
    FUN_100ea9290(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  }
  else if (iVar1 == 7) {
    func_0x000100eaf8c8(*param_1,param_1[1]);
  }
LAB_100eb2dbc:
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x14));
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_100ea9214(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9]);
  }
  return;
}



/* Entry: 100eb2e4c; end: 100eb345f;  */

undefined8 * FUN_100eb2e4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar8 = 0;
  FUN_100eb2860();
  puVar9 = param_2;
  func_0x000107c614c4(param_2,lVar8);
  iVar7 = (int)puVar9;
  if (iVar7 < 4) {
    if (iVar7 < 2) {
      if (iVar7 == 0) {
        *param_1 = *param_2;
        func_0x000107c61174();
        func_0x000107c6159c(param_1,lVar8,0);
        goto LAB_100eb303c;
      }
      if (iVar7 == 1) {
        *param_1 = *param_2;
        func_0x000107c61174();
        func_0x000107c6159c(param_1,lVar8,1);
        goto LAB_100eb303c;
      }
    }
    else {
      if (iVar7 == 2) {
        *param_1 = *param_2;
        func_0x000107c61174();
        func_0x000107c6159c(param_1,lVar8,2);
        goto LAB_100eb303c;
      }
      if (iVar7 == 3) {
        *param_1 = *param_2;
        func_0x000107c61174();
        func_0x000107c6159c(param_1,lVar8,3);
        goto LAB_100eb303c;
      }
    }
  }
  else if (iVar7 < 6) {
    if (iVar7 == 4) {
      lVar10 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar10 + -8) + 0x10))(param_1,param_2,lVar10);
      func_0x000107c6159c(param_1,lVar8,4);
      goto LAB_100eb303c;
    }
    if (iVar7 == 5) {
      uVar14 = param_2[1];
      *param_1 = *param_2;
      uVar13 = param_2[2];
      func_0x000107c61174();
      func_0x00010006c00c(uVar14,uVar13);
      param_1[1] = uVar14;
      param_1[2] = uVar13;
      func_0x000107c6159c(param_1,lVar8,5);
      goto LAB_100eb303c;
    }
  }
  else {
    if (iVar7 == 6) {
      uVar14 = *param_2;
      uVar13 = param_2[1];
      uVar6 = *(undefined1 *)(param_2 + 2);
      FUN_100ea9108(uVar14,uVar13,uVar6);
      *param_1 = uVar14;
      param_1[1] = uVar13;
      *(undefined1 *)(param_1 + 2) = uVar6;
      func_0x000107c6159c(param_1,lVar8,6);
      goto LAB_100eb303c;
    }
    if (iVar7 == 7) {
      uVar14 = *param_2;
      uVar13 = param_2[1];
      FUN_100eafae8(uVar14,uVar13);
      *param_1 = uVar14;
      param_1[1] = uVar13;
      func_0x000107c6159c(param_1,lVar8,7);
      goto LAB_100eb303c;
    }
  }
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
LAB_100eb303c:
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar11 = param_2[1];
  if (((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar14 = param_2[4];
    uVar15 = param_2[7];
    uVar13 = param_2[6];
    puVar9[5] = param_2[5];
    puVar9[4] = uVar14;
    puVar9[7] = uVar15;
    puVar9[6] = uVar13;
    uVar14 = param_2[8];
    puVar9[9] = param_2[9];
    puVar9[8] = uVar14;
    uVar15 = *param_2;
    uVar13 = param_2[3];
    uVar14 = param_2[2];
    puVar9[1] = param_2[1];
    *puVar9 = uVar15;
    puVar9[3] = uVar13;
    puVar9[2] = uVar14;
  }
  else {
    uVar12 = *param_2;
    uVar14 = param_2[2];
    uVar2 = param_2[3];
    uVar13 = param_2[4];
    uVar3 = param_2[5];
    uVar15 = param_2[6];
    uVar4 = param_2[7];
    uVar1 = param_2[8];
    uVar5 = param_2[9];
    FUN_100ea908c(uVar12,uVar11,uVar14,uVar2,uVar13,uVar3,uVar15,uVar4,uVar1,uVar5);
    *puVar9 = uVar12;
    puVar9[1] = uVar11;
    puVar9[2] = uVar14;
    puVar9[3] = uVar2;
    puVar9[4] = uVar13;
    puVar9[5] = uVar3;
    puVar9[6] = uVar15;
    puVar9[7] = uVar4;
    puVar9[8] = uVar1;
    puVar9[9] = uVar5;
  }
  return param_1;
}



/* Entry: 100eb3460; end: 100eb3493;  */

undefined8 FUN_100eb3460(undefined8 param_1)

{
  FUN_100eaafd0();
  return param_1;
}



/* Entry: 100eb3494; end: 100eb3687;  */

long FUN_100eb3494(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = 0;
  FUN_100eb2860();
  lVar4 = param_2;
  func_0x000107c614c4(param_2,lVar3);
  if ((int)lVar4 == 4) {
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    func_0x000107c6159c(param_1,lVar3,4);
  }
  else {
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = puVar2[4];
  uVar7 = puVar2[7];
  uVar6 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar5;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  uVar5 = puVar2[8];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar5;
  uVar7 = *puVar2;
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  return param_1;
}



/* Entry: 100eb3688; end: 100eb36b3;  */

void FUN_100eb3688(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 100eb36b4; end: 100eb36e3;  */

void FUN_100eb36b4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 100eb36e4; end: 100eb3753;  */

void FUN_100eb36e4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100eb2860();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d90e768;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 100eb3754; end: 100eb38b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100eb3754(undefined8 *param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 auStack_88 [9];
  undefined1 auStack_40 [16];
  
  lVar1 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined8 *)((long)&uStack_90 + lVar1);
  uVar3 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  *(undefined8 *)((long)auStack_88 + lVar1 + 0x20U) = param_1[5];
  *(undefined8 *)((long)auStack_88 + lVar1 + 0x18U) = uVar3;
  *(undefined8 *)((long)auStack_88 + lVar1 + 0x30U) = uVar5;
  *(undefined8 *)((long)auStack_88 + lVar1 + 0x28U) = uVar4;
  uVar3 = param_1[8];
  *(undefined8 *)((long)auStack_88 + lVar1 + 0x40U) = param_1[9];
  *(undefined8 *)((long)auStack_88 + lVar1 + 0x38U) = uVar3;
  auStack_40[lVar1] = *(undefined1 *)(param_1 + 10);
  uVar3 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  *(undefined8 *)((long)auStack_88 + lVar1) = param_1[1];
  *puVar2 = uVar3;
  *(undefined8 *)((long)auStack_88 + lVar1 + 0x10U) = uVar5;
  *(undefined8 *)((long)auStack_88 + lVar1 + 8U) = uVar4;
  func_0x000107c6159c(puVar2);
  func_0x000100eb6784(param_1,auStack_88,0x112d477c8,&UNK_10d90e800);
  func_0x000100087c34(puVar2);
  FUN_100eb2824(puVar2,FUN_100eb20b0);
  return;
}



/* Entry: 100eb38b8; end: 100eb395f;  */

void FUN_100eb38b8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 *puVar2;
  
  lVar1 = 0;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar1);
  *puVar2 = param_1;
  (&stack0xffffffffffffffc8)[lVar1] = param_3;
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x000100087c34(puVar2);
  FUN_100eb2824(puVar2,FUN_100eb20b0);
  return;
}



/* Entry: 100eb3960; end: 100eb39ab;  */

void FUN_100eb3960(long param_1,undefined8 param_2)

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



/* Entry: 100eb39ac; end: 100eb3c27;  */

void FUN_100eb39ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_1f0 [2];
  undefined8 auStack_1e0 [11];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000100eb36a0();
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)auStack_1f0 + lVar2);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x14));
  uStack_a8 = puVar1[1];
  uStack_b0 = *puVar1;
  uStack_98 = puVar1[3];
  uStack_a0 = puVar1[2];
  uStack_88 = puVar1[5];
  uStack_90 = puVar1[4];
  uStack_78 = puVar1[7];
  uStack_80 = puVar1[6];
  uStack_68 = puVar1[9];
  uStack_70 = puVar1[8];
  if (((uStack_a8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    *puVar6 = 0;
    *(undefined8 *)((long)auStack_1f0 + lVar2 + 8) = 0;
    *(undefined1 *)((long)auStack_1e0 + lVar2) = 6;
    uVar5 = 0;
    FUN_100eb2860(0);
    func_0x000107c6159c(puVar6,uVar5,6);
    uVar7 = puVar1[5];
    uVar5 = puVar1[4];
    uVar9 = puVar1[7];
    uVar8 = puVar1[6];
    uVar11 = puVar1[9];
    uVar10 = puVar1[8];
    uVar15 = puVar1[1];
    uVar14 = *puVar1;
    uVar13 = puVar1[3];
    uVar12 = puVar1[2];
    puVar1 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x14));
    uStack_150 = uVar14;
    uStack_148 = uVar15;
    uStack_140 = uVar12;
    uStack_138 = uVar13;
    uStack_130 = uVar5;
    uStack_128 = uVar7;
    uStack_120 = uVar8;
    uStack_118 = uVar9;
    uStack_110 = uVar10;
    uStack_108 = uVar11;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[9] = uVar11;
    puVar1[8] = uVar10;
    puVar1[3] = uVar13;
    puVar1[2] = uVar12;
    puVar1[5] = uVar7;
    puVar1[4] = uVar5;
    puVar1[1] = uVar15;
    *puVar1 = uVar14;
    uStack_100 = uVar14;
    uStack_f8 = uVar15;
    uStack_f0 = uVar12;
    uStack_e8 = uVar13;
    uStack_e0 = uVar5;
    uStack_d8 = uVar7;
    uStack_d0 = uVar8;
    uStack_c8 = uVar9;
    uStack_c0 = uVar10;
    uStack_b8 = uVar11;
    func_0x000100eb6784(&uStack_150,auStack_1e0 + 8,0x112d472c0,&UNK_10d90e810);
    func_0x000100eb6744(&uStack_100,0x112d472c0,&UNK_10d90e810);
    uVar8 = uStack_118;
    uVar7 = uStack_120;
    uVar5 = uStack_130;
    puVar1[5] = uStack_128;
    puVar1[4] = uVar5;
    puVar1[7] = uVar8;
    puVar1[6] = uVar7;
    uVar5 = uStack_110;
    puVar1[9] = uStack_108;
    puVar1[8] = uVar5;
    uVar8 = uStack_138;
    uVar7 = uStack_140;
    uVar5 = uStack_150;
    puVar1[1] = uStack_148;
    *puVar1 = uVar5;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
  }
  else {
    uStack_d8 = puVar1[5];
    uStack_e0 = puVar1[4];
    uStack_c8 = puVar1[7];
    uStack_d0 = puVar1[6];
    uStack_b8 = puVar1[9];
    uStack_c0 = puVar1[8];
    uStack_f8 = puVar1[1];
    uStack_100 = *puVar1;
    uStack_e8 = puVar1[3];
    uStack_f0 = puVar1[2];
    func_0x000100eb6784(&uStack_b0,&uStack_150,0x112d472c0,&UNK_10d90e810);
    func_0x000107c61174();
    uVar5 = param_1;
    FUN_100eab404();
    func_0x000100eb6744(&uStack_b0,0x112d472c0,&UNK_10d90e810);
    *puVar6 = param_1;
    *(undefined8 *)((long)auStack_1f0 + lVar2 + 8) = uVar5;
    uVar5 = 0;
    FUN_100eb2860(0);
    func_0x000107c6159c(puVar6,uVar5,7);
    uStack_178 = puVar1[5];
    uStack_180 = puVar1[4];
    uStack_168 = puVar1[7];
    uStack_170 = puVar1[6];
    uStack_158 = puVar1[9];
    uStack_160 = puVar1[8];
    auStack_1e0[9] = puVar1[1];
    auStack_1e0[8] = *puVar1;
    uStack_188 = puVar1[3];
    auStack_1e0[10] = puVar1[2];
    puVar1 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x14));
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0x3000000000000000;
    *puVar1 = 0;
    uStack_118 = puVar1[7];
    uStack_120 = puVar1[6];
    uStack_108 = puVar1[9];
    uStack_110 = puVar1[8];
    uStack_138 = puVar1[3];
    uStack_140 = puVar1[2];
    uStack_128 = puVar1[5];
    uStack_130 = puVar1[4];
    uStack_148 = puVar1[1];
    uStack_150 = *puVar1;
    func_0x000100eb6784(auStack_1e0 + 8,auStack_1f0,0x112d472c0,&UNK_10d90e810);
    func_0x000100eb6744(&uStack_150,0x112d472c0,&UNK_10d90e810);
    uVar8 = uStack_168;
    uVar7 = uStack_170;
    uVar5 = uStack_180;
    puVar1[5] = uStack_178;
    puVar1[4] = uVar5;
    puVar1[7] = uVar8;
    puVar1[6] = uVar7;
    uVar5 = uStack_160;
    puVar1[9] = uStack_158;
    puVar1[8] = uVar5;
    uVar8 = uStack_188;
    uVar7 = auStack_1e0[10];
    uVar5 = auStack_1e0[8];
    puVar1[1] = auStack_1e0[9];
    *puVar1 = uVar5;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
  }
  FUN_100eb6df0(puVar6,param_3);
  return;
}



/* Entry: 100eb3c28; end: 100eb3e23;  */

void FUN_100eb3c28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 auStack_140 [2];
  undefined8 auStack_130 [11];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0;
  uVar5 = param_2;
  func_0x000100eb36a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)auStack_140 + lVar1);
  uVar4 = param_1;
  func_0x000107c4d564();
  if ((int)uVar4 == 0) {
    func_0x000107c4cd90();
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    *puVar6 = uVar4;
    *(undefined8 *)((long)auStack_140 + lVar1 + 8) = uVar5;
    *(undefined1 *)((long)auStack_130 + lVar1) = 5;
    uVar4 = 0;
    FUN_100eb2860(0);
    func_0x000107c6159c(puVar6,uVar4,6);
    puVar7 = (undefined8 *)(param_3 + *(int *)(lVar3 + 0x14));
    uStack_c8 = puVar7[5];
    uStack_d0 = puVar7[4];
    uStack_b8 = puVar7[7];
    uStack_c0 = puVar7[6];
    uStack_a8 = puVar7[9];
    uStack_b0 = puVar7[8];
    auStack_130[9] = puVar7[1];
    auStack_130[8] = *puVar7;
    uStack_d8 = puVar7[3];
    auStack_130[10] = puVar7[2];
    puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x14));
    puVar7[1] = 0x3000000000000000;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    uStack_98 = puVar7[1];
    uStack_a0 = *puVar7;
    uStack_88 = puVar7[3];
    uStack_90 = puVar7[2];
    uStack_68 = puVar7[7];
    uStack_70 = puVar7[6];
    uStack_58 = puVar7[9];
    uStack_60 = puVar7[8];
    uStack_78 = puVar7[5];
    uStack_80 = puVar7[4];
  }
  else {
    *puVar6 = param_1;
    uVar4 = 0;
    FUN_100eb2860(0);
    func_0x000107c6159c(puVar6,uVar4,1);
    puVar7 = (undefined8 *)(param_3 + *(int *)(lVar3 + 0x14));
    uStack_c8 = puVar7[5];
    uStack_d0 = puVar7[4];
    uStack_b8 = puVar7[7];
    uStack_c0 = puVar7[6];
    uStack_a8 = puVar7[9];
    uStack_b0 = puVar7[8];
    auStack_130[9] = puVar7[1];
    auStack_130[8] = *puVar7;
    uStack_d8 = puVar7[3];
    auStack_130[10] = puVar7[2];
    puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x14));
    puVar7[1] = 0x3000000000000000;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    uStack_98 = puVar7[1];
    uStack_a0 = *puVar7;
    uStack_88 = puVar7[3];
    uStack_90 = puVar7[2];
    uStack_68 = puVar7[7];
    uStack_70 = puVar7[6];
    uStack_58 = puVar7[9];
    uStack_60 = puVar7[8];
    uStack_78 = puVar7[5];
    uStack_80 = puVar7[4];
    func_0x000107c61174(param_1);
  }
  func_0x000100eb6784(auStack_130 + 8,auStack_140,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_a0,0x112d472c0,&UNK_10d90e810);
  uVar2 = uStack_b8;
  uVar5 = uStack_c0;
  uVar4 = uStack_d0;
  puVar7[5] = uStack_c8;
  puVar7[4] = uVar4;
  puVar7[7] = uVar2;
  puVar7[6] = uVar5;
  uVar4 = uStack_b0;
  puVar7[9] = uStack_a8;
  puVar7[8] = uVar4;
  uVar2 = uStack_d8;
  uVar5 = auStack_130[10];
  uVar4 = auStack_130[8];
  puVar7[1] = auStack_130[9];
  *puVar7 = uVar4;
  puVar7[3] = uVar2;
  puVar7[2] = uVar5;
  FUN_100eb6df0(puVar6,param_2);
  return;
}



/* Entry: 100eb3e24; end: 100eb4283;  */

void FUN_100eb3e24(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long *plVar6;
  undefined8 *puVar7;
  long alStack_150 [2];
  undefined8 auStack_140 [11];
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
  
  lVar4 = 0;
  func_0x000100eb36a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar6 = (long *)((long)alStack_150 + lVar1);
  if (((param_3 & 1) == 0) || (param_4 == 0)) {
    *plVar6 = param_1;
    *(undefined8 *)((long)alStack_150 + lVar1 + 8) = param_2;
    *(undefined1 *)((long)auStack_140 + lVar1) = 3;
    uVar5 = 0;
    FUN_100eb2860(0);
    func_0x000107c6159c(plVar6,uVar5,6);
    puVar7 = (undefined8 *)(param_6 + *(int *)(lVar4 + 0x14));
    uStack_d8 = puVar7[5];
    uStack_e0 = puVar7[4];
    uStack_c8 = puVar7[7];
    uStack_d0 = puVar7[6];
    uStack_b8 = puVar7[9];
    uStack_c0 = puVar7[8];
    auStack_140[9] = puVar7[1];
    auStack_140[8] = *puVar7;
    uStack_e8 = puVar7[3];
    auStack_140[10] = puVar7[2];
    puVar7 = (undefined8 *)((long)plVar6 + (long)*(int *)(lVar4 + 0x14));
    puVar7[1] = 0x3000000000000000;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    uStack_a8 = puVar7[1];
    uStack_b0 = *puVar7;
    uStack_98 = puVar7[3];
    uStack_a0 = puVar7[2];
    uStack_78 = puVar7[7];
    uStack_80 = puVar7[6];
    uStack_68 = puVar7[9];
    uStack_70 = puVar7[8];
    uStack_88 = puVar7[5];
    uStack_90 = puVar7[4];
    func_0x000107c61434(param_2);
  }
  else {
    *plVar6 = param_4;
    uVar5 = 0;
    FUN_100eb2860(0);
    func_0x000107c6159c(plVar6,uVar5,0);
    puVar7 = (undefined8 *)(param_6 + *(int *)(lVar4 + 0x14));
    uStack_d8 = puVar7[5];
    uStack_e0 = puVar7[4];
    uStack_c8 = puVar7[7];
    uStack_d0 = puVar7[6];
    uStack_b8 = puVar7[9];
    uStack_c0 = puVar7[8];
    auStack_140[9] = puVar7[1];
    auStack_140[8] = *puVar7;
    uStack_e8 = puVar7[3];
    auStack_140[10] = puVar7[2];
    puVar7 = (undefined8 *)((long)plVar6 + (long)*(int *)(lVar4 + 0x14));
    puVar7[1] = 0x3000000000000000;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    uStack_a8 = puVar7[1];
    uStack_b0 = *puVar7;
    uStack_98 = puVar7[3];
    uStack_a0 = puVar7[2];
    uStack_78 = puVar7[7];
    uStack_80 = puVar7[6];
    uStack_68 = puVar7[9];
    uStack_70 = puVar7[8];
    uStack_88 = puVar7[5];
    uStack_90 = puVar7[4];
    func_0x000107c61174(param_4);
  }
  func_0x000100eb6784(auStack_140 + 8,alStack_150,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_b0,0x112d472c0,&UNK_10d90e810);
  uVar3 = uStack_c8;
  uVar2 = uStack_d0;
  uVar5 = uStack_e0;
  puVar7[5] = uStack_d8;
  puVar7[4] = uVar5;
  puVar7[7] = uVar3;
  puVar7[6] = uVar2;
  uVar5 = uStack_c0;
  puVar7[9] = uStack_b8;
  puVar7[8] = uVar5;
  uVar3 = uStack_e8;
  uVar2 = auStack_140[10];
  uVar5 = auStack_140[8];
  puVar7[1] = auStack_140[9];
  *puVar7 = uVar5;
  puVar7[3] = uVar3;
  puVar7[2] = uVar2;
  FUN_100eb6df0(plVar6,param_5);
  return;
}



/* Entry: 100eb4284; end: 100eb43c3;  */

void FUN_100eb4284(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *puVar7;
  undefined8 auStack_130 [2];
  undefined8 auStack_120 [11];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = 0;
  func_0x000100eb36a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)auStack_130 + lVar2);
  *puVar7 = 0;
  *(undefined8 *)((long)auStack_130 + lVar2 + 8) = 0;
  *(undefined1 *)((long)auStack_120 + lVar2) = 6;
  uVar6 = 0;
  FUN_100eb2860(0);
  func_0x000107c6159c(puVar7,uVar6,6);
  puVar1 = (undefined8 *)(param_3 + *(int *)(lVar5 + 0x14));
  uStack_b8 = puVar1[5];
  uStack_c0 = puVar1[4];
  uStack_a8 = puVar1[7];
  uStack_b0 = puVar1[6];
  uStack_98 = puVar1[9];
  uStack_a0 = puVar1[8];
  auStack_120[9] = puVar1[1];
  auStack_120[8] = *puVar1;
  uStack_c8 = puVar1[3];
  auStack_120[10] = puVar1[2];
  puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar5 + 0x14));
  puVar1[1] = 0x3000000000000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uStack_58 = puVar1[7];
  uStack_60 = puVar1[6];
  uStack_48 = puVar1[9];
  uStack_50 = puVar1[8];
  uStack_68 = puVar1[5];
  uStack_70 = puVar1[4];
  func_0x000100eb6784(auStack_120 + 8,auStack_130,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_90,0x112d472c0,&UNK_10d90e810);
  uVar4 = uStack_a8;
  uVar3 = uStack_b0;
  uVar6 = uStack_c0;
  puVar1[5] = uStack_b8;
  puVar1[4] = uVar6;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  uVar6 = uStack_a0;
  puVar1[9] = uStack_98;
  puVar1[8] = uVar6;
  uVar4 = uStack_c8;
  uVar3 = auStack_120[10];
  uVar6 = auStack_120[8];
  puVar1[1] = auStack_120[9];
  *puVar1 = uVar6;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  FUN_100eb6df0(puVar7,param_2);
  return;
}



/* Entry: 100eb43c4; end: 100eb4527;  */

void FUN_100eb43c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *puVar7;
  undefined8 auStack_140 [13];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = 0;
  func_0x000100eb36a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)auStack_140 + lVar2);
  *puVar7 = param_1;
  *(undefined8 *)((long)auStack_140 + lVar2 + 8) = param_2;
  *(undefined8 *)((long)auStack_140 + lVar2 + 0x10) = param_3;
  uVar6 = 0;
  FUN_100eb2860(0);
  func_0x000107c6159c(puVar7,uVar6,5);
  puVar1 = (undefined8 *)(param_5 + *(int *)(lVar5 + 0x14));
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  auStack_140[0xb] = puVar1[1];
  auStack_140[10] = *puVar1;
  uStack_d8 = puVar1[3];
  auStack_140[0xc] = puVar1[2];
  puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar5 + 0x14));
  puVar1[1] = 0x3000000000000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  uStack_58 = puVar1[9];
  uStack_60 = puVar1[8];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  func_0x000107c61174(param_1);
  func_0x00010006c00c(param_2,param_3);
  func_0x000100eb6784(auStack_140 + 10,auStack_140,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_a0,0x112d472c0,&UNK_10d90e810);
  uVar4 = uStack_b8;
  uVar3 = uStack_c0;
  uVar6 = uStack_d0;
  puVar1[5] = uStack_c8;
  puVar1[4] = uVar6;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  uVar6 = uStack_b0;
  puVar1[9] = uStack_a8;
  puVar1[8] = uVar6;
  uVar4 = uStack_d8;
  uVar3 = auStack_140[0xc];
  uVar6 = auStack_140[10];
  puVar1[1] = auStack_140[0xb];
  *puVar1 = uVar6;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  FUN_100eb6df0(puVar7,param_4);
  return;
}



/* Entry: 100eb4528; end: 100eb467f;  */

void FUN_100eb4528(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *puVar7;
  undefined8 auStack_140 [2];
  undefined8 auStack_130 [11];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = 0;
  func_0x000100eb36a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)auStack_140 + lVar2);
  *puVar7 = param_1;
  *(undefined8 *)((long)auStack_140 + lVar2 + 8) = param_2;
  *(undefined1 *)((long)auStack_130 + lVar2) = 2;
  uVar6 = 0;
  FUN_100eb2860(0);
  func_0x000107c6159c(puVar7,uVar6,6);
  puVar1 = (undefined8 *)(param_4 + *(int *)(lVar5 + 0x14));
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  auStack_130[9] = puVar1[1];
  auStack_130[8] = *puVar1;
  uStack_d8 = puVar1[3];
  auStack_130[10] = puVar1[2];
  puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar5 + 0x14));
  puVar1[1] = 0x3000000000000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  uStack_58 = puVar1[9];
  uStack_60 = puVar1[8];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  func_0x000107c61434(param_2);
  func_0x000100eb6784(auStack_130 + 8,auStack_140,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_a0,0x112d472c0,&UNK_10d90e810);
  uVar4 = uStack_b8;
  uVar3 = uStack_c0;
  uVar6 = uStack_d0;
  puVar1[5] = uStack_c8;
  puVar1[4] = uVar6;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  uVar6 = uStack_b0;
  puVar1[9] = uStack_a8;
  puVar1[8] = uVar6;
  uVar4 = uStack_d8;
  uVar3 = auStack_130[10];
  uVar6 = auStack_130[8];
  puVar1[1] = auStack_130[9];
  *puVar1 = uVar6;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  FUN_100eb6df0(puVar7,param_3);
  return;
}



/* Entry: 100eb4680; end: 100eb56af;  */

undefined8 FUN_100eb4680(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0;
  func_0x000107c506c8();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x100eafbac;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_110361b58;
  ppuVar4 = &puStack_a8;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_80);
  pcStack_88 = FUN_100eb57d0;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x100eb70e8;
  puStack_90 = &UNK_110361b80;
  ppuVar5 = &puStack_a8;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x100eb57d4;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x100eb70ec;
  puStack_90 = &UNK_110361ba8;
  ppuVar6 = &puStack_a8;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x100eb57d8;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100eb57dc;
  puStack_90 = &UNK_110361bd0;
  ppuVar7 = &puStack_a8;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_80);
  pcStack_88 = FUN_100eb581c;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x100eb70f0;
  puStack_90 = &UNK_110361bf8;
  ppuVar8 = &puStack_a8;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_80);
  puVar9 = &UNK_110361c30;
  func_0x000107c613fc(&UNK_110361c30,0x18,7);
  *(undefined8 **)(puVar9 + 0x10) = &uStack_78;
  puVar10 = &UNK_110361c58;
  func_0x000107c613fc(&UNK_110361c58,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x100eb6e34;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_88 = (code *)0x100eb7250;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x100e27a2c;
  puStack_90 = &UNK_110361c70;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c74c(param_1);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  uVar2 = uStack_78;
  uVar12 = 0;
  func_0x000107c61544(0,"",0x4d,0x154,0x26,1);
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100eb49fc);
    (*pcVar3)();
  }
  uVar12 = 0;
  func_0x000107c61544(0,"",0x4d,0x156,0x24,1);
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100eb4a00);
    (*pcVar3)();
  }
  uVar12 = 0;
  func_0x000107c61544(0,"",0x4d,0x158,0x15,1);
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100eb4a04);
    (*pcVar3)();
  }
  uVar12 = 0;
  func_0x000107c61544(0,"",0x4d,0x15a,0x19,1);
  if ((uVar12 & 1) == 0) {
    uVar12 = 0;
    func_0x000107c61544(0,"",0x4d,0x15c,0x19,1);
    func_0x000107c61574(puVar9);
    if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100eb4a0c);
      (*pcVar3)();
    }
    puVar9 = puVar10;
    func_0x000107c61544(puVar10,"",0x4d,0x15e,0x15,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar9 & 1) == 0) {
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100eb4a10);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100eb4a08);
  (*pcVar3)();
}



/* Entry: 100eb56b0; end: 100eb5767;  */

/* WARNING: Possible PIC construction at 0x000100eb56f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eb56f4) */
/* WARNING: Removing unreachable block (ram,0x000100eb5724) */
/* WARNING: Removing unreachable block (ram,0x000100eb56f8) */

void FUN_100eb56b0(long param_1)

{
  code *pcVar1;
  
  func_0x000107c5da60();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100eb5724);
  (*pcVar1)();
}



/* Entry: 100eb5768; end: 100eb57cf;  */

void FUN_100eb5768(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,uVar3,param_3);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100eb57d0; end: 100eb57db;  */

void FUN_100eb57d0(void)

{
  return;
}



/* Entry: 100eb57dc; end: 100eb581b;  */

void FUN_100eb57dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100eb581c; end: 100eb581f;  */

void FUN_100eb581c(void)

{
  return;
}



/* Entry: 100eb5820; end: 100eb64a7;  */

uint FUN_100eb5820(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  uint uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong uStack_220;
  ulong auStack_218 [2];
  ulong *puStack_208;
  long alStack_200 [10];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
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
  undefined1 uStack_70;
  
  lVar2 = 0;
  alStack_200[3] = param_1;
  func_0x000107c5ede0();
  alStack_200[1] = *(long *)(lVar2 + -8);
  alStack_200[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_200[1] + 0x40));
  lVar2 = (long)&uStack_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_218[1] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12;
  lVar3 = 0;
  auStack_218[0] = lVar2;
  FUN_100eb20b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar9 = (ulong *)(lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_208 = puVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar9 - extraout_x12_00;
  alStack_200[0] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (ulong *)(lVar2 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (ulong *)((long)puVar15 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (ulong *)((long)puVar17 - extraout_x12_03);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)((long)puVar16 - extraout_x12_04);
  lVar2 = 0x112d477c0;
  func_0x0001000285a8(0x112d477c0,&UNK_10d90e7f8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar13 - extraout_x8_01;
  puVar8 = (undefined8 *)(lVar18 + *(int *)(lVar2 + 0x30));
  FUN_100eb64a8(alStack_200[3],lVar18,FUN_100eb20b0);
  FUN_100eb64a8(param_2,puVar8,FUN_100eb20b0);
  alStack_200[3] = lVar18;
  func_0x000107c614c4(lVar18,lVar3);
  lVar2 = alStack_200[0];
  puVar9 = puStack_208;
  iVar1 = (int)lVar18;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        FUN_100eb64a8(alStack_200[3],puVar13,FUN_100eb20b0);
        uStack_98 = puVar13[5];
        uStack_a0 = puVar13[4];
        uStack_88 = puVar13[7];
        uStack_90 = puVar13[6];
        uStack_78 = puVar13[9];
        uStack_80 = puVar13[8];
        uStack_70 = *(undefined1 *)(puVar13 + 10);
        uStack_b8 = puVar13[1];
        uStack_c0 = *puVar13;
        uStack_a8 = puVar13[3];
        uStack_b0 = puVar13[2];
        puVar4 = puVar8;
        func_0x000107c614c4(puVar8,lVar3);
        if ((int)puVar4 != 0) {
          FUN_100eb6744(&uStack_c0,0x112d477c8,&UNK_10d90e800);
          goto LAB_100eb5d04;
        }
        alStack_200[7] = puVar8[3];
        alStack_200[6] = puVar8[2];
        uStack_f8 = puVar8[5];
        uStack_100 = puVar8[4];
        uStack_e8 = puVar8[7];
        uStack_f0 = puVar8[6];
        uStack_d8 = puVar8[9];
        uStack_e0 = puVar8[8];
        alStack_200[5] = puVar8[1];
        alStack_200[4] = *puVar8;
        uStack_118 = puVar8[1];
        uStack_120 = *puVar8;
        uStack_108 = puVar8[3];
        uStack_110 = puVar8[2];
        uStack_158 = puVar13[5];
        uStack_160 = puVar13[4];
        uStack_148 = puVar13[7];
        uStack_150 = puVar13[6];
        uStack_138 = puVar13[9];
        uStack_140 = puVar13[8];
        uStack_178 = puVar13[1];
        uStack_180 = *puVar13;
        uStack_168 = puVar13[3];
        uStack_170 = puVar13[2];
        alStack_200[9] = puVar8[5];
        alStack_200[8] = puVar8[4];
        uStack_1a8 = puVar8[7];
        uStack_1b0 = puVar8[6];
        uStack_198 = puVar8[9];
        uStack_1a0 = puVar8[8];
        uStack_d0 = *(undefined1 *)(puVar8 + 10);
        uStack_130 = *(undefined1 *)(puVar13 + 10);
        uStack_190 = *(undefined1 *)(puVar8 + 10);
        FUN_100ea9794();
        puVar13 = puVar4;
        func_0x000100ea97d4();
        puVar7 = puVar13;
        func_0x000100ea9814();
        puVar8 = &uStack_180;
        func_0x000107c606d0(puVar8,alStack_200 + 4,&UNK_110361290,&UNK_110361330,puVar4,puVar13,
                            puVar7);
        uVar10 = (uint)puVar8;
        FUN_100eb6744(&uStack_120,0x112d477c8,&UNK_10d90e800);
        FUN_100eb6744(&uStack_c0,0x112d477c8,&UNK_10d90e800);
        goto LAB_100eb5cd4;
      }
      FUN_100eb64a8(alStack_200[3],puVar16,FUN_100eb20b0);
      uVar14 = *puVar16;
      puVar13 = puVar8;
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar13 == 1) {
        uVar12 = *puVar8;
LAB_100eb5bb0:
        func_0x0001007bbbf8(0);
        uVar6 = uVar14;
        func_0x000107c60118(uVar14,uVar12);
        uVar10 = (uint)uVar6;
        goto LAB_100eb5cc8;
      }
LAB_100eb5d00:
      func_0x000107c61170(uVar14);
      goto LAB_100eb5d04;
    }
    if (iVar1 == 2) {
      FUN_100eb64a8(alStack_200[3],puVar17,FUN_100eb20b0);
      uVar14 = *puVar17;
      puVar13 = puVar8;
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar13 == 2) {
        uVar12 = *puVar8;
        goto LAB_100eb5bb0;
      }
      goto LAB_100eb5d00;
    }
    FUN_100eb64a8(alStack_200[3],puVar15,FUN_100eb20b0);
    uVar14 = *puVar15;
    puVar13 = puVar8;
    func_0x000107c614c4(puVar8,lVar3);
    if ((int)puVar13 != 3) goto LAB_100eb5d00;
    uVar12 = *puVar8;
    if ((char)puVar15[1] == '\x01') {
      if (*(char *)(puVar8 + 1) != '\x01') goto LAB_100eb5e20;
LAB_100eb5c14:
      func_0x0001007bbbf8(0);
      uVar6 = uVar14;
      func_0x000107c60118(uVar14,uVar12);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar12);
      if ((uVar6 & 1) != 0) goto LAB_100eb5c64;
    }
    else {
      if (*(char *)(puVar8 + 1) != '\x01') goto LAB_100eb5c14;
LAB_100eb5e20:
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar12);
    }
    FUN_100eb2824(alStack_200[3],FUN_100eb20b0);
  }
  else {
    if (iVar1 < 6) {
      if (iVar1 != 4) {
        FUN_100eb64a8(alStack_200[3],puStack_208,FUN_100eb20b0);
        uVar14 = *puVar9;
        puVar13 = puVar8;
        func_0x000107c614c4(puVar8,lVar3);
        if ((int)puVar13 != 5) goto LAB_100eb5d00;
        uVar12 = *puVar8;
        func_0x0001007bbbf8(0);
        uVar6 = uVar14;
        func_0x000107c60118(uVar14,uVar12);
        uVar10 = (uint)uVar6;
LAB_100eb5cc8:
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar12);
LAB_100eb5cd4:
        FUN_100eb2824(alStack_200[3],FUN_100eb20b0);
        goto LAB_100eb5d20;
      }
      FUN_100eb64a8(alStack_200[3],alStack_200[0],FUN_100eb20b0);
      puVar13 = puVar8;
      func_0x000107c614c4(puVar8,lVar3);
      lVar18 = alStack_200[2];
      lVar3 = alStack_200[1];
      uVar14 = auStack_218[0];
      if ((int)puVar13 == 4) {
        pcVar11 = *(code **)(alStack_200[1] + 0x20);
        (*pcVar11)(auStack_218[0],lVar2,alStack_200[2]);
        uVar6 = auStack_218[1];
        (*pcVar11)(auStack_218[1],puVar8,lVar18);
        uVar5 = uVar14;
        func_0x000107c5edac(uVar14,uVar6);
        uVar10 = (uint)uVar5;
        pcVar11 = *(code **)(lVar3 + 8);
        (*pcVar11)(uVar6,lVar18);
        (*pcVar11)(uVar14,lVar18);
        goto LAB_100eb5cd4;
      }
      (**(code **)(alStack_200[1] + 8))(lVar2,alStack_200[2]);
    }
    else if (iVar1 == 6) {
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar8 == 6) goto LAB_100eb5c64;
    }
    else if (iVar1 == 7) {
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar8 == 7) {
LAB_100eb5c64:
        FUN_100eb2824(alStack_200[3],FUN_100eb20b0);
        uVar10 = 1;
        goto LAB_100eb5d20;
      }
    }
    else {
      func_0x000107c614c4(puVar8,lVar3);
      if ((int)puVar8 == 8) goto LAB_100eb5c64;
    }
LAB_100eb5d04:
    FUN_100eb6744(alStack_200[3],0x112d477c0,&UNK_10d90e7f8);
  }
  uVar10 = 0;
LAB_100eb5d20:
  return uVar10 & 1;
}



/* Entry: 100eb64a8; end: 100eb64eb;  */

undefined8 FUN_100eb64a8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100eb64ec; end: 100eb6743;  */

undefined8 FUN_100eb64ec(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_300 [80];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000100eb5e44();
  if ((uVar2 & 1) != 0) {
    lVar3 = 0;
    func_0x000100eb36a0();
    puVar4 = (undefined8 *)(param_1 + (long)*(int *)(lVar3 + 0x14));
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x14));
    uStack_198 = puVar4[5];
    uStack_1a0 = puVar4[4];
    uStack_188 = puVar4[7];
    uStack_190 = puVar4[6];
    uStack_1b8 = puVar4[1];
    uStack_1c0 = *puVar4;
    uStack_1a8 = puVar4[3];
    uStack_1b0 = puVar4[2];
    uStack_c8 = puVar1[1];
    uStack_d0 = *puVar1;
    uStack_1f8 = puVar1[3];
    uStack_200 = puVar1[2];
    uStack_1d8 = puVar1[7];
    uStack_1e0 = puVar1[6];
    uStack_88 = puVar1[9];
    uStack_90 = puVar1[8];
    uStack_a8 = puVar1[5];
    uStack_b0 = puVar1[4];
    uStack_98 = puVar1[7];
    uStack_a0 = puVar1[6];
    uStack_b8 = puVar1[3];
    uStack_c0 = puVar1[2];
    uStack_1e8 = puVar1[5];
    uStack_1f0 = puVar1[4];
    uStack_208 = puVar1[1];
    uStack_210 = *puVar1;
    uStack_178 = puVar4[9];
    uStack_180 = puVar4[8];
    uStack_1c8 = puVar1[9];
    uStack_1d0 = puVar1[8];
    uStack_170 = uStack_210;
    uStack_168 = uStack_208;
    uStack_160 = uStack_200;
    uStack_158 = uStack_1f8;
    uStack_150 = uStack_1f0;
    uStack_148 = uStack_1e8;
    uStack_140 = uStack_1e0;
    uStack_138 = uStack_1d8;
    uStack_130 = uStack_1d0;
    uStack_128 = uStack_1c8;
    uStack_120 = uStack_1c0;
    uStack_118 = uStack_1b8;
    uStack_110 = uStack_1b0;
    uStack_108 = uStack_1a8;
    uStack_100 = uStack_1a0;
    uStack_f8 = uStack_198;
    uStack_f0 = uStack_190;
    uStack_e8 = uStack_188;
    uStack_e0 = uStack_180;
    uStack_d8 = uStack_178;
    if (((uStack_1b8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      if ((uStack_208 & 0x3000000000000000) == 0x3000000000000000) {
        uStack_238 = puVar4[5];
        uStack_240 = puVar4[4];
        uStack_228 = puVar4[7];
        uStack_230 = puVar4[6];
        uStack_218 = puVar4[9];
        uStack_220 = puVar4[8];
        uStack_258 = puVar4[1];
        uStack_260 = *puVar4;
        uStack_248 = puVar4[3];
        uStack_250 = puVar4[2];
        func_0x000100eb6784(&uStack_120,&uStack_80,0x112d472c0,&UNK_10d90e810);
        func_0x000100eb6784(&uStack_d0,&uStack_80,0x112d472c0,&UNK_10d90e810);
        func_0x000100eb6744(&uStack_260,0x112d472c0,&UNK_10d90e810);
        return 1;
      }
    }
    else if ((uStack_208 & 0x3000000000000000) != 0x3000000000000000) {
      uStack_288 = puVar1[5];
      uStack_290 = puVar1[4];
      uStack_278 = puVar1[7];
      uStack_280 = puVar1[6];
      uStack_268 = puVar1[9];
      uStack_270 = puVar1[8];
      uStack_2a8 = puVar1[1];
      uStack_2b0 = *puVar1;
      uStack_298 = puVar1[3];
      uStack_2a0 = puVar1[2];
      uStack_78 = puVar4[1];
      uStack_80 = *puVar4;
      uStack_68 = puVar4[3];
      uStack_70 = puVar4[2];
      uStack_58 = puVar4[5];
      uStack_60 = puVar4[4];
      uStack_48 = puVar4[7];
      uStack_50 = puVar4[6];
      uStack_38 = puVar4[9];
      uStack_40 = puVar4[8];
      uStack_260 = uStack_2b0;
      uStack_258 = uStack_2a8;
      uStack_250 = uStack_2a0;
      uStack_248 = uStack_298;
      uStack_240 = uStack_290;
      uStack_238 = uStack_288;
      uStack_230 = uStack_280;
      uStack_228 = uStack_278;
      uStack_220 = uStack_270;
      uStack_218 = uStack_268;
      func_0x000100eb6784(&uStack_120,auStack_300,0x112d472c0,&UNK_10d90e810);
      func_0x000100eb6784(&uStack_d0,auStack_300,0x112d472c0,&UNK_10d90e810);
      puVar4 = &uStack_80;
      func_0x000100eab604(puVar4,&uStack_260);
      func_0x000100eb6744(&uStack_2b0,0x112d472c0,&UNK_10d90e810);
      func_0x000100eb6744(&uStack_1c0,0x112d472c0,&UNK_10d90e810);
      if (((ulong)puVar4 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    uStack_260 = uStack_1c0;
    uStack_258 = uStack_1b8;
    uStack_250 = uStack_1b0;
    uStack_248 = uStack_1a8;
    uStack_240 = uStack_1a0;
    uStack_238 = uStack_198;
    uStack_230 = uStack_190;
    uStack_228 = uStack_188;
    uStack_220 = uStack_180;
    uStack_218 = uStack_178;
    func_0x000100eb6784(&uStack_120,&uStack_80,0x112d472c0,&UNK_10d90e810);
    func_0x000100eb6784(&uStack_d0,&uStack_80,0x112d472c0,&UNK_10d90e810);
    func_0x000100eb6744(&uStack_260,0x112d477d8,&UNK_10d90e818);
  }
  return 0;
}



/* Entry: 100eb6744; end: 100eb67cb;  */

undefined8 FUN_100eb6744(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100eb67cc; end: 100eb67e7;  */

void FUN_100eb67cc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = 0x656c707061;
  puVar1[1] = 0xe500000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100eb67e8; end: 100eb6807;  */

void FUN_100eb67e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100eb6808; end: 100eb6843;  */

void FUN_100eb6808(long param_1,long param_2)

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



/* Entry: 100eb6844; end: 100eb687b;  */

void FUN_100eb6844(void)

{
  FUN_100eb38b8();
  return;
}



/* Entry: 100eb687c; end: 100eb694b;  */

undefined8 FUN_100eb687c(undefined8 param_1,undefined8 param_2)

{
  FUN_100eab008(param_2,param_1);
  return param_2;
}



/* Entry: 100eb694c; end: 100eb695f;  */

void FUN_100eb694c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000100eb36a0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100eb6d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100eb3c28(param_1,*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 100eb6960; end: 100eb6b1f;  */

void FUN_100eb6960(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  
  lVar3 = 0;
  func_0x000100eb36a0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff)));
  uVar4 = 0;
  FUN_100eb2860(0);
  puVar5 = puVar1;
  func_0x000107c614c4(puVar1,uVar4);
  iVar2 = (int)puVar5;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if ((iVar2 != 0) && (iVar2 != 1)) goto LAB_100eb6a10;
    }
    else if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_100eb6a10;
    func_0x000107c61170(*puVar1);
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar1,lVar6);
    }
    else if (iVar2 == 5) {
      func_0x000107c61170(*puVar1);
      func_0x00010006c090(puVar1[1],puVar1[2]);
    }
  }
  else if (iVar2 == 6) {
    FUN_100ea9290(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
  }
  else if (iVar2 == 7) {
    func_0x000100eaf8c8(*puVar1,puVar1[1]);
  }
LAB_100eb6a10:
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x14));
  if (((puVar1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_100ea9214(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                  puVar1[8],puVar1[9]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100eb6b20; end: 100eb6b27;  */

void FUN_100eb6b20(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100eb6b28; end: 100eb6c8b;  */

void FUN_100eb6b28(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  
  lVar3 = 0;
  func_0x000100eb36a0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  uVar4 = 0;
  FUN_100eb2860(0);
  puVar5 = puVar1;
  func_0x000107c614c4(puVar1,uVar4);
  iVar2 = (int)puVar5;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if ((iVar2 != 0) && (iVar2 != 1)) goto LAB_100eb6bd8;
    }
    else if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_100eb6bd8;
    func_0x000107c61170(*puVar1);
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar1,lVar6);
    }
    else if (iVar2 == 5) {
      func_0x000107c61170(*puVar1);
      func_0x00010006c090(puVar1[1],puVar1[2]);
    }
  }
  else if (iVar2 == 6) {
    FUN_100ea9290(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
  }
  else if (iVar2 == 7) {
    func_0x000100eaf8c8(*puVar1,puVar1[1]);
  }
LAB_100eb6bd8:
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x14));
  if (((puVar1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_100ea9214(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                  puVar1[8],puVar1[9]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100eb6c8c; end: 100eb6ccb;  */

void FUN_100eb6c8c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long alStack_240 [2];
  undefined8 auStack_230 [11];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0;
  func_0x000100eb36a0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar7 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar8 + 7 & 0xffffffffffffff8));
  lVar2 = 0;
  func_0x000100eb36a0();
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar9 = (long *)((long)alStack_240 + lVar6);
  puVar1 = (undefined8 *)(unaff_x20 + uVar8 + (long)*(int *)(lVar3 + 0x14));
  uStack_a8 = puVar1[1];
  uStack_b0 = *puVar1;
  uStack_98 = puVar1[3];
  uStack_a0 = puVar1[2];
  uStack_88 = puVar1[5];
  uStack_90 = puVar1[4];
  uStack_78 = puVar1[7];
  uStack_80 = puVar1[6];
  uStack_68 = puVar1[9];
  uStack_70 = puVar1[8];
  if (((uStack_a8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    *plVar9 = 0;
    *(undefined8 *)((long)alStack_240 + lVar6 + 8) = 0;
    *(undefined1 *)((long)auStack_230 + lVar6) = 6;
    uVar4 = 0;
    FUN_100eb2860(0);
    func_0x000107c6159c(plVar9,uVar4,6);
    uVar10 = puVar1[5];
    uVar4 = puVar1[4];
    uVar12 = puVar1[7];
    uVar11 = puVar1[6];
    uVar14 = puVar1[9];
    uVar13 = puVar1[8];
    uVar18 = puVar1[1];
    uVar17 = *puVar1;
    uVar16 = puVar1[3];
    uVar15 = puVar1[2];
    puVar1 = (undefined8 *)((long)plVar9 + (long)*(int *)(lVar2 + 0x14));
    uStack_150 = uVar17;
    uStack_148 = uVar18;
    uStack_140 = uVar15;
    uStack_138 = uVar16;
    uStack_130 = uVar4;
    uStack_128 = uVar10;
    uStack_120 = uVar11;
    uStack_118 = uVar12;
    uStack_110 = uVar13;
    uStack_108 = uVar14;
    puVar1[7] = uVar12;
    puVar1[6] = uVar11;
    puVar1[9] = uVar14;
    puVar1[8] = uVar13;
    puVar1[3] = uVar16;
    puVar1[2] = uVar15;
    puVar1[5] = uVar10;
    puVar1[4] = uVar4;
    puVar1[1] = uVar18;
    *puVar1 = uVar17;
    uStack_100 = uVar17;
    uStack_f8 = uVar18;
    uStack_f0 = uVar15;
    uStack_e8 = uVar16;
    uStack_e0 = uVar4;
    uStack_d8 = uVar10;
    uStack_d0 = uVar11;
    uStack_c8 = uVar12;
    uStack_c0 = uVar13;
    uStack_b8 = uVar14;
    func_0x000100eb6784(&uStack_150,&uStack_1a0,0x112d472c0,&UNK_10d90e810);
    func_0x000100eb6744(&uStack_100,0x112d472c0,&UNK_10d90e810);
    uVar11 = uStack_118;
    uVar10 = uStack_120;
    uVar4 = uStack_130;
    puVar1[5] = uStack_128;
    puVar1[4] = uVar4;
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
    uVar4 = uStack_110;
    puVar1[9] = uStack_108;
    puVar1[8] = uVar4;
    uVar11 = uStack_138;
    uVar10 = uStack_140;
    uVar4 = uStack_150;
    puVar1[1] = uStack_148;
    *puVar1 = uVar4;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
  }
  else {
    uStack_1c8 = puVar1[5];
    uStack_1d0 = puVar1[4];
    uStack_1b8 = puVar1[7];
    uStack_1c0 = puVar1[6];
    uStack_1a8 = puVar1[9];
    uStack_1b0 = puVar1[8];
    auStack_230[9] = puVar1[1];
    auStack_230[8] = *puVar1;
    uStack_1d8 = puVar1[3];
    auStack_230[10] = puVar1[2];
    puVar5 = auStack_230 + 8;
    uStack_100 = auStack_230[8];
    uStack_f8 = auStack_230[9];
    uStack_f0 = auStack_230[10];
    uStack_e8 = uStack_1d8;
    uStack_e0 = uStack_1d0;
    uStack_d8 = uStack_1c8;
    uStack_d0 = uStack_1c0;
    uStack_c8 = uStack_1b8;
    uStack_c0 = uStack_1b0;
    uStack_b8 = uStack_1a8;
    FUN_100eb687c(puVar5,&uStack_150);
    FUN_100eab404();
    func_0x000100eb6744(&uStack_b0,0x112d472c0,&UNK_10d90e810);
    *plVar9 = (long)puVar5;
    *(undefined8 *)((long)alStack_240 + lVar6 + 8) = 0x4000000000000000;
    uVar4 = 0;
    FUN_100eb2860(0);
    func_0x000107c6159c(plVar9,uVar4,7);
    uStack_178 = puVar1[5];
    uStack_180 = puVar1[4];
    uStack_168 = puVar1[7];
    uStack_170 = puVar1[6];
    uStack_158 = puVar1[9];
    uStack_160 = puVar1[8];
    uStack_198 = puVar1[1];
    uStack_1a0 = *puVar1;
    uStack_188 = puVar1[3];
    uStack_190 = puVar1[2];
    puVar1 = (undefined8 *)((long)plVar9 + (long)*(int *)(lVar2 + 0x14));
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0x3000000000000000;
    *puVar1 = 0;
    uStack_118 = puVar1[7];
    uStack_120 = puVar1[6];
    uStack_108 = puVar1[9];
    uStack_110 = puVar1[8];
    uStack_138 = puVar1[3];
    uStack_140 = puVar1[2];
    uStack_128 = puVar1[5];
    uStack_130 = puVar1[4];
    uStack_148 = puVar1[1];
    uStack_150 = *puVar1;
    func_0x000100eb6784(&uStack_1a0,alStack_240,0x112d472c0,&UNK_10d90e810);
    func_0x000100eb6744(&uStack_150,0x112d472c0,&UNK_10d90e810);
    uVar11 = uStack_168;
    uVar10 = uStack_170;
    uVar4 = uStack_180;
    puVar1[5] = uStack_178;
    puVar1[4] = uVar4;
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
    uVar4 = uStack_160;
    puVar1[9] = uStack_158;
    puVar1[8] = uVar4;
    uVar11 = uStack_188;
    uVar10 = uStack_190;
    uVar4 = uStack_1a0;
    puVar1[1] = uStack_198;
    *puVar1 = uVar4;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
  }
  FUN_100eb6df0(plVar9,uVar7);
  return;
}



/* Entry: 100eb6ccc; end: 100eb6cdf;  */

void FUN_100eb6ccc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100eb6ce0; end: 100eb6d2f;  */

void FUN_100eb6ce0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000100eb36a0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100eb6d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),
             unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 100eb6d30; end: 100eb6d37;  */

void FUN_100eb6d30(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100eb6d38; end: 100eb6d8f;  */

void FUN_100eb6d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 auStack_140 [13];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = 0;
  func_0x000100eb36a0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = 0;
  func_0x000100eb36a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_140 + lVar6);
  *puVar9 = param_1;
  *(undefined8 *)((long)auStack_140 + lVar6 + 8) = param_2;
  *(undefined8 *)((long)auStack_140 + lVar6 + 0x10) = param_3;
  uVar5 = 0;
  FUN_100eb2860(0);
  func_0x000107c6159c(puVar9,uVar5,5);
  puVar1 = (undefined8 *)
           (unaff_x20 + (uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff)) + (long)*(int *)(lVar4 + 0x14)
           );
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  auStack_140[0xb] = puVar1[1];
  auStack_140[10] = *puVar1;
  uStack_d8 = puVar1[3];
  auStack_140[0xc] = puVar1[2];
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar4 + 0x14));
  puVar1[1] = 0x3000000000000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  uStack_58 = puVar1[9];
  uStack_60 = puVar1[8];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  func_0x000107c61174(param_1);
  func_0x00010006c00c(param_2,param_3);
  func_0x000100eb6784(auStack_140 + 10,auStack_140,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_a0,0x112d472c0,&UNK_10d90e810);
  uVar3 = uStack_b8;
  uVar2 = uStack_c0;
  uVar5 = uStack_d0;
  puVar1[5] = uStack_c8;
  puVar1[4] = uVar5;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  uVar5 = uStack_b0;
  puVar1[9] = uStack_a8;
  puVar1[8] = uVar5;
  uVar3 = uStack_d8;
  uVar2 = auStack_140[0xc];
  uVar5 = auStack_140[10];
  puVar1[1] = auStack_140[0xb];
  *puVar1 = uVar5;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  FUN_100eb6df0(puVar9,uVar7);
  return;
}


