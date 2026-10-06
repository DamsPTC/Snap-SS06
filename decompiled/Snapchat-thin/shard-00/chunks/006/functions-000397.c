/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100848110; end: 10084814f;  */

void FUN_100848110(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100848150; end: 1008482cf;  */

ulong FUN_100848150(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008482d0);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008482c4);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_100848110(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008482c8);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008482cc);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x0001013e3f50(uVar7,param_3,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1008482d0; end: 10084852b;  */

/* WARNING: Possible PIC construction at 0x000100848350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100848398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008483bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100848480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008484b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100848504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008484bc) */
/* WARNING: Removing unreachable block (ram,0x000100848484) */
/* WARNING: Removing unreachable block (ram,0x0001008483c0) */
/* WARNING: Removing unreachable block (ram,0x000100848488) */
/* WARNING: Removing unreachable block (ram,0x000100848494) */
/* WARNING: Removing unreachable block (ram,0x000100848470) */
/* WARNING: Removing unreachable block (ram,0x00010084839c) */
/* WARNING: Removing unreachable block (ram,0x000100848354) */
/* WARNING: Removing unreachable block (ram,0x000100848508) */

void FUN_1008482d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  FUN_100847108(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
  func_0x000107c413a0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10084852c; end: 10084852f;  */

void FUN_10084852c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100848530; end: 10084856b;  */

void FUN_100848530(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10084856c; end: 100848573;  */

void FUN_10084856c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100848574; end: 10084859f;  */

void FUN_100848574(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008485a0; end: 1008485f7; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl attachLayoutToViewContainer:] */

void FUN_1008485a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c3e2c8(param_3,param_2,uVar1);
  FUN_1008482d0();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1008485f8; end: 10084863b; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl configureCameraTimerLayoutGuide:] */

void FUN_1008485f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_10084863c(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10084863c; end: 100848867;  */

/* WARNING: Possible PIC construction at 0x000100848708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010084875c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008487b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100848804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008487b4) */
/* WARNING: Removing unreachable block (ram,0x000100848760) */
/* WARNING: Removing unreachable block (ram,0x00010084870c) */
/* WARNING: Removing unreachable block (ram,0x000100848808) */

void FUN_10084863c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar1 = 0x112d360b8;
  FUN_100847090(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 9;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c5cbe4(uVar2);
  func_0x000107c61180();
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  func_0x000107c40280(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100848868; end: 1008488bf; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl accessibilityElements] */

void FUN_100848868(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_100847108(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008488c0; end: 100848917; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl hideableViews] */

void FUN_1008488c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_100847108(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100848918; end: 10084897b; -[SCCameraOverlayView appendHidableViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100848918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762830);
  func_0x000107c61174(param_3);
  func_0x000107c3dc40(uVar1);
  func_0x000107c526c0(param_3);
  func_0x000107c3d798(*(undefined8 *)(param_1 + _DAT_1127627fc),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10084897c; end: 100848cc7; -[SCCameraViewControllerStartupWorkflow addBottomAccessoryContainerViewIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084897c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_128 [24];
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c3f284();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3ec14();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4c1ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    func_0x000107c5a050(lVar3);
    lVar1 = param_3;
    func_0x000107c5de64(param_3);
    func_0x000107c61180();
    func_0x000107c3d89c();
    func_0x000107c61170(lVar1);
    puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar1 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar2 = param_3;
    lStack_98 = lVar1;
    func_0x000107c5de64();
    func_0x000107c61180();
    lStack_90 = lVar2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lStack_a0 = lVar2;
    func_0x000107c40280();
    func_0x000107c61180();
    lVar2 = lVar3;
    lStack_a8 = lVar1;
    lStack_88 = lVar1;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar1 = param_3;
    lStack_b8 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    lStack_b0 = lVar1;
    func_0x000107c50890();
    func_0x000107c61180();
    lStack_c0 = lVar1;
    func_0x000107c40280();
    func_0x000107c61180();
    lVar1 = lVar3;
    lStack_c8 = lVar2;
    lStack_80 = lVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar2 = param_3;
    lStack_e0 = lVar1;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    lStack_d8 = lVar2;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    lStack_e8 = lVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c40280();
    func_0x000107c61180();
    lVar4 = lVar3;
    lStack_78 = lVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar5 = param_3;
    func_0x000107c5de64(param_3);
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c515ac();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar8 = lVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar8;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puStack_d0);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lStack_e8);
    func_0x000107c61170(lStack_d8);
    func_0x000107c61170(lStack_e0);
    func_0x000107c61170(lStack_c8);
    func_0x000107c61170(lStack_c0);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lStack_b8);
    func_0x000107c61170(lStack_a8);
    func_0x000107c61170(lStack_a0);
    func_0x000107c61170(lStack_90);
    func_0x000107c61170(lStack_98);
  }
  func_0x000107c61170(lVar3);
  lVar1 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  lVar2 = _DAT_113082458;
  pcStack_f8 = FUN_100848cc8;
  lStack_110 = lVar3;
  lStack_108 = param_3;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000107c61428(lVar1 + _DAT_113082458,auStack_128,0,0);
  func_0x000107c615f0(*(undefined8 *)(lVar1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100848cc8; end: 100848cd3; -[_TtC15SCCameraUIScope15SCCameraUIScope bottomAccessoryViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100848cc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113082458;
  func_0x000107c61428(param_1 + _DAT_113082458,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100848cd4; end: 100848d3b;  */

void FUN_100848cd4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100848d3c; end: 1008493ef; -[SCCameraViewfinderLayoutController initWithCameraView:containingView:allowsLandscapeLayout:managesTopConstraint:managesSizeConstraints:snapshotUpdater:environmentProvider:] */

undefined8 *
FUN_100848d3c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
             uint param_10,int param_11,undefined8 param_12,long param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_c8 = PTR_PTR_1126f8380;
  puVar1 = &uStack_d0;
  uStack_d0 = param_5;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = param_9;
    *(char *)((long)puVar1 + 0x59) = (char)param_10;
    *(char *)((long)puVar1 + 0x5a) = (char)param_11;
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    func_0x000107c61170(uVar2);
    if (param_13 == 0) {
      puVar3 = PTR_PTR_1126d4060;
      func_0x000107c61160();
      uVar2 = puVar1[0xd];
      puVar1[0xd] = puVar3;
    }
    else {
      func_0x000107c61174(param_13);
      uVar2 = puVar1[0xd];
      puVar1[0xd] = param_13;
    }
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0x18) = 1;
    if (((param_10 & 1) != 0) || (param_11 != 0)) {
      if (param_10 == 0) {
        dVar11 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
        param_2 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
        dVar10 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
        uVar2 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
      }
      else {
        func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
        dVar10 = param_3;
        dVar11 = param_1;
        uVar2 = param_4;
      }
      puVar1[0xf] = dVar11;
      puVar1[0x10] = param_2;
      puVar1[0x11] = dVar10;
      puVar1[0x12] = uVar2;
      func_0x000107c3ec60(param_8);
      puVar1[0x13] = param_3;
      puVar1[0x14] = param_4;
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c61180();
      func_0x000107c51820();
      puVar1[0x15] = param_1;
      func_0x000107c61170(puVar3);
      puVar1[0x16] = 0x3fe2000000000000;
      if ((*(char *)(puVar1 + 0xb) == '\x01') &&
         (param_1 = (double)puVar1[0x13], (double)puVar1[0x14] < param_1)) {
        puVar1[0x16] = 0x3ffc71c71c71c71c;
      }
      func_0x000107c40f38(puVar1[0xd]);
      puVar1[0x17] = param_1;
      func_0x000100c2f018(&uStack_f0,puVar1[0x13],puVar1[0x14],puVar1[0x16],dVar11,param_2,dVar10,
                          uVar2,param_1);
      if (param_11 != 0) {
        uVar4 = puVar1[1];
        func_0x000107c5e308();
        func_0x000107c61180();
        uVar2 = uVar4;
        func_0x000107c40290(uStack_f0);
        func_0x000107c61180();
        uVar8 = puVar1[9];
        puVar1[9] = uVar2;
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar4);
        uVar4 = puVar1[1];
        func_0x000107c44d9c();
        func_0x000107c61180();
        uVar2 = uVar4;
        func_0x000107c40290(uStack_e8);
        func_0x000107c61180();
        uVar8 = puVar1[10];
        puVar1[10] = uVar2;
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar4);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uStack_a0 = puVar1[9];
        uStack_98 = puVar1[10];
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
        func_0x000107c3d048(puVar3);
        func_0x000107c61170(puVar5);
      }
      if (param_10 != 0) {
        puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
        func_0x000107c61160();
        uVar2 = puVar1[0x19];
        puVar1[0x19] = puVar3;
        func_0x000107c61170(uVar2);
        func_0x000107c5521c(puVar1[0x19]);
        func_0x000107c3d72c(param_8);
        uVar8 = puVar1[0x19];
        func_0x000107c5cbe4();
        func_0x000107c61180();
        uVar2 = param_8;
        func_0x000107c5cbe4(param_8);
        func_0x000107c61180();
        uVar4 = uVar8;
        func_0x000107c40284(dVar11);
        func_0x000107c61180();
        uVar9 = puVar1[3];
        puVar1[3] = uVar4;
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar8);
        uVar8 = puVar1[0x19];
        func_0x000107c3ec1c();
        func_0x000107c61180();
        uVar2 = param_8;
        func_0x000107c3ec1c(param_8);
        func_0x000107c61180();
        uVar4 = uVar8;
        func_0x000107c40284(-dVar10);
        func_0x000107c61180();
        uVar9 = puVar1[4];
        puVar1[4] = uVar4;
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar8);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uStack_c0 = puVar1[3];
        uStack_b8 = puVar1[4];
        uVar6 = puVar1[0x19];
        func_0x000107c4ace0();
        func_0x000107c61180();
        uVar2 = param_8;
        func_0x000107c4ace0();
        func_0x000107c61180();
        uVar4 = uVar6;
        func_0x000107c40280();
        func_0x000107c61180();
        uVar7 = puVar1[0x19];
        uStack_b0 = uVar4;
        func_0x000107c50890();
        func_0x000107c61180();
        uVar8 = param_8;
        func_0x000107c50890(param_8);
        func_0x000107c61180();
        uVar9 = uVar7;
        func_0x000107c40280();
        func_0x000107c61180();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_a8 = uVar9;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
        func_0x000107c3d048(puVar3);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar6);
        uVar6 = puVar1[1];
        func_0x000107c5cbe4();
        func_0x000107c61180();
        uVar2 = param_8;
        func_0x000107c515ac(param_8);
        func_0x000107c61180();
        uVar4 = uVar2;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        uVar8 = uVar6;
        func_0x000107c40280();
        func_0x000107c61180();
        uVar9 = uVar8;
        func_0x000107c517b8(0x443b8000);
        func_0x000107c61180();
        uVar7 = puVar1[5];
        puVar1[5] = uVar9;
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar6);
        uVar8 = puVar1[1];
        func_0x000107c5cbe4();
        func_0x000107c61180();
        uVar9 = puVar1[0x19];
        func_0x000107c5cbe4(uVar9);
        func_0x000107c61180();
        uVar2 = uVar8;
        func_0x000107c40280();
        func_0x000107c61180();
        uVar4 = uVar2;
        func_0x000107c517b8(0x443b8000);
        func_0x000107c61180();
        uVar6 = puVar1[6];
        puVar1[6] = uVar4;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar8);
        uVar9 = puVar1[1];
        func_0x000107c5cbe4();
        func_0x000107c61180();
        uVar2 = param_8;
        func_0x000107c5cbe4(param_8);
        func_0x000107c61180();
        uVar4 = uVar9;
        func_0x000107c40280();
        func_0x000107c61180();
        uVar8 = uVar4;
        func_0x000107c517b8(0x443b8000);
        func_0x000107c61180();
        uVar6 = puVar1[7];
        puVar1[7] = uVar8;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar9);
        func_0x000107c3acb0(puVar1);
      }
    }
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  func_0x000107c60e78();
  return (undefined8 *)0x0;
}



/* Entry: 1008493f0; end: 1008493f7; -[SCCameraViewController shouldApplyBlurEffectOnStatusBar] */

undefined8 FUN_1008493f0(void)

{
  return 0;
}



/* Entry: 1008493f8; end: 1008495f3; -[SCCameraViewControllerStartupWorkflow enableCameraOverlayIfNeeded:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008493f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar5 = (long)_DAT_1127626d0;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c3e47c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4a6dc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c3e47c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if ((int)uVar3 == 0) {
    uVar3 = uVar2;
    func_0x000107c4a6e0();
    if ((int)uVar3 != 0) {
      uVar3 = param_3;
      func_0x000107c3e3f4(param_3);
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c4faac();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    uVar2 = param_3;
    func_0x000107c5bcc0(param_3);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3f16c();
    func_0x000107c61180();
    func_0x000107c5a378();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1008495f4;
    puStack_68 = &UNK_110858070;
    func_0x000107c61174(param_3);
    uStack_60 = param_3;
    func_0x000107c61174(param_4);
    lStack_58 = param_4;
    func_0x000107c3e49c(uVar2,param_2,&puStack_80);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lStack_58);
    func_0x000107c61170(uStack_60);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008495f4; end: 1008496c3;  */

void FUN_1008495f4(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3e3f4(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c4faac();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5bcc0(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3f16c();
  func_0x000107c61180();
  func_0x000107c5a378();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008496b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 1008496c4; end: 1008496d3; -[SCCameraViewController audioSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008496c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127625f0);
}



/* Entry: 1008496d4; end: 100849757; -[SCAudioSessionCore recordPermission] */

ulong FUN_1008496d4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x000107c52030();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c61164();
  func_0x000107c61170(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x67726e74;
  }
  else {
    func_0x000107c52030(param_1);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c4faac();
    func_0x000107c61170(param_1);
  }
  return uVar2;
}



/* Entry: 100849758; end: 1008497b7; -[SCCameraOverlayView setUserInteractionEnabled:] */

void FUN_100849758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x000107c4a690();
  if ((int)param_3 != (int)uVar1) {
    if ((int)param_3 != 0) {
      func_0x000107c3c2d8(param_1);
    }
    puStack_28 = PTR_PTR_1126f83c8;
    uStack_30 = param_1;
    func_0x000107c61154(&uStack_30,PTR_s_setUserInteractionEnabled__112665468,param_3);
  }
  return;
}



/* Entry: 1008497b8; end: 100849893;  */

void FUN_1008497b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100849894;
  puStack_58 = &UNK_110850cf8;
  func_0x000107c6111c(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x000107c61174(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x000107c61174(uVar1);
  uStack_40 = uVar1;
  FUN_1000d76cc("APPSTORE",&puStack_70);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100849894; end: 1008498d3;  */

void FUN_100849894(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c3b118(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1008498d4; end: 10084a2f7; -[SCCameraViewControllerStartupWorkflow _configureCameraOverlay:featureCatalog:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008498d4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
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
  undefined8 uStack_d8;
  
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  puVar1 = param_5;
  func_0x000107c3f16c(param_5);
  func_0x000107c61180();
  func_0x000107c52ab8();
  func_0x000107c61170(puVar1);
  puVar1 = param_5;
  func_0x000107c3f16c(param_5);
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61170(puVar1);
  puVar1 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c515ac();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (*(char *)(param_1 + _DAT_1127626e0) == '\x01') {
    uStack_d8 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    uStack_e8 = uStack_d8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uStack_f0 = param_5;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    uStack_f8 = uStack_f0;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uStack_100 = uStack_e8;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_108 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    uStack_110 = uStack_108;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uStack_118 = puVar2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uStack_120 = uStack_110;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_128 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    uStack_130 = uStack_128;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c50890(puVar2);
    func_0x000107c61180();
    puVar4 = uStack_130;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar5 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar7 = puVar2;
    func_0x000107c3ec1c(puVar2);
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1);
  }
  else {
    puVar1 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    uStack_d8 = puVar1;
    func_0x000107c515ac();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3f2f8();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar6 = param_5;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c3f2f8();
    func_0x000107c61180();
    puVar11 = puVar10;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar12 = param_5;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    puVar13 = puVar12;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar14 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar15 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    puVar16 = puVar15;
    func_0x000107c3f2f8();
    func_0x000107c61180();
    puVar17 = puVar16;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar18 = param_5;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    puVar19 = puVar18;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar20 = puVar17;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar21 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    puVar22 = puVar21;
    func_0x000107c3f2f8();
    func_0x000107c61180();
    puVar23 = puVar22;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar24 = param_5;
    func_0x000107c3f2cc(param_5);
    func_0x000107c61180();
    puVar25 = puVar24;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar26 = puVar23;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar27);
    func_0x000107c61170(puVar26);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(puVar23);
    func_0x000107c61170(puVar22);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_e8 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    uStack_f0 = uStack_e8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uStack_f8 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    uStack_100 = uStack_f8;
    func_0x000107c5c42c();
    func_0x000107c61180();
    uStack_108 = uStack_100;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uStack_110 = uStack_f0;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_118 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    uStack_120 = uStack_118;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uStack_128 = uStack_d8;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uStack_130 = uStack_120;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar3 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar5 = uStack_d8;
    func_0x000107c50890(uStack_d8);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar7 = param_5;
    func_0x000107c3f16c();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar9 = uStack_d8;
    func_0x000107c3ec1c(uStack_d8);
    func_0x000107c61180();
    puVar10 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uStack_130);
  func_0x000107c61170(uStack_128);
  func_0x000107c61170(uStack_120);
  func_0x000107c61170(uStack_118);
  func_0x000107c61170(uStack_110);
  func_0x000107c61170(uStack_108);
  func_0x000107c61170(uStack_100);
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(uStack_e8);
  func_0x000107c61170(uStack_d8);
  uVar28 = param_4;
  func_0x000107c42238(param_4);
  func_0x000107c61180();
  uVar29 = uVar28;
  func_0x000107c42e38();
  func_0x000107c61180();
  puVar1 = param_5;
  func_0x000107c3f16c(param_5);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c5c6fc();
  func_0x000107c61180();
  func_0x000107c3d5d8(uVar29);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  uVar28 = param_4;
  func_0x000107c4b108(param_4);
  func_0x000107c61180();
  uVar29 = uVar28;
  func_0x000107c42e38();
  func_0x000107c61180();
  puVar1 = param_5;
  func_0x000107c3f16c(param_5);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c4c0b4();
  func_0x000107c61180();
  func_0x000107c3d5d8(uVar29);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  uVar28 = param_4;
  func_0x000107c4b108(param_4);
  func_0x000107c61180();
  uVar29 = uVar28;
  func_0x000107c42e38();
  func_0x000107c61180();
  puVar1 = param_5;
  func_0x000107c3f16c(param_5);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c4c0b8();
  func_0x000107c61180();
  func_0x000107c3d5d8(uVar29);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  uVar28 = param_4;
  func_0x000107c4b108(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  uVar29 = uVar28;
  func_0x000107c42e38(uVar28);
  func_0x000107c61180();
  puVar1 = param_5;
  func_0x000107c3f16c(param_5);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c4e324();
  func_0x000107c61180();
  func_0x000107c3d5d8(uVar29);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 10084a2f8; end: 10084b993;  */

void FUN_10084a2f8(void)

{
  return;
}



/* Entry: 10084b994; end: 10084b9a3; -[SCCameraOverlayView cameraViewLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10084b994(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127627e0);
}



/* Entry: 10084b9a4; end: 10084b9ab; -[SCMutablePublicCameraFeatureCatalog doubleTapToToggleCamera] */

undefined8 FUN_10084b9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10084b9ac; end: 10084b9db;  */

bool FUN_10084b9ac(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 10084b9dc; end: 10084bb7b;  */

void FUN_10084b9dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c7940;
    func_0x000107c610f4(PTR_PTR_1126c7940);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10084bb7c;
    puStack_70 = &UNK_11084e7d0;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar6);
    ppuVar3 = &puStack_88;
    uStack_68 = uVar6;
    FUN_10084bb7c(ppuVar3);
    func_0x000107c61180();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10084bed0;
    puStack_98 = &UNK_11084e7d0;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar6);
    ppuVar4 = &puStack_b0;
    uStack_90 = uVar6;
    FUN_10084bed0(ppuVar4);
    func_0x000107c61180();
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10084bfac;
    puStack_c0 = &UNK_11084e7d0;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar6);
    ppuVar5 = &puStack_d8;
    uStack_b8 = uVar6;
    FUN_10084bfac(ppuVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar2 + 0x88);
    func_0x000107c3f598(uVar6);
    func_0x000107c61180();
    func_0x000107c48dc0(puVar7,param_2,ppuVar3,ppuVar4,ppuVar5,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uStack_68);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10084bb7c; end: 10084bc57;  */

void FUN_10084bb7c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10084bc58; end: 10084bd1f;  */

uint * FUN_10084bc58(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint **ppuVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  uint *apuStack_b8 [4];
  long lStack_98;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = param_2[1];
  puStack_70 = (uint *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  func_0x0001004bca54(&uStack_50,&puStack_70);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  puVar4 = puStack_70;
  if ((uint *)0x1 < puStack_70) {
    do {
      lVar9 = *(long *)puStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_70,0x10);
      if (bVar3) {
        *(long *)puStack_70 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(puStack_70 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  func_0x000107c60e78();
  if (param_3 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_70);
  }
  func_0x000107c60bd8();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)puVar4;
  FUN_10084bc58(apuStack_b8,puVar4 + 2,*(long *)(puVar4 + 10),*(long *)(puVar4 + 0xc));
  ppuVar8 = apuStack_b8;
  FUN_10084bde4(lVar9);
  puVar4 = apuStack_b8[0];
  if ((uint *)0x1 < apuStack_b8[0]) {
    do {
      lVar9 = *(long *)apuStack_b8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_b8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_b8[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_b8[0] + 2))();
      puVar4 = apuStack_b8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar4;
  }
  func_0x000107c60e78();
  if ((int)ppuVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(apuStack_b8);
  }
  func_0x000107c60bd8();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x8000;
  if ((uVar1 >> 0xf & 1) == 0) {
    puVar13 = ppuVar8[1];
    puVar12 = *ppuVar8;
    puVar11 = ppuVar8[3];
    puVar5 = ppuVar8[2];
    ppuVar8[1] = (uint *)0x0;
    *ppuVar8 = (uint *)0x0;
    ppuVar8[3] = (uint *)0x0;
    ppuVar8[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x4e) = puVar13;
    *(uint **)(puVar4 + 0x4c) = puVar12;
    *(uint **)(puVar4 + 0x52) = puVar11;
    *(uint **)(puVar4 + 0x50) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar11 = *ppuVar8;
    puVar12 = ppuVar8[3];
    puVar14 = ppuVar8[2];
    puVar13 = ppuVar8[1];
    ppuVar8[1] = (uint *)0x0;
    *ppuVar8 = (uint *)0x0;
    ppuVar8[3] = (uint *)0x0;
    ppuVar8[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x4c);
    *(uint **)(puVar4 + 0x4c) = puVar11;
    *(uint **)(puVar4 + 0x50) = puVar14;
    *(uint **)(puVar4 + 0x4e) = puVar13;
    *(uint **)(puVar4 + 0x52) = puVar12;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar10 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar7 = (int)ppuVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x4c;
  }
  func_0x000107c60e78();
  if (iVar7 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  uVar6 = *(undefined8 *)(puVar5 + 8);
  func_0x000107c4f5c0(uVar6);
  func_0x000107c61180();
  func_0x000107c61144(auStack_178,uVar6);
  func_0x000107c61170(uVar6);
  puVar4 = (uint *)PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_180,auStack_178);
  func_0x000107c482ac(puVar4);
  func_0x000107c61120(auStack_180);
  func_0x000107c61120(auStack_178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 10084bd20; end: 10084bde3;  */

uint * FUN_10084bd20(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  FUN_10084bc58(apuStack_48,param_1 + 1,param_1[5],param_1[6]);
  ppuVar7 = apuStack_48;
  FUN_10084bde4(uVar12);
  puVar4 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  func_0x000107c60e78();
  if ((int)ppuVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(apuStack_48);
  }
  func_0x000107c60bd8();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x8000;
  if ((uVar1 >> 0xf & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x4e) = puVar13;
    *(uint **)(puVar4 + 0x4c) = puVar11;
    *(uint **)(puVar4 + 0x52) = puVar10;
    *(uint **)(puVar4 + 0x50) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar10 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x4c);
    *(uint **)(puVar4 + 0x4c) = puVar10;
    *(uint **)(puVar4 + 0x50) = puVar14;
    *(uint **)(puVar4 + 0x4e) = puVar13;
    *(uint **)(puVar4 + 0x52) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x4c;
  }
  func_0x000107c60e78();
  if (iVar6 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  uVar12 = *(undefined8 *)(puVar5 + 8);
  func_0x000107c4f5c0(uVar12);
  func_0x000107c61180();
  func_0x000107c61144(auStack_108,uVar12);
  func_0x000107c61170(uVar12);
  puVar4 = (uint *)PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_110,auStack_108);
  func_0x000107c482ac(puVar4);
  func_0x000107c61120(auStack_110);
  func_0x000107c61120(auStack_108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 10084bde4; end: 10084becf;  */

uint * FUN_10084bde4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x8000;
  if ((uVar1 >> 0xf & 1) == 0) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar5 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x4e) = uVar11;
    *(undefined8 *)(param_1 + 0x4c) = uVar10;
    *(undefined8 *)(param_1 + 0x52) = uVar9;
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    puVar4 = param_1;
  }
  else {
    uVar5 = *param_2;
    uVar9 = param_2[3];
    uVar11 = param_2[2];
    uVar10 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x4c) = uVar5;
    *(undefined8 *)(param_1 + 0x50) = uVar11;
    *(undefined8 *)(param_1 + 0x4e) = uVar10;
    *(undefined8 *)(param_1 + 0x52) = uVar9;
    if ((uint *)0x1 < puVar4) {
      do {
        lVar7 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_1 + 0x4c;
  }
  func_0x000107c60e78();
  if (iVar6 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  uVar5 = *(undefined8 *)(puVar4 + 8);
  func_0x000107c4f5c0(uVar5);
  func_0x000107c61180();
  func_0x000107c61144(auStack_b8,uVar5);
  func_0x000107c61170(uVar5);
  puVar4 = (uint *)PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_c0,auStack_b8);
  func_0x000107c482ac(puVar4);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 10084bed0; end: 10084bfab;  */

void FUN_10084bed0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10084bfac; end: 10084c087;  */

void FUN_10084bfac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10084c088; end: 10084c1d3; -[SCFeatureDoubleTapToToggleCameraImpl initWithToggleCamera:toggleCameraButton:cameraUserActionLogger:captureDeviceManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10084c088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126f0208;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112741768;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_11274176c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741770;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741774;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741778);
    *(undefined **)((long)puVar1 + (long)_DAT_112741778) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c65c(puVar1);
    func_0x000107c5054c(puVar1);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10084c1d4; end: 10084c21f; -[SCFeatureDoubleTapToToggleCameraImpl _setupDoubleTapGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084c1d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c2bb8;
  func_0x000107c610f4();
  func_0x000107c48c2c();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112741780);
  *(undefined **)(param_1 + _DAT_112741780) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10084c220; end: 10084c30f;  */

undefined8 * FUN_10084c220(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(long *)(param_3 + 0x10) - *(long *)(param_3 + 8) != 8 || *(int *)(param_2 + 1) != 8) {
    *(int *)((long)param_2 + 0x14) = *(int *)(param_2 + 1);
    *(undefined4 *)(param_2 + 3) = 0;
    puVar1 = param_2;
    func_0x000107c2f124(param_2,param_1,param_3);
    if ((int)puVar1 == 0) {
      if (*(int *)((long)param_2 + 0x14) == 0) {
        lVar2 = *(long *)*param_2;
        if ((*(byte *)((long)param_2 + 0x11) & 1) == 0) {
          pcVar3 = *(code **)(lVar2 + 0xb0);
        }
        else {
          pcVar3 = *(code **)(lVar2 + 0xb8);
        }
        (*pcVar3)((long *)*param_2,param_2 + 1,param_1);
        puVar1 = (undefined8 *)0x0;
      }
      else {
        (**(code **)(*(long *)*param_2 + 0x138))((long *)*param_2,param_2 + 1);
        puVar1 = (undefined8 *)0x2;
      }
    }
    return puVar1;
  }
  lVar2 = 0xb0;
  if ((*(byte *)((long)param_2 + 0x11) & 1) != 0) {
    lVar2 = 0xb8;
  }
  (**(code **)(*(long *)*param_2 + lVar2))();
  *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 8;
  return (undefined8 *)0x0;
}



/* Entry: 10084c310; end: 10084c37b; -[SCFastDoubleTapGestureRecognizer initWithTarget:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10084c310(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127061f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithTarget_action__1125f1c48);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c56bb8(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e1f4) = 0x3fc3333340000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10084c37c; end: 10084c733;  */

undefined8 FUN_10084c37c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  if (*(int *)(unaff_x20 + 0x104) == 0) {
    return 0;
  }
  if (*(int *)(unaff_x21 + 4) != 0) {
    func_0x000107c38e54();
    func_0x000107c38e90();
    func_0x000107c2fb6c();
    func_0x000107c38e74();
    return 0;
  }
  return 1;
}



/* Entry: 10084c734; end: 10084c743; -[SCFeatureDoubleTapToToggleCameraImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084c734(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11274178c) = 0;
  return;
}



/* Entry: 10084c744; end: 10084c7a3;  */

void FUN_10084c744(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  FUN_10010fab4(lVar2,PTR_DAT_1126a5860);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10084c7a4; end: 10084c827; -[SCFeatureDoubleTapToToggleCameraImpl setDelegate:] */

/* WARNING: Possible PIC construction at 0x00010084c7f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010084c810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010084c7fc) */
/* WARNING: Removing unreachable block (ram,0x00010084c814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084c7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112741784;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + lVar1,param_3);
  func_0x000107c61174();
  func_0x000107c42e54(param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10084c828; end: 10084c82b; -[SCCameraViewController featureDoubleTapToToggleCameraGestureRecognizerDelegate] */

void FUN_10084c828(void)

{
  return;
}



/* Entry: 10084c82c; end: 10084c887; -[SCFeatureDoubleTapToToggleCameraImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084c82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274177c;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + lVar1,param_3);
  func_0x000107c3d6fc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10084c888; end: 10084cae3;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10084c888(long *param_1,long *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  byte *pbVar9;
  long *extraout_x8;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long *plStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  byte *pbVar10;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
    pcVar3 = (char *)((long)param_2 + 9);
    uVar12 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar12 = param_2[1];
    pcVar3 = (char *)param_2[2];
  }
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    if (*pcVar3 == '%') {
      func_0x000104ad759c(&plStack_d0);
      uVar12 = uStack_c8 & 0xff;
      pbVar13 = (byte *)((long)&uStack_c8 + 1);
      if (plStack_d0 != (long *)0x0) {
        uVar12 = uStack_c8;
        pbVar13 = pbStack_c0;
      }
      if (uVar12 == 0) goto LAB_10084ca44;
      pbVar2 = pbVar13 + uVar12;
      pbVar10 = pbVar13;
      goto LAB_10084c97c;
    }
    pcVar3 = pcVar3 + 1;
  }
  lVar8 = *param_2;
  lVar15 = param_2[3];
  lVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar8;
  param_1[3] = lVar15;
  param_1[2] = lVar14;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  goto LAB_10084c8f4;
LAB_10084c97c:
  do {
    pbVar9 = pbVar10 + 1;
    if (*pbVar10 == 0x25) {
      if (pbVar9 < pbVar2) {
        bVar7 = *pbVar9;
        uVar11 = (uint)bVar7;
        if (((((bVar7 - 0x30 & 0xff) < 10) ||
             (uVar6 = bVar7 - 0x41,
             uVar6 < 0x26 && (1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0)) &&
            (pbVar1 = pbVar10 + 2, pbVar1 < pbVar2)) &&
           (((*pbVar1 - 0x30 & 0xff) < 10 ||
            (uVar6 = *pbVar1 - 0x41,
            uVar6 < 0x26 && (1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0)))) {
          func_0x000104ad7644();
          bVar7 = *pbVar1;
          func_0x000104ad7644();
          *pbVar13 = bVar7 | (byte)(uVar11 << 4);
          pbVar9 = pbVar10 + 3;
          goto LAB_10084ca2c;
        }
      }
      *pbVar13 = 0x25;
    }
    else {
      *pbVar13 = *pbVar10;
    }
LAB_10084ca2c:
    pbVar13 = pbVar13 + 1;
    pbVar10 = pbVar9;
  } while (pbVar9 != pbVar2);
LAB_10084ca44:
  pbVar2 = (byte *)((long)&uStack_c8 + 1);
  if (plStack_d0 != (long *)0x0) {
    pbVar2 = pbStack_c0;
  }
  uStack_a8 = uStack_c8;
  plStack_b0 = plStack_d0;
  uStack_98 = uStack_b8;
  pbStack_a0 = pbStack_c0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  pbStack_c0 = (byte *)0x0;
  param_3 = 0;
  FUN_1008d8d00(&lStack_88,&plStack_b0,0,(long)pbVar13 - (long)pbVar2);
  param_1[1] = lStack_80;
  *param_1 = lStack_88;
  param_1[3] = lStack_70;
  param_1[2] = lStack_78;
  param_2 = plStack_d0;
  if ((long *)0x1 < plStack_d0) {
    do {
      lVar8 = *plStack_d0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
      if (bVar5) {
        *plStack_d0 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_d0[1])();
    }
  }
LAB_10084c8f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    if ((int)param_3 != 0) {
      func_0x000104bd46a0();
      func_0x000104ad769c(&plStack_d0);
    }
    func_0x000107c60bd8(param_2);
    *extraout_x8 = 8;
    if (param_3 != 0) {
      lVar8 = 0x28;
      func_0x000107c60e20();
      func_0x000107c2b9d0();
      *extraout_x8 = lVar8 + 1;
    }
    return extraout_x8;
  }
  return param_2;
}



/* Entry: 10084cae4; end: 10084caf7;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10084cae4(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  *param_1 = 8;
  if (param_3 != 0) {
    lVar1 = 0x28;
    func_0x000107c60e20();
    func_0x000107c2b9d0();
    *param_1 = lVar1 + 1;
  }
  return param_1;
}



/* Entry: 10084caf8; end: 10084cc17;  */

void FUN_10084caf8(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  ulong *puStack_48;
  
  if (*param_2 != 0) goto LAB_10084cb80;
  FUN_10084cae4(&puStack_48,"",0);
  puVar1 = (ulong *)*param_2;
  if (puStack_48 == puVar1) {
LAB_10084cb68:
    if (((ulong)puVar1 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    *param_2 = (ulong)puStack_48;
    puStack_48 = (ulong *)0x36;
    if (((ulong)puVar1 & 1) != 0) {
      FUN_10084dad0();
      puVar1 = puStack_48;
      goto LAB_10084cb68;
    }
  }
  FUN_10084cc54(param_2,3,0);
LAB_10084cb80:
  if ((int)param_3 == 0) {
    puVar1 = param_2;
    func_0x000107c2b9b8(param_2);
    func_0x00010047ad8c(param_1,puVar1,param_4,param_5);
    puStack_48 = param_1;
    func_0x000107c2b9ac(param_2,&puStack_48,&UNK_104ababbc);
  }
  else {
    FUN_10084d274(param_2,param_3,param_4,param_5);
    *param_1 = *param_2;
    *param_2 = 0x36;
  }
  return;
}



/* Entry: 10084cc18; end: 10084cc53;  */

undefined * FUN_10084cc18(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *apuStack_68 [2];
  char cStack_51;
  undefined1 auStack_50 [16];
  
  if (param_1 < 0xf) {
    return (&PTR_s_type_googleapis_com_grpc_status__1107c5320)[(int)param_1];
  }
  pcVar1 = "return \"unknown\"";
  pcVar2 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc";
  uVar5 = 0x5f;
  func_0x000104a6e964("return \"unknown\"",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc"
                      ,0x5f);
  FUN_10084cc18(pcVar2);
  pcVar3 = pcVar2;
  func_0x000107c613d0();
  func_0x000107c60de4(apuStack_68,uVar5);
  FUN_10084cd08(auStack_50,apuStack_68);
  FUN_10084ced4(pcVar1,pcVar2,pcVar3,auStack_50);
  puVar4 = auStack_50;
  FUN_10084d204(puVar4);
  if (cStack_51 < '\0') {
    func_0x000107c60e14(apuStack_68[0]);
    puVar4 = apuStack_68[0];
  }
  return puVar4;
}



/* Entry: 10084cc54; end: 10084cd07;  */

void FUN_10084cc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 auStack_40 [16];
  
  FUN_10084cc18(param_2);
  uVar1 = param_2;
  func_0x000107c613d0();
  func_0x000107c60de4(auStack_58,param_3);
  FUN_10084cd08(auStack_40,auStack_58);
  FUN_10084ced4(param_1,param_2,uVar1,auStack_40);
  FUN_10084d204(auStack_40);
  if (cStack_41 < '\0') {
    func_0x000107c60e14(auStack_58[0]);
  }
  return;
}



/* Entry: 10084cd08; end: 10084ce43;  */

undefined8 * FUN_10084cd08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 unaff_x21;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = *(byte *)((long)param_2 + 0x17);
  puVar8 = (undefined8 *)(long)(char)bVar3;
  if ((long)puVar8 < 0) {
    puVar8 = (undefined8 *)param_2[1];
    if (puVar8 < (undefined8 *)0x10) {
      param_2 = (undefined8 *)*param_2;
      goto LAB_10084cd5c;
    }
    if ((puVar8 < (undefined8 *)0x200) ||
       (puVar8 < (undefined8 *)((param_2[2] & 0x7fffffffffffffff) - 1 >> 1))) {
      puVar4 = (undefined8 *)*param_2;
      goto LAB_10084cd8c;
    }
    unaff_x21 = *param_2;
    uStack_48 = (undefined7)param_2[1];
    uVar6 = *(undefined8 *)((long)param_2 + 0xf);
    uStack_41 = (undefined1)uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar4 = (undefined8 *)0x38;
    func_0x000107c60e20();
    *(undefined4 *)(puVar4 + 1) = 4;
    puVar4[4] = unaff_x21;
    puVar4[5] = CONCAT17(uStack_41,uStack_48);
    *(undefined8 *)((long)puVar4 + 0x2f) = uVar6;
    *(byte *)((long)puVar4 + 0x37) = bVar3;
    *puVar4 = puVar8;
    *(undefined1 *)((long)puVar4 + 0xc) = 5;
    puVar4[2] = unaff_x21;
    puVar4[3] = &UNK_10ae7280c;
  }
  else {
    puVar4 = param_2;
    if (bVar3 < 0x10) {
LAB_10084cd5c:
      param_3 = puVar8;
      puVar4 = param_1;
      FUN_10084ce44();
      goto LAB_10084cda0;
    }
LAB_10084cd8c:
    param_2 = puVar8;
    func_0x000107c34fe4();
  }
  *param_1 = 1;
  param_1[1] = puVar4;
LAB_10084cda0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x000107c60e14(unaff_x21);
  func_0x000107c60bd8();
  *(char *)puVar4 = (char)((int)param_3 << 1);
  if (param_3 < (undefined8 *)0x8) {
    if (param_3 < (undefined8 *)0x4) {
      if (param_3 != (undefined8 *)0x0) {
        *(undefined1 *)((long)puVar4 + 1) = *(undefined1 *)param_2;
        *(undefined1 *)((long)puVar4 + 1 + ((ulong)param_3 >> 1)) =
             *(undefined1 *)((long)param_2 + ((ulong)param_3 >> 1));
        *(undefined1 *)((long)puVar4 + (long)param_3) =
             *(undefined1 *)((long)param_2 + (long)param_3 + -1);
      }
      puVar4[1] = 0;
      *(undefined8 *)((long)puVar4 + 1 + (long)param_3) = 0;
      return puVar4;
    }
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((long)param_2 + (long)param_3 + -4);
    *(undefined4 *)((long)puVar4 + 5) = 0;
    puVar4[1] = 0;
    *(undefined4 *)((long)puVar4 + 1) = uVar1;
    *(undefined4 *)((long)param_3 + (long)puVar4 + -3) = uVar2;
    return puVar4;
  }
  uVar6 = *param_2;
  uVar7 = *(undefined8 *)((long)param_2 + (long)param_3 + -8);
  puVar4[1] = 0;
  *(undefined8 *)((long)puVar4 + 1) = uVar6;
  *(undefined8 *)((long)param_3 + (long)puVar4 + -7) = uVar7;
  return puVar4;
}



/* Entry: 10084ce44; end: 10084ced3;  */

void FUN_10084ce44(undefined1 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = (char)((int)param_3 << 1);
  if (7 < param_3) {
    uVar3 = *param_2;
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 1) = uVar3;
    *(undefined8 *)(param_1 + (param_3 - 7)) = uVar4;
    return;
  }
  if (3 < param_3) {
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)(param_1 + (param_3 - 3)) = uVar2;
    return;
  }
  if (param_3 != 0) {
    param_1[1] = *(undefined1 *)param_2;
    param_1[(param_3 >> 1) + 1] = *(undefined1 *)((long)param_2 + (param_3 >> 1));
    param_1[param_3] = *(undefined1 *)((long)param_2 + (param_3 - 1));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + param_3 + 1) = 0;
  return;
}



/* Entry: 10084ced4; end: 10084d1db;  */

/* WARNING: Possible PIC construction at 0x00010084d150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010084cfec: Changing call to branch */

void FUN_10084ced4(ulong *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  undefined8 ******ppppppuVar1;
  undefined4 *puVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 ******ppppppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *****pppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar13 = *param_1;
  if (uVar13 == 0) {
    return;
  }
  if ((uVar13 & 1) == 0) {
    puVar2 = (undefined4 *)0x28;
    func_0x000107c60e20();
    *puVar2 = 1;
    puVar2[1] = (int)(uVar13 >> 2);
    *(undefined1 *)((long)puVar2 + 0x1f) = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *param_1 = (long)puVar2 + 1;
  }
  else if (*(int *)(uVar13 - 1) != 1) {
    puVar11 = *(ulong **)(uVar13 + 0x1f);
    if (puVar11 == (ulong *)0x0) {
      pppppuVar3 = (undefined8 *****)0x0;
    }
    else {
      pppppuVar3 = (undefined8 *****)0x30;
      func_0x000107c60e20();
      *pppppuVar3 = (undefined8 ****)0x0;
      if (1 < *puVar11) {
        func_0x000107c2b9dc(pppppuVar3,puVar11);
      }
    }
    lVar4 = 0x28;
    func_0x000107c60e20();
    uVar10 = *param_1;
    if ((uVar10 & 1) == 0) {
      uVar9 = (long)(uVar10 << 0x3e) >> 0x3f;
      uVar8 = uVar9 & 0x10e52c0f3;
      uVar9 = uVar9 & 0x1b;
    }
    else {
      uVar9 = (ulong)*(char *)(uVar10 + 0x1e);
      if ((long)uVar9 < 0) {
        uVar8 = *(ulong *)(uVar10 + 7);
        uVar9 = *(ulong *)(uVar10 + 0xf);
      }
      else {
        uVar8 = uVar10 + 7;
      }
    }
    pppppuStack_78 = pppppuVar3;
    func_0x000107c2b9d0(lVar4,*(undefined4 *)(uVar13 + 3),uVar8,uVar9,&pppppuStack_78);
    pppppuVar3 = pppppuStack_78;
    pppppuStack_78 = (undefined8 ******)0x0;
    if (pppppuVar3 != (undefined8 *****)0x0) {
      FUN_1008511e8();
      goto code_r0x000107c60e14;
    }
    *param_1 = lVar4 + 1;
    FUN_10084dad0(uVar13);
  }
  puVar14 = (undefined8 *)(*param_1 + 0x1f);
  puVar11 = (ulong *)*puVar14;
  if (puVar11 == (ulong *)0x0) {
    puVar5 = (undefined8 *)0x30;
    func_0x000107c60e20();
    *puVar5 = 0;
    FUN_10084d1dc(puVar14,puVar5);
    puVar11 = (ulong *)*puVar14;
  }
  puVar6 = puVar11;
  uVar13 = param_2;
  FUN_1004daad0(puVar11,param_2,param_3);
  if ((uVar13 & 1) != 0) {
    puVar12 = puVar11 + 1;
    if ((*puVar11 & 1) != 0) {
      puVar12 = (ulong *)*puVar12;
    }
    puVar11 = puVar12 + (long)puVar6 * 5 + 3;
    if ((*puVar11 & 1) != 0) {
      func_0x000107c2b96c(puVar11);
    }
    uVar13 = *param_4;
    puVar12[(long)puVar6 * 5 + 4] = param_4[1];
    *puVar11 = uVar13;
    *param_4 = 0;
    param_4[1] = 0;
    return;
  }
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    func_0x000107c2b9a8(&pppppuStack_78);
    func_0x000107c60bd8();
    uVar10 = *puVar6;
    *puVar6 = uVar13;
    if (uVar10 == 0) {
      return;
    }
    FUN_1008511e8();
    goto code_r0x000107c60e14;
  }
  if (param_3 < 0x17) {
    uStack_68 = CONCAT17((char)param_3,(undefined7)uStack_68);
    ppppppuVar7 = &pppppuStack_78;
    if (param_3 != 0) goto LAB_10084d0bc;
  }
  else {
    ppppppuVar1 = (undefined8 ******)0x19;
    if ((param_3 | 7) != 0x17) {
      ppppppuVar1 = (undefined8 ******)((param_3 | 7) + 1);
    }
    ppppppuVar7 = ppppppuVar1;
    func_0x000107c60e20();
    uStack_68 = (ulong)ppppppuVar1 | 0x8000000000000000;
    pppppuStack_78 = ppppppuVar7;
    uStack_70 = param_3;
LAB_10084d0bc:
    func_0x000107c610b8(ppppppuVar7,param_2,param_3);
  }
  *(undefined1 *)((long)ppppppuVar7 + param_3) = 0;
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  puVar6 = puVar11 + 1;
  if ((*puVar11 & 1) == 0) {
    uVar13 = 1;
  }
  else {
    puVar6 = (ulong *)puVar11[1];
    uVar13 = puVar11[2];
  }
  uVar10 = *puVar11 >> 1;
  if (uVar10 == uVar13) {
    FUN_10084d354(puVar11,&pppppuStack_78);
  }
  else {
    puVar6 = puVar6 + uVar10 * 5;
    puVar6[2] = uStack_68;
    puVar6[1] = uStack_70;
    *puVar6 = (ulong)pppppuStack_78;
    uStack_70 = 0;
    uStack_68 = 0;
    pppppuStack_78 = (undefined8 ******)0x0;
    puVar6[4] = uStack_58;
    puVar6[3] = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    *puVar11 = *puVar11 + 2;
  }
  FUN_10084d204(&uStack_60);
  if (-1 < (long)uStack_68) {
    return;
  }
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10084d1dc; end: 10084d203;  */

void FUN_10084d1dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1008511e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10084d204; end: 10084d237;  */

byte * FUN_10084d204(byte *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x000107c2b974(param_1);
  }
  return param_1;
}



/* Entry: 10084d238; end: 10084d273;  */

undefined * FUN_10084d238(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [16];
  
  if (param_1 < 0xb) {
    return (&PTR_s_type_googleapis_com_grpc_status__1107c5398)[(int)param_1];
  }
  pcVar1 = "return \"unknown\"";
  pcVar2 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc";
  uVar5 = 0x7b;
  func_0x000104a6e964("return \"unknown\"",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc"
                      ,0x7b);
  puVar4 = auStack_60;
  FUN_10084d238(pcVar2);
  pcVar3 = pcVar2;
  func_0x000107c613d0();
  FUN_10084d308(auStack_60,uVar5,param_4,9);
  FUN_10084ced4(pcVar1,pcVar2,pcVar3,auStack_60);
  FUN_10084d204(auStack_60);
  return puVar4;
}



/* Entry: 10084d274; end: 10084d307;  */

void FUN_10084d274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  
  FUN_10084d238(param_2);
  uVar1 = param_2;
  func_0x000107c613d0();
  FUN_10084d308(auStack_50,param_3,param_4,9);
  FUN_10084ced4(param_1,param_2,uVar1,auStack_50);
  FUN_10084d204(auStack_50);
  return;
}



/* Entry: 10084d308; end: 10084d30b;  */

undefined8 * FUN_10084d308(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x10) {
    FUN_10084ce44(param_1);
  }
  else {
    func_0x000107c34fe4(param_2,param_3);
    *param_1 = 1;
    param_1[1] = param_2;
  }
  return param_1;
}



/* Entry: 10084d30c; end: 10084d353;  */

undefined8 * FUN_10084d30c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x10) {
    FUN_10084ce44(param_1);
  }
  else {
    func_0x000107c34fe4(param_2,param_3);
    *param_1 = 1;
    param_1[1] = param_2;
  }
  return param_1;
}



/* Entry: 10084d354; end: 10084d46f;  */

void FUN_10084d354(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    puVar1 = (ulong *)0x2;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    puVar1 = (ulong *)(param_1[2] << 1);
  }
  uVar7 = uVar8 >> 1;
  puVar2 = param_2;
  FUN_10084d470();
  puVar3 = puVar1 + uVar7 * 5;
  uVar4 = param_2[2];
  uVar9 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar9;
  puVar3[2] = uVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar4 = param_2[3];
  puVar3[4] = param_2[4];
  puVar3[3] = uVar4;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar3 = puVar1;
  uVar4 = uVar7;
  puVar5 = puVar6;
  if (1 < uVar8) {
    do {
      uVar9 = puVar5[1];
      uVar8 = *puVar5;
      puVar3[2] = puVar5[2];
      puVar3[1] = uVar9;
      *puVar3 = uVar8;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uVar8 = puVar5[3];
      puVar3[4] = puVar5[4];
      puVar3[3] = uVar8;
      puVar5[3] = 0;
      puVar5[4] = 0;
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 5;
      puVar5 = puVar5 + 5;
    } while (uVar4 != 0);
    puVar6 = puVar6 + uVar7 * 5;
    do {
      puVar6 = puVar6 + -5;
      uVar7 = uVar7 - 1;
      func_0x00010084d4b4(puVar6);
    } while (uVar7 != 0);
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) != 0) {
    func_0x000107c60e14(param_1[1]);
    uVar8 = *param_1;
  }
  param_1[1] = (ulong)puVar1;
  param_1[2] = (ulong)puVar2;
  *param_1 = (uVar8 | 1) + 2;
  return;
}



/* Entry: 10084d470; end: 10084d4ef;  */

void FUN_10084d470(undefined8 *param_1)

{
  if (param_1 < (undefined8 *)0x666666666666667) {
    func_0x000107c60e20((long)param_1 * 0x28);
    return;
  }
  func_0x000104c4f740();
  FUN_10084d204(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10084d4f0; end: 10084d66b;  */

void FUN_10084d4f0(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong uStack_48;
  undefined1 auStack_40 [8];
  ulong **ppuStack_38;
  
  uStack_48 = *param_2;
  if ((uStack_48 & 1) != 0) {
    piVar4 = (int *)(uStack_48 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3 = &uStack_48;
  FUN_10084d7f0(puVar3,param_3,auStack_40);
  if ((uStack_48 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((int)puVar3 == 0) {
    uStack_68 = *param_2;
    if ((uStack_68 & 1) != 0) {
      piVar4 = (int *)(uStack_68 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104ab5ea4(&puStack_60,&uStack_68);
    puVar3 = puStack_60;
    if ((uStack_68 & 1) != 0) {
      FUN_10084dad0();
      puVar3 = puStack_60;
    }
    for (; puVar3 != puStack_58; puVar3 = puVar3 + 1) {
      uStack_70 = *puVar3;
      if ((uStack_70 & 1) != 0) {
        piVar4 = (int *)(uStack_70 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10084d4f0(param_1,&uStack_70,param_3);
      if ((uStack_70 & 1) != 0) {
        FUN_10084dad0();
      }
      if (*param_1 != 0) goto LAB_10084d5fc;
    }
    *param_1 = 0;
LAB_10084d5fc:
    ppuStack_38 = &puStack_60;
    func_0x000100482b64(&ppuStack_38);
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0x36;
  }
  return;
}



/* Entry: 10084d66c; end: 10084d7ef;  */

undefined1  [16] FUN_10084d66c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 ***unaff_x21;
  undefined1 auVar8 [16];
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  byte abStack_50 [8];
  long lStack_48;
  char cStack_40;
  ulong uStack_38;
  
  FUN_10084cc18(param_2);
  uVar3 = param_2;
  func_0x000107c613d0();
  func_0x0001004daa1c(abStack_50,param_1,param_2,uVar3);
  if (cStack_40 == '\0') {
    uVar7 = 0;
    uVar6 = 0;
    goto LAB_10084d72c;
  }
  if ((abStack_50[0] & 1) == 0) {
    pppuVar4 = (undefined8 ***)((ulong)abStack_50 | 1);
LAB_10084d6f4:
    iVar2 = (int)pppuVar4;
    FUN_10084d874();
    bVar1 = iVar2 == 0;
    uVar5 = 0;
    unaff_x21 = (undefined8 ***)ppuStack_68;
    if (!bVar1) {
      uVar5 = (uint)ppuStack_68;
      unaff_x21 = (undefined8 ***)((ulong)ppuStack_68 >> 8);
    }
  }
  else {
    pppuVar4 = (undefined8 ***)0x0;
    if (lStack_48 == 0) goto LAB_10084d6f4;
    ppuStack_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    func_0x000107c2b984(lStack_48,&ppuStack_68);
    pppuVar4 = (undefined8 ***)ppuStack_68;
    if ((int)lStack_48 != 0) goto LAB_10084d6f4;
    FUN_10084de48(&ppuStack_68,abStack_50);
    uVar6 = uStack_60;
    pppuVar4 = (undefined8 ***)ppuStack_68;
    if (-1 < (char)bStack_51) {
      uVar6 = (ulong)bStack_51;
      pppuVar4 = &ppuStack_68;
    }
    FUN_10084d874(pppuVar4,uVar6,&uStack_38,10);
    if ((char)bStack_51 < '\0') {
      func_0x000107c60e14(ppuStack_68);
    }
    bVar1 = (int)pppuVar4 == 0;
    uVar5 = 0;
    unaff_x21 = (undefined8 ***)(uStack_38 >> 8);
    if (!bVar1) {
      uVar5 = (uint)uStack_38;
    }
  }
  uVar7 = (uint)!bVar1;
  uVar6 = (ulong)uVar5;
  if (cStack_40 != '\0') {
    FUN_10084d204(abStack_50);
  }
LAB_10084d72c:
  auVar8._8_4_ = uVar7;
  auVar8._0_8_ = uVar6 & 0xff | (long)unaff_x21 << 8;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10084d7f0; end: 10084d873;  */

undefined8 FUN_10084d7f0(ulong param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  uVar3 = param_2;
  FUN_10084d66c();
  if ((uVar3 & 0xff) == 0) {
    if ((int)param_2 != 3) {
      return 0;
    }
    func_0x000107c2b9b8();
    iVar1 = (int)param_1;
    if (iVar1 == 0) {
      uVar2 = param_1 & 0xffffffff;
    }
    else if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      if (iVar1 != 8) {
        return 0;
      }
      uVar2 = 8;
    }
  }
  *param_3 = uVar2;
  return 1;
}



/* Entry: 10084d874; end: 10084dacf;  */

undefined8 FUN_10084d874(byte *param_1,long param_2,long *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar4 = param_1;
  if (0 < param_2) {
    do {
      if (((byte)(&UNK_10e52ca36)[*pbVar4] >> 3 & 1) == 0) break;
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 < param_1 + param_2);
  }
  do {
    lVar6 = param_2;
    if (param_1 + lVar6 <= pbVar4) {
      return 0;
    }
    param_2 = lVar6 + -1;
  } while (((byte)(&UNK_10e52ca36)[(param_1 + lVar6)[-1]] >> 3 & 1) != 0);
  bVar2 = *pbVar4;
  if (((bVar2 == 0x2d) || (bVar2 == 0x2b)) && (pbVar4 = pbVar4 + 1, param_1 + lVar6 <= pbVar4)) {
    return 0;
  }
  if (param_4 == 0x10) {
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar4) + 1)) && (*pbVar4 == 0x30)) &&
       ((pbVar4[1] | 0x20) == 0x78)) {
LAB_10084d97c:
      pbVar4 = pbVar4 + 2;
      if (param_1 + lVar6 <= pbVar4) {
        return 0;
      }
    }
    param_4 = 0x10;
  }
  else if (param_4 == 0) {
    if ((long)(param_1 + (param_2 - (long)pbVar4) + 1) < 2) {
      param_4 = 10;
      if (param_1 + (param_2 - (long)pbVar4) == (byte *)0x0) {
        bVar1 = *pbVar4;
        if (bVar1 == 0x30) {
          pbVar4 = pbVar4 + 1;
        }
        param_4 = 8;
        if (bVar1 != 0x30) {
          param_4 = 10;
        }
      }
    }
    else if (*pbVar4 == 0x30) {
      if ((pbVar4[1] | 0x20) == 0x78) goto LAB_10084d97c;
      param_4 = 8;
      pbVar4 = pbVar4 + 1;
    }
    else {
      param_4 = 10;
    }
  }
  else if (0x22 < param_4 - 2) {
    return 0;
  }
  param_1 = param_1 + lVar6;
  uVar7 = (ulong)param_4;
  if (bVar2 == 0x2d) {
    if ((long)param_1 - (long)pbVar4 < 1) {
LAB_10084daa0:
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        pbVar5 = pbVar4 + 1;
        if ((int)param_4 <= (int)(char)(&UNK_10e5302b8)[*pbVar4]) goto LAB_10084daac;
        if (lVar6 < *(long *)(&UNK_10e530608 + uVar7 * 8)) {
LAB_10084dab4:
          uVar3 = 0;
          lVar6 = -0x8000000000000000;
          goto LAB_10084dac8;
        }
        uVar8 = (ulong)(int)(char)(&UNK_10e5302b8)[*pbVar4];
        if ((long)(lVar6 * uVar7) < (long)(uVar8 | 0x8000000000000000)) goto LAB_10084dab4;
        lVar6 = lVar6 * uVar7 - uVar8;
        pbVar4 = pbVar5;
      } while (pbVar5 < param_1);
    }
  }
  else {
    if ((long)param_1 - (long)pbVar4 < 1) goto LAB_10084daa0;
    lVar6 = 0;
    do {
      pbVar5 = pbVar4 + 1;
      uVar8 = (ulong)(char)(&UNK_10e5302b8)[*pbVar4];
      if ((long)uVar7 <= (long)uVar8) goto LAB_10084daac;
      if ((*(long *)(&UNK_10e5304e0 + uVar7 * 8) < lVar6) ||
         (lVar6 = lVar6 * uVar7,
         lVar6 - (uVar8 ^ 0x7fffffffffffffff) != 0 && (long)(uVar8 ^ 0x7fffffffffffffff) <= lVar6))
      {
        uVar3 = 0;
        lVar6 = 0x7fffffffffffffff;
        goto LAB_10084dac8;
      }
      lVar6 = lVar6 + uVar8;
      pbVar4 = pbVar5;
    } while (pbVar5 < param_1);
  }
  uVar3 = 1;
LAB_10084dac8:
  *param_3 = lVar6;
  return uVar3;
LAB_10084daac:
  uVar3 = 0;
  goto LAB_10084dac8;
}



/* Entry: 10084dad0; end: 10084db37;  */

/* WARNING: Possible PIC construction at 0x00010084db18: Changing call to branch */

void FUN_10084dad0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + -1);
  if (*piVar4 != 1) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 != 0) {
      return;
    }
  }
  FUN_10084d1dc(param_1 + 0x1f,0);
  if (*(char *)(param_1 + 0x1e) < '\0') {
    piVar4 = *(int **)(param_1 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(piVar4);
  return;
}



/* Entry: 10084db38; end: 10084dbef;  */

void FUN_10084db38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  char cStack_38;
  
  FUN_10084d238(param_3);
  uVar1 = param_3;
  func_0x000107c613d0();
  func_0x0001004daa1c(auStack_48,param_2,param_3,uVar1);
  if (cStack_38 == '\0') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_10084de48(&uStack_60,auStack_48);
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = uStack_50;
    *(undefined1 *)(param_1 + 3) = 1;
    if (cStack_38 != '\0') {
      FUN_10084d204(auStack_48);
    }
  }
  return;
}



/* Entry: 10084dbf0; end: 10084dde7;  */

/* WARNING: Possible PIC construction at 0x00010ae72338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae7233c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72350) */
/* WARNING: Removing unreachable block (ram,0x00010ae7236c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72414) */
/* WARNING: Removing unreachable block (ram,0x00010ae72420) */
/* WARNING: Removing unreachable block (ram,0x00010ae72374) */
/* WARNING: Removing unreachable block (ram,0x00010ae72380) */
/* WARNING: Removing unreachable block (ram,0x00010ae725f0) */
/* WARNING: Removing unreachable block (ram,0x00010ae7238c) */
/* WARNING: Removing unreachable block (ram,0x00010ae7258c) */
/* WARNING: Removing unreachable block (ram,0x00010ae725b4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72594) */
/* WARNING: Removing unreachable block (ram,0x00010ae725bc) */
/* WARNING: Removing unreachable block (ram,0x00010ae725e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725c8) */
/* WARNING: Removing unreachable block (ram,0x00010ae725e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72394) */
/* WARNING: Removing unreachable block (ram,0x00010ae723b8) */
/* WARNING: Removing unreachable block (ram,0x00010ae723c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae723e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725a0) */
/* WARNING: Removing unreachable block (ram,0x00010ae72408) */
/* WARNING: Removing unreachable block (ram,0x00010ae725a4) */
/* WARNING: Removing unreachable block (ram,0x00010ae725d0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725ac) */
/* WARNING: Removing unreachable block (ram,0x00010ae725d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72428) */
/* WARNING: Removing unreachable block (ram,0x00010ae7242c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72438) */
/* WARNING: Removing unreachable block (ram,0x00010ae72450) */
/* WARNING: Removing unreachable block (ram,0x00010ae72458) */
/* WARNING: Removing unreachable block (ram,0x00010ae72460) */
/* WARNING: Removing unreachable block (ram,0x00010ae724e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae724e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72464) */
/* WARNING: Removing unreachable block (ram,0x00010ae724ec) */
/* WARNING: Removing unreachable block (ram,0x00010ae7247c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72480) */
/* WARNING: Removing unreachable block (ram,0x00010ae72504) */
/* WARNING: Removing unreachable block (ram,0x00010ae72488) */
/* WARNING: Removing unreachable block (ram,0x00010ae724b0) */
/* WARNING: Removing unreachable block (ram,0x00010ae724bc) */
/* WARNING: Removing unreachable block (ram,0x00010ae724d8) */
/* WARNING: Removing unreachable block (ram,0x00010ae724f8) */
/* WARNING: Removing unreachable block (ram,0x00010ae72508) */
/* WARNING: Removing unreachable block (ram,0x00010ae7252c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72520) */
/* WARNING: Removing unreachable block (ram,0x00010ae72530) */
/* WARNING: Removing unreachable block (ram,0x00010ae72540) */
/* WARNING: Removing unreachable block (ram,0x00010ae72538) */
/* WARNING: Removing unreachable block (ram,0x00010ae72544) */
/* WARNING: Removing unreachable block (ram,0x00010ae7254c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72340) */
/* WARNING: Removing unreachable block (ram,0x00010ae72558) */
/* WARNING: Removing unreachable block (ram,0x00010ae725fc) */
/* WARNING: Removing unreachable block (ram,0x00010ae72570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10084dbf0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  long *plVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  undefined *puVar20;
  ulong *puStack_208;
  undefined8 auStack_1e8 [12];
  long lStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  ppuVar8 = &puStack_60;
  ppuVar7 = &puStack_60;
  if ((int)param_2 != 0) {
    FUN_10084db38(&puStack_60,param_1);
    if (cStack_48 == '\0') {
      if ((int)param_2 != 5) {
        return (ulong *)0x0;
      }
      func_0x000107c2b9b8();
      iVar6 = (int)param_1;
      if (iVar6 == 0) {
        pcVar10 = "";
      }
      else if (iVar6 == 1) {
        pcVar10 = "CANCELLED";
      }
      else {
        if (iVar6 != 8) {
          puVar19 = (ulong *)0x0;
          goto LAB_10084dc58;
        }
        pcVar10 = "RESOURCE_EXHAUSTED";
      }
      func_0x000107c60c64(param_3,pcVar10);
    }
    else {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c60e14(*param_3);
      }
      param_3[1] = uStack_58;
      *param_3 = (ulong)puStack_60;
      param_3[2] = uStack_50;
      uStack_50 = uStack_50 & 0xffffffffffffff;
      puStack_60 = (undefined1 *)((ulong)puStack_60 & 0xffffffffffffff00);
    }
    puVar19 = (ulong *)0x1;
LAB_10084dc58:
    if ((cStack_48 != '\0') && ((long)uStack_50 < 0)) {
      func_0x000107c60e14(puStack_60);
    }
    return puVar19;
  }
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    if ((uVar12 & 3) != 2) {
      return (ulong *)0x0;
    }
    puVar20 = &UNK_10e52c0f3;
    uVar12 = 0x1b;
  }
  else {
    if ((char)*(byte *)(uVar12 + 0x1e) < '\0') {
      puVar20 = *(undefined **)(uVar12 + 7);
      uVar12 = *(ulong *)(uVar12 + 0xf);
    }
    else {
      puVar20 = (undefined *)(uVar12 + 7);
      uVar12 = (ulong)*(byte *)(uVar12 + 0x1e);
    }
    if (uVar12 == 0) {
      return (ulong *)0x0;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      func_0x000104a6fa5c();
      if ((cStack_48 != '\0') && ((long)uStack_50 < 0)) {
        func_0x000107c60e14(puStack_60);
      }
      func_0x000107c60bd8();
      pcStack_68 = FUN_10084dde8;
      puStack_70 = &stack0xfffffffffffffff0;
      if ((*(byte *)ppuVar8 & 1) != 0) {
        FUN_100066b68(param_2,**(undefined8 **)((long)ppuVar8 + 8));
        ppuStack_170 = &puStack_70;
        plVar9 = (long *)0x0;
        uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uStack_160 = 0;
        uStack_158 = 0;
        if ((*(byte *)ppuVar8 & 1) != 0) {
          plVar9 = *(long **)((long)ppuVar8 + 8);
        }
        if (*plVar9 != 0) {
          bVar5 = *(byte *)((long)plVar9 + 0xc);
          if (bVar5 == 2) {
            plVar9 = (long *)plVar9[2];
            bVar5 = *(byte *)((long)plVar9 + 0xc);
          }
          if (bVar5 < 6) {
            if (bVar5 == 1) {
              puVar19 = (ulong *)plVar9[3];
              bVar5 = *(byte *)((long)puVar19 + 0xc);
              if (5 < bVar5) {
                return (ulong *)0x1;
              }
              if (bVar5 == 3) {
                uVar12 = plVar9[2];
                puStack_168 = &UNK_10ae7233c;
                if (*plVar9 == 0) {
code_r0x00010ae6eae0:
                  puVar19 = (ulong *)0x0;
                }
                else {
                  uVar16 = (uint)*(byte *)((long)puVar19 + 0xd);
                  do {
                    puVar13 = (ulong *)puVar19[(ulong)*(byte *)((long)puVar19 + 0xe) + 2];
                    uVar14 = *puVar13;
                    if (uVar14 <= uVar12) {
                      puVar19 = puVar19 + (ulong)*(byte *)((long)puVar19 + 0xe) + 3;
                      do {
                        uVar12 = uVar12 - uVar14;
                        puVar13 = (ulong *)*puVar19;
                        uVar14 = *puVar13;
                        puVar19 = puVar19 + 1;
                      } while (uVar14 <= uVar12);
                    }
                    if (uVar14 < uVar12 + *plVar9) goto code_r0x00010ae6eae0;
                    bVar1 = 0 < (int)uVar16;
                    puVar19 = puVar13;
                    uVar16 = uVar16 - 1;
                  } while (bVar1);
                  if ((&stack0x00000000 != (undefined1 *)0x160) && (uVar14 < uVar12)) {
                    puStack_208 = (ulong *)&UNK_10f6d18b2;
                    func_0x000109262df8();
                    puStack_180 = (undefined1 *)&ppuStack_170;
                    puStack_178 = &UNK_10ae6eb34;
                    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    bVar5 = *(byte *)((long)puStack_208 + 0xd);
                    uVar14 = (ulong)bVar5;
                    puVar19 = puStack_208;
                    if (uVar14 != 0) {
                      puVar15 = auStack_1e8;
                      uVar17 = uVar14;
                      do {
                        puVar19 = (ulong *)puVar19[(ulong)*(byte *)((long)puVar19 + 0xf) + 1];
                        if ((puVar19[1] & 0xfffffffd) != 4) goto code_r0x00010ae6ebc0;
                        *puVar15 = puVar19;
                        uVar17 = uVar17 - 1;
                        puVar15 = puVar15 + 1;
                      } while (uVar17 != 0);
                    }
                    plVar9 = (long *)puVar19[(ulong)*(byte *)((long)puVar19 + 0xf) + 1];
                    if (((*(uint *)(plVar9 + 1) & 0xfffffffd) == 4) &&
                       (bVar4 = *(byte *)((long)plVar9 + 0xc), 5 < bVar4)) {
                      uVar16 = 6;
                      if (0xba < bVar4) {
                        uVar16 = 0xc;
                      }
                      iVar6 = -0xe8d;
                      if (0xba < bVar4) {
                        iVar6 = -0xb800d;
                      }
                      uVar11 = (uint)bVar4;
                      uVar2 = 3;
                      if (0x42 < uVar11) {
                        uVar2 = uVar16;
                      }
                      iVar3 = -0x1d;
                      if (0x42 < uVar11) {
                        iVar3 = iVar6;
                      }
                      lVar18 = *plVar9;
                      uVar17 = (int)((uVar11 << (ulong)uVar2) + iVar3) - lVar18;
                      if (uVar17 == 0) {
                        puVar19 = (ulong *)0x0;
                      }
                      else {
                        if (uVar12 <= uVar17) {
                          uVar17 = uVar12;
                        }
                        puVar19 = (ulong *)((long)plVar9 + lVar18 + 0xd);
                        *plVar9 = uVar17 + lVar18;
                        *puStack_208 = *puStack_208 + uVar17;
                        if (bVar5 != 0) {
                          puVar15 = auStack_1e8;
                          do {
                            *(long *)*puVar15 = *(long *)*puVar15 + uVar17;
                            uVar14 = uVar14 - 1;
                            puVar15 = puVar15 + 1;
                          } while (uVar14 != 0);
                        }
                      }
                    }
                    else {
code_r0x00010ae6ebc0:
                      puVar19 = (ulong *)0x0;
                    }
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
                      ___stack_chk_fail();
                      if (*(char *)((long)puStack_208 + 0xc) != '\x03') {
                        puStack_208 = (ulong *)0x0;
                        func_0x00010ae6f7b0();
                      }
                      return puStack_208;
                    }
                    return puVar19;
                  }
                  puVar19 = (ulong *)0x1;
                }
                return puVar19;
              }
            }
            else if (bVar5 == 3) {
              if ((*(char *)((long)plVar9 + 0xd) == '\0') &&
                 ((ulong)*(byte *)((long)plVar9 + 0xf) - (ulong)*(byte *)((long)plVar9 + 0xe) == 1))
              {
                return (ulong *)0x1;
              }
              return (ulong *)0x0;
            }
            if (bVar5 != 5) {
              return (ulong *)0x0;
            }
          }
        }
        return (ulong *)0x1;
      }
      pcStack_68 = FUN_10084dde8;
      puVar19 = param_2;
      FUN_100066b68(param_2,0xf);
      puVar13 = param_2;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        puVar13 = (ulong *)*param_2;
      }
      uVar12 = *(ulong *)((long)ppuVar8 + 1);
      *(undefined8 *)((long)puVar13 + 7) = *(undefined8 *)((long)ppuVar8 + 8);
      *puVar13 = uVar12;
      uVar12 = (ulong)(long)(char)*(byte *)ppuVar8 >> 1;
      if ((long)*(char *)((long)param_2 + 0x17) < 0) {
        if (param_2[1] < uVar12) goto LAB_10084df20;
        param_2[1] = uVar12;
        param_2 = (ulong *)*param_2;
      }
      else {
        if ((ulong)(long)*(char *)((long)param_2 + 0x17) < uVar12) {
LAB_10084df20:
          func_0x000107c2ac68();
                    /* WARNING: Could not recover jumptable at 0x00010c1374b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_3,PTR_s_requireGestureRecognizerToFail__11262b748,
                     *(undefined8 *)((long)puVar19 + (long)_DAT_112741780));
          return param_3;
        }
        *(char *)((long)param_2 + 0x17) = (char)((uint)(int)(char)*(byte *)ppuVar8 >> 1);
      }
      *(undefined1 *)((long)param_2 + uVar12) = 0;
      return puVar19;
    }
    if (uVar12 < 0x17) {
      uStack_50 = CONCAT17((char)uVar12,(undefined7)uStack_50);
      goto LAB_10084dd2c;
    }
  }
  uVar14 = (uVar12 & 0xfffffffffffffff8) + 8;
  if ((uVar12 | 7) != 0x17) {
    uVar14 = uVar12 | 7;
  }
  ppuVar7 = (undefined1 **)(uVar14 + 1);
  func_0x000107c60e20();
  uStack_50 = (ulong)(uVar14 + 1) | 0x8000000000000000;
  puStack_60 = (undefined1 *)ppuVar7;
  uStack_58 = uVar12;
LAB_10084dd2c:
  func_0x000107c610b8(ppuVar7,puVar20,uVar12);
  *(undefined1 *)((long)ppuVar7 + uVar12) = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c60e14(*param_3);
  }
  param_3[1] = uStack_58;
  *param_3 = (ulong)puStack_60;
  param_3[2] = uStack_50;
  return (ulong *)0x1;
}



/* Entry: 10084dde8; end: 10084de47;  */

/* WARNING: Possible PIC construction at 0x00010ae72338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae7233c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72350) */
/* WARNING: Removing unreachable block (ram,0x00010ae7236c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72414) */
/* WARNING: Removing unreachable block (ram,0x00010ae72420) */
/* WARNING: Removing unreachable block (ram,0x00010ae72374) */
/* WARNING: Removing unreachable block (ram,0x00010ae72380) */
/* WARNING: Removing unreachable block (ram,0x00010ae725f0) */
/* WARNING: Removing unreachable block (ram,0x00010ae7238c) */
/* WARNING: Removing unreachable block (ram,0x00010ae7258c) */
/* WARNING: Removing unreachable block (ram,0x00010ae725b4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72594) */
/* WARNING: Removing unreachable block (ram,0x00010ae725bc) */
/* WARNING: Removing unreachable block (ram,0x00010ae725e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725c8) */
/* WARNING: Removing unreachable block (ram,0x00010ae725e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72394) */
/* WARNING: Removing unreachable block (ram,0x00010ae723b8) */
/* WARNING: Removing unreachable block (ram,0x00010ae723c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae723e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725a0) */
/* WARNING: Removing unreachable block (ram,0x00010ae72408) */
/* WARNING: Removing unreachable block (ram,0x00010ae725a4) */
/* WARNING: Removing unreachable block (ram,0x00010ae725d0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725ac) */
/* WARNING: Removing unreachable block (ram,0x00010ae725d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72428) */
/* WARNING: Removing unreachable block (ram,0x00010ae7242c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72438) */
/* WARNING: Removing unreachable block (ram,0x00010ae72450) */
/* WARNING: Removing unreachable block (ram,0x00010ae72458) */
/* WARNING: Removing unreachable block (ram,0x00010ae72460) */
/* WARNING: Removing unreachable block (ram,0x00010ae724e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae724e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72464) */
/* WARNING: Removing unreachable block (ram,0x00010ae724ec) */
/* WARNING: Removing unreachable block (ram,0x00010ae7247c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72480) */
/* WARNING: Removing unreachable block (ram,0x00010ae72504) */
/* WARNING: Removing unreachable block (ram,0x00010ae72488) */
/* WARNING: Removing unreachable block (ram,0x00010ae724b0) */
/* WARNING: Removing unreachable block (ram,0x00010ae724bc) */
/* WARNING: Removing unreachable block (ram,0x00010ae724d8) */
/* WARNING: Removing unreachable block (ram,0x00010ae724f8) */
/* WARNING: Removing unreachable block (ram,0x00010ae72508) */
/* WARNING: Removing unreachable block (ram,0x00010ae7252c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72520) */
/* WARNING: Removing unreachable block (ram,0x00010ae72530) */
/* WARNING: Removing unreachable block (ram,0x00010ae72540) */
/* WARNING: Removing unreachable block (ram,0x00010ae72538) */
/* WARNING: Removing unreachable block (ram,0x00010ae72544) */
/* WARNING: Removing unreachable block (ram,0x00010ae7254c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72340) */
/* WARNING: Removing unreachable block (ram,0x00010ae72558) */
/* WARNING: Removing unreachable block (ram,0x00010ae725fc) */
/* WARNING: Removing unreachable block (ram,0x00010ae72570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10084dde8(byte *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  ulong *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long *plStack_1a8;
  undefined8 auStack_188 [12];
  long lStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_58;
  
  if ((*param_1 & 1) != 0) {
    FUN_100066b68(param_2,**(undefined8 **)(param_1 + 8));
    puStack_110 = &stack0xfffffffffffffff0;
    plVar8 = (long *)0x0;
    uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uStack_100 = 0;
    uStack_f8 = 0;
    if ((*param_1 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 8);
    }
    if (*plVar8 != 0) {
      bVar6 = *(byte *)((long)plVar8 + 0xc);
      if (bVar6 == 2) {
        plVar8 = (long *)plVar8[2];
        bVar6 = *(byte *)((long)plVar8 + 0xc);
      }
      if (bVar6 < 6) {
        if (bVar6 == 1) {
          puVar13 = (ulong *)plVar8[3];
          bVar6 = *(byte *)((long)puVar13 + 0xc);
          if (5 < bVar6) {
            return (long *)0x1;
          }
          if (bVar6 == 3) {
            uVar11 = plVar8[2];
            puStack_108 = &UNK_10ae7233c;
            if (*plVar8 == 0) {
code_r0x00010ae6eae0:
              plVar8 = (long *)0x0;
            }
            else {
              uVar16 = (uint)*(byte *)((long)puVar13 + 0xd);
              do {
                puVar7 = (ulong *)puVar13[(ulong)*(byte *)((long)puVar13 + 0xe) + 2];
                uVar12 = *puVar7;
                if (uVar12 <= uVar11) {
                  puVar13 = puVar13 + (ulong)*(byte *)((long)puVar13 + 0xe) + 3;
                  do {
                    uVar11 = uVar11 - uVar12;
                    puVar7 = (ulong *)*puVar13;
                    uVar12 = *puVar7;
                    puVar13 = puVar13 + 1;
                  } while (uVar12 <= uVar11);
                }
                if (uVar12 < uVar11 + *plVar8) goto code_r0x00010ae6eae0;
                bVar1 = 0 < (int)uVar16;
                puVar13 = puVar7;
                uVar16 = uVar16 - 1;
              } while (bVar1);
              if ((&stack0x00000000 != (undefined1 *)0x100) && (uVar12 < uVar11)) {
                plStack_1a8 = (long *)&UNK_10f6d18b2;
                func_0x000109262df8();
                puStack_120 = (undefined1 *)&puStack_110;
                puStack_118 = &UNK_10ae6eb34;
                lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
                bVar6 = *(byte *)((long)plStack_1a8 + 0xd);
                uVar12 = (ulong)bVar6;
                plVar8 = plStack_1a8;
                if (uVar12 != 0) {
                  puVar15 = auStack_188;
                  uVar17 = uVar12;
                  do {
                    plVar8 = (long *)plVar8[(ulong)*(byte *)((long)plVar8 + 0xf) + 1];
                    if ((*(uint *)(plVar8 + 1) & 0xfffffffd) != 4) goto code_r0x00010ae6ebc0;
                    *puVar15 = plVar8;
                    uVar17 = uVar17 - 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar17 != 0);
                }
                plVar8 = (long *)plVar8[(ulong)*(byte *)((long)plVar8 + 0xf) + 1];
                if (((*(uint *)(plVar8 + 1) & 0xfffffffd) == 4) &&
                   (bVar5 = *(byte *)((long)plVar8 + 0xc), 5 < bVar5)) {
                  uVar16 = 6;
                  if (0xba < bVar5) {
                    uVar16 = 0xc;
                  }
                  iVar2 = -0xe8d;
                  if (0xba < bVar5) {
                    iVar2 = -0xb800d;
                  }
                  uVar9 = (uint)bVar5;
                  uVar3 = 3;
                  if (0x42 < uVar9) {
                    uVar3 = uVar16;
                  }
                  iVar4 = -0x1d;
                  if (0x42 < uVar9) {
                    iVar4 = iVar2;
                  }
                  lVar14 = *plVar8;
                  uVar17 = (int)((uVar9 << (ulong)uVar3) + iVar4) - lVar14;
                  if (uVar17 == 0) {
                    plVar10 = (long *)0x0;
                  }
                  else {
                    if (uVar11 <= uVar17) {
                      uVar17 = uVar11;
                    }
                    plVar10 = (long *)((long)plVar8 + lVar14 + 0xd);
                    *plVar8 = uVar17 + lVar14;
                    *plStack_1a8 = *plStack_1a8 + uVar17;
                    if (bVar6 != 0) {
                      puVar15 = auStack_188;
                      do {
                        *(long *)*puVar15 = *(long *)*puVar15 + uVar17;
                        uVar12 = uVar12 - 1;
                        puVar15 = puVar15 + 1;
                      } while (uVar12 != 0);
                    }
                  }
                }
                else {
code_r0x00010ae6ebc0:
                  plVar10 = (long *)0x0;
                }
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
                  ___stack_chk_fail();
                  if (*(char *)((long)plStack_1a8 + 0xc) != '\x03') {
                    plStack_1a8 = (long *)0x0;
                    func_0x00010ae6f7b0();
                  }
                  return plStack_1a8;
                }
                return plVar10;
              }
              plVar8 = (long *)0x1;
            }
            return plVar8;
          }
        }
        else if (bVar6 == 3) {
          if ((*(char *)((long)plVar8 + 0xd) == '\0') &&
             ((ulong)*(byte *)((long)plVar8 + 0xf) - (ulong)*(byte *)((long)plVar8 + 0xe) == 1)) {
            return (long *)0x1;
          }
          return (long *)0x0;
        }
        if (bVar6 != 5) {
          return (long *)0x0;
        }
      }
    }
    return (long *)0x1;
  }
  plVar8 = param_2;
  FUN_100066b68(param_2,0xf);
  plVar10 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    plVar10 = (long *)*param_2;
  }
  lVar14 = *(long *)(param_1 + 1);
  *(undefined8 *)((long)plVar10 + 7) = *(undefined8 *)(param_1 + 8);
  *plVar10 = lVar14;
  uVar11 = (ulong)(long)(char)*param_1 >> 1;
  if ((long)*(char *)((long)param_2 + 0x17) < 0) {
    if ((ulong)param_2[1] < uVar11) goto LAB_10084df20;
    param_2[1] = uVar11;
    param_2 = (long *)*param_2;
  }
  else {
    if ((ulong)(long)*(char *)((long)param_2 + 0x17) < uVar11) {
LAB_10084df20:
      func_0x000107c2ac68();
                    /* WARNING: Could not recover jumptable at 0x00010c1374b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_3,PTR_s_requireGestureRecognizerToFail__11262b748,
                 *(undefined8 *)((long)plVar8 + (long)_DAT_112741780));
      return param_3;
    }
    *(char *)((long)param_2 + 0x17) = (char)((uint)(int)(char)*param_1 >> 1);
  }
  *(undefined1 *)((long)param_2 + uVar11) = 0;
  return plVar8;
}



/* Entry: 10084de48; end: 10084de8f;  */

void FUN_10084de48(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10084dde8(param_2,param_1);
  return;
}



/* Entry: 10084de90; end: 10084df23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084de90(char *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  FUN_100066b68(param_2,0xf);
  puVar2 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*param_2;
  }
  uVar4 = *(undefined8 *)(param_1 + 1);
  *(undefined8 *)((long)puVar2 + 7) = *(undefined8 *)(param_1 + 8);
  *puVar2 = uVar4;
  uVar3 = (ulong)(long)*param_1 >> 1;
  if ((long)*(char *)((long)param_2 + 0x17) < 0) {
    if ((ulong)param_2[1] < uVar3) goto LAB_10084df20;
    param_2[1] = uVar3;
    param_2 = (undefined8 *)*param_2;
  }
  else {
    if ((ulong)(long)*(char *)((long)param_2 + 0x17) < uVar3) {
LAB_10084df20:
      func_0x000107c2ac68();
                    /* WARNING: Could not recover jumptable at 0x00010c1374b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_3,PTR_s_requireGestureRecognizerToFail__11262b748,
                 *(undefined8 *)((long)puVar1 + (long)_DAT_112741780));
      return;
    }
    *(char *)((long)param_2 + 0x17) = (char)((uint)(int)*param_1 >> 1);
  }
  *(undefined1 *)((long)param_2 + uVar3) = 0;
  return;
}



/* Entry: 10084df24; end: 10084df3b; -[SCFeatureDoubleTapToToggleCameraImpl addBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084df24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1374b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_requireGestureRecognizerToFail__11262b748,
             *(undefined8 *)(param_1 + _DAT_112741780));
  return;
}



/* Entry: 10084df3c; end: 10084df43; -[SCMutablePublicCameraFeatureCatalog lensExplorerSwipeUp] */

undefined8 FUN_10084df3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10084df44; end: 10084df73;  */

bool FUN_10084df44(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 10084df74; end: 10084e1d3;  */

void FUN_10084df74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar2 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126c8848;
    func_0x000107c610f4(PTR_PTR_1126c8848);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10084e1d4;
    puStack_88 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar14);
    ppuVar3 = &puStack_a0;
    uStack_80 = uVar14;
    FUN_10084e1d4();
    func_0x000107c61180();
    lVar4 = lVar2 + 0x110;
    func_0x000107c61148();
    lVar5 = lVar2 + 0x158;
    func_0x000107c61148();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10084e2b0;
    puStack_b0 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar14);
    ppuVar6 = &puStack_c8;
    uStack_a8 = uVar14;
    FUN_10084e2b0();
    func_0x000107c61180();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10084e38c;
    puStack_d8 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar14);
    ppuVar7 = &puStack_f0;
    uStack_d0 = uVar14;
    FUN_10084e38c();
    func_0x000107c61180();
    lVar8 = lVar2 + 0xf8;
    func_0x000107c61148(lVar8);
    lVar9 = lVar2 + 0xb0;
    func_0x000107c61148();
    lVar10 = lVar9;
    func_0x000107c4b518();
    func_0x000107c61180();
    lVar11 = lVar2 + 0xa8;
    func_0x000107c61148();
    lVar12 = lVar2 + 0x198;
    func_0x000107c61148();
    lVar13 = lVar12;
    func_0x000107c3d0d8();
    func_0x000107c61180();
    func_0x000107c472b4(puVar15,param_2,ppuVar3,lVar4,lVar5,ppuVar6,ppuVar7,lVar8,lVar10,lVar11,
                        0x1000101);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uStack_80);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10084e1d4; end: 10084e2af;  */

void FUN_10084e1d4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10084e2b0; end: 10084e38b;  */

void FUN_10084e2b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10084e38c; end: 10084e467;  */

void FUN_10084e38c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10084e468; end: 10084ea43; -[SCFeatureLensExplorerSwipeUpImpl initWithLensFeedFeature:swipeViewParentDelegate:lensCarouselManager:lensCollectionsCarousel:lensesTooltipManager:lensPreferences:lensUserProvider:featureSettingsService:tooltipEnabled:alwaysOnCarouselEnabled:allowSwipeUpOnOriginalLens:disableOnLensCollectionCarousel:lensesCameraCapturerStateUpdatesProvider:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10084e468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,uint param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_80 = PTR_PTR_1126f0390;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127425dc,param_4);
    lVar6 = (long)_DAT_1127425e0;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127425e4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127425e8;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127425ec;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127425f0;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127425f4;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127425f8;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127425fc;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112742600,param_14);
    lVar6 = (long)_DAT_112742604;
    *(undefined8 *)((long)puVar1 + lVar6) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742608) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274260c) = param_11._2_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742610) = param_11._3_1_;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742614);
    *(undefined **)((long)puVar1 + (long)_DAT_112742614) = puVar3;
    func_0x000107c61170(uVar2);
    if ((param_11 & 1) == 0) {
      *(ulong *)((long)puVar1 + lVar6) = *(ulong *)((long)puVar1 + lVar6) | 0x10;
    }
    func_0x000107c3c648(puVar1);
    func_0x000107c61144(auStack_90,puVar1);
    uVar2 = param_13;
    func_0x000107c5c734(param_13);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c41a10();
    func_0x000107c61180();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_1061d0ca0;
    puStack_a0 = &UNK_11084eff0;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = param_13;
    func_0x000107c5c734(param_13);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c41bf8();
    func_0x000107c61180();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_1061d0ccc;
    puStack_c8 = &UNK_11084eff0;
    func_0x000107c6111c(auStack_c0,auStack_90);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = param_13;
    func_0x000107c5c734(param_13);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c41ba8();
    func_0x000107c61180();
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    puStack_f8 = &UNK_1061d0cf8;
    puStack_f0 = &UNK_11084eff0;
    func_0x000107c6111c(auStack_e8,auStack_90);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = param_13;
    func_0x000107c5c734(param_13);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c41a20();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_110,auStack_90);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_110);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10084ea44; end: 10084ebcf; -[SCFeatureLensExplorerSwipeUpImpl _setupCameraModeActivationInfoObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ea44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  param_1 = param_1 + _DAT_112742600;
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
  lVar4 = lVar3;
  FUN_100078e94();
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c4da88(lVar3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_70,auStack_68);
  lVar6 = lVar5;
  func_0x000107c5c320(lVar5);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10084ebd0; end: 10084ebdf; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider didBeginVideoRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ebd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3c80));
  return;
}



/* Entry: 10084ebe0; end: 10084ebef; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider didFinishRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ebe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3c88));
  return;
}



/* Entry: 10084ebf0; end: 10084ebff; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider didFailRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ebf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3c90));
  return;
}



/* Entry: 10084ec00; end: 10084ec13; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider didCancelRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ec00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3c98));
  return;
}



/* Entry: 10084ec14; end: 10084ec73;  */

void FUN_10084ec14(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  FUN_10010fab4(lVar2,PTR_DAT_1126a58a0);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10084ec74; end: 10084ec87; -[SCFeatureLensExplorerSwipeUpImpl setGestureRecognizersDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ec74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742630,param_3);
  return;
}



/* Entry: 10084ec88; end: 10084ec9b; -[SCFeatureLensExplorerSwipeUpImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ec88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742620,param_3);
  return;
}



/* Entry: 10084ec9c; end: 10084eceb; -[SCFeatureLensExplorerSwipeUpImpl addBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Possible PIC construction at 0x00010084ecd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010084ecdc) */

void FUN_10084ec9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4e324(param_1);
  func_0x000107c61180();
  func_0x000107c50474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10084ecec; end: 10084ed73; -[SCFeatureLensExplorerSwipeUpImpl panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ecec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112742618;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c610f4();
    func_0x000107c48c2c();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    func_0x000107c54514(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10084ed74; end: 10084ed93;  */

void FUN_10084ed74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010084ed80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}



/* Entry: 10084ed94; end: 10084ef13;  */

long * FUN_10084ed94(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((char)param_1[3] == '\x01') {
    if (param_1 != param_2) {
      plVar4 = (long *)*param_2;
      if (param_1[2] != 0) {
        lStack_48 = *param_1;
        plVar2 = param_1 + 1;
        *param_1 = (long)plVar2;
        *(undefined8 *)(*plVar2 + 0x10) = 0;
        *plVar2 = 0;
        param_1[2] = 0;
        lVar3 = *(long *)(lStack_48 + 8);
        if (lVar3 != 0) {
          lStack_48 = lVar3;
        }
        plStack_50 = param_1;
        func_0x00010884a308(&plStack_50);
        while (lVar3 = lStack_40, lStack_40 != 0 && plVar4 != param_2 + 1) {
          lVar1 = plVar4[5];
          *(long *)(lStack_40 + 0x20) = plVar4[4];
          *(long *)(lStack_40 + 0x28) = lVar1;
          lVar1 = plVar4[7];
          *(long *)(lStack_40 + 0x30) = plVar4[6];
          *(long *)(lStack_40 + 0x38) = lVar1;
          plVar2 = param_1;
          FUN_1008338ac(param_1,&uStack_38);
          FUN_10083391c(param_1,uStack_38,plVar2,lVar3);
          func_0x00010884a308(&plStack_50);
          FUN_10002c7d4();
        }
        func_0x00010884a368(&plStack_50);
      }
      while (plVar4 != param_2 + 1) {
        FUN_10084ef14(param_1,param_1 + 1,plVar4 + 4);
        FUN_10002c7d4();
      }
    }
  }
  else {
    plVar2 = param_1 + 1;
    *plVar2 = 0;
    param_1[2] = 0;
    *param_1 = (long)plVar2;
    plVar4 = (long *)*param_2;
    while (plVar4 != param_2 + 1) {
      FUN_10084ef14(param_1,plVar2,plVar4 + 4);
      FUN_10002c7d4();
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 10084ef14; end: 10084f08b;  */

void FUN_10084ef14(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1 + 1;
  lVar1 = 0x40;
  func_0x000107c60e20();
  uVar3 = *param_3;
  uVar7 = param_3[1];
  *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  *(undefined8 *)(lVar1 + 0x28) = uVar7;
  *(undefined8 *)(lVar1 + 0x38) = param_3[3];
  puVar6 = (undefined8 *)(lVar1 + 0x20);
  *puVar6 = uVar3;
  uStack_48 = 1;
  lStack_58 = lVar1;
  plStack_50 = plVar2;
  if (param_2 != plVar2) {
    plVar4 = param_1 + 2;
    func_0x000100833a08(plVar4,param_2 + 4,puVar6);
    if (((ulong)plVar4 & 1) != 0) {
      plVar4 = (long *)*plVar2;
      param_2 = plVar2;
      while (plStack_60 = param_2, plVar4 != (long *)0x0) {
        while( true ) {
          plVar5 = plVar4;
          plVar2 = param_1 + 2;
          func_0x000100833a08(plVar2,plVar5 + 4,puVar6);
          if ((int)plVar2 == 0) break;
          plVar4 = (long *)plVar5[1];
          if ((long *)plVar5[1] == (long *)0x0) {
            param_2 = plVar5 + 1;
            plStack_60 = plVar5;
            goto LAB_10084f040;
          }
        }
        param_2 = plVar5;
        plVar4 = (long *)*plVar5;
      }
      goto LAB_10084f040;
    }
  }
  plVar2 = param_2;
  if (param_2 != (long *)*param_1) {
    func_0x00010002c810();
    plVar4 = param_1 + 2;
    func_0x000100833a08(plVar4,puVar6,plVar2 + 4);
    if (((ulong)plVar4 & 1) != 0) {
      param_2 = param_1;
      FUN_1008338ac(param_1,&plStack_60,puVar6);
      goto LAB_10084f040;
    }
  }
  plStack_60 = param_2;
  if (*param_2 != 0) {
    param_2 = plVar2 + 1;
    plStack_60 = plVar2;
  }
LAB_10084f040:
  FUN_10083391c(param_1,plStack_60,param_2,lStack_58);
  lStack_58 = 0;
  func_0x00010083394c(&lStack_58);
  return;
}



/* Entry: 10084f08c; end: 10084f097;  */

void FUN_10084f08c(void)

{
  return;
}



/* Entry: 10084f098; end: 10084f15b;  */

void FUN_10084f098(int param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_160 [256];
  undefined1 auStack_60 [48];
  
  FUN_10084f08c();
  FUN_10084f15c(&UNK_110a98830);
  func_0x00010084f174();
  if (param_1 == 0) {
    func_0x000107c34ab8();
    func_0x000107c34a98();
    func_0x000107c34ab4();
    func_0x000107c34ab0();
    func_0x000107c34b10();
    func_0x000107c34a9c();
    func_0x000107c34b14();
    func_0x000107c34b18();
    func_0x000107c34b1c();
  }
  else {
    FUN_10084f9c4();
    if (extraout_x8 != 0) {
      do {
        func_0x000100601cf4();
      } while (extraout_w10 != 0);
    }
    func_0x00010084f9d0();
    func_0x00010084f9dc();
    FUN_10061dcd0(auStack_160);
  }
  FUN_10084fe8c(auStack_60);
  return;
}



/* Entry: 10084f15c; end: 10084f17f;  */

void FUN_10084f15c(long param_1)

{
  long unaff_x29;
  
  *(long *)(unaff_x29 + -0x50) = param_1 + 0x10;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = 0;
  return;
}



/* Entry: 10084f180; end: 10084f1bb;  */

bool FUN_10084f180(void)

{
  int aiStack_58 [14];
  
  FUN_10084f1cc(aiStack_58);
  FUN_100601c8c(aiStack_58);
  return aiStack_58[0] == 0;
}



/* Entry: 10084f1bc; end: 10084f1cb; -[SCCameraOverlayView longPressOnCameraTimerGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10084f1bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762858);
}



/* Entry: 10084f1cc; end: 10084f35f;  */

void FUN_10084f1cc(undefined4 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  undefined1 auStack_138 [24];
  int aiStack_120 [14];
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [56];
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    FUN_10002d4d8(auStack_e8,"No payload");
    func_0x000107c3501c(param_1);
    func_0x000107c60ca0(auStack_e8);
  }
  else {
    lVar1 = param_2;
    FUN_1006b0de0();
    (**(code **)(extraout_x8 + 0x1b0))();
    FUN_100601a6c(auStack_78,lVar1);
    FUN_10084f36c(auStack_e8,param_2);
    FUN_100601a6c(aiStack_120,auStack_b0);
    FUN_100601c8c(aiStack_120);
    if (aiStack_120[0] == 0) {
      uVar2 = param_3;
      FUN_10084f540(param_3,auStack_e8);
      if ((uVar2 & 1) == 0) {
        func_0x000107c30334(auStack_138,param_3);
        func_0x000107c3501c(aiStack_120);
        FUN_10083339c(auStack_78,aiStack_120);
        FUN_100601c8c(aiStack_120);
        func_0x000107c60ca0(auStack_138);
      }
    }
    else {
      func_0x000100601a44();
    }
    FUN_10084f950(auStack_e8);
    if (aiStack_120[0] == 0) {
      func_0x000100608b60(param_2);
      *param_1 = auStack_78[0];
      *(undefined8 *)(param_1 + 4) = uStack_68;
      *(undefined8 *)(param_1 + 2) = uStack_70;
      *(undefined8 *)(param_1 + 6) = uStack_60;
      uStack_70 = 0;
      uStack_68 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_50;
      *(undefined8 *)(param_1 + 8) = uStack_58;
      *(undefined8 *)(param_1 + 0xc) = uStack_48;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    FUN_100601c8c(auStack_78);
  }
  return;
}


