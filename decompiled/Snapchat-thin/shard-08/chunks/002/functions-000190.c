/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f58a04; end: 105f58a3f; -[SCMapboxViewportController setPitch:] */

void FUN_105f58a04(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c1dbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f58a40; end: 105f58a7f; -[SCMapboxViewportController pitch] */

undefined8 FUN_105f58a40(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0fc7c0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f58a80; end: 105f58ac3; -[SCMapboxViewportController setPitch:animated:] */

void FUN_105f58a80(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c1dbe60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f58ac4; end: 105f58b0f; -[SCMapboxViewportController setPitch:andDirection:animated:] */

void FUN_105f58ac4(undefined8 param_1,undefined8 param_2,long param_3)

{
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010c1dbe40(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f58b10; end: 105f58b43; -[SCMapboxViewportController resetPitchAndDirectionAnimated:] */

void FUN_105f58b10(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c139200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f58b44; end: 105f58ba7; -[SCMapboxViewportController setCenterCoordinate:zoomLevel:animated:] */

void FUN_105f58b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bde10e0();
  param_4 = param_4 + 8;
  _objc_loadWeakRetained(param_4);
  func_0x00010c17a700(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f58ba8; end: 105f58be7; -[SCMapboxViewportController direction] */

undefined8 FUN_105f58ba8(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf7f0e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f58be8; end: 105f58bef; -[SCMapboxViewportController setDirection:] */

void FUN_105f58be8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDirection_animated__112641288,0);
  return;
}



/* Entry: 105f58bf0; end: 105f58c3b; -[SCMapboxViewportController setDirection:animated:] */

void FUN_105f58bf0(undefined8 param_1,long param_2)

{
  func_0x00010bde10e0();
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c18e1a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f58c3c; end: 105f58d37; -[SCMapboxViewportController visibleCoordinateBounds] */

undefined8
FUN_105f58c3c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29fd40();
  dVar2 = param_4;
  _objc_release(lVar1);
  if ((param_4 == 180.0) && (param_2 == -180.0)) {
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf20c00();
    _objc_release(lVar1);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf51220(param_3,0);
    _objc_release(lVar1);
    param_5 = param_5 + 8;
    _objc_loadWeakRetained(param_5);
    param_1 = 0;
    func_0x00010bf51220(0,dVar2);
    _objc_release(param_5);
  }
  return param_1;
}



/* Entry: 105f58d38; end: 105f58d4f; -[SCMapboxViewportController setVisibleCoordinateBounds:] */

void FUN_105f58d38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisibleCoordinateBounds_edgeP_112666878,0)
  ;
  return;
}



/* Entry: 105f58d50; end: 105f58d63; -[SCMapboxViewportController setVisibleCoordinateBounds:animated:] */

void FUN_105f58d50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisibleCoordinateBounds_edgeP_112666878);
  return;
}



/* Entry: 105f58d64; end: 105f58e1f; -[SCMapboxViewportController setVisibleCoordinateBounds:edgePadding:animated:] */

void FUN_105f58d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  
  func_0x00010bde10e0();
  lVar1 = param_9 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c223940(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be289d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,param_9,
             PTR_s__handleDividingVisibleBoundsInto_112567c10);
  return;
}



/* Entry: 105f58e20; end: 105f58e93; -[SCMapboxViewportController convertPoint:toCoordinateFromView:] */

undefined1  [16]
FUN_105f58e20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  _objc_retain(param_5);
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf51220(param_1,param_2);
  _objc_release(param_5);
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 105f58e94; end: 105f58f07; -[SCMapboxViewportController convertCoordinate:toPointToView:] */

undefined1  [16]
FUN_105f58e94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  _objc_retain(param_5);
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf50ea0(param_1,param_2);
  _objc_release(param_5);
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 105f58f08; end: 105f58fa3; -[SCMapboxViewportController convertRect:toCoordinateBoundsFromView:] */

undefined8
FUN_105f58f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  param_5 = param_5 + 8;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf51400(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 105f58fa4; end: 105f5903f; -[SCMapboxViewportController convertCoordinateBounds:toRectToView:] */

undefined8
FUN_105f58fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  param_5 = param_5 + 8;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf50ec0(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 105f59040; end: 105f590cb; -[SCMapboxViewportController viewportAwareCompareCoordinate1:coordinate2:toView:] */

ulong FUN_105f59040(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  
  _objc_retain(param_7);
  func_0x00010bf50ea0(param_1,param_5,param_6,param_7);
  func_0x00010bf50ea0(param_3,param_5,param_6,param_7);
  _objc_release(param_7);
  uVar1 = (ulong)(param_4 < param_2);
  if (param_2 < param_4) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 105f590cc; end: 105f590f3; -[SCMapboxViewportController target] */

void FUN_105f590cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f590f4; end: 105f59157; -[SCMapboxViewportController setTarget:] */

void FUN_105f590f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27a660(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212200(param_1,param_2,param_3,uVar1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f59158; end: 105f59167; -[SCMapboxViewportController setTarget:transition:completion:] */

void FUN_105f59158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2121f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTarget_layerGate_transition_c_1126622a0,param_3,0,param_4,param_5);
  return;
}



/* Entry: 105f59168; end: 105f5937f; -[SCMapboxViewportController setTarget:layerGate:transition:completion:] */

void FUN_105f59168(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  lVar3 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  if (param_3 == 0) {
    if (lVar3 != 0) {
      func_0x00010be83f20(param_1);
      func_0x00010be83f40(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    lVar3 = param_3;
    func_0x00010c29f6e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105f59380;
    puStack_80 = &UNK_1108fb098;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    lVar2 = lVar3;
    uStack_78 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar1);
    _objc_release(lVar3);
    _objc_retain(param_6);
    _objc_copyWeak(auStack_a0,auStack_68);
    func_0x00010be31e60(param_1);
    func_0x00010be83f20(param_1);
    _objc_destroyWeak(auStack_a0);
    _objc_release(param_6);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f59380; end: 105f593d7;  */

void FUN_105f59380(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31e60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f593d8; end: 105f59417;  */

void FUN_105f593d8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f59418; end: 105f5970f; -[SCMapboxViewportController flyToCoordinate:zoomLevel:pitch:duration:edgePadding:completion:] */

void FUN_105f59418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined *param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  
  _objc_retain(param_8);
  func_0x00010bde10e0(param_6);
  _objc_initWeak(auStack_a8,param_6);
  iVar1 = (int)*(undefined8 *)(param_6 + 0x10);
  func_0x00010c071800();
  puVar2 = PTR_PTR_1126c6598;
  if (iVar1 == 0) {
    param_6 = param_6 + 8;
    _objc_loadWeakRetained(param_6);
    _objc_retain(param_8);
    _objc_copyWeak(auStack_e0,auStack_a8);
    func_0x00010bfb3480(param_1,param_2,param_3,param_4,param_5,puVar2);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_e0);
    puVar2 = param_8;
  }
  else {
    puVar2 = PTR_PTR_1126b1dc8;
    func_0x00010c271ea0(param_1,param_2,PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1dc8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a160(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c5bb8;
    _objc_alloc(PTR_PTR_1126c5bb8);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_105f59710;
    puStack_c0 = &UNK_110848708;
    _objc_retain(param_8);
    puStack_b8 = param_8;
    _objc_copyWeak(auStack_b0,auStack_a8);
    func_0x00010bff8d00(puVar3);
    puVar4 = PTR_PTR_1126b1dc8;
    func_0x00010bf03e60(param_5,PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1840(*(undefined8 *)(param_6 + 0x10));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puStack_b8);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_8);
  return;
}



/* Entry: 105f59710; end: 105f59793;  */

void FUN_105f59710(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f59794; end: 105f5992f; -[SCMapboxViewportController camera] */

void FUN_105f59794(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_PTR_1126c5a00;
  _objc_alloc(PTR_PTR_1126c5a00);
  lVar2 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34640();
  lVar4 = param_3 + 8;
  uVar11 = param_1;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0320();
  lVar6 = param_3 + 8;
  uVar12 = uVar11;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fc7c0();
  lVar8 = param_3 + 8;
  uVar13 = uVar12;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01f00();
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  lVar10 = param_3;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0ba0();
  func_0x00010bffd4e0(param_1,param_2,uVar11,uVar12,uVar13,puVar1);
  _objc_release(lVar10);
  _objc_release(param_3);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f59930; end: 105f59ad7; -[SCMapboxViewportController cameraThatFitsCoordinateBounds:edgePadding:] */

void FUN_105f59930(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_1 <= -90.0) {
    param_1 = -90.0;
  }
  dVar4 = 90.0;
  if (param_1 <= 90.0) {
    dVar4 = param_1;
  }
  if (param_2 <= -180.0) {
    param_2 = -180.0;
  }
  dVar8 = 180.0;
  if (param_2 <= 180.0) {
    dVar8 = param_2;
  }
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2b220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c0f0ba0(lVar2);
  puVar3 = PTR_PTR_1126c5a00;
  _objc_alloc(PTR_PTR_1126c5a00);
  func_0x00010bf34640(lVar2);
  dVar5 = dVar4;
  func_0x00010bfe0320(lVar2);
  param_3 = param_3 + 8;
  dVar6 = dVar5;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fc7c0();
  dVar7 = dVar6;
  func_0x00010bf01f00(lVar2);
  func_0x00010bffd4e0(dVar4,dVar8,dVar5,dVar6,dVar7,puVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f59ad8; end: 105f59f17; -[SCMapboxViewportController flyToCamera:withDuration:completion:] */

void FUN_105f59ad8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  dVar11 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bde10e0(param_5);
  iVar1 = (int)*(undefined8 *)(param_5 + 0x10);
  func_0x00010c071800();
  puVar7 = PTR_PTR_1126c65a0;
  if (iVar1 == 0) {
    func_0x00010bf34640(param_7);
    dVar8 = dVar11;
    func_0x00010bf01f00(param_7);
    dVar10 = dVar8;
    func_0x00010c0fc7c0(param_7);
    dVar9 = dVar10;
    func_0x00010bfe0320(param_7);
    func_0x00010bf29d20(dVar11,param_2,dVar8,dVar10,dVar9,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,param_5);
    param_5 = param_5 + 8;
    _objc_loadWeakRetained(param_5);
    _objc_retain(param_8);
    _objc_copyWeak(auStack_d0,auStack_98);
    func_0x00010bfb33e0(param_1,param_5);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_d0);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar7);
  }
  else {
    _objc_initWeak(auStack_98,param_5);
    puVar2 = PTR_PTR_1126b1dc8;
    func_0x00010bf34640(param_7);
    func_0x00010c271ea0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01f00(param_7);
    dVar8 = dVar11;
    func_0x00010c0fc7c0(param_7);
    dVar10 = dVar8;
    func_0x00010bf34640(param_7);
    lVar3 = param_5 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfb68e0();
    dVar8 = 1.5707963267948966 - (dVar8 * 3.141592653589793) / 180.0;
    _sin(dVar8);
    dVar9 = 0.2617993877991494;
    _tan(0x3fd0c152382d7365);
    dVar10 = (dVar10 * 3.141592653589793) / 180.0;
    _cos(dVar10);
    dVar11 = ((dVar10 * 6.283185307179586 * 6378137.0) /
             ((dVar9 * (dVar11 / dVar8 + dVar11 / dVar8)) / param_4)) * 0.001953125;
    _log2(dVar11);
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126b1dc8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar11,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfe0320(param_7);
    func_0x00010c0df720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0fc7c0(param_7);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a160(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar4);
    puVar7 = PTR_PTR_1126c5bb8;
    _objc_alloc(PTR_PTR_1126c5bb8);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105f59f18;
    puStack_b0 = &UNK_110848708;
    _objc_retain(param_8);
    uStack_a8 = param_8;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010bff8d00(puVar7);
    puVar5 = PTR_PTR_1126b1dc8;
    func_0x00010bf03e60(param_1,PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1840(*(undefined8 *)(param_5 + 0x10));
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105f59f18; end: 105f59f97;  */

void FUN_105f59f18(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f59f98; end: 105f59fdf; -[SCMapboxViewportController setCamera:] */

void FUN_105f59f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bde10e0(param_1);
  func_0x00010c176100(0,param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f59fe0; end: 105f5a3f3; -[SCMapboxViewportController setCamera:withDuration:completion:] */

void FUN_105f59fe0(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  dVar10 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bde10e0(param_5);
  iVar1 = (int)*(undefined8 *)(param_5 + 0x10);
  func_0x00010c071800();
  puVar6 = PTR_PTR_1126c65a0;
  puVar2 = PTR_PTR_1126b1dc8;
  if (iVar1 == 0) {
    func_0x00010bf34640(param_7);
    dVar7 = dVar10;
    func_0x00010bf01f00(param_7);
    dVar9 = dVar7;
    func_0x00010c0fc7c0(param_7);
    dVar8 = dVar9;
    func_0x00010bfe0320(param_7);
    func_0x00010c0f0ba0(param_7);
    func_0x00010bf29d00(dVar10,param_2,dVar7,dVar9,dVar8,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,param_5);
    param_5 = param_5 + 8;
    _objc_loadWeakRetained(param_5);
    _objc_retain(param_8);
    _objc_copyWeak(auStack_d0,auStack_98);
    func_0x00010c1760c0(param_1,param_5);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_d0);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_98);
  }
  else {
    func_0x00010bf34640(param_7);
    func_0x00010c271ea0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01f00(param_7);
    dVar7 = dVar10;
    func_0x00010c0fc7c0(param_7);
    dVar9 = dVar7;
    func_0x00010bf34640(param_7);
    lVar3 = param_5 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf20c00();
    dVar7 = 1.5707963267948966 - (dVar7 * 3.141592653589793) / 180.0;
    _sin(dVar7);
    dVar8 = 0.2617993877991494;
    _tan(0x3fd0c152382d7365);
    dVar9 = (dVar9 * 3.141592653589793) / 180.0;
    _cos(dVar9);
    dVar10 = ((dVar9 * 6.283185307179586 * 6378137.0) /
             ((dVar8 * (dVar10 / dVar7 + dVar10 / dVar7)) / param_4)) * 0.001953125;
    _log2(dVar10);
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126b1dc8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0fc7c0(param_7);
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a160(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_initWeak(auStack_98,param_5);
    puVar6 = PTR_PTR_1126c5bb8;
    _objc_alloc(PTR_PTR_1126c5bb8);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105f5a3f4;
    puStack_b0 = &UNK_110848708;
    _objc_retain(param_8);
    uStack_a8 = param_8;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010bff8d00(puVar6);
    puVar4 = PTR_PTR_1126b1dc8;
    func_0x00010bf03e60(param_1,PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1840(*(undefined8 *)(param_5 + 0x10));
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_a8);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar5);
    puVar6 = puVar2;
  }
  _objc_release(puVar6);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105f5a3f4; end: 105f5a473;  */

void FUN_105f5a3f4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f5a474; end: 105f5a537; -[SCMapboxViewportController setCameraWithDynamicDuration:completion:] */

void FUN_105f5a474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1e08;
  _objc_retain(param_8);
  _objc_retain(param_7);
  lVar2 = param_5;
  func_0x00010bf28e60(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfb68e0();
  func_0x00010bf8b7a0(param_3,param_4,puVar1,param_6,lVar2,param_7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c176100(param_3,param_5,param_6,param_7,param_8);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105f5a538; end: 105f5a547; -[SCMapboxViewportController setCamera:withTransition:completion:] */

void FUN_105f5a538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c176090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCamera_layerGate_withTransiti_11263b240,param_3,0,param_4,param_5);
  return;
}



/* Entry: 105f5a548; end: 105f5ac2b; -[SCMapboxViewportController setCamera:layerGate:withTransition:completion:] */

void FUN_105f5a548(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined *param_9,
                  undefined *param_10)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010bde10e0(param_5);
  if (param_7 == 0) goto LAB_105f5ab64;
  iVar1 = (int)*(undefined8 *)(param_5 + 0x10);
  func_0x00010c071800();
  puVar5 = PTR_PTR_1126c65a0;
  puVar6 = PTR_PTR_1126b1dc8;
  if (iVar1 == 0) {
    func_0x00010bf34640(param_7);
    dVar8 = param_1;
    func_0x00010bf01f00(param_7);
    dVar10 = dVar8;
    func_0x00010c0fc7c0(param_7);
    dVar9 = dVar10;
    func_0x00010bfe0320(param_7);
    func_0x00010c0f0ba0(param_7);
    func_0x00010bf29d00(param_1,param_2,dVar8,dVar10,dVar9,puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (param_9 == (undefined *)0x0) {
      param_9 = PTR_PTR_1126b1e20;
      func_0x00010c0daa80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_initWeak(auStack_a0,param_5);
    puVar6 = param_9;
    func_0x00010c25dfa0();
    if (puVar6 < (undefined *)0x4) {
      puVar6 = param_9;
      func_0x00010c25dfa0(param_9);
      func_0x000106c1ba70();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_108,param_5);
      param_5 = param_5 + 8;
      _objc_loadWeakRetained(param_5);
      func_0x00010bf8b160(param_9);
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x105f5acac;
      puStack_120 = &UNK_110848708;
      _objc_retain(param_10);
      puStack_118 = param_10;
      _objc_copyWeak(auStack_110,auStack_108);
      func_0x00010c1760c0(param_1,param_5);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_110);
      _objc_release(puStack_118);
      _objc_destroyWeak(auStack_108);
LAB_105f5ab4c:
      _objc_release(puVar6);
    }
    else if (puVar6 == (undefined *)0x4) {
      lVar7 = param_5 + 8;
      _objc_loadWeakRetained(lVar7);
      func_0x00010bf8b160(param_9);
      _objc_retain(param_10);
      _objc_copyWeak(auStack_140,auStack_a0);
      func_0x00010bfb33e0(param_1,lVar7);
      _objc_release(lVar7);
      func_0x00010bf34640(puVar5);
      func_0x00010be84660(param_5);
      _objc_destroyWeak(auStack_140);
      puVar6 = param_10;
      goto LAB_105f5ab4c;
    }
    _objc_destroyWeak(auStack_a0);
  }
  else {
    func_0x00010bf34640(param_7);
    func_0x00010c271ea0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01f00(param_7);
    dVar8 = param_1;
    func_0x00010c0fc7c0(param_7);
    dVar10 = dVar8;
    func_0x00010bf34640(param_7);
    lVar7 = param_5 + 8;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bf20c00();
    dVar8 = 1.5707963267948966 - (dVar8 * 3.141592653589793) / 180.0;
    _sin(dVar8);
    dVar9 = 0.2617993877991494;
    _tan(0x3fd0c152382d7365);
    dVar10 = (dVar10 * 3.141592653589793) / 180.0;
    _cos(dVar10);
    dVar8 = ((dVar10 * 6.283185307179586 * 6378137.0) /
            ((dVar9 * (param_1 / dVar8 + param_1 / dVar8)) / param_4)) * 0.001953125;
    _log2(dVar8);
    _objc_release(lVar7);
    puVar3 = PTR_PTR_1126b1dc8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0fc7c0(param_7);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a180(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    if (param_9 == (undefined *)0x0) {
      param_9 = PTR_PTR_1126b1e20;
      func_0x00010c0daa80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_initWeak(auStack_a0,param_5);
    puVar5 = param_9;
    func_0x00010c25dfa0();
    if (puVar5 < (undefined *)0x4) {
      puVar4 = PTR_PTR_1126c5bb8;
      _objc_alloc(PTR_PTR_1126c5bb8);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_105f5ac2c;
      puStack_b8 = &UNK_110848708;
      _objc_retain(param_10);
      puStack_b0 = param_10;
      _objc_copyWeak(auStack_a8,auStack_a0);
      func_0x00010bff8d00(puVar4);
      puVar5 = PTR_PTR_1126b1dc8;
      puVar2 = param_9;
      func_0x00010c25dfa0(param_9);
      func_0x000106c1ba70();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2723e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b1dc8;
      func_0x00010bf8b160(param_9);
      func_0x00010bf03e80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d1840(*(undefined8 *)(param_5 + 0x10));
      _objc_release(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_a8);
      puVar5 = puStack_b0;
LAB_105f5aa98:
      _objc_release(puVar5);
    }
    else if (puVar5 == (undefined *)0x4) {
      puVar2 = PTR_PTR_1126c5bb8;
      _objc_alloc(PTR_PTR_1126c5bb8);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x105f5ac6c;
      puStack_e8 = &UNK_110848708;
      _objc_retain(param_10);
      puStack_e0 = param_10;
      _objc_copyWeak(auStack_d8,auStack_a0);
      func_0x00010bff8d00(puVar2);
      puVar5 = PTR_PTR_1126b1dc8;
      func_0x00010bf8b160(param_9);
      func_0x00010bf03e60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d1840(*(undefined8 *)(param_5 + 0x10));
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_d8);
      puVar5 = puStack_e0;
      goto LAB_105f5aa98;
    }
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar3);
    puVar5 = puVar6;
  }
  _objc_release(puVar5);
LAB_105f5ab64:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105f5ac2c; end: 105f5ad2b;  */

void FUN_105f5ac2c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f5ad2c; end: 105f5af5b; -[SCMapboxViewportController easeToZoomLevel:withDuration:completion:] */

void FUN_105f5ad2c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  dVar6 = param_1;
  _objc_retain(param_5);
  func_0x00010bf34640(param_3);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb68e0();
  dVar5 = 0.0;
  if (0.0 <= param_1) {
    dVar5 = param_1;
  }
  uVar4 = NEON_fminnm(dVar5,0x4039800000000000);
  _exp2(uVar4);
  dVar5 = -85.0511287798066;
  if (-85.0511287798066 <= dVar6) {
    dVar5 = dVar6;
  }
  dVar6 = (double)NEON_fminnm(dVar5,0x40554345b1a549d7);
  _cos(dVar6 * 0.017453292519943295);
  _tan(0x3fd0c152382d7365);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126c5a00;
  _objc_alloc(PTR_PTR_1126c5a00);
  func_0x00010bf34640(param_3);
  func_0x00010bffd4e0(puVar2);
  puVar3 = PTR_PTR_1126b1e20;
  _objc_alloc(PTR_PTR_1126b1e20);
  func_0x00010c00eb00(param_2);
  _objc_initWeak(auStack_68,param_3);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c176120(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 105f5af5c; end: 105f5af9b;  */

void FUN_105f5af5c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f5af9c; end: 105f5afd7; -[SCMapboxViewportController setTileDebuggingOverlayEnabled:] */

void FUN_105f5af9c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18a000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f5afd8; end: 105f5b033; -[SCMapboxViewportController screenLocationForCoordinate:] */

void FUN_105f5afd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  uVar2 = param_2;
  func_0x00010c29fd40();
                    /* WARNING: Could not recover jumptable at 0x00010c151130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,uVar1,uVar2,param_3,param_4,param_5,
             PTR_s_screenLocationForCoordinate_visi_112631e68);
  return;
}



/* Entry: 105f5b034; end: 105f5b2cb; -[SCMapboxViewportController screenLocationForCoordinate:visibleCoordinateBounds:] */

undefined8
FUN_105f5b034(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,ulong param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort uVar7;
  
  uVar5 = param_7;
  func_0x00010bdcf2e0(param_3,param_4,param_5,param_6);
  if ((uVar5 & 1) == 0) {
    func_0x00010be289c0(param_3,param_4,param_5,param_6,param_7);
  }
  bVar2 = false;
  bVar3 = true;
  if (param_3 <= param_1) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(param_5)) {
      bVar2 = param_1 == param_5;
      bVar3 = param_5 <= param_1;
    }
  }
  bVar1 = true;
  bVar4 = false;
  if (!bVar3 || bVar2) {
    bVar1 = false;
    bVar4 = true;
    if (!NAN(param_2) && !NAN(param_4)) {
      bVar1 = param_2 < param_4;
      bVar4 = false;
    }
  }
  bVar2 = false;
  bVar3 = true;
  if (bVar1 == bVar4) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_2) && !NAN(param_6)) {
      bVar2 = param_2 == param_6;
      bVar3 = param_6 <= param_2;
    }
  }
  if (!bVar3 || bVar2) {
    uVar7 = NEON_uminv(CONCAT44(CONCAT22(-(ushort)(param_2 <= *(double *)(param_7 + 0x80)),
                                         -(ushort)(param_1 <= *(double *)(param_7 + 0x78))),
                                CONCAT22(-(ushort)(*(double *)(param_7 + 0x70) <= param_2),
                                         -(ushort)(*(double *)(param_7 + 0x68) <= param_1))),2);
    if ((uVar7 & 1) == 0) {
      uVar7 = NEON_uminv(CONCAT44(CONCAT22(-(ushort)(param_2 <= *(double *)(param_7 + 0xa0)),
                                           -(ushort)(param_1 <= *(double *)(param_7 + 0x98))),
                                  CONCAT22(-(ushort)(*(double *)(param_7 + 0x90) <= param_2),
                                           -(ushort)(*(double *)(param_7 + 0x88) <= param_1))),2);
      if ((uVar7 & 1) == 0) {
        uVar7 = NEON_uminv(CONCAT44(CONCAT22(-(ushort)(param_2 <= *(double *)(param_7 + 0xc0)),
                                             -(ushort)(param_1 <= *(double *)(param_7 + 0xb8))),
                                    CONCAT22(-(ushort)(*(double *)(param_7 + 0xb0) <= param_2),
                                             -(ushort)(*(double *)(param_7 + 0xa8) <= param_1))),2);
        if ((uVar7 & 1) == 0) {
          uVar7 = NEON_uminv(CONCAT44(CONCAT22(-(ushort)(param_2 <= *(double *)(param_7 + 0xe0)),
                                               -(ushort)(param_1 <= *(double *)(param_7 + 0xd8))),
                                      CONCAT22(-(ushort)(*(double *)(param_7 + 0xd0) <= param_2),
                                               -(ushort)(*(double *)(param_7 + 200) <= param_1))),2)
          ;
          if ((uVar7 & 1) == 0) {
            uVar7 = NEON_uminv(CONCAT44(CONCAT22(-(ushort)(param_2 <= *(double *)(param_7 + 0x100)),
                                                 -(ushort)(param_1 <= *(double *)(param_7 + 0xf8))),
                                        CONCAT22(-(ushort)(*(double *)(param_7 + 0xf0) <= param_2),
                                                 -(ushort)(*(double *)(param_7 + 0xe8) <= param_1)))
                               ,2);
            if ((uVar7 & 1) == 0) {
              if ((((param_1 < *(double *)(param_7 + 0x108)) ||
                   (*(double *)(param_7 + 0x118) < param_1)) ||
                  (param_2 < *(double *)(param_7 + 0x110))) ||
                 (*(double *)(param_7 + 0x120) < param_2)) {
                if (((param_1 < *(double *)(param_7 + 0x128)) ||
                    (*(double *)(param_7 + 0x138) < param_1)) ||
                   ((param_2 < *(double *)(param_7 + 0x130) ||
                    (*(double *)(param_7 + 0x140) < param_2)))) {
                  if (((param_1 < *(double *)(param_7 + 0x148)) ||
                      (*(double *)(param_7 + 0x158) < param_1)) ||
                     ((param_2 < *(double *)(param_7 + 0x150) ||
                      (*(double *)(param_7 + 0x160) < param_2)))) {
                    uVar6 = 0;
                    if ((((*(double *)(param_7 + 0x168) <= param_1) &&
                         (param_1 <= *(double *)(param_7 + 0x178))) &&
                        (*(double *)(param_7 + 0x170) <= param_2)) &&
                       (uVar6 = 9, *(double *)(param_7 + 0x180) < param_2)) {
                      uVar6 = 0;
                    }
                  }
                  else {
                    uVar6 = 8;
                  }
                }
                else {
                  uVar6 = 7;
                }
              }
              else {
                uVar6 = 6;
              }
            }
            else {
              uVar6 = 5;
            }
          }
          else {
            uVar6 = 4;
          }
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 105f5b2cc; end: 105f5b3fb; -[SCMapboxViewportController relativeScreenCoordinatesForLocation:] */

void FUN_105f5b2cc(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_5 + 8;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bf50ea0(param_1,param_2,param_5);
  _objc_release(lVar7);
  param_5 = param_5 + 8;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf20c00();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 / param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2 / param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 2;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(puVar2 + 0x18) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010be84390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (puVar2,PTR_s__publishRegionWillChangeWithAnim_11257ea80,uVar5);
      return;
    }
  }
  else {
    puVar3 = puVar2 + 0x20;
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010bf60fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(puVar4);
        }
        iVar1 = (int)*(undefined8 *)(puVar2 + 0x18);
        func_0x00010c22e280();
        if (iVar1 != 0) {
          func_0x00010bde10e0(puVar2);
          func_0x00010be83f00(puVar2);
          goto LAB_105f5b4fc;
        }
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    }
LAB_105f5b4fc:
    _objc_release(puVar4);
    func_0x00010be84360(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be845b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f5b3fc; end: 105f5b583; -[SCMapboxViewportController mapView:regionWillChangeAnimated:] */

void FUN_105f5b3fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010be84390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__publishRegionWillChangeWithAnim_11257ea80,param_4);
      return;
    }
  }
  else {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf60fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
        func_0x00010c22e280();
        if (iVar2 != 0) {
          func_0x00010bde10e0(param_1);
          func_0x00010be83f00(param_1);
          goto LAB_105f5b4fc;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    }
LAB_105f5b4fc:
    _objc_release(lVar4);
    func_0x00010be84360(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be845b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f5b584; end: 105f5b587; -[SCMapboxViewportController mapViewRegionIsChanging:] */

void FUN_105f5b584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be845b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishViewportIsChangingEvent_11257eb08);
  return;
}



/* Entry: 105f5b588; end: 105f5b58f; -[SCMapboxViewportController mapView:regionDidChangeAnimated:] */

void FUN_105f5b588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be84370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__publishRegionDidChangeWithAnima_11257ea78,param_4);
  return;
}



/* Entry: 105f5b590; end: 105f5b597; -[SCMapboxViewportController mapView:didChangeUserTrackingMode:animated:] */

void FUN_105f5b590(undefined8 param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010be83f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__publishDidChangeFollowingUserLo_11257e960,in_x4);
  return;
}



/* Entry: 105f5b598; end: 105f5b59b; -[SCMapboxViewportController mapView:willSettleOnCoordinateFromPanning:] */

void FUN_105f5b598(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be84690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishWillSettleOnCoordinateFr_11257eb40);
  return;
}



/* Entry: 105f5b59c; end: 105f5b5af; -[SCMapboxViewportController _clearTargetIfNecessary] */

void FUN_105f5b59c(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2121b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTarget__112662290,0);
  return;
}



/* Entry: 105f5b5b0; end: 105f5b6eb; -[SCMapboxViewportController _handleTargetChange:layerGate:completion:] */

void FUN_105f5b5b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105f5b6ec;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    lVar1 = param_3;
    func_0x00010bf28e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c27a660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176080(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f5b6ec; end: 105f5b6f7;  */

void FUN_105f5b6ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105f5b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105f5b6f8; end: 105f5b89b; -[SCMapboxViewportController _handleDividingVisibleBoundsIntoSectionsWithVisibleBounds:] */

void FUN_105f5b6f8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  *(double *)(param_5 + 0x48) = param_1;
  *(double *)(param_5 + 0x50) = param_2;
  *(double *)(param_5 + 0x58) = param_3;
  *(double *)(param_5 + 0x60) = param_4;
  dVar8 = ABS(param_4 - param_2) / 3.0;
  dVar1 = ABS(param_3 - param_1) / 3.0;
  dVar9 = param_3 - dVar1;
  dVar2 = dVar9;
  dVar4 = param_2;
  _CLLocationCoordinate2DMake();
  dVar10 = param_2 + dVar8;
  dVar3 = param_3;
  dVar5 = dVar10;
  _CLLocationCoordinate2DMake();
  *(double *)(param_5 + 0x68) = dVar2;
  *(double *)(param_5 + 0x70) = dVar4;
  *(double *)(param_5 + 0x78) = dVar3;
  *(double *)(param_5 + 0x80) = dVar5;
  dVar2 = dVar9;
  dVar5 = dVar10;
  _CLLocationCoordinate2DMake();
  dVar8 = param_4 - dVar8;
  dVar3 = param_3;
  dVar4 = dVar8;
  _CLLocationCoordinate2DMake();
  *(double *)(param_5 + 0x88) = dVar2;
  *(double *)(param_5 + 0x90) = dVar5;
  *(double *)(param_5 + 0x98) = dVar3;
  *(double *)(param_5 + 0xa0) = dVar4;
  dVar3 = dVar9;
  dVar6 = dVar8;
  _CLLocationCoordinate2DMake();
  *(double *)(param_5 + 0xa8) = dVar3;
  *(double *)(param_5 + 0xb0) = dVar6;
  *(double *)(param_5 + 0xb8) = param_3;
  *(double *)(param_5 + 0xc0) = param_4;
  dVar1 = param_1 + dVar1;
  dVar4 = dVar1;
  dVar7 = param_2;
  _CLLocationCoordinate2DMake();
  *(double *)(param_5 + 200) = dVar4;
  *(double *)(param_5 + 0xd0) = dVar7;
  *(double *)(param_5 + 0xd8) = dVar2;
  *(double *)(param_5 + 0xe0) = dVar5;
  dVar2 = dVar1;
  dVar4 = dVar10;
  _CLLocationCoordinate2DMake();
  *(double *)(param_5 + 0xe8) = dVar2;
  *(double *)(param_5 + 0xf0) = dVar4;
  *(double *)(param_5 + 0xf8) = dVar3;
  *(double *)(param_5 + 0x100) = dVar6;
  dVar3 = dVar1;
  dVar5 = dVar8;
  _CLLocationCoordinate2DMake();
  dVar6 = param_4;
  _CLLocationCoordinate2DMake();
  *(double *)(param_5 + 0x108) = dVar3;
  *(double *)(param_5 + 0x110) = dVar5;
  *(double *)(param_5 + 0x118) = dVar9;
  *(double *)(param_5 + 0x120) = dVar6;
  *(double *)(param_5 + 0x128) = param_1;
  *(double *)(param_5 + 0x130) = param_2;
  *(double *)(param_5 + 0x138) = dVar2;
  *(double *)(param_5 + 0x140) = dVar4;
  dVar2 = param_1;
  _CLLocationCoordinate2DMake();
  *(double *)(param_5 + 0x148) = dVar2;
  *(double *)(param_5 + 0x150) = dVar10;
  *(double *)(param_5 + 0x158) = dVar3;
  *(double *)(param_5 + 0x160) = dVar5;
  _CLLocationCoordinate2DMake();
  _CLLocationCoordinate2DMake();
  *(double *)(param_5 + 0x168) = param_1;
  *(double *)(param_5 + 0x170) = dVar8;
  *(double *)(param_5 + 0x178) = dVar1;
  *(double *)(param_5 + 0x180) = param_4;
  return;
}



/* Entry: 105f5b89c; end: 105f5ba2b; -[SCMapboxViewportController _areVisibleBoundsSectionsCalculatedForBounds:] */

bool FUN_105f5b89c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)(param_5 + 0x50);
  dVar4 = *(double *)(param_5 + 0x60);
  bVar1 = false;
  bVar2 = true;
  if (*(double *)(param_5 + 0x48) <= *(double *)(param_5 + 0x58)) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar3) && !NAN(dVar4)) {
      bVar1 = dVar3 == dVar4;
      bVar2 = dVar4 <= dVar3;
    }
  }
  if ((((!bVar2 || bVar1) && (ABS(*(double *)(param_5 + 0x58) - param_3) <= 2.220446049250313e-16))
      && (ABS(dVar4 - param_4) <= 2.220446049250313e-16)) &&
     ((ABS(*(double *)(param_5 + 0x48) - param_1) <= 2.220446049250313e-16 &&
      (ABS(dVar3 - param_2) <= 2.220446049250313e-16)))) {
    dVar3 = *(double *)(param_5 + 0x70);
    dVar4 = *(double *)(param_5 + 0x80);
    bVar1 = false;
    bVar2 = true;
    if (*(double *)(param_5 + 0x68) <= *(double *)(param_5 + 0x78)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar3) && !NAN(dVar4)) {
        bVar1 = dVar3 == dVar4;
        bVar2 = dVar4 <= dVar3;
      }
    }
    if (!bVar2 || bVar1) {
      if (*(double *)(param_5 + 0x98) < *(double *)(param_5 + 0x88)) {
        return false;
      }
      if (*(double *)(param_5 + 0xa0) < *(double *)(param_5 + 0x90)) {
        return false;
      }
      if (*(double *)(param_5 + 0xb8) < *(double *)(param_5 + 0xa8)) {
        return false;
      }
      if (*(double *)(param_5 + 0xc0) < *(double *)(param_5 + 0xb0)) {
        return false;
      }
      if (*(double *)(param_5 + 0xd8) < *(double *)(param_5 + 200)) {
        return false;
      }
      if (*(double *)(param_5 + 0xe0) < *(double *)(param_5 + 0xd0)) {
        return false;
      }
      if (*(double *)(param_5 + 0xf8) < *(double *)(param_5 + 0xe8)) {
        return false;
      }
      if (*(double *)(param_5 + 0x100) < *(double *)(param_5 + 0xf0)) {
        return false;
      }
      if (*(double *)(param_5 + 0x118) < *(double *)(param_5 + 0x108)) {
        return false;
      }
      if (*(double *)(param_5 + 0x120) < *(double *)(param_5 + 0x110)) {
        return false;
      }
      if (*(double *)(param_5 + 0x138) < *(double *)(param_5 + 0x128)) {
        return false;
      }
      if (*(double *)(param_5 + 0x140) < *(double *)(param_5 + 0x130)) {
        return false;
      }
      if (*(double *)(param_5 + 0x158) < *(double *)(param_5 + 0x148)) {
        return false;
      }
      if (*(double *)(param_5 + 0x160) < *(double *)(param_5 + 0x150)) {
        return false;
      }
      if (*(double *)(param_5 + 0x180) < *(double *)(param_5 + 0x170)) {
        return false;
      }
      return *(double *)(param_5 + 0x168) <= *(double *)(param_5 + 0x178);
    }
  }
  return false;
}



/* Entry: 105f5ba2c; end: 105f5ba87; -[SCMapboxViewportController _publishDidChangeFollowingUserLocationWithAnimatedEvent:] */

void FUN_105f5ba2c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c65a8;
  func_0x00010c0bab00(PTR_PTR_1126c65a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x188) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x188) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108fb118,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f5ba88; end: 105f5bae3; -[SCMapboxViewportController _publishDidChangeTargetEvent] */

void FUN_105f5ba88(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c65a8;
  func_0x00010c0bab20(PTR_PTR_1126c65a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x188) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x188) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108fb168,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f5bae4; end: 105f5bb3f; -[SCMapboxViewportController _publishDidChangeWithoutGesturesEvent] */

void FUN_105f5bae4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c65a8;
  func_0x00010c0bab40(PTR_PTR_1126c65a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x188) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x188) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108fb1b8,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f5bb40; end: 105f5bb83; -[SCMapboxViewportController _publishViewportIsChangingEvent] */

void FUN_105f5bb40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c65a8;
  func_0x00010c0bab60(PTR_PTR_1126c65a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f5bb84; end: 105f5bbdf; -[SCMapboxViewportController _publishRegionDidChangeWithAnimatedEvent:] */

void FUN_105f5bb84(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c65a8;
  func_0x00010c0babe0(PTR_PTR_1126c65a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x188) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x188) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108fb208,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f5bbe0; end: 105f5bc3b; -[SCMapboxViewportController _publishRegionWillChangeWithAnimatedEvent:] */

void FUN_105f5bbe0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c65a8;
  func_0x00010c0bac00(PTR_PTR_1126c65a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x188) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x188) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108fb258,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f5bc3c; end: 105f5bc97; -[SCMapboxViewportController _publishWillMoveWithCoordinateEvent:] */

void FUN_105f5bc3c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c65a8;
  func_0x00010c0bac60(PTR_PTR_1126c65a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x188) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x188) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108fb2a8,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f5bc98; end: 105f5bcf3; -[SCMapboxViewportController _publishWillSettleOnCoordinateFromPanningWithCoordinate:] */

void FUN_105f5bc98(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c65a8;
  func_0x00010c0bac80(PTR_PTR_1126c65a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x188) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x188) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108fb2f8,&uStack_40,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 105f5bcf4; end: 105f5bd63; -[SCMapboxViewportController .cxx_destruct] */

void FUN_105f5bcf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f5bd64; end: 105f5bebb; -[SCMapboxView initWithFrame:maxMapZoomLevel:nativeMapSDK:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105f5bd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126bc310;
  puVar2 = &uStack_70;
  _objc_retain(param_8);
  func_0x00010c277640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126ee2f8;
  uStack_70 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,
                      PTR_s_initWithFrame_styleURL_mapSdk__1125e2dc8,0,param_8);
  _objc_release(param_8);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c1ee8c0(0x4034000000000000,puVar2);
    func_0x00010c1c3d40(param_5,puVar2);
    func_0x00010c1dbe80(puVar2);
    func_0x00010c1ee740(puVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11273b128;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    puVar4 = (undefined1 *)puVar2;
    func_0x00010c279540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 105f5bebc; end: 105f5beeb; -[SCMapboxView traitCollectionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5bebc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273b128);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f5beec; end: 105f5c0bf; -[SCMapboxView traitCollectionDidChange:] */

void FUN_105f5beec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x2) {
    puStack_38 = PTR_PTR_1126ee2f8;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_traitCollectionDidChange__11267bf88,param_3);
    func_0x00010c2775c0(PTR_PTR_1126bc310);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f5c0c0; end: 105f5c0d3; -[SCMapboxView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5c0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273b128,0);
  return;
}



/* Entry: 105f5c0d4; end: 105f5c113; +[SCMapboxCameraUtil centerMap:bounds:edgePadding:animated:completion:] */

void FUN_105f5c0d4(void)

{
  func_0x00010bf34720();
  return;
}



/* Entry: 105f5c114; end: 105f5c22b; +[SCMapboxCameraUtil centerMap:bounds:duration:edgePadding:completion:] */

void FUN_105f5c114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = param_3;
  uStack_a0 = param_2;
  uStack_98 = param_1;
  uStack_90 = param_2;
  uStack_88 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_3;
  uStack_70 = param_4;
  _objc_retain(param_11);
  _objc_retain(param_10);
  func_0x00010bf7f0e0(param_10);
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_9,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &uStack_a8;
  uVar3 = 4;
  func_0x00010c2239a0(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                      param_1,param_5,param_10,param_9,puVar2,4,puVar1,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  uVar4 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
  _objc_retain(uVar3);
  _objc_retain(puVar2);
  func_0x00010bfbc100(puVar1,param_9,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2a00(in_stack_00000000,in_stack_00000008,in_stack_00000018,param_1,param_5,param_7,
                      in_stack_00000010,0,puVar2,param_9,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f5c22c; end: 105f5c31f; +[SCMapboxCameraUtil centerMap:coordinate:zoomLevel:edgePadding:duration:completion:] */

void FUN_105f5c22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  uVar2 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
  _objc_retain(param_11);
  _objc_retain(param_10);
  func_0x00010bfbc100(puVar1,param_9,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2a00(param_1,param_2,param_4,param_5,param_6,param_7,param_3,0,param_10,param_9,
                      puVar1,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f5c320; end: 105f5c3bf; +[SCMapboxCameraUtil flyToCoordinate:zoomLevel:mapView:duration:completion:] */

void FUN_105f5c320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bf4c7c0(param_7);
  func_0x00010bfb3420(param_1,param_2,param_3,param_4,uVar1,uVar2,uVar3,uVar4,param_5,param_6,
                      param_7,param_8);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105f5c3c0; end: 105f5c3ef; +[SCMapboxCameraUtil flyToCoordinate:zoomLevel:mapView:duration:edgePadding:completion:] */

void FUN_105f5c3c0(void)

{
  func_0x00010bfb3480();
  return;
}



/* Entry: 105f5c3f0; end: 105f5c7a7; +[SCMapboxCameraUtil flyToCoordinate:zoomLevel:pitch:mapView:duration:edgePadding:completion:] */

void FUN_105f5c3f0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined *param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = param_3;
  dVar9 = param_4;
  _objc_retain(param_8);
  puVar1 = param_9;
  _objc_retain();
  _CLLocationCoordinate2DIsValid(param_1,param_2);
  if (((ulong)puVar1 & 1) == 0) {
    if (param_9 != (undefined *)0x0) {
      (**(code **)(param_9 + 0x10))(param_9,1);
    }
  }
  else {
    dVar6 = param_1;
    dVar8 = param_2;
    func_0x00010bf50ea0(param_1,param_2,param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf20c00(param_8);
    dVar5 = dVar9 * 0.5;
    func_0x00010bf20c00(param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf51400(dVar6 - dVar7 * 0.5,dVar8 - dVar5,param_8);
    func_0x00010bf20c00(param_8);
    dVar7 = 0.0;
    if (0.0 <= param_3) {
      dVar7 = param_3;
    }
    dVar6 = (double)NEON_fminnm(dVar7,0x4039800000000000);
    _exp2(dVar6);
    dVar7 = -85.0511287798066;
    if (-85.0511287798066 <= param_1) {
      dVar7 = param_1;
    }
    dVar7 = (double)NEON_fminnm(dVar7,0x40554345b1a549d7);
    dVar7 = dVar7 * 0.017453292519943295;
    _cos(dVar7);
    dVar8 = 0.2617993877991494;
    _tan(0x3fd0c152382d7365);
    puVar1 = PTR_PTR_1126c65a0;
    func_0x00010bf29d00(param_1,param_2,
                        (((dVar7 * 6.283185307179586 * 6378137.0) / (dVar6 * 512.0)) * dVar9 * 0.5)
                        / dVar8,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_8;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071e40();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar2 = param_8;
      func_0x00010bf28e60(param_8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_6;
      func_0x00010be5ca20();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        _objc_retain(puVar1);
        _objc_retain(param_8);
        _objc_retain(param_9);
        func_0x00010be18400(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_5,
                            0xbff0000000000000,param_8);
        _objc_release(param_9);
        _objc_release(param_8);
        puVar4 = puVar1;
      }
      else {
        _objc_retain(param_9);
        func_0x00010bf34740(param_1,param_2,param_3,*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_5,param_6)
        ;
        puVar4 = param_9;
      }
      _objc_release(puVar4);
    }
    else if (param_9 != (undefined *)0x0) {
      (**(code **)(param_9 + 0x10))(param_9,0);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 105f5c7a8; end: 105f5c7bf;  */

void FUN_105f5c7a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f5c7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 105f5c7c0; end: 105f5c84f;  */

void FUN_105f5c7c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf28e60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5ca20(uVar4);
    uVar3 = (uint)uVar4 ^ 1;
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f5c83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
    return;
  }
  return;
}



/* Entry: 105f5c850; end: 105f5c86b; +[SCMapboxCameraUtil flyToCoordinateBounds:mapView:duration:edgePadding:completion:] */

void FUN_105f5c850(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_flyToCoordinateBounds_pitch_mapV_1125ca6d8);
  return;
}



/* Entry: 105f5c86c; end: 105f5cb53; +[SCMapboxCameraUtil flyToCoordinateBounds:pitch:mapView:duration:edgePadding:completion:] */

void FUN_105f5c86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_9;
  func_0x00010bf2b200(param_1,param_2,param_3,param_4,in_stack_00000000,in_stack_00000008,
                      in_stack_00000010,in_stack_00000018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dbe20();
  func_0x00010bf34640(uVar1);
  if (param_5 <= -90.0) goto LAB_105f5cb10;
  uVar2 = param_9;
  func_0x00010bf28e60(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010be5ca20();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))(param_10,0);
    }
    goto LAB_105f5cb10;
  }
  uVar2 = param_9;
  func_0x00010bf28e60(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010be5ca20();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
LAB_105f5ca8c:
    _objc_retain(uVar1);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010bfb3400(param_6,0xbff0000000000000,param_9);
    _objc_release(param_10);
    _objc_release(param_9);
  }
  else {
    func_0x00010bf01f00(uVar1);
    uVar4 = param_9;
    dVar5 = param_5;
    func_0x00010bf28e60(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01f00();
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (param_5 <= dVar5) goto LAB_105f5ca8c;
    _objc_retain(uVar1);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010bf34720(param_1,param_2,param_3,param_4,0x3fd3333333333333,param_7);
    _objc_release(param_10);
    _objc_release(param_9);
  }
  _objc_release(uVar1);
LAB_105f5cb10:
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  return;
}



/* Entry: 105f5cb54; end: 105f5cc4b;  */

void FUN_105f5cb54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf28e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5ca20(uVar3);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f5cbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,(uint)uVar3 ^ 1);
    return;
  }
  return;
}



/* Entry: 105f5cc4c; end: 105f5cd23; +[SCMapboxCameraUtil _mapCamera:isEqualToCamera:ignoreAltitude:] */

bool FUN_105f5cc4c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf34640(param_5);
  dVar2 = param_1;
  func_0x00010bf34640(param_6);
  if (0.0005 <= ABS(param_1 - dVar2)) {
    bVar1 = false;
  }
  else {
    func_0x00010bf34640(param_5);
    dVar2 = param_2;
    func_0x00010bf34640(param_6);
    dVar2 = ABS(param_2 - dVar2);
    bVar1 = dVar2 < 0.0005;
    if (((param_7 & 1) == 0) && (bVar1)) {
      func_0x00010bf01f00(param_5);
      dVar3 = dVar2;
      func_0x00010bf01f00(param_6);
      bVar1 = ABS(dVar2 - dVar3) < 0.001;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 105f5cd24; end: 105f5ce9f; -[SCMGLMapViewListenerAnnouncer description] */

void FUN_105f5cd24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_105f5cea0(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f5cea0; end: 105f5ceff;  */

void FUN_105f5cea0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 105f5cf00; end: 105f5d1ab; -[SCMGLMapViewListenerAnnouncer addListener:] */

undefined8 FUN_105f5cf00(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_1108fb0d8;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_105f5d1ac(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_105f5d2ec(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_105f5d0b4:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_105f5d0d4;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_105f5d1ac(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_105f5d1ac(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_105f5d2ec(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_105f5d0b4;
    }
  }
  uVar9 = 1;
LAB_105f5d0d4:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 105f5d1ac; end: 105f5d2eb;  */

void FUN_105f5d1ac(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_105f5e29c();
LAB_105f5d2e8:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_105f5d2e8;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 105f5d2ec; end: 105f5d333;  */

void FUN_105f5d2ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 105f5d334; end: 105f5d563; -[SCMGLMapViewListenerAnnouncer removeListener:] */

void FUN_105f5d334(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_105f5d4e8;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_105f5d39c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_105f5d2ec(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_105f5d4e8;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_105f5d39c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_1108fb0d8;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_105f5d1ac(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_105f5d2ec(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_105f5d4e8;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_105f5d4e8:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5d564; end: 105f5d673; -[SCMGLMapViewListenerAnnouncer mapView:regionWillChangeAnimated:] */

void FUN_105f5d564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba560(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5d674; end: 105f5d77b; -[SCMGLMapViewListenerAnnouncer mapViewRegionIsChanging:] */

void FUN_105f5d674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba960(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5d77c; end: 105f5d88b; -[SCMGLMapViewListenerAnnouncer mapView:regionDidChangeAnimated:] */

void FUN_105f5d77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba500(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5d88c; end: 105f5d9ab; -[SCMGLMapViewListenerAnnouncer mapView:willSettleOnCoordinateFromPanning:] */

void FUN_105f5d88c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_5);
  FUN_105f5cea0(&puStack_60,param_3 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba620(param_1,param_2,uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f5d9ac; end: 105f5dab3; -[SCMGLMapViewListenerAnnouncer mapViewWillStartLoadingMap:] */

void FUN_105f5d9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0baa00(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5dab4; end: 105f5dbbb; -[SCMGLMapViewListenerAnnouncer mapViewDidFinishLoadingMap:] */

void FUN_105f5dab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba780(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5dbbc; end: 105f5dce3; -[SCMGLMapViewListenerAnnouncer mapViewDidFailLoadingMap:withError:] */

void FUN_105f5dbbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba720(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5dce4; end: 105f5ddf3; -[SCMGLMapViewListenerAnnouncer mapViewDidFinishRenderingFrame:fullyRendered:] */

void FUN_105f5dce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba7c0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5ddf4; end: 105f5df1b; -[SCMGLMapViewListenerAnnouncer mapView:didFinishLoadingStyleWithName:] */

void FUN_105f5ddf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba4c0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5df1c; end: 105f5e023; -[SCMGLMapViewListenerAnnouncer mapViewDidReportMapReady:] */

void FUN_105f5df1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba840(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5e024; end: 105f5e133; -[SCMGLMapViewListenerAnnouncer mapView:didReportMapFriendLoadWithVisibleFriends:] */

void FUN_105f5e024(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba4e0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5e134; end: 105f5e253; -[SCMGLMapViewListenerAnnouncer mapView:didChangeUserTrackingMode:animated:] */

void FUN_105f5e134(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  FUN_105f5cea0(&puStack_60,param_1 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ba480(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f5e254; end: 105f5e27b; -[SCMGLMapViewListenerAnnouncer .cxx_destruct] */

void FUN_105f5e254(long param_1)

{
  FUN_105f5e2b0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 105f5e27c; end: 105f5e29b; -[SCMGLMapViewListenerAnnouncer .cxx_construct] */

void FUN_105f5e27c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 105f5e29c; end: 105f5e2af;  */

undefined * FUN_105f5e29c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
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
  return puVar4;
}



/* Entry: 105f5e2b0; end: 105f5e307;  */

long FUN_105f5e2b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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


