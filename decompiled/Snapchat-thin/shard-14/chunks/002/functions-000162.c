/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b05b818; end: 10b05b853; -[SCLensDepthMetadata .cxx_destruct] */

void FUN_10b05b818(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05b854; end: 10b05b86f; +[SCLensDepthMetadataBuilder lensDepthMetadata] */

void FUN_10b05b854(void)

{
  _objc_alloc_init(PTR_PTR_1126df4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05b870; end: 10b05b987; +[SCLensDepthMetadataBuilder lensDepthMetadataFromExistingLensDepthMetadata:] */

void FUN_10b05b870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126df4b8;
  _objc_retain(param_3);
  func_0x00010c092720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15ea80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b83e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c15e9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b83a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c15ebc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2b8400(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b05b988; end: 10b05b9bb; -[SCLensDepthMetadataBuilder build] */

void FUN_10b05b988(void)

{
  _objc_alloc(PTR_PTR_1126df4c0);
  func_0x00010c044a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05b9bc; end: 10b05b9f3; -[SCLensDepthMetadataBuilder withSerializedDepthMapAsPNGRawData:] */

long FUN_10b05b9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b05b9f4; end: 10b05ba2b; -[SCLensDepthMetadataBuilder withSerializedCameraInfoData:] */

long FUN_10b05b9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b05ba2c; end: 10b05ba63; -[SCLensDepthMetadataBuilder withSerializedSegmentationMaskAsPNGRawData:] */

long FUN_10b05ba2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b05ba64; end: 10b05ba9f; -[SCLensDepthMetadataBuilder .cxx_destruct] */

void FUN_10b05ba64(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05baa0; end: 10b05bb47; -[SCLensRawDeviceMotionData initWithImuData:] */

undefined1 * FUN_10b05baa0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar4 = &uStack_30;
  puStack_28 = PTR_PTR_112704ed8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar8 = param_3[1];
    uVar7 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)((long)puVar4 + 0x10);
    *(undefined8 *)((long)puVar4 + 0x10) = uVar8;
    *(undefined8 *)((long)puVar4 + 8) = uVar7;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b05bb48; end: 10b05bb6f; -[SCLensRawDeviceMotionData imuData] */

void FUN_10b05bb48(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10b05bb70; end: 10b05bb77; -[SCLensRawDeviceMotionData .cxx_destruct] */

long FUN_10b05bb70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10b05bb78; end: 10b05bb7f; -[SCLensRawDeviceMotionData .cxx_construct] */

void FUN_10b05bb78(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b05bb80; end: 10b05bc07; -[SCManagedCapturerSampleMetadata initWithPresentationTimestamp:captureTimestamp:fieldOfView:captureDevicePosition:] */

void FUN_10b05bb80(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112704ee0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4[2];
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar3 = param_5[1];
    uVar2 = *param_5;
    *(undefined8 *)((long)puVar1 + 0x40) = param_5[2];
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
  }
  return;
}



/* Entry: 10b05bc08; end: 10b05bc2b; -[SCManagedCapturerSampleMetadata copyWithZone:] */

undefined8 FUN_10b05bc08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05bc2c; end: 10b05bce3; -[SCManagedCapturerSampleMetadata hash] */

undefined8 * FUN_10b05bc2c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = (ulong)*(uint *)(param_1 + 0x24);
  lStack_60 = (long)*(int *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = (ulong)*(uint *)(param_1 + 0x3c);
  lStack_40 = (long)*(int *)(param_1 + 0x38);
  uVar4 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  lStack_28 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_68;
  func_0x000107c3191c(puVar2,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar5 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar3 & 1) != 0) && (puVar2[2] == param_3[2])) {
        uStack_b8 = puVar2[4];
        uStack_c0 = puVar2[3];
        uStack_b0 = puVar2[5];
        uStack_d8 = param_3[4];
        uStack_e0 = param_3[3];
        uStack_d0 = param_3[5];
        puVar5 = &uStack_c0;
        _CMTimeCompare(puVar5,&uStack_e0);
        if ((int)puVar5 == 0) {
          uStack_b8 = puVar2[7];
          uStack_c0 = puVar2[6];
          uStack_b0 = puVar2[8];
          uStack_d8 = param_3[7];
          uStack_e0 = param_3[6];
          uStack_d0 = param_3[8];
          puVar5 = &uStack_c0;
          _CMTimeCompare(puVar5,&uStack_e0);
          if ((int)puVar5 == 0) {
            fVar6 = ABS(*(float *)(puVar2 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
            if (fVar6 <= 1.1754944e-38) {
              fVar6 = 1.1754944e-38;
            }
            puVar5 = (undefined8 *)
                     (ulong)(ABS(*(float *)(puVar2 + 1) - *(float *)(param_3 + 1)) < fVar6);
            goto LAB_10b05bdb0;
          }
        }
      }
      puVar5 = (undefined8 *)0x0;
    }
  }
LAB_10b05bdb0:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b05bce4; end: 10b05be03; -[SCManagedCapturerSampleMetadata isEqual:] */

bool FUN_10b05bce4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  float fVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
        uStack_48 = *(undefined8 *)(param_1 + 0x20);
        uStack_50 = *(undefined8 *)(param_1 + 0x18);
        uStack_40 = *(undefined8 *)(param_1 + 0x28);
        uStack_68 = *(undefined8 *)(param_3 + 0x20);
        uStack_70 = *(undefined8 *)(param_3 + 0x18);
        uStack_60 = *(undefined8 *)(param_3 + 0x28);
        puVar3 = &uStack_50;
        _CMTimeCompare(puVar3,&uStack_70);
        if ((int)puVar3 == 0) {
          uStack_48 = *(undefined8 *)(param_1 + 0x38);
          uStack_50 = *(undefined8 *)(param_1 + 0x30);
          uStack_40 = *(undefined8 *)(param_1 + 0x40);
          uStack_68 = *(undefined8 *)(param_3 + 0x38);
          uStack_70 = *(undefined8 *)(param_3 + 0x30);
          uStack_60 = *(undefined8 *)(param_3 + 0x40);
          puVar3 = &uStack_50;
          _CMTimeCompare(puVar3,&uStack_70);
          if ((int)puVar3 == 0) {
            fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
            if (fVar5 <= 1.1754944e-38) {
              fVar5 = 1.1754944e-38;
            }
            bVar4 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8)) < fVar5;
            goto LAB_10b05bdb0;
          }
        }
      }
      bVar4 = false;
    }
  }
LAB_10b05bdb0:
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 10b05be04; end: 10b05be17; -[SCManagedCapturerSampleMetadata presentationTimestamp] */

void FUN_10b05be04(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 10b05be18; end: 10b05be2b; -[SCManagedCapturerSampleMetadata captureTimestamp] */

void FUN_10b05be18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x40);
  return;
}



/* Entry: 10b05be2c; end: 10b05be33; -[SCManagedCapturerSampleMetadata fieldOfView] */

undefined4 FUN_10b05be2c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b05be34; end: 10b05be3b; -[SCManagedCapturerSampleMetadata captureDevicePosition] */

undefined8 FUN_10b05be34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05be3c; end: 10b05bedf; -[SCOverlayFormatImageWithTag initWithImage:tag:] */

undefined1 * FUN_10b05be3c(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_40;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar2 = (undefined1 **)0x0;
  }
  else {
    puStack_38 = PTR_PTR_112704ee8;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar2 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)((long)ppuVar2 + 8);
      *(long *)((long)ppuVar2 + 8) = param_3;
      _objc_release(uVar1);
      *(undefined8 *)((long)ppuVar2 + 0x10) = param_4;
    }
    _objc_retain(ppuVar2);
    param_1 = (undefined1 *)ppuVar2;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar2;
}



/* Entry: 10b05bee0; end: 10b05bf0b; -[SCOverlayFormatImageWithTag copyWithZone:] */

void FUN_10b05bee0(void)

{
  _objc_alloc(PTR_PTR_1126d4dc8);
                    /* WARNING: Could not recover jumptable at 0x00010c01c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b05bf0c; end: 10b05bf13; -[SCOverlayFormatImageWithTag image] */

undefined8 FUN_10b05bf0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05bf14; end: 10b05bf1b; -[SCOverlayFormatImageWithTag tag] */

undefined8 FUN_10b05bf14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05bf1c; end: 10b05bf27; -[SCOverlayFormatImageWithTag .cxx_destruct] */

void FUN_10b05bf1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05bf28; end: 10b05bf33; -[SCOverlayFormatServices .cxx_destruct] */

void FUN_10b05bf28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05bf34; end: 10b05bf3f; +[SCCContextOperaVerticalActionsRenderer componentPath] */

undefined ** FUN_10b05bf34(void)

{
  return &PTR____CFConstantStringClassReference_110f53cb8;
}



/* Entry: 10b05bf40; end: 10b05bf73; -[SCCContextOperaVerticalActionsRenderer initWithViewModel:componentContext:runtime:] */

void FUN_10b05bf40(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704ef8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10b05bf74; end: 10b05bfc3; -[SCCContextOperaVerticalActionsRenderer setViewModel:] */

void FUN_10b05bf74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b05bfc4; end: 10b05c007; -[SCCContextOperaVerticalActionsRenderer viewModel] */

void FUN_10b05bfc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b05c008; end: 10b05c02b; +[SCCContextRendererViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b05c008(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb3e60;
  param_1[1] = &PTR_DAT_110cb3e90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b05c02c; end: 10b05c127; -[SCContextActionBarParams initWithContextData:operaPage:arrowLayerText:logger:] */

undefined1 *
FUN_10b05c02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112704f00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05c128; end: 10b05c213; -[SCContextActionBarParams isEqual:] */

bool FUN_10b05c128(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x18);
        uVar6 = (uint)(lVar4 == 0 && *(long *)(param_3 + 0x18) == 0);
        if ((lVar4 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
          func_0x00010c0720c0();
          uVar6 = (uint)lVar4;
        }
        iVar5 = (int)*(undefined8 *)(param_1 + 8);
        uVar2 = param_3;
        func_0x00010bf4e4e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071ae0();
        bVar1 = false;
        if ((iVar5 != 0) && (uVar6 != 0)) {
          bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
        }
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b05c214; end: 10b05c21b; -[SCContextActionBarParams contextData] */

undefined8 FUN_10b05c214(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05c21c; end: 10b05c223; -[SCContextActionBarParams operaPage] */

undefined8 FUN_10b05c21c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05c224; end: 10b05c22b; -[SCContextActionBarParams arrowLayerText] */

undefined8 FUN_10b05c224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05c22c; end: 10b05c233; -[SCContextActionBarParams logger] */

undefined8 FUN_10b05c22c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05c234; end: 10b05c27b; -[SCContextActionBarParams .cxx_destruct] */

void FUN_10b05c234(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05c27c; end: 10b05c283; -[SCContextActionBarServices actionBarDataFetcher] */

undefined8 FUN_10b05c27c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05c284; end: 10b05c28f; -[SCContextActionBarServices .cxx_destruct] */

void FUN_10b05c284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05c290; end: 10b05c30b;  */

undefined * FUN_10b05c290(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3c68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f53cd8,
                        &UNK_10e553740,&UNK_10e553754,2,FUN_10b05c30c,0);
    do {
      if (puRam00000001137f3c68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3c68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3c68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3c68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3c68;
}



/* Entry: 10b05c30c; end: 10b05c317;  */

bool FUN_10b05c30c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b05c318; end: 10b05c393;  */

undefined * FUN_10b05c318(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3c70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f53cf8,
                        &UNK_10e55375c,&UNK_10e553774,3,FUN_10b05c394,0);
    do {
      if (puRam00000001137f3c70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3c70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3c70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3c70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3c70;
}



/* Entry: 10b05c394; end: 10b05c39f;  */

bool FUN_10b05c394(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b05c3a0; end: 10b05c41b;  */

undefined * FUN_10b05c3a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3c78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f53d18,
                        &UNK_10e553780,&UNK_10e5537a4,3,FUN_10b05c41c,0);
    do {
      if (puRam00000001137f3c78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3c78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3c78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3c78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3c78;
}



/* Entry: 10b05c41c; end: 10b05c427;  */

bool FUN_10b05c41c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b05c428; end: 10b05c48f; +[SCCTXCTA descriptor] */

void FUN_10b05c428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62d38,
                        &PTR____CFConstantStringClassReference_110e3dd18,&PTR_DAT_113366ed8,
                        &PTR_DAT_1133671b0,4,0x28,0x1c);
    puRam00000001137f3c80 = puVar1;
  }
  return;
}



/* Entry: 10b05c490; end: 10b05c513; +[SCCTXCTA_Gradient descriptor] */

undefined * FUN_10b05c490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62d60,
                        &PTR____CFConstantStringClassReference_110e5ae58,&PTR_DAT_113366ed8,
                        &PTR_s_style_113366ef0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3c88 = puVar1;
  }
  return puRam00000001137f3c88;
}



/* Entry: 10b05c514; end: 10b05c597; +[SCCTXCTA_Arrow descriptor] */

undefined * FUN_10b05c514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62d88,
                        &PTR____CFConstantStringClassReference_110f53d38,&PTR_DAT_113366ed8,
                        &PTR_s_style_113366f10,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3c90 = puVar1;
  }
  return puRam00000001137f3c90;
}



/* Entry: 10b05c598; end: 10b05c61b; +[SCCTXCTA_Zones descriptor] */

undefined * FUN_10b05c598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62db0,
                        &PTR____CFConstantStringClassReference_110f53d58,&PTR_DAT_113366ed8,
                        &PTR_DAT_113367090,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f3c98 = puVar1;
  }
  return puRam00000001137f3c98;
}



/* Entry: 10b05c61c; end: 10b05c683; +[SCCTXCTAZone descriptor] */

void FUN_10b05c61c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c628b0,
                        &PTR____CFConstantStringClassReference_110f53d78,&PTR_DAT_113366ed8,
                        &PTR_DAT_1133670f0,3,0x10,0x1c);
    puRam00000001137f3ca0 = puVar1;
  }
  return;
}



/* Entry: 10b05c684; end: 10b05c70f; +[SCCTXCTAElement descriptor] */

undefined * FUN_10b05c684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62900,
                        &PTR____CFConstantStringClassReference_110f53d98,&PTR_DAT_113366ed8,
                        &PTR_s_action_1133673d0,9,0x50,0x1c);
    func_0x00010c229040();
    puRam00000001137f3ca8 = puVar1;
  }
  return puRam00000001137f3ca8;
}



/* Entry: 10b05c710; end: 10b05c777; +[SCCTXCTARequest descriptor] */

void FUN_10b05c710(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62950,
                        &PTR____CFConstantStringClassReference_110f53db8,&PTR_DAT_113366ed8,
                        &PTR_s_snapId_113367790,0xd,0x38,0x1c);
    puRam00000001137f3cb0 = puVar1;
  }
  return;
}



/* Entry: 10b05c778; end: 10b05c7df; +[SCCTXCTAResponse descriptor] */

void FUN_10b05c778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c629a0,
                        &PTR____CFConstantStringClassReference_110f53dd8,&PTR_DAT_113366ed8,
                        &PTR_DAT_113367610,0xc,0x68,0x1c);
    puRam00000001137f3cb8 = puVar1;
  }
  return;
}



/* Entry: 10b05c7e0; end: 10b05c847; +[SCCTXRepostedContentInfo descriptor] */

void FUN_10b05c7e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c629f0,
                        &PTR____CFConstantStringClassReference_110f53df8,&PTR_DAT_113366ed8,
                        &PTR_DAT_1133672d0,8,0x38,0x1c);
    puRam00000001137f3cc0 = puVar1;
  }
  return;
}



/* Entry: 10b05c848; end: 10b05c8c3; +[SCCTXRepostedContentInfo_CreatorInfo descriptor] */

undefined * FUN_10b05c848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62a40,
                        &PTR____CFConstantStringClassReference_110f53e18,&PTR_DAT_113366ed8,
                        &PTR_s_displayName_113366f90,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3cc8 = puVar1;
  }
  return puRam00000001137f3cc8;
}



/* Entry: 10b05c8c4; end: 10b05c93f; +[SCCTXRepostedContentInfo_CaptionCard descriptor] */

undefined * FUN_10b05c8c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62a90,
                        &PTR____CFConstantStringClassReference_110f53e38,&PTR_DAT_113366ed8,
                        &PTR_s_title_113366fd0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f3cd0 = puVar1;
  }
  return puRam00000001137f3cd0;
}



/* Entry: 10b05c940; end: 10b05c9a7; +[SCCTXPostSnapActions descriptor] */

void FUN_10b05c940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62ae0,
                        &PTR____CFConstantStringClassReference_110f53e58,&PTR_DAT_113366ed8,
                        &PTR_DAT_113366f30,1,0x10,0x1c);
    puRam00000001137f3cd8 = puVar1;
  }
  return;
}



/* Entry: 10b05c9a8; end: 10b05ca0f; +[SCCTXPostSnapFeedAction descriptor] */

void FUN_10b05c9a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62b30,
                        &PTR____CFConstantStringClassReference_110f53e78,&PTR_DAT_113366ed8,
                        &PTR_s_action_113366f50,1,0x10,0x1c);
    puRam00000001137f3ce0 = puVar1;
  }
  return;
}



/* Entry: 10b05ca10; end: 10b05ca77; +[SCCTXCompositeId descriptor] */

void FUN_10b05ca10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62b80,
                        &PTR____CFConstantStringClassReference_110e8d7f8,&PTR_DAT_113366ed8,
                        &PTR_DAT_113367010,2,0x10,0x1c);
    puRam00000001137f3ce8 = puVar1;
  }
  return;
}



/* Entry: 10b05ca78; end: 10b05cadf; +[SCCTXPostSnapAction descriptor] */

void FUN_10b05ca78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62bd0,
                        &PTR____CFConstantStringClassReference_110f53e98,&PTR_DAT_113366ed8,
                        &PTR_s_action_1133674f0,9,0x48,0x1c);
    puRam00000001137f3cf0 = puVar1;
  }
  return;
}



/* Entry: 10b05cae0; end: 10b05cb47; +[SCCTXBatchCTARequest descriptor] */

void FUN_10b05cae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62c20,
                        &PTR____CFConstantStringClassReference_110f53eb8,&PTR_DAT_113366ed8,
                        &PTR_DAT_113367050,2,0x18,0x1c);
    puRam00000001137f3cf8 = puVar1;
  }
  return;
}



/* Entry: 10b05cb48; end: 10b05cbaf; +[SCCTXBatchCTAResponse descriptor] */

void FUN_10b05cb48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62c70,
                        &PTR____CFConstantStringClassReference_110f53ed8,&PTR_DAT_113366ed8,
                        &PTR_DAT_113366f70,1,0x10,0x1c);
    puRam00000001137f3d00 = puVar1;
  }
  return;
}



/* Entry: 10b05cbb0; end: 10b05cc17; +[SCCTXMiniContextCard descriptor] */

void FUN_10b05cbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62cc0,
                        &PTR____CFConstantStringClassReference_110f53ef8,&PTR_DAT_113366ed8,
                        &PTR_s_action_113367230,5,0x30,0x1c);
    puRam00000001137f3d08 = puVar1;
  }
  return;
}



/* Entry: 10b05cc18; end: 10b05cca3; +[SCCTXMiniImageSource descriptor] */

undefined * FUN_10b05cc18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62d10,
                        &PTR____CFConstantStringClassReference_110f53f18,&PTR_DAT_113366ed8,
                        &PTR_s_local_113367150,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f3d10 = puVar1;
  }
  return puRam00000001137f3d10;
}



/* Entry: 10b05cca4; end: 10b05cd87; +[SCCTXUserIdentity descriptor] */

void FUN_10b05cca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62e50,
                        &PTR____CFConstantStringClassReference_110f53f38,&PTR_DAT_113367930,
                        &PTR_s_id_p_113367948,7,0x38,0x1c);
    puRam00000001137f3d18 = puVar1;
  }
  return;
}



/* Entry: 10b05cd88; end: 10b05cd93;  */

bool FUN_10b05cd88(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b05cd94; end: 10b05ce0f;  */

undefined * FUN_10b05cd94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3d28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f53f78,
                        &UNK_10e5537f0,&UNK_10e553808,3,FUN_10b05ce10,0);
    do {
      if (puRam00000001137f3d28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3d28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3d28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3d28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3d28;
}



/* Entry: 10b05ce10; end: 10b05ce1b;  */

bool FUN_10b05ce10(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b05ce1c; end: 10b05ce83; +[SCCTXImage descriptor] */

void FUN_10b05ce1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62ef0,
                        &PTR____CFConstantStringClassReference_110dac698,&PTR_DAT_113367a38,
                        &PTR_DAT_113367ab0,4,0x20,0x1c);
    puRam00000001137f3d30 = puVar1;
  }
  return;
}



/* Entry: 10b05ce84; end: 10b05cf0f; +[SCCTXImageSource descriptor] */

undefined * FUN_10b05ce84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62f40,
                        &PTR____CFConstantStringClassReference_110f53f98,&PTR_DAT_113367a38,
                        &PTR_s_local_113367b30,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137f3d38 = puVar1;
  }
  return puRam00000001137f3d38;
}



/* Entry: 10b05cf10; end: 10b05cf77; +[SCCTXBitmoji descriptor] */

void FUN_10b05cf10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62f90,
                        &PTR____CFConstantStringClassReference_110dec718,&PTR_DAT_113367a38,
                        &PTR_s_avatarId_113367a70,2,0x18,0x1c);
    puRam00000001137f3d40 = puVar1;
  }
  return;
}



/* Entry: 10b05cf78; end: 10b05d013; +[SCCTXAnimation descriptor] */

undefined * FUN_10b05cf78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c62fe0,
                        &PTR____CFConstantStringClassReference_110ddcd18,&PTR_DAT_113367a38,
                        &PTR_s_boltURL_113367a50,1,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dd8a810);
    puRam00000001137f3d48 = puVar1;
  }
  return puRam00000001137f3d48;
}



/* Entry: 10b05d014; end: 10b05d08f;  */

undefined * FUN_10b05d014(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3d50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f53fb8,
                        &UNK_10e553814,&UNK_10e553830,3,FUN_10b05d090,0);
    do {
      if (puRam00000001137f3d50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3d50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3d50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3d50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3d50;
}



/* Entry: 10b05d090; end: 10b05d09b;  */

bool FUN_10b05d090(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b05d09c; end: 10b05d103; +[SCCTXCssStyle descriptor] */

void FUN_10b05d09c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63080,
                        &PTR____CFConstantStringClassReference_110f53fd8,&PTR_DAT_113367bd0,
                        &PTR_s_backgroundColor_113367c68,9,0x38,0x1c);
    puRam00000001137f3d58 = puVar1;
  }
  return;
}



/* Entry: 10b05d104; end: 10b05d17f; +[SCCTXCssStyle_CssColor descriptor] */

undefined * FUN_10b05d104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c630d0,
                        &PTR____CFConstantStringClassReference_110f53ff8,&PTR_DAT_113367bd0,
                        &PTR_DAT_113367be8,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001137f3d60 = puVar1;
  }
  return puRam00000001137f3d60;
}



/* Entry: 10b05d180; end: 10b05d1e7; +[SCCTXSnapProIdentity descriptor] */

void FUN_10b05d180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63170,
                        &PTR____CFConstantStringClassReference_110f54018,&PTR_DAT_113367d88,
                        &PTR_s_id_p_113367da0,2,0x18,0x1c);
    puRam00000001137f3d68 = puVar1;
  }
  return;
}



/* Entry: 10b05d1e8; end: 10b05d2ef; +[SCCTXSnapProIdentity_Logo descriptor] */

undefined * FUN_10b05d1e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c631c0,
                        &PTR____CFConstantStringClassReference_110e58498,&PTR_DAT_113367d88,
                        &PTR_DAT_113367de0,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c63170);
    puRam00000001137f3d70 = puVar1;
  }
  return puRam00000001137f3d70;
}



/* Entry: 10b05d2f0; end: 10b05d2fb;  */

bool FUN_10b05d2f0(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 10b05d2fc; end: 10b05d377;  */

undefined * FUN_10b05d2fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3d80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f54038,
                        &UNK_10e55398c,&UNK_10e5539b4,3,FUN_10b05d378,0);
    do {
      if (puRam00000001137f3d80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3d80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3d80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3d80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3d80;
}



/* Entry: 10b05d378; end: 10b05d383;  */

bool FUN_10b05d378(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b05d384; end: 10b05d3ff;  */

undefined * FUN_10b05d384(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3d88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f54058,
                        &UNK_10e5539c0,&UNK_10e553a18,9,FUN_10b05d400,0);
    do {
      if (puRam00000001137f3d88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3d88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3d88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3d88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3d88;
}



/* Entry: 10b05d400; end: 10b05d40b;  */

bool FUN_10b05d400(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b05d40c; end: 10b05d487;  */

undefined * FUN_10b05d40c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3d90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f54078,
                        &UNK_10e553a3c,&UNK_10e553a54,2,FUN_10b05d488,0);
    do {
      if (puRam00000001137f3d90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3d90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3d90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3d90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3d90;
}



/* Entry: 10b05d488; end: 10b05d493;  */

bool FUN_10b05d488(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b05d494; end: 10b05d4fb; +[SnapContextInfo descriptor] */

void FUN_10b05d494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3d98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63260,
                        &PTR____CFConstantStringClassReference_110f54098,&PTR_DAT_113367e20,
                        &PTR_s_username_113368318,0x16,0x98,0x1c);
    puRam00000001137f3d98 = puVar1;
  }
  return;
}



/* Entry: 10b05d4fc; end: 10b05d577; +[SnapContextInfo_MapContextInfo descriptor] */

undefined * FUN_10b05d4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3da0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c632b0,
                        &PTR____CFConstantStringClassReference_110f540b8,&PTR_DAT_113367e20,
                        &PTR_DAT_113367e38,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3da0 = puVar1;
  }
  return puRam00000001137f3da0;
}



/* Entry: 10b05d578; end: 10b05d5f3; +[SnapContextInfo_ImpalaContextInfo descriptor] */

undefined * FUN_10b05d578(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3da8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63300,
                        &PTR____CFConstantStringClassReference_110f540d8,&PTR_DAT_113367e20,
                        &PTR_DAT_113367e58,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3da8 = puVar1;
  }
  return puRam00000001137f3da8;
}



/* Entry: 10b05d5f4; end: 10b05d65b; +[SnapContextUserInfo descriptor] */

void FUN_10b05d5f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3db0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63350,
                        &PTR____CFConstantStringClassReference_110f540f8,&PTR_DAT_113367e20,
                        &PTR_DAT_113368218,8,0x38,0x1c);
    puRam00000001137f3db0 = puVar1;
  }
  return;
}



/* Entry: 10b05d65c; end: 10b05d6c3; +[SnapContextViewerCreatorInfo descriptor] */

void FUN_10b05d65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3db8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c633a0,
                        &PTR____CFConstantStringClassReference_110f54118,&PTR_DAT_113367e20,
                        &PTR_DAT_113367e78,1,8,0x1c);
    puRam00000001137f3db8 = puVar1;
  }
  return;
}



/* Entry: 10b05d6c4; end: 10b05d72b; +[SnapContextViewerContentInfo descriptor] */

void FUN_10b05d6c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3dc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c633f0,
                        &PTR____CFConstantStringClassReference_110f54138,&PTR_DAT_113367e20,
                        &PTR_DAT_113367ef8,3,0x18,0x1c);
    puRam00000001137f3dc0 = puVar1;
  }
  return;
}



/* Entry: 10b05d72c; end: 10b05d793; +[SnapContextExperimentInfo descriptor] */

void FUN_10b05d72c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3dc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63440,
                        &PTR____CFConstantStringClassReference_110f54158,&PTR_DAT_113367e20,
                        &PTR_DAT_113367e98,1,0x10,0x1c);
    puRam00000001137f3dc8 = puVar1;
  }
  return;
}



/* Entry: 10b05d794; end: 10b05d7fb; +[SnapContextCardsRequest descriptor] */

void FUN_10b05d794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3dd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63490,
                        &PTR____CFConstantStringClassReference_110f54178,&PTR_DAT_113367e20,
                        &PTR_s_snapId_113368138,7,0x40,0x1c);
    puRam00000001137f3dd0 = puVar1;
  }
  return;
}



/* Entry: 10b05d7fc; end: 10b05d877; +[SnapContextCardsRequest_InternalDebugOptions descriptor] */

undefined * FUN_10b05d7fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3dd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c634e0,
                        &PTR____CFConstantStringClassReference_110f54198,&PTR_DAT_113367e20,
                        &PTR_DAT_113367eb8,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001137f3dd8 = puVar1;
  }
  return puRam00000001137f3dd8;
}



/* Entry: 10b05d878; end: 10b05d8df; +[SnapContextSnapIdentity descriptor] */

void FUN_10b05d878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3de0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63530,
                        &PTR____CFConstantStringClassReference_110f541b8,&PTR_DAT_113367e20,
                        &PTR_DAT_113368098,5,0x28,0x1c);
    puRam00000001137f3de0 = puVar1;
  }
  return;
}



/* Entry: 10b05d8e0; end: 10b05d947; +[SnapContextCardsResponse descriptor] */

void FUN_10b05d8e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3de8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63580,
                        &PTR____CFConstantStringClassReference_110f541d8,&PTR_DAT_113367e20,
                        &PTR_s_content_113367f58,3,0x20,0x1c);
    puRam00000001137f3de8 = puVar1;
  }
  return;
}



/* Entry: 10b05d948; end: 10b05d9af; +[SnapContextComposerContent descriptor] */

void FUN_10b05d948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c635d0,
                        &PTR____CFConstantStringClassReference_110f541f8,&PTR_DAT_113367e20,
                        &PTR_DAT_113368018,4,0x20,0x1c);
    puRam00000001137f3df0 = puVar1;
  }
  return;
}



/* Entry: 10b05d9b0; end: 10b05da17; +[SnapContextPlaceholderCards descriptor] */

void FUN_10b05d9b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3df8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63620,
                        &PTR____CFConstantStringClassReference_110f54218,&PTR_DAT_113367e20,
                        &PTR_DAT_113367ed8,1,0x10,0x1c);
    puRam00000001137f3df8 = puVar1;
  }
  return;
}



/* Entry: 10b05da18; end: 10b05da93; +[SnapContextPlaceholderCards_Section descriptor] */

undefined * FUN_10b05da18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c63670,
                        &PTR____CFConstantStringClassReference_110dec3b8,&PTR_DAT_113367e20,
                        &PTR_s_title_113367fb8,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f3e00 = puVar1;
  }
  return puRam00000001137f3e00;
}


