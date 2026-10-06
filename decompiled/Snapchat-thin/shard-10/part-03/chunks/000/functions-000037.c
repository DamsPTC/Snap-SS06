/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d994b8; end: 107d994bf; -[SCGalleryStoryExporterItem isCircularMedia] */

bool FUN_107d994b8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x38);
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010b5fa088();
  if (lVar3 - 2U < 0xb) {
    lVar3 = lVar2;
    func_0x00010b5fa088(lVar2);
    bVar1 = lVar3 - 0xdU < 0xfffffffffffffffc;
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 107d994c0; end: 107d994c7; -[SCGalleryStoryExporterItem isSpectaclesImage] */

long FUN_107d994c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010b5fa088();
  if (lVar2 - 2U < 0xb) {
    lVar2 = lVar1;
    func_0x00010b5fa088(lVar1);
    func_0x00010b5fa4c8();
  }
  else {
    lVar2 = 0;
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107d994c8; end: 107d994cf; -[SCGalleryStoryExporterItem isSpectacles60fps] */

undefined8 FUN_107d994c8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010b5fa088();
  if (((uVar1 < 0xc) && ((1L << (uVar1 & 0x3f) & 0xa9fU) != 0)) || (uVar1 == 9999)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 107d994d0; end: 107d99523; -[SCGalleryStoryExporterItem isGenAISnap] */

bool FUN_107d994d0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c0c5b00();
  if (iVar1 != 5) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010c0c5b00();
    if (iVar1 != 6) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0c5b00(uVar2);
      return (int)uVar2 == 7;
    }
  }
  return true;
}



/* Entry: 107d99524; end: 107d995b7; -[SCGalleryStoryExporterItem spectaclesExportSize] */

undefined1  [16] FUN_107d99524(double param_1,ulong param_2)

{
  ulong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_2;
  func_0x00010c06e920();
  if ((uVar1 & 1) == 0) {
    dVar2 = *(double *)PTR__CGSizeZero_110347620;
    param_1 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x000109023974(*(undefined8 *)(param_2 + 0x38));
    uVar1 = *(ulong *)(param_2 + 0x38);
    func_0x000109023c14();
    dVar2 = param_1;
    if ((uVar1 & 1) == 0) {
      param_1 = param_1 + (double)(long)((param_1 / 0.95) * 0.025 * 0.125) * 8.0 * 2.0;
      dVar2 = param_1;
    }
  }
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = dVar2;
  return auVar3;
}



/* Entry: 107d995b8; end: 107d9960b; -[SCGalleryStoryExporterItem time] */

double FUN_107d995b8(float param_1,long param_2)

{
  ulong uVar1;
  double dVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x38);
  func_0x00010bfed740();
  dVar2 = 3.0;
  if (((uVar1 & 1) == 0) && (func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x38)), 0.0 < param_1)) {
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x38));
    dVar2 = (double)param_1;
  }
  return dVar2;
}



/* Entry: 107d9960c; end: 107d996d3; -[SCGalleryStoryExporterItem exportToVideoURLCompletion:progressBlock:spectaclesExportSettings:snapVideoFilterAdaptor:previewAssetVideoProviderFactory:] */

void FUN_107d9960c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010b5fa088();
  func_0x00010b5fa4c8();
  if (iVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x38);
    func_0x00010b5fa088();
    if (uVar2 < 0xd && (1L << (uVar2 & 0x3f) & 0x1566U) != 0) {
      func_0x00010be0c980(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      func_0x00010b5fa088(*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    func_0x00010be0c7a0(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d996d4; end: 107d999f3; -[SCGalleryStoryExporterItem _exportImageToVideoURLCompletion:progressBlock:spectaclesExportSettings:] */

void FUN_107d996d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126bc7b8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bfb98;
  puVar3 = puVar2;
  func_0x00010c0ef4a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230420();
  _objc_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bfbc8;
    func_0x000108ec16c0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bf586e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107d999f4;
    puStack_90 = &UNK_110a0c420;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_5);
    uStack_88 = param_5;
    _objc_retain(param_4);
    uStack_78 = param_4;
    func_0x00010c134cc0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_80);
    puVar5 = auStack_70;
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_b0,auStack_68);
    _objc_retain(param_3);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010be05d80(param_1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(param_3);
    puVar5 = auStack_b0;
  }
  _objc_destroyWeak(puVar5);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d999f4; end: 107d99b0b;  */

void FUN_107d999f4(double param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  _objc_retain(param_4);
  lVar3 = param_3 + 0x38;
  _objc_loadWeakRetained();
  lVar5 = param_4;
  if (lVar3 != 0) {
    if (param_4 == 0) {
      lVar5 = *(long *)(param_3 + 0x28);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,puVar4);
      _objc_release(puVar4);
      lVar5 = 0;
    }
    else {
      func_0x00010be23d60(lVar3);
      lVar5 = lVar3;
      dVar6 = param_1;
      func_0x00010be78640(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      uVar1 = *(undefined8 *)(lVar3 + 0x58);
      uVar2 = *(undefined8 *)(lVar3 + 0x60);
      func_0x00010c26f000(lVar3);
      FUN_107d98c7c(param_1,param_2,(float)dVar6,uVar1,uVar2,lVar5,*(undefined8 *)(param_3 + 0x30),
                    *(undefined8 *)(param_3 + 0x28));
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107d99b0c; end: 107d99b83;  */

void FUN_107d99b0c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010be0c660(lVar1);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,param_2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d99b84; end: 107d99cf3; -[SCGalleryStoryExporterItem _exportAnimatedImageToVideoWithSnapDetail:completion:progressBlock:spectaclesExportSettings:] */

void FUN_107d99b84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0ef4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bfe8be0(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107d99cf4; end: 107d99e1b;  */

void FUN_107d99cf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d99e1c;
  puStack_60 = &UNK_1108903a0;
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(uVar4);
  uStack_58 = uVar4;
  func_0x00010c1e4740(param_5,param_4,&puStack_78);
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  iVar2 = (int)*(undefined8 *)(param_3 + 0x20);
  func_0x00010c07f100();
  if (iVar2 != 0) {
    iVar2 = (int)*(undefined8 *)(param_3 + 0x20);
    func_0x00010c06e920();
    if (iVar2 != 0) {
      func_0x00010bf39860(*(undefined8 *)(param_3 + 0x28));
      uVar4 = param_1;
      uVar5 = param_2;
    }
  }
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107d99e30;
  puStack_90 = &UNK_11085aca8;
  uStack_88 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar3);
  uStack_80 = uVar3;
  func_0x00010bfae7c0(uVar4,uVar5,param_5,param_4,0,&puStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 107d99e1c; end: 107d99e2f;  */

void FUN_107d99e1c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d99e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d99e30; end: 107d99e97;  */

void FUN_107d99e30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d99e98; end: 107d99fc3; -[SCGalleryStoryExporterItem _exportVideoWithVideoURLCompletion:progressBlock:spectaclesExportSettings:] */

void FUN_107d99e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be05d80(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d99fc4; end: 107d9a247;  */

void FUN_107d99fc4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((param_2 == 0) && (lVar1 != 0)) {
    func_0x000108019bb0(*(undefined8 *)(lVar1 + 0x38));
    uVar2 = *(ulong *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f100();
    uVar3 = uVar2;
    func_0x00010bf58fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bea9fe0(lVar1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107d9a248;
    puStack_80 = &UNK_1108903a0;
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uStack_78 = uVar7;
    func_0x00010c1e4740(uVar3);
    puVar4 = PTR_PTR_1126b26c0;
    _objc_retain(uVar3);
    _objc_opt_class(puVar4);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126cf9c0;
    _objc_alloc(PTR_PTR_1126cf9c0);
    func_0x00010be23d60(lVar1);
    func_0x00010c048b20(puVar4);
    _objc_initWeak(auStack_a0,puVar4);
    _objc_copyWeak(auStack_a8,auStack_a0);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar7);
    func_0x00010c17fb20(puVar4);
    lVar6 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf9d620();
    _objc_release(lVar6);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uStack_78);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107d9a248; end: 107d9a25b;  */

void FUN_107d9a248(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d9a254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d9a25c; end: 107d9a313;  */

void FUN_107d9a25c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12e1e0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d9a314; end: 107d9a427; -[SCGalleryStoryExporterItem _downloadCloudFileIfNeeded:] */

void FUN_107d9a314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar1);
    lVar5 = *(long *)(param_1 + 0x40);
  }
  puVar3 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107d9a428;
  puStack_40 = &UNK_110a0c4b0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf89240(lVar5,param_2,0,puVar3,0,PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107d9a428; end: 107d9a497;  */

void FUN_107d9a428(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110ebd858,0,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107d9a494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2);
  return;
}



/* Entry: 107d9a498; end: 107d9a537; -[SCGalleryStoryExporterItem _getVideoTargetSize:] */

undefined1  [16]
FUN_107d9a498(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c06e920();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x38);
    func_0x000109023714();
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c2a5040(uVar3);
    param_1 = (double)(int)uVar3;
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010bfe0640(uVar3);
    if (iVar1 == 0) {
      param_2 = (double)(int)uVar3;
    }
    else {
      param_2 = (double)((int)uVar3 / 2);
    }
  }
  else {
    func_0x00010bf39860(param_5);
  }
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107d9a538; end: 107d9a65f; -[SCGalleryStoryExporterItem _setVideoFilterPropertiesForSpectacles:spectaclesExportSettings:] */

void FUN_107d9a538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c07f100();
  puVar3 = PTR_PTR_1126bc7b8;
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    puVar4 = puVar3;
    func_0x00010c0ef4a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010902339c(uVar6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar2 = param_4;
    func_0x00010bf39800(param_4);
    uVar5 = uVar6;
    func_0x000109024c88(0x3f9999999999999a,uVar6,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207b40(param_3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d9a660; end: 107d9a813; -[SCGalleryStoryExporterItem _prepareImage:spectaclesExportSettings:] */

void FUN_107d9a660(double param_1,long param_2,undefined8 param_3,undefined *param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_2;
  func_0x00010c07f0e0();
  if (((int)lVar2 != 0) && (lVar2 = param_2, func_0x00010c06e920(), (int)lVar2 != 0)) {
    uVar3 = param_5;
    func_0x00010bf39800();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((uVar3 & 1) == 0) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf39860(param_5);
    dVar6 = (double)(long)(param_1 * 0.025 * 0.125);
    dVar8 = dVar6 * 8.0;
    func_0x00010bf39860(param_5);
    dVar9 = dVar6 + dVar8 * -2.0;
    iVar1 = (int)*(undefined8 *)(param_2 + 0x38);
    func_0x000109023c14();
    if (iVar1 != 0) {
      func_0x000109023974(*(undefined8 *)(param_2 + 0x38));
      dVar7 = (double)(long)(dVar6 * 0.025 * 0.125) * 8.0;
      dVar6 = dVar6 + dVar7 * -2.0;
      puVar5 = param_4;
      func_0x00010bf5c7a0(dVar7,dVar7,dVar6,dVar6,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      param_4 = puVar5;
      func_0x00010bf89880(0x3fe0000000000000,puVar5,param_3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    puVar5 = param_4;
    func_0x00010c14e6c0(dVar9,dVar9,0x3ff0000000000000,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    param_4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c12fbe0(dVar8,PTR__OBJC_CLASS___UIImage_1126aea68,param_3,puVar5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 107d9a814; end: 107d9a837; -[SCGalleryStoryExporterItem copyWithZone:] */

undefined8 FUN_107d9a814(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d9a838; end: 107d9a83f; -[SCGalleryStoryExporterItem snap] */

undefined8 FUN_107d9a838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d9a840; end: 107d9a847; -[SCGalleryStoryExporterItem cloudFile] */

undefined8 FUN_107d9a840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d9a848; end: 107d9a84f; -[SCGalleryStoryExporterItem userSession] */

undefined8 FUN_107d9a848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d9a850; end: 107d9a857; -[SCGalleryStoryExporterItem spectaclesAuxiliaryContentServices] */

undefined8 FUN_107d9a850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d9a858; end: 107d9a85f; -[SCGalleryStoryExporterItem imageToVideoWriterScopeExposer] */

undefined8 FUN_107d9a858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d9a860; end: 107d9a867; -[SCGalleryStoryExporterItem imageToVideoWriterScopeServices] */

undefined8 FUN_107d9a860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d9a868; end: 107d9a86f; -[SCGalleryStoryExporterItem targetTrajectoryFactory] */

undefined8 FUN_107d9a868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107d9a870; end: 107d9a877; -[SCGalleryStoryExporterItem cachingMediaManager] */

undefined8 FUN_107d9a870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107d9a878; end: 107d9a933; -[SCGalleryStoryExporterItem .cxx_destruct] */

void FUN_107d9a878(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9a934; end: 107d9a94b;  */

void FUN_107d9a934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107d9a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107d9a94c; end: 107d9a96f;  */

void FUN_107d9a94c(long param_1,undefined8 param_2)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107d9a970; end: 107d9ae1b; -[SCMemoriesActivityItemProviderBuilder initWithUserSession:dataObjectContext:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:videoFilterFactory:previewAssetVideoProviderFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:snapVideoFilterScopeExposer:cachingMediaManager:mergedDataSource:spectaclesAuxiliaryContentServices:circumstanceEngine:targetTrajectoryFactory:memoriesCloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesTranscodingHelper:backgroundTaskWrapper:reverseAudioCache:creativeToolsMemoriesResources:dreamsSessionService:] */

undefined8 *
FUN_107d9a970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126fb060;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 9,param_11);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d9ae1c; end: 107d9b13f; -[SCMemoriesActivityItemProviderBuilder activityItemProviderForItem:userContext:] */

void FUN_107d9ae1c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfbd100();
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  puVar6 = PTR_DAT_1126a4ec8;
  puVar8 = param_3;
  if (puVar1 == (undefined *)0x1) {
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010010fab4(param_3,puVar6);
    if ((int)puVar2 == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126af4d0;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = puVar8;
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf529e0();
    puVar6 = PTR_PTR_1126af4c0;
    puVar1 = puVar2;
    puVar7 = puVar4;
    if (puVar5 == (undefined *)0x0) {
      puVar1 = puVar8;
      func_0x00010bf97200(puVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(puVar1);
      puVar7 = puVar6;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar1 = PTR_PTR_1126af4d0;
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(uVar3);
      _objc_release(puVar6);
    }
    puVar6 = puVar1;
    if (puVar7 != (undefined *)0x0) {
      puVar6 = puVar7;
      func_0x00010b5fca54(puVar7,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    puVar2 = puVar6;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x1) {
      puVar2 = puVar6;
      func_0x00010bfb1920(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef17a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      puVar2 = puVar8;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if (puVar2 != (undefined *)0x4) {
        puVar2 = puVar6;
        func_0x00010b5f8ce0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(puVar2);
      }
      func_0x00010bef17e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    if (puVar1 != (undefined *)0x2) {
      param_1 = 0;
      goto LAB_107d9b118;
    }
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((ulong)puVar6 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(param_3);
    func_0x00010bef1760(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar8);
LAB_107d9b118:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d9b140; end: 107d9b287; -[SCMemoriesActivityItemProviderBuilder activityItemProviderForStorySnaps:isMultiSnap:userContext:] */

void FUN_107d9b140(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x00010c14cca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a0c500);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d7c88;
  _objc_alloc(PTR_PTR_1126d7c88);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar5 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar6 = param_1 + 0x50;
  _objc_loadWeakRetained();
  func_0x00010c04a180(puVar3,param_2,param_3,param_4,0,uVar1,uVar2,uVar8,uVar9,uVar10,uVar7,lVar4,
                      lVar5,lVar6,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c21e120(puVar3,param_2,param_5);
  func_0x00010c21f2c0(puVar3,param_2,*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d9b288; end: 107d9b28f;  */

long FUN_107d9b288(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_2 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_2;
    func_0x00010b5fa088();
    if (lVar1 == 9999) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2;
      func_0x00010b5fa5d4(param_2);
    }
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 107d9b290; end: 107d9b37b; -[SCMemoriesActivityItemProviderBuilder activityItemProviderForSnap:userContext:] */

void FUN_107d9b290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d7c90;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c046ee0(puVar1,param_2,param_3,uVar3,lVar2,*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0xa8));
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010c21e120(puVar1,param_2,param_4);
  func_0x00010c21f2c0(puVar1,param_2,*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf8a8a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191ea0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d9b37c; end: 107d9b3ef; -[SCMemoriesActivityItemProviderBuilder activityItemProviderForAsset:userContext:] */

void FUN_107d9b37c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7cc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c035c20();
  _objc_release(param_3);
  func_0x00010c21e120(puVar1,param_2,param_4);
  func_0x00010c21f2c0(puVar1,param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d9b3f0; end: 107d9b8d7; -[SCMemoriesActivityItemProviderBuilder activityItemProvidersForItems:gallerySnaps:userContext:] */

void FUN_107d9b3f0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined *puVar13;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined **unaff_x28;
  undefined *puVar14;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = param_5;
  _objc_retain(param_3);
  uStack_160 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  iVar11 = (int)param_7;
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_130;
    puStack_158 = param_3;
    puStack_150 = puVar1;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x25 = *(undefined **)(lStack_138 + (long)puVar13 * 8);
        puVar14 = unaff_x25;
        func_0x00010bfbd100();
        if (puVar14 == (undefined *)0x2) {
          unaff_x25 = param_1;
          func_0x00010bef1760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
LAB_107d9b7f8:
          _objc_release(unaff_x25);
        }
        else if (puVar14 == (undefined *)0x1) {
          _objc_retain(unaff_x25);
          puVar4 = PTR_PTR_1126af4d0;
          uVar3 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          puVar5 = unaff_x25;
          func_0x00010c245800();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010bf529e0();
          puVar14 = PTR_PTR_1126af4c0;
          puVar7 = puVar4;
          unaff_x27 = puVar5;
          if (puVar6 == (undefined *)0x0) {
            puVar1 = unaff_x25;
            func_0x00010bf97200(unaff_x25);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c269d40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa70a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            _objc_release(puVar1);
            unaff_x27 = puVar14;
            func_0x00010c245800();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar7 = PTR_PTR_1126af4d0;
            uVar3 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c269d40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7380();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            _objc_release(uVar3);
            _objc_release(puVar14);
            puVar1 = puStack_150;
            param_3 = puStack_158;
          }
          puVar14 = puVar7;
          func_0x00010bf529e0();
          unaff_x26 = puVar7;
          if (puVar14 != (undefined *)0x0) {
            if (unaff_x27 != (undefined *)0x0) {
              unaff_x26 = unaff_x27;
              func_0x00010b5fca54(unaff_x27,puVar7);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              puVar1 = puStack_150;
            }
            puVar14 = unaff_x25;
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            puVar4 = param_1;
            if ((long)puVar14 < 5) {
              if (puVar14 + -1 < (undefined *)0x3) {
LAB_107d9b6ec:
                func_0x00010be60900(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(puVar1);
              }
              else {
                if (puVar14 != (undefined *)0x0) {
                  if (puVar14 == (undefined *)0x4) {
                    puVar14 = unaff_x26;
                    func_0x00010bfb1920(unaff_x26);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010b5fa088();
                    puVar1 = puStack_150;
                    _objc_release(puVar14);
                    goto LAB_107d9b738;
                  }
                  goto LAB_107d9b7e8;
                }
LAB_107d9b764:
                puVar4 = unaff_x26;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_f8 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = param_1;
                func_0x00010bdc5400(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(puStack_150);
                param_3 = puStack_158;
                _objc_release(puVar1);
                puVar1 = puStack_150;
                _objc_release(puVar14);
              }
LAB_107d9b7dc:
              _objc_release(puVar4);
            }
            else if ((long)puVar14 < 8) {
              if (puVar14 + -5 < (undefined *)0x2) goto LAB_107d9b6ec;
              if (puVar14 == (undefined *)0x7) goto LAB_107d9b764;
            }
            else if ((puVar14 == (undefined *)0x8) || (puVar14 == (undefined *)0x270f)) {
LAB_107d9b738:
              func_0x00010bef17e0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              goto LAB_107d9b7dc;
            }
          }
LAB_107d9b7e8:
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          goto LAB_107d9b7f8;
        }
        unaff_x28 = &PTR_PTR_1126af000;
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar2 = param_3;
      func_0x00010bf52a60();
      iVar11 = (int)param_7;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  uVar3 = uStack_160;
  uVar8 = uStack_160;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_1;
  uVar10 = uStack_148;
  func_0x00010be60900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010befa160(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar8);
  _objc_release(uVar3);
  puVar14 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = &uStack_2a0;
    uStack_190 = uVar3;
    pcStack_168 = FUN_107d9b8d8;
    lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1c0 = unaff_x28;
    puStack_1b8 = unaff_x27;
    puStack_1b0 = unaff_x26;
    puStack_1a8 = unaff_x25;
    puStack_1a0 = puVar1;
    puStack_198 = param_1;
    puStack_188 = puVar13;
    uStack_180 = uVar8;
    puStack_178 = param_3;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    _objc_retain(uVar10);
    if (iVar11 == 0) {
      puVar13 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef18c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar14;
      puVar14 = puVar4;
    }
    else {
      uVar3 = *(undefined8 *)(puVar14 + 0x60);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x000107da0188(puVar2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(uVar3);
      func_0x00010bef17e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR____NSArray0__struct_11034ab48;
      if (puVar14 != (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1d8 = puVar14;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar14);
    _objc_release(puVar13);
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    _objc_retain(puVar1);
    puVar13 = puVar1;
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar12 = *plStack_290;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_290 != lVar12) {
            _objc_enumerationMutation(puVar1);
          }
          uVar3 = *(undefined8 *)(lStack_298 + (long)puVar14 * 8);
          func_0x00010c207840(uVar3);
          func_0x00010c21d000(uVar3);
          func_0x00010c207660(uVar3);
          func_0x00010c212540(uVar3);
          func_0x00010c17c5e0(uVar3);
          puVar14 = puVar14 + 1;
        } while (puVar13 != puVar14);
        puVar13 = puVar1;
        puVar9 = &uStack_2a0;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(uVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126d7c88;
      _objc_retain(puVar9);
      _objc_alloc(puVar1);
      puVar13 = puVar2 + 0x40;
      _objc_loadWeakRetained();
      puVar14 = puVar2 + 0x48;
      _objc_loadWeakRetained();
      puVar2 = puVar2 + 0x50;
      _objc_loadWeakRetained();
      func_0x00010c04a180(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar2);
      _objc_release(puVar14);
      _objc_release(puVar13);
      func_0x00010c21e120(puVar1);
      func_0x00010c21f2c0(puVar1);
      func_0x00010c207660(puVar1);
      func_0x00010c212540(puVar1);
      func_0x00010c17c5e0(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d9b8d8; end: 107d9bb5b; -[SCMemoriesActivityItemProviderBuilder activityItemProvidersForSpectaclesItems:gallerySnaps:userContext:exportFormat:shouldMergeIntoSingleSnap:uploadToYouTube:] */

void FUN_107d9b8d8(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_78;
  long lStack_70;
  
  puVar4 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_7 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef18c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x000107da0188(param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
    func_0x00010bef17e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    puVar6 = param_1;
    if (param_1 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = param_1;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_130;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        uVar1 = *(undefined8 *)(lStack_138 + (long)puVar6 * 8);
        func_0x00010c207840(uVar1);
        func_0x00010c21d000(uVar1);
        func_0x00010c207660(uVar1);
        func_0x00010c212540(uVar1);
        func_0x00010c17c5e0(uVar1);
        puVar6 = puVar6 + 1;
      } while (puVar3 != puVar6);
      puVar3 = puVar2;
      puVar4 = &uStack_140;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126d7c88;
    _objc_retain(puVar4);
    _objc_alloc(puVar2);
    puVar3 = param_3 + 0x40;
    _objc_loadWeakRetained();
    puVar6 = param_3 + 0x48;
    _objc_loadWeakRetained();
    param_3 = param_3 + 0x50;
    _objc_loadWeakRetained();
    func_0x00010c04a180(puVar2);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(puVar6);
    _objc_release(puVar3);
    func_0x00010c21e120(puVar2);
    func_0x00010c21f2c0(puVar2);
    func_0x00010c207660(puVar2);
    func_0x00010c212540(puVar2);
    func_0x00010c17c5e0(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d9bb5c; end: 107d9bcb3; -[SCMemoriesActivityItemProviderBuilder activityItemProviderForSpectaclesSnaps:userContext:compositionMode:] */

void FUN_107d9bb5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_PTR_1126d7c88;
  _objc_retain(param_3);
  _objc_alloc(puVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar5 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar6 = param_1 + 0x50;
  _objc_loadWeakRetained();
  func_0x00010c04a180(puVar3,param_2,param_3,0,param_5,uVar1,uVar2,uVar8,uVar9,uVar10,uVar7,lVar4,
                      lVar5,lVar6,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c21e120(puVar3,param_2,param_4);
  func_0x00010c21f2c0(puVar3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010c207660(puVar3,param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010c212540(puVar3,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c17c5e0(puVar3,param_2,*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d9bcb4; end: 107d9be2b; -[SCMemoriesActivityItemProviderBuilder activityItemProviderPreviewVideoFilter:tabType:previewConfiguration:commonLoggingParamsBuilder:exportFormat:uploadToYouTube:] */

void FUN_107d9bcb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d7c98;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained();
  func_0x00010c05ea40(puVar1,param_2,uVar7,param_4,param_3,param_5,param_6,uVar5,uVar6,lVar2,lVar3,
                      lVar4,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0xa8));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c207840(puVar1,param_2,param_7);
  func_0x00010c21d000(puVar1,param_2,param_8);
  func_0x00010c207660(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010c212540(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c17c5e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d9be2c; end: 107d9bf97; -[SCMemoriesActivityItemProviderBuilder activityItemProviderPreviewImage:tabType:previewConfiguration:commonLoggingParamsBuilder:exportFormat:uploadToYouTube:] */

void FUN_107d9be2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d7c98;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained();
  func_0x00010c05ea20(puVar1,param_2,uVar7,param_4,param_3,param_5,param_6,uVar5,uVar6,lVar2,lVar3,
                      lVar4,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c207840(puVar1,param_2,param_7);
  func_0x00010c21d000(puVar1,param_2,param_8);
  func_0x00010c207660(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010c212540(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c17c5e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d9bf98; end: 107d9c243; -[SCMemoriesActivityItemProviderBuilder combinedActivityItemProviderForProviders:] */

void FUN_107d9bf98(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_3);
      puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246bc0(puVar1);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar2 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2917c0();
      func_0x00010bef17e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c248a80();
      func_0x00010c207840(param_1);
      _objc_release(lVar2);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        ___stack_chk_fail();
        puVar10 = &uStack_270;
        lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(lVar6);
        param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        lVar2 = lVar6;
        func_0x00010b5f8ce0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar2;
        func_0x00010bf52a60();
        if (lVar11 != 0) {
          lVar15 = *plStack_260;
          do {
            lVar16 = 0;
            do {
              if (*plStack_260 != lVar15) {
                _objc_enumerationMutation(lVar2);
              }
              uVar14 = *(ulong *)(lStack_268 + lVar16 * 8);
              func_0x00010bf529e0();
              lVar7 = param_3;
              if (uVar14 < 2) {
                func_0x00010bdc5400();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(param_1);
              }
              else {
                func_0x00010bef17e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(param_1);
              }
              _objc_release(lVar7);
              lVar16 = lVar16 + 1;
            } while (lVar11 != lVar16);
            lVar11 = lVar2;
            puVar10 = &uStack_270;
            func_0x00010bf52a60();
          } while (lVar11 != 0);
        }
        _objc_release(lVar2);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
          ___stack_chk_fail();
          lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(puVar10);
          param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          _objc_retain(puVar10);
          puVar8 = (undefined1 *)puVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar8 != (undefined1 *)0x0) {
            puVar12 = (undefined1 *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar10);
              }
              puVar1 = PTR_PTR_1126d7c90;
              _objc_alloc(PTR_PTR_1126d7c90);
              lVar15 = lVar6 + 0x50;
              _objc_loadWeakRetained(lVar15);
              func_0x00010c046ee0(puVar1);
              _objc_release(lVar15);
              func_0x00010c21e120(puVar1);
              func_0x00010c21f2c0(puVar1);
              uVar9 = *(undefined8 *)(lVar6 + 0xb8);
              func_0x00010bf8a8a0(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c191ea0(puVar1);
              _objc_release(uVar9);
              func_0x00010befa120(param_1);
              _objc_release(puVar1);
              puVar12 = puVar12 + 1;
            } while (puVar8 != puVar12);
            puVar8 = (undefined1 *)puVar10;
            func_0x00010bf52a60();
          }
          _objc_release(puVar10);
          _objc_release(puVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
            ___stack_chk_fail();
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0xb8),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0xb0),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0xa8),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0xa0),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x98),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x90),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x88),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x80),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x78),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x70),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x68),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x60),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x58),0);
            _objc_destroyWeak((undefined1 *)((long)puVar10 + 0x50));
            _objc_destroyWeak((undefined1 *)((long)puVar10 + 0x48));
            _objc_destroyWeak((undefined1 *)((long)puVar10 + 0x40));
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x38),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x30),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x28),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x20),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x18),0);
            _objc_storeStrong((undefined1 *)((long)puVar10 + 0x10),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_storeStrong_11034d330)((undefined1 *)((long)puVar10 + 8),0);
            return;
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return;
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar15 * 8);
      puVar3 = PTR_PTR_1126d7c90;
      _objc_opt_class(PTR_PTR_1126d7c90);
      uVar14 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar3);
      if ((uVar14 & 1) == 0) {
        puVar3 = PTR_PTR_1126d7c88;
        _objc_opt_class(PTR_PTR_1126d7c88);
        uVar14 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar3);
        if ((uVar14 & 1) != 0) {
          func_0x00010c245680(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar1);
          goto LAB_107d9c0c0;
        }
      }
      else {
        func_0x00010c23f220(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
LAB_107d9c0c0:
        _objc_release(uVar13);
      }
      lVar15 = lVar15 + 1;
    } while (lVar2 != lVar15);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107d9c244; end: 107d9c3e3; -[SCMemoriesActivityItemProviderBuilder _mixedActivityItemProvidersForSnaps:userContext:] */

void FUN_107d9c244(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010b5f8ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar11 * 8);
        func_0x00010bf529e0();
        uVar5 = param_1;
        if (uVar9 < 2) {
          func_0x00010bdc5400();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar1);
        }
        else {
          func_0x00010bef17e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
        }
        _objc_release(uVar5);
        lVar11 = lVar11 + 1;
      } while (lVar7 != lVar11);
      lVar7 = lVar2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar6);
    puVar3 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar3 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar6);
        }
        puVar4 = PTR_PTR_1126d7c90;
        _objc_alloc(PTR_PTR_1126d7c90);
        lVar10 = param_3 + 0x50;
        _objc_loadWeakRetained(lVar10);
        func_0x00010c046ee0(puVar4);
        _objc_release(lVar10);
        func_0x00010c21e120(puVar4);
        func_0x00010c21f2c0(puVar4);
        uVar5 = *(undefined8 *)(param_3 + 0xb8);
        func_0x00010bf8a8a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c191ea0(puVar4);
        _objc_release(uVar5);
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = (undefined1 *)puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0xb8),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0xb0),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0xa8),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0xa0),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x98),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x90),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x88),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x80),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x78),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x70),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x68),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x60),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x58),0);
      _objc_destroyWeak((undefined1 *)((long)puVar6 + 0x50));
      _objc_destroyWeak((undefined1 *)((long)puVar6 + 0x48));
      _objc_destroyWeak((undefined1 *)((long)puVar6 + 0x40));
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x38),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x30),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x28),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x20),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x18),0);
      _objc_storeStrong((undefined1 *)((long)puVar6 + 0x10),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)((undefined1 *)((long)puVar6 + 8),0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d9c3e4; end: 107d9c5bf; -[SCMemoriesActivityItemProviderBuilder _activityItemProvidersForSnaps:userContext:] */

void FUN_107d9c3e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126d7c90;
      _objc_alloc(PTR_PTR_1126d7c90);
      lVar5 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c046ee0(puVar4);
      _objc_release(lVar5);
      func_0x00010c21e120(puVar4);
      func_0x00010c21f2c0(puVar4);
      uVar6 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010bf8a8a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c191ea0(puVar4);
      _objc_release(uVar6);
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0xb8,0);
  _objc_storeStrong(param_3 + 0xb0,0);
  _objc_storeStrong(param_3 + 0xa8,0);
  _objc_storeStrong(param_3 + 0xa0,0);
  _objc_storeStrong(param_3 + 0x98,0);
  _objc_storeStrong(param_3 + 0x90,0);
  _objc_storeStrong(param_3 + 0x88,0);
  _objc_storeStrong(param_3 + 0x80,0);
  _objc_storeStrong(param_3 + 0x78,0);
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_destroyWeak(param_3 + 0x50);
  _objc_destroyWeak(param_3 + 0x48);
  _objc_destroyWeak(param_3 + 0x40);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 107d9c5c0; end: 107d9c6df; -[SCMemoriesActivityItemProviderBuilder .cxx_destruct] */

void FUN_107d9c5c0(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9c6e0; end: 107d9c753; -[SCMemoriesActivityItemProvidingServices initWithMemoriesActivityItemProviderBuilder:] */

undefined1 * FUN_107d9c6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb068;
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



/* Entry: 107d9c754; end: 107d9c75b; -[SCMemoriesActivityItemProvidingServices memoriesActivityItemProviderBuilder] */

undefined8 FUN_107d9c754(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d9c75c; end: 107d9c767; -[SCMemoriesActivityItemProvidingServices .cxx_destruct] */

void FUN_107d9c75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9c768; end: 107d9c7db; -[SCMemoriesActionMenuScopedMemoriesActivityServices initWithMemoriesActivityServices:] */

undefined1 * FUN_107d9c768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb070;
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



/* Entry: 107d9c7dc; end: 107d9c7e3; -[SCMemoriesActionMenuScopedMemoriesActivityServices memoriesActivityServices] */

undefined8 FUN_107d9c7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d9c7e4; end: 107d9c7ef; -[SCMemoriesActionMenuScopedMemoriesActivityServices .cxx_destruct] */

void FUN_107d9c7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9c7f0; end: 107d9c863; -[SCMemoriesActivityFactoryServices initWithMemoriesActivityFactory:] */

undefined1 * FUN_107d9c7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb078;
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



/* Entry: 107d9c864; end: 107d9c86b; -[SCMemoriesActivityFactoryServices memoriesActivityFactory] */

undefined8 FUN_107d9c864(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d9c86c; end: 107d9c877; -[SCMemoriesActivityFactoryServices .cxx_destruct] */

void FUN_107d9c86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9c878; end: 107d9c8eb; -[SCMemoriesActivityServices initWithActivityController:] */

undefined1 * FUN_107d9c878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb080;
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



/* Entry: 107d9c8ec; end: 107d9c8f3; -[SCMemoriesActivityServices activityController] */

undefined8 FUN_107d9c8ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d9c8f4; end: 107d9c8ff; -[SCMemoriesActivityServices .cxx_destruct] */

void FUN_107d9c8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9c900; end: 107d9c973; -[SCMemoriesScopedMemoriesActivityServices initWithMemoriesActivityServices:] */

undefined1 * FUN_107d9c900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb088;
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



/* Entry: 107d9c974; end: 107d9c97b; -[SCMemoriesScopedMemoriesActivityServices memoriesActivityServices] */

undefined8 FUN_107d9c974(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d9c97c; end: 107d9c987; -[SCMemoriesScopedMemoriesActivityServices .cxx_destruct] */

void FUN_107d9c97c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9c988; end: 107d9c9fb; -[SCPreviewScopedMemoriesActivityServices initWithMemoriesActivityServices:] */

undefined1 * FUN_107d9c988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb090;
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



/* Entry: 107d9c9fc; end: 107d9ca03; -[SCPreviewScopedMemoriesActivityServices memoriesActivityServices] */

undefined8 FUN_107d9c9fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d9ca04; end: 107d9ca0f; -[SCPreviewScopedMemoriesActivityServices .cxx_destruct] */

void FUN_107d9ca04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9ca10; end: 107d9ca83; -[SCSpectaclesCustomExportScopedMemoriesActivityServices initWithMemoriesActivityServices:] */

undefined1 * FUN_107d9ca10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb098;
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



/* Entry: 107d9ca84; end: 107d9ca8b; -[SCSpectaclesCustomExportScopedMemoriesActivityServices memoriesActivityServices] */

undefined8 FUN_107d9ca84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d9ca8c; end: 107d9ca97; -[SCSpectaclesCustomExportScopedMemoriesActivityServices .cxx_destruct] */

void FUN_107d9ca8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9ca98; end: 107d9cb0b; -[SCUserNavigationScopedMemoriesActivityServices initWithMemoriesActivityServices:] */

undefined1 * FUN_107d9ca98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb0a0;
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



/* Entry: 107d9cb0c; end: 107d9cb13; -[SCUserNavigationScopedMemoriesActivityServices memoriesActivityServices] */

undefined8 FUN_107d9cb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d9cb14; end: 107d9cb1f; -[SCUserNavigationScopedMemoriesActivityServices .cxx_destruct] */

void FUN_107d9cb14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9cb20; end: 107d9cb57; -[SCStoryExporter initWithStories:snapVideoFilterAdaptor:lazyBackgroundTaskWrapper:lazyActiveVideoPaths:genAIDreamsService:] */

void FUN_107d9cb20(void)

{
  func_0x00010c04ce00();
  return;
}



/* Entry: 107d9cb58; end: 107d9d217; -[SCStoryExporter initWithStories:aspectRatio:aspectFill:addVR180Metadata:snapVideoFilterAdaptor:lazyBackgroundTaskWrapper:lazyActiveVideoPaths:genAIDreamsService:] */

undefined8 *
FUN_107d9cb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_148 = PTR_PTR_1126fb0a8;
  puVar18 = &uStack_150;
  puVar9 = PTR_s_init_1125d9248;
  uStack_150 = param_3;
  _objc_msgSendSuper2();
  if (puVar18 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar18 + 0xc) = 0;
    puVar18[0xf] = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
    lVar10 = param_5;
    func_0x00010bf51e00();
    uVar11 = puVar18[0x10];
    puVar18[0x10] = lVar10;
    _objc_release(uVar11);
    _objc_retain(param_6);
    uVar11 = puVar18[6];
    puVar18[6] = param_6;
    _objc_release(uVar11);
    *(undefined1 *)(puVar18 + 7) = param_7;
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar18[0x11];
    puVar18[0x11] = puVar15;
    _objc_release(uVar11);
    puVar15 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar11 = puVar18[1];
    puVar18[1] = puVar15;
    _objc_release(uVar11);
    lVar22 = puVar18[0x10];
    _objc_retain(lVar22);
    _objc_retain(lVar22);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(lVar22);
    lVar10 = lVar22;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar14 = *plStack_130;
LAB_107d9ccf4:
      lVar19 = 0;
LAB_107d9ccf8:
      if (*plStack_130 != lVar14) {
        _objc_enumerationMutation(lVar22);
      }
      uVar5 = *(ulong *)(lStack_138 + lVar19 * 8);
      func_0x00010c07f100();
      if ((uVar5 & 1) == 0) goto code_r0x000107d9cd20;
      _objc_release(lVar22);
      _objc_release(lVar22);
      _objc_retain(lVar22);
      dVar23 = 0.0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lVar10 = lVar22;
      func_0x00010bf52a60();
      if (lVar10 == 0) {
        lVar19 = 0;
        lVar14 = 0;
      }
      else {
        lVar19 = 0;
        lVar14 = 0;
        lVar20 = *plStack_130;
        do {
          lVar21 = 0;
          do {
            dVar24 = dVar23;
            if (*plStack_130 != lVar20) {
              _objc_enumerationMutation(lVar22);
              dVar24 = dVar23;
            }
            lVar16 = *(long *)(lStack_138 + lVar21 * 8);
            lVar6 = lVar16;
            func_0x00010c07f0e0();
            func_0x00010c248aa0(lVar16);
            dVar23 = dVar24;
            if ((int)lVar6 == 0) {
              func_0x00010c248aa0(lVar19);
              lVar6 = lVar16;
              lVar1 = lVar14;
              lVar2 = lVar19;
            }
            else {
              func_0x00010c248aa0(lVar14);
              lVar6 = lVar19;
              lVar1 = lVar16;
              lVar2 = lVar14;
            }
            if (dVar23 < dVar24) {
              _objc_retain(lVar16);
              _objc_release(lVar2);
              lVar14 = lVar1;
              lVar19 = lVar6;
            }
            lVar21 = lVar21 + 1;
          } while (lVar10 != lVar21);
          lVar10 = lVar22;
          func_0x00010bf52a60();
        } while (lVar10 != 0);
      }
      lVar10 = lVar14;
      if (lVar19 != 0) {
        lVar10 = lVar19;
      }
      _objc_retain(lVar10);
      _objc_release(lVar19);
      _objc_release(lVar14);
      _objc_release(lVar22);
      puVar15 = PTR_PTR_1126d7d28;
      _objc_alloc();
      func_0x00010c248aa0(lVar10);
      FUN_107d9d218(lVar22);
      func_0x00010bffe1c0(dVar23,param_2);
      _objc_release(lVar10);
      goto LAB_107d9cefc;
    }
LAB_107d9cd48:
    _objc_release(lVar22);
    _objc_release(lVar22);
    puVar15 = (undefined *)0x0;
LAB_107d9cefc:
    _objc_release(lVar22);
    uVar11 = puVar18[2];
    puVar18[2] = puVar15;
    _objc_release(uVar11);
    *(undefined1 *)(puVar18 + 3) = param_8;
    lVar10 = param_5;
    FUN_107d9d218();
    if ((int)lVar10 != 0) {
      if (*(char *)(puVar18 + 3) == '\x01') {
        puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_5);
        lVar10 = param_5;
        func_0x00010bf529e0();
        if (lVar10 == 0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          lStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          plStack_130 = (long *)0x0;
          _objc_retain(param_5);
          lVar10 = param_5;
          func_0x00010bf52a60();
          if (lVar10 == 0) {
            puVar15 = (undefined *)0x0;
          }
          else {
            puVar15 = (undefined *)0x0;
            lVar22 = *plStack_130;
            do {
              puVar3 = PTR_s_createTimeUtc_1125b4000;
              lVar14 = 0;
              do {
                if (*plStack_130 != lVar22) {
                  _objc_enumerationMutation(param_5);
                }
                puVar17 = *(undefined **)(lStack_138 + lVar14 * 8);
                puVar7 = puVar17;
                puVar9 = puVar3;
                _objc_opt_respondsToSelector();
                if (((ulong)puVar7 & 1) != 0) {
                  if (puVar15 != (undefined *)0x0) {
                    puVar7 = puVar17;
                    func_0x00010bf59960();
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = puVar7;
                    func_0x00010bf433a0();
                    _objc_release(puVar7);
                    if (puVar8 != (undefined *)0x1) goto LAB_107d9d040;
                  }
                  func_0x00010bf59960();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar15);
                  puVar15 = puVar17;
                }
LAB_107d9d040:
                lVar14 = lVar14 + 1;
              } while (lVar10 != lVar14);
              lVar10 = param_5;
              func_0x00010bf52a60();
            } while (lVar10 != 0);
          }
          _objc_release(param_5);
        }
        _objc_release(param_5);
      }
      uVar11 = puVar18[4];
      puVar18[4] = puVar15;
      _objc_release(uVar11);
    }
    _objc_retain(param_5);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar10 = param_5;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar22 = *plStack_130;
      do {
        lVar14 = 0;
        do {
          if (*plStack_130 != lVar22) {
            _objc_enumerationMutation(param_5);
          }
          uVar5 = *(ulong *)(lStack_138 + lVar14 * 8);
          func_0x00010c07f040();
          if ((uVar5 & 1) != 0) {
            uVar13 = 0x3c;
            goto LAB_107d9d13c;
          }
          lVar14 = lVar14 + 1;
        } while (lVar10 != lVar14);
        lVar10 = param_5;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    uVar13 = 0x1e;
LAB_107d9d13c:
    _objc_release(param_5);
    *(undefined4 *)(puVar18 + 5) = uVar13;
    uVar11 = param_9;
    _objc_retainBlock();
    uVar12 = puVar18[8];
    puVar18[8] = uVar11;
    _objc_release(uVar12);
    _objc_retain(param_10);
    uVar11 = puVar18[9];
    puVar18[9] = param_10;
    _objc_release(uVar11);
    _objc_retain(param_11);
    uVar11 = puVar18[10];
    puVar18[10] = param_11;
    _objc_release(uVar11);
    _objc_retain(param_12);
    uVar11 = puVar18[0xb];
    puVar18[0xb] = param_12;
    _objc_release(uVar11);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar18;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_5);
  lVar10 = param_5;
  func_0x00010bf52a60();
  lVar22 = lRam0000000000000000;
  do {
    if (lVar10 == 0) {
      puVar18 = (undefined8 *)0x1;
LAB_107d9d2e0:
      _objc_release(param_5);
      _objc_release(param_5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        return puVar18;
      }
      ___stack_chk_fail();
      puVar15 = PTR__OBJC_CLASS___NSException_1126af520;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2803a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      _objc_release(puVar9);
      _objc_exception_throw();
      lVar10 = *(long *)(puVar15 + 0x80);
      func_0x00010bf529e0();
      if (lVar10 != 0) {
        func_0x00010c1e3a00(puVar15);
        uVar11 = *(undefined8 *)(puVar15 + 0x48);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17d00();
        func_0x00010c16e920(puVar15);
        _objc_release(uVar11);
        puVar18 = *(undefined8 **)(puVar15 + 8);
        func_0x00010c0f7fc0(puVar18);
        return puVar18;
      }
      puVar18 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf76820(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar18);
      return puVar18;
    }
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar22) {
        _objc_enumerationMutation(param_5);
      }
      iVar4 = (int)*(undefined8 *)(lVar19 * 8);
      func_0x00010c07f100();
      if (iVar4 == 0) {
        puVar18 = (undefined8 *)0x0;
        goto LAB_107d9d2e0;
      }
      lVar19 = lVar19 + 1;
    } while (lVar10 != lVar19);
    lVar10 = param_5;
    func_0x00010bf52a60();
  } while( true );
code_r0x000107d9cd20:
  lVar19 = lVar19 + 1;
  if (lVar10 == lVar19) goto code_r0x000107d9cd2c;
  goto LAB_107d9ccf8;
code_r0x000107d9cd2c:
  lVar10 = lVar22;
  func_0x00010bf52a60();
  if (lVar10 == 0) goto LAB_107d9cd48;
  goto LAB_107d9ccf4;
}



/* Entry: 107d9d218; end: 107d9d327;  */

undefined * FUN_107d9d218(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      puVar7 = (undefined *)0x1;
LAB_107d9d2e0:
      _objc_release(param_1);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return puVar7;
      }
      ___stack_chk_fail();
      puVar7 = PTR__OBJC_CLASS___NSException_1126af520;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2803a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      _objc_release(param_2);
      _objc_exception_throw();
      lVar3 = *(long *)(puVar7 + 0x80);
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        func_0x00010c1e3a00(puVar7);
        uVar4 = *(undefined8 *)(puVar7 + 0x48);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17d00();
        func_0x00010c16e920(puVar7);
        _objc_release(uVar4);
        puVar7 = *(undefined **)(puVar7 + 8);
        func_0x00010c0f7fc0(puVar7);
        return puVar7;
      }
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf76820(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return puVar5;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      iVar2 = (int)*(undefined8 *)(lVar8 * 8);
      func_0x00010c07f100();
      if (iVar2 == 0) {
        puVar7 = (undefined *)0x0;
        goto LAB_107d9d2e0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107d9d328; end: 107d9d37b; -[SCStoryExporter init] */

void FUN_107d9d328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  lVar2 = *(long *)(puVar1 + 0x80);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010c1e3a00(puVar1);
    uVar3 = *(undefined8 *)(puVar1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17d00();
    func_0x00010c16e920(puVar1);
    _objc_release(uVar3);
    func_0x00010c0f7fc0(*(undefined8 *)(puVar1 + 8));
    return;
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76820(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107d9d37c; end: 107d9d4cf; -[SCStoryExporter startExporting] */

void FUN_107d9d37c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c1e3a00(param_1,param_2,1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf17d00();
    func_0x00010c16e920(param_1,param_2,uVar3);
    _objc_release(uVar2);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x107d9d478;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
    return;
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ebd878,
                      &PTR____CFConstantStringClassReference_110ebd8b8,0xffffffffffffd507);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76820(param_1,param_2,0,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107d9d4d0; end: 107d9d4e3; -[SCStoryExporter generateOutputMovieURL] */

void FUN_107d9d4d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbde10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b24f0,PTR_s_galleryUniqueMP4FileURLInCacheDi_1125cd128,
             &PTR____CFConstantStringClassReference_110ebd8f8);
  return;
}



/* Entry: 107d9d4e4; end: 107d9d8ef; -[SCStoryExporter exportStoryAtIndex:] */

void FUN_107d9d4e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  if (-1 < param_3) {
    uVar2 = param_1;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x107d9d658;
    puStack_78 = &UNK_110a0c520;
    _objc_copyWeak(auStack_68,auStack_58);
    lStack_60 = param_3;
    _objc_retain(uVar3);
    ppuVar4 = &puStack_90;
    uStack_70 = uVar3;
    _objc_retainBlock();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x107d9d7b8;
    puStack_b8 = &UNK_110845188;
    _objc_retain(uVar3);
    uStack_b0 = uVar3;
    uStack_a8 = param_1;
    _objc_retain(ppuVar4);
    ppuStack_a0 = ppuVar4;
    lStack_98 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_d0);
    _objc_release(ppuStack_a0);
    _objc_release(uStack_b0);
    _objc_release(ppuVar4);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf455b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_compositeVideos_1125aef10);
  return;
}



/* Entry: 107d9d8f0; end: 107d9da2b;  */

void FUN_107d9d8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107d9da2c; end: 107d9dd1f;  */

void FUN_107d9da2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (*(long *)(param_1 + 0x28) != 0)) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d9da7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))(lVar1,*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  else {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if ((lVar1 == 0) || (lVar4 = lVar1, func_0x00010beb2840(), (int)lVar4 == 0)) {
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,*(undefined8 *)(param_1 + 0x20),0);
      }
    }
    else {
      func_0x00010c29b240(PTR_PTR_1126b0010);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_107d9fbe4(uVar2,0,0,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c2a29c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199d40();
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar5 = uVar2;
      func_0x00010c2a29c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bfbeb40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x00010c224ac0(uVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar6);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      _objc_retain(uVar2);
      func_0x00010bfae700(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 107d9dd20; end: 107d9dd7b;  */

void FUN_107d9dd20(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  lStack_28 = *(long *)(param_2 + 0x20);
  uStack_20 = *(undefined8 *)(param_2 + 0x28);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107d9dd7c;
  puStack_30 = &UNK_1109121a8;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(lStack_28 + 8),param_3,&puStack_48);
  return;
}



/* Entry: 107d9dd7c; end: 107d9ddfb;  */

void FUN_107d9dd7c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c258040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf78bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)((*(float *)(param_1 + 0x30) +
                      ((float)uVar2 - (float)*(long *)(param_1 + 0x28)) + -1.0) / (float)uVar2) *
             0.6000000000000001 + 0.1,*(undefined8 *)(param_1 + 0x20),
             PTR_s_didProceedToProgress__1125bbc98);
  return;
}



/* Entry: 107d9ddfc; end: 107d9de03; -[SCStoryExporter _shouldAttachGenAIWatermark:] */

void FUN_107d9ddfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0744f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isGenAISnap_1125fab48);
  return;
}



/* Entry: 107d9de04; end: 107d9df0f; -[SCStoryExporter _hasGenAIWatermark] */

undefined * FUN_107d9de04(undefined *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar11;
  double *pdVar12;
  long lVar13;
  undefined *puVar14;
  double dVar15;
  double *pdVar16;
  undefined *puVar17;
  double *pdVar18;
  double *pdVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double adStack_470 [6];
  double dStack_440;
  long lStack_438;
  double *pdStack_430;
  undefined *puStack_428;
  double dStack_420;
  undefined *puStack_418;
  double dStack_410;
  double dStack_408;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  uint uStack_39c;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  long lStack_368;
  double *pdStack_360;
  double *pdStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar17 = param_1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar17;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    lVar13 = *plStack_100;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar13) {
          _objc_enumerationMutation(puVar17);
        }
        puVar4 = param_1;
        func_0x00010beb2840();
        if (((ulong)puVar4 & 1) != 0) {
          puVar11 = (undefined *)0x1;
          goto LAB_107d9ded0;
        }
        puVar14 = puVar14 + 1;
      } while (puVar11 != puVar14);
      puVar11 = puVar17;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  puVar11 = (undefined *)0x0;
LAB_107d9ded0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar11;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107d9df10;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bf45600();
  _objc_retainAutoreleasedReturnValue();
  uStack_3c0 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  puVar11 = puVar14;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  uStack_3c8 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
  puVar4 = puVar14;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_3d0 = puVar4;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar17;
  puStack_380 = puVar5;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puStack_3d8 = puVar4;
  func_0x00010bf529e0();
  puStack_3e0 = (undefined1 *)&dStack_440;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar4 * 3);
  pdVar18 = &dStack_440 + extraout_x8 * -2;
  puVar4 = puVar17;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puStack_3e8 = puVar4;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = puVar17;
  pdStack_358 = pdVar18 + (long)puVar4 * -2;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puStack_3f0 = puVar5;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar5 * 0x18 + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)(pdVar18 + (long)puVar4 * -2) - extraout_x8_00;
  puVar4 = puVar17;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puStack_3f8 = puVar4;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar4 * 3);
  lVar13 = lVar20 + extraout_x8_01 * -0x10;
  dStack_408 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
  dStack_410 = *(double *)PTR__kCMTimeZero_110348670;
  dVar15 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar4 = puVar17;
  dStack_220 = dStack_410;
  dStack_218 = dStack_408;
  dStack_210 = dVar15;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  if ((long)(puVar5 + -1) < 0) {
    dVar24 = 0.0;
    dVar23 = 0.0;
  }
  else {
    uStack_39c = 0;
    pdVar16 = (double *)(lVar13 + (long)puVar5 * 0x30 + -0x30);
    pdVar12 = pdVar18 + (long)puVar5 * 6 + -6;
    pdStack_360 = (double *)(lVar20 + (long)puVar5 * 0x18 + -0x18);
    pdVar19 = pdStack_358 + (long)puVar5 * 2 + -1;
    dVar23 = 0.0;
    dVar24 = 0.0;
    lStack_438 = lVar20;
    pdStack_430 = pdVar18;
    puStack_428 = puVar5;
    dStack_420 = dVar15;
    puStack_418 = puVar14;
    puStack_390 = puVar11;
    puStack_370 = puVar17;
    lStack_368 = lVar13;
    pdStack_358 = pdVar19;
    do {
      puVar14 = puVar17;
      func_0x00010c28fbc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar17;
      func_0x00010c258040(puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      puStack_378 = puVar5 + -1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar14;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar14);
      if (puVar5 != (undefined *)0x0) {
        puVar14 = PTR__OBJC_CLASS___AVAsset_1126aff38;
        puStack_388 = puVar5;
        func_0x00010bf0b9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar14;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf529e0();
        _objc_release(puVar4);
        if (puVar5 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf76820(puVar17);
          _objc_release(puVar4);
          _objc_release(puVar14);
          puVar14 = puStack_418;
          goto LAB_107d9ef54;
        }
        puVar4 = puVar14;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (puVar5 == (undefined *)0x0) {
          dStack_1e8 = 0.0;
          dStack_1f0 = 0.0;
          dStack_1d8 = 0.0;
          dStack_1e0 = 0.0;
          dStack_1f8 = 0.0;
          dStack_200 = 0.0;
        }
        else {
          func_0x00010c26f620(&dStack_200,puVar5);
        }
        dStack_3a8 = *(double *)(PTR__kCMTimeInvalid_110348648 + 8);
        dStack_3b0 = *(double *)PTR__kCMTimeInvalid_110348648;
        dStack_3b8 = *(double *)(PTR__kCMTimeInvalid_110348648 + 0x10);
        dStack_280 = dStack_3b0;
        dStack_278 = dStack_3a8;
        dStack_270 = dStack_3b8;
        func_0x00010c067160(puVar11);
        puVar11 = PTR__OBJC_CLASS___AVMutableVideoCompositionInstruction_1126d7d10;
        func_0x00010c299860();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          dStack_1e8 = 0.0;
          dStack_1f0 = 0.0;
          dStack_1d8 = 0.0;
          dStack_1e0 = 0.0;
          dStack_1f8 = 0.0;
          dStack_200 = 0.0;
        }
        else {
          func_0x00010c26f620(&dStack_200,puVar5);
        }
        dStack_278 = dStack_218;
        dStack_280 = dStack_220;
        dStack_270 = dStack_210;
        dStack_2a8 = dStack_1e0;
        dStack_2b0 = dStack_1e8;
        dStack_2a0 = dStack_1d8;
        _CMTimeRangeMake(&dStack_250,&dStack_280,&dStack_2b0);
        dStack_278 = dStack_248;
        dStack_280 = dStack_250;
        dStack_268 = dStack_238;
        dStack_270 = dStack_240;
        dStack_258 = dStack_228;
        dStack_260 = dStack_230;
        dVar15 = dStack_230;
        dVar25 = dStack_240;
        func_0x00010c214ec0(puVar11);
        func_0x00010befa120(puStack_380);
        func_0x00010c0d5d20(puVar5);
        if (puVar5 == (undefined *)0x0) {
          dStack_268 = 0.0;
          dStack_270 = 0.0;
          dStack_258 = 0.0;
          dStack_260 = 0.0;
          dStack_278 = 0.0;
          dStack_280 = 0.0;
        }
        else {
          func_0x00010c106f40(&dStack_280,puVar5);
        }
        dStack_1f8 = dStack_278;
        dStack_200 = dStack_280;
        dStack_1e8 = dStack_268;
        dStack_1f0 = dStack_270;
        dStack_1d8 = dStack_258;
        dStack_1e0 = dStack_260;
        _CGRectApplyAffineTransform(0,0,&dStack_200);
        dVar21 = dStack_220;
        pdVar18 = pdStack_360;
        pdVar19[-1] = dVar15;
        *pdVar19 = dVar25;
        pdStack_360[1] = dStack_218;
        *pdVar18 = dVar21;
        pdVar18[2] = dStack_210;
        if (puVar5 == (undefined *)0x0) {
          dStack_1e8 = 0.0;
          dStack_1f0 = 0.0;
          dStack_1d8 = 0.0;
          dStack_1e0 = 0.0;
          dStack_1f8 = 0.0;
          dStack_200 = 0.0;
        }
        else {
          func_0x00010c106f40(&dStack_200,puVar5);
        }
        dVar2 = dStack_1e8;
        dVar22 = dStack_1f0;
        dVar21 = dStack_200;
        pdVar12[1] = dStack_1f8;
        *pdVar12 = dVar21;
        pdVar12[3] = dVar2;
        pdVar12[2] = dVar22;
        dVar21 = dStack_1e0;
        pdVar12[5] = dStack_1d8;
        pdVar12[4] = dVar21;
        dVar22 = dVar15;
        puStack_398 = puVar11;
        if (*(long *)(puVar17 + 0x30) != 0) {
          if (puVar17[0x38] == '\x01') {
            uVar7 = *(undefined8 *)(puVar17 + 0x80);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c06e920();
            _objc_release(uVar7);
            if ((int)uVar8 == 0) {
              func_0x00010bf885a0(*(undefined8 *)(puVar17 + 0x30));
              if (dVar21 == 0.0) {
                dVar22 = 0.0;
              }
              else if (dVar21 == INFINITY) {
                dVar25 = 0.0;
              }
              else {
                dVar22 = dVar25 * dVar21;
                if (dVar15 <= dVar22) goto LAB_107d9e4d4;
              }
            }
            else {
              dVar21 = (double)(long)(dVar25 * 0.025 * 0.125) * 8.0;
              dVar15 = dVar21 * -2.0;
              func_0x00010bf885a0(*(undefined8 *)(puVar17 + 0x30));
              dVar22 = 1.0;
              _hypot(0x3ff0000000000000,dVar21);
              dVar25 = (dVar25 + dVar15) / dVar22;
              func_0x00010bf885a0(*(undefined8 *)(puVar17 + 0x30));
              dVar22 = dVar25 * dVar22;
            }
          }
          else {
            func_0x00010bf885a0();
            if (dVar21 == 0.0) {
              dVar25 = INFINITY;
            }
            else {
              dVar22 = INFINITY;
              if ((dVar21 != INFINITY) && (dVar22 = dVar25 * dVar21, dVar22 < dVar15)) {
LAB_107d9e4d4:
                dVar25 = dVar15 / dVar21;
                dVar22 = dVar15;
              }
            }
          }
        }
        if (dVar25 <= dVar24 && dVar22 <= dVar23) {
          dVar22 = dVar23;
          dVar25 = dVar24;
        }
        dVar24 = dVar25;
        puVar17 = puVar14;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar17;
        func_0x00010bf529e0();
        _objc_release(puVar17);
        puVar11 = puStack_390;
        puVar4 = puStack_398;
        if (puVar6 == (undefined *)0x0) {
          if (puVar5 == (undefined *)0x0) {
            dStack_268 = 0.0;
            dStack_270 = 0.0;
            dStack_258 = 0.0;
            dStack_260 = 0.0;
            dStack_278 = 0.0;
            dStack_280 = 0.0;
          }
          else {
            func_0x00010c26f620(&dStack_280,puVar5);
          }
          puVar17 = puStack_370;
          dStack_2a8 = dStack_218;
          dStack_2b0 = dStack_220;
          dStack_2a0 = dStack_210;
          dStack_2d8 = dStack_260;
          dStack_2e0 = dStack_268;
          dStack_2d0 = dStack_258;
          _CMTimeRangeMake(&dStack_200,&dStack_2b0,&dStack_2e0);
          dVar25 = dStack_1e8;
          dVar23 = dStack_1f0;
          dVar15 = dStack_200;
          pdVar16[1] = dStack_1f8;
          *pdVar16 = dVar15;
          pdVar16[3] = dVar25;
          pdVar16[2] = dVar23;
          dVar15 = dStack_1e0;
          pdVar16[5] = dStack_1d8;
          pdVar16[4] = dVar15;
          if (puVar11 != (undefined *)0x0) goto LAB_107d9e604;
LAB_107d9e66c:
          dStack_1e8 = 0.0;
          dStack_1f0 = 0.0;
          dStack_1d8 = 0.0;
          dStack_1e0 = 0.0;
          dStack_1f8 = 0.0;
          dStack_200 = 0.0;
        }
        else {
          puVar17 = puVar14;
          func_0x00010c279200(puVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar17;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar17);
          if (puVar5 == (undefined *)0x0) {
            dStack_1e8 = 0.0;
            dStack_1f0 = 0.0;
            dStack_1d8 = 0.0;
            dStack_1e0 = 0.0;
            dStack_1f8 = 0.0;
            dStack_200 = 0.0;
          }
          else {
            func_0x00010c26f620(&dStack_200,puVar5);
          }
          puVar11 = puStack_390;
          puVar4 = puStack_398;
          dStack_278 = dStack_3a8;
          dStack_280 = dStack_3b0;
          dStack_270 = dStack_3b8;
          func_0x00010c067160(puStack_3d0);
          dVar15 = *(double *)PTR__kCMTimeRangeInvalid_110348660;
          dVar25 = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
          dVar23 = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
          pdVar16[1] = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
          *pdVar16 = dVar15;
          pdVar16[3] = dVar25;
          pdVar16[2] = dVar23;
          dVar15 = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
          pdVar16[5] = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
          pdVar16[4] = dVar15;
          _objc_release(puVar6);
          uStack_39c = 1;
          puVar17 = puStack_370;
          if (puVar11 == (undefined *)0x0) goto LAB_107d9e66c;
LAB_107d9e604:
          func_0x00010c26f620(&dStack_200,puVar11);
        }
        dStack_218 = dStack_1e0;
        dStack_220 = dStack_1e8;
        dStack_210 = dStack_1d8;
        _objc_release(puVar4);
        _objc_release(puVar5);
        _objc_release(puVar14);
        _objc_release(puStack_388);
        dVar23 = dVar22;
      }
      puVar14 = puStack_428;
      pdVar16 = pdVar16 + -6;
      pdVar12 = pdVar12 + -6;
      pdStack_360 = pdStack_360 + -3;
      pdVar19 = pdVar19 + -2;
      puVar5 = puStack_378;
    } while (0 < (long)puStack_378);
    lVar13 = (long)puStack_428 * 0x30;
    puVar17 = puStack_428;
    pdVar18 = (double *)(lStack_438 + (long)puStack_428 * 0x18);
    pdVar16 = pdStack_430;
    do {
      puVar11 = puStack_370;
      pdVar16 = pdVar16 + -6;
      puVar17 = puVar17 + -1;
      puVar4 = puStack_370;
      func_0x00010c28fbc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c258040(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar11;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      _objc_release(puVar11);
      _objc_release(puVar4);
      if (puVar6 != (undefined *)0x0) {
        if (puStack_370[0x38] == '\x01') {
          uVar7 = *(undefined8 *)(puStack_370 + 0x80);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c06e920();
          _objc_release(uVar7);
          pdVar12 = pdStack_358;
          if ((int)uVar8 != 0) {
            dVar21 = *pdStack_358;
            dVar15 = 1.0;
            _hypot(0x3ff0000000000000,dVar23 / dVar24);
            dVar15 = (dVar21 + (double)(long)(dVar21 * 0.025 * 0.125) * 8.0 * -2.0) / dVar15;
            dVar25 = dVar23 / ((dVar23 / dVar24) * dVar15);
            dVar15 = dVar24 / dVar15;
            bVar3 = dVar25 < dVar15;
            goto LAB_107d9e83c;
          }
          dVar21 = *pdStack_358;
          dVar15 = dVar24 / dVar21;
          if (dVar24 / dVar21 <= dVar23 / pdStack_358[-1]) {
            dVar15 = dVar23 / pdStack_358[-1];
          }
        }
        else {
          dVar21 = *pdStack_358;
          dVar15 = dVar23 / pdStack_358[-1];
          dVar25 = dVar24 / dVar21;
          bVar3 = false;
          pdVar12 = pdStack_358;
          if (!NAN(dVar15) && !NAN(dVar25)) {
            bVar3 = dVar15 < dVar25;
          }
LAB_107d9e83c:
          if (!bVar3) {
            dVar15 = dVar25;
          }
        }
        puVar11 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
        func_0x00010c2998a0();
        _objc_retainAutoreleasedReturnValue();
        _CGAffineTransformMakeTranslation
                  (&dStack_200,(dVar23 - dVar15 * pdVar12[-1]) * 0.5,
                   (dVar24 - dVar15 * dVar21) * 0.5);
        dStack_2a8 = dStack_1f8;
        dStack_2b0 = dStack_200;
        dStack_298 = dStack_1e8;
        dStack_2a0 = dStack_1f0;
        dStack_288 = dStack_1d8;
        dStack_290 = dStack_1e0;
        _CGAffineTransformScale(&dStack_280,dVar15,dVar15,&dStack_2b0);
        dStack_1f8 = dStack_278;
        dStack_200 = dStack_280;
        dStack_1e8 = dStack_268;
        dStack_1f0 = dStack_270;
        dStack_1d8 = dStack_258;
        dStack_1e0 = dStack_260;
        pdVar12 = pdVar16 + (long)puVar14 * 6;
        dStack_2a8 = pdVar12[1];
        dStack_2b0 = *pdVar12;
        dStack_298 = pdVar12[3];
        dStack_2a0 = pdVar12[2];
        dStack_288 = pdVar12[5];
        dStack_290 = pdVar12[4];
        dStack_2d8 = dStack_278;
        dStack_2e0 = dStack_280;
        dStack_2c8 = dStack_268;
        dStack_2d0 = dStack_270;
        dStack_2b8 = dStack_258;
        dStack_2c0 = dStack_260;
        _CGAffineTransformConcat(&dStack_280,&dStack_2b0,&dStack_2e0);
        dStack_1e8 = dStack_268;
        dStack_1f0 = dStack_270;
        dStack_1d8 = dStack_258;
        dStack_1e0 = dStack_260;
        dStack_1f8 = dStack_278;
        dStack_200 = dStack_280;
        dStack_2a8 = pdVar18[-2];
        dStack_2b0 = pdVar18[-3];
        dStack_2a0 = pdVar18[-1];
        func_0x00010c219980(puVar11);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1c8 = puVar11;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puStack_380;
        func_0x00010c0dfd40(puStack_380);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b9960();
        _objc_release(puVar5);
        _objc_release(puVar4);
        if (((((uStack_39c & 1) != 0) &&
             (lVar20 = lStack_368 + lVar13, (*(byte *)(lVar20 + -0x24) & 1) != 0)) &&
            ((*(byte *)(lVar20 + -0xc) & 1) != 0)) &&
           ((*(long *)(lStack_368 + lVar13 + -8) == 0 && (-1 < *(long *)(lVar20 + -0x18))))) {
          dStack_278 = *(double *)(lVar20 + -0x28);
          dStack_280 = *(double *)(lVar20 + -0x30);
          dStack_268 = *(double *)(lVar20 + -0x18);
          dStack_270 = *(double *)(lVar20 + -0x20);
          dStack_258 = *(double *)(lVar20 + -8);
          dStack_260 = *(double *)(lVar20 + -0x10);
          func_0x00010c066740(puStack_3d0);
        }
        _objc_release(puVar11);
      }
      lStack_368 = lStack_368 + -0x30;
      pdStack_358 = pdStack_358 + -2;
      pdVar18 = pdVar18 + -3;
    } while (0 < (long)puVar17);
    dVar15 = dStack_420;
    puVar14 = puStack_418;
    puVar11 = puStack_390;
    puVar17 = puStack_370;
    if ((uStack_39c & 1) != 0) goto LAB_107d9ea3c;
  }
  func_0x00010c12ec60(puVar14);
LAB_107d9ea3c:
  puVar4 = PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
  func_0x00010c299820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adc60();
  func_0x00010c1ea8e0(dVar23,dVar24,puVar4);
  _CMTimeMake(&dStack_2f8,1,*(undefined4 *)(puVar17 + 0x28));
  dStack_1f8 = dStack_2f0;
  dStack_200 = dStack_2f8;
  dStack_1f0 = dStack_2e8;
  func_0x00010c19f2e0(puVar4);
  puVar5 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc(PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60);
  func_0x00010bff4280();
  func_0x00010c198fc0(puVar17);
  _objc_release(puVar5);
  puVar5 = puVar17;
  func_0x00010bfbfd40(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  func_0x00010bf9d1c0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7200();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(puVar17 + 0x50);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar17;
  func_0x00010bf9d1c0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc900(uVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar8);
  puVar5 = puVar17;
  func_0x00010bf9d1c0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6fc0();
  _objc_release(puVar5);
  puVar5 = puVar17;
  func_0x00010bf9d1c0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200aa0();
  _objc_release(puVar5);
  puVar5 = puVar17;
  func_0x00010bf9d1c0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puStack_388 = puVar4;
  func_0x00010c2213a0();
  _objc_release(puVar5);
  puVar4 = puVar17;
  func_0x00010be33f00();
  if ((int)puVar4 != 0) {
    if (puVar14 == (undefined *)0x0) {
      dStack_200 = 0.0;
      dStack_1f8 = 0.0;
      dStack_1f0 = 0.0;
    }
    else {
      func_0x00010bf8b160(&dStack_200,puVar14);
    }
    dStack_278 = dStack_408;
    dStack_280 = dStack_410;
    dStack_270 = dVar15;
    _CMTimeRangeMake(&dStack_328,&dStack_280,&dStack_200);
    puVar4 = puVar17;
    func_0x00010bf9d1c0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    dStack_1f8 = dStack_320;
    dStack_200 = dStack_328;
    dStack_1e8 = dStack_310;
    dStack_1f0 = dStack_318;
    dStack_1d8 = dStack_300;
    dStack_1e0 = dStack_308;
    func_0x00010c214ec0();
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  puVar5 = puVar17;
  func_0x00010bf9d1c0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270940(0x3fb999999999999a,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198f80(puVar17);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar17;
  func_0x00010bf9d140(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)(puVar17 + 0x20) != 0) {
    puVar4 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
    func_0x00010c0cc520(PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40();
    func_0x00010c1b6ce0(puVar4);
    uVar8 = *(undefined8 *)(puVar17 + 0x20);
    func_0x00010bdc17a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar4);
    _objc_release(uVar8);
    puVar5 = puVar17;
    func_0x00010bf9d1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (puVar6 == (undefined *)0x0) {
      puVar5 = puVar17;
      func_0x00010bf9d1c0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c73c0();
      _objc_release(puVar5);
    }
    puVar5 = puVar17;
    func_0x00010bf9d1c0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar17;
    func_0x00010bf9d1c0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar4 = puVar17;
  func_0x00010bf9d1c0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_348 = 0xc2000000;
  pcStack_340 = FUN_107d9eff0;
  puStack_338 = &UNK_110842e18;
  puStack_330 = puVar17;
  func_0x00010bf9cee0();
  _objc_release(puVar4);
LAB_107d9ef54:
  puVar17 = puStack_3d8;
  _objc_release(puStack_388);
  _objc_release(puStack_3f8);
  _objc_release(puStack_3f0);
  _objc_release(puStack_3e8);
  puVar1 = puStack_3e0;
  _objc_release(puVar17);
  _objc_release(puStack_380);
  _objc_release(puStack_3d0);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
    ___stack_chk_fail();
    *(undefined1 ***)(puVar1 + -0x10) = &puStack_120;
    *(code **)(puVar1 + -8) = FUN_107d9eff0;
    lVar13 = *(long *)(puVar14 + 0x20);
    puVar17 = *(undefined **)(lVar13 + 8);
    *(undefined **)(puVar1 + -0x38) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar1 + -0x30) = 0xc2000000;
    *(code **)(puVar1 + -0x28) = FUN_107d9f048;
    *(undefined **)(puVar1 + -0x20) = &UNK_110842e18;
    *(long *)(puVar1 + -0x18) = lVar13;
    func_0x00010c0f7fc0(puVar17);
    return puVar17;
  }
  return puVar14;
}



/* Entry: 107d9df10; end: 107d9efef; -[SCStoryExporter compositeVideos] */

void FUN_107d9df10(undefined *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  double *pdVar13;
  double dVar14;
  double *pdVar15;
  undefined *puVar16;
  double *pdVar17;
  double *pdVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double adStack_360 [6];
  double dStack_330;
  long lStack_328;
  double *pdStack_320;
  undefined *puStack_318;
  double dStack_310;
  undefined *puStack_308;
  double dStack_300;
  double dStack_2f8;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  uint uStack_28c;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  double *pdStack_250;
  double *pdStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  func_0x00010bf45600();
  _objc_retainAutoreleasedReturnValue();
  uStack_2b0 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  puVar16 = puVar4;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  uStack_2b8 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
  puVar5 = puVar4;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_2c0 = puVar5;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  puStack_270 = puVar6;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puStack_2c8 = puVar5;
  func_0x00010bf529e0();
  puStack_2d0 = (undefined1 *)&dStack_330;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar5 * 3);
  pdVar17 = &dStack_330 + extraout_x8 * -2;
  puVar5 = param_1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puStack_2d8 = puVar5;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = param_1;
  pdStack_248 = pdVar17 + (long)puVar5 * -2;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puStack_2e0 = puVar6;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar6 * 0x18 + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)(pdVar17 + (long)puVar5 * -2) - extraout_x8_00;
  puVar5 = param_1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puStack_2e8 = puVar5;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar5 * 3);
  lVar12 = lVar19 + extraout_x8_01 * -0x10;
  dStack_2f8 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
  dStack_300 = *(double *)PTR__kCMTimeZero_110348670;
  dVar14 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar5 = param_1;
  dStack_110 = dStack_300;
  dStack_108 = dStack_2f8;
  dStack_100 = dVar14;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  if ((long)(puVar6 + -1) < 0) {
    dVar23 = 0.0;
    dVar22 = 0.0;
  }
  else {
    uStack_28c = 0;
    pdVar15 = (double *)(lVar12 + (long)puVar6 * 0x30 + -0x30);
    pdVar13 = pdVar17 + (long)puVar6 * 6 + -6;
    pdStack_250 = (double *)(lVar19 + (long)puVar6 * 0x18 + -0x18);
    pdVar18 = pdStack_248 + (long)puVar6 * 2 + -1;
    dVar22 = 0.0;
    dVar23 = 0.0;
    lStack_328 = lVar19;
    pdStack_320 = pdVar17;
    puStack_318 = puVar6;
    dStack_310 = dVar14;
    puStack_308 = puVar4;
    puStack_280 = puVar16;
    puStack_260 = param_1;
    lStack_258 = lVar12;
    pdStack_248 = pdVar18;
    do {
      puVar4 = param_1;
      func_0x00010c28fbc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c258040(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      puStack_268 = puVar6 + -1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (puVar6 != (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___AVAsset_1126aff38;
        puStack_278 = puVar6;
        func_0x00010bf0b9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf529e0();
        _objc_release(puVar5);
        if (puVar6 == (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf76820(param_1);
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = puStack_308;
          goto LAB_107d9ef54;
        }
        puVar5 = puVar4;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        if (puVar6 == (undefined *)0x0) {
          dStack_d8 = 0.0;
          dStack_e0 = 0.0;
          dStack_c8 = 0.0;
          dStack_d0 = 0.0;
          dStack_e8 = 0.0;
          dStack_f0 = 0.0;
        }
        else {
          func_0x00010c26f620(&dStack_f0,puVar6);
        }
        dStack_298 = *(double *)(PTR__kCMTimeInvalid_110348648 + 8);
        dStack_2a0 = *(double *)PTR__kCMTimeInvalid_110348648;
        dStack_2a8 = *(double *)(PTR__kCMTimeInvalid_110348648 + 0x10);
        dStack_170 = dStack_2a0;
        dStack_168 = dStack_298;
        dStack_160 = dStack_2a8;
        func_0x00010c067160(puVar16);
        puVar16 = PTR__OBJC_CLASS___AVMutableVideoCompositionInstruction_1126d7d10;
        func_0x00010c299860();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          dStack_d8 = 0.0;
          dStack_e0 = 0.0;
          dStack_c8 = 0.0;
          dStack_d0 = 0.0;
          dStack_e8 = 0.0;
          dStack_f0 = 0.0;
        }
        else {
          func_0x00010c26f620(&dStack_f0,puVar6);
        }
        dStack_168 = dStack_108;
        dStack_170 = dStack_110;
        dStack_160 = dStack_100;
        dStack_198 = dStack_d0;
        dStack_1a0 = dStack_d8;
        dStack_190 = dStack_c8;
        _CMTimeRangeMake(&dStack_140,&dStack_170,&dStack_1a0);
        dStack_168 = dStack_138;
        dStack_170 = dStack_140;
        dStack_158 = dStack_128;
        dStack_160 = dStack_130;
        dStack_148 = dStack_118;
        dStack_150 = dStack_120;
        dVar14 = dStack_120;
        dVar24 = dStack_130;
        func_0x00010c214ec0(puVar16);
        func_0x00010befa120(puStack_270);
        func_0x00010c0d5d20(puVar6);
        if (puVar6 == (undefined *)0x0) {
          dStack_158 = 0.0;
          dStack_160 = 0.0;
          dStack_148 = 0.0;
          dStack_150 = 0.0;
          dStack_168 = 0.0;
          dStack_170 = 0.0;
        }
        else {
          func_0x00010c106f40(&dStack_170,puVar6);
        }
        dStack_e8 = dStack_168;
        dStack_f0 = dStack_170;
        dStack_d8 = dStack_158;
        dStack_e0 = dStack_160;
        dStack_c8 = dStack_148;
        dStack_d0 = dStack_150;
        _CGRectApplyAffineTransform(0,0,&dStack_f0);
        dVar20 = dStack_110;
        pdVar17 = pdStack_250;
        pdVar18[-1] = dVar14;
        *pdVar18 = dVar24;
        pdStack_250[1] = dStack_108;
        *pdVar17 = dVar20;
        pdVar17[2] = dStack_100;
        if (puVar6 == (undefined *)0x0) {
          dStack_d8 = 0.0;
          dStack_e0 = 0.0;
          dStack_c8 = 0.0;
          dStack_d0 = 0.0;
          dStack_e8 = 0.0;
          dStack_f0 = 0.0;
        }
        else {
          func_0x00010c106f40(&dStack_f0,puVar6);
        }
        dVar2 = dStack_d8;
        dVar21 = dStack_e0;
        dVar20 = dStack_f0;
        pdVar13[1] = dStack_e8;
        *pdVar13 = dVar20;
        pdVar13[3] = dVar2;
        pdVar13[2] = dVar21;
        dVar20 = dStack_d0;
        pdVar13[5] = dStack_c8;
        pdVar13[4] = dVar20;
        dVar21 = dVar14;
        puStack_288 = puVar16;
        if (*(long *)(param_1 + 0x30) != 0) {
          if (param_1[0x38] == '\x01') {
            uVar8 = *(undefined8 *)(param_1 + 0x80);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar8;
            func_0x00010c06e920();
            _objc_release(uVar8);
            if ((int)uVar10 == 0) {
              func_0x00010bf885a0(*(undefined8 *)(param_1 + 0x30));
              if (dVar20 == 0.0) {
                dVar21 = 0.0;
              }
              else if (dVar20 == INFINITY) {
                dVar24 = 0.0;
              }
              else {
                dVar21 = dVar24 * dVar20;
                if (dVar14 <= dVar21) goto LAB_107d9e4d4;
              }
            }
            else {
              dVar20 = (double)(long)(dVar24 * 0.025 * 0.125) * 8.0;
              dVar14 = dVar20 * -2.0;
              func_0x00010bf885a0(*(undefined8 *)(param_1 + 0x30));
              dVar21 = 1.0;
              _hypot(0x3ff0000000000000,dVar20);
              dVar24 = (dVar24 + dVar14) / dVar21;
              func_0x00010bf885a0(*(undefined8 *)(param_1 + 0x30));
              dVar21 = dVar24 * dVar21;
            }
          }
          else {
            func_0x00010bf885a0();
            if (dVar20 == 0.0) {
              dVar24 = INFINITY;
            }
            else {
              dVar21 = INFINITY;
              if ((dVar20 != INFINITY) && (dVar21 = dVar24 * dVar20, dVar21 < dVar14)) {
LAB_107d9e4d4:
                dVar24 = dVar14 / dVar20;
                dVar21 = dVar14;
              }
            }
          }
        }
        if (dVar24 <= dVar23 && dVar21 <= dVar22) {
          dVar21 = dVar22;
          dVar24 = dVar23;
        }
        dVar23 = dVar24;
        puVar16 = puVar4;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar16;
        func_0x00010bf529e0();
        _objc_release(puVar16);
        puVar16 = puStack_280;
        puVar5 = puStack_288;
        if (puVar7 == (undefined *)0x0) {
          if (puVar6 == (undefined *)0x0) {
            dStack_158 = 0.0;
            dStack_160 = 0.0;
            dStack_148 = 0.0;
            dStack_150 = 0.0;
            dStack_168 = 0.0;
            dStack_170 = 0.0;
          }
          else {
            func_0x00010c26f620(&dStack_170,puVar6);
          }
          param_1 = puStack_260;
          dStack_198 = dStack_108;
          dStack_1a0 = dStack_110;
          dStack_190 = dStack_100;
          dStack_1c8 = dStack_150;
          dStack_1d0 = dStack_158;
          dStack_1c0 = dStack_148;
          _CMTimeRangeMake(&dStack_f0,&dStack_1a0,&dStack_1d0);
          dVar24 = dStack_d8;
          dVar22 = dStack_e0;
          dVar14 = dStack_f0;
          pdVar15[1] = dStack_e8;
          *pdVar15 = dVar14;
          pdVar15[3] = dVar24;
          pdVar15[2] = dVar22;
          dVar14 = dStack_d0;
          pdVar15[5] = dStack_c8;
          pdVar15[4] = dVar14;
          if (puVar16 != (undefined *)0x0) goto LAB_107d9e604;
LAB_107d9e66c:
          dStack_d8 = 0.0;
          dStack_e0 = 0.0;
          dStack_c8 = 0.0;
          dStack_d0 = 0.0;
          dStack_e8 = 0.0;
          dStack_f0 = 0.0;
        }
        else {
          puVar16 = puVar4;
          func_0x00010c279200(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar16;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
          if (puVar6 == (undefined *)0x0) {
            dStack_d8 = 0.0;
            dStack_e0 = 0.0;
            dStack_c8 = 0.0;
            dStack_d0 = 0.0;
            dStack_e8 = 0.0;
            dStack_f0 = 0.0;
          }
          else {
            func_0x00010c26f620(&dStack_f0,puVar6);
          }
          puVar16 = puStack_280;
          puVar5 = puStack_288;
          dStack_168 = dStack_298;
          dStack_170 = dStack_2a0;
          dStack_160 = dStack_2a8;
          func_0x00010c067160(puStack_2c0);
          dVar14 = *(double *)PTR__kCMTimeRangeInvalid_110348660;
          dVar24 = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
          dVar22 = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
          pdVar15[1] = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
          *pdVar15 = dVar14;
          pdVar15[3] = dVar24;
          pdVar15[2] = dVar22;
          dVar14 = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
          pdVar15[5] = *(double *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
          pdVar15[4] = dVar14;
          _objc_release(puVar7);
          uStack_28c = 1;
          param_1 = puStack_260;
          if (puVar16 == (undefined *)0x0) goto LAB_107d9e66c;
LAB_107d9e604:
          func_0x00010c26f620(&dStack_f0,puVar16);
        }
        dStack_108 = dStack_d0;
        dStack_110 = dStack_d8;
        dStack_100 = dStack_c8;
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puStack_278);
        dVar22 = dVar21;
      }
      puVar4 = puStack_318;
      pdVar15 = pdVar15 + -6;
      pdVar13 = pdVar13 + -6;
      pdStack_250 = pdStack_250 + -3;
      pdVar18 = pdVar18 + -2;
      puVar6 = puStack_268;
    } while (0 < (long)puStack_268);
    lVar12 = (long)puStack_318 * 0x30;
    puVar16 = puStack_318;
    pdVar17 = (double *)(lStack_328 + (long)puStack_318 * 0x18);
    pdVar15 = pdStack_320;
    do {
      puVar5 = puStack_260;
      pdVar15 = pdVar15 + -6;
      puVar16 = puVar16 + -1;
      puVar6 = puStack_260;
      func_0x00010c28fbc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c258040(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar6);
      if (puVar9 != (undefined *)0x0) {
        if (puStack_260[0x38] == '\x01') {
          uVar8 = *(undefined8 *)(puStack_260 + 0x80);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar8;
          func_0x00010c06e920();
          _objc_release(uVar8);
          pdVar13 = pdStack_248;
          if ((int)uVar10 != 0) {
            dVar20 = *pdStack_248;
            dVar14 = 1.0;
            _hypot(0x3ff0000000000000,dVar22 / dVar23);
            dVar14 = (dVar20 + (double)(long)(dVar20 * 0.025 * 0.125) * 8.0 * -2.0) / dVar14;
            dVar24 = dVar22 / ((dVar22 / dVar23) * dVar14);
            dVar14 = dVar23 / dVar14;
            bVar3 = dVar24 < dVar14;
            goto LAB_107d9e83c;
          }
          dVar20 = *pdStack_248;
          dVar14 = dVar23 / dVar20;
          if (dVar23 / dVar20 <= dVar22 / pdStack_248[-1]) {
            dVar14 = dVar22 / pdStack_248[-1];
          }
        }
        else {
          dVar20 = *pdStack_248;
          dVar14 = dVar22 / pdStack_248[-1];
          dVar24 = dVar23 / dVar20;
          bVar3 = false;
          pdVar13 = pdStack_248;
          if (!NAN(dVar14) && !NAN(dVar24)) {
            bVar3 = dVar14 < dVar24;
          }
LAB_107d9e83c:
          if (!bVar3) {
            dVar14 = dVar24;
          }
        }
        puVar5 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
        func_0x00010c2998a0();
        _objc_retainAutoreleasedReturnValue();
        _CGAffineTransformMakeTranslation
                  (&dStack_f0,(dVar22 - dVar14 * pdVar13[-1]) * 0.5,(dVar23 - dVar14 * dVar20) * 0.5
                  );
        dStack_198 = dStack_e8;
        dStack_1a0 = dStack_f0;
        dStack_188 = dStack_d8;
        dStack_190 = dStack_e0;
        dStack_178 = dStack_c8;
        dStack_180 = dStack_d0;
        _CGAffineTransformScale(&dStack_170,dVar14,dVar14,&dStack_1a0);
        dStack_e8 = dStack_168;
        dStack_f0 = dStack_170;
        dStack_d8 = dStack_158;
        dStack_e0 = dStack_160;
        dStack_c8 = dStack_148;
        dStack_d0 = dStack_150;
        pdVar13 = pdVar15 + (long)puVar4 * 6;
        dStack_198 = pdVar13[1];
        dStack_1a0 = *pdVar13;
        dStack_188 = pdVar13[3];
        dStack_190 = pdVar13[2];
        dStack_178 = pdVar13[5];
        dStack_180 = pdVar13[4];
        dStack_1c8 = dStack_168;
        dStack_1d0 = dStack_170;
        dStack_1b8 = dStack_158;
        dStack_1c0 = dStack_160;
        dStack_1a8 = dStack_148;
        dStack_1b0 = dStack_150;
        _CGAffineTransformConcat(&dStack_170,&dStack_1a0,&dStack_1d0);
        dStack_d8 = dStack_158;
        dStack_e0 = dStack_160;
        dStack_c8 = dStack_148;
        dStack_d0 = dStack_150;
        dStack_e8 = dStack_168;
        dStack_f0 = dStack_170;
        dStack_198 = pdVar17[-2];
        dStack_1a0 = pdVar17[-3];
        dStack_190 = pdVar17[-1];
        func_0x00010c219980(puVar5);
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_b8 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puStack_270;
        func_0x00010c0dfd40(puStack_270);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b9960();
        _objc_release(puVar7);
        _objc_release(puVar6);
        if (((((uStack_28c & 1) != 0) &&
             (lVar19 = lStack_258 + lVar12, (*(byte *)(lVar19 + -0x24) & 1) != 0)) &&
            ((*(byte *)(lVar19 + -0xc) & 1) != 0)) &&
           ((*(long *)(lStack_258 + lVar12 + -8) == 0 && (-1 < *(long *)(lVar19 + -0x18))))) {
          dStack_168 = *(double *)(lVar19 + -0x28);
          dStack_170 = *(double *)(lVar19 + -0x30);
          dStack_158 = *(double *)(lVar19 + -0x18);
          dStack_160 = *(double *)(lVar19 + -0x20);
          dStack_148 = *(double *)(lVar19 + -8);
          dStack_150 = *(double *)(lVar19 + -0x10);
          func_0x00010c066740(puStack_2c0);
        }
        _objc_release(puVar5);
      }
      lStack_258 = lStack_258 + -0x30;
      pdStack_248 = pdStack_248 + -2;
      pdVar17 = pdVar17 + -3;
    } while (0 < (long)puVar16);
    dVar14 = dStack_310;
    puVar4 = puStack_308;
    puVar16 = puStack_280;
    param_1 = puStack_260;
    if ((uStack_28c & 1) != 0) goto LAB_107d9ea3c;
  }
  func_0x00010c12ec60(puVar4);
LAB_107d9ea3c:
  puVar5 = PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
  func_0x00010c299820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adc60();
  func_0x00010c1ea8e0(dVar22,dVar23,puVar5);
  _CMTimeMake(&dStack_1e8,1,*(undefined4 *)(param_1 + 0x28));
  dStack_e8 = dStack_1e0;
  dStack_f0 = dStack_1e8;
  dStack_e0 = dStack_1d8;
  func_0x00010c19f2e0(puVar5);
  puVar6 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc(PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60);
  func_0x00010bff4280();
  func_0x00010c198fc0(param_1);
  _objc_release(puVar6);
  puVar6 = param_1;
  func_0x00010bfbfd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010bf9d1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7200();
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bf9d1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc900(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar10);
  puVar6 = param_1;
  func_0x00010bf9d1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6fc0();
  _objc_release(puVar6);
  puVar6 = param_1;
  func_0x00010bf9d1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200aa0();
  _objc_release(puVar6);
  puVar6 = param_1;
  func_0x00010bf9d1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_278 = puVar5;
  func_0x00010c2213a0();
  _objc_release(puVar6);
  puVar5 = param_1;
  func_0x00010be33f00();
  if ((int)puVar5 != 0) {
    if (puVar4 == (undefined *)0x0) {
      dStack_f0 = 0.0;
      dStack_e8 = 0.0;
      dStack_e0 = 0.0;
    }
    else {
      func_0x00010bf8b160(&dStack_f0,puVar4);
    }
    dStack_168 = dStack_2f8;
    dStack_170 = dStack_300;
    dStack_160 = dVar14;
    _CMTimeRangeMake(&dStack_218,&dStack_170,&dStack_f0);
    puVar5 = param_1;
    func_0x00010bf9d1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    dStack_e8 = dStack_210;
    dStack_f0 = dStack_218;
    dStack_d8 = dStack_200;
    dStack_e0 = dStack_208;
    dStack_c8 = dStack_1f0;
    dStack_d0 = dStack_1f8;
    func_0x00010c214ec0();
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  puVar6 = param_1;
  func_0x00010bf9d1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270940(0x3fb999999999999a,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198f80(param_1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar5 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bf9d140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar5 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
    func_0x00010c0cc520(PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40();
    func_0x00010c1b6ce0(puVar5);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdc17a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar5);
    _objc_release(uVar10);
    puVar6 = param_1;
    func_0x00010bf9d1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x0) {
      puVar6 = param_1;
      func_0x00010bf9d1c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c73c0();
      _objc_release(puVar6);
    }
    puVar6 = param_1;
    func_0x00010bf9d1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010bf9d1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0();
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar5 = param_1;
  func_0x00010bf9d1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_107d9eff0;
  puStack_228 = &UNK_110842e18;
  puStack_220 = param_1;
  func_0x00010bf9cee0();
  _objc_release(puVar5);
LAB_107d9ef54:
  puVar5 = puStack_2c8;
  _objc_release(puStack_278);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2e0);
  _objc_release(puStack_2d8);
  puVar1 = puStack_2d0;
  _objc_release(puVar5);
  _objc_release(puStack_270);
  _objc_release(puStack_2c0);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(puVar1 + -8) = FUN_107d9eff0;
    lVar12 = *(long *)(puVar4 + 0x20);
    uVar10 = *(undefined8 *)(lVar12 + 8);
    *(undefined **)(puVar1 + -0x38) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar1 + -0x30) = 0xc2000000;
    *(code **)(puVar1 + -0x28) = FUN_107d9f048;
    *(undefined **)(puVar1 + -0x20) = &UNK_110842e18;
    *(long *)(puVar1 + -0x18) = lVar12;
    func_0x00010c0f7fc0(uVar10);
    return;
  }
  return;
}



/* Entry: 107d9eff0; end: 107d9f047;  */

void FUN_107d9eff0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107d9f048;
  puStack_20 = &UNK_110842e18;
  func_0x00010c0f7fc0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 107d9f048; end: 107d9f127;  */

void FUN_107d9f048(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9d140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(uVar1);
  func_0x00010c198f80(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf9d1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252d60();
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar6;
  func_0x00010bf9d1c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 3) {
    uVar4 = uVar1;
    func_0x00010c0ef100();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    uVar7 = uVar4;
  }
  else {
    uVar5 = uVar1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    uVar7 = uVar5;
  }
  func_0x00010bf76820(uVar6,param_2,uVar4,uVar5);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d9f128; end: 107d9f1d3; -[SCStoryExporter didProceedToProgress:] */

void FUN_107d9f128(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107d9f1d4;
    puStack_50 = &UNK_110844b80;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    uStack_40 = param_2;
    uStack_38 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 107d9f1d4; end: 107d9f1e3;  */

void FUN_107d9f1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s_storyExporter_didProceedToProgre_1126740c0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107d9f1e4; end: 107d9f40f; -[SCStoryExporter didFinishExportingToURL:withError:] */

void FUN_107d9f1e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107d9f410;
  puStack_110 = &UNK_110848ba8;
  _objc_retain(param_3);
  lStack_108 = param_3;
  lStack_100 = param_1;
  _objc_retain(param_4);
  uStack_f8 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_128);
  lVar2 = param_1;
  func_0x00010c28fbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar9 = *(undefined8 *)(lVar8 * 8);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0899c0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12f0c0(uVar4);
      _objc_release(uVar9);
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      _objc_release(puVar5);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c198fc0(param_1);
  _objc_release(uStack_f8);
  _objc_release(lStack_108);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((*(long *)(param_3 + 0x20) != 0) && (*(char *)(*(long *)(param_3 + 0x28) + 0x18) == '\x01')) {
    puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    FUN_107dfadc8(*(undefined8 *)(param_3 + 0x20),puVar7 != (undefined *)0x0);
    _objc_release(puVar5);
  }
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf6b020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259a40();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0899c0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14560(*(undefined8 *)(param_3 + 0x28));
  func_0x00010bf94260(uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c16e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x28),PTR_s_setBackgroundTaskId__112639468,
             *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0);
  return;
}



/* Entry: 107d9f410; end: 107d9f55b;  */

void FUN_107d9f410(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(char *)(*(long *)(param_1 + 0x28) + 0x18) == '\x01')) {
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    FUN_107dfadc8(*(undefined8 *)(param_1 + 0x20),puVar3 != (undefined *)0x0);
    _objc_release(puVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6b020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259a40();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0899c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14560(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf94260(uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c16e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setBackgroundTaskId__112639468,
             *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0);
  return;
}



/* Entry: 107d9f55c; end: 107d9f5c3; -[SCStoryExporter pollExporterProgress:] */

void FUN_107d9f55c(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c252d60();
  if (lVar1 == 2) {
    func_0x00010c117720(param_4);
    func_0x00010bf78bc0((double)param_1 * 0.3 + 0.7,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d9f5c4; end: 107d9f5ff; -[SCStoryExporter storyCount] */

undefined8 FUN_107d9f5c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d9f600; end: 107d9f617; -[SCStoryExporter delegate] */

void FUN_107d9f600(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d9f618; end: 107d9f623; -[SCStoryExporter setDelegate:] */

void FUN_107d9f618(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 107d9f624; end: 107d9f62b; -[SCStoryExporter exporterTag] */

undefined8 FUN_107d9f624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107d9f62c; end: 107d9f633; -[SCStoryExporter setExporterTag:] */

void FUN_107d9f62c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


