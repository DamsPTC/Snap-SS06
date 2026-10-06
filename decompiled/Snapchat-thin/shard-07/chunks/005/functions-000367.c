/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056aa2d8; end: 1056aa407; -[SCSnapDocEditorImpl addAutoCaptionsPlaybackLayerWithAutoCaptionsState:segment:] */

void FUN_1056aa2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056a585c;
  uStack_40 = 0x1056a586c;
  uStack_38 = 0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beca180(param_1);
  func_0x00010be84440(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056aa408; end: 1056aa44f;  */

void FUN_1056aa408(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010bef6fe0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aa450; end: 1056aa577; -[SCSnapDocEditorImpl decodeAutoCaptionsMetadata:playbackLayerId:] */

void FUN_1056aa450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056a585c;
  uStack_40 = 0x1056a586c;
  uStack_38 = 0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beca180(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056aa578; end: 1056aa5bf;  */

void FUN_1056aa578(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010bf66c80(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aa5c0; end: 1056aa6b7; -[SCSnapDocEditorImpl autoCaptionsStateAtSegment:] */

void FUN_1056aa5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056aa6b8; end: 1056aa6fb;  */

void FUN_1056aa6b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010bf114e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aa6fc; end: 1056aa7b7; -[SCSnapDocEditorImpl updateRenderEffectsWithFilter:segment:] */

void FUN_1056aa6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056aa7b8;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beca180(param_1,param_2,&puStack_68);
  func_0x00010be84440(param_1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056aa7b8; end: 1056aa7cb;  */

void FUN_1056aa7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c289230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0),
             PTR_s_updateRenderEffectsWithFilter_se_11267feb0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1056aa7cc; end: 1056aa887; -[SCSnapDocEditorImpl replaceRenderEffectsWithFilters:atSegment:] */

void FUN_1056aa7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056aa888;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beca180(param_1,param_2,&puStack_68);
  func_0x00010be84440(param_1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056aa888; end: 1056aa89b;  */

void FUN_1056aa888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1310f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0),
             PTR_s_replaceRenderEffectsWithFilters__112629e58,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1056aa89c; end: 1056aa927; -[SCSnapDocEditorImpl deleteRenderEffectsLastFilterNodeAtSegment:] */

void FUN_1056aa89c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1056aa928;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010beca180(param_1,param_2,&puStack_50);
  func_0x00010be84440(param_1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1056aa928; end: 1056aa933;  */

void FUN_1056aa928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0),
             PTR_s_deleteRenderEffectsLastFilterNod_1125b8b40,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056aa934; end: 1056aaa07; -[SCSnapDocEditorImpl numberOfFiltersAppliedOnSegment:] */

undefined8 FUN_1056aa934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_38[3];
  _objc_release(param_3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1056aaa08; end: 1056aaa3b;  */

void FUN_1056aaa08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c0dee20(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 1056aaa3c; end: 1056aab33; -[SCSnapDocEditorImpl filtersAtSegment:] */

void FUN_1056aaa3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056aab34; end: 1056aab77;  */

void FUN_1056aab34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010bfaec40(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aab78; end: 1056aac3b; -[SCSnapDocEditorImpl appliedFilters] */

void FUN_1056aab78(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1056aac3c;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010beca180(param_1,param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056aac3c; end: 1056aac7f;  */

void FUN_1056aac3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010bf07de0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aac80; end: 1056aac87; -[SCSnapDocEditorImpl setShouldKeepClaimOnDealloc:] */

void FUN_1056aac80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2008f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_setShouldKeepClaimOnDealloc__11265dc60);
  return;
}



/* Entry: 1056aac88; end: 1056aac8f; -[SCSnapDocEditorImpl shouldKeepClaimOnDealloc] */

void FUN_1056aac88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2315b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_shouldKeepClaimOnDealloc_112669f90);
  return;
}



/* Entry: 1056aac90; end: 1056aad87; -[SCSnapDocEditorImpl mediaReferenceWithId:] */

void FUN_1056aac90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056aad88; end: 1056aadcb;  */

void FUN_1056aad88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c0c6240(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aadcc; end: 1056aaec3; -[SCSnapDocEditorImpl mediaWithId:] */

void FUN_1056aadcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056aaec4; end: 1056aaf07;  */

void FUN_1056aaec4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c0c7240(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aaf08; end: 1056aafff; -[SCSnapDocEditorImpl contentResultWithMediaId:] */

void FUN_1056aaf08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056ab000; end: 1056ab043;  */

void FUN_1056ab000(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010bf4d400(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056ab044; end: 1056ab04b; -[SCSnapDocEditorImpl mediaUrlWithId:] */

void FUN_1056ab044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c6f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_mediaUrlWithId__11260f5f8);
  return;
}



/* Entry: 1056ab04c; end: 1056ab153; -[SCSnapDocEditorImpl addBaseMediaWithInput:removeSoftTrim:] */

void FUN_1056ab04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_48 = FUN_1056a585c;
  uStack_40 = 0x1056a586c;
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056ab154; end: 1056ab19b;  */

void FUN_1056ab154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010bef7100(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056ab19c; end: 1056ab2af; -[SCSnapDocEditorImpl addMediaWithInput:type:] */

void FUN_1056ab19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010bef9c20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
  }
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056ab2b0; end: 1056ab2e7;  */

void FUN_1056ab2b0(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be84440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1056ab2e8; end: 1056ab413; -[SCSnapDocEditorImpl updateMediaReferenceWithInput:mediaId:] */

void FUN_1056ab2e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c2879a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c297260(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056ab414; end: 1056ab447;  */

void FUN_1056ab414(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ab448; end: 1056ab487; -[SCSnapDocEditorImpl syncAddMediaWithInput:type:] */

void FUN_1056ab448(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c265b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be84440(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056ab488; end: 1056ab59b; -[SCSnapDocEditorImpl deleteMediaWithId:] */

void FUN_1056ab488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  if (puStack_48[5] == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be84440(param_1);
    uVar1 = puStack_48[5];
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056ab59c; end: 1056ab5df;  */

void FUN_1056ab59c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010bf6c3a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056ab5e0; end: 1056ab6d7; -[SCSnapDocEditorImpl localCacheKeyWithInput:] */

void FUN_1056ab5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056ab6d8; end: 1056ab71b;  */

void FUN_1056ab6d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c09d800(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056ab71c; end: 1056ab867; -[SCSnapDocEditorImpl applySDOMCommands:] */

void FUN_1056ab71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf08820(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1056ab800;
  puStack_48 = &UNK_1108a7748;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c297260(uVar2,param_2,&puStack_60,0);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056ab868; end: 1056ab92b; -[SCSnapDocEditorImpl validate] */

void FUN_1056ab868(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1056ab92c;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010beca180(param_1,param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056ab92c; end: 1056ab96f;  */

void FUN_1056ab92c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  func_0x00010c296780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056ab970; end: 1056aba33; -[SCSnapDocEditorImpl getSnapDocTextualView] */

void FUN_1056ab970(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1056aba34;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010beca180(param_1,param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056aba34; end: 1056aba77;  */

void FUN_1056aba34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  func_0x00010bfca640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aba78; end: 1056abc93; -[SCSnapDocEditorImpl importMediaReferencesFrom:] */

void FUN_1056aba78(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
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
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf529e0();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar9 = PTR____NSArray0__struct_11034ab48;
  if (lVar4 != 0) {
    lVar4 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar4 != 0) {
      lVar10 = *plStack_110;
      do {
        lVar11 = 0;
        do {
          if (*plStack_110 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = *(undefined8 *)(lStack_118 + lVar11 * 8);
          func_0x00010c23fe00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar2);
          _objc_release(uVar2);
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(param_3);
    puVar3 = *(undefined **)(param_1 + 0xa0);
    func_0x00010be37b20(puVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_1056abc94;
      puStack_140 = &UNK_110848ba8;
      _objc_retain(param_3);
      lStack_138 = param_3;
      lStack_130 = param_1;
      _objc_retain(puVar3);
      puStack_128 = puVar3;
      func_0x00010beca180(param_1,param_2,&puStack_158);
      func_0x00010be84440(param_1);
      _objc_retain(puVar3);
      _objc_release(puStack_128);
      _objc_release(lStack_138);
      puVar9 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar4 = *(long *)(param_3 + 0x20);
    func_0x00010bf529e0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar4 != 0) {
      uVar8 = 0;
      do {
        uVar5 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010c0dfd40(uVar5,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_3 + 0x28);
        uVar6 = *(undefined8 *)(param_3 + 0x30);
        func_0x00010c0dfd40(uVar6,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puStack_1e8 = puVar1;
        uStack_1e0 = 0xc2000000;
        pcStack_1d8 = FUN_1056abd8c;
        puStack_1d0 = &UNK_1108a7778;
        uStack_1c8 = uVar5;
        _objc_retain(uVar5);
        func_0x00010be37b80(uVar2,param_2,uVar6,&puStack_1e8);
        _objc_release(uVar6);
        _objc_release(uStack_1c8);
        _objc_release(uVar5);
        uVar8 = uVar8 + 1;
        uVar7 = *(ulong *)(param_3 + 0x20);
        func_0x00010bf529e0();
      } while (uVar8 < uVar7);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1056abc94; end: 1056abd8b;  */

void FUN_1056abc94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar4,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0dfd40(uVar5,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = puVar2;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1056abd8c;
      puStack_70 = &UNK_1108a7778;
      uStack_68 = uVar4;
      _objc_retain(uVar4);
      func_0x00010be37b80(uVar1,param_2,uVar5,&puStack_88);
      _objc_release(uVar5);
      _objc_release(uStack_68);
      _objc_release(uVar4);
      uVar7 = uVar7 + 1;
      uVar6 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
    } while (uVar7 < uVar6);
  }
  return;
}



/* Entry: 1056abd8c; end: 1056abd97;  */

void FUN_1056abd8c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_segmentOfPlaybackLayerWithId__112633b40,param_2);
  return;
}



/* Entry: 1056abd98; end: 1056abf8f; -[SCSnapDocEditorImpl _importBaseMediaPlaybackLayersFromSnapDoc:segmentForPlaybackLayer:] */

ulong FUN_1056abd98(undefined8 param_1,undefined *param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0ff5c0(*(undefined8 *)(lVar9 * 8));
      func_0x00010c0df820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_4;
      param_2 = puVar3;
      (**(code **)(param_4 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      if (uVar8 != 0) {
        func_0x00010be37ca0(param_1);
      }
      _objc_release(uVar8);
      _objc_release(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar5 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf0b760();
    uVar8 = (ulong)((int)puVar6 == 5);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(param_2);
  return uVar8;
}



/* Entry: 1056abf90; end: 1056ac017;  */

bool FUN_1056abf90(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0b760();
    bVar1 = (int)lVar4 == 5;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1056ac018; end: 1056ac133; -[SCSnapDocEditorImpl _importPlaybackLayer:matchingSegmentType:] */

void FUN_1056ac018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bf51e00();
  func_0x00010c1dd680();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1056ac134;
  puStack_58 = &UNK_110841f80;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1056ac180;
  puStack_88 = &UNK_1108a77e8;
  uStack_80 = uVar2;
  uStack_78 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010c0be120(param_4,param_2,&puStack_70,&puStack_a0);
  _objc_release(param_4);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056ac134; end: 1056ac1db;  */

void FUN_1056ac134(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),puVar1
                     );
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056ac1dc; end: 1056ac27f; -[SCSnapDocEditorImpl _didPlaybackLayerChange:] */

void FUN_1056ac1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c0ff500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd640(*(undefined8 *)(param_1 + 0x48),param_2,puVar1);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0ff500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056ac280; end: 1056ac323; -[SCSnapDocEditorImpl _didSegmentChange:] */

void FUN_1056ac280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c1581c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa9c0(*(undefined8 *)(param_1 + 0x48),param_2,puVar1);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c1581c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056ac324; end: 1056ac3c7; -[SCSnapDocEditorImpl _didRenderEffectChange:] */

void FUN_1056ac324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c12f980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea680(*(undefined8 *)(param_1 + 0x48),param_2,puVar1);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c12f980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056ac3c8; end: 1056ac46f; -[SCSnapDocEditorImpl _publishSnapDocChange] */

void FUN_1056ac3c8(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010beca180(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1056ac470; end: 1056ac58b;  */

void FUN_1056ac470(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf51e00(uVar1);
  func_0x00010c203f00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126bce40;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar2;
  _objc_release(uVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 1056ac58c; end: 1056ac5c7;  */

void FUN_1056ac58c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056ac5c8; end: 1056ac6d3; -[SCSnapDocEditorImpl _synchronizedOnSerialQueueOrLocks:] */

void FUN_1056ac5c8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bed1e80(uVar3);
    _os_unfair_lock_lock();
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x00010c06fc80();
    if (((uVar1 & 1) == 0) && (lVar2 = param_1, func_0x00010be3f100(), (int)lVar2 == 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1056ac6d4;
      puStack_48 = &UNK_11084aaa8;
      lStack_40 = param_1;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010c0f8240(uVar3,param_2,&puStack_60);
      _objc_release(lStack_38);
      goto LAB_1056ac64c;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bed1e80(uVar3);
    _os_unfair_lock_lock();
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _os_unfair_lock_unlock(uVar3);
LAB_1056ac64c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056ac6d4; end: 1056ac727;  */

void FUN_1056ac6d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bed1e80(uVar1);
  _os_unfair_lock_lock();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(uVar1);
  return;
}



/* Entry: 1056ac728; end: 1056ac763; -[SCSnapDocEditorImpl _isComposerThread] */

bool FUN_1056ac728(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bce48;
  func_0x00010bf5e500(PTR_PTR_1126bce48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return puVar1 != (undefined *)0x0;
}



/* Entry: 1056ac764; end: 1056ac76b; -[SCSnapDocEditorImpl changeObservable] */

undefined8 FUN_1056ac764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1056ac76c; end: 1056ac773; -[SCSnapDocEditorImpl enabled] */

undefined1 FUN_1056ac76c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 1056ac774; end: 1056ac77b; -[SCSnapDocEditorImpl setEnabled:] */

void FUN_1056ac774(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 1056ac77c; end: 1056ac783; -[SCSnapDocEditorImpl layerEditor] */

undefined8 FUN_1056ac77c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1056ac784; end: 1056ac7b3; -[SCSnapDocEditorImpl setLayerEditor:] */

void FUN_1056ac784(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac7b4; end: 1056ac7bb; -[SCSnapDocEditorImpl renderEffectsEditor] */

undefined8 FUN_1056ac7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1056ac7bc; end: 1056ac7eb; -[SCSnapDocEditorImpl setRenderEffectsEditor:] */

void FUN_1056ac7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac7ec; end: 1056ac7f3; -[SCSnapDocEditorImpl gridEditor] */

undefined8 FUN_1056ac7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1056ac7f4; end: 1056ac823; -[SCSnapDocEditorImpl setGridEditor:] */

void FUN_1056ac7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac824; end: 1056ac82b; -[SCSnapDocEditorImpl drawingEditor] */

undefined8 FUN_1056ac824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1056ac82c; end: 1056ac85b; -[SCSnapDocEditorImpl setDrawingEditor:] */

void FUN_1056ac82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac85c; end: 1056ac863; -[SCSnapDocEditorImpl metadataEditor] */

undefined8 FUN_1056ac85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1056ac864; end: 1056ac893; -[SCSnapDocEditorImpl setMetadataEditor:] */

void FUN_1056ac864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac894; end: 1056ac89b; -[SCSnapDocEditorImpl autoCaptionsEditor] */

undefined8 FUN_1056ac894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1056ac89c; end: 1056ac8cb; -[SCSnapDocEditorImpl setAutoCaptionsEditor:] */

void FUN_1056ac89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac8cc; end: 1056ac8d3; -[SCSnapDocEditorImpl mediaEditor] */

undefined8 FUN_1056ac8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1056ac8d4; end: 1056ac903; -[SCSnapDocEditorImpl setMediaEditor:] */

void FUN_1056ac8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac904; end: 1056ac90b; -[SCSnapDocEditorImpl sdomEditor] */

undefined8 FUN_1056ac904(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1056ac90c; end: 1056ac93b; -[SCSnapDocEditorImpl setSdomEditor:] */

void FUN_1056ac90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac93c; end: 1056ac943; -[SCSnapDocEditorImpl filtersEditor] */

undefined8 FUN_1056ac93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1056ac944; end: 1056ac973; -[SCSnapDocEditorImpl setFiltersEditor:] */

void FUN_1056ac944(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac974; end: 1056ac97b; -[SCSnapDocEditorImpl serialSnapDocUpdatePerformer] */

undefined8 FUN_1056ac974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056ac97c; end: 1056ac9ab; -[SCSnapDocEditorImpl setSerialSnapDocUpdatePerformer:] */

void FUN_1056ac97c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056ac9ac; end: 1056acaa7; -[SCSnapDocEditorImpl .cxx_destruct] */

void FUN_1056ac9ac(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1056acaa8; end: 1056acb33; -[SCSnapDocEditorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056acaa8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727988);
  _objc_destroyWeak(param_1 + _DAT_11272797c);
  _objc_destroyWeak(param_1 + _DAT_112727984);
  _objc_destroyWeak(param_1 + _DAT_112727980);
  _objc_destroyWeak(param_1 + _DAT_112727978);
  _objc_destroyWeak(param_1 + _DAT_112727974);
  _objc_destroyWeak(param_1 + _DAT_112727970);
  _objc_destroyWeak(param_1 + _DAT_11272796c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272798c);
  return;
}



/* Entry: 1056acb34; end: 1056acbe3; -[SCPlaybackLayerEditorImpl initWithSnapDoc:] */

undefined1 * FUN_1056acb34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e99e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    func_0x00010c139f40(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056acbe4; end: 1056ad1af; -[SCPlaybackLayerEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

undefined8 FUN_1056acbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  long lStack_2c0;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126bce60;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar2;
  _objc_release(uVar1);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_230,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar13 = *plStack_220;
    do {
      lVar16 = 0;
      do {
        if (*plStack_220 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = *(undefined8 *)(lStack_228 + lVar16 * 8);
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar1 = uVar10;
        func_0x00010c0ff5c0(uVar10);
        func_0x00010c0df820(puVar2,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar11,param_2,uVar10,puVar2);
        _objc_release(puVar2);
        lVar16 = lVar16 + 1;
      } while (lVar3 != lVar16);
      lVar3 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_230,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar9);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lVar16 = *(long *)(param_1 + 0x28);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar16;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar16);
  lStack_2c0 = lVar13;
  func_0x00010bf52a60(lVar13,param_2,&uStack_270,auStack_170,0x10);
  if (lStack_2c0 != 0) {
    lVar9 = *plStack_260;
    do {
      lVar3 = 0;
      do {
        if (*plStack_260 != lVar9) {
          _objc_enumerationMutation(lVar13);
        }
        uVar12 = *(ulong *)(lStack_268 + lVar3 * 8);
        uVar14 = uVar12;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar14;
        func_0x00010bf529e0();
        _objc_release(uVar14);
        if (uVar17 != 0) {
          uVar14 = 0;
          do {
            uVar17 = uVar12;
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar17;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar17);
            uVar17 = uVar12;
            func_0x00010c074780();
            if ((uVar17 & 1) == 0) {
              uVar1 = *(undefined8 *)(param_1 + 0x20);
              func_0x00010c09e9e0(uVar1);
              _objc_retainAutoreleasedReturnValue();
              lVar16 = param_1;
              _objc_opt_class(param_1);
              func_0x00010bdf95e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar1,param_2,lVar16);
              _objc_release(lVar16);
              _objc_release(uVar1);
            }
            uVar17 = uVar4;
            func_0x00010c0ff680();
            if (uVar17 != 0) {
              uVar17 = 0;
              do {
                puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                uVar5 = uVar4;
                func_0x00010c0ff660(uVar4);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                func_0x00010c296de0();
                func_0x00010c0df820(puVar7,param_2,uVar6);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar5);
                lVar16 = *(long *)(param_1 + 8);
                func_0x00010c0e00e0(lVar16,param_2,puVar7);
                _objc_retainAutoreleasedReturnValue();
                if (lVar16 != 0) {
                  uVar5 = uVar12;
                  func_0x00010c074780();
                  puVar15 = PTR_PTR_1126affe8;
                  if ((uVar5 & 1) == 0) {
                    func_0x00010c09e180(PTR_PTR_1126affe8,param_2,uVar14);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    func_0x00010bfccec0();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  puVar8 = PTR_PTR_1126bce68;
                  _objc_alloc(PTR_PTR_1126bce68);
                  func_0x00010c0439c0();
                  func_0x00010befa120(puVar2,param_2,puVar8);
                  _objc_release(puVar8);
                  _objc_release(puVar15);
                }
                _objc_release(lVar16);
                _objc_release(puVar7);
                uVar17 = uVar17 + 1;
                uVar5 = uVar4;
                func_0x00010c0ff680();
              } while (uVar17 < uVar5);
            }
            uVar17 = uVar4;
            func_0x00010c0ff660(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12aa40();
            _objc_release(uVar17);
            _objc_release(uVar4);
            uVar14 = uVar14 + 1;
            uVar17 = uVar12;
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar17;
            func_0x00010bf529e0();
            _objc_release(uVar17);
          } while (uVar14 < uVar4);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != lStack_2c0);
      lStack_2c0 = lVar13;
      func_0x00010bf52a60(lVar13,param_2,&uStack_270,auStack_170,0x10);
    } while (lStack_2c0 != 0);
  }
  _objc_release(lVar13);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  _objc_retain(puVar2);
  puVar7 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_2b0,auStack_1f0,0x10);
  if (puVar7 != (undefined *)0x0) {
    lVar9 = *plStack_2a0;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_2a0 != lVar9) {
          _objc_enumerationMutation(puVar2);
        }
        uVar10 = *(undefined8 *)(lStack_2a8 + (long)puVar15 * 8);
        uVar1 = uVar10;
        func_0x00010c0ff4c0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c158380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be3c6c0(param_1,param_2,uVar1,uVar10);
        _objc_release(uVar10);
        _objc_release(uVar1);
        puVar15 = puVar15 + 1;
      } while (puVar7 != puVar15);
      puVar7 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_2b0,auStack_1f0,0x10);
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010be17e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2787a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 1056ad1b0; end: 1056ad213; -[SCPlaybackLayerEditorImpl localSegmentCount] */

undefined8 FUN_1056ad1b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be17e00(param_1,param_2,&PTR___NSConcreteGlobalBlock_1108a7838);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2787a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1056ad214; end: 1056ad22f;  */

uint FUN_1056ad214(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c074780(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1056ad230; end: 1056ad2fb; -[SCPlaybackLayerEditorImpl setLocalSegmentCount:] */

void FUN_1056ad230(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar2 = param_1;
  func_0x00010c09dea0();
  puVar3 = PTR_PTR_1126affe8;
  uVar1 = uVar2;
  while (uVar1 = uVar1 - 1, PTR_PTR_1126affe8 = puVar3, (long)param_3 <= (long)uVar1) {
    func_0x00010c09e180(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c760(param_1,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126affe8;
  }
  if (uVar2 < param_3) {
    do {
      puVar3 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc8240(param_1,param_2,puVar3);
      _objc_release(puVar3);
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  return;
}



/* Entry: 1056ad2fc; end: 1056ad33b; -[SCPlaybackLayerEditorImpl playbackLayerWithId:] */

void FUN_1056ad2fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056ad33c; end: 1056ad64b; -[SCPlaybackLayerEditorImpl playbackLayerIds] */

void FUN_1056ad33c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar1 = PTR_PTR_1126bce60;
  _objc_alloc_init(PTR_PTR_1126bce60);
  uVar10 = 0;
  while( true ) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    if (uVar4 <= uVar10) break;
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    uVar8 = uVar4;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf529e0();
    _objc_release(uVar8);
    if (uVar9 != 0) {
      uVar8 = 0;
      do {
        uVar9 = uVar4;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar9;
        func_0x00010bf529e0();
        _objc_release(uVar9);
        if (uVar2 != 0) {
          uVar9 = 0;
          do {
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar2 = uVar3;
            func_0x00010c0ff660(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar2;
            func_0x00010c296de0();
            func_0x00010c0df820(puVar7,param_2,uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5,param_2,puVar7);
            _objc_release(puVar7);
            _objc_release(uVar2);
            uVar9 = uVar9 + 1;
            uVar2 = uVar3;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar2;
            func_0x00010bf529e0();
            _objc_release(uVar2);
          } while (uVar9 < uVar6);
        }
        uVar9 = uVar4;
        func_0x00010c074780();
        if ((uVar9 & 1) == 0) {
          puVar7 = puVar1;
          func_0x00010c09e9e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar7);
        }
        else {
          func_0x00010c1a3c60(puVar1,param_2,puVar5);
        }
        _objc_release(puVar5);
        _objc_release(uVar3);
        uVar8 = uVar8 + 1;
        uVar9 = uVar4;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010bf529e0();
        _objc_release(uVar9);
      } while (uVar8 < uVar3);
    }
    _objc_release(uVar4);
    uVar10 = uVar10 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056ad64c; end: 1056ad65f; -[SCPlaybackLayerEditorImpl playbackLayerIdsAtSegment:] */

void FUN_1056ad64c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_playbackLayerIdsAtSegment_where__11261d780,param_3,
             &PTR___NSConcreteGlobalBlock_1108a7858);
  return;
}



/* Entry: 1056ad660; end: 1056ad7bf; -[SCPlaybackLayerEditorImpl playbackLayerIdsAtSegment:where:] */

void FUN_1056ad660(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bece0c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0ff680();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar2 = uVar1;
        func_0x00010c0ff660(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296de0();
        func_0x00010c0df820(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf51e00();
        _objc_release(lVar4);
        if ((lVar5 != 0) &&
           (lVar4 = param_4, (**(code **)(param_4 + 0x10))(param_4,lVar5), (int)lVar4 != 0)) {
          func_0x00010befa120(puVar6);
        }
        _objc_release(lVar5);
        _objc_release(puVar3);
        uVar7 = uVar7 + 1;
        uVar2 = uVar1;
        func_0x00010c0ff680();
      } while (uVar7 < uVar2);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1056ad7c0; end: 1056ad8fb; -[SCPlaybackLayerEditorImpl playbackLayerIdsWhere:] */

void FUN_1056ad7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1056ad890;
  puStack_48 = &UNK_1108a7878;
  uStack_38 = param_3;
  _objc_retain();
  puStack_40 = puVar2;
  _objc_retain(param_3);
  func_0x00010bf97ce0(uVar3,param_2,&puStack_60);
  puVar1 = puStack_40;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056ad8fc; end: 1056adaf3; -[SCPlaybackLayerEditorImpl segmentOfPlaybackLayerWithId:] */

void FUN_1056ad8fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar6 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0ff560(param_1,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf4b900();
  _objc_release(uVar5);
  _objc_release(puVar6);
  if ((int)uVar7 == 0) {
    func_0x00010be17e00(param_1,param_2,&PTR___NSConcreteGlobalBlock_1108a78a8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        uVar7 = param_1;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar7 = uVar1;
        func_0x00010c0ff680();
        if (uVar7 != 0) {
          uVar7 = 0;
          do {
            uVar2 = uVar1;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c296de0();
            uVar4 = param_3;
            func_0x00010c282760();
            _objc_release(uVar2);
            if ((int)uVar3 == (int)uVar4) {
              puVar6 = PTR_PTR_1126affe8;
              func_0x00010c09e180(PTR_PTR_1126affe8,param_2,uVar7);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar1);
              goto LAB_1056adac4;
            }
            uVar7 = uVar7 + 1;
            uVar2 = uVar1;
            func_0x00010c0ff680();
          } while (uVar7 < uVar2);
        }
        _objc_release(uVar1);
        uVar5 = uVar5 + 1;
        uVar7 = param_1;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar7;
        func_0x00010bf529e0();
        _objc_release(uVar7);
      } while (uVar5 < uVar1);
    }
    puVar6 = (undefined *)0x0;
LAB_1056adac4:
    _objc_release(param_1);
  }
  else {
    puVar6 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1056adaf4; end: 1056adb0f;  */

uint FUN_1056adaf4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c074780(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1056adb10; end: 1056ae28b; -[SCPlaybackLayerEditorImpl deletePlaybackLayerWithId:] */

void FUN_1056adb10(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  int iVar23;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0ff540();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar1;
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf4b900();
  _objc_release(uVar20);
  if ((uVar21 & 1) == 0) {
    uVar20 = uVar1;
    func_0x00010c09e9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bf529e0();
    _objc_release(uVar20);
    puVar22 = (undefined *)0x0;
    if (uVar21 == 0) goto LAB_1056adc24;
    uVar20 = 0;
    do {
      uVar21 = uVar1;
      func_0x00010c09e9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar21;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010bf4b900();
      _objc_release(uVar7);
      _objc_release(uVar21);
      if ((int)uVar2 != 0) {
        puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar20);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1056adc24;
      }
      uVar20 = uVar20 + 1;
      uVar21 = uVar1;
      func_0x00010c09e9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar21;
      func_0x00010bf529e0();
      _objc_release(uVar21);
    } while (uVar20 < uVar7);
  }
  puVar22 = (undefined *)0x0;
LAB_1056adc24:
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0ff680();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      uVar20 = 0;
      do {
        uVar6 = *(ulong *)(param_1 + 0x28);
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar6;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar21;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        func_0x00010c0ff5c0();
        uVar19 = param_3;
        func_0x00010c067fc0();
        _objc_release(uVar7);
        _objc_release(uVar21);
        _objc_release(uVar6);
        if (uVar19 == (uVar2 & 0xffffffff)) {
          uVar13 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0fee00(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar13;
          func_0x00010c0ff660();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3c0();
          _objc_release(uVar10);
          _objc_release(uVar13);
          break;
        }
        uVar20 = uVar20 + 1;
        uVar7 = *(ulong *)(param_1 + 0x28);
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar7;
        func_0x00010c0ff680();
        _objc_release(uVar7);
      } while (uVar20 < uVar21);
    }
    puVar9 = PTR_PTR_1126affe8;
    if (puVar22 == (undefined *)0x0) {
      func_0x00010bfccec0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar8 = puVar22;
      func_0x00010c282760(puVar22);
      func_0x00010c09e180(puVar9,param_2,(ulong)puVar8 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR_PTR_1126bce70;
    func_0x00010c27df00(PTR_PTR_1126bce70,param_2,lVar3);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfc1d80(uVar10,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 < (undefined *)0xd) {
      do {
        uVar13 = uVar10;
        func_0x00010c0dfd40(uVar10,param_2,puVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar13;
        func_0x00010c067ec0();
        _objc_release(uVar13);
        iVar23 = (int)uVar11;
        if (iVar23 < 2) {
          iVar23 = 1;
        }
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,iVar23 + -1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130f40(uVar10,param_2,puVar8,puVar12);
        _objc_release(puVar12);
        puVar8 = puVar8 + 1;
      } while (puVar8 != (undefined *)0xd);
    }
    uVar20 = param_1;
    func_0x00010bece0c0(param_1,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c0ff680();
    if (uVar21 != 0) {
      uVar21 = 0;
      do {
        uVar7 = param_3;
        func_0x00010c067fc0();
        uVar2 = uVar20;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar2;
        func_0x00010c296de0();
        _objc_release(uVar2);
        if (uVar7 == (uVar19 & 0xffffffff)) {
          uVar21 = uVar20;
          func_0x00010c0ff660(uVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12efe0();
          _objc_release(uVar21);
          break;
        }
        uVar21 = uVar21 + 1;
        uVar7 = uVar20;
        func_0x00010c0ff680();
      } while (uVar21 < uVar7);
    }
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1056ae28c;
    puStack_70 = &UNK_1108a78c8;
    _objc_retain(puVar22);
    uVar21 = param_1;
    puStack_68 = puVar22;
    func_0x00010be17e00(param_1,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar20;
    func_0x00010c0ff680();
    if ((uVar7 == 0) && (uVar7 = uVar21, func_0x00010c074780(), (int)uVar7 != 0)) {
      uVar7 = uVar21;
      func_0x00010c2787a0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(uVar7);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      if (puVar22 == (undefined *)0x0) {
        func_0x00010c1a3c60(uVar13,param_2,0);
      }
      else {
        func_0x00010c09e9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar22;
        func_0x00010c282760(puVar22);
        func_0x00010c12d3c0(uVar13,param_2,(ulong)puVar8 & 0xffffffff);
        _objc_release(uVar13);
      }
    }
    if ((uVar21 != 0) && (uVar7 = uVar21, func_0x00010c2787c0(), uVar7 == 0)) {
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0fee00(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar14;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar11;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(uVar15);
      _objc_release(uVar11);
      _objc_release(uVar13);
      _objc_release(uVar14);
    }
    func_0x00010bdcf760(param_1,param_2,param_3,0,puVar9);
    lVar5 = lVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        uVar7 = 0;
        do {
          lVar4 = *(long *)(param_1 + 0x28);
          func_0x00010c0c6280();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          lVar4 = lVar5;
          func_0x00010c0c55e0();
          lVar16 = lVar3;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar16;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar17;
          func_0x00010c0c55e0();
          _objc_release(lVar17);
          _objc_release(lVar16);
          if (lVar4 == lVar18) {
            uVar13 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c0c6280(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3c0();
            _objc_release(uVar13);
            _objc_release(lVar5);
            break;
          }
          _objc_release(lVar5);
          uVar7 = uVar7 + 1;
          uVar19 = *(ulong *)(param_1 + 0x28);
          func_0x00010c0c6280();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar19;
          func_0x00010bf529e0();
          _objc_release(uVar19);
        } while (uVar7 < uVar2);
      }
    }
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    puVar8 = PTR_PTR_1126bce68;
    _objc_alloc(PTR_PTR_1126bce68);
    lVar5 = lVar3;
    func_0x00010bf51e00(lVar3);
    func_0x00010c0439c0(puVar8,param_2,puVar9,lVar5,3);
    func_0x00010c0d9840(uVar13,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(lVar5);
    _objc_retain(lVar3);
    _objc_release(uVar21);
    _objc_release(puStack_68);
    _objc_release(uVar20);
    _objc_release(uVar10);
    _objc_release(puVar9);
  }
  _objc_release(lVar3);
  _objc_release(puVar22);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1056ae28c; end: 1056ae2bf;  */

uint FUN_1056ae28c(long param_1,undefined8 param_2)

{
  func_0x00010c074780(param_2);
  return (uint)param_2 ^ (uint)(*(long *)(param_1 + 0x20) != 0);
}



/* Entry: 1056ae2c0; end: 1056ae413; -[SCPlaybackLayerEditorImpl deletePlaybackLayersAtSegment:where:] */

void FUN_1056ae2c0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
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
  puVar1 = param_1;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(puVar1);
  puVar3 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(puVar1);
        }
        puVar4 = param_1;
        func_0x00010bf6c5a0(param_1,param_2,*(undefined8 *)(lStack_118 + (long)puVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          func_0x00010befa120(puVar2,param_2,puVar4);
        }
        _objc_release(puVar4);
        puVar6 = puVar6 + 1;
      } while (puVar3 != puVar6);
      puVar3 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010bece0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056ae414; end: 1056ae44f; -[SCPlaybackLayerEditorImpl trackSegmentAtIndex:] */

void FUN_1056ae414(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bece0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf51e00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


