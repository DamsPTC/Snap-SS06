/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adcebd4; end: 10adcebdb; -[LSAUriResponse contentType] */

undefined8 FUN_10adcebd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10adcebdc; end: 10adcec2f; -[LSAUriResponse .cxx_destruct] */

void FUN_10adcebdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10adcec30; end: 10adced03; -[LSAUriServiceComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10adcec30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127014a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPerformer_announcerQueue_1125eac68,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127845ec);
    *(undefined **)((long)puVar1 + (long)_DAT_1127845ec) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adced04; end: 10adced93; -[LSAUriServiceComponent setDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adced04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = (long)_DAT_1127845ec;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar1));
  if (*(long *)(param_1 + _DAT_1127845f0) == 0) {
    _objc_storeWeak(param_1 + _DAT_1127845f4,param_3);
  }
  else {
    FUN_10adcd478(*(long *)(param_1 + _DAT_1127845f0),param_3);
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adced94; end: 10adcee0b; -[LSAUriServiceComponent removeDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adced94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = (long)_DAT_1127845ec;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar1));
  if (*(long *)(param_1 + _DAT_1127845f0) != 0) {
    FUN_10adcd4cc(*(long *)(param_1 + _DAT_1127845f0),param_3);
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adcee0c; end: 10adcf0b7; -[LSAUriServiceComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcee0c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_68 = (long *)param_3[1];
  uStack_70 = *param_3;
  if (param_3[1] != 0) {
    plVar9 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_78 = PTR_PTR_1127014a0;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_70,param_4
                      ,param_5);
  plVar9 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  lVar10 = (long)_DAT_1127845ec;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar10));
  lVar6 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c75458;
  _objc_retain(lVar6);
  puVar5[3] = &PTR_FUN_110c75390;
  puVar5[4] = 0;
  puVar5[5] = lVar6;
  puVar5[7] = 0;
  puVar5[6] = puVar5 + 7;
  puVar5[10] = 0;
  puVar5[8] = 0;
  puVar5[9] = puVar5 + 10;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0x32aaaba7;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  puVar5[0x13] = 0;
  puVar2 = (undefined8 *)(param_1 + _DAT_1127845f0);
  plVar9 = (long *)puVar2[1];
  *puVar2 = puVar5 + 3;
  puVar2[1] = puVar5;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  _objc_release(lVar6);
  uVar8 = *puVar2;
  lVar7 = (long)_DAT_1127845f4;
  lVar6 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar6);
  FUN_10adcd478(uVar8,lVar6);
  _objc_release(lVar6);
  _objc_storeWeak(param_1 + lVar7,0);
  uVar8 = *param_3;
  lStack_88 = puVar2[1];
  uStack_90 = *puVar2;
  if (puVar2[1] != 0) {
    plVar9 = (long *)(puVar2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a2279c4(uVar8,&uStack_90);
  if (lStack_88 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar10));
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10adcf0b8; end: 10adcf13f; -[LSAUriServiceComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcf0b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_storeStrong(param_1 + _DAT_1127845ec,0);
  _objc_destroyWeak(param_1 + _DAT_1127845f4);
  plVar5 = *(long **)(param_1 + _DAT_1127845f0 + 8);
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



/* Entry: 10adcf140; end: 10adcf163; -[LSAUriServiceComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcf140(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127845f0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10adcf164; end: 10adcf183;  */

void FUN_10adcf164(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c75458;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adcf184; end: 10adcf193;  */

void FUN_10adcf184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adcf18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10adcf194; end: 10adcf1ff; -[LSAProcessingInfo initWithInputSource:pixelBufferOrientation:timestamp:fieldOfView:normalizeOutputOrientation:loadMetalTexture:isFromARKit:modifySource:forceOpaque:] */

void FUN_10adcf194(void)

{
  func_0x00010c01e120();
  return;
}



/* Entry: 10adcf200; end: 10adcf277; -[LSAProcessingInfo initWithInputSource:pixelBufferOrientation:inputTextureOrientation:outputTextureOrientation:timestamp:fieldOfView:normalizeOutputOrientation:loadMetalTexture:isFromARKit:modifySource:requiresYUVOutput:spectaclesInfo:isTranscodingToVideo:] */

void FUN_10adcf200(void)

{
  func_0x00010c01e120();
  return;
}



/* Entry: 10adcf278; end: 10adcf2ef; -[LSAProcessingInfo initWithInputSource:pixelBufferOrientation:inputTextureOrientation:outputTextureOrientation:timestamp:forceUseTimestampAsCurrentTime:fieldOfView:normalizeOutputOrientation:loadMetalTexture:isFromARKit:modifySource:requiresYUVOutput:spectaclesInfo:isTranscodingToVideo:] */

void FUN_10adcf278(void)

{
  func_0x00010c01e120();
  return;
}



/* Entry: 10adcf2f0; end: 10adcf41b; -[LSAProcessingInfo initWithInputSource:pixelBufferOrientation:inputTextureOrientation:outputTextureOrientation:timestamp:forceUseTimestampAsCurrentTime:fieldOfView:normalizeOutputOrientation:loadMetalTexture:isFromARKit:modifySource:requiresYUVOutput:spectaclesInfo:isTranscodingToVideo:useOutputTexture:faceDetector:forceOpaque:] */

undefined8 *
FUN_10adcf2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined1 param_9,undefined4 param_10,undefined1 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1127014a8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    uVar3 = param_8[1];
    uVar2 = *param_8;
    puVar1[0xc] = param_8[2];
    puVar1[0xb] = uVar3;
    puVar1[10] = uVar2;
    *(undefined1 *)(puVar1 + 1) = param_9;
    puVar1[7] = param_1;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 10) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_10._2_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_10._3_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_11;
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_13;
    puVar1[9] = param_15;
    *(undefined1 *)(puVar1 + 2) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_16;
  }
  _objc_release(param_12);
  return puVar1;
}



/* Entry: 10adcf41c; end: 10adcf423; -[LSAProcessingInfo inputSource] */

undefined8 FUN_10adcf41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10adcf424; end: 10adcf42b; -[LSAProcessingInfo inputPixelBufferOrientation] */

undefined8 FUN_10adcf424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10adcf42c; end: 10adcf433; -[LSAProcessingInfo inputTextureOrientation] */

undefined8 FUN_10adcf42c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10adcf434; end: 10adcf43b; -[LSAProcessingInfo outputTextureOrientation] */

undefined8 FUN_10adcf434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10adcf43c; end: 10adcf44f; -[LSAProcessingInfo timestamp] */

void FUN_10adcf43c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  param_1[1] = *(undefined8 *)(param_2 + 0x58);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x60);
  return;
}



/* Entry: 10adcf450; end: 10adcf457; -[LSAProcessingInfo forceUseTimestampAsCurrentTime] */

undefined1 FUN_10adcf450(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10adcf458; end: 10adcf45f; -[LSAProcessingInfo fieldOfView] */

undefined8 FUN_10adcf458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10adcf460; end: 10adcf467; -[LSAProcessingInfo normalizeOutputOrientation] */

undefined1 FUN_10adcf460(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10adcf468; end: 10adcf46f; -[LSAProcessingInfo loadMetalTexture] */

undefined1 FUN_10adcf468(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10adcf470; end: 10adcf477; -[LSAProcessingInfo isFromARKit] */

undefined1 FUN_10adcf470(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10adcf478; end: 10adcf47f; -[LSAProcessingInfo modifySource] */

undefined1 FUN_10adcf478(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10adcf480; end: 10adcf487; -[LSAProcessingInfo requiresYUVOutput] */

undefined1 FUN_10adcf480(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10adcf488; end: 10adcf48f; -[LSAProcessingInfo spectaclesInfo] */

undefined8 FUN_10adcf488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10adcf490; end: 10adcf497; -[LSAProcessingInfo isTranscodingToVideo] */

undefined1 FUN_10adcf490(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10adcf498; end: 10adcf49f; -[LSAProcessingInfo forceOpaque] */

undefined1 FUN_10adcf498(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10adcf4a0; end: 10adcf4a7; -[LSAProcessingInfo useOutputTexture] */

undefined1 FUN_10adcf4a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10adcf4a8; end: 10adcf4af; -[LSAProcessingInfo faceDetector] */

undefined8 FUN_10adcf4a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10adcf4b0; end: 10adcf4bb; -[LSAProcessingInfo .cxx_destruct] */

void FUN_10adcf4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 10adcf4bc; end: 10adcf54b;  */

undefined ** FUN_10adcf4bc(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  double dVar9;
  undefined *puStack_38;
  
  uVar8 = 0;
  plVar6 = (long *)&UNK_10e515400;
  while( true ) {
    for (; plVar7 = (long *)(&UNK_10e515380 + uVar8 * 0x10), *plVar7 < param_3;
        uVar8 = uVar8 * 2 + 2) {
      plVar7 = plVar6;
      if (2 < uVar8) goto LAB_10adcf51c;
    }
    if (3 < uVar8) break;
    uVar8 = uVar8 << 1 | 1;
    plVar6 = plVar7;
  }
LAB_10adcf51c:
  if ((plVar7 != (long *)&UNK_10e515400) && (*plVar7 <= param_3 && plVar7 != (long *)&UNK_10e515400)
     ) {
    return (undefined **)(ulong)*(uint *)(plVar7 + 1);
  }
  puVar1 = &UNK_10f6adf59;
  func_0x0001093fd0ac();
  puVar2 = &UNK_10e515408;
  ppuVar5 = &puStack_38;
  puStack_38 = puVar1;
  func_0x00010addac74(&UNK_10e515408,ppuVar5);
  if (puVar2 != &UNK_10e515488) {
    return *(undefined ***)(puVar2 + 8);
  }
  puVar1 = &UNK_10f6adf59;
  func_0x0001093fd0ac();
  uVar8 = 0;
  plVar6 = (long *)&UNK_10e515510;
  while( true ) {
    for (; plVar7 = (long *)(&UNK_10e515490 + uVar8 * 0x10), *plVar7 < (long)puVar1;
        uVar8 = uVar8 * 2 + 2) {
      plVar7 = plVar6;
      if (2 < uVar8) goto LAB_10adcf600;
    }
    if (3 < uVar8) break;
    uVar8 = uVar8 << 1 | 1;
    plVar6 = plVar7;
  }
LAB_10adcf600:
  if ((plVar7 != (long *)&UNK_10e515510) &&
     (*plVar7 <= (long)puVar1 && plVar7 != (long *)&UNK_10e515510)) {
    return (undefined **)plVar7[1];
  }
  puVar1 = &UNK_10f6adf59;
  func_0x0001093fd0ac(&UNK_10f6adf59);
  dVar9 = param_1;
  _objc_retain(ppuVar5);
  ppuVar3 = ppuVar5;
  func_0x00010c065ec0(ppuVar5);
  func_0x00010bfac7a0(ppuVar5);
  ppuVar4 = ppuVar5;
  func_0x00010c065d80(ppuVar5);
  FUN_10adcf4bc();
  FUN_10ad51244(puVar1,param_1,param_2,(float)dVar9,ppuVar3 == (undefined **)0x2,ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return ppuVar5;
}



/* Entry: 10adcf54c; end: 10adcf59f;  */

undefined8 * FUN_10adcf54c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uStack_28;
  
  puVar1 = &UNK_10e515408;
  puVar4 = &uStack_28;
  uStack_28 = param_3;
  func_0x00010addac74(&UNK_10e515408,puVar4);
  if (puVar1 != &UNK_10e515488) {
    return *(undefined8 **)(puVar1 + 8);
  }
  puVar1 = &UNK_10f6adf59;
  func_0x0001093fd0ac();
  uVar7 = 0;
  plVar5 = (long *)&UNK_10e515510;
  while( true ) {
    for (; plVar6 = (long *)(&UNK_10e515490 + uVar7 * 0x10), *plVar6 < (long)puVar1;
        uVar7 = uVar7 * 2 + 2) {
      plVar6 = plVar5;
      if (2 < uVar7) goto LAB_10adcf600;
    }
    if (3 < uVar7) break;
    uVar7 = uVar7 << 1 | 1;
    plVar5 = plVar6;
  }
LAB_10adcf600:
  if ((plVar6 != (long *)&UNK_10e515510) &&
     (*plVar6 <= (long)puVar1 && plVar6 != (long *)&UNK_10e515510)) {
    return (undefined8 *)plVar6[1];
  }
  puVar1 = &UNK_10f6adf59;
  func_0x0001093fd0ac(&UNK_10f6adf59);
  dVar8 = param_1;
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010c065ec0(puVar4);
  func_0x00010bfac7a0(puVar4);
  puVar3 = puVar4;
  func_0x00010c065d80(puVar4);
  FUN_10adcf4bc();
  FUN_10ad51244(puVar1,param_1,param_2,(float)dVar8,puVar2 == (undefined8 *)0x2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 10adcf5a0; end: 10adcf62f;  */

long FUN_10adcf5a0(double param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  double dVar7;
  
  uVar6 = 0;
  plVar4 = (long *)&UNK_10e515510;
  while( true ) {
    for (; plVar5 = (long *)(&UNK_10e515490 + uVar6 * 0x10), *plVar5 < param_3;
        uVar6 = uVar6 * 2 + 2) {
      plVar5 = plVar4;
      if (2 < uVar6) goto LAB_10adcf600;
    }
    if (3 < uVar6) break;
    uVar6 = uVar6 << 1 | 1;
    plVar4 = plVar5;
  }
LAB_10adcf600:
  if ((plVar5 != (long *)&UNK_10e515510) && (*plVar5 <= param_3 && plVar5 != (long *)&UNK_10e515510)
     ) {
    return plVar5[1];
  }
  puVar1 = &UNK_10f6adf59;
  func_0x0001093fd0ac(&UNK_10f6adf59);
  dVar7 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c065ec0(param_4);
  func_0x00010bfac7a0(param_4);
  lVar3 = param_4;
  func_0x00010c065d80(param_4);
  FUN_10adcf4bc();
  FUN_10ad51244(puVar1,param_1,param_2,(float)dVar7,lVar2 == 2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return param_4;
}



/* Entry: 10adcf630; end: 10adcf6d3;  */

void FUN_10adcf630(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c065ec0(param_4);
  func_0x00010bfac7a0(param_4);
  lVar2 = param_4;
  func_0x00010c065d80(param_4);
  FUN_10adcf4bc();
  FUN_10ad51244(param_3,param_1,param_2,(float)dVar3,lVar1 == 2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10adcf6d4; end: 10adcf80f; -[LSAVideoProcessingComponent setProcessingMode:completion:] */

void FUN_10adcf6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c278dc0(PTR_PTR_1126db570,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10adcf810;
  puStack_58 = &UNK_1108a8598;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10adcf9e8;
  puStack_80 = &UNK_110c72a10;
  uStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_4);
  uStack_78 = param_4;
  func_0x00010c0f9180(uVar1,param_2,puVar2,&puStack_70,&puStack_98);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_78);
  _objc_release(param_4);
  return;
}



/* Entry: 10adcf810; end: 10adcf9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcf810(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_118;
  long *plStack_110;
  long *aplStack_108 [2];
  long *plStack_f8;
  long *plStack_f0;
  undefined **ppuStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11278463c;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9) = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar9);
  uVar2 = 2;
  if (uVar8 != 5) {
    uVar2 = 4;
  }
  uVar6 = 1;
  if (uVar8 != 4) {
    uVar6 = uVar2;
  }
  uVar2 = uVar8;
  if (3 < uVar8) {
    uVar2 = uVar6;
  }
  bVar3 = 3 < uVar8 && (uVar8 == 4 || uVar8 == 5);
  func_0x00010bf52380(&plStack_118);
  plStack_f8 = (long *)0x0;
  plStack_f0 = (long *)0x0;
  if (((plStack_110 != (long *)0x0) &&
      (plVar7 = plStack_110, __ZNSt3__119__shared_weak_count4lockEv(), plStack_f0 = plVar7,
      plVar7 != (long *)0x0)) && (plStack_f8 = plStack_118, plStack_118 != (long *)0x0)) {
    aplStack_108[0] = plStack_118;
    plVar1 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uStack_e0 = 0;
    ppuStack_e8 = &PTR_DAT_110ba5598;
    uStack_d8 = 0;
    uStack_d0 = 0;
    FUN_10a2248a4(plStack_118,uVar2,&ppuStack_e8);
    param_2 = *plStack_118;
    FUN_10a219de8(auStack_c8,param_2);
    lVar9 = *plStack_118;
    *(bool *)(lVar9 + 0x7d9) = bVar3;
    *(bool *)(*(long *)(lVar9 + 0x180) + 0x10d) = bVar3;
    FUN_10a22afb0(auStack_c8);
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar1 = plStack_f0 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10ad8b754(aplStack_108);
    FUN_10ad8b754(&plStack_f8);
    if (plStack_110 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __Unwind_Resume();
    _objc_retain(param_2);
    lVar9 = plVar7[4];
    if (lVar9 != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10adcf9e8; end: 10adcfa3b;  */

void FUN_10adcf9e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adcfa3c; end: 10adcfae7; -[LSAVideoProcessingComponent setViewPortAspectRatioNumerator:denominator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcfa3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f92c0();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + _DAT_112784648) = 1;
  return;
}



/* Entry: 10adcfae8; end: 10adcfb0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcfae8(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784640) =
       *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784644) =
       *(undefined8 *)(param_1 + 0x30);
  return;
}



/* Entry: 10adcfb10; end: 10adcfbab; -[LSAVideoProcessingComponent setOutputResolution:] */

void FUN_10adcfb10(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f92c0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adcfbac; end: 10adcfe17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcfbac(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined4 *puStack_80;
  long *plStack_78;
  undefined4 *puStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  dVar10 = *(double *)(param_1 + 0x28);
  bVar4 = false;
  if ((*(double *)(param_1 + 0x30) == *(double *)(PTR__CGSizeZero_110347620 + 8)) &&
     (bVar4 = false, !NAN(dVar10) && !NAN(*(double *)PTR__CGSizeZero_110347620))) {
    bVar4 = dVar10 == *(double *)PTR__CGSizeZero_110347620;
  }
  uVar2 = 0;
  if (!bVar4) {
    uVar2 = CONCAT44((int)*(double *)(param_1 + 0x30),(int)dVar10);
  }
  lVar8 = (long)_DAT_11278464c;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8) = uVar2;
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf52380(&plStack_60);
    plStack_50 = (long *)0x0;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar5 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plStack_50 = plStack_60;
        plVar7 = plStack_60;
      }
      plStack_48 = plVar5;
      if (plStack_58 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        lVar6 = *(long *)(lVar9 + 0x180);
        plVar5 = *(long **)(lVar6 + 0x110);
        plStack_58 = *(long **)(lVar6 + 0x118);
        if (plStack_58 != (long *)0x0) {
          plVar7 = plStack_58 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_60 = plVar5;
        if (plVar5 != (long *)0x0) {
          plVar7 = plVar5;
          FUN_10a320ac0(plVar5,0);
          FUN_10addace4(&puStack_70,plVar7);
          *(undefined8 *)(puStack_70 + 0x25) = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
          puStack_70[0x27] = *(undefined4 *)((long)plVar5 + 0x9c);
          *(undefined1 *)((long)puStack_70 + 0x15) = *(undefined1 *)((long)plVar5 + 0x15);
          puStack_80 = puStack_70;
          plStack_78 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar5 = plStack_68 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_10a320ac0(puStack_70,0);
          lVar8 = *(long *)(lVar9 + 0x180);
          *(undefined4 *)(lVar8 + 0x108) = *puStack_70;
          FUN_10a228c00(lVar8 + 0x110,&puStack_80);
          plVar5 = plStack_78;
          if (plStack_78 != (long *)0x0) {
            plVar7 = plStack_78 + 1;
            do {
              lVar8 = *plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_78 + 0x10))(plStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          if (plStack_68 != (long *)0x0) {
            plVar5 = plStack_68 + 1;
            do {
              lVar8 = *plVar5;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = lVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
            }
          }
        }
        plVar7 = plStack_58;
        plVar5 = plStack_48;
        if (plStack_58 != (long *)0x0) {
          plVar1 = plStack_58 + 1;
          do {
            lVar8 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar5 = plStack_48;
          }
        }
      }
      if (plVar5 != (long *)0x0) {
        plVar7 = plVar5 + 1;
        do {
          lVar8 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
  }
  return;
}



/* Entry: 10adcfe18; end: 10adcfeaf; -[LSAVideoProcessingComponent setScreenScale:] */

void FUN_10adcfe18(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f92c0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adcfeb0; end: 10adcfec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcfeb0(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784650) =
       *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 10adcfec8; end: 10adcff63; -[LSAVideoProcessingComponent setYuvRenderingResolutionWidth:height:] */

void FUN_10adcfec8(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f92c0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adcff64; end: 10adcff83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcff64(long param_1)

{
  *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784654) =
       (ulong)*(uint *)(param_1 + 0x28) | *(long *)(param_1 + 0x30) << 0x20;
  return;
}



/* Entry: 10adcff84; end: 10add005f; -[LSAVideoProcessingComponent setCameraInfoWithProcessingInfo:cameraType:] */

void FUN_10adcff84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10add0060;
  puStack_50 = &UNK_110896ea8;
  uStack_48 = param_1;
  _objc_retain(param_3);
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x00010c0f92c0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10add0060; end: 10add0303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add0060(double param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puStack_100;
  long *plStack_f8;
  undefined4 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    func_0x00010bf52380(&plStack_e0);
    plStack_60 = (long *)0x0;
    if (plStack_d8 != (long *)0x0) {
      plVar6 = plStack_d8;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar6 == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        plStack_60 = plStack_e0;
        plVar12 = plStack_e0;
      }
      plStack_58 = plVar6;
      if (plStack_d8 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plVar12 != (long *)0x0) {
        lVar13 = *plVar12;
        uVar7 = *(ulong *)(param_2 + 0x28);
        func_0x00010c065d80();
        if ((uVar7 < 8) && ((1L << (uVar7 & 0x3f) & 0xccU) != 0)) {
          piVar11 = (int *)(*(long *)(param_2 + 0x20) + (long)_DAT_112784654);
          piVar10 = piVar11 + 1;
        }
        else {
          piVar10 = (int *)(*(long *)(param_2 + 0x20) + (long)_DAT_112784654);
          piVar11 = piVar10 + 1;
        }
        iVar2 = *piVar11;
        iVar3 = *piVar10;
        lVar1 = *(long *)(param_2 + 0x30);
        func_0x00010bfac7a0(*(undefined8 *)(param_2 + 0x28));
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        func_0x00010c065d80(uVar8);
        FUN_10adcf4bc();
        FUN_10ad51244(&plStack_e0,(double)iVar3,(double)iVar2,(float)param_1,lVar1 != 0,uVar8);
        if (*(long *)(param_2 + 0x20) == 0) {
          puStack_f0 = (undefined4 *)0x0;
          plStack_e8 = (long *)0x0;
        }
        else {
          func_0x00010bfe8660(&puStack_f0);
          if (plStack_e8 != (long *)0x0) {
            plVar6 = plStack_e8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar5) {
                *plVar6 = *plVar6 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        puVar9 = puStack_f0;
        puStack_100 = puStack_f0;
        plStack_f8 = plStack_e8;
        FUN_10a320ac0(puStack_f0,0);
        lVar13 = *(long *)(lVar13 + 0x180);
        *(undefined4 *)(lVar13 + 0x108) = *puVar9;
        FUN_10a228c00(lVar13 + 0x110,&puStack_100);
        plVar6 = plStack_f8;
        if (plStack_f8 != (long *)0x0) {
          plVar12 = plStack_f8 + 1;
          do {
            lVar13 = *plVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar12 = plStack_e8 + 1;
          do {
            lVar13 = *plVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_58;
        if (plStack_68 != (long *)0x0) {
          plVar12 = plStack_68 + 1;
          do {
            lVar13 = *plVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
            plVar6 = plStack_58;
          }
        }
      }
      if (plVar6 != (long *)0x0) {
        plVar12 = plVar6 + 1;
        do {
          lVar13 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
  }
  return;
}



/* Entry: 10add0304; end: 10add0583; -[LSAVideoProcessingComponent processPixelBuffer:processingInfo:info:error:] */

void FUN_10add0304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10add0584;
  uStack_80 = 0x10add0594;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10add0584;
  uStack_b0 = 0x10add0594;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_10add0584;
  uStack_e0 = 0x10add0594;
  uStack_d8 = 0;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c29ad80(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (param_6 != (undefined8 *)0x0) {
    uVar2 = puStack_f8[5];
    _objc_retainAutorelease();
    *param_6 = uVar2;
  }
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = puStack_c8[5];
    _objc_retainAutorelease();
    *param_5 = uVar2;
  }
  uVar2 = puStack_98[5];
  _objc_retain(uVar2);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10add0584; end: 10add059b;  */

void FUN_10add0584(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10add059c; end: 10add0b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add059c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
LAB_10add060c:
    plStack_60 = (long *)0x0;
    plStack_68 = (long *)0x0;
    plVar12 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_78);
    plStack_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
    if (plStack_70 == (long *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10add060c;
    }
    plVar12 = plStack_70;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar12 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plStack_68 = plStack_78;
      plVar14 = plStack_78;
    }
    plStack_60 = plVar12;
    if (plStack_70 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (plVar14 != (long *)0x0) {
      func_0x00010bf04760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf445e0();
      _objc_release(uVar5);
      param_2 = *(long *)(param_1 + 0x28);
      func_0x00010c081780();
      FUN_10a21df48(plVar14);
      iVar4 = (int)*(undefined8 *)(param_1 + 0x48);
      _CVPixelBufferGetPixelFormatType();
      if (iVar4 == 0x42475241) {
        plVar13 = *(long **)(param_1 + 0x20);
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_88 = plVar14;
        plStack_80 = plVar12;
        func_0x00010be80660();
        _objc_retainAutoreleasedReturnValue();
        if (plStack_80 != (long *)0x0) {
          plVar12 = plStack_80 + 1;
          do {
            lVar11 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            plVar14 = plStack_80;
          } while (cVar2 != '\0');
LAB_10add0838:
          if (lVar11 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
      }
      else {
        iVar4 = (int)*(undefined8 *)(param_1 + 0x48);
        _CVPixelBufferGetPixelFormatType();
        puVar8 = PTR__OBJC_CLASS___NSException_1126af520;
        if (iVar4 == 0x34323066) {
          plVar13 = *(long **)(param_1 + 0x20);
          if (plVar12 != (long *)0x0) {
            plVar1 = plVar12 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plStack_98 = plVar14;
          plStack_90 = plVar12;
          func_0x00010be82900();
          _objc_retainAutoreleasedReturnValue();
          if (plStack_90 != (long *)0x0) {
            plVar12 = plStack_90 + 1;
            do {
              lVar11 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              plVar14 = plStack_90;
            } while (cVar2 != '\0');
            goto LAB_10add0838;
          }
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          _objc_opt_class(uVar5);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f020(puVar8);
          _objc_release(uVar5);
          plVar13 = (long *)0x0;
        }
      }
      uVar6 = *(ulong *)(param_1 + 0x28);
      func_0x00010c137c20();
      if ((uVar6 & 1) == 0) {
        ppuVar7 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        uVar5 = 0;
      }
      else {
        func_0x00010c10a040(*(undefined8 *)(param_1 + 0x20));
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784658);
        if (plVar13 == (long *)0x0) {
          uStack_a8 = 0;
          plStack_a0 = (long *)0x0;
        }
        else {
          func_0x00010c0db6e0(&uStack_a8,plVar13);
        }
        func_0x00010c23d0a0(plVar13);
        ppuVar7 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        func_0x00010bfcc4a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        plVar12 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          plVar14 = plStack_a0 + 1;
          do {
            lVar11 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      puVar8 = *ppuVar7;
      if (((puVar8 != (undefined *)0x0) && (puVar8[0xc0] == '\x01')) &&
         (*(long *)(puVar8 + 0x80) != 0)) {
        FUN_10a08dbac(puVar8 + 0x18);
      }
      iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
      _objc_opt_class();
      func_0x00010c0739a0(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c2352c0();
      if (iVar4 == 0) {
LAB_10add09e8:
        _glFlush();
      }
      else {
        iVar4 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010c0d0560();
        if (((iVar4 == 0) || (*(long *)(*(long *)(*plStack_68 + 0x180) + 0xb8) == 0)) ||
           (*(long *)(*(long *)(*(long *)(*plStack_68 + 0x180) + 0xa8) + 0x28) == 0))
        goto LAB_10add09e8;
        _glFinish();
      }
      puVar8 = PTR_PTR_1126de1f8;
      _objc_alloc();
      func_0x00010c03ca20();
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar9 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined **)(lVar11 + 0x28) = puVar8;
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0eee40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar10 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)(lVar11 + 0x28) = uVar9;
      _objc_release(uVar10);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf04760(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf443c0();
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release();
      plVar12 = plStack_60;
      goto joined_r0x00010add06d8;
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  plVar13 = (long *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar5);
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar9 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar8;
  _objc_release(uVar9);
  _objc_release();
joined_r0x00010add06d8:
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 1;
    do {
      lVar11 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar13 = plVar12;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uVar5);
  FUN_10ad8b754(&plStack_68);
  __Unwind_Resume(plVar13);
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(plVar13 + 6,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(plVar13 + 7,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(plVar13 + 8,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 10add0b94; end: 10add0c87;  */

void FUN_10add0b94(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 10add0c88; end: 10add0e93; -[LSAVideoProcessingComponent processPixelBufferV2:processingInfo:error:] */

undefined8
FUN_10add0c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10add0584;
  uStack_a0 = 0x10add0594;
  uStack_98 = 0;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c29ad80(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = puStack_b8[5];
    _objc_retainAutorelease();
    *param_5 = uVar2;
  }
  uVar2 = puStack_88[3];
  _objc_release(param_4);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 10add0e94; end: 10add128f;  */

long ** FUN_10add0e94(long param_1)

{
  long **pplVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long **pplVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plStack_78;
  long **pplStack_70;
  long **pplStack_68;
  long *plStack_60;
  long **pplStack_58;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)(param_1 + 0x20);
  if (*plVar12 == 0) {
    plStack_60 = (long *)0x0;
    pplStack_58 = (long **)0x0;
    plVar6 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_78);
    plStack_60 = (long *)0x0;
    pplStack_58 = (long **)0x0;
    if (pplStack_70 == (long **)0x0) {
      plVar6 = (long *)*plVar12;
    }
    else {
      pplVar5 = pplStack_70;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (pplVar5 != (long **)0x0) {
        plStack_60 = plStack_78;
      }
      pplStack_58 = pplVar5;
      if (pplStack_70 != (long **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar6 = (long *)*plVar12;
      if (plStack_60 != (long *)0x0) {
        func_0x00010bf04760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf445e0();
        _objc_release(plVar6);
        plVar6 = plStack_60;
        pplStack_70 = (long **)(param_1 + 0x28);
        plVar7 = *pplStack_70;
        pplStack_68 = &plStack_60;
        plStack_78 = plVar12;
        func_0x00010c081780(plVar7);
        FUN_10a21df48(plVar6,plVar7);
        iVar4 = (int)*(undefined8 *)(param_1 + 0x40);
        _CVPixelBufferGetPixelFormatType();
        pplVar5 = pplStack_58;
        if (iVar4 == 0x34323066) {
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          if (pplStack_58 != (long **)0x0) {
            pplVar9 = pplStack_58 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
              if (bVar3) {
                *pplVar9 = (long *)((long)*pplVar9 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          func_0x00010be82920();
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar11;
          if (pplVar5 != (long **)0x0) {
            pplVar9 = pplVar5 + 1;
            do {
              plVar12 = *pplVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
              if (bVar3) {
                *pplVar9 = (long *)((long)plVar12 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
LAB_10add1114:
            if (plVar12 == (long *)0x0) {
              (*(code *)(*pplVar5)[2])(pplVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar5);
            }
          }
        }
        else {
          iVar4 = (int)*(undefined8 *)(param_1 + 0x40);
          _CVPixelBufferGetPixelFormatType();
          pplVar5 = pplStack_58;
          puVar8 = PTR__OBJC_CLASS___NSException_1126af520;
          if (iVar4 == 0x42475241) {
            uVar11 = *(undefined8 *)(param_1 + 0x20);
            if (pplStack_58 != (long **)0x0) {
              pplVar9 = pplStack_58 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
                if (bVar3) {
                  *pplVar9 = (long *)((long)*pplVar9 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            func_0x00010be80680();
            *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar11;
            if (pplVar5 != (long **)0x0) {
              pplVar9 = pplVar5 + 1;
              do {
                plVar12 = *pplVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
                if (bVar3) {
                  *pplVar9 = (long *)((long)plVar12 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto LAB_10add1114;
            }
          }
          else {
            plVar6 = (long *)*plVar12;
            _objc_opt_class();
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11f020(puVar8);
            _objc_release(plVar6);
          }
        }
        pplVar5 = &plStack_78;
        FUN_10add1290();
        goto LAB_10add1178;
      }
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  pplVar5 = (long **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(plVar6);
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar11 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar8;
  _objc_release(uVar11);
  _objc_release();
LAB_10add1178:
  pplVar9 = pplStack_58;
  if (pplStack_58 != (long **)0x0) {
    pplVar1 = pplStack_58 + 1;
    do {
      plVar12 = *pplVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar3) {
        *pplVar1 = (long *)((long)plVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plVar12 == (long *)0x0) {
      (*(code *)(*pplStack_58)[2])(pplStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplVar5 = pplVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_release(plVar6);
    FUN_10add1290(&plStack_78);
    FUN_10ad8b754(&plStack_60);
    __Unwind_Resume();
    iVar4 = (int)**pplVar5;
    _objc_opt_class();
    func_0x00010c0739a0(*pplVar5[1]);
    func_0x00010c2352c0();
    if (((iVar4 == 0) || (*(long *)(*(long *)(*(long *)*pplVar5[2] + 0x180) + 0xb8) == 0)) ||
       (*(long *)(*(long *)(*(long *)(*(long *)*pplVar5[2] + 0x180) + 0xa8) + 0x28) == 0)) {
      _glFlush();
    }
    else {
      _glFinish();
    }
    lVar10 = **pplVar5;
    func_0x00010bf04760(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf443c0();
    _objc_release(lVar10);
    return pplVar5;
  }
  return pplVar5;
}



/* Entry: 10add1290; end: 10add134b;  */

undefined8 * FUN_10add1290(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)*param_1;
  _objc_opt_class();
  uVar2 = *(undefined8 *)param_1[1];
  func_0x00010c0739a0(uVar2);
  func_0x00010c2352c0(uVar1,param_2,uVar2);
  if ((((int)uVar1 == 0) || (*(long *)(*(long *)(**(long **)param_1[2] + 0x180) + 0xb8) == 0)) ||
     (*(long *)(*(long *)(*(long *)(**(long **)param_1[2] + 0x180) + 0xa8) + 0x28) == 0)) {
    _glFlush();
  }
  else {
    _glFinish();
  }
  uVar2 = *(undefined8 *)*param_1;
  func_0x00010bf04760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf443c0();
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10add134c; end: 10add13a3;  */

void FUN_10add134c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10add13a4; end: 10add164f; -[LSAVideoProcessingComponent processTexture:textureSize:data:pixelBuffer:processingInfo:info:error:] */

void FUN_10add13a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  undefined8 *in_x6;
  undefined8 *in_x7;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(in_x5);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_10add0584;
  uStack_98 = 0x10add0594;
  uStack_90 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_10add0584;
  uStack_c8 = 0x10add0594;
  uStack_c0 = 0;
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_10add0584;
  uStack_f8 = 0x10add0594;
  uStack_f0 = 0;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c29ad80(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x5);
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (in_x7 != (undefined8 *)0x0) {
    uVar2 = puStack_110[5];
    _objc_retainAutorelease();
    *in_x7 = uVar2;
  }
  if (in_x6 != (undefined8 *)0x0) {
    uVar2 = puStack_e0[5];
    _objc_retainAutorelease();
    *in_x6 = uVar2;
  }
  uVar2 = puStack_b0[5];
  _objc_retain(uVar2);
  _objc_release(in_x5);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10add1650; end: 10add288b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add1650(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  undefined **ppuVar14;
  ulong *puVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  int iVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar26;
  double dVar27;
  double dVar28;
  undefined8 uStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  uint uStack_378;
  undefined4 uStack_374;
  uint uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long *plStack_318;
  undefined1 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_180;
  long *plStack_178;
  undefined1 auStack_170 [120];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  ulong **ppuStack_b0;
  ulong *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
LAB_10add16c8:
    plStack_e8 = (long *)0x0;
    plStack_f0 = (long *)0x0;
    plVar21 = (long *)0x0;
LAB_10add16cc:
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar10);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar10 = *(undefined8 *)(lVar19 + 0x28);
    *(undefined **)(lVar19 + 0x28) = puVar8;
    _objc_release(uVar10);
    _objc_release(puVar9);
  }
  else {
    func_0x00010bf52380(&plStack_390);
    plStack_f0 = (long *)0x0;
    plStack_e8 = (long *)0x0;
    if (plStack_388 == (long *)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10add16c8;
    }
    plVar21 = plStack_388;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar21 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      plStack_f0 = plStack_390;
      plVar22 = plStack_390;
    }
    plStack_e8 = plVar21;
    if (plStack_388 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    if (plVar22 == (long *)0x0) goto LAB_10add16cc;
    func_0x00010bf04760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf445e0();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c081780(uVar10);
    FUN_10a21df48(plVar22,uVar10);
    FUN_10adcf630(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),auStack_170,
                  *(undefined8 *)(param_1 + 0x28));
    uVar11 = *(ulong *)(param_1 + 0x58);
    if (uVar11 == 0) {
      plVar21 = (long *)0x0;
    }
    else {
      _CVPixelBufferGetWidth();
      uVar12 = *(ulong *)(param_1 + 0x58);
      _CVPixelBufferGetHeight(uVar12);
      FUN_10adcf630((double)uVar11,(double)uVar12,&plStack_390,*(undefined8 *)(param_1 + 0x28));
      iVar4 = (int)*(undefined8 *)(param_1 + 0x58);
      _CVPixelBufferGetPixelFormatType();
      if (iVar4 == 0x42475241) {
        lVar19 = *(long *)(param_1 + 0x20);
        if (plVar21 != (long *)0x0) {
          plVar26 = plVar21 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar2) {
              *plVar26 = *plVar26 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plStack_180 = plVar22;
        plStack_178 = plVar21;
        if (lVar19 == 0) {
          plVar21 = (long *)0x0;
        }
        else {
          func_0x00010bfe7a20(&uStack_1d0);
          plVar21 = (long *)CONCAT44(uStack_1cc,uStack_1d0);
        }
        uStack_1d0 = 0;
        uStack_1cc = 0;
        if (plStack_178 != (long *)0x0) {
          plVar22 = plStack_178 + 1;
          do {
            lVar19 = *plVar22;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar2) {
              *plVar22 = lVar19 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
          }
        }
      }
      else {
        iVar4 = (int)*(undefined8 *)(param_1 + 0x58);
        _CVPixelBufferGetPixelFormatType();
        puVar8 = PTR__OBJC_CLASS___NSException_1126af520;
        if (iVar4 == 0x34323066) {
          iVar5 = (int)*(undefined8 *)(param_1 + 0x58);
          _CVPixelBufferGetWidth();
          iVar6 = (int)*(undefined8 *)(param_1 + 0x58);
          _CVPixelBufferGetHeight();
          iVar4 = iVar5;
          if (iVar5 <= iVar6) {
            iVar4 = iVar6;
          }
          iVar20 = iVar6;
          iVar23 = iVar5;
          if (0x500 < iVar4) {
            iVar20 = 0x500;
            iVar23 = iVar20;
            if (iVar5 <= iVar6) {
              iVar23 = 0x2d0;
            }
            if (iVar6 <= iVar5) {
              iVar20 = 0x2d0;
            }
            if (iVar23 * iVar6 < iVar20 * iVar5) {
              iVar20 = 0;
              if (iVar5 != 0) {
                iVar20 = (iVar23 * iVar6) / iVar5;
              }
            }
            else {
              iVar23 = 0;
              if (iVar6 != 0) {
                iVar23 = (iVar20 * iVar5) / iVar6;
              }
            }
          }
          lVar19 = *(long *)(param_1 + 0x20);
          if (plVar21 != (long *)0x0) {
            plVar26 = plVar21 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar2) {
                *plVar26 = *plVar26 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          plStack_1e0 = plVar22;
          plStack_1d8 = plVar21;
          if (lVar19 == 0) {
            uStack_190 = 0;
            uStack_1a8 = 0;
            plStack_1b0 = (long *)0x0;
            uStack_198 = 0;
            plStack_1a0 = (long *)0x0;
            uStack_1c8 = 0;
            uStack_1c4 = 0;
            uStack_1d0 = 0;
            uStack_1cc = 0;
            uStack_1b8 = 0;
            uStack_1b4 = 0;
            uStack_1c0 = 0;
            uStack_1bc = 0;
          }
          else {
            func_0x00010bfe6b40(&uStack_1d0,(double)iVar23,(double)iVar20,lVar19);
          }
          if (plStack_1d8 != (long *)0x0) {
            plVar21 = plStack_1d8 + 1;
            do {
              lVar19 = *plVar21;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar2) {
                *plVar21 = lVar19 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
            }
          }
          plVar22 = plStack_1a0;
          plVar21 = (long *)CONCAT44(uStack_1cc,uStack_1d0);
          uStack_1d0 = 0;
          uStack_1cc = 0;
          if (plStack_1a0 != (long *)0x0) {
            plVar26 = plStack_1a0 + 1;
            do {
              lVar19 = *plVar26;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar2) {
                *plVar26 = lVar19 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
            }
          }
          plVar22 = plStack_1b0;
          if (plStack_1b0 != (long *)0x0) {
            plVar26 = plStack_1b0 + 1;
            do {
              lVar19 = *plVar26;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar2) {
                *plVar26 = lVar19 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
            }
          }
          plVar22 = (long *)CONCAT44(uStack_1bc,uStack_1c0);
          if (plVar22 != (long *)0x0) {
            plVar26 = plVar22 + 1;
            do {
              lVar19 = *plVar26;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar2) {
                *plVar26 = lVar19 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
            }
          }
          plVar22 = (long *)CONCAT44(uStack_1cc,uStack_1d0);
          uStack_1d0 = 0;
          uStack_1cc = 0;
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 8))();
          }
        }
        else {
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          _objc_opt_class(uVar10);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f020(puVar8);
          _objc_release(uVar10);
          plVar21 = (long *)0x0;
        }
      }
      if (plStack_318 != (long *)0x0) {
        plVar22 = plStack_318 + 1;
        do {
          lVar19 = *plVar22;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar2) {
            *plVar22 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_318 + 0x10))(plStack_318);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_318);
        }
      }
    }
    func_0x00010c1098c0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x20));
    func_0x00010c28aee0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c2293e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x20));
    FUN_10a30f97c();
    plStack_390 = (long *)CONCAT44((int)*(double *)(param_1 + 0x50),(int)*(double *)(param_1 + 0x48)
                                  );
    FUN_10a30fb38(&plStack_1f0);
    piVar13 = (int *)0x113836510;
    FUN_10ad0621c();
    ppuVar14 = &PTR___tlv_bootstrap_11340de10;
    if (*piVar13 == 0) {
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      uStack_1b8 = uStack_1b8 & 0xffffff00;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      lVar19 = 0x113834ef0;
      FUN_10a1c5e98();
      if ((*(byte *)(lVar19 + 1) >> 3 & 1) == 0) {
        lVar19 = (long)_DAT_11278465c;
        lVar24 = *(long *)(*(long *)(param_1 + 0x20) + lVar19);
        _glBindFramebuffer(0x8d40,*(undefined4 *)(lVar24 + 0x10));
        _glViewport(0,0,*(undefined4 *)(lVar24 + 8),*(undefined4 *)(lVar24 + 0xc));
        lVar19 = *(long *)(*(long *)(param_1 + 0x20) + lVar19);
        *(long **)(lVar19 + 0x28) = plStack_1f0;
        *(undefined4 *)(lVar19 + 0x1c) = 0xde1;
        *(undefined1 *)(lVar19 + 0x30) = 1;
        plVar22 = plStack_1f0;
        (**(code **)(*plStack_1f0 + 0x48))();
        _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,plVar22,0);
      }
      else {
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        lVar19 = plStack_1f0[3];
        lVar24 = *(long *)(*ppuVar14 + 0x10);
        plStack_390 = (long *)&UNK_10f635282;
        plStack_388 = (long *)0x2b;
        if (lVar24 == 0) goto LAB_10add262c;
        func_0x00010ab9ca70(&plStack_390,plStack_1f0,0);
        uVar17 = 0x8ca9;
        if (uStack_368 < 2) {
          uVar17 = 0x8d40;
        }
        FUN_10ab9cbe8(&plStack_a0,lVar24 + 0x50,uVar17,&plStack_390,0,lVar19,0);
        FUN_10ab9b224(&uStack_1d0,&plStack_a0);
        FUN_10ab9ce18(&plStack_a0);
      }
      uVar7 = (uint)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c066100();
      FUN_10adcf4bc();
      FUN_10ad51220();
      plStack_98 = (long *)0x3f800000;
      plStack_a0 = (long *)0x0;
      uStack_88 = 0x3f80000000000000;
      uStack_90 = 0x3f8000003f800000;
      plStack_388 = (long *)0x3f800000;
      plStack_390 = (long *)0x0;
      uStack_378 = 0;
      uStack_374 = 0x3f800000;
      uStack_380 = 0x3f800000;
      uStack_37c = 0x3f800000;
      plStack_e0 = (long *)CONCAT44(plStack_e0._4_4_,uVar7 & 0xc | -uVar7 & 3);
      FUN_10a19dc6c(&plStack_e0,&plStack_390,8);
      uStack_88 = CONCAT44(uStack_374,uStack_378);
      uStack_90 = CONCAT44(uStack_37c,uStack_380);
      plStack_98 = plStack_388;
      plStack_a0 = plStack_390;
      FUN_10ad4b940(0);
      plStack_388 = plStack_98;
      plStack_390 = plStack_a0;
      uStack_378 = (uint)uStack_88;
      uStack_374 = (undefined4)((ulong)uStack_88 >> 0x20);
      uStack_380 = (undefined4)uStack_90;
      uStack_37c = (undefined4)((ulong)uStack_90 >> 0x20);
      FUN_10a30139c(0x3f800000);
      lVar19 = 0x113834ef0;
      FUN_10a1c5e98();
      if ((*(byte *)(lVar19 + 1) >> 3 & 1) == 0) {
        lVar19 = (long)_DAT_11278465c;
        func_0x00010a301a5c(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar19),0x8d40);
        func_0x00010a301a24(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar19),0x8d40);
      }
      else {
        plStack_388 = (long *)0x0;
        plStack_390 = (long *)0x0;
        uStack_378 = 0;
        uStack_374 = 0;
        uStack_380 = 0;
        uStack_37c = 0;
        FUN_10ab9b224(&uStack_1d0,&plStack_390);
        FUN_10ab9ce18(&plStack_390);
      }
      FUN_10ab9ce18(&uStack_1d0);
    }
    else {
      uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c066100();
      FUN_10adcf4bc();
      FUN_10ad51220();
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      plStack_1b0 = (long *)0x1;
      uStack_1d0 = uVar17;
      FUN_10a19e730(&plStack_390,&uStack_1d0,0,1);
      plStack_a0 = plStack_390;
      plStack_98 = (long *)CONCAT44(uStack_380,(int)plStack_388);
      uStack_80 = uStack_368;
      uStack_90 = CONCAT44(uStack_378,uStack_37c);
      uStack_88 = uStack_360;
      dVar27 = *(double *)(param_1 + 0x48);
      dVar28 = *(double *)(param_1 + 0x50);
      uVar17 = *(undefined4 *)(param_1 + 0x68);
      uVar10 = 1;
      func_0x00010ad4c21c(1,0x1401);
      FUN_10a316e3c(&uStack_1d0,(int)dVar27,(int)dVar28,1,uVar10,uVar17,0xde1,0,0x35,1);
      plVar22 = plStack_1f0;
      (**(code **)(*plStack_1f0 + 0x38))();
      plStack_390 = (long *)((ulong)plStack_390 & 0xffffffffffffff00);
      uStack_1f8 = 0;
      FUN_10a0e38cc(&uStack_1d0,plVar22,&plStack_a0,&plStack_390);
      FUN_10addad4c(&plStack_390);
      plVar22 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
      if (plVar22 != (long *)0x0) {
        plVar26 = plVar22 + 1;
        do {
          lVar19 = *plVar26;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar2) {
            *plVar26 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
    }
    if (*(long *)(param_1 + 0x20) == 0) {
      plStack_3a0 = (long *)0x0;
      plStack_398 = (long *)0x0;
    }
    else {
      func_0x00010bfe8660(&plStack_3a0);
    }
    plVar22 = plStack_f0;
    puVar15 = (ulong *)0x68;
    __Znwm();
    *puVar15 = (ulong)plVar22;
    puVar15[9] = 0;
    *(undefined1 *)(puVar15 + 10) = 0;
    *(undefined1 *)(puVar15 + 0xb) = 0;
    puVar15[0xc] = 0;
    puVar15[2] = 0;
    puVar15[1] = 0;
    puVar15[4] = 0;
    puVar15[3] = 0;
    puVar15[6] = 0;
    puVar15[5] = 0;
    *(undefined2 *)(puVar15 + 7) = 0;
    puStack_a8 = puVar15;
    FUN_10ad5b354(&puStack_a8);
    plStack_b8 = plStack_1e8;
    plStack_c0 = plStack_1f0;
    if (plStack_1e8 != (long *)0x0) {
      plVar26 = plStack_1e8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = *plVar26 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_b0 = &puStack_a8;
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar16 = 0;
      plStack_e0 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      plVar26 = (long *)0x0;
      uStack_d0 = 0;
    }
    else {
      func_0x00010c2709c0(&plStack_e0);
      if (((ulong)plStack_d8 & 0x100000000) == 0) {
        uVar16 = 0;
        plVar26 = (long *)0x0;
      }
      else {
        plStack_98 = plStack_d8;
        plStack_a0 = plStack_e0;
        uStack_90 = uStack_d0;
        plVar26 = plStack_e0;
        _CMTimeGetSeconds(&plStack_a0);
        uVar16 = 1;
      }
    }
    uStack_1c8 = uStack_1c8 & 0xffffff00;
    uStack_1d0 = 0x10ba5598;
    uStack_1cc = 1;
    uStack_1c0 = SUB84(plVar26,0);
    uStack_1bc = (undefined4)((ulong)plVar26 >> 0x20);
    uStack_1b8 = CONCAT31(uStack_1b8._1_3_,uVar16);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    FUN_10add4a68(uVar10,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278463c));
    plStack_98 = plStack_398;
    plStack_a0 = plStack_3a0;
    plStack_3a0 = (long *)0x0;
    plStack_398 = (long *)0x0;
    FUN_10a21ebc0(&plStack_390,plVar22,plVar21,&plStack_c0,&uStack_1d0,uVar10,&plStack_a0);
    plVar22 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar26 = plStack_98 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    plVar22 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar26 = plStack_b8 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    FUN_10ad5b8bc(&ppuStack_b0);
    puVar15 = puStack_a8;
    puStack_a8 = (ulong *)0x0;
    if (puVar15 != (ulong *)0x0) {
      FUN_10ad5c5b8(&puStack_a8);
    }
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010be42c80();
    if ((iVar4 == 0) || (CONCAT44(uStack_37c,uStack_380) == 0)) {
      uStack_1c8 = (uint)plStack_388;
      uStack_1c4 = (undefined4)((ulong)plStack_388 >> 0x20);
      uStack_1d0 = SUB84(plStack_390,0);
      uStack_1cc = (undefined4)((ulong)plStack_390 >> 0x20);
      plVar22 = plStack_388;
    }
    else {
      plVar22 = (long *)CONCAT44(uStack_374,uStack_378);
      uStack_1d0 = uStack_380;
      uStack_1cc = uStack_37c;
      uStack_1c8 = uStack_378;
      uStack_1c4 = uStack_374;
    }
    if (plVar22 != (long *)0x0) {
      plVar22 = plVar22 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *plVar22 = *plVar22 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010be76480();
    if (iVar4 != 0) {
      func_0x00010add28dc(&uStack_1d0,plStack_390,plStack_388);
    }
    lVar19 = *(long *)(param_1 + 0x20);
    _objc_opt_class();
    plStack_d8 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
    plStack_e0 = (long *)CONCAT44(uStack_1cc,uStack_1d0);
    if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
      plVar22 = (long *)(CONCAT44(uStack_1c4,uStack_1c8) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *plVar22 = *plVar22 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (lVar19 == 0) {
      plStack_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
    }
    else {
      func_0x00010be78d40(&plStack_a0);
    }
    plVar22 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar26 = plStack_d8 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    puVar8 = PTR_PTR_1126de200;
    plStack_3a8 = plStack_98;
    plStack_3b0 = plStack_a0;
    if (plStack_98 != (long *)0x0) {
      plVar22 = plStack_98 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *plVar22 = *plVar22 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f98a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    plVar22 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      plVar26 = plStack_3a8 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    iVar4 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c137c20();
    if (iVar4 == 0) {
      uVar10 = 0;
    }
    else {
      func_0x00010c10a040(*(undefined8 *)(param_1 + 0x20));
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784658);
      if (puVar8 == (undefined *)0x0) {
        uStack_3c0 = 0;
        plStack_3b8 = (long *)0x0;
      }
      else {
        func_0x00010c0db6e0(&uStack_3c0,puVar8);
      }
      func_0x00010c23d0a0(puVar8);
      func_0x00010bfcc4a0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      plVar22 = plStack_3b8;
      if (plStack_3b8 != (long *)0x0) {
        plVar26 = plStack_3b8 + 1;
        do {
          lVar19 = *plVar26;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar2) {
            *plVar26 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      _glFlush();
    }
    else {
      FUN_10a0997e4(&plStack_e0,&plStack_a0,1,0);
      plVar22 = plStack_e0;
      uVar25 = *(undefined8 *)(param_1 + 0x60);
      plVar26 = plStack_e0;
      (**(code **)(*plStack_e0 + 0x18))(plStack_e0);
      (**(code **)(*plVar22 + 0x10))
                (plVar22,uVar25,(ulong)plVar26 & 0xffffffff,0,*(undefined4 *)((long)plVar22 + 0x1c))
      ;
      plVar22 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar26 = plStack_d8 + 1;
        do {
          lVar19 = *plVar26;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar2) {
            *plVar26 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
    }
    puVar9 = PTR_PTR_1126de1f8;
    _objc_alloc();
    func_0x00010c03ca20();
    lVar19 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar25 = *(undefined8 *)(lVar19 + 0x28);
    *(undefined **)(lVar19 + 0x28) = puVar9;
    _objc_release(uVar25);
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0eee40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar18 = *(undefined8 *)(lVar19 + 0x28);
    *(undefined8 *)(lVar19 + 0x28) = uVar25;
    _objc_release(uVar18);
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf04760(uVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf443c0();
    _objc_release(uVar25);
    _objc_release(uVar10);
    _objc_release(puVar8);
    plVar22 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar26 = plStack_98 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    plVar22 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
    if (plVar22 != (long *)0x0) {
      plVar26 = plVar22 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    FUN_10a22ba60(&uStack_360,uStack_358);
    plVar22 = (long *)CONCAT44(uStack_364,uStack_368);
    if (plVar22 != (long *)0x0) {
      plVar26 = plVar22 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    plVar22 = (long *)CONCAT44(uStack_374,uStack_378);
    if (plVar22 != (long *)0x0) {
      plVar26 = plVar22 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    plVar22 = plStack_388;
    if (plStack_388 != (long *)0x0) {
      plVar26 = plStack_388 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    plVar22 = plStack_398;
    if (plStack_398 != (long *)0x0) {
      plVar26 = plStack_398 + 1;
      do {
        lVar19 = *plVar26;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar2) {
          *plVar26 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_398 + 0x10))(plStack_398);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    if (plStack_1e8 != (long *)0x0) {
      plVar22 = plStack_1e8 + 1;
      do {
        lVar19 = *plVar22;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *plVar22 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1e8);
      }
    }
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))(plVar21);
    }
    plVar21 = plStack_e8;
    if (plStack_f8 != (long *)0x0) {
      plVar22 = plStack_f8 + 1;
      do {
        lVar19 = *plVar22;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *plVar22 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
        plVar21 = plStack_e8;
      }
    }
  }
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 1;
    do {
      lVar19 = *plVar22;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar2) {
        *plVar22 = lVar19 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10add262c:
  FUN_10a0edfc4(&plStack_390);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10add2638);
  (*pcVar3)();
}



/* Entry: 10add288c; end: 10add299b;  */

long * FUN_10add288c(long *param_1)

{
  long *plVar1;
  
  func_0x00010addae58(param_1 + 5);
  func_0x00010addae58(param_1 + 3);
  func_0x00010addae58(param_1 + 1);
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10add299c; end: 10add29c7; -[LSAVideoProcessingComponent processTexture:textureSize:data:processingInfo:info:error:] */

void FUN_10add299c(void)

{
  func_0x00010c1154c0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10add29c8; end: 10add2c7f; -[LSAVideoProcessingComponent processImage:maxPixelSize:processingInfo:info:error:] */

void FUN_10add29c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10add0584;
  uStack_88 = 0x10add0594;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_10add0584;
  uStack_b8 = 0x10add0594;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_10add0584;
  uStack_e8 = 0x10add0594;
  uStack_e0 = 0;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c29ad80(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (param_7 != (undefined8 *)0x0) {
    uVar2 = puStack_100[5];
    _objc_retainAutorelease();
    *param_7 = uVar2;
  }
  if (param_6 != (undefined8 *)0x0) {
    uVar2 = puStack_d0[5];
    _objc_retainAutorelease();
    *param_6 = uVar2;
  }
  uVar2 = puStack_a0[5];
  _objc_retain(uVar2);
  _objc_release(param_3);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10add2c80; end: 10add38d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10add2c80(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  uint *puVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  long *plVar31;
  float *pfVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_238;
  long *plStack_228;
  long lStack_220;
  int iStack_218;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 **ppuStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar13 = 0;
LAB_10add2cfc:
    plStack_138 = (long *)0x0;
    plStack_140 = (long *)0x0;
    plVar25 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_1d8);
    plStack_140 = (long *)0x0;
    plStack_138 = (long *)0x0;
    if (plStack_1d0 == (long *)0x0) {
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10add2cfc;
    }
    plVar25 = plStack_1d0;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar25 == (long *)0x0) {
      plVar31 = (long *)0x0;
    }
    else {
      plStack_140 = plStack_1d8;
      plVar31 = plStack_1d8;
    }
    plStack_138 = plVar25;
    if (plStack_1d0 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    if (plVar31 != (long *)0x0) {
      func_0x00010bf04760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf445e0();
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c081780(uVar13);
      FUN_10a21df48(plVar31,uVar13);
      uStack_150 = 0x200000003;
      uStack_148 = 0x200000003;
      uStack_158 = 0;
      func_0x00010bfe8380(*(undefined8 *)(param_1 + 0x30));
      func_0x00010c212f00(*(undefined8 *)(param_1 + 0x20));
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      uVar13 = uVar14;
      _CGImageGetWidth();
      uVar20 = uVar14;
      _CGImageGetHeight();
      iVar11 = (int)uVar13;
      iVar28 = (int)uVar20;
      if ((uStack_158 & 0x100000000) != 0) {
        iVar11 = (int)uVar20;
        iVar28 = (int)uVar13;
      }
      lVar34 = (long)_DAT_112784660;
      plVar25 = *(long **)(*(long *)(param_1 + 0x20) + lVar34);
      iVar36 = iVar11;
      iVar35 = iVar28;
      if (plVar25 != (long *)0x0) {
        if (*plVar25 == 0) {
          puVar26 = (uint *)(plVar25[1] + 0x14b8);
        }
        else {
          puVar26 = (uint *)(*plVar25 + 0x54);
        }
        if ((*puVar26 & 1) != 0) {
          iVar36 = iVar28;
          iVar35 = iVar11;
        }
      }
      uVar27 = *(ulong *)(*plVar31 + 0x228);
      iVar23 = (int)uVar27;
      iVar30 = (int)(uVar27 >> 0x20);
      if (0 < iVar23 && 0 < iVar30) {
        iVar35 = iVar30;
        iVar36 = iVar23;
      }
      if (0x1000 < (uint)((iVar35 * 3) / 2)) {
        iVar7 = iVar35 * 0x438;
        iVar21 = iVar36 * 0x780;
        if (iVar7 < iVar21) {
          iVar35 = 0;
          if (iVar36 != 0) {
            iVar35 = iVar7 / iVar36;
          }
          iVar36 = 0x438;
        }
        else {
          iVar36 = 0;
          if (iVar35 != 0) {
            iVar36 = iVar21 / iVar35;
          }
          iVar35 = 0x780;
        }
      }
      iVar7 = iVar28;
      if ((uStack_158 & 1) != 0) {
        iVar7 = iVar11;
        iVar11 = iVar28;
      }
      iVar28 = iVar11;
      if (iVar11 <= iVar7) {
        iVar28 = iVar7;
      }
      iVar29 = iVar11;
      iVar21 = iVar7;
      if (*(long *)(param_1 + 0x50) < (long)iVar28) {
        iVar21 = (int)*(long *)(param_1 + 0x50);
        iVar29 = 0;
        if (iVar7 != 0) {
          iVar29 = (iVar11 * iVar21) / iVar7;
        }
        iVar28 = 0;
        if (iVar11 != 0) {
          iVar28 = (iVar7 * iVar21) / iVar11;
        }
        if (iVar7 * iVar21 < iVar11 * iVar21) {
          iVar29 = iVar21;
          iVar21 = iVar28;
        }
      }
      uVar33 = CONCAT44(iVar21,iVar29);
      uVar5 = uVar33;
      if (0 < iVar23 && 0 < iVar30) {
        uVar5 = uVar27;
      }
      iVar28 = (int)(uVar5 >> 0x20);
      iVar11 = iVar21;
      if (iVar21 <= iVar28) {
        iVar11 = iVar28;
      }
      iVar30 = iVar29 * iVar28;
      iVar24 = (int)uVar5;
      iVar7 = iVar21 * iVar24;
      iVar10 = iVar30 - iVar7;
      iVar23 = -iVar10;
      if (-1 < iVar10) {
        iVar23 = iVar10;
      }
      if (iVar23 < iVar11 * 8) {
        iVar11 = 0;
        if (iVar24 != 0) {
          iVar11 = iVar30 / iVar24;
        }
        iVar23 = 0;
        if (iVar28 != 0) {
          iVar23 = iVar7 / iVar28;
        }
        if (iVar30 < iVar7) {
          iVar21 = iVar11;
          iVar23 = iVar29;
        }
        uVar33 = CONCAT44(iVar21,iVar23);
      }
      else if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6adf67,&UNK_10f6ae019,0x5b,&UNK_10f6ae087);
      }
      dVar37 = (double)iVar36;
      dVar38 = (double)iVar35;
      FUN_10adcf630(dVar37,dVar38,&plStack_1d8,*(undefined8 *)(param_1 + 0x28));
      uVar13 = uStack_148;
      iVar11 = 2;
      func_0x000107c31924(2,0xe,2,0);
      FUN_10ad50dc8(&uStack_1f0,uVar14,uVar33,uVar33 >> 0x20,uVar13,iVar11 == 0);
      _malloc((ulong)((long)iVar35 * (long)iVar36 * 2 + (long)iVar35 * (long)iVar36) >> 1);
      plVar25 = (long *)0x90;
      __Znwm();
      uStack_c8 = 0x109d138c8;
      ppuStack_c0 = &PTR_DAT_110b3e838;
      pcStack_b8 = FUN_10a1b1e10;
      FUN_10a1b2668();
      (*(code *)*ppuStack_c0)(&ppuStack_c0);
      func_0x00010c109180(dVar37,dVar38,*(undefined8 *)(param_1 + 0x20));
      func_0x00010c28aee0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c2293e0(dVar37,dVar38,*(undefined8 *)(param_1 + 0x20));
      if (((*(byte *)(plVar25 + 2) & 3) == 0) && ((*(byte *)((long)plVar25 + 0x14) & 1) == 0)) {
        lVar16 = plVar25[6];
        uVar17 = (undefined4)plVar25[3];
        uVar18 = uVar17;
      }
      else {
        lVar16 = 0;
        uVar17 = (undefined4)plVar25[3];
        uVar18 = 0xffffffff;
      }
      FUN_10a1a03cc(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar34),&uStack_1f0,plVar25[5],
                    lVar16,uVar17,uVar18);
      if (*(long *)(param_1 + 0x20) == 0) {
        uStack_200 = 0;
        plStack_1f8 = (long *)0x0;
      }
      else {
        func_0x00010bfe8660(&uStack_200);
      }
      puVar15 = (undefined8 *)0x68;
      __Znwm();
      *puVar15 = plVar31;
      puVar15[9] = 0;
      *(undefined1 *)(puVar15 + 10) = 0;
      *(undefined1 *)(puVar15 + 0xb) = 0;
      puVar15[0xc] = 0;
      puVar15[2] = 0;
      puVar15[1] = 0;
      puVar15[4] = 0;
      puVar15[3] = 0;
      puVar15[6] = 0;
      puVar15[5] = 0;
      *(undefined2 *)(puVar15 + 7) = 0;
      puStack_110 = puVar15;
      FUN_10ad5b354(&puStack_110);
      plStack_128 = plStack_1e8;
      uStack_130 = uStack_1f0;
      if (plStack_1e8 != (long *)0x0) {
        plVar1 = plStack_1e8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = *plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      ppuStack_118 = &puStack_110;
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar19 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        uVar13 = 0;
        uStack_268 = 0;
      }
      else {
        func_0x00010c2709c0(&uStack_278);
        if ((uStack_270 & 0x100000000) == 0) {
          uVar19 = 0;
          uVar13 = 0;
        }
        else {
          uStack_298 = (undefined4)uStack_270;
          uStack_294 = (undefined4)(uStack_270 >> 0x20);
          uStack_2a0 = (undefined4)uStack_278;
          uStack_29c = (undefined4)((ulong)uStack_278 >> 0x20);
          uStack_290 = (undefined4)uStack_268;
          uStack_28c = (undefined4)((ulong)uStack_268 >> 0x20);
          uVar13 = uStack_278;
          _CMTimeGetSeconds(&uStack_2a0);
          uVar19 = 1;
        }
      }
      plStack_100 = (long *)((ulong)plStack_100 & 0xffffffffffffff00);
      uStack_108 = &PTR_DAT_110ba5598;
      fStack_f0 = (float)CONCAT31(fStack_f0._1_3_,uVar19);
      uStack_298 = SUB84(plStack_1f8,0);
      uStack_294 = (undefined4)((ulong)plStack_1f8 >> 0x20);
      uStack_2a0 = (undefined4)uStack_200;
      uStack_29c = (undefined4)((ulong)uStack_200 >> 0x20);
      uStack_200 = 0;
      plStack_1f8 = (long *)0x0;
      uStack_f8 = uVar13;
      FUN_10a21ebc0(&plStack_250,plVar31,plVar25,&uStack_130,&uStack_108,0,&uStack_2a0);
      plVar31 = (long *)CONCAT44(uStack_294,uStack_298);
      if (plVar31 != (long *)0x0) {
        plVar1 = plVar31 + 1;
        do {
          lVar34 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      plVar31 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar1 = plStack_128 + 1;
        do {
          lVar34 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      FUN_10ad5b8bc(&ppuStack_118);
      puVar15 = puStack_110;
      puStack_110 = (undefined8 *)0x0;
      if (puVar15 != (undefined8 *)0x0) {
        FUN_10ad5c5b8(&puStack_110);
      }
      plVar31 = plStack_1e8;
      uStack_1f0 = 0;
      plStack_1e8 = (long *)0x0;
      if (plVar31 != (long *)0x0) {
        plVar1 = plVar31 + 1;
        do {
          lVar34 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      (**(code **)(*plVar25 + 8))(plVar25);
      if (plStack_250[1] == 0) {
        pfVar32 = (float *)(plStack_250[2] + 0x30);
      }
      else {
        pfVar32 = (float *)(plStack_250[1] + 0x38);
      }
      uVar17 = (int)uStack_150;
      FUN_10add38d8(uStack_150 & 0xffffffff,uStack_150._4_4_);
      uStack_2a0 = uVar17;
      uStack_29c = 0;
      uStack_298 = 0;
      uStack_28c = 0;
      uStack_288 = 0;
      uStack_294 = 0;
      uStack_290 = 0;
      uStack_284 = 0;
      uStack_280 = 1;
      FUN_10a19e730(&uStack_108,&uStack_2a0,0,1);
      fVar39 = *pfVar32;
      fVar40 = pfVar32[1];
      fVar41 = pfVar32[2];
      fVar42 = pfVar32[3];
      fVar43 = pfVar32[4];
      fVar44 = pfVar32[5];
      fVar45 = pfVar32[6];
      fVar46 = pfVar32[7];
      fVar47 = pfVar32[8];
      uStack_278 = CONCAT44(uStack_108._4_4_ * fVar43 + (float)uStack_108 * fVar40 +
                            plStack_100._0_4_ * fVar46,
                            uStack_108._4_4_ * fVar42 + (float)uStack_108 * fVar39 +
                            plStack_100._0_4_ * fVar45);
      uStack_270 = CONCAT44(uStack_f8._4_4_ * fVar42 + (float)uStack_f8 * fVar39 +
                            fStack_f0 * fVar45,
                            uStack_108._4_4_ * fVar44 + (float)uStack_108 * fVar41 +
                            plStack_100._0_4_ * fVar47);
      uStack_268 = CONCAT44(uStack_f8._4_4_ * fVar44 + (float)uStack_f8 * fVar41 +
                            fStack_f0 * fVar47,
                            uStack_f8._4_4_ * fVar43 + (float)uStack_f8 * fVar40 +
                            fStack_f0 * fVar46);
      fStack_260 = fStack_d4 * fVar42 + fStack_d8 * fVar39 + fStack_e0 * fVar45;
      fStack_25c = fStack_d4 * fVar43 + fStack_d8 * fVar40 + fStack_e0 * fVar46;
      fStack_258 = fStack_d4 * fVar44 + fStack_d8 * fVar41 + fStack_e0 * fVar47;
      uVar33 = (ulong)(uint)fStack_258;
      FUN_10a098908();
      uVar27 = uStack_158;
      uStack_108 = (undefined **)*plStack_250;
      plVar25 = (long *)plStack_250[1];
      if (plVar25 != (long *)0x0) {
        plVar31 = plVar25 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar9) {
            *plVar31 = *plVar31 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      uVar18 = *(undefined4 *)((long)uStack_108 + 0x18);
      uVar6 = *(undefined4 *)((long)uStack_108 + 0x1c);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      plStack_100 = plVar25;
      func_0x00010bfb4dc0(uVar13);
      uVar17 = uVar18;
      if ((uVar27 & 1) != 0) {
        uVar17 = uVar6;
        uVar6 = uVar18;
      }
      puVar15 = &uStack_108;
      FUN_10ad511a0(puVar15,uVar17,uVar6,&uStack_278,uVar13);
      puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14e120(*(undefined8 *)(param_1 + 0x30));
      func_0x00010bfe8380(*(undefined8 *)(param_1 + 0x30));
      func_0x00010bfe9260(uVar33);
      _objc_retainAutoreleasedReturnValue();
      lVar34 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar13 = *(undefined8 *)(lVar34 + 0x28);
      *(undefined **)(lVar34 + 0x28) = puVar12;
      _objc_release(uVar13);
      _CGImageRelease(puVar15);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0eee40();
      _objc_retainAutoreleasedReturnValue();
      lVar34 = *(long *)(*(long *)(param_1 + 0x48) + 8);
      uVar20 = *(undefined8 *)(lVar34 + 0x28);
      *(undefined8 *)(lVar34 + 0x28) = uVar13;
      _objc_release(uVar20);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf04760(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf443c0();
      _objc_release(uVar13);
      if (plVar25 != (long *)0x0) {
        plVar31 = plVar25 + 1;
        do {
          lVar34 = *plVar31;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar9) {
            *plVar31 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      plVar31 = &lStack_220;
      param_2 = iStack_218;
      FUN_10a22ba60();
      if (plStack_228 != (long *)0x0) {
        plVar25 = plStack_228 + 1;
        do {
          lVar34 = *plVar25;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar9) {
            *plVar25 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plStack_228 + 0x10))(plStack_228);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar31 = plStack_228;
        }
      }
      if (plStack_238 != (long *)0x0) {
        plVar25 = plStack_238 + 1;
        do {
          lVar34 = *plVar25;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar9) {
            *plVar25 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plStack_238 + 0x10))(plStack_238);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar31 = plStack_238;
        }
      }
      if (plStack_248 != (long *)0x0) {
        plVar25 = plStack_248 + 1;
        do {
          lVar34 = *plVar25;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar9) {
            *plVar25 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plStack_248 + 0x10))(plStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar31 = plStack_248;
        }
      }
      plVar25 = plStack_1f8;
      if (plStack_1f8 != (long *)0x0) {
        plVar1 = plStack_1f8 + 1;
        do {
          lVar34 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar31 = plVar25;
        }
      }
      plVar25 = plStack_1e8;
      if (plStack_1e8 != (long *)0x0) {
        plVar1 = plStack_1e8 + 1;
        do {
          lVar34 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar31 = plVar25;
        }
      }
      plVar25 = plStack_138;
      if (plStack_160 != (long *)0x0) {
        plVar1 = plStack_160 + 1;
        do {
          lVar34 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar34 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plStack_160 + 0x10))(plStack_160);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar31 = plStack_160;
          plVar25 = plStack_138;
        }
      }
      goto joined_r0x00010add2dc8;
    }
  }
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  plVar31 = (long *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar12;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(uVar13);
  puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar13 = *(undefined8 *)(lVar34 + 0x28);
  *(undefined **)(lVar34 + 0x28) = puVar12;
  _objc_release(uVar13);
  _objc_release();
joined_r0x00010add2dc8:
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 1;
    do {
      lVar34 = *plVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar34 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar31 = plVar25;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar31;
  }
  ___stack_chk_fail();
  FUN_10ad8b754(&plStack_140);
  __Unwind_Resume();
  uVar4 = 0;
  if ((uint)plVar31 < 4) {
    uVar4 = 3 - (uint)plVar31;
  }
  uVar22 = 4;
  uVar2 = 8;
  if (((ulong)plVar31 & 0xfffffffd) != 0) {
    uVar2 = uVar22;
  }
  if (((ulong)plVar31 & 0xfffffffd) != 0) {
    uVar22 = 8;
  }
  uVar3 = uVar4;
  if (param_2 == 0) {
    uVar3 = uVar4 | uVar22;
  }
  uVar4 = uVar4 | uVar2;
  if (param_2 != 1) {
    uVar4 = uVar3;
  }
  return (long *)(ulong)uVar4;
}



/* Entry: 10add38d8; end: 10add3917;  */

uint FUN_10add38d8(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (param_1 < 4) {
    uVar3 = 3 - param_1;
  }
  uVar4 = 4;
  uVar1 = 8;
  if ((param_1 & 0xfffffffd) != 0) {
    uVar1 = uVar4;
  }
  if ((param_1 & 0xfffffffd) != 0) {
    uVar4 = 8;
  }
  uVar2 = uVar3;
  if (param_2 == 0) {
    uVar2 = uVar3 | uVar4;
  }
  uVar3 = uVar3 | uVar1;
  if (param_2 != 1) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 10add3918; end: 10add3a1b;  */

void FUN_10add3918(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 10add3a1c; end: 10add3bdf; -[LSAVideoProcessingComponent processToImageFromPixelBuffer:processingInfo:error:] */

void FUN_10add3a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10add0584;
  uStack_60 = 0x10add0594;
  uStack_58 = 0;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c29ad80(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10add3be0; end: 10add4a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add3be0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  int iVar18;
  long lVar19;
  undefined *puVar20;
  long *plVar21;
  long *plVar22;
  float *pfVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined **ppuStack_2a0;
  long *plStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_280;
  long *plStack_278;
  undefined **ppuStack_270;
  undefined1 uStack_268;
  long *plStack_258;
  undefined **ppuStack_250;
  long ***ppplStack_248;
  undefined **ppuStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined **ppuStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined ***pppuStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_138;
  float fStack_130;
  float fStack_12c;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    plVar21 = (long *)0x0;
    ppuVar14 = (undefined **)0x0;
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&uStack_160);
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    if (plStack_158 == (long *)0x0) {
      plVar21 = (long *)0x0;
      ppuVar14 = (undefined **)0x0;
    }
    else {
      plVar21 = plStack_158;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar21 == (long *)0x0) {
        ppuVar14 = (undefined **)0x0;
      }
      else {
        plStack_90 = (long *)uStack_160;
        ppuVar14 = uStack_160;
      }
      plStack_88 = plVar21;
      if (plStack_158 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf04760(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf445e0();
  _objc_release(uVar13);
  FUN_10a21df48(ppuVar14,0);
  puStack_b0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  plStack_d8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  uStack_d0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  uStack_98 = 1;
  iVar10 = (int)*(undefined8 *)(param_1 + 0x38);
  _CVPixelBufferGetWidth();
  iVar11 = (int)*(undefined8 *)(param_1 + 0x38);
  _CVPixelBufferGetHeight();
  iVar12 = iVar10;
  if (iVar10 <= iVar11) {
    iVar12 = iVar11;
  }
  iVar18 = iVar11;
  iVar24 = iVar10;
  if (0x500 < iVar12) {
    iVar18 = 0x500;
    iVar12 = iVar18;
    if (iVar10 <= iVar11) {
      iVar12 = 0x2d0;
    }
    if (iVar11 <= iVar10) {
      iVar18 = 0x2d0;
    }
    iVar24 = 0;
    if (iVar11 != 0) {
      iVar24 = (iVar18 * iVar10) / iVar11;
    }
    iVar7 = 0;
    if (iVar10 != 0) {
      iVar7 = (iVar12 * iVar11) / iVar10;
    }
    if (iVar12 * iVar11 < iVar18 * iVar10) {
      iVar18 = iVar7;
      iVar24 = iVar12;
    }
  }
  iVar12 = (int)*(undefined8 *)(param_1 + 0x38);
  _CVPixelBufferGetPixelFormatType();
  dVar25 = (double)iVar18;
  dVar26 = (double)iVar24;
  if (iVar12 == 0x42475241) {
    FUN_10adcf630(dVar26,dVar25,&uStack_160,*(undefined8 *)(param_1 + 0x28));
    lVar19 = *(long *)(param_1 + 0x20);
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = *plVar22 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plStack_170 = (long *)ppuVar14;
    plStack_168 = plVar21;
    if (lVar19 == 0) {
      plStack_230 = (long *)0x0;
    }
    else {
      func_0x00010bfe7a20(&plStack_230);
    }
    plVar21 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar22 = plStack_168 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar22 = plStack_90;
    ppuVar14 = (undefined **)0x68;
    __Znwm();
    *ppuVar14 = (undefined *)plVar22;
    ppuVar14[9] = (undefined *)0x0;
    *(undefined1 *)(ppuVar14 + 10) = 0;
    *(undefined1 *)(ppuVar14 + 0xb) = 0;
    ppuVar14[0xc] = (undefined *)0x0;
    ppuVar14[2] = (undefined *)0x0;
    ppuVar14[1] = (undefined *)0x0;
    ppuVar14[4] = (undefined *)0x0;
    ppuVar14[3] = (undefined *)0x0;
    ppuVar14[6] = (undefined *)0x0;
    ppuVar14[5] = (undefined *)0x0;
    *(undefined2 *)(ppuVar14 + 7) = 0;
    ppuStack_240 = ppuVar14;
    FUN_10ad5b354(&ppuStack_240);
    plVar21 = plStack_230;
    pppuStack_178 = &ppuStack_240;
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar17 = 0;
      uStack_80 = (undefined **)0x0;
      plStack_78 = (long *)0x0;
      ppuVar14 = (undefined **)0x0;
      ppuStack_70 = (undefined **)0x0;
    }
    else {
      func_0x00010c2709c0(&uStack_80);
      if (((ulong)plStack_78 & 0x100000000) == 0) {
        uVar17 = 0;
        ppuVar14 = (undefined **)0x0;
      }
      else {
        plStack_278 = plStack_78;
        ppuStack_280 = uStack_80;
        ppuStack_270 = ppuStack_70;
        ppuVar14 = uStack_80;
        _CMTimeGetSeconds(&ppuStack_280);
        uVar17 = 1;
      }
    }
    uStack_208 = (long *)((ulong)uStack_208 & 0xffffffffffffff00);
    uStack_210 = &PTR_DAT_110ba5598;
    uStack_1f8 = CONCAT71(uStack_1f8._1_7_,uVar17);
    uStack_200 = ppuVar14;
    FUN_10addace4(&ppuStack_2a0,&uStack_160);
    plStack_278 = plStack_298;
    ppuStack_280 = ppuStack_2a0;
    ppuStack_2a0 = (undefined **)0x0;
    plStack_298 = (long *)0x0;
    FUN_10a2242d8(&uStack_1c8,plVar22,plVar21,&uStack_210,0,&ppuStack_280);
    FUN_10a22438c(&plStack_e0,&uStack_1c8);
    FUN_10a22ba60(auStack_198,uStack_190);
    if (plStack_1a0 != (long *)0x0) {
      plVar21 = plStack_1a0 + 1;
      do {
        lVar19 = *plVar21;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar9) {
          *plVar21 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a0);
      }
    }
    plVar21 = (long *)CONCAT44(uStack_1ac,uStack_1b0);
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar21 = (long *)CONCAT44(uStack_1bc,uStack_1c0);
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar21 = plStack_278;
    if (plStack_278 != (long *)0x0) {
      plVar22 = plStack_278 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_278 + 0x10))(plStack_278);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar21 = plStack_298;
    if (plStack_298 != (long *)0x0) {
      plVar22 = plStack_298 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_298 + 0x10))(plStack_298);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    FUN_10ad5b8bc(&pppuStack_178);
    ppuVar14 = ppuStack_240;
    ppuStack_240 = (undefined **)0x0;
    if (ppuVar14 != (undefined **)0x0) {
      FUN_10ad5c5b8(&ppuStack_240);
    }
    plVar21 = plStack_230;
    plStack_230 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
      plVar21 = plStack_230;
      plStack_230 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 8))();
      }
    }
    if (plStack_e8 == (long *)0x0) goto LAB_10add4574;
    plVar21 = plStack_e8 + 1;
    do {
      lVar19 = *plVar21;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar9) {
        *plVar21 = lVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      plVar22 = plStack_e8;
    } while (cVar8 != '\0');
  }
  else {
    iVar12 = (int)*(undefined8 *)(param_1 + 0x38);
    _CVPixelBufferGetPixelFormatType();
    puVar20 = PTR__OBJC_CLASS___NSException_1126af520;
    if (iVar12 != 0x34323066) {
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      _objc_opt_class(uVar13);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f020(puVar20);
      _objc_release(uVar13);
      goto LAB_10add4574;
    }
    FUN_10adcf630(dVar26,dVar25,&uStack_160,*(undefined8 *)(param_1 + 0x28));
    lVar19 = *(long *)(param_1 + 0x20);
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = *plVar22 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plStack_220 = (long *)ppuVar14;
    plStack_218 = plVar21;
    if (lVar19 == 0) {
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      uStack_208 = (long *)0x0;
      uStack_210 = (undefined **)0x0;
      uStack_1f8 = 0;
      uStack_200 = (undefined **)0x0;
    }
    else {
      func_0x00010bfe6b40(&uStack_210,dVar26,dVar25);
    }
    plVar21 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      plVar22 = plStack_218 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    ppuVar14 = uStack_200;
    plVar21 = uStack_208;
    ppuVar2 = uStack_210;
    uStack_210 = (undefined **)0x0;
    plStack_230 = uStack_208;
    ppuStack_228 = uStack_200;
    if (uStack_200 != (undefined **)0x0) {
      ppuVar1 = uStack_200 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(long *)(param_1 + 0x20) == 0) {
      ppuStack_240 = (undefined **)0x0;
      plStack_238 = (long *)0x0;
    }
    else {
      func_0x00010bfe8660(&ppuStack_240);
    }
    plVar22 = plStack_90;
    pppuVar15 = (undefined ***)0x68;
    __Znwm();
    *pppuVar15 = (undefined **)plVar22;
    pppuVar15[9] = (undefined **)0x0;
    *(undefined1 *)(pppuVar15 + 10) = 0;
    *(undefined1 *)(pppuVar15 + 0xb) = 0;
    pppuVar15[0xc] = (undefined **)0x0;
    pppuVar15[2] = (undefined **)0x0;
    pppuVar15[1] = (undefined **)0x0;
    pppuVar15[4] = (undefined **)0x0;
    pppuVar15[3] = (undefined **)0x0;
    pppuVar15[6] = (undefined **)0x0;
    pppuVar15[5] = (undefined **)0x0;
    *(undefined2 *)(pppuVar15 + 7) = 0;
    pppuStack_178 = pppuVar15;
    FUN_10ad5b354(&pppuStack_178);
    ppuStack_250 = ppuVar14;
    plStack_258 = plVar21;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar14 = ppuVar14 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar9) {
          *ppuVar14 = *ppuVar14 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    ppplStack_248 = (long ***)&pppuStack_178;
    if (*(long *)(param_1 + 0x28) == 0) {
      uStack_268 = 0;
      ppuStack_2a0 = (undefined **)0x0;
      plStack_298 = (long *)0x0;
      ppuVar14 = (undefined **)0x0;
      ppuStack_290 = (undefined **)0x0;
    }
    else {
      func_0x00010c2709c0(&ppuStack_2a0);
      if (((ulong)plStack_298 & 0x100000000) == 0) {
        uStack_268 = 0;
        ppuVar14 = (undefined **)0x0;
      }
      else {
        plStack_78 = plStack_298;
        uStack_80 = ppuStack_2a0;
        ppuStack_70 = ppuStack_290;
        ppuVar14 = ppuStack_2a0;
        _CMTimeGetSeconds(&uStack_80);
        uStack_268 = 1;
      }
    }
    plStack_278 = (long *)((ulong)plStack_278 & 0xffffffffffffff00);
    ppuStack_280 = &PTR_DAT_110ba5598;
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    ppuStack_270 = ppuVar14;
    FUN_10add4a68(uVar13,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278463c));
    plStack_78 = plStack_238;
    uStack_80 = ppuStack_240;
    ppuStack_240 = (undefined **)0x0;
    plStack_238 = (long *)0x0;
    FUN_10a21ebc0(&uStack_1c8,plVar22,ppuVar2,&plStack_258,&ppuStack_280,uVar13,&uStack_80);
    FUN_10a22438c(&plStack_e0,&uStack_1c8);
    FUN_10a22ba60(auStack_198,uStack_190);
    if (plStack_1a0 != (long *)0x0) {
      plVar21 = plStack_1a0 + 1;
      do {
        lVar19 = *plVar21;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar9) {
          *plVar21 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a0);
      }
    }
    plVar21 = (long *)CONCAT44(uStack_1ac,uStack_1b0);
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar21 = (long *)CONCAT44(uStack_1bc,uStack_1c0);
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar21 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar22 = plStack_78 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    ppuVar14 = ppuStack_250;
    if (ppuStack_250 != (undefined **)0x0) {
      ppuVar1 = ppuStack_250 + 1;
      do {
        puVar20 = *ppuVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = puVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (puVar20 == (undefined *)0x0) {
        (**(code **)(*ppuStack_250 + 0x10))(ppuStack_250);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    FUN_10ad5b8bc(&ppplStack_248);
    pppuVar15 = pppuStack_178;
    pppuStack_178 = (undefined ***)0x0;
    if (pppuVar15 != (undefined ***)0x0) {
      FUN_10ad5c5b8(&pppuStack_178);
    }
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))(ppuVar2);
    }
    plVar21 = plStack_238;
    if (plStack_238 != (long *)0x0) {
      plVar22 = plStack_238 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_238 + 0x10))(plStack_238);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    ppuVar14 = ppuStack_228;
    if (ppuStack_228 != (undefined **)0x0) {
      ppuVar2 = ppuStack_228 + 1;
      do {
        puVar20 = *ppuVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar9) {
          *ppuVar2 = puVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (puVar20 == (undefined *)0x0) {
        (**(code **)(*ppuStack_228 + 0x10))(ppuStack_228);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    plVar21 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      plVar22 = plStack_1e0 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar21 = plStack_1f0;
    if (plStack_1f0 != (long *)0x0) {
      plVar22 = plStack_1f0 + 1;
      do {
        lVar19 = *plVar22;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *plVar22 = lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    ppuVar14 = uStack_200;
    if (uStack_200 != (undefined **)0x0) {
      ppuVar2 = uStack_200 + 1;
      do {
        puVar20 = *ppuVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar9) {
          *ppuVar2 = puVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (puVar20 == (undefined *)0x0) {
        (**(code **)(*uStack_200 + 0x10))(uStack_200);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    plVar21 = (long *)uStack_210;
    uStack_210 = (undefined **)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (plStack_e8 == (long *)0x0) goto LAB_10add4574;
    plVar21 = plStack_e8 + 1;
    do {
      lVar19 = *plVar21;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar9) {
        *plVar21 = lVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      plVar22 = plStack_e8;
    } while (cVar8 != '\0');
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
  }
LAB_10add4574:
  func_0x00010c0ef0e0(*(undefined8 *)(param_1 + 0x28));
  FUN_10adcf5a0();
  ppuStack_280 = (undefined **)0x200000003;
  uStack_80 = (undefined **)0x200000003;
  ppuStack_2a0 = (undefined **)((ulong)ppuStack_2a0 & 0xffffffff00000000);
  plStack_230 = (long *)((ulong)plStack_230 & 0xffffffff00000000);
  func_0x00010c212f00(*(undefined8 *)(param_1 + 0x20));
  if (plStack_e0[1] == 0) {
    pfVar23 = (float *)(plStack_e0[2] + 0x30);
  }
  else {
    pfVar23 = (float *)(plStack_e0[1] + 0x38);
  }
  uStack_1c8 = SUB84(uStack_80,0);
  FUN_10add38d8((ulong)uStack_80 & 0xffffffff,uStack_80._4_4_);
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 1;
  FUN_10a19e730(&uStack_160,&uStack_1c8,0,1);
  fVar27 = *pfVar23;
  fVar28 = pfVar23[1];
  fVar29 = pfVar23[2];
  fVar30 = pfVar23[3];
  fVar31 = pfVar23[4];
  fVar32 = pfVar23[5];
  fVar33 = pfVar23[6];
  fVar34 = pfVar23[7];
  fVar35 = pfVar23[8];
  uStack_210 = (undefined **)
               CONCAT44(uStack_160._4_4_ * fVar31 + (float)uStack_160 * fVar28 +
                        plStack_158._0_4_ * fVar34,
                        uStack_160._4_4_ * fVar30 + (float)uStack_160 * fVar27 +
                        plStack_158._0_4_ * fVar33);
  uStack_208 = (long *)CONCAT44(fStack_14c * fVar30 + fStack_150 * fVar27 + fStack_148 * fVar33,
                                uStack_160._4_4_ * fVar32 + (float)uStack_160 * fVar29 +
                                plStack_158._0_4_ * fVar35);
  uStack_200 = (undefined **)
               CONCAT44(fStack_14c * fVar32 + fStack_150 * fVar29 + fStack_148 * fVar35,
                        fStack_14c * fVar31 + fStack_150 * fVar28 + fStack_148 * fVar34);
  uStack_1f8 = CONCAT44(fStack_12c * fVar31 + fStack_130 * fVar28 + fStack_138 * fVar34,
                        fStack_12c * fVar30 + fStack_130 * fVar27 + fStack_138 * fVar33);
  plStack_1f0 = (long *)CONCAT44(plStack_1f0._4_4_,
                                 fStack_12c * fVar32 + fStack_130 * fVar29 + fStack_138 * fVar35);
  plVar21 = plStack_e0;
  FUN_10a098908();
  plVar22 = plStack_230;
  uStack_160 = (undefined **)*plVar21;
  plVar21 = (long *)plVar21[1];
  if (plVar21 != (long *)0x0) {
    plVar3 = plVar21 + 1;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *plVar3 = *plVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar5 = *(undefined4 *)((long)uStack_160 + 0x18);
  uVar6 = *(undefined4 *)((long)uStack_160 + 0x1c);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  plStack_158 = plVar21;
  func_0x00010bfb4dc0(uVar13);
  uVar4 = uVar5;
  if (((ulong)plVar22 & 1) != 0) {
    uVar4 = uVar6;
    uVar6 = uVar5;
  }
  puVar16 = &uStack_160;
  FUN_10ad511a0(puVar16,uVar4,uVar6,&uStack_210,uVar13);
  func_0x00010c065d80(*(undefined8 *)(param_1 + 0x28));
  FUN_10adcf5a0();
  puVar20 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9260(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar13 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined **)(lVar19 + 0x28) = puVar20;
  _objc_release(uVar13);
  _CGImageRelease(puVar16);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf04760(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf443c0();
  _objc_release(uVar13);
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 1;
    do {
      lVar19 = *plVar22;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar9) {
        *plVar22 = lVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  FUN_10a22ba60(&puStack_b0,uStack_a8);
  plVar21 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar22 = plStack_b8 + 1;
    do {
      lVar19 = *plVar22;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar9) {
        *plVar22 = lVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar22 = plStack_c8 + 1;
    do {
      lVar19 = *plVar22;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar9) {
        *plVar22 = lVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar22 = plStack_d8 + 1;
    do {
      lVar19 = *plVar22;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar9) {
        *plVar22 = lVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar22 = plStack_88 + 1;
    do {
      lVar19 = *plVar22;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar9) {
        *plVar22 = lVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  return;
}



/* Entry: 10add4a68; end: 10add4ae3;  */

ulong FUN_10add4a68(ulong param_1,long param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfb5200();
  if (((uVar1 & 1) == 0) && (param_2 != 5)) {
    if (param_2 == 4) {
      uVar1 = param_1;
      func_0x00010c081780(param_1);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10add4ae4; end: 10add4b2b;  */

void FUN_10add4ae4(long param_1,long param_2)

{
  _objc_retain(param_2);
  if ((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    _objc_retainAutorelease(param_2);
    **(long **)(param_1 + 0x20) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10add4b2c; end: 10add4bdf; -[LSAVideoProcessingComponent imageProcessingConfigFromProcessingInfo:cameraInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add4b2c(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  FUN_10addace4(param_1,param_5);
  lVar1 = (long)_DAT_112784650;
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + 0x94) = *(undefined8 *)(param_2 + _DAT_11278464c);
  *(float *)(lVar3 + 0x9c) = (float)*(double *)(param_2 + lVar1);
  lVar1 = param_4;
  func_0x00010bf9f080();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (lVar1 != 1) goto LAB_10add4ba8;
    uVar2 = 1;
  }
  *(undefined1 *)(lVar3 + 0x15) = uVar2;
LAB_10add4ba8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10add4be0; end: 10add4daf; -[LSAVideoProcessingComponent imageFromBGRAPixelBuffer:processingInfo:cameraInfo:coreManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add4be0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined **ppuVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  undefined *puVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  long *plVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined **ppuStack_410;
  long *plStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3e8;
  undefined1 auStack_3e0 [8];
  undefined8 uStack_3d8;
  undefined1 uStack_278;
  undefined **ppuStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_248;
  undefined1 auStack_240 [120];
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 **ppuStack_170;
  undefined8 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined1 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar10 = param_4;
  _CVPixelBufferGetWidth(param_4);
  uVar6 = param_4;
  _CVPixelBufferGetHeight(param_4);
  func_0x00010c28aee0(param_2);
  func_0x00010c2293e0((double)uVar10,(double)uVar6,param_2);
  lVar16 = param_5;
  func_0x00010c0d0560();
  if (((int)lVar16 == 0) || (*(long *)(*(long *)(*(long *)*param_7 + 0x180) + 0xb8) == 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = *(long *)(*(long *)(*(long *)(*(long *)*param_7 + 0x180) + 0xa8) + 0x28) == 0;
  }
  uVar10 = 0xffffffff;
  lVar11 = 0xffffffff;
  FUN_10ad51d24(auStack_e8,param_4,bVar5,0xffffffff);
  puVar7 = (undefined8 *)0x90;
  __Znwm();
  puVar7[3] = uStack_d0;
  puVar7[2] = uStack_d8;
  puVar7[5] = uStack_c0;
  puVar7[4] = uStack_c8;
  puVar7[7] = uStack_b0;
  puVar7[6] = uStack_b8;
  *(undefined1 *)(puVar7 + 1) = 0;
  *puVar7 = &PTR_FUN_110bab9a0;
  puVar7[8] = 0;
  puVar7[9] = uStack_a0;
  (*(code *)ppuStack_98[2])(puVar7 + 10,&ppuStack_98);
  *(undefined1 *)(puVar7 + 0x11) = uStack_60;
  uStack_a0 = 0x109d138c8;
  (*(code *)*ppuStack_98)(&ppuStack_98);
  ppuStack_98 = &PTR_DAT_110b3e838;
  pcStack_90 = FUN_10a1b2664;
  *param_1 = puVar7;
  FUN_10a1b2b9c(auStack_e8);
  lVar16 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a1b2b9c(auStack_e8);
  _objc_release(param_5);
  __Unwind_Resume();
  _objc_retain(lVar11);
  uVar6 = uVar10;
  _CVPixelBufferGetWidth(uVar10);
  _CVPixelBufferGetHeight(uVar10);
  FUN_10adcf630((double)uVar6,(double)uVar10,auStack_240,lVar11);
  plStack_258 = (long *)param_6[1];
  uStack_260 = *param_6;
  if (param_6[1] != 0) {
    plVar9 = (long *)(param_6[1] + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010bfe7a20(&plStack_248,lVar16);
  plVar9 = plStack_258;
  if (plStack_258 != (long *)0x0) {
    plVar19 = plStack_258 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_258 + 0x10))(plStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uVar17 = *param_6;
  puVar7 = (undefined8 *)0x68;
  __Znwm();
  *puVar7 = uVar17;
  puVar7[9] = 0;
  *(undefined1 *)(puVar7 + 10) = 0;
  *(undefined1 *)(puVar7 + 0xb) = 0;
  puVar7[0xc] = 0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  *(undefined2 *)(puVar7 + 7) = 0;
  puStack_168 = puVar7;
  FUN_10ad5b354(&puStack_168);
  plVar9 = plStack_248;
  uVar17 = *param_6;
  ppuStack_170 = &puStack_168;
  if (lVar11 == 0) {
    uVar12 = 0;
    uStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    plVar19 = (long *)0x0;
    uStack_198 = 0;
  }
  else {
    func_0x00010c2709c0(&uStack_1a8,lVar11);
    if ((uStack_1a0 & 0x100000000) == 0) {
      uVar12 = 0;
      plVar19 = (long *)0x0;
    }
    else {
      plStack_158 = (long *)uStack_1a0;
      plStack_160 = uStack_1a8;
      uStack_150 = uStack_198;
      plVar19 = uStack_1a8;
      _CMTimeGetSeconds(&plStack_160);
      uVar12 = 1;
    }
  }
  plStack_188 = (long *)((ulong)plStack_188 & 0xffffffffffffff00);
  ppuStack_190 = &PTR_DAT_110ba5598;
  uStack_178 = CONCAT71(uStack_178._1_7_,uVar12);
  plStack_180 = plVar19;
  FUN_10addace4(&plStack_1c0,auStack_240);
  plStack_158 = plStack_1b8;
  plStack_160 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  plStack_1b8 = (long *)0x0;
  FUN_10a2242d8(&ppuStack_410,uVar17,plVar9,&ppuStack_190,0,&plStack_160);
  plStack_268 = plStack_408;
  ppuStack_270 = ppuStack_410;
  if (plStack_408 != (long *)0x0) {
    plVar9 = plStack_408 + 1;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a22ba60(auStack_3e0,uStack_3d8);
  if (plStack_3e8 != (long *)0x0) {
    plVar9 = plStack_3e8 + 1;
    do {
      lVar15 = *plVar9;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_3e8 + 0x10))(plStack_3e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3e8);
    }
  }
  plVar9 = uStack_3f8;
  if (uStack_3f8 != (long *)0x0) {
    plVar19 = uStack_3f8 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*uStack_3f8 + 0x10))(uStack_3f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_408;
  if (plStack_408 != (long *)0x0) {
    plVar19 = plStack_408 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_408 + 0x10))(plStack_408);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar19 = plStack_158 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar19 = plStack_1b8 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_10ad5b8bc(&ppuStack_170);
  puVar7 = puStack_168;
  puStack_168 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_10ad5c5b8(&puStack_168);
  }
  lVar15 = lVar16;
  _objc_opt_class();
  plVar9 = plStack_268;
  plStack_188 = plStack_268;
  ppuStack_190 = ppuStack_270;
  if (plStack_268 != (long *)0x0) {
    plVar19 = plStack_268 + 1;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar15 == 0) {
    ppuStack_270 = (undefined **)0x0;
    plStack_268 = (long *)0x0;
  }
  else {
    func_0x00010be78d40(&ppuStack_410);
    ppuStack_270 = ppuStack_410;
    plStack_268 = plStack_408;
  }
  ppuStack_410 = (undefined **)0x0;
  plStack_408 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar19 = plVar9 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_408;
  if (plStack_408 != (long *)0x0) {
    plVar19 = plStack_408 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_408 + 0x10))(plStack_408);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    plVar19 = plStack_188 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  lVar15 = lVar11;
  func_0x00010c0d0560();
  if ((((int)lVar15 != 0) && (*(long *)(*(long *)(*(long *)*param_6 + 0x180) + 0xb8) != 0)) &&
     (*(long *)(*(long *)(*(long *)(*(long *)*param_6 + 0x180) + 0xa8) + 0x28) != 0)) {
    FUN_10a30f97c();
    ppuStack_410 = (undefined **)plStack_248[2];
    FUN_10a30fb38(&plStack_160);
    piVar8 = (int *)0x113836510;
    FUN_10ad0621c();
    ppuVar4 = ppuStack_270;
    if (*piVar8 == 0) {
      plVar9 = (long *)(ulong)*(uint *)(plStack_248 + 2);
      FUN_10a301918(plVar9,*(undefined4 *)((long)plStack_248 + 0x14),0);
      _glBindFramebuffer(0x8d40,(int)plVar9[2]);
      _glViewport(0,0,(int)plVar9[1],*(undefined4 *)((long)plVar9 + 0xc));
      plVar9[5] = (long)plStack_160;
      *(undefined4 *)((long)plVar9 + 0x1c) = 0xde1;
      *(undefined1 *)(plVar9 + 6) = 1;
      plVar19 = plStack_160;
      (**(code **)(*plStack_160 + 0x48))();
      _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,plVar19,0);
      ppuVar4 = ppuStack_270;
      uVar2 = *(uint *)(lVar16 + _DAT_112784664);
      uVar1 = uVar2 >> 2 & 3;
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar2 >> 1 & 2 | uVar2 >> 3 & 1;
      }
      uStack_1a8 = (long *)(CONCAT44(uStack_1a8._4_4_,-uVar2 & 3 | uVar1 << 2) ^ 4);
      plStack_408 = (long *)0x0;
      ppuStack_410 = (undefined **)0x3f80000000000000;
      uStack_3f8 = (long *)0x3f8000003f800000;
      uStack_400 = 0x3f800000;
      if (ppuStack_270[1] == (undefined *)0x0) {
        pfVar14 = (float *)(ppuStack_270[2] + 0x30);
      }
      else {
        pfVar14 = (float *)(ppuStack_270[1] + 0x38);
      }
      fVar27 = pfVar14[6];
      fVar22 = pfVar14[7];
      fVar29 = pfVar14[3];
      fVar28 = pfVar14[4];
      fVar31 = *pfVar14;
      fVar30 = pfVar14[1];
      fVar23 = fVar27 + fVar29 * 1.0 + fVar31 * 1.0;
      fVar24 = fVar22 + fVar28 * 1.0 + fVar30 * 1.0;
      fVar25 = fVar27 + fVar29 * 0.0 + fVar31 * 1.0;
      fVar26 = fVar22 + fVar28 * 0.0 + fVar30 * 1.0;
      fVar18 = fVar27 + fVar29 * 0.0 + fVar31 * 0.0;
      fVar20 = fVar22 + fVar28 * 0.0 + fVar30 * 0.0;
      fVar27 = fVar27 + fVar29 * 1.0 + fVar31 * 0.0;
      fVar22 = fVar22 + fVar28 * 1.0 + fVar30 * 0.0;
      uVar10 = CONCAT44(fVar20,fVar18) ^
               (CONCAT44(fVar20,fVar18) ^ CONCAT44(fVar22,fVar27)) &
               ~CONCAT44(-(uint)(fVar20 < fVar22),-(uint)(fVar18 < fVar27));
      uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar24,fVar23)) &
                        ~CONCAT44(-(uint)((float)(uVar10 >> 0x20) < fVar24),
                                  -(uint)((float)uVar10 < fVar23));
      uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar26,fVar25)) &
                        ~CONCAT44(-(uint)((float)(uVar10 >> 0x20) < fVar26),
                                  -(uint)((float)uVar10 < fVar25));
      fVar28 = (float)uVar10;
      fVar29 = (float)(uVar10 >> 0x20);
      plStack_180 = (long *)CONCAT44(fVar24 - fVar29,fVar23 - fVar28);
      uStack_178 = CONCAT44(fVar26 - fVar29,fVar25 - fVar28);
      ppuStack_190 = (undefined **)CONCAT44(fVar20 - fVar29,fVar18 - fVar28);
      plStack_188 = (long *)CONCAT44(fVar22 - fVar29,fVar27 - fVar28);
      FUN_10a19dc6c(&uStack_1a8,&ppuStack_410,8);
      auVar21 = NEON_fmov(0xbf800000,4);
      ppuStack_410 = (undefined **)
                     CONCAT44(auVar21._4_4_ + (float)((ulong)ppuStack_410 >> 0x20) * 2.0,
                              auVar21._0_4_ + SUB84(ppuStack_410,0) * 2.0);
      plStack_408 = (long *)CONCAT44(auVar21._12_4_ + (float)((ulong)plStack_408 >> 0x20) * 2.0,
                                     auVar21._8_4_ + SUB84(plStack_408,0) * 2.0);
      uStack_3f8 = (long *)CONCAT44(auVar21._12_4_ + (float)((ulong)uStack_3f8 >> 0x20) * 2.0,
                                    auVar21._8_4_ + SUB84(uStack_3f8,0) * 2.0);
      uStack_400 = CONCAT44(auVar21._4_4_ + (float)((ulong)uStack_400 >> 0x20) * 2.0,
                            auVar21._0_4_ + (float)uStack_400 * 2.0);
      FUN_10a0988c8(ppuVar4);
      FUN_10ad4b940(0);
      FUN_10a301788();
      FUN_10a301a24(plVar9,0x8d40);
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    else {
      if (ppuStack_270[1] == (undefined *)0x0) {
        puVar7 = (undefined8 *)(ppuStack_270[2] + 0x10);
      }
      else {
        puVar7 = (undefined8 *)(ppuStack_270[1] + 8);
      }
      plVar19 = (long *)*puVar7;
      (**(code **)(*plVar19 + 0xc0))();
      plVar9 = plStack_160;
      (**(code **)(*plStack_160 + 0x38))();
      puVar13 = ppuVar4[1];
      if (puVar13 == (undefined *)0x0) {
        puVar13 = ppuVar4[2] + 0x30;
      }
      else {
        puVar13 = puVar13 + 0x38;
      }
      ppuStack_410 = (undefined **)((ulong)ppuStack_410 & 0xffffffffffffff00);
      uStack_278 = 0;
      FUN_10a0e38cc(plVar19,plVar9,puVar13,&ppuStack_410);
      FUN_10addad4c(&ppuStack_410);
    }
    (**(code **)(*plStack_160 + 0x10))
              (plStack_160,plStack_248[5],plStack_248[3],0,*(undefined4 *)((long)plStack_160 + 0x1c)
              );
    plVar9 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar19 = plStack_158 + 1;
      do {
        lVar15 = *plVar19;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  FUN_10a08f69c();
  plVar9 = plStack_268;
  puVar13 = PTR_PTR_1126de200;
  if (plStack_268 != (long *)0x0) {
    plVar19 = plStack_268 + 1;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  func_0x00010c0f98a0(lVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26cf80(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (plVar9 != (long *)0x0) {
    plVar19 = plVar9 + 1;
    do {
      lVar16 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    plVar19 = plStack_268 + 1;
    do {
      lVar16 = *plVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_248;
  plStack_248 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  if (plStack_1c8 != (long *)0x0) {
    plVar9 = plStack_1c8 + 1;
    do {
      lVar16 = *plVar9;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
    }
  }
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10add4db0; end: 10add5797; -[LSAVideoProcessingComponent _processBGRAPixelBuffer:processingInfo:coreManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add4db0(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  undefined1 uVar9;
  undefined *puVar10;
  float *pfVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  long *plVar15;
  float fVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined **ppuStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined8 uStack_2e8;
  undefined1 uStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_158;
  undefined1 auStack_150 [120];
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_4);
  uVar17 = param_3;
  _CVPixelBufferGetWidth(param_3);
  _CVPixelBufferGetHeight(param_3);
  FUN_10adcf630((double)uVar17,(double)param_3,auStack_150,param_4);
  plStack_168 = (long *)param_5[1];
  uStack_170 = *param_5;
  if (param_5[1] != 0) {
    plVar8 = (long *)(param_5[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010bfe7a20(&plStack_158,param_1);
  plVar8 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar15 = plStack_168 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  uVar13 = *param_5;
  puVar6 = (undefined8 *)0x68;
  __Znwm();
  *puVar6 = uVar13;
  puVar6[9] = 0;
  *(undefined1 *)(puVar6 + 10) = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[0xc] = 0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  *(undefined2 *)(puVar6 + 7) = 0;
  puStack_78 = puVar6;
  FUN_10ad5b354(&puStack_78);
  plVar8 = plStack_158;
  uVar13 = *param_5;
  ppuStack_80 = &puStack_78;
  if (param_4 == 0) {
    uVar9 = 0;
    uStack_b8 = (long *)0x0;
    uStack_b0 = 0;
    plVar15 = (long *)0x0;
    uStack_a8 = 0;
  }
  else {
    func_0x00010c2709c0(&uStack_b8,param_4);
    if ((uStack_b0 & 0x100000000) == 0) {
      uVar9 = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plStack_68 = (long *)uStack_b0;
      plStack_70 = uStack_b8;
      uStack_60 = uStack_a8;
      plVar15 = uStack_b8;
      _CMTimeGetSeconds(&plStack_70);
      uVar9 = 1;
    }
  }
  plStack_98 = (long *)((ulong)plStack_98 & 0xffffffffffffff00);
  ppuStack_a0 = &PTR_DAT_110ba5598;
  uStack_88 = CONCAT71(uStack_88._1_7_,uVar9);
  plStack_90 = plVar15;
  FUN_10addace4(&plStack_d0,auStack_150);
  plStack_68 = plStack_c8;
  plStack_70 = plStack_d0;
  plStack_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  FUN_10a2242d8(&ppuStack_320,uVar13,plVar8,&ppuStack_a0,0,&plStack_70);
  plStack_178 = plStack_318;
  ppuStack_180 = ppuStack_320;
  if (plStack_318 != (long *)0x0) {
    plVar8 = plStack_318 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a22ba60(auStack_2f0,uStack_2e8);
  if (plStack_2f8 != (long *)0x0) {
    plVar8 = plStack_2f8 + 1;
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2f8);
    }
  }
  plVar8 = uStack_308;
  if (uStack_308 != (long *)0x0) {
    plVar15 = uStack_308 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*uStack_308 + 0x10))(uStack_308);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar15 = plStack_318 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar15 = plStack_68 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar15 = plStack_c8 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_10ad5b8bc(&ppuStack_80);
  puVar6 = puStack_78;
  puStack_78 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_10ad5c5b8(&puStack_78);
  }
  lVar12 = param_1;
  _objc_opt_class();
  plVar8 = plStack_178;
  plStack_98 = plStack_178;
  ppuStack_a0 = ppuStack_180;
  if (plStack_178 != (long *)0x0) {
    plVar15 = plStack_178 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar12 == 0) {
    ppuStack_180 = (undefined **)0x0;
    plStack_178 = (long *)0x0;
  }
  else {
    func_0x00010be78d40(&ppuStack_320);
    ppuStack_180 = ppuStack_320;
    plStack_178 = plStack_318;
  }
  ppuStack_320 = (undefined **)0x0;
  plStack_318 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar15 = plStack_318 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar15 = plStack_98 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar12 = param_4;
  func_0x00010c0d0560();
  if ((((int)lVar12 != 0) && (*(long *)(*(long *)(*(long *)*param_5 + 0x180) + 0xb8) != 0)) &&
     (*(long *)(*(long *)(*(long *)(*(long *)*param_5 + 0x180) + 0xa8) + 0x28) != 0)) {
    FUN_10a30f97c();
    ppuStack_320 = (undefined **)plStack_158[2];
    FUN_10a30fb38(&plStack_70);
    piVar7 = (int *)0x113836510;
    FUN_10ad0621c();
    ppuVar5 = ppuStack_180;
    if (*piVar7 == 0) {
      plVar8 = (long *)(ulong)*(uint *)(plStack_158 + 2);
      FUN_10a301918(plVar8,*(undefined4 *)((long)plStack_158 + 0x14),0);
      _glBindFramebuffer(0x8d40,(int)plVar8[2]);
      _glViewport(0,0,(int)plVar8[1],*(undefined4 *)((long)plVar8 + 0xc));
      plVar8[5] = (long)plStack_70;
      *(undefined4 *)((long)plVar8 + 0x1c) = 0xde1;
      *(undefined1 *)(plVar8 + 6) = 1;
      plVar15 = plStack_70;
      (**(code **)(*plStack_70 + 0x48))();
      _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,plVar15,0);
      ppuVar5 = ppuStack_180;
      uVar2 = *(uint *)(param_1 + _DAT_112784664);
      uVar1 = uVar2 >> 2 & 3;
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar2 >> 1 & 2 | uVar2 >> 3 & 1;
      }
      uStack_b8 = (long *)(CONCAT44(uStack_b8._4_4_,-uVar2 & 3 | uVar1 << 2) ^ 4);
      plStack_318 = (long *)0x0;
      ppuStack_320 = (undefined **)0x3f80000000000000;
      uStack_308 = (long *)0x3f8000003f800000;
      uStack_310 = 0x3f800000;
      if (ppuStack_180[1] == (undefined *)0x0) {
        pfVar11 = (float *)(ppuStack_180[2] + 0x30);
      }
      else {
        pfVar11 = (float *)(ppuStack_180[1] + 0x38);
      }
      fVar24 = pfVar11[6];
      fVar19 = pfVar11[7];
      fVar26 = pfVar11[3];
      fVar25 = pfVar11[4];
      fVar28 = *pfVar11;
      fVar27 = pfVar11[1];
      fVar20 = fVar24 + fVar26 * 1.0 + fVar28 * 1.0;
      fVar21 = fVar19 + fVar25 * 1.0 + fVar27 * 1.0;
      fVar22 = fVar24 + fVar26 * 0.0 + fVar28 * 1.0;
      fVar23 = fVar19 + fVar25 * 0.0 + fVar27 * 1.0;
      fVar14 = fVar24 + fVar26 * 0.0 + fVar28 * 0.0;
      fVar16 = fVar19 + fVar25 * 0.0 + fVar27 * 0.0;
      fVar24 = fVar24 + fVar26 * 1.0 + fVar28 * 0.0;
      fVar19 = fVar19 + fVar25 * 1.0 + fVar27 * 0.0;
      uVar17 = CONCAT44(fVar16,fVar14) ^
               (CONCAT44(fVar16,fVar14) ^ CONCAT44(fVar19,fVar24)) &
               ~CONCAT44(-(uint)(fVar16 < fVar19),-(uint)(fVar14 < fVar24));
      uVar17 = uVar17 ^ (uVar17 ^ CONCAT44(fVar21,fVar20)) &
                        ~CONCAT44(-(uint)((float)(uVar17 >> 0x20) < fVar21),
                                  -(uint)((float)uVar17 < fVar20));
      uVar17 = uVar17 ^ (uVar17 ^ CONCAT44(fVar23,fVar22)) &
                        ~CONCAT44(-(uint)((float)(uVar17 >> 0x20) < fVar23),
                                  -(uint)((float)uVar17 < fVar22));
      fVar25 = (float)uVar17;
      fVar26 = (float)(uVar17 >> 0x20);
      plStack_90 = (long *)CONCAT44(fVar21 - fVar26,fVar20 - fVar25);
      uStack_88 = CONCAT44(fVar23 - fVar26,fVar22 - fVar25);
      ppuStack_a0 = (undefined **)CONCAT44(fVar16 - fVar26,fVar14 - fVar25);
      plStack_98 = (long *)CONCAT44(fVar19 - fVar26,fVar24 - fVar25);
      FUN_10a19dc6c(&uStack_b8,&ppuStack_320,8);
      auVar18 = NEON_fmov(0xbf800000,4);
      ppuStack_320 = (undefined **)
                     CONCAT44(auVar18._4_4_ + (float)((ulong)ppuStack_320 >> 0x20) * 2.0,
                              auVar18._0_4_ + SUB84(ppuStack_320,0) * 2.0);
      plStack_318 = (long *)CONCAT44(auVar18._12_4_ + (float)((ulong)plStack_318 >> 0x20) * 2.0,
                                     auVar18._8_4_ + SUB84(plStack_318,0) * 2.0);
      uStack_308 = (long *)CONCAT44(auVar18._12_4_ + (float)((ulong)uStack_308 >> 0x20) * 2.0,
                                    auVar18._8_4_ + SUB84(uStack_308,0) * 2.0);
      uStack_310 = CONCAT44(auVar18._4_4_ + (float)((ulong)uStack_310 >> 0x20) * 2.0,
                            auVar18._0_4_ + (float)uStack_310 * 2.0);
      FUN_10a0988c8(ppuVar5);
      FUN_10ad4b940(0);
      FUN_10a301788();
      FUN_10a301a24(plVar8,0x8d40);
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    else {
      if (ppuStack_180[1] == (undefined *)0x0) {
        puVar6 = (undefined8 *)(ppuStack_180[2] + 0x10);
      }
      else {
        puVar6 = (undefined8 *)(ppuStack_180[1] + 8);
      }
      plVar15 = (long *)*puVar6;
      (**(code **)(*plVar15 + 0xc0))();
      plVar8 = plStack_70;
      (**(code **)(*plStack_70 + 0x38))();
      puVar10 = ppuVar5[1];
      if (puVar10 == (undefined *)0x0) {
        puVar10 = ppuVar5[2] + 0x30;
      }
      else {
        puVar10 = puVar10 + 0x38;
      }
      ppuStack_320 = (undefined **)((ulong)ppuStack_320 & 0xffffffffffffff00);
      uStack_188 = 0;
      FUN_10a0e38cc(plVar15,plVar8,puVar10,&ppuStack_320);
      FUN_10addad4c(&ppuStack_320);
    }
    (**(code **)(*plStack_70 + 0x10))
              (plStack_70,plStack_158[5],plStack_158[3],0,*(undefined4 *)((long)plStack_70 + 0x1c));
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar15 = plStack_68 + 1;
      do {
        lVar12 = *plVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  FUN_10a08f69c();
  plVar8 = plStack_178;
  puVar10 = PTR_PTR_1126de200;
  if (plStack_178 != (long *)0x0) {
    plVar15 = plStack_178 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26cf80(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar15 = plStack_178 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_158;
  plStack_158 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (plStack_d8 != (long *)0x0) {
    plVar8 = plStack_d8 + 1;
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10add5798; end: 10add57fb;  */

undefined8 * FUN_10add5798(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
  return param_1;
}



/* Entry: 10add57fc; end: 10add58bf; -[LSAVideoProcessingComponent isCameraFrameNeededForNextSubmission] */

long FUN_10add57fc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  
  func_0x00010bf52380(&lStack_40);
  lStack_30 = 0;
  if (plStack_38 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    plVar4 = plStack_38;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lStack_30 = lStack_40;
      lVar6 = lStack_40;
    }
    if (plStack_38 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (lVar6 != 0) {
      FUN_10a224608(lVar6);
    }
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return lVar6;
}



/* Entry: 10add58c0; end: 10add59d7; -[LSAVideoProcessingComponent imageAndTextureFromYUVPixelBuffer:processingInfo:cameraInfo:inputSize:shouldDownscaleImage:coreManager:] */

void FUN_10add58c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_7);
  plStack_68 = (long *)param_10[1];
  uStack_70 = *param_10;
  if (param_10[1] != 0) {
    plVar1 = (long *)(param_10[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010bfe6b20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,1,
                      &uStack_70);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  _objc_release(param_7);
  return;
}



/* Entry: 10add59d8; end: 10add6037; -[LSAVideoProcessingComponent imageAndTextureFromYUVPixelBuffer:processingInfo:cameraInfo:inputSize:shouldDownscaleImage:cameraFrameNeeded:coreManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add59d8(undefined8 *param_1,double param_2,double param_3,long param_4,undefined8 param_5
                  ,undefined8 param_6,ulong param_7,undefined8 *param_8,ulong param_9,ulong param_10
                  ,undefined8 *param_11)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined *puVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  int iVar20;
  long *plVar21;
  int iVar22;
  int iVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined **ppuVar26;
  double dVar27;
  double dVar28;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined1 uStack_508;
  long *plStack_500;
  long *plStack_4f0;
  long *plStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  long *plStack_478;
  undefined1 auStack_470 [8];
  undefined8 uStack_468;
  undefined **ppuStack_450;
  long *plStack_448;
  undefined8 uStack_440;
  long *plStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [120];
  long *plStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined8 **ppuStack_300;
  undefined8 *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  undefined **ppuStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined **ppuStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  code *pcStack_1d0;
  undefined **ppuStack_1a0;
  long *plStack_198;
  undefined **ppuStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  code *pcStack_b8;
  undefined1 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_7;
  puVar13 = param_8;
  _objc_retain(param_7);
  func_0x00010c109180(param_2,param_3,param_4);
  puVar12 = param_8;
  func_0x00010c28aee0(param_4);
  func_0x00010c2293e0(param_2,param_3,param_4);
  if ((param_10 & 1) == 0) {
    ppuStack_110 = (undefined **)0x0;
    plStack_108 = (long *)0x0;
    ppuStack_1a0 = (undefined **)0x0;
    plStack_198 = (long *)0x0;
    uVar8 = param_7;
    func_0x00010c0d0560();
    if ((uVar8 & 1) == 0) {
      plStack_1e8 = (long *)0x0;
      ppuStack_1f0 = (undefined **)0x0;
      plVar24 = (long *)0x0;
      ppuVar26 = (undefined **)0x0;
LAB_10add5d20:
      bVar16 = true;
      plVar21 = plStack_1e8;
    }
    else {
      FUN_10addcba4(&ppuStack_1f0,param_6,0);
      plVar24 = plStack_1e8;
      ppuVar26 = ppuStack_1f0;
      ppuStack_110 = ppuStack_1f0;
      plStack_108 = plStack_1e8;
      FUN_10addcba4(&ppuStack_1f0,param_6,1);
      ppuStack_1a0 = ppuStack_1f0;
      plStack_198 = plStack_1e8;
      if (plVar24 != (long *)0x0) {
        plVar21 = plVar24 + 1;
        do {
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (plStack_1e8 == (long *)0x0) goto LAB_10add5d20;
      plVar21 = plStack_1e8 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar16) {
          *plVar21 = *plVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar16 = false;
      plVar21 = plStack_1e8;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = ppuVar26;
    param_1[4] = plVar24;
    param_1[5] = ppuStack_1f0;
    param_1[6] = plVar21;
    param_1[7] = param_2;
    param_1[8] = param_3;
    if (!bVar16) {
      plVar24 = plVar21 + 1;
      do {
        lVar17 = *plVar24;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    if (plStack_108 != (long *)0x0) {
      plVar24 = plStack_108 + 1;
      do {
        lVar17 = *plVar24;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plVar21 = plStack_108;
      } while (cVar5 != '\0');
      goto LAB_10add5f20;
    }
  }
  else {
    FUN_10addcba4(&ppuStack_1f0,param_6,0);
    FUN_10addcba4(&uStack_200,param_6,1);
    uVar25 = *param_11;
    plStack_218 = plStack_1e8;
    ppuStack_220 = ppuStack_1f0;
    if (plStack_1e8 != (long *)0x0) {
      plVar24 = plStack_1e8 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = *plVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plStack_228 = plStack_1f8;
    uStack_230 = uStack_200;
    if (plStack_1f8 != (long *)0x0) {
      plVar24 = plStack_1f8 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = *plVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a0ec6f0();
    ppuStack_110 = (undefined **)CONCAT44(ppuStack_110._4_4_,(int)param_8);
    puVar13 = *(undefined8 **)(param_4 + _DAT_112784654);
    FUN_10a21c990(&uStack_210,uVar25,&ppuStack_220,&uStack_230,&ppuStack_110);
    plVar24 = plStack_228;
    if (plStack_228 != (long *)0x0) {
      plVar21 = plStack_228 + 1;
      do {
        lVar17 = *plVar21;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar16) {
          *plVar21 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_228 + 0x10))(plStack_228);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
      }
    }
    plVar24 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      plVar21 = plStack_218 + 1;
      do {
        lVar17 = *plVar21;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar16) {
          *plVar21 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
      }
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
    ppuStack_110 = &PTR_FUN_110bab9a0;
    uStack_88 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0xffffffff00000000;
    puStack_e8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0x109d138c8;
    ppuStack_c0 = &PTR_DAT_110b3e838;
    pcStack_b8 = FUN_10a1b2664;
    if ((param_9 & 1) == 0) {
      puVar12 = (undefined8 *)0xffffffff;
      uVar7 = 0xffffffff;
      FUN_10ad51d24(&ppuStack_1a0,param_6,1);
      FUN_10a1b2920(&ppuStack_110,&ppuStack_1a0);
      FUN_10a1b2b9c(&ppuStack_1a0);
    }
    else {
      iVar14 = (int)param_2;
      uVar2 = iVar14 + 6;
      if (-4 < iVar14) {
        uVar2 = iVar14 + 3;
      }
      uVar2 = uVar2 & 0xfffffffc;
      iVar14 = (int)param_3;
      uVar4 = iVar14 + 6;
      if (-4 < iVar14) {
        uVar4 = iVar14 + 3;
      }
      uVar3 = uVar4 & 0xfffffffc;
      uVar7 = (ulong)((long)(int)uVar2 * (long)(int)uVar3 * 2 + (long)(int)uVar2 * (long)(int)uVar3)
              >> 1;
      _malloc(uVar7);
      uStack_1e0 = 0x109d138c8;
      ppuStack_1d8 = &PTR_DAT_110b3e838;
      pcStack_1d0 = FUN_10a1b1e10;
      FUN_10a1b2668(&ppuStack_1a0,uVar7,(ulong)uVar2 | (ulong)(uint)((int)uVar4 >> 2) << 0x22,
                    (long)(int)uVar2,8,&uStack_1e0,uVar7 + (long)(int)uVar2 * (long)(int)uVar3,
                    (ulong)((long)(int)uVar2 * (long)(int)uVar3) >> 1);
      FUN_10a1b2920(&ppuStack_110,&ppuStack_1a0);
      FUN_10a1b2b9c(&ppuStack_1a0);
      (*(code *)*ppuStack_1d8)(&ppuStack_1d8);
      puVar13 = (undefined8 *)(uStack_f8 & 0xffffffff);
      puVar12 = puStack_e8;
      uVar7 = uStack_e0;
      FUN_10a1a03cc(*(undefined8 *)(param_4 + _DAT_112784660),&uStack_210);
      uStack_238 = param_7;
    }
    puVar9 = (undefined8 *)0x90;
    __Znwm();
    puVar9[3] = uStack_f8;
    puVar9[2] = uStack_100;
    puVar9[5] = puStack_e8;
    puVar9[4] = uStack_f0;
    puVar9[7] = uStack_d8;
    puVar9[6] = uStack_e0;
    *(undefined1 *)(puVar9 + 1) = 0;
    *puVar9 = &PTR_FUN_110bab9a0;
    puVar9[8] = 0;
    puVar9[9] = uStack_c8;
    (*(code *)ppuStack_c0[2])(puVar9 + 10,&ppuStack_c0);
    *(undefined1 *)(puVar9 + 0x11) = uStack_88;
    uStack_c8 = 0x109d138c8;
    (*(code *)*ppuStack_c0)(&ppuStack_c0);
    ppuStack_c0 = &PTR_DAT_110b3e838;
    pcStack_b8 = FUN_10a1b2664;
    *param_1 = puVar9;
    param_1[2] = plStack_208;
    param_1[1] = uStack_210;
    if (plStack_208 != (long *)0x0) {
      plVar24 = plStack_208 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = *plVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    param_1[4] = plStack_1e8;
    param_1[3] = ppuStack_1f0;
    if (plStack_1e8 != (long *)0x0) {
      plVar24 = plStack_1e8 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = *plVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    param_1[6] = plStack_1f8;
    param_1[5] = uStack_200;
    if (plStack_1f8 != (long *)0x0) {
      plVar24 = plStack_1f8 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = *plVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    param_1[7] = param_2;
    param_1[8] = param_3;
    FUN_10a1b2b9c(&ppuStack_110);
    if (plStack_208 != (long *)0x0) {
      plVar24 = plStack_208 + 1;
      do {
        lVar17 = *plVar24;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_208 + 0x10))(plStack_208);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
      }
    }
    if (plStack_1f8 != (long *)0x0) {
      plVar24 = plStack_1f8 + 1;
      do {
        lVar17 = *plVar24;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1f8);
      }
    }
    if (plStack_1e8 != (long *)0x0) {
      plVar24 = plStack_1e8 + 1;
      do {
        lVar17 = *plVar24;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar16) {
          *plVar24 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plVar21 = plStack_1e8;
      } while (cVar5 != '\0');
LAB_10add5f20:
      if (lVar17 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a1b2b9c(&ppuStack_110);
  func_0x00010addae58(&uStack_210);
  func_0x00010addae58(&uStack_200);
  func_0x00010addae58(&ppuStack_1f0);
  _objc_release(uStack_238);
  __Unwind_Resume();
  _objc_retain(uVar7);
  puVar9 = puVar12;
  _CVPixelBufferGetWidth();
  puVar10 = puVar12;
  _CVPixelBufferGetHeight();
  iVar6 = (int)puVar10;
  iVar22 = (int)puVar9;
  iVar14 = iVar22;
  if (iVar22 <= iVar6) {
    iVar14 = iVar6;
  }
  iVar20 = iVar6;
  iVar23 = iVar22;
  if (0x500 < iVar14) {
    iVar20 = 0x500;
    iVar23 = iVar20;
    if (iVar22 <= iVar6) {
      iVar23 = 0x2d0;
    }
    if (iVar6 <= iVar22) {
      iVar20 = 0x2d0;
    }
    if (iVar23 * iVar6 < iVar20 * iVar22) {
      iVar20 = 0;
      if (iVar22 != 0) {
        iVar20 = (iVar23 * iVar6) / iVar22;
      }
    }
    else {
      iVar23 = 0;
      if (iVar6 != 0) {
        iVar23 = (iVar20 * iVar22) / iVar6;
      }
    }
  }
  dVar27 = (double)iVar20;
  dVar28 = (double)iVar23;
  FUN_10adcf630(dVar28,dVar27,auStack_3b0,uVar7);
  lVar17 = (long)_DAT_11278463c;
  if (*(long *)(param_7 + lVar17) == 0) {
    func_0x00010c06dda0(param_7);
  }
  plStack_408 = (long *)puVar13[1];
  uStack_410 = *puVar13;
  if (puVar13[1] != 0) {
    plVar24 = (long *)(puVar13[1] + 8);
    do {
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar16) {
        *plVar24 = *plVar24 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x00010bfe6b20(&plStack_3f8,dVar28,dVar27,param_7);
  plVar24 = plStack_408;
  if (plStack_408 != (long *)0x0) {
    plVar21 = plStack_408 + 1;
    do {
      lVar18 = *plVar21;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar16) {
        *plVar21 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_408 + 0x10))(plStack_408);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  ppuVar26 = ppuStack_3e8;
  plVar24 = plStack_3f8;
  plStack_3f8 = (long *)0x0;
  ppuStack_420 = ppuStack_3f0;
  ppuStack_418 = ppuStack_3e8;
  if (ppuStack_3e8 != (undefined **)0x0) {
    ppuVar11 = ppuStack_3e8 + 1;
    do {
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar16) {
        *ppuVar11 = *ppuVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_428 = plStack_3d8;
  uStack_430 = uStack_3e0;
  if (plStack_3d8 != (long *)0x0) {
    plVar21 = plStack_3d8 + 1;
    do {
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar16) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_438 = plStack_3c8;
  uStack_440 = uStack_3d0;
  if (plStack_3c8 != (long *)0x0) {
    plVar21 = plStack_3c8 + 1;
    do {
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar16) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x00010bfe8660(&ppuStack_450,param_7);
  uVar25 = *puVar13;
  puVar9 = (undefined8 *)0x68;
  __Znwm();
  *puVar9 = uVar25;
  puVar9[9] = 0;
  *(undefined1 *)(puVar9 + 10) = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[0xc] = 0;
  puVar9[2] = 0;
  puVar9[1] = 0;
  puVar9[4] = 0;
  puVar9[3] = 0;
  puVar9[6] = 0;
  puVar9[5] = 0;
  *(undefined2 *)(puVar9 + 7) = 0;
  puStack_2f8 = puVar9;
  FUN_10ad5b354(&puStack_2f8);
  ppuStack_308 = ppuVar26;
  uVar25 = *puVar13;
  ppuStack_310 = ppuStack_3f0;
  if (ppuVar26 != (undefined **)0x0) {
    ppuVar26 = ppuVar26 + 1;
    do {
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar26,0x10);
      if (bVar16) {
        *ppuVar26 = *ppuVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_300 = &puStack_2f8;
  if (uVar7 == 0) {
    uStack_508 = 0;
    ppuStack_330 = (undefined **)0x0;
    ppuStack_328 = (undefined **)0x0;
    ppuVar26 = (undefined **)0x0;
    uStack_320 = 0;
  }
  else {
    func_0x00010c2709c0(&ppuStack_330,uVar7);
    if (((ulong)ppuStack_328 & 0x100000000) == 0) {
      uStack_508 = 0;
      ppuVar26 = (undefined **)0x0;
    }
    else {
      ppuStack_2e8 = ppuStack_328;
      ppuStack_2f0 = ppuStack_330;
      uStack_2e0 = uStack_320;
      ppuVar26 = ppuStack_330;
      _CMTimeGetSeconds(&ppuStack_2f0);
      uStack_508 = 1;
    }
  }
  ppuStack_518 = (undefined **)((ulong)ppuStack_518 & 0xffffffffffffff00);
  ppuStack_520 = &PTR_DAT_110ba5598;
  uVar8 = uVar7;
  ppuStack_510 = ppuVar26;
  FUN_10add4a68(uVar7,*(undefined8 *)(param_7 + lVar17));
  ppuStack_2e8 = (undefined **)plStack_448;
  ppuStack_2f0 = ppuStack_450;
  ppuStack_450 = (undefined **)0x0;
  plStack_448 = (long *)0x0;
  FUN_10a21ebc0(&ppuStack_4a0,uVar25,plVar24,&ppuStack_310,&ppuStack_520,uVar8,&ppuStack_2f0);
  ppuVar26 = ppuStack_2e8;
  if (ppuStack_2e8 != (undefined **)0x0) {
    plVar21 = (long *)(ppuStack_2e8 + 1);
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar16) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)((long)*ppuStack_2e8 + 0x10))(ppuStack_2e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
    }
  }
  ppuVar26 = ppuStack_308;
  if (ppuStack_308 != (undefined **)0x0) {
    ppuVar11 = ppuStack_308 + 1;
    do {
      puVar19 = *ppuVar11;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar16) {
        *ppuVar11 = puVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar19 == (undefined *)0x0) {
      (**(code **)(*ppuStack_308 + 0x10))(ppuStack_308);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
    }
  }
  FUN_10ad5b8bc(&ppuStack_300);
  puVar9 = puStack_2f8;
  puStack_2f8 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_10ad5c5b8(&puStack_2f8);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 8))(plVar24);
  }
  uVar8 = uVar7;
  func_0x00010c0d0560();
  ppuVar26 = ppuStack_4a0;
  if ((int)uVar8 != 0) {
    ppuStack_2f0 = ppuStack_4a0;
    ppuStack_2e8 = ppuStack_498;
    if (ppuStack_498 != (undefined **)0x0) {
      ppuVar11 = ppuStack_498 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar16) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (ppuStack_4a0 != (undefined **)0x0) {
      puVar9 = puVar12;
      _CVPixelBufferGetWidth(puVar12);
      _CVPixelBufferGetHeight(puVar12);
      func_0x00010c109180((double)(int)puVar9,(double)(int)puVar12,param_7);
      FUN_10adcf630(uStack_3c0,uStack_3b8,&ppuStack_520,uVar7);
      func_0x00010c28aee0(param_7);
      ppuVar11 = ppuVar26;
      FUN_10a098908();
      plVar24 = (long *)ppuVar11[1];
      ppuStack_328 = (undefined **)ppuVar11[1];
      ppuStack_330 = (undefined **)*ppuVar11;
      if (plVar24 != (long *)0x0) {
        plVar21 = plVar24 + 1;
        do {
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (ppuVar26[1] == (undefined *)0x0) {
        puVar19 = ppuVar26[2] + 0x30;
      }
      else {
        puVar19 = ppuVar26[1] + 0x38;
      }
      FUN_10a1a0be4(*(undefined8 *)(param_7 + (long)_DAT_112784660),&ppuStack_330,&uStack_430,
                    &uStack_440,puVar19);
      if (plVar24 != (long *)0x0) {
        plVar21 = plVar24 + 1;
        do {
          lVar17 = *plVar21;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      if (plStack_4a8 != (long *)0x0) {
        plVar24 = plStack_4a8 + 1;
        do {
          lVar17 = *plVar24;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar16) {
            *plVar24 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4a8);
        }
      }
    }
    ppuVar26 = ppuStack_2e8;
    if (ppuStack_2e8 != (undefined **)0x0) {
      ppuVar11 = ppuStack_2e8 + 1;
      do {
        puVar19 = *ppuVar11;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar16) {
          *ppuVar11 = puVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar19 == (undefined *)0x0) {
        (**(code **)(*ppuStack_2e8 + 0x10))(ppuStack_2e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
      }
    }
  }
  ppuStack_2f0 = ppuStack_4a0;
  ppuStack_2e8 = ppuStack_498;
  if (ppuStack_490 != (undefined **)0x0) {
    ppuStack_2f0 = ppuStack_490;
    ppuStack_2e8 = ppuStack_488;
  }
  if (ppuStack_2e8 != (undefined **)0x0) {
    ppuVar26 = ppuStack_2e8 + 1;
    do {
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar26,0x10);
      if (bVar16) {
        *ppuVar26 = *ppuVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar8 = param_7;
  func_0x00010be76480();
  if ((int)uVar8 != 0) {
    func_0x00010add28dc(&ppuStack_2f0,ppuStack_4a0,ppuStack_498);
  }
  FUN_10a08f69c();
  if (ppuStack_2f0 == (undefined **)0x0) {
    if (ppuStack_420 == (undefined **)0x0) {
      plVar24 = (long *)puVar13[1];
      if (puVar13[1] != 0) {
        plVar21 = (long *)(puVar13[1] + 8);
        do {
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      func_0x00010bfe6b20(&ppuStack_520,dVar28,dVar27,param_7);
      if (plVar24 != (long *)0x0) {
        plVar21 = plVar24 + 1;
        do {
          lVar17 = *plVar21;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      ppuVar26 = ppuStack_418;
      if (ppuStack_510 != (undefined **)0x0) {
        ppuVar11 = ppuStack_510 + 1;
        do {
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppuStack_418 = ppuStack_510;
      ppuStack_420 = ppuStack_518;
      if (ppuVar26 != (undefined **)0x0) {
        ppuVar11 = ppuVar26 + 1;
        do {
          puVar19 = *ppuVar11;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *ppuVar11 = puVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar19 == (undefined *)0x0) {
          (**(code **)(*ppuVar26 + 0x10))(ppuVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
        }
      }
      if (plStack_4f0 != (long *)0x0) {
        plVar24 = plStack_4f0 + 1;
        do {
          lVar17 = *plVar24;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar16) {
            *plVar24 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4f0);
        }
      }
      if (plStack_500 != (long *)0x0) {
        plVar24 = plStack_500 + 1;
        do {
          lVar17 = *plVar24;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar16) {
            *plVar24 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_500 + 0x10))(plStack_500);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_500);
        }
      }
      ppuVar26 = ppuStack_510;
      if (ppuStack_510 != (undefined **)0x0) {
        ppuVar11 = ppuStack_510 + 1;
        do {
          puVar19 = *ppuVar11;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar16) {
            *ppuVar11 = puVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar19 == (undefined *)0x0) {
          (**(code **)(*ppuStack_510 + 0x10))(ppuStack_510);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
        }
      }
      ppuVar26 = ppuStack_520;
      ppuStack_520 = (undefined **)0x0;
      if (ppuVar26 != (undefined **)0x0) {
        (**(code **)(*ppuVar26 + 8))();
      }
      if (ppuStack_420 == (undefined **)0x0) {
        puVar19 = (undefined *)0x0;
        goto LAB_10add69c0;
      }
    }
    ppuVar26 = ppuStack_418;
    puVar19 = PTR_PTR_1126de200;
    if (ppuStack_418 != (undefined **)0x0) {
      ppuVar11 = ppuStack_418 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar16) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    func_0x00010c0f98a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cf60(puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    if (ppuVar26 == (undefined **)0x0) goto LAB_10add69c0;
    ppuVar11 = ppuVar26 + 1;
    do {
      puVar15 = *ppuVar11;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar16) {
        *ppuVar11 = puVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    uVar8 = param_7;
    _objc_opt_class();
    ppuVar26 = ppuStack_2e8;
    ppuStack_330 = ppuStack_2f0;
    ppuStack_328 = ppuStack_2e8;
    if (ppuStack_2e8 != (undefined **)0x0) {
      ppuVar11 = ppuStack_2e8 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar16) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (uVar8 == 0) {
      ppuStack_2f0 = (undefined **)0x0;
      ppuVar11 = (undefined **)0x0;
    }
    else {
      func_0x00010be78d40(&ppuStack_520);
      ppuStack_2f0 = ppuStack_520;
      ppuVar11 = ppuStack_518;
    }
    ppuStack_520 = (undefined **)0x0;
    ppuStack_518 = (undefined **)0x0;
    if (ppuStack_2e8 != (undefined **)0x0) {
      ppuVar1 = ppuStack_2e8 + 1;
      do {
        puVar19 = *ppuVar1;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar16) {
          *ppuVar1 = puVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar19 == (undefined *)0x0) {
        puVar19 = *ppuStack_2e8;
        ppuStack_2e8 = ppuVar11;
        (**(code **)(puVar19 + 0x10))(ppuVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
        ppuVar11 = ppuStack_2e8;
      }
    }
    ppuStack_2e8 = ppuVar11;
    ppuVar26 = ppuStack_518;
    if (ppuStack_518 != (undefined **)0x0) {
      ppuVar11 = ppuStack_518 + 1;
      do {
        puVar19 = *ppuVar11;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar16) {
          *ppuVar11 = puVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar19 == (undefined *)0x0) {
        (**(code **)(*ppuStack_518 + 0x10))(ppuStack_518);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
      }
    }
    ppuVar26 = ppuStack_328;
    if (ppuStack_328 != (undefined **)0x0) {
      ppuVar11 = ppuStack_328 + 1;
      do {
        puVar19 = *ppuVar11;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar16) {
          *ppuVar11 = puVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar19 == (undefined *)0x0) {
        (**(code **)(*ppuStack_328 + 0x10))(ppuStack_328);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
      }
    }
    ppuVar26 = ppuStack_2e8;
    puVar19 = PTR_PTR_1126de200;
    if (ppuStack_2e8 != (undefined **)0x0) {
      ppuVar11 = ppuStack_2e8 + 1;
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar16) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    func_0x00010c0f98a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cf80(puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    if (ppuVar26 == (undefined **)0x0) goto LAB_10add69c0;
    ppuVar11 = ppuVar26 + 1;
    do {
      puVar15 = *ppuVar11;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar16) {
        *ppuVar11 = puVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (puVar15 == (undefined *)0x0) {
    (**(code **)(*ppuVar26 + 0x10))(ppuVar26);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
  }
LAB_10add69c0:
  ppuVar26 = ppuStack_2e8;
  if (ppuStack_2e8 != (undefined **)0x0) {
    ppuVar11 = ppuStack_2e8 + 1;
    do {
      puVar15 = *ppuVar11;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar16) {
        *ppuVar11 = puVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_2e8 + 0x10))(ppuStack_2e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
    }
  }
  FUN_10a22ba60(auStack_470,uStack_468);
  if (plStack_478 != (long *)0x0) {
    plVar24 = plStack_478 + 1;
    do {
      lVar17 = *plVar24;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar16) {
        *plVar24 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_478);
    }
  }
  if (ppuStack_488 != (undefined **)0x0) {
    ppuVar26 = ppuStack_488 + 1;
    do {
      puVar15 = *ppuVar26;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar26,0x10);
      if (bVar16) {
        *ppuVar26 = puVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_488 + 0x10))(ppuStack_488);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_488);
    }
  }
  if (ppuStack_498 != (undefined **)0x0) {
    ppuVar26 = ppuStack_498 + 1;
    do {
      puVar15 = *ppuVar26;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar26,0x10);
      if (bVar16) {
        *ppuVar26 = puVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_498 + 0x10))(ppuStack_498);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_498);
    }
  }
  plVar24 = plStack_448;
  if (plStack_448 != (long *)0x0) {
    plVar21 = plStack_448 + 1;
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar16) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_448 + 0x10))(plStack_448);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  plVar24 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    plVar21 = plStack_438 + 1;
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar16) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  plVar24 = plStack_428;
  if (plStack_428 != (long *)0x0) {
    plVar21 = plStack_428 + 1;
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar16) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_428 + 0x10))(plStack_428);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  ppuVar26 = ppuStack_418;
  if (ppuStack_418 != (undefined **)0x0) {
    ppuVar11 = ppuStack_418 + 1;
    do {
      puVar15 = *ppuVar11;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar16) {
        *ppuVar11 = puVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_418 + 0x10))(ppuStack_418);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar26);
    }
  }
  if (plStack_3c8 != (long *)0x0) {
    plVar24 = plStack_3c8 + 1;
    do {
      lVar17 = *plVar24;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar16) {
        *plVar24 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3c8);
    }
  }
  if (plStack_3d8 != (long *)0x0) {
    plVar24 = plStack_3d8 + 1;
    do {
      lVar17 = *plVar24;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar16) {
        *plVar24 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3d8);
    }
  }
  if (ppuStack_3e8 != (undefined **)0x0) {
    ppuVar26 = ppuStack_3e8 + 1;
    do {
      puVar15 = *ppuVar26;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppuVar26,0x10);
      if (bVar16) {
        *ppuVar26 = puVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_3e8 + 0x10))(ppuStack_3e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_3e8);
    }
  }
  plVar24 = plStack_3f8;
  plStack_3f8 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 8))();
  }
  if (plStack_338 != (long *)0x0) {
    plVar24 = plStack_338 + 1;
    do {
      lVar17 = *plVar24;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar16) {
        *plVar24 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_338 + 0x10))(plStack_338);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_338);
    }
  }
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 10add6038; end: 10add6e57; -[LSAVideoProcessingComponent _processYUVPixelBuffer:processingInfo:coreManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add6038(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined **ppuVar19;
  double dVar20;
  double dVar21;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined1 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b0;
  long *plStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  long *plStack_238;
  undefined1 auStack_230 [8];
  undefined8 uStack_228;
  undefined **ppuStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [120];
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_4);
  uVar16 = param_3;
  _CVPixelBufferGetWidth();
  uVar7 = param_3;
  _CVPixelBufferGetHeight();
  iVar6 = (int)uVar7;
  iVar14 = (int)uVar16;
  iVar3 = iVar14;
  if (iVar14 <= iVar6) {
    iVar3 = iVar6;
  }
  iVar13 = iVar6;
  iVar15 = iVar14;
  if (0x500 < iVar3) {
    iVar13 = 0x500;
    iVar15 = iVar13;
    if (iVar14 <= iVar6) {
      iVar15 = 0x2d0;
    }
    if (iVar6 <= iVar14) {
      iVar13 = 0x2d0;
    }
    if (iVar15 * iVar6 < iVar13 * iVar14) {
      iVar13 = 0;
      if (iVar14 != 0) {
        iVar13 = (iVar15 * iVar6) / iVar14;
      }
    }
    else {
      iVar15 = 0;
      if (iVar6 != 0) {
        iVar15 = (iVar13 * iVar14) / iVar6;
      }
    }
  }
  dVar20 = (double)iVar13;
  dVar21 = (double)iVar15;
  FUN_10adcf630(dVar21,dVar20,auStack_170,param_4);
  lVar18 = (long)_DAT_11278463c;
  if (*(long *)(param_1 + lVar18) == 0) {
    func_0x00010c06dda0(param_1);
  }
  plStack_1c8 = (long *)param_5[1];
  uStack_1d0 = *param_5;
  if (param_5[1] != 0) {
    plVar17 = (long *)(param_5[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x00010bfe6b20(&plStack_1b8,dVar21,dVar20,param_1);
  plVar17 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar1 = plStack_1c8 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  ppuVar19 = ppuStack_1a8;
  plVar17 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  ppuStack_1e0 = ppuStack_1b0;
  ppuStack_1d8 = ppuStack_1a8;
  if (ppuStack_1a8 != (undefined **)0x0) {
    ppuVar9 = ppuStack_1a8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar5) {
        *ppuVar9 = *ppuVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_1e8 = plStack_198;
  uStack_1f0 = uStack_1a0;
  if (plStack_198 != (long *)0x0) {
    plVar1 = plStack_198 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_1f8 = plStack_188;
  uStack_200 = uStack_190;
  if (plStack_188 != (long *)0x0) {
    plVar1 = plStack_188 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x00010bfe8660(&ppuStack_210,param_1);
  uVar16 = *param_5;
  puVar8 = (undefined8 *)0x68;
  __Znwm();
  *puVar8 = uVar16;
  puVar8[9] = 0;
  *(undefined1 *)(puVar8 + 10) = 0;
  *(undefined1 *)(puVar8 + 0xb) = 0;
  puVar8[0xc] = 0;
  puVar8[2] = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  *(undefined2 *)(puVar8 + 7) = 0;
  puStack_b8 = puVar8;
  FUN_10ad5b354(&puStack_b8);
  ppuStack_c8 = ppuVar19;
  uVar16 = *param_5;
  ppuStack_d0 = ppuStack_1b0;
  if (ppuVar19 != (undefined **)0x0) {
    ppuVar19 = ppuVar19 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar5) {
        *ppuVar19 = *ppuVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_c0 = &puStack_b8;
  if (param_4 == 0) {
    uStack_2c8 = 0;
    ppuStack_f0 = (undefined **)0x0;
    ppuStack_e8 = (undefined **)0x0;
    ppuVar19 = (undefined **)0x0;
    uStack_e0 = 0;
  }
  else {
    func_0x00010c2709c0(&ppuStack_f0,param_4);
    if (((ulong)ppuStack_e8 & 0x100000000) == 0) {
      uStack_2c8 = 0;
      ppuVar19 = (undefined **)0x0;
    }
    else {
      ppuStack_a8 = ppuStack_e8;
      ppuStack_b0 = ppuStack_f0;
      uStack_a0 = uStack_e0;
      ppuVar19 = ppuStack_f0;
      _CMTimeGetSeconds(&ppuStack_b0);
      uStack_2c8 = 1;
    }
  }
  ppuStack_2d8 = (undefined **)((ulong)ppuStack_2d8 & 0xffffffffffffff00);
  ppuStack_2e0 = &PTR_DAT_110ba5598;
  lVar11 = param_4;
  ppuStack_2d0 = ppuVar19;
  FUN_10add4a68(param_4,*(undefined8 *)(param_1 + lVar18));
  ppuStack_a8 = (undefined **)plStack_208;
  ppuStack_b0 = ppuStack_210;
  ppuStack_210 = (undefined **)0x0;
  plStack_208 = (long *)0x0;
  FUN_10a21ebc0(&ppuStack_260,uVar16,plVar17,&ppuStack_d0,&ppuStack_2e0,lVar11,&ppuStack_b0);
  ppuVar19 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    plVar1 = (long *)(ppuStack_a8 + 1);
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)((long)*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  ppuVar19 = ppuStack_c8;
  if (ppuStack_c8 != (undefined **)0x0) {
    ppuVar9 = ppuStack_c8 + 1;
    do {
      puVar12 = *ppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar5) {
        *ppuVar9 = puVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar12 == (undefined *)0x0) {
      (**(code **)(*ppuStack_c8 + 0x10))(ppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  FUN_10ad5b8bc(&ppuStack_c0);
  puVar8 = puStack_b8;
  puStack_b8 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_10ad5c5b8(&puStack_b8);
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  lVar18 = param_4;
  func_0x00010c0d0560();
  ppuVar19 = ppuStack_260;
  if ((int)lVar18 != 0) {
    ppuStack_b0 = ppuStack_260;
    ppuStack_a8 = ppuStack_258;
    if (ppuStack_258 != (undefined **)0x0) {
      ppuVar9 = ppuStack_258 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = *ppuVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (ppuStack_260 != (undefined **)0x0) {
      uVar16 = param_3;
      _CVPixelBufferGetWidth(param_3);
      _CVPixelBufferGetHeight(param_3);
      func_0x00010c109180((double)(int)uVar16,(double)(int)param_3,param_1);
      FUN_10adcf630(uStack_180,uStack_178,&ppuStack_2e0,param_4);
      func_0x00010c28aee0(param_1);
      ppuVar9 = ppuVar19;
      FUN_10a098908();
      plVar17 = (long *)ppuVar9[1];
      ppuStack_e8 = (undefined **)ppuVar9[1];
      ppuStack_f0 = (undefined **)*ppuVar9;
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (ppuVar19[1] == (undefined *)0x0) {
        puVar12 = ppuVar19[2] + 0x30;
      }
      else {
        puVar12 = ppuVar19[1] + 0x38;
      }
      FUN_10a1a0be4(*(undefined8 *)(param_1 + _DAT_112784660),&ppuStack_f0,&uStack_1f0,&uStack_200,
                    puVar12);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar18 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if (plStack_268 != (long *)0x0) {
        plVar17 = plStack_268 + 1;
        do {
          lVar18 = *plVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_268);
        }
      }
    }
    ppuVar19 = ppuStack_a8;
    if (ppuStack_a8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_a8 + 1;
      do {
        puVar12 = *ppuVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = puVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
      }
    }
  }
  ppuStack_b0 = ppuStack_260;
  ppuStack_a8 = ppuStack_258;
  if (ppuStack_250 != (undefined **)0x0) {
    ppuStack_b0 = ppuStack_250;
    ppuStack_a8 = ppuStack_248;
  }
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar19 = ppuStack_a8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar5) {
        *ppuVar19 = *ppuVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar18 = param_1;
  func_0x00010be76480();
  if ((int)lVar18 != 0) {
    func_0x00010add28dc(&ppuStack_b0,ppuStack_260,ppuStack_258);
  }
  FUN_10a08f69c();
  if (ppuStack_b0 == (undefined **)0x0) {
    if (ppuStack_1e0 == (undefined **)0x0) {
      plVar17 = (long *)param_5[1];
      if (param_5[1] != 0) {
        plVar1 = (long *)(param_5[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      func_0x00010bfe6b20(&ppuStack_2e0,dVar21,dVar20,param_1);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar18 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      ppuVar19 = ppuStack_1d8;
      if (ppuStack_2d0 != (undefined **)0x0) {
        ppuVar9 = ppuStack_2d0 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar5) {
            *ppuVar9 = *ppuVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_1d8 = ppuStack_2d0;
      ppuStack_1e0 = ppuStack_2d8;
      if (ppuVar19 != (undefined **)0x0) {
        ppuVar9 = ppuVar19 + 1;
        do {
          puVar12 = *ppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar5) {
            *ppuVar9 = puVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
        }
      }
      if (plStack_2b0 != (long *)0x0) {
        plVar17 = plStack_2b0 + 1;
        do {
          lVar18 = *plVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b0);
        }
      }
      if (plStack_2c0 != (long *)0x0) {
        plVar17 = plStack_2c0 + 1;
        do {
          lVar18 = *plVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c0);
        }
      }
      ppuVar19 = ppuStack_2d0;
      if (ppuStack_2d0 != (undefined **)0x0) {
        ppuVar9 = ppuStack_2d0 + 1;
        do {
          puVar12 = *ppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar5) {
            *ppuVar9 = puVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuStack_2d0 + 0x10))(ppuStack_2d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
        }
      }
      ppuVar19 = ppuStack_2e0;
      ppuStack_2e0 = (undefined **)0x0;
      if (ppuVar19 != (undefined **)0x0) {
        (**(code **)(*ppuVar19 + 8))();
      }
      if (ppuStack_1e0 == (undefined **)0x0) {
        puVar12 = (undefined *)0x0;
        goto LAB_10add69c0;
      }
    }
    ppuVar19 = ppuStack_1d8;
    puVar12 = PTR_PTR_1126de200;
    if (ppuStack_1d8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_1d8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = *ppuVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cf60(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (ppuVar19 == (undefined **)0x0) goto LAB_10add69c0;
    ppuVar9 = ppuVar19 + 1;
    do {
      puVar10 = *ppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar5) {
        *ppuVar9 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    lVar18 = param_1;
    _objc_opt_class();
    ppuVar19 = ppuStack_a8;
    ppuStack_f0 = ppuStack_b0;
    ppuStack_e8 = ppuStack_a8;
    if (ppuStack_a8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_a8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = *ppuVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lVar18 == 0) {
      ppuStack_b0 = (undefined **)0x0;
      ppuVar9 = (undefined **)0x0;
    }
    else {
      func_0x00010be78d40(&ppuStack_2e0);
      ppuStack_b0 = ppuStack_2e0;
      ppuVar9 = ppuStack_2d8;
    }
    ppuStack_2e0 = (undefined **)0x0;
    ppuStack_2d8 = (undefined **)0x0;
    if (ppuStack_a8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_a8 + 1;
      do {
        puVar12 = *ppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar5) {
          *ppuVar2 = puVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar12 == (undefined *)0x0) {
        puVar12 = *ppuStack_a8;
        ppuStack_a8 = ppuVar9;
        (**(code **)(puVar12 + 0x10))(ppuVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
        ppuVar9 = ppuStack_a8;
      }
    }
    ppuStack_a8 = ppuVar9;
    ppuVar19 = ppuStack_2d8;
    if (ppuStack_2d8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_2d8 + 1;
      do {
        puVar12 = *ppuVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = puVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuStack_2d8 + 0x10))(ppuStack_2d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
      }
    }
    ppuVar19 = ppuStack_e8;
    if (ppuStack_e8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_e8 + 1;
      do {
        puVar12 = *ppuVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = puVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
      }
    }
    ppuVar19 = ppuStack_a8;
    puVar12 = PTR_PTR_1126de200;
    if (ppuStack_a8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_a8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = *ppuVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cf80(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (ppuVar19 == (undefined **)0x0) goto LAB_10add69c0;
    ppuVar9 = ppuVar19 + 1;
    do {
      puVar10 = *ppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar5) {
        *ppuVar9 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (puVar10 == (undefined *)0x0) {
    (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
  }
LAB_10add69c0:
  ppuVar19 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar9 = ppuStack_a8 + 1;
    do {
      puVar10 = *ppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar5) {
        *ppuVar9 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  FUN_10a22ba60(auStack_230,uStack_228);
  if (plStack_238 != (long *)0x0) {
    plVar17 = plStack_238 + 1;
    do {
      lVar18 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
    }
  }
  if (ppuStack_248 != (undefined **)0x0) {
    ppuVar19 = ppuStack_248 + 1;
    do {
      puVar10 = *ppuVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar5) {
        *ppuVar19 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_248 + 0x10))(ppuStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_248);
    }
  }
  if (ppuStack_258 != (undefined **)0x0) {
    ppuVar19 = ppuStack_258 + 1;
    do {
      puVar10 = *ppuVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar5) {
        *ppuVar19 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_258 + 0x10))(ppuStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_258);
    }
  }
  plVar17 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    plVar1 = plStack_208 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plVar17 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    plVar1 = plStack_1f8 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plVar17 = plStack_1e8;
  if (plStack_1e8 != (long *)0x0) {
    plVar1 = plStack_1e8 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  ppuVar19 = ppuStack_1d8;
  if (ppuStack_1d8 != (undefined **)0x0) {
    ppuVar9 = ppuStack_1d8 + 1;
    do {
      puVar10 = *ppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar5) {
        *ppuVar9 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1d8 + 0x10))(ppuStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  if (plStack_188 != (long *)0x0) {
    plVar17 = plStack_188 + 1;
    do {
      lVar18 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
    }
  }
  if (plStack_198 != (long *)0x0) {
    plVar17 = plStack_198 + 1;
    do {
      lVar18 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_198);
    }
  }
  if (ppuStack_1a8 != (undefined **)0x0) {
    ppuVar19 = ppuStack_1a8 + 1;
    do {
      puVar10 = *ppuVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar5) {
        *ppuVar19 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1a8 + 0x10))(ppuStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_1a8);
    }
  }
  plVar17 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (plStack_f8 != (long *)0x0) {
    plVar17 = plStack_f8 + 1;
    do {
      lVar18 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10add6e58; end: 10add7db7; -[LSAVideoProcessingComponent _processYUVPixelBufferV2:processingInfo:coreManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10add6e58(long param_1,undefined8 param_2,long *param_3,ulong param_4,undefined8 *param_5
                    )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  float *pfVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  long *plStack_470;
  long *plStack_468;
  long lStack_460;
  long *plStack_458;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  float fStack_430;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  undefined8 uStack_41c;
  float fStack_410;
  float fStack_408;
  float fStack_404;
  undefined8 uStack_3fc;
  undefined8 uStack_3f4;
  undefined8 uStack_3ec;
  undefined8 uStack_3e4;
  undefined8 uStack_3dc;
  undefined8 uStack_3d4;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined1 uStack_2a0;
  float fStack_298;
  undefined8 uStack_294;
  undefined8 uStack_28c;
  undefined8 uStack_284;
  float fStack_27c;
  undefined8 uStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_228;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  undefined8 *puStack_200;
  long **pplStack_1f8;
  undefined8 *puStack_1f0;
  ulong *puStack_1e8;
  long *plStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 auStack_1d0 [8];
  long *plStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  float fStack_118;
  undefined8 uStack_104;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long lStack_98;
  
  lStack_98 = param_1;
  _objc_retain(param_4);
  plVar18 = param_3;
  uStack_a0 = param_4;
  _CVPixelBufferGetWidth();
  plVar17 = param_3;
  _CVPixelBufferGetHeight();
  iVar19 = (int)plVar18;
  dVar33 = (double)iVar19;
  iVar9 = (int)plVar17;
  dVar34 = (double)iVar9;
  iVar1 = iVar19;
  if (iVar19 <= iVar9) {
    iVar1 = iVar9;
  }
  iVar15 = 0x500;
  iVar5 = iVar15;
  if (iVar19 <= iVar9) {
    iVar5 = 0x2d0;
  }
  if (iVar9 <= iVar19) {
    iVar15 = 0x2d0;
  }
  iVar2 = iVar5 * iVar9;
  iVar3 = iVar15 * iVar19;
  iVar4 = 0;
  if (iVar9 != 0) {
    iVar4 = iVar3 / iVar9;
  }
  if (iVar2 < iVar3) {
    iVar4 = iVar5;
  }
  iVar5 = 0;
  if (iVar19 != 0) {
    iVar5 = iVar2 / iVar19;
  }
  if (iVar2 < iVar3) {
    iVar15 = iVar5;
  }
  if (0x500 < iVar1) {
    iVar9 = iVar15;
    iVar19 = iVar4;
  }
  FUN_10adcf630(dVar33,dVar34,&uStack_120,uStack_a0);
  lVar20 = (long)_DAT_11278463c;
  if (*(long *)(lStack_98 + lVar20) == 0) {
    func_0x00010c06dda0();
  }
  plStack_178 = (long *)param_5[1];
  uStack_180 = *param_5;
  if (param_5[1] != 0) {
    plVar18 = (long *)(param_5[1] + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = *plVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  func_0x00010bfe6b20(&plStack_168,(double)iVar19,(double)iVar9,lStack_98);
  plVar18 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar17 = plStack_178 + 1;
    do {
      lVar16 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_148;
  uStack_1a0 = uStack_160;
  plStack_188 = plStack_168;
  plStack_168 = (long *)0x0;
  uStack_160 = 0;
  plStack_1a8 = plStack_148;
  uStack_1b0 = uStack_150;
  plStack_198 = plStack_158;
  plStack_158 = (long *)0x0;
  uStack_150 = 0;
  plStack_1b8 = plStack_138;
  uStack_1c0 = uStack_140;
  plStack_138 = (long *)0x0;
  plStack_148 = (long *)0x0;
  uStack_140 = 0;
  func_0x00010bfe8660(auStack_1d0,lStack_98);
  pplStack_1f8 = &plStack_188;
  puStack_1f0 = &uStack_1a0;
  puStack_1e8 = &uStack_a0;
  plStack_1e0 = &lStack_98;
  lVar16 = *(long *)(lStack_98 + lVar20);
  lVar20 = lStack_98;
  puStack_200 = param_5;
  puStack_1d8 = auStack_1d0;
  func_0x00010be42c80();
  if ((int)lVar20 == 0) {
    FUN_10add7db8(&plStack_250,&puStack_200);
    FUN_10adcf630(uStack_130,uStack_128,&uStack_438,uStack_a0);
    plVar18 = plStack_a8;
    plStack_a8 = plStack_3c0;
    uStack_b0 = uStack_3c8;
    uStack_120 = uStack_438;
    fStack_118 = fStack_430;
    uStack_104 = uStack_41c;
    uStack_e4 = uStack_3fc;
    uStack_d4 = uStack_3ec;
    uStack_dc = uStack_3f4;
    uStack_c4 = uStack_3dc;
    uStack_cc = uStack_3e4;
    uStack_bc = uStack_3d4;
    uStack_3c8 = 0;
    plStack_3c0 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 1;
      do {
        lVar20 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    plVar18 = plStack_3c0;
    if (plStack_3c0 != (long *)0x0) {
      plVar17 = plStack_3c0 + 1;
      do {
        lVar20 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    plStack_258 = plStack_248;
    plVar18 = plStack_250;
    if (plStack_240 != (long *)0x0) {
      plStack_258 = plStack_238;
      plVar18 = plStack_240;
    }
    if (plStack_258 != (long *)0x0) {
      plVar17 = plStack_258 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = *plVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plStack_270 = plStack_250;
    plStack_268 = plStack_248;
    if (plStack_248 != (long *)0x0) {
      plVar17 = plStack_248 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = *plVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar17 = (long *)0x0;
    if ((plVar18 != (long *)0x0) && (plStack_250 != (long *)0x0)) {
      plVar17 = plVar18;
      FUN_10a098908();
      lVar20 = *plVar17;
      plStack_440 = (long *)plVar17[1];
      if (plStack_440 != (long *)0x0) {
        plVar17 = plStack_440 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = *plVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lStack_448 = lVar20;
      FUN_10a098908();
      plStack_458 = (long *)plStack_250[1];
      lStack_460 = *plStack_250;
      if (plStack_250[1] != 0) {
        plVar17 = (long *)(plStack_250[1] + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = *plVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      dVar22 = (double)NEON_ucvtf((ulong)*(uint *)(lVar20 + 0x18));
      dVar24 = (double)NEON_ucvtf((ulong)*(uint *)(lVar20 + 0x1c));
      dVar32 = dVar22;
      if (dVar33 <= dVar34) {
        dVar32 = dVar24;
        dVar24 = dVar22;
      }
      uVar31 = uStack_a0;
      func_0x00010c09bb20();
      if ((int)uVar31 == 0) {
        plVar18 = (long *)0x0;
LAB_10add77dc:
        func_0x00010c109180(dVar33,dVar34,lStack_98);
        func_0x00010c28aee0(lStack_98);
        if (plStack_270[1] == 0) {
          lVar20 = plStack_270[2] + 0x30;
        }
        else {
          lVar20 = plStack_270[1] + 0x38;
        }
        FUN_10a1a0be4(*(undefined8 *)(lStack_98 + _DAT_112784660),&lStack_460,&uStack_1b0,
                      &uStack_1c0,lVar20);
        plVar17 = param_3;
        if (plVar18 != (long *)0x0) {
          plVar17 = plVar18;
        }
      }
      else {
        FUN_10a30f97c();
        uStack_438 = CONCAT44((int)dVar32,(int)dVar24);
        FUN_10a30fb38(&plStack_470);
        uVar31 = uStack_a0;
        func_0x00010c065d80();
        fVar10 = (float)uVar31;
        FUN_10adcf4bc();
        FUN_10ad51220();
        uStack_28c = 0;
        uStack_294 = 0;
        uStack_284 = 0;
        fStack_27c = 0.0;
        uStack_278 = 1;
        fStack_298 = fVar10;
        FUN_10a19e730(&uStack_438,&fStack_298,0,1);
        if (plVar18[1] == 0) {
          puVar13 = (undefined8 *)(plVar18[2] + 0x10);
        }
        else {
          puVar13 = (undefined8 *)(plVar18[1] + 8);
        }
        fVar10 = (float)uStack_438;
        fVar8 = uStack_438._4_4_;
        plVar12 = (long *)*puVar13;
        (**(code **)(*plVar12 + 0xc0))();
        plVar17 = plStack_470;
        (**(code **)(*plStack_470 + 0x38))();
        if (plVar18[1] == 0) {
          pfVar14 = (float *)(plVar18[2] + 0x30);
        }
        else {
          pfVar14 = (float *)(plVar18[1] + 0x38);
        }
        fVar21 = *pfVar14;
        fVar23 = pfVar14[1];
        fVar25 = pfVar14[2];
        fVar26 = pfVar14[3];
        fVar27 = pfVar14[4];
        fVar28 = pfVar14[5];
        fVar29 = pfVar14[6];
        fVar30 = pfVar14[7];
        fVar35 = pfVar14[8];
        fStack_298 = fVar8 * fVar26 + fVar10 * fVar21 + fStack_430 * fVar29;
        uStack_294 = CONCAT44(fVar8 * fVar28 + fVar10 * fVar25 + fStack_430 * fVar35,
                              fVar8 * fVar27 + fVar10 * fVar23 + fStack_430 * fVar30);
        uStack_28c = CONCAT44(fStack_424 * fVar27 + fStack_428 * fVar23 + fStack_420 * fVar30,
                              fStack_424 * fVar26 + fStack_428 * fVar21 + fStack_420 * fVar29);
        fStack_27c = fStack_404 * fVar27 + fStack_408 * fVar23 + fStack_410 * fVar30;
        uStack_284 = CONCAT44(fStack_404 * fVar26 + fStack_408 * fVar21 + fStack_410 * fVar29,
                              fStack_424 * fVar28 + fStack_428 * fVar25 + fStack_420 * fVar35);
        uStack_278 = CONCAT44(uStack_278._4_4_,
                              fStack_404 * fVar28 + fStack_408 * fVar25 + fStack_410 * fVar35);
        uStack_438 = uStack_438 & 0xffffffffffffff00;
        uStack_2a0 = 0;
        FUN_10a0e38cc(plVar12,plVar17,&fStack_298,&uStack_438);
        FUN_10addad4c(&uStack_438);
        plVar18 = plStack_470;
        FUN_10add7ffc(plStack_470,1,1);
        if ((lVar16 != 0) || (uVar31 = uStack_a0, func_0x00010c2906e0(), (uVar31 & 1) != 0)) {
          if (plStack_468 != (long *)0x0) {
            plVar17 = plStack_468 + 1;
            do {
              lVar20 = *plVar17;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar7) {
                *plVar17 = lVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plStack_468 + 0x10))(plStack_468);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_468);
            }
          }
          goto LAB_10add77dc;
        }
        plVar17 = plVar18;
        if (plStack_468 != (long *)0x0) {
          plVar18 = plStack_468 + 1;
          do {
            lVar20 = *plVar18;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar7) {
              *plVar18 = lVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_468 + 0x10))(plStack_468);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_468);
          }
        }
      }
      plVar18 = plStack_458;
      if (plStack_458 != (long *)0x0) {
        plVar12 = plStack_458 + 1;
        do {
          lVar20 = *plVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *plVar12 = lVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_458 + 0x10))(plStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      plVar18 = plStack_440;
      if (plStack_440 != (long *)0x0) {
        plVar12 = plStack_440 + 1;
        do {
          lVar20 = *plVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *plVar12 = lVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_440 + 0x10))(plStack_440);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
    }
    plVar18 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      plVar12 = plStack_268 + 1;
      do {
        lVar20 = *plVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    if (plStack_258 != (long *)0x0) {
      plVar18 = plStack_258 + 1;
      do {
        lVar20 = *plVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_258 + 0x10))(plStack_258);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_258);
      }
    }
    FUN_10a22ba60(auStack_220,uStack_218);
    if (plStack_228 != (long *)0x0) {
      plVar18 = plStack_228 + 1;
      do {
        lVar20 = *plVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_228 + 0x10))(plStack_228);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
      }
    }
    if (plStack_238 != (long *)0x0) {
      plVar18 = plStack_238 + 1;
      do {
        lVar20 = *plVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_238 + 0x10))(plStack_238);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
      }
    }
    if (plStack_248 == (long *)0x0) goto LAB_10add79d4;
    plVar18 = plStack_248 + 1;
    do {
      lVar20 = *plVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      plVar12 = plStack_248;
    } while (cVar6 != '\0');
  }
  else {
    uVar31 = plStack_188[2];
    plStack_1a8 = (long *)0x0;
    uStack_1b0 = 0;
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 1;
      do {
        lVar20 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    plVar18 = plStack_1b8;
    plStack_1b8 = (long *)0x0;
    uStack_1c0 = 0;
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 1;
      do {
        lVar20 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    _glFlush();
    FUN_10add7db8(&plStack_250,&puStack_200);
    uVar11 = uStack_a0;
    func_0x00010c2906e0();
    plStack_258 = plStack_248;
    plVar18 = plStack_250;
    if (((int)uVar11 == 0) && (plStack_240 != (long *)0x0)) {
      plStack_258 = plStack_238;
      plVar18 = plStack_240;
    }
    if (plStack_258 != (long *)0x0) {
      plVar17 = plStack_258 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = *plVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_10a30f97c();
    uStack_438 = uVar31;
    FUN_10a30fb38(&plStack_270);
    uVar31 = uStack_a0;
    func_0x00010c066100();
    fVar10 = (float)uVar31;
    FUN_10adcf4bc();
    FUN_10ad51220();
    uStack_28c = 0;
    uStack_294 = 0;
    uStack_284 = 0;
    fStack_27c = 0.0;
    uStack_278 = 1;
    fStack_298 = fVar10;
    FUN_10a19e730(&uStack_438,&fStack_298,0,1);
    if (plVar18[1] == 0) {
      puVar13 = (undefined8 *)(plVar18[2] + 0x10);
    }
    else {
      puVar13 = (undefined8 *)(plVar18[1] + 8);
    }
    fVar10 = (float)uStack_438;
    fVar8 = uStack_438._4_4_;
    plVar12 = (long *)*puVar13;
    (**(code **)(*plVar12 + 0xc0))();
    plVar17 = plStack_270;
    (**(code **)(*plStack_270 + 0x38))();
    if (plVar18[1] == 0) {
      pfVar14 = (float *)(plVar18[2] + 0x30);
    }
    else {
      pfVar14 = (float *)(plVar18[1] + 0x38);
    }
    fVar21 = *pfVar14;
    fVar23 = pfVar14[1];
    fVar25 = pfVar14[2];
    fVar26 = pfVar14[3];
    fVar27 = pfVar14[4];
    fVar28 = pfVar14[5];
    fVar29 = pfVar14[6];
    fVar30 = pfVar14[7];
    fVar35 = pfVar14[8];
    fStack_298 = fVar8 * fVar26 + fVar10 * fVar21 + fStack_430 * fVar29;
    uStack_294 = CONCAT44(fVar8 * fVar28 + fVar10 * fVar25 + fStack_430 * fVar35,
                          fVar8 * fVar27 + fVar10 * fVar23 + fStack_430 * fVar30);
    uStack_28c = CONCAT44(fStack_424 * fVar27 + fStack_428 * fVar23 + fStack_420 * fVar30,
                          fStack_424 * fVar26 + fStack_428 * fVar21 + fStack_420 * fVar29);
    fStack_27c = fStack_404 * fVar27 + fStack_408 * fVar23 + fStack_410 * fVar30;
    uStack_284 = CONCAT44(fStack_404 * fVar26 + fStack_408 * fVar21 + fStack_410 * fVar29,
                          fStack_424 * fVar28 + fStack_428 * fVar25 + fStack_420 * fVar35);
    uStack_278 = CONCAT44(uStack_278._4_4_,
                          fStack_404 * fVar28 + fStack_408 * fVar25 + fStack_410 * fVar35);
    uStack_438 = uStack_438 & 0xffffffffffffff00;
    uStack_2a0 = 0;
    FUN_10a0e38cc(plVar12,plVar17,&fStack_298,&uStack_438);
    FUN_10addad4c(&uStack_438);
    plVar17 = plStack_270;
    FUN_10add7ffc(plStack_270,0,0);
    plVar18 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      plVar12 = plStack_268 + 1;
      do {
        lVar20 = *plVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    if (plStack_258 != (long *)0x0) {
      plVar18 = plStack_258 + 1;
      do {
        lVar20 = *plVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_258 + 0x10))(plStack_258);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_258);
      }
    }
    FUN_10a22ba60(auStack_220,uStack_218);
    if (plStack_228 != (long *)0x0) {
      plVar18 = plStack_228 + 1;
      do {
        lVar20 = *plVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_228 + 0x10))(plStack_228);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
      }
    }
    if (plStack_238 != (long *)0x0) {
      plVar18 = plStack_238 + 1;
      do {
        lVar20 = *plVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_238 + 0x10))(plStack_238);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
      }
    }
    if (plStack_248 == (long *)0x0) goto LAB_10add79d4;
    plVar18 = plStack_248 + 1;
    do {
      lVar20 = *plVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      plVar12 = plStack_248;
    } while (cVar6 != '\0');
  }
  if (lVar20 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  }
LAB_10add79d4:
  plVar18 = plStack_188;
  plStack_188 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  if (plStack_1c8 != (long *)0x0) {
    plVar18 = plStack_1c8 + 1;
    do {
      lVar20 = *plVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
    }
  }
  plVar18 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar12 = plStack_1b8 + 1;
    do {
      lVar20 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar12 = plStack_1a8 + 1;
    do {
      lVar20 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar12 = plStack_198 + 1;
    do {
      lVar20 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_188;
  plStack_188 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  plVar18 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plVar12 = plStack_138 + 1;
    do {
      lVar20 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar12 = plStack_148 + 1;
    do {
      lVar20 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar12 = plStack_158 + 1;
    do {
      lVar20 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_168;
  plStack_168 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  plVar18 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar12 = plStack_a8 + 1;
    do {
      lVar20 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  _objc_release(uStack_a0);
  return plVar17;
}



/* Entry: 10add7db8; end: 10add7ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add7db8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  
  uVar8 = *(undefined8 *)*param_2;
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  *puVar5 = uVar8;
  puVar5[9] = 0;
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  puVar5[0xc] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined2 *)(puVar5 + 7) = 0;
  puStack_58 = puVar5;
  FUN_10ad5b354(&puStack_58);
  uVar8 = *(undefined8 *)*param_2;
  uVar9 = *(undefined8 *)param_2[1];
  puVar5 = (undefined8 *)param_2[2];
  plStack_68 = (long *)puVar5[1];
  uStack_70 = *puVar5;
  if (puVar5[1] != 0) {
    plVar1 = (long *)(puVar5[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_60 = &puStack_58;
  if (*(long *)param_2[3] == 0) {
    uStack_78 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uVar10 = 0;
    uStack_98 = 0;
  }
  else {
    func_0x00010c2709c0(&uStack_a8);
    if ((uStack_a0 & 0x100000000) == 0) {
      uStack_78 = 0;
      uVar10 = 0;
    }
    else {
      plStack_48 = (long *)uStack_a0;
      uStack_50 = uStack_a8;
      uStack_40 = uStack_98;
      uVar10 = uStack_a8;
      _CMTimeGetSeconds(&uStack_50);
      uStack_78 = 1;
    }
  }
  uStack_88 = 0;
  ppuStack_90 = &PTR_DAT_110ba5598;
  uVar6 = *(undefined8 *)param_2[3];
  uStack_80 = uVar10;
  FUN_10add4a68(uVar6,*(undefined8 *)(*(long *)param_2[4] + (long)_DAT_11278463c));
  puVar5 = (undefined8 *)param_2[5];
  plStack_48 = (long *)puVar5[1];
  uStack_50 = *puVar5;
  *puVar5 = 0;
  puVar5[1] = 0;
  FUN_10a21ebc0(param_1,uVar8,uVar9,&uStack_70,&ppuStack_90,uVar6,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10ad5b8bc(&ppuStack_60);
  puVar5 = puStack_58;
  puStack_58 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_10ad5c5b8(&puStack_58);
  }
  return;
}



/* Entry: 10add7ffc; end: 10add808f;  */

long * FUN_10add7ffc(long *param_1,int param_2,undefined8 param_3)

{
  if ((param_1 == (long *)0x0) ||
     (___dynamic_cast(param_1,&PTR_DAT_110bc45d8,&PTR_DAT_110c70c38,0xfffffffffffffffe),
     param_1 == (long *)0x0)) {
    param_1 = (long *)0x0;
  }
  else {
    if (param_2 != 0) {
      (**(code **)(*param_1 + 0x30))(param_1,param_3,0);
    }
    (**(code **)(*param_1 + 0x18))();
    if (param_1 != (long *)0x0) {
      _CFRetain(param_1);
    }
  }
  return param_1;
}



/* Entry: 10add8090; end: 10add8c3f; -[LSAVideoProcessingComponent _processBGRAPixelBufferV2:processingInfo:coreManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10add8090(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  int *piVar11;
  ulong *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined1 uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  undefined **ppuVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined **ppuStack_340;
  long *plStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_188;
  ulong *puStack_180;
  long *plStack_178;
  undefined **ppuStack_170;
  long *plStack_168;
  undefined **ppuStack_160;
  long *plStack_158;
  long *plStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined **ppuStack_120;
  long *plStack_118;
  ulong uStack_110;
  long *plStack_108;
  long *plStack_f8;
  undefined1 auStack_f0 [120];
  long *plStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar20 = param_3;
  _CVPixelBufferGetWidth(param_3);
  uVar8 = param_3;
  _CVPixelBufferGetHeight(param_3);
  FUN_10adcf630((double)uVar20,(double)uVar8,auStack_f0,param_4);
  plStack_108 = (long *)param_5[1];
  uStack_110 = *param_5;
  if (param_5[1] != 0) {
    plVar10 = (long *)(param_5[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x00010bfe7a20(&plStack_f8,param_1);
  plVar10 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar1 = plStack_108 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  func_0x00010bfe8660(&ppuStack_120,param_1);
  uVar20 = *param_5;
  puVar9 = (ulong *)0x68;
  __Znwm();
  *puVar9 = uVar20;
  puVar9[9] = 0;
  *(undefined1 *)(puVar9 + 10) = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[0xc] = 0;
  puVar9[2] = 0;
  puVar9[1] = 0;
  puVar9[4] = 0;
  puVar9[3] = 0;
  puVar9[6] = 0;
  puVar9[5] = 0;
  *(undefined2 *)(puVar9 + 7) = 0;
  puStack_180 = puVar9;
  FUN_10ad5b354(&puStack_180);
  plVar10 = plStack_f8;
  uVar20 = *param_5;
  uStack_58 = &puStack_180;
  if (param_4 == 0) {
    uVar15 = 0;
    ppuStack_70 = (undefined **)0x0;
    plStack_68 = (long *)0x0;
    ppuVar22 = (undefined **)0x0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c2709c0(&ppuStack_70,param_4);
    if (((ulong)plStack_68 & 0x100000000) == 0) {
      uVar15 = 0;
      ppuVar22 = (undefined **)0x0;
    }
    else {
      plStack_338 = plStack_68;
      ppuStack_340 = ppuStack_70;
      uStack_330 = uStack_60;
      ppuVar22 = ppuStack_70;
      _CMTimeGetSeconds(&ppuStack_340);
      uVar15 = 1;
    }
  }
  plStack_318 = (long *)((ulong)plStack_318 & 0xffffffffffffff00);
  ppuStack_320 = &PTR_DAT_110ba5598;
  uStack_308 = CONCAT71(uStack_308._1_7_,uVar15);
  lVar18 = (long)_DAT_11278463c;
  uVar8 = param_4;
  uStack_310 = ppuVar22;
  FUN_10add4a68(param_4,*(undefined8 *)(param_1 + lVar18));
  plStack_338 = plStack_118;
  ppuStack_340 = ppuStack_120;
  if (plStack_118 != (long *)0x0) {
    plVar1 = plStack_118 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a2242d8(&ppuStack_170,uVar20,plVar10,&ppuStack_320,uVar8,&ppuStack_340);
  plVar10 = plStack_338;
  if (plStack_338 != (long *)0x0) {
    plVar1 = plStack_338 + 1;
    do {
      lVar19 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_338 + 0x10))(plStack_338);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  FUN_10ad5b8bc(&uStack_58);
  puVar9 = puStack_180;
  puStack_180 = (ulong *)0x0;
  if (puVar9 != (ulong *)0x0) {
    FUN_10ad5c5b8(&puStack_180);
  }
  lVar18 = *(long *)(param_1 + lVar18);
  if ((lVar18 == 0) && (uVar20 = param_4, func_0x00010c0d0560(), (int)uVar20 != 0)) {
    plVar10 = (long *)*param_5;
    if ((*(long *)(*(long *)(*plVar10 + 0x180) + 0xb8) != 0) &&
       (*(long *)(*(long *)(*(long *)(*plVar10 + 0x180) + 0xa8) + 0x28) != 0)) {
      FUN_10a224608();
      iVar7 = (int)plVar10;
      if (((ulong)plVar10 & 1) == 0) {
        FUN_10ad05ac4();
        bVar5 = 1 < iVar7;
        goto LAB_10add831c;
      }
    }
  }
  bVar5 = false;
LAB_10add831c:
  if (lVar18 - 1U < 2 || bVar5) {
    func_0x00010c28aee0(param_1);
    plVar10 = plStack_168;
    ppuVar22 = ppuStack_170;
    if (((bVar5) &&
        (uVar20 = param_4, func_0x00010c2906e0(), plVar10 = plStack_168, ppuVar22 = ppuStack_170,
        (uVar20 & 1) == 0)) && (ppuStack_160 != (undefined **)0x0)) {
      plVar10 = plStack_158;
      ppuVar22 = ppuStack_160;
    }
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuStack_70 = ppuVar22;
    plStack_68 = plVar10;
    FUN_10ad55ab4(&puStack_180,param_3,0);
    piVar11 = (int *)0x113836510;
    FUN_10ad0621c();
    if (*piVar11 == 0) {
      plVar10 = (long *)(ulong)*(uint *)(plStack_f8 + 2);
      FUN_10a301918(plVar10,*(undefined4 *)((long)plStack_f8 + 0x14),0);
      _glBindFramebuffer(0x8d40,(int)plVar10[2]);
      _glViewport(0,0,(int)plVar10[1],*(undefined4 *)((long)plVar10 + 0xc));
      puVar9 = puStack_180;
      plVar10[5] = (long)puStack_180;
      *(undefined4 *)((long)plVar10 + 0x1c) = 0xde1;
      *(undefined1 *)(plVar10 + 6) = 1;
      puVar12 = puStack_180;
      (**(code **)(*puStack_180 + 0x48))(puStack_180);
      _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,puVar12,0);
      uVar3 = *(uint *)(param_1 + _DAT_112784664);
      uVar2 = uVar3 >> 2 & 3;
      if ((uVar3 & 1) != 0) {
        uVar2 = uVar3 >> 1 & 2 | uVar3 >> 3 & 1;
      }
      uStack_58 = (ulong **)(CONCAT44(uStack_58._4_4_,-uVar3 & 3 | uVar2 << 2) ^ 4);
      plStack_318 = (long *)0x0;
      ppuStack_320 = (undefined **)0x3f80000000000000;
      uStack_308 = 0x3f8000003f800000;
      uStack_310 = (undefined **)0x3f800000;
      if (ppuVar22[1] == (undefined *)0x0) {
        pfVar16 = (float *)(ppuVar22[2] + 0x30);
      }
      else {
        pfVar16 = (float *)(ppuVar22[1] + 0x38);
      }
      fVar30 = pfVar16[6];
      fVar25 = pfVar16[7];
      fVar32 = pfVar16[3];
      fVar31 = pfVar16[4];
      fVar34 = *pfVar16;
      fVar33 = pfVar16[1];
      fVar26 = fVar30 + fVar32 * 1.0 + fVar34 * 1.0;
      fVar27 = fVar25 + fVar31 * 1.0 + fVar33 * 1.0;
      fVar28 = fVar30 + fVar32 * 0.0 + fVar34 * 1.0;
      fVar29 = fVar25 + fVar31 * 0.0 + fVar33 * 1.0;
      fVar21 = fVar30 + fVar32 * 0.0 + fVar34 * 0.0;
      fVar23 = fVar25 + fVar31 * 0.0 + fVar33 * 0.0;
      fVar30 = fVar30 + fVar32 * 1.0 + fVar34 * 0.0;
      fVar25 = fVar25 + fVar31 * 1.0 + fVar33 * 0.0;
      uVar20 = CONCAT44(fVar23,fVar21) ^
               (CONCAT44(fVar23,fVar21) ^ CONCAT44(fVar25,fVar30)) &
               ~CONCAT44(-(uint)(fVar23 < fVar25),-(uint)(fVar21 < fVar30));
      uVar20 = uVar20 ^ (uVar20 ^ CONCAT44(fVar27,fVar26)) &
                        ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < fVar27),
                                  -(uint)((float)uVar20 < fVar26));
      uVar20 = uVar20 ^ (uVar20 ^ CONCAT44(fVar29,fVar28)) &
                        ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < fVar29),
                                  -(uint)((float)uVar20 < fVar28));
      fVar31 = (float)uVar20;
      fVar32 = (float)(uVar20 >> 0x20);
      uStack_330 = CONCAT44(fVar27 - fVar32,fVar26 - fVar31);
      uStack_328 = CONCAT44(fVar29 - fVar32,fVar28 - fVar31);
      ppuStack_340 = (undefined **)CONCAT44(fVar23 - fVar32,fVar21 - fVar31);
      plStack_338 = (long *)CONCAT44(fVar25 - fVar32,fVar30 - fVar31);
      FUN_10a19dc6c(&uStack_58,&ppuStack_320,8);
      auVar24 = NEON_fmov(0xbf800000,4);
      ppuStack_320 = (undefined **)
                     CONCAT44(auVar24._4_4_ + (float)((ulong)ppuStack_320 >> 0x20) * 2.0,
                              auVar24._0_4_ + SUB84(ppuStack_320,0) * 2.0);
      plStack_318 = (long *)CONCAT44(auVar24._12_4_ + (float)((ulong)plStack_318 >> 0x20) * 2.0,
                                     auVar24._8_4_ + SUB84(plStack_318,0) * 2.0);
      uStack_308 = CONCAT44(auVar24._12_4_ + (float)((ulong)uStack_308 >> 0x20) * 2.0,
                            auVar24._8_4_ + (float)uStack_308 * 2.0);
      uStack_310 = (undefined **)
                   CONCAT44(auVar24._4_4_ + (float)((ulong)uStack_310 >> 0x20) * 2.0,
                            auVar24._0_4_ + SUB84(uStack_310,0) * 2.0);
      FUN_10a0988c8(ppuVar22);
      FUN_10ad4b940(0);
      FUN_10a301788();
      FUN_10a301a24(plVar10,0x8d40);
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    else {
      if (ppuVar22[1] == (undefined *)0x0) {
        puVar17 = (undefined8 *)(ppuVar22[2] + 0x10);
      }
      else {
        puVar17 = (undefined8 *)(ppuVar22[1] + 8);
      }
      plVar10 = (long *)*puVar17;
      (**(code **)(*plVar10 + 0xc0))();
      puVar9 = puStack_180;
      puVar12 = puStack_180;
      (**(code **)(*puStack_180 + 0x38))(puStack_180);
      if (ppuVar22[1] == (undefined *)0x0) {
        puVar14 = ppuVar22[2] + 0x30;
      }
      else {
        puVar14 = ppuVar22[1] + 0x38;
      }
      ppuStack_320 = (undefined **)((ulong)ppuStack_320 & 0xffffffffffffff00);
      uStack_188 = 0;
      FUN_10a0e38cc(plVar10,puVar12,puVar14,&ppuStack_320);
      FUN_10addad4c(&ppuStack_320);
    }
    (**(code **)(*puVar9 + 0x10))
              (puVar9,plStack_f8[5],plStack_f8[3],0,*(undefined4 *)((long)puVar9 + 0x1c));
    plVar10 = plStack_178;
    if (plStack_178 != (long *)0x0) {
      plVar1 = plStack_178 + 1;
      do {
        lVar18 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar18 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  ppuStack_340 = (undefined **)0x0;
  plStack_338 = (long *)0x0;
  uVar20 = param_4;
  func_0x00010c2906e0();
  if ((int)uVar20 == 0) {
    ppuStack_340 = ppuStack_170;
    plStack_338 = plStack_168;
    if (ppuStack_160 != (undefined **)0x0) {
      ppuStack_340 = ppuStack_160;
      plStack_338 = plStack_158;
    }
    if (plStack_338 != (long *)0x0) {
      plVar10 = plStack_338 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    func_0x00010add28dc(&ppuStack_340,ppuStack_170,plStack_168);
  }
  _objc_opt_class();
  plVar10 = plStack_338;
  plStack_68 = plStack_338;
  ppuStack_70 = ppuStack_340;
  if (plStack_338 != (long *)0x0) {
    plVar1 = plStack_338 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (param_1 == 0) {
    ppuStack_340 = (undefined **)0x0;
    plStack_338 = (long *)0x0;
  }
  else {
    func_0x00010be78d40(&ppuStack_320);
    ppuStack_340 = ppuStack_320;
    plStack_338 = plStack_318;
  }
  ppuStack_320 = (undefined **)0x0;
  plStack_318 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar1 = plStack_318 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  ppuVar6 = ppuStack_340;
  ppuVar13 = ppuStack_340;
  FUN_10a098908();
  ppuVar22 = (undefined **)*ppuVar13;
  plStack_68 = (long *)ppuVar13[1];
  if (plStack_68 != (long *)0x0) {
    plVar10 = plStack_68 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_70 = ppuVar22;
  FUN_10a30f97c();
  ppuStack_320 = (undefined **)ppuVar22[3];
  FUN_10a30fb38(&puStack_180);
  if (ppuVar6[1] == (undefined *)0x0) {
    puVar17 = (undefined8 *)(ppuVar6[2] + 0x10);
  }
  else {
    puVar17 = (undefined8 *)(ppuVar6[1] + 8);
  }
  plVar10 = (long *)*puVar17;
  (**(code **)(*plVar10 + 0xc0))();
  puVar9 = puStack_180;
  (**(code **)(*puStack_180 + 0x38))();
  if (ppuVar6[1] == (undefined *)0x0) {
    puVar14 = ppuVar6[2] + 0x30;
  }
  else {
    puVar14 = ppuVar6[1] + 0x38;
  }
  ppuStack_320 = (undefined **)((ulong)ppuStack_320 & 0xffffffffffffff00);
  uStack_188 = 0;
  FUN_10a0e38cc(plVar10,puVar9,puVar14,&ppuStack_320);
  FUN_10addad4c(&ppuStack_320);
  uVar20 = param_4;
  func_0x00010c09bb20(param_4);
  puVar9 = puStack_180;
  FUN_10add7ffc(puStack_180,1,uVar20);
  if (plStack_178 != (long *)0x0) {
    plVar10 = plStack_178 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
    }
  }
  plVar10 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_338;
  if (plStack_338 != (long *)0x0) {
    plVar1 = plStack_338 + 1;
    do {
      lVar18 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_338 + 0x10))(plStack_338);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  FUN_10a22ba60(auStack_140,uStack_138);
  if (plStack_148 != (long *)0x0) {
    plVar10 = plStack_148 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  if (plStack_158 != (long *)0x0) {
    plVar10 = plStack_158 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
    }
  }
  if (plStack_168 != (long *)0x0) {
    plVar10 = plStack_168 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
    }
  }
  if (plStack_118 != (long *)0x0) {
    plVar10 = plStack_118 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  plVar10 = plStack_f8;
  plStack_f8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  if (plStack_78 != (long *)0x0) {
    plVar10 = plStack_78 + 1;
    do {
      lVar18 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  _objc_release(param_4);
  return puVar9;
}



/* Entry: 10add8c40; end: 10add8c5b; -[LSAVideoProcessingComponent _isPostCaptureProcessingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10add8c40(long param_1)

{
  return (*(ulong *)(param_1 + _DAT_11278463c) & 0xfffffffffffffffe) == 4;
}



/* Entry: 10add8c5c; end: 10add8cc7; -[LSAVideoProcessingComponent _postCaptureRequiresTextureForExport:] */

undefined8 FUN_10add8c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be42c80(param_1,param_2,param_3);
  if ((int)param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c2906e0(param_3);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10add8cc8; end: 10add8d13; -[LSAVideoProcessingComponent setTexTransformToPortraitOrientation:texTransformToOriginalOrientation:sizeTransformToPortraitOrientation:sizeTransformToOriginalOrientation:imageOrientation:] */

void FUN_10add8cc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6,ulong param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_7 < 8) {
    uVar3 = *(undefined8 *)(&UNK_10e5155a8 + param_7 * 8);
    uVar1 = *(undefined4 *)(&UNK_10e5155e8 + param_7 * 4);
    uVar2 = *(undefined4 *)(&UNK_10e515608 + param_7 * 4);
    *param_3 = *(undefined8 *)(&UNK_10e515568 + param_7 * 8);
    *param_4 = uVar3;
    *param_5 = uVar1;
    *param_6 = uVar2;
  }
  return;
}



/* Entry: 10add8d14; end: 10add8da3; -[LSAVideoProcessingComponent updateTextureOrientationWithCameraInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add8d14(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  
  uVar7 = (undefined4)param_3;
  FUN_10a0ec6f0();
  *(undefined4 *)(param_1 + _DAT_112784664) = uVar7;
  lVar8 = (long)_DAT_112784660;
  if (*(long *)(param_1 + lVar8) == 0) {
    return;
  }
  FUN_10a0ec6f0();
  uVar5 = (uint)param_3;
  uVar4 = uVar5 >> 2 & 3;
  if ((param_3 & 1) != 0) {
    uVar4 = uVar5 >> 1 & 2 | ((uint)(param_3 >> 2) & 0x3fffffff) >> 1 & 1;
  }
  uVar4 = -uVar5 & 3 | uVar4 << 2;
  plVar6 = *(long **)(param_1 + lVar8);
  lVar8 = *plVar6;
  if (lVar8 != 0) {
    uVar4 = uVar4 ^ 4;
    if (*(uint *)(lVar8 + 0x54) == uVar4) {
      return;
    }
    *(uint *)(lVar8 + 0x54) = uVar4;
    uVar4 = *(uint *)(lVar8 + 0x30);
    iVar2 = *(int *)(lVar8 + 0x34);
    *(uint *)(lVar8 + 0x28) = uVar4;
    *(int *)(lVar8 + 0x2c) = iVar2;
    if ((*(byte *)(lVar8 + 0x54) & 1) != 0) {
      *(int *)(lVar8 + 0x28) = iVar2;
      *(uint *)(lVar8 + 0x2c) = uVar4;
    }
    if (*(int *)(lVar8 + 0x38) != 4) {
      uVar4 = uVar4 + 3 >> 2;
    }
    *(uint *)(lVar8 + 0x3c) = uVar4;
    *(int *)(lVar8 + 0x40) = iVar2;
    *(uint *)(lVar8 + 0x44) = iVar2 + 1U >> 1;
    *(uint *)(lVar8 + 0x48) = iVar2 + (iVar2 + 1U >> 1);
    return;
  }
  lVar8 = plVar6[1];
  uVar4 = uVar4 ^ 4;
  if (*(uint *)(lVar8 + 0x14b8) == uVar4) {
    return;
  }
  *(uint *)(lVar8 + 0x14b8) = uVar4;
  *(undefined8 *)(lVar8 + 0x14c4) = 0;
  *(undefined8 *)(lVar8 + 0x14bc) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x14d4) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x14cc) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x14e4) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x14dc) = 0;
  *(undefined8 *)(lVar8 + 0x14f4) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x14ec) = 0x3f8000003f800000;
  FUN_10a19dc6c(lVar8 + 0x14b8,(undefined8 *)(lVar8 + 0x14bc),8);
  FUN_10a1a2df4(lVar8);
  iVar2 = *(int *)(lVar8 + 0x7a8);
  *(int *)(lVar8 + 0x7a0) = iVar2;
  iVar3 = *(int *)(lVar8 + 0x7ac);
  *(int *)(lVar8 + 0x7a4) = iVar3;
  if ((*(byte *)(lVar8 + 0x14b8) & 1) != 0) {
    *(int *)(lVar8 + 0x7a4) = iVar2;
    *(int *)(lVar8 + 0x7a0) = iVar3;
  }
  iVar1 = iVar2 + 6;
  if (-4 < iVar2) {
    iVar1 = iVar2 + 3;
  }
  if (*(int *)(lVar8 + 0x7b0) != 4) {
    iVar2 = iVar1 >> 2;
  }
  *(int *)(lVar8 + 0x7b4) = iVar2;
  *(int *)(lVar8 + 0x7b8) = iVar3;
  iVar2 = (iVar3 + 1) / 2;
  *(int *)(lVar8 + 0x7bc) = iVar2;
  *(int *)(lVar8 + 0x7c0) = iVar3 + iVar2;
  return;
}



/* Entry: 10add8da4; end: 10add8e4f; -[LSAVideoProcessingComponent prepareFrameBufferForTextureSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add8da4(double param_1,double param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = 0x113834ef0;
  FUN_10a1c5e98();
  if ((*(byte *)(lVar4 + 1) >> 3 & 1) == 0) {
    lVar4 = (long)_DAT_11278465c;
    if (*(long *)(param_3 + lVar4) != 0) {
      dVar5 = ((double *)(param_3 + _DAT_112784668))[1];
      bVar1 = false;
      if ((*(double *)(param_3 + _DAT_112784668) == param_1) &&
         (bVar1 = false, !NAN(dVar5) && !NAN(param_2))) {
        bVar1 = dVar5 == param_2;
      }
      if (bVar1) {
        return;
      }
    }
    uVar2 = (ulong)(uint)(int)param_1;
    FUN_10a301918(uVar2,(int)param_2,0);
    plVar3 = *(long **)(param_3 + lVar4);
    *(ulong *)(param_3 + lVar4) = uVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  lVar4 = (long)_DAT_112784668;
  *(double *)(param_3 + lVar4) = param_1;
  ((double *)(param_3 + lVar4))[1] = param_2;
  return;
}



/* Entry: 10add8e50; end: 10add923b; -[LSAVideoProcessingComponent setupSafeRenderZones:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add8e50(double param_1,double param_2,long param_3)

{
  long *plVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  int iVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  double dVar16;
  float fVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  ulong uStack_58;
  long *plStack_50;
  long lStack_48;
  float fStack_40;
  
  uVar21 = 0;
  uVar22 = NEON_fmov(0x3f800000,4);
  if ((*(long *)(param_3 + _DAT_112784640) != 0) && (*(long *)(param_3 + _DAT_112784644) != 0)) {
    iVar4 = (int)param_1;
    iVar7 = (int)param_2;
    if ((*(uint *)(param_3 + _DAT_112784664) & 1) != 0) {
      iVar4 = (int)param_2;
      iVar7 = (int)param_1;
    }
    dVar16 = (double)(iVar4 * (int)*(long *)(param_3 + _DAT_112784644)) /
             (double)(iVar7 * (int)*(long *)(param_3 + _DAT_112784640));
    auVar19._0_8_ = 1.0 / dVar16;
    auVar19._8_8_ = dVar16;
    auVar17 = NEON_fmov(0x3ff0000000000000,8);
    auVar17 = NEON_fminnm(auVar19,auVar17,8);
    auVar19 = NEON_fmov(0x3fe0000000000000,8);
    dVar16 = auVar19._0_8_ - auVar17._0_8_ * auVar19._0_8_;
    dVar20 = auVar19._8_8_ - auVar17._8_8_ * auVar19._8_8_;
    uVar21 = CONCAT44((float)dVar20,(float)dVar16);
    uVar22 = CONCAT44((float)(auVar17._8_8_ + dVar20),(float)(auVar17._0_8_ + dVar16));
  }
  lVar14 = (long)_DAT_112784648;
  if ((*(byte *)(param_3 + lVar14) & 1) == 0) {
    pfVar2 = (float *)(param_3 + _DAT_11278466c);
    fVar15 = (float)((ulong)uVar21 >> 0x20);
    bVar8 = false;
    if (((float)uVar21 == *pfVar2) && (bVar8 = false, !NAN(fVar15) && !NAN(pfVar2[1]))) {
      bVar8 = fVar15 == pfVar2[1];
    }
    if (bVar8) {
      fVar15 = (float)((ulong)uVar22 >> 0x20);
      bVar8 = false;
      if (((float)uVar22 == pfVar2[2]) && (bVar8 = false, !NAN(fVar15) && !NAN(pfVar2[3]))) {
        bVar8 = fVar15 == pfVar2[3];
      }
      if (bVar8) {
        return;
      }
    }
  }
  puVar3 = (undefined8 *)(param_3 + _DAT_11278466c);
  *puVar3 = uVar21;
  puVar3[1] = uVar22;
  lVar12 = param_3 + _DAT_112784670;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  lStack_48 = 0;
  plStack_50 = (long *)0x0;
  fStack_40 = *(float *)(lVar12 + 0x20);
  FUN_10addaf60(&plStack_60,*(undefined8 *)(lVar12 + 8));
  uVar11 = uStack_58;
  for (plVar13 = *(long **)(lVar12 + 0x10); plVar9 = plStack_50, uStack_58 = uVar11,
      plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    FUN_10addb130(&plStack_60,*(undefined4 *)(plVar13 + 2));
    uVar11 = uStack_58;
  }
  for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    fVar15 = (float)puVar3[1] - (float)*puVar3;
    fVar18 = (float)((ulong)puVar3[1] >> 0x20) - (float)((ulong)*puVar3 >> 0x20);
    auVar17 = *(undefined1 (*) [16])((long)plVar9 + 0x14);
    *(float *)((long)plVar9 + 0x1c) = fVar15 * auVar17._8_4_;
    *(float *)(plVar9 + 4) = fVar18 * auVar17._12_4_;
    *(float *)((long)plVar9 + 0x14) = fVar15 * auVar17._0_4_;
    *(float *)(plVar9 + 3) = fVar18 * auVar17._4_4_;
  }
  if (((uVar11 != 0) && ((undefined8 *)*plStack_60 != (undefined8 *)0x0)) &&
     (plVar13 = *(long **)*plStack_60, plVar13 != (long *)0x0)) {
    do {
      uVar10 = plVar13[1];
      if (uVar10 == 0) {
        if ((int)plVar13[2] == 0) goto LAB_10add90fc;
      }
      else {
        if ((uVar11 & uVar11 - 1) == 0) {
          uVar10 = uVar10 & uVar11 - 1;
        }
        else {
          if (uVar10 < uVar11) break;
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = uVar10 / uVar11;
          }
          uVar10 = uVar10 - uVar6 * uVar11;
        }
        if (uVar10 != 0) break;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  plVar13 = (long *)0x28;
  __Znwm();
  plVar13[4] = 0;
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  if ((uVar11 == 0) || (fStack_40 * (float)uVar11 < (float)(lStack_48 + 1))) {
    uVar10 = 1;
    if (2 < uVar11) {
      uVar10 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar10 = uVar10 | uVar11 << 1;
    uVar11 = (ulong)((float)(lStack_48 + 1) / fStack_40);
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    FUN_10addaf60(&plStack_60,uVar10);
    uVar11 = uStack_58;
  }
  plVar9 = (long *)*plStack_60;
  if (plVar9 == (long *)0x0) {
    *plVar13 = (long)plStack_50;
    *plStack_60 = (long)&plStack_50;
    plStack_50 = plVar13;
    if (*plVar13 == 0) goto LAB_10add90f0;
    uVar10 = *(ulong *)(*plVar13 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar10 = uVar10 & uVar11 - 1;
    }
    else if (uVar11 <= uVar10) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar10 / uVar11;
      }
      uVar10 = uVar10 - uVar6 * uVar11;
    }
    plVar9 = plStack_60 + uVar10;
  }
  else {
    *plVar13 = *plVar9;
  }
  *plVar9 = (long)plVar13;
LAB_10add90f0:
  lStack_48 = lStack_48 + 1;
LAB_10add90fc:
  *(undefined8 *)((long)plVar13 + 0x1c) = 0x3f8000003f800000;
  *(undefined8 *)((long)plVar13 + 0x14) = 0xbf800000bf800000;
  *(undefined1 *)((long)plVar13 + 0x24) = 1;
  func_0x00010bf52380(&plStack_70,param_3);
  if (plStack_68 != (long *)0x0) {
    plVar13 = plStack_68;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar13 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      if (plStack_70 == (long *)0x0) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar1 = plVar13 + 1;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar9 = *(long **)(*(long *)(*plStack_70 + 0x180) + 0x90);
        do {
          lVar12 = *plVar1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar1 = plVar13 + 1;
      do {
        lVar12 = *plVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,&plStack_60);
    }
  }
  *(undefined1 *)(param_3 + lVar14) = 0;
  FUN_10addb324(&plStack_60);
  return;
}



/* Entry: 10add923c; end: 10add9303; -[LSAVideoProcessingComponent prepareConvertorsForInputSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add923c(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_112784660;
  lVar3 = *(long *)(param_3 + lVar4);
  if (lVar3 == 0) {
    lVar3 = 0x10;
    __Znwm();
    FUN_10a19eb18();
    lVar2 = *(long *)(param_3 + lVar4);
    *(long *)(param_3 + lVar4) = lVar3;
    if (lVar2 != 0) {
      func_0x00010addb36c(param_3 + lVar4);
      lVar3 = *(long *)(param_3 + lVar4);
    }
  }
  else {
    dVar5 = ((double *)(param_3 + _DAT_112784668))[1];
    bVar1 = false;
    if ((*(double *)(param_3 + _DAT_112784668) == param_1) &&
       (bVar1 = false, !NAN(dVar5) && !NAN(param_2))) {
      bVar1 = dVar5 == param_2;
    }
    if (bVar1) {
      return;
    }
  }
  FUN_10a19ecbc(lVar3,(int)param_1,(int)param_2,1);
  lVar3 = (long)_DAT_112784668;
  *(double *)(param_3 + lVar3) = param_1;
  ((double *)(param_3 + lVar3))[1] = param_2;
  return;
}



/* Entry: 10add9304; end: 10add93a3; -[LSAVideoProcessingComponent prepareTextureConverter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add9304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112784658;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126de208;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0636e0(puVar1,param_2,1,lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10add93a4; end: 10add979b; -[LSAVideoProcessingComponent outputInfoDictionary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add93a4(double param_1,double param_2,double param_3,double param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long alStack_88 [2];
  long lStack_78;
  long *plStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf52380(&lStack_98);
  lStack_78 = 0;
  plStack_70 = (long *)0x0;
  if (((plStack_90 == (long *)0x0) ||
      (plVar4 = plStack_90, __ZNSt3__119__shared_weak_count4lockEv(), plStack_70 = plVar4,
      plVar4 == (long *)0x0)) || (lStack_78 = lStack_98, lStack_98 == 0)) {
    lVar10 = 0;
  }
  else {
    alStack_88[0] = lStack_98;
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a224564();
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar10 = lStack_98;
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plStack_90 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f2e758;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (lVar10 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(lVar10 + 0x68);
    if (lVar10 != 0) {
      lVar9 = *(long *)(lVar10 + 0x30);
      for (lVar10 = *(long *)(lVar10 + 0x28); lVar10 != lVar9; lVar10 = lVar10 + 0x220) {
        fVar14 = SUB84(param_4,0);
        fVar13 = SUB84(param_3,0);
        fVar12 = SUB84(param_2,0);
        fVar11 = SUB84(param_1,0);
        FUN_10a14c660(lVar10 + 8);
        param_1 = (double)fVar11;
        param_2 = (double)fVar12;
        param_3 = (double)fVar13 - param_1;
        param_4 = (double)fVar14 - param_2;
        puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c2971a0(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar6);
      }
    }
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar5 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10ad8b754(alStack_88);
    FUN_10ad8b754(&lStack_78);
    if (plStack_90 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __Unwind_Resume();
    ppuVar8 = &puStack_c0;
    pcStack_a8 = FUN_10add979c;
    puStack_b8 = PTR_PTR_1127014b0;
    puStack_c0 = puVar7;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_c0,PTR_s_initWithPerformer_announcerQueue_1125eac68);
    if (ppuVar8 != (undefined **)0x0) {
      *(undefined8 *)((long)ppuVar8 + (long)_DAT_112784640) = 0;
      *(undefined8 *)((long)ppuVar8 + (long)_DAT_112784644) = 0;
      *(undefined8 *)((long)ppuVar8 + (long)_DAT_112784654) = 0;
      ((undefined8 *)((long)ppuVar8 + (long)_DAT_11278466c))[1] = 0x3f8000003f800000;
      *(undefined8 *)((long)ppuVar8 + (long)_DAT_11278466c) = 0;
      *(undefined8 *)((long)ppuVar8 + (long)_DAT_11278464c) = 0;
      *(undefined1 *)((long)ppuVar8 + (long)_DAT_112784648) = 0;
      *(undefined8 *)((long)ppuVar8 + (long)_DAT_112784650) = 0;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10add979c; end: 10add981b; -[LSAVideoProcessingComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add979c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1127014b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithPerformer_announcerQueue_1125eac68);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112784640) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112784644) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112784654) = 0;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11278466c))[1] = 0x3f8000003f800000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278466c) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278464c) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112784648) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112784650) = 0;
  }
  return;
}



/* Entry: 10add981c; end: 10add98f7; -[LSAVideoProcessingComponent clearResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add981c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112784660;
  lVar3 = *(long *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  if (lVar3 != 0) {
    func_0x00010addb36c(param_1 + lVar4);
  }
  plVar1 = *(long **)(param_1 + _DAT_11278465c);
  *(undefined8 *)(param_1 + _DAT_11278465c) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010add98b0(param_1 + _DAT_112784674,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112784658);
  *(undefined8 *)(param_1 + _DAT_112784658) = 0;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112784668;
  uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
  ((undefined8 *)(param_1 + lVar3))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(param_1 + lVar3) = uVar2;
  return;
}



/* Entry: 10add98f8; end: 10add99f7; +[LSAVideoProcessingComponent shouldUseFinishOnRecordingFromARKit:] */

undefined1 FUN_10add98f8(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    if (lRam00000001137ed348 != -1) {
      func_0x000107c27d9c(0x1137ed348,&PTR___NSConcreteGlobalBlock_110c755b8);
    }
    return uRam00000001137ed330;
  }
  return 0;
}



/* Entry: 10add99f8; end: 10add9a07; +[LSAVideoProcessingComponent aspectRatioModeForFillMode:] */

int FUN_10add99f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 + -1;
  if (4 < param_3) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 10add9a08; end: 10add9b8b; -[LSAVideoProcessingComponent uiImageFromTexture:] */

void FUN_10add9a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10add0584;
  uStack_40 = 0x10add0594;
  uStack_38 = 0;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c29ad80(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10add9b8c; end: 10add9e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10add9b8c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plStack_168;
  long *plStack_160;
  undefined1 auStack_158 [8];
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  long *plStack_130;
  long alStack_128 [26];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0db6e0(&lStack_138,*(undefined8 *)(param_1 + 0x20));
  uVar8 = *(undefined8 *)(lStack_138 + 0x18);
  plVar3 = (long *)0xa8;
  __Znwm();
  plVar10 = plVar3 + 1;
  *plVar10 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110baa4d8;
  plVar6 = plVar3 + 3;
  FUN_10a1b2a84(plVar6,uVar8,1,1);
  lVar11 = *(long *)(param_1 + 0x28);
  lVar9 = (long)_DAT_112784674;
  lVar4 = *(long *)(lVar11 + lVar9);
  plStack_140 = plVar3;
  plStack_148 = plVar6;
  if (lVar4 == 0) {
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x14) = 0x100000000;
    *(undefined8 *)((long)puVar5 + 0xc) = 0;
    func_0x00010add98b0(lVar11 + lVar9);
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + lVar9);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_168 = plVar6;
  plStack_160 = plVar3;
  FUN_10a319cb8(auStack_158,lVar4,&lStack_138,&plStack_168,0);
  if (plStack_150 != (long *)0x0) {
    plVar6 = plStack_150 + 1;
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
    }
  }
  plVar6 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    plVar3 = plStack_160 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a12add4(alStack_128,plStack_148 + 2);
  plVar6 = alStack_128;
  FUN_10ad51860(plVar6,0);
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar7;
  _objc_release(uVar8);
  _CGImageRelease(plVar6);
  plVar3 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plVar10 = plStack_140 + 1;
    do {
      lVar4 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      plVar6 = plVar3;
    }
  }
  if (plStack_130 != (long *)0x0) {
    plVar3 = plStack_130 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
      plVar6 = plStack_130;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010ad908fc(&plStack_148);
    func_0x00010addae58(&lStack_138);
    __Unwind_Resume(plVar6);
    return;
  }
  return;
}



/* Entry: 10add9e44; end: 10add9e47;  */

void FUN_10add9e44(void)

{
  return;
}



/* Entry: 10add9e48; end: 10adda103; +[LSAVideoProcessingComponent _prepareOutputTextureWithTexture:processingInfo:] */

void FUN_10add9e48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_5);
  lVar10 = *param_4;
  if (lVar10 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar11 = *(long *)(lVar10 + 8);
    if (lVar11 == 0) {
      lVar12 = *(long *)(lVar10 + 0x10) + 0x10;
      lVar11 = *(long *)(lVar10 + 0x10) + 0x30;
    }
    else {
      lVar12 = lVar11 + 8;
      lVar11 = lVar11 + 0x38;
    }
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar8 = puVar7 + 3;
    *puVar7 = &PTR_DAT_110ba0c30;
    FUN_10a097fe0(puVar8,lVar12,lVar11);
    *param_1 = puVar8;
    param_1[1] = puVar7;
    uVar13 = param_5;
    func_0x00010c0ef0e0();
    iVar6 = (int)uVar13;
    FUN_10adcf4bc();
    FUN_10ad51220();
    if (iVar6 != 0) {
      uVar13 = *param_1;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_b4 = 0;
      uStack_bc = 0;
      uStack_b0 = 1;
      iStack_d0 = iVar6;
      FUN_10a19e730(&plStack_80,&iStack_d0,0,1);
      plStack_a8 = plStack_80;
      plStack_a0 = (long *)CONCAT44(uStack_70,(int)plStack_78);
      uStack_88 = uStack_58;
      uStack_90 = uStack_50;
      uStack_98 = uStack_6c;
      FUN_10a0986a0(uVar13,&plStack_a8);
    }
    uVar13 = param_5;
    func_0x00010c0db4c0();
    if ((int)uVar13 != 0) {
      FUN_10a0997e4(&iStack_d0,param_1,1,0);
      lVar10 = CONCAT44(uStack_c4,uStack_c8);
      plVar5 = (long *)CONCAT44(uStack_c4,uStack_c8);
      plVar4 = (long *)CONCAT44(uStack_cc,iStack_d0);
      plVar9 = (long *)0x30;
      __Znwm();
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_DAT_110ba0c30;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_80 = plVar4;
      plStack_78 = plVar5;
      FUN_10a098498(plVar9 + 3,&plStack_80);
      plVar4 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar5 = plStack_78 + 1;
        do {
          lVar10 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plStack_a8 = plVar9 + 3;
      plStack_a0 = plVar9;
      FUN_10add5798(param_1,&plStack_a8);
      plVar4 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar5 = plStack_a0 + 1;
        do {
          lVar10 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = (long *)CONCAT44(uStack_c4,uStack_c8);
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar4 + 1;
        do {
          lVar10 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10adda104; end: 10adda293; -[LSAVideoProcessingComponent setViewport:completion:] */

void FUN_10adda104(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
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
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = param_3[0x15];
  uStack_80 = param_3[0x14];
  uStack_68 = param_3[0x17];
  uStack_70 = param_3[0x16];
  uStack_58 = param_3[0x19];
  uStack_60 = param_3[0x18];
  uStack_48 = param_3[0x1b];
  uStack_50 = param_3[0x1a];
  uStack_b8 = param_3[0xd];
  uStack_c0 = param_3[0xc];
  uStack_a8 = param_3[0xf];
  uStack_b0 = param_3[0xe];
  uStack_98 = param_3[0x11];
  uStack_a0 = param_3[0x10];
  uStack_88 = param_3[0x13];
  uStack_90 = param_3[0x12];
  uStack_f8 = param_3[5];
  uStack_100 = param_3[4];
  uStack_e8 = param_3[7];
  uStack_f0 = param_3[6];
  uStack_d8 = param_3[9];
  uStack_e0 = param_3[8];
  uStack_c8 = param_3[0xb];
  uStack_d0 = param_3[10];
  uStack_118 = param_3[1];
  uStack_120 = *param_3;
  uStack_108 = param_3[3];
  uStack_110 = param_3[2];
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_10adda294;
  puStack_130 = &UNK_110c755f8;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_10addab30;
  puStack_158 = &UNK_110c72a10;
  uStack_128 = param_1;
  _objc_retain(param_4);
  uStack_150 = param_4;
  func_0x00010c0f9180(uVar1,param_2,puVar2,&puStack_148,&puStack_170);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_150);
  _objc_release(param_4);
  return;
}



/* Entry: 10adda294; end: 10addab2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adda294(uint *param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  float fVar15;
  double dVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  long lVar33;
  long lVar34;
  uint uStack_150;
  undefined8 auStack_14c [2];
  undefined1 auStack_13c [4];
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined1 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined1 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined1 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  bool bStack_ac;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar29 = *(double *)(param_1 + 10);
  dVar30 = *(double *)(param_1 + 0xc);
  dVar16 = *(double *)(param_1 + 0xe);
  dVar20 = *(double *)(param_1 + 0x10);
  puVar12 = param_1;
  _CGRectIsNull(dVar29,SUB84(dVar30,0),dVar16,dVar20);
  if ((((ulong)puVar12 & 1) == 0) &&
     (_CGRectIsNull(dVar29,SUB84(dVar30,0),dVar16,dVar20), ((ulong)puVar12 & 1) == 0)) {
    fVar23 = (float)dVar20 - (float)(dVar30 + dVar20);
    fVar22 = (float)dVar20 - (float)dVar30;
    fVar15 = (float)dVar29 / (float)dVar16;
    fVar18 = fVar23 / (float)dVar20;
    fVar19 = (float)(dVar29 + dVar16) / (float)dVar16;
    fVar21 = fVar22 / (float)dVar20;
    auVar26 = NEON_fmov(0xbf800000,4);
    auStack_14c[0] = CONCAT44(fVar18 + fVar18 + auVar26._4_4_,fVar15 + fVar15 + auVar26._0_4_);
    auStack_14c[1] = CONCAT44(fVar21 + fVar21 + auVar26._12_4_,fVar19 + fVar19 + auVar26._8_4_);
    fVar15 = (float)NEON_fminnm((float)(dVar29 + dVar16) - (float)dVar29,fVar22 - fVar23);
    auStack_13c[0] = 0.0 < fVar15;
  }
  else {
    auStack_13c[0] = false;
    auStack_14c[0] = 0;
    auStack_14c[1] = 0;
  }
  uStack_150 = 0;
  dVar29 = *(double *)(param_1 + 0x12);
  dVar30 = *(double *)(param_1 + 0x14);
  dVar31 = *(double *)(param_1 + 0x16);
  dVar32 = *(double *)(param_1 + 0x18);
  lVar33 = *(long *)(param_1 + 10);
  lVar34 = *(long *)(param_1 + 0xc);
  dVar20 = *(double *)(param_1 + 0x10);
  dVar16 = *(double *)(param_1 + 0xe);
  _CGRectIsNull(dVar29,SUB84(dVar30,0),dVar31,dVar32);
  if ((((ulong)puVar12 & 1) == 0) &&
     (_CGRectIsNull(lVar33,(int)lVar34,dVar16,dVar20), ((ulong)puVar12 & 1) == 0)) {
    fVar23 = (float)(dVar29 + dVar31);
    fVar28 = (float)dVar20 - (float)(dVar30 + dVar32);
    fVar22 = (float)dVar20 - (float)dVar30;
    fVar15 = (float)dVar29 / (float)dVar16;
    fVar18 = fVar28 / (float)dVar20;
    fVar19 = fVar23 / (float)dVar16;
    fVar21 = fVar22 / (float)dVar20;
    auVar24 = NEON_fmov(0xbf800000,4);
    auVar26._0_4_ = fVar15 + fVar15 + auVar24._0_4_;
    auVar26._4_4_ = fVar18 + fVar18 + auVar24._4_4_;
    auVar26._8_4_ = fVar19 + fVar19 + auVar24._8_4_;
    auVar26._12_4_ = fVar21 + fVar21 + auVar24._12_4_;
    fVar15 = (float)NEON_fminnm(fVar23 - (float)dVar29,fVar22 - fVar28);
    uStack_124 = 0.0 < fVar15;
  }
  else {
    uStack_124 = false;
    auVar26 = ZEXT316(0);
  }
  uStack_138 = 1;
  uStack_12c = auVar26._8_8_;
  uStack_134 = auVar26._0_8_;
  dVar29 = *(double *)(param_1 + 0x1a);
  dVar30 = *(double *)(param_1 + 0x1c);
  dVar31 = *(double *)(param_1 + 0x1e);
  dVar32 = *(double *)(param_1 + 0x20);
  lVar33 = *(long *)(param_1 + 10);
  lVar34 = *(long *)(param_1 + 0xc);
  dVar20 = *(double *)(param_1 + 0x10);
  dVar16 = *(double *)(param_1 + 0xe);
  _CGRectIsNull(dVar29,SUB84(dVar30,0),dVar31,dVar32);
  if ((((ulong)puVar12 & 1) == 0) &&
     (_CGRectIsNull(lVar33,(int)lVar34,dVar16,dVar20), ((ulong)puVar12 & 1) == 0)) {
    fVar23 = (float)(dVar29 + dVar31);
    fVar28 = (float)dVar20 - (float)(dVar30 + dVar32);
    fVar22 = (float)dVar20 - (float)dVar30;
    fVar15 = (float)dVar29 / (float)dVar16;
    fVar18 = fVar28 / (float)dVar20;
    fVar19 = fVar23 / (float)dVar16;
    fVar21 = fVar22 / (float)dVar20;
    auVar26 = NEON_fmov(0xbf800000,4);
    uStack_11c = CONCAT44(fVar18 + fVar18 + auVar26._4_4_,fVar15 + fVar15 + auVar26._0_4_);
    uStack_114 = CONCAT44(fVar21 + fVar21 + auVar26._12_4_,fVar19 + fVar19 + auVar26._8_4_);
    fVar15 = (float)NEON_fminnm(fVar23 - (float)dVar29,fVar22 - fVar28);
    uStack_10c = 0.0 < fVar15;
  }
  else {
    uStack_10c = false;
    uStack_11c = 0;
    uStack_114 = 0;
  }
  uStack_120 = 2;
  dVar29 = *(double *)(param_1 + 0x22);
  dVar30 = *(double *)(param_1 + 0x24);
  dVar31 = *(double *)(param_1 + 0x26);
  dVar32 = *(double *)(param_1 + 0x28);
  lVar33 = *(long *)(param_1 + 10);
  lVar34 = *(long *)(param_1 + 0xc);
  dVar20 = *(double *)(param_1 + 0x10);
  dVar16 = *(double *)(param_1 + 0xe);
  _CGRectIsNull(dVar29,SUB84(dVar30,0),dVar31,dVar32);
  if ((((ulong)puVar12 & 1) == 0) &&
     (_CGRectIsNull(lVar33,(int)lVar34,dVar16,dVar20), ((ulong)puVar12 & 1) == 0)) {
    fVar23 = (float)(dVar29 + dVar31);
    fVar28 = (float)dVar20 - (float)(dVar30 + dVar32);
    fVar22 = (float)dVar20 - (float)dVar30;
    fVar15 = (float)dVar29 / (float)dVar16;
    fVar18 = fVar28 / (float)dVar20;
    fVar19 = fVar23 / (float)dVar16;
    fVar21 = fVar22 / (float)dVar20;
    auVar26 = NEON_fmov(0xbf800000,4);
    auVar24._0_4_ = fVar15 + fVar15 + auVar26._0_4_;
    auVar24._4_4_ = fVar18 + fVar18 + auVar26._4_4_;
    auVar24._8_4_ = fVar19 + fVar19 + auVar26._8_4_;
    auVar24._12_4_ = fVar21 + fVar21 + auVar26._12_4_;
    fVar15 = (float)NEON_fminnm(fVar23 - (float)dVar29,fVar22 - fVar28);
    uStack_f4 = 0.0 < fVar15;
  }
  else {
    uStack_f4 = false;
    auVar24 = ZEXT316(0);
  }
  uStack_108 = 4;
  uStack_fc = auVar24._8_8_;
  uStack_104 = auVar24._0_8_;
  dVar29 = *(double *)(param_1 + 0x2a);
  dVar30 = *(double *)(param_1 + 0x2c);
  dVar31 = *(double *)(param_1 + 0x2e);
  dVar32 = *(double *)(param_1 + 0x30);
  lVar33 = *(long *)(param_1 + 10);
  lVar34 = *(long *)(param_1 + 0xc);
  dVar20 = *(double *)(param_1 + 0x10);
  dVar16 = *(double *)(param_1 + 0xe);
  _CGRectIsNull(dVar29,SUB84(dVar30,0),dVar31,dVar32);
  if ((((ulong)puVar12 & 1) == 0) &&
     (_CGRectIsNull(lVar33,(int)lVar34,dVar16,dVar20), ((ulong)puVar12 & 1) == 0)) {
    fVar23 = (float)(dVar29 + dVar31);
    fVar28 = (float)dVar20 - (float)(dVar30 + dVar32);
    fVar22 = (float)dVar20 - (float)dVar30;
    fVar15 = (float)dVar29 / (float)dVar16;
    fVar18 = fVar28 / (float)dVar20;
    fVar19 = fVar23 / (float)dVar16;
    fVar21 = fVar22 / (float)dVar20;
    auVar26 = NEON_fmov(0xbf800000,4);
    uStack_ec = CONCAT44(fVar18 + fVar18 + auVar26._4_4_,fVar15 + fVar15 + auVar26._0_4_);
    uStack_e4 = CONCAT44(fVar21 + fVar21 + auVar26._12_4_,fVar19 + fVar19 + auVar26._8_4_);
    fVar15 = (float)NEON_fminnm(fVar23 - (float)dVar29,fVar22 - fVar28);
    uStack_dc = 0.0 < fVar15;
  }
  else {
    uStack_dc = false;
    uStack_ec = 0;
    uStack_e4 = 0;
  }
  uStack_f0 = 3;
  dVar29 = *(double *)(param_1 + 0x32);
  dVar30 = *(double *)(param_1 + 0x34);
  dVar31 = *(double *)(param_1 + 0x36);
  dVar32 = *(double *)(param_1 + 0x38);
  lVar33 = *(long *)(param_1 + 10);
  lVar34 = *(long *)(param_1 + 0xc);
  dVar20 = *(double *)(param_1 + 0x10);
  dVar16 = *(double *)(param_1 + 0xe);
  _CGRectIsNull(dVar29,SUB84(dVar30,0),dVar31,dVar32);
  if ((((ulong)puVar12 & 1) == 0) &&
     (_CGRectIsNull(lVar33,(int)lVar34,dVar16,dVar20), ((ulong)puVar12 & 1) == 0)) {
    fVar23 = (float)(dVar29 + dVar31);
    fVar28 = (float)dVar20 - (float)(dVar30 + dVar32);
    fVar22 = (float)dVar20 - (float)dVar30;
    fVar15 = (float)dVar29 / (float)dVar16;
    fVar18 = fVar28 / (float)dVar20;
    fVar19 = fVar23 / (float)dVar16;
    fVar21 = fVar22 / (float)dVar20;
    auVar26 = NEON_fmov(0xbf800000,4);
    auVar25._0_4_ = fVar15 + fVar15 + auVar26._0_4_;
    auVar25._4_4_ = fVar18 + fVar18 + auVar26._4_4_;
    auVar25._8_4_ = fVar19 + fVar19 + auVar26._8_4_;
    auVar25._12_4_ = fVar21 + fVar21 + auVar26._12_4_;
    fVar15 = (float)NEON_fminnm(fVar23 - (float)dVar29,fVar22 - fVar28);
    uStack_c4 = 0.0 < fVar15;
  }
  else {
    uStack_c4 = false;
    auVar25 = ZEXT316(0);
  }
  uStack_d8 = 5;
  uStack_cc = auVar25._8_8_;
  uStack_d4 = auVar25._0_8_;
  dVar29 = *(double *)(param_1 + 0x3a);
  dVar30 = *(double *)(param_1 + 0x3c);
  dVar31 = *(double *)(param_1 + 0x3e);
  dVar32 = *(double *)(param_1 + 0x40);
  lVar33 = *(long *)(param_1 + 10);
  lVar34 = *(long *)(param_1 + 0xc);
  dVar20 = *(double *)(param_1 + 0x10);
  dVar16 = *(double *)(param_1 + 0xe);
  _CGRectIsNull(dVar29,SUB84(dVar30,0),dVar31,dVar32);
  auVar27._0_14_ = ZEXT214(0);
  auVar27._14_2_ = 0;
  if (((ulong)puVar12 & 1) == 0) {
    _CGRectIsNull(lVar33,(int)lVar34,dVar16,dVar20);
    if (((ulong)puVar12 & 1) == 0) {
      fVar23 = (float)(dVar29 + dVar31);
      fVar28 = (float)dVar20 - (float)(dVar30 + dVar32);
      fVar22 = (float)dVar20 - (float)dVar30;
      fVar15 = (float)dVar29 / (float)dVar16;
      fVar18 = fVar28 / (float)dVar20;
      fVar19 = fVar23 / (float)dVar16;
      fVar21 = fVar22 / (float)dVar20;
      auVar26 = NEON_fmov(0xbf800000,4);
      auVar27._0_4_ = fVar15 + fVar15 + auVar26._0_4_;
      auVar27._4_4_ = fVar18 + fVar18 + auVar26._4_4_;
      auVar27._8_4_ = fVar19 + fVar19 + auVar26._8_4_;
      auVar27._12_4_ = fVar21 + fVar21 + auVar26._12_4_;
      fVar15 = (float)NEON_fminnm(fVar23 - (float)dVar29,fVar22 - fVar28);
      bStack_ac = 0.0 < fVar15;
    }
    else {
      bStack_ac = false;
      auVar27 = ZEXT216(0);
    }
  }
  else {
    bStack_ac = false;
  }
  uStack_c0 = 6;
  uStack_b4 = auVar27._8_8_;
  uStack_bc = auVar27._0_8_;
  puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)_DAT_112784670);
  lVar33 = *(long *)(puVar1 + 2);
  if (lVar33 == 0) {
LAB_10addaa50:
    lVar33 = 0;
  }
  else {
    lVar34 = 0;
    do {
      *(undefined8 *)(*(long *)puVar1 + lVar34 * 8) = 0;
      lVar34 = lVar34 + 1;
    } while (lVar33 != lVar34);
    puVar5 = puVar1 + 4;
    puVar5[0] = 0;
    puVar5[1] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    if (*(uint **)puVar5 == (uint *)0x0) goto LAB_10addaa50;
    lVar33 = 0;
    puVar13 = *(uint **)puVar5;
    do {
      uVar2 = *(uint *)((long)&uStack_150 + lVar33);
      uVar7 = (ulong)(int)uVar2;
      puVar13[4] = uVar2;
      *(undefined1 *)(puVar13 + 9) = auStack_13c[lVar33];
      uVar17 = *(undefined8 *)((long)auStack_14c + lVar33);
      *(undefined8 *)(puVar13 + 7) = *(undefined8 *)(auStack_13c + lVar33 + -8);
      *(undefined8 *)(puVar13 + 5) = uVar17;
      puVar14 = *(uint **)puVar13;
      *(ulong *)(puVar13 + 2) = uVar7;
      uVar6 = *(ulong *)(puVar1 + 2);
      if (uVar6 != 0) {
        uVar8 = uVar6 - 1;
        if ((uVar6 & uVar8) == 0) {
          uVar9 = uVar8 & uVar7;
        }
        else {
          uVar9 = uVar7;
          if (uVar6 <= uVar7) {
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = uVar7 / uVar6;
            }
            uVar9 = uVar7 - uVar9 * uVar6;
          }
        }
        plVar10 = *(long **)(*(long *)puVar1 + uVar9 * 8);
        if (plVar10 != (long *)0x0) {
          do {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_10adda928;
              uVar11 = plVar10[1];
              if (uVar11 != uVar7) break;
              if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_10addaa18;
            }
            if ((uVar6 & uVar8) == 0) {
              uVar11 = uVar11 & uVar8;
            }
            else if (uVar6 <= uVar11) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar11 / uVar6;
              }
              uVar11 = uVar11 - uVar3 * uVar6;
            }
          } while (uVar11 == uVar9);
        }
      }
LAB_10adda928:
      if ((uVar6 == 0) || ((float)puVar1[8] * (float)uVar6 < (float)(*(long *)(puVar1 + 6) + 1))) {
        param_2 = 1;
        if (2 < uVar6) {
          param_2 = (ulong)((uVar6 & uVar6 - 1) != 0);
        }
        param_2 = param_2 | uVar6 << 1;
        uVar6 = (ulong)((float)(*(long *)(puVar1 + 6) + 1) / (float)puVar1[8]);
        if (param_2 <= uVar6) {
          param_2 = uVar6;
        }
        puVar12 = puVar1;
        FUN_10addaf60();
        uVar6 = *(ulong *)(puVar1 + 2);
        uVar7 = *(ulong *)(puVar13 + 2);
      }
      uVar8 = uVar6 - 1;
      if ((uVar6 & uVar8) == 0) {
        uVar7 = uVar8 & uVar7;
      }
      else if (uVar6 <= uVar7) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar9 * uVar6;
      }
      lVar34 = *(long *)puVar1;
      plVar10 = *(long **)(lVar34 + uVar7 * 8);
      if (plVar10 == (long *)0x0) {
        *(long *)puVar13 = *(long *)puVar5;
        *(uint **)puVar5 = puVar13;
        *(uint **)(lVar34 + uVar7 * 8) = puVar5;
        if (*(long *)puVar13 != 0) {
          uVar7 = *(ulong *)(*(long *)puVar13 + 8);
          if ((uVar6 & uVar8) == 0) {
            uVar7 = uVar7 & uVar8;
          }
          else if (uVar6 <= uVar7) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar7 / uVar6;
            }
            uVar7 = uVar7 - uVar8 * uVar6;
          }
          plVar10 = (long *)(*(long *)puVar1 + uVar7 * 8);
          goto LAB_10addaa08;
        }
      }
      else {
        *(long *)puVar13 = *plVar10;
LAB_10addaa08:
        *plVar10 = (long)puVar13;
      }
      *(long *)(puVar1 + 6) = *(long *)(puVar1 + 6) + 1;
LAB_10addaa18:
      lVar33 = lVar33 + 0x18;
    } while ((puVar14 != (uint *)0x0) && (puVar13 = puVar14, lVar33 != 0xa8));
    while (puVar5 = puVar14, puVar5 != (uint *)0x0) {
      puVar14 = *(uint **)puVar5;
      __ZdlPv();
      puVar12 = puVar5;
      puVar13 = puVar14;
    }
    if (lVar33 == 0xa8) goto LAB_10addaa7c;
  }
  puVar13 = (uint *)((long)&uStack_150 + lVar33);
  lVar33 = lVar33 + -0xa8;
  do {
    param_2 = (ulong)*puVar13;
    puVar12 = puVar1;
    FUN_10addb130(puVar1,param_2,puVar13);
    puVar13 = puVar13 + 6;
    lVar33 = lVar33 + 0x18;
  } while (lVar33 != 0);
LAB_10addaa7c:
  *(undefined1 *)(*(long *)(param_1 + 8) + (long)_DAT_112784648) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
    _objc_retain(param_2);
    lVar33 = *(long *)(puVar12 + 8);
    if (lVar33 != 0) {
      (**(code **)(lVar33 + 0x10))(lVar33,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  ___cxa_begin_catch(puVar12);
  do {
    puVar12 = *(uint **)puVar13;
    __ZdlPv(puVar13);
    puVar13 = puVar12;
  } while (puVar12 != (uint *)0x0);
  ___cxa_rethrow();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10addab08);
  (*pcVar4)();
}


