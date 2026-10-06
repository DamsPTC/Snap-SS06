/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af1d030; end: 10af1d037; -[SCBoltUploadChunkMetadata startOffset] */

undefined8 FUN_10af1d030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af1d038; end: 10af1d03f; -[SCBoltUploadChunkMetadata endOffset] */

undefined8 FUN_10af1d038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af1d040; end: 10af1d047; -[SCBoltUploadChunkMetadata isLastOne] */

undefined1 FUN_10af1d040(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af1d048; end: 10af1d063; +[SCBoltUploadChunkMetadataBuilder boltUploadChunkMetadata] */

void FUN_10af1d048(void)

{
  _objc_alloc_init(PTR_PTR_1126de9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af1d064; end: 10af1d163; +[SCBoltUploadChunkMetadataBuilder boltUploadChunkMetadataFromExistingBoltUploadChunkMetadata:] */

void FUN_10af1d064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126de9d8;
  _objc_retain(param_3);
  func_0x00010bf1f1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfec9e0(param_3);
  puVar3 = puVar1;
  func_0x00010c2afc20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c24fb40(param_3);
  puVar4 = puVar3;
  func_0x00010c2b9f20(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf94ee0(param_3);
  puVar5 = puVar4;
  func_0x00010c2ad320(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c076120(param_3);
  _objc_release(param_3);
  puVar6 = puVar5;
  func_0x00010c2b0ca0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10af1d164; end: 10af1d19b; -[SCBoltUploadChunkMetadataBuilder build] */

void FUN_10af1d164(void)

{
  _objc_alloc(PTR_PTR_1126bc5b8);
  func_0x00010c01d800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af1d19c; end: 10af1d1a3; -[SCBoltUploadChunkMetadataBuilder withIndex:] */

void FUN_10af1d19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10af1d1a4; end: 10af1d1ab; -[SCBoltUploadChunkMetadataBuilder withStartOffset:] */

void FUN_10af1d1a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10af1d1ac; end: 10af1d1b3; -[SCBoltUploadChunkMetadataBuilder withEndOffset:] */

void FUN_10af1d1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10af1d1b4; end: 10af1d1bb; -[SCBoltUploadChunkMetadataBuilder withIsLastOne:] */

void FUN_10af1d1b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10af1d1bc; end: 10af1d353; -[SCBoltUploadRequest initWithContentId:mediaSource:assetType:dataProvider:uploadMediaType:uploadRequestType:shouldUploadInBackground:uploadChunkMetadata:encryptionInfo:durationMs:captureSessionId:] */

undefined8 *
FUN_10af1d1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_112702058;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined4 *)(puVar1 + 2) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
    *(undefined4 *)(puVar1 + 3) = param_8;
    *(undefined1 *)(puVar1 + 1) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10af1d354; end: 10af1d377; -[SCBoltUploadRequest copyWithZone:] */

undefined8 FUN_10af1d354(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1d378; end: 10af1d443; -[SCBoltUploadRequest hash] */

undefined8 * FUN_10af1d378(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar7 = MP_INT_ABS((int)*(undefined8 *)(param_1 + 0xc));
  uVar8 = MP_INT_ABS((int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20));
  uStack_78 = (ulong)uVar7;
  uStack_70 = (ulong)uVar8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar7 = MP_INT_ABS((int)*(undefined8 *)(param_1 + 0x14));
  uVar8 = MP_INT_ABS((int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
  uStack_60 = (ulong)uVar7;
  uStack_58 = (ulong)uVar8;
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af1d574:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af1d580;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(int *)((long)puVar3 + 0xc) == *(int *)(param_3 + 0xc) &&
          (*(int *)((long)puVar3 + 0x10) == *(int *)(param_3 + 0x10))) &&
         (*(int *)((long)puVar3 + 0x14) == *(int *)(param_3 + 0x14))) &&
        ((*(int *)((long)puVar3 + 0x18) == *(int *)(param_3 + 0x18) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])))))) {
      lVar5 = *(long *)((long)puVar3 + 0x20);
      if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x28);
        if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x30);
          if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x38);
            if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x40);
              if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                  func_0x00010c071ae0();
                  goto LAB_10af1d580;
                }
                goto LAB_10af1d574;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af1d580:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af1d444; end: 10af1d59b; -[SCBoltUploadRequest isEqual:] */

long FUN_10af1d444(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1d574:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1d580;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
          (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
         (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))) &&
        ((*(int *)(param_1 + 0x18) == *(int *)(param_3 + 0x18) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) {
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if (lVar3 != *(long *)(param_3 + 0x48)) {
                  func_0x00010c071ae0();
                  goto LAB_10af1d580;
                }
                goto LAB_10af1d574;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af1d580:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1d59c; end: 10af1d5a3; -[SCBoltUploadRequest contentId] */

undefined8 FUN_10af1d59c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af1d5a4; end: 10af1d5ab; -[SCBoltUploadRequest mediaSource] */

undefined4 FUN_10af1d5a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10af1d5ac; end: 10af1d5b3; -[SCBoltUploadRequest assetType] */

undefined4 FUN_10af1d5ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10af1d5b4; end: 10af1d5bb; -[SCBoltUploadRequest dataProvider] */

undefined8 FUN_10af1d5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af1d5bc; end: 10af1d5c3; -[SCBoltUploadRequest uploadMediaType] */

undefined4 FUN_10af1d5bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10af1d5c4; end: 10af1d5cb; -[SCBoltUploadRequest uploadRequestType] */

undefined4 FUN_10af1d5c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10af1d5cc; end: 10af1d5d3; -[SCBoltUploadRequest shouldUploadInBackground] */

undefined1 FUN_10af1d5cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af1d5d4; end: 10af1d5db; -[SCBoltUploadRequest uploadChunkMetadata] */

undefined8 FUN_10af1d5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af1d5dc; end: 10af1d5e3; -[SCBoltUploadRequest encryptionInfo] */

undefined8 FUN_10af1d5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af1d5e4; end: 10af1d5eb; -[SCBoltUploadRequest durationMs] */

undefined8 FUN_10af1d5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af1d5ec; end: 10af1d5f3; -[SCBoltUploadRequest captureSessionId] */

undefined8 FUN_10af1d5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af1d5f4; end: 10af1d653; -[SCBoltUploadRequest .cxx_destruct] */

void FUN_10af1d5f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10af1d654; end: 10af1d66f; +[SCBoltUploadRequestBuilder boltUploadRequest] */

void FUN_10af1d654(void)

{
  _objc_alloc_init(PTR_PTR_1126b5980);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af1d670; end: 10af1d92b; +[SCBoltUploadRequestBuilder boltUploadRequestFromExistingBoltUploadRequest:] */

void FUN_10af1d670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  
  puVar1 = PTR_PTR_1126b5980;
  _objc_retain(param_3);
  func_0x00010bf1f1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aade0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0c67c0(param_3);
  puVar5 = puVar3;
  func_0x00010c2b3a20(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf0b760(param_3);
  puVar6 = puVar5;
  func_0x00010c2a8800(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf64080();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2abca0(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c28e280(param_3);
  puVar9 = puVar7;
  func_0x00010c2bc180(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c28e560(param_3);
  puVar10 = puVar9;
  func_0x00010c2bc1a0(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c235140(param_3);
  puVar11 = puVar10;
  func_0x00010c2b8ce0(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c28da40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2bc100(puVar11,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf93e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2ad2c0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf8b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2acb60(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar18 = puVar16;
  func_0x00010c2aa1c0(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 10af1d92c; end: 10af1d987; -[SCBoltUploadRequestBuilder build] */

void FUN_10af1d92c(void)

{
  _objc_alloc(PTR_PTR_1126ba988);
  func_0x00010c0035e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af1d988; end: 10af1d9bf; -[SCBoltUploadRequestBuilder withContentId:] */

long FUN_10af1d988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af1d9c0; end: 10af1d9c7; -[SCBoltUploadRequestBuilder withMediaSource:] */

void FUN_10af1d9c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10af1d9c8; end: 10af1d9cf; -[SCBoltUploadRequestBuilder withAssetType:] */

void FUN_10af1d9c8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10af1d9d0; end: 10af1da07; -[SCBoltUploadRequestBuilder withDataProvider:] */

long FUN_10af1d9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af1da08; end: 10af1da0f; -[SCBoltUploadRequestBuilder withUploadMediaType:] */

void FUN_10af1da08(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10af1da10; end: 10af1da17; -[SCBoltUploadRequestBuilder withUploadRequestType:] */

void FUN_10af1da10(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 10af1da18; end: 10af1da1f; -[SCBoltUploadRequestBuilder withShouldUploadInBackground:] */

void FUN_10af1da18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10af1da20; end: 10af1da57; -[SCBoltUploadRequestBuilder withUploadChunkMetadata:] */

long FUN_10af1da20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af1da58; end: 10af1da8f; -[SCBoltUploadRequestBuilder withEncryptionInfo:] */

long FUN_10af1da58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af1da90; end: 10af1dac7; -[SCBoltUploadRequestBuilder withDurationMs:] */

long FUN_10af1da90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af1dac8; end: 10af1daff; -[SCBoltUploadRequestBuilder withCaptureSessionId:] */

long FUN_10af1dac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af1db00; end: 10af1db5f; -[SCBoltUploadRequestBuilder .cxx_destruct] */

void FUN_10af1db00(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1db60; end: 10af1dbeb; -[SCBoltUploadStatusRequest initWithContentId:mediaSource:assetType:] */

undefined1 *
FUN_10af1db60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112702060;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1dbec; end: 10af1dc0f; -[SCBoltUploadStatusRequest copyWithZone:] */

undefined8 FUN_10af1dbec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1dc10; end: 10af1dc87; -[SCBoltUploadStatusRequest hash] */

undefined8 * FUN_10af1dc10(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar5 = MP_INT_ABS((int)*(undefined8 *)(param_1 + 8));
  uVar6 = MP_INT_ABS((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  uStack_38 = (ulong)uVar5;
  uStack_30 = (ulong)uVar6;
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af1dd1c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)((long)puVar2 + 0xc) != *(int *)(param_3 + 0xc))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10af1dd1c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af1dd1c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10af1dd1c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10af1dc88; end: 10af1dd37; -[SCBoltUploadStatusRequest isEqual:] */

long FUN_10af1dc88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1dd1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) {
      lVar3 = 0;
      goto LAB_10af1dd1c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af1dd1c;
    }
  }
  lVar3 = 1;
LAB_10af1dd1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1dd38; end: 10af1dd3f; -[SCBoltUploadStatusRequest contentId] */

undefined8 FUN_10af1dd38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1dd40; end: 10af1dd47; -[SCBoltUploadStatusRequest mediaSource] */

undefined4 FUN_10af1dd40(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af1dd48; end: 10af1dd4f; -[SCBoltUploadStatusRequest assetType] */

undefined4 FUN_10af1dd48(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10af1dd50; end: 10af1dd5b; -[SCBoltUploadStatusRequest .cxx_destruct] */

void FUN_10af1dd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af1dd5c; end: 10af1de0f; -[SCCUPSDULPRequest initWithMediaSource:assetMetadataList:contentId:] */

undefined1 *
FUN_10af1dd5c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112702068;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1de10; end: 10af1de33; -[SCCUPSDULPRequest copyWithZone:] */

undefined8 FUN_10af1de10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1de34; end: 10af1deb7; -[SCCUPSDULPRequest hash] */

ulong * FUN_10af1de34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_40 = (ulong)uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar4;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (ulong *)param_3) {
LAB_10af1df48:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af1df54;
    puVar8 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar6 & 1) != 0) && (*(int *)((long)puVar5 + 8) == *(int *)(param_3 + 8))) {
      lVar7 = *(long *)((long)puVar5 + 0x10);
      if ((lVar7 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
        puVar8 = *(undefined1 **)((long)puVar5 + 0x18);
        if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af1df54;
        }
        goto LAB_10af1df48;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10af1df54:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 10af1deb8; end: 10af1df6f; -[SCCUPSDULPRequest isEqual:] */

long FUN_10af1deb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1df48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1df54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af1df54;
        }
        goto LAB_10af1df48;
      }
    }
    lVar3 = 0;
  }
LAB_10af1df54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1df70; end: 10af1df77; -[SCCUPSDULPRequest mediaSource] */

undefined4 FUN_10af1df70(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af1df78; end: 10af1df7f; -[SCCUPSDULPRequest assetMetadataList] */

undefined8 FUN_10af1df78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1df80; end: 10af1df87; -[SCCUPSDULPRequest contentId] */

undefined8 FUN_10af1df80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af1df88; end: 10af1dfb7; -[SCCUPSDULPRequest .cxx_destruct] */

void FUN_10af1df88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af1dfb8; end: 10af1e007; -[SCCUPSAssetMetadata initWithAssetType:sizeBytes:] */

void FUN_10af1dfb8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702070;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10af1e008; end: 10af1e02b; -[SCCUPSAssetMetadata copyWithZone:] */

undefined8 FUN_10af1e008(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1e02c; end: 10af1e097; -[SCCUPSAssetMetadata hash] */

ulong * FUN_10af1e02c(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_28 = (ulong)uVar1;
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar5;
  if (-1 < lVar5) {
    lStack_20 = lVar5;
  }
  puVar3 = &uStack_28;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar4 & 1) == 0) || ((int)puVar3[1] != (int)param_3[1])) {
        puVar6 = (ulong *)0x0;
      }
      else {
        puVar6 = (ulong *)(ulong)(puVar3[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af1e098; end: 10af1e12f; -[SCCUPSAssetMetadata isEqual:] */

bool FUN_10af1e098(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af1e130; end: 10af1e137; -[SCCUPSAssetMetadata assetType] */

undefined4 FUN_10af1e130(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af1e138; end: 10af1e13f; -[SCCUPSAssetMetadata sizeBytes] */

undefined8 FUN_10af1e138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1e140; end: 10af1e1eb; -[SCCUPSDULPUploadLocation initWithUploadUrl:requestHeaders:] */

undefined1 *
FUN_10af1e140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702078;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1e1ec; end: 10af1e20f; -[SCCUPSDULPUploadLocation copyWithZone:] */

undefined8 FUN_10af1e1ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1e210; end: 10af1e283; -[SCCUPSDULPUploadLocation hash] */

undefined8 * FUN_10af1e210(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af1e304:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af1e310;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af1e310;
        }
        goto LAB_10af1e304;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af1e310:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af1e284; end: 10af1e32b; -[SCCUPSDULPUploadLocation isEqual:] */

long FUN_10af1e284(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1e304:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1e310;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af1e310;
        }
        goto LAB_10af1e304;
      }
    }
    lVar3 = 0;
  }
LAB_10af1e310:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1e32c; end: 10af1e333; -[SCCUPSDULPUploadLocation uploadUrl] */

undefined8 FUN_10af1e32c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1e334; end: 10af1e33b; -[SCCUPSDULPUploadLocation requestHeaders] */

undefined8 FUN_10af1e334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1e33c; end: 10af1e36b; -[SCCUPSDULPUploadLocation .cxx_destruct] */

void FUN_10af1e33c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1e36c; end: 10af1e443; -[SCBoltDataUploadResult initWithSerializedContentObject:contentURL:mediaOrchestrationAttemptId:] */

undefined1 *
FUN_10af1e36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112702080;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1e444; end: 10af1e467; -[SCBoltDataUploadResult copyWithZone:] */

undefined8 FUN_10af1e444(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1e468; end: 10af1e4e7; -[SCBoltDataUploadResult hash] */

undefined8 * FUN_10af1e468(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af1e580:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af1e58c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af1e58c;
          }
          goto LAB_10af1e580;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af1e58c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af1e4e8; end: 10af1e5a7; -[SCBoltDataUploadResult isEqual:] */

long FUN_10af1e4e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1e580:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1e58c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af1e58c;
          }
          goto LAB_10af1e580;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af1e58c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1e5a8; end: 10af1e5af; -[SCBoltDataUploadResult serializedContentObject] */

undefined8 FUN_10af1e5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1e5b0; end: 10af1e5b7; -[SCBoltDataUploadResult contentURL] */

undefined8 FUN_10af1e5b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1e5b8; end: 10af1e5bf; -[SCBoltDataUploadResult mediaOrchestrationAttemptId] */

undefined8 FUN_10af1e5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af1e5c0; end: 10af1e5fb; -[SCBoltDataUploadResult .cxx_destruct] */

void FUN_10af1e5c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1e5fc; end: 10af1e707; -[SCBoltDataUploadFailureResult initWithResponse:error:failureReason:mediaOrchestrationAttemptId:] */

undefined1 *
FUN_10af1e5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112702088;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1e708; end: 10af1e72b; -[SCBoltDataUploadFailureResult copyWithZone:] */

undefined8 FUN_10af1e708(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1e72c; end: 10af1e7b7; -[SCBoltDataUploadFailureResult hash] */

undefined8 * FUN_10af1e72c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af1e868:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af1e874;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10af1e874;
            }
            goto LAB_10af1e868;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af1e874:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af1e7b8; end: 10af1e88f; -[SCBoltDataUploadFailureResult isEqual:] */

long FUN_10af1e7b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1e868:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1e874;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10af1e874;
            }
            goto LAB_10af1e868;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af1e874:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1e890; end: 10af1e897; -[SCBoltDataUploadFailureResult response] */

undefined8 FUN_10af1e890(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1e898; end: 10af1e89f; -[SCBoltDataUploadFailureResult error] */

undefined8 FUN_10af1e898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1e8a0; end: 10af1e8a7; -[SCBoltDataUploadFailureResult failureReason] */

undefined8 FUN_10af1e8a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af1e8a8; end: 10af1e8af; -[SCBoltDataUploadFailureResult mediaOrchestrationAttemptId] */

undefined8 FUN_10af1e8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af1e8b0; end: 10af1e8f7; -[SCBoltDataUploadFailureResult .cxx_destruct] */

void FUN_10af1e8b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1e8f8; end: 10af1ea23; -[SCUploadStatusUpdate initWithMode:sentBytes:requestSentBytes:confirmedBytes:totalBytes:chunked:timestampMs:] */

undefined1 *
FUN_10af1e8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112702090;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1ea24; end: 10af1ea47; -[SCUploadStatusUpdate copyWithZone:] */

undefined8 FUN_10af1ea24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1ea48; end: 10af1eaf3; -[SCUploadStatusUpdate hash] */

long * FUN_10af1ea48(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_40 = uVar1;
  func_0x000107c3191c(&lStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10af1ebd4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af1ebe0;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)plVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)((long)plVar3 + 8) == param_3[8])) &&
        (*(long *)((long)plVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)plVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)plVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)plVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)plVar3 + 0x30);
            if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10af1ebe0;
            }
            goto LAB_10af1ebd4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af1ebe0:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10af1eaf4; end: 10af1ebfb; -[SCUploadStatusUpdate isEqual:] */

long FUN_10af1eaf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1ebd4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1ebe0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10af1ebe0;
            }
            goto LAB_10af1ebd4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af1ebe0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1ebfc; end: 10af1ec03; -[SCUploadStatusUpdate mode] */

undefined8 FUN_10af1ebfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1ec04; end: 10af1ec0b; -[SCUploadStatusUpdate sentBytes] */

undefined8 FUN_10af1ec04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af1ec0c; end: 10af1ec13; -[SCUploadStatusUpdate requestSentBytes] */

undefined8 FUN_10af1ec0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af1ec14; end: 10af1ec1b; -[SCUploadStatusUpdate confirmedBytes] */

undefined8 FUN_10af1ec14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af1ec1c; end: 10af1ec23; -[SCUploadStatusUpdate totalBytes] */

undefined8 FUN_10af1ec1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af1ec24; end: 10af1ec2b; -[SCUploadStatusUpdate chunked] */

undefined1 FUN_10af1ec24(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af1ec2c; end: 10af1ec33; -[SCUploadStatusUpdate timestampMs] */

undefined8 FUN_10af1ec2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af1ec34; end: 10af1ec7b; -[SCUploadStatusUpdate .cxx_destruct] */

void FUN_10af1ec34(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af1ec7c; end: 10af1ec83; -[SCUploadMediaDataManagerServices boltUploaderLazy] */

undefined8 FUN_10af1ec7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


