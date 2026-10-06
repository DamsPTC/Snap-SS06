/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062189bc; end: 106218aa7; -[SCDisplayLayerRenderingModule initWithMainQueuePerformer:initialOrientation:] */

undefined8 * FUN_1062189bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0818;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[4];
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106218aa8; end: 106218ab3;  */

void FUN_106218aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf55e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createDisplayLayerWithOrientatio_1125b3140,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106218ab4; end: 106218b77; -[SCDisplayLayerRenderingModule setOrientation:] */

void FUN_106218ab4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(ulong *)(param_1 + 0x28) != param_3) {
    *(ulong *)(param_1 + 0x28) = param_3;
    if ((param_3 < 8) && ((1L << (param_3 & 0x3f) & 0xccU) != 0)) {
      _CATransform3DMakeRotation(&uStack_a0,0x3ff921fb54442d18,0,0,0x3ff0000000000000);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      uStack_c8 = uStack_48;
      uStack_d0 = uStack_50;
      uStack_b8 = uStack_38;
      uStack_c0 = uStack_40;
      uStack_a8 = uStack_28;
      uStack_b0 = uStack_30;
      uStack_118 = uStack_98;
      uStack_120 = uStack_a0;
      uStack_108 = uStack_88;
      uStack_110 = uStack_90;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
      uStack_e0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
      uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
      uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
      uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
      uStack_c0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
      uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
      uStack_b0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
      uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
      uStack_120 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
      uStack_108 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
      uStack_110 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
      uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
      uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
      uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
      uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    }
    uStack_100 = uStack_80;
    uStack_f8 = uStack_78;
    uStack_f0 = uStack_70;
    uStack_e8 = uStack_68;
    func_0x00010c219960(uVar1,param_2,&uStack_120);
  }
  return;
}



/* Entry: 106218b78; end: 106218bb7; -[SCDisplayLayerRenderingModule setFillMode:] */

void FUN_106218b78(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  if ((*(long *)(param_1 + 0x30) != param_3) &&
     ((*(long *)(param_1 + 0x30) = param_3,
      puVar1 = (undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_110348050, param_3 == 0 ||
      (puVar1 = (undefined8 *)PTR__AVLayerVideoGravityResizeAspect_110348048, param_3 == 1)))) {
                    /* WARNING: Could not recover jumptable at 0x00010c2218b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_setVideoGravity__112666050,*puVar1);
    return;
  }
  return;
}



/* Entry: 106218bb8; end: 106218c0f; -[SCDisplayLayerRenderingModule flushTextureCache] */

void FUN_106218bb8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106218c10;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 106218c10; end: 106218c1b;  */

void FUN_106218c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_flushAndRemoveImage_1125ca590);
  return;
}



/* Entry: 106218c1c; end: 106218c23; -[SCDisplayLayerRenderingModule renderingModuleType] */

undefined8 FUN_106218c1c(void)

{
  return 3;
}



/* Entry: 106218c24; end: 106218d37; -[SCDisplayLayerRenderingModule displayLayerContainer:] */

void FUN_106218c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106218cd8;
  puStack_40 = &UNK_110917158;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c297280(uVar1,param_2,&puStack_58,uVar2,1);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106218d38; end: 106218e13; -[SCDisplayLayerRenderingModule renderSampleBuffer:completion:] */

void FUN_106218d38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c111a60();
  iVar1 = (int)uVar2;
  _CMSampleBufferIsValid();
  if (iVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106218e14;
    puStack_50 = &UNK_11084a9e8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f8240(uVar2,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106218e14; end: 106219017;  */

void FUN_106218e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(long *)(*(long *)(param_5 + 0x20) + 8) != 0) {
    lVar2 = *(long *)(*(long *)(param_5 + 0x20) + 0x10);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010bfb2f20(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x10));
    }
    func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_5 + 0x20) + 8));
    uVar3 = *(ulong *)(*(long *)(param_5 + 0x20) + 8);
    uVar5 = param_1;
    uVar6 = param_2;
    uVar8 = param_3;
    uVar9 = param_4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf20c00();
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar5,uVar6,uVar8,uVar9);
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 8);
      func_0x00010c262ca0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_5 + 0x20) + 8));
      _objc_release(uVar5);
    }
    func_0x00010c0ed100(*(undefined8 *)(param_5 + 0x28));
    func_0x00010c1d6440(*(undefined8 *)(param_5 + 0x20));
    func_0x00010bfad580(*(undefined8 *)(param_5 + 0x28));
    func_0x00010c19bc40(*(undefined8 *)(param_5 + 0x20));
    uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x10);
    func_0x00010c111a60(*(undefined8 *)(param_5 + 0x28));
    func_0x00010bf963c0(uVar5);
    if (*(long *)(param_5 + 0x30) != 0) {
      (**(code **)(*(long *)(param_5 + 0x30) + 0x10))();
    }
    if (lRam00000001136c34a0 != -1) {
      func_0x00010002a2fc(0x1136c34a0,&PTR___NSConcreteGlobalBlock_110917188);
    }
    if ((bRam00000001136c3498 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_5 + 0x28);
      func_0x00010c149580();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b6ca8;
      func_0x00010c0928c0(PTR_PTR_1126b6ca8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      _objc_release(uVar6);
      ppuVar1 = &PTR____CFConstantStringClassReference_110dcea98;
      if ((int)uVar5 == 0) {
        ppuVar1 = (undefined **)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_5 + 0x20) + 8),
                 PTR_s_setAccessibilityIdentifier__112635e10,ppuVar1);
      return;
    }
  }
  return;
}



/* Entry: 106219018; end: 10621901b; -[SCDisplayLayerRenderingModule setTextureOrientation:] */

void FUN_106219018(void)

{
  return;
}



/* Entry: 10621901c; end: 10621901f; -[SCDisplayLayerRenderingModule setTextureSize:] */

void FUN_10621901c(void)

{
  return;
}



/* Entry: 106219020; end: 1062190a7; -[SCDisplayLayerRenderingModule createDisplayLayerWithOrientation:] */

void FUN_106219020(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c8f60;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar3);
  func_0x00010c2218a0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1d6440(param_1);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1062190a8; end: 1062190af; -[SCDisplayLayerRenderingModule orientation] */

undefined8 FUN_1062190a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062190b0; end: 1062190b7; -[SCDisplayLayerRenderingModule fillMode] */

undefined8 FUN_1062190b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1062190b8; end: 10621915f; -[SCDisplayLayerRenderingModule .cxx_destruct] */

void FUN_1062190b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106219160; end: 10621916b; +[SCDisplayLayerView layerClass] */

void FUN_106219160(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___AVSampleBufferDisplayLayer_1126b6c98);
  return;
}



/* Entry: 10621916c; end: 1062191d7; -[SCDisplayLayerView layoutSubviews] */

void FUN_10621916c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1062191d8; end: 1062191db; -[SCViewfinderNullObservationPipeline addObservationModule:] */

void FUN_1062191d8(void)

{
  return;
}



/* Entry: 1062191dc; end: 1062191df; -[SCViewfinderNullObservationPipeline removeObservationModule:] */

void FUN_1062191dc(void)

{
  return;
}



/* Entry: 1062191e0; end: 1062191e3; -[SCViewfinderNullObservationPipeline observeSampleBuffer:] */

void FUN_1062191e0(void)

{
  return;
}



/* Entry: 1062191e4; end: 1062191e7; -[SCViewfinderNullProcessingPipeline addProcessingModule:] */

void FUN_1062191e4(void)

{
  return;
}



/* Entry: 1062191e8; end: 1062191eb; -[SCViewfinderNullProcessingPipeline removeProcessingModule:] */

void FUN_1062191e8(void)

{
  return;
}



/* Entry: 1062191ec; end: 106219213; -[SCViewfinderNullProcessingPipeline processSampleBuffer:] */

void FUN_1062191ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106219214; end: 10621921b; -[SCViewfinderNullProcessingPipeline createImageProcessor] */

undefined8 FUN_106219214(void)

{
  return 0;
}



/* Entry: 10621921c; end: 10621921f; -[SCViewfinderNullRenderingPipeline addRenderingModule:] */

void FUN_10621921c(void)

{
  return;
}



/* Entry: 106219220; end: 106219223; -[SCViewfinderNullRenderingPipeline removeRenderingModule:] */

void FUN_106219220(void)

{
  return;
}



/* Entry: 106219224; end: 106219227; -[SCViewfinderNullRenderingPipeline renderSampleBuffer:] */

void FUN_106219224(void)

{
  return;
}



/* Entry: 106219228; end: 10621923f; -[SCViewfinderNullRenderingPipeline startupDelegate] */

void FUN_106219228(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106219240; end: 10621924b; -[SCViewfinderNullRenderingPipeline setStartupDelegate:] */

void FUN_106219240(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10621924c; end: 106219253; -[SCViewfinderNullRenderingPipeline renderModuleReadyFuture] */

undefined8 FUN_10621924c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106219254; end: 10621927f; -[SCViewfinderNullRenderingPipeline .cxx_destruct] */

void FUN_106219254(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106219280; end: 106219287; -[SCViewfinderNullDataSourceCoordinator activeDataSource] */

undefined8 FUN_106219280(void)

{
  return 0;
}



/* Entry: 106219288; end: 10621928b; -[SCViewfinderNullDataSourceCoordinator addDataSource:] */

void FUN_106219288(void)

{
  return;
}



/* Entry: 10621928c; end: 10621928f; -[SCViewfinderNullDataSourceCoordinator removeDataSource:] */

void FUN_10621928c(void)

{
  return;
}



/* Entry: 106219290; end: 106219293; -[SCViewfinderNullDataSourceCoordinator dataSource:didReceiveSampleBuffer:] */

void FUN_106219290(void)

{
  return;
}



/* Entry: 106219294; end: 106219297; -[SCViewfinderNullDataSourceCoordinator dataSource:didReceiveAudioSampleBuffer:] */

void FUN_106219294(void)

{
  return;
}



/* Entry: 106219298; end: 10621929b; -[SCViewfinderNullDataSourceCoordinator dataSourceDidStart:] */

void FUN_106219298(void)

{
  return;
}



/* Entry: 10621929c; end: 10621929f; -[SCViewfinderNullDataSourceCoordinator dataSourceDidStop:] */

void FUN_10621929c(void)

{
  return;
}



/* Entry: 1062192a0; end: 1062192b7; -[SCViewfinderNullDataSourceCoordinator delegate] */

void FUN_1062192a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062192b8; end: 1062192c3; -[SCViewfinderNullDataSourceCoordinator setDelegate:] */

void FUN_1062192b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1062192c4; end: 1062192cb; -[SCViewfinderNullDataSourceCoordinator .cxx_destruct] */

void FUN_1062192c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1062192cc; end: 1062192cf; -[SCViewfinderNullUIHandler setBlurEnabled:] */

void FUN_1062192cc(void)

{
  return;
}



/* Entry: 1062192d0; end: 1062192d3; -[SCViewfinderNullUIHandler addRenderView:] */

void FUN_1062192d0(void)

{
  return;
}



/* Entry: 1062192d4; end: 1062192db; -[SCViewfinderNullUIHandler overlayView] */

undefined8 FUN_1062192d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062192dc; end: 1062192e7; -[SCViewfinderNullUIHandler .cxx_destruct] */

void FUN_1062192dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062192e8; end: 106219327;  */

void FUN_1062192e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106219328; end: 1062193cf;  */

void FUN_106219328(void)

{
  _objc_opt_new(PTR_PTR_1126c8f68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062193d0; end: 10621944f;  */

void FUN_1062193d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf24e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106219450; end: 106219493; -[SCViewfinderEntryPoint _createRenderTarget] */

void FUN_106219450(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0001006b8bfc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106219494; end: 10621950f; -[SCViewfinderEntryPoint _createUIHandler] */

void FUN_106219494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8fb0;
  _objc_alloc(PTR_PTR_1126c8fb0);
  func_0x0001006b8bfc(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e180(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106219510; end: 106219547;  */

void FUN_106219510(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106219548; end: 1062195e7;  */

void FUN_106219548(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c252300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5d80();
    _objc_release(uVar2);
    lVar3 = lVar1;
    func_0x00010bdf2520(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c252300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf74400();
    _objc_release(uVar2);
    func_0x00010befaf00(*(undefined8 *)(param_1 + 0x20),param_2,lVar3);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062195e8; end: 1062196a3; -[SCViewfinderEntryPoint _createTouchController] */

void FUN_1062195e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c8fe0;
  _objc_alloc(PTR_PTR_1126c8fe0);
  uVar2 = param_1;
  func_0x0001006b8bfc(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006b8bfc(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfc1b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017a60(puVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062196a4; end: 106219767; -[SCViewfinderEntryPoint _createRenderingModule] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062196a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_1127438e0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c130840();
  _objc_release(param_1);
  if (lVar1 == 3) {
    puVar3 = PTR_PTR_1126c8ff0;
    _objc_alloc(PTR_PTR_1126c8ff0);
    puVar2 = puVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027f80(puVar3,param_2,puVar2,0);
  }
  else {
    if (lVar1 != 1) {
      puVar3 = (undefined *)0x0;
      goto LAB_106219758;
    }
    puVar3 = PTR_PTR_1126c8fe8;
    _objc_alloc(PTR_PTR_1126c8fe8);
    puVar2 = puVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027f60(puVar3,param_2,puVar2);
  }
  _objc_release(puVar2);
LAB_106219758:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106219768; end: 10621981b; -[SCViewfinderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106219768(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112743914,0);
  _objc_storeStrong(param_1 + _DAT_112743910,0);
  _objc_storeStrong(param_1 + _DAT_11274390c,0);
  _objc_destroyWeak(param_1 + _DAT_1127438f0);
  _objc_destroyWeak(param_1 + _DAT_112743908);
  _objc_destroyWeak(param_1 + _DAT_112743904);
  _objc_destroyWeak(param_1 + _DAT_112743900);
  _objc_destroyWeak(param_1 + _DAT_1127438f4);
  _objc_destroyWeak(param_1 + _DAT_1127438e0);
  _objc_destroyWeak(param_1 + _DAT_1127438fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127438f8,0);
  return;
}



/* Entry: 10621981c; end: 10621989f; -[SCMetalRenderingModule initWithMainQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10621981c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0828;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112743918;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062198a0; end: 1062198a7; -[SCMetalRenderingModule renderingModuleType] */

undefined8 FUN_1062198a0(void)

{
  return 1;
}



/* Entry: 1062198a8; end: 1062199db; -[SCMetalRenderingModule displayLayerContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062198a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29e080(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10621997c;
  puStack_40 = &UNK_110917158;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112743918);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c297280(lVar2,param_2,&puStack_58,uVar3,1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1062199dc; end: 106219a6f; -[SCMetalRenderingModule renderSampleBuffer:completion:] */

void FUN_1062199dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106219a70;
  puStack_40 = &UNK_110842508;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c12f5a0(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106219a70; end: 106219a83;  */

void FUN_106219a70(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106219a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106219a84; end: 106219acb; -[SCMetalRenderingModule setTextureOrientation:] */

void FUN_106219a84(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  uVar1 = 1;
  if (param_3 != 1) {
    if (param_3 != 3) {
      return;
    }
    uVar1 = 0;
  }
  puStack_18 = PTR_PTR_1126f0828;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setSampleBufferOrientation__11265af00,uVar1);
  return;
}



/* Entry: 106219acc; end: 106219acf; -[SCMetalRenderingModule setTextureSize:] */

void FUN_106219acc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28af10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateTextureSizeIfNecessary__1126805e8);
  return;
}



/* Entry: 106219ad0; end: 106219b5f; -[SCMetalRenderingModule createDisplayLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106219ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c8ff8;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274391c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9880(param_1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c29e080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106219b60; end: 106219bbf; -[SCMetalRenderingModule viewPromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106219b60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112743920;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106219bc0; end: 106219c0f; -[SCMetalRenderingModule .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106219bc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112743918,0);
  _objc_storeStrong(param_1 + _DAT_112743920,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274391c,0);
  return;
}



/* Entry: 106219c10; end: 106219ccf; -[SCMetalView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106219c10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f0830;
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(uVar4,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc0a0();
    func_0x00010c19f5e0(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5c20();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112743924) = uVar4;
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106219cd0; end: 106219d67; -[SCMetalView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106219cd0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0830;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_112743924;
  dVar2 = *(double *)(param_5 + lVar1);
  func_0x00010bf20c00(param_5);
  dVar3 = *(double *)(param_5 + lVar1);
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191800(param_3 * dVar2,dVar3 * param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 106219d68; end: 106219d73; +[SCMetalView layerClass] */

void FUN_106219d68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAMetalLayer_1126c9000);
  return;
}



/* Entry: 106219d74; end: 106219d77; -[SCViewfinderAudioProcessingPipelineImpl addProcessingModule:] */

void FUN_106219d74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addModule__11259c118);
  return;
}



/* Entry: 106219d78; end: 106219d7b; -[SCViewfinderAudioProcessingPipelineImpl removeProcessingModule:] */

void FUN_106219d78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeModule__112628e98);
  return;
}



/* Entry: 106219d7c; end: 106219e6b; -[SCViewfinderAudioProcessingPipelineImpl processAudioSampleBuffer:] */

void FUN_106219d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  pcStack_48 = FUN_106219e6c;
  uStack_40 = 0x106219e7c;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bfb47a0(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106219e6c; end: 106219e83;  */

void FUN_106219e6c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106219e84; end: 106219ecf;  */

void FUN_106219e84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c114560(param_2,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106219ed0; end: 106219ed3; -[SCViewfinderImageProcessingPipelineImpl addProcessingModule:] */

void FUN_106219ed0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addModule__11259c118);
  return;
}



/* Entry: 106219ed4; end: 106219ed7; -[SCViewfinderImageProcessingPipelineImpl removeProcessingModule:] */

void FUN_106219ed4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeModule__112628e98);
  return;
}



/* Entry: 106219ed8; end: 106219faf; -[SCViewfinderImageProcessingPipelineImpl processPixelBufferToImage:orientation:timestamp:] */

void FUN_106219ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106219fb0;
  uStack_30 = 0x106219fc0;
  uStack_28 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106219fc8;
  puStack_88 = &UNK_110917508;
  uStack_60 = param_5[1];
  uStack_68 = *param_5;
  uStack_58 = param_5[2];
  uStack_78 = param_3;
  uStack_70 = param_4;
  puStack_48 = puStack_80;
  func_0x00010bfb47a0(param_1,param_2,&puStack_a0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106219fb0; end: 106219fc7;  */

void FUN_106219fb0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106219fc8; end: 10621a02b;  */

void FUN_106219fc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c115140(param_2,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  return;
}



/* Entry: 10621a02c; end: 10621a02f; -[SCViewfinderObservationPipelineImpl addObservationModule:] */

void FUN_10621a02c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addModule__11259c118);
  return;
}



/* Entry: 10621a030; end: 10621a033; -[SCViewfinderObservationPipelineImpl removeObservationModule:] */

void FUN_10621a030(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeModule__112628e98);
  return;
}



/* Entry: 10621a034; end: 10621a12b;  */

void FUN_10621a034(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _CACurrentMediaTime();
  uVar1 = param_3;
  func_0x00010c06c6e0();
  if ((int)uVar1 == 0) {
    func_0x00010c0e0fe0(param_3);
    func_0x00010be610e0(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    func_0x00010c1494c0(*(undefined8 *)(param_2 + 0x20));
    _CFRetain();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar1);
    _objc_retain(param_3);
    func_0x00010c0e1000(param_3);
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10621a12c; end: 10621a15b;  */

void FUN_10621a12c(long param_1)

{
  func_0x00010c1494c0(*(undefined8 *)(param_1 + 0x20));
  _CFRelease();
                    /* WARNING: Could not recover jumptable at 0x00010be610f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             PTR_s__moduleObservationComplete_modul_112575dd8,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10621a15c; end: 10621a197; -[SCViewfinderObservationPipelineImpl _moduleObservationComplete:module:] */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_10621a15c(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  _CACurrentMediaTime();
  if (lRam00000001136c34a8 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110917568;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110917568);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_110917568);
  func_0x000107c61180();
  (*pcVar3)(0x1136c34a8,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10621a198; end: 10621a1ef;  */

void FUN_10621a198(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10621a1f0; end: 10621a24b; -[SCViewfinderPipelineBase removeModule:] */

void FUN_10621a1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10621a24c; end: 10621a257; -[SCViewfinderPipelineBase .cxx_destruct] */

void FUN_10621a24c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10621a258; end: 10621a27b; -[SCViewfinderPipelineCoordinator dataSource:didReceiveAudioSampleBuffer:] */

void FUN_10621a258(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c114560(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10621a27c; end: 10621a27f; -[SCViewfinderPipelineCoordinator dataSourceDidStop:] */

void FUN_10621a27c(void)

{
  return;
}



/* Entry: 10621a280; end: 10621a283; -[SCViewfinderPipelineCoordinator didRemoveRenderingModuleOfType:] */

void FUN_10621a280(void)

{
  return;
}



/* Entry: 10621a284; end: 10621a2cb; -[SCViewfinderPipelineCoordinator .cxx_destruct] */

void FUN_10621a284(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621a2cc; end: 10621a2cf; -[SCViewfinderProcessingPipelineImpl addProcessingModule:] */

void FUN_10621a2cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addModule__11259c118);
  return;
}



/* Entry: 10621a2d0; end: 10621a2d3; -[SCViewfinderProcessingPipelineImpl removeProcessingModule:] */

void FUN_10621a2d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeModule__112628e98);
  return;
}



/* Entry: 10621a2d4; end: 10621a393; -[SCViewfinderProcessingPipelineImpl createImageProcessor] */

void FUN_10621a2d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126c9008;
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10621a354;
  puStack_30 = &UNK_110917588;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00010bfb47a0(param_1,param_2,&puStack_48);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10621a394; end: 10621a3ab;  */

void FUN_10621a394(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10621a3ac; end: 10621a447;  */

void FUN_10621a3ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c115360(param_2,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10621a448; end: 10621a44f;  */

void FUN_10621a448(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb32b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_flushTextureCache_1125ca650);
  return;
}



/* Entry: 10621a450; end: 10621a4ab; -[SCViewfinderRenderingPipelineImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10621a450(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112743948;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f0848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10621a4ac; end: 10621a5ab; -[SCViewfinderRenderingPipelineImpl renderModuleReadyFuture] */

void FUN_10621a4ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010c0896e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10621a568;
  puStack_30 = &UNK_1108de198;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf85ae0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10621a5ac; end: 10621a657; -[SCViewfinderRenderingPipelineImpl removeRenderingModule:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10621a5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4b8c0();
  if ((int)lVar1 != 0) {
    func_0x00010c12d1e0(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130840(param_3);
    func_0x00010bf79a80(lVar1);
    _objc_release(lVar1);
    lVar1 = (long)_DAT_112743944;
    _os_unfair_lock_lock(param_1 + lVar1);
    _objc_storeWeak(param_1 + _DAT_11274394c,param_3);
    _os_unfair_lock_unlock(param_1 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


