/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108942678; end: 108942687; -[TCVideoView onFrameRendered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108942678(long param_1)

{
  *(undefined4 *)(param_1 + _DAT_112777a6c) = 0;
  return;
}



/* Entry: 108942688; end: 1089427df; -[TCVideoView onFrameDropped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108942688(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  iVar1 = *(int *)(param_1 + _DAT_112777a6c) + 1;
  *(int *)(param_1 + _DAT_112777a6c) = iVar1;
  if (iVar1 == 0x3c) {
    lVar5 = (long)_DAT_112777a64;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bdc3520(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08fac0(uVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
              (auStack_48,uVar2,uVar3);
    uStack_88 = 0;
    uStack_80 = 0;
    ppuStack_98 = &PTR_DAT_1107eac58;
    uStack_90 = 0;
    uStack_78 = 0x70;
    func_0x000107c278b8(auStack_b0,&DAT_10f6389e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c8,auStack_48);
    pppuVar4 = &ppuStack_98;
    FUN_1089427e0(pppuVar4,auStack_b0,auStack_c8);
    func_0x000108942850(auStack_70,pppuVar4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    pppuVar4 = &ppuStack_98;
    func_0x000104c03ee4();
    FUN_1089a3c0c();
    (**(code **)(**pppuVar4 + 8))(*pppuVar4,auStack_70,1);
    func_0x000104c03ee4(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  return;
}



/* Entry: 1089427e0; end: 108942813;  */

long FUN_1089427e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c27940(param_1 + 8);
  func_0x000107c27940(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 108942814; end: 1089428b7; -[TCVideoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108942814(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112777a68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777a64,0);
  return;
}



/* Entry: 1089428b8; end: 1089428bf;  */

void FUN_1089428b8(void)

{
  return;
}



/* Entry: 1089428c0; end: 108942983; -[TCVideoViewMetal initWithFrame:rendererController:videoViewListener:] */

undefined1 *
FUN_1089428c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 auStack_60 [2];
  
  puVar1 = auStack_60;
  func_0x000108943eb8();
  _objc_retain(param_8);
  func_0x000108943e94();
  auStack_60[0] = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,auStack_60,
                      PTR_s_initWithFrame_typeName_videoView_11253c1c0,
                      &PTR____CFConstantStringClassReference_110ee7878,param_8);
  func_0x00010bfef500();
  func_0x000108943eb0();
  func_0x000108943e74();
  return (undefined1 *)puVar1;
}



/* Entry: 108942984; end: 108942d7b; -[TCVideoViewMetal initSelf:videoViewListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108942984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_68;
  
  func_0x000108943eb8();
  _objc_retain(param_4);
  if (param_1 == 0) {
LAB_108942ca8:
    func_0x000108943f04();
    goto LAB_108942cb0;
  }
  lVar7 = (long)_DAT_112777a70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_3;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + _DAT_112777a74,param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777a78);
  *(undefined8 *)(param_1 + _DAT_112777a78) = 0;
  _objc_release(uVar1);
  *(undefined4 *)(param_1 + _DAT_112777a7c) = 0xffffffff;
  uVar1 = 3;
  _dispatch_semaphore_create();
  func_0x000108943e54();
  _MTLCreateSystemDefaultDevice();
  lVar7 = (long)_DAT_112777a84;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar1;
  func_0x000108943e84(uVar6);
  if (*(long *)(param_1 + lVar7) != 0) {
    func_0x00010c0d8720();
    func_0x000108943e54();
    lVar2 = *(long *)(param_1 + lVar7);
    lStack_68 = 0;
    FUN_108941248(lVar2,&lStack_68);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lStack_68;
    _objc_retain(lStack_68);
    if ((lVar10 == 0) && (lVar2 != 0)) {
      lVar8 = (long)_DAT_112777a8c;
      _objc_retain(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar8);
      *(long *)(param_1 + lVar8) = lVar2;
      _objc_release(uVar1);
      puVar3 = PTR__OBJC_CLASS___MTKView_1126d55c8;
      _objc_alloc();
      func_0x00010bf20c00(param_1);
      func_0x00010c013de0();
      lVar9 = (long)_DAT_112777a90;
      uVar1 = *(undefined8 *)(param_1 + lVar9);
      *(undefined **)(param_1 + lVar9) = puVar3;
      func_0x000108943e84(uVar1);
      if (*(long *)(param_1 + lVar9) == 0) goto LAB_108942b2c;
      func_0x00010c1dffe0();
      func_0x00010c17c800(0x3fe0000000000000,0x3fe0000000000000,0x3fe0000000000000,
                          0x3ff0000000000000,*(undefined8 *)(param_1 + lVar9));
      func_0x00010c17e980(*(undefined8 *)(param_1 + lVar9));
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      _CVMetalTextureCacheCreate
                (uVar1,0,*(undefined8 *)(param_1 + lVar7),0,param_1 + _DAT_112777a94);
      if ((int)uVar1 != 0) goto LAB_108942b2c;
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9));
      func_0x00010befbb60(param_1);
      func_0x00010c15cda0(param_1);
      func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c18c700(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c0d8900();
      func_0x00010c0d8900(*(undefined8 *)(param_1 + lVar8));
      puVar3 = PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240;
      _objc_alloc_init(PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240);
      func_0x00010c1b71a0();
      func_0x00010c220f80(puVar3);
      func_0x00010c19f060(puVar3);
      func_0x00010bf41240(*(undefined8 *)(param_1 + lVar9));
      puVar4 = puVar3;
      func_0x00010bf40cc0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc0a0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c18be00(puVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0d8ec0();
      _objc_retain(0);
      lVar10 = (long)_DAT_112777a98;
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      *(undefined8 *)(param_1 + lVar10) = uVar1;
      _objc_release(uVar6);
      if (*(long *)(param_1 + lVar10) != 0) {
        func_0x00010c0d85c0(*(undefined8 *)(param_1 + lVar7));
        func_0x000108943e54();
        _objc_release(0);
        func_0x000108943e7c();
        func_0x000108943ea0();
        func_0x000108943f20();
        func_0x000108943ed0();
        goto LAB_108942ca8;
      }
      _objc_release(0);
      func_0x000108943e7c();
      func_0x000108943ea0();
      func_0x000108943f20();
    }
    else {
LAB_108942b2c:
      func_0x000108943ed0();
      lVar2 = lVar10;
    }
    _objc_release(lVar2);
  }
  param_1 = 0;
LAB_108942cb0:
  func_0x000108943e8c();
  func_0x000108943eb0();
  func_0x000108943e74();
  return param_1;
}



/* Entry: 108942d7c; end: 108942df3; -[TCVideoViewMetal dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108942d7c(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010c255780();
  if (*(long *)(param_1 + _DAT_112777a94) != 0) {
    _CFRelease();
  }
  func_0x000108943e94();
  alStack_30[0] = param_1;
  _objc_msgSendSuper2(alStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108942df4; end: 108942ea3; -[TCVideoViewMetal startWithSink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108942df4(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x000108943e64();
  lVar6 = (long)_DAT_112777aa0;
  uVar5 = *(undefined8 *)PTR__CGSizeZero_110347620;
  ((undefined8 *)(unaff_x20 + lVar6))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(unaff_x20 + lVar6) = uVar5;
  lVar6 = (long)_DAT_112777a78;
  lVar1 = (long)_DAT_112777a7c;
  if ((*(int *)(unaff_x20 + lVar1) == -1) ||
     (uVar4 = unaff_x19, func_0x00010c0720c0(), (uVar4 & 1) == 0)) {
    func_0x000108943f04();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
    *(ulong *)(unaff_x20 + lVar6) = unaff_x19;
    _objc_release(uVar5);
    iVar3 = (int)*(undefined8 *)(unaff_x20 + _DAT_112777a70);
    func_0x00010c250360();
    *(int *)(unaff_x20 + lVar1) = iVar3;
    bVar2 = iVar3 != -1;
  }
  else {
    bVar2 = true;
  }
  func_0x000108943e74();
  return bVar2;
}



/* Entry: 108942ea4; end: 108942f13; -[TCVideoViewMetal stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108942ea4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112777aa0;
  uVar1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  ((undefined8 *)(param_1 + lVar2))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(param_1 + lVar2) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777a78);
  *(undefined8 *)(param_1 + _DAT_112777a78) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112777a7c;
  if (*(int *)(param_1 + lVar2) != -1) {
    func_0x00010c2567c0(*(undefined8 *)(param_1 + _DAT_112777a70));
    *(undefined4 *)(param_1 + lVar2) = 0xffffffff;
  }
  return;
}



/* Entry: 108942f14; end: 108942f3b; -[TCVideoViewMetal sinkId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108942f14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777a78);
  func_0x000108943f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108942f3c; end: 108942f57; -[TCVideoViewMetal rendererId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108942f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,
             *(undefined4 *)(param_1 + _DAT_112777a7c));
  return;
}



/* Entry: 108942f58; end: 108943083; -[TCVideoViewMetal uploadImageBuffer:width:height:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108942f58(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  long alStack_78 [2];
  long alStack_68 [2];
  undefined8 uStack_58;
  long alStack_50 [2];
  
  if (param_3 == 0) {
    func_0x000108943e94();
    alStack_50[0] = param_1;
    func_0x000108943ee0();
    plVar2 = alStack_50;
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CVMetalTextureCacheCreateTextureFromImage
              (uVar1,*(undefined8 *)(param_1 + _DAT_112777a94),param_3,0,0x50,(long)param_4,
               (long)param_5,0,&uStack_58);
    if ((int)uVar1 == 0) {
      _CVMetalTextureGetTexture();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108943e94();
      alStack_78[0] = param_1;
      _objc_msgSendSuper2(alStack_78,PTR_s_onFrameRendered_11253c1d0);
      lVar3 = (long)_DAT_112777aa4;
      __ZNSt3__15mutex4lockEv(param_1 + lVar3);
      uStack_90 = uStack_58;
      uStack_88 = 0;
      iStack_80 = param_4;
      iStack_7c = param_5;
      FUN_108943084(param_1 + _DAT_112777aa8,auStack_98);
      FUN_108943110(auStack_98);
      __ZNSt3__15mutex6unlockEv(param_1 + lVar3);
      return;
    }
    func_0x000108943e94();
    alStack_68[0] = param_1;
    func_0x000108943ee0();
    plVar2 = alStack_68;
  }
  _objc_msgSendSuper2(plVar2);
  return;
}



/* Entry: 108943084; end: 10894310f;  */

undefined8 * FUN_108943084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    _CVBufferRelease(param_1[1]);
    puVar1 = param_2;
    func_0x000108943e38();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *param_1;
    *param_1 = puVar1;
    func_0x000108943e84(uVar2);
    puVar1 = param_2 + 2;
    func_0x000108943e38();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1[2];
    param_1[2] = puVar1;
    func_0x000108943e84(uVar2);
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_1[1] = uVar2;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  }
  return param_1;
}



/* Entry: 108943110; end: 108943163;  */

undefined8 * FUN_108943110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  _CVBufferRelease(param_1[1]);
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[2]);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 108943164; end: 1089433df; -[TCVideoViewMetal uploadYUVTextureWithYPlaneAddress:yBytesPerRow:uvPlaneAddress:uvBytesPerRow:width:height:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108943164(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w6;
  int in_w7;
  int iVar6;
  long lVar7;
  long lVar8;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  int iStack_74;
  
  iVar2 = _DAT_112777ab4;
  lVar7 = (long)_DAT_112777aac;
  lVar1 = (long)_DAT_112777ab0;
  if (((*(long *)(param_1 + lVar7) == 0) || (*(int *)(param_1 + lVar1) != in_w6)) ||
     (*(int *)(param_1 + _DAT_112777ab4) != in_w7)) {
    *(int *)(param_1 + lVar1) = in_w6;
    *(int *)(param_1 + iVar2) = in_w7;
    puVar3 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
    func_0x00010c26ce40(PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220,param_2,10,
                        (long)*(int *)(param_1 + lVar1),(long)in_w7,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    func_0x000108943e84(uVar4);
    func_0x000108943f14(*(undefined8 *)(param_1 + lVar7));
  }
  lVar8 = (long)_DAT_112777a84;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c0d91c0();
  func_0x000108943f34((long)*(int *)(param_1 + lVar1));
  func_0x00010c1310c0();
  iVar2 = _DAT_112777ac0;
  lVar7 = (long)_DAT_112777ab8;
  lVar1 = (long)_DAT_112777abc;
  if (*(long *)(param_1 + lVar7) == 0) {
    iVar6 = in_w6 / 2;
  }
  else {
    iVar6 = in_w6 / 2;
    if ((*(int *)(param_1 + lVar1) == in_w6 / 2) &&
       (iVar6 = *(int *)(param_1 + lVar1), *(int *)(param_1 + _DAT_112777ac0) == in_w7 / 2))
    goto LAB_108943314;
  }
  *(int *)(param_1 + lVar1) = iVar6;
  *(int *)(param_1 + iVar2) = in_w7 / 2;
  puVar3 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
  func_0x00010c26ce40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  func_0x000108943e84(uVar5);
  func_0x000108943f14(*(undefined8 *)(param_1 + lVar7));
LAB_108943314:
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c0d91c0();
  func_0x000108943f34((long)*(int *)(param_1 + lVar1));
  func_0x00010c1310c0();
  func_0x000108943e94();
  alStack_a0[0] = param_1;
  _objc_msgSendSuper2(alStack_a0,PTR_s_onFrameRendered_11253c1d0);
  lVar7 = (long)_DAT_112777aa4;
  __ZNSt3__15mutex4lockEv(param_1 + lVar7);
  uStack_88 = 0;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  iStack_78 = in_w6;
  iStack_74 = in_w7;
  FUN_108943084(param_1 + _DAT_112777aa8,&uStack_90);
  FUN_108943110(&uStack_90);
  __ZNSt3__15mutex6unlockEv(param_1 + lVar7);
  return;
}



/* Entry: 1089433e0; end: 1089435c7; -[TCVideoViewMetal onFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1089433e0(int param_1)

{
  double *pdVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long alStack_80 [2];
  long alStack_70 [2];
  
  plVar4 = alStack_80;
  func_0x000108943e64();
  func_0x000108943ea8();
  if (param_1 == 0) {
    plVar4 = alStack_70;
  }
  else {
    func_0x000108943ea8();
    pdVar1 = (double *)(unaff_x20 + _DAT_112777aa0);
    if ((*pdVar1 != (double)param_1) || (func_0x000108943ec0(), pdVar1[1] != (double)param_1)) {
      func_0x000108943ea8();
      iVar2 = param_1;
      func_0x000108943ec0();
      *pdVar1 = (double)param_1;
      pdVar1[1] = (double)iVar2;
      func_0x000108943eec();
      func_0x00010c29bc80(*pdVar1,pdVar1[1]);
      func_0x000108943e8c();
    }
    lVar3 = unaff_x19;
    func_0x00010bfb5800();
    if ((lVar3 == 9) && (lVar3 = unaff_x19, func_0x00010c0d5780(), lVar3 != 0)) {
      func_0x00010c0d5780();
      func_0x000108943ea8();
      func_0x000108943ec0();
      func_0x00010c28df80();
      goto LAB_108943578;
    }
    func_0x00010bfb5800();
    if (unaff_x19 == 5) {
      func_0x00010c0fdfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c25cc00();
      func_0x00010c0fdfe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c25cc20();
      func_0x000108943ea8();
      func_0x000108943ec0();
      func_0x00010c28ebe0();
      func_0x000108943e7c();
      func_0x000108943e8c();
      goto LAB_108943578;
    }
  }
  func_0x000108943e94();
  *plVar4 = unaff_x20;
  plVar4[1] = extraout_x8;
  func_0x000108943ee0();
  _objc_msgSendSuper2();
LAB_108943578:
  func_0x000108943e74();
  return;
}



/* Entry: 1089435c8; end: 1089437bb; -[TCVideoViewMetal onNativeFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1089435c8(int param_1)

{
  double *pdVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108943e64();
  if (unaff_x19 == 0) {
    func_0x000108943e94();
    func_0x000108943ee0();
    _objc_msgSendSuper2(&stack0xffffffffffffff90);
    goto LAB_108943770;
  }
  func_0x000108943ea8();
  iVar2 = param_1;
  func_0x000108943ec0();
  if (param_1 == 0) {
    func_0x000108943e94();
    func_0x000108943ee0();
    _objc_msgSendSuper2(&stack0xffffffffffffff80);
    goto LAB_108943770;
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112777aa0);
  if ((*pdVar1 != (double)param_1) || (pdVar1[1] != (double)iVar2)) {
    *pdVar1 = (double)param_1;
    pdVar1[1] = (double)iVar2;
    func_0x000108943eec();
    func_0x00010c29bc80(*pdVar1,pdVar1[1]);
    func_0x000108943e7c();
  }
  func_0x00010c06aea0();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x19 == 0) {
    func_0x000108943e94();
    func_0x000108943ee0();
    _objc_msgSendSuper2(&stack0xffffffffffffff70);
  }
  else {
    func_0x000108943ed8();
    _CVPixelBufferGetPixelFormatType();
    if ((int)unaff_x19 != 0x34323066) {
      func_0x000108943ed8();
      _CVPixelBufferGetPixelFormatType();
      if ((int)unaff_x19 != 0x34323076) {
        func_0x000108943ed8();
        func_0x00010c28df80();
        goto LAB_10894376c;
      }
    }
    func_0x000108943ed8();
    _CVPixelBufferLockBaseAddress();
    _CVPixelBufferGetBaseAddressOfPlane(unaff_x19,0);
    _CVPixelBufferGetBytesPerRowOfPlane(unaff_x19,0);
    _CVPixelBufferGetBaseAddressOfPlane(unaff_x19,1);
    _CVPixelBufferGetBytesPerRowOfPlane(unaff_x19,1);
    func_0x00010c28ebe0();
    _CVPixelBufferUnlockBaseAddress(unaff_x19,1);
  }
LAB_10894376c:
  func_0x000108943e7c();
LAB_108943770:
  func_0x000108943e74();
  return;
}



/* Entry: 1089437bc; end: 1089437bf; -[TCVideoViewMetal setSaturationBoost:] */

void FUN_1089437bc(void)

{
  return;
}



/* Entry: 1089437c0; end: 108943817; -[TCVideoViewMetal drawInMTKView:] */

void FUN_1089437c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000108943eb8();
  _objc_autoreleasePoolPush();
  func_0x00010c12f580(param_1,param_2,param_3);
  _objc_autoreleasePoolPop(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108943818; end: 108943cd7; -[TCVideoViewMetal render:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108943818(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_99;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  int iStack_80;
  int iStack_7c;
  
  lVar8 = (long)_DAT_112777a80;
  lVar7 = *(long *)(param_5 + lVar8);
  uVar3 = 0;
  _dispatch_time(0,50000000);
  _dispatch_semaphore_wait(lVar7,uVar3);
  if (lVar7 == 0) {
    lStack_d0 = param_5 + _DAT_112777aa4;
    plStack_c8 = (long *)CONCAT71(plStack_c8._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    lVar10 = param_5 + _DAT_112777aa8;
    lVar4 = lVar10;
    func_0x000108943e38();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar10 + 0x10;
    lStack_98 = lVar4;
    func_0x000108943e38();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = *(undefined8 *)(lVar10 + 8);
    *(undefined8 *)(lVar10 + 8) = 0;
    iVar1 = *(int *)(lVar10 + 0x18);
    iVar2 = *(int *)(lVar10 + 0x1c);
    lStack_88 = lVar7;
    iStack_80 = iVar1;
    iStack_7c = iVar2;
    func_0x000107c280c4(&lStack_d0);
    func_0x000107c2798c(&lStack_d0);
    FUN_108943cd8(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      _dispatch_semaphore_signal(*(undefined8 *)(param_5 + lVar8));
    }
    else {
      func_0x000108943cf8(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar3 = *(undefined8 *)(param_5 + _DAT_112777a84);
      uStack_99 = lVar7 == 0;
      func_0x00010c0d85a0();
      uVar5 = *(undefined8 *)(param_5 + _DAT_112777a88);
      func_0x00010bf41ae0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b71a0();
      plStack_c8 = &lStack_d0;
      lStack_d0 = 0;
      uStack_c0 = 0x3032000000;
      pcStack_b8 = FUN_108943d18;
      uStack_b0 = 0x108943d28;
      uVar9 = *(undefined8 *)(param_5 + lVar8);
      _objc_retain(uVar9);
      uStack_a8 = uVar9;
      func_0x00010bef78a0(uVar5);
      lVar10 = (long)_DAT_112777a90;
      lVar8 = *(long *)(param_5 + lVar10);
      func_0x00010bf5fdc0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        uVar9 = uVar5;
        func_0x00010c12f840(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b71a0();
        func_0x00010c1a1300(uVar9);
        func_0x00010bf20c00(param_5);
        func_0x00010bf20c00(param_5);
        puVar6 = *(undefined8 **)(param_5 + _DAT_112777a9c);
        func_0x00010bf4df40();
        uVar13 = NEON_fmov(0xbf800000,4);
        *puVar6 = uVar13;
        fVar11 = ((float)(param_3 / param_4) * (-(float)iVar2 / (float)iVar1) + 1.0) * 0.5;
        *(float *)(puVar6 + 1) = fVar11;
        dVar12 = (double)NEON_fmov(0x3f800000,4);
        *(double *)((long)puVar6 + 0xc) = dVar12;
        *(undefined4 *)((long)puVar6 + 0x14) = 0xbf800000;
        *(float *)(puVar6 + 3) = 1.0 - fVar11;
        *(double *)((long)puVar6 + 0x1c) = -dVar12;
        *(undefined4 *)((long)puVar6 + 0x24) = 0x3f800000;
        *(float *)(puVar6 + 5) = fVar11;
        *(undefined8 *)((long)puVar6 + 0x2c) = 0x3f80000000000000;
        *(undefined4 *)((long)puVar6 + 0x34) = 0x3f800000;
        *(float *)(puVar6 + 7) = 1.0 - fVar11;
        *(undefined4 *)((long)puVar6 + 0x3c) = 0;
        func_0x00010c11c0a0(uVar9);
        func_0x00010c1ea880(uVar9);
        func_0x00010c220f00(uVar9);
        FUN_108943cd8(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0c0(uVar9);
        func_0x000108943e8c();
        func_0x000108943cf8(lVar7);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          FUN_108943cd8(lVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000108943cf8(lVar7);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x000108943ea0();
        func_0x00010c19f0c0(uVar9);
        func_0x00010c19f000(uVar9);
        func_0x00010bf89b20(uVar9);
        func_0x00010c103840(uVar9);
        func_0x00010bf94840(uVar9);
        func_0x00010bf5e760(*(undefined8 *)(param_5 + lVar10));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10bf00(uVar5);
        func_0x000108943ea0();
        func_0x000108943e8c();
        _objc_release(uVar9);
      }
      func_0x00010bf42760(uVar5);
      func_0x000108943e7c();
      func_0x000108943f28();
      _objc_release(uStack_a8);
      func_0x000108943eb0();
      _objc_release(uVar3);
    }
    func_0x000108943efc();
  }
  return;
}



/* Entry: 108943cd8; end: 108943d17;  */

void FUN_108943cd8(undefined8 param_1)

{
  _objc_retain();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108943d18; end: 108943d3f;  */

void FUN_108943d18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108943d40; end: 108943d43; -[TCVideoViewMetal mtkView:drawableSizeWillChange:] */

void FUN_108943d40(void)

{
  return;
}



/* Entry: 108943d44; end: 108943df7; -[TCVideoViewMetal .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108943d44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777ab8,0);
  func_0x000108943e48((long)_DAT_112777aac);
  FUN_108943110(param_1 + _DAT_112777aa8);
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_112777aa4);
  func_0x000108943e48((long)_DAT_112777a80);
  func_0x000108943e48((long)_DAT_112777a9c);
  func_0x000108943e48((long)_DAT_112777ac4);
  func_0x000108943e48((long)_DAT_112777a98);
  func_0x000108943e48((long)_DAT_112777a8c);
  func_0x000108943e48((long)_DAT_112777a88);
  func_0x000108943e48((long)_DAT_112777a84);
  func_0x000108943e48((long)_DAT_112777a90);
  func_0x000108943e48((long)_DAT_112777a78);
  _objc_destroyWeak(param_1 + _DAT_112777a74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777a70,0);
  return;
}



/* Entry: 108943df8; end: 108943f47; -[TCVideoViewMetal .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108943df8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112777aa4);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112777aa8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 108943f48; end: 108943fbf; -[ADLAudioFrameListener initWithCpp:] */

undefined1 * FUN_108943f48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd400;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108944240();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108944214(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108943fc0; end: 10894405f; -[ADLAudioFrameListener onFrame:numSamplesPerChannel:sampleRate:numChannels:timestampNs:] */

void FUN_108943fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x000107c28244();
  uStack_50 = uVar1;
  uStack_48 = param_2;
  (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_50,param_4,param_5,param_6,param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 108944060; end: 10894408b;  */

void FUN_108944060(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108944128();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10894408c; end: 1089440df; -[ADLAudioFrameListener .cxx_destruct] */

void FUN_10894408c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9b798;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108944214((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 1089440e0; end: 108944127; -[ADLAudioFrameListener .cxx_construct] */

undefined8 * FUN_1089440e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_108944240();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108944128; end: 10894419f;  */

void FUN_108944128(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a9b798;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108944240();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_1089441a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108944250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1089441a0; end: 108944213;  */

void FUN_1089441a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dadb0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108944240();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108944214(&uStack_30);
  return;
}



/* Entry: 108944214; end: 10894423f;  */

long FUN_108944214(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108944240; end: 108944267;  */

void FUN_108944240(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108944268; end: 10894431f;  */

void FUN_108944268(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a9b800;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108944320);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1089445a0(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108944320; end: 108944423;  */

void FUN_108944320(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a9b840;
  puVar4[3] = &PTR_DAT_110a9b8b8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  puVar4[4] = *puVar6;
  lVar7 = puVar6[1];
  puVar4[5] = lVar7;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a9b890;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1089445a0(&uStack_50);
  return;
}



/* Entry: 108944424; end: 108944427;  */

void FUN_108944424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108944428; end: 10894443b;  */

void FUN_108944428(void)

{
  FUN_108944590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894443c; end: 108944447;  */

long FUN_10894443c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9b800;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108944448; end: 108944487;  */

void FUN_108944448(void)

{
  FUN_1089445cc();
  return;
}



/* Entry: 108944488; end: 1089444fb;  */

void FUN_108944488(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_108944060(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be240(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1089444fc; end: 10894458f;  */

long FUN_1089444fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9b800;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108944590; end: 10894459f;  */

void FUN_108944590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089445a0; end: 1089445cb;  */

long FUN_1089445a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1089445cc; end: 1089445d7;  */

long FUN_1089445cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9b800;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1089445d8; end: 10894464f; -[ADLCameraFrameInjector initWithCpp:] */

undefined1 * FUN_1089445d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd408;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108944834();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1089391c8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108944650; end: 1089446ab; -[ADLCameraFrameInjector injectFrame:] */

void FUN_108944650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),&uStack_18);
  return;
}



/* Entry: 1089446ac; end: 1089446ff; -[ADLCameraFrameInjector .cxx_destruct] */

void FUN_1089446ac(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9b8d0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_1089391c8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108944700; end: 108944747; -[ADLCameraFrameInjector .cxx_construct] */

undefined8 * FUN_108944700(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_108944834();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108944748; end: 1089447bf;  */

void FUN_108944748(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a9b8d0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108944834();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_1089447c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108944844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1089447c0; end: 108944833;  */

void FUN_1089447c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dadb8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108944834();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1089391c8(&uStack_30);
  return;
}



/* Entry: 108944834; end: 10894485b;  */

void FUN_108944834(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10894485c; end: 1089449fb;  */

void FUN_10894485c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0fe0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c28244();
  uVar3 = param_2;
  uVar16 = param_3;
  func_0x00010c0fe020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c28244();
  uVar5 = param_2;
  uVar17 = uVar16;
  func_0x00010c0fe080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000107c28244();
  uVar7 = param_2;
  func_0x00010c0fe100();
  uVar8 = param_2;
  func_0x00010c0fe040();
  uVar9 = param_2;
  func_0x00010c0fe0a0();
  uVar10 = param_2;
  func_0x00010c0fe120();
  uVar11 = param_2;
  func_0x00010c0fe060();
  uVar12 = param_2;
  func_0x00010c0fe0c0();
  uVar13 = param_2;
  func_0x00010c2a5040();
  uVar14 = param_2;
  func_0x00010bfe0640();
  uVar15 = param_2;
  func_0x00010c2709c0();
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = uVar4;
  param_1[3] = uVar16;
  param_1[4] = uVar6;
  param_1[5] = uVar17;
  *(int *)(param_1 + 6) = (int)uVar7;
  *(int *)((long)param_1 + 0x34) = (int)uVar8;
  *(int *)(param_1 + 7) = (int)uVar9;
  *(int *)((long)param_1 + 0x3c) = (int)uVar10;
  *(int *)(param_1 + 8) = (int)uVar11;
  *(int *)((long)param_1 + 0x44) = (int)uVar12;
  *(int *)(param_1 + 9) = (int)uVar13;
  *(int *)((long)param_1 + 0x4c) = (int)uVar14;
  param_1[10] = uVar15;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1089449fc; end: 108944b17; -[ADLDecodedImage initWithPlaneY:planeCb:planeCr:planeYPixelStride:planeCbPixelStride:planeCrPixelStride:planeYRowStride:planeCbRowStride:planeCrRowStride:width:height:timestamp:] */

undefined1 *
FUN_1089449fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000108944ca0();
  _objc_retain(param_3);
  func_0x000108944c98();
  func_0x000108944c90();
  puVar1 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar1 + 0x28) = unaff_x19;
    _objc_release(uVar2);
    func_0x000108944c98();
    uVar2 = *(undefined8 *)(puVar1 + 0x30);
    *(undefined8 *)(puVar1 + 0x30) = unaff_x20;
    _objc_release(uVar2);
    func_0x000108944c90();
    uVar2 = *(undefined8 *)(puVar1 + 0x38);
    *(undefined8 *)(puVar1 + 0x38) = unaff_x21;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = param_6;
    *(undefined4 *)(puVar1 + 0xc) = param_7;
    *(undefined4 *)(puVar1 + 0x10) = param_8;
    *(undefined4 *)(puVar1 + 0x14) = param_9;
    *(undefined4 *)(puVar1 + 0x18) = param_10;
    *(undefined4 *)(puVar1 + 0x1c) = param_11;
    *(undefined4 *)(puVar1 + 0x20) = param_12;
    *(undefined4 *)(puVar1 + 0x24) = param_13;
    *(undefined8 *)(puVar1 + 0x40) = param_15;
  }
  _objc_release();
  func_0x000108944c88();
  func_0x000108944c80();
  return puVar1;
}



/* Entry: 108944b18; end: 108944bd7; +[ADLDecodedImage DecodedImageWithPlaneY:planeCb:planeCr:planeYPixelStride:planeCbPixelStride:planeCrPixelStride:planeYRowStride:planeCbRowStride:planeCrRowStride:width:height:timestamp:] */

void FUN_108944b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 in_stack_00000008;
  
  func_0x000108944ca0();
  _objc_retain(param_3);
  func_0x000108944c98();
  func_0x000108944c90();
  _objc_alloc();
  func_0x00010c036a00();
  func_0x000108944c74();
  func_0x000108944c88();
  func_0x000108944c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_stack_00000008);
  return;
}



/* Entry: 108944bd8; end: 108944bdf; -[ADLDecodedImage planeY] */

undefined8 FUN_108944bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108944be0; end: 108944be7; -[ADLDecodedImage planeCb] */

undefined8 FUN_108944be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108944be8; end: 108944bef; -[ADLDecodedImage planeCr] */

undefined8 FUN_108944be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108944bf0; end: 108944bf7; -[ADLDecodedImage planeYPixelStride] */

undefined4 FUN_108944bf0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108944bf8; end: 108944bff; -[ADLDecodedImage planeCbPixelStride] */

undefined4 FUN_108944bf8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108944c00; end: 108944c07; -[ADLDecodedImage planeCrPixelStride] */

undefined4 FUN_108944c00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108944c08; end: 108944c0f; -[ADLDecodedImage planeYRowStride] */

undefined4 FUN_108944c08(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108944c10; end: 108944c17; -[ADLDecodedImage planeCbRowStride] */

undefined4 FUN_108944c10(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 108944c18; end: 108944c1f; -[ADLDecodedImage planeCrRowStride] */

undefined4 FUN_108944c18(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 108944c20; end: 108944c27; -[ADLDecodedImage width] */

undefined4 FUN_108944c20(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 108944c28; end: 108944c2f; -[ADLDecodedImage height] */

undefined4 FUN_108944c28(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 108944c30; end: 108944c37; -[ADLDecodedImage timestamp] */

undefined8 FUN_108944c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108944c38; end: 108944c73; -[ADLDecodedImage .cxx_destruct] */

void FUN_108944c38(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 108944c74; end: 108944cb3;  */

void FUN_108944c74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108944cb4; end: 108944d2b; -[ADLDecoderCallback initWithCpp:] */

undefined1 * FUN_108944cb4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108945004();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108944fa8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108944d2c; end: 108944d9b; -[ADLDecoderCallback onFrameDecoded:] */

void FUN_108944d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_78 [88];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10894485c(auStack_78,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 108944d9c; end: 108944def; -[ADLDecoderCallback onNativeFrameDecoded:] */

void FUN_108944d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108948664(auStack_30,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_30);
  func_0x000108944fd0(auStack_30);
  return;
}



/* Entry: 108944df0; end: 108944dff; -[ADLDecoderCallback onDecoderError] */

void FUN_108944df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108944dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 108944e00; end: 108944e2b;  */

void FUN_108944e00(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108944ec4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108944e2c; end: 108944e7f; -[ADLDecoderCallback .cxx_destruct] */

void FUN_108944e2c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9b8e0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108944fa8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108944e80; end: 108944ec3; -[ADLDecoderCallback .cxx_construct] */

undefined8 * FUN_108944e80(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000108945004();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108944ec4; end: 108944f37;  */

void FUN_108944ec4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a9b8e0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000108945004();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108944f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010894501c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108944f38; end: 108944fa7;  */

void FUN_108944f38(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dadc0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108945004();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108944fa8(&uStack_30);
  return;
}



/* Entry: 108944fa8; end: 108944ff7;  */

long FUN_108944fa8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108944ff8; end: 10894502f;  */

void FUN_108944ff8(void)

{
  return;
}



/* Entry: 108945030; end: 10894508f;  */

void FUN_108945030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dadc8;
  _objc_alloc(PTR_PTR_1126dadc8);
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02bfa0(puVar1,param_2,param_1);
  FUN_108945090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108945090; end: 10894509b;  */

void FUN_108945090(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10894509c; end: 10894512b; -[ADLDecoderConfig initWithMimeType:] */

undefined1 * FUN_10894509c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010894518c();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  _objc_release();
  return puVar1;
}



/* Entry: 10894512c; end: 10894516b; +[ADLDecoderConfig DecoderConfigWithMimeType:] */

void FUN_10894512c(void)

{
  func_0x00010894518c();
  _objc_alloc();
  func_0x00010c02bfa0();
  func_0x000108945180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10894516c; end: 108945173; -[ADLDecoderConfig mimeType] */

undefined8 FUN_10894516c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108945174; end: 10894519b; -[ADLDecoderConfig .cxx_destruct] */

void FUN_108945174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10894519c; end: 108945213; -[ADLDirectRendererCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10894519c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd428;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108945730();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108936aa8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108945214; end: 10894527b; -[ADLDirectRendererCallbackCppProxy onFrame:] */

void FUN_108945214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_78 [88];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108949618(auStack_78,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_78);
  func_0x000108945750();
  return;
}



/* Entry: 10894527c; end: 1089452cf; -[ADLDirectRendererCallbackCppProxy onNativeFrame:] */

void FUN_10894527c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108948664(auStack_30,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_30);
  func_0x000108944fd0(auStack_30);
  return;
}



/* Entry: 1089452d0; end: 1089453c3;  */

void FUN_1089452d0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dadd0;
    _objc_opt_class(PTR_PTR_1126dadd0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110a9b948;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10894545c);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_108945708(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_108945730();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000108945750();
  return;
}



/* Entry: 1089453c4; end: 108945417; -[ADLDirectRendererCallbackCppProxy .cxx_destruct] */

void FUN_1089453c4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9ba28;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108936aa8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108945418; end: 10894545b; -[ADLDirectRendererCallbackCppProxy .cxx_construct] */

undefined8 * FUN_108945418(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_108945730();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10894545c; end: 108945553;  */

void FUN_10894545c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a9b988;
  puVar1[3] = &PTR_DAT_110a9ba08;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  puVar1[4] = *puVar3;
  lVar4 = puVar3[1];
  puVar1[5] = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_108945730();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110a9b9d8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108945708(&uStack_50);
  return;
}



/* Entry: 108945554; end: 108945557;  */

void FUN_108945554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108945558; end: 10894556b;  */

void FUN_108945558(void)

{
  FUN_1089456f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894556c; end: 108945577;  */

long FUN_10894556c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9b948;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108945578; end: 1089455b3;  */

void FUN_108945578(void)

{
  func_0x000108945784();
  return;
}



/* Entry: 1089455b4; end: 10894560b;  */

void FUN_1089455b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x000108945758();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1089497a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4540(uVar1,param_2,unaff_x20);
  func_0x000108945740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10894560c; end: 108945663;  */

void FUN_10894560c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x000108945758();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_108948760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5460(uVar1,param_2,unaff_x20);
  func_0x000108945740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}


