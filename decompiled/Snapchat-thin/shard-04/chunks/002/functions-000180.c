/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10329b3dc; end: 10329b3ff; -[SCSpotlightInterstitialRepositoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329b3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f510f8));
  return;
}



/* Entry: 10329b400; end: 10329b4ab;  */

void FUN_10329b400(void)

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



/* Entry: 10329b4ac; end: 10329b4d3;  */

void FUN_10329b4ac(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10329b4d4; end: 10329b4e3; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture feedIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10329b4d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f51128);
}



/* Entry: 10329b4e4; end: 10329b5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10329b4e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f51140;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f51140);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_10329c0e0();
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c53fcc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10329b5cc; end: 10329b693; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture initWithFeedIdentifier:panPolicy:delegate:] */

undefined8
FUN_10329b5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  FUN_10329be50(param_3,param_4,param_5);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return param_3;
}



/* Entry: 10329b694; end: 10329b757; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture attachGestureToView:] */

/* WARNING: Possible PIC construction at 0x00010329b6d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329b6dc) */

void FUN_10329b694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10329b4e4();
  func_0x000107c3d6fc(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10329b758; end: 10329b7d3; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture detachGestureFromView:] */

/* WARNING: Possible PIC construction at 0x00010329b79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329b7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329b7a0) */
/* WARNING: Removing unreachable block (ram,0x00010329b7c0) */

void FUN_10329b758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10329b4e4();
  func_0x000107c4ff3c(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10329b7d4; end: 10329b7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10329b7d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f51140;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f51140);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_10329c0e0();
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c53fcc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10329b7d8; end: 10329b80b; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture panGesture] */

void FUN_10329b7d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10329b4e4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329b80c; end: 10329bb0b;  */

/* WARNING: Possible PIC construction at 0x00010329b878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329b9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329ba70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329b9a8) */
/* WARNING: Removing unreachable block (ram,0x00010329b9b8) */
/* WARNING: Removing unreachable block (ram,0x00010329b9bc) */
/* WARNING: Removing unreachable block (ram,0x00010329b9c0) */
/* WARNING: Removing unreachable block (ram,0x00010329b9c4) */
/* WARNING: Removing unreachable block (ram,0x00010329b9c8) */
/* WARNING: Removing unreachable block (ram,0x00010329b9ec) */
/* WARNING: Removing unreachable block (ram,0x00010329b87c) */
/* WARNING: Removing unreachable block (ram,0x00010329b880) */
/* WARNING: Removing unreachable block (ram,0x00010329b938) */
/* WARNING: Removing unreachable block (ram,0x00010329ba00) */
/* WARNING: Removing unreachable block (ram,0x00010329ba18) */
/* WARNING: Removing unreachable block (ram,0x00010329ba1c) */
/* WARNING: Removing unreachable block (ram,0x00010329ba48) */
/* WARNING: Removing unreachable block (ram,0x00010329ba4c) */
/* WARNING: Removing unreachable block (ram,0x00010329ba50) */
/* WARNING: Removing unreachable block (ram,0x00010329ba54) */
/* WARNING: Removing unreachable block (ram,0x00010329b940) */
/* WARNING: Removing unreachable block (ram,0x00010329b948) */
/* WARNING: Removing unreachable block (ram,0x00010329b898) */
/* WARNING: Removing unreachable block (ram,0x00010329b970) */
/* WARNING: Removing unreachable block (ram,0x00010329b8a0) */
/* WARNING: Removing unreachable block (ram,0x00010329b8a8) */
/* WARNING: Removing unreachable block (ram,0x00010329b8e4) */
/* WARNING: Removing unreachable block (ram,0x00010329b8f0) */
/* WARNING: Removing unreachable block (ram,0x00010329b8f4) */
/* WARNING: Removing unreachable block (ram,0x00010329b8fc) */
/* WARNING: Removing unreachable block (ram,0x00010329b900) */
/* WARNING: Removing unreachable block (ram,0x00010329b904) */
/* WARNING: Removing unreachable block (ram,0x00010329b908) */
/* WARNING: Removing unreachable block (ram,0x00010329b90c) */
/* WARNING: Removing unreachable block (ram,0x00010329b910) */
/* WARNING: Removing unreachable block (ram,0x00010329ba74) */
/* WARNING: Removing unreachable block (ram,0x00010329ba84) */
/* WARNING: Removing unreachable block (ram,0x00010329ba88) */
/* WARNING: Removing unreachable block (ram,0x00010329bad4) */
/* WARNING: Removing unreachable block (ram,0x00010329b94c) */
/* WARNING: Removing unreachable block (ram,0x00010329b95c) */
/* WARNING: Removing unreachable block (ram,0x00010329bad8) */
/* WARNING: Removing unreachable block (ram,0x00010329baec) */
/* WARNING: Removing unreachable block (ram,0x00010329baf0) */
/* WARNING: Removing unreachable block (ram,0x00010329baf4) */
/* WARNING: Removing unreachable block (ram,0x00010329baf8) */
/* WARNING: Removing unreachable block (ram,0x00010329bb04) */
/* WARNING: Removing unreachable block (ram,0x00010329b960) */
/* WARNING: Removing unreachable block (ram,0x00010329bb08) */
/* WARNING: Removing unreachable block (ram,0x00010329bafc) */
/* WARNING: Removing unreachable block (ram,0x00010329bb00) */
/* WARNING: Removing unreachable block (ram,0x00010329ba8c) */
/* WARNING: Removing unreachable block (ram,0x00010329ba9c) */
/* WARNING: Removing unreachable block (ram,0x00010329baa0) */
/* WARNING: Removing unreachable block (ram,0x00010329baac) */
/* WARNING: Removing unreachable block (ram,0x00010329bab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329b80c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f51130);
  if (lVar1 != 0) {
    func_0x0001007bbbf8(0);
    func_0x000107c61174(lVar1);
    FUN_10329b4e4();
    func_0x000107c60118(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10329bb0c; end: 10329bb5b; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture didPan:] */

/* WARNING: Possible PIC construction at 0x00010329bb44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329bb48) */

void FUN_10329bb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10329b80c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10329bb5c; end: 10329bbb7; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture init] */

void FUN_10329bb5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContentFeedContainerGesture.SCContentFeedContainerPanGesture",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329bb88);
  (*pcVar1)();
}



/* Entry: 10329bbb8; end: 10329bbff; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010329bbe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329bbe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329bbb8(long param_1)

{
  FUN_10329bf5c(param_1 + _DAT_112f51138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51130));
  return;
}



/* Entry: 10329bc00; end: 10329bdb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_10329bc00(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,ulong param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  double dVar9;
  double dVar10;
  
  lVar2 = _DAT_112f51130;
  lVar8 = *(long *)(unaff_x20 + _DAT_112f51130);
  if (lVar8 == 0) {
    return 1;
  }
  func_0x0001007bbbf8(0);
  func_0x000107c61174(lVar8);
  lVar3 = lVar8;
  FUN_10329b4e4();
  func_0x000107c60118(param_5,lVar3);
  func_0x000107c61170(lVar3);
  lVar3 = _DAT_112f51140;
  if ((param_5 & 1) == 0) {
    func_0x000107c61170(lVar8);
    return 1;
  }
  func_0x000107c4b8b8(*(undefined8 *)(unaff_x20 + _DAT_112f51140));
  uVar4 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar4 != 0) {
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x000107c3ec60();
    puVar1 = (undefined1 *)(unaff_x20 + _DAT_112f51148);
    dVar9 = param_3 * *(double *)(puVar1 + 8);
    dVar10 = 0.0;
    func_0x000107c609a4(dVar9,0,param_3 - (dVar9 + dVar9),param_4,param_1,param_2);
    func_0x000107c61170(uVar4);
    if ((uVar5 & 1) != 0) {
      uVar4 = unaff_x20 + _DAT_112f51138;
      func_0x000107c61618();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c40398();
        func_0x000107c615e8(uVar4);
        if ((uVar5 & 1) != 0) {
          uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
          func_0x000107c61174(uVar6);
          uVar7 = uVar6;
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c5dc98(uVar6);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar7);
          if (ABS(dVar9) <= ABS(dVar10)) {
            return 0;
          }
          if (dVar9 <= 0.0) {
            return *puVar1;
          }
          return puVar1[1];
        }
      }
    }
  }
  func_0x000107c61170(lVar8);
  return 0;
}



/* Entry: 10329bdb8; end: 10329be13; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture gestureRecognizerShouldBegin:] */

uint FUN_10329bdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10329bc00(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10329be14; end: 10329be4f; -[_TtC29SCContentFeedContainerGesture32SCContentFeedContainerPanGesture gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

bool FUN_10329be14(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x000107c6148c(in_x3,puVar1);
  return in_x3 != 0;
}



/* Entry: 10329be50; end: 10329bf3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329be50(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = _DAT_112f51138;
  func_0x000107c61614(unaff_x20 + _DAT_112f51138,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f51130) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51158) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51140) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51128) = param_1;
  uVar2 = *(undefined1 *)(param_2 + _DAT_112f511b8);
  uVar4 = *(undefined8 *)(param_2 + _DAT_112f511c0);
  puVar1 = (undefined1 *)(unaff_x20 + _DAT_112f51148);
  *puVar1 = *(undefined1 *)(param_2 + _DAT_112f511b0);
  puVar1[1] = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar4;
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  FUN_10329bf3c();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329bf3c; end: 10329bf5b;  */

void FUN_10329bf3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6aa8);
  return;
}



/* Entry: 10329bf5c; end: 10329bf7f;  */

undefined8 FUN_10329bf5c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10329bf80; end: 10329bf83;  */

void FUN_10329bf80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f51150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba6070;
  func_0x000107c61520(&UNK_10dba6070,&UNK_110632080);
  puRam0000000112f51150 = puVar1;
  return;
}



/* Entry: 10329bf84; end: 10329bfc3;  */

void FUN_10329bf84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f51150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba6070;
  func_0x000107c61520(&UNK_10dba6070,&UNK_110632080);
  puRam0000000112f51150 = puVar1;
  return;
}



/* Entry: 10329bfc4; end: 10329bfd3;  */

undefined1  [16] FUN_10329bfc4(void)

{
  return ZEXT816(0x110632080);
}



/* Entry: 10329bfd4; end: 10329c0df;  */

undefined1 * FUN_10329bfd4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar3 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar1 = auStack_70 + (-0x10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar3 + 0x10))(puVar1);
    puVar2 = puVar1;
    func_0x000107c605b0(puVar1,lStack_58);
    (**(code **)(lVar3 + 8))(puVar1,lStack_58);
    func_0x000100183ab8();
  }
  FUN_10329c0e0();
  puVar1 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar1,PTR_s_initWithTarget_action__1125f1c48,puVar2,param_2);
  func_0x000107c615e8(puVar2);
  func_0x00010006e7f4(param_1);
  return puVar1;
}



/* Entry: 10329c0e0; end: 10329c0ff;  */

void FUN_10329c0e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6c10);
  return;
}



/* Entry: 10329c100; end: 10329c167; -[_TtC29SCContentFeedContainerGesture42SCContentFeedContainerPanGestureRecognizer initWithTarget:action:] */

void FUN_10329c100(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10329bfd4(&uStack_50,param_4);
  return;
}



/* Entry: 10329c168; end: 10329c197;  */

void FUN_10329c168(void)

{
  FUN_10329c0e0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10329c198; end: 10329c23b;  */

int FUN_10329c198(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x10] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10329c23c; end: 10329c24b; -[SCContentFeedContainerPanPolicy allowLeftPan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10329c23c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f511b0);
}



/* Entry: 10329c24c; end: 10329c25b; -[SCContentFeedContainerPanPolicy allowRightPan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10329c24c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f511b8);
}



/* Entry: 10329c25c; end: 10329c26b; -[SCContentFeedContainerPanPolicy horizontalEdgeSwipeThresholdPct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10329c25c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f511c0);
}



/* Entry: 10329c26c; end: 10329c2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329c26c(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f511b0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f511b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f511c0) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329c2e8; end: 10329c363; -[SCContentFeedContainerPanPolicy initWithAllowLeftPan:allowRightPan:horizontalEdgeSwipeThresholdPct:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329c2e8(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined1 *)(param_2 + _DAT_112f511b0) = param_4;
  *(undefined1 *)(param_2 + _DAT_112f511b8) = param_5;
  *(undefined8 *)(param_2 + _DAT_112f511c0) = param_1;
  lStack_50 = param_2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329c364; end: 10329c3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329c364(undefined8 param_1,undefined4 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(byte *)(unaff_x20 + _DAT_112f511b0) = (byte)param_2 & 1;
  *(byte *)(unaff_x20 + _DAT_112f511b8) = (byte)((uint)param_2 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f511c0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329c3dc; end: 10329c3df; -[SCContentFeedContainerPanPolicy copyWithZone:] */

void FUN_10329c3dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10329c3e0; end: 10329c3fb; -[SCContentFeedContainerPanPolicy description] */

void FUN_10329c3e0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329c3fc; end: 10329c497; -[SCContentFeedContainerPanPolicy init] */

void FUN_10329c3fc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCContentFeedContainerGesture/SCContentFeedContainerPanPolicyWrapper.swift",
                      0x4a,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329c444);
  (*pcVar1)();
}



/* Entry: 10329c498; end: 10329c4a7; -[SCSpotlightShareActionHandler message] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329c498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f511f0));
  return;
}



/* Entry: 10329c4a8; end: 10329c553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10329c4a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar2 = _DAT_112f511f8;
  func_0x000107c61614(unaff_x20 + _DAT_112f511f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f511f0) = param_1;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_50,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 10329c554; end: 10329c5e3; -[SCSpotlightShareActionHandler initWithMessage:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329c554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f511f8;
  func_0x000107c61614(param_1 + _DAT_112f511f8,0);
  *(undefined8 *)(param_1 + _DAT_112f511f0) = param_3;
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10329c5e4; end: 10329c62f; -[SCSpotlightShareActionHandler handleHeaderTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329c5e4(long param_1)

{
  param_1 = param_1 + _DAT_112f511f8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3cfc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10329c630; end: 10329c68f; -[SCSpotlightShareActionHandler handleStoryTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329c630(long param_1)

{
  param_1 = param_1 + _DAT_112f511f8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3cfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10329c690; end: 10329c6ef; -[SCSpotlightShareActionHandler init] */

void FUN_10329c690(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightShareMessageRenderingAPI.SpotlightShareActionHandler",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329c6bc);
  (*pcVar1)();
}



/* Entry: 10329c6f0; end: 10329c74b; -[SCSpotlightShareActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10329c6f0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f511f0));
  param_1 = param_1 + _DAT_112f511f8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10329c74c; end: 10329c76b;  */

void FUN_10329c74c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6d98);
  return;
}



/* Entry: 10329c76c; end: 10329c77f;  */

bool FUN_10329c76c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10329c780; end: 10329c82b;  */

void FUN_10329c780(void)

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



/* Entry: 10329c82c; end: 10329c853;  */

void FUN_10329c82c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10329c854; end: 10329c85f; +[SCSpotlightShareHelpers spotlightSharePreviewAspectRatio] */

undefined8 FUN_10329c854(void)

{
  return 0x3fe3aa03e88cb3c9;
}



/* Entry: 10329c860; end: 10329c88b; +[SCSpotlightShareHelpers spotlightShareAccessibilityId] */

void FUN_10329c860(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1354d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329c88c; end: 10329c90b; +[SCSpotlightShareHelpers isValidSenderUserId:senderUserId:snapchattersSynchronousDataFetcher:] */

uint FUN_10329c88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  FUN_10329c980(param_4,param_2,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c6142c(param_2);
  return (uint)param_4 & 1;
}



/* Entry: 10329c90c; end: 10329c947; -[SCSpotlightShareHelpers init] */

void FUN_10329c90c(undefined8 param_1)

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



/* Entry: 10329c948; end: 10329c97b;  */

void FUN_10329c948(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10329c97c; end: 10329c97f; -[SCSpotlightShareHelpers .cxx_destruct] */

void FUN_10329c97c(void)

{
  return;
}



/* Entry: 10329c980; end: 10329cb33;  */

void FUN_10329c980(undefined **param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e12b38;
  lVar3 = param_2;
  func_0x000107c5faec();
  lVar4 = lVar3;
  if (param_1 != ppuVar1 || param_2 != lVar3) {
    ppuVar2 = param_1;
    lVar4 = param_2;
    func_0x000107c605b8(param_1,param_2,ppuVar1,lVar3,0);
    func_0x000107c6142c(lVar3);
    if (((ulong)ppuVar2 & 1) != 0) {
      return;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e12b58;
    func_0x000107c5faec();
    if (param_1 != ppuVar1 || param_2 != lVar4) {
      ppuVar2 = param_1;
      func_0x000107c605b8(param_1,param_2,ppuVar1,lVar4,0);
      func_0x000107c6142c(lVar4);
      if (((ulong)ppuVar2 & 1) != 0) {
        return;
      }
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_3 == 0) {
        return;
      }
      func_0x000107c5fadc(param_1,param_2);
      lVar3 = param_3;
      func_0x000107c4d314();
      func_0x000107c61180();
      func_0x000107c615e8(param_3);
      func_0x000107c61170(param_1);
      if (lVar3 == 0) {
        return;
      }
      lVar4 = lVar3;
      func_0x000107c439a8();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c5c3a4();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          lVar4 = lVar5;
          func_0x000107c3e1d0();
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          if (lVar4 != 0) {
            func_0x000107c3d958(lVar4);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar3);
            return;
          }
        }
      }
      func_0x000107c61170(lVar3);
      return;
    }
  }
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 10329cb34; end: 10329cb37;  */

void FUN_10329cb34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f51228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba6268;
  func_0x000107c61520(&UNK_10dba6268,&UNK_110632228);
  puRam0000000112f51228 = puVar1;
  return;
}



/* Entry: 10329cb38; end: 10329cb77;  */

void FUN_10329cb38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f51228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba6268;
  func_0x000107c61520(&UNK_10dba6268,&UNK_110632228);
  puRam0000000112f51228 = puVar1;
  return;
}



/* Entry: 10329cb78; end: 10329cb87;  */

undefined1  [16] FUN_10329cb78(void)

{
  return ZEXT816(0x110632228);
}



/* Entry: 10329cb88; end: 10329cba7;  */

void FUN_10329cb88(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6e60);
  return;
}



/* Entry: 10329cba8; end: 10329cbbb;  */

bool FUN_10329cba8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10329cbbc; end: 10329cc67;  */

void FUN_10329cbbc(void)

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



/* Entry: 10329cc68; end: 10329cc93;  */

void FUN_10329cc68(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10329cc94; end: 10329ccd3;  */

void FUN_10329cc94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f51258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba6350;
  func_0x000107c61520(&UNK_10dba6350,&UNK_110632348);
  puRam0000000112f51258 = puVar1;
  return;
}



/* Entry: 10329ccd4; end: 10329cce3;  */

undefined1  [16] FUN_10329ccd4(void)

{
  return ZEXT816(0x110632348);
}



/* Entry: 10329cce4; end: 10329d107;  */

long FUN_10329cce4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10329d108; end: 10329d127; -[SCStorySharingComposerContextProviderServices discoverFeedStorySnapComposerContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d108(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f51260));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329d128; end: 10329d147; -[SCStorySharingComposerContextProviderServices legacyStoryComposerContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d128(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f51268));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329d148; end: 10329d167; -[SCStorySharingComposerContextProviderServices composerContextProviderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d148(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f51270));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329d168; end: 10329d24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f51260) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f51268) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f51270) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329d250; end: 10329d2df; -[SCStorySharingComposerContextProviderServices initWithDiscoverFeedStorySnapComposerContextProvider:legacyStoryComposerContextProvider:composerContextProviderFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f51260) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f51268) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f51270) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10329d2e0; end: 10329d33f; -[SCStorySharingComposerContextProviderServices init] */

void FUN_10329d2e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStorySharingServices.SCStorySharingComposerContextProviderServices",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329d30c);
  (*pcVar1)();
}



/* Entry: 10329d340; end: 10329d387; -[SCStorySharingComposerContextProviderServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010329d35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329d360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f51260));
  return;
}



/* Entry: 10329d388; end: 10329d397; -[_TtC22SCStorySharingServices22SCStorySharingServices storyManifestComposerPlayerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f512a0));
  return;
}



/* Entry: 10329d398; end: 10329d3a7; -[_TtC22SCStorySharingServices22SCStorySharingServices discoverFeedStorySnapValdiPlayerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f512a8));
  return;
}



/* Entry: 10329d3a8; end: 10329d3b7; -[_TtC22SCStorySharingServices22SCStorySharingServices legacyStoryComposerPlayerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f512b0));
  return;
}



/* Entry: 10329d3b8; end: 10329d3c7; -[_TtC22SCStorySharingServices22SCStorySharingServices snapDocPlayerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f512b8));
  return;
}



/* Entry: 10329d3c8; end: 10329d3d7; -[_TtC22SCStorySharingServices22SCStorySharingServices valdiContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f512c0));
  return;
}



/* Entry: 10329d3d8; end: 10329d473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f512a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f512a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f512b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f512b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f512c0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329d474; end: 10329d53b; -[_TtC22SCStorySharingServices22SCStorySharingServices initWithStoryManifestComposerPlayerProvider:discoverFeedStorySnapValdiPlayerProvider:legacyStoryComposerPlayerProvider:snapDocPlayerProvider:valdiContextProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f512a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f512a8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f512b0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112f512b8) = param_6;
  *(undefined8 *)(param_1 + _DAT_112f512c0) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10329d53c; end: 10329d59b; -[_TtC22SCStorySharingServices22SCStorySharingServices init] */

void FUN_10329d53c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStorySharingServices.SCStorySharingServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329d568);
  (*pcVar1)();
}



/* Entry: 10329d59c; end: 10329d603; -[_TtC22SCStorySharingServices22SCStorySharingServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010329d5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329d5d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329d5bc) */
/* WARNING: Removing unreachable block (ram,0x00010329d5dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f512a0));
  return;
}



/* Entry: 10329d604; end: 10329d60f; -[SCStorySharingUIConfiguration title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d604(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f512f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f512f0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329d610; end: 10329d61b; -[SCStorySharingUIConfiguration subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d610(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f512f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f512f8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329d61c; end: 10329d627; -[SCStorySharingUIConfiguration thumbnailUrlString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d61c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51300))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51300);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329d628; end: 10329d633; -[SCStorySharingUIConfiguration storyPosterUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d628(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51308))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51308);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329d634; end: 10329d643; -[SCStorySharingUIConfiguration badgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10329d634(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112f51310);
}



/* Entry: 10329d644; end: 10329d653; -[SCStorySharingUIConfiguration actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10329d644(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112f51318);
}



/* Entry: 10329d654; end: 10329d663; -[SCStorySharingUIConfiguration headerState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10329d654(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112f51320);
}



/* Entry: 10329d664; end: 10329d66f; -[SCStorySharingUIConfiguration errorMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d664(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51328))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51328);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329d670; end: 10329d67b; -[SCStorySharingUIConfiguration extensionCTATitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d670(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51330))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51330);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329d67c; end: 10329d687; -[SCStorySharingUIConfiguration viewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d67c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51338))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51338);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329d688; end: 10329d693; -[SCStorySharingUIConfiguration avatarBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d688(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51340))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51340);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329d694; end: 10329d6eb;  */

void FUN_10329d694(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10329d6ec; end: 10329d9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329d6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f512f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f512f8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51300);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51308);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined4 *)(unaff_x20 + _DAT_112f51310) = param_9;
  *(undefined4 *)(unaff_x20 + _DAT_112f51318) = param_10;
  *(undefined4 *)(unaff_x20 + _DAT_112f51320) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51328);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51330);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51338);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51340);
  *puVar1 = param_19;
  puVar1[1] = param_20;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329d9f8; end: 10329dbdb; -[SCStorySharingUIConfiguration initWithTitle:subtitle:thumbnailUrlString:storyPosterUserId:badgeType:actionType:headerState:errorMessage:extensionCTATitle:viewCount:avatarBackgroundColor:] */

void FUN_10329d9f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  undefined4 param_10,long param_11,long param_12,long param_13,long param_14)

{
  long lVar1;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if (param_3 == 0) {
    uStack_88 = 0;
    lStack_80 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_88 = param_2;
    lStack_80 = param_3;
  }
  if (param_4 == 0) {
    uStack_98 = 0;
    lStack_90 = 0;
    uStack_b8 = param_2;
  }
  else {
    func_0x000107c5faec();
    uStack_b8 = param_2;
    uStack_98 = param_2;
    lStack_90 = param_4;
  }
  if (param_5 == 0) {
    uStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_a8 = uStack_b8;
    lStack_a0 = param_5;
  }
  lVar1 = param_6;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar1 == 0) {
    uStack_b8 = 0;
    lStack_b0 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    lStack_b0 = param_6;
  }
  if (param_11 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(param_11);
  }
  if (param_12 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(param_12);
  }
  if (param_13 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(param_13);
  }
  if (param_14 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(param_14);
  }
  func_0x00010329d874(lStack_80,uStack_88,lStack_90,uStack_98,lStack_a0,uStack_a8,lStack_b0,
                      uStack_b8,param_7,param_8,param_9);
  return;
}



/* Entry: 10329dbdc; end: 10329dc0b;  */

void FUN_10329dbdc(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10329dc0c(param_1);
  return;
}



/* Entry: 10329dc0c; end: 10329dd7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329dc0c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_c0 [16];
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
  
  func_0x000107c614f0();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f512f0);
  puVar2[1] = uStack_38;
  *puVar2 = uStack_40;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f512f8);
  puVar2[1] = uStack_48;
  *puVar2 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f51300);
  puVar2[1] = uStack_58;
  *puVar2 = uStack_60;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f51308);
  puVar2[1] = uStack_68;
  *puVar2 = uStack_70;
  uVar1 = *(undefined4 *)((long)param_1 + 0x44);
  *(undefined4 *)(unaff_x20 + _DAT_112f51310) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(unaff_x20 + _DAT_112f51318) = uVar1;
  *(undefined4 *)(unaff_x20 + _DAT_112f51320) = *(undefined4 *)(param_1 + 9);
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uVar3 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f51328);
  puVar2[1] = param_1[0xb];
  *puVar2 = uVar3;
  uVar3 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f51330);
  puVar2[1] = param_1[0xd];
  *puVar2 = uVar3;
  uVar3 = param_1[0xe];
  uStack_a8 = param_1[0x11];
  uStack_b0 = param_1[0x10];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f51338);
  puVar2[1] = param_1[0xf];
  *puVar2 = uVar3;
  uVar3 = param_1[0x10];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f51340);
  puVar2[1] = param_1[0x11];
  *puVar2 = uVar3;
  func_0x000101223174(&uStack_40,auStack_c0);
  func_0x000101223174(&uStack_50,auStack_c0);
  func_0x000101223174(&uStack_60,auStack_c0);
  func_0x000101223174(&uStack_70,auStack_c0);
  func_0x000101223174(&uStack_80,auStack_c0);
  func_0x000101223174(&uStack_90,auStack_c0);
  func_0x000101223174(&uStack_a0,auStack_c0);
  func_0x000101223174(&uStack_b0,auStack_c0);
  FUN_10329dd7c(param_1);
  func_0x000107c61154(&stack0xffffffffffffff30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329dd7c; end: 10329ddaf;  */

undefined8 FUN_10329dd7c(undefined8 param_1)

{
  (*(code *)(undefined *)0x10329cd10)();
  return param_1;
}



/* Entry: 10329ddb0; end: 10329ddb3; -[SCStorySharingUIConfiguration copyWithZone:] */

void FUN_10329ddb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10329ddb4; end: 10329dde7; -[SCStorySharingUIConfiguration description] */

void FUN_10329ddb4(void)

{
  undefined1 auStack_a0 [144];
  
  FUN_10329e570(auStack_a0);
  FUN_10329dd7c(auStack_a0);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


