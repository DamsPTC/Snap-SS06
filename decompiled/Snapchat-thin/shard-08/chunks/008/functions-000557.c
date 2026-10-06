/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10669a538; end: 10669a54f; -[SCLensExplorerLensFeedItem _cacheRenderStrategyContentTypeFrom:] */

undefined1 FUN_10669a538(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10669a550; end: 10669a55b; -[SCLensExplorerLensFeedItem _cacheRenderStrategyScrollBehaviourFrom:] */

bool FUN_10669a550(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10669a55c; end: 10669a573; -[SCLensExplorerLensFeedItem _cacheLensAttributionFrom:] */

undefined1 FUN_10669a55c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10669a574; end: 10669a6bb; +[SCLensExplorerLensFeedItem _creatorWithCache:] */

void FUN_10669a574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ccd30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c292e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf1ade0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e1aa0(param_3);
  uVar7 = param_3;
  func_0x00010c06d940(param_3);
  uVar8 = param_3;
  func_0x00010c2427a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c242800();
  _objc_release(param_3);
  func_0x00010c05c6e0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,(char)uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669a6bc; end: 10669a7e7; +[SCLensExplorerLensFeedItem _animationWithCache:] */

void FUN_10669a6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe8fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0xc0000000;
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccd38;
  _objc_alloc(PTR_PTR_1126ccd38);
  uVar1 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0c54a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb6d40(param_3);
  _objc_release(param_3);
  func_0x00010c059200(uVar5,puVar3,param_2,uVar1,uVar4,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10669a7e8; end: 10669a7f3;  */

void FUN_10669a7e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__urlFromString__112597288,param_2);
  return;
}



/* Entry: 10669a7f4; end: 10669a91b; +[SCLensExplorerLensFeedItem _loggingInfoWithCache:] */

void FUN_10669a7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126ccd40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfec9e0(param_3);
  uVar3 = param_3;
  func_0x00010c156040(param_3);
  uVar4 = param_3;
  func_0x00010c11fc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c11fc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c084c40(param_3);
  uVar8 = param_3;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01d7e0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669a91c; end: 10669abdb; +[SCLensExplorerLensFeedItem _lensItemWithCache:] */

void FUN_10669a91c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
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
  undefined *puVar18;
  
  puVar1 = PTR_PTR_1126ccc38;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c26e0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bdf6140(param_1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010bdcb620(param_1,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010be5ab00(param_1,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0900a0(param_3);
  func_0x00010be4a440(param_1,param_2,uVar16);
  uVar16 = param_3;
  func_0x00010c07f200();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar17 = param_3;
  func_0x00010c29c5c0(param_3);
  func_0x00010c0df7c0(puVar18,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d340();
  _objc_release(param_3);
  func_0x00010c0591c0(puVar1,param_2,uVar2,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15,param_1,
                      (char)uVar16);
  _objc_release(puVar18);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669abdc; end: 10669ae2f; +[SCLensExplorerLensFeedItem _lensTopicItemWithCache:] */

void FUN_10669abdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar7 = PTR_PTR_1126ccd48;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c275280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c095760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bdf6140(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097740(puVar7,param_2,uVar1,uVar2,uVar4,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar8 = PTR_PTR_1126ccc48;
  _objc_alloc(PTR_PTR_1126ccc48);
  uVar1 = param_3;
  func_0x00010c275280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c1121a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c111400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c1113e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c29f320(param_3);
  uVar9 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be5ab00(param_1,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ffc0(puVar8,param_2,uVar1,uVar3,uVar4,uVar5,uVar6,puVar7,param_1);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10669ae30; end: 10669afe3; +[SCLensExplorerLensFeedItem _storyItemWithCache:] */

void FUN_10669ae30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126ccd48;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25bba0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccc48;
  _objc_alloc(PTR_PTR_1126ccc48);
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c1121a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c111400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c1113e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c29c5c0(param_3);
  uVar9 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be5ab00(param_1,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ffc0(puVar3,param_2,uVar1,uVar5,uVar6,uVar7,uVar8,puVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10669afe4; end: 10669b26f; +[SCLensExplorerLensFeedItem _lensCreatorItemWithCache:] */

void FUN_10669afe4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0960a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccd50;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bf5b440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c080120();
  uVar8 = param_3;
  func_0x00010c0e1aa0();
  uVar9 = param_3;
  func_0x00010bf5b120();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf5b140();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c1170a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010be5ab00(param_1,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf5b880(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdf60e0(param_1,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006940(puVar3,param_2,uVar1,uVar4,uVar5,uVar6,uVar7 & 0xffffffff,uVar8 & 0xffffffff,
                      uVar9,uVar10,uVar12,uVar2,uVar14,param_1);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10669b270; end: 10669b27b;  */

void FUN_10669b270(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__lensPreviewWithCache__1125707f8,param_2);
  return;
}



/* Entry: 10669b27c; end: 10669b387; +[SCLensExplorerLensFeedItem _lensPreviewWithCache:] */

void FUN_10669b27c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ccd58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26e0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bee6380(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar1,param_2,uVar2,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669b388; end: 10669b4bf; +[SCLensExplorerLensFeedItem _creatorStoryWithCache:] */

void FUN_10669b388(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25b220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ccc40;
    _objc_alloc(PTR_PTR_1126ccc40);
    lVar1 = param_3;
    func_0x00010bf5b8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bec47e0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c26e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becbda0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c25b220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006a80(puVar5,param_2,uVar3,param_1,lVar4);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10669b4c0; end: 10669b593; +[SCLensExplorerLensFeedItem _storyDataWithCache:] */

void FUN_10669b4c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ccd60;
    _objc_alloc(PTR_PTR_1126ccd60);
    lVar1 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c078f60(param_3);
    lVar5 = param_3;
    func_0x00010c0e1a60(param_3);
    func_0x00010c006900(puVar2,param_2,lVar1,lVar3,lVar4,lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10669b594; end: 10669b727; +[SCLensExplorerLensFeedItem _thumbnailWithCache:] */

void FUN_10669b594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126ccd68;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c085300(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0ed6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0880c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf4cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf4cd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c020be0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669b728; end: 10669b947; +[SCLensExplorerLensFeedItem _lensContainerItemWithCache:] */

void FUN_10669b728(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126ccc80;
  _objc_alloc();
  func_0x00010c04e760();
  puVar4 = PTR_PTR_1126ccd70;
  _objc_alloc();
  ppuVar5 = param_3;
  func_0x00010bf4ae20(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_3;
  func_0x00010bf4ada0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7;
  }
  ppuVar8 = param_3;
  func_0x00010c130180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010be8e4a0(param_1,param_2,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_3;
  func_0x00010bf68280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bee6380(param_1,param_2,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002780(puVar4,param_2,ppuVar5,ppuVar6,ppuVar1,ppuVar2,uVar9,ppuVar10,puVar3,param_1);
  _objc_release(param_1);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(uVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10669b948; end: 10669b953;  */

void FUN_10669b948(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4a7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__lensContainerContentItemWithCac_112570398,
             param_2);
  return;
}



/* Entry: 10669b954; end: 10669baf3; +[SCLensExplorerLensFeedItem _lensContainerContentItemWithCache:] */

void FUN_10669b954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106698270;
  uStack_50 = 0x106698280;
  uStack_48 = 0;
  uVar1 = param_3;
  func_0x00010c0cfdc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be920();
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10669baf4; end: 10669bb67;  */

void FUN_10669baf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ccd78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be4b2c0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10669bb68; end: 10669bb6b;  */

void FUN_10669bb68(void)

{
  return;
}



/* Entry: 10669bb6c; end: 10669bd3b;  */

void FUN_10669bb6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ccd78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be4bf60(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25a040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10669bd3c; end: 10669be83; +[SCLensExplorerLensFeedItem _renderStrategyFromCache:] */

void FUN_10669bd3c(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  
  puVar1 = PTR_PTR_1126ccd80;
  puVar9 = (undefined *)0x0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    lVar2 = param_4;
    func_0x00010c2480c0(param_4);
    lVar3 = param_4;
    func_0x00010c0ed100(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010be8e520(param_2,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010bf4dac0(param_4);
    uVar6 = param_2;
    func_0x00010be8e460(param_2,param_3,lVar5);
    func_0x00010c0852a0(param_4);
    dVar10 = (double)param_1;
    lVar5 = param_4;
    func_0x00010c2902c0(param_4);
    lVar7 = param_4;
    func_0x00010c2902e0(param_4);
    lVar8 = param_4;
    func_0x00010c097520(param_4);
    func_0x00010be8e500(param_2,param_3,lVar8);
    func_0x00010c097500(param_4);
    _objc_release(param_4);
    func_0x00010c04ad80(dVar10,(double)param_1,puVar1,param_3,lVar2,uVar4,uVar6,lVar5,lVar7,param_2)
    ;
    _objc_release(uVar4);
    _objc_release(lVar3);
    puVar9 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10669be84; end: 10669be9b; +[SCLensExplorerLensFeedItem _renderStrategyLensTileLayoutFromCache:] */

undefined8 FUN_10669be84(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10669be9c; end: 10669bf9b; +[SCLensExplorerLensFeedItem _renderStrategyOrientationFromCache:] */

void FUN_10669be9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_106698270;
  uStack_30 = 0x106698280;
  uStack_28 = 0;
  func_0x00010c0bdc60(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10669bf9c; end: 10669c03f;  */

void FUN_10669bf9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c151e60(param_2);
  func_0x00010be8e540(uVar3);
  puVar1 = PTR_PTR_1126ccd88;
  func_0x00010bfe4400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10669c040; end: 10669c057; +[SCLensExplorerLensFeedItem _renderStrategyContentTypeFromCache:] */

undefined1 FUN_10669c040(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10669c058; end: 10669c063; +[SCLensExplorerLensFeedItem _renderStrategyScrollBehaviourFromCache:] */

bool FUN_10669c058(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 != 0;
}



/* Entry: 10669c064; end: 10669c07b; +[SCLensExplorerLensFeedItem _lensAttributionFromCache:] */

undefined1 FUN_10669c064(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10669c07c; end: 10669c087; +[SCLensExplorerLensFeedItem _urlFromString:] */

void FUN_10669c07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithNotBlankString__11254e6a8);
  return;
}



/* Entry: 10669c088; end: 10669c22b; +[SCLensExplorerLensFeedItem _heroItemWithCache:] */

void FUN_10669c088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf8d2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccd90;
  _objc_alloc(PTR_PTR_1126ccd90);
  uVar1 = param_3;
  func_0x00010bfe0e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf68280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bee6380(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08cda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be5ab00(param_1,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a5a0(puVar3,param_2,uVar1,uVar5,uVar6,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10669c22c; end: 10669c237;  */

void FUN_10669c22c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__heroItemLayoutElementWithCache__11256ae30,
             param_2);
  return;
}



/* Entry: 10669c238; end: 10669c2eb; +[SCLensExplorerLensFeedItem _heroItemLayoutElementWithCache:] */

void FUN_10669c238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ccd98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf8d1c0(param_3);
  uVar3 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be35220(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f180(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669c2ec; end: 10669c3ef; +[SCLensExplorerLensFeedItem _heroItemLayoutElementTypeWithCache:] */

void FUN_10669c2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_106698270;
  uStack_30 = 0x106698280;
  uStack_28 = 0;
  func_0x00010c0be2e0(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10669c3f0; end: 10669c537;  */

void FUN_10669c3f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106698270;
  uStack_40 = 0x106698280;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be300();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ccda8;
  func_0x00010bfe95a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10669c538; end: 10669c597;  */

void FUN_10669c538(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c106260(param_2);
  func_0x00010be35260(uVar3);
  puVar1 = PTR_PTR_1126ccda0;
  func_0x00010c106280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10669c598; end: 10669c62b;  */

void FUN_10669c598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ccda0;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe8f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee6380(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10669c62c; end: 10669c6d7;  */

void FUN_10669c62c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126ccda8;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5400(param_2);
  _objc_release(param_2);
  func_0x00010be35260(uVar4);
  func_0x00010c26cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10669c6d8; end: 10669c6e3; +[SCLensExplorerLensFeedItem _heroItemPredefinedIconWithCache:] */

bool FUN_10669c6d8(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 != 0;
}



/* Entry: 10669c6e4; end: 10669c87f; -[SCLensExplorerLensFeedItem _cacheHeroItemWithHeroItem:] */

void FUN_10669c6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf8d2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccdb0;
  _objc_alloc(PTR_PTR_1126ccdb0);
  uVar1 = param_3;
  func_0x00010bfe0e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf68980(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08cda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdd8200(param_1,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a580(puVar3,param_2,uVar1,uVar5,uVar6,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10669c880; end: 10669c88b;  */

void FUN_10669c880(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd78d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cacheHeroItemLayoutElementWithL_1125537d0,
             param_2);
  return;
}



/* Entry: 10669c88c; end: 10669c93f; -[SCLensExplorerLensFeedItem _cacheHeroItemLayoutElementWithLayoutElement:] */

void FUN_10669c88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ccdb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf8d1c0(param_3);
  uVar3 = param_3;
  func_0x00010bf8d280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdd78a0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f160(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669c940; end: 10669ca43; -[SCLensExplorerLensFeedItem _cacheHeroItemLayoutElementContentWithElementType:] */

void FUN_10669c940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_106698270;
  uStack_30 = 0x106698280;
  uStack_28 = 0;
  func_0x00010c0be4c0(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10669ca44; end: 10669cb93;  */

void FUN_10669ca44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106698270;
  uStack_40 = 0x106698280;
  uStack_38 = 0;
  func_0x00010c0bf500(param_2);
  puVar1 = PTR_PTR_1126ccdd0;
  _objc_alloc(PTR_PTR_1126ccdd0);
  func_0x00010c01bf60();
  puVar2 = PTR_PTR_1126ccdd8;
  func_0x00010bfe0f20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10669cb94; end: 10669cbd7;  */

void FUN_10669cb94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd7880(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10669cbd8; end: 10669cd23;  */

void FUN_10669cbd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ccdc0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar3 = param_2;
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01cf80(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ccdc8;
  func_0x00010bfe0fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10669cd24; end: 10669cd2f; -[SCLensExplorerLensFeedItem _cacheHeroItemPredefinedIconWithPredefinedIcon:] */

bool FUN_10669cd24(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10669cd30; end: 10669cd8f; -[SCLensExplorerLensFeedItem _cacheHeroItemImageWithPredefinedIcon:] */

void FUN_10669cd30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bdd78e0();
  puVar1 = PTR_PTR_1126ccde8;
  _objc_alloc(PTR_PTR_1126ccde8);
  func_0x00010c037fc0();
  puVar2 = PTR_PTR_1126ccdc8;
  func_0x00010bfe0f80(PTR_PTR_1126ccdc8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10669cd90; end: 10669cf93; +[SCLensExplorerResponseFeedModel feedModelFromCache:remoteState:prefetchedFeedItems:] */

void FUN_10669cd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126ccc88;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c260ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf332e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bddbf20(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c130180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010be8e4a0(param_1,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c070480();
  uVar10 = param_3;
  func_0x00010bfa3660(param_3);
  func_0x00010bdc5080(param_1,param_2,uVar10);
  puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar10 = param_3;
  func_0x00010bfe5be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc3420(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012580(puVar1,param_2,uVar2,uVar3,uVar4,uVar6,param_5,param_4,uVar8,(char)uVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669cf94; end: 10669d15b; -[SCLensExplorerResponseFeedModel cacheFeedModelWithContext:sortIndex:isDefaultFeed:] */

void FUN_10669cf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = param_1;
  func_0x00010c0fa300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccdf0;
  _objc_alloc();
  uVar3 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf332e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bdd7640(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c130180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bdd7c40(param_1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bfa3660(param_1);
  uVar9 = param_1;
  func_0x00010bdd7720(param_1,param_2,uVar8);
  uVar8 = param_1;
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c260ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5be0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b580(puVar2,param_2,uVar1,param_3,uVar3,uVar5,uVar7,param_5,(int)uVar9);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10669d15c; end: 10669d1cb; -[SCLensExplorerResponseFeedModel persistanceIdentifierWithContext:] */

void FUN_10669d15c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e591f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669d1cc; end: 10669d2d7; +[SCLensExplorerResponseFeedModel _categoryDataFromCache:] */

void FUN_10669d1cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_10669d2d8;
    uStack_30 = 0x10669d2e8;
    uStack_28 = 0;
    func_0x00010c0bcf40(param_3);
    uVar1 = puStack_48[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10669d2d8; end: 10669d2ef;  */

void FUN_10669d2d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10669d2f0; end: 10669d3f3;  */

void FUN_10669d2f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25e3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccdf8;
  uVar1 = param_2;
  func_0x00010bf334a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf336a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10669d3f4; end: 10669d3ff;  */

void FUN_10669d3f4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__subCategoryDataFromCache__11258f080,param_2);
  return;
}



/* Entry: 10669d400; end: 10669d46f;  */

void FUN_10669d400(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ccdf8;
  func_0x00010c25ea40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ea80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10669d470; end: 10669d4e7; +[SCLensExplorerResponseFeedModel _subCategoryDataFromCache:] */

void FUN_10669d470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cce00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c25e3e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04ee40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669d4e8; end: 10669d62f; +[SCLensExplorerResponseFeedModel _renderStrategyFromCache:] */

void FUN_10669d4e8(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  
  puVar1 = PTR_PTR_1126ccd80;
  puVar9 = (undefined *)0x0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    lVar2 = param_4;
    func_0x00010c2480c0(param_4);
    lVar3 = param_4;
    func_0x00010c0ed100(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010be8e520(param_2,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010bf4dac0(param_4);
    uVar6 = param_2;
    func_0x00010be8e460(param_2,param_3,lVar5);
    func_0x00010c0852a0(param_4);
    dVar10 = (double)param_1;
    lVar5 = param_4;
    func_0x00010c2902c0(param_4);
    lVar7 = param_4;
    func_0x00010c2902e0(param_4);
    lVar8 = param_4;
    func_0x00010c097520(param_4);
    func_0x00010be8e500(param_2,param_3,lVar8);
    func_0x00010c097500(param_4);
    _objc_release(param_4);
    func_0x00010c04ad80(dVar10,(double)param_1,puVar1,param_3,lVar2,uVar4,uVar6,lVar5,lVar7,param_2)
    ;
    _objc_release(uVar4);
    _objc_release(lVar3);
    puVar9 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10669d630; end: 10669d647; +[SCLensExplorerResponseFeedModel _renderStrategyLensTileLayoutFromCache:] */

undefined8 FUN_10669d630(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10669d648; end: 10669d747; +[SCLensExplorerResponseFeedModel _renderStrategyOrientationFromCache:] */

void FUN_10669d648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_10669d2d8;
  uStack_30 = 0x10669d2e8;
  uStack_28 = 0;
  func_0x00010c0bdc60(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10669d748; end: 10669d7eb;  */

void FUN_10669d748(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c151e60(param_2);
  func_0x00010be8e540(uVar3);
  puVar1 = PTR_PTR_1126ccd88;
  func_0x00010bfe4400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10669d7ec; end: 10669d803; +[SCLensExplorerResponseFeedModel _renderStrategyContentTypeFromCache:] */

undefined1 FUN_10669d7ec(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10669d804; end: 10669d80f; +[SCLensExplorerResponseFeedModel _renderStrategyScrollBehaviourFromCache:] */

bool FUN_10669d804(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 != 0;
}



/* Entry: 10669d810; end: 10669d81b; +[SCLensExplorerResponseFeedModel _activationActionFromCache:] */

bool FUN_10669d810(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 != 0;
}



/* Entry: 10669d81c; end: 10669d91b; -[SCLensExplorerResponseFeedModel _cacheCategoryDataFrom:] */

void FUN_10669d81c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_10669d2d8;
  uStack_30 = 0x10669d2e8;
  uStack_28 = 0;
  func_0x00010c0bcf20(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10669d91c; end: 10669da07;  */

void FUN_10669d91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cce08;
  _objc_alloc(PTR_PTR_1126cce08);
  func_0x00010bffd0e0();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126cce10;
  func_0x00010bf33300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10669da08; end: 10669da13;  */

void FUN_10669da08(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cacheSubcategoryDataFrom__112553908,param_2);
  return;
}



/* Entry: 10669da14; end: 10669da9b;  */

void FUN_10669da14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cce18;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04ee40();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126cce10;
  func_0x00010c25e3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10669da9c; end: 10669db13; -[SCLensExplorerResponseFeedModel _cacheSubcategoryDataFrom:] */

void FUN_10669da9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cce20;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c25ea40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04ee00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669db14; end: 10669dc57; -[SCLensExplorerResponseFeedModel _cacheRenderStrategyFrom:] */

void FUN_10669db14(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  puVar1 = PTR_PTR_1126ccd10;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c2480c0(param_4);
  uVar3 = param_4;
  func_0x00010c0ed100(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bdd7c80(param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf4dac0(param_4);
  uVar6 = param_2;
  func_0x00010bdd7c20(param_2,param_3,uVar5);
  func_0x00010c0852a0(param_4);
  fVar9 = (float)param_1;
  uVar5 = param_4;
  func_0x00010c2902c0(param_4);
  uVar7 = param_4;
  func_0x00010c2902e0(param_4);
  uVar8 = param_4;
  func_0x00010c097520(param_4);
  func_0x00010bdd7c60(param_2,param_3,uVar8);
  func_0x00010c097500(param_4);
  _objc_release(param_4);
  func_0x00010c04ad80(fVar9,(float)param_1,puVar1,param_3,uVar2,uVar4,uVar6,uVar5,uVar7,param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669dc58; end: 10669dc6f; -[SCLensExplorerResponseFeedModel _cacheRenderStrategyLensTileLayoutFrom:] */

undefined4 FUN_10669dc58(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10669dc70; end: 10669dd6f; -[SCLensExplorerResponseFeedModel _cacheRenderStrategyOrientationFrom:] */

void FUN_10669dc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_10669d2d8;
  uStack_30 = 0x10669d2e8;
  uStack_28 = 0;
  func_0x00010c0be340(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10669dd70; end: 10669dde7;  */

void FUN_10669dd70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bdd7ca0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  puVar1 = PTR_PTR_1126ccd18;
  _objc_alloc(PTR_PTR_1126ccd18);
  func_0x00010c042840();
  puVar2 = PTR_PTR_1126ccd20;
  func_0x00010bfa4120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10669dde8; end: 10669de53;  */

void FUN_10669dde8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ccd20;
  puVar1 = PTR_PTR_1126ccd28;
  _objc_opt_new(PTR_PTR_1126ccd28);
  func_0x00010bfa4140(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10669de54; end: 10669de6b; -[SCLensExplorerResponseFeedModel _cacheRenderStrategyContentTypeFrom:] */

undefined1 FUN_10669de54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10669de6c; end: 10669de77; -[SCLensExplorerResponseFeedModel _cacheRenderStrategyScrollBehaviourFrom:] */

bool FUN_10669de6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10669de78; end: 10669de83; -[SCLensExplorerResponseFeedModel _cacheFeedActivationActionFrom:] */

bool FUN_10669de78(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10669de84; end: 10669df57; -[SCLensExplorerCategoriesFetcher initWithLensExplorerFactory:categoriesProviderFactory:categoriesBatchRefresher:preselectedFeedId:] */

undefined8
FUN_10669de84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c023c80(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10669df58; end: 10669e0ff; -[SCLensExplorerCategoriesFetcher initWithLensExplorerFactory:categoriesProviderFactory:categoriesBatchRefresher:preselectedFeedId:performer:] */

undefined1 *
FUN_10669df58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f2590;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c0933e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf6d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10669e100; end: 10669e157; -[SCLensExplorerCategoriesFetcher setCategoriesActionHandler:] */

void FUN_10669e100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10669e158; end: 10669e2ff; -[SCLensExplorerCategoriesFetcher requestCategoriesIfNeeded] */

void FUN_10669e158(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_1;
    func_0x00010bdd2da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33180();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    _objc_release(uVar4);
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c26fac0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2780c0();
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf331c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar2);
    func_0x00010bf1a3e0(*(undefined8 *)(param_1 + 0x58));
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10669e300; end: 10669e3a7;  */

void FUN_10669e300(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c0800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10669e3a8; end: 10669e3b3;  */

void FUN_10669e3a8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be264d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleBatchResponse__1125672d0,param_2);
  return;
}



/* Entry: 10669e3b4; end: 10669e423;  */

void FUN_10669e3b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58) = 0;
  _objc_release(uVar1);
  func_0x00010c0a95e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110f307f8,0);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar2 = PTR_PTR_1126cce28;
  _objc_opt_new(PTR_PTR_1126cce28);
  func_0x00010c0d9840(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10669e424; end: 10669e42b; -[SCLensExplorerCategoriesFetcher refreshSectionsWithIdentifiers:] */

void FUN_10669e424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1255b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_refreshSectionsWithIdentifiers__112626f88);
  return;
}



/* Entry: 10669e42c; end: 10669e43f; -[SCLensExplorerCategoriesFetcher _batchConfiguration] */

void FUN_10669e42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf16e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cce30,PTR_s_batchConfigurationWithPreselecte_1125a3530,
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10669e440; end: 10669e4df; -[SCLensExplorerCategoriesFetcher _handleBatchResponse:] */

void FUN_10669e440(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4d6a0();
  _objc_release(lVar1);
  func_0x00010c0a95c0(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110f307f8,0,lVar2 != 0);
  lVar1 = param_3;
  func_0x00010befea40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c17a000(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10669e4e0; end: 10669e4e7; -[SCLensExplorerCategoriesFetcher categoriesObservable] */

undefined8 FUN_10669e4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10669e4e8; end: 10669e4ef; -[SCLensExplorerCategoriesFetcher categoriesActionHandler] */

undefined8 FUN_10669e4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10669e4f0; end: 10669e58b; -[SCLensExplorerCategoriesFetcher .cxx_destruct] */

void FUN_10669e4f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10669e58c; end: 10669e62f; -[SCLensExplorerCollectionCategoryModelProvider initWithLensCollectionId:lensCollectionCategoryProvider:] */

undefined1 *
FUN_10669e58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2598;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10669e630; end: 10669e67f; -[SCLensExplorerCollectionCategoryModelProvider requestLensExplorerCategoryModel] */

void FUN_10669e630(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa7ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10669e680; end: 10669e6af; -[SCLensExplorerCollectionCategoryModelProvider .cxx_destruct] */

void FUN_10669e680(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10669e6b0; end: 10669e723; -[SCLensExplorerLocalCategoriesFactory initWithStudySettingsProvider:] */

undefined1 * FUN_10669e6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f25a0;
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



/* Entry: 10669e724; end: 10669e7df; -[SCLensExplorerLocalCategoriesFactory categoryForIdentifier:categoryName:subcategories:feedActivation:iconUrl:] */

void FUN_10669e724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf09f60(param_5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cce38;
  _objc_alloc(PTR_PTR_1126cce38);
  func_0x00010bffd0c0();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10669e7e0; end: 10669e7eb; -[SCLensExplorerLocalCategoriesFactory .cxx_destruct] */

void FUN_10669e7e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10669e7ec; end: 10669e7f7; -[SCLensExplorerNullCategoryAggregator categories] */

undefined * FUN_10669e7ec(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10669e7f8; end: 10669e813; -[SCLensExplorerNullCategoryAggregator blocklist] */

void FUN_10669e7f8(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10669e814; end: 10669e81b; -[SCLensExplorerNullCategoryAggregator defaultFeedId] */

undefined8 FUN_10669e814(void)

{
  return 0;
}



/* Entry: 10669e81c; end: 10669e827; -[SCLensExplorerNullCategoryAggregator subcategories] */

undefined * FUN_10669e81c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}


