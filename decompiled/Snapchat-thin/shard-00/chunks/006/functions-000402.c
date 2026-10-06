/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10085ef58; end: 10085f0a3; -[SCFeatureRingFlashImpl _setupCameraModeActivationInfoObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085ef58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  param_1 = param_1 + _DAT_11274116c;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c43bb4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c421ac();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x000107c5c320(lVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 10085f0a4; end: 10085f0b7; -[SCFeatureRingFlashImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085f0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127411d4,param_3);
  return;
}



/* Entry: 10085f0b8; end: 10085f0cb; -[SCFeatureRingFlashImpl setUIDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085f0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127411f4,param_3);
  return;
}



/* Entry: 10085f0cc; end: 10085f2bb; -[SCMainCameraViewControllerStartupWorkflow _initTooltipPriorityResolver:] */

void FUN_10085f0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_58,param_3);
  func_0x000107c61144(auStack_60,param_1);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c82e8;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126d3fc8;
  func_0x000107c5cbd0(PTR_PTR_1126d3fc8);
  func_0x000107c61180();
  func_0x000107c4c198(puVar3);
  func_0x000107c61180();
  func_0x000107c3f044(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c6111c(auStack_70,auStack_58);
  func_0x000107c6111c(auStack_68,auStack_60);
  func_0x000107c5e070(puVar1);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_68);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10085f2bc; end: 10085f2cb; +[SCAttributedCameraMainCameraStartupSubTask tooltipPriorityResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085f2bc(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aea8) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085f2cc; end: 10085f323;  */

void FUN_10085f2cc(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + *param_3) = param_4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085f324; end: 10085f3eb; +[SCAttributedCameraTask mainStartup:] */

void FUN_10085f324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010085f35c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10085f3ec; end: 10085f3f3; +[SCAttributedCameraTask memoriesSideButtonObserveSpectacles] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085f3ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0xe;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085f3f4; end: 10085f403; +[SCAttributedCameraMainCameraStartupSubTask geoFilterInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085f3f4(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aea8) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085f404; end: 10085f413; +[SCAttributedCameraMainCameraStartupSubTask uploadPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085f404(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aea8) = 4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085f414; end: 10085f6af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10085f414(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c421fc();
  if (iVar2 != 0) {
    func_0x000107c3e748(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127964c4),param_2,1,
                        0);
  }
  func_0x000107c3ec60(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c54b80(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c3d89c(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c5a050(*(undefined8 *)(param_1 + 0x28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c40280(uVar3,param_2,uVar4);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar5;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c50890(uVar7);
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40280(uVar6,param_2,uVar7);
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar8;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3ec1c(uVar10);
  func_0x000107c61180();
  uVar11 = uVar9;
  func_0x000107c40280(uVar9,param_2,uVar10);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar11;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4ace0(uVar13);
  func_0x000107c61180();
  uVar14 = uVar12;
  func_0x000107c40280(uVar12,param_2,uVar13);
  func_0x000107c61180();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_2,puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c4abfc(*(undefined8 *)(param_1 + 0x20));
  uVar16 = *(ulong *)(param_1 + 0x20);
  func_0x000107c421fc();
  if ((int)uVar16 != 0) {
    uVar16 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127964c4);
    func_0x000107c427e0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar16;
  }
  func_0x000107c60e78();
  return (ulong)*(byte *)(uVar16 + (long)_DAT_1127964b8);
}



/* Entry: 10085f6b0; end: 10085f6bf; -[SCSubviewUIContainer doesSendAppearanceTransitions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10085f6b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127964b8);
}



/* Entry: 10085f6c0; end: 10085f707;  */

long FUN_10085f6c0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar2 < uVar1) {
    uVar2 = param_1[3] + uVar2;
  }
  if (param_2 < uVar2 - uVar1) {
    uVar2 = 0;
    if (param_1[3] <= uVar1 + param_2) {
      uVar2 = param_1[3];
    }
    return param_1[2] + ((uVar1 + param_2) - uVar2) * 0x30;
  }
  return 0;
}



/* Entry: 10085f708; end: 10085f71b; -[SCCameraViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085f708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f9350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),PTR_s_performViewDidLayoutSubviews__11261bef0
             ,param_1);
  return;
}



/* Entry: 10085f71c; end: 10085f8cb; -[SCCameraViewControllerStartupWorkflow performViewDidLayoutSubviews:] */

/* WARNING: Possible PIC construction at 0x00010085f768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085f798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085f7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085f830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085f868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085f8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085f8a4) */
/* WARNING: Removing unreachable block (ram,0x00010085f834) */
/* WARNING: Removing unreachable block (ram,0x00010085f86c) */
/* WARNING: Removing unreachable block (ram,0x00010085f87c) */
/* WARNING: Removing unreachable block (ram,0x00010085f884) */
/* WARNING: Removing unreachable block (ram,0x00010085f844) */
/* WARNING: Removing unreachable block (ram,0x00010085f7e0) */
/* WARNING: Removing unreachable block (ram,0x00010085f79c) */
/* WARNING: Removing unreachable block (ram,0x00010085f76c) */
/* WARNING: Removing unreachable block (ram,0x00010085f788) */
/* WARNING: Removing unreachable block (ram,0x00010085f8b4) */

void FUN_10085f71c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c500f8(param_3);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10085f8cc; end: 10085f8cf; -[SCCameraViewfinderLayoutController containingViewDidLayoutSubviews] */

void FUN_10085f8cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec96d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncAndEvaluate_11258ff58);
  return;
}



/* Entry: 10085f8d0; end: 10085fc1f; -[SCCameraViewfinderLayoutController _syncAndEvaluate] */

/* WARNING: Possible PIC construction at 0x00010085fa18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085fa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085fbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085fa1c) */
/* WARNING: Removing unreachable block (ram,0x00010085fa20) */
/* WARNING: Removing unreachable block (ram,0x00010085fa24) */
/* WARNING: Removing unreachable block (ram,0x00010085fa38) */
/* WARNING: Removing unreachable block (ram,0x00010085fa3c) */
/* WARNING: Removing unreachable block (ram,0x00010085fa50) */
/* WARNING: Removing unreachable block (ram,0x00010085fa60) */
/* WARNING: Removing unreachable block (ram,0x00010085fbdc) */
/* WARNING: Removing unreachable block (ram,0x00010085fbe0) */
/* WARNING: Removing unreachable block (ram,0x00010085fbe4) */
/* WARNING: Removing unreachable block (ram,0x00010085fbe8) */
/* WARNING: Removing unreachable block (ram,0x00010085fbec) */
/* WARNING: Removing unreachable block (ram,0x00010085fbf0) */
/* WARNING: Removing unreachable block (ram,0x00010085fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010085fbf8) */
/* WARNING: Removing unreachable block (ram,0x00010085fbfc) */
/* WARNING: Removing unreachable block (ram,0x00010085fc00) */
/* WARNING: Removing unreachable block (ram,0x00010085fc04) */
/* WARNING: Removing unreachable block (ram,0x00010085fc08) */
/* WARNING: Removing unreachable block (ram,0x00010085fc0c) */
/* WARNING: Removing unreachable block (ram,0x00010085fc14) */
/* WARNING: Removing unreachable block (ram,0x00010085fc18) */
/* WARNING: Removing unreachable block (ram,0x00010085fa9c) */
/* WARNING: Removing unreachable block (ram,0x00010085faf0) */
/* WARNING: Removing unreachable block (ram,0x00010085fb18) */
/* WARNING: Removing unreachable block (ram,0x00010085fb50) */
/* WARNING: Removing unreachable block (ram,0x00010085fb24) */
/* WARNING: Removing unreachable block (ram,0x00010085fb54) */
/* WARNING: Removing unreachable block (ram,0x00010085fb6c) */
/* WARNING: Removing unreachable block (ram,0x00010085fb74) */
/* WARNING: Removing unreachable block (ram,0x00010085fc1c) */
/* WARNING: Removing unreachable block (ram,0x00010085fa98) */

void FUN_10085f8d0(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = *(long *)(param_5 + 0x10);
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    *(undefined1 *)(param_5 + 0xc0) = 1;
  }
  else {
    func_0x000107c3ec60(lVar1);
    dVar2 = param_1;
    dVar3 = param_2;
    dVar4 = param_3;
    dVar5 = param_4;
    func_0x000107c515a0(lVar1);
    param_1 = param_1 + dVar3;
    param_2 = param_2 + dVar2;
    param_3 = param_3 - (dVar3 + dVar5);
    param_4 = param_4 - (dVar2 + dVar4);
    func_0x000107c40738(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x10),param_6,
                        lVar1);
    func_0x000107c609c8();
    func_0x000107c609c4(param_1,param_2,param_3,param_4);
    func_0x000107c3ec60(*(undefined8 *)(param_5 + 0x10));
    func_0x000107c609b8();
    func_0x000107c609b8(param_1,param_2,param_3,param_4);
    func_0x000107c3ec60(*(undefined8 *)(param_5 + 0x10));
    func_0x000107c609b4();
    func_0x000107c609b4(param_1,param_2,param_3,param_4);
    func_0x000107c3ec60(*(undefined8 *)(param_5 + 0x10));
    func_0x000107c519d4(lVar1);
    func_0x000107c61180();
    func_0x000107c51820();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10085fc20; end: 10085fc4f; -[SCCameraViewController updateSnapBackInsetPresentationLayoutIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085fc20(long param_1)

{
  if (*(char *)(param_1 + _DAT_1127625b0) == '\x01') {
    if (*(long *)(param_1 + _DAT_1127625cc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010085fc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + _DAT_1127625cc) + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10085fc50; end: 10085fc97; -[SCMainCameraViewController forceReloadViewWillAndDidAppearIfNeeded] */

void FUN_10085fc50(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x000107c3bb50();
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_1126f8338;
    uStack_30 = param_1;
    func_0x000107c61154(&uStack_30,PTR_s_forceReloadViewWillAndDidAppearI_1125cad50);
  }
  return;
}



/* Entry: 10085fc98; end: 10085fcd7; -[SCMainCameraViewController _isMainCameraView] */

bool FUN_10085fc98(long param_1)

{
  long lVar1;
  
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c3f300();
  func_0x000107c61170(param_1);
  return lVar1 == 0;
}



/* Entry: 10085fcd8; end: 10085fcdf; -[SCCameraViewControllerInternalState cameraViewType] */

undefined8 FUN_10085fcd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10085fce0; end: 10085fd93; -[SCCameraOverlayView setBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085fce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_5;
  func_0x000107c3ec60();
  func_0x000107c609ac();
  puStack_48 = PTR_PTR_1126f83c8;
  uStack_50 = param_5;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_setBounds__11263a898);
  if ((*(char *)(param_5 + (long)_DAT_112762848) == '\x01') && ((uVar1 & 1) == 0)) {
    func_0x000107c4e154(*(undefined8 *)(param_5 + (long)_DAT_11276284c));
  }
  return;
}



/* Entry: 10085fd94; end: 10085ff57; -[SCCameraOverlayView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085fd94(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f83c8;
  lStack_70 = param_5;
  func_0x000107c61154(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_112762848;
  if (*(char *)(param_5 + lVar4) == '\x01') {
    func_0x000107c4e16c(*(undefined8 *)(param_5 + _DAT_11276284c));
  }
  func_0x000107c3ca44(param_5);
  if (((*(char *)(param_5 + lVar4) == '\x01') &&
      (lVar4 = (long)_DAT_112762844, *(long *)(param_5 + lVar4) != 0)) &&
     (lVar5 = (long)_DAT_112762850, *(long *)(param_5 + lVar5) != 0)) {
    func_0x000107c4abec(*(undefined8 *)(param_5 + _DAT_1127627e0));
    dVar6 = param_1;
    func_0x000107c438d4(*(undefined8 *)(param_5 + lVar4));
    func_0x000107c3ec3c(*(undefined8 *)(param_5 + lVar5));
    lVar4 = (long)_DAT_1127628b0;
    if (*(char *)(param_5 + lVar4) == '\x01') {
      lVar5 = param_5;
      func_0x000107c3ec60();
      iVar3 = (int)lVar5;
      func_0x000107c609ac();
      if (iVar3 != 0) {
        puVar1 = (undefined8 *)(param_5 + _DAT_1127628b8);
        func_0x000107c609ac(param_1,param_2,param_3,param_4,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
        if ((iVar3 != 0) && (dVar6 == *(double *)(param_5 + _DAT_1127628bc))) {
          return;
        }
      }
    }
    func_0x000107c3ec60(param_5);
    func_0x000107c609b8();
    dVar7 = param_1;
    dVar8 = param_2;
    dVar9 = param_3;
    dVar10 = param_4;
    func_0x000107c609b8();
    *(undefined1 *)(param_5 + lVar4) = 1;
    pdVar2 = (double *)(param_5 + _DAT_1127628b4);
    func_0x000107c3ec60(param_5);
    *pdVar2 = dVar7;
    pdVar2[1] = dVar8;
    pdVar2[2] = dVar9;
    pdVar2[3] = dVar10;
    pdVar2 = (double *)(param_5 + _DAT_1127628b8);
    *pdVar2 = param_1;
    pdVar2[1] = param_2;
    pdVar2[2] = param_3;
    pdVar2[3] = param_4;
    *(double *)(param_5 + _DAT_1127628bc) = dVar6;
  }
  return;
}



/* Entry: 10085ff58; end: 100860063; -[SCCameraOverlayView _synchronizeRuntimeHostedViewGeometry] */

/* WARNING: Possible PIC construction at 0x00010085ffb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100860040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085ffbc) */
/* WARNING: Removing unreachable block (ram,0x00010085ffe4) */
/* WARNING: Removing unreachable block (ram,0x00010086002c) */
/* WARNING: Removing unreachable block (ram,0x00010086003c) */
/* WARNING: Removing unreachable block (ram,0x000100860044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085ff58(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_112762848) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112762838);
    func_0x000107c5cbc4(uVar1);
    func_0x000107c61180();
    func_0x000107c5c6c4();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 100860064; end: 1008602f7; -[SCCameraTimerCoolRecordingRingView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100860064(double param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f8598;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_112763118;
  if (*(long *)(param_2 + lVar4) != 0) {
    param_1 = 0.0;
    func_0x000107c52e44(0,0,0x4038000000000000,0x4038000000000000);
    lVar5 = (long)_DAT_1127630f8;
    func_0x000107c3ec60(*(undefined8 *)(param_2 + lVar5));
    func_0x000107c609bc();
    dVar6 = param_1;
    func_0x000107c3ec60(*(undefined8 *)(param_2 + lVar5));
    func_0x000107c609c0();
    func_0x000107c532b4(param_1,dVar6,*(undefined8 *)(param_2 + lVar4));
  }
  lVar4 = (long)_DAT_11276311c;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar4);
  func_0x000107c49bc8();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    param_1 = 0.0;
    func_0x000107c52e44(0,0,0x4039000000000000,0x4039000000000000);
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_1127630f8;
    func_0x000107c3ec60(*(undefined8 *)(param_2 + lVar5));
    func_0x000107c609bc();
    dVar6 = param_1;
    func_0x000107c3ec60(*(undefined8 *)(param_2 + lVar5));
    func_0x000107c609c0();
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c532b4(param_1,dVar6);
    func_0x000107c61170(uVar2);
  }
  lVar4 = (long)_DAT_112763120;
  if (*(long *)(param_2 + lVar4) != 0) {
    param_1 = *(double *)(param_2 + (long)_DAT_112763134) + -86.0 + 64.0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (86.0 <= *(double *)(param_2 + (long)_DAT_112763134)) {
      param_1 = 64.0;
    }
    func_0x000107c52e44(0,0,param_1,param_1);
    param_1 = param_1 * 0.5;
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x000107c4aba4(uVar2);
    func_0x000107c61180();
    func_0x000107c539d4(param_1);
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_1127630f8;
    func_0x000107c3ec60(*(undefined8 *)(param_2 + lVar5));
    func_0x000107c609bc();
    dVar6 = param_1;
    func_0x000107c3ec60(*(undefined8 *)(param_2 + lVar5));
    func_0x000107c609c0();
    func_0x000107c532b4(param_1,dVar6,*(undefined8 *)(param_2 + lVar4));
  }
  func_0x000107c3bc00(param_2);
  lVar4 = (long)_DAT_112763124;
  if (((*(long *)(param_2 + lVar4) != 0) &&
      (uVar3 = param_2, func_0x000107c3c7bc(), (uVar3 & 1) == 0)) &&
     (uVar3 = param_2, func_0x000107c3c7c0(), (uVar3 & 1) == 0)) {
    func_0x000107c550d8(*(undefined8 *)(param_2 + lVar4));
  }
  lVar4 = (long)_DAT_112763108;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar4);
  func_0x000107c49bc8();
  if (iVar1 != 0) {
    func_0x000107c3ec60(param_2);
    func_0x000107c609cc();
    dVar6 = param_1 * 0.5;
    func_0x000107c3ec60(param_2);
    func_0x000107c609b0();
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c575ec(dVar6,param_1 * 0.5);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1008602f8; end: 100860353; -[SCCameraTimerCoolRecordingRingView _shouldShowHandsFreeInterstitialIdleCaptureFill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1008602f8(long param_1)

{
  byte bVar1;
  
  if (((*(char *)(param_1 + _DAT_112763144) == '\x01') &&
      (*(char *)(param_1 + _DAT_11276310c) == '\x01')) &&
     (*(char *)(param_1 + _DAT_11276314c) == '\x01')) {
    bVar1 = *(byte *)(param_1 + _DAT_112763150) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 100860354; end: 1008603ab; -[SCCameraTimerCoolRecordingRingView _shouldShowHandsFreeInterstitialIdleCaptureFillTrackOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_100860354(long param_1)

{
  byte bVar1;
  
  if (((*(char *)(param_1 + _DAT_112763144) == '\x01') &&
      (*(char *)(param_1 + _DAT_11276310c) == '\x01')) &&
     (*(char *)(param_1 + _DAT_11276314c) == '\x01')) {
    bVar1 = *(byte *)(param_1 + _DAT_112763150);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1008603ac; end: 100860407;  */

void FUN_1008603ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uVar8 = param_2[2];
  uVar4 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  uStack_30 = uVar8;
  FUN_1005a70c4(param_1,&uStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
  puStack_88 = PTR_PTR_1127061b0;
  lStack_90 = param_1;
  func_0x000107c61154(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x000107c5d834();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c45034(param_1);
    func_0x000107c61180();
    func_0x000107c5b078();
    lVar2 = param_1;
    func_0x000107c45034(param_1);
    func_0x000107c61180();
    func_0x000107c5b078();
    lVar3 = param_1;
    func_0x000107c45130(param_1);
    func_0x000107c61180();
    dVar5 = 0.0;
    dVar9 = 0.0;
    func_0x000107c52e44(0,0,uVar4,uVar8);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    lVar1 = param_1;
    func_0x000107c450bc();
    lVar2 = param_1;
    lVar3 = param_1;
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        func_0x000107c450b8(param_1);
        dVar6 = dVar5;
        func_0x000107c45130(param_1);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c609bc();
        dVar5 = dVar5 + dVar6;
      }
      else {
        if (lVar1 != 1) {
          return;
        }
        func_0x000107c3ec60(param_1);
        func_0x000107c609b4();
        dVar6 = dVar5;
        func_0x000107c450b8(param_1);
        dVar5 = dVar5 - dVar6;
        func_0x000107c45130(param_1);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c609bc();
        dVar5 = dVar5 - dVar6;
      }
      func_0x000107c450b8(param_1);
      func_0x000107c45130(param_1);
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c609c0();
      dVar9 = dVar9 + dVar6;
    }
    else {
      if (lVar1 == 2) {
        func_0x000107c3ec60(param_1);
        func_0x000107c609b4();
        dVar6 = dVar5;
        func_0x000107c450b8(param_1);
        dVar5 = dVar5 - dVar6;
        func_0x000107c45130(param_1);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c609bc();
        dVar5 = dVar5 - dVar6;
      }
      else {
        if (lVar1 != 3) {
          return;
        }
        func_0x000107c450b8(param_1);
        dVar6 = dVar5;
        func_0x000107c45130(param_1);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c609bc();
        dVar5 = dVar5 + dVar6;
      }
      func_0x000107c3ec60(param_1);
      func_0x000107c609b8();
      dVar7 = dVar6;
      func_0x000107c450b8(param_1);
      func_0x000107c45130(param_1);
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c609c0();
      dVar9 = (dVar6 - dVar9) - dVar7;
    }
    func_0x000107c45130(param_1);
    func_0x000107c61180();
    func_0x000107c532b4(dVar5,dVar9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
  }
  else {
    func_0x000107c45134(param_1);
    lVar1 = param_1;
    func_0x000107c45130(param_1);
    func_0x000107c61180();
    func_0x000107c53840();
    func_0x000107c61170(lVar1);
    func_0x000107c45130(param_1);
    func_0x000107c61180();
    func_0x000107c4c530();
    func_0x000107c611b0();
    lVar2 = param_1;
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100860408; end: 10086070b; -[SCScalingButton layoutSubviews] */

void FUN_100860408(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1127061b0;
  lStack_50 = param_3;
  func_0x000107c61154(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_3;
  func_0x000107c5d834();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x000107c45034(param_3);
    func_0x000107c61180();
    func_0x000107c5b078();
    lVar2 = param_3;
    func_0x000107c45034(param_3);
    func_0x000107c61180();
    func_0x000107c5b078();
    lVar3 = param_3;
    func_0x000107c45130(param_3);
    func_0x000107c61180();
    dVar4 = 0.0;
    dVar7 = 0.0;
    func_0x000107c52e44(0,0,param_1,param_2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    lVar1 = param_3;
    func_0x000107c450bc();
    lVar2 = param_3;
    lVar3 = param_3;
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        func_0x000107c450b8(param_3);
        dVar5 = dVar4;
        func_0x000107c45130(param_3);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c609bc();
        dVar4 = dVar4 + dVar5;
      }
      else {
        if (lVar1 != 1) {
          return;
        }
        func_0x000107c3ec60(param_3);
        func_0x000107c609b4();
        dVar5 = dVar4;
        func_0x000107c450b8(param_3);
        dVar4 = dVar4 - dVar5;
        func_0x000107c45130(param_3);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c609bc();
        dVar4 = dVar4 - dVar5;
      }
      func_0x000107c450b8(param_3);
      func_0x000107c45130(param_3);
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c609c0();
      dVar7 = dVar7 + dVar5;
    }
    else {
      if (lVar1 == 2) {
        func_0x000107c3ec60(param_3);
        func_0x000107c609b4();
        dVar5 = dVar4;
        func_0x000107c450b8(param_3);
        dVar4 = dVar4 - dVar5;
        func_0x000107c45130(param_3);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c609bc();
        dVar4 = dVar4 - dVar5;
      }
      else {
        if (lVar1 != 3) {
          return;
        }
        func_0x000107c450b8(param_3);
        dVar5 = dVar4;
        func_0x000107c45130(param_3);
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c609bc();
        dVar4 = dVar4 + dVar5;
      }
      func_0x000107c3ec60(param_3);
      func_0x000107c609b8();
      dVar6 = dVar5;
      func_0x000107c450b8(param_3);
      func_0x000107c45130(param_3);
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c609c0();
      dVar7 = (dVar5 - dVar7) - dVar6;
    }
    func_0x000107c45130(param_3);
    func_0x000107c61180();
    func_0x000107c532b4(dVar4,dVar7);
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar3);
  }
  else {
    func_0x000107c45134(param_3);
    lVar1 = param_3;
    func_0x000107c45130(param_3);
    func_0x000107c61180();
    func_0x000107c53840();
    func_0x000107c61170(lVar1);
    func_0x000107c45130(param_3);
    func_0x000107c61180();
    func_0x000107c4c530();
    func_0x000107c611b0();
    lVar2 = param_3;
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10086070c; end: 10086071b; -[SCScalingButton useConstraintsForImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10086070c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e12c);
}



/* Entry: 10086071c; end: 10086072b; -[SCScalingButton imageViewContentMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10086071c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e130);
}



/* Entry: 10086072c; end: 1008607b7;  */

void FUN_10086072c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c5a050(param_1);
  puVar1 = PTR_PTR_1126e13c0;
  func_0x000107c610f4(PTR_PTR_1126e13c0);
  func_0x000107c494d4();
  func_0x000107c57cd4();
  (**(code **)(param_3 + 0x10))(param_3,puVar1);
  func_0x000107c61170(param_3);
  puVar2 = puVar1;
  func_0x000107c497b4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008607b8; end: 10086085f; -[MASConstraintMaker initWithView:] */

undefined1 * FUN_1008607b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270aec0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c5a568(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x000107c53790(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61174(puVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 100860860; end: 10086086b; -[MASConstraintMaker setView:] */

void FUN_100860860(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10086086c; end: 10086089b; -[MASConstraintMaker setConstraints:] */

void FUN_10086086c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10086089c; end: 1008608a3; -[MASConstraintMaker setRemoveExisting:] */

void FUN_10086089c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1008608a4; end: 1008609cf;  */

/* WARNING: Possible PIC construction at 0x000100860908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086092c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008609a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008609b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008609a4) */
/* WARNING: Removing unreachable block (ram,0x000100860930) */
/* WARNING: Removing unreachable block (ram,0x00010086090c) */
/* WARNING: Removing unreachable block (ram,0x0001008609b4) */

void FUN_1008608a4(undefined8 param_1,long param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c3f74c();
  func_0x000107c61180();
  func_0x000107c42a10();
  func_0x000107c61180();
  (**(code **)(param_2 + 0x10))();
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008609d0; end: 1008609d7; -[MASConstraintMaker center] */

void FUN_1008609d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithAttributes__11259b810,0x600)
  ;
  return;
}



/* Entry: 1008609d8; end: 100860eaf; -[MASConstraintMaker addConstraintWithAttributes:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008609d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  if ((param_3 >> 1 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c528();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 2 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c534();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 3 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c538();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 4 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c508();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 5 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c524();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 6 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c53c();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 7 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c540();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 8 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c518();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 9 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c50c();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 10 & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c510();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  if ((param_3 >> 0xb & 1) != 0) {
    uVar5 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4c504();
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = puVar1;
  func_0x000107c40808(puVar1);
  func_0x000107c3e170(puVar3,param_2,puVar2);
  func_0x000107c61180();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(puVar1);
  puVar2 = puVar1;
  func_0x000107c4080c(puVar1,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          func_0x000107c61128(puVar1);
        }
        puVar4 = PTR_PTR_1126da528;
        func_0x000107c610f4(PTR_PTR_1126da528);
        func_0x000107c46974();
        func_0x000107c3d798(puVar3,param_2,puVar4);
        func_0x000107c61170(puVar4);
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      puVar2 = puVar1;
      func_0x000107c4080c(puVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c610f4(PTR_PTR_1126e13b0);
  func_0x000107c45da8();
  func_0x000107c53fcc();
  func_0x000107c402b8(param_1);
  func_0x000107c61180();
  func_0x000107c3d798();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c61148(puVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100860eb0; end: 100860ec7; -[MASConstraintMaker view] */

void FUN_100860eb0(long param_1)

{
  func_0x000107c61148(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100860ec8; end: 100860efb;  */

void FUN_100860ec8(void)

{
  func_0x000107c610f4(PTR_PTR_1126e13a8);
  func_0x000107c494d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100860efc; end: 100860f87; -[MASViewAttribute initWithView:layoutAttribute:] */

undefined1 *
FUN_100860efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270aec8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61174(puVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 100860f88; end: 100861043;  */

void FUN_100860f88(double param_1,long param_2,undefined8 param_3)

{
  code *extraout_x8;
  code *extraout_x8_00;
  
  *(undefined8 *)(param_2 + 0xd8) = param_3;
  if (lRam000000011383a240 != 0) {
    FUN_100613544();
    func_0x000100613370();
    func_0x000100613384();
    (*extraout_x8)();
    func_0x0001006134b4();
    func_0x0001006134bc();
  }
  if ((0.0 < param_1) && (lRam000000011383a240 != 0)) {
    FUN_100613544();
    func_0x000100613370();
    func_0x000100613384();
    (*extraout_x8_00)();
    func_0x0001006134b4();
    func_0x0001006134bc();
  }
  func_0x000100833618();
  return;
}



/* Entry: 100861044; end: 1008610cb;  */

void FUN_100861044(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  code *extraout_x8;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  
  func_0x0001004a4aec();
  (*extraout_x8)();
  if ((int)param_1 != 0) {
    func_0x000107c35424();
    FUN_100613460();
    func_0x000100613470();
    func_0x00010061347c();
    func_0x00010061348c();
    func_0x000100613494();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  FUN_1004a4ba4();
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c35468();
    func_0x000107c354b0();
    do {
      func_0x000107c3549c();
      func_0x000107c354a4();
    } while (!(bool)in_ZR);
    func_0x000107c35498();
    uVar3 = param_1[1];
    if (uVar3 < (ulong)param_1[2]) {
      FUN_1008611a0(uVar3);
      lVar2 = uVar3 + 0x30;
      param_1[1] = lVar2;
    }
    else {
      plVar1 = param_1;
      FUN_1008346bc((long)(uVar3 - *param_1) / 0x30);
      func_0x000100164e8c(auStack_f8,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
      FUN_1008611a0(lStack_e8);
      lStack_e8 = lStack_e8 + 0x30;
      FUN_100834708();
      lVar2 = param_1[1];
      func_0x000100834714();
    }
    param_1[1] = lVar2;
    return;
  }
  return;
}



/* Entry: 1008610cc; end: 1008610d3;  */

void FUN_1008610cc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    FUN_1008611a0(uVar3);
    lVar2 = uVar3 + 0x30;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_1008346bc((long)(uVar3 - *param_1) / 0x30,param_1,param_2,unaff_x20 + 0x80);
    func_0x000100164e8c(auStack_68,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
    FUN_1008611a0(lStack_58);
    lStack_58 = lStack_58 + 0x30;
    FUN_100834708();
    lVar2 = param_1[1];
    func_0x000100834714();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1008610d4; end: 10086119f;  */

void FUN_1008610d4(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    FUN_1008611a0(uVar3);
    lVar2 = uVar3 + 0x30;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_1008346bc((long)(uVar3 - *param_1) / 0x30);
    func_0x000100164e8c(auStack_68,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
    FUN_1008611a0(lStack_58);
    lStack_58 = lStack_58 + 0x30;
    FUN_100834708();
    lVar2 = param_1[1];
    func_0x000100834714();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1008611a0; end: 1008611b7;  */

long FUN_1008611a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10002b838();
  func_0x000107c60c94(lVar1 + 0x18);
  return param_1;
}



/* Entry: 1008611b8; end: 10086123b;  */

void FUN_1008611b8(void)

{
  undefined1 in_ZR;
  undefined8 *in_x4;
  
  FUN_10083352c();
  FUN_100834568();
  FUN_10086123c();
  func_0x000100835ac4();
  func_0x0001008335f4();
  func_0x00010083360c();
  func_0x00010061348c();
  func_0x000100835ae0();
  do {
    func_0x0001006134a0();
    func_0x0001006134a8();
  } while (!(bool)in_ZR);
  FUN_1004a4ba4();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354c0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  *in_x4 = 0;
  in_x4[1] = 0;
  in_x4[2] = 0;
  return;
}



/* Entry: 10086123c; end: 100861267;  */

void FUN_10086123c(void)

{
  undefined8 *in_x4;
  
  *in_x4 = 0;
  in_x4[1] = 0;
  in_x4[2] = 0;
  return;
}



/* Entry: 100861268; end: 1008612eb;  */

void FUN_100861268(void)

{
  undefined1 in_ZR;
  
  FUN_10083352c();
  FUN_100834568();
  FUN_10086123c();
  func_0x000100835ac4();
  func_0x0001008335f4();
  func_0x00010083360c();
  func_0x00010061348c();
  func_0x000100835ae0();
  do {
    func_0x0001006134a0();
    func_0x0001006134a8();
  } while (!(bool)in_ZR);
  FUN_1004a4ba4();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354c0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 1008612ec; end: 1008612f3;  */

void FUN_1008612ec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_2,param_1 + 0x78);
  return;
}



/* Entry: 1008612f4; end: 10086142f;  */

void FUN_1008612f4(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  
  FUN_100834808();
  func_0x00010083481c();
  (*extraout_x8_00)();
  if (param_1 != 0) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    func_0x000107c35478();
    func_0x000107c354d8();
    func_0x000107c354cc();
    func_0x000107c3547c();
    func_0x000100835ad4();
    func_0x00010061348c();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  func_0x0001008344b0(extraout_x8);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c35468();
    do {
      func_0x000107c3549c();
      func_0x000107c354a4();
    } while (!(bool)in_ZR);
    func_0x000107c35498();
  }
  return;
}



/* Entry: 100861430; end: 10086144b;  */

void FUN_100861430(void)

{
  return;
}



/* Entry: 10086144c; end: 10086147f;  */

void FUN_10086144c(void)

{
  func_0x000107c610f4(PTR_PTR_1126e13a8);
  func_0x000107c494d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100861480; end: 10086152f; -[MASViewConstraint initWithFirstViewAttribute:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100861480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270aed0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112793758;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c55b48(0x447a0000,puVar1);
    func_0x000107c55b44(0x3ff0000000000000,puVar1);
    func_0x000107c61174(puVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 100861530; end: 100861563; -[MASConstraint init] */

void FUN_100861530(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270aeb8;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100861564; end: 100861573; -[MASViewConstraint setLayoutPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100861564(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + _DAT_112793748) = param_1;
  return;
}



/* Entry: 100861574; end: 100861583; -[MASViewConstraint setLayoutMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100861574(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11279374c) = param_1;
  return;
}



/* Entry: 100861584; end: 1008616ef; -[MASCompositeConstraint initWithChildren:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100861584(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  puVar3 = &uStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x000107c61174(param_3);
  puStack_e0 = PTR_PTR_11270aeb0;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x000107c4d2d4();
    lVar5 = (long)_DAT_112793714;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined1 **)((long)puVar1 + lVar5) = puVar2;
    func_0x000107c61170(uVar4);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar6 = *(long *)((long)puVar1 + lVar5);
    func_0x000107c61174(lVar6);
    lVar5 = lVar6;
    func_0x000107c4080c();
    if (lVar5 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            func_0x000107c61128(lVar6);
          }
          func_0x000107c53fcc(*(undefined8 *)(lStack_128 + lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar6;
        puVar3 = &uStack_130;
        func_0x000107c4080c();
      } while (lVar5 != 0);
    }
    func_0x000107c61170(lVar6);
    func_0x000107c61174(puVar1);
    puVar2 = (undefined1 *)puVar3;
  }
  func_0x000107c61170(param_3);
  puVar3 = puVar1;
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  func_0x000107c60e78();
  puVar3 = puVar3 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar3,puVar2);
  return puVar3;
}



/* Entry: 1008616f0; end: 1008616fb; -[MASConstraint setDelegate:] */

void FUN_1008616f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1008616fc; end: 100861703; -[MASConstraintMaker constraints] */

undefined8 FUN_1008616fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100861704; end: 100861753; -[MASConstraint equalTo] */

void FUN_100861704(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100861754;
  puStack_20 = &UNK_1109057d0;
  uStack_18 = param_1;
  func_0x000107c61184(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100861754; end: 1008617c7;  */

void FUN_100861754(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c42a14();
  func_0x000107c61180();
  lVar1 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008617c8; end: 100861817; -[MASCompositeConstraint equalToWithRelation] */

void FUN_1008617c8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100861818;
  puStack_20 = &UNK_110d607d0;
  uStack_18 = param_1;
  func_0x000107c61184(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100861818; end: 100861987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100861818(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c3f9c4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c40794();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar3);
      }
      lVar4 = *(long *)(lVar7 * 8);
      func_0x000107c42a14();
      func_0x000107c61180();
      (**(code **)(lVar4 + 0x10))();
      func_0x000107c611b0();
      func_0x000107c61170(lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar6);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return uVar6;
  }
  func_0x000107c60e78();
  return *(undefined8 *)(param_2 + _DAT_112793714);
}



/* Entry: 100861988; end: 100861997; -[MASCompositeConstraint childConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100861988(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793714);
}



/* Entry: 100861998; end: 1008619e7; -[MASViewConstraint equalToWithRelation] */

void FUN_100861998(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1008619e8;
  puStack_20 = &UNK_110d607d0;
  uStack_18 = param_1;
  func_0x000107c61184(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008619e8; end: 100861beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008619e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c61158(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = param_2;
  func_0x000107c6115c(param_2,puVar6);
  if ((uVar4 & 1) == 0) {
    func_0x000107c55b4c(*(undefined8 *)(param_1 + 0x20));
    uVar4 = param_2;
    func_0x000107c58d68(*(undefined8 *)(param_1 + 0x20));
    puVar6 = *(undefined **)(param_1 + 0x20);
    func_0x000107c61174(puVar6);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x000107c61174(param_2);
    uVar4 = param_2;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_2);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c40794(uVar3);
        func_0x000107c58d68();
        func_0x000107c3d798(puVar2);
        func_0x000107c61170(uVar3);
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
      uVar4 = param_2;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_2);
    puVar6 = PTR_PTR_1126e13b0;
    func_0x000107c610f4(PTR_PTR_1126e13b0);
    func_0x000107c45da8();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4168c(uVar3);
    func_0x000107c61180();
    func_0x000107c53fcc(puVar6);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4168c(uVar3);
    func_0x000107c61180();
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x000107c4027c();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  func_0x000107c60e78();
  *(ulong *)(param_2 + (long)_DAT_112793744) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010c1a6210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100861bec; end: 100861bff; -[MASViewConstraint setLayoutRelation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100861bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112793744) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a6210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHasLayoutRelation__1126472a0,1);
  return;
}



/* Entry: 100861c00; end: 100861c0f; -[MASViewConstraint setHasLayoutRelation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100861c00(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112793750) = param_3;
  return;
}



/* Entry: 100861c10; end: 100861d17; -[MASViewConstraint setSecondViewAttribute:] */

/* WARNING: Possible PIC construction at 0x000100861cc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100861ccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100861c10(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61158(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar2 = param_3;
  func_0x000107c6115c(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61158(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126e13a8;
      func_0x000107c61158();
      uVar2 = param_3;
      func_0x000107c6115c(param_3,puVar1);
      if ((uVar2 & 1) != 0) {
        lVar4 = (long)_DAT_11279375c;
        func_0x000107c61174(param_3);
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        *(ulong *)(param_1 + lVar4) = param_3;
        func_0x000107c61170(uVar3);
      }
    }
    else {
      puVar1 = PTR_PTR_1126e13a8;
      func_0x000107c610f4();
      func_0x000107c43658(param_1);
      func_0x000107c61180();
      func_0x000107c4abc4();
      func_0x000107c494d8();
      param_3 = *(ulong *)(param_1 + _DAT_11279375c);
      *(undefined **)(param_1 + _DAT_11279375c) = puVar1;
    }
  }
  else {
    func_0x000107c55b34(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100861d18; end: 100861d27; -[MASViewConstraint firstViewAttribute] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100861d18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793758);
}



/* Entry: 100861d28; end: 100861d2f; -[MASViewAttribute layoutAttribute] */

undefined8 FUN_100861d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100861d30; end: 100861d37; -[MASConstraintMaker size] */

void FUN_100861d30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithAttributes__11259b810,0x180)
  ;
  return;
}



/* Entry: 100861d38; end: 100861d9f;  */

void FUN_100861d38(void)

{
  func_0x000107c610f4(PTR_PTR_1126e13a8);
  func_0x000107c494d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100861da0; end: 100861def; -[MASConstraint sizeOffset] */

void FUN_100861da0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100861e04;
  puStack_20 = &UNK_110d60830;
  uStack_18 = param_1;
  func_0x000107c61184(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100861df0; end: 100861e03; -[SCScalingButton imageInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100861df0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11278e118);
}



/* Entry: 100861e04; end: 100861e37;  */

void FUN_100861e04(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c592ec(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100861e38; end: 100861f3f; -[MASCompositeConstraint setSizeOffset:] */

void FUN_100861e38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0;
  uVar6 = param_2;
  func_0x000107c3f9c4();
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(param_3);
      }
      uVar5 = param_1;
      uVar6 = param_2;
      func_0x000107c592ec(param_1,param_2,*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar4);
    lVar1 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
  lVar1 = param_3;
  func_0x000107c43658();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4abc4();
  func_0x000107c61170(lVar1);
  if ((lVar2 != 8) && (uVar6 = uVar5, lVar2 != 7)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b9a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,param_3,PTR_s_setLayoutConstant__11264c0c8);
  return;
}



/* Entry: 100861f40; end: 100861fc3; -[MASViewConstraint setSizeOffset:] */

void FUN_100861f40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  func_0x000107c43658();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4abc4();
  func_0x000107c61170(lVar1);
  if ((lVar2 != 8) && (param_2 = param_1, lVar2 != 7)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b9a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,param_3,PTR_s_setLayoutConstant__11264c0c8);
  return;
}



/* Entry: 100861fc4; end: 10086200f; -[MASViewConstraint setLayoutConstant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100861fc4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112793740) = param_1;
  func_0x000107c4abd4();
  func_0x000107c61180();
  func_0x000107c5378c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100862010; end: 10086202f; -[MASViewConstraint layoutConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100862010(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112793764);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100862030; end: 100862263; -[MASConstraintMaker install] */

ulong FUN_100862030(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x000107c4ff08();
  puVar2 = PTR_PTR_1126da528;
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    func_0x000107c497d8(puVar2,param_2,uVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    func_0x000107c61174(puVar2);
    puVar3 = puVar2;
    func_0x000107c4080c(puVar2,param_2,&uStack_1a0,auStack_d8,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar6 = *plStack_190;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_190 != lVar6) {
            func_0x000107c61128(puVar2);
          }
          func_0x000107c5d258(*(undefined8 *)(lStack_198 + (long)puVar8 * 8));
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        puVar3 = puVar2;
        func_0x000107c4080c(puVar2,param_2,&uStack_1a0,auStack_d8,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  uVar1 = param_1;
  func_0x000107c402b8();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c40794();
  func_0x000107c61170(uVar1);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  func_0x000107c61174(uVar4);
  uVar1 = uVar4;
  func_0x000107c4080c(uVar4,param_2,&uStack_1e0,auStack_158,0x10);
  if (uVar1 != 0) {
    lVar6 = *plStack_1d0;
    do {
      uVar9 = 0;
      do {
        if (*plStack_1d0 != lVar6) {
          func_0x000107c61128(uVar4);
        }
        uVar7 = *(undefined8 *)(lStack_1d8 + uVar9 * 8);
        uVar5 = param_1;
        func_0x000107c5d474(param_1);
        func_0x000107c5a1f8(uVar7,param_2,uVar5);
        func_0x000107c497b4(uVar7);
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
      uVar1 = uVar4;
      func_0x000107c4080c(uVar4,param_2,&uStack_1e0,auStack_158,0x10);
    } while (uVar1 != 0);
  }
  func_0x000107c61170(uVar4);
  func_0x000107c402b8();
  func_0x000107c61180();
  func_0x000107c4fe7c();
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  func_0x000107c60e78();
  return (ulong)*(byte *)(param_1 + 9);
}



/* Entry: 100862264; end: 10086226b; -[MASConstraintMaker removeExisting] */

undefined1 FUN_100862264(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10086226c; end: 10086231f; +[MASViewConstraint installedConstraintsForView:] */

void FUN_10086226c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c4c51c(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c3db80();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100862320; end: 100862327; -[MASConstraintMaker updateExisting] */

undefined1 FUN_100862320(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100862328; end: 10086232f; -[MASConstraint setUpdateExisting:] */

void FUN_100862328(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 100862330; end: 100862443; -[MASCompositeConstraint install] */

ulong FUN_100862330(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar1 = param_1;
  func_0x000107c3f9c4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4080c();
  if (uVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      uVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          func_0x000107c61128(uVar1);
        }
        uVar4 = *(undefined8 *)(lStack_118 + uVar6 * 8);
        uVar3 = param_1;
        func_0x000107c5d474(param_1);
        func_0x000107c5a1f8(uVar4,param_2,uVar3);
        func_0x000107c497b4(uVar4);
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      uVar2 = uVar1;
      func_0x000107c4080c(uVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar2 != 0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar1;
  }
  func_0x000107c60e78();
  return (ulong)*(byte *)(uVar1 + 8);
}



/* Entry: 100862444; end: 10086244f; -[MASConstraint updateExisting] */

undefined1 FUN_100862444(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100862450; end: 100862713; -[MASViewConstraint install] */

/* WARNING: Possible PIC construction at 0x000100862494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008624b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008624e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100862508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086253c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086256c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008625fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086262c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100862688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008626e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008626f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008626b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008626f4) */
/* WARNING: Removing unreachable block (ram,0x0001008626e4) */
/* WARNING: Removing unreachable block (ram,0x00010086268c) */
/* WARNING: Removing unreachable block (ram,0x000100862630) */
/* WARNING: Removing unreachable block (ram,0x000100862600) */
/* WARNING: Removing unreachable block (ram,0x000100862634) */
/* WARNING: Removing unreachable block (ram,0x000100862640) */
/* WARNING: Removing unreachable block (ram,0x00010086264c) */
/* WARNING: Removing unreachable block (ram,0x000100862690) */
/* WARNING: Removing unreachable block (ram,0x000100862664) */
/* WARNING: Removing unreachable block (ram,0x000100862604) */
/* WARNING: Removing unreachable block (ram,0x000100862540) */
/* WARNING: Removing unreachable block (ram,0x000100862570) */
/* WARNING: Removing unreachable block (ram,0x00010086254c) */
/* WARNING: Removing unreachable block (ram,0x00010086250c) */
/* WARNING: Removing unreachable block (ram,0x000100862568) */
/* WARNING: Removing unreachable block (ram,0x000100862528) */
/* WARNING: Removing unreachable block (ram,0x0001008624e8) */
/* WARNING: Removing unreachable block (ram,0x0001008624bc) */
/* WARNING: Removing unreachable block (ram,0x000100862498) */
/* WARNING: Removing unreachable block (ram,0x0001008626b4) */
/* WARNING: Removing unreachable block (ram,0x0001008626c0) */

void FUN_100862450(undefined8 param_1)

{
  func_0x000107c43658();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100862714; end: 10086272b; -[MASViewAttribute view] */

void FUN_100862714(long param_1)

{
  func_0x000107c61148(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10086272c; end: 10086273b; -[MASViewConstraint secondViewAttribute] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10086272c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279375c);
}



/* Entry: 10086273c; end: 10086277b; -[MASViewAttribute isSizeAttribute] */

bool FUN_10086273c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c4abc4();
  if (lVar2 == 7) {
    bVar1 = true;
  }
  else {
    func_0x000107c4abc4(param_1);
    bVar1 = param_1 == 8;
  }
  return bVar1;
}



/* Entry: 10086277c; end: 10086278b; -[MASViewConstraint layoutRelation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10086277c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793744);
}



/* Entry: 10086278c; end: 10086279b; -[MASViewConstraint layoutMultiplier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10086278c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279374c);
}



/* Entry: 10086279c; end: 1008627bf; -[MASViewConstraint layoutConstant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10086279c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793740);
}



/* Entry: 1008627c0; end: 10086286f;  */

void FUN_1008627c0(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  
  func_0x000100834744();
  FUN_100834808();
  func_0x00010083481c();
  (*extraout_x8_00)();
  if (param_1 != 0) {
    FUN_100862870();
    func_0x0001008628f0();
    func_0x000100613470();
    func_0x000100835ad4();
    func_0x00010061348c();
    func_0x000100862900();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  func_0x0001008344b0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354d0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  return;
}



/* Entry: 100862870; end: 10086290b;  */

void FUN_100862870(void)

{
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  unaff_x25[1] = 0;
  unaff_x25[2] = 0;
  *unaff_x25 = 0;
  *unaff_x24 = 0;
  unaff_x24[1] = 0;
  unaff_x24[2] = 0;
  unaff_x23[1] = 0;
  unaff_x23[2] = 0;
  *unaff_x23 = 0;
  *unaff_x22 = 0;
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = 0;
  return;
}



/* Entry: 10086290c; end: 1008629c7;  */

undefined8 FUN_10086290c(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  func_0x000107c610b4(param_2[2],param_3,param_1[1] - param_3);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 + ((param_3 - lVar2) / -0x30) * 0x30;
  func_0x000107c610b4(lVar3);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return uVar1;
}



/* Entry: 1008629c8; end: 1008629d3;  */

undefined1 * FUN_1008629c8(void)

{
  return &stack0x00000008;
}


