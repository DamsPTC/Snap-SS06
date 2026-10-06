/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aeb45b8; end: 10aeb45cf; +[SCLensScheduleNamespaceDataModelTransformer _snapTypeFromMetadataSnapType:] */

undefined1 FUN_10aeb45b8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10aeb45d0; end: 10aeb45e3; +[SCLensScheduleNamespaceDataModelTransformer _cameraTypeFromMetadataCameraType:] */

int FUN_10aeb45d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (param_3 - 1U & 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 10aeb45e4; end: 10aeb45f7; +[SCLensScheduleNamespaceDataModelTransformer _snapSourceFromMetadataSnapSource:] */

int FUN_10aeb45e4(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 5) {
    iVar1 = (param_3 - 1U & 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 10aeb45f8; end: 10aeb4603; -[SCLensScheduleNamespaceDataModelTransformer .cxx_destruct] */

void FUN_10aeb45f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb4604; end: 10aeb4a0f; -[SCLensScheduleNamespaceDataTransformer namespaceDataModelFromInternalNamespaceData:] */

void FUN_10aeb4604(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10aeb4a10;
    puStack_88 = &UNK_110c8f208;
    ppuVar3 = &puStack_a0;
    uStack_80 = param_2;
    _objc_retainBlock();
    lVar1 = param_4;
    func_0x00010bef09a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c105c40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0da7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bfa81c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4f6e0(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126de688;
    lVar1 = param_4;
    func_0x00010c0cf080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf4f820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde8720(puVar8,param_3,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar1);
    puVar9 = PTR_PTR_1126de808;
    _objc_alloc();
    lVar1 = param_4;
    func_0x00010c089660(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0cf080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010bf3d3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_4;
    func_0x00010c0cf080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c0f2920();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_4;
    func_0x00010c0cf080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c0d9cc0();
    func_0x00010c02c3c0(puVar9,param_3,lVar1,lVar10,puVar8,lVar12,lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar7);
    _objc_release(lVar1);
    puVar15 = PTR_PTR_1126de810;
    _objc_alloc(PTR_PTR_1126de810);
    lVar1 = param_4;
    func_0x00010c14ffc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_4;
    func_0x00010c27d100(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2827c0();
    lVar12 = param_4;
    func_0x00010c08a660(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c02dd80(param_1,0,puVar15,param_3,lVar7,0,0,lVar11,lVar6,0,0,param_2,lVar4,lVar5,
                        puVar9,lVar2);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(param_2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10aeb4a10; end: 10aeb4b27;  */

void FUN_10aeb4a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aeb4b28;
  uStack_30 = 0x10aeb4b38;
  uStack_28 = 0;
  func_0x00010c0bd220(param_2);
  puVar1 = PTR_PTR_1126de800;
  _objc_alloc(PTR_PTR_1126de800);
  func_0x00010c01fc40();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb4b28; end: 10aeb4b3f;  */

void FUN_10aeb4b28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aeb4b40; end: 10aeb4c6f;  */

void FUN_10aeb4b40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126de7f0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar7 = param_2;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar4;
  func_0x00010bf63640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b220(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar6 = PTR_PTR_1126de7f8;
  func_0x00010bf26100();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar6;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aeb4c70; end: 10aeb4cdb;  */

void FUN_10aeb4c70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c095160(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126de7f8;
  func_0x00010bf63f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeb4cdc; end: 10aeb4ce7;  */

void FUN_10aeb4cdc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__lensNoFillMetadataDataModelForL_112570760,
             param_2);
  return;
}



/* Entry: 10aeb4ce8; end: 10aeb50fb; -[SCLensScheduleNamespaceDataTransformer namespaceDataModelFromNamespaceData:] */

void FUN_10aeb4ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar1 = param_4;
    func_0x00010bef0bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c105c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0da7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bfa81c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4f6e0(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126de688;
    lVar1 = param_4;
    func_0x00010c0cf080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf4f820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde8720(puVar7,param_3,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126de808;
    _objc_alloc();
    lVar1 = param_4;
    func_0x00010c089660(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c0cf080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010bf3d3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_4;
    func_0x00010c0cf080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c0f2920();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_4;
    func_0x00010c0cf080(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c0d9cc0();
    func_0x00010c02c3c0(puVar8,param_3,lVar1,lVar9,puVar7,lVar11,lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar1);
    puVar14 = PTR_PTR_1126de810;
    _objc_alloc(PTR_PTR_1126de810);
    lVar1 = param_4;
    func_0x00010c14ffc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010c27d100(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2827c0();
    lVar11 = param_4;
    func_0x00010c08a660(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c02dd80(param_1,0,puVar14,param_3,lVar6,lVar3,lVar4,lVar10,lVar5,0,0,param_2,0,0,
                        puVar8,lVar2);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10aeb50fc; end: 10aeb5127;  */

void FUN_10aeb50fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c095170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_lensMetadataModelFromLensMetadat_112602e68,param_2);
  return;
}



/* Entry: 10aeb5128; end: 10aeb51f7; +[SCLensScheduleNamespaceDataTransformer _contextualInfoModelFromContextualInfo:] */

void FUN_10aeb5128(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf2b540(param_3);
    func_0x00010bdd9580(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c2439e0(param_3);
    func_0x00010bebd3e0(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c243400(param_3);
    func_0x00010bebd2a0(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c105ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126de818;
    _objc_alloc(PTR_PTR_1126de818);
    func_0x00010bffbcc0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb51f8; end: 10aeb5207; +[SCLensScheduleNamespaceDataTransformer _cameraTypeFromContextCameraType:] */

int FUN_10aeb51f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  
  cVar1 = (char)param_3;
  if (3 < param_3) {
    cVar1 = '\0';
  }
  return (int)cVar1;
}



/* Entry: 10aeb5208; end: 10aeb521f; +[SCLensScheduleNamespaceDataTransformer _snapTypeFromContextSnapType:] */

undefined1 FUN_10aeb5208(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10aeb5220; end: 10aeb522f; +[SCLensScheduleNamespaceDataTransformer _snapSourceFromContextSnapSource:] */

int FUN_10aeb5220(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  
  cVar1 = (char)param_3;
  if (5 < param_3) {
    cVar1 = '\0';
  }
  return (int)cVar1;
}



/* Entry: 10aeb5230; end: 10aeb52e3; -[SCLensScheduleNamespaceDataTransformer _lensNoFillMetadataDataModelForLensNoFillMetadata:] */

void FUN_10aeb5230(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126de820;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bf32840(param_3);
    lVar3 = param_3;
    func_0x00010c15ed20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf93980(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bffccc0(puVar1,param_2,lVar2,lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aeb52e4; end: 10aeb5433; -[SCLensScheduleNamespaceDataTransformer _locationMetadataDataModelForLocationMetadata:] */

void FUN_10aeb52e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c153620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1c680(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0d6ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126de828;
    _objc_alloc(PTR_PTR_1126de828);
    lVar1 = param_3;
    func_0x00010c27d1c0(param_3);
    lVar4 = param_3;
    func_0x00010c08a660(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c26f320(lVar4);
    func_0x00010c042920(puVar3,param_2,param_1,lVar2,lVar1);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb5434; end: 10aeb543f;  */

void FUN_10aeb5434(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__geofenceModelForGeoFence__112564b90,param_2);
  return;
}



/* Entry: 10aeb5440; end: 10aeb54f3; -[SCLensScheduleNamespaceDataTransformer _geoCircleModelForGeoCircle:] */

void FUN_10aeb5440(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010bf345e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1c6e0(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126de830;
    _objc_alloc(PTR_PTR_1126de830);
    func_0x00010c11ef60(param_4);
    _objc_release(param_4);
    func_0x00010bffd460(param_1,puVar2,param_3,param_2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb54f4; end: 10aeb55d7; -[SCLensScheduleNamespaceDataTransformer _geofenceModelForGeoFence:] */

void FUN_10aeb54f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bfc14a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126de838;
    _objc_alloc(PTR_PTR_1126de838);
    lVar1 = param_3;
    func_0x00010bfc1580(param_3);
    _objc_release(param_3);
    func_0x00010c0178c0(puVar3,param_2,lVar1,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb55d8; end: 10aeb55e3;  */

void FUN_10aeb55d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__geoCoordinateModelForGeoCoordin_112564b58,
             param_2);
  return;
}



/* Entry: 10aeb55e4; end: 10aeb565f; -[SCLensScheduleNamespaceDataTransformer _geoCoordinateModelForGeoCoordinate:] */

void FUN_10aeb55e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126de840;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00010c08b3c0(param_4);
    uVar2 = param_1;
    func_0x00010c0b55a0(param_4);
    _objc_release(param_4);
    func_0x00010c021a60(param_1,uVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb5660; end: 10aeb568f; -[SCLensScheduleNamespaceDataTransformer .cxx_destruct] */

void FUN_10aeb5660(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb5690; end: 10aeb5807; -[SCMixerFeedDataTransformer feedDataModelFromMixerFeed:currentDate:] */

void FUN_10aeb5690(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar6 = (undefined *)0x0;
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010c130180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8e480(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126de848;
    _objc_alloc(PTR_PTR_1126de848);
    lVar1 = param_4;
    func_0x00010c0d53e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c121e80(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bf85d80(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010bfe5b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010bf69d40(param_4);
    _objc_release(param_4);
    func_0x00010c26f320(param_5);
    _objc_release(param_5);
    func_0x00010c02dde0(param_1,puVar6,param_3,lVar1,lVar2,param_2,lVar3,lVar4,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeb5808; end: 10aeb5943; -[SCMixerFeedDataTransformer mixerFeedFromFeedDataModel:] */

void FUN_10aeb5808(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c130180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8e4c0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126de5d0;
    _objc_alloc(PTR_PTR_1126de5d0);
    lVar1 = param_3;
    func_0x00010c0d53e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c121e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bfe5b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bf69d40(param_3);
    _objc_release(param_3);
    func_0x00010c02ddc0(puVar2,param_2,lVar1,lVar3,param_1,lVar4,lVar5,lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb5944; end: 10aeb5a1f; -[SCMixerFeedDataTransformer groupDataModelFromMixerFeeds:groupId:locale:feedsCacheTtlMillis:exclusiveLensSubscriptionPresent:currentDate:] */

void FUN_10aeb5944(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined *)0x0;
  if ((param_4 != 0) && (param_8 != 0)) {
    uVar2 = param_1;
    _objc_retain(param_8);
    _objc_retain(param_6);
    func_0x00010bf43280(param_4,param_3,&PTR___NSConcreteGlobalBlock_110c8f2c8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126de850;
    _objc_alloc(PTR_PTR_1126de850);
    func_0x00010c26f320(param_8);
    _objc_release(param_8);
    func_0x00010c018f00(uVar2,param_1,puVar1,param_3,param_5,param_4,param_6,param_7);
    _objc_release(param_6);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb5a20; end: 10aeb5a27;  */

void FUN_10aeb5a20(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_namespaceId_112612f10);
  return;
}



/* Entry: 10aeb5a28; end: 10aeb5ac3; -[SCMixerFeedDataTransformer mixerFeedsFromFeedDataModels:] */

void FUN_10aeb5a28(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10aeb5ac4;
    puStack_30 = &UNK_110c8f2e8;
    puVar2 = param_3;
    uStack_28 = param_1;
    func_0x00010bf43280(param_3,param_2,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb5ac4; end: 10aeb5acf;  */

void FUN_10aeb5ac4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_mixerFeedFromFeedDataModel__1126115e0,param_2);
  return;
}



/* Entry: 10aeb5ad0; end: 10aeb5bdf; -[SCMixerFeedDataTransformer mixerNamespaceGroupFromGroupDataModel:] */

void FUN_10aeb5ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar2 = (undefined *)0x0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010c08a700(param_4);
    func_0x00010bf655e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126de858;
    _objc_alloc(PTR_PTR_1126de858);
    lVar3 = param_4;
    func_0x00010bfceb20(param_4);
    lVar4 = param_4;
    func_0x00010c0d5400(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c09e1e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4640(param_4);
    lVar6 = param_4;
    func_0x00010bf9adc0(param_4);
    _objc_release(param_4);
    func_0x00010c018f20(param_1,puVar2,param_3,(long)(int)lVar3,lVar4,puVar1,lVar5,lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb5be0; end: 10aeb5cf7; -[SCMixerFeedDataTransformer _renderStrategyDataModelFromRenderStrategy:] */

void FUN_10aeb5be0(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010c0ed100(param_4);
    uVar2 = param_2;
    func_0x00010be6e560(param_2,param_3,lVar1);
    lVar1 = param_4;
    func_0x00010bf4dac0(param_4);
    uVar3 = param_2;
    func_0x00010bde80e0(param_2,param_3,lVar1);
    puVar4 = PTR_PTR_1126de860;
    _objc_alloc(PTR_PTR_1126de860);
    lVar1 = param_4;
    func_0x00010c2480c0(param_4);
    func_0x00010c0852a0(param_4);
    fVar8 = (float)param_1;
    lVar5 = param_4;
    func_0x00010c2902c0(param_4);
    lVar6 = param_4;
    func_0x00010c2902e0(param_4);
    lVar7 = param_4;
    func_0x00010c097520(param_4);
    func_0x00010be4bee0(param_2,param_3,lVar7);
    func_0x00010c097500(param_4);
    _objc_release(param_4);
    func_0x00010c04ad80(fVar8,(float)param_1,puVar4,param_3,lVar1,uVar2,uVar3,lVar5,lVar6,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb5cf8; end: 10aeb5e3b; -[SCMixerFeedDataTransformer _renderStrategyFromDataModel:] */

void FUN_10aeb5cf8(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126de618;
    _objc_alloc(PTR_PTR_1126de618);
    dVar4 = 1.0;
    dVar3 = 0.0;
  }
  else {
    lVar1 = param_4;
    func_0x00010c0ed100(param_4);
    func_0x00010be60bc0(param_2,param_3,lVar1);
    lVar1 = param_4;
    func_0x00010bf4dac0(param_4);
    func_0x00010be60ac0(param_2,param_3,lVar1);
    puVar2 = PTR_PTR_1126de618;
    _objc_alloc(PTR_PTR_1126de618);
    func_0x00010c2480c0(param_4);
    func_0x00010c0852a0(param_4);
    dVar4 = (double)param_1;
    func_0x00010c2902c0(param_4);
    func_0x00010c2902e0(param_4);
    lVar1 = param_4;
    func_0x00010c097520(param_4);
    func_0x00010be60b40(param_2,param_3,lVar1);
    func_0x00010c097500(param_4);
    dVar3 = (double)param_1;
  }
  func_0x00010c04ad80(dVar4,dVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb5e3c; end: 10aeb5e47; -[SCMixerFeedDataTransformer _orientationFromMixerOrientation:] */

bool FUN_10aeb5e3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 10aeb5e48; end: 10aeb5e53; -[SCMixerFeedDataTransformer _contentTypeFromMixerContentType:] */

bool FUN_10aeb5e48(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10aeb5e54; end: 10aeb5e5f; -[SCMixerFeedDataTransformer _mixerOrientationFromOrientation:] */

bool FUN_10aeb5e54(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 10aeb5e60; end: 10aeb5e6b; -[SCMixerFeedDataTransformer _mixerContentTypeFromContentType:] */

bool FUN_10aeb5e60(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 10aeb5e6c; end: 10aeb5e83; -[SCMixerFeedDataTransformer _lensTileLayoutFromMixerLayout:] */

undefined4 FUN_10aeb5e6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = 0;
  }
  if (param_3 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10aeb5e84; end: 10aeb5e9b; -[SCMixerFeedDataTransformer _mixerLensTileLayoutFromLayout:] */

undefined8 FUN_10aeb5e84(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = 0;
  }
  if (param_3 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10aeb5e9c; end: 10aeb5f4b;  */

void FUN_10aeb5e9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de2e0;
  _objc_alloc(PTR_PTR_1126de2e0);
  func_0x00010c023f40();
  puVar2 = PTR_PTR_1126de688;
  _objc_alloc(PTR_PTR_1126de688);
  func_0x00010c0250c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb5f4c; end: 10aeb6163; -[SCLensScheduleNamespaceMetadataStoreFactory metadataStoreForScheduleNamespace:] */

void FUN_10aeb5f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10aeb60bc;
  puStack_88 = &UNK_110c8f378;
  uStack_80 = param_3;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar5;
  uStack_60 = uVar4;
  uStack_58 = uVar6;
  _objc_retain(uVar6);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb6164; end: 10aeb61b7; -[SCLensScheduleNamespaceMetadataStoreFactory .cxx_destruct] */

void FUN_10aeb6164(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb61b8; end: 10aeb6313; -[SCLensScheduleNamespaceMetadataStoreProvider cleanStoreCache] */

void FUN_10aeb61b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar1);
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar2 = *(undefined8 *)(lStack_108 + lVar9 * 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf39ea0();
        _objc_release(uVar2);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar1;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(0);
  __Unwind_Resume();
  _objc_retain(puVar5);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined1 *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10aeb64a4;
  }
  _objc_retain(lVar1);
  _objc_sync_enter(lVar1);
  puVar6 = *(undefined **)(lVar1 + 8);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010c0d53e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar6,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar6 == (undefined *)0x0) {
    lVar4 = *(long *)(lVar1 + 0x10);
    func_0x00010c0cc7c0(lVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae720;
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_10aeb64e8;
      puStack_160 = &UNK_110c8f3a8;
      _objc_retain(lVar4);
      lStack_158 = lVar4;
      func_0x00010bf11fe0(puVar7,param_2,&puStack_178);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + 8);
      puVar3 = (undefined1 *)puVar5;
      func_0x00010c0d53e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar2,param_2,puVar7,puVar3);
      _objc_release(puVar3);
      _objc_release(lStack_158);
    }
    _objc_release(lVar4);
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
    puVar6 = puVar7;
    if (lVar4 != 0) goto LAB_10aeb6490;
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
LAB_10aeb6490:
    _objc_retain(puVar6);
    puVar7 = puVar6;
  }
  _objc_release(puVar7);
LAB_10aeb64a4:
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeb6314; end: 10aeb64e7; -[SCLensScheduleNamespaceMetadataStoreProvider metadataStoreForScheduleNamespace:] */

void FUN_10aeb6314(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
    goto LAB_10aeb64a4;
  }
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar3 = *(undefined **)(param_1 + 8);
  lVar1 = param_3;
  func_0x00010c0d53e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (puVar3 == (undefined *)0x0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0cc7c0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae720;
    if (lVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10aeb64e8;
      puStack_50 = &UNK_110c8f3a8;
      _objc_retain(lVar1);
      lStack_48 = lVar1;
      func_0x00010bf11fe0(puVar4,param_2,&puStack_68);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      lVar2 = param_3;
      func_0x00010c0d53e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,puVar4,lVar2);
      _objc_release(lVar2);
      _objc_release(lStack_48);
    }
    _objc_release(lVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    puVar3 = puVar4;
    if (lVar1 != 0) goto LAB_10aeb6490;
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
LAB_10aeb6490:
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar4);
LAB_10aeb64a4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb64e8; end: 10aeb65a3;  */

void FUN_10aeb64e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aeb65a4;
  puStack_40 = &UNK_110842e18;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010c2775c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f638,&puStack_58);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10aeb65a4; end: 10aeb65db;  */

void FUN_10aeb65a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeb65dc; end: 10aeb65df; -[SCLensScheduleNamespaceMetadataStoreProvider storeUpdaterForLensScheduleNamespace:] */

void FUN_10aeb65dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_metadataStoreForScheduleNamespac_112610c08);
  return;
}



/* Entry: 10aeb65e0; end: 10aeb660f; -[SCLensScheduleNamespaceMetadataStoreProvider .cxx_destruct] */

void FUN_10aeb65e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb6610; end: 10aeb6797; -[SCLensFeedUpdateStrategy shouldUpdateFeedData:] */

uint FUN_10aeb6610(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010c08a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010bf5f320(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c09e1e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
LAB_10aeb66bc:
        func_0x00010bfa4640(param_4);
        dVar8 = *(double *)(param_2 + 0x10) * 1000.0;
        dVar9 = param_1;
        if (dVar8 <= param_1) {
          dVar9 = dVar8;
        }
        if (dVar9 == 0.0) goto LAB_10aeb66e4;
        uVar5 = *(undefined8 *)(param_2 + 8);
        func_0x00010bf5e5e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_4;
        func_0x00010c08a700(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(uVar5,param_3,lVar1);
        _objc_release(lVar1);
        if (param_1 * 1000.0 <= dVar9) {
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          func_0x00010bf9adc0(uVar6);
          lVar1 = param_4;
          func_0x00010bf9adc0(param_4);
          uVar7 = (uint)uVar6 ^ (uint)lVar1;
        }
        else {
          uVar7 = 1;
        }
        _objc_release(uVar5);
      }
      else {
        lVar3 = param_4;
        func_0x00010c09e1e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0720c0();
        _objc_release(lVar3);
        _objc_release(lVar1);
        if ((int)lVar4 != 0) goto LAB_10aeb66bc;
LAB_10aeb66e4:
        uVar7 = 1;
      }
      _objc_release(uVar2);
      goto LAB_10aeb6770;
    }
  }
  uVar7 = 1;
LAB_10aeb6770:
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 10aeb6798; end: 10aeb67c7; -[SCLensFeedUpdateStrategy .cxx_destruct] */

void FUN_10aeb6798(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb67c8; end: 10aeb67d3; -[SCLensScheduleNamespaceForceUpdateStrategy namespaceDataToUpdateFromNamespaceData:updatingMode:] */

void FUN_10aeb67c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0860b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae6b8,PTR_s_just__1125ff238);
  return;
}



/* Entry: 10aeb67d4; end: 10aeb682f; -[SCLensScheduleNamespaceForceUpdateStrategy namespaceToUpdateForUpdateMetadata:updatingParams:] */

void FUN_10aeb67d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8f3f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb6830; end: 10aeb6837;  */

void FUN_10aeb6830(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14ffd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_scheduleNamespace_112631a10);
  return;
}



/* Entry: 10aeb6838; end: 10aeb69eb; -[SCLensScheduleNamespaceTtlUpdateStrategy _canSkipUpdateForMetadata:] */

bool FUN_10aeb6838(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08a660();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0cf040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c14ffc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0e00e0(lVar3,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((lVar6 == 0) || (lVar4 = lVar6, func_0x00010c068aa0(), (int)lVar4 == 0)) {
      bVar1 = false;
    }
    else {
      lVar4 = lVar6;
      func_0x00010c0c30c0(lVar6);
      lVar5 = lVar2;
      func_0x00010bf64e40((double)lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010bf433a0(lVar5,param_2,puVar7);
      if (lVar4 == -1) {
        bVar1 = false;
      }
      else {
        lVar3 = *(long *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf3fc40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        if (lVar4 == 0) {
          bVar1 = false;
        }
        else {
          lVar3 = lVar2;
          func_0x00010bf433a0(lVar2,param_2,lVar4);
          bVar1 = lVar3 != -1;
        }
        _objc_release(lVar4);
      }
      _objc_release(puVar7);
      _objc_release(lVar5);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aeb69ec; end: 10aeb6a3f; -[SCLensScheduleNamespaceTtlUpdateStrategy .cxx_destruct] */

void FUN_10aeb69ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb6a40; end: 10aeb6abb;  */

void FUN_10aeb6a40(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0f2920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c14ffc0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10aeb6abc; end: 10aeb6acb; +[SCLensScheduleNamespaceUpdateStrategy _namespaceIdsFromUpdateMetadata:] */

void FUN_10aeb6abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8f488);
  return;
}



/* Entry: 10aeb6acc; end: 10aeb6b13;  */

void FUN_10aeb6acc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeb6b14; end: 10aeb6b2b; +[SCLensScheduleNamespaceUpdateStrategy _namespaceIdsFromNamespaces:] */

void FUN_10aeb6b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8f4a8);
  return;
}



/* Entry: 10aeb6b2c; end: 10aeb6b5b; -[SCLensScheduleNamespaceUpdateStrategy .cxx_destruct] */

void FUN_10aeb6b2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb6b5c; end: 10aeb6b8b; -[SCMixerBackgroundUpdateBlocker .cxx_destruct] */

void FUN_10aeb6b5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb6b8c; end: 10aeb6ca7; -[SCLensScheduleLiveReplyDataForceUpdater initWithLensScheduleServiceProvider:lensPicker:lensDataConfigProvider:] */

undefined1 *
FUN_10aeb6b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112701700;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126de358;
    func_0x00010bea15c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de358;
    func_0x00010bea15c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aeb6ca8; end: 10aeb6cd3; -[SCLensScheduleLiveReplyDataForceUpdater updateData] */

/* WARNING: Possible PIC construction at 0x00010aeb6cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aeb6cc0) */

void FUN_10aeb6ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be189b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__forceUpdateServiceManager__112563c08,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10aeb6cd4; end: 10aeb6cdb; -[SCLensScheduleLiveReplyDataForceUpdater updateDataStoresWithUnlockedLens:] */

void FUN_10aeb6cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be189b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__forceUpdateServiceManager__112563c08,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10aeb6cdc; end: 10aeb6ce3; -[SCLensScheduleLiveReplyDataForceUpdater updateDataStoresWithRemovedLensId:] */

void FUN_10aeb6cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be189b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__forceUpdateServiceManager__112563c08,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10aeb6ce4; end: 10aeb6ceb; -[SCLensScheduleLiveReplyDataForceUpdater updateLiveReplyDataStores] */

void FUN_10aeb6ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be189b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__forceUpdateServiceManager__112563c08,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10aeb6cec; end: 10aeb6d23; -[SCLensScheduleLiveReplyDataForceUpdater _forceUpdateServiceManager:] */

void FUN_10aeb6cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeb6d24; end: 10aeb6e37; +[SCLensScheduleLiveReplyDataForceUpdater _serviceDataUpdaterWithLensScheduleServiceProvider:namespaceTypes:] */

void FUN_10aeb6d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c0b8600(param_4,param_2,&PTR___NSConcreteGlobalBlock_110c8f4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126de658;
  _objc_opt_new(PTR_PTR_1126de658);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c15f760(uVar2,param_2,param_4,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10aeb6e38; end: 10aeb6e7f; -[SCLensScheduleLiveReplyDataForceUpdater .cxx_destruct] */

void FUN_10aeb6e38(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb6e80; end: 10aeb6e8b; -[SCLensFilteredMetadataStoreBlockCreator .cxx_destruct] */

void FUN_10aeb6e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb6e8c; end: 10aeb6edb; -[SCScheduledLensFilteredMetadataStore addListener:] */

void FUN_10aeb6e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bef9980(uVar1,param_2,param_3);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeb6edc; end: 10aeb6f2b; -[SCScheduledLensFilteredMetadataStore removeListener:] */

void FUN_10aeb6edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c12cf80(uVar1,param_2,param_3);
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeb6f2c; end: 10aeb6f93; -[SCScheduledLensFilteredMetadataStore startUpdatingWithMode:] */

void FUN_10aeb6f2c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 2) {
    func_0x00010bec6fe0(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be61ec0(param_1,param_2,param_3);
  func_0x00010c251660(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeb6f94; end: 10aeb6f9b; -[SCScheduledLensFilteredMetadataStore stopUpdating] */

void FUN_10aeb6f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 10aeb6f9c; end: 10aeb6f9f; -[SCScheduledLensFilteredMetadataStore synchronize] */

void FUN_10aeb6f9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnServiceObservable_11258f5a0);
  return;
}



/* Entry: 10aeb6fa0; end: 10aeb702b; -[SCScheduledLensFilteredMetadataStore lenses] */

void FUN_10aeb6fa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = *(undefined **)(param_1 + 0x18);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  func_0x00010bf09f80(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aeb702c; end: 10aeb70b7; -[SCScheduledLensFilteredMetadataStore lensesToPrefetch] */

void FUN_10aeb702c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0987c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = *(undefined **)(param_1 + 0x18);
  func_0x00010c0987c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  func_0x00010bf09f80(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aeb70b8; end: 10aeb71db; -[SCScheduledLensFilteredMetadataStore hasMoreLensesToLoad] */

bool FUN_10aeb70b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f2920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c0f2920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  lVar5 = *(long *)(param_1 + 0x18);
  func_0x00010c098240(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if ((lVar2 == 0) || (lVar1 == 0)) {
    bVar6 = lVar3 != 0 && lVar4 != 0;
  }
  else {
    bVar6 = true;
  }
  _os_unfair_lock_unlock(param_1 + 0x50);
  return bVar6;
}



/* Entry: 10aeb71dc; end: 10aeb727b; -[SCScheduledLensFilteredMetadataStore loadMoreTriggerDistance] */

ulong FUN_10aeb71dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d9cc0();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x48);
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d9cc0();
  _objc_release(uVar3);
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  _os_unfair_lock_unlock(param_1 + 0x50);
  return uVar2;
}



/* Entry: 10aeb727c; end: 10aeb72a3; +[SCScheduledLensFilteredMetadataStore _stringFromContext:] */

undefined ** FUN_10aeb727c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_110c8f508)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd17f8;
}



/* Entry: 10aeb72a4; end: 10aeb731b; -[SCScheduledLensFilteredMetadataStore .cxx_destruct] */

void FUN_10aeb72a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aeb731c; end: 10aeb7457; -[SCChecksumUpdateResolver lensesByResolvingUpdateForCachedLenses:receivedLenses:updateMetadataList:] */

void FUN_10aeb731c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  else {
    uVar2 = param_1;
    func_0x00010bdde780(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bdde780(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10aeb7458;
    puStack_60 = &UNK_110c8f560;
    uStack_58 = uVar3;
    uStack_50 = uVar2;
    uStack_48 = param_1;
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    lVar1 = param_5;
    func_0x00010bfb2660(param_5,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aeb7458; end: 10aeb750f;  */

void FUN_10aeb7458(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_10aeb74e4;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be4ae20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
LAB_10aeb74e4:
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10aeb7510; end: 10aeb770b; -[SCChecksumUpdateResolver lensIdToChecksumMapFromLenses:] */

void FUN_10aeb7510(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,lVar1 << 1);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar10 = auStack_e8;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar10,0x10);
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_128 + lVar13 * 8);
        lVar3 = lVar11;
        func_0x00010bf38a80();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          lVar4 = lVar11;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          if (lVar4 != 0) {
            lVar3 = lVar11;
            func_0x00010bf38a80(lVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar11;
            func_0x00010c067fc0();
            func_0x00010c0df780(puVar5,param_2,lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2,param_2,lVar3,puVar5);
            _objc_release(puVar5);
            _objc_release(lVar11);
            _objc_release(lVar3);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      puVar10 = auStack_e8;
      lVar1 = param_3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar10,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    _objc_retain(puVar9);
    puVar6 = puVar10;
    func_0x00010bf3cba0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c067fc0();
    _objc_release(puVar6);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600((double)((long)puVar7 * 0x3c),PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c2ad7e0(puVar8,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010c278f20(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbb40(puVar8,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar10;
    func_0x00010c1074c0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    func_0x00010c2b5ac0(puVar8,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar5 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aeb770c; end: 10aeb785b; -[SCChecksumUpdateResolver _lensFromLens:updateMetadata:] */

void FUN_10aeb770c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010bf3cba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600((double)(lVar2 * 0x3c),PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0820;
  func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2ad7e0(puVar4,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c278f20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbb40(puVar4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c1074c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2b5ac0(puVar4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aeb785c; end: 10aeb79fb; -[SCChecksumUpdateResolver _checksumToLensMapFromLenses:] */

undefined1 * FUN_10aeb785c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_128 + lVar11 * 8);
        lVar3 = lVar9;
        func_0x00010bf38a80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010bf38a80(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(lVar9);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  plVar6 = &lStack_160;
  pcStack_138 = FUN_10aeb79fc;
  puStack_150 = puVar1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puStack_158 = PTR_PTR_112701718;
  lStack_160 = lVar2;
  _objc_msgSendSuper2(&lStack_160,PTR_s_init_1125d9248);
  if (plVar6 != (long *)0x0) {
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)((long)plVar6 + 8);
    *(undefined8 **)((long)plVar6 + 8) = puVar8;
    _objc_release(uVar7);
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)plVar6 + 0x10);
    *(undefined **)((long)plVar6 + 0x10) = puVar1;
    _objc_release(uVar7);
  }
  _objc_release(puVar8);
  return (undefined1 *)plVar6;
}



/* Entry: 10aeb79fc; end: 10aeb7a8b; -[SCLensScheduleResponseProcessor initWithLensUpdateResolver:] */

undefined1 * FUN_10aeb79fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701718;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aeb7a8c; end: 10aeb7ab3; -[SCLensScheduleResponseProcessor scheduleNetworkUpdateObservable] */

void FUN_10aeb7a8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeb7ab4; end: 10aeb7b93; -[SCLensScheduleResponseProcessor mergeResponseNamespaceData:cachedNamespaceData:] */

void FUN_10aeb7ab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be827c0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdde720(param_1,param_2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c0ba200(lVar2,param_2,&PTR___NSConcreteGlobalBlock_110c8f590,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126de510;
  _objc_alloc(PTR_PTR_1126de510);
  func_0x00010c02dce0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aeb7b94; end: 10aeb7b9b;  */

void FUN_10aeb7b94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10aeb7b9c; end: 10aeb7dc7; -[SCLensScheduleResponseProcessor _checksumOnlyLensesFromResponseNamespaceData:mergedNamespaceData:] */

void FUN_10aeb7b9c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar6 = puVar3;
  }
  func_0x00010bf0a0c0(puVar4,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c105c60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  if (puVar3 != (undefined *)0x0) {
    puVar6 = puVar3;
  }
  puVar5 = puVar4;
  func_0x00010bf09f80(puVar4,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010c0ba200(puVar5,param_2,&PTR___NSConcreteGlobalBlock_110c8f5d0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar3 = param_4;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  if (puVar3 != (undefined *)0x0) {
    puVar6 = puVar3;
  }
  func_0x00010bf0a0c0(puVar4,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar6 = param_4;
  func_0x00010c105c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (puVar6 != (undefined *)0x0) {
    puVar1 = puVar6;
  }
  puVar3 = puVar4;
  func_0x00010bf09f80(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10aeb7dd0;
  puStack_60 = &UNK_110857a38;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  puVar6 = puVar3;
  func_0x00010bfaea20(puVar3,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeb7dc8; end: 10aeb7dcf;  */

void FUN_10aeb7dc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_checksum_1125abc48);
  return;
}



/* Entry: 10aeb7dd0; end: 10aeb7e1b;  */

uint FUN_10aeb7dd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10aeb7e1c; end: 10aeb81af; -[SCLensScheduleResponseProcessor _processUpdateNamespaceData:cachedNamespaceData:] */

void FUN_10aeb7e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd8260(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010c0d52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bef0640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c098360(uVar20,param_2,lVar1,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar21 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010c0d52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c105c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c105c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c098360(uVar21,param_2,lVar1,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126de318;
  func_0x00010c095120(PTR_PTR_1126de318,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126de338;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c27d100();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08a660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0da7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf93ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c089660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bfa81c0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar19 = uVar18;
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041c20(puVar6,param_2,uVar3,uVar20,uVar21,puVar5,uVar7,uVar9,uVar11,uVar13,uVar15,
                      uVar17,uVar19);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeb81b0; end: 10aeb82c7; -[SCLensScheduleResponseProcessor _cachedNamespaceLensesFromNamespaceData:] */

void FUN_10aeb81b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bef0bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    lVar3 = param_3;
    func_0x00010c105c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lVar4 + lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bef0bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c105c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010befa160(puVar5,param_2,lVar1);
    _objc_release(lVar1);
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeb82c8; end: 10aeb83ef; +[SCLensScheduleResponseProcessor _lensDataStringForLenses:] */

void FUN_10aeb82c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,
                      &PTR____CFConstantStringClassReference_110def438);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c271dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f718);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar6 = uVar6 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar6 < uVar2);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110def478);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb83f0; end: 10aeb8517; +[SCLensScheduleResponseProcessor _checksumStringForUpdateMetadata:] */

void FUN_10aeb83f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,
                      &PTR____CFConstantStringClassReference_110def438);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfe5e40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c271dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f718);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar6 = uVar6 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar6 < uVar2);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110def478);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb8518; end: 10aeb8547; -[SCLensScheduleResponseProcessor .cxx_destruct] */

void FUN_10aeb8518(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb8548; end: 10aeb8607; +[SCLensUpdateMetadata updateMetadataFromChecksumEntries:overrideClientCacheTtlMinutes:lensMetadataMapper:] */

void FUN_10aeb8548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10aeb8608;
  puStack_48 = &UNK_110c8f5f0;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10aeb8608; end: 10aeb861f;  */

void FUN_10aeb8608(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de878,PTR_s__updateMetadataFromChecksumEntry_112594830,param_2,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


