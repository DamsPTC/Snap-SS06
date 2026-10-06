/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056b5fc8; end: 1056b60b3; -[SCSnapDocGridEditorImpl setGridAspectRatio:] */

void FUN_1056b5fc8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfce320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126bcf10;
    _objc_opt_new(PTR_PTR_1126bcf10);
    func_0x00010c1a4560(*(undefined8 *)(param_1 + 8),param_2,puVar2);
    _objc_release(puVar2);
  }
  uVar3 = param_1;
  func_0x00010c0748a0();
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfce320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2256c0();
  _objc_release(uVar4);
  NEON_ucvtf(*(undefined8 *)(param_1 + 0x18));
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfce320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1056b60b4; end: 1056b612f; -[SCSnapDocGridEditorImpl encodeX:] */

undefined * FUN_1056b60b4(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  
  func_0x00010bdcf6a0();
  puVar3 = PTR_PTR_1126bcef8;
  dVar4 = *(double *)(param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  func_0x00010bf92f00((float)param_1,(float)dVar4,puVar3,param_3,uVar2 & 0xffffffff);
  _objc_release(uVar1);
  return puVar3;
}



/* Entry: 1056b6130; end: 1056b61af; -[SCSnapDocGridEditorImpl decodeX:] */

ulong FUN_1056b6130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010bdcf6a0();
  puVar1 = PTR_PTR_1126bcef8;
  uVar4 = (ulong)(uint)(float)*(double *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a5040();
  func_0x00010bf66e00(uVar4,puVar1,param_2,param_3,uVar3 & 0xffffffff);
  _objc_release(uVar2);
  return uVar4;
}



/* Entry: 1056b61b0; end: 1056b622f; -[SCSnapDocGridEditorImpl encodeY:] */

undefined * FUN_1056b61b0(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  
  dVar4 = param_1;
  func_0x00010bdcf6a0();
  puVar3 = PTR_PTR_1126bcef8;
  func_0x00010c0fcaa0(param_2);
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe0640();
  func_0x00010bf92f00((float)param_1,dVar4,puVar3,param_3,uVar2 & 0xffffffff);
  _objc_release(uVar1);
  return puVar3;
}



/* Entry: 1056b6230; end: 1056b62b3; -[SCSnapDocGridEditorImpl decodeY:] */

undefined8 FUN_1056b6230(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bdcf6a0();
  puVar1 = PTR_PTR_1126bcef8;
  func_0x00010c0fcaa0(param_2);
  uVar2 = *(ulong *)(param_2 + 8);
  func_0x00010bfce320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe0640();
  func_0x00010bf66e00(param_1,puVar1,param_3,param_4,uVar3 & 0xffffffff);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 1056b62b4; end: 1056b6323; -[SCSnapDocGridEditorImpl encodeRelativeX:] */

undefined * FUN_1056b62b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x00010bdcf6a0();
  puVar3 = PTR_PTR_1126bcef8;
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  func_0x00010bf92f00(param_1,0x3f800000,puVar3,param_3,uVar2 & 0xffffffff);
  _objc_release(uVar1);
  return puVar3;
}



/* Entry: 1056b6324; end: 1056b639b; -[SCSnapDocGridEditorImpl decodeRelativeX:] */

float FUN_1056b6324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  func_0x00010bdcf6a0();
  puVar1 = PTR_PTR_1126bcef8;
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a5040();
  dVar4 = 5.26354424712089e-315;
  func_0x00010bf66e00(0x3f800000,puVar1,param_2,param_3,uVar3 & 0xffffffff);
  _objc_release(uVar2);
  return (float)dVar4;
}



/* Entry: 1056b639c; end: 1056b640b; -[SCSnapDocGridEditorImpl encodeRelativeY:] */

undefined * FUN_1056b639c(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x00010bdcf6a0();
  puVar3 = PTR_PTR_1126bcef8;
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe0640();
  func_0x00010bf92f00(param_1,0x3f800000,puVar3,param_3,uVar2 & 0xffffffff);
  _objc_release(uVar1);
  return puVar3;
}



/* Entry: 1056b640c; end: 1056b6483; -[SCSnapDocGridEditorImpl decodeRelativeY:] */

float FUN_1056b640c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  func_0x00010bdcf6a0();
  puVar1 = PTR_PTR_1126bcef8;
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe0640();
  dVar4 = 5.26354424712089e-315;
  func_0x00010bf66e00(0x3f800000,puVar1,param_2,param_3,uVar3 & 0xffffffff);
  _objc_release(uVar2);
  return (float)dVar4;
}



/* Entry: 1056b6484; end: 1056b655f; -[SCSnapDocGridEditorImpl encodePaths:] */

void FUN_1056b6484(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  double dVar6;
  float fVar7;
  
  _objc_retain(param_3);
  func_0x00010bdcf6a0(param_1);
  puVar5 = PTR_PTR_1126bcef8;
  dVar6 = *(double *)(param_1 + 0x10);
  fVar7 = (float)dVar6;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  func_0x00010c0fcaa0(param_1);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe0640();
  func_0x00010bf93060(fVar7,dVar6,puVar5,param_2,param_3,uVar2 & 0xffffffff,uVar4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056b6560; end: 1056b663b; -[SCSnapDocGridEditorImpl decodePaths:] */

void FUN_1056b6560(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  double dVar6;
  float fVar7;
  
  _objc_retain(param_3);
  func_0x00010bdcf6a0(param_1);
  puVar5 = PTR_PTR_1126bcef8;
  dVar6 = *(double *)(param_1 + 0x10);
  fVar7 = (float)dVar6;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  func_0x00010c0fcaa0(param_1);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe0640();
  func_0x00010bf67080(fVar7,dVar6,puVar5,param_2,param_3,uVar2 & 0xffffffff,uVar4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056b663c; end: 1056b66f3; -[SCSnapDocGridEditorImpl encodeTransforms:] */

void FUN_1056b663c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010bdcf6a0(param_1);
  puVar5 = PTR_PTR_1126bcef8;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe0640();
  func_0x00010bf93200(puVar5,param_2,param_3,uVar2 & 0xffffffff,uVar4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056b66f4; end: 1056b67ab; -[SCSnapDocGridEditorImpl decodeTransforms:] */

void FUN_1056b66f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010bdcf6a0(param_1);
  puVar5 = PTR_PTR_1126bcef8;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bfce320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe0640();
  func_0x00010bf67260(puVar5,param_2,param_3,uVar2 & 0xffffffff,uVar4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056b67ac; end: 1056b686f; -[SCSnapDocGridEditorImpl encodeTimestampsMs:] */

void FUN_1056b67ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126bcef8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf93260();
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    _objc_retain(puVar3);
    puVar1 = PTR_PTR_1126bcef8;
    _objc_retain(puVar3);
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    else {
      func_0x00010bf672c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = puVar1;
    func_0x00010bfb1920(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056b6870; end: 1056b692b; -[SCSnapDocGridEditorImpl decodeTimestampsMs:] */

void FUN_1056b6870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bcef8;
  _objc_retain(param_3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_3);
  }
  else {
    func_0x00010bf672c0(puVar1,param_2,param_3,0,1,1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  func_0x00010bfb1920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056b692c; end: 1056b692f; -[SCSnapDocGridEditorImpl _assertSizeSet] */

void FUN_1056b692c(void)

{
  return;
}



/* Entry: 1056b6930; end: 1056b693b; -[SCSnapDocGridEditorImpl .cxx_destruct] */

void FUN_1056b6930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056b693c; end: 1056b6c0f; -[SCSnapDocMediaEditorImpl initWithSnapDoc:lock:serialSnapDocUpdatePerformer:mediaIdToAssetId:snapDocKey:snapDocManagerServices:nsDataWriterServices:temporaryFileWriterServices:mediaVideoImportServices:] */

undefined8 *
FUN_1056b693c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  puStack_68 = PTR_PTR_1126e9a18;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c2402c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    if (param_7 == 0) {
      puVar3 = PTR_PTR_1126b25b8;
      _objc_alloc();
      puVar5 = puVar3;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011280();
      uVar2 = puVar1[9];
      puVar1[9] = puVar3;
      _objc_release(uVar2);
    }
    else {
      _objc_retain(param_7);
      puVar5 = (undefined *)puVar1[9];
      puVar1[9] = param_7;
    }
    _objc_release(puVar5);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0c5600();
    puVar1[0xd] = uVar2;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined1 *)((long)puVar1 + 0x84) = 0;
    puVar3 = PTR_PTR_1126bad10;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    func_0x00010c139f40(puVar1);
  }
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



/* Entry: 1056b6c10; end: 1056b6f27; -[SCSnapDocMediaEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056b6c10(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar8 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar8);
  lVar9 = param_4;
  if (param_4 == 0) {
    lVar9 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar9);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0c6280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar2 = param_3;
  func_0x00010c0c6280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if ((lVar8 == 0) || (lVar5 = lVar9, func_0x00010c071ae0(lVar9,param_2,lVar8), (int)lVar5 != 0)) {
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar2 = param_3;
    func_0x00010c0c6280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860(puVar3,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0c6280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860(puVar4,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar2);
  }
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1056b6f28;
  puStack_a0 = &UNK_11084c4a0;
  puStack_98 = puVar4;
  lStack_90 = param_1;
  uStack_88 = uVar1;
  lStack_80 = lVar9;
  _objc_retain(lVar9);
  _objc_retain(uVar1);
  _objc_retain(puVar4);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_b8);
  lVar5 = param_1;
  _objc_opt_class(param_1);
  puVar7 = puVar3;
  func_0x00010bf00560(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8ba80(lVar5,param_2,puVar7,lVar8,uVar1,*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar7);
  puStack_f0 = puVar6;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1056b7010;
  puStack_d8 = &UNK_110848ba8;
  lStack_d0 = param_1;
  uStack_c8 = param_3;
  uStack_c0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be97f00(param_1,param_2,&puStack_f0);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(lStack_80);
  _objc_release(uStack_88);
  _objc_release(puStack_98);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1056b6f28; end: 1056b6fcb;  */

void FUN_1056b6f28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001006372a4();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010be4f9a0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf10640(*(undefined8 *)(param_1 + 0x30));
    _objc_retain(0);
    func_0x00010bed1640(*(undefined8 *)(param_1 + 0x28));
    _objc_release(0);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1056b6fcc; end: 1056b700f;  */

bool FUN_1056b6fcc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c09d820(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 1056b7010; end: 1056b7063;  */

void FUN_1056b7010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar3 + 0x88) = uVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0x58) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056b7064; end: 1056b712b; -[SCSnapDocMediaEditorImpl dealloc] */

void FUN_1056b7064(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_1;
  func_0x00010c2315a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0c6280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8ba80(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puStack_48 = PTR_PTR_1126e9a18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1056b712c; end: 1056b712f; -[SCSnapDocMediaEditorImpl dispose] */

void FUN_1056b712c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setDisposed_1125867b0);
  return;
}



/* Entry: 1056b7130; end: 1056b7157; -[SCSnapDocMediaEditorImpl snapDocKey] */

void FUN_1056b7130(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056b7158; end: 1056b716f; -[SCSnapDocMediaEditorImpl mediaIdToAssetId] */

void FUN_1056b7158(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056b7170; end: 1056b71f7; -[SCSnapDocMediaEditorImpl mediaReferenceWithId:] */

void FUN_1056b7170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c23fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5ea80(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010bf51e00(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056b71f8; end: 1056b732b; -[SCSnapDocMediaEditorImpl mediaUrlWithId:] */

void FUN_1056b71f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  _objc_retain(param_3);
  func_0x00010be97f00(param_1);
  func_0x00010bf4d400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056b732c; end: 1056b7373;  */

void FUN_1056b732c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c6240(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c6c20();
  *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (int)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056b7374; end: 1056b777b;  */

/* WARNING: Removing unreachable block (ram,0x0001056b7590) */
/* WARNING: Removing unreachable block (ram,0x0001056b7650) */
/* WARNING: Removing unreachable block (ram,0x0001056b7678) */

void FUN_1056b7374(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar1 = param_2;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c26b280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bfacf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar1 = param_2;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar6 == 0) {
    lVar1 = param_2;
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c26b280(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c0899c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda40(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c26b280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c0899c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfacf60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bfc5880(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf0e880(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad040();
    _objc_release(puVar9);
    _objc_release(lVar1);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bfc5880(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c0f5800(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099740(puVar8);
    _objc_retain(0);
    _objc_release(puVar9);
    _objc_release(lVar1);
    _objc_release(puVar8);
    puVar8 = puVar5;
  }
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056b777c; end: 1056b77c7; -[SCSnapDocMediaEditorImpl mediaWithId:] */

void FUN_1056b777c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4d400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056b77c8; end: 1056b77cf;  */

void FUN_1056b77c8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_2 == 0) || (lVar1 = param_2, func_0x00010bfcaaa0(), lVar1 != 0)) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c13e900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_2;
      func_0x00010bf58280(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfc48a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      _objc_retain(lVar1);
      lVar3 = lVar1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1056b77d0; end: 1056b78eb; -[SCSnapDocMediaEditorImpl contentResultWithMediaId:] */

void FUN_1056b77d0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    func_0x00010be0b280(param_1,param_2,1,&PTR____CFConstantStringClassReference_110df6118);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1056b78ec;
    puStack_50 = &UNK_110848ba8;
    puStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    puStack_38 = puVar1;
    _objc_retain(puVar1);
    func_0x00010be97ee0(param_1,param_2,&puStack_68);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
    _objc_release(lStack_40);
    param_1 = puVar1;
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056b78ec; end: 1056b7a23;  */

void FUN_1056b78ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056b7a24;
  uStack_40 = 0x1056b7a34;
  uStack_38 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x20) != 0) {
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    uVar3 = puStack_58[5];
    puStack_58[5] = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 1056b7a24; end: 1056b7a3b;  */

void FUN_1056b7a24(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056b7a3c; end: 1056b7c23;  */

void FUN_1056b7a3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010be4f9a0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar2 + 0x20) == 0) {
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  _objc_initWeak(auStack_78,lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c13eb40(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  if (0 < (long)puStack_68[3]) {
    func_0x00010bed1640(*(undefined8 *)(param_1 + 0x20));
    puStack_68[3] = puStack_68[3] + -1;
  }
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Block_object_dispose(&uStack_70,8);
  return;
}



/* Entry: 1056b7c24; end: 1056b7d2b;  */

void FUN_1056b7c24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (0 < *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18)) {
      func_0x00010bed1640(lVar1);
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -1;
    }
    uVar2 = param_2;
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    func_0x00010be97ee0(lVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1056b7d2c; end: 1056b7d9b;  */

void FUN_1056b7d2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfcaaa0();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010be0b280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_completeWithValue__1125ae900,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056b7d9c; end: 1056b7ff3; -[SCSnapDocMediaEditorImpl deleteMediaWithId:] */

void FUN_1056b7d9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be48b60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    lVar1 = param_3;
    func_0x00010c0c55e0(param_3);
    func_0x00010c12d3e0(uVar7,param_2,lVar1);
    lVar2 = *(long *)(param_1 + 0x88);
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      uVar8 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x88);
        func_0x00010c0c6280();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lVar1;
        func_0x00010c0c55e0();
        lVar3 = param_3;
        func_0x00010c0c55e0();
        if (lVar2 == lVar3) {
          uVar9 = *(undefined8 *)(param_1 + 0x48);
          _objc_retain(uVar9);
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0xc2000000;
          pcStack_78 = FUN_1056b7ff4;
          puStack_70 = &UNK_110848ba8;
          uStack_68 = uVar7;
          uStack_60 = uVar9;
          lStack_58 = lVar1;
          _objc_retain(lVar1);
          _objc_retain(uVar9);
          _objc_retain(uVar7);
          func_0x00010c0f7fc0(uVar10,param_2,&puStack_88);
          uVar10 = *(undefined8 *)(param_1 + 0x88);
          func_0x00010c0c6280(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3c0();
          _objc_release(uVar10);
          uVar10 = *(undefined8 *)(param_1 + 0x60);
          puVar6 = PTR_PTR_1126bcf18;
          _objc_alloc(PTR_PTR_1126bcf18);
          func_0x00010c029580();
          func_0x00010c0d9840(uVar10,param_2,puVar6);
          _objc_release(puVar6);
          _objc_retain(param_3);
          _objc_release(lStack_58);
          _objc_release(uStack_60);
          _objc_release(uStack_68);
          _objc_release(uVar7);
          _objc_release(uVar9);
          _objc_release(lVar1);
          lVar1 = param_3;
          goto LAB_1056b7dec;
        }
        _objc_release(lVar1);
        uVar8 = uVar8 + 1;
        uVar4 = *(ulong *)(param_1 + 0x88);
        func_0x00010c0c6280();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
      } while (uVar8 < uVar5);
    }
  }
  lVar1 = 0;
LAB_1056b7dec:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056b7ff4; end: 1056b808f;  */

void FUN_1056b7ff4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b7a0(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1056b7a24;
  uStack_80 = 0x1056b7a34;
  uStack_78 = 0;
  func_0x00010c0c14a0(uVar1);
  uVar2 = puStack_98[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056b8090; end: 1056b8217; -[SCSnapDocMediaEditorImpl addBaseMediaWithInput:removeSoftTrim:] */

void FUN_1056b8090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_48 = FUN_1056b7a24;
  uStack_40 = 0x1056b7a34;
  uStack_38 = 0;
  func_0x00010c0c14a0(param_3);
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



/* Entry: 1056b8218; end: 1056b82ff;  */

void FUN_1056b8218(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bdc7680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1056b8300; end: 1056b8323;  */

void FUN_1056b8300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b3080,PTR_s_fileUrlWithFileUrl__1125c8ea0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056b8324; end: 1056b840b;  */

void FUN_1056b8324(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bdc7680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1056b840c; end: 1056b842f;  */

void FUN_1056b840c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b3080,PTR_s_dataWithData__1125b6c68,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056b8430; end: 1056b862b;  */

void FUN_1056b8430(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c29a4c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
  uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
  uVar4 = uVar6;
  func_0x00010bf9d400(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_initWeak(&uStack_80,*(undefined8 *)(param_1 + 0x20));
  uVar6 = uVar4;
  func_0x00010bfbc3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,&uStack_80);
  _objc_retain(puVar1);
  uStack_88 = *(undefined1 *)(param_1 + 0x30);
  func_0x00010c297260(uVar6);
  _objc_release(uVar6);
  puVar5 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar5;
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(&uStack_80);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1056b862c; end: 1056b87eb;  */

void FUN_1056b862c(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1056b87b4;
  puVar2 = param_2;
  func_0x00010bf9d420();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (puVar2 != (undefined *)0x0)) {
    _objc_retain(puVar2);
    lVar3 = lVar1;
    func_0x00010bdc7680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010c297260(lVar3);
    _objc_release(lVar3);
    _objc_release(uVar5);
    puVar4 = puVar2;
LAB_1056b87a8:
    _objc_release(puVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (param_3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_new(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010bf43ca0(uVar5);
      goto LAB_1056b87a8;
    }
    func_0x00010bf43ca0(uVar5);
  }
  _objc_release(puVar2);
LAB_1056b87b4:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1056b87ec; end: 1056b8823;  */

void FUN_1056b87ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b3080,PTR_s_fileUrlWithFileUrl__1125c8ea0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056b8824; end: 1056b8917;  */

void FUN_1056b8824(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bdc7680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1056b8918; end: 1056b896f;  */

void FUN_1056b8918(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108eb5cc8(uVar1,0x5a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3080;
  func_0x00010bf64b00(PTR_PTR_1126b3080);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056b8970; end: 1056b89af;  */

void FUN_1056b8970(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001080691fc(param_2,&uStack_30);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056b89b0; end: 1056b8aa3;  */

void FUN_1056b89b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bdc7680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1056b8aa4; end: 1056b8ab7;  */

void FUN_1056b8aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b3080,PTR_s_fileUrlWithFileUrl__1125c8ea0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056b8ab8; end: 1056b8af7;  */

void FUN_1056b8ab8(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001080691fc(param_2,&uStack_30);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056b8af8; end: 1056b8c27; -[SCSnapDocMediaEditorImpl addMediaWithInput:type:] */

void FUN_1056b8af8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056b8c28; end: 1056b8ce3;  */

void FUN_1056b8c28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1056b8ce4;
    puStack_58 = &UNK_110860758;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lStack_50 = lVar1;
    _objc_retain(uVar4);
    uStack_38 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar4;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_70);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1056b8ce4; end: 1056b8cf7;  */

void FUN_1056b8ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addMediaReferenceWithInputAsync_11254f720,
             *(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1056b8cf8; end: 1056b8e47; -[SCSnapDocMediaEditorImpl updateMediaReferenceWithInput:mediaId:] */

void FUN_1056b8cf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056b8e48; end: 1056b8f13;  */

void FUN_1056b8e48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1056b8f14;
    puStack_58 = &UNK_11084c4a0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_50 = lVar1;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = uVar4;
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_70);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1056b8f14; end: 1056b8f23;  */

void FUN_1056b8f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateMediaReferenceWithInputAs_112594738,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1056b8f24; end: 1056b8fe7; -[SCSnapDocMediaEditorImpl syncAddMediaWithInput:type:] */

void FUN_1056b8f24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c23fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdc7620(param_1,param_2,param_3,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puVar3 = PTR_PTR_1126bcf18;
    _objc_alloc(PTR_PTR_1126bcf18);
    func_0x00010c029580();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_retain(lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1056b8fe8; end: 1056b9107; -[SCSnapDocMediaEditorImpl localCacheKeyWithInput:] */

void FUN_1056b8fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056b9108; end: 1056b928f;  */

void FUN_1056b9108(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bde8240(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfc40e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38220(puVar1);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126bcf20;
      _objc_alloc_init(PTR_PTR_1126bcf20);
      func_0x00010c1c4aa0();
      puVar5 = PTR_PTR_1126bc860;
      func_0x00010bf4c8c0(PTR_PTR_1126bc860,param_2,*(undefined8 *)(puVar1 + 0x48),puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    puVar4 = puVar2;
    func_0x00010c126140(puVar2,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 == (undefined *)0x0) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      puVar6 = puVar4;
      func_0x00010bf267e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar8,param_2,puVar6);
    }
    else {
      puVar7 = puVar4;
      func_0x00010bf987e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      func_0x00010b7f5498();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28),param_2,puVar6);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056b9290; end: 1056b9793; -[SCSnapDocMediaEditorImpl _importAndRemapMediaReferencesFromSnapDocs:] */

/* WARNING: Removing unreachable block (ram,0x0001056b98c8) */

void FUN_1056b9290(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar12 = param_3;
  func_0x00010be37c80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = param_3;
    func_0x00010bf529e0();
    if (puVar13 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        puVar2 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c0c6280();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar12 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar4);
            }
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            lVar15 = *(long *)((long)puVar14 * 8);
            func_0x00010c0c55e0(lVar15);
            func_0x00010c0df7c0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            if (lVar6 != 0) {
              lVar11 = lVar15;
              func_0x00010c0c55e0();
              lVar16 = lVar6;
              func_0x00010c0b4ca0();
              if (lVar11 != lVar16) {
                func_0x00010c0b4ca0(lVar6);
                func_0x00010c1c4aa0(lVar15);
              }
            }
            _objc_release(lVar6);
            puVar14 = puVar14 + 1;
          } while (puVar12 != puVar14);
          puVar12 = puVar4;
          func_0x00010bf52a60();
        }
        _objc_release(puVar4);
        puVar12 = puVar2;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar12;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar12 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar4);
            }
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            lVar16 = *(long *)((long)puVar14 * 8);
            lVar6 = lVar16;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar6;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c55e0();
            func_0x00010c0df7c0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(lVar15);
            _objc_release(lVar6);
            if (lVar11 != 0) {
              lVar6 = lVar16;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar6;
              func_0x00010c0c5180();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar15;
              func_0x00010c0c55e0();
              lVar7 = lVar11;
              func_0x00010c0b4ca0();
              _objc_release(lVar15);
              _objc_release(lVar6);
              if (lVar8 != lVar7) {
                func_0x00010c0b4ca0(lVar11);
                func_0x00010c0c3fe0(lVar16);
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar16;
                func_0x00010c0c5180();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1c4aa0();
                _objc_release(lVar6);
                _objc_release(lVar16);
              }
            }
            _objc_release(lVar11);
            puVar14 = puVar14 + 1;
          } while (puVar12 != puVar14);
          puVar12 = puVar4;
          func_0x00010bf52a60();
        }
        _objc_release(puVar4);
        lVar6 = lVar3;
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (lVar15 == 0) {
          puVar12 = (undefined *)0x1;
        }
        else {
          lVar11 = 0;
          do {
            lVar16 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar6);
              }
              lVar8 = *(long *)(lVar16 * 8);
              func_0x00010c0b4ca0();
              if (lVar11 <= lVar8) {
                lVar11 = lVar8;
              }
              lVar16 = lVar16 + 1;
            } while (lVar15 != lVar16);
            lVar15 = lVar6;
            func_0x00010bf52a60();
          } while (lVar15 != 0);
          puVar12 = (undefined *)(lVar11 + 1);
        }
        _objc_release(lVar6);
        puVar4 = puVar2;
        func_0x00010c0c5600();
        if ((long)puVar12 <= (long)puVar4) {
          puVar12 = puVar4;
        }
        func_0x00010c1c4ac0(puVar2);
        _objc_release(lVar3);
        _objc_release(puVar2);
        puVar13 = puVar13 + 1;
        puVar2 = param_3;
        func_0x00010bf529e0();
      } while (puVar13 < puVar2);
    }
    _objc_retain(param_3);
    puVar13 = param_3;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(puVar12);
    puVar4 = puVar12;
    func_0x00010bf529e0();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar13 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bf529e0(puVar12);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar12);
      _objc_retain(puVar13);
      _objc_retain(puVar2);
      func_0x00010be97f00(param_3);
      puVar4 = puVar13;
      func_0x0001006372a4(puVar13,&PTR___NSConcreteGlobalBlock_1108a7f08);
      puVar14 = puVar4;
      func_0x00010bf529e0();
      if (puVar14 != (undefined *)0x0) {
        uVar9 = *(undefined8 *)(param_3 + 0x28);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf10640();
        _objc_retain(0);
        _objc_release(uVar9);
      }
      _objc_retain(puVar13);
      func_0x00010be97f00(param_3);
      _objc_retain(puVar2);
      _objc_release(puVar13);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar2);
      puVar13 = puVar2;
    }
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1056b9794; end: 1056b9a23; -[SCSnapDocMediaEditorImpl _importMediaReferencesFrom:] */

/* WARNING: Removing unreachable block (ram,0x0001056b98c8) */

void FUN_1056b9794(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(puVar3);
    _objc_retain(puVar2);
    func_0x00010be97f00(param_1);
    puVar4 = puVar3;
    func_0x0001006372a4(puVar3,&PTR___NSConcreteGlobalBlock_1108a7f08);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf10640();
      _objc_retain(0);
      _objc_release(uVar6);
    }
    _objc_retain(puVar3);
    func_0x00010be97f00(param_1);
    _objc_retain(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056b9a24; end: 1056b9cdb;  */

undefined * FUN_1056b9a24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_200;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar10 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar10);
  puVar8 = &uStack_1b0;
  puStack_200 = puVar10;
  func_0x00010bf52a60();
  if (puStack_200 != (undefined *)0x0) {
    lVar9 = *plStack_1a0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(puVar10);
        }
        lVar2 = *(long *)(lStack_1a8 + (long)puVar11 * 8);
        func_0x00010c0c6280();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf529e0(lVar3);
        func_0x00010bf71fe0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar3);
        lVar2 = lVar3;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar2 != 0) {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar3);
            }
            uVar5 = *(undefined8 *)(lVar12 * 8);
            func_0x00010bf51e00(uVar5);
            func_0x00010c0c55e0();
            func_0x00010c0c5600(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88));
            func_0x00010c1c4ac0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88));
            func_0x00010c1c4aa0(uVar5);
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(uVar5);
            lVar12 = lVar12 + 1;
          } while (lVar2 != lVar12);
          lVar2 = lVar3;
          func_0x00010bf52a60();
        }
        _objc_release(lVar3);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
        _objc_release(puVar4);
        _objc_release(lVar3);
        puVar11 = puVar11 + 1;
      } while (puVar11 != puStack_200);
      puVar8 = &uStack_1b0;
      puStack_200 = puVar10;
      func_0x00010bf52a60();
    } while (puStack_200 != (undefined *)0x0);
  }
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(puVar8);
  func_0x00010c0c55e0(param_2);
  func_0x00010c0df7c0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c55e0(puVar8);
  _objc_release(puVar8);
  func_0x00010c0df7c0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010bf433a0(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar10);
  return puVar4;
}



/* Entry: 1056b9cdc; end: 1056b9d87;  */

undefined * FUN_1056b9cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0c55e0(param_2);
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c55e0(param_3);
  _objc_release(param_3);
  func_0x00010c0df7c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 1056b9d88; end: 1056b9dcb;  */

bool FUN_1056b9d88(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c09d820(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 1056b9dcc; end: 1056b9ddf;  */

void FUN_1056b9dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeClaimForKey_mediaReference_112628808,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1056b9de0; end: 1056b9e1f;  */

void FUN_1056b9de0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x00010c0c6280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056b9e20; end: 1056b9ebb; -[SCSnapDocMediaEditorImpl _runInSerialQueueIfPresent:] */

void FUN_1056b9e20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1056b9ebc;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010c0f7fc0(lVar1,param_2,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056b9ebc; end: 1056b9ec7;  */

void FUN_1056b9ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056b9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1056b9ec8; end: 1056b9f8b; -[SCSnapDocMediaEditorImpl _cloneSnapDocOnSerialQueueIfPresent] */

void FUN_1056b9ec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
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
  pcStack_38 = FUN_1056b7a24;
  uStack_30 = 0x1056b7a34;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1056b9f8c;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010be97f00(param_1,param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056b9f8c; end: 1056b9fc7;  */

void FUN_1056b9f8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056b9fc8; end: 1056ba06f; -[SCSnapDocMediaEditorImpl _runInSerialQueueIfPresentAndWait:] */

void FUN_1056b9fc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x20) == 0) || (lVar1 = param_1, func_0x00010bdd9d20(), (int)lVar1 != 0))
  {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1056ba070;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010c0f8240(uVar2,param_2,&puStack_48);
    _objc_release(lStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056ba070; end: 1056ba07b;  */

void FUN_1056ba070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056ba078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1056ba07c; end: 1056ba0b7; -[SCSnapDocMediaEditorImpl _canPerformOnSnapDocUpdatePerformer] */

long FUN_1056ba07c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06fc80();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be3f110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isComposerThread_11256d5e0);
  return param_1;
}



/* Entry: 1056ba0b8; end: 1056ba0eb; -[SCSnapDocMediaEditorImpl _isDisposedCheck] */

undefined1 FUN_1056ba0b8(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x80);
  uVar1 = *(undefined1 *)(param_1 + 0x84);
  _os_unfair_lock_unlock(param_1 + 0x80);
  return uVar1;
}



/* Entry: 1056ba0ec; end: 1056ba11b; -[SCSnapDocMediaEditorImpl _setDisposed] */

void FUN_1056ba0ec(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x84) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x80);
  return;
}



/* Entry: 1056ba11c; end: 1056ba157; -[SCSnapDocMediaEditorImpl _isComposerThread] */

bool FUN_1056ba11c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bce48;
  func_0x00010bf5e500(PTR_PTR_1126bce48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return puVar1 != (undefined *)0x0;
}



/* Entry: 1056ba158; end: 1056ba25f; -[SCSnapDocMediaEditorImpl _addMediaWithType:metadataMediaType:mediaInputBlock:mediaMetadataBlock:] */

void FUN_1056ba158(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1056ba260;
  puStack_70 = &UNK_1108a7f88;
  lStack_68 = param_1;
  puStack_60 = puVar1;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_3;
  _objc_retain(param_6);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_88);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(puStack_60);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056ba260; end: 1056ba513;  */

void FUN_1056ba260(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x30);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9c20(uVar3,param_2,lVar1,*(undefined4 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1056ba344;
  puStack_50 = &UNK_1108a7f58;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar4;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010c297260(uVar3,param_2,&puStack_68,0);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1056ba514; end: 1056ba51f;  */

void FUN_1056ba514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056ba520; end: 1056ba71f; -[SCSnapDocMediaEditorImpl _contentWriterWithInput:] */

void FUN_1056ba520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1056b7a24;
  uStack_60 = 0x1056b7a34;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1056b7a24;
  uStack_90 = 0x1056b7a34;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_78;
  uVar4 = puStack_78[5];
  uVar5 = uVar2;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  uVar3 = puVar1[5];
  puVar1[5] = uVar4;
  _objc_release(uVar3);
  uStack_88 = uVar5;
  _objc_release(uVar2);
  if (puStack_a8[5] != 0) {
    func_0x00010c0bdda0(param_3);
    if (puStack_78[5] == 0) {
      uVar5 = puStack_a8[5];
      _objc_retain(uVar5);
      goto LAB_1056ba6a4;
    }
  }
  uVar5 = 0;
LAB_1056ba6a4:
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1056ba720; end: 1056ba917;  */

void FUN_1056ba720(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be0b280();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    puVar4 = *(undefined **)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bfc5880(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    func_0x00010c099740(puVar4);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 1056ba918; end: 1056ba92b;  */

void FUN_1056ba918(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ba92c; end: 1056baa83; -[SCSnapDocMediaEditorImpl _addMediaReferenceWithInputAsync:type:promise:] */

void FUN_1056ba92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be38220(param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1056baa84;
  puStack_78 = &UNK_1108a8018;
  uStack_70 = param_1;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_5);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1056bab18;
  puStack_b8 = &UNK_1108a8048;
  uStack_b0 = param_1;
  uStack_a8 = param_3;
  uStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain(param_5);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1056babac;
  puStack_f0 = &UNK_1108a8078;
  uStack_e8 = param_1;
  uStack_e0 = param_5;
  uStack_d8 = param_4;
  uStack_a0 = param_5;
  uStack_98 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0bdda0(param_3,param_2,&puStack_90,&puStack_d0,&puStack_108);
  _objc_release(uStack_e0);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056baa84; end: 1056babab;  */

void FUN_1056baa84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bde8240(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be0b280(uVar2,param_2,5,&PTR____CFConstantStringClassReference_110df6178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bdc75c0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,
                        *(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056babac; end: 1056baca3;  */

void FUN_1056babac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_2);
  uStack_40 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010be97ee0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1056baca4; end: 1056bae4b;  */

void FUN_1056baca4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x20) == 0) {
      func_0x00010be4f9a0(lVar1);
    }
    lVar2 = lVar1;
    func_0x00010c23fe00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c5600();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126b25d8;
    _objc_alloc_init(PTR_PTR_1126b25d8);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21afe0(puVar4,param_2,uVar5);
    _objc_release(uVar5);
    func_0x00010c1c4aa0(puVar4,param_2,lVar3 + 1);
    func_0x00010c1c5440(puVar4,param_2,*(undefined4 *)(param_1 + 0x38));
    lVar2 = lVar1;
    func_0x00010c23fe00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4ac0();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c23fe00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126bcf20;
    _objc_alloc_init(PTR_PTR_1126bcf20);
    puVar7 = puVar4;
    func_0x00010c0c55e0(puVar4);
    func_0x00010c1c4aa0(puVar6,param_2,puVar7);
    if (*(long *)(lVar1 + 0x20) == 0) {
      func_0x00010bed1640(lVar1);
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar6);
    uVar5 = *(undefined8 *)(lVar1 + 0x60);
    puVar7 = PTR_PTR_1126bcf18;
    _objc_alloc(PTR_PTR_1126bcf18);
    func_0x00010c029580();
    func_0x00010c0d9840(uVar5,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056bae4c; end: 1056bb02b; -[SCSnapDocMediaEditorImpl _addMediaReferenceWithInputBlocking:type:snapDoc:] */

void FUN_1056bae4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be38220(param_1);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1056b7a24;
  uStack_70 = 0x1056b7a34;
  uStack_68 = 0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010c0bdda0(param_3);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056bb02c; end: 1056bb10b;  */

void FUN_1056bb02c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bde8240(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdc75e0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 0x28),
                        *(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056bb10c; end: 1056bb237;  */

void FUN_1056bb10c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be4f9a0(uVar4);
  func_0x00010c0c5600(*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR_PTR_1126b25d8;
  _objc_alloc_init(PTR_PTR_1126b25d8);
  uVar4 = param_2;
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c21afe0(puVar1);
  _objc_release(uVar4);
  func_0x00010c1c4aa0(puVar1);
  func_0x00010c1c5440(puVar1);
  func_0x00010c1c4ac0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88));
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x00010c0c6280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126bcf20;
  _objc_alloc_init();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar2;
  _objc_release(uVar4);
  func_0x00010c0c55e0(puVar1);
  func_0x00010c1c4aa0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  func_0x00010bed1640(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056bb238; end: 1056bb2ef; -[SCSnapDocMediaEditorImpl _addMediaReferenceWithContentWriterBlocking:input:type:snapDoc:] */

void FUN_1056bb238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010be4f9a0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef9ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010bed1640(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056bb2f0; end: 1056bb673; -[SCSnapDocMediaEditorImpl _addMediaReferenceWithContentWriterAsync:input:type:promise:] */

void FUN_1056bb2f0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010be4f9a0(param_1);
  puVar1 = param_1;
  func_0x00010bde1520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be3fbe0();
  if ((int)puVar2 != 0) {
    func_0x00010bed1640(param_1);
    uVar5 = 0;
    goto LAB_1056bb5d0;
  }
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1056b7a24;
  uStack_88 = 0x1056b7a34;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_a0 = &uStack_a8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = 0;
  uVar4 = uVar3;
  func_0x00010bef9ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uStack_b0;
  _objc_retain(uStack_b0);
  uStack_80 = uVar4;
  _objc_release(uVar3);
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puStack_c8 = &uStack_d0;
  _objc_initWeak(auStack_d8,param_1);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1056bb674;
  puStack_100 = &UNK_1108661c8;
  _objc_copyWeak(auStack_e0,auStack_d8);
  puStack_f0 = &uStack_d0;
  puStack_e8 = &uStack_a8;
  _objc_retain(puVar1);
  puStack_f8 = puVar1;
  func_0x00010be97f00(param_1);
  func_0x00010bed1640(param_1);
  if (puStack_a0[5] == 0) {
    func_0x00010be0b280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_6);
LAB_1056bb594:
    _objc_release(param_1);
  }
  else {
    if ((*(byte *)(puStack_c8 + 3) & 1) == 0) {
      func_0x00010bf43d60(param_6);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      param_1 = PTR_PTR_1126bcf18;
      _objc_alloc(PTR_PTR_1126bcf18);
      func_0x00010c029580();
      func_0x00010c0d9840(uVar4);
      goto LAB_1056bb594;
    }
    _objc_initWeak(auStack_120,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_128,auStack_120);
    _objc_retain(param_6);
    func_0x00010c12b7c0(uVar4);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_120);
  }
  _objc_release(puStack_f8);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
LAB_1056bb5d0:
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056bb674; end: 1056bb7d7;  */

void FUN_1056bb674(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be3fbe0();
    if ((int)lVar2 == 0) {
      lVar2 = lVar1;
      func_0x00010be5ea80(lVar1,param_2,
                          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
                          *(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010c0c5600(*(undefined8 *)(param_1 + 0x20));
        lVar3 = lVar1;
        func_0x00010c23fe00(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4ac0();
        _objc_release(lVar3);
        lVar3 = lVar1;
        func_0x00010c23fe00(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0c6280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
    else {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056bb7d8; end: 1056bb967; -[SCSnapDocMediaEditorImpl _updateMediaReferenceWithInputAsync:mediaId:promise:] */

void FUN_1056bb7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1056bb968;
  puStack_78 = &UNK_1108a8138;
  uStack_70 = param_1;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_5);
  uStack_60 = param_5;
  _objc_retain(param_4);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1056bb9f8;
  puStack_b8 = &UNK_1108a8168;
  uStack_b0 = param_1;
  uStack_a8 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(param_4);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1056bba88;
  puStack_f0 = &UNK_1108a8198;
  uStack_e8 = param_1;
  uStack_e0 = param_4;
  uStack_d8 = param_5;
  uStack_98 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bdda0(param_3,param_2,&puStack_90,&puStack_d0,&puStack_108);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056bb968; end: 1056bba87;  */

void FUN_1056bb968(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bde8240(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be0b280(uVar2,param_2,5,&PTR____CFConstantStringClassReference_110df6178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bedb620(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056bba88; end: 1056bbb97;  */

void FUN_1056bba88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010be97ee0(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1056bbb98; end: 1056bbd0f;  */

void FUN_1056bbb98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (*(long *)(puVar1 + 0x20) == 0) {
      func_0x00010be4f9a0(puVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = puVar1;
    func_0x00010c23fe00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be5ea80(puVar1,param_2,uVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      if (*(long *)(puVar1 + 0x20) == 0) {
        func_0x00010bed1640(puVar1);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = puVar1;
      func_0x00010be0b280(puVar1,param_2,6,&PTR____CFConstantStringClassReference_110df61d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar4,param_2,puVar2);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010beec820(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21afe0(puVar3,param_2,uVar4);
      _objc_release(uVar4);
      if (*(long *)(puVar1 + 0x20) == 0) {
        func_0x00010bed1640(puVar1);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar4,param_2,puVar2);
      _objc_release(puVar2);
      uVar4 = *(undefined8 *)(puVar1 + 0x60);
      puVar2 = PTR_PTR_1126bcf18;
      _objc_alloc(PTR_PTR_1126bcf18);
      func_0x00010c029580();
      func_0x00010c0d9840(uVar4,param_2,puVar2);
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


