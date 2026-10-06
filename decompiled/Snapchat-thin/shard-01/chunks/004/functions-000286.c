/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10100445c; end: 10100455b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10100445c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d54398;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d54398);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c53840(puVar3,param_2,2);
    puVar2 = puVar3;
    func_0x000107c4aba4(puVar3);
    func_0x000107c61180();
    func_0x000107c539d4(0x4028000000000000);
    func_0x000107c61170(puVar2);
    func_0x000107c534b0(puVar3,param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10100455c; end: 10100482b;  */

/* WARNING: Possible PIC construction at 0x0001010045c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010045f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101004688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010046a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010046f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101004714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101004768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010047b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010047d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010047b8) */
/* WARNING: Removing unreachable block (ram,0x00010100476c) */
/* WARNING: Removing unreachable block (ram,0x000101004718) */
/* WARNING: Removing unreachable block (ram,0x0001010046f8) */
/* WARNING: Removing unreachable block (ram,0x0001010046ac) */
/* WARNING: Removing unreachable block (ram,0x00010100468c) */
/* WARNING: Removing unreachable block (ram,0x0001010045fc) */
/* WARNING: Removing unreachable block (ram,0x0001010045c4) */
/* WARNING: Removing unreachable block (ram,0x0001010047d8) */

void FUN_10100455c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  
  func_0x000107c40510();
  func_0x000107c61180();
  puVar3 = unaff_x20;
  func_0x000101015b1c();
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c520f4(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10100482c; end: 1010048cb; -[_TtC16QuickCutViewImpl20QuickCutCarouselCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10100482c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar2 = &lStack_50;
  lVar1 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112d54398) = 0;
  *(undefined8 *)(param_5 + _DAT_112d543a0) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_10100455c();
  func_0x000107c61170(plVar2);
  return (undefined1 *)plVar2;
}



/* Entry: 1010048cc; end: 10100493b; -[_TtC16QuickCutViewImpl20QuickCutCarouselCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010048cc(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d54398) = 0;
  *(undefined8 *)(param_1 + _DAT_112d543a0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "QuickCutViewImpl/QuickCutCarouselCell.swift",0x2b,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10100493c);
  (*pcVar1)();
}



/* Entry: 10100493c; end: 101004aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100493c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x20;
  
  puVar3 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_prepareForReuse_112620008);
  FUN_10100445c();
  func_0x000107c55258();
  func_0x000107c61170(puVar3);
  lVar2 = _DAT_112d543a0;
  lVar7 = *(long *)((long)unaff_x20 + _DAT_112d543a0);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c6157c(lVar7);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar7);
    uVar4 = *(undefined8 *)((long)unaff_x20 + lVar2);
  }
  *(undefined8 *)((long)unaff_x20 + lVar2) = 0;
  func_0x000107c61574(uVar4);
  puVar5 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000101015b1c();
  uVar4 = *puVar6;
  uVar1 = puVar6[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c520f4(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  puVar5 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c520fc();
  func_0x000107c61170(puVar5);
  puVar5 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c52104();
  func_0x000107c61170(puVar5);
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c55528();
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 101004ab0; end: 101004ad7; -[_TtC16QuickCutViewImpl20QuickCutCarouselCell prepareForReuse] */

void FUN_101004ab0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10100493c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101004ad8; end: 101004dcb;  */

/* WARNING: Possible PIC construction at 0x000101004b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101004b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101004bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101004b88) */
/* WARNING: Removing unreachable block (ram,0x000101004b48) */
/* WARNING: Removing unreachable block (ram,0x000101004bc8) */

void FUN_101004ad8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c40510();
  func_0x000107c61180();
  FUN_101015b28(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c520f4(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 101004dcc; end: 101004e3b;  */

void FUN_101004dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101004e3c,uVar1,uVar2);
  return;
}



/* Entry: 101004e3c; end: 101004eb3;  */

void FUN_101004e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c3ec60(*(undefined8 *)(unaff_x22 + 0x30));
  piVar3 = *(int **)(lVar2 + 0x40);
  iVar1 = *piVar3;
  plVar4 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101004eb4;
                    /* WARNING: Could not recover jumptable at 0x000101004eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_3,param_4,0x4028000000000000);
  return;
}



/* Entry: 101004eb4; end: 101004eff;  */

void FUN_101004eb4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101004f00,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Entry: 101004f00; end: 101004f9f;  */

void FUN_101004f00(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x40);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(unaff_x22 + 0x38);
    func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    lVar2 = *(long *)(unaff_x22 + 0x60);
    if (lVar4 != 0) {
      lVar3 = lVar2;
      FUN_10100445c();
      func_0x000107c55258();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      lVar2 = lVar4;
    }
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x60);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000101004f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101004fa0; end: 101004fd3;  */

void FUN_101004fa0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101004fd4; end: 10100500b; -[_TtC16QuickCutViewImpl20QuickCutCarouselCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101004fd4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54398));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d543a0));
  return;
}



/* Entry: 10100500c; end: 10100502b;  */

void FUN_10100500c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7528);
  return;
}



/* Entry: 10100502c; end: 10100503f;  */

void FUN_10100502c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110375fb0;
  if (lRam0000000112d543d0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d543d0 = param_1;
  }
  return;
}



/* Entry: 101005040; end: 101005083;  */

void FUN_101005040(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101005084; end: 1010050eb;  */

void FUN_101005084(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x68);
  lVar1 = *(long *)(unaff_x20 + 0x70);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1010050ec;
  plVar3[6] = lVar2;
  plVar3[7] = lVar1;
  plVar3[5] = unaff_x20 + 0x10;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[9] = lVar1;
  plVar3[10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101004e3c,lVar1,lVar2);
  return;
}



/* Entry: 1010050ec; end: 101005127;  */

void FUN_1010050ec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101005124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101005128; end: 1010051cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101005128(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_50 [32];
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar2,PTR_s_copyWithZone__1125b2238,param_2);
  func_0x000107c60234(auStack_50);
  func_0x000107c615e8(puVar2);
  func_0x000107c6147c(&lStack_68,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,7);
  *(undefined8 *)(lStack_68 + _DAT_112d543d8) = *(undefined8 *)(unaff_x20 + _DAT_112d543d8);
  param_1[3] = lVar1;
  *param_1 = lStack_68;
  return;
}



/* Entry: 1010051cc; end: 101005233; -[_TtC16QuickCutViewImpl32QuickCutCarouselLayoutAttributes copyWithZone:] */

undefined1 * FUN_1010051cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c61174();
  FUN_101005128(auStack_40,param_3);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_40,uStack_28);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_40);
  return puVar1;
}



/* Entry: 101005234; end: 1010053bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101005234(undefined8 param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_a0 [8];
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar1 = &lStack_88;
    func_0x000107c6147c(plVar1,auStack_80,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      func_0x000100672b50(param_1,auStack_80);
      if (lStack_68 == 0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(auStack_80,lStack_68);
        lVar4 = *(long *)(lStack_68 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
        puVar2 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar4 + 0x10))(puVar2);
        puVar3 = puVar2;
        func_0x000107c605b0(puVar2,lStack_68);
        (**(code **)(lVar4 + 8))(puVar2,lStack_68);
        func_0x000100183ab8(auStack_80);
      }
      puVar2 = &stack0xffffffffffffff68;
      func_0x000107c61154(puVar2,PTR_s_isEqual__1125fa0c8,puVar3);
      func_0x000107c615e8(puVar3);
      if ((int)puVar2 != 0) {
        dVar5 = *(double *)(unaff_x20 + _DAT_112d543d8);
        dVar6 = *(double *)(lStack_88 + _DAT_112d543d8);
        func_0x000107c61170(lStack_88);
        return dVar5 == dVar6;
      }
      func_0x000107c61170(lStack_88);
    }
  }
  return false;
}



/* Entry: 1010053bc; end: 10100543b; -[_TtC16QuickCutViewImpl32QuickCutCarouselLayoutAttributes isEqual:] */

uint FUN_1010053bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_101005234(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10100543c; end: 101005483; -[_TtC16QuickCutViewImpl32QuickCutCarouselLayoutAttributes init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100543c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d543d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101005484; end: 101005487;  */

void FUN_101005484(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101005488; end: 1010054a7;  */

void FUN_101005488(void)

{
  func_0x000107c61168(&PTR_PTR_1127a75e8);
  return;
}



/* Entry: 1010054a8; end: 1010054bb; +[_TtC16QuickCutViewImpl36QuickCutCarouselCollectionViewLayout layoutAttributesClass] */

void FUN_1010054a8(void)

{
  FUN_101005488();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1010054bc; end: 1010054c3; -[_TtC16QuickCutViewImpl36QuickCutCarouselCollectionViewLayout shouldInvalidateLayoutForBoundsChange:] */

undefined8 FUN_1010054bc(void)

{
  return 1;
}



/* Entry: 1010054c4; end: 10100569b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1010054c4(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  
  puVar2 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_layoutAttributesForElementsInRec_112600c60);
  func_0x000107c61180();
  if (puVar2 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    uVar3 = 0;
    func_0x000101005d6c(0);
    puVar5 = puVar2;
    func_0x000107c5fc54(puVar2,uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c3fd94();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar2 = puVar5;
      FUN_10100569c();
      if (puVar2 == (undefined1 *)0x0) {
        func_0x000107c61170(unaff_x20);
      }
      else {
        func_0x000107c404a0(unaff_x20);
        func_0x000107c3ec60(unaff_x20);
        if ((ulong)puVar2 >> 0x3e == 0) {
          puVar6 = *(undefined1 **)((undefined1 *)((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = puVar2;
          if (-1 < (long)puVar2) {
            puVar6 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffff8);
          }
          func_0x000107c60480();
        }
        if (puVar6 != (undefined1 *)0x0) {
          if ((long)puVar6 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10100569c);
            (*pcVar1)();
          }
          puVar7 = (undefined1 *)0x0;
          param_3 = param_3 * 0.5;
          param_1 = param_1 + param_3;
          do {
            if (((ulong)puVar2 & 0xc000000000000001) == 0) {
              puVar4 = *(undefined1 **)(puVar2 + (long)puVar7 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar4 = puVar7;
              FUN_10100f9f0(puVar7,puVar2);
            }
            func_0x000107c3f74c();
            dVar9 = ABS(param_3 - param_1);
            func_0x000107c5b078(puVar4);
            dVar8 = 0.0;
            if (dVar9 < param_3) {
              dVar8 = (param_3 - dVar9) / param_3;
            }
            puVar7 = puVar7 + 1;
            *(double *)(puVar4 + _DAT_112d543d8) = dVar8;
            func_0x000107c61170(puVar4);
          } while (puVar6 != puVar7);
        }
        func_0x000107c61170(unaff_x20);
        func_0x000107c6142c(puVar2);
      }
    }
  }
  return puVar5;
}



/* Entry: 10100569c; end: 10100581f;  */

undefined * FUN_10100569c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10100feec(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar8 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101005810);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar8;
        FUN_10100fb8c(uVar8,param_1);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10100580c);
        (*pcVar3)();
      }
      uVar6 = uVar5;
      FUN_101005488();
      uVar7 = uVar5;
      func_0x000107c61480(uVar5,uVar6);
      if (uVar7 == 0) {
        func_0x000107c61574(puVar2);
        func_0x000107c61170(uVar5);
        return (undefined *)0x0;
      }
      uVar5 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar5) {
        FUN_10100feec(1 < *(ulong *)(puVar2 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar5 + 1;
      *(ulong *)(puVar2 + uVar5 * 8 + 0x20) = uVar7;
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar4);
  }
  return puVar2;
}



/* Entry: 101005820; end: 1010058af; -[_TtC16QuickCutViewImpl36QuickCutCarouselCollectionViewLayout layoutAttributesForElementsInRect:] */

void FUN_101005820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_5;
  FUN_1010054c4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000101005d6c(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1010058b0; end: 101005bef;  */

void FUN_1010058b0(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  double dVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 *puVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  dVar11 = param_2;
  uVar13 = param_3;
  uVar15 = param_4;
  func_0x000107c614f0();
  func_0x000107c3fd94();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff50,
                        PTR_s_targetContentOffsetForProposedCo_1126781a0);
  }
  else {
    func_0x000107c40468();
    func_0x000107c61174(unaff_x20);
    func_0x000107c3ec60();
    func_0x000107c3ec60(unaff_x20);
    puVar8 = &stack0xffffffffffffff40;
    uVar12 = 0;
    dVar10 = param_1;
    func_0x000107c61154(param_1,0,uVar13,puVar8,PTR_s_layoutAttributesForElementsInRec_112600c60);
    func_0x000107c61180();
    if (puVar8 == (undefined1 *)0x0) {
      func_0x000107c61170(unaff_x20);
    }
    else {
      uVar4 = 0;
      func_0x000101005d6c(0);
      puVar5 = puVar8;
      func_0x000107c5fc54(puVar8,uVar4);
      func_0x000107c61170(puVar8);
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar8 = *(undefined1 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined1 *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined1 *)0x7fffffffffffffff < puVar5) {
          puVar8 = puVar5;
        }
        func_0x000107c60480();
      }
      if (puVar8 != (undefined1 *)0x0) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101005bf0);
            (*pcVar3)();
          }
          puVar6 = *(undefined1 **)(puVar5 + 0x20);
          func_0x000107c61174(puVar6);
        }
        else {
          puVar6 = (undefined1 *)0x0;
          FUN_10100fb8c(0,puVar5);
        }
        if (puVar8 != (undefined1 *)0x1) {
          puVar9 = (undefined1 *)0x1;
          do {
            while( true ) {
              if (((ulong)puVar5 & 0xc000000000000001) == 0) {
                if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101005b44);
                  (*pcVar3)();
                }
                if (*(undefined1 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101005b48);
                  (*pcVar3)();
                }
                puVar7 = *(undefined1 **)(puVar5 + (long)puVar9 * 8 + 0x20);
                func_0x000107c61174(puVar7);
              }
              else {
                puVar7 = puVar9;
                FUN_10100fb8c(puVar9,puVar5);
              }
              puVar1 = puVar9 + 1;
              if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101005b40);
                (*pcVar3)();
              }
              func_0x000107c438d4(puVar7);
              dVar2 = dVar10 - (param_1 + dVar11);
              func_0x000107c438d4(puVar6);
              dVar10 = ABS(dVar10 - (param_1 + dVar11));
              if (ABS(dVar2) < dVar10) break;
              func_0x000107c61170(puVar7);
              puVar9 = puVar9 + 1;
              if (puVar1 == puVar8) goto LAB_101005a9c;
            }
            func_0x000107c61170(puVar6);
            puVar6 = puVar7;
            puVar9 = puVar1;
          } while (puVar1 != puVar8);
        }
LAB_101005a9c:
        func_0x000107c6142c(puVar5);
        func_0x000107c438d4(puVar6);
        dVar11 = dVar10;
        uVar4 = uVar12;
        uVar14 = uVar13;
        uVar16 = uVar15;
        func_0x000107c438d4(unaff_x20);
        func_0x000107c61170(unaff_x20);
        func_0x000107c609cc(dVar11,uVar4,uVar14,uVar16);
        func_0x000107c609cc(dVar10,uVar12,uVar13,uVar15);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(unaff_x20);
        return;
      }
      func_0x000107c61170(unaff_x20);
      func_0x000107c6142c(puVar5);
    }
    func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff30,
                        PTR_s_targetContentOffsetForProposedCo_1126781a0);
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 101005bf0; end: 101005c5b; -[_TtC16QuickCutViewImpl36QuickCutCarouselCollectionViewLayout targetContentOffsetForProposedContentOffset:withScrollingVelocity:] */

undefined1  [16]
FUN_101005bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  FUN_1010058b0(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 101005c5c; end: 101005c97; -[_TtC16QuickCutViewImpl36QuickCutCarouselCollectionViewLayout init] */

void FUN_101005c5c(undefined8 param_1)

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



/* Entry: 101005c98; end: 101005d17; -[_TtC16QuickCutViewImpl36QuickCutCarouselCollectionViewLayout initWithCoder:] */

undefined1 * FUN_101005c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 101005d18; end: 101005daf;  */

void FUN_101005d18(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101005db0; end: 101005db3;  */

void FUN_101005db0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101005db4; end: 101006297;  */

long FUN_101005db4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101006298; end: 101006313;  */

void FUN_101006298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x40);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101006314;
                    /* WARNING: Could not recover jumptable at 0x000101006310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_1,param_2,param_3);
  return;
}



/* Entry: 101006314; end: 101006357;  */

void FUN_101006314(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101006354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101006358; end: 1010063d3;  */

void FUN_101006358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_6;
  plVar2 = (long *)(ulong)(uint)param_6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101006bdc;
                    /* WARNING: Could not recover jumptable at 0x0001010063d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_6))(param_1,param_2,param_3);
  return;
}



/* Entry: 1010063d4; end: 101006403;  */

long FUN_1010063d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101006404; end: 10100644b;  */

void FUN_101006404(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10100644c; end: 101006453;  */

void FUN_10100644c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 101006454; end: 101006497;  */

void FUN_101006454(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101006498; end: 10100653b;  */

long FUN_101006498(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uVar4 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_80 = param_1[2];
  uStack_78 = (undefined1)param_1[3];
  uStack_6f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  lVar5 = param_1[6];
  lVar2 = param_1[7];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  uStack_48 = (undefined1)param_2[3];
  uStack_3f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_47 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  lVar1 = param_2[6];
  lVar3 = param_2[7];
  func_0x0001010157e8(&uStack_90,&uStack_60);
  if ((uVar4 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    if ((lVar5 != lVar1) || (lVar2 != lVar3)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar5,lVar2,lVar1,lVar3,0);
      return lVar5;
    }
    lVar5 = 1;
  }
  return lVar5;
}



/* Entry: 10100653c; end: 10100668f;  */

void FUN_10100653c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[6];
  uVar6 = unaff_x20[7];
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fb58(auStack_88,uVar1,uVar4);
  func_0x000107c5fb58(auStack_88,uVar2,uVar5);
  func_0x000107c5fb58(auStack_88,uVar3,uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 101006690; end: 1010066d3;  */

void FUN_101006690(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = &UNK_10d91b0f0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1010066d4; end: 101006713;  */

void FUN_1010066d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b0f8;
  func_0x000107c61520(&UNK_10d91b0f8,&UNK_1103760f8);
  puRam0000000112d54438 = puVar1;
  return;
}



/* Entry: 101006714; end: 101006717;  */

void FUN_101006714(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b160;
  func_0x000107c61520(&UNK_10d91b160,&UNK_110376178);
  puRam0000000112d54440 = puVar1;
  return;
}



/* Entry: 101006718; end: 101006757;  */

void FUN_101006718(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b160;
  func_0x000107c61520(&UNK_10d91b160,&UNK_110376178);
  puRam0000000112d54440 = puVar1;
  return;
}



/* Entry: 101006758; end: 1010067c7;  */

void FUN_101006758(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1010067c8; end: 10100682f;  */

undefined8 * FUN_1010067c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 101006830; end: 10100687b;  */

undefined8 * FUN_101006830(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar2 = param_2[3];
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10100687c; end: 101006913;  */

int FUN_10100687c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101006914; end: 10100694b;  */

void FUN_101006914(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10100694c; end: 101006a9f;  */

undefined8 * FUN_10100694c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  uVar2 = param_2[9];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  param_1[9] = uVar2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 101006aa0; end: 101006b23;  */

undefined8 * FUN_101006aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  func_0x000107c6142c(param_1[7]);
  uVar1 = param_2[9];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar2 = param_1[9];
  param_1[9] = uVar1;
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Entry: 101006b24; end: 101006bfb;  */

int FUN_101006b24(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101006bfc; end: 101006c9b;  */

undefined8
FUN_101006bfc(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  if (param_4 == 0) {
    if (param_8 != 0) {
      return 0;
    }
  }
  else if ((param_8 == 0) ||
          (((param_3 != param_7 || (param_4 != param_8)) &&
           (func_0x000107c605b8(param_3,param_4,param_7,param_8,0), (param_3 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 101006c9c; end: 101006d2b;  */

long FUN_101006c9c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101006d2c; end: 101006d97;  */

undefined8 * FUN_101006d2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101006d98; end: 101006ddb;  */

undefined8 * FUN_101006d98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101006ddc; end: 101006e73;  */

int FUN_101006ddc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101006e74; end: 101006f2b;  */

void FUN_101006e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar1 = 0x112d540a8;
  func_0x0001000285a8(0x112d540a8,&UNK_10d91b2d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100fe27a4(param_1,auStack_58);
  FUN_101006f2c(param_2,auStack_60 + -extraout_x8);
  FUN_101007c44(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  FUN_10100781c(auStack_58,auStack_60 + -extraout_x8,param_3);
  return;
}



/* Entry: 101006f2c; end: 101006f7b;  */

undefined8 FUN_101006f2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d540a8;
  func_0x0001000285a8(0x112d540a8,&UNK_10d91b2d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101006f7c; end: 101006f93;  */

undefined1  [16] FUN_101006f7c(void)

{
  return ZEXT816(0x110376270);
}



/* Entry: 101006f94; end: 101007073;  */

void FUN_101006f94(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101007074; end: 10100730f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101007074(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d54530;
  auStack_a0[1] = param_1;
  func_0x0001000285a8(0x112d54530,&UNK_10d91b458);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_a0 - extraout_x8);
  lVar4 = 0x112d54538;
  func_0x0001000285a8(0x112d54538,&UNK_10d91b460);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar8 - extraout_x12;
  lVar4 = 0x112d52e20;
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112d54478;
  func_0x000107c61428(unaff_x20 + _DAT_112d54478,auStack_78,0,0);
  FUN_10100ad60(unaff_x20 + lVar1,lVar12,0x112d54538,&UNK_10d91b460);
  lVar5 = lVar12;
  (**(code **)(lVar10 + 0x30))(lVar12,1,lVar4);
  if ((int)lVar5 == 1) {
    FUN_10100b308(lVar12,0x112d54538);
    *puVar9 = 1;
    (**(code **)(lVar11 + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
               ,lVar3);
    puVar6 = &UNK_110376330;
    func_0x000107c613fc(&UNK_110376330,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    func_0x0001000285a8(0x112d52cc0,&UNK_10d919598);
    uVar2 = auStack_a0[1];
    func_0x000107c5fd48(auStack_a0[1]);
    func_0x000107c61574(puVar6);
    (**(code **)(lVar10 + 0x10))(lVar8,uVar2,lVar4);
    (**(code **)(lVar10 + 0x38))(lVar8,0,1,lVar4);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
    FUN_10100abdc(lVar8,unaff_x20 + lVar1,0x112d54538,&UNK_10d91b460);
    func_0x000107c614a8(auStack_90);
  }
  else {
    pcVar7 = *(code **)(lVar10 + 0x20);
    (*pcVar7)(lVar12 - extraout_x8_01,lVar12,lVar4);
    (*pcVar7)(auStack_a0[1],lVar12 - extraout_x8_01,lVar4);
  }
  return;
}



/* Entry: 101007310; end: 101007437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101007310(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d54540;
  func_0x0001000285a8(0x112d54540,&UNK_10d91b470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_70 + -extraout_x8;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = 0x112d54508;
    func_0x0001000285a8(0x112d54508,&UNK_10d91b358);
    lVar3 = *(long *)(lVar1 + -8);
    (**(code **)(lVar3 + 0x10))(puVar2,param_1,lVar1);
    (**(code **)(lVar3 + 0x38))(puVar2,0,1,lVar1);
    lVar1 = _DAT_112d54470;
    func_0x000107c61428(param_2 + _DAT_112d54470,auStack_70,0x21,0);
    FUN_10100abdc(puVar2,param_2 + lVar1,0x112d54540,&UNK_10d91b470);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101007438; end: 10100749b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101007438(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d544a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d544a8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10100749c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10100749c; end: 1010075f3;  */

undefined8 * FUN_10100749c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar2 = 0;
  func_0x000101005d4c(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c58cd0();
  func_0x000107c566f4(0x4028000000000000,uVar2);
  func_0x000107c566fc(0x4028000000000000,uVar2);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x000107c610f8();
  func_0x000107c469ac(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5a050();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar4);
  uVar6 = *(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8;
  func_0x000107c61174();
  func_0x000107c53e7c(uVar6);
  func_0x000107c59284(puVar3);
  func_0x000107c61170(puVar3);
  puVar5 = puVar3;
  func_0x000107c53fcc();
  func_0x000101015b10();
  uVar6 = *puVar5;
  uVar1 = puVar5[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c520f4(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  return puVar3;
}



/* Entry: 1010075f4; end: 10100777b;  */

undefined * FUN_1010075f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c5a378(puVar1,param_2,0);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c5af88(puVar2,param_2,0xd5);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52df8(puVar3,param_2,puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c52e0c(0x4000000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4030000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 10100777c; end: 10100781b;  */

undefined * FUN_10100777c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c526c0(0);
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c59c74(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a100(puVar1,param_2,0x17);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10100781c; end: 101007a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10100781c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d54460) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54468) = 0;
  lVar2 = _DAT_112d54470;
  lVar3 = 0x112d54508;
  func_0x0001000285a8(0x112d54508,&UNK_10d91b358);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  lVar2 = _DAT_112d54478;
  lVar3 = 0x112d52e20;
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  *(undefined **)(unaff_x20 + _DAT_112d54480) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d54488);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d54490);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d54498);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d544a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d544a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d544b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d544b8) = 0;
  FUN_100fe27a4(param_1,unaff_x20 + _DAT_112d54448);
  FUN_10100ad60(param_2,unaff_x20 + _DAT_112d54450,0x112d540a8,&UNK_10d91b2d0);
  *(undefined8 *)(unaff_x20 + _DAT_112d54458) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  FUN_10100b308(param_2,0x112d540a8,&UNK_10d91b2d0);
  func_0x0001000834e4(param_1);
  return puVar4;
}



/* Entry: 101007a04; end: 101007a37; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController initWithCoder:] */

undefined8 FUN_101007a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10100af10();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 101007a38; end: 101007af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101007a38(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d54460);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d54468);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101007af8; end: 101007b1b; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController dealloc] */

void FUN_101007af8(void)

{
  func_0x000107c61174();
  FUN_101007a38();
  return;
}



/* Entry: 101007b1c; end: 101007c3b; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101007b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101007c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101007c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101007c04) */
/* WARNING: Removing unreachable block (ram,0x000101007b6c) */
/* WARNING: Removing unreachable block (ram,0x000101007c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101007b1c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d54448);
  FUN_10100b308(param_1 + _DAT_112d54450,0x112d540a8,&UNK_10d91b2d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d54458));
  return;
}



/* Entry: 101007c3c; end: 101007c43;  */

void FUN_101007c3c(void)

{
  if (lRam0000000112d544e8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61df3c);
  return;
}



/* Entry: 101007c44; end: 101007c7b;  */

void FUN_101007c44(undefined8 param_1)

{
  if (lRam0000000112d544e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61df3c);
  return;
}



/* Entry: 101007c7c; end: 101007fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101007c7c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x12;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101007fd8);
    (*pcVar1)();
  }
  lVar9 = lVar2;
  FUN_101007438();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar9);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101007fdc);
    (*pcVar1)();
  }
  puVar3 = &DAT_112d544b0;
  func_0x000101007720(&DAT_112d544b0,0x1010075f4);
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101007fe0);
    (*pcVar1)();
  }
  puVar3 = &DAT_112d544b8;
  func_0x000101007720(&DAT_112d544b8,FUN_10100777c);
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 9;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  lVar2 = _DAT_112d544a8;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d544a8);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar10 = lVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    uVar5 = uVar4;
    func_0x000107c40284(0x4014000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar10);
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101007fe8);
      (*pcVar1)();
    }
    lVar10 = lVar9;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    uVar5 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar10);
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 != 0) {
      lVar10 = lVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      uVar5 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar10);
      *(undefined8 *)(puVar3 + 0x30) = uVar5;
      uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      lVar2 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar2 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar9 = lVar2;
        func_0x000107c3ec1c(lVar2);
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        uVar5 = uVar4;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(lVar9);
        *(undefined8 *)(puVar3 + 0x38) = uVar5;
        uVar4 = 0;
        FUN_10100b268(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        puVar7 = puVar3;
        func_0x000107c5fc48(puVar3,uVar4);
        func_0x000107c61574(puVar3);
        func_0x000107c3d048(puVar6);
        func_0x000107c61170(puVar7);
        lVar2 = 0x112d545e8;
        func_0x0001000285a8(0x112d545e8,&UNK_10d91b4e8);
        lVar12 = *(long *)(lVar2 + -8);
        lVar10 = *(long *)(lVar12 + 0x40);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar11 = &stack0xffffffffffffffb0 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar9 = (long)puVar11 - extraout_x12;
        uVar4 = 0;
        FUN_10100500c(0);
        pcVar1 = FUN_101008808;
        func_0x000107c5ff90(lVar9,FUN_101008808,0,uVar4,&UNK_110376178);
        FUN_101007438();
        (**(code **)(lVar12 + 0x10))(puVar11,lVar9,lVar2);
        uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
        uVar13 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
        puVar3 = &UNK_1103763a8;
        func_0x000107c613fc(&UNK_1103763a8,uVar13 + lVar10,uVar8 | 7);
        (**(code **)(lVar12 + 0x20))(puVar3 + uVar13,puVar11,lVar2);
        uVar4 = 0x112d545f0;
        func_0x0001000285a8(0x112d545f0,&UNK_10d91b4f0);
        func_0x000107c610f8();
        func_0x000107c5f1b0(pcVar1,FUN_10100b2a8,puVar3,uVar4);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d544a0);
        *(code **)(unaff_x20 + _DAT_112d544a0) = pcVar1;
        func_0x000107c61174();
        func_0x000107c61170(uVar4);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d544a8);
        func_0x000107c61174(uVar4);
        func_0x000107c53e08();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(pcVar1);
        (**(code **)(lVar12 + 8))(lVar9,lVar2);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101007ff0);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101007fec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101007fe4);
  (*pcVar1)();
}



/* Entry: 101007ff0; end: 1010080d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101007ff0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [40];
  
  lVar1 = _DAT_112d54460;
  if (*(long *)(unaff_x20 + _DAT_112d54460) == 0) {
    puVar2 = &UNK_110376330;
    func_0x000107c613fc(&UNK_110376330,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    FUN_100fe27a4(unaff_x20 + _DAT_112d54448,auStack_58);
    puVar3 = &UNK_110376380;
    func_0x000107c613fc(&UNK_110376380,0x40,7);
    FUN_100fe27e8(auStack_58,puVar3 + 0x10);
    *(undefined **)(puVar3 + 0x38) = puVar2;
    uVar4 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91b4c0,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 1010080d8; end: 10100832b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010080d8(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  ulong uVar7;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  long alStack_80 [2];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  lVar2 = 0x112d540a8;
  func_0x0001000285a8(0x112d540a8,&UNK_10d91b2d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_70 + -extraout_x8;
  lVar2 = 0x112d53328;
  func_0x0001000285a8(0x112d53328,&UNK_10d919ad0);
  lVar14 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar11 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  FUN_10100ad60(unaff_x20 + _DAT_112d54450,puVar11,0x112d540a8,&UNK_10d91b2d0);
  puVar3 = puVar11;
  (**(code **)(lVar14 + 0x30))(puVar11,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_10100b308(puVar11,0x112d540a8,&UNK_10d91b2d0);
  }
  else {
    pcVar13 = *(code **)(lVar14 + 0x20);
    (*pcVar13)(lVar8,puVar11,lVar2);
    lVar1 = _DAT_112d54468;
    if (*(long *)(unaff_x20 + _DAT_112d54468) == 0) {
      puVar4 = &UNK_110376330;
      func_0x000107c613fc(&UNK_110376330,0x18,7);
      puStack_68 = puVar4;
      func_0x000107c61614(puVar4 + 0x10);
      (**(code **)(lVar14 + 0x10))(lVar9,lVar8,lVar2);
      uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar15 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
      uVar12 = lVar10 + uVar15 + 7 & 0xfffffffffffffff8;
      puVar4 = &UNK_110376358;
      func_0x000107c613fc(&UNK_110376358,uVar12 + 8,uVar7 | 7);
      (*pcVar13)(puVar4 + uVar15,lVar9,lVar2);
      *(undefined **)(puVar4 + uVar12) = puStack_68;
      *(undefined **)(lVar8 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar5 = 0x41;
      func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91b4a8,puVar4);
      func_0x000107c61574(puVar4);
      (**(code **)(lVar14 + 8))(lVar8,lVar2);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
      func_0x000107c61574(uVar6);
    }
    else {
      (**(code **)(lVar14 + 8))(lVar8,lVar2);
    }
  }
  return;
}



/* Entry: 10100832c; end: 101008393; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController viewDidLoad] */

void FUN_10100832c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1);
  FUN_101007c7c();
  FUN_101007ff0();
  FUN_1010080d8();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101008394; end: 101008607;  */

/* WARNING: Possible PIC construction at 0x0001010083d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010084e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101008598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010084e8) */
/* WARNING: Removing unreachable block (ram,0x0001010084fc) */
/* WARNING: Removing unreachable block (ram,0x000101008500) */
/* WARNING: Removing unreachable block (ram,0x000101008504) */
/* WARNING: Removing unreachable block (ram,0x000101008604) */
/* WARNING: Removing unreachable block (ram,0x000101008570) */
/* WARNING: Removing unreachable block (ram,0x0001010083d8) */
/* WARNING: Removing unreachable block (ram,0x000101008414) */
/* WARNING: Removing unreachable block (ram,0x000101008418) */
/* WARNING: Removing unreachable block (ram,0x00010100841c) */
/* WARNING: Removing unreachable block (ram,0x000101008420) */
/* WARNING: Removing unreachable block (ram,0x000101008464) */
/* WARNING: Removing unreachable block (ram,0x000101008468) */
/* WARNING: Removing unreachable block (ram,0x00010100846c) */
/* WARNING: Removing unreachable block (ram,0x00010100859c) */

void FUN_101008394(undefined8 param_1)

{
  FUN_101007438();
  func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101008608; end: 101008663; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController viewDidLayoutSubviews] */

void FUN_101008608(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLayoutSubviews_112684cc8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_101008394();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101008664; end: 101008807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101008664(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  
  lVar1 = 0x112d545e8;
  func_0x0001000285a8(0x112d545e8,&UNK_10d91b4e8);
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = &stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar8 - extraout_x12;
  uVar2 = 0;
  FUN_10100500c(0);
  pcVar3 = FUN_101008808;
  func_0x000107c5ff90(lVar6,FUN_101008808,0,uVar2,&UNK_110376178);
  FUN_101007438();
  (**(code **)(lVar9 + 0x10))(puVar8,lVar6,lVar1);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1103763a8;
  func_0x000107c613fc(&UNK_1103763a8,uVar10 + lVar7,uVar5 | 7);
  (**(code **)(lVar9 + 0x20))(puVar4 + uVar10,puVar8,lVar1);
  uVar2 = 0x112d545f0;
  func_0x0001000285a8(0x112d545f0,&UNK_10d91b4f0);
  func_0x000107c610f8();
  func_0x000107c5f1b0(pcVar3,FUN_10100b2a8,puVar4,uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d544a0);
  *(code **)(unaff_x20 + _DAT_112d544a0) = pcVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d544a8);
  func_0x000107c61174(uVar2);
  func_0x000107c53e08();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(pcVar3);
  (**(code **)(lVar9 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 101008808; end: 10100894b;  */

void FUN_101008808(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
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
  byte bStack_40;
  
  uStack_68 = param_3[5];
  uStack_70 = param_3[4];
  uStack_58 = param_3[7];
  uStack_60 = param_3[6];
  uStack_48 = param_3[9];
  uStack_50 = param_3[8];
  bStack_40 = *(byte *)(param_3 + 10);
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_78 = param_3[3];
  uStack_80 = param_3[2];
  func_0x000101004c08(&uStack_90);
  if ((bStack_40 & 1) == 0) {
    func_0x000107c5efec();
    func_0x000101004ad8();
  }
  return;
}



/* Entry: 10100894c; end: 101008cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100894c(ulong param_1,uint param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  ulong uStack_68;
  
  lVar6 = 0x112d54508;
  func_0x0001000285a8(0x112d54508,&UNK_10d91b358);
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_d0 + -extraout_x8;
  lVar7 = 0x112d54588;
  func_0x0001000285a8(0x112d54588,&UNK_10d91b488);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x000107c5eff8();
  lVar14 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = ((long)puVar12 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (ulong *)(unaff_x20 + _DAT_112d54488);
  if ((char)puVar1[1] == '\x01') {
    if ((long)param_1 < 0) {
      return;
    }
  }
  else {
    if ((long)param_1 < 0) {
      return;
    }
    if (*puVar1 == param_1) {
      return;
    }
  }
  if ((param_1 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112d54480) + 0x10)) &&
     (lStack_b0 = param_1 * 0x58,
     (*(byte *)(*(long *)(unaff_x20 + _DAT_112d54480) + lStack_b0 + 0x70) & 1) == 0)) {
    lStack_a8 = _DAT_112d54480;
    uVar8 = param_1;
    lStack_c8 = lVar7;
    lStack_c0 = (long)puVar12 - extraout_x8_00;
    func_0x000107c5efe8(lVar13,param_1,0);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
    FUN_101007438();
    uVar9 = uVar8;
    func_0x000107c5efd4();
    uStack_b4 = param_2;
    func_0x000107c51a54(uVar8);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    if (*(ulong *)(*(long *)(unaff_x20 + lStack_a8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101008cd8);
      (*pcVar5)();
    }
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d544a8);
    lVar7 = *(long *)(unaff_x20 + lStack_a8) + lStack_b0;
    uVar11 = *(undefined8 *)(lVar7 + 0x20);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    func_0x000107c61174(uVar10);
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar11,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c52104(uVar10);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    if ((uStack_b4 & 1) == 0) {
      FUN_101008cdc(0x3ff0000000000000,param_1);
    }
    lVar3 = _DAT_112d54470;
    func_0x000107c61428(unaff_x20 + _DAT_112d54470,&uStack_98,0x20,0);
    lVar7 = unaff_x20 + lVar3;
    (**(code **)(lVar15 + 0x30))(lVar7,1,lVar6);
    lVar4 = lStack_c0;
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 0x10))(puVar12,unaff_x20 + lVar3,lVar6);
      func_0x000107c614a8(&uStack_98);
      if (*(ulong *)(*(long *)(unaff_x20 + lStack_a8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101008cdc);
        (*pcVar5)();
      }
      lVar7 = *(long *)(unaff_x20 + lStack_a8) + lStack_b0;
      uStack_98 = *(undefined8 *)(lVar7 + 0x20);
      uStack_90 = *(undefined8 *)(lVar7 + 0x28);
      uStack_88 = *(undefined8 *)(lVar7 + 0x30);
      uVar11 = *(undefined8 *)(lVar7 + 0x38);
      uStack_78 = *(undefined8 *)(lVar7 + 0x40);
      uStack_70 = *(undefined1 *)(lVar7 + 0x48);
      uStack_80 = uVar11;
      uStack_68 = param_1;
      func_0x000107c61434();
      func_0x000107c61434(uVar11);
      func_0x000107c5fd28(lVar4,&uStack_98,lVar6);
      (**(code **)(lVar15 + 8))(puVar12,lVar6);
      (**(code **)(lVar14 + 8))(lVar13,lStack_c8);
      uVar11 = 0;
    }
    else {
      (**(code **)(lVar14 + 8))(lVar13,lStack_c8);
      func_0x000107c614a8(&uStack_98);
      uVar11 = 1;
    }
    lVar6 = 0x112d54590;
    func_0x0001000285a8(0x112d54590,&UNK_10d91b490);
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar4,uVar11,1,lVar6);
    FUN_10100b308(lVar4,0x112d54588,&UNK_10d91b488);
  }
  return;
}



/* Entry: 101008cdc; end: 101008def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101008cdc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = _DAT_112d54480;
  if (-1 < (long)param_2) {
    if (param_2 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112d54480) + 0x10)) {
      if ((*(byte *)(*(long *)(unaff_x20 + _DAT_112d54480) + param_2 * 0x58 + 0x70) & 1) == 0) {
        puVar4 = &DAT_112d544b8;
        func_0x000101007720(&DAT_112d544b8,FUN_10100777c);
        if (*(ulong *)(*(long *)(unaff_x20 + lVar1) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101008df0);
          (*pcVar3)();
        }
        lVar1 = *(long *)(unaff_x20 + lVar1) + param_2 * 0x58;
        puVar5 = *(undefined **)(lVar1 + 0x30);
        uVar2 = *(undefined8 *)(lVar1 + 0x38);
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(puVar5,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c59c6c(puVar4);
        func_0x000107c61170(puVar4);
        goto LAB_101008d48;
      }
    }
  }
  puVar5 = &DAT_112d544b8;
  func_0x000101007720(&DAT_112d544b8,FUN_10100777c);
  func_0x000107c59c6c();
  param_1 = 0;
LAB_101008d48:
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(unaff_x20 + _DAT_112d544b8),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 101008df0; end: 10100908b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101008df0(ulong param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0x112d54508;
  func_0x0001000285a8(0x112d54508,&UNK_10d91b358);
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  lVar7 = 0x112d54588;
  func_0x0001000285a8(0x112d54588,&UNK_10d91b488);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_112d54480;
  lVar8 = (long)puVar9 - extraout_x8_00;
  puVar1 = (ulong *)(unaff_x20 + _DAT_112d54488);
  if ((char)puVar1[1] == '\x01') {
    if ((long)param_1 < 0) {
      return;
    }
  }
  else {
    if ((long)param_1 < 0) {
      return;
    }
    if (*puVar1 == param_1) {
      return;
    }
  }
  if ((param_1 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112d54480) + 0x10)) &&
     (lVar11 = param_1 * 0x58,
     (*(byte *)(*(long *)(unaff_x20 + _DAT_112d54480) + lVar11 + 0x70) & 1) == 0)) {
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
    FUN_101007438();
    lVar6 = *(long *)(unaff_x20 + lVar3);
    if (*(ulong *)(lVar6 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101009088);
      (*pcVar4)();
    }
    lVar6 = lVar6 + lVar11;
    uVar10 = *(undefined8 *)(lVar6 + 0x20);
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    lStack_b8 = lVar11;
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar10,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c52104(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar10);
    FUN_101008cdc(0x3ff0000000000000,param_1);
    lVar11 = _DAT_112d54470;
    func_0x000107c61428(unaff_x20 + _DAT_112d54470,auStack_78,0,0);
    uVar10 = 1;
    lVar7 = unaff_x20 + lVar11;
    (**(code **)(lVar12 + 0x30))(lVar7,1,lVar5);
    lVar6 = lStack_b8;
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x10))(puVar9,unaff_x20 + lVar11,lVar5);
      lVar7 = *(long *)(unaff_x20 + lVar3);
      if (*(ulong *)(lVar7 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10100908c);
        (*pcVar4)();
      }
      lVar7 = lVar7 + lVar6;
      uStack_b0 = *(undefined8 *)(lVar7 + 0x20);
      uStack_a8 = *(undefined8 *)(lVar7 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar7 + 0x30);
      uVar10 = *(undefined8 *)(lVar7 + 0x38);
      uStack_90 = *(undefined8 *)(lVar7 + 0x40);
      uStack_88 = *(undefined1 *)(lVar7 + 0x48);
      uStack_98 = uVar10;
      uStack_80 = param_1;
      func_0x000107c61434();
      func_0x000107c61434(uVar10);
      func_0x000107c5fd28(lVar8,&uStack_b0,lVar5);
      (**(code **)(lVar12 + 8))(puVar9,lVar5);
      uVar10 = 0;
    }
    lVar5 = 0x112d54590;
    func_0x0001000285a8(0x112d54590,&UNK_10d91b490);
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar8,uVar10,1,lVar5);
    FUN_10100b308(lVar8,0x112d54588,&UNK_10d91b488);
  }
  return;
}



/* Entry: 10100908c; end: 10100945b;  */

/* WARNING: Possible PIC construction at 0x0001010091f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010091fc) */
/* WARNING: Removing unreachable block (ram,0x000101009270) */
/* WARNING: Removing unreachable block (ram,0x000101009274) */
/* WARNING: Removing unreachable block (ram,0x000101009278) */
/* WARNING: Removing unreachable block (ram,0x000101009290) */
/* WARNING: Removing unreachable block (ram,0x000101009294) */
/* WARNING: Removing unreachable block (ram,0x000101009298) */
/* WARNING: Removing unreachable block (ram,0x00010100929c) */
/* WARNING: Removing unreachable block (ram,0x0001010092a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100908c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  long lStack_90;
  long lStack_88;
  
  lVar4 = 0;
  func_0x000107c5eff8();
  lVar12 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  if (*(long *)(*(long *)(unaff_x20 + _DAT_112d54480) + 0x10) == 0) {
    puVar9 = &DAT_112d544b8;
    func_0x000101007720(&DAT_112d544b8,FUN_10100777c);
    func_0x000107c59c6c();
    func_0x000107c61170(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,*(undefined8 *)(unaff_x20 + _DAT_112d544b8),PTR_s_setAlpha__112637810);
    return;
  }
  FUN_101007438();
  func_0x000107c404a0();
  func_0x000107c61170(lVar5);
  lVar5 = _DAT_112d544a8;
  func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + _DAT_112d544a8));
  uVar6 = *(ulong *)(unaff_x20 + lVar5);
  func_0x000107c3fda4();
  func_0x000107c61180();
  uVar11 = uVar6;
  func_0x000107c4abc8(param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (uVar11 == 0) {
    return;
  }
  uVar7 = 0;
  FUN_10100b268(0,0x112d54430,&PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
  uVar6 = uVar11;
  func_0x000107c5fc54(uVar11,uVar7);
  func_0x000107c61170(uVar11);
  if (uVar6 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar11 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar11 != 0) {
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10100945c);
        (*pcVar3)();
      }
      uVar8 = *(ulong *)(uVar6 + 0x20);
      func_0x000107c61174(uVar8);
    }
    else {
      uVar8 = 0;
      FUN_10100fb8c(0,uVar6);
    }
    puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_90 = lVar12;
    lStack_88 = lVar4;
    if (uVar11 != 1) {
      uVar13 = 1;
      do {
        while( true ) {
          if ((uVar6 & 0xc000000000000001) == 0) {
            if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101009400);
              (*pcVar3)();
            }
            if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101009404);
              (*pcVar3)();
            }
            uVar10 = *(ulong *)(uVar6 + uVar13 * 8 + 0x20);
            func_0x000107c61174(uVar10);
          }
          else {
            uVar10 = uVar13;
            FUN_10100fb8c(uVar13,uVar6);
          }
          uVar1 = uVar13 + 1;
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010093fc);
            (*pcVar3)();
          }
          func_0x000107c404a0(*(undefined8 *)(unaff_x20 + lVar5));
          dVar14 = param_1;
          func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + lVar5));
          func_0x000107c609cc();
          dVar14 = dVar14 * 0.5;
          param_1 = param_1 + dVar14;
          func_0x000107c3f74c(uVar10);
          dVar2 = dVar14 - param_1;
          func_0x000107c3f74c(uVar8);
          param_1 = ABS(dVar14 - param_1);
          if (ABS(dVar2) < param_1) break;
          func_0x000107c61170(uVar10);
          uVar13 = uVar13 + 1;
          if (uVar1 == uVar11) goto code_r0x000107c6142c;
        }
        func_0x000107c61170(uVar8);
        uVar8 = uVar10;
        uVar13 = uVar1;
      } while (uVar1 != uVar11);
    }
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 10100945c; end: 10100952f;  */

void FUN_10100945c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_2;
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
  lVar4 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  *(long *)(unaff_x22 + 0x158) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x160) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x168) = uVar1;
  lVar4 = 0x112d53358;
  func_0x0001000285a8(0x112d53358,&UNK_10d91b4d0);
  *(long *)(unaff_x22 + 0x170) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x180) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x188) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 400) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101009530,uVar2,uVar3);
  return;
}



/* Entry: 101009530; end: 101009607;  */

void FUN_101009530(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar1 = *(long *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar2 = *(long *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  lVar7 = *(long *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  lVar6 = *(long *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,uVar3);
  (**(code **)(lVar6 + 8))(uVar4,uVar3,lVar6);
  func_0x000107c5fd34(uVar9,uVar5);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x130,0,0);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101009608;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar8,unaff_x22 + 0xd0,*(undefined8 *)(unaff_x22 + 0x170));
  return;
}



/* Entry: 101009608; end: 10100964b;  */

void FUN_101009608(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10100964c,*(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0x198));
  return;
}



/* Entry: 10100964c; end: 1010097bb;  */

void FUN_10100964c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0xc1) = *(undefined8 *)(unaff_x22 + 0x121);
  *(undefined8 *)(unaff_x22 + 0xb9) = *(undefined8 *)(unaff_x22 + 0x119);
  if (*(long *)(unaff_x22 + 0x70) == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
              (*(undefined8 *)(unaff_x22 + 0x180),*(undefined8 *)(unaff_x22 + 0x170));
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x61) = *(undefined8 *)(unaff_x22 + 0xc1);
    *(undefined8 *)(unaff_x22 + 0x59) = *(undefined8 *)(unaff_x22 + 0xb9);
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(long *)(unaff_x22 + 0x150) + 0x10;
    func_0x000107c61618();
    if (uVar2 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
                (*(undefined8 *)(unaff_x22 + 0x180),*(undefined8 *)(unaff_x22 + 0x170));
    }
    else {
      uVar3 = uVar2;
      func_0x000107c5fd5c();
      if ((uVar3 & 1) == 0) {
        FUN_1010097bc(unaff_x22 + 0x10);
        func_0x000107c61170(uVar2);
        FUN_10100b308(unaff_x22 + 0x70,0x112d53360,&UNK_10d919b30);
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1a0) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_101009608;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar4,unaff_x22 + 0xd0,*(undefined8 *)(unaff_x22 + 0x170));
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
                (*(undefined8 *)(unaff_x22 + 0x180),*(undefined8 *)(unaff_x22 + 0x170));
      func_0x000107c61170(uVar2);
    }
    FUN_10100b308(unaff_x22 + 0x70,0x112d53360,&UNK_10d919b30);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x188));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010100974c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1010097bc; end: 101009c8b;  */

/* WARNING: Possible PIC construction at 0x0001010098e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101009a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101009aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101009b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101009bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101009c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101009c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101009bd8) */
/* WARNING: Removing unreachable block (ram,0x000101009c30) */
/* WARNING: Removing unreachable block (ram,0x000101009be0) */
/* WARNING: Removing unreachable block (ram,0x000101009c20) */
/* WARNING: Removing unreachable block (ram,0x000101009c58) */
/* WARNING: Removing unreachable block (ram,0x000101009b14) */
/* WARNING: Removing unreachable block (ram,0x000101009af0) */
/* WARNING: Removing unreachable block (ram,0x000101009afc) */
/* WARNING: Removing unreachable block (ram,0x000101009a10) */
/* WARNING: Removing unreachable block (ram,0x0001010098ec) */
/* WARNING: Removing unreachable block (ram,0x000101009c88) */
/* WARNING: Removing unreachable block (ram,0x00010100996c) */
/* WARNING: Removing unreachable block (ram,0x0001010099b8) */
/* WARNING: Removing unreachable block (ram,0x0001010099c0) */
/* WARNING: Removing unreachable block (ram,0x0001010099dc) */
/* WARNING: Removing unreachable block (ram,0x0001010099e4) */
/* WARNING: Removing unreachable block (ram,0x0001010099ec) */
/* WARNING: Removing unreachable block (ram,0x0001010099f0) */
/* WARNING: Removing unreachable block (ram,0x0001010099f4) */
/* WARNING: Removing unreachable block (ram,0x0001010099cc) */
/* WARNING: Removing unreachable block (ram,0x000101009a30) */
/* WARNING: Removing unreachable block (ram,0x000101009a9c) */
/* WARNING: Removing unreachable block (ram,0x000101009b2c) */
/* WARNING: Removing unreachable block (ram,0x000101009bfc) */
/* WARNING: Removing unreachable block (ram,0x000101009b3c) */
/* WARNING: Removing unreachable block (ram,0x000101009c18) */
/* WARNING: Removing unreachable block (ram,0x000101009b78) */
/* WARNING: Removing unreachable block (ram,0x000101009ab0) */
/* WARNING: Removing unreachable block (ram,0x000101009a08) */
/* WARNING: Removing unreachable block (ram,0x000101009c14) */
/* WARNING: Removing unreachable block (ram,0x000101009c68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010097bc(ulong *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0x112d545a0;
  func_0x0001000285a8(0x112d545a0,&UNK_10d91b4e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *param_1;
  FUN_10100b07c();
  lVar1 = _DAT_112d54480;
  uVar3 = uVar4;
  FUN_10100ac74();
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(unaff_x20 + lVar1);
    if ((((char)((long *)(unaff_x20 + _DAT_112d54488))[1] != '\x01') &&
        (lVar2 = *(long *)(unaff_x20 + _DAT_112d54488), -1 < lVar2)) &&
       (lVar2 < *(long *)(uVar3 + 0x10))) {
      func_0x000107c61434(*(undefined8 *)(uVar3 + lVar2 * 0x58 + 0x28));
    }
    *(ulong *)(unaff_x20 + lVar1) = uVar4;
    func_0x000107c61434(uVar4);
    uVar4 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 101009c8c; end: 101009d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101009c8c(ulong param_1,long param_2,ulong param_3,long param_4,uint param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112d54480);
  uVar5 = *(ulong *)(lVar6 + 0x10);
  if (uVar5 != 0) {
    if (((param_4 != 0) &&
        (uVar3 = *(ulong *)(unaff_x20 + _DAT_112d54488),
        (char)((ulong *)(unaff_x20 + _DAT_112d54488))[1] != '\x01' && uVar3 < uVar5)) &&
       (lVar4 = lVar6 + uVar3 * 0x58, uVar3 = *(ulong *)(lVar4 + 0x20),
       uVar3 != param_3 || param_4 != *(long *)(lVar4 + 0x28))) {
      func_0x000107c605b8();
      if ((uVar3 & 1) == 0) {
        return 1;
      }
      uVar5 = *(ulong *)(lVar6 + 0x10);
      if (uVar5 == 0) {
        return 0;
      }
    }
    uVar3 = 0;
    pbVar7 = (byte *)(lVar6 + 0x70);
    do {
      if (uVar5 == uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101009d98);
        (*pcVar1)();
      }
      if ((*pbVar7 & 1) == 0) {
        uVar2 = *(ulong *)(pbVar7 + -0x50);
        if ((uVar2 == param_1 && *(long *)(pbVar7 + -0x48) == param_2) ||
           (func_0x000107c605b8(uVar2,*(long *)(pbVar7 + -0x48),param_1,param_2,0), (uVar2 & 1) != 0
           )) {
          FUN_10100894c(uVar3,param_5 & 1);
          return 1;
        }
      }
      uVar3 = uVar3 + 1;
      pbVar7 = pbVar7 + 0x58;
    } while (uVar5 != uVar3);
  }
  return 0;
}



/* Entry: 101009d98; end: 101009e5f;  */

undefined1  [16] FUN_101009d98(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar6 = param_2[2];
  if (lVar6 != 0) {
    lVar5 = 0;
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_90 = param_1[2];
    uStack_88 = (undefined1)param_1[3];
    uStack_7f = *(undefined8 *)((long)param_1 + 0x21);
    uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
    uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
    do {
      lStack_68 = param_2[5];
      lStack_70 = param_2[4];
      lStack_60 = param_2[6];
      uStack_58 = (undefined1)param_2[7];
      uStack_4f = *(undefined8 *)((long)param_2 + 0x41);
      uStack_57 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
      uVar3 = param_2[10];
      lVar1 = param_2[0xb];
      plVar2 = &lStack_70;
      func_0x0001010157e8(plVar2,&uStack_a0);
      if (((ulong)plVar2 & 1) != 0) {
        if ((uVar3 == param_1[6] && lVar1 == param_1[7]) ||
           (func_0x000107c605b8(uVar3,lVar1,param_1[6],param_1[7],0), (uVar3 & 1) != 0)) {
          uVar4 = 0;
          goto LAB_101009e44;
        }
      }
      lVar5 = lVar5 + 1;
      param_2 = param_2 + 0xb;
    } while (lVar6 != lVar5);
  }
  lVar5 = 0;
  uVar4 = 1;
LAB_101009e44:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Entry: 101009e60; end: 101009eff;  */

void FUN_101009e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  lVar4 = 0x112d54598;
  func_0x0001000285a8(0x112d54598,&UNK_10d91b4b0);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101009f00,uVar2,uVar3);
  return;
}


