/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10501b64c; end: 10501b78b; -[SCFriendProfileIdentityPillsSectionDataProvider _setLocalTimeForFriendId:] */

void FUN_10501b64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  uVar1 = uVar4;
  _objc_retain(uVar4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10501b78c; end: 10501b89b;  */

void FUN_10501b78c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0e0ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar3 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  return;
}



/* Entry: 10501b89c; end: 10501b913;  */

void FUN_10501b89c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0720c0();
  uVar1 = 0;
  if ((int)uVar2 == 0) {
    uVar1 = param_2;
  }
  _objc_retain(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5660();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10501b914; end: 10501ba3b; -[SCFriendProfileIdentityPillsSectionDataProvider _setLocalTime:] */

void FUN_10501b914(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x108);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
      _objc_retain(0);
      puVar5 = *(undefined **)(param_1 + 0x108);
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_10501ba24;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x108);
      *(ulong *)(param_1 + 0x108) = param_3;
      _objc_release(uVar2);
      puVar5 = PTR_PTR_1126b3d60;
      func_0x00010c270d60(PTR_PTR_1126b3d60);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c116880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    _objc_release(puVar5);
    func_0x00010be9b520(param_1);
  }
LAB_10501ba24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10501ba3c; end: 10501bbaf; -[SCFriendProfileIdentityPillsSectionDataProvider _fetchAndObserveConvo] */

void FUN_10501ba3c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  _objc_retain(uVar5);
  puVar2 = PTR_PTR_1126b01c0;
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfa4ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10501bbb0; end: 10501bc6b;  */

void FUN_10501bbb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10501bc6c; end: 10501bcbf;  */

void FUN_10501bc6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf500c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee11c0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10501bcc0; end: 10501bd87; -[SCFriendProfileIdentityPillsSectionDataProvider _updateStreakStatusWithConvo:] */

void FUN_10501bcc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010c25c080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf9ca60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b3d68;
  _objc_opt_new(PTR_PTR_1126b3d68);
  uVar3 = uVar1;
  func_0x00010c07c800();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 != 0) {
    uVar3 = uVar1;
    func_0x00010c25be80(uVar1);
    func_0x00010c0df760(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1846c0(puVar2,param_2,puVar4);
    _objc_release(puVar4);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x110),param_2,puVar2);
  func_0x00010be9b520(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10501bd88; end: 10501bdd3; -[SCFriendProfileIdentityPillsSectionDataProvider tearDown] */

void FUN_10501bd88(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 200));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}



/* Entry: 10501bdd4; end: 10501beb3; -[SCFriendProfileIdentityPillsSectionDataProvider valdiContext] */

void FUN_10501bdd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010bdf5680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3d70;
  _objc_opt_class(PTR_PTR_1126b3d70);
  lVar4 = param_1;
  func_0x00010bdec340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf55740(uVar7,param_2,puVar3,lVar1,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar7);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10501beb4; end: 10501bf0b; -[SCFriendProfileIdentityPillsSectionDataProvider _createValdiViewModel] */

void FUN_10501beb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3d78;
  _objc_alloc_init(PTR_PTR_1126b3d78);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e45e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10501bf0c; end: 10501c08f; +[SCFriendProfileIdentityPillsSectionDataProvider _createImageInfoWithBoltMediaServingInfo:] */

void FUN_10501bf0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c120160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c120160(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1428;
    _objc_alloc(PTR_PTR_1126b1428);
    func_0x00010c0038e0();
    lVar2 = param_3;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      lVar2 = param_3;
      func_0x00010c0c54a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b20(puVar5,param_2,lVar2,4);
      _objc_release(lVar2);
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      lVar2 = param_3;
      func_0x00010c0c5480(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b20(puVar6,param_2,lVar2,4);
      _objc_release(lVar2);
      puVar7 = PTR_PTR_1126b1430;
      _objc_alloc(PTR_PTR_1126b1430);
      func_0x00010c020ba0();
      func_0x00010c195c60(puVar3,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10501c090; end: 10501c12b; -[SCFriendProfileIdentityPillsSectionDataProvider _onAstrologyPillTap:] */

void FUN_10501c090(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar2 = PTR_PTR_1126b3d80;
    func_0x00010bfb88a0(PTR_PTR_1126b3d80,param_2,*(undefined8 *)(param_1 + 0xd0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f12498,puVar2);
    _objc_release(puVar2);
    func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10501c12c; end: 10501c18b; -[SCFriendProfileIdentityPillsSectionDataProvider _onFriendmojiPillTap] */

void FUN_10501c12c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentFriendPlusIdentityPillDi_11257c760)
    ;
    return;
  }
  lVar1 = param_1;
  func_0x00010be1f4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentFriendmojiIdentityPillDi_11257c7d8)
    ;
    return;
  }
  return;
}



/* Entry: 10501c18c; end: 10501c1ff; -[SCFriendProfileIdentityPillsSectionDataProvider _onCommunityPillTapWithStoryId:] */

void FUN_10501c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_3);
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10501c200; end: 10501c273; -[SCFriendProfileIdentityPillsSectionDataProvider _onCommunityPillLongPressWithStoryId:] */

void FUN_10501c200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_3);
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10501c274; end: 10501c377; -[SCFriendProfileIdentityPillsSectionDataProvider _presentFriendmojiIdentityPillDialog] */

void FUN_10501c274(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b3d88;
  _objc_alloc(PTR_PTR_1126b3d88);
  lVar2 = param_1;
  func_0x00010be1f4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010901d7c4(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015fc0(puVar1,param_2,lVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar6,0);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10501c378; end: 10501c573; -[SCFriendProfileIdentityPillsSectionDataProvider _presentFriendPlusIdentityPillDialog] */

void FUN_10501c378(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126b3d90;
  _objc_alloc(PTR_PTR_1126b3d90);
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 0xf8));
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  dVar8 = param_1;
  func_0x00010901d7c4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0xd0);
  func_0x00010901e19c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c02d1a0(param_1,dVar8 * 1000.0,puVar1,param_3,uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar5 = param_2;
  func_0x00010be1f4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a05c0(puVar1,param_3,lVar5);
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1caa20(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  func_0x00010bf1bae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fa60(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  lVar5 = param_2;
  func_0x00010be1f4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xc9;
  if (lVar5 == 0) {
    uVar3 = 0xca;
  }
  func_0x00010bff0880(puVar6,param_3,uVar3,puVar1);
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_2,param_3,puVar7,0);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10501c574; end: 10501c677; -[SCFriendProfileIdentityPillsSectionDataProvider _onStreakPillTap] */

void FUN_10501c574(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  func_0x00010be23120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b3d98;
    _objc_alloc(PTR_PTR_1126b3d98);
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010901d7c4(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0155a0(puVar2,param_2,uVar4,lVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126afdb8;
    _objc_alloc(PTR_PTR_1126afdb8);
    func_0x00010bff0880();
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010be250a0(param_1,param_2,puVar6,0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10501c678; end: 10501c82b; -[SCFriendProfileIdentityPillsSectionDataProvider _onFriendSnapScorePillTap] */

void FUN_10501c678(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  if ((lVar1 != 0) && (func_0x00010c067ec0(), -1 < (int)lVar1)) {
    puVar2 = PTR_PTR_1126b3da0;
    _objc_alloc(PTR_PTR_1126b3da0);
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010901d7c4(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0(*(undefined8 *)(param_1 + 0xd8));
    func_0x00010c015560(puVar2,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bfb8b00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c252440();
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar6 == 3) {
      uVar7 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c2923e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a03e0(puVar2,param_2,uVar7);
      _objc_release(uVar7);
    }
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x000108fab38c();
    if (0 < lVar1) {
      func_0x00010c2004c0(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68);
    }
    puVar8 = PTR_PTR_1126afdb8;
    _objc_alloc(PTR_PTR_1126afdb8);
    func_0x00010bff0880();
    puVar9 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010be250a0(param_1,param_2,puVar9,0);
    _objc_release(puVar9);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10501c82c; end: 10501c8ab; -[SCFriendProfileIdentityPillsSectionDataProvider _onStreakRestorePillTap] */

void FUN_10501c82c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10501c8ac; end: 10501c97f; -[SCFriendProfileIdentityPillsSectionDataProvider _handleAction:fromSourceView:] */

void FUN_10501c8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10501c980;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = uVar1;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10501c980; end: 10501c98f;  */

void FUN_10501c980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleActionWithSender_actionMod_1125d19f8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10501c990; end: 10501c993; -[SCFriendProfileIdentityPillsSectionDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_10501c990(void)

{
  return;
}



/* Entry: 10501c994; end: 10501ca07; -[SCFriendProfileIdentityPillsSectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10501c994(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10501ca08;
    puStack_20 = &UNK_110855640;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_18 = param_1;
    func_0x00010c0bc6c0(param_3,param_2,&puStack_38,0,0,0,0,0,0,0,0);
  }
  return;
}



/* Entry: 10501ca08; end: 10501cbc3;  */

void FUN_10501ca08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x130);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(param_2);
  return;
}



/* Entry: 10501cbc4; end: 10501cbf7;  */

void FUN_10501cbc4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be66de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501cbf8; end: 10501cc43; -[SCFriendProfileIdentityPillsSectionDataProvider _bridgeObservable:] */

void FUN_10501cbf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10501cc44; end: 10501cdbf; -[SCFriendProfileIdentityPillsSectionDataProvider _birthdayPillViewContext] */

void FUN_10501cc44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126b3da8;
  _objc_opt_new(PTR_PTR_1126b3da8);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9820(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  uVar2 = *(ulong *)(param_1 + 0xd0);
  func_0x00010901d430();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126b3db0;
    _objc_alloc(PTR_PTR_1126b3db0);
    uVar3 = uVar2;
    func_0x00010c0d0e40(uVar2);
    uVar4 = uVar2;
    func_0x00010bf65700(uVar2);
    func_0x00010c02c8e0((double)(uVar3 & 0xffffffff),(double)(uVar4 & 0xffffffff),puVar9,param_2,
                        *(undefined1 *)(param_1 + 0xe0));
    lVar5 = param_1;
    func_0x00010bdd5800(param_1,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170380(puVar1,param_2,lVar5);
    _objc_release(lVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf1a740(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf1a720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170440(puVar1,param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_retain(puVar1);
    _objc_release(puVar9);
    puVar9 = puVar1;
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10501cdc0; end: 10501ceaf; -[SCFriendProfileIdentityPillsSectionDataProvider _merlinPillViewContext] */

void FUN_10501cdc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8e420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b3db8;
  _objc_alloc(PTR_PTR_1126b3db8);
  lVar5 = param_1;
  func_0x00010bdd5800(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd5800(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b600(puVar4,param_2,lVar5,param_1);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10501ceb0; end: 10501d087; -[SCFriendProfileIdentityPillsSectionDataProvider _topicChatPillContext] */

void FUN_10501ceb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf913c0();
  _objc_release(uVar1);
  if ((int)uVar7 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c275b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf55bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar2 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        lVar5 = *(long *)(param_1 + 0xb0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010c275420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        if (lVar4 == 0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = PTR_PTR_1126b3dc0;
          _objc_opt_new(PTR_PTR_1126b3dc0);
          lVar5 = lVar2;
          func_0x00010bf553a0(lVar2,param_2,*(undefined8 *)(param_1 + 8));
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf668c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18a1e0(puVar8,param_2,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar5);
          func_0x00010c2178a0(puVar8,param_2,lVar4);
          uVar7 = *(undefined8 *)(param_1 + 0xd0);
          func_0x00010c2923e0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdd5800(param_1,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a03c0(puVar8,param_2,param_1);
          _objc_release(param_1);
          _objc_release(uVar7);
        }
        _objc_release(lVar4);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10501d088; end: 10501d11f; -[SCFriendProfileIdentityPillsSectionDataProvider _myReverseBestFriendRankObservable] */

void FUN_10501d088(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x00010be20aa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860c0(PTR_PTR_1126ae6b8,param_2,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010bdd5800(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10501d120; end: 10501d29f; -[SCFriendProfileIdentityPillsSectionDataProvider _profileFriendPillContext] */

void FUN_10501d120(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010be1f4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    _objc_retain(uVar4);
    puVar5 = PTR_PTR_1126b3dc8;
    _objc_alloc(PTR_PTR_1126b3dc8);
    lVar2 = param_1;
    func_0x00010be1f4c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdd5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015fe0(puVar5);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c1d3960(puVar5);
    _objc_destroyWeak(auStack_60);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10501d2a0; end: 10501d347;  */

void FUN_10501d2a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10501d348; end: 10501d373;  */

void FUN_10501d348(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be695c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501d374; end: 10501d4af; -[SCFriendProfileIdentityPillsSectionDataProvider _streakPillContext] */

void FUN_10501d374(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010be23120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    _objc_retain(uVar2);
    puVar3 = PTR_PTR_1126b3dd0;
    _objc_alloc(PTR_PTR_1126b3dd0);
    func_0x00010bdd5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e500(puVar3);
    _objc_release(param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1d37e0(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10501d4b0; end: 10501d557;  */

void FUN_10501d4b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10501d558; end: 10501d583;  */

void FUN_10501d558(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501d584; end: 10501d6d3; -[SCFriendProfileIdentityPillsSectionDataProvider _snapScorePillContext] */

void FUN_10501d584(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    _objc_retain(uVar2);
    puVar3 = PTR_PTR_1126b3dd8;
    _objc_alloc(PTR_PTR_1126b3dd8);
    lVar1 = param_1;
    func_0x00010bdd5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048600(puVar3);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1d3960(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10501d6d4; end: 10501d77b;  */

void FUN_10501d6d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10501d77c; end: 10501d7a7;  */

void FUN_10501d77c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501d7a8; end: 10501d8af; -[SCFriendProfileIdentityPillsSectionDataProvider _streakRestorePillContext] */

void FUN_10501d7a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126b3de0;
  _objc_opt_new(PTR_PTR_1126b3de0);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198d40(puVar1);
  _objc_release(uVar2);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1d3800(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10501d8b0; end: 10501d957;  */

void FUN_10501d8b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10501d958; end: 10501d983;  */

void FUN_10501d958(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501d984; end: 10501d9fb; -[SCFriendProfileIdentityPillsSectionDataProvider _localTimePill] */

void FUN_10501d984(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x108) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b3de8;
    _objc_alloc(PTR_PTR_1126b3de8);
    func_0x00010bdd5800(param_1,param_2,*(undefined8 *)(param_1 + 0x108));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0269e0(puVar1,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10501d9fc; end: 10501db83; -[SCFriendProfileIdentityPillsSectionDataProvider _zodiacPillContext] */

void FUN_10501d9fc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010901d430();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x130);
    _objc_retain(uVar5);
    puVar2 = PTR_PTR_1126b3db0;
    _objc_alloc(PTR_PTR_1126b3db0);
    uVar3 = uVar1;
    func_0x00010c0d0e40(uVar1);
    uVar4 = uVar1;
    func_0x00010bf65700(uVar1);
    func_0x00010c02c8e0((double)(uVar3 & 0xffffffff),(double)(uVar4 & 0xffffffff),puVar2);
    puVar6 = PTR_PTR_1126b3df0;
    _objc_alloc(PTR_PTR_1126b3df0);
    func_0x00010bdd5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff77e0(puVar6);
    _objc_release(param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1d3960(puVar6);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10501db84; end: 10501dc3f;  */

void FUN_10501db84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10501dc40; end: 10501dc93;  */

void FUN_10501dc40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b9688dc(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be67ca0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10501dc94; end: 10501de53; -[SCFriendProfileIdentityPillsSectionDataProvider _communityPillsContext] */

void FUN_10501dc94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = *(long *)(param_1 + 0xf0);
  func_0x0001006372a4(lVar1,&PTR___NSConcreteGlobalBlock_110863598);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  _objc_retain(uVar4);
  lVar2 = lVar1;
  func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_1108635d8);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b3e08;
    _objc_alloc(PTR_PTR_1126b3e08);
    func_0x00010bdd5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035f80(puVar5);
    _objc_release(param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10501dff4;
    puStack_80 = &UNK_110859c28;
    uStack_78 = uVar4;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c1d3960(puVar5);
    _objc_copyWeak(auStack_a0,auStack_68);
    func_0x00010c1d29e0(puVar5);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10501de54; end: 10501de73;  */

bool FUN_10501de54(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 7;
}



/* Entry: 10501de74; end: 10501dff3;  */

void FUN_10501de74(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf43080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ecf20();
  puVar4 = PTR_PTR_1126b3df8;
  ppuVar1 = &PTR_PTR_1133bb448;
  if (lVar3 != 2) {
    ppuVar1 = &PTR_PTR_1133bb440;
  }
  puVar7 = *ppuVar1;
  _objc_retain(puVar7);
  _objc_alloc(puVar4);
  lVar3 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf43080(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c22d240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b140(puVar4);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126b3e00;
  lVar3 = param_2;
  func_0x00010bf43080(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = lVar3;
  func_0x00010bf1f020(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdee9c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a4a0(puVar4);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10501dff4; end: 10501e0af;  */

void FUN_10501dff4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10501e0b0; end: 10501e0e3;  */

void FUN_10501e0b0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be685e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501e0e4; end: 10501e19f;  */

void FUN_10501e0e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10501e1a0; end: 10501e1d3;  */

void FUN_10501e1a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501e1d4; end: 10501e2e3; -[SCFriendProfileIdentityPillsSectionDataProvider _saturnPillContext] */

void FUN_10501e1d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0xd0);
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c149b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b3e10;
    _objc_alloc_init(PTR_PTR_1126b3e10);
    func_0x00010c1f5660();
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1d3960(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10501e2e4; end: 10501e32b;  */

void FUN_10501e2e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b2c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501e32c; end: 10501e3c3; -[SCFriendProfileIdentityPillsSectionDataProvider _onSaturnPillTapWithURL:] */

void FUN_10501e32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afdb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff0880();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10501e3c4; end: 10501e47b; -[SCFriendProfileIdentityPillsSectionDataProvider _mutualFriendsPillContext] */

void FUN_10501e3c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = PTR_PTR_1126b3e18;
  _objc_alloc_init(PTR_PTR_1126b3e18);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1d3960(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10501e47c; end: 10501e4c3;  */

void FUN_10501e47c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a2a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501e4c4; end: 10501e55b; -[SCFriendProfileIdentityPillsSectionDataProvider _onMutualFriendsPillTap:] */

void FUN_10501e4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afdb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff0880();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10501e55c; end: 10501e7bf; -[SCFriendProfileIdentityPillsSectionDataProvider _createComponentContext] */

void FUN_10501e55c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b3e20;
  _objc_opt_new(PTR_PTR_1126b3e20);
  lVar3 = param_1;
  func_0x00010bdd4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1704e0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be5fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6d40(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be82d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fea0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bec5200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e3a0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bec5220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e460(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bebd1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205460(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be4f420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf340(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010beebf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227a60(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bde2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f860(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be98940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5560(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010becd800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217780(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc7c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010bf926c0();
  if ((int)uVar4 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xd0);
    func_0x000100bf119c();
    if (iVar1 != 0) {
      func_0x00010be61bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ca840(puVar2,param_2,param_1);
      _objc_release(param_1);
    }
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10501e7c0; end: 10501ea63; -[SCFriendProfileIdentityPillsSectionDataProvider _getFriendmojiData] */

void FUN_10501e7c0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined **unaff_x19;
  long unaff_x20;
  undefined *puVar13;
  undefined8 unaff_x22;
  long lVar14;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  int iStack_300;
  int iStack_2f0;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [128];
  long lStack_220;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [128];
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar2 = *(long *)(param_1 + 0xd0);
  lStack_1a0 = param_1;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = lVar2;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = (undefined *)0x0;
    lStack_188 = *plStack_170;
    ppuStack_190 = &PTR____CFConstantStringClassReference_110dc50b8;
    ppuStack_198 = &PTR____CFConstantStringClassReference_110dc50d8;
    unaff_x19 = &PTR____CFConstantStringClassReference_110dc50f8;
    unaff_x27 = &PTR____CFConstantStringClassReference_110dc5118;
    unaff_x28 = &PTR____CFConstantStringClassReference_110f5ef98;
    do {
      unaff_x20 = 0;
      puVar11 = puVar13;
      do {
        if (*plStack_170 != lStack_188) {
          _objc_enumerationMutation(lStack_1a8);
        }
        unaff_x24 = *(undefined **)(lStack_178 + unaff_x20 * 8);
        ppuStack_c0 = ppuStack_190;
        ppuStack_b8 = ppuStack_198;
        ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be990;
        ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be9a8;
        ppuStack_b0 = &PTR____CFConstantStringClassReference_110dc50f8;
        ppuStack_a8 = &PTR____CFConstantStringClassReference_110dc5118;
        ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be9c0;
        ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be9d8;
        ppuStack_a0 = &PTR____CFConstantStringClassReference_110f5ef98;
        ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be9f0;
        unaff_x25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_98,
                            &ppuStack_c0,5);
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x24;
        func_0x00010bf33560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x25;
        func_0x00010c0e00e0(unaff_x25,param_2,unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        puVar13 = puVar11;
        if (unaff_x23 != (undefined *)0x0) {
          unaff_x25 = *(undefined **)(lStack_1a0 + 0x40);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf33560(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf8e420(unaff_x25,param_2,unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x24);
          _objc_release(unaff_x25);
          puVar13 = PTR_PTR_1126b3e28;
          _objc_alloc();
          puVar3 = unaff_x23;
          func_0x00010c067ec0(unaff_x23);
          func_0x00010c015fa0(puVar13,param_2,puVar3,unaff_x26);
          _objc_release(puVar11);
          _objc_release(unaff_x26);
          unaff_x24 = puVar13;
        }
        _objc_release(unaff_x23);
        unaff_x20 = unaff_x20 + 1;
        puVar11 = puVar13;
      } while (lVar2 != unaff_x20);
      lVar2 = lStack_1a8;
      func_0x00010bf52a60(lStack_1a8,param_2,&uStack_180,auStack_140,0x10);
    } while (lVar2 != 0);
    unaff_x22 = 0;
  }
  lVar2 = lStack_1a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1b8 = FUN_10501ea64;
    lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *(undefined8 *)(lVar2 + 0xa0);
    ppuStack_210 = unaff_x28;
    ppuStack_208 = unaff_x27;
    puStack_200 = unaff_x26;
    puStack_1f8 = unaff_x25;
    puStack_1f0 = unaff_x24;
    puStack_1e8 = unaff_x23;
    uStack_1e0 = unaff_x22;
    puStack_1d8 = puVar13;
    lStack_1d0 = unaff_x20;
    ppuStack_1c8 = unaff_x19;
    puStack_1c0 = &stack0xfffffffffffffff0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0790e0();
    _objc_release(uVar4);
    puVar13 = PTR_PTR_1126b3e30;
    if ((int)uVar6 == 0) {
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      lStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      plStack_2d0 = (long *)0x0;
      lVar5 = *(long *)(lVar2 + 0xd0);
      func_0x00010bfb9b40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010bf52a60();
      if (lVar8 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = (undefined *)0x0;
        lVar12 = *plStack_2d0;
        iStack_2f0 = 0x10dc5198;
        iStack_300 = 0x10ecaf58;
        do {
          lVar14 = 0;
          do {
            if (*plStack_2d0 != lVar12) {
              _objc_enumerationMutation(lVar5);
            }
            uVar4 = *(undefined8 *)(lStack_2d8 + lVar14 * 8);
            uVar6 = uVar4;
            func_0x00010bf33560(uVar4);
            _objc_retainAutoreleasedReturnValue();
            iVar1 = iStack_2f0;
            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dc5198,param_2,uVar6);
            if (iVar1 == 0) {
              uVar7 = uVar4;
              func_0x00010bf33560(uVar4);
              _objc_retainAutoreleasedReturnValue();
              iVar1 = iStack_300;
              func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ecaf58,param_2,uVar7);
              _objc_release(uVar7);
              _objc_release(uVar6);
              if (iVar1 != 0) goto LAB_10501ec6c;
            }
            else {
              _objc_release(uVar6);
LAB_10501ec6c:
              uVar9 = *(undefined8 *)(lVar2 + 0x40);
              func_0x00010c269d40(uVar9);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar4;
              func_0x00010bf33560(uVar4);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar9;
              func_0x00010bf8e420(uVar9,param_2,uVar6);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar6);
              _objc_release(uVar9);
              uVar6 = *(undefined8 *)(lVar2 + 0x48);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9c880(uVar4);
              func_0x00010c07fe20(uVar6);
              _objc_release(uVar6);
              uVar10 = *(undefined8 *)(lVar2 + 0xd0);
              func_0x00010bfb8280(uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar10;
              func_0x00010c261440();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar6;
              func_0x00010bf0a8a0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar4;
              func_0x00010c243560();
              _objc_release(uVar4);
              _objc_release(uVar6);
              _objc_release(uVar10);
              puVar11 = PTR_PTR_1126b3e38;
              _objc_alloc();
              func_0x00010c0061a0((double)(int)uVar9);
              _objc_release(puVar13);
              _objc_release(uVar7);
              puVar13 = puVar11;
            }
            lVar14 = lVar14 + 1;
          } while (lVar8 != lVar14);
          lVar8 = lVar5;
          func_0x00010bf52a60(lVar5,param_2,&uStack_2e0,auStack_2a0,0x10);
        } while (lVar8 != 0);
      }
    }
    else {
      lVar5 = *(long *)(lVar2 + 0xa8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar2 + 0xd0);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c25bfe0(lVar5,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar2 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25bec0(puVar13,param_2,lVar8,uVar4,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(lVar8);
      _objc_release(uVar6);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_220) {
      ___stack_chk_fail();
      lVar2 = lVar5;
      func_0x000108fab12c();
      if (lVar2 < 0) {
        if (*(char *)(lVar5 + 0xe1) == '\x01') {
          lVar12 = *(long *)(lVar5 + 0xd0);
          func_0x00010bfb8280();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar12;
          func_0x00010c261440();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar2;
          func_0x00010bf0a8a0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar8;
          func_0x00010c13ffe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          _objc_release(lVar2);
          _objc_release(lVar12);
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar5 != 0) {
            lVar2 = lVar5;
            func_0x00010c11f520(lVar5);
            func_0x00010c0df760(puVar13,param_2,lVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            goto _objc_autoreleaseReturnValue;
          }
        }
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10501ea64; end: 10501edeb; -[SCFriendProfileIdentityPillsSectionDataProvider _getStreakData] */

void FUN_10501ea64(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  int iStack_150;
  int iStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0790e0();
  _objc_release(uVar2);
  puVar12 = PTR_PTR_1126b3e30;
  if ((int)uVar4 == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 0xd0);
    func_0x00010bfb9b40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf52a60();
    if (lVar6 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = (undefined *)0x0;
      lVar11 = *plStack_120;
      iStack_140 = 0x10dc5198;
      iStack_150 = 0x10ecaf58;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar3);
          }
          uVar2 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar4 = uVar2;
          func_0x00010bf33560(uVar2);
          _objc_retainAutoreleasedReturnValue();
          iVar1 = iStack_140;
          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dc5198,param_2,uVar4);
          if (iVar1 == 0) {
            uVar5 = uVar2;
            func_0x00010bf33560(uVar2);
            _objc_retainAutoreleasedReturnValue();
            iVar1 = iStack_150;
            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ecaf58,param_2,uVar5);
            _objc_release(uVar5);
            _objc_release(uVar4);
            if (iVar1 != 0) goto LAB_10501ec6c;
          }
          else {
            _objc_release(uVar4);
LAB_10501ec6c:
            uVar7 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010c269d40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            func_0x00010bf33560(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar7;
            func_0x00010bf8e420(uVar7,param_2,uVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_release(uVar7);
            uVar4 = *(undefined8 *)(param_1 + 0x48);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf9c880(uVar2);
            func_0x00010c07fe20(uVar4);
            _objc_release(uVar4);
            uVar8 = *(undefined8 *)(param_1 + 0xd0);
            func_0x00010bfb8280(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar8;
            func_0x00010c261440();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar4;
            func_0x00010bf0a8a0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar2;
            func_0x00010c243560();
            _objc_release(uVar2);
            _objc_release(uVar4);
            _objc_release(uVar8);
            puVar9 = PTR_PTR_1126b3e38;
            _objc_alloc();
            func_0x00010c0061a0((double)(int)uVar7);
            _objc_release(puVar12);
            _objc_release(uVar5);
            puVar12 = puVar9;
          }
          lVar10 = lVar10 + 1;
        } while (lVar6 != lVar10);
        lVar6 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar6 != 0);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c25bfe0(lVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25bec0(puVar12,param_2,lVar6,uVar2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(uVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar6 = lVar3;
    func_0x000108fab12c();
    if (lVar6 < 0) {
      if (*(char *)(lVar3 + 0xe1) == '\x01') {
        lVar10 = *(long *)(lVar3 + 0xd0);
        func_0x00010bfb8280();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar10;
        func_0x00010c261440();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bf0a8a0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar3;
        func_0x00010c13ffe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar6);
        _objc_release(lVar10);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar11 != 0) {
          lVar6 = lVar11;
          func_0x00010c11f520(lVar11);
          func_0x00010c0df760(puVar12,param_2,lVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          goto _objc_autoreleaseReturnValue;
        }
      }
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10501edec; end: 10501eedf; -[SCFriendProfileIdentityPillsSectionDataProvider _getMyReverseBestFriendRank] */

void FUN_10501edec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x000108fab12c();
  if (lVar1 < 0) {
    if (*(char *)(param_1 + 0xe1) == '\x01') {
      lVar2 = *(long *)(param_1 + 0xd0);
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c261440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf0a8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c13ffe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(lVar2);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar4 != 0) {
        lVar1 = lVar4;
        func_0x00010c11f520(lVar4);
        func_0x00010c0df760(puVar5,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        goto LAB_10501eecc;
      }
    }
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10501eecc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10501eee0; end: 10501eef7; -[SCFriendProfileIdentityPillsSectionDataProvider contextProviderDelegate] */

void FUN_10501eee0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10501eef8; end: 10501ef03; -[SCFriendProfileIdentityPillsSectionDataProvider setContextProviderDelegate:] */

void FUN_10501eef8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x128,param_3);
  return;
}



/* Entry: 10501ef04; end: 10501ef0b; -[SCFriendProfileIdentityPillsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10501ef04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10501ef0c; end: 10501ef3b; -[SCFriendProfileIdentityPillsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10501ef0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10501ef3c; end: 10501ef43; -[SCFriendProfileIdentityPillsSectionDataProvider actionHandler] */

undefined8 FUN_10501ef3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10501ef44; end: 10501ef73; -[SCFriendProfileIdentityPillsSectionDataProvider setActionHandler:] */

void FUN_10501ef44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10501ef74; end: 10501f143; -[SCFriendProfileIdentityPillsSectionDataProvider .cxx_destruct] */

void FUN_10501ef74(long param_1)

{
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_destroyWeak(param_1 + 0x128);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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



/* Entry: 10501f144; end: 10501f2f3; -[SCFriendProfileIdentityPillsSectionPluginsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10501f144(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10501f2f4;
  puStack_78 = &UNK_11085a8b8;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  param_1 = param_1 + _DAT_1127199f8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10501f2f4; end: 10501f373;  */

void FUN_10501f2f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10501f374; end: 10501fa87; -[SCFriendProfileIdentityPillsSectionPluginsEntryPoint _createSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10501f374(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  
  lVar59 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar63 = param_1 + _DAT_1127199fc;
  _objc_loadWeakRetained();
  lVar2 = lVar63;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar63);
  puVar4 = PTR_PTR_1126b3e00;
  _objc_alloc();
  lVar63 = param_1 + _DAT_1127199f8;
  _objc_loadWeakRetained();
  lVar5 = lVar63;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112719a00;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = (long)_DAT_112719a04;
  lVar7 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar11 = lVar60;
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = (long)_DAT_112719a08;
  lVar12 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf10360();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar14 = lVar61;
  func_0x00010bf10340();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112719a0c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = (long)_DAT_112719a10;
  lVar17 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bfb9940();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar19 = lVar62;
  func_0x00010bfb9760();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112719a14;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112719a18;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112719a1c;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112719a20;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112719a24;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c09ec60();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112719a28;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_112719a2c;
  _objc_loadWeakRetained();
  lVar33 = param_1 + _DAT_112719a30;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c149ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112719a34;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bfb9460();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112719a38;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112719a3c;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112719a40;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c275400();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_112719a44;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112719a48;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0491e0();
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar62);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar61);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar60);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar63);
  param_1 = param_1 + _DAT_112719a4c;
  _objc_loadWeakRetained();
  lVar7 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(param_1);
  puVar48 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = PTR_PTR_1126b2b48;
  _objc_alloc();
  func_0x00010c000720(0x3ff0000000000000,0x4030000000000000,0,0x4030000000000000);
  func_0x00010c21c600();
  _objc_release(puVar48);
  _objc_release(lVar63);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar59) {
    ___stack_chk_fail();
    puVar49 = PTR_PTR_1126b3e40;
    _objc_alloc();
    lVar63 = (long)_DAT_1127199f8;
    puVar4 = puVar1 + lVar63;
    _objc_loadWeakRetained();
    puVar50 = puVar4;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar48 = puVar1 + lVar63;
    _objc_loadWeakRetained();
    puVar51 = puVar48;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar52 = puVar1 + _DAT_112719a00;
    _objc_loadWeakRetained();
    puVar53 = puVar52;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    puVar54 = puVar1 + _DAT_112719a30;
    _objc_loadWeakRetained();
    puVar55 = puVar54;
    func_0x00010c149ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar56 = puVar1 + _DAT_112719a5c;
    _objc_loadWeakRetained();
    puVar57 = puVar56;
    func_0x00010c149be0();
    _objc_retainAutoreleasedReturnValue();
    puVar58 = puVar1 + _DAT_112719a64;
    _objc_loadWeakRetained();
    puVar1 = puVar1 + _DAT_112719a68;
    _objc_loadWeakRetained();
    func_0x00010c048d40(puVar49);
    _objc_release(puVar1);
    _objc_release(puVar58);
    _objc_release(puVar57);
    _objc_release(puVar56);
    _objc_release(puVar55);
    _objc_release(puVar54);
    _objc_release(puVar53);
    _objc_release(puVar52);
    _objc_release(puVar51);
    _objc_release(puVar48);
    _objc_release(puVar50);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar49);
  return;
}



/* Entry: 10501fa88; end: 10501fc4f; -[SCFriendProfileIdentityPillsSectionPluginsEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10501fa88(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar1 = PTR_PTR_1126b3e40;
  _objc_alloc();
  lVar15 = (long)_DAT_1127199f8;
  lVar2 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar4 = lVar15;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112719a00;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112719a50);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112719a54);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112719a58);
  lVar7 = param_1 + _DAT_112719a30;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c149ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112719a5c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c149be0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112719a60);
  lVar11 = param_1 + _DAT_112719a64;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112719a68;
  _objc_loadWeakRetained();
  func_0x00010c048d40(puVar1,param_2,lVar3,lVar4,lVar6,uVar14,uVar12,uVar13,lVar8,lVar10,uVar16,
                      lVar11,param_1);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10501fc50; end: 10501fdeb; -[SCFriendProfileIdentityPillsSectionPluginsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10501fc50(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112719a44);
  _objc_destroyWeak(param_1 + _DAT_112719a48);
  _objc_destroyWeak(param_1 + _DAT_112719a40);
  _objc_destroyWeak(param_1 + _DAT_112719a3c);
  _objc_destroyWeak(param_1 + _DAT_112719a38);
  _objc_destroyWeak(param_1 + _DAT_112719a34);
  _objc_destroyWeak(param_1 + _DAT_112719a68);
  _objc_destroyWeak(param_1 + _DAT_112719a64);
  _objc_storeStrong(param_1 + _DAT_112719a60,0);
  _objc_storeStrong(param_1 + _DAT_112719a58,0);
  _objc_storeStrong(param_1 + _DAT_112719a54,0);
  _objc_storeStrong(param_1 + _DAT_112719a50,0);
  _objc_storeStrong(param_1 + _DAT_112719a6c,0);
  _objc_destroyWeak(param_1 + _DAT_112719a5c);
  _objc_destroyWeak(param_1 + _DAT_112719a30);
  _objc_destroyWeak(param_1 + _DAT_112719a2c);
  _objc_destroyWeak(param_1 + _DAT_112719a28);
  _objc_destroyWeak(param_1 + _DAT_112719a24);
  _objc_destroyWeak(param_1 + _DAT_1127199fc);
  _objc_destroyWeak(param_1 + _DAT_112719a1c);
  _objc_destroyWeak(param_1 + _DAT_112719a18);
  _objc_destroyWeak(param_1 + _DAT_112719a4c);
  _objc_destroyWeak(param_1 + _DAT_112719a20);
  _objc_destroyWeak(param_1 + _DAT_112719a14);
  _objc_destroyWeak(param_1 + _DAT_112719a10);
  _objc_destroyWeak(param_1 + _DAT_112719a0c);
  _objc_destroyWeak(param_1 + _DAT_112719a04);
  _objc_destroyWeak(param_1 + _DAT_112719a00);
  _objc_destroyWeak(param_1 + _DAT_112719a08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127199f8);
  return;
}



/* Entry: 10501fdec; end: 1050200d3; -[SCMyProfileIdentityPillsSectionActionHandler initWithValdiRuntimeProvider:communitiesOnboardingScopeExposer:communityActionMenuScopeExposer:communityPillTapScopeExposer:communitySharingScopeExposer:circumstanceEngine:saturnUpsellTrayScopeExposer:saturnSocialContextProvider:saturnExperimentProvider:communitiesAttributionProvider:communityOrgService:nowPlayingSettingsScopeExposer:settingsScopeServices:] */

undefined8 *
FUN_10501fdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e5a90;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
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
  }
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



/* Entry: 1050200d4; end: 105020597; -[SCMyProfileIdentityPillsSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1050200d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be7bd20(param_1);
    goto LAB_1050201c8;
  }
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010be47780(param_1);
      goto LAB_1050201c8;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010be47760(param_1);
      goto LAB_1050201c8;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0720c0();
          _objc_release(uVar1);
          if ((int)uVar2 == 0) {
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((int)uVar2 == 0) {
              uVar1 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar1;
              func_0x00010c0720c0();
              _objc_release(uVar1);
              if ((int)uVar2 == 0) {
                param_1 = 0;
              }
              else {
                func_0x00010be2d000(param_1);
              }
            }
            else {
              func_0x00010be2f760(param_1);
            }
          }
          else {
            uVar2 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126afdb8;
            _objc_opt_class(PTR_PTR_1126afdb8);
            uVar4 = uVar2;
            _objc_opt_isKindOfClass(uVar2,puVar3);
            uVar1 = uVar2;
            if ((uVar4 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar2);
            uVar2 = uVar1;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar4 = uVar2;
            _objc_opt_isKindOfClass(uVar2,puVar3);
            uVar1 = uVar2;
            if ((uVar4 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar2);
            func_0x00010be821a0(param_1);
            _objc_release(uVar1);
            param_1 = 1;
          }
          goto LAB_1050201c8;
        }
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126afdb8;
        _objc_opt_class(PTR_PTR_1126afdb8);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        uVar4 = uVar1;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        puVar3 = PTR_PTR_1126b3e48;
        _objc_opt_class(PTR_PTR_1126b3e48);
        uVar1 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar3);
        uVar2 = uVar4;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar4);
        func_0x00010c082fe0(uVar2);
        uVar1 = uVar2;
        func_0x00010bf44000(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        func_0x00010be68600(param_1);
        goto LAB_1050201c4;
      }
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
    }
    func_0x00010be68580(param_1);
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010be477a0(param_1);
  }
LAB_1050201c4:
  _objc_release(uVar1);
LAB_1050201c8:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105020598; end: 10502063b; -[SCMyProfileIdentityPillsSectionActionHandler _launchCommunityPillTapScopewithGroupId:] */

undefined8 FUN_105020598(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c071800();
  if ((iVar1 != 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) {
    puVar3 = PTR_PTR_1126b1008;
    _objc_alloc(PTR_PTR_1126b1008);
    lVar2 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c018fc0(puVar3,param_2,param_3,lVar2,param_1);
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10502063c; end: 10502073f; -[SCMyProfileIdentityPillsSectionActionHandler _launchCommunitiesOnboardingCollegeSearch] */

undefined8 FUN_10502063c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b3e50;
    _objc_alloc(PTR_PTR_1126b3e50);
    uVar5 = 0x81;
    func_0x000100c6f294(0x81);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0569a0(puVar4,param_2,puVar2,param_1,uVar5,uVar6,2,0,0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return 1;
}



/* Entry: 105020740; end: 105020843; -[SCMyProfileIdentityPillsSectionActionHandler _launchCommunitiesOnboarding] */

undefined8 FUN_105020740(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b3e50;
    _objc_alloc(PTR_PTR_1126b3e50);
    uVar5 = 0x81;
    func_0x000100c6f294(0x81);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0569a0(puVar4,param_2,puVar2,param_1,uVar5,uVar6,0,0,0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return 1;
}



/* Entry: 105020844; end: 1050208e3; -[SCMyProfileIdentityPillsSectionActionHandler _onCommunityPillLongPressWithStoryId:isPendingCommunity:] */

undefined8 FUN_105020844(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3d40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c039080(puVar1,param_2,lVar2,param_1,param_3,param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 1050208e4; end: 105020c2f; -[SCMyProfileIdentityPillsSectionActionHandler _onCommunityWaitlistPillTapWithIsVerified:completionBlock:] */

undefined1 * FUN_1050208e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_158 [8];
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = auStack_98;
  _objc_initWeak(puVar2,param_1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108061d80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105020c30;
  puStack_b0 = &UNK_110853c30;
  _objc_retain(param_4);
  puVar10 = auStack_98;
  lStack_a8 = param_4;
  _objc_copyWeak(auStack_a0,puVar10);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = puVar1;
  func_0x00010befa120(puVar1);
  puVar5 = PTR_PTR_1126aed70;
  func_0x000108061d68();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar7;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x105020d30;
  puStack_d8 = &UNK_11084e500;
  _objc_retain(param_4);
  lStack_d0 = param_4;
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000108061ca8();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar7;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105020db8;
  puStack_100 = &UNK_11084e500;
  _objc_retain(param_4);
  lStack_f8 = param_4;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar5;
  puStack_88 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar7;
  func_0x000108061d98();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x000108061db0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar4);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lStack_f8);
  _objc_release(puVar5);
  _objc_release(lStack_d0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(lStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (undefined1 *)0x1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  lVar9 = param_4;
  __Unwind_Resume();
  pcStack_128 = FUN_105020c30;
  lStack_150 = param_1;
  puStack_148 = puVar3;
  puStack_140 = puVar1;
  lStack_138 = param_4;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  uVar11 = *(undefined8 *)(lVar9 + 0x20);
  _objc_retain(uVar11);
  _objc_copyWeak(auStack_158,lVar9 + 0x28);
  func_0x00010bf84b00(puVar10);
  _objc_destroyWeak(auStack_158);
  _objc_release(uVar11);
  _objc_release(puVar10);
  return puVar10;
}



/* Entry: 105020c30; end: 105020cef;  */

void FUN_105020c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105020cf0; end: 105020da7;  */

void FUN_105020cf0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb1b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105020da8; end: 105020db7;  */

void FUN_105020da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105020db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105020db8; end: 105020e2f;  */

void FUN_105020db8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105020e30; end: 105020e3f;  */

void FUN_105020e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105020e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),3);
  return;
}



/* Entry: 105020e40; end: 105020edb; -[SCMyProfileIdentityPillsSectionActionHandler _shareCommunityOnboarding] */

undefined8 FUN_105020e40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b3e58;
  _objc_alloc(PTR_PTR_1126b3e58);
  func_0x00010c00b1a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 105020edc; end: 105020fa7; -[SCMyProfileIdentityPillsSectionActionHandler _presentIdentityPillDialogWithActionModel:] */

undefined8 FUN_105020edc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdb8;
  _objc_opt_class(PTR_PTR_1126afdb8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3e60;
  _objc_opt_class(PTR_PTR_1126b3e60);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010be7d480(param_1);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 105020fa8; end: 105021027; -[SCMyProfileIdentityPillsSectionActionHandler _presentPillDialogWithViewModel:] */

void FUN_105020fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3d38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c061ec0();
  _objc_release(param_3);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105021028; end: 10502102b; -[SCMyProfileIdentityPillsSectionActionHandler _processSaturnDeeplinkWithUrl:] */

void FUN_105021028(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openSaturnUrlOrPresentUpsell__112578ef8);
  return;
}



/* Entry: 10502102c; end: 105021153; -[SCMyProfileIdentityPillsSectionActionHandler _openSaturnUrlOrPresentUpsell:] */

void FUN_10502102c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b3d48;
    _objc_alloc_init(PTR_PTR_1126b3d48);
    _objc_initWeak(auStack_38,param_1);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c1148a0(puVar2);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105021154; end: 1050211fb;  */

void FUN_105021154(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if ((param_2 & 1) == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1050211fc;
    puStack_38 = &UNK_110841fb0;
    _objc_copyWeak(auStack_28,param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_30 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1050211fc; end: 10502128b;  */

void FUN_1050211fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bde9be0();
  _objc_release(lVar3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be482e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502128c; end: 10502132f; -[SCMyProfileIdentityPillsSectionActionHandler _copySaturnLinkForDeferredOpen:] */

void FUN_10502128c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07cf20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b3d48;
      _objc_alloc_init(PTR_PTR_1126b3d48);
      func_0x00010bf52080();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105021330; end: 105021377; -[SCMyProfileIdentityPillsSectionActionHandler verifiedCommunitiesOnboardingDidFinishWithComplete:] */

void FUN_105021330(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105021378; end: 1050213bf; -[SCMyProfileIdentityPillsSectionActionHandler didCompleteProfileCommunityActionMenuScopeWithDidLeaveCommunity:] */

void FUN_105021378(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050213c0; end: 105021407; -[SCMyProfileIdentityPillsSectionActionHandler didCompleteCommunityPillTapScope] */

void FUN_1050213c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}


