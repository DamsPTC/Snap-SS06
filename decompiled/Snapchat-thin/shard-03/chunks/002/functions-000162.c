/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10264a2dc; end: 10264a35b;  */

undefined8 FUN_10264a2dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10264a35c; end: 10264a367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264a35c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar7 + 0x10,auStack_88,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uStack_98 = 0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x22);
    func_0x000107c5fb78(0xd00000000000001d,0x800000010ef26fb0);
    puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    puVar3 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    func_0x000107c5fddc(uVar11,&uStack_98,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x2c,0xe100000000000000);
    func_0x000107c5fddc(uVar12,&uStack_98,puVar3,puVar4);
    uVar11 = uStack_90;
    func_0x000107c5edd0(puVar9,uStack_98,uStack_90);
    func_0x000107c6142c(uVar11);
    puVar2 = puVar9;
    (**(code **)(lVar10 + 0x30))(puVar9,1,lVar1);
    if ((int)puVar2 == 1) {
      FUN_10264a2dc(puVar9,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar8,puVar9,lVar1);
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c5ed90();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar12 = 0;
      func_0x000100dfa6ec(0);
      uVar11 = 0x112d377a8;
      func_0x00010264a31c(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
      puVar6 = puVar5;
      func_0x000107c5f9dc(puVar5,uVar12,PTR___sypN_11034f1a8 + 8,uVar11);
      func_0x000107c6142c(puVar5);
      func_0x000107c4de70(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar6);
      (**(code **)(lVar10 + 8))(lVar8,lVar1);
    }
    func_0x000107c4200c(param_1);
    lVar1 = lVar7 + _DAT_112eb13b0;
    uVar11 = *(undefined8 *)(lVar1 + 0x18);
    lVar8 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar11);
    (**(code **)(lVar8 + 0x68))(0,uVar11,lVar8);
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 10264a368; end: 10264a3a3;  */

void FUN_10264a368(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10264a3a4; end: 10264a3af;  */

void FUN_10264a3a4(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_102648000();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10264a3b0; end: 10264a42f;  */

void FUN_10264a3b0(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x10264a650;
  *(undefined4 *)(plVar7 + 10) = uVar3;
  plVar7[4] = lVar5;
  plVar7[5] = lVar2;
  plVar7[2] = lVar6;
  plVar7[3] = lVar1;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar4 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[6] = lVar6;
  lVar6 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar7[7] = lVar5;
  plVar7[8] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102648728,lVar5,lVar6);
  return;
}



/* Entry: 10264a430; end: 10264a453;  */

void FUN_10264a430(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1026473d0();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10264a454; end: 10264a493;  */

void FUN_10264a454(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10264a494; end: 10264a4c7;  */

void FUN_10264a494(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10264a4c8; end: 10264a527;  */

void FUN_10264a4c8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10264a528;
  plVar5[6] = lVar2;
  plVar5[7] = lVar6;
  plVar5[5] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[8] = lVar3;
  uVar4 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102649354,lVar2,uVar4);
  return;
}



/* Entry: 10264a528; end: 10264a563;  */

void FUN_10264a528(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010264a560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10264a564; end: 10264a5d3;  */

void FUN_10264a564(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10264a654;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10264a5d4; end: 10264a657;  */

void FUN_10264a5d4(long param_1,long param_2)

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



/* Entry: 10264a658; end: 10264a6b3;  */

void FUN_10264a658(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10264a6b4(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10264a6b4; end: 10264a79b;  */

/* WARNING: Possible PIC construction at 0x00010264a72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264a754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264a77c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264a758) */
/* WARNING: Removing unreachable block (ram,0x00010264a730) */
/* WARNING: Removing unreachable block (ram,0x00010264a780) */

void FUN_10264a6b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126dbc50;
  func_0x000107c61168(PTR_PTR_1126dbc50);
  lVar2 = param_1;
  func_0x000107c6148c(param_1,puVar1);
  if (lVar2 != 0) {
    param_1 = 0x69566c6c6f726373;
    func_0x000107c5fadc(0x69566c6c6f726373,0xea00000000007765);
    func_0x000107c5e338();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10264a79c; end: 10264a857;  */

void FUN_10264a79c(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    lVar3 = lVar2;
    func_0x000107c614f0();
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10264a850);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10264a854);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10264a858);
      (*pcVar1)();
    }
    (**(code **)(lVar4 + 8))((long)param_1,lVar3,lVar4);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10264a858; end: 10264ac1f;  */

undefined * FUN_10264a858(undefined *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    param_1 = PTR_PTR_1126ae568;
    func_0x000107c610f8(PTR_PTR_1126ae568);
    func_0x000107c453e4();
    puVar3 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    lVar4 = *(long *)(param_2 + 0x18);
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar4 + 0x18))(param_1,lVar2,lVar4);
    puVar3 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 10264ac20; end: 10264aca7; -[_TtC27MapFocusCardsImplementation27MapFocusCardsViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264ac20(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  *(undefined8 *)(param_1 + _DAT_112eb1430) = 0;
  lVar1 = _DAT_112eb1438;
  puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000048,0x800000010ef27040,
                      "MapFocusCardsImplementation/MapFocusCardsViewController.swift",0x3d,2,0x89,0)
  ;
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10264aca8);
  (*pcVar2)();
}



/* Entry: 10264aca8; end: 10264ad2f; -[_TtC27MapFocusCardsImplementation27MapFocusCardsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264aca8(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  *(undefined8 *)(param_1 + _DAT_112eb1430) = 0;
  lVar1 = _DAT_112eb1438;
  puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapFocusCardsImplementation/MapFocusCardsViewController.swift",0x3d,2,0x8e,0)
  ;
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10264ad30);
  (*pcVar2)();
}



/* Entry: 10264ad30; end: 10264ad3f; -[_TtC27MapFocusCardsImplementation27MapFocusCardsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264ad30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112eb1430));
  return;
}



/* Entry: 10264ad40; end: 10264ad73;  */

void FUN_10264ad40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10264ad74; end: 10264adcb; -[_TtC27MapFocusCardsImplementation27MapFocusCardsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010264ad90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264adb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264ad94) */
/* WARNING: Removing unreachable block (ram,0x00010264adb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264ad74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb1430));
  return;
}



/* Entry: 10264adcc; end: 10264adeb;  */

void FUN_10264adcc(void)

{
  func_0x000107c61168(&PTR_PTR_112855540);
  return;
}



/* Entry: 10264adec; end: 10264adfb; -[_TtC27MapFocusCardsImplementation27MapFocusCardsViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264adec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb1438));
  return;
}



/* Entry: 10264adfc; end: 10264ae03; -[_TtC27MapFocusCardsImplementation27MapFocusCardsViewController autoSizingEnabled] */

undefined8 FUN_10264adfc(void)

{
  return 0;
}



/* Entry: 10264ae04; end: 10264ae0f; -[_TtC27MapFocusCardsImplementation27MapFocusCardsViewController trayFeatureName] */

void FUN_10264ae04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110da02f8);
  return;
}



/* Entry: 10264ae10; end: 10264ae5b;  */

void FUN_10264ae10(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb1478,&UNK_10dac5d70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10264aebc,param_1);
  return;
}



/* Entry: 10264ae5c; end: 10264aebb;  */

void FUN_10264ae5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10264c774();
  func_0x000107c610f8();
  uVar1 = uStack_38;
  FUN_10264c024();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10264aebc; end: 10264aec3;  */

void FUN_10264aebc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10264c774();
  func_0x000107c610f8();
  uVar1 = uStack_38;
  FUN_10264c024();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10264aec4; end: 10264af03;  */

undefined8 FUN_10264aec4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_10264c024(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10264af04; end: 10264b0e3;  */

/* WARNING: Possible PIC construction at 0x00010264af88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264aff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264b05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264b0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264b060) */
/* WARNING: Removing unreachable block (ram,0x00010264aff8) */
/* WARNING: Removing unreachable block (ram,0x00010264af8c) */
/* WARNING: Removing unreachable block (ram,0x00010264b0c8) */

void FUN_10264af04(void)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_11052da80;
  func_0x000107c613fc(&UNK_11052da80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  func_0x000107c61174();
  func_0x0001009548b0(0x23,0,0x3c,2,0,0,&UNK_10dac5d80,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10264b0e4; end: 10264b177; -[_TtC27MapFocusCardsImplementation24MapFocusCardsReactionBar initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264b0e4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  *(undefined8 *)(param_1 + _DAT_112eb14a8) = 0;
  lVar1 = param_1 + _DAT_112eb1480;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  puVar2 = (undefined8 *)(param_1 + _DAT_112eb1488);
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapFocusCardsImplementation/MapFocusCardsReactionBar.swift",0x3a,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10264b178);
  (*pcVar3)();
}



/* Entry: 10264b178; end: 10264b22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10264b178(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    if (param_3 != 0) {
      puVar1 = (undefined8 *)(param_5 + _DAT_112eb1488);
      func_0x000107c61428(puVar1,auStack_70,1,0);
      uVar2 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c6142c(uVar2);
      return 1;
    }
    func_0x000107c61170();
  }
  return 0;
}



/* Entry: 10264b230; end: 10264b2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264b230(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_3 + _DAT_112eb1488);
    func_0x000107c61428(puVar1,auStack_60,1,0);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61170(param_3);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 10264b2b8; end: 10264b2cf;  */

void FUN_10264b2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b2d0,0,0);
  return;
}



/* Entry: 10264b2d0; end: 10264b36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264b2d0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar2 = unaff_x22 + 0x10;
  func_0x0001000a8868();
  *(long *)(unaff_x22 + 0x80) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(lVar1 + 8);
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b36c,uVar3,uVar4);
  return;
}



/* Entry: 10264b36c; end: 10264b3d7;  */

void FUN_10264b36c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x88);
  uVar4 = (undefined1)*(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  (*pcVar1)();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  *(undefined1 *)(unaff_x22 + 0xb8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b3d8,0,0);
  return;
}



/* Entry: 10264b3d8; end: 10264b47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264b3d8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10264b47c;
                    /* WARNING: Could not recover jumptable at 0x00010264b478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0),
             *(undefined1 *)(unaff_x22 + 0xb8),uVar2,lVar3);
  return;
}



/* Entry: 10264b47c; end: 10264b4cb;  */

void FUN_10264b47c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b4cc,0,0);
  return;
}



/* Entry: 10264b4cc; end: 10264b5cf;  */

void FUN_10264b4cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined1 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000834e4(unaff_x22 + 0x38);
  puVar6 = &UNK_11052db40;
  func_0x000107c613fc(&UNK_11052db40,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  puVar6[0x28] = uVar5;
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  *(undefined8 *)(puVar6 + 0x38) = uVar4;
  puVar7 = &UNK_11052db68;
  func_0x000107c613fc(&UNK_11052db68,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_10dac5e28;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar2);
  func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dac5e30,puVar7,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar7);
  func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010264b5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10264b5d0; end: 10264b647;  */

void FUN_10264b5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined1 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b648,uVar1,uVar2);
  return;
}



/* Entry: 10264b648; end: 10264b817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264b648(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar10 = *(ulong *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  if (uVar10 < 4) {
    uVar9 = *(ulong *)(*(long *)(unaff_x22 + 0x10) + _DAT_112eb14a0);
    uVar10 = uVar9;
    func_0x000107c3e158();
    func_0x000107c61180();
    uVar7 = 0;
    FUN_10264c8a4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar8 = uVar10;
    func_0x000107c5fc54(uVar10,uVar7);
    func_0x000107c61170(uVar10);
    if (uVar8 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar10 = uVar8;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar8);
    if (SBORROW8(uVar10,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10264b7f8);
      (*pcVar6)();
    }
    if (*(long *)(unaff_x22 + 0x30) < (long)(uVar10 - 1)) {
      func_0x000107c3e158();
      func_0x000107c61180();
      uVar10 = uVar9;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar9);
      uVar8 = *(ulong *)(unaff_x22 + 0x30);
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10264b818);
          (*pcVar6)();
        }
        uVar8 = *(ulong *)(uVar10 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        FUN_10264bcc0(uVar8,uVar10,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      func_0x000107c6142c(uVar10);
      uVar7 = 0;
      FUN_10264f1b4(0);
      uVar10 = uVar8;
      func_0x000107c61480(uVar8,uVar7);
      if (uVar10 != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
        uVar4 = *(undefined1 *)(unaff_x22 + 0x40);
        func_0x000107c55260();
        puVar1 = (undefined8 *)(uVar10 + _DAT_112eb1570);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        *puVar1 = uVar11;
        puVar1[1] = uVar7;
        uVar5 = *(undefined1 *)(puVar1 + 2);
        *(undefined1 *)(puVar1 + 2) = uVar4;
        func_0x000101107170(uVar2,uVar3,uVar5);
        func_0x000101107198(uVar11,uVar7,uVar4);
      }
      func_0x000107c61170(uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010264b7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10264b818; end: 10264bb93;  */

/* WARNING: Possible PIC construction at 0x00010264b8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264ba54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264b998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264b8e4) */
/* WARNING: Removing unreachable block (ram,0x00010264b99c) */
/* WARNING: Removing unreachable block (ram,0x00010264bb4c) */
/* WARNING: Removing unreachable block (ram,0x00010264bb50) */
/* WARNING: Removing unreachable block (ram,0x00010264b9d4) */
/* WARNING: Removing unreachable block (ram,0x00010264b9d8) */
/* WARNING: Removing unreachable block (ram,0x00010264b9f0) */
/* WARNING: Removing unreachable block (ram,0x00010264bb24) */
/* WARNING: Removing unreachable block (ram,0x00010264b9f8) */
/* WARNING: Removing unreachable block (ram,0x00010264ba28) */
/* WARNING: Removing unreachable block (ram,0x00010264b9fc) */
/* WARNING: Removing unreachable block (ram,0x00010264bb44) */
/* WARNING: Removing unreachable block (ram,0x00010264ba08) */
/* WARNING: Removing unreachable block (ram,0x00010264ba54) */
/* WARNING: Removing unreachable block (ram,0x00010264ba18) */
/* WARNING: Removing unreachable block (ram,0x00010264ba24) */
/* WARNING: Removing unreachable block (ram,0x00010264bb48) */
/* WARNING: Removing unreachable block (ram,0x00010264b928) */
/* WARNING: Removing unreachable block (ram,0x00010264b954) */
/* WARNING: Removing unreachable block (ram,0x00010264ba58) */
/* WARNING: Removing unreachable block (ram,0x00010264ba74) */
/* WARNING: Removing unreachable block (ram,0x00010264baa4) */
/* WARNING: Removing unreachable block (ram,0x00010264bb04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264b818(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112eb14a0);
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_10264c8a4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = uVar5;
  func_0x000107c5fc54(uVar5,uVar3);
  func_0x000107c61170(uVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar1 = uVar5 - 1;
    if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10264bb70);
      (*pcVar2)();
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10264bb90);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10264bb94);
        (*pcVar2)();
      }
      func_0x000107c61174(*(undefined8 *)(uVar4 + uVar1 * 8 + 0x20));
    }
    else {
      FUN_10264bcc0(uVar1,uVar4,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 10264bb94; end: 10264bbe3; -[_TtC27MapFocusCardsImplementation24MapFocusCardsReactionBar reactionButtonTappedWithSender:] */

/* WARNING: Possible PIC construction at 0x00010264bbcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264bbd0) */

void FUN_10264bb94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10264b818(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10264bbe4; end: 10264bc43; -[_TtC27MapFocusCardsImplementation24MapFocusCardsReactionBar initWithFrame:] */

void FUN_10264bbe4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsImplementation.MapFocusCardsReactionBar",0x34,"init(frame:)",0xc
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10264bc10);
  (*pcVar1)();
}



/* Entry: 10264bc44; end: 10264bcbf; -[_TtC27MapFocusCardsImplementation24MapFocusCardsReactionBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264bc44(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb1490));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb1498));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb14a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb14a8));
  FUN_10264c794(param_1 + _DAT_112eb1480);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb1488 + 8))
  ;
  return;
}



/* Entry: 10264bcc0; end: 10264be7b;  */

ulong FUN_10264bcc0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10264bda4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10264bda8);
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
  FUN_10264c8a4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10264be7c);
  (*pcVar2)();
}



/* Entry: 10264be7c; end: 10264c023;  */

ulong FUN_10264be7c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10264bf50);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10264bf54);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000104385a9c(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar3 = 0;
    func_0x000104385a9c(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x757461745370614d,0xed0000636a624f73);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10264c024);
  (*pcVar2)();
}



/* Entry: 10264c024; end: 10264c597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10264c024(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112eb14a8) = 0;
  lVar1 = unaff_x20 + _DAT_112eb1480;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb1488);
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar11 = *(undefined8 *)(param_1 + _DAT_112fa9600);
  *(undefined8 *)(unaff_x20 + _DAT_112eb1490) = uVar11;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112fa9608);
  *(undefined8 *)(unaff_x20 + _DAT_112eb1498) = uVar10;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112eb14a0) = puVar3;
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c61154(0,0,0,0,puVar4,PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112eb14a0;
  uVar11 = *(undefined8 *)(puVar4 + _DAT_112eb14a0);
  puVar5 = puVar4;
  func_0x000107c61174();
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4acb0(puVar5);
  func_0x000107c61180();
  uVar10 = uVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  lVar12 = _DAT_112eb14a8;
  uVar11 = *(undefined8 *)(puVar5 + _DAT_112eb14a8);
  *(undefined8 *)(puVar5 + _DAT_112eb14a8) = uVar10;
  func_0x000107c61170(uVar11);
  func_0x000107c52b2c(*(undefined8 *)(puVar4 + lVar1));
  func_0x000107c54280(*(undefined8 *)(puVar4 + lVar1));
  func_0x000107c3d89c(puVar5);
  func_0x000107c5a050(*(undefined8 *)(puVar4 + lVar1));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 7;
  *(undefined8 *)(puVar7 + 0x10) = 3;
  uVar11 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5ce8c(puVar5);
  func_0x000107c61180();
  uVar10 = uVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x20) = uVar10;
  uVar11 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5cbe4(puVar5);
  func_0x000107c61180();
  uVar10 = uVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  uVar11 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar10 = uVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x30) = uVar10;
  uVar10 = 0;
  FUN_10264c8a4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar8 = puVar7;
  func_0x000107c5fc48(puVar7,uVar10);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar8);
  if (*(long *)(puVar5 + lVar12) != 0) {
    func_0x000107c521e8();
  }
  uVar10 = 0;
  FUN_10264f1b4(0);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  lVar12 = 1;
  do {
    uVar9 = uVar10;
    func_0x000107c610f8(uVar10);
    func_0x000107c453e4();
    func_0x000107c61174();
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(0xe000000000000000);
    puVar7 = puVar3;
    func_0x000107c6057c(PTR___sSiN_11034deb0,puVar3);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    uVar11 = 0x636165725f70616d;
    func_0x000107c5fadc(0x636165725f70616d,0xef20235f6e6f6974);
    func_0x000107c6142c(0xef20235f6e6f6974);
    func_0x000107c520f4(uVar9);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar11);
    func_0x000107c3d8b8(uVar9);
    func_0x000107c3d5b4(*(undefined8 *)(puVar4 + lVar1));
    func_0x000107c61170(uVar9);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 5);
  puVar3 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4044000000000000,0x4044000000000000,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c610f8(uVar10);
  func_0x000107c453e4();
  func_0x000107c55260();
  func_0x000107c61174(uVar10);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef26c70);
  func_0x000107c520f4(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c3d8b8(uVar10);
  func_0x000107c3d5b4(*(undefined8 *)(puVar4 + lVar1));
  FUN_10264af04();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  return puVar5;
}



/* Entry: 10264c598; end: 10264c5fb;  */

void FUN_10264c598(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10264c8e4;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b2d0,0,0);
  return;
}



/* Entry: 10264c5fc; end: 10264c65f;  */

void FUN_10264c5fc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10264c8e8;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b2d0,0,0);
  return;
}



/* Entry: 10264c660; end: 10264c6c3;  */

void FUN_10264c660(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10264c6c4;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b2d0,0,0);
  return;
}



/* Entry: 10264c6c4; end: 10264c6ff;  */

void FUN_10264c6c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010264c6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10264c700; end: 10264c763;  */

void FUN_10264c700(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10264c8ec;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b2d0,0,0);
  return;
}



/* Entry: 10264c764; end: 10264c773;  */

undefined1  [16] FUN_10264c764(void)

{
  return ZEXT816(0x11052db20);
}



/* Entry: 10264c774; end: 10264c793;  */

void FUN_10264c774(void)

{
  func_0x000107c61168(&PTR_PTR_112855618);
  return;
}



/* Entry: 10264c794; end: 10264c7b7;  */

undefined8 FUN_10264c794(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10264c7b8; end: 10264c833;  */

void FUN_10264c7b8(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar6 = (long *)0x50;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x10264c8f0;
  plVar6[5] = lVar4;
  plVar6[6] = lVar2;
  *(undefined1 *)(plVar6 + 8) = uVar3;
  plVar6[3] = lVar1;
  plVar6[4] = lVar7;
  plVar6[2] = lVar5;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar6[7] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264b648,lVar4,lVar5);
  return;
}



/* Entry: 10264c834; end: 10264c8a3;  */

void FUN_10264c834(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10264c8f4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10264c8a4; end: 10264c8e3;  */

void FUN_10264c8a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10264c8e4; end: 10264c8f7;  */

void FUN_10264c8e4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010264c6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10264c8f8; end: 10264cb03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10264c8f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000100083b20(&puStack_98);
  puVar3 = puStack_98;
  puVar2 = puStack_98;
  func_0x000109021b34();
  func_0x000107c615e8(puVar3);
  *(char *)(unaff_x20 + _DAT_112eb14e0) = (char)puVar2;
  func_0x000100083b20(&puStack_98);
  puVar3 = puStack_98 + _DAT_112eb1480;
  func_0x000107c61428(puVar3,auStack_68,1,0);
  *(undefined ***)(puVar3 + 8) = &PTR_DAT_11052dcc0;
  func_0x000107c61604(puVar3);
  func_0x000107c61170(puStack_98);
  func_0x000107c61604(unaff_x20 + _DAT_112eb14f0,param_2);
  puVar3 = &UNK_11052db90;
  func_0x000107c613fc(&UNK_11052db90,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_78 = FUN_10264cf68;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100f11710;
  puStack_80 = &UNK_11052dba8;
  ppuVar4 = &puStack_98;
  puStack_70 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_70);
  func_0x000100083b20(&puStack_98);
  puVar1 = puStack_98;
  puVar3 = &UNK_11052dbe0;
  func_0x000107c613fc(&UNK_11052dbe0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  pcStack_78 = FUN_10264d0f0;
  puStack_98 = puVar2;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100f10508;
  puStack_80 = &UNK_11052dbf8;
  ppuVar5 = &puStack_98;
  puStack_70 = puVar3;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_70);
  FUN_10264ea68(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c614e8();
  func_0x000107c4c214(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  return param_1;
}



/* Entry: 10264cb04; end: 10264cedb;  */

void FUN_10264cb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb14f8,&UNK_10dac5e40);
  puVar1 = &UNK_11052dc30;
  func_0x000107c613fc(&UNK_11052dc30,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(0x10264d0f8,puVar1);
  return;
}



/* Entry: 10264cedc; end: 10264cf67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264cedc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112eb14e8);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    func_0x000100083b20(auStack_40);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10264cf68; end: 10264cf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264cf68(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112eb14e8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000100083b20(auStack_40);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10264cf8c; end: 10264d0ef;  */

void FUN_10264cf8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  if (param_1 != 0) {
    ppuVar4 = &puStack_80;
    ppuVar6 = &puStack_80;
    uVar2 = 0x696669746e656469;
    func_0x000107c5fadc(0x696669746e656469,0xea00000000007265);
    puVar5 = &UNK_11052dd80;
    puVar3 = puVar5;
    func_0x000107c613fc(&UNK_11052dd80,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_10264eaa8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101137fac;
    puStack_68 = &UNK_11052dd98;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c613fc(&UNK_11052dd80,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_2);
    pcStack_60 = (code *)0x10264eab0;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101138058;
    puStack_68 = &UNK_11052ddc0;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10264d0f0; end: 10264d10b;  */

void FUN_10264d0f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    ppuVar4 = &puStack_80;
    ppuVar6 = &puStack_80;
    uVar2 = 0x696669746e656469;
    func_0x000107c5fadc(0x696669746e656469,0xea00000000007265);
    puVar5 = &UNK_11052dd80;
    puVar3 = puVar5;
    func_0x000107c613fc(&UNK_11052dd80,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,uVar7);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_10264eaa8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101137fac;
    puStack_68 = &UNK_11052dd98;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c613fc(&UNK_11052dd80,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,uVar7);
    pcStack_60 = (code *)0x10264eab0;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101138058;
    puStack_68 = &UNK_11052ddc0;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10264d10c; end: 10264d217;  */

/* WARNING: Possible PIC construction at 0x00010264d1e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264d1ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264d10c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb1530) + _DAT_112eb3c58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_11052dc58;
    func_0x000107c613fc(&UNK_11052dc58,0x20,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    *(long *)(puVar2 + 0x18) = lVar1;
    puVar3 = &UNK_11052dc80;
    func_0x000107c613fc(&UNK_11052dc80,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10dac5e50;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174();
    func_0x000107c615f0(lVar1);
    func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10dac5e58,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10264d218; end: 10264d283;  */

void FUN_10264d218(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264d284,uVar1,uVar2);
  return;
}



/* Entry: 10264d284; end: 10264d40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264d284(void)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  code *pcVar7;
  
  puVar2 = *(ulong **)(unaff_x22 + 0x20);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574();
  puVar1 = PTR__swift_isaMask_11034f488;
  pcVar7 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(lVar6 + _DAT_112eb1540)
                      ) + 0x88);
  (*pcVar7)();
  uVar3 = 0;
  FUN_1026e42dc(0);
  puVar4 = puVar2;
  func_0x000107c61480(puVar2,uVar3);
  if (puVar4 == (ulong *)0x0) {
    func_0x000107c615e8();
LAB_10264d370:
    (*pcVar7)();
    puVar4 = puVar2;
    func_0x000107c61480();
    if (puVar4 == (ulong *)0x0) {
      func_0x000107c615e8(puVar2);
      goto LAB_10264d3f4;
    }
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x78))();
    func_0x000107c615e8(puVar2);
    if (puVar4 == (ulong *)0x0) goto LAB_10264d3f4;
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar2 = puVar4;
    func_0x000107c5fc48(puVar4,PTR___sSSN_11034da80);
    func_0x000107c6142c(puVar4);
    func_0x000107c4e580(uVar3);
  }
  else {
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x90))();
    func_0x000107c615e8();
    if (puVar4 == (ulong *)0x0) goto LAB_10264d370;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar3 = 0;
    FUN_10264ea68(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    puVar2 = puVar4;
    func_0x000107c5fc48(puVar4,uVar3);
    func_0x000107c6142c(puVar4);
    func_0x000107c4e584(uVar5);
  }
  func_0x000107c61170(puVar2);
LAB_10264d3f4:
                    /* WARNING: Could not recover jumptable at 0x00010264d40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10264d410; end: 10264d647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264d410(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &UNK_11052dd08;
  func_0x000107c613fc(&UNK_11052dd08,0x29,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = (char)param_3;
  func_0x000107c61174();
  func_0x000101107198(param_1,param_2,param_3);
  uVar2 = 0x23;
  func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dac5ef0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  lVar3 = unaff_x20 + _DAT_112eb14f0;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b3530;
    func_0x000107c610f8();
    func_0x000107c4807c();
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112eb1538) + _DAT_112fa9610);
    func_0x000107c6157c(uVar2);
    func_0x0001000d224c(&uStack_70);
    func_0x000107c61574(uVar2);
    uVar2 = uStack_70;
    func_0x000107c614f0();
    puVar1 = &UNK_11052db90;
    func_0x000107c613fc(&UNK_11052db90,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,unaff_x20);
    puVar5 = &UNK_11052dd30;
    func_0x000107c613fc(&UNK_11052dd30,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar1;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    *(undefined8 *)(puVar5 + 0x20) = param_5;
    func_0x000107c6157c(puVar1);
    func_0x000107c61434(param_5);
    uVar6 = param_4;
    func_0x00010264dafc(param_4,param_5);
    (**(code **)(lStack_68 + 8))
              (param_1,param_2,param_3 & 0xffffffff,param_4,param_5,0,puVar4,FUN_10264e9f8,puVar5,
               uVar6,uVar2,lStack_68);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(uStack_70);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 10264d648; end: 10264d6bb;  */

void FUN_10264d648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264d6bc,uVar1,uVar2);
  return;
}



/* Entry: 10264d6bc; end: 10264d777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264d6bc(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x38) + _DAT_112eb1538) + _DAT_112fa9600);
  func_0x000107c6157c(uVar5);
  func_0x0001000d224c(unaff_x22 + 0x10);
  func_0x000107c61574(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar5);
  piVar4 = *(int **)(lVar2 + 8);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10264d778;
                    /* WARNING: Could not recover jumptable at 0x00010264d774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined1 *)(unaff_x22 + 0x78),uVar5,lVar2);
  return;
}



/* Entry: 10264d778; end: 10264d7c3;  */

void FUN_10264d778(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10264d7c4,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60));
  return;
}



/* Entry: 10264d7c4; end: 10264d8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264d7c4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  if (lVar5 == 0) {
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar5 = *(long *)(unaff_x22 + 0x38);
    func_0x0001000834e4(unaff_x22 + 0x10);
    lVar5 = *(long *)(*(long *)(lVar5 + _DAT_112eb1530) + _DAT_112eb3c58);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(uVar4);
    }
    else {
      lVar1 = lVar5;
      func_0x000100f95d40();
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 3;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(undefined8 *)(lVar1 + 0x20) = uVar4;
      uVar2 = 0;
      FUN_10264ea68(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c61174(uVar4);
      lVar3 = lVar1;
      func_0x000107c5fc48(lVar1,uVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c4e584(lVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010264d8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10264d8f8; end: 10264d96f;  */

void FUN_10264d8f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10264d970(param_1,param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10264d970; end: 10264dce7;  */

/* WARNING: Possible PIC construction at 0x00010264da58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264da5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10264d970(char param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = unaff_x20 + _DAT_112eb1528;
  uVar4 = *(ulong *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar4);
  if (param_1 == '\0') {
    pcVar6 = *(code **)(lVar3 + 0x78);
LAB_10264da74:
    (*pcVar6)(uVar4,lVar3);
  }
  else {
    if (param_1 != '\x01') {
      pcVar6 = *(code **)(lVar3 + 0x88);
      goto LAB_10264da74;
    }
    (**(code **)(lVar3 + 0x80))(uVar4,lVar3);
    puVar2 = (ulong *)(unaff_x20 + _DAT_112eb1500);
    uVar7 = puVar2[1];
    if (uVar7 != 0) {
      uVar4 = *puVar2;
      uVar8 = puVar2[2];
      if ((uVar4 == param_2 && uVar7 == param_3) ||
         (func_0x000107c605b8(uVar4,uVar7,param_2,param_3,0), (uVar4 & 1) != 0)) {
        func_0x000107c61434(uVar7);
        func_0x000107c6157c(uVar8);
        uVar5 = 0x112d36838;
        func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
        func_0x000107c5fd50(uVar8,uVar5,PTR___ss5NeverON_11034ee88,
                            PTR___ss5NeverOs5ErrorsWP_11034ee90);
        goto code_r0x000107c61574;
      }
    }
  }
  puVar2 = (ulong *)(unaff_x20 + _DAT_112eb1500);
  uVar7 = puVar2[1];
  if (uVar7 == 0) {
    return uVar4;
  }
  uVar4 = *puVar2;
  if (uVar4 != param_2 || param_3 != uVar7) {
    func_0x000107c605b8(uVar4,uVar7,param_2,param_3,0);
    if ((uVar4 & 1) == 0) {
      return uVar4;
    }
    param_2 = *puVar2;
    uVar7 = puVar2[1];
  }
  uVar8 = puVar2[2];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (uVar7 == 0) {
    return param_2;
  }
  func_0x000107c6142c(uVar7);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar8);
  return uVar8;
}



/* Entry: 10264dce8; end: 10264dd57;  */

void FUN_10264dce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264dd58,uVar1,uVar2);
  return;
}



/* Entry: 10264dd58; end: 10264dddb;  */

void FUN_10264dd58(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10264dddc;
                    /* WARNING: Could not recover jumptable at 0x00010264ddd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 10264dddc; end: 10264de27;  */

void FUN_10264dddc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10264de28,*(undefined8 *)(lVar1 + 0x70),*(undefined8 *)(lVar1 + 0x78));
  return;
}



/* Entry: 10264de28; end: 10264dea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264de28(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  *puVar1 = uVar3;
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112eb1508) = 0;
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x00010264dea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10264dea4; end: 10264dee7;  */

long FUN_10264dea4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10264dee8; end: 10264df37;  */

void FUN_10264dee8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10264df38;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264d284,lVar1,lVar2);
  return;
}



/* Entry: 10264df38; end: 10264df73;  */

void FUN_10264df38(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010264df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10264df74; end: 10264dfe3;  */

void FUN_10264df74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10264ead0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10264dfe4; end: 10264e043; -[_TtC27MapFocusCardsImplementation33MapFocusCardsReactionBarPresenter init] */

void FUN_10264dfe4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsImplementation.MapFocusCardsReactionBarPresenter",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10264e010);
  (*pcVar1)();
}



/* Entry: 10264e044; end: 10264e113; -[_TtC27MapFocusCardsImplementation33MapFocusCardsReactionBarPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010264e080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264e084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264e044(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112eb1528);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb14e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb1538));
  return;
}



/* Entry: 10264e114; end: 10264e2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264e114(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb1488);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  lVar8 = puVar1[1];
  if (lVar8 != 0) {
    uVar9 = *puVar1;
    lVar2 = unaff_x20 + _DAT_112eb1528;
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    lVar4 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar3);
    if (((uint)param_4 & 0xff) == 1) {
      func_0x000107c61434(lVar8);
      puVar5 = PTR___sSiN_11034deb0;
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    }
    else {
      func_0x000103f31834(0);
      func_0x000107c610f8();
      func_0x000107c61434(lVar8);
      func_0x000101107198(param_2,param_3,param_4);
      puVar5 = param_2;
      puVar7 = param_3;
      func_0x000103f31974(param_2);
      puVar6 = puVar5;
      func_0x000103f315b8();
      func_0x000107c61170(puVar5);
      puVar5 = (undefined *)0x0;
      if (puVar7 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
      puVar6 = (undefined *)0xe000000000000000;
      if (puVar7 != (undefined *)0x0) {
        puVar6 = puVar7;
      }
    }
    (**(code **)(lVar4 + 0x70))(param_5,puVar5,puVar6,((uint)param_4 & 0xff) == 1,uVar3);
    func_0x000107c6142c(puVar6);
    FUN_10264d410(param_2,param_3,param_4,uVar9,lVar8);
    func_0x000107c6142c(lVar8);
  }
  return;
}



/* Entry: 10264e2cc; end: 10264e2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264e2cc(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb1488);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  lVar8 = puVar1[1];
  if (lVar8 != 0) {
    uVar9 = *puVar1;
    lVar2 = unaff_x20 + _DAT_112eb1528;
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    lVar4 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar3);
    if (((uint)param_4 & 0xff) == 1) {
      func_0x000107c61434(lVar8);
      puVar5 = PTR___sSiN_11034deb0;
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    }
    else {
      func_0x000103f31834(0);
      func_0x000107c610f8();
      func_0x000107c61434(lVar8);
      func_0x000101107198(param_2,param_3,param_4);
      puVar5 = param_2;
      puVar7 = param_3;
      func_0x000103f31974(param_2);
      puVar6 = puVar5;
      func_0x000103f315b8();
      func_0x000107c61170(puVar5);
      puVar5 = (undefined *)0x0;
      if (puVar7 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
      puVar6 = (undefined *)0xe000000000000000;
      if (puVar7 != (undefined *)0x0) {
        puVar6 = puVar7;
      }
    }
    (**(code **)(lVar4 + 0x70))(param_5,puVar5,puVar6,((uint)param_4 & 0xff) == 1,uVar3);
    func_0x000107c6142c(puVar6);
    FUN_10264d410(param_2,param_3,param_4,uVar9,lVar8);
    func_0x000107c6142c(lVar8);
  }
  return;
}



/* Entry: 10264e2d4; end: 10264e55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264e2d4(undefined *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long unaff_x20;
  undefined auStack_80 [24];
  undefined *puStack_68;
  
  if (param_1 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000100083b20(&puStack_68);
    puVar4 = puStack_68;
    puVar3 = puStack_68 + _DAT_112eb1488;
    puVar7 = auStack_80;
    uVar9 = 0;
    func_0x000107c61428(puVar3,puVar7,0,0);
    lVar1 = *(long *)(puVar3 + 8);
    func_0x000107c61434(lVar1);
    func_0x000107c61170(puVar4);
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar3 = param_1;
      func_0x0001038ba5f8();
      FUN_10264d410();
      func_0x000107c6142c(lVar1);
      lVar1 = unaff_x20 + _DAT_112eb1528;
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar6);
      (**(code **)(lVar2 + 0x98))(uVar6,lVar2);
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar6);
      if ((uVar9 & 0xff) == 1) {
        puVar4 = PTR___sSiN_11034deb0;
        puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puStack_68 = puVar3;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      }
      else {
        func_0x000103f31834(0);
        func_0x000107c610f8();
        func_0x000107c61434(puVar7);
        puVar4 = puVar3;
        puVar8 = puVar7;
        func_0x000103f31974(puVar3);
        puVar5 = puVar4;
        func_0x000103f315b8();
        func_0x000107c61170(puVar4);
        puVar4 = (undefined *)0x0;
        if (puVar8 != (undefined *)0x0) {
          puVar4 = puVar5;
        }
        puVar5 = (undefined *)0xe000000000000000;
        if (puVar8 != (undefined *)0x0) {
          puVar5 = puVar8;
        }
      }
      (**(code **)(lVar2 + 0x70))(4,puVar4,puVar5,(uVar9 & 0xff) == 1,uVar6,lVar2);
      func_0x000107c6142c(puVar5);
      puVar4 = &UNK_11052dca8;
      func_0x000107c613fc(&UNK_11052dca8,0x29,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      *(undefined **)(puVar4 + 0x20) = puVar7;
      puVar4[0x28] = (char)uVar9;
      func_0x000107c61174();
      uVar6 = 0x23;
      func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dac5e68,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar6);
      func_0x000100083b20(&puStack_68);
      puVar7 = puStack_68;
      FUN_10264af04();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(param_1);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112eb1510);
      *(undefined8 *)(unaff_x20 + _DAT_112eb1510) = 0;
      func_0x000107c615e8(uVar6);
    }
  }
  return;
}



/* Entry: 10264e560; end: 10264e57f;  */

void FUN_10264e560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264e580,0,0);
  return;
}



/* Entry: 10264e580; end: 10264e63b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264e580(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x38) + _DAT_112eb1538) + _DAT_112fa9608);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(unaff_x22 + 0x10);
  func_0x000107c61574(uVar4);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar2 = unaff_x22 + 0x10;
  func_0x0001000a8868();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264e63c,uVar3,uVar4);
  return;
}



/* Entry: 10264e63c; end: 10264e6b7;  */

void FUN_10264e63c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  (*pcVar1)(uVar6,uVar3,uVar5,uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264e6b8,0,0);
  return;
}



/* Entry: 10264e6b8; end: 10264e6e7;  */

void FUN_10264e6b8(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010264e6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10264e6e8; end: 10264e73b; -[_TtC27MapFocusCardsImplementation33MapFocusCardsReactionBarPresenter emojiPickerScopeDidCompleteWith:] */

/* WARNING: Possible PIC construction at 0x00010264e724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264e728) */

void FUN_10264e6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10264e2d4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10264e73c; end: 10264e753; -[_TtC27MapFocusCardsImplementation33MapFocusCardsReactionBarPresenter emojiPickerScopeWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264e73c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb1510);
  *(undefined8 *)(param_1 + _DAT_112eb1510) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10264e754; end: 10264e86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264e754(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar4 = _DAT_112eb1510;
  if (*(long *)(unaff_x20 + _DAT_112eb1510) == 0) {
    lVar2 = unaff_x20 + _DAT_112eb1528;
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    lVar1 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar3);
    (**(code **)(lVar1 + 0x90))(uVar3,lVar1);
    func_0x000100333fcc(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar2 = unaff_x20;
    func_0x0001038b4544();
    func_0x000100083b20(&uStack_48);
    uVar3 = uStack_48;
    lStack_50 = lVar2;
    func_0x00010008a7c8(&uStack_48,&lStack_50);
    func_0x000107c61574(uVar3);
    func_0x000100083b20(&lStack_50);
    func_0x000107c61574(uStack_48);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lStack_50;
    func_0x000107c615e8(uVar3);
    lVar4 = *(long *)(unaff_x20 + lVar4);
    if (lVar4 != 0) {
      func_0x000107c615f0(lVar4);
      func_0x000107c4f000();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10264e870; end: 10264e8eb;  */

void FUN_10264e870(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x80;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10264ead4;
  *(undefined1 *)(plVar4 + 0xf) = uVar3;
  plVar4[8] = lVar2;
  plVar4[9] = lVar5;
  plVar4[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264e580,0,0);
  return;
}



/* Entry: 10264e8ec; end: 10264e8fb;  */

undefined1  [16] FUN_10264e8ec(void)

{
  return ZEXT816(0x11052dce8);
}



/* Entry: 10264e8fc; end: 10264e91b;  */

void FUN_10264e8fc(void)

{
  func_0x000107c61168(&PTR_PTR_112855700);
  return;
}



/* Entry: 10264e91c; end: 10264e94b;  */

void FUN_10264e91c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}


