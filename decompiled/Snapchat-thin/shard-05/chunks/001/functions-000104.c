/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b4d1e4; end: 103b4d23f; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope init] */

void FUN_103b4d1e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPayoutsPresenterScope.SCPayoutsPresenterScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4d210);
  (*pcVar1)();
}



/* Entry: 103b4d240; end: 103b4d287; -[_TtC23SCPayoutsPresenterScope23SCPayoutsPresenterScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4d240(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee790));
  FUN_103b4d384(param_1 + _DAT_112fee798);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112fee7a0);
  return;
}



/* Entry: 103b4d288; end: 103b4d297;  */

undefined1  [16] FUN_103b4d288(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103b4d298; end: 103b4d383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4d298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112fee798;
  func_0x000107c61614(unaff_x20 + _DAT_112fee798,0);
  lVar3 = _DAT_112fee7a0;
  func_0x000107c61614(unaff_x20 + _DAT_112fee7a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fee790) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112fee7a8) = param_4;
  func_0x000100360844();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff70,puVar1);
  return;
}



/* Entry: 103b4d384; end: 103b4d3a7;  */

undefined8 FUN_103b4d384(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b4d3a8; end: 103b4d3ab;  */

void FUN_103b4d3a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee7b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc587f0;
  func_0x000107c61520(&UNK_10dc587f0,&UNK_1106d7da8);
  puRam0000000112fee7b0 = puVar1;
  return;
}



/* Entry: 103b4d3ac; end: 103b4d3eb;  */

void FUN_103b4d3ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee7b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc587f0;
  func_0x000107c61520(&UNK_10dc587f0,&UNK_1106d7da8);
  puRam0000000112fee7b0 = puVar1;
  return;
}



/* Entry: 103b4d3ec; end: 103b4d3fb;  */

undefined1  [16] FUN_103b4d3ec(void)

{
  return ZEXT816(0x1106d7da8);
}



/* Entry: 103b4d3fc; end: 103b4d447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4d3fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee7e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4d448; end: 103b4d4cf; -[_TtC23SCPayoutsPresenterScope38SCPayoutsPresenterScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4d448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 103b4d4d0; end: 103b4d52f; -[_TtC23SCPayoutsPresenterScope38SCPayoutsPresenterScopeFactoryServices init] */

void FUN_103b4d4d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPayoutsPresenterScope.SCPayoutsPresenterScopeFactoryServices",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4d4fc);
  (*pcVar1)();
}



/* Entry: 103b4d530; end: 103b4d53f;  */

undefined1  [16] FUN_103b4d530(void)

{
  return ZEXT816(0x1106d7e28);
}



/* Entry: 103b4d540; end: 103b4d54f; -[_TtC23SCPayoutsPresenterScope38SCPayoutsPresenterScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4d540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fee7e8));
  return;
}



/* Entry: 103b4d550; end: 103b4d567; -[SCContentProductPlaybackPageLauncherHandler payloadClass] */

void FUN_103b4d550(void)

{
  FUN_103b4e3b4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 103b4d568; end: 103b4d56b; -[SCContentProductPlaybackPageLauncherHandler setPayloadClass:] */

void FUN_103b4d568(void)

{
  return;
}



/* Entry: 103b4d56c; end: 103b4d5f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4d56c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee818) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112fee820,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fee828) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fee830) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4d5f4; end: 103b4d8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4d5f4(undefined8 param_1,code *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long alStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000100672b50(param_1,&uStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    uVar2 = 0;
    FUN_103b4e3b4(0);
    plVar3 = alStack_a8;
    func_0x000107c6147c(plVar3,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar4 = _DAT_11306e648;
    lVar1 = _DAT_112fee868;
    if (((ulong)plVar3 & 1) != 0) {
      lVar8 = *(long *)(alStack_a8[0] + _DAT_112fee868);
      func_0x000107c61428(lVar8 + _DAT_11306e648,alStack_a8,0,0);
      lVar8 = lVar8 + lVar4;
      func_0x000107c61618(lVar8);
      func_0x000107c61604(unaff_x20 + _DAT_112fee820,lVar8);
      func_0x000107c615e8(lVar8);
      lVar4 = _DAT_11306e648;
      lVar8 = *(long *)(alStack_a8[0] + lVar1);
      func_0x000107c61428(lVar8 + _DAT_11306e648,auStack_c0,1,0);
      func_0x000107c61604(lVar8 + lVar4);
      lVar4 = _DAT_112fee888;
      uVar9 = *(undefined8 *)(alStack_a8[0] + _DAT_112fee860);
      uVar10 = *(undefined8 *)(alStack_a8[0] + lVar1);
      func_0x000107c61428(alStack_a8[0] + _DAT_112fee888,auStack_d8,0,0);
      lVar4 = alStack_a8[0] + lVar4;
      func_0x000107c61618(lVar4);
      uVar11 = *(undefined8 *)(alStack_a8[0] + _DAT_112fee870);
      uVar12 = *(undefined8 *)(alStack_a8[0] + _DAT_112fee878);
      uVar7 = *(undefined8 *)(alStack_a8[0] + _DAT_112fee880);
      uVar2 = uVar7;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(uVar10);
      uVar5 = uVar12;
      func_0x000107c61174(uVar12);
      uVar6 = uVar9;
      FUN_10431f98c(uVar9,uVar10,lVar4,uVar11,uVar12,uVar7);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar2);
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fee818);
      *(undefined8 *)(unaff_x20 + _DAT_112fee818) = uVar6;
      func_0x000107c61174(uVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112fee830));
      lVar1 = _DAT_112fee890;
      func_0x000107c61428(alStack_a8[0] + _DAT_112fee890,auStack_f0,1,0);
      func_0x000107c61604(alStack_a8[0] + lVar1);
      if (param_2 == (code *)0x0) {
        func_0x000107c61170(alStack_a8[0]);
        func_0x000107c61170(uVar6);
        return;
      }
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
      (*param_2)(0,&uStack_90);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(alStack_a8[0]);
      goto LAB_103b4d898;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  (*param_2)(0,&uStack_90);
LAB_103b4d898:
  func_0x00010006e7f4(&uStack_90);
  return;
}



/* Entry: 103b4d8d4; end: 103b4d9a3; -[SCContentProductPlaybackPageLauncherHandler launchWithPayload:completion:] */

void FUN_103b4d8d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1106d7ef0;
    func_0x000107c613fc(&UNK_1106d7ef0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_103b4de5c;
  }
  FUN_103b4d5f4(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 103b4d9a4; end: 103b4da03; -[SCContentProductPlaybackPageLauncherHandler init] */

void FUN_103b4d9a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentProductPlaybackPageLauncher.ContentProductPlaybackPageLauncherHandler"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4d9d0);
  (*pcVar1)();
}



/* Entry: 103b4da04; end: 103b4da5b; -[SCContentProductPlaybackPageLauncherHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b4da04(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee830));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee828));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee818));
  param_1 = param_1 + _DAT_112fee820;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b4da5c; end: 103b4db77; -[SCContentProductPlaybackPageLauncherHandler dismissContentProductPlaybackScope] */

/* WARNING: Possible PIC construction at 0x000103b4da98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4dac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4da9c) */
/* WARNING: Removing unreachable block (ram,0x000103b4dac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4da5c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112fee830);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + _DAT_112fee818) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103b4db78; end: 103b4dbe3; -[SCContentProductPlaybackPageLauncherHandler playbackPresenterDidTearDown:playbackScope:] */

/* WARNING: Possible PIC construction at 0x000103b4dbcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4dbd0) */

void FUN_103b4db78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000103b4dadc(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103b4dbe4; end: 103b4dc8b; -[SCContentProductPlaybackPageLauncherHandler respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b4dbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  uVar3 = 0;
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_respondsToSelector__11262c7e0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if ((uVar3 & 1) == 0) {
    lVar2 = param_1 + _DAT_112fee820;
    func_0x000107c61618();
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c50648();
      func_0x000107c615e8(lVar2);
    }
  }
  else {
    lVar4 = 1;
  }
  func_0x000107c61170(param_1);
  return lVar4;
}



/* Entry: 103b4dc8c; end: 103b4dd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4dc8c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112fee820;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c614f0();
    lVar3 = lVar1;
    func_0x000107c50648();
    if ((int)lVar3 != 0) {
      param_1[3] = lVar2;
      *param_1 = lVar1;
      return;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_forwardingTargetForSelector__1125cb2d0,param_2)
  ;
  func_0x000107c61180();
  if (puVar4 == (undefined1 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000107c60234(param_1);
    func_0x000107c615e8(puVar4);
  }
  return;
}



/* Entry: 103b4dd5c; end: 103b4de3b; -[SCContentProductPlaybackPageLauncherHandler forwardingTargetForSelector:] */

void FUN_103b4dd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  func_0x000107c61174();
  FUN_103b4dc8c(auStack_60,param_3);
  func_0x000107c61170(param_1);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    func_0x000107c605b0(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103b4de3c; end: 103b4de5b;  */

void FUN_103b4de3c(void)

{
  func_0x000107c61168(&PTR_PTR_11292ff38);
  return;
}



/* Entry: 103b4de5c; end: 103b4de63;  */

void FUN_103b4de5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 103b4de64; end: 103b4de73; -[SCContentProductPlaybackPageLauncherPayload baseConfigurations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4de64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee860));
  return;
}



/* Entry: 103b4de74; end: 103b4de83; -[SCContentProductPlaybackPageLauncherPayload operaConfigurations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4de74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee868));
  return;
}



/* Entry: 103b4de84; end: 103b4de93; -[SCContentProductPlaybackPageLauncherPayload playbackMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b4de84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fee870);
}



/* Entry: 103b4de94; end: 103b4dea3; -[SCContentProductPlaybackPageLauncherPayload viewLocationSpecificConfigurations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4de94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee878));
  return;
}



/* Entry: 103b4dea4; end: 103b4deb3; -[SCContentProductPlaybackPageLauncherPayload loggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4dea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee880));
  return;
}



/* Entry: 103b4deb4; end: 103b4debf; -[SCContentProductPlaybackPageLauncherPayload deckContainerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4deb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee888;
  func_0x000107c61428(param_1 + _DAT_112fee888,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4dec0; end: 103b4decb; -[SCContentProductPlaybackPageLauncherPayload setDeckContainerFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4dec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee888;
  func_0x000107c61428(param_1 + _DAT_112fee888,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b4decc; end: 103b4ded7; -[SCContentProductPlaybackPageLauncherPayload delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4decc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee890;
  func_0x000107c61428(param_1 + _DAT_112fee890,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4ded8; end: 103b4df1b;  */

void FUN_103b4ded8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b4df1c; end: 103b4df27; -[SCContentProductPlaybackPageLauncherPayload setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4df1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee890;
  func_0x000107c61428(param_1 + _DAT_112fee890,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b4df28; end: 103b4df7b;  */

void FUN_103b4df28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b4df7c; end: 103b4e0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b4df7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fee888;
  func_0x000107c61614(unaff_x20 + _DAT_112fee888,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fee890,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fee860) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fee868) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fee870) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fee878) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fee880) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return puVar3;
}



/* Entry: 103b4e0e0; end: 103b4e1b7; -[SCContentProductPlaybackPageLauncherPayload initWithBaseConfigurations:operaConfigurations:playbackMode:viewLocationSpecificConfigurations:loggingInfo:deckContainerFactory:] */

undefined8
FUN_103b4e0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  uVar2 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  uVar3 = param_3;
  FUN_103b4e290(param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_8);
  return uVar3;
}



/* Entry: 103b4e1b8; end: 103b4e217; -[SCContentProductPlaybackPageLauncherPayload init] */

void FUN_103b4e1b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentProductPlaybackPageLauncher.ContentProductPlaybackPageLauncherPayload"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4e1e4);
  (*pcVar1)();
}



/* Entry: 103b4e218; end: 103b4e28f; -[SCContentProductPlaybackPageLauncherPayload .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b4e274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4e278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b4e218(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee860));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee868));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee878));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee880));
  param_1 = param_1 + _DAT_112fee888;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b4e290; end: 103b4e3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4e290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112fee888;
  func_0x000107c61614(unaff_x20 + _DAT_112fee888,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fee890,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fee860) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fee868) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fee870) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fee878) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fee880) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 103b4e3b4; end: 103b4e3d3;  */

void FUN_103b4e3b4(void)

{
  func_0x000107c61168(&PTR_PTR_112930010);
  return;
}



/* Entry: 103b4e3d4; end: 103b4e4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b4e3d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_60 [8];
  long lStack_50;
  long lStack_48;
  
  puVar5 = auStack_60;
  func_0x000107c610f8();
  lVar2 = 0;
  FUN_103b4de3c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112fee818) = 0;
  func_0x000107c61614(lVar3 + _DAT_112fee820,0);
  *(undefined8 *)(lVar3 + _DAT_112fee828) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112fee830) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  *(long **)(unaff_x20 + _DAT_112fee8c0) = plVar4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar5;
}



/* Entry: 103b4e4c8; end: 103b4e527; -[_TtC34ContentProductPlaybackPageLauncher40ContentProductPlaybackPageLauncherPlugin init] */

void FUN_103b4e4c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentProductPlaybackPageLauncher.ContentProductPlaybackPageLauncherPlugin",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4e4f4);
  (*pcVar1)();
}



/* Entry: 103b4e528; end: 103b4e537; -[_TtC34ContentProductPlaybackPageLauncher40ContentProductPlaybackPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4e528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee8c0));
  return;
}



/* Entry: 103b4e538; end: 103b4e5c7; -[_TtC34ContentProductPlaybackPageLauncher40ContentProductPlaybackPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4e538(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112fee8c0);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103b4e5c8; end: 103b4e5cb; -[_TtC34ContentProductPlaybackPageLauncher40ContentProductPlaybackPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_103b4e5c8(void)

{
  return;
}



/* Entry: 103b4e5cc; end: 103b4e64b;  */

void FUN_103b4e5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_1106d7f18;
  func_0x000107c613fc(&UNK_1106d7f18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103b4e7b8,puVar1);
  return;
}



/* Entry: 103b4e64c; end: 103b4e7b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4e64c(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 auStack_78 [16];
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar3 = lStack_58;
  uVar2 = 0x112e4c880;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  func_0x00010017da58(lVar3,uVar2);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170();
  func_0x000100083b20(&lStack_58);
  FUN_103b4e7c0();
  func_0x000107c610f8();
  lVar5 = 0;
  FUN_103b4de3c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112fee818) = 0;
  func_0x000107c61614(lVar6 + _DAT_112fee820,0);
  *(long *)(lVar6 + _DAT_112fee828) = lStack_58;
  *(undefined **)(lVar6 + _DAT_112fee830) = puVar4;
  puVar1 = PTR_s_init_1125d9248;
  lVar7 = lStack_58;
  lStack_68 = lVar6;
  lStack_60 = lVar5;
  func_0x000107c61174(lStack_58);
  func_0x000107c61174(puVar4);
  plVar8 = &lStack_68;
  func_0x000107c61154(plVar8,puVar1);
  *(long **)(lVar3 + _DAT_112fee8c0) = plVar8;
  puVar9 = auStack_78;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(puVar4);
  *param_1 = (long)puVar9;
  return;
}



/* Entry: 103b4e7b8; end: 103b4e7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4e7b8(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_78 [16];
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar3 = lStack_58;
  uVar2 = 0x112e4c880;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  func_0x00010017da58(lVar3,uVar2);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170();
  func_0x000100083b20(&lStack_58);
  FUN_103b4e7c0();
  func_0x000107c610f8();
  lVar5 = 0;
  FUN_103b4de3c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112fee818) = 0;
  func_0x000107c61614(lVar6 + _DAT_112fee820,0);
  *(long *)(lVar6 + _DAT_112fee828) = lStack_58;
  *(undefined **)(lVar6 + _DAT_112fee830) = puVar4;
  puVar1 = PTR_s_init_1125d9248;
  lVar7 = lStack_58;
  lStack_68 = lVar6;
  lStack_60 = lVar5;
  func_0x000107c61174(lStack_58);
  func_0x000107c61174(puVar4);
  plVar8 = &lStack_68;
  func_0x000107c61154(plVar8,puVar1);
  *(long **)(lVar3 + _DAT_112fee8c0) = plVar8;
  puVar9 = auStack_78;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(puVar4);
  *param_1 = (long)puVar9;
  return;
}



/* Entry: 103b4e7c0; end: 103b4e7df;  */

void FUN_103b4e7c0(void)

{
  func_0x000107c61168(&PTR_PTR_112930100);
  return;
}



/* Entry: 103b4e7e0; end: 103b4e7ef;  */

undefined1  [16] FUN_103b4e7e0(void)

{
  return ZEXT816(0x1106d7f40);
}



/* Entry: 103b4e7f0; end: 103b4e8b3;  */

void FUN_103b4e7f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fee938;
  func_0x0001000285a8(0x112fee938,&UNK_10dc58a60);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b4e8b4; end: 103b4e8b7;  */

void FUN_103b4e8b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58a70;
  func_0x000107c61520(&UNK_10dc58a70,&UNK_1106d8050);
  puRam0000000112fee990 = puVar1;
  return;
}



/* Entry: 103b4e8b8; end: 103b4e923;  */

void FUN_103b4e8b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58a70;
  func_0x000107c61520(&UNK_10dc58a70,&UNK_1106d8050);
  puRam0000000112fee990 = puVar1;
  return;
}



/* Entry: 103b4e924; end: 103b4e927;  */

void FUN_103b4e924(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58b18;
  func_0x000107c61520(&UNK_10dc58b18,&UNK_1106d80e0);
  puRam0000000112fee9a8 = puVar1;
  return;
}



/* Entry: 103b4e928; end: 103b4e993;  */

void FUN_103b4e928(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58b18;
  func_0x000107c61520(&UNK_10dc58b18,&UNK_1106d80e0);
  puRam0000000112fee9a8 = puVar1;
  return;
}



/* Entry: 103b4e994; end: 103b4ea17;  */

void FUN_103b4e994(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103b4ea18; end: 103b4ea1b;  */

void FUN_103b4ea18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58b88;
  func_0x000107c61520(&UNK_10dc58b88,&UNK_1106d80e0);
  puRam0000000112fee9c0 = puVar1;
  return;
}



/* Entry: 103b4ea1c; end: 103b4ea5b;  */

void FUN_103b4ea1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58b88;
  func_0x000107c61520(&UNK_10dc58b88,&UNK_1106d80e0);
  puRam0000000112fee9c0 = puVar1;
  return;
}



/* Entry: 103b4ea5c; end: 103b4ea5f;  */

void FUN_103b4ea5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58b40;
  func_0x000107c61520(&UNK_10dc58b40,&UNK_1106d80e0);
  puRam0000000112fee9c8 = puVar1;
  return;
}



/* Entry: 103b4ea60; end: 103b4ea9f;  */

void FUN_103b4ea60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fee9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58b40;
  func_0x000107c61520(&UNK_10dc58b40,&UNK_1106d80e0);
  puRam0000000112fee9c8 = puVar1;
  return;
}



/* Entry: 103b4eaa0; end: 103b4ec37;  */

void FUN_103b4eaa0(void)

{
  return;
}



/* Entry: 103b4ec38; end: 103b4ec83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4ec38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feea00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4ec84; end: 103b4edc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103b4ec84(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112fee918);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_103b4eea8(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_103b4eea8(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x1b);
  return puVar5;
}



/* Entry: 103b4edc4; end: 103b4ee23; -[_TtC28SCPageLauncherPluginRegistry32SCPageLauncherPluginSaberService buildSaberPlugins] */

void FUN_103b4edc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b4ec84();
  func_0x000107c61170(param_1);
  uVar2 = 0x112feea30;
  func_0x0001000285a8(0x112feea30,&UNK_10dc58c78);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b4ee24; end: 103b4ee83; -[_TtC28SCPageLauncherPluginRegistry32SCPageLauncherPluginSaberService init] */

void FUN_103b4ee24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPageLauncherPluginRegistry.SCPageLauncherPluginSaberService",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4ee50);
  (*pcVar1)();
}



/* Entry: 103b4ee84; end: 103b4eea7; -[_TtC28SCPageLauncherPluginRegistry32SCPageLauncherPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4ee84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112feea00));
  return;
}



/* Entry: 103b4eea8; end: 103b4efcf;  */

ulong FUN_103b4eea8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4efd0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103b4efe0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4efcc);
      (*pcVar1)();
    }
    FUN_103b4f060(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103b4efd0; end: 103b4efdf;  */

undefined1  [16] FUN_103b4efd0(void)

{
  return ZEXT816(0x1106d8160);
}



/* Entry: 103b4efe0; end: 103b4f05f;  */

undefined * FUN_103b4efe0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000103b4ee94();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103b4f060; end: 103b4f183;  */

long FUN_103b4f060(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b4f180);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b4f184);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112feea30;
        func_0x0001000285a8(0x112feea30,&UNK_10dc58c78);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112feea30;
      func_0x0001000285a8(0x112feea30,&UNK_10dc58c78);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103b4f17c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103b4f184; end: 103b4f1a3; -[_TtC19SCActivityFeedScope19SCActivityFeedScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f184(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112feea40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4f1a4; end: 103b4f1ef; -[_TtC19SCActivityFeedScope19SCActivityFeedScope profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f1a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feea48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feea48))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b4f1f0; end: 103b4f237; -[_TtC19SCActivityFeedScope19SCActivityFeedScope activityFeedScopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f1f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112feea50;
  func_0x000107c61428(param_1 + _DAT_112feea50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4f238; end: 103b4f28f; -[_TtC19SCActivityFeedScope19SCActivityFeedScope setActivityFeedScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112feea50;
  func_0x000107c61428(param_1 + _DAT_112feea50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b4f290; end: 103b4f29f; -[_TtC19SCActivityFeedScope19SCActivityFeedScope businessProfileAndUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feea58));
  return;
}



/* Entry: 103b4f2a0; end: 103b4f2ab; -[_TtC19SCActivityFeedScope19SCActivityFeedScope snapIdFromPushNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f2a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112feea60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112feea60);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b4f2ac; end: 103b4f2b7; -[_TtC19SCActivityFeedScope19SCActivityFeedScope onLoadEventId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f2ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112feea68))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112feea68);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b4f2b8; end: 103b4f2c3; -[_TtC19SCActivityFeedScope19SCActivityFeedScope notificationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f2b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112feea70))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112feea70);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b4f2c4; end: 103b4f2cf; -[_TtC19SCActivityFeedScope19SCActivityFeedScope sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f2c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112feea78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112feea78);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b4f2d0; end: 103b4f327;  */

void FUN_103b4f2d0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b4f328; end: 103b4f337; -[_TtC19SCActivityFeedScope19SCActivityFeedScope bellIconLastSeenTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feea80));
  return;
}



/* Entry: 103b4f338; end: 103b4f347; -[_TtC19SCActivityFeedScope19SCActivityFeedScope bellIconIsBadged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feea88));
  return;
}



/* Entry: 103b4f348; end: 103b4f4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b4f348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [32];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112feea50;
  func_0x000107c61614(unaff_x20 + _DAT_112feea50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112feea40) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea48);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112feea58) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea60);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea68);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea70);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea78);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112feea80) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112feea88) = param_15;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_90;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 103b4f4ec; end: 103b4f653; -[_TtC19SCActivityFeedScope19SCActivityFeedScope initWithUiContainer:profileId:activityFeedScopeDelegate:businessProfileAndUserData:snapIdFromPushNotification:onLoadEventId:notificationType:sourceType:bellIconLastSeenTimestamp:bellIconIsBadged:] */

undefined8
FUN_103b4f4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
             long param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c5faec();
  if (param_7 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uVar4 = param_2;
  }
  else {
    uStack_88 = param_2;
    func_0x000107c5faec();
    uVar4 = uStack_88;
    uStack_80 = param_7;
  }
  if (param_8 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_98 = uVar4;
    uStack_90 = param_8;
  }
  if (param_9 == 0) {
    param_9 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar3 = uVar4;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  lVar1 = param_10;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar1 == 0) {
    param_10 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  uVar2 = param_3;
  FUN_103b4f780(param_3,param_4,param_2,param_5,param_6,uStack_80,uStack_88,uStack_90,uStack_98,
                param_9,uVar3,param_10,uVar4,param_11,param_12);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  return uVar2;
}



/* Entry: 103b4f654; end: 103b4f6b3; -[_TtC19SCActivityFeedScope19SCActivityFeedScope init] */

void FUN_103b4f654(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCActivityFeedScope.SCActivityFeedScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4f680);
  (*pcVar1)();
}



/* Entry: 103b4f6b4; end: 103b4f77f; -[_TtC19SCActivityFeedScope19SCActivityFeedScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b4f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4f764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b4f708) */
/* WARNING: Removing unreachable block (ram,0x000103b4f768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f6b4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112feea40));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112feea48 + 8));
  FUN_103b4f908(param_1 + _DAT_112feea50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112feea58));
  return;
}



/* Entry: 103b4f780; end: 103b4f907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [32];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112feea50;
  func_0x000107c61614(unaff_x20 + _DAT_112feea50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112feea40) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea48);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112feea58) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea60);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea68);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea70);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feea78);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112feea80) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112feea88) = param_15;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff70,puVar2);
  return;
}



/* Entry: 103b4f908; end: 103b4f92b;  */

undefined8 FUN_103b4f908(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b4f92c; end: 103b4f973; -[_TtC30SCPublicProfileManagementScope30SCPublicProfileManagementScope deeplinkPlaybackParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f92c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112feeab8;
  func_0x000107c61428(param_1 + _DAT_112feeab8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103b4f974; end: 103b4f9d7; -[_TtC30SCPublicProfileManagementScope30SCPublicProfileManagementScope setDeeplinkPlaybackParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f974(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112feeab8;
  func_0x000107c61428(param_1 + _DAT_112feeab8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103b4f9d8; end: 103b4f9f7; -[_TtC30SCPublicProfileManagementScope30SCPublicProfileManagementScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f9d8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112feeac0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4f9f8; end: 103b4fa07; -[_TtC30SCPublicProfileManagementScope30SCPublicProfileManagementScope businessProfileAndUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4f9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feeac8));
  return;
}



/* Entry: 103b4fa08; end: 103b4fa53; -[_TtC30SCPublicProfileManagementScope30SCPublicProfileManagementScope initialRouteName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4fa08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feead0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feead0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b4fa54; end: 103b4fa63; -[_TtC30SCPublicProfileManagementScope30SCPublicProfileManagementScope notification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4fa54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feead8));
  return;
}



/* Entry: 103b4fa64; end: 103b4faab; -[_TtC30SCPublicProfileManagementScope30SCPublicProfileManagementScope profileManagementScopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4fa64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112feeae0;
  func_0x000107c61428(param_1 + _DAT_112feeae0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4faac; end: 103b4fb03; -[_TtC30SCPublicProfileManagementScope30SCPublicProfileManagementScope setProfileManagementScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4faac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112feeae0;
  func_0x000107c61428(param_1 + _DAT_112feeae0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


