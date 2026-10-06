/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108010208; end: 108010253; -[SCMemoriesCloudFSFileDownloadRequest .cxx_destruct] */

void FUN_108010208(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108010254; end: 1080103e3; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity initWithSnap:snapRepresentation:circumstanceEngine:streamingBytesReuser:decryptionContextProvider:thumbnailResolutionContextLogger:thumbnailDownloadResultLogger:userTrackedLogger:] */

undefined1 *
FUN_108010254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fc200;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1080103e4; end: 10801044b; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity snapDocKeyForEntity] */

void FUN_1080103e4(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f72738;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f72738);
  uVar3 = uVar1;
  FUN_108017660(uVar1,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10801044c; end: 1080104ff; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity snapDocForLocalOpsWithMediaReferenceFactory:snapDocKey:] */

void FUN_10801044c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126b25c8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_38 = puVar2;
  func_0x00010bebc9a0(param_1,param_2,param_3,param_4,&puStack_38,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar1 = puStack_38;
  _objc_retain(puStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108010500; end: 10801065b; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity prepareDownloadInfoWithSnapInfoFetcher:memoriesGrapheneContext:completionQueue:completion:] */

void FUN_108010500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    _objc_initWeak(auStack_58,param_1);
    func_0x00010be91e00(param_1);
    func_0x00010beb53a0(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_6);
    func_0x00010bfaa340(param_3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10801065c; end: 1080106e7;  */

void FUN_10801065c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(lVar1 + 8);
      *(long *)(lVar1 + 8) = param_3;
      _objc_release(uVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080106e8; end: 108010ccb; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity retrieveMediaWithSnapDocManager:mediaReferenceFactory:accessToken:mdpCommonTrigger:progressHandler:completionQueue:completion:] */

void FUN_1080106e8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_10 == 0) {
    ppuVar12 = (undefined **)0x0;
    goto LAB_108010c6c;
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
  func_0x00010c0720c0();
  if (iVar1 == 0) {
LAB_1080108f8:
    puVar4 = PTR_PTR_1126b25c8;
    _objc_alloc_init();
    lVar3 = param_2;
    func_0x00010c240220();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    puStack_b0 = puVar4;
    func_0x00010bebc9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puStack_b0;
    _objc_retain(puStack_b0);
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    _objc_retain(uVar7);
    uVar11 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar11);
    func_0x00010be62a00(param_2);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_108010d28;
    puStack_d8 = &UNK_110a17228;
    _objc_retain(uVar7);
    uStack_d0 = uVar7;
    _objc_retain(uVar11);
    uStack_c8 = uVar11;
    _objc_retain(lVar3);
    lStack_c0 = lVar3;
    _objc_retain(param_10);
    lStack_b8 = param_10;
    ppuVar9 = &puStack_f0;
    _objc_retainBlock();
    if (param_1 == 0.0) {
      ppuVar12 = ppuVar9;
      FUN_108010df0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar12 = (undefined **)PTR_PTR_1126b2798;
      _objc_opt_new();
      _objc_retain();
      uVar10 = 0;
      _dispatch_time(0,(long)(param_1 * 1000000000.0));
      puStack_160 = puVar4;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_108011010;
      puStack_148 = &UNK_11098eb68;
      ppuStack_140 = ppuVar12;
      _objc_retain(ppuVar9);
      ppuStack_f8 = ppuVar9;
      _objc_retain(param_9);
      uStack_138 = param_9;
      _objc_retain(param_7);
      uStack_130 = param_7;
      _objc_retain(puVar5);
      puStack_128 = puVar5;
      _objc_retain(uVar6);
      uStack_120 = uVar6;
      _objc_retain(lVar8);
      lStack_118 = lVar8;
      _objc_retain(lVar3);
      lStack_110 = lVar3;
      _objc_retain(param_4);
      uStack_108 = param_4;
      _objc_retain(uVar7);
      uStack_100 = uVar7;
      func_0x00010058c530(uVar10,param_9,&puStack_160);
      _objc_release(uStack_100);
      _objc_release(uStack_108);
      _objc_release(lStack_110);
      _objc_release(lStack_118);
      _objc_release(uStack_120);
      _objc_release(puStack_128);
      _objc_release(uStack_130);
      _objc_release(uStack_138);
      _objc_release(ppuStack_f8);
      _objc_release(ppuVar12);
    }
    if (param_8 != 0) {
      puVar4 = puVar5;
      func_0x00010c0c5180(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_8);
      func_0x00010c0d0cc0(param_4);
      _objc_release(puVar4);
      _objc_release(param_8);
    }
    _objc_release(ppuVar9);
    _objc_release(lStack_b8);
    _objc_release(lStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar8);
  }
  else {
    uVar2 = *(ulong *)(param_2 + 8);
    func_0x00010b5fa088();
    puVar4 = PTR_PTR_1126ba150;
    if ((0xc < uVar2) || ((1L << (uVar2 & 0x3f) & 0x1566U) == 0)) goto LAB_1080108f8;
    func_0x00010b5fb6c8(*(undefined8 *)(param_2 + 8));
    lVar3 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf88960();
    _objc_release(lVar3);
    if ((int)puVar4 == 0) goto LAB_1080108f8;
    puVar5 = PTR_PTR_1126d8dd0;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c241220(uVar6);
    _objc_retainAutoreleasedReturnValue();
    FUN_1080191d4(*(undefined8 *)(param_2 + 0x10));
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    func_0x000108018fdc(uVar11,*(undefined8 *)(param_2 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x000108019250();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047a60();
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar6);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108010ccc;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(param_10);
    lStack_80 = param_10;
    puStack_88 = puVar5;
    _objc_retain(puVar5);
    func_0x00010007380c(param_9,&puStack_a8);
    _objc_release(puStack_88);
    ppuVar12 = (undefined **)0x0;
    lVar3 = lStack_80;
  }
  _objc_release(lVar3);
  _objc_release(puVar5);
LAB_108010c6c:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return;
}



/* Entry: 108010ccc; end: 108010d27;  */

void FUN_108010ccc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126ba158;
  func_0x00010bf3efe0(PTR_PTR_1126ba158);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108010d28; end: 108010def;  */

void FUN_108010d28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0();
  if (iVar2 != 0) {
    if (param_3 == 0) {
      func_0x00010bf529e0(param_2);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c46a0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0a53e0(uVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_2,param_3,param_4)
  ;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108010df0; end: 10801100f;  */

void FUN_108010df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126bfc90;
  puVar2 = PTR_PTR_1126b1378;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_7);
  func_0x00010c119380();
  FUN_108017f48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0(param_3);
  _objc_release(param_3);
  func_0x00010c291580(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_2);
  uVar3 = param_8;
  func_0x00010c13eb80(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108011010; end: 1080110b3;  */

void FUN_108011010(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  FUN_108010df0(uVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1080110b4; end: 1080110b7;  */

void FUN_1080110b4(void)

{
  return;
}



/* Entry: 1080110b8; end: 1080111df; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity continueToStreamIfAvailableCompletionPerformer:completion:] */

void FUN_1080110b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1080111e0;
  puStack_58 = &UNK_1108846a8;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  _objc_retainBlock();
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0720c0();
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar3 != 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf0dbc0();
      _objc_release(param_1);
      goto LAB_1080111a0;
    }
  }
  (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,0);
LAB_1080111a0:
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1080111e0; end: 10801127f;  */

void FUN_1080111e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 108011280; end: 10801128f;  */

void FUN_108011280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010801128c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108011290; end: 108011653; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity _snapDocForSingleMediaWithMediaReferenceFactory:snapDocKey:mediaMetadata:shouldAddNetworkConfig:accessToken:] */

void FUN_108011290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108019e88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_6 == 0) {
    uVar1 = 0;
    puVar11 = (undefined *)0x0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_108011654;
    uStack_70 = 0x108011664;
    uStack_68 = 0;
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c4ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c0c0800(lVar5);
    uVar1 = puStack_88[5];
    func_0x00010bf67a20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf679c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = puStack_88[5];
    func_0x00010bf67a20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf679a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126d8dd8;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047000();
    puVar11 = puVar8;
    func_0x00010801722c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar1);
    if (puVar11 == (undefined *)0x0) {
      puVar8 = PTR_PTR_1126d8de0;
      _objc_opt_new(PTR_PTR_1126d8de0);
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204680(puVar8);
      _objc_release(uVar1);
      FUN_1080191d4(*(undefined8 *)(param_1 + 0x10));
      func_0x00010c21acc0(puVar8);
      func_0x00010c20a3c0(puVar8);
      func_0x00010c21d460(puVar8);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar1);
      _objc_release(puVar8);
    }
    uVar9 = puStack_88[5];
    func_0x00010bfa26a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  uVar6 = param_3;
  FUN_108017710(param_3,param_4,uVar2,param_5,puVar11,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar11);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 108011654; end: 10801166b;  */

void FUN_108011654(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10801166c; end: 1080116a3;  */

void FUN_10801166c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080116a4; end: 1080116a7;  */

void FUN_1080116a4(void)

{
  return;
}



/* Entry: 1080116a8; end: 1080116b3; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity _shouldRemoteFetchUrls] */

bool FUN_1080116a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_retain();
  _objc_retain(uVar1);
  lVar4 = lVar2;
  func_0x000108018fdc(lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = lVar2;
    func_0x0001080190b0(lVar2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = lVar5 == 0;
    _objc_release();
  }
  else {
    bVar3 = false;
  }
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(lVar2);
  return bVar3;
}



/* Entry: 1080116b4; end: 1080116db; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity _requireEdits] */

uint FUN_1080116b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f72738);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1080116dc; end: 108011717; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity isDirectDownloadAvailable] */

bool FUN_1080116dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x0001080190b0(lVar1,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 108011718; end: 10801177f; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity _networkDownloadDelayInSec] */

undefined8 FUN_108011718(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f72738);
    if ((int)uVar1 != 0) {
      func_0x00010bf00460();
      uVar2 = 0;
      if ((int)param_1 == 0) {
        uVar2 = 0x3fe0000000000000;
      }
    }
  }
  return uVar2;
}



/* Entry: 108011780; end: 10801178b; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity delayNetworkDownloadEnabled] */

byte FUN_108011780(long param_1)

{
  return *(byte *)(param_1 + 0x48) & 1;
}



/* Entry: 10801178c; end: 108011793; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity setDelayNetworkDownloadEnabled:] */

void FUN_10801178c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 108011794; end: 10801179f; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity allMediaLocallyAvailable] */

byte FUN_108011794(long param_1)

{
  return *(byte *)(param_1 + 0x49) & 1;
}



/* Entry: 1080117a0; end: 1080117a7; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity setAllMediaLocallyAvailable:] */

void FUN_1080117a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x49) = param_3;
  return;
}



/* Entry: 1080117a8; end: 108011813; -[SCMemoriesCloudFSFileDownloadSingleMediaEntity .cxx_destruct] */

void FUN_1080117a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108011814; end: 1080118e7;  */

void FUN_108011814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1080118e8;
  puStack_58 = &UNK_1108465d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 1080118e8; end: 108011c93;  */

void FUN_1080118e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  _objc_retain(uVar8);
  _objc_retain(uVar17);
  uVar1 = uVar5;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b780();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f66a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010bfc4120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135340();
  uVar4 = uVar5;
  func_0x00010bfc4120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010bfc79a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1367a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126d8dd0;
  _objc_alloc();
  uVar5 = uVar8;
  func_0x00010c241220(uVar8);
  _objc_retainAutoreleasedReturnValue();
  FUN_1080191d4(uVar17);
  uVar1 = uVar17;
  func_0x000108018fdc(uVar17,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar17;
  func_0x000108019250();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  func_0x00010c047a60();
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(uVar5);
  lVar9 = *(long *)(param_1 + 0x20);
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfcaaa0();
  _objc_release(lVar9);
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_1 + 0x38);
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))(lVar10,puVar15,0,puVar7);
  }
  else {
    puVar11 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfc4120(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfc79a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf98a20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    FUN_108019184();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar15,puVar7);
  }
  _objc_release(puVar15);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained(puVar7);
  puVar15 = puVar7;
  func_0x00010be5f080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 108011c94; end: 108011cd3;  */

void FUN_108011c94(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108011cd4; end: 108012033; -[SCMemoriesCloudFSServiceProvider _memoriesCloudFS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108011cd4(long param_1,undefined8 param_2)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126d8df0;
  _objc_alloc();
  lVar2 = param_1;
  FUN_108012034();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be49b80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_108012034();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c61a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127734c4;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar16;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127734c8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127734c0;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar18;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127734d4;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127734cc;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar20;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_1127734d0;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar21;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_1127734bc;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar22;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_1127734dc;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar23;
  func_0x00010bf67a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127734e0;
    _objc_loadWeakRetained();
  }
  lVar15 = param_1;
  func_0x00010c12f500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047880(puVar1,param_2,lVar3,lVar4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                      ,lVar14,lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar23);
  _objc_release(lVar13);
  _objc_release(lVar22);
  _objc_release(lVar12);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar16);
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



/* Entry: 108012034; end: 108012057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108012034(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127734b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108012058; end: 108012107; -[SCMemoriesCloudFSServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108012058(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127734e0);
  _objc_destroyWeak(param_1 + _DAT_1127734dc);
  _objc_destroyWeak(param_1 + _DAT_1127734d8);
  _objc_destroyWeak(param_1 + _DAT_1127734d4);
  _objc_destroyWeak(param_1 + _DAT_1127734d0);
  _objc_destroyWeak(param_1 + _DAT_1127734cc);
  _objc_destroyWeak(param_1 + _DAT_1127734c8);
  _objc_destroyWeak(param_1 + _DAT_1127734c4);
  _objc_destroyWeak(param_1 + _DAT_1127734c0);
  _objc_destroyWeak(param_1 + _DAT_1127734bc);
  _objc_destroyWeak(param_1 + _DAT_1127734b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127734b4);
  return;
}



/* Entry: 108012108; end: 1080121b3; -[SCMemoriesCloudFSContent initWithContentURL:contentWriter:isTransient:] */

undefined1 *
FUN_108012108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1080121b4; end: 10801227b; -[SCMemoriesCloudFSContent initWithContentResult:] */

undefined1 * FUN_1080121b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar2 = param_3;
    func_0x00010bfc5880(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10801227c; end: 108012283; -[SCMemoriesCloudFSContent fileURL] */

void FUN_10801227c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fileURLWithAssertIfUnavailable__1125c8e58,1);
  return;
}



/* Entry: 108012284; end: 1080122af; -[SCMemoriesCloudFSContent fileURLWithAssertIfUnavailable:] */

void FUN_108012284(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080122b0; end: 108012327; -[SCMemoriesCloudFSContent purgeContent] */

void FUN_1080122b0(long param_1)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c11bd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 8),PTR_s_purge_112624968);
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 108012328; end: 108012343; -[SCMemoriesCloudFSContent encryptionHint] */

void FUN_108012328(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 == 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0719d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_isEncrypted_1125fa080);
  return;
}



/* Entry: 108012344; end: 108012353; -[SCMemoriesCloudFSContent setContentWriterIsEncrypted:] */

void FUN_108012344(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0bb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 8),PTR_s_markIsEncrypted__11260c7e0);
    return;
  }
  return;
}



/* Entry: 108012354; end: 10801237b; -[SCMemoriesCloudFSContent contentWriter] */

void FUN_108012354(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10801237c; end: 1080123a3; -[SCMemoriesCloudFSContent contentResult] */

void FUN_10801237c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080123a4; end: 1080123c7; -[SCMemoriesCloudFSContent copyWithZone:] */

undefined8 FUN_1080123a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1080123c8; end: 108012403; -[SCMemoriesCloudFSContent .cxx_destruct] */

void FUN_1080123c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108012404; end: 10801258b; -[SCMemoriesCloudFSFileImpl initWithMemoriesCloudFS:userTrackedLogger:entity:snapRepresentationToMediaResultMap:isReadOnlyMode:delayNetworkDownloadEnabled:resultMapThreadProtectionEnabled:invalidStreamingContentRemover:] */

undefined1 *
FUN_108012404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fc210;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x34) = 0;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    func_0x00010c18b520(*(undefined8 *)((long)puVar1 + 0x18));
    *(undefined1 *)((long)puVar1 + 0x31) = param_9;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    _objc_release(uVar2);
    func_0x00010bddd380(puVar1);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    _objc_release(uVar2);
    func_0x00010c06cde0(puVar1);
    func_0x00010c166f00(*(undefined8 *)((long)puVar1 + 0x18));
    *(undefined1 *)((long)puVar1 + 0x30) = param_7;
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10801258c; end: 1080125e7; -[SCMemoriesCloudFSFileImpl isAvailableLocally] */

undefined8 FUN_10801258c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be98640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1080193a4();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1080125e8; end: 10801272b; -[SCMemoriesCloudFSFileImpl isSynced] */

long FUN_1080125e8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010be98640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar4 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar4 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        uVar2 = *(ulong *)(lStack_118 + lVar6 * 8);
        func_0x00010bfc4120();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfc6800();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar4 = 0;
          goto LAB_1080126e8;
        }
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
  lVar4 = 1;
LAB_1080126e8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar4;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar1 + 0x30) & 1) != 0) {
    return lVar1;
  }
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0bb0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return lVar1;
}



/* Entry: 10801272c; end: 10801276b; -[SCMemoriesCloudFSFileImpl markAsSynced] */

void FUN_10801272c(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0bb0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10801276c; end: 108012773; -[SCMemoriesCloudFSFileImpl fileURLForRepresentation:] */

void FUN_10801276c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fileURLForRepresentation_assertI_1125c8e50,param_3,1);
  return;
}



/* Entry: 108012774; end: 108012897; -[SCMemoriesCloudFSFileImpl fileURLForRepresentation:assertIfUnavailable:] */

void FUN_108012774(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010be98640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfc68a0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bfc4120();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfcaaa0();
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (uVar3 == 0) {
        uVar2 = uVar1;
        func_0x00010bfc4120(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfc5880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfad300(puVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar2);
        goto LAB_108012824;
      }
    }
  }
  puVar4 = (undefined *)0x0;
LAB_108012824:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108012898; end: 10801289f; -[SCMemoriesCloudFSFileImpl fileContentForRepresentation:] */

void FUN_108012898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fileContentForRepresentation_ass_1125c8c48,param_3,1);
  return;
}



/* Entry: 1080128a0; end: 108012983; -[SCMemoriesCloudFSFileImpl fileContentForRepresentation:assertIfUnavailable:] */

void FUN_1080128a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010be98640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfcaaa0();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126d7f68;
      _objc_alloc(PTR_PTR_1126d7f68);
      lVar2 = lVar1;
      func_0x00010bfc4120(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003b20(puVar4,param_2,lVar2);
      _objc_release(lVar2);
      goto LAB_108012968;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_108012968:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108012984; end: 108012bd7; -[SCMemoriesCloudFSFileImpl downloadWithProgressQueue:memoriesGrapheneContext:progressHandler:resultQueue:resultHandler:] */

void FUN_108012984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined **param_7)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = 0;
  if ((param_6 != 0) && (param_7 != (undefined **)0x0)) {
    lVar2 = param_1;
    func_0x00010c06cde0();
    if ((int)lVar2 == 0) {
      if (param_5 == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      else {
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_108012bec;
        puStack_a8 = &UNK_110a172c8;
        _objc_retain(param_3);
        uStack_a0 = param_3;
        _objc_retain(param_5);
        ppuVar1 = &puStack_c0;
        lStack_98 = param_5;
        _objc_retainBlock(ppuVar1);
        _objc_release(lStack_98);
        _objc_release(uStack_a0);
      }
      _objc_initWeak(auStack_c8,param_1);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_d0,auStack_c8);
      _objc_retain(param_7);
      _objc_retain(param_6);
      lVar2 = param_1;
      func_0x00010bf89220(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_d0);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_c8);
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_108012bd8;
      puStack_78 = &UNK_110849530;
      _objc_retain(param_7);
      ppuStack_70 = param_7;
      func_0x00010007380c(param_6,&puStack_90);
      lVar2 = 0;
      ppuVar1 = ppuStack_70;
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108012bd8; end: 108012beb;  */

void FUN_108012bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108012be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108012bec; end: 108012c6b;  */

void FUN_108012bec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108012c6c;
  puStack_48 = &UNK_110860cf8;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  uStack_38 = param_1;
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 108012c6c; end: 108012c7f;  */

void FUN_108012c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108012c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x20));
  return;
}



/* Entry: 108012c80; end: 108012deb;  */

void FUN_108012c80(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 == 0) && (lVar1 != 0)) {
    func_0x00010bddd380(lVar1);
    if (*(char *)(lVar1 + 0x31) == '\x01') {
      lVar3 = param_4;
      func_0x00010bf51e00(param_4);
      func_0x00010be986e0(lVar1);
    }
    else {
      _objc_retain(lVar1);
      _objc_sync_enter(lVar1);
      lVar3 = param_4;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      *(long *)(lVar1 + 0x20) = lVar3;
      _objc_release(uVar2);
      _objc_sync_exit(lVar1);
      lVar3 = lVar1;
    }
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108012dec;
    puStack_60 = &UNK_11085b7b0;
    _objc_retain(lVar3);
    lStack_50 = lVar3;
    lStack_48 = param_2;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x00010007380c(uVar2,&puStack_78);
    _objc_release(uStack_58);
    _objc_release(lStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108012dec; end: 108012dff;  */

void FUN_108012dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108012dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108012e00; end: 108012e3f; -[SCMemoriesCloudFSFileImpl invalidate] */

void FUN_108012e00(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c069ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108012e40; end: 108012e43; -[SCMemoriesCloudFSFileImpl snapRepresentationToMediaResultMap] */

void FUN_108012e40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__safeReadSnapRepresentationToMed_112583b30);
  return;
}



/* Entry: 108012e44; end: 108012f9f; -[SCMemoriesCloudFSFileImpl _checkAndSetSnapRepresentationToMediaResultMap:] */

void FUN_108012e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108012fa0;
  puStack_58 = &UNK_110a17328;
  _objc_retain();
  puStack_50 = puVar1;
  lStack_48 = param_1;
  func_0x00010bf97ce0(param_3,param_2,&puStack_70);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d80e8;
    _objc_opt_new(PTR_PTR_1126d80e8);
    func_0x00010c197f20();
    func_0x00010c1971a0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ecf218);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar1;
    func_0x00010bf51e00();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ecf238);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c1999c0(puVar3,param_2,puVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108012fa0; end: 108013157;  */

void FUN_108012fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc68a0();
  if ((int)uVar2 != 0) {
    func_0x00010bfc7700(param_3);
    uVar2 = uVar1;
    func_0x00010bfc40e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0(uVar2);
    func_0x00010bfcaaa0(uVar1);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f2e0();
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108013158; end: 1080131af; -[SCMemoriesCloudFSFileImpl _safeReadSnapRepresentationToMediaResultMap] */

void FUN_108013158(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x31) == '\x01') {
    _os_unfair_lock_lock(param_1 + 0x34);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x34);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080131b0; end: 10801320f; -[SCMemoriesCloudFSFileImpl _safeWriteSnapRepresentationToMediaResultMap:] */

void FUN_1080131b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x31) == '\x01') {
    _os_unfair_lock_lock(param_1 + 0x34);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x34);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108013210; end: 10801325f; -[SCMemoriesCloudFSFileImpl .cxx_destruct] */

void FUN_108013210(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108013260; end: 1080135bb; -[SCMemoriesCloudFSImpl initWithSnapDocManager:snapInfoFetcher:mediaReferenceFactory:snapTokenProvider:circumstanceEngine:grapheneRegistry:contentDelivery:encryptedContentManager:memoriesExperimentService:userTrackedLogger:decryptionContextProvider:invalidStreamingContentRemover:] */

undefined8 *
FUN_108013260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126fc218;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d8df8;
    _objc_alloc();
    func_0x00010bffe4c0();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d8e00;
    _objc_alloc_init();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d8e08;
    _objc_alloc_init();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar3);
  }
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



/* Entry: 1080135bc; end: 108013757; -[SCMemoriesCloudFSImpl transientLocalContent] */

void FUN_1080135bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar2,param_2,puVar5,0x13);
  lVar4 = lVar1;
  func_0x00010bf555e0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010bfc5240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = lVar4;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_10801372c;
    }
    puVar5 = PTR_PTR_1126d7f68;
    _objc_alloc(PTR_PTR_1126d7f68);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar1 = lVar4;
    func_0x00010bfc5880(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003e60(puVar5,param_2,puVar2,lVar4,1);
    _objc_release(puVar2);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(lVar1);
LAB_10801372c:
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108013758; end: 108013903; -[SCMemoriesCloudFSImpl addSnap:baseMediaContent:mediaOverlayContent:isSnapSynced:] */

undefined8
FUN_108013758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar5 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  FUN_108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b25c0;
  _objc_alloc_init(PTR_PTR_1126b25c0);
  uVar5 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  FUN_108019e88();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bdc7560();
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = 0;
  if ((int)uVar4 != 0) {
    uVar5 = param_3;
    func_0x00010bfd9dc0();
    if ((int)uVar5 == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      FUN_108019e88();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc7560(param_1);
      _objc_release(uVar3);
      _objc_release(uVar5);
      uVar5 = param_1;
    }
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 108013904; end: 108013a43; -[SCMemoriesCloudFSImpl addThumbnailForMemoriesSnap:thumbnailContent:isSnapSynced:] */

long FUN_108013904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290460();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  FUN_108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b25c0;
  _objc_alloc_init(PTR_PTR_1126b25c0);
  uVar4 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar4;
  FUN_108019e88(uVar4,&PTR____CFConstantStringClassReference_110f72738);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc7560(param_1);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108013a44; end: 108013b73; -[SCMemoriesCloudFSImpl addSnapAssetForSnap:assetType:assetContent:isSnapSynced:] */

undefined8
FUN_108013a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_108018d28(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b25c0;
  _objc_alloc_init(PTR_PTR_1126b25c0);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar1;
  FUN_108019e88(uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc7560(param_1);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108013b74; end: 108013ca7; -[SCMemoriesCloudFSImpl addAssetWithEntryId:assetId:assetType:assetContent:isSynced:] */

undefined8
FUN_108013b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_108018d28(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_1080176c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b25c0;
  _objc_alloc_init(PTR_PTR_1126b25c0);
  uVar3 = param_3;
  FUN_1080191a0(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar4 = uVar3;
  FUN_108019e88(uVar3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc7560(param_1);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 108013ca8; end: 10801405f; -[SCMemoriesCloudFSImpl updateMediaReferenceForSnapLevelSnapDoc:mediaId:memoriesContent:snapDocKey:error:] */

void FUN_108013ca8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x000108019f58(param_6,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 == 0) {
    lVar8 = param_5;
    func_0x00010bf4df20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      lVar2 = param_5;
      func_0x00010bf4df20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bfc40e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010b0ee884();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar8);
      if ((int)lVar3 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b5f1d20(uVar6,puVar7);
        _objc_release(puVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        lVar8 = 0;
        goto LAB_10801401c;
      }
    }
    lVar2 = param_1;
    func_0x00010be62e40();
    if (lVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c55e0(param_4);
      lVar8 = lVar4;
      func_0x00010bf3d980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar8 != 0) goto LAB_108014018;
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0c8b00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f1d20(uVar6,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    lVar8 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c067f00();
    lVar8 = param_3;
    if (iVar1 == 1) {
      _objc_retain(param_3);
      goto LAB_10801401c;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c55e0(param_4);
    lVar2 = lVar4;
    func_0x00010bf3d9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar2 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0c8b00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f1d20(uVar6,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if (iVar1 != 2) goto LAB_108013f1c;
    }
    else {
LAB_108013f1c:
      lVar8 = lVar2;
    }
    _objc_retain(lVar8);
  }
LAB_108014018:
  _objc_release(lVar2);
LAB_10801401c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 108014060; end: 1080140ef; -[SCMemoriesCloudFSImpl cloneAndReplaceMediaReferencesSnapDoc:mediaIdToContentReference:error:] */

void FUN_108014060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf3d940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080140f0; end: 108014177; -[SCMemoriesCloudFSImpl fetchEntrySnapDocForEntryId:completionQueue:completion:] */

void FUN_1080140f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6820();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108014178; end: 10801455f; -[SCMemoriesCloudFSImpl resolveFileForSnap:] */

/* WARNING: Removing unreachable block (ram,0x000108014264) */

void FUN_108014178(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      lVar1 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_108017660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar3 = param_1;
      if (lVar1 == 0) {
        lVar1 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd9dc0(param_3);
        func_0x00010bebd100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(lVar1);
        lVar1 = lVar3;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010bf529e0();
        _objc_release(lVar1);
        if (lVar4 != 0) goto LAB_10801434c;
LAB_108014558:
        puVar6 = (undefined *)0x0;
      }
      else {
        lVar1 = param_3;
        func_0x00010c23ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        FUN_108020568();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined *)0x0;
        _objc_retain(0);
        _objc_release(lVar1);
        func_0x00010bebd120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        lVar1 = lVar3;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010bf529e0();
        _objc_release(lVar1);
        if (lVar5 == 0) {
          _objc_release(lVar4);
          puVar6 = (undefined *)0x0;
          param_1 = lVar3;
        }
        else {
          _objc_release(lVar4);
LAB_10801434c:
          lVar1 = param_3;
          func_0x00010b5f9b0c();
          if ((int)lVar1 != 0) {
            lVar1 = lVar3;
            func_0x00010bf00d20();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar1;
            FUN_1080193a4();
            _objc_release(lVar1);
            if ((int)lVar4 == 0) {
              lVar1 = param_3;
              func_0x00010b5f9b9c(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfd9dc0(param_3);
              func_0x00010bebd100();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              _objc_release(lVar1);
              lVar1 = param_1;
              func_0x00010bf002e0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar1;
              func_0x00010bf529e0();
              _objc_release(lVar1);
              lVar3 = param_1;
              if (lVar4 == 0) goto LAB_108014558;
              puVar7 = PTR_PTR_1126d8e10;
              _objc_alloc(PTR_PTR_1126d8e10);
              lVar1 = param_1;
              func_0x00010bf002e0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0470e0(puVar7);
              _objc_release(lVar1);
              puVar6 = PTR_PTR_1126d8e18;
              _objc_alloc(PTR_PTR_1126d8e18);
              func_0x00010c02a540();
              goto LAB_10801440c;
            }
          }
          puVar7 = PTR_PTR_1126d8e10;
          _objc_alloc(PTR_PTR_1126d8e10);
          lVar1 = lVar3;
          func_0x00010bf002e0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0470e0(puVar7);
          _objc_release(lVar1);
          puVar6 = PTR_PTR_1126d8e18;
          _objc_alloc(PTR_PTR_1126d8e18);
          func_0x00010c02a540();
          param_1 = lVar3;
        }
LAB_10801440c:
        _objc_release(puVar7);
        lVar3 = param_1;
      }
      _objc_release(lVar2);
      _objc_release(lVar3);
      goto LAB_108014428;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_108014428:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108014560; end: 1080145ff; -[SCMemoriesCloudFSImpl resolveBaseMediaFileForSnap:] */

void FUN_108014560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be94ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108014600; end: 1080146db; -[SCMemoriesCloudFSImpl resolveFileForSnap:assetType:] */

void FUN_108014600(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010b697ae8(param_3,param_4), (int)lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    FUN_108018d28(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_108017660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be94ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080146dc; end: 1080146e3; -[SCMemoriesCloudFSImpl resolveRenderedLowresMediaFileForSnap:] */

void FUN_1080146dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resolveRenderedLowresMediaFileFo_11262c548,param_3,0);
  return;
}



/* Entry: 1080146e4; end: 1080147bb; -[SCMemoriesCloudFSImpl resolveRenderedLowresMediaFileForSnap:delayNetworkDownloadEnabled:] */

void FUN_1080146e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290460();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_108017660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be94ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080147bc; end: 108014867; -[SCMemoriesCloudFSImpl resolveSnapOverlayFileForSnap:] */

void FUN_1080147bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108017660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be94ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108014868; end: 108014b2f; -[SCMemoriesCloudFSImpl resolveFileForEntryId:assetId:assetType:] */

void FUN_108014868(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar2 = param_3;
    FUN_1080176c4();
    _objc_retainAutoreleasedReturnValue();
    FUN_108018d28();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_3;
    FUN_1080191a0(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    FUN_108019e88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar4 = PTR_PTR_1126b25c8;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_108017710();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_release(puVar4);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    FUN_108017f48();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c13e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar7);
    puVar9 = PTR_PTR_1126d8e20;
    _objc_alloc(PTR_PTR_1126d8e20);
    func_0x00010c010240();
    puVar12 = PTR_PTR_1126d8e18;
    _objc_alloc(PTR_PTR_1126d8e18);
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a540(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(puVar2);
    puVar2 = param_1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    func_0x00010bfbd760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar12 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108014b30; end: 108014b83; -[SCMemoriesCloudFSImpl resolveFileForMemoriesSnap:] */

void FUN_108014b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfbd760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a8c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108014b84; end: 108014be7; -[SCMemoriesCloudFSImpl resolveFileForMemoriesSnap:assetType:] */

void FUN_108014b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bfbd760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a8e0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108014be8; end: 108014c3b; -[SCMemoriesCloudFSImpl resolveRenderedLowresMediaFileForMemoriesSnap:] */

void FUN_108014be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfbd760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ac80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108014c3c; end: 108014c8f; -[SCMemoriesCloudFSImpl resolveSnapOverlayFileForMemoriesSnap:] */

void FUN_108014c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfbd760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ada0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108014c90; end: 108014e7f; -[SCMemoriesCloudFSImpl downloadWithEntity:memoriesGrapheneContext:progressHandler:resultHandler:] */

void FUN_108014c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8e28;
  _objc_alloc();
  func_0x00010c03fda0();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c109300(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108014e80; end: 108014ff7;  */

void FUN_108014e80(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        _objc_copyWeak(auStack_58,param_1 + 0x48);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar5);
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar6);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar7);
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar8);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar3);
        func_0x00010bf4fc40(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_58);
      }
      else {
        func_0x00010c0f9640(*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108014ff8; end: 1080150a3;  */

void FUN_108014ff8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        FUN_10801655c(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be96120(lVar1);
        _objc_release(uVar3);
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,param_2);
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080150a4; end: 108015163; -[SCMemoriesCloudFSImpl markAsSyncedEntity:] */

void FUN_1080150a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c240220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c240140(param_3,param_2,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb2a0();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108015164; end: 108015227; -[SCMemoriesCloudFSImpl invalidateEntity:] */

void FUN_108015164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c240220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c240140(param_3,param_2,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b7c0();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108015228; end: 10801540f; -[SCMemoriesCloudFSImpl _retrieveAccessTokenAndMediaForEntity:mdpCommonTrigger:progressHandler:downloadRequest:] */

void FUN_108015228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010c0709c0();
  if ((int)uVar2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108015410;
    puStack_a0 = &UNK_110a173b8;
    lStack_98 = param_1;
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_6);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x108015428;
    puStack_c8 = &UNK_11088e6f8;
    uStack_80 = param_6;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    func_0x00010bfa4900(uVar2,param_2,6,uVar3,uVar4,&puStack_b8,&puStack_e0);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_c0);
    _objc_release(uStack_80);
    _objc_release(uStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
  }
  else {
    func_0x00010be968c0(param_1,param_2,param_3,0,param_4,param_5,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108015410; end: 10801543b;  */

void FUN_108015410(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be968d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__retrieveMediaForEntity_accessTo_1125833d0,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10801543c; end: 10801560f; -[SCMemoriesCloudFSImpl _retrieveMediaForEntity:accessToken:mdpCommonTrigger:progressHandler:downloadRequest:] */

void FUN_10801543c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_7);
  uVar4 = param_3;
  func_0x00010c13ebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c16aca0(param_7);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108015610; end: 1080156b3;  */

void FUN_108015610(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      if ((param_3 == 0) && (lVar4 = param_2, func_0x00010bf529e0(), lVar4 != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      func_0x00010c0f9640(uVar3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080156b4; end: 1080159fb; -[SCMemoriesCloudFSImpl _resolveSingleMediaForSnap:snapRepresentation:snapDocKey:delayNetworkDownloadEnabled:] */

void FUN_1080156b4(undefined **param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  puVar10 = param_4;
  ppuVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != (undefined **)0x0) {
    puVar1 = param_1[3];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      ppuVar8 = param_1;
      ppuVar2 = param_3;
      puVar10 = param_4;
      ppuVar6 = param_5;
      func_0x00010be94cc0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar2 = param_3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar2;
        FUN_108019e88();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        puVar1 = PTR_PTR_1126b25c8;
        _objc_alloc_init();
        ppuVar2 = (undefined **)param_1[3];
        func_0x00010c269d40(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        FUN_108017710();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar1);
        _objc_release(puVar1);
        _objc_release(ppuVar2);
        ppuVar4 = (undefined **)param_1[2];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        FUN_108017f48();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar4;
        ppuVar2 = param_5;
        puVar10 = puVar1;
        ppuVar6 = ppuVar3;
        func_0x00010c13e340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        _objc_release(ppuVar9);
        if (ppuVar8 != (undefined **)0x0) goto LAB_108015870;
        ppuVar2 = &PTR____CFConstantStringClassReference_110f72738;
        puVar1 = param_4;
        func_0x00010c0720c0();
        if ((int)puVar1 != 0) {
          puVar1 = param_1[0xf];
          ppuVar2 = param_5;
          func_0x00010c0c46a0();
          puVar10 = (undefined *)0x0;
          func_0x00010c0ae5c0(puVar1);
        }
        ppuVar8 = (undefined **)0x0;
LAB_108015998:
        ppuVar9 = (undefined **)0x0;
      }
      else {
LAB_108015870:
        if (param_4 == (undefined *)0x0) goto LAB_108015998;
        puVar10 = param_4;
        func_0x00010c0720c0();
        if ((int)puVar10 != 0) {
          puVar10 = param_1[0xf];
          func_0x00010c0c46a0(param_5);
          func_0x00010c0ae5c0(puVar10);
        }
        ppuVar2 = (undefined **)PTR_PTR_1126d8e30;
        _objc_alloc();
        func_0x00010c0470c0();
        ppuVar9 = (undefined **)PTR_PTR_1126d8e18;
        _objc_alloc();
        puVar10 = param_1[0xb];
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar2;
        func_0x00010c02a540();
        _objc_release(puVar1);
        _objc_release(ppuVar2);
        ppuVar2 = param_1;
      }
      _objc_release(ppuVar8);
      goto LAB_1080159a4;
    }
  }
  ppuVar9 = (undefined **)0x0;
LAB_1080159a4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(ppuVar2);
    _objc_retain(puVar10);
    _objc_retain(ppuVar6);
    ppuVar8 = ppuVar2;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      ppuVar8 = ppuVar2;
      func_0x00010c23ff80(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar8;
      FUN_108020568();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      func_0x00010bebd120(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar6);
    _objc_release(puVar10);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 1080159fc; end: 108015b1b; -[SCMemoriesCloudFSImpl _resolveSingleMediaResultFromSnapDocForSnap:snapRepresentation:snapDocKey:] */

void FUN_1080159fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c23ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bebd120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108015b1c; end: 108015daf; -[SCMemoriesCloudFSImpl _addMediaReferenceForKey:snapDoc:newLocalContentKeyString:memoriesContent:shouldMarkAsSynced:] */

bool FUN_108015b1c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,int param_7)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long alStack_70 [2];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_5;
  FUN_108019ebc(param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    uVar3 = param_6;
    func_0x00010bf4df20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      uVar4 = param_6;
      func_0x00010bf4df20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfc40e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010b0ee884();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar6 & 1) != 0) {
        lVar9 = 0;
        bVar1 = false;
        goto LAB_108015d54;
      }
    }
    uVar3 = param_1;
    func_0x00010be62e40();
    if (uVar3 == 0) {
      lVar9 = 0;
      bVar1 = false;
      goto LAB_108015d54;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    alStack_70[0] = 0;
    plVar8 = alStack_70;
    func_0x00010bef9ba0();
    _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108015cf8:
    lVar9 = *plVar8;
    _objc_retain(lVar9);
    _objc_release(uVar7);
  }
  else {
    uVar4 = param_6;
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfc40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010b0ee884(uVar3,uVar2);
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      alStack_70[1] = 0;
      plVar8 = alStack_70 + 1;
      func_0x00010bef9b80();
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_108015cf8;
    }
    lVar9 = 0;
  }
  _objc_release(uVar3);
  bVar1 = lVar9 == 0;
  if ((param_7 != 0) && (lVar9 == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb2a0();
    _objc_release(uVar7);
    bVar1 = true;
  }
LAB_108015d54:
  _objc_release(lVar9);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108015db0; end: 108015fd3; -[SCMemoriesCloudFSImpl _newContentWriterForContentKey:memoriesContent:] */

long FUN_108015db0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010bfad160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf555e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010bfc5240();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar2 = lVar3;
        func_0x00010bfc5880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 == 0) goto LAB_108015e54;
        puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_4;
        func_0x00010bfad160(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
        lVar5 = lVar3;
        func_0x00010bfc5880(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfad300(puVar6,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        uStack_68 = 0;
        puVar7 = puVar4;
        func_0x00010c099760(puVar4,param_2,lVar2,puVar6,&uStack_68);
        uVar1 = uStack_68;
        _objc_retain(uStack_68);
        _objc_release(puVar6);
        _objc_release(lVar5);
        _objc_release(lVar2);
        _objc_release(puVar4);
        lVar2 = 0;
        if ((int)puVar7 != 0) {
          uVar8 = *(ulong *)(param_1 + 0x50);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bf7fc60();
          _objc_release(uVar8);
          if ((uVar9 & 1) == 0) {
            lVar2 = param_4;
            func_0x00010bf93dc0();
            if (lVar2 == 1) {
              uVar10 = 1;
            }
            else {
              if (lVar2 != 2) goto LAB_108015f84;
              uVar10 = 0;
            }
            func_0x00010c0bb720(lVar3,param_2,uVar10);
          }
LAB_108015f84:
          _objc_retain(lVar3);
          lVar2 = lVar3;
        }
        _objc_release(uVar1);
      }
      else {
        _objc_release();
LAB_108015e54:
        lVar2 = 0;
      }
      _objc_release(lVar3);
      goto LAB_108015fa0;
    }
  }
  lVar2 = 0;
LAB_108015fa0:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108015fd4; end: 1080160ef; -[SCMemoriesCloudFSImpl _snapRepresentationToMediaResultMapForLocalContentEntityId:hasOverlayImage:snapDocKey:] */

void FUN_108015fd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000108017894();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_108017f48();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13e3a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = uVar3;
  FUN_108017cd0(uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}


