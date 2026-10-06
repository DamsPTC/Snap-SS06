/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056bfa1c; end: 1056bfaa3; -[SCVideoTargetTrajectoryManager imageProcessor:outputTransformAtTime:] */

void FUN_1056bfa1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_40 = param_4[2];
  func_0x00010c27a4a0(uVar1,param_2,&uStack_50);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c06c000(uVar3);
  func_0x00010c2796e0(lVar2,param_2,param_1,uVar1,uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056bfaa4; end: 1056bfaab; -[SCVideoTargetTrajectoryManager targetTrajectory] */

undefined8 FUN_1056bfaa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056bfaac; end: 1056bfab3; -[SCVideoTargetTrajectoryManager config] */

undefined8 FUN_1056bfaac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056bfab4; end: 1056bfacb; -[SCVideoTargetTrajectoryManager delegate] */

void FUN_1056bfab4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056bfacc; end: 1056bfad7; -[SCVideoTargetTrajectoryManager setDelegate:] */

void FUN_1056bfacc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1056bfad8; end: 1056bfb27; -[SCVideoTargetTrajectoryManager .cxx_destruct] */

void FUN_1056bfad8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056bfb28; end: 1056bfb93; -[SCVideoTargetTrajectoryManagerFactory newTouchPointManagerWithConfig:imageProcessor:] */

undefined *
FUN_1056bfb28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcfc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfef800();
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056bfb94; end: 1056bfbff; -[SCVideoTargetTrajectoryManagerFactory newManagerWithTrajectory:imageProcessor:] */

undefined *
FUN_1056bfb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcfc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0550c0();
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056bfc00; end: 1056bfd33; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor initWithVideoTracker:initialTransform:size:frameTime:isTrackingTouchPoint:centerPoint:] */

undefined8 *
FUN_1056bfc00(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,double *param_9,
             undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  dVar5 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e9a40;
  puVar1 = &uStack_70;
  uStack_70 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    dStack_88 = param_9[1];
    dVar3 = *param_9;
    dStack_80 = param_9[2];
    dStack_90 = dVar3;
    _CMTimeGetSeconds(&dStack_90);
    puVar1[5] = dVar3;
    *(undefined1 *)(puVar1 + 6) = 1;
    *(undefined1 *)((long)puVar1 + 0x31) = param_10;
    func_0x00010c27ada0(param_8);
    dVar5 = dVar5 - param_4;
    dVar4 = dVar5;
    _atan2(dVar5,param_3 - dVar3);
    puVar1[7] = dVar4;
    puVar1[8] = SQRT(dVar5 * dVar5 + (dVar3 - param_3) * (dVar3 - param_3));
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 1056bfd34; end: 1056bfd8b; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor dealloc] */

void FUN_1056bfd34(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010c12e900(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x50));
  }
  puStack_28 = PTR_PTR_1126e9a40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1056bfd8c; end: 1056bfe13; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor _startTrackingWithTransform:] */

void FUN_1056bfd8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + 8);
  func_0x00010c27ada0(param_5);
  func_0x00010befbd80(param_1,param_2,*(undefined8 *)(param_3 + 0x18),
                      *(undefined8 *)(param_3 + 0x20),uVar1,param_4,param_3,
                      *(undefined1 *)(param_3 + 0x30),PTR___dispatch_main_q_11034be20);
  _objc_release(param_5);
  *(undefined8 *)(param_3 + 0x50) = uVar1;
  *(undefined1 *)(param_3 + 0x48) = 1;
  return;
}



/* Entry: 1056bfe14; end: 1056bfe3f; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor _stopTracking] */

void FUN_1056bfe14(long param_1,undefined8 param_2)

{
  func_0x00010c12e900(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x50));
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1056bfe40; end: 1056c000b; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor videoTracker:didProduceTransform:atTime:] */

void FUN_1056bfe40(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_6);
  if (*(char *)(param_3 + 0x48) == '\x01') {
    lVar1 = param_3 + 0x58;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfdd2e0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010c27ada0(param_6);
      dVar6 = param_1;
      if (*(char *)(param_3 + 0x31) == '\x01') {
        dVar6 = *(double *)(param_3 + 0x38);
        dVar7 = param_1;
        func_0x00010c141a80(param_6);
        dVar6 = dVar6 - dVar7;
        func_0x00010c14e120(param_6);
        dVar5 = *(double *)(param_3 + 0x40);
        dVar7 = dVar7 * dVar5;
        ___sincos_stret(dVar6);
        dVar6 = dVar6 * dVar7;
        param_1 = param_1 + dVar5 * dVar7;
        param_2 = param_2 - dVar6;
      }
      puVar3 = PTR_PTR_1126b2700;
      _objc_alloc(PTR_PTR_1126b2700);
      func_0x00010c14e120(param_6);
      dVar7 = dVar6;
      func_0x00010c14e120(*(undefined8 *)(param_3 + 0x10));
      dVar6 = dVar6 * dVar7;
      func_0x00010c141a80(param_6);
      dVar5 = dVar7;
      func_0x00010c141a80(*(undefined8 *)(param_3 + 0x10));
      func_0x00010c055500(param_1,param_2,dVar6,dVar7 + dVar5,puVar3);
      lVar1 = param_3 + 0x60;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bfe87a0();
      _objc_release(lVar1);
      lVar1 = param_3 + 0x58;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c081700();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        func_0x00010bec3a80(param_3);
        uVar4 = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        _objc_release(uVar4);
      }
      param_3 = param_3 + 0x60;
      _objc_loadWeakRetained(param_3);
      func_0x00010bfe87c0();
      _objc_release(param_3);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  return;
}



/* Entry: 1056c000c; end: 1056c001f; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor videoTracker:didFailAtTime:] */

void FUN_1056c000c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bec3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopTracking_11258e848);
    return;
  }
  return;
}



/* Entry: 1056c0020; end: 1056c010b; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor _transformCenterToTrackingPoint:] */

void FUN_1056c0020(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = *(double *)(param_2 + 0x38);
  _objc_retain(param_4);
  func_0x00010c141a80(param_4);
  dVar3 = dVar3 - param_1;
  func_0x00010c141a80(*(undefined8 *)(param_2 + 0x10));
  dVar3 = dVar3 + param_1;
  dVar4 = dVar3 + -3.141592653589793;
  func_0x00010c14e120(param_4);
  dVar2 = *(double *)(param_2 + 0x40);
  dVar6 = dVar3 * dVar2;
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x10));
  dVar6 = dVar6 / dVar3;
  ___sincos_stret(dVar4);
  dVar5 = dVar2 * dVar6;
  dVar6 = dVar4 * dVar6;
  func_0x00010c27ada0(param_4);
  dVar5 = dVar4 + dVar5;
  func_0x00010c27ada0(param_4);
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c14e120(param_4);
  dVar3 = dVar4;
  func_0x00010c141a80(param_4);
  _objc_release(param_4);
  func_0x00010c055500(dVar5,dVar2 - dVar6,dVar4,dVar3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c010c; end: 1056c0467; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor videoPlaybackSession:willRenderFrame:atTime:] */

void FUN_1056c010c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,double *param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x24;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) goto LAB_1056c0434;
  if (param_3 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    func_0x00010bf5f0c0(&uStack_a8,param_3);
  }
  dStack_b8 = param_5[1];
  dStack_c0 = *param_5;
  dStack_b0 = param_5[2];
  _CMTimeSubtract(&dStack_90,&dStack_c0,&uStack_a8);
  param_5[1] = dStack_88;
  *param_5 = dStack_90;
  param_5[2] = dStack_80;
  dStack_88 = param_5[1];
  dVar9 = *param_5;
  dStack_90 = dVar9;
  _CMTimeGetSeconds(&dStack_90);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar3 = param_1 + 0x58;
    dVar10 = dVar9;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0cdda0();
    if ((dVar10 < dVar9) || (uVar4 = param_3, func_0x00010c07cb00(), (int)uVar4 == 0)) {
      lVar2 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0c30a0();
      if (dVar10 <= dVar9) {
        uVar4 = param_3;
        func_0x00010c07cb00();
        _objc_release(lVar2);
        _objc_release(lVar3);
        if ((int)uVar4 == 0) goto LAB_1056c0434;
      }
      else {
        _objc_release(lVar2);
        _objc_release(lVar3);
      }
      func_0x00010bec3a80(param_1);
      goto LAB_1056c0434;
    }
    goto LAB_1056c042c;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar4 = param_3;
    func_0x00010c07cb00();
    if ((((int)uVar4 != 0) && (dVar9 <= *(double *)(param_1 + 0x28))) ||
       ((uVar4 = param_3, func_0x00010c07cb00(), (uVar4 & 1) == 0 &&
        (*(double *)(param_1 + 0x28) <= dVar9)))) {
      func_0x00010bec1d80(param_1);
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    goto LAB_1056c0434;
  }
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar2);
  dStack_88 = param_5[1];
  dVar10 = *param_5;
  dStack_80 = param_5[2];
  lVar3 = lVar2;
  dStack_90 = dVar10;
  func_0x00010bfe87e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = param_3;
  func_0x00010c07cb00();
  if ((int)uVar4 == 0) {
LAB_1056c02cc:
    uVar6 = param_3;
    func_0x00010c07cb00();
    bVar1 = false;
    bVar8 = false;
    if ((uVar6 & 1) == 0) {
LAB_1056c02e0:
      lVar5 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c0c30a0();
      if (dVar10 <= dVar9) {
        lVar7 = param_1 + 0x58;
        _objc_loadWeakRetained(lVar7);
        func_0x00010c0c30a0();
        bVar8 = dVar9 <= dVar10 + 0.5;
        _objc_release(lVar7);
        _objc_release(lVar5);
      }
      else {
        _objc_release(lVar5);
        bVar8 = false;
      }
      if (!bVar1) goto LAB_1056c030c;
      _objc_release(unaff_x24);
      if ((uVar4 & 1) == 0) goto LAB_1056c03cc;
    }
    else {
LAB_1056c030c:
      if ((int)uVar4 == 0) {
LAB_1056c03cc:
        if (bVar8) goto LAB_1056c03e4;
        goto LAB_1056c042c;
      }
    }
    _objc_release(lVar2);
    if (bVar8) {
LAB_1056c03e4:
      if (*(char *)(param_1 + 0x31) == '\x01') {
        lVar2 = param_1;
        func_0x00010becebe0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bec1d80(param_1);
        goto LAB_1056c0414;
      }
      func_0x00010bec1d80(param_1);
    }
  }
  else {
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0cdda0();
    if (dVar10 < dVar9) goto LAB_1056c02cc;
    unaff_x24 = param_1 + 0x58;
    _objc_loadWeakRetained(unaff_x24);
    func_0x00010c0cdda0();
    dVar10 = dVar10 + -0.5;
    if (dVar10 <= dVar9) {
      _objc_release(unaff_x24);
      _objc_release(lVar2);
      goto LAB_1056c03e4;
    }
    uVar6 = param_3;
    func_0x00010c07cb00();
    if ((int)uVar6 == 0) {
      bVar1 = true;
      goto LAB_1056c02e0;
    }
    _objc_release(unaff_x24);
LAB_1056c0414:
    _objc_release(lVar2);
  }
LAB_1056c042c:
  _objc_release(lVar3);
LAB_1056c0434:
  _objc_release(param_3);
  return;
}



/* Entry: 1056c0468; end: 1056c0537; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor videoPlaybackSession:didRenderFrameAtTime:] */

void FUN_1056c0468(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    if (param_3 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010bf5f0c0(&uStack_68,param_3);
    }
    uStack_78 = param_4[1];
    uStack_80 = *param_4;
    uStack_70 = param_4[2];
    _CMTimeSubtract(&uStack_50,&uStack_80,&uStack_68);
    param_4[1] = uStack_48;
    *param_4 = uStack_50;
    param_4[2] = uStack_40;
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    func_0x00010bfe87e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056c0538; end: 1056c054f; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor dataSource] */

void FUN_1056c0538(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c0550; end: 1056c055b; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor setDataSource:] */

void FUN_1056c0550(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1056c055c; end: 1056c0573; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor delegate] */

void FUN_1056c055c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c0574; end: 1056c057f; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor setDelegate:] */

void FUN_1056c0574(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1056c0580; end: 1056c05bf; -[SCVideoTargetTrajectoryObjectTrackingImageProcessor .cxx_destruct] */

void FUN_1056c0580(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056c05c0; end: 1056c0633; -[SCVideoTargetTrajectoryTimedImageProcessor initWithVideoTracker:] */

undefined1 * FUN_1056c05c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9a48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c0634; end: 1056c06f3; -[SCVideoTargetTrajectoryTimedImageProcessor videoPlaybackSession:willRenderFrame:atTime:] */

void FUN_1056c0634(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    if (param_3 == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010bf5f0c0(&uStack_60,param_3);
    }
    uStack_78 = param_5[1];
    uStack_80 = *param_5;
    uStack_70 = param_5[2];
    _CMTimeSubtract(&uStack_48,&uStack_80,&uStack_60);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    func_0x00010bfe87e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056c06f4; end: 1056c07b3; -[SCVideoTargetTrajectoryTimedImageProcessor videoPlaybackSession:didRenderFrameAtTime:] */

void FUN_1056c06f4(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    if (param_3 == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010bf5f0c0(&uStack_60,param_3);
    }
    uStack_78 = param_4[1];
    uStack_80 = *param_4;
    uStack_70 = param_4[2];
    _CMTimeSubtract(&uStack_48,&uStack_80,&uStack_60);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    func_0x00010bfe87e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056c07b4; end: 1056c07cb; -[SCVideoTargetTrajectoryTimedImageProcessor dataSource] */

void FUN_1056c07b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c07cc; end: 1056c07d7; -[SCVideoTargetTrajectoryTimedImageProcessor setDataSource:] */

void FUN_1056c07cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1056c07d8; end: 1056c07ef; -[SCVideoTargetTrajectoryTimedImageProcessor delegate] */

void FUN_1056c07d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c07f0; end: 1056c07fb; -[SCVideoTargetTrajectoryTimedImageProcessor setDelegate:] */

void FUN_1056c07f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1056c07fc; end: 1056c082f; -[SCVideoTargetTrajectoryTimedImageProcessor .cxx_destruct] */

void FUN_1056c07fc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056c0830; end: 1056c088b; -[SCVideoTrackerFactory newVideoTrackerWithVideoSize:orientation:isLagunaMedia:isMultiSnap:] */

void FUN_1056c0830(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126bcfd0);
                    /* WARNING: Could not recover jumptable at 0x00010c061190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2);
  return;
}



/* Entry: 1056c088c; end: 1056c091b; -[SCVideoTrackingTargetTrajectoryImageProcessingFactory newObjectTrackingImageProcessorWithVideoTracker:] */

undefined * FUN_1056c088c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcfd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c061240(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                      *(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056c091c; end: 1056c09db; -[SCVideoTrackingTargetTrajectoryImageProcessingFactory newObjectTrackingImageProcessorWithVideoTracker:initialTransform:size:frameTime:centerPoint:] */

undefined *
FUN_1056c091c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcfd8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010c061240(param_1,param_2,param_3,param_4);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 1056c09dc; end: 1056c0a27; -[SCVideoTrackingTargetTrajectoryImageProcessingFactory newTimedImageProcessorWithVideoTracker:] */

undefined * FUN_1056c09dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcfc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c061220();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056c0a28; end: 1056c0adf; -[SCVideoTargetTrajectory initWithConfig:] */

undefined1 *
FUN_1056c0a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9a50;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    func_0x00010c299d80(param_4);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = 0x10000000000000;
    *(undefined8 *)((long)puVar1 + 0x30) = 0x7fefffffffffffff;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c0ae0; end: 1056c0d1f; -[SCVideoTargetTrajectory initWithVideoTrackedImageTrajectory:] */

undefined8 * FUN_1056c0ae0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  double dStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  double dStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_210 [24];
  double dStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_4;
  _objc_retain(param_4);
  puStack_f0 = PTR_PTR_1126e9a50;
  puVar1 = &uStack_f8;
  uStack_f8 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar9 = param_4;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = puVar9;
    _objc_release(uVar5);
    puVar9 = param_4;
    func_0x00010bf45e20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299d80();
    puVar1[4] = param_1;
    _objc_release(puVar9);
    param_1 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    unaff_x21 = param_4;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_140;
    puVar2 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar8 = *plStack_130;
      do {
        puVar9 = (undefined8 *)0x0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(unaff_x21);
          }
          lVar7 = *(long *)(lStack_138 + (long)puVar9 * 8);
          lVar3 = lVar7;
          func_0x00010c27a460();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 == 0) {
            uStack_158 = 0;
            uStack_150 = 0;
            uStack_148 = 0;
          }
          else {
            func_0x00010c26f000(&uStack_158,lVar7);
          }
          func_0x00010befc620(puVar1);
          _objc_release(lVar3);
          puVar9 = (undefined8 *)((long)puVar9 + 1);
        } while (puVar2 != puVar9);
        puVar9 = &uStack_140;
        puVar2 = unaff_x21;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(unaff_x21);
  }
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(param_4);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar9);
  puVar4 = puVar9;
  func_0x00010bf207c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 5) = 1;
    puVar1 = puVar9;
    func_0x00010bf207c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined8 *)0x0) {
      dStack_1e0 = 0.0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
    }
    else {
      func_0x00010bf8b160(&dStack_1e0,puVar1);
    }
    _CMTimeGetSeconds(&dStack_1e0);
    _objc_release(puVar1);
    puVar1 = (undefined8 *)PTR_PTR_1126bcfb8;
    _objc_alloc(PTR_PTR_1126bcfb8);
    dVar11 = (double)(float)param_1;
    puVar4 = puVar1;
    func_0x00010b73c870(dVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000dc0(puVar1);
    _objc_release(puVar4);
    func_0x00010c1eac60(puVar1);
    uStack_1d8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    dStack_1e0 = *(double *)PTR__kCMTimeInvalid_110348648;
    uStack_1d0 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    if (0.0 < (float)param_1) {
      uVar6 = 0;
      do {
        _CMTimeMake(auStack_210,uVar6,0x1e);
        if (puVar9 == (undefined8 *)0x0) {
          dStack_1f8 = 0.0;
          uStack_1f0 = 0;
          uStack_1e8 = 0;
        }
        else {
          func_0x00010c270b20(&dStack_1f8,puVar9);
        }
        uStack_248 = uStack_1f0;
        dStack_250 = dStack_1f8;
        uStack_240 = uStack_1e8;
        uStack_268 = uStack_1d8;
        dStack_270 = dStack_1e0;
        uStack_260 = uStack_1d0;
        dVar10 = dStack_1e0;
        _CMTimeSubtract(&dStack_230,&dStack_250,&dStack_270);
        _CMTimeGetSeconds(&dStack_230);
        if (0.01 <= ABS(dVar10)) {
          uStack_228 = uStack_1f0;
          dStack_230 = dStack_1f8;
          uStack_220 = uStack_1e8;
          puVar4 = puVar2;
          func_0x00010c27a4a0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _CMTimeMake(&dStack_230,uVar6,0x1e);
          func_0x00010befc620(puVar1);
          _objc_release(puVar4);
          uStack_1d8 = uStack_1f0;
          dStack_1e0 = dStack_1f8;
          uStack_1d0 = uStack_1e8;
        }
        uVar6 = uVar6 + 1;
      } while ((double)(uVar6 & 0xffffffff) / 30.0 < dVar11);
    }
  }
  _objc_release(puVar9);
  return puVar1;
}



/* Entry: 1056c0d20; end: 1056c0f9b; -[SCVideoTargetTrajectory newVideoTargetTrajectoryForBounceState:] */

undefined * FUN_1056c0d20(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf207c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    *(undefined1 *)(param_2 + 0x28) = 1;
    lVar1 = param_4;
    func_0x00010bf207c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      dStack_80 = 0.0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf8b160(&dStack_80,lVar1);
    }
    _CMTimeGetSeconds(&dStack_80);
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126bcfb8;
    _objc_alloc(PTR_PTR_1126bcfb8);
    dVar6 = (double)(float)param_1;
    puVar3 = puVar2;
    func_0x00010b73c870(dVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000dc0(puVar2);
    _objc_release(puVar3);
    func_0x00010c1eac60(puVar2);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    dStack_80 = *(double *)PTR__kCMTimeInvalid_110348648;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    if (0.0 < (float)param_1) {
      uVar4 = 0;
      do {
        _CMTimeMake(auStack_b0,uVar4,0x1e);
        if (param_4 == 0) {
          dStack_98 = 0.0;
          uStack_90 = 0;
          uStack_88 = 0;
        }
        else {
          func_0x00010c270b20(&dStack_98,param_4);
        }
        uStack_e8 = uStack_90;
        dStack_f0 = dStack_98;
        uStack_e0 = uStack_88;
        uStack_108 = uStack_78;
        dStack_110 = dStack_80;
        uStack_100 = uStack_70;
        dVar5 = dStack_80;
        _CMTimeSubtract(&dStack_d0,&dStack_f0,&dStack_110);
        _CMTimeGetSeconds(&dStack_d0);
        if (0.01 <= ABS(dVar5)) {
          uStack_c8 = uStack_90;
          dStack_d0 = dStack_98;
          uStack_c0 = uStack_88;
          lVar1 = param_2;
          func_0x00010c27a4a0(param_2);
          _objc_retainAutoreleasedReturnValue();
          _CMTimeMake(&dStack_d0,uVar4,0x1e);
          func_0x00010befc620(puVar2);
          _objc_release(lVar1);
          uStack_78 = uStack_90;
          dStack_80 = dStack_98;
          uStack_70 = uStack_88;
        }
        uVar4 = uVar4 + 1;
      } while ((double)(uVar4 & 0xffffffff) / 30.0 < dVar6);
    }
  }
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 1056c0f9c; end: 1056c10bb; -[SCVideoTargetTrajectory toTrajectoryState] */

void FUN_1056c0f9c(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_58 [24];
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = *(long **)(param_1 + 8);
  puVar4 = PTR_PTR_1126bb2a8;
  while (PTR_PTR_1126bb2a8 = puVar4, plVar5 != (long *)(param_1 + 0x10)) {
    _objc_alloc(puVar4);
    _CMTimeMakeWithSeconds(auStack_58,plVar5[4],600);
    func_0x00010c052280(puVar4,param_2,auStack_58,plVar5[5]);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    puVar4 = PTR_PTR_1126bb2a8;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = plVar6 != (long *)*plVar5;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056c10bc; end: 1056c131b; -[SCVideoTargetTrajectory addTransform:atTime:] */

void FUN_1056c10bc(long param_1,undefined8 param_2,long param_3,double *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  _objc_retain(param_3);
  dStack_68 = param_4[1];
  dVar10 = *param_4;
  dStack_60 = param_4[2];
  dStack_70 = dVar10;
  _CMTimeGetSeconds(&dStack_70);
  plVar8 = (long *)(param_1 + 0x10);
  plVar2 = (long *)*plVar8;
  dVar11 = *(double *)(param_1 + 0x30);
  if (dVar10 <= *(double *)(param_1 + 0x30)) {
    dVar11 = dVar10;
  }
  dVar12 = *(double *)(param_1 + 0x38);
  if (*(double *)(param_1 + 0x38) <= dVar10) {
    dVar12 = dVar10;
  }
  *(double *)(param_1 + 0x30) = dVar11;
  *(double *)(param_1 + 0x38) = dVar12;
  plVar9 = plVar8;
  for (plVar4 = plVar2; plVar4 != (long *)0x0; plVar4 = *(long **)((long)plVar4 + lVar3)) {
    lVar3 = 8;
    if (dVar10 <= (double)plVar4[4]) {
      lVar3 = 0;
      plVar9 = plVar4;
    }
  }
  plVar4 = *(long **)(param_1 + 8);
  if (plVar9 != plVar4) {
    plVar5 = (long *)*plVar9;
    plVar6 = plVar9;
    plVar7 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar1 = plVar6 == (long *)*plVar5;
        plVar6 = plVar5;
      } while (bVar1);
      plVar6 = plVar9;
      if ((double)plVar5[4] < dVar10) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = plVar6 == (long *)*plVar7;
          plVar6 = plVar7;
        } while (bVar1);
        goto LAB_1056c11e4;
      }
      do {
        plVar7 = (long *)plVar6[2];
        bVar1 = plVar6 == (long *)*plVar7;
        plVar6 = plVar7;
      } while (bVar1);
LAB_1056c1208:
      dVar11 = (double)plVar7[4] - dVar10;
    }
    else {
      do {
        plVar6 = plVar7;
        plVar7 = (long *)plVar6[1];
      } while (plVar7 != (long *)0x0);
      if (dVar10 <= (double)plVar6[4]) {
        do {
          plVar7 = plVar5;
          plVar5 = (long *)plVar7[1];
        } while ((long *)plVar7[1] != (long *)0x0);
        goto LAB_1056c1208;
      }
      do {
        plVar7 = plVar5;
        plVar5 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
LAB_1056c11e4:
      dVar11 = -((double)plVar7[4] - dVar10);
    }
    if (dVar11 < 0.01) goto LAB_1056c12e0;
  }
  if (plVar9 != plVar8) {
    dVar12 = (double)plVar9[4] - dVar10;
    dVar11 = -dVar12;
    if (dVar10 <= (double)plVar9[4]) {
      dVar11 = dVar12;
    }
    if (dVar11 < 0.01) goto LAB_1056c12e0;
  }
  plVar9 = plVar8;
  if (plVar2 != (long *)0x0) {
    do {
      while (plVar5 = plVar2, plVar9 = plVar5, dVar10 < (double)plVar5[4]) {
        plVar2 = (long *)*plVar5;
        plVar8 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_1056c1280;
      }
      if (dVar10 <= (double)plVar5[4]) goto LAB_1056c12cc;
      plVar2 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar8 = plVar5 + 1;
  }
LAB_1056c1280:
  plVar5 = (long *)0x30;
  __Znwm();
  plVar5[4] = (long)dVar10;
  plVar5[5] = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)plVar9;
  *plVar8 = (long)plVar5;
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    *(long *)(param_1 + 8) = lVar3;
  }
  func_0x00010002c5b0(*(undefined8 *)(param_1 + 0x10),plVar5);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_1056c12cc:
  _objc_retain(param_3);
  lVar3 = plVar5[5];
  plVar5[5] = param_3;
  _objc_release(lVar3);
LAB_1056c12e0:
  _objc_release(param_3);
  return;
}



/* Entry: 1056c131c; end: 1056c1633; -[SCVideoTargetTrajectory transformAtTime:] */

void FUN_1056c131c(undefined8 param_1,double param_2,long param_3,undefined8 param_4,double *param_5
                  )

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  dStack_88 = param_5[1];
  dVar17 = *param_5;
  dStack_80 = param_5[2];
  dStack_90 = dVar17;
  _CMTimeGetSeconds(&dStack_90);
  if (*(char *)(param_3 + 0x29) == '\x01') {
    param_2 = *(double *)(param_3 + 0x20);
    _fmod();
  }
  plVar3 = (long *)(param_3 + 0x10);
  plVar9 = plVar3;
  for (plVar4 = (long *)*plVar3; plVar4 != (long *)0x0; plVar4 = *(long **)((long)plVar4 + lVar6)) {
    lVar6 = 8;
    if (dVar17 <= (double)plVar4[4]) {
      lVar6 = 0;
      plVar9 = plVar4;
    }
  }
  if (plVar9 == *(long **)(param_3 + 8)) {
    if (plVar9 == plVar3) {
      puVar8 = (undefined *)0x0;
      goto LAB_1056c145c;
    }
LAB_1056c141c:
    puVar8 = (undefined *)plVar9[5];
  }
  else {
    if (plVar9 != plVar3) {
      dVar10 = (double)plVar9[4];
      if (dVar10 != dVar17) {
        uVar2 = *(ulong *)(param_3 + 0x40);
        if (uVar2 == 0) {
          plVar4 = (long *)*plVar9;
        }
        else {
          func_0x00010c06c000();
          plVar4 = (long *)*plVar9;
          if ((uVar2 & 1) == 0) {
            if (plVar4 == (long *)0x0) {
              do {
                plVar3 = (long *)plVar9[2];
                bVar1 = plVar9 == (long *)*plVar3;
                plVar9 = plVar3;
              } while (bVar1);
            }
            else {
              do {
                plVar3 = plVar4;
                plVar4 = (long *)plVar3[1];
              } while ((long *)plVar3[1] != (long *)0x0);
            }
            puVar8 = (undefined *)plVar3[5];
            goto LAB_1056c1454;
          }
        }
        plVar3 = plVar9;
        if (plVar4 == (long *)0x0) {
          do {
            plVar5 = (long *)plVar3[2];
            bVar1 = plVar3 == (long *)*plVar5;
            plVar3 = plVar5;
          } while (bVar1);
        }
        else {
          do {
            plVar5 = plVar4;
            plVar4 = (long *)plVar5[1];
          } while ((long *)plVar5[1] != (long *)0x0);
        }
        lVar6 = plVar5[5];
        _objc_retain(lVar6);
        lVar7 = plVar9[5];
        _objc_retain(lVar7);
        plVar4 = (long *)*plVar9;
        plVar3 = plVar9;
        plVar5 = plVar4;
        if (plVar4 == (long *)0x0) {
          do {
            plVar4 = (long *)plVar3[2];
            bVar1 = plVar3 == (long *)*plVar4;
            plVar3 = plVar4;
          } while (bVar1);
          dVar20 = (double)plVar4[4];
          dVar18 = (double)plVar9[4];
          do {
            plVar3 = (long *)plVar9[2];
            bVar1 = plVar9 == (long *)*plVar3;
            plVar9 = plVar3;
          } while (bVar1);
        }
        else {
          do {
            plVar3 = plVar5;
            plVar5 = (long *)plVar3[1];
          } while (plVar5 != (long *)0x0);
          dVar20 = (double)plVar3[4];
          dVar18 = (double)plVar9[4];
          do {
            plVar3 = plVar4;
            plVar4 = (long *)plVar3[1];
          } while ((long *)plVar3[1] != (long *)0x0);
        }
        dVar19 = (double)plVar3[4];
        puVar8 = PTR_PTR_1126b2700;
        _objc_alloc(PTR_PTR_1126b2700);
        func_0x00010c27ada0(lVar6);
        dVar11 = dVar10;
        func_0x00010c27ada0(lVar7);
        dVar12 = dVar11;
        func_0x00010c27ada0(lVar6);
        dVar16 = param_2;
        func_0x00010c27ada0(lVar7);
        func_0x00010c14e120(lVar6);
        dVar13 = dVar12;
        func_0x00010c14e120(lVar7);
        dVar14 = dVar13;
        func_0x00010c141a80(lVar6);
        dVar15 = dVar14;
        func_0x00010c141a80(lVar7);
        dVar17 = (dVar17 - dVar20) / (dVar18 - dVar19);
        dVar18 = 1.0 - dVar17;
        func_0x00010c055500(dVar17 * dVar11 + dVar18 * dVar10,dVar17 * dVar16 + dVar18 * param_2,
                            dVar17 * dVar13 + dVar18 * dVar12,dVar17 * dVar15 + dVar18 * dVar14,
                            puVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        goto LAB_1056c145c;
      }
      goto LAB_1056c141c;
    }
    plVar4 = (long *)*plVar9;
    if ((long *)*plVar9 == (long *)0x0) {
      do {
        plVar3 = (long *)plVar9[2];
        bVar1 = plVar9 == (long *)*plVar3;
        plVar9 = plVar3;
      } while (bVar1);
    }
    else {
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    puVar8 = (undefined *)plVar3[5];
  }
LAB_1056c1454:
  _objc_retain(puVar8);
LAB_1056c145c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1056c1634; end: 1056c167b; -[SCVideoTargetTrajectory isTrajectoryComplete] */

bool FUN_1056c1634(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return true;
  }
  if (0.1 < ABS(*(double *)(param_1 + 0x30))) {
    return false;
  }
  return ABS(*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) <= 0.1;
}



/* Entry: 1056c167c; end: 1056c1683; -[SCVideoTargetTrajectory minTrackedFrameTimeInSeconds] */

undefined8 FUN_1056c167c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1056c1684; end: 1056c168b; -[SCVideoTargetTrajectory maxTrackedFrameTimeInSeconds] */

undefined8 FUN_1056c1684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1056c168c; end: 1056c1693; -[SCVideoTargetTrajectory repeatTrajectoryForLoopingVideo] */

undefined1 FUN_1056c168c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 1056c1694; end: 1056c169b; -[SCVideoTargetTrajectory setRepeatTrajectoryForLoopingVideo:] */

void FUN_1056c1694(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 1056c169c; end: 1056c16a3; -[SCVideoTargetTrajectory config] */

undefined8 FUN_1056c169c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1056c16a4; end: 1056c16cf; -[SCVideoTargetTrajectory .cxx_destruct] */

void FUN_1056c16a4(long param_1)

{
  undefined8 *puVar1;
  
  _objc_storeStrong(param_1 + 0x40,0);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1056c16e4(*puVar1);
    FUN_1056c16e4(puVar1[1]);
    _objc_release(puVar1[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 1056c16d0; end: 1056c16e3; -[SCVideoTargetTrajectory .cxx_construct] */

void FUN_1056c16d0(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
  return;
}



/* Entry: 1056c16e4; end: 1056c1723;  */

void FUN_1056c16e4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1056c16e4(*param_1);
    FUN_1056c16e4(param_1[1]);
    _objc_release(param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1056c1724; end: 1056c17db; -[SCVideoTrackerNotifier initWithListener:notificationQueue:] */

undefined1 *
FUN_1056c1724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9a58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c17dc; end: 1056c17f3; -[SCVideoTrackerNotifier listener] */

void FUN_1056c17dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c17f4; end: 1056c17fb; -[SCVideoTrackerNotifier notificationQueue] */

undefined8 FUN_1056c17f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056c17fc; end: 1056c1827; -[SCVideoTrackerNotifier .cxx_destruct] */

void FUN_1056c17fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1056c1828; end: 1056c1a2b; -[SCVideoTracker initWithVideoSize:orientation:isLagunaMedia:isMultiSnap:] */

undefined8 *
FUN_1056c1828(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,int param_6,undefined1 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e9a60;
  puVar4 = &uStack_70;
  uStack_70 = param_3;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar6 = puVar5 + 3;
    *puVar5 = &PTR_DAT_1108a8638;
    func_0x000109534d40();
    plVar11 = (long *)puVar4[2];
    puVar4[1] = puVar6;
    puVar4[2] = puVar5;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    *(undefined4 *)(puVar4 + 3) = 0;
    *(undefined4 *)((long)puVar4 + 0xb4) = 0xffffffff;
    puVar7 = &UNK_10f2e8125;
    _dispatch_queue_create(&UNK_10f2e8125,0);
    uVar8 = puVar4[5];
    puVar4[5] = puVar7;
    _objc_release(uVar8);
    uVar8 = 1;
    _dispatch_semaphore_create();
    uVar9 = puVar4[4];
    puVar4[4] = uVar8;
    _objc_release(uVar9);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar4[6];
    puVar4[6] = puVar7;
    _objc_release(uVar8);
    *(undefined1 *)(puVar4 + 0x16) = param_7;
    if (param_6 != 0) {
      fVar12 = (float)(param_2 * 0.5);
      lVar10 = *(long *)puVar4[1];
      *(float *)(lVar10 + 0x230) = fVar12;
      *(undefined8 *)(lVar10 + 0x234) = 0x3a252696bd072b02;
      fVar13 = (float)(param_1 * 0.20284926470588235);
      fVar14 = (float)(param_1 * 0.5);
      *(ulong *)(lVar10 + 0x228) = CONCAT44(fVar14,fVar13);
      *(ulong *)(lVar10 + 0x1b8) = CONCAT44(fVar14,fVar13);
      *(float *)(lVar10 + 0x1c0) = fVar12;
      *(undefined8 *)(lVar10 + 0x1c4) = 0x3a252696bd072b02;
      lVar10 = *(long *)(lVar10 + 0x1f0);
      *(ulong *)(lVar10 + 0x134) = CONCAT44(fVar14,fVar13);
      *(float *)(lVar10 + 0x13c) = fVar12;
      *(undefined8 *)(lVar10 + 0x140) = 0x3a252696bd072b02;
    }
    func_0x00010c221fa0(param_1,param_2,puVar4);
  }
  return puVar4;
}



/* Entry: 1056c1a2c; end: 1056c1b8f; -[SCVideoTracker setVideoSize:orientation:] */

void FUN_1056c1a2c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010beaa060();
  *(long *)(param_1 + 0x48) = param_3;
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (param_3 < 2) {
    if ((param_3 == 0) || (param_3 != 1)) {
LAB_1056c1ae8:
      uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      *(undefined8 *)(param_1 + 0x58) =
           *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      *(undefined8 *)(param_1 + 0x50) = uVar2;
      *(undefined8 *)(param_1 + 0x68) = uVar4;
      *(undefined8 *)(param_1 + 0x60) = uVar3;
      uVar3 = *(undefined8 *)(puVar1 + 0x28);
      uVar2 = *(undefined8 *)(puVar1 + 0x20);
      goto LAB_1056c1b50;
    }
    _CGAffineTransformMakeTranslation(&uStack_50,0x3ff0000000000000,0x3ff0000000000000);
    *(undefined8 *)(param_1 + 0x58) = uStack_48;
    *(undefined8 *)(param_1 + 0x50) = uStack_50;
    *(undefined8 *)(param_1 + 0x68) = uStack_38;
    *(undefined8 *)(param_1 + 0x60) = uStack_40;
    *(undefined8 *)(param_1 + 0x78) = uStack_28;
    *(undefined8 *)(param_1 + 0x70) = uStack_30;
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = 0x400921fb54442d18;
  }
  else if (param_3 == 2) {
    _CGAffineTransformMakeTranslation(&uStack_50,0x3ff0000000000000,0);
    *(undefined8 *)(param_1 + 0x58) = uStack_48;
    *(undefined8 *)(param_1 + 0x50) = uStack_50;
    *(undefined8 *)(param_1 + 0x68) = uStack_38;
    *(undefined8 *)(param_1 + 0x60) = uStack_40;
    *(undefined8 *)(param_1 + 0x78) = uStack_28;
    *(undefined8 *)(param_1 + 0x70) = uStack_30;
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = 0x3ff921fb54442d18;
  }
  else {
    if (param_3 != 3) goto LAB_1056c1ae8;
    _CGAffineTransformMakeTranslation(&uStack_50,0,0x3ff0000000000000);
    *(undefined8 *)(param_1 + 0x58) = uStack_48;
    *(undefined8 *)(param_1 + 0x50) = uStack_50;
    *(undefined8 *)(param_1 + 0x68) = uStack_38;
    *(undefined8 *)(param_1 + 0x60) = uStack_40;
    *(undefined8 *)(param_1 + 0x78) = uStack_28;
    *(undefined8 *)(param_1 + 0x70) = uStack_30;
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = 0xbff921fb54442d18;
  }
  _CGAffineTransformRotate(&uStack_50,uVar2,&uStack_80);
  *(undefined8 *)(param_1 + 0x58) = uStack_48;
  *(undefined8 *)(param_1 + 0x50) = uStack_50;
  *(undefined8 *)(param_1 + 0x68) = uStack_38;
  *(undefined8 *)(param_1 + 0x60) = uStack_40;
  uVar2 = uStack_30;
  uVar3 = uStack_28;
LAB_1056c1b50:
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uStack_78 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = *(undefined8 *)(param_1 + 0x68);
  uStack_70 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = *(undefined8 *)(param_1 + 0x78);
  uStack_60 = *(undefined8 *)(param_1 + 0x70);
  _CGAffineTransformInvert(&uStack_50,&uStack_80);
  *(undefined8 *)(param_1 + 0x88) = uStack_48;
  *(undefined8 *)(param_1 + 0x80) = uStack_50;
  *(undefined8 *)(param_1 + 0x98) = uStack_38;
  *(undefined8 *)(param_1 + 0x90) = uStack_40;
  *(undefined8 *)(param_1 + 0xa8) = uStack_28;
  *(undefined8 *)(param_1 + 0xa0) = uStack_30;
  return;
}



/* Entry: 1056c1b90; end: 1056c1cab; -[SCVideoTracker addTargetAtPoint:size:listener:firstTimeTracking:notificationQueue:] */

long FUN_1056c1b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  piVar2 = (int *)(param_5 + 0x18);
  do {
    iVar1 = *piVar2 + 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (param_8 != 0) {
    *(int *)(param_5 + 0xb4) = iVar1;
    *(undefined8 *)(param_5 + 0xb8) = 0xbff0000000000000;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x28);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1056c1cac;
  puStack_a8 = &UNK_1108a8568;
  lStack_a0 = param_5;
  uStack_98 = param_7;
  uStack_90 = param_9;
  uStack_88 = param_1;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  iStack_68 = iVar1;
  _objc_retain(param_9);
  _objc_retain(param_7);
  func_0x00010007380c(uVar5,&puStack_c0);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_9);
  _objc_release(param_7);
  return (long)iVar1;
}



/* Entry: 1056c1cac; end: 1056c1deb;  */

void FUN_1056c1cac(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  
  dVar8 = *(double *)(param_1 + 0x38);
  dVar9 = *(double *)(param_1 + 0x40);
  func_0x00010bde9660(dVar8,dVar9,*(undefined8 *)(param_1 + 0x20));
  lVar6 = *(long *)(param_1 + 0x20);
  auVar10._0_8_ = -(ulong)((*(ulong *)(lVar6 + 0x48) & 0xfffffffffffffffe) == 2);
  auVar10._8_8_ = auVar10._0_8_;
  dVar3 = *(double *)(param_1 + 0x48) * *(double *)(lVar6 + 0x38);
  dVar12 = *(double *)(param_1 + 0x50) * *(double *)(lVar6 + 0x40);
  auVar13._8_8_ = dVar12;
  auVar13._0_8_ = dVar3;
  auVar1._8_8_ = dVar12;
  auVar1._0_8_ = dVar3;
  auVar13 = NEON_ext(auVar13,auVar1,8,1);
  auVar2._8_8_ = dVar12;
  auVar2._0_8_ = dVar3;
  auVar11._8_8_ = dVar12;
  auVar11._0_8_ = dVar3;
  auVar11 = auVar11 ^ (auVar2 ^ auVar13) & auVar10;
  func_0x000109534dbc(0x3ecccccd,0x3fc00000,0x3ecccccd,0x3e99999a,*(undefined8 *)(lVar6 + 8),
                      *(undefined4 *)(param_1 + 0x58),(int)*(double *)(lVar6 + 0x38),
                      (int)*(double *)(lVar6 + 0x40),(int)dVar8,(int)dVar9,(int)auVar11._0_8_,
                      (int)auVar11._8_8_,0x200000006,0x2000000002);
  puVar4 = PTR_PTR_1126bcfe0;
  _objc_alloc(PTR_PTR_1126bcfe0);
  func_0x00010c026420();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1056c1dec; end: 1056c1e43; -[SCVideoTracker removeTarget:] */

void FUN_1056c1dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1056c1e44;
  puStack_28 = &UNK_1108a8598;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x28),&puStack_40);
  return;
}



/* Entry: 1056c1e44; end: 1056c1ec3;  */

void FUN_1056c1e44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)*(undefined8 *)(param_1 + 0x28);
  func_0x000109536334(**(undefined8 **)(*(long *)(param_1 + 0x20) + 8),&uStack_24);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056c1ec4; end: 1056c1f5b; -[SCVideoTracker processFrame:atTime:] */

void FUN_1056c1ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _dispatch_semaphore_wait(lVar1,0);
  if (lVar1 == 0) {
    _CVPixelBufferRetain(param_3);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1056c1f5c;
    puStack_60 = &UNK_1108a85f8;
    uStack_40 = param_4[1];
    uStack_48 = *param_4;
    uStack_38 = param_4[2];
    lStack_58 = param_1;
    uStack_50 = param_3;
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x28),&puStack_78);
  }
  return;
}



/* Entry: 1056c1f5c; end: 1056c25c7;  */

void FUN_1056c1f5c(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined4 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c4 [4];
  float fStack_1c0;
  float fStack_1bc;
  undefined1 auStack_1b8 [4];
  undefined1 auStack_1b4 [4];
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  int iStack_168;
  int iStack_164;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  int *piStack_130;
  long *plStack_128;
  long alStack_120 [2];
  undefined1 auStack_10c [132];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    _dispatch_semaphore_signal(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbbf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__CVPixelBufferRelease_11034a298)(*(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  else {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x28);
    _CVPixelBufferGetWidth();
    iVar7 = (int)*(undefined8 *)(param_1 + 0x28);
    _CVPixelBufferGetHeight();
    lVar8 = *(long *)(param_1 + 0x28);
    _CVPixelBufferGetBytesPerRowOfPlane(lVar8,0);
    _CVPixelBufferLockBaseAddress(*(undefined8 *)(param_1 + 0x28),0);
    lVar9 = *(long *)(param_1 + 0x28);
    _CVPixelBufferGetBaseAddressOfPlane(lVar9,0);
    uStack_170 = 0x242ff0000;
    piStack_130 = &iStack_168;
    lStack_148 = 0;
    lStack_150 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    alStack_120[0] = 0;
    alStack_120[1] = 0;
    iStack_168 = iVar7;
    iStack_164 = iVar6;
    lStack_160 = lVar9;
    lStack_158 = lVar9;
    plStack_128 = alStack_120;
    if (((long)iVar7 * (long)iVar6 != 0) && (lVar9 == 0)) goto LAB_1056c249c;
    lStack_150 = (long)iVar6;
    lVar17 = lStack_150;
    if (iVar7 != 1) {
      lVar17 = (long)(int)lVar8;
    }
    alStack_120[0] = lStack_150;
    if (lVar8 << 0x20 != 0) {
      alStack_120[0] = lVar17;
    }
    uVar2 = 0x42ff4000;
    if (lVar17 != lStack_150 && lVar8 << 0x20 != 0) {
      uVar2 = 0x42ff0000;
    }
    uStack_170 = CONCAT44(2,uVar2);
    alStack_120[1] = 1;
    lStack_148 = lVar9 + alStack_120[0] * iVar7;
    lStack_150 = (lStack_148 - alStack_120[0]) + lStack_150;
    func_0x000109535274(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),&uStack_170);
    _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(param_1 + 0x28),0);
    _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x28));
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c0865c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar9;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar17 = *plStack_1a0;
      do {
        lVar16 = 0;
        do {
          if (*plStack_1a0 != lVar17) {
            _objc_enumerationMutation(lVar9);
          }
          uVar19 = *(undefined8 *)(lStack_1a8 + lVar16 * 8);
          lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar10;
          func_0x00010c09a420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar10);
          if (lVar12 != 0) {
            uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
            uVar13 = uVar19;
            func_0x00010c067ec0(uVar19);
            func_0x000109535bc8(uVar18,uVar13,auStack_1b4,auStack_1b8,&fStack_1bc,&fStack_1c0,
                                &puStack_1e0,auStack_10c,auStack_1c4);
            puVar11 = PTR_PTR_1126b2700;
            _objc_alloc();
            func_0x00010bde92c0((double)fStack_1bc,(double)fStack_1c0,
                                *(undefined8 *)(param_1 + 0x20));
            func_0x00010c055500();
            lVar12 = *(long *)(param_1 + 0x20);
            if (*(char *)(*(long *)(param_1 + 0x20) + 0xb0) == '\x01') {
              uVar13 = uVar19;
              func_0x00010c067ec0();
              lVar10 = *(long *)(param_1 + 0x20);
              lVar12 = lVar10;
              if ((int)uVar13 == *(int *)(lVar10 + 0xb4)) {
                uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
                puStack_1e0 = *(undefined4 **)(param_1 + 0x30);
                uStack_1d0 = *(undefined8 *)(param_1 + 0x40);
                func_0x00010beb6b20();
                lVar12 = *(long *)(param_1 + 0x20);
                if ((int)lVar10 != 0) {
                  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_208 = 0xc2000000;
                  pcStack_200 = FUN_1056c25c8;
                  puStack_1f8 = &UNK_110883780;
                  lStack_1f0 = lVar12;
                  uStack_1e8 = uVar19;
                  func_0x000100162d98("APPSTORE",&puStack_210);
                  lVar12 = *(long *)(param_1 + 0x20);
                }
              }
            }
            uVar13 = *(undefined8 *)(lVar12 + 0x30);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar13;
            func_0x00010c09a420();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar13);
            uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
            func_0x00010c0e00e0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar14;
            func_0x00010c0dc860();
            _objc_retainAutoreleasedReturnValue();
            puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_260 = 0xc2000000;
            pcStack_258 = FUN_1056c2630;
            puStack_250 = &UNK_1108a85c8;
            uStack_218 = (undefined1)uVar18;
            uStack_240 = *(undefined8 *)(param_1 + 0x20);
            uStack_228 = *(undefined8 *)(param_1 + 0x38);
            uStack_230 = *(undefined8 *)(param_1 + 0x30);
            uStack_220 = *(undefined8 *)(param_1 + 0x40);
            uStack_248 = uVar19;
            puStack_238 = puVar11;
            _objc_retain(puVar11);
            _objc_retain(uVar19);
            func_0x00010007380c(uVar13,&puStack_268);
            _objc_release(uVar13);
            _objc_release(uVar14);
            _objc_release(puStack_238);
            _objc_release(uStack_248);
            _objc_release(puVar11);
            _objc_release(uVar19);
          }
          lVar16 = lVar16 + 1;
        } while (lVar8 != lVar16);
        lVar8 = lVar9;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar9);
    _dispatch_semaphore_signal(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    if (lStack_138 != 0) {
      piVar1 = (int *)(lStack_138 + 0x14);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_170);
      }
    }
    lStack_138 = 0;
    lStack_158 = 0;
    lStack_160 = 0;
    lStack_148 = 0;
    lStack_150 = 0;
    if (0 < uStack_170._4_4_) {
      lVar8 = 0;
      do {
        piStack_130[lVar8] = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_170._4_4_);
    }
    if (plStack_128 != alStack_120 && plStack_128 != (long *)0x0) {
      _free(plStack_128[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_1056c249c:
  puVar15 = (undefined4 *)0x24;
  func_0x0001000437c8();
  *puVar15 = 1;
  puStack_1e0 = puVar15 + 1;
  uStack_1d8 = 0x1c;
  *(undefined1 *)(puVar15 + 8) = 0;
  *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
  func_0x000109ac3188(0xffffff29,&puStack_1e0,&UNK_10f2e8162,&UNK_10f2e8166,0x19a);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1056c24fc);
  (*pcVar5)();
}



/* Entry: 1056c25c8; end: 1056c262f;  */

void FUN_1056c25c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c067ec0(uVar3);
  func_0x00010c29b980(uVar2,param_2,uVar1,(long)(int)uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056c2630; end: 1056c2697;  */

void FUN_1056c2630(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uStack_28 = *(undefined8 *)(param_1 + 0x40);
    uStack_30 = *(undefined8 *)(param_1 + 0x38);
    uStack_20 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c29b960();
  }
  else {
    uStack_28 = *(undefined8 *)(param_1 + 0x40);
    uStack_30 = *(undefined8 *)(param_1 + 0x38);
    uStack_20 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c29b940(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                        &uStack_30);
  }
  return;
}



/* Entry: 1056c2698; end: 1056c269f; -[SCVideoTracker _setVideoSize:] */

void FUN_1056c2698(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x38) = param_1;
  *(undefined8 *)(param_3 + 0x40) = param_2;
  return;
}



/* Entry: 1056c26a0; end: 1056c272f; -[SCVideoTracker _shouldStopTrackingAtTime:trackingStatus:] */

bool FUN_1056c26a0(long param_1,undefined8 param_2,double *param_3,uint param_4)

{
  bool bVar1;
  double dVar2;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  if (param_4 < 2) {
    if (0.0 <= *(double *)(param_1 + 0xb8)) {
      dStack_38 = param_3[1];
      dVar2 = *param_3;
      dStack_30 = param_3[2];
      dStack_40 = dVar2;
      _CMTimeGetSeconds(&dStack_40);
      bVar1 = 3.0 < ABS(dVar2 - *(double *)(param_1 + 0xb8));
    }
    else {
      bVar1 = false;
    }
  }
  else {
    dStack_38 = param_3[1];
    dVar2 = *param_3;
    dStack_30 = param_3[2];
    dStack_40 = dVar2;
    _CMTimeGetSeconds(&dStack_40);
    bVar1 = false;
    *(double *)(param_1 + 0xb8) = dVar2;
  }
  return bVar1;
}



/* Entry: 1056c2730; end: 1056c2753; -[SCVideoTracker _convertToOpenCVPoint:] */

undefined1  [16] FUN_1056c2730(double param_1,double param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (*(double *)(param_3 + 0x70) +
                 *(double *)(param_3 + 0x60) * param_2 + *(double *)(param_3 + 0x50) * param_1) *
                 *(double *)(param_3 + 0x38);
  auVar1._8_8_ = (*(double *)(param_3 + 0x78) +
                 *(double *)(param_3 + 0x68) * param_2 + *(double *)(param_3 + 0x58) * param_1) *
                 *(double *)(param_3 + 0x40);
  return auVar1;
}



/* Entry: 1056c2754; end: 1056c277b; -[SCVideoTracker _convertOpenCVPointToUIPoint:] */

undefined1  [16] FUN_1056c2754(double param_1,double param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  param_1 = param_1 / *(double *)(param_3 + 0x38);
  param_2 = param_2 / *(double *)(param_3 + 0x40);
  auVar1._0_8_ = *(double *)(param_3 + 0xa0) +
                 *(double *)(param_3 + 0x90) * param_2 + *(double *)(param_3 + 0x80) * param_1;
  auVar1._8_8_ = *(double *)(param_3 + 0xa8) +
                 *(double *)(param_3 + 0x98) * param_2 + *(double *)(param_3 + 0x88) * param_1;
  return auVar1;
}



/* Entry: 1056c277c; end: 1056c2793; -[SCVideoTracker delegate] */

void FUN_1056c277c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c2794; end: 1056c279f; -[SCVideoTracker setDelegate:] */

void FUN_1056c2794(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 1056c27a0; end: 1056c2827; -[SCVideoTracker .cxx_destruct] */

void FUN_1056c27a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 1056c2828; end: 1056c2843; -[SCVideoTracker .cxx_construct] */

void FUN_1056c2828(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1056c2844; end: 1056c2863;  */

void FUN_1056c2844(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a8638;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056c2864; end: 1056c286f;  */

long * FUN_1056c2864(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000109534cf4();
    __ZdlPv();
    *plVar1 = 0;
  }
  return plVar1;
}



/* Entry: 1056c2870; end: 1056c2983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c2870(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126bcfe8;
    _objc_alloc(PTR_PTR_1126bcfe8);
    lVar1 = param_1 + _DAT_112727b24;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112727b28;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112727b20;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003020(puVar7,param_2,lVar2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056c2984; end: 1056c29e3; -[SCGeoFilterServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c2984(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727b2c,0);
  _objc_destroyWeak(param_1 + _DAT_112727b28);
  _objc_destroyWeak(param_1 + _DAT_112727b24);
  _objc_destroyWeak(param_1 + _DAT_112727b20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727b1c);
  return;
}



/* Entry: 1056c29e4; end: 1056c2ab7; -[SCGeoFilterURLDataFetcher initWithContentDelivery:grapheneRegistry:cof:] */

undefined1 *
FUN_1056c29e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9a68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c067f00();
    *(int *)((long)puVar1 + 0x18) = (int)uVar2;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c2ab8; end: 1056c2abb; -[SCGeoFilterURLDataFetcher invalidate] */

void FUN_1056c2ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearCache_1125ac488);
  return;
}



/* Entry: 1056c2abc; end: 1056c2ac3; -[SCGeoFilterURLDataFetcher fetchURLData:params:completion:] */

void FUN_1056c2abc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchURLData_params_completion_r_1125c85b0);
  return;
}



/* Entry: 1056c2ac4; end: 1056c2acf; -[SCGeoFilterURLDataFetcher fetchURLData:params:completion:resetExpiration:] */

void FUN_1056c2ac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa6950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x410fa40000000000,param_1,PTR_s_fetchExpiringURLData_params_comp_1125c73f8);
  return;
}



/* Entry: 1056c2ad0; end: 1056c2ad7; -[SCGeoFilterURLDataFetcher fetchExpiringURLData:params:completion:expiration:resetCachedObjectExpiration:] */

void FUN_1056c2ad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa6970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchExpiringURLData_params_comp_1125c7400);
  return;
}



/* Entry: 1056c2ad8; end: 1056c2da7; -[SCGeoFilterURLDataFetcher fetchExpiringURLData:params:completion:expiration:resetCachedObjectExpiration:trackingInfo:] */

void FUN_1056c2ad8(double param_1,undefined *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  double dVar15;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar2 = param_2;
  func_0x00010bf26980();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b08b8;
  _objc_alloc();
  func_0x00010c0295e0();
  puVar3 = param_2;
  func_0x00010bf224a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1060;
  _objc_alloc();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110df62b8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  _objc_release(puVar5);
  _objc_initWeak(auStack_88,param_2);
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  dVar15 = (double)((ulong)uVar1 * 0x15180);
  if ((int)uVar1 < 1) {
    dVar15 = param_1;
  }
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(dVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_88;
  _objc_copyWeak(auStack_90);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar14 = puVar12;
  puVar9 = puVar3;
  func_0x00010c1267e0(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar14;
  puVar12 = puVar9;
  _objc_retain(puVar11);
  lVar7 = param_4 + 0x30;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    if (((int)puVar14 == 0) || (puVar11 == (undefined1 *)0x0)) {
      if ((int)puVar14 != 0) {
        puVar2 = PTR_PTR_1126bcff8;
        func_0x00010bfae300(PTR_PTR_1126bcff8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar2;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        uVar8 = *(undefined8 *)(lVar7 + 0x10);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar8;
        func_0x00010c281040();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(puVar12);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar6 = *(undefined8 *)(param_4 + 0x20);
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar3;
      (**(code **)(*(long *)(param_4 + 0x28) + 0x10))(*(long *)(param_4 + 0x28),puVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar9;
    }
    else {
      puVar12 = (undefined *)0x0;
      (**(code **)(*(long *)(param_4 + 0x28) + 0x10))(*(long *)(param_4 + 0x28),puVar11);
      puVar2 = puVar9;
    }
  }
  _objc_release(lVar7);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
  func_0x00010c057bc0();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar3 = puVar5;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_retain(puVar12);
  puVar3 = puVar12;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar12);
      }
      puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
      puVar10 = puVar12;
      func_0x00010c0e00e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02dc20(puVar9);
      func_0x00010befa120(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar10);
      puVar14 = puVar14 + 1;
    } while (puVar3 != puVar14);
    puVar3 = puVar12;
    func_0x00010bf52a60();
  }
  _objc_release(puVar12);
  func_0x00010c1e6460(puVar5);
  puVar3 = puVar5;
  func_0x00010bdc2b80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1056c2da8; end: 1056c2fc3;  */

void FUN_1056c2da8(long param_1,long param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((int)param_3 == 0) || (param_2 == 0)) {
      if ((int)param_3 != 0) {
        puVar2 = PTR_PTR_1126bcff8;
        func_0x00010bfae300(PTR_PTR_1126bcff8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        uVar3 = *(undefined8 *)(lVar1 + 0x10);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010c281040();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(uVar9);
        _objc_release(uVar3);
        _objc_release(puVar10);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar4;
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar2 = param_4;
    }
    else {
      puVar10 = (undefined *)0x0;
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
      puVar2 = param_4;
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
  func_0x00010c057bc0();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = puVar5;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_retain(puVar10);
  puVar4 = puVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar10);
      }
      puVar7 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
      puVar8 = puVar10;
      func_0x00010c0e00e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02dc20(puVar7);
      func_0x00010befa120(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar8);
      puVar12 = puVar12 + 1;
    } while (puVar4 != puVar12);
    puVar4 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  func_0x00010c1e6460(puVar5);
  puVar4 = puVar5;
  func_0x00010bdc2b80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1056c2fc4; end: 1056c31df; -[SCGeoFilterURLDataFetcher cacheKeyWithURL:params:] */

void FUN_1056c2fc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
  func_0x00010c057bc0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        puVar2 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
        _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
        lVar5 = param_4;
        func_0x00010c0e00e0(param_4,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02dc20(puVar2,param_2,uVar8,lVar5);
        func_0x00010befa120(puVar3,param_2,puVar2);
        _objc_release(puVar2);
        _objc_release(lVar5);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(param_4);
  func_0x00010c1e6460(puVar1,param_2,puVar3);
  puVar2 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1056c31e0; end: 1056c321b; -[SCGeoFilterURLDataFetcher clearCache] */

void FUN_1056c31e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056c321c; end: 1056c35bf; -[SCGeoFilterURLDataFetcher buildNativeRequest:params:key:trackingInfo:] */

void FUN_1056c321c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined *param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126bd000;
  lVar2 = param_3;
  func_0x00010bfe4420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079640();
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126b1050;
  if (param_6 == (undefined *)0x0) {
    param_6 = PTR_PTR_1126b1058;
    _objc_alloc();
    func_0x00010c01b360();
    puVar9 = PTR_PTR_1126b1050;
  }
  PTR_PTR_1126b1050 = puVar9;
  if ((int)puVar3 == 0) {
    _objc_alloc(puVar9);
    lVar2 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110df62d8;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a200(puVar9);
    _objc_release(ppuVar10);
    _objc_release(lVar2);
  }
  else {
    lVar4 = param_3;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar2 = param_3;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(ulong *)(lVar12 * 8);
        func_0x00010bf44740();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf529e0();
        if (1 < uVar7) {
          uVar7 = uVar6;
          func_0x00010c0dfd40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c0dfd40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        _objc_release(uVar6);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    if (param_4 != 0) {
      func_0x00010bef7f60(puVar3);
    }
    puVar9 = PTR_PTR_1126b1050;
    _objc_alloc(PTR_PTR_1126b1050);
    ppuVar10 = &PTR____CFConstantStringClassReference_110df62d8;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a200(puVar9);
    _objc_release(ppuVar10);
    _objc_release(puVar3);
    _objc_release(lVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1056c35c0; end: 1056c35ef; -[SCGeoFilterURLDataFetcher .cxx_destruct] */

void FUN_1056c35c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056c35f0; end: 1056c366f; -[SCImageDataBackedOverlayFormat initWithImageData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1056c35f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9a70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112727b3c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112727b3c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c3670; end: 1056c36ab; -[SCImageDataBackedOverlayFormat screenOverlayImageForTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c3670(long param_1)

{
  if (*(long *)(param_1 + _DAT_112727b3c) != 0) {
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c36ac; end: 1056c36db; -[SCImageDataBackedOverlayFormat blob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c36ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112727b3c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056c36dc; end: 1056c36ef; -[SCImageDataBackedOverlayFormat .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c36dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727b3c,0);
  return;
}



/* Entry: 1056c36f0; end: 1056c370b;  */

void FUN_1056c36f0(void)

{
  _objc_alloc_init(PTR_PTR_1126bd008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c370c; end: 1056c371b; -[SCOverlayFormatServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c370c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727b40);
  return;
}



/* Entry: 1056c371c; end: 1056c3863; -[SCFlatBufferBackedOverlayFormat initWithOverlayFormat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1056c371c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9a78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = (long *)((long)puVar2 + (long)_DAT_112727b44);
    lVar4 = plVar1[2];
    if (lVar4 != 0) {
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,lVar4,plVar1[3]);
    }
    if (((char)plVar1[1] == '\x01') && ((long *)*plVar1 != (long *)0x0)) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    *plVar1 = 0;
    *(undefined1 *)(plVar1 + 1) = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[5] = 0;
    plVar1[4] = 0;
    *plVar1 = *param_3;
    *(char *)(plVar1 + 1) = (char)param_3[1];
    plVar1[2] = param_3[2];
    lVar4 = param_3[3];
    plVar1[4] = param_3[4];
    plVar1[3] = lVar4;
    plVar1[5] = param_3[5];
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112727b48);
    *(undefined **)((long)puVar2 + (long)_DAT_112727b48) = puVar3;
    _objc_release(uVar5);
    *(ulong *)((long)puVar2 + (long)_DAT_112727b4c) = plVar1[4] + (ulong)*(uint *)plVar1[4];
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1056c3864; end: 1056c392f; -[SCFlatBufferBackedOverlayFormat initWithData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1056c3864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9a78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    lVar5 = (long)_DAT_112727b48;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = uVar2;
    _objc_release(uVar4);
    puVar3 = *(uint **)((long)puVar1 + lVar5);
    func_0x00010bf25f00();
    *(ulong *)((long)puVar1 + (long)_DAT_112727b4c) = (long)puVar3 + (ulong)*puVar3;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c3930; end: 1056c3967; -[SCFlatBufferBackedOverlayFormat version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1056c3930(long param_1)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = *(int **)(param_1 + _DAT_112727b4c);
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1056c3968; end: 1056c3973; -[SCFlatBufferBackedOverlayFormat mediaOverlayImageForTag:] */

void FUN_1056c3968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be370b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__imageForCanvasType_tag__11256b5c8,0,param_3)
  ;
  return;
}



/* Entry: 1056c3974; end: 1056c397f; -[SCFlatBufferBackedOverlayFormat screenOverlayImageForTag:] */

void FUN_1056c3974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be370b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__imageForCanvasType_tag__11256b5c8,1,param_3)
  ;
  return;
}



/* Entry: 1056c3980; end: 1056c3983; -[SCFlatBufferBackedOverlayFormat genericAssetDataOverlayForTag:] */

void FUN_1056c3980(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__genericAssetDataOverlayForTag__112564b08);
  return;
}



/* Entry: 1056c3984; end: 1056c39b3; -[SCFlatBufferBackedOverlayFormat blob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c3984(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112727b48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056c39b4; end: 1056c3c9f; -[SCFlatBufferBackedOverlayFormat _imageForCanvasType:tag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c39b4(long param_1,long param_2,int param_3,long param_4)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  ushort *puVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  undefined *puVar17;
  
  piVar8 = *(int **)(param_1 + _DAT_112727b4c);
  puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
  if (*puVar9 < 7) {
    puVar6 = (uint *)0x0;
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)0x0;
    if ((ulong)puVar9[3] != 0) {
      puVar5 = (uint *)((long)piVar8 + (ulong)puVar9[3]);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    }
    if (*puVar9 < 9) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = (uint *)0x0;
      if ((ulong)puVar9[4] != 0) {
        puVar6 = (uint *)((long)piVar8 + (ulong)puVar9[4]);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      }
    }
  }
  if ((ulong)puVar9[2] == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((long)piVar8 + (ulong)puVar9[2]);
  }
  if (*puVar5 != 0) {
    puVar1 = puVar5 + *puVar5;
    do {
      puVar5 = puVar5 + 1;
      piVar8 = (int *)((long)puVar5 + (ulong)*puVar5);
      puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
      if (*puVar9 < 5) {
        iVar10 = 0;
      }
      else {
        iVar10 = 0;
        if ((ulong)puVar9[2] != 0) {
          iVar10 = *(int *)((long)piVar8 + (ulong)puVar9[2]);
        }
      }
      if (iVar10 == param_3) {
        if ((*puVar9 < 0xd) || ((ulong)puVar9[6] == 0)) {
          puVar11 = (uint *)0x0;
        }
        else {
          puVar11 = (uint *)((long)piVar8 + (ulong)puVar9[6]);
          puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        }
        if (*puVar11 == 0) break;
        if (iVar7 == 1) {
          lVar12 = 0;
          do {
            uVar13 = (ulong)*(uint *)((long)puVar11 + lVar12 + 4);
            lVar14 = uVar13 - (long)*(int *)((long)puVar11 + uVar13 + lVar12 + 4);
            lVar3 = lVar14 + lVar12;
            uVar2 = *(ushort *)((long)puVar11 + lVar3 + 4);
            if (uVar2 < 7) {
              lVar3 = 0;
            }
            else {
              uVar16 = (ulong)*(ushort *)((long)puVar11 + lVar3 + 10);
              lVar3 = 0;
              if (uVar16 != 0) {
                param_2 = (long)puVar11 + lVar12;
                lVar3 = (long)*(int *)(param_2 + uVar13 + uVar16 + 4);
              }
            }
            if (param_4 == lVar3) {
              if ((uVar2 < 5) ||
                 (uVar2 = *(ushort *)((long)puVar11 + lVar14 + lVar12 + 8), uVar2 == 0))
              goto LAB_1056c3b94;
              piVar8 = (int *)((long)puVar11 + lVar12 + uVar13 + 4);
              goto LAB_1056c3b88;
            }
            lVar12 = lVar12 + 4;
          } while ((ulong)*puVar11 * 4 - lVar12 != 0);
        }
        else if (iVar7 == 0) {
          piVar8 = (int *)((long)(puVar11 + 1) + (ulong)puVar11[1]);
          puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
          if (*puVar9 < 7) {
            if (4 < *puVar9) goto LAB_1056c3b80;
LAB_1056c3b94:
            iVar10 = 0;
          }
          else {
            if (((ulong)puVar9[3] != 0) &&
               (iVar10 = *(int *)((long)piVar8 + (ulong)puVar9[3]), iVar10 != 0 && param_4 != iVar10
               )) goto LAB_1056c3c00;
LAB_1056c3b80:
            uVar2 = puVar9[2];
            if (uVar2 == 0) goto LAB_1056c3b94;
LAB_1056c3b88:
            iVar10 = *(int *)((long)piVar8 + (ulong)uVar2);
            if (iVar10 < 0) goto LAB_1056c3c00;
          }
          if (*puVar6 != 0) {
            lVar12 = 0;
            do {
              uVar13 = (ulong)*(uint *)((long)puVar6 + lVar12 + 4);
              lVar14 = uVar13 - (long)*(int *)((long)puVar6 + uVar13 + lVar12 + 4);
              lVar3 = lVar14 + lVar12;
              if (*(ushort *)((long)puVar6 + lVar3 + 4) < 5) {
                iVar15 = 0;
              }
              else {
                uVar16 = (ulong)*(ushort *)((long)puVar6 + lVar3 + 8);
                iVar15 = 0;
                if (uVar16 != 0) {
                  iVar15 = *(int *)((long)puVar6 + uVar13 + uVar16 + lVar12 + 4);
                }
              }
              if (iVar10 == iVar15) {
                uVar16 = (ulong)*(ushort *)((long)puVar6 + lVar14 + lVar12 + 10);
                lVar12 = uVar16 + *(uint *)((long)puVar6 + uVar16 + lVar12 + uVar13 + 4) +
                         lVar12 + uVar13;
                puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
                func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778,param_2,
                                    (long)puVar6 + lVar12 + 8,
                                    *(undefined4 *)((long)puVar6 + lVar12 + 4),0);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = PTR__OBJC_CLASS___UIImage_1126aea68;
                func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar4);
                goto LAB_1056c3c7c;
              }
              lVar12 = lVar12 + 4;
            } while ((ulong)*puVar6 * 4 - lVar12 != 0);
          }
        }
      }
LAB_1056c3c00:
    } while (puVar5 != puVar1);
  }
  puVar17 = (undefined *)0x0;
LAB_1056c3c7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}


