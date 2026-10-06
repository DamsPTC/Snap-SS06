/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106455a24; end: 106455b37; -[SCAdLifecycleWatermarkEventsTracker onAdResponseStartDeserialize:] */

void FUN_106455a24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x60);
    lVar2 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      lVar1 = param_3;
      func_0x00010bef2c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010bef4c20(param_3);
      func_0x00010c1643c0(uVar3);
      lVar1 = param_3;
      func_0x00010bef2c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7bd20(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106455b38; end: 106455c0f; -[SCAdLifecycleWatermarkEventsTracker onAdResponseResolved:] */

void FUN_106455b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106455c10; end: 106455c4b;  */

void FUN_106455c10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be67900(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106455c4c; end: 106455e4f; -[SCAdLifecycleWatermarkEventsTracker _onAdResponseResolved:] */

void FUN_106455c4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010c0dff20(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0(uVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b0c0(param_3);
      func_0x00010c1643a0(uVar3);
      lVar2 = param_3;
      func_0x00010bef2c20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163720(uVar3,param_2,lVar2);
      _objc_release(lVar2);
      lVar2 = param_3;
      func_0x00010bef4d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1642e0(uVar3,param_2,lVar2);
      _objc_release(lVar2);
      puVar4 = PTR_PTR_1126b8ca0;
      lVar2 = param_3;
      func_0x00010bef60a0(param_3);
      func_0x00010c25d240(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164dc0(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      lVar2 = param_3;
      func_0x00010bef52c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c130960();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      lVar2 = lVar7;
      func_0x00010c130980(lVar7);
      func_0x00010c20e600(uVar3,param_2,lVar2 == 0);
      lVar2 = param_3;
      func_0x00010bef4240(param_3);
      func_0x00010c163f80(uVar3,param_2,lVar2);
      func_0x00010bfad040(lVar7);
      func_0x00010c163b40(uVar3);
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010c1643e0(uVar3);
      func_0x00010bf76ce0(param_1,param_2,lVar1);
      _objc_release(lVar7);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106455e50; end: 106455f37; -[SCAdLifecycleWatermarkEventsTracker onAdMediaStartDownload:mediaStartDownloadTimestamp:] */

void FUN_106455e50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106455f38; end: 106455f77;  */

void FUN_106455f38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be677a0(*(undefined8 *)(param_1 + 0x30),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106455f78; end: 106456073; -[SCAdLifecycleWatermarkEventsTracker _onAdMediaStartDownload:mediaStartDownloadTimestamp:] */

void FUN_106455f78(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + 0x60);
    func_0x00010c0dff20(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126ca998;
      _objc_opt_new(PTR_PTR_1126ca998);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x60),param_3,puVar2,param_4);
      func_0x00010c164260(puVar2,param_3,param_4);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c0e00e0(uVar3,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163b60(param_1);
    puVar2 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf88860();
    func_0x00010c163aa0(uVar3,param_3,puVar4);
    _objc_release(puVar2);
    func_0x00010bf7bc40(param_2,param_3,param_4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106456074; end: 1064561fb; -[SCAdLifecycleWatermarkEventsTracker onAdMediaFinishDownload:mediaFinishDownloadTimestamp:errorCode:mediaCacheHit:mediaDownloadSuccess:mediaURL:adServeItemId:mediaLocationType:enableMediaDownloadMetricV1:enableMediaDownloadMetricV2:] */

void FUN_106456074(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_78,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_a0,auStack_78);
  _objc_retain(param_4);
  uStack_98 = param_1;
  uStack_90 = param_5;
  uStack_80 = param_6;
  uStack_7f = param_7;
  _objc_retain(param_8);
  _objc_retain(param_9);
  uStack_88 = param_10;
  uStack_7e = param_11;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  return;
}



/* Entry: 1064561fc; end: 10645625f;  */

void FUN_1064561fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be67780(*(undefined8 *)(param_1 + 0x40),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48),
                        *(undefined1 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x59),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x50),*(undefined2 *)(param_1 + 0x5a));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106456260; end: 1064563c7; -[SCAdLifecycleWatermarkEventsTracker _onAdMediaFinishDownload:mediaFinishDownloadTimestamp:errorCode:mediaCacheHit:mediaDownloadSuccess:mediaURL:adServeItemId:mediaLocationType:enableMediaDownloadMetricV1:enableMediaDownloadMetricV2:] */

void FUN_106456260(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x60);
    func_0x00010c0dff20(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163b20(param_1);
      func_0x00010c1c41e0(uVar2,param_3,param_6);
      func_0x00010bf76c40(param_2,param_3,param_4);
      if (param_11._1_1_ != '\0') {
        func_0x00010c132480(param_2,param_3,uVar2,param_5,param_7,param_8,param_9,param_10,0);
      }
      if ((char)param_11 != '\0') {
        func_0x00010c132480(param_2,param_3,uVar2,param_5,param_7,param_8,param_9,param_10,1);
      }
      _objc_release(uVar2);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064563c8; end: 10645650b; -[SCAdLifecycleWatermarkEventsTracker onStreamingMetricsReportEvent:] */

void FUN_1064563c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    lVar1 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_1064564f4;
    lVar2 = *(long *)(param_1 + 0x60);
    lVar1 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0c6860(param_3);
    func_0x00010c209260(lVar2,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c0c5000(param_3);
    func_0x00010c19d600(lVar2,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c0c6bc0(param_3);
    func_0x00010c218980(lVar2,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c0c6ba0(param_3);
    func_0x00010c218960(lVar2,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c0c4fe0(param_3);
    func_0x00010c19d5c0(lVar2,param_2,lVar1);
  }
  _objc_release(lVar2);
LAB_1064564f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10645650c; end: 1064565fb; -[SCAdLifecycleWatermarkEventsTracker onAdOpportunity:adOpportunityType:adOpportunityTimestamp:] */

void FUN_10645650c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_5;
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1064565fc; end: 10645663f;  */

void FUN_1064565fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be677e0(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106456640; end: 1064566e7; -[SCAdLifecycleWatermarkEventsTracker _onAdOpportunity:adOpportunityType:adOpportunityTimestamp:] */

void FUN_106456640(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if ((param_5 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = *(long *)(param_2 + 0x60);
    func_0x00010c0dff20(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283420(param_2,param_3,param_5,(long)param_1,uVar2);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064566e8; end: 1064567cf; -[SCAdLifecycleWatermarkEventsTracker onAdShown:adShowTimestamp:] */

void FUN_1064566e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1064567d0; end: 10645680f;  */

void FUN_1064567d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be67940(*(undefined8 *)(param_1 + 0x30),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106456810; end: 1064568b3; -[SCAdLifecycleWatermarkEventsTracker _onAdShown:adShowTimestamp:] */

void FUN_106456810(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x60);
    func_0x00010c0dff20(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1e60();
      if (dVar3 == 0.0) {
        func_0x00010c19d700(param_1,uVar2);
      }
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064568b4; end: 10645699b; -[SCAdLifecycleWatermarkEventsTracker onAdHidden:adHiddenTimestamp:] */

void FUN_1064568b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10645699c; end: 1064569db;  */

void FUN_10645699c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be67660(*(undefined8 *)(param_1 + 0x30),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064569dc; end: 106456a7f; -[SCAdLifecycleWatermarkEventsTracker _onAdHidden:adHiddenTimestamp:] */

void FUN_1064569dc(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x60);
    func_0x00010c0dff20(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1e40();
      if (dVar3 == 0.0) {
        func_0x00010c19d6e0(param_1,uVar2);
      }
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106456a80; end: 106456c63; -[SCAdLifecycleWatermarkEventsTracker onUpdateVideoLoadingStatus:] */

void FUN_106456a80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x60);
    lVar1 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if (lVar4 == 0) goto LAB_106456c4c;
    lVar3 = *(long *)(param_1 + 0x60);
    lVar1 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010c29a580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0c5760(param_3);
      func_0x00010c0df6e0(puVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221a40(lVar3,param_2,puVar2);
      _objc_release(puVar2);
    }
    lVar1 = lVar3;
    func_0x00010c29a5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0c5780(param_3);
      func_0x00010c0df6e0(puVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221a60(lVar3,param_2,puVar2);
      _objc_release(puVar2);
    }
    lVar1 = lVar3;
    func_0x00010c0c71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      func_0x00010c0c71e0(param_3);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c56c0(lVar3,param_2,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar3);
LAB_106456c4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106456c64; end: 106456d3b; -[SCAdLifecycleWatermarkEventsTracker adExpired:] */

void FUN_106456c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106456d3c; end: 106456dab;  */

void FUN_106456d3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar1 + 0x60);
      func_0x00010c0dff20(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x60),param_2,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106456dac; end: 106456e83; -[SCAdLifecycleWatermarkEventsTracker onAdInserted:] */

void FUN_106456dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106456e84; end: 106456ebf;  */

void FUN_106456e84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be67680(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106456ec0; end: 106456f5f; -[SCAdLifecycleWatermarkEventsTracker _onAdInserted:] */

void FUN_106456ec0(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x60);
    func_0x00010c0dff20(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef3040();
      if (param_1 == 0.0) {
        func_0x00010bf604c0(PTR_PTR_1126afec0);
        func_0x00010c163940(uVar2);
      }
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106456f60; end: 106457097; -[SCAdLifecycleWatermarkEventsTracker updateAdOpportunityInfo:adOpportunityTimestamp:adLifecycleInfo:] */

void FUN_106456f60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  if (param_3 < 5) {
    if (param_3 < 3) {
      if (param_3 == 1) {
        lVar1 = param_5;
        func_0x00010c0da760(param_5);
        func_0x00010c1cd780(param_5,param_2,lVar1 + 1);
        func_0x00010c1cd7a0((double)param_4,param_5);
      }
      else if (param_3 == 2) {
        func_0x00010c1cd760(param_5,param_2,1);
      }
    }
    else if (param_3 == 3) {
      lVar1 = param_5;
      func_0x00010c0da700(param_5);
      func_0x00010c1cd6e0(param_5,param_2,lVar1 + 1);
      func_0x00010c1cd700((double)param_4,param_5);
    }
    else if (param_3 == 4) {
      lVar1 = param_5;
      func_0x00010c0da6e0(param_5);
      func_0x00010c1cd6c0(param_5,param_2,lVar1 + 1);
    }
  }
  else if (param_3 - 6U < 2) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c163940(param_5);
  }
  else if (param_3 == 5) {
    lVar1 = param_5;
    func_0x00010c0da740(param_5);
    func_0x00010c1cd740(param_5,param_2,lVar1 + 1);
  }
  else if (param_3 == 8) {
    lVar1 = param_5;
    func_0x00010c0da720(param_5);
    func_0x00010c1cd720(param_5,param_2,lVar1 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106457098; end: 1064574c3; -[SCAdLifecycleWatermarkEventsTracker reportAdMediaDownloadMetrics:errorCode:mediaDownloadSuccess:mediaURL:adServeItemId:mediaLocationType:isV1Metric:adIdentifier:] */

void FUN_106457098(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  ulong param_6,undefined8 param_7,long param_8,long param_9,char param_10,
                  undefined4 param_11,undefined8 param_12)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  ppuVar1 = &PTR_PTR_1126ca9a8;
  if ((int)param_6 == 0) {
    ppuVar1 = &PTR_PTR_1126ca9b0;
  }
  ppuVar2 = &PTR_PTR_1126ca9a0;
  if (param_10 == '\0') {
    ppuVar2 = ppuVar1;
  }
  puVar3 = *ppuVar2;
  _objc_opt_new(puVar3);
  lVar9 = param_4;
  func_0x00010bef2c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar3,param_3,lVar9);
  _objc_release(lVar9);
  func_0x00010c164480(puVar3,param_3,param_8);
  func_0x00010c163460(puVar3,param_3,0);
  lVar9 = param_4;
  func_0x00010bef4920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar3,param_3,lVar9);
  _objc_release(lVar9);
  lVar9 = param_4;
  func_0x00010bef60a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar3,param_3,lVar9);
  _objc_release(lVar9);
  lVar9 = param_4;
  func_0x00010bef4200(param_4);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar3,param_3,lVar9);
  lVar9 = param_4;
  func_0x00010c0c42c0(param_4);
  func_0x00010c163ac0(puVar3,param_3,lVar9);
  func_0x00010bef36e0(param_4);
  func_0x00010c163b00(puVar3,param_3,(long)param_1);
  func_0x00010bef3640(param_4);
  dVar10 = param_1;
  func_0x00010bef3700(param_4);
  func_0x00010c163ae0(puVar3,param_3,(long)(param_1 - dVar10));
  func_0x00010c163b80(puVar3,param_3,param_7);
  func_0x00010c1913e0(puVar3,param_3,param_6);
  lVar9 = param_4;
  func_0x00010bef5ae0(param_4);
  func_0x00010c1c5440(puVar3,param_3,lVar9);
  lVar9 = 5 - param_9;
  if (4 < param_9 - 1U) {
    lVar9 = -1;
  }
  func_0x00010c1c4b20(puVar3,param_3,lVar9);
  if ((0 < param_5) && ((param_6 & 1) == 0)) {
    func_0x00010c20a3c0(puVar3,param_3,param_5);
  }
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar4);
  _objc_alloc_init(puVar5);
  lVar9 = param_4;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  if (lVar6 != 0) {
    lVar9 = param_4;
    func_0x00010bef2c20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_3,lVar9,&PTR____CFConstantStringClassReference_110e4fbf8);
    _objc_release(lVar9);
  }
  lVar9 = param_4;
  func_0x00010bef4200();
  func_0x0001084b952c();
  func_0x00010bae7a70();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  if (lVar6 != 0) {
    lVar9 = param_4;
    func_0x00010bef4200(param_4);
    func_0x0001084b952c();
    func_0x00010bae7a70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_3,lVar9,&PTR____CFConstantStringClassReference_110e4fc38);
    _objc_release(lVar9);
  }
  lVar9 = param_8;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    func_0x00010c1d0640(puVar5,param_3,param_8,&PTR____CFConstantStringClassReference_110e4fc78);
  }
  lVar9 = param_4;
  func_0x00010bef60a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  if (lVar6 != 0) {
    lVar9 = param_4;
    func_0x00010bef60a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_3,lVar9,&PTR____CFConstantStringClassReference_110e4fc18);
    _objc_release(lVar9);
  }
  puVar7 = puVar3;
  func_0x00010bfc52e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf0a640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eeb40(uVar4,param_3,puVar7,&PTR____CFConstantStringClassReference_110e4fcd8,param_12
                      ,puVar5,puVar8);
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064574c4; end: 1064574cf; +[SCAdLifecycleWatermarkEventsTracker _isValidAdLifecycleAdRequest:] */

bool FUN_1064574c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 3;
}



/* Entry: 1064574d0; end: 106457547; -[SCAdLifecycleWatermarkEventsTracker adInsertionTimestampInMillisForAdIdentifier:] */

undefined8 FUN_1064574d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bdc5540(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef3040();
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106457548; end: 1064575bf; -[SCAdLifecycleWatermarkEventsTracker adResponseParseCompleteTimestampInMillisForAdIdentifier:] */

undefined8 FUN_106457548(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bdc5540(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4ba0();
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1064575c0; end: 1064576d7; -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdPrefetchEventWithAdResponse:adPrefetchStartTimestamp:adPrefetchEndTimestamp:adPrefetchCacheHit:] */

void FUN_1064575c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bdd5b00(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca9b8;
  _objc_alloc(PTR_PTR_1126ca9b8);
  func_0x00010bff1aa0(param_1,param_2);
  func_0x00010c2a7ac0(uVar1,param_4,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a79a0(uVar1,param_4,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x0001084c6dd0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c2a7780(uVar1,param_4,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f300(param_3,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064576d8; end: 1064577ef; -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdInsertionEventWithAdResponse:adInsertionTimestampInMillis:] */

void FUN_1064576d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bdd5b00(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef5600(param_4);
  puVar2 = PTR_PTR_1126ca9c0;
  _objc_alloc(PTR_PTR_1126ca9c0);
  func_0x00010bff18a0(param_1);
  func_0x00010c2a7940(uVar1,param_3,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a79a0(uVar1,param_3,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x0001084c6dd0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2a7780(uVar1,param_3,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f300(param_2,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064577f0; end: 10645792f; -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdCacheEventWithAdResponse:adCacheCreationCause:adCacheCreationTime:adCacheEvictionCause:adCacheEvictionTime:] */

void FUN_1064577f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bdd5b00(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca9c8;
  _objc_alloc(PTR_PTR_1126ca9c8);
  func_0x00010bff1040(param_1,param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x00010c2a7760(uVar1,param_4,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a79a0(uVar1,param_4,3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x0001084c6dd0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c2a7780(uVar1,param_4,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f300(param_3,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106457930; end: 106457a73; -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackAttemptEventWithAdResponse:adTrackStartTimestamp:adTrackAttempt:sessionId:trackSeqNumber:adTrackAttachmentTriggered:] */

void FUN_106457930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010bdd5b00(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a79a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8500(uVar1,param_3,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bba80(uVar1,param_3,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ca9d0;
  _objc_alloc(PTR_PTR_1126ca9d0);
  func_0x00010bff20c0(param_1,0);
  func_0x00010c2a7de0(uVar1,param_3,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f300(param_2,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106457a74; end: 106457c47; -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackAttemptEventWithAdServeItemId:adServeTimestamp:adId:adType:adProductType:adTrackStartTimestamp:adTrackRetro:adTrackAttempt:sessionId:trackSeqNumber:] */

void FUN_106457a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126ca9d8;
  _objc_opt_new(PTR_PTR_1126ca9d8);
  func_0x00010c2a79a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7ca0(puVar1,param_4,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7cc0(param_1,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7840(puVar1,param_4,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7e20(puVar1,param_4,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7ae0(puVar1,param_4,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8500(puVar1,param_4,param_11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bba80(puVar1,param_4,param_12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca9d0;
  _objc_alloc(PTR_PTR_1126ca9d0);
  func_0x00010bff20c0(param_2,0);
  func_0x00010c2a7de0(puVar1,param_4,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f300(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106457c48; end: 106457d7f; -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackEventWithAdResponse:adTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:adTrackAttachmentTriggered:] */

void FUN_106457c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bdd5b00(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca9d0;
  _objc_alloc(PTR_PTR_1126ca9d0);
  func_0x00010bff20c0(param_1,param_2);
  func_0x00010c2a7de0(uVar1,param_4,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a79a0(uVar1,param_4,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x0001084c6dd0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c2a7780(uVar1,param_4,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f300(param_3,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106457d80; end: 106457f1b; -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackEventWithAdServeItemId:adServeTimestamp:adId:adType:adProductType:adTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:] */

void FUN_106457d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ca9d8;
  _objc_opt_new(PTR_PTR_1126ca9d8);
  func_0x00010c2a7ca0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7cc0(param_1,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7840(puVar1,param_5,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7e20(puVar1,param_5,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7ae0(puVar1,param_5,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca9d0;
  _objc_alloc(PTR_PTR_1126ca9d0);
  func_0x00010bff20c0(param_2,param_3);
  func_0x00010c2a7de0(puVar1,param_5,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a79a0(puVar1,param_5,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f300(param_4,param_5,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106457f1c; end: 1064580eb; -[SCAdLifecycleWatermarkEventsTracker _buildAdIdentificationWithAdResponse:] */

void FUN_106457f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ca9d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7bc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7ca0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c13b0c0(param_3);
  func_0x00010c2a7cc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7840(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8ca0;
  func_0x00010bef60a0(param_3);
  func_0x00010c25d240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7e20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bef4240(param_3);
  func_0x00010c2a7ae0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0ec0e0(param_3);
  func_0x00010c2b4f80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c6f7c(param_3,uVar4);
  _objc_release(param_3);
  func_0x00010c2b59e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064580ec; end: 106458147; -[SCAdLifecycleWatermarkEventsTracker _reportAdLifecycleV2Metrics:] */

void FUN_1064580ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca9e0;
  func_0x00010bef33e0(PTR_PTR_1126ca9e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106458148; end: 106458403; -[SCAdLifecycleWatermarkEventsTracker getLifecycleInfoMetadataForAdResponse:adSnap:] */

void FUN_106458148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
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
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5540(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ca9e8;
  _objc_alloc();
  uVar1 = param_1;
  func_0x00010bef4a20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef49c0(param_1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef4880(param_1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_1;
  func_0x00010bef49a0(param_1);
  func_0x00010c0df780(puVar8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef36e0(param_1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef3040(param_1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb1e60(param_1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb1e40(param_1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1d00(puVar2,param_2,uVar1,puVar4,puVar6,puVar9,puVar11,0,puVar13,puVar15,puVar17,
                      param_3);
  _objc_release(param_3);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106458404; end: 10645850f; -[SCAdLifecycleWatermarkEventsTracker updateAdIdentifier:forAdResponse:] */

void FUN_106458404(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106458510; end: 106458573;  */

void FUN_106458510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe5ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed29c0(lVar2,param_2,uVar1,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106458574; end: 1064585df; -[SCAdLifecycleWatermarkEventsTracker _updateAdIdentifier:oldAdIdentifier:] */

void FUN_106458574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,uVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064585e0; end: 106458607; -[SCAdLifecycleWatermarkEventsTracker adCreationLifecyleEventObservable] */

void FUN_1064585e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106458608; end: 1064586cb; -[SCAdLifecycleWatermarkEventsTracker didStartAdRequestForAdPodIdentifier:] */

void FUN_106458608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    _os_unfair_lock_lock(param_1 + 0x30);
    dVar3 = *(double *)(param_1 + 0x48);
    if (dVar3 == 0.0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(param_1 + 0x48) = dVar3 * 1000.0;
      _objc_release(puVar1);
    }
    _os_unfair_lock_unlock(param_1 + 0x30);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010c24dac0(PTR_PTR_1126ca9f0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064586cc; end: 10645870f; -[SCAdLifecycleWatermarkEventsTracker didFinishAdRequestForAdPodIdentifier:] */

void FUN_1064586cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010bfaf6a0(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106458710; end: 106458753; -[SCAdLifecycleWatermarkEventsTracker didStartMediaDownloadForAdPodIdentifier:] */

void FUN_106458710(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010c24f380(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106458754; end: 106458797; -[SCAdLifecycleWatermarkEventsTracker didFinishMediaDownloadForAdPodIdentifier:] */

void FUN_106458754(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010bfaf9c0(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106458798; end: 1064587db; -[SCAdLifecycleWatermarkEventsTracker didStartParseForAdPodIdentifier:] */

void FUN_106458798(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010c24fd00(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064587dc; end: 10645881f; -[SCAdLifecycleWatermarkEventsTracker didFinishParseForAdPodIdentifier:] */

void FUN_1064587dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010bfafa80(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106458820; end: 106458863; -[SCAdLifecycleWatermarkEventsTracker didCreatedPendingAdPodForIdentifier:] */

void FUN_106458820(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010bf577c0(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106458864; end: 1064588a7; -[SCAdLifecycleWatermarkEventsTracker didInsertAdPodForIdentifier:] */

void FUN_106458864(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010c066560(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064588a8; end: 10645894b; -[SCAdLifecycleWatermarkEventsTracker didEnterSurface] */

void FUN_1064588a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    _os_unfair_lock_lock(param_1 + 0x30);
    dVar3 = *(double *)(param_1 + 0x40);
    if (dVar3 == 0.0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(param_1 + 0x40) = dVar3 * 1000.0;
      _objc_release(puVar1);
    }
    _os_unfair_lock_unlock(param_1 + 0x30);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010bf96c80(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10645894c; end: 106458a0f; -[SCAdLifecycleWatermarkEventsTracker didSubmitAdRequestForAdPodIdentifier:] */

void FUN_10645894c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    _os_unfair_lock_lock(param_1 + 0x30);
    dVar3 = *(double *)(param_1 + 0x50);
    if (dVar3 == 0.0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(param_1 + 0x50) = dVar3 * 1000.0;
      _objc_release(puVar1);
    }
    _os_unfair_lock_unlock(param_1 + 0x30);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010c25ee60(PTR_PTR_1126ca9f0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106458a10; end: 106458aab; -[SCAdLifecycleWatermarkEventsTracker didTileTap] */

void FUN_106458a10(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_2 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(double *)(param_2 + 0x38) = param_1 * 1000.0;
  _objc_release(puVar1);
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  _os_unfair_lock_unlock(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR_PTR_1126ca9f0;
  func_0x00010c26edc0(PTR_PTR_1126ca9f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106458aac; end: 106458aeb; -[SCAdLifecycleWatermarkEventsTracker consumeTileTapTimestampMs] */

undefined8 FUN_106458aac(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _os_unfair_lock_unlock(param_1 + 0x30);
  return uVar1;
}



/* Entry: 106458aec; end: 106458b27; -[SCAdLifecycleWatermarkEventsTracker consumeSurfaceEnteredTimestampMs] */

undefined8 FUN_106458aec(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _os_unfair_lock_unlock(param_1 + 0x30);
  return uVar1;
}



/* Entry: 106458b28; end: 106458b63; -[SCAdLifecycleWatermarkEventsTracker consumeRequestStartTimestampMs] */

undefined8 FUN_106458b28(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _os_unfair_lock_unlock(param_1 + 0x30);
  return uVar1;
}



/* Entry: 106458b64; end: 106458b9f; -[SCAdLifecycleWatermarkEventsTracker consumeRequestSubmittedTimestampMs] */

undefined8 FUN_106458b64(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _os_unfair_lock_unlock(param_1 + 0x30);
  return uVar1;
}



/* Entry: 106458ba0; end: 106458c6b; -[SCAdLifecycleWatermarkEventsTracker adLifecycleInfoMap] */

void FUN_106458ba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106458c6c;
  uStack_30 = 0x106458c7c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106458c84;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106458c6c; end: 106458c83;  */

void FUN_106458c6c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106458c84; end: 106458cb7;  */

void FUN_106458c84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106458cb8; end: 106458dcf; -[SCAdLifecycleWatermarkEventsTracker _adLifecycleInfoForAdIdentifier:] */

void FUN_106458cb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106458c6c;
    uStack_40 = 0x106458c7c;
    uStack_38 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar2);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106458dd0; end: 106458e13;  */

void FUN_106458dd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106458e14; end: 106458e43; -[SCAdLifecycleWatermarkEventsTracker setAdLifecycleInfoMap:] */

void FUN_106458e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106458e44; end: 106458ef7; -[SCAdLifecycleWatermarkEventsTracker .cxx_destruct] */

void FUN_106458e44(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106458ef8; end: 10645919f; -[SCAdLifecycleInfoV2 initWithAdRequestClientId:adServeItemId:adServeTimestamp:adId:adType:sessionId:trackSeqNumber:adProductSourceType:optimizationGoal:adLifecycleEventType:adCacheInfo:adInsertionInfo:adTrackInfo:adPrefetchInfo:adClientRenderTypes:preferredAttachmentType:] */

undefined8 *
FUN_106458ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_78 = PTR_PTR_1126f1348;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_10;
    puVar1[9] = param_11;
    puVar1[10] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    puVar1[0x10] = param_18;
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1064591a0; end: 1064591c3; -[SCAdLifecycleInfoV2 copyWithZone:] */

undefined8 FUN_1064591a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1064591c4; end: 1064591cb; -[SCAdLifecycleInfoV2 adRequestClientId] */

undefined8 FUN_1064591c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064591cc; end: 1064591d3; -[SCAdLifecycleInfoV2 adServeItemId] */

undefined8 FUN_1064591cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064591d4; end: 1064591db; -[SCAdLifecycleInfoV2 adServeTimestamp] */

undefined8 FUN_1064591d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064591dc; end: 1064591e3; -[SCAdLifecycleInfoV2 adId] */

undefined8 FUN_1064591dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1064591e4; end: 1064591eb; -[SCAdLifecycleInfoV2 adType] */

undefined8 FUN_1064591e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1064591ec; end: 1064591f3; -[SCAdLifecycleInfoV2 sessionId] */

undefined8 FUN_1064591ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1064591f4; end: 1064591fb; -[SCAdLifecycleInfoV2 trackSeqNumber] */

undefined8 FUN_1064591f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1064591fc; end: 106459203; -[SCAdLifecycleInfoV2 adProductSourceType] */

undefined8 FUN_1064591fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106459204; end: 10645920b; -[SCAdLifecycleInfoV2 optimizationGoal] */

undefined8 FUN_106459204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10645920c; end: 106459213; -[SCAdLifecycleInfoV2 adLifecycleEventType] */

undefined8 FUN_10645920c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106459214; end: 10645921b; -[SCAdLifecycleInfoV2 adCacheInfo] */

undefined8 FUN_106459214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10645921c; end: 106459223; -[SCAdLifecycleInfoV2 adInsertionInfo] */

undefined8 FUN_10645921c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106459224; end: 10645922b; -[SCAdLifecycleInfoV2 adTrackInfo] */

undefined8 FUN_106459224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10645922c; end: 106459233; -[SCAdLifecycleInfoV2 adPrefetchInfo] */

undefined8 FUN_10645922c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106459234; end: 10645923b; -[SCAdLifecycleInfoV2 adClientRenderTypes] */

undefined8 FUN_106459234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10645923c; end: 106459243; -[SCAdLifecycleInfoV2 preferredAttachmentType] */

undefined8 FUN_10645923c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106459244; end: 1064592df; -[SCAdLifecycleInfoV2 .cxx_destruct] */

void FUN_106459244(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064592e0; end: 1064592fb; +[SCAdLifecycleInfoV2Builder adLifecycleInfoV2] */

void FUN_1064592e0(void)

{
  _objc_alloc_init(PTR_PTR_1126ca9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064592fc; end: 1064596fb; +[SCAdLifecycleInfoV2Builder adLifecycleInfoV2FromExistingAdLifecycleInfoV2:] */

void FUN_1064592fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  
  puVar1 = PTR_PTR_1126ca9d8;
  _objc_retain(param_3);
  func_0x00010bef3320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a7bc0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a7ca0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4dc0(param_3);
  puVar6 = puVar5;
  func_0x00010c2a7cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2a7840(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bef60a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2a7e20(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2b8500(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c278860();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2bba80(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bef4200(param_3);
  puVar16 = puVar14;
  func_0x00010c2a7ae0(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0ec0e0(param_3);
  puVar17 = puVar16;
  func_0x00010c2b4f80(puVar16,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bef32e0(param_3);
  puVar18 = puVar17;
  func_0x00010c2a79a0(puVar17,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bef2240();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c2a7760(puVar18,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bef2fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2a7940(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bef5de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2a7de0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bef4020(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c2a7ac0(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010bef22c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010c2a7780(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c106900(param_3);
  _objc_release(param_3);
  puVar29 = puVar27;
  func_0x00010c2b59e0(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar15);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 1064596fc; end: 106459757; -[SCAdLifecycleInfoV2Builder build] */

void FUN_1064596fc(long param_1)

{
  _objc_alloc(PTR_PTR_1126caa00);
  func_0x00010bff1c80(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106459758; end: 10645978f; -[SCAdLifecycleInfoV2Builder withAdRequestClientId:] */

long FUN_106459758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106459790; end: 1064597c7; -[SCAdLifecycleInfoV2Builder withAdServeItemId:] */

long FUN_106459790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064597c8; end: 1064597cf; -[SCAdLifecycleInfoV2Builder withAdServeTimestamp:] */

void FUN_1064597c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1064597d0; end: 106459807; -[SCAdLifecycleInfoV2Builder withAdId:] */

long FUN_1064597d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106459808; end: 10645983f; -[SCAdLifecycleInfoV2Builder withAdType:] */

long FUN_106459808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106459840; end: 106459877; -[SCAdLifecycleInfoV2Builder withSessionId:] */

long FUN_106459840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106459878; end: 1064598af; -[SCAdLifecycleInfoV2Builder withTrackSeqNumber:] */

long FUN_106459878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064598b0; end: 1064598b7; -[SCAdLifecycleInfoV2Builder withAdProductSourceType:] */

void FUN_1064598b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1064598b8; end: 1064598bf; -[SCAdLifecycleInfoV2Builder withOptimizationGoal:] */

void FUN_1064598b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 1064598c0; end: 1064598c7; -[SCAdLifecycleInfoV2Builder withAdLifecycleEventType:] */

void FUN_1064598c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1064598c8; end: 1064598ff; -[SCAdLifecycleInfoV2Builder withAdCacheInfo:] */

long FUN_1064598c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}


