/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c63b5c; end: 100c63c37;  */

void FUN_100c63b5c(long param_1)

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



/* Entry: 100c63c38; end: 100c641f3; -[SCFeatureCameraSnapDoc initWithCameraSnapModelServices:cameraUIServices:cameraPreviewPresenterServices:cameraHardwareResource:previewABServices:userPreferenceTimeProviderServices:afterCaptureActionTracker:directorModePresenting:captureComponent:batchCapture:lensPlusSnapDocRecordProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100c63c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_80 = PTR_PTR_1126effa0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar11 = (long)_DAT_112741360;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741364,param_5);
    lVar11 = (long)_DAT_112741368;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_7;
    func_0x000107c61170(uVar2);
    lVar11 = (long)_DAT_11274136c;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_8;
    func_0x000107c61170(uVar2);
    lVar12 = (long)_DAT_112741370;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_9;
    func_0x000107c61170(uVar2);
    lVar11 = (long)_DAT_112741374;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_10;
    func_0x000107c61170(uVar2);
    lVar13 = (long)_DAT_112741378;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_12;
    func_0x000107c61170(uVar2);
    lVar11 = (long)_DAT_11274137c;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_13;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741380);
    *(undefined **)((long)puVar1 + (long)_DAT_112741380) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    puVar4 = puVar1;
    func_0x000107c61158(puVar1);
    func_0x000107c60b14();
    func_0x000107c61180();
    func_0x000107c44428();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741384);
    *(undefined **)((long)puVar1 + (long)_DAT_112741384) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    uVar2 = param_6;
    func_0x000107c5c734(param_6);
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c3f630();
    func_0x000107c61180();
    uVar10 = param_6;
    func_0x000107c5c734(param_6);
    func_0x000107c61180();
    uVar6 = uVar10;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c40794();
    uVar8 = param_6;
    func_0x000107c5c734(param_6);
    func_0x000107c61180();
    uVar9 = uVar8;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c5bb2c(puVar1);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_90,puVar1);
    uVar2 = param_11;
    func_0x000107c42e38(param_11);
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c4fadc();
    func_0x000107c61180();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_106191288;
    puStack_a0 = &UNK_1109124c8;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c5dc64(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x000107c42e38(uVar10);
    func_0x000107c61180();
    uVar2 = uVar10;
    func_0x000107c3da18();
    func_0x000107c61180();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_1061914f8;
    puStack_c8 = &UNK_110842a38;
    func_0x000107c6111c(auStack_c0,auStack_90);
    uVar5 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar10);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x000107c42e38(uVar10);
    func_0x000107c61180();
    uVar2 = uVar10;
    func_0x000107c499a4();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_e8,auStack_90);
    uVar5 = uVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar10);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
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



/* Entry: 100c641f4; end: 100c64247; +[SCQueuePerformer _defaultPerformer] */

void FUN_100c641f4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe050 != -1) {
    func_0x00010002a2fc(0x1137fe050,&PTR___NSConcreteGlobalBlock_110d98b28);
  }
  uVar1 = uRam00000001137fe048;
  func_0x000107c61174(uRam00000001137fe048);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c64248; end: 100c6427b;  */

void FUN_100c64248(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c46b68();
  uVar1 = puRam00000001137fe048;
  puRam00000001137fe048 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c6427c; end: 100c644a7; -[SCFeatureCameraSnapDoc startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6427c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_78,param_1);
  lVar6 = (long)_DAT_112741388;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c52094();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_100c71900;
    puStack_88 = &UNK_110872b30;
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000100078e94();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_a8,auStack_78);
    func_0x000107c61174(param_4);
    func_0x000107c4e524(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c644a8; end: 100c64517;  */

void FUN_100c644a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3f58c(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100c64518; end: 100c64527; -[SCFeatureCaptureComponentImpl recoveryEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c64518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274054c),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 100c64528; end: 100c64607;  */

void FUN_100c64528(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3da14(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100c64608; end: 100c6468f;  */

bool FUN_100c64608(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c64690; end: 100c647a7; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _arBarBottomUIArbitrator:arBarFeature:] */

void FUN_100c64690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61174(param_4);
  func_0x000107c3e15c(puVar1);
  func_0x000107c61180();
  func_0x000107c4afa4(param_1);
  func_0x000107c61180();
  func_0x000107c3d690(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c3d690(puVar1,param_2,param_4);
  func_0x000107c61170(param_4);
  puVar2 = PTR_PTR_1126c8858;
  func_0x000107c610f4(PTR_PTR_1126c8858);
  func_0x000107c46074();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c647a8; end: 100c647b3; -[SCCameraLazyFeatureReference isEnabled] */

void FUN_100c647a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c647b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 100c647b4; end: 100c647e3;  */

bool FUN_100c647b4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c647e4; end: 100c6499b; -[SCFeatureARBarBottomUIArbitratorImpl initWithContenders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100c647e4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
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
  
  puVar5 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  func_0x000107c61174(param_3);
  puStack_f0 = PTR_PTR_1126f0620;
  puVar1 = &uStack_f8;
  uStack_f8 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112743100;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined1 **)((long)puVar1 + lVar6) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    lVar6 = (long)_DAT_112743104;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    func_0x000107c61170(uVar2);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    func_0x000107c61174(param_3);
    puVar4 = param_3;
    func_0x000107c4080c();
    if (puVar4 != (undefined1 *)0x0) {
      lVar7 = *plStack_130;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_130 != lVar7) {
            func_0x000107c61128(param_3);
          }
          func_0x000107c5287c(*(undefined8 *)(lStack_138 + (long)puVar8 * 8));
          uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
          puVar3 = PTR_PTR_1126c8d08;
          func_0x000107c610fc(PTR_PTR_1126c8d08);
          func_0x000107c3d798(uVar2);
          func_0x000107c61170(puVar3);
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar4 = param_3;
        puVar5 = &uStack_140;
        func_0x000107c4080c();
      } while (puVar4 != (undefined1 *)0x0);
    }
    func_0x000107c61170(param_3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112743108) = 0x7fffffffffffffff;
    puVar4 = (undefined1 *)puVar5;
  }
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  func_0x000107c60e78();
  puVar1 = (undefined8 *)(param_3 + _DAT_112742544);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar1,puVar4);
  return puVar1;
}



/* Entry: 100c6499c; end: 100c649af; -[SCFeatureLensCollectionsBarImpl setArBarBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6499c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742544,param_3);
  return;
}



/* Entry: 100c649b0; end: 100c64a2f;  */

void FUN_100c649b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1 + 0x128;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c3e068();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100c64a30; end: 100c64a33; -[_TtC16ARBarIntegration16ARBarNullAdapter configureWithView:] */

void FUN_100c64a30(void)

{
  return;
}



/* Entry: 100c64a34; end: 100c64a47; -[_TtC16ARBarIntegration16ARBarNullAdapter setArBarBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c64a34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f9fa10,param_3);
  return;
}



/* Entry: 100c64a48; end: 100c64a83;  */

byte FUN_100c64a48(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x28);
  }
  func_0x000107c61170();
  return bVar2 & 1;
}



/* Entry: 100c64a84; end: 100c64dbf;  */

void FUN_100c64a84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar25 = PTR_PTR_1126b0230;
    func_0x000107c610f4();
    uVar24 = *(undefined8 *)(lVar1 + 400);
    uVar2 = *(undefined8 *)(lVar1 + 0x98);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(lVar1 + 0xa8);
    func_0x000107c5036c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar1 + 0xa0);
    func_0x000107c500a0();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar1 + 8);
    func_0x000107c3f2a8();
    uVar7 = *(undefined8 *)(lVar1 + 0x118);
    func_0x000107c4aeb4();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar9 = uVar8;
    func_0x000107c4d1e4();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c4d23c();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar13 = uVar12;
    func_0x000107c3e6cc();
    func_0x000107c61180();
    uVar14 = uVar13;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar15 = uVar14;
    func_0x000107c499a4();
    func_0x000107c61180();
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar17 = uVar16;
    func_0x000107c51d44();
    func_0x000107c61180();
    uVar18 = uVar17;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar19 = uVar18;
    func_0x000107c42414();
    func_0x000107c61180();
    uVar20 = *(undefined8 *)(lVar1 + 0x98);
    func_0x000107c3f0fc();
    func_0x000107c61180();
    uVar21 = *(undefined8 *)(lVar1 + 0x268);
    func_0x000107c3d0d8();
    func_0x000107c61180();
    uVar22 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c4c168();
    func_0x000107c61180();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_100c64dd0;
    puStack_78 = &UNK_11084e7d0;
    uVar26 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar26);
    ppuVar23 = &puStack_90;
    uStack_70 = uVar26;
    FUN_100c64dd0();
    func_0x000107c61180();
    func_0x000107c45bb4(puVar25,param_2,uVar24,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar11,uVar15,
                        uVar19,uVar20,uVar21,uVar22,ppuVar23,*(undefined8 *)(lVar1 + 0x58));
    func_0x000107c61170(ppuVar23);
    func_0x000107c61170(uStack_70);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 100c64dc0; end: 100c64dcf; -[SCFeatureSelfieSettingsImpl editingModeStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c64dc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127412e4);
}



/* Entry: 100c64dd0; end: 100c64eab;  */

void FUN_100c64dd0(long param_1)

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



/* Entry: 100c64eac; end: 100c65367; -[SCFeatureFourByThreeAspectRatioImpl initWithCameraDeviceSettingsResolver:cameraHardwareResource:cameraRequestHandler:renderAgent:cameraConfig:cameraUsageTier:lensCarouselManager:musicPickerSelectionObservable:isBatchCaptureActivatedObservable:isInSelfieSettingEditingMode:cameraHardwareServicesAPI:cameraModeActivationController:mainCameraViewControllerLifecycleEvents:cameraUserActionLogger:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100c64eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puStack_70 = PTR_PTR_1126efe90;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127409fc;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a00;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a04;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a08;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a0c;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740a10) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740a14) = 0;
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740a18,param_9);
    lVar4 = (long)_DAT_112740a1c;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a20;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a24;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a28;
    func_0x000107c61174(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a2c;
    func_0x000107c61174(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740a30;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740a34) = 0;
    lVar4 = (long)_DAT_112740a38;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112740a3c) = 0x3f800000;
    lVar4 = (long)_DAT_112740a40;
    func_0x000107c611a0((long)puVar1 + lVar4,param_17);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740a44) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740a48) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740a4c) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740a50) = 0;
    *(undefined4 *)((long)puVar1 + (long)_DAT_112740a54) = 0;
    func_0x000107c61144(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126b0228;
    lVar4 = (long)puVar1 + lVar4;
    func_0x000107c61148(lVar4);
    func_0x000107c4e748();
    func_0x000107c61180();
    lVar5 = (long)_DAT_112740a58;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x000107c4d078();
    puVar3 = PTR_PTR_1126ae720;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740a5c) = uVar2;
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740a60);
    *(undefined **)((long)puVar1 + (long)_DAT_112740a60) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c65368; end: 100c65377; -[SCFourThreePinchModeWithDeferredExposure mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c65368(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eeffb0);
}



/* Entry: 100c65378; end: 100c6544f; -[SCFeatureFourByThreeAspectRatioImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c65378(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126efe90;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_configureWithView__1125af8f0,param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112740a74);
  *(undefined8 *)(param_1 + _DAT_112740a74) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar4);
  lVar1 = *(long *)(param_1 + _DAT_112740a00);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  lVar2 = lVar1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4193c();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    func_0x000107c3c518(param_1);
  }
  return;
}



/* Entry: 100c65450; end: 100c654d3; -[SCFeatureFourByThreeAspectRatioImpl _setAspectRatioToggleButtonVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c65450(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740a60);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c654d4; end: 100c658b3; -[SCFeatureFourByThreeAspectRatioImpl _createAspectRatioToggleButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100c654d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c3ee98(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c450cc(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e42d78);
  func_0x000107c61180();
  func_0x000107c55260(puVar1,param_2,puVar2,0);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x402e000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  if (*(long *)(param_1 + _DAT_112740a5c) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c450cc(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e42d98);
    func_0x000107c61180();
    func_0x000107c55260(puVar1,param_2,puVar2,4);
  }
  else {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c450a4(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40,param_2,0x43,0xd4);
    func_0x000107c61180();
    func_0x000107c55260(puVar1,param_2,puVar2,4);
    lVar16 = (long)_DAT_112740a14;
    func_0x000107c58dd8(puVar1,param_2,*(undefined1 *)(param_1 + lVar16));
    uVar4 = 0xd5;
    if (*(char *)(param_1 + lVar16) == '\0') {
      uVar4 = 0x25;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar4);
    func_0x000107c61180();
    func_0x000107c52b50(puVar1,param_2,puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c3d8b8(puVar1,param_2,param_1,PTR_s__didTapAspectRatioToggleButton_11252f6e0,0x40);
  lVar16 = (long)_DAT_112740a74;
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c44dd8(uVar4);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(uVar4);
  func_0x000107c5a050(puVar1,param_2,0);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c40290(0x403e000000000000);
  func_0x000107c61180();
  puVar6 = puVar1;
  puStack_88 = puVar5;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c40290(0x403e000000000000);
  func_0x000107c61180();
  puVar8 = puVar1;
  puStack_80 = puVar7;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c3f250(uVar9);
  func_0x000107c61180();
  uVar4 = uVar9;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar10 = puVar8;
  func_0x000107c40280(puVar8,param_2,uVar4);
  func_0x000107c61180();
  puVar11 = puVar1;
  puStack_78 = puVar10;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c3f250();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar14 = puVar11;
  func_0x000107c40284(0xc018000000000000,puVar11,param_2,uVar13);
  func_0x000107c61180();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar14;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar3,param_2,puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  puVar2 = puVar2 + 0x20;
  func_0x000107c61148(puVar2);
  func_0x000107c61170();
  return (undefined *)(ulong)(puVar2 != (undefined *)0x0);
}



/* Entry: 100c658b4; end: 100c6593b;  */

bool FUN_100c658b4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c6593c; end: 100c65b0b; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _ngsBarArbitrator:] */

undefined * FUN_100c6593c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c51d44();
  func_0x000107c61180();
  func_0x000107c3d690(puVar1,param_2,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = param_3;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3e06c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar5 = param_3;
  uStack_68 = uVar4;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar6 = uVar5;
  func_0x000107c415e4();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c42e38();
  func_0x000107c61180();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar7;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar1,param_2,puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  puVar8 = PTR_PTR_1126b0178;
  func_0x000107c610f4(PTR_PTR_1126b0178);
  func_0x000107c46074();
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  func_0x000107c60e78();
  return *(undefined **)(puVar1 + 0x18);
}



/* Entry: 100c65b0c; end: 100c65b13; -[SCSpectaclesSsidScanner currentSsid] */

undefined8 FUN_100c65b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c65b14; end: 100c65b1b; -[SCMutablePublicCameraFeatureCatalog arBarBottomUIArbitrator] */

undefined8 FUN_100c65b14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c65b1c; end: 100c65b23; -[SCMutablePublicCameraFeatureCatalog defaultNGSBar] */

undefined8 FUN_100c65b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100c65b24; end: 100c65b37; -[SCFeatureSelfieSettingsImpl setCameraBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c65b24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741348,param_3);
  return;
}



/* Entry: 100c65b38; end: 100c65b4b; -[SCFeatureARBarBottomUIArbitratorImpl setCameraBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c65b38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112743110,param_3);
  return;
}



/* Entry: 100c65b4c; end: 100c65bd7;  */

undefined8 FUN_100c65b4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x78) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4d6a8();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c49cd8();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(lVar1);
  return uVar4;
}



/* Entry: 100c65bd8; end: 100c65bdf; -[SCMutablePublicCameraFeatureCatalog ngsBarArbitrator] */

undefined8 FUN_100c65bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 100c65be0; end: 100c65c57;  */

void FUN_100c65be0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c8478;
    func_0x000107c610f4(PTR_PTR_1126c8478);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    lVar1 = param_1;
    func_0x000107c3ad58(param_1);
    func_0x000107c46990(puVar2,param_2,uVar3,lVar1,*(undefined8 *)(param_1 + 0x20));
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c65c58; end: 100c65cb7; -[SCCameraMainCameraFeatureProviderPluginWorkflow _alwaysOnCarouselEnabled] */

undefined8 FUN_100c65c58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c4af38(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3dc60();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}



/* Entry: 100c65cb8; end: 100c65daf; -[SCFeatureDefaultNGSBarImpl initWithFooterItem:animated:cameraConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c65cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126efe68;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112740894;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x000107c4a76c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740898);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740898) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274089c) = param_4;
    uVar2 = param_5;
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127408a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127408a0) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c65db0; end: 100c65e73; -[SCFeatureDefaultNGSBarImpl setCameraBottomUIArbitrator:] */

/* WARNING: Possible PIC construction at 0x000100c65e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c65e18) */
/* WARNING: Removing unreachable block (ram,0x000100c65e60) */
/* WARNING: Removing unreachable block (ram,0x000100c65e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c65db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c611a0(param_1 + _DAT_1127408a4,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127408a0);
  func_0x000107c4cf78(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5ac3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c65e74; end: 100c65ee3; -[SCCameraMiniCarouselConfigurationImpl shouldInitializeNGSBarEarlier] */

undefined8 FUN_100c65e74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49680();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100c65ee4; end: 100c65f93;  */

void FUN_100c65ee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c7978;
    func_0x000107c610f4(PTR_PTR_1126c7978);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5de90(uVar1);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c3eabc(uVar2);
    func_0x000107c61180();
    func_0x000107c456dc(puVar3,param_2,uVar4,uVar1,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c65f94; end: 100c66083; -[SCFeatureSessionLogger initWithAppLifecycleEvents:viewControllerLifecycleEvents:cameraUserBlizzard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c65f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126ef8e8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c3bff8(puVar1);
    func_0x000107c3c034(puVar1);
    uVar2 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    func_0x000107c5bac4();
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11273ede8;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c66084; end: 100c66243; -[SCFeatureSessionLogger _observeAppLifecycle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273edec);
  *(undefined **)(param_1 + _DAT_11273edec) = puVar1;
  func_0x000107c61170(uVar3);
  func_0x000107c61144(auStack_68,param_1);
  uVar3 = param_3;
  func_0x000107c41b80(param_3);
  func_0x000107c61180();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_1060c67cc;
  puStack_78 = &UNK_110846510;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c5e3d8(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c66244; end: 100c6634b; -[SCFeatureSessionLogger _observeViewControllerLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273edf0);
  *(undefined **)(param_1 + _DAT_11273edf0) = puVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61144(auStack_48,param_1);
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar2 = param_3;
  func_0x000107c5c320(param_3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c6634c; end: 100c66423;  */

void FUN_100c6634c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  func_0x000107c61170();
  if (lVar1 != 0) {
    func_0x000107c6111c(auStack_38,param_1 + 0x20);
    func_0x000107c4c7b0(param_2);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c66424; end: 100c6644f;  */

void FUN_100c66424(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3be00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c66450; end: 100c6648f; -[SCFeatureSessionLogger _logCameraSessionStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66450(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ede8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5bac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c66490; end: 100c66567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66490(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b9d20;
    func_0x000107c610f4(PTR_PTR_1126b9d20);
    lVar1 = param_1 + _DAT_112724534;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c4c01c();
    func_0x000107c61180();
    lVar3 = param_1 + _DAT_112724538;
    func_0x000107c61148(lVar3);
    lVar4 = lVar3;
    func_0x000107c5dac4();
    func_0x000107c61180();
    func_0x000107c4820c(puVar5,param_2,lVar2,lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c66568; end: 100c6660b; -[SCCameraUserBlizzardLogger initWithQueue:userBlizzard:] */

undefined1 *
FUN_100c66568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e89f0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c6660c; end: 100c666e3; -[SCCameraUserBlizzardLogger startFeatureSession:] */

void FUN_100c6660c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c5099c(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c666e4; end: 100c6676b;  */

bool FUN_100c666e4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c6676c; end: 100c6694b; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _cameraTooltipArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100c6676c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_d8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  uVar6 = param_3;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x000107c4b108();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42e38();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  uVar6 = param_3;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x000107c4d1e4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49cd8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  puVar4 = puVar3;
  if ((int)uVar2 != 0) {
    uVar6 = param_3;
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c4d1e4();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    puVar4 = puVar11;
    func_0x000107c3e164();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar6);
  }
  puVar5 = (undefined8 *)PTR_PTR_1126c8860;
  func_0x000107c610f4();
  puVar3 = puVar4;
  func_0x000107c46074();
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  func_0x000107c60e78();
  puVar8 = &uStack_1b0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  func_0x000107c61174(puVar3);
  puStack_160 = PTR_PTR_1126f0610;
  puVar5 = &uStack_168;
  uStack_168 = param_3;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_1127430e8;
    func_0x000107c61174(puVar3);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar9);
    *(undefined **)((long)puVar5 + lVar9) = puVar3;
    func_0x000107c61170(uVar6);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    lVar9 = (long)_DAT_1127430ec;
    uVar6 = *(undefined8 *)((long)puVar5 + lVar9);
    *(undefined **)((long)puVar5 + lVar9) = puVar4;
    func_0x000107c61170(uVar6);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    func_0x000107c61174(puVar3);
    puVar4 = puVar3;
    func_0x000107c4080c();
    if (puVar4 != (undefined *)0x0) {
      lVar10 = *plStack_1a0;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar10) {
            func_0x000107c61128(puVar3);
          }
          func_0x000107c530d8(*(undefined8 *)(lStack_1a8 + (long)puVar11 * 8));
          uVar6 = *(undefined8 *)((long)puVar5 + lVar9);
          puVar7 = PTR_PTR_1126c8d00;
          func_0x000107c61160(PTR_PTR_1126c8d00);
          func_0x000107c3d798(uVar6);
          func_0x000107c61170(puVar7);
          puVar11 = puVar11 + 1;
        } while (puVar4 != puVar11);
        puVar4 = puVar3;
        puVar8 = &uStack_1b0;
        func_0x000107c4080c();
      } while (puVar4 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar3);
    *(undefined8 *)((long)puVar5 + (long)_DAT_1127430f0) = 0x7fffffffffffffff;
    puVar4 = (undefined *)puVar8;
  }
  func_0x000107c61170(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar5;
  }
  func_0x000107c60e78();
  puVar5 = (undefined8 *)(puVar3 + _DAT_11273ec5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar5,puVar4);
  return puVar5;
}



/* Entry: 100c6694c; end: 100c66b03; -[SCFeatureCameraTooltipArbitratorImpl initWithContenders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100c6694c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
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
  
  puVar5 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  func_0x000107c61174(param_3);
  puStack_f0 = PTR_PTR_1126f0610;
  puVar1 = &uStack_f8;
  uStack_f8 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_1127430e8;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined1 **)((long)puVar1 + lVar6) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    lVar6 = (long)_DAT_1127430ec;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    func_0x000107c61170(uVar2);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    func_0x000107c61174(param_3);
    puVar4 = param_3;
    func_0x000107c4080c();
    if (puVar4 != (undefined1 *)0x0) {
      lVar7 = *plStack_130;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_130 != lVar7) {
            func_0x000107c61128(param_3);
          }
          func_0x000107c530d8(*(undefined8 *)(lStack_138 + (long)puVar8 * 8));
          uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
          puVar3 = PTR_PTR_1126c8d00;
          func_0x000107c61160(PTR_PTR_1126c8d00);
          func_0x000107c3d798(uVar2);
          func_0x000107c61170(puVar3);
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar4 = param_3;
        puVar5 = &uStack_140;
        func_0x000107c4080c();
      } while (puVar4 != (undefined1 *)0x0);
    }
    func_0x000107c61170(param_3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127430f0) = 0x7fffffffffffffff;
    puVar4 = (undefined1 *)puVar5;
  }
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  func_0x000107c60e78();
  puVar1 = (undefined8 *)(param_3 + _DAT_11273ec5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar1,puVar4);
  return puVar1;
}



/* Entry: 100c66b04; end: 100c66b17; -[SCFeatureMusicImpl setCameraTooltipArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66b04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273ec5c,param_3);
  return;
}



/* Entry: 100c66b18; end: 100c66b2b; -[SCFeatureLensExplorerSwipeUpImpl setCameraTooltipArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66b18(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742634,param_3);
  return;
}



/* Entry: 100c66b2c; end: 100c66b83;  */

undefined * FUN_100c66b2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c8908;
    func_0x000107c3bcf4(PTR_PTR_1126c8908,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20));
  }
  func_0x000107c61170(lVar1);
  return puVar2;
}



/* Entry: 100c66b84; end: 100c66bd3; +[SCCameraCoreLensFeatureProviderPlugin _lensSideButtonEnabledWithCameraType:lensCarouselSettings:] */

uint FUN_100c66b84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_3 == 8) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5c734(param_4);
    func_0x000107c61180();
    uVar1 = param_4;
    func_0x000107c3dc60();
    uVar2 = (uint)uVar1 ^ 1;
    func_0x000107c61170(param_4);
  }
  return uVar2;
}



/* Entry: 100c66bd4; end: 100c66c17;  */

void FUN_100c66bd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c66c18; end: 100c66c4b;  */

void FUN_100c66c18(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3c638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c66c4c; end: 100c66d57; -[SCProfileHeaderButtonEntryPoint _setupBottomBadge:] */

/* WARNING: Possible PIC construction at 0x000100c66c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c66cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c66d34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c66cf8) */
/* WARNING: Removing unreachable block (ram,0x000100c66c9c) */
/* WARNING: Removing unreachable block (ram,0x000100c66d04) */
/* WARNING: Removing unreachable block (ram,0x000100c66d30) */
/* WARNING: Removing unreachable block (ram,0x000100c66ca4) */
/* WARNING: Removing unreachable block (ram,0x000100c66d38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5bcc0(param_3);
  param_1 = param_1 + _DAT_112731ddc;
  func_0x000107c61148(param_1);
  func_0x000107c3ee74();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c66d58; end: 100c66deb; -[SIGHeaderButtonOption setBottomBadge:] */

void FUN_100c66d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100c66dec;
  puStack_40 = &UNK_110d62ab0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c66dec; end: 100c66e3b;  */

void FUN_100c66dec(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_headerButtonOption_didChangeBott_1125d5650);
  if ((uVar1 & 1) != 0) {
    func_0x000107c44c88(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c66e3c; end: 100c66e57; -[SIGHeaderButtonOptionView headerButtonOption:didChangeBottomBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde4b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureBottomBadgeView_forOpt_112556c80,
             *(undefined8 *)(param_1 + _DAT_112794b5c),*(undefined8 *)(param_1 + _DAT_112794b68));
  return;
}



/* Entry: 100c66e58; end: 100c66ea3;  */

void FUN_100c66e58(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c66ea4; end: 100c66f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66ea4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113054680) == '\0') {
    (*param_1)();
  }
  else if (*(char *)(unaff_x20 + _DAT_113054680) == '\x01') {
    (*param_3)();
  }
  else {
    (*param_5)();
  }
  return;
}



/* Entry: 100c66f38; end: 100c66fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66f38(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fefb98);
    func_0x0001002ed07c(0);
    uVar1 = (ulong)(param_2 & 1);
    func_0x000107c6010c(uVar1);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 100c66fcc; end: 100c66fe7;  */

void FUN_100c66fcc(void)

{
  FUN_100c66f38();
  return;
}



/* Entry: 100c66fe8; end: 100c6708b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c66fe8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112731ddc;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c3ee74();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4e020();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c551e8();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beddf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateProfileButtonIsLoading__112595180,0);
  return;
}



/* Entry: 100c6708c; end: 100c6711f; -[SIGHeaderButtonOption setIcon:] */

void FUN_100c6708c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100c67120;
  puStack_40 = &UNK_110d62ab0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c67120; end: 100c6716f;  */

void FUN_100c67120(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_headerButtonOption_didChangeIcon_1125d5658);
  if ((uVar1 & 1) != 0) {
    func_0x000107c44c8c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c67170; end: 100c67197; -[SIGHeaderButtonOptionView headerButtonOption:didChangeIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c67170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde51f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureImageView_forOption_th_112556e18,
             *(undefined8 *)(param_1 + _DAT_112794b44),*(undefined8 *)(param_1 + _DAT_112794b68),
             *(undefined8 *)(param_1 + _DAT_112794b08),0);
  return;
}



/* Entry: 100c67198; end: 100c671f3; -[SCProfileHeaderButtonEntryPoint _updateProfileButtonIsLoading:] */

void FUN_100c67198(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100c80df0;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 100c671f4; end: 100c6723b;  */

void FUN_100c671f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3cbf8(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c6723c; end: 100c675ab; -[SCImpalaBusinessProfileHandlers _updateHandlersWithBusinessProfiles:] */

void FUN_100c6723c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
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
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  lVar12 = 0x10;
  lVar3 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0);
  if (lVar3 == 0) {
    func_0x000107c61170(param_3);
LAB_100c674e8:
    if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      func_0x000107c52e88();
    }
  }
  else {
    uVar15 = 0;
    lVar17 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar17) {
          func_0x000107c61128(param_3);
        }
        lVar16 = *(long *)(lStack_128 + lVar12 * 8);
        lVar4 = lVar16;
        func_0x000107c3ee4c();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c44fd8();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c4adac();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        if (lVar6 != 0) {
          lVar4 = lVar16;
          func_0x000107c3ee4c();
          func_0x000107c61180();
          lVar5 = lVar4;
          func_0x000107c44fd8();
          func_0x000107c61180();
          uVar14 = 1;
          lVar6 = param_1;
          func_0x000107c3b93c(param_1,param_2,lVar5,1,0);
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar4);
          if ((uVar15 & 1) == 0) {
            lVar4 = lVar16;
            func_0x000107c5d918();
            func_0x000107c61180();
            lVar5 = lVar4;
            func_0x000107c49ec8();
            if ((int)lVar5 == 0) {
              uVar14 = 0;
            }
            else {
              lVar5 = lVar6;
              func_0x000107c4a1c4();
              uVar14 = (uint)lVar5 ^ 1;
            }
            func_0x000107c61170(lVar4);
          }
          func_0x000107c5d6c8(lVar6,param_2,lVar16,0);
          func_0x000107c3d798(puVar2,param_2,lVar6);
          if (*(long *)(param_1 + 0x30) != 0) {
            lVar4 = lVar16;
            func_0x000107c5d918();
            func_0x000107c61180();
            lVar5 = lVar4;
            func_0x000107c49ec8();
            func_0x000107c61170(lVar4);
            if ((int)lVar5 != 0) {
              if (*(long *)(param_1 + 0x38) == 0) {
                uVar7 = *(undefined8 *)(param_1 + 0x30);
                func_0x000107c3ee50();
                func_0x000107c61180();
                uVar13 = *(undefined8 *)(param_1 + 0x38);
                *(undefined8 *)(param_1 + 0x38) = uVar7;
                func_0x000107c61170(uVar13);
              }
              func_0x000107c5d6c8(*(undefined8 *)(param_1 + 0x30),param_2,lVar16,1);
              uVar7 = *(undefined8 *)(param_1 + 0x40);
              func_0x000107c3ee4c();
              func_0x000107c61180();
              lVar4 = lVar16;
              func_0x000107c44fd8();
              func_0x000107c61180();
              func_0x000107c4d664(uVar7,param_2,lVar4);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar16);
            }
          }
          func_0x000107c61170(lVar6);
          uVar15 = uVar14;
        }
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar12 = 0x10;
      lVar3 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0);
    } while (lVar3 != 0);
    func_0x000107c61170(param_3);
    if ((uVar15 & 1) == 0) goto LAB_100c674e8;
  }
  func_0x000107c3c468(param_1);
  lVar3 = param_1 + 0x48;
  func_0x000107c61148();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3dbc0();
  func_0x000107c61180();
  uVar7 = uVar8;
  func_0x000107c4c280();
  func_0x000107c61180();
  uVar13 = uVar7;
  func_0x000107c3ee58(lVar3);
  iVar11 = (int)uVar13;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto LAB_107c61110;
  func_0x000107c60e78();
  func_0x000107c61174(param_1);
  func_0x000107c61174(lVar12);
  lVar3 = param_1;
  func_0x000107c4adac();
  lVar17 = param_1;
  if ((lVar3 == 0) && (lVar3 = lVar12, func_0x000107c4adac(), lVar17 = lVar12, lVar3 == 0)) {
    puVar9 = (undefined *)0x0;
    lVar17 = 0;
  }
  else {
    func_0x000107c61174(lVar17);
    if (lVar17 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = *(undefined **)(param_3 + 8);
      func_0x000107c4d9e8(puVar9,param_2,lVar17);
      func_0x000107c61180();
    }
  }
  puVar2 = puVar9;
  func_0x000107c44680();
  func_0x000107c61180();
  puVar10 = puVar9;
  if ((iVar11 != 0) && (puVar2 == (undefined *)0x0)) {
    puVar2 = PTR_PTR_1126b0f68;
    func_0x000107c610f4(PTR_PTR_1126b0f68);
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    uVar1 = *(undefined1 *)(param_3 + 0x20);
    uVar13 = *(undefined8 *)(param_3 + 0x28);
    lVar3 = param_3 + 0x10;
    func_0x000107c61148(lVar3);
    func_0x000107c48238(puVar2,param_2,uVar7,param_1,uVar1,uVar13,lVar3,param_3,lVar12);
    func_0x000107c61170(lVar3);
    puVar10 = PTR_PTR_1126dc808;
    func_0x000107c610f4(PTR_PTR_1126dc808);
    func_0x000107c46c64();
    func_0x000107c61170(puVar9);
    lVar3 = param_1;
    func_0x000107c4adac();
    if (lVar3 == 0) {
      lVar3 = lVar12;
      func_0x000107c4adac();
      if (lVar3 != 0) {
        func_0x000107c56bd8(*(undefined8 *)(param_3 + 8),param_2,puVar10,lVar12);
        goto LAB_100c67728;
      }
    }
    else {
      func_0x000107c56bd8(*(undefined8 *)(param_3 + 8),param_2,puVar10,param_1);
      lVar3 = lVar12;
      func_0x000107c4adac();
      if (lVar3 != 0) {
LAB_100c67728:
        func_0x000107c5a344(puVar10,param_2,lVar12);
      }
    }
  }
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  func_0x000107c3ee3c(uVar7);
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c49d0c(param_1,param_2,uVar7);
  func_0x000107c61170(uVar7);
  if ((int)lVar3 != 0) {
    func_0x000107c56320(puVar2,param_2,1);
  }
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(param_1);
LAB_107c61110:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c675ac; end: 100c677b3; -[SCImpalaBusinessProfileHandlers _handlerWithBusinessId:createIfNeeded:userId:] */

void FUN_100c675ac(long param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  lVar2 = param_3;
  func_0x000107c4adac();
  lVar6 = param_3;
  if ((lVar2 == 0) && (lVar2 = param_5, func_0x000107c4adac(), lVar6 = param_5, lVar2 == 0)) {
    puVar3 = (undefined *)0x0;
    lVar6 = 0;
  }
  else {
    func_0x000107c61174(lVar6);
    if (lVar6 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = *(undefined **)(param_1 + 8);
      func_0x000107c4d9e8(puVar3,param_2,lVar6);
      func_0x000107c61180();
    }
  }
  puVar4 = puVar3;
  func_0x000107c44680();
  func_0x000107c61180();
  puVar5 = puVar3;
  if ((param_4 != 0) && (puVar4 == (undefined *)0x0)) {
    puVar4 = PTR_PTR_1126b0f68;
    func_0x000107c610f4(PTR_PTR_1126b0f68);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined1 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = param_1 + 0x10;
    func_0x000107c61148(lVar2);
    func_0x000107c48238(puVar4,param_2,uVar7,param_3,uVar1,uVar8,lVar2,param_1,param_5);
    func_0x000107c61170(lVar2);
    puVar5 = PTR_PTR_1126dc808;
    func_0x000107c610f4(PTR_PTR_1126dc808);
    func_0x000107c46c64();
    func_0x000107c61170(puVar3);
    lVar2 = param_3;
    func_0x000107c4adac();
    if (lVar2 == 0) {
      lVar2 = param_5;
      func_0x000107c4adac();
      if (lVar2 == 0) goto LAB_100c67734;
      func_0x000107c56bd8(*(undefined8 *)(param_1 + 8),param_2,puVar5,param_5);
    }
    else {
      func_0x000107c56bd8(*(undefined8 *)(param_1 + 8),param_2,puVar5,param_3);
      lVar2 = param_5;
      func_0x000107c4adac();
      if (lVar2 == 0) goto LAB_100c67734;
    }
    func_0x000107c5a344(puVar5,param_2,param_5);
  }
LAB_100c67734:
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c3ee3c(uVar7);
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c49d0c(param_3,param_2,uVar7);
  func_0x000107c61170(uVar7);
  if ((int)lVar2 != 0) {
    func_0x000107c56320(puVar4,param_2,1);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c677b4; end: 100c67ae3; -[SCImpalaBusinessProfileHandler initWithRPC:businessId:isManaged:circumstanceEngine:runtimeProvider:delegate:userId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100c677b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126ff3a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(0,puVar1,PTR_s_initWithAutoRefreshTimeInterval__1125db118,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11277dd7c;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_11277dd80;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277dd84) = param_5;
    lVar5 = (long)puVar1 + (long)_DAT_11277dd88;
    func_0x000107c611a0(lVar5,param_8);
    FUN_100c67ae4();
    func_0x000107c61180();
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11277dd8c,lVar5);
    func_0x000107c61170(lVar5);
    func_0x000100c68168();
    func_0x000107c61180();
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11277dd90,lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11277dd94,param_7);
    lVar5 = (long)_DAT_11277dd98;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dd9c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dd9c) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126dc7c8;
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_9);
    func_0x000107c4b7bc(puVar3);
    func_0x000107c61180();
    func_0x000107c55fec(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c67ae4; end: 100c67b7f;  */

void FUN_100c67ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001004fa310();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126dc8e0;
  func_0x000107c61158(PTR_PTR_1126dc8e0);
  uVar2 = param_1;
  func_0x000107c3ced8(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110acb5f8);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = uVar2;
  func_0x000107c45010(uVar2);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100c67b80; end: 100c67b87;  */

void FUN_100c67b80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_creatorSettingsMutator_1125b4788);
  return;
}



/* Entry: 100c67b88; end: 100c67b9f; -[_TtC24SCCreatorSettingsService24SCCreatorSettingsService creatorSettingsMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c67b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302cc80));
  return;
}



/* Entry: 100c67ba0; end: 100c67bd7;  */

void FUN_100c67ba0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c67bd8; end: 100c67ccf;  */

undefined * FUN_100c67bd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar2 = uVar3;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  func_0x000107c5b4bc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126a9a10;
  func_0x000107c610f8(PTR_PTR_1126a9a10);
  func_0x000107c4661c();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return puVar4;
}



/* Entry: 100c67cd0; end: 100c67ef3; -[SCCreatorSettingsDataMutator initWithDocObjectContext:creatorSettingsDataTracker:requestManager:snapTokenProvider:snapchattersDataFetcher:userId:snapchatterDataMutator:snapchatterDataTracker:creatorsSettingsRequestMananger:circumstanceEngine:] */

undefined8 *
FUN_100c67cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126eb490;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126c1050;
    func_0x000107c610f4();
    func_0x000107c483a4();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    func_0x000107c610fc();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
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



/* Entry: 100c67ef4; end: 100c680f7; -[SCCreatorSettingsSubscriptionRequestProcessor initWithRequestManager:snapTokenProvider:snapchatterDataMutator:snapchatterDataTracker:userId:circumstanceEngine:] */

undefined1 *
FUN_100c67ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126eb480;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    uVar2 = param_6;
    func_0x000107c5c734(param_6);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c680f8; end: 100c68103;  */

void FUN_100c680f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c68104; end: 100c681a7;  */

void FUN_100c68104(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c681a8; end: 100c6820f;  */

/* WARNING: Possible PIC construction at 0x000100c681fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c68200) */

void FUN_100c681a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001004fa310();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bb668;
  func_0x000107c61158(PTR_PTR_1126bb668);
  func_0x000107c3ced8(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb7f8);
  func_0x000107c61180();
  uVar1 = uRam000000011372f498;
  uRam000000011372f498 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c68210; end: 100c68217;  */

void FUN_100c68210(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchattersDataMutator_11266ece0);
  return;
}



/* Entry: 100c68218; end: 100c6825f; +[SCDataHandlerLoaderWithBlock loaderWithBlock:] */

void FUN_100c68218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c45a20();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c68260; end: 100c682d7; -[SCDataHandlerLoaderWithBlock initWithBlock:] */

undefined1 * FUN_100c68260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ff458;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c682d8; end: 100c68343; -[SCImpalaBusinessProfileHandlerEntry initWithHandler:] */

undefined1 * FUN_100c682d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ff3a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c68344; end: 100c683b7; -[SCImpalaBusinessProfileHandler isPlaceholderProfile] */

ulong FUN_100c68344(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x000107c3ee50();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ee4c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4a1c4();
  if ((uVar3 & 1) == 0) {
    func_0x000107c4c7f4(param_1);
  }
  else {
    param_1 = 1;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100c683b8; end: 100c683bb; -[SCImpalaBusinessProfileHandler businessProfileAndUserData] */

void FUN_100c683b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_data_1125b6738);
  return;
}



/* Entry: 100c683bc; end: 100c683cb; -[SCImpalaBusinessProfileHandler matchesPlaceholderProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c683bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277dd78);
}



/* Entry: 100c683cc; end: 100c6886b; -[SCImpalaBusinessProfileHandler updateWithBusinessProfileAndUserData:ignoreBusinessId:] */

/* WARNING: Possible PIC construction at 0x000100c6843c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c684a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c684f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6858c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c685bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c685e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6860c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c686bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6872c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6873c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6874c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c68768) */
/* WARNING: Removing unreachable block (ram,0x000100c68788) */
/* WARNING: Removing unreachable block (ram,0x000100c68848) */
/* WARNING: Removing unreachable block (ram,0x000100c68838) */
/* WARNING: Removing unreachable block (ram,0x000100c68828) */
/* WARNING: Removing unreachable block (ram,0x000100c68818) */
/* WARNING: Removing unreachable block (ram,0x000100c68750) */
/* WARNING: Removing unreachable block (ram,0x000100c68798) */
/* WARNING: Removing unreachable block (ram,0x000100c68754) */
/* WARNING: Removing unreachable block (ram,0x000100c68740) */
/* WARNING: Removing unreachable block (ram,0x000100c68730) */
/* WARNING: Removing unreachable block (ram,0x000100c686c0) */
/* WARNING: Removing unreachable block (ram,0x000100c68694) */
/* WARNING: Removing unreachable block (ram,0x000100c68668) */
/* WARNING: Removing unreachable block (ram,0x000100c6863c) */
/* WARNING: Removing unreachable block (ram,0x000100c68610) */
/* WARNING: Removing unreachable block (ram,0x000100c685e4) */
/* WARNING: Removing unreachable block (ram,0x000100c685c0) */
/* WARNING: Removing unreachable block (ram,0x000100c685e8) */
/* WARNING: Removing unreachable block (ram,0x000100c68614) */
/* WARNING: Removing unreachable block (ram,0x000100c68640) */
/* WARNING: Removing unreachable block (ram,0x000100c6866c) */
/* WARNING: Removing unreachable block (ram,0x000100c68698) */
/* WARNING: Removing unreachable block (ram,0x000100c686c4) */
/* WARNING: Removing unreachable block (ram,0x000100c68758) */
/* WARNING: Removing unreachable block (ram,0x000100c68714) */
/* WARNING: Removing unreachable block (ram,0x000100c68784) */
/* WARNING: Removing unreachable block (ram,0x000100c6871c) */
/* WARNING: Removing unreachable block (ram,0x000100c686a4) */
/* WARNING: Removing unreachable block (ram,0x000100c68678) */
/* WARNING: Removing unreachable block (ram,0x000100c6864c) */
/* WARNING: Removing unreachable block (ram,0x000100c68620) */
/* WARNING: Removing unreachable block (ram,0x000100c685f4) */
/* WARNING: Removing unreachable block (ram,0x000100c685c8) */
/* WARNING: Removing unreachable block (ram,0x000100c68590) */
/* WARNING: Removing unreachable block (ram,0x000100c68564) */
/* WARNING: Removing unreachable block (ram,0x000100c68538) */
/* WARNING: Removing unreachable block (ram,0x000100c684fc) */
/* WARNING: Removing unreachable block (ram,0x000100c684a4) */
/* WARNING: Removing unreachable block (ram,0x000100c68440) */
/* WARNING: Removing unreachable block (ram,0x000100c68778) */
/* WARNING: Removing unreachable block (ram,0x000100c687a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c683cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar2 = param_1;
  func_0x000107c4a1c4();
  if ((int)lVar2 == 0) {
    func_0x000107c3ee4c(param_1);
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c3ee50();
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c44b54();
    if ((int)lVar1 == 0) {
      func_0x000107c61170(lVar2);
      lVar2 = param_1;
      func_0x000107c3ee50();
      func_0x000107c61180();
      lVar1 = lVar2;
      func_0x000107c44c04();
      if ((int)lVar1 == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c3ee50(param_1);
        func_0x000107c61180();
        func_0x000107c3ee54();
        func_0x000107c61180();
      }
      else {
        func_0x000107c3ee50();
        func_0x000107c61180();
        func_0x000107c5d918();
        func_0x000107c61180();
      }
    }
    else {
      func_0x000107c3ee50();
      func_0x000107c61180();
      func_0x000107c5bfa4();
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c3ee4c();
    func_0x000107c61180();
    func_0x000107c44fd8();
    func_0x000107c61180();
    lVar2 = *(long *)(param_1 + _DAT_11277dda4);
    *(undefined8 *)(param_1 + _DAT_11277dda4) = param_3;
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6886c; end: 100c68907; -[SCImpalaBusinessProfileHandler businessProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6886c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x000107c3ee50();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c44764();
  func_0x000107c61170(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126b1a58;
    func_0x000107c61160(PTR_PTR_1126b1a58);
    func_0x000107c55218();
  }
  else {
    func_0x000107c3ee50(param_1);
    func_0x000107c61180();
    puVar1 = param_1;
    func_0x000107c3ee4c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c68908; end: 100c68983; +[IMPBusinessStory descriptor] */

undefined * FUN_100c68908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c59030,
                        &PTR____CFConstantStringClassReference_110f50398,&PTR_DAT_113360b18,
                        &PTR_DAT_113360c30,9,0x48,0x1c);
    func_0x000107c5a894();
    puRam00000001137f3280 = puVar1;
  }
  return puRam00000001137f3280;
}



/* Entry: 100c68984; end: 100c689cb; -[SCImpalaBusinessProfileHandler setBusinessProfileAndUserData:] */

void FUN_100c68984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c44c04(param_3);
  func_0x000107c4eb58(param_1,param_2,param_3,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c689cc; end: 100c689ef; -[SCDataHandler populateWithData:nextPageInfo:wasRefreshed:] */

void FUN_100c689cc(undefined8 param_1)

{
  func_0x000107c3b554();
                    /* WARNING: Could not recover jumptable at 0x00010bf637f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dataDidChange_1125b67a0);
  return;
}



/* Entry: 100c689f0; end: 100c68abb; -[SCDataHandler _doPopulateWithData:nextPageInfo:wasRefreshed:] */

void FUN_100c689f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c56a98(uVar2);
  func_0x000107c5a648(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c5296c(param_1);
  func_0x000107c61170(param_3);
  if (param_5 != 0) {
    func_0x000107c56a20(*(undefined8 *)(param_1 + 0x10));
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c55a64(*(undefined8 *)(param_1 + 0x10));
    func_0x000107c61170(puVar1);
    func_0x000107c3c2e4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be9b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleRefreshIfNeeded_112584720);
    return;
  }
  return;
}



/* Entry: 100c68abc; end: 100c68aeb; -[SCDataHandlerMetadata setNextPageInfo:] */

void FUN_100c68abc(long param_1,undefined8 param_2,undefined8 param_3)

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


