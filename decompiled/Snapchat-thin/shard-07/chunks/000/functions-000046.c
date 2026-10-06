/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050e04f8; end: 1050e09b3; -[SCFriendProfileCondensedIdentitySectionDataProvider _createComponentContext] */

void FUN_1050e04f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(uVar8);
  puVar1 = PTR_PTR_1126b4a28;
  _objc_alloc(PTR_PTR_1126b4a28);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1050e09b4;
  puStack_98 = &UNK_110841fb0;
  uStack_90 = uVar8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c031500(puVar1);
  puStack_e0 = puVar6;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1050e0a6c;
  puStack_c8 = &UNK_110863548;
  uStack_c0 = uVar8;
  _objc_copyWeak(auStack_b8,auStack_80);
  func_0x00010c1d37c0(puVar1);
  puStack_110 = puVar6;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1050e0b7c;
  puStack_f8 = &UNK_110866eb0;
  uStack_f0 = uVar8;
  _objc_copyWeak(auStack_e8,auStack_80);
  func_0x00010c1d3040(puVar1);
  puStack_140 = puVar6;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_1050e0cc8;
  puStack_128 = &UNK_110841fb0;
  uStack_120 = uVar8;
  _objc_copyWeak(auStack_118,auStack_80);
  func_0x00010c1d2f00(puVar1);
  puStack_170 = puVar6;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1050e0d80;
  puStack_158 = &UNK_110841fb0;
  uStack_150 = uVar8;
  _objc_copyWeak(auStack_148,auStack_80);
  func_0x00010c1d2ee0(puVar1);
  puStack_1a0 = puVar6;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1050e0e38;
  puStack_188 = &UNK_110841fb0;
  uStack_180 = uVar8;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010c1d2b80(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0100(puVar1);
  _objc_release(uVar2);
  func_0x00010c17df40(puVar1);
  lVar3 = *(long *)(param_1 + 0xa0);
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c149b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar5 = *(long *)(param_1 + 0xa0);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c08fa60();
  if ((lVar3 != 0) && (lVar3 = lVar5, func_0x00010c08fa60(), lVar3 != 0)) {
    _objc_copyWeak(auStack_1a8,auStack_80);
    func_0x00010c1d3280(puVar1);
    uVar9 = *(undefined8 *)(param_1 + 0xd0);
    _objc_retain(uVar9);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar2);
    lVar3 = lVar5;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae6b8;
    _objc_retain();
    func_0x00010bf54280(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5540(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_1a8);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e09b4; end: 1050e0a3f;  */

void FUN_1050e09b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1050e0a40; end: 1050e0a6b;  */

void FUN_1050e0a40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e0a6c; end: 1050e0b27;  */

void FUN_1050e0a6c(long param_1,undefined8 param_2)

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



/* Entry: 1050e0b28; end: 1050e0b7b;  */

void FUN_1050e0b28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b9688dc(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6bb40(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050e0b7c; end: 1050e0c67;  */

void FUN_1050e0b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1050e0c68; end: 1050e0cc7;  */

void FUN_1050e0c68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010b9688dc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be6aec0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050e0cc8; end: 1050e0d53;  */

void FUN_1050e0cc8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1050e0d54; end: 1050e0d7f;  */

void FUN_1050e0d54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6acc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e0d80; end: 1050e0e0b;  */

void FUN_1050e0d80(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1050e0e0c; end: 1050e0e37;  */

void FUN_1050e0e0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6aca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e0e38; end: 1050e0ec3;  */

void FUN_1050e0e38(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1050e0ec4; end: 1050e0eef;  */

void FUN_1050e0ec4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e0ef0; end: 1050e0fab;  */

void FUN_1050e0ef0(long param_1,undefined8 param_2)

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



/* Entry: 1050e0fac; end: 1050e0fdf;  */

void FUN_1050e0fac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e0fe0; end: 1050e10ab;  */

void FUN_1050e0fe0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0f85e0(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050e10ac; end: 1050e1203;  */

void FUN_1050e10ac(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b4a30;
  _objc_opt_class(PTR_PTR_1126b4a30);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    ppuVar8 = &PTR_PTR_1108670e0;
    if (param_3 != 0) {
      ppuVar8 = &PTR_PTR_1108670d8;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b4a38;
    _objc_alloc(PTR_PTR_1126b4a38);
    uVar3 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf8e2c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c250f80(param_2);
    uVar6 = param_2;
    func_0x00010bf8b2a0(param_2);
    uVar7 = param_2;
    func_0x00010bf26d00(param_2);
    func_0x00010c052f40((double)(long)uVar5,(double)(long)uVar6,(double)(long)uVar7,puVar2);
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    ppuVar8 = &PTR_PTR_1108670d0;
  }
  func_0x000108c7a2e8(*(undefined8 *)(param_1 + 0x28),*ppuVar8,1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050e1204; end: 1050e1247; -[SCFriendProfileCondensedIdentitySectionDataProvider _onPlusBadgeImpression] */

void FUN_1050e1204(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xb0) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106c74410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1050e1248; end: 1050e12d3; -[SCFriendProfileCondensedIdentitySectionDataProvider _onDisplayNameTap] */

void FUN_1050e1248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126b4048;
  _objc_alloc(PTR_PTR_1126b4048);
  func_0x00010c048e40();
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f124b8,puVar2);
  _objc_release(puVar2);
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050e12d4; end: 1050e1353; -[SCFriendProfileCondensedIdentitySectionDataProvider _onStoryTap:] */

void FUN_1050e12d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  if (*(long *)(param_1 + 0xb8) != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c01b460();
    func_0x00010be250a0(param_1,param_2,puVar1,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1050e1354; end: 1050e13ef; -[SCFriendProfileCondensedIdentitySectionDataProvider _onProfilePictureTap:imageURL:] */

void FUN_1050e1354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  func_0x00010bdc3460(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050e13f0; end: 1050e146f; -[SCFriendProfileCondensedIdentitySectionDataProvider _onPlusBadgeTap] */

void FUN_1050e13f0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1050e1470; end: 1050e14fb; -[SCFriendProfileCondensedIdentitySectionDataProvider _onMuteIconTap] */

void FUN_1050e1470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b3fe0;
  _objc_alloc(PTR_PTR_1126b3fe0);
  func_0x00010c048d00();
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



/* Entry: 1050e14fc; end: 1050e1593; -[SCFriendProfileCondensedIdentitySectionDataProvider _onSaturnPillTapWithURL:] */

void FUN_1050e14fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1050e1594; end: 1050e164b; -[SCFriendProfileCondensedIdentitySectionDataProvider _handleAction:fromSourceView:] */

void FUN_1050e1594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  pcStack_58 = FUN_1050e164c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050e164c; end: 1050e165f;  */

void FUN_1050e164c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1050e1660; end: 1050e1663; -[SCFriendProfileCondensedIdentitySectionDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_1050e1660(void)

{
  return;
}



/* Entry: 1050e1664; end: 1050e16d7; -[SCFriendProfileCondensedIdentitySectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1050e1664(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1050e16d8;
    puStack_20 = &UNK_110855640;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_18 = param_1;
    func_0x00010c0bc6c0(param_3,param_2,&puStack_38,0,0,0,0,0,0,0,0);
  }
  return;
}



/* Entry: 1050e16d8; end: 1050e1893;  */

void FUN_1050e16d8(long param_1,undefined8 param_2)

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
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
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
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
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



/* Entry: 1050e1894; end: 1050e18c7;  */

void FUN_1050e1894(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be66de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e18c8; end: 1050e191f; -[SCFriendProfileCondensedIdentitySectionDataProvider didUpdateSummaryInfo:] */

void FUN_1050e18c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0xc9) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xc9) = 0;
    func_0x00010be14ac0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050e1920; end: 1050e1a2b; -[SCFriendProfileCondensedIdentitySectionDataProvider _fetchStorySummaryInfo:] */

void FUN_1050e1920(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfaa9c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1050e1a2c; end: 1050e1acb;  */

void FUN_1050e1a2c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126b4a40;
      _objc_alloc(PTR_PTR_1126b4a40);
      func_0x00010c041000();
    }
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea8080();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050e1acc; end: 1050e1ae3; -[SCFriendProfileCondensedIdentitySectionDataProvider contextProviderDelegate] */

void FUN_1050e1acc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050e1ae4; end: 1050e1aef; -[SCFriendProfileCondensedIdentitySectionDataProvider setContextProviderDelegate:] */

void FUN_1050e1ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf0,param_3);
  return;
}



/* Entry: 1050e1af0; end: 1050e1af7; -[SCFriendProfileCondensedIdentitySectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050e1af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1050e1af8; end: 1050e1b27; -[SCFriendProfileCondensedIdentitySectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050e1af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e1b28; end: 1050e1b2f; -[SCFriendProfileCondensedIdentitySectionDataProvider actionHandler] */

undefined8 FUN_1050e1b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 1050e1b30; end: 1050e1b5f; -[SCFriendProfileCondensedIdentitySectionDataProvider setActionHandler:] */

void FUN_1050e1b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e1b60; end: 1050e1ccf; -[SCFriendProfileCondensedIdentitySectionDataProvider .cxx_destruct] */

void FUN_1050e1b60(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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



/* Entry: 1050e1cd0; end: 1050e1e7f; -[SCFriendProfileCondensedIdentitySectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e1cd0(long param_1)

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
  pcStack_80 = FUN_1050e1e80;
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
  param_1 = param_1 + _DAT_11271be3c;
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



/* Entry: 1050e1e80; end: 1050e1eff;  */

void FUN_1050e1e80(long param_1)

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



/* Entry: 1050e1f00; end: 1050e267f; -[SCFriendProfileCondensedIdentitySectionEntryPoint _createSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e1f00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  
  lVar46 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar49 = (long)_DAT_11271be40;
  lVar1 = param_1 + lVar49;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108fab210();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b4a48;
  _objc_alloc();
  lVar47 = (long)_DAT_11271be44;
  lVar1 = param_1 + lVar47;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_11271be3c;
  lVar2 = param_1 + lVar48;
  _objc_loadWeakRetained(lVar2);
  lVar50 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar50;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ff00();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar50);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar1 = param_1 + _DAT_11271be48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126b4a50;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11271be4c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar10 = PTR_PTR_1126b4a58;
  _objc_alloc();
  lVar1 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar11 = lVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar47;
  _objc_loadWeakRetained();
  lVar12 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = (long)_DAT_11271be50;
  lVar4 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar13 = lVar4;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar14 = lVar50;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271be54;
  _objc_loadWeakRetained();
  lVar15 = lVar5;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271be58;
  _objc_loadWeakRetained();
  lVar16 = lVar6;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar17 = lVar49;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11271be5c;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11271be60;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bfb9940();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11271be64;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11271be68;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11271be6c;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bef1160();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + lVar47;
  _objc_loadWeakRetained();
  lVar29 = lVar47;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11271be70;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_11271be74;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_11271be78;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010bf0c380();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_11271be7c;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c149ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar40 = lVar48;
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049200();
  _objc_release(lVar40);
  _objc_release(lVar48);
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
  _objc_release(lVar47);
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
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar49);
  _objc_release(lVar16);
  _objc_release(lVar6);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar50);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar11);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11271be80;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar41 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR_PTR_1126b2b48;
  _objc_alloc();
  func_0x00010c000720(0,0x4030000000000000,0,0);
  func_0x00010c21c600();
  _objc_release(puVar41);
  _objc_release(lVar2);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar46) {
    ___stack_chk_fail();
    puVar42 = PTR_PTR_1126b4a60;
    _objc_alloc();
    puVar7 = puVar3 + _DAT_11271be3c;
    _objc_loadWeakRetained(puVar7);
    puVar43 = puVar7;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3 + _DAT_11271be88;
    _objc_loadWeakRetained(puVar9);
    puVar10 = puVar3 + _DAT_11271be64;
    _objc_loadWeakRetained(puVar10);
    puVar41 = puVar3 + _DAT_11271be7c;
    _objc_loadWeakRetained(puVar41);
    puVar44 = puVar41;
    func_0x00010c149ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar3 + _DAT_11271be90;
    _objc_loadWeakRetained();
    puVar45 = puVar3;
    func_0x00010c149be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048f60(puVar42);
    _objc_release(puVar45);
    _objc_release(puVar3);
    _objc_release(puVar44);
    _objc_release(puVar41);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar43);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar42);
  return;
}



/* Entry: 1050e2680; end: 1050e27d3; -[SCFriendProfileCondensedIdentitySectionEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e2680(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b4a60;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271be3c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271be84);
  lVar4 = param_1 + _DAT_11271be88;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_11271be64;
  _objc_loadWeakRetained(lVar5);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11271be8c);
  lVar6 = param_1 + _DAT_11271be7c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c149ac0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271be90;
  _objc_loadWeakRetained();
  lVar8 = param_1;
  func_0x00010c149be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048f60(puVar1,param_2,lVar3,uVar9,lVar4,lVar5,uVar10,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
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



/* Entry: 1050e27d4; end: 1050e291b; -[SCFriendProfileCondensedIdentitySectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050e27d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271be8c,0);
  _objc_storeStrong(param_1 + _DAT_11271be84,0);
  _objc_destroyWeak(param_1 + _DAT_11271be88);
  _objc_destroyWeak(param_1 + _DAT_11271be98);
  _objc_destroyWeak(param_1 + _DAT_11271be90);
  _objc_destroyWeak(param_1 + _DAT_11271be7c);
  _objc_destroyWeak(param_1 + _DAT_11271be78);
  _objc_destroyWeak(param_1 + _DAT_11271be74);
  _objc_destroyWeak(param_1 + _DAT_11271be70);
  _objc_destroyWeak(param_1 + _DAT_11271be48);
  _objc_destroyWeak(param_1 + _DAT_11271be94);
  _objc_destroyWeak(param_1 + _DAT_11271be6c);
  _objc_destroyWeak(param_1 + _DAT_11271be68);
  _objc_destroyWeak(param_1 + _DAT_11271be4c);
  _objc_destroyWeak(param_1 + _DAT_11271be80);
  _objc_destroyWeak(param_1 + _DAT_11271be54);
  _objc_destroyWeak(param_1 + _DAT_11271be58);
  _objc_destroyWeak(param_1 + _DAT_11271be64);
  _objc_destroyWeak(param_1 + _DAT_11271be60);
  _objc_destroyWeak(param_1 + _DAT_11271be5c);
  _objc_destroyWeak(param_1 + _DAT_11271be40);
  _objc_destroyWeak(param_1 + _DAT_11271be50);
  _objc_destroyWeak(param_1 + _DAT_11271be44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271be3c);
  return;
}



/* Entry: 1050e291c; end: 1050e294f; +[SCCImpalaContactPhotoResult emptyResult] */

void FUN_1050e291c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4a68;
  _objc_alloc_init(PTR_PTR_1126b4a68);
  func_0x00010c1c2e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e2950; end: 1050e29d7; +[SCCImpalaContactPhotoResult resultWithImageData:matchField:] */

void FUN_1050e2950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b4a68;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126b4a70;
  _objc_alloc_init(PTR_PTR_1126b4a70);
  func_0x00010c1a9f00();
  _objc_release(param_3);
  func_0x00010c1c2e60(puVar2,param_2,param_4);
  func_0x00010c1c2e40(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e29d8; end: 1050e2cf3; -[SCMyProfileCondensedIdentitySectionActionHandler initWithDisplaySnapcodeViewSubject:snapSaver:notificationPool:usernameProvider:linkGenerationService:shareScopeExposer:valdiRuntimeProvider:displayContentDelegate:communitiesOnboardingScopeExposer:communityActionMenuScopeExposer:communityPillTapScopeExposer:communitySharingScopeExposer:circumstanceEngine:qrCodeCardScopeExposer:] */

undefined8 *
FUN_1050e29d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126e6158;
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
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[7];
    puVar1[7] = param_16;
    _objc_release(uVar2);
  }
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



/* Entry: 1050e2cf4; end: 1050e3063; -[SCMyProfileCondensedIdentitySectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_1050e2cf4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
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
      if ((int)uVar2 != 0) {
        lVar3 = param_1 + 0x48;
        _objc_loadWeakRetained(lVar3);
        func_0x00010bf4dea0();
        _objc_release(lVar3);
        func_0x00010beb1e00(param_1);
        goto LAB_1050e2f6c;
      }
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        param_1 = 0;
        goto LAB_1050e2f6c;
      }
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126afdb8;
      _objc_opt_class(PTR_PTR_1126afdb8);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      uVar1 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010be7df40(param_1);
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126afdb8;
      _objc_opt_class(PTR_PTR_1126afdb8);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      uVar1 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      uVar1 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      uVar1 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010be99c20(param_1);
    }
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126afdb8;
    _objc_opt_class(PTR_PTR_1126afdb8);
    uVar5 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar5 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    uVar5 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010beb1f00(param_1);
  }
  _objc_release(uVar1);
LAB_1050e2f6c:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1050e3064; end: 1050e314f; -[SCMyProfileCondensedIdentitySectionActionHandler _saveSnapcodeToCameraRoll:] */

undefined8 FUN_1050e3064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c14ae40(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1050e3150; end: 1050e3197;  */

void FUN_1050e3150(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e3198; end: 1050e3267; -[SCMyProfileCondensedIdentitySectionActionHandler _onSaveSnapcodeCompleted:] */

void FUN_1050e3198(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc5b98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc5b98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc5bb8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc5bb8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050e3268; end: 1050e3477; -[SCMyProfileCondensedIdentitySectionActionHandler _shareSnapcode:] */

undefined * FUN_1050e3268(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be0d840();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_3);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2470;
  _objc_retain(param_3);
  func_0x00010c2adce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2478;
  _objc_alloc(PTR_PTR_1126b2478);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021e80(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b2490;
  _objc_alloc(PTR_PTR_1126b2490);
  func_0x00010c028f20();
  func_0x00010be0cde0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return (undefined *)0x1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfe94e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b1c68;
  _objc_retain(param_2);
  func_0x00010bfe94e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,0,puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 1050e3478; end: 1050e351b;  */

void FUN_1050e3478(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfe94e0(PTR_PTR_1126b1c68,param_2,*(undefined8 *)(param_1 + 0x20),0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b1c68;
  _objc_retain(param_2);
  func_0x00010bfe94e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,0,puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050e351c; end: 1050e3593;  */

void FUN_1050e351c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1c68;
  _objc_retain(param_2);
  func_0x00010bfe94e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,0,puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050e3594; end: 1050e35db; -[SCMyProfileCondensedIdentitySectionActionHandler _shareProfileLink] */

undefined8 FUN_1050e3594(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be0d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0cde0(param_1,param_2,uVar1,0);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 1050e35dc; end: 1050e373f; -[SCMyProfileCondensedIdentitySectionActionHandler _externalShareTextConfiguration] */

void FUN_1050e35dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfbf720(uVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1050e36c8;
  puStack_40 = &UNK_110866fa0;
  puVar5 = PTR_PTR_1126ae720;
  uStack_38 = uVar4;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050e3740; end: 1050e3857; -[SCMyProfileCondensedIdentitySectionActionHandler _exposeExternalShareScope:mediaConfiguration:] */

void FUN_1050e3740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,0);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b24a0;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0574a0(puVar3,param_2,puVar2,param_3,param_4,0,0,3,puVar4,param_1);
    _objc_release(puVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050e3858; end: 1050e39e7; -[SCMyProfileCondensedIdentitySectionActionHandler _presentQRCodePage:] */

bool FUN_1050e3858(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar3 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3ed8;
    _objc_opt_class(PTR_PTR_1126b3ed8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar6 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c038f40(puVar4);
    _objc_release(lVar6);
    puVar7 = PTR_PTR_1126b4a78;
    _objc_alloc(PTR_PTR_1126b4a78);
    uVar8 = 3;
    func_0x000100c6f294(3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058400(puVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    if (uVar1 != 0) {
      func_0x00010c0e94c0(uVar3);
      func_0x00010c1d4f40(puVar7);
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return lVar2 == 0;
}



/* Entry: 1050e39e8; end: 1050e39ef; -[SCMyProfileCondensedIdentitySectionActionHandler handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1050e39e8(void)

{
  return 0;
}



/* Entry: 1050e39f0; end: 1050e3a57; -[SCMyProfileCondensedIdentitySectionActionHandler shareSheetDismissedWithShareDestination:] */

void FUN_1050e39f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050e3a58; end: 1050e3a9f; -[SCMyProfileCondensedIdentitySectionActionHandler qrCodeCardPageDidDismiss] */

void FUN_1050e3a58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050e3aa0; end: 1050e3ab7; -[SCMyProfileCondensedIdentitySectionActionHandler presentingViewController] */

void FUN_1050e3aa0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050e3ab8; end: 1050e3ac3; -[SCMyProfileCondensedIdentitySectionActionHandler setPresentingViewController:] */

void FUN_1050e3ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 1050e3ac4; end: 1050e3b87; -[SCMyProfileCondensedIdentitySectionActionHandler .cxx_destruct] */

void FUN_1050e3ac4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 1050e3b88; end: 1050e443f; -[SCMyProfileCondensedIdentitySectionDataProvider initWithUserId:displayNameProvider:usernameProvider:scoreInfoProvider:birthdayProvider:saturnUserIdProvider:valdiRuntimeProvider:snapcodeScopeExposer:circumstanceEngine:auraDataManager:featureSettingsService:grapheneServices:plusFeatureGating:communityOrgService:alertPresenter:birthdayPageContextProviderServices:communityStoreProvider:multiProfileServices:pageLauncherServices:offPlatformLinkGenerationService:notificationPool:userTrackedLogger:composerBlizzardLogger:atlasMyDataProvider:saturnExperimentProvider:memoriesSnapTranscodingServices:memoriesAPIDataServices:composerMediaBridgeServices:asyncQueueServices:publicProfileAndUserDataService:cameraRollProvider:networkingClient:navigationServices:snapProServices:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:spotlightSubmissionScopeExposer:spotlightSubmissionScopeServices:userInfoServices:bitmojiFlatlandConfigProvider:offPlatformShareFeatureProvider:] */

undefined8 *
FUN_1050e3b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  puStack_70 = PTR_PTR_1126e6160;
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
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x13,param_21);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_27;
    _objc_release(uVar2);
    uVar4 = puVar1[0x1b];
    _objc_retain(uVar4);
    puVar3 = PTR_PTR_1126b3938;
    _objc_alloc();
    _objc_retain(uVar4);
    func_0x00010c0213e0(0x4008000000000000);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_36;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x23,param_37);
    _objc_retain(param_38);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_38;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0c28;
    _objc_opt_new();
    uVar2 = puVar1[0x29];
    puVar1[0x29] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x2a,param_39);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_43;
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar4);
  }
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
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



/* Entry: 1050e4440; end: 1050e459b;  */

void FUN_1050e4440(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_3 == (undefined *)0x0) goto LAB_1050e4574;
    puVar2 = PTR_PTR_1126b3938;
    func_0x00010c275da0(PTR_PTR_1126b3938);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,0,puVar2);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010bfc7ce0(lVar1);
    _objc_release(param_3);
    _objc_release(param_3);
    puVar2 = param_3;
  }
  _objc_release(puVar2);
LAB_1050e4574:
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1050e459c; end: 1050e45cf;  */

void FUN_1050e459c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001050e45ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 1050e45d0; end: 1050e4667;  */

void FUN_1050e45d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3938;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275da0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1050e4668; end: 1050e482b; -[SCMyProfileCondensedIdentitySectionDataProvider setUp] */

void FUN_1050e4668(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x000108435fdc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = puVar1;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1050e482c;
    puStack_58 = &UNK_11084eff0;
    _objc_copyWeak(auStack_50,auStack_48);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  lVar6 = param_1 + 400;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c295320();
  _objc_release(lVar6);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_48);
  _objc_opt_class(PTR_PTR_1126b3e88);
  func_0x00010c1275a0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1050e482c; end: 1050e48ab;  */

void FUN_1050e482c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedbea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e48ac; end: 1050e48eb; -[SCMyProfileCondensedIdentitySectionDataProvider _updateMyAuraData] */

void FUN_1050e48ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e48ec; end: 1050e4917; -[SCMyProfileCondensedIdentitySectionDataProvider tearDown] */

void FUN_1050e48ec(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0xb0));
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e4918; end: 1050e49a3; -[SCMyProfileCondensedIdentitySectionDataProvider _bridgeObservableFromStringUserInfoProvider:] */

void FUN_1050e4918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010b09c8d0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050e49a4; end: 1050e4a07;  */

void FUN_1050e49a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050e4a08; end: 1050e4b13; -[SCMyProfileCondensedIdentitySectionDataProvider valdiContext] */

void FUN_1050e4a08(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010bdf5680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0xb8);
  if ((uVar2 == 0) || (func_0x00010bf6f140(), (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b4a80;
    _objc_opt_class(PTR_PTR_1126b4a80);
    lVar5 = param_1;
    func_0x00010bdec340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010bf55740(uVar8,param_2,puVar4,lVar1,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = uVar6;
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(uVar8);
    _objc_release(uVar3);
    func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 0xb8),param_2,param_1);
  }
  else {
    func_0x00010c2226c0(*(undefined8 *)(param_1 + 0xb8),param_2,lVar1);
  }
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1050e4b14; end: 1050e4ebb; -[SCMyProfileCondensedIdentitySectionDataProvider _createValdiViewModel] */

undefined ** FUN_1050e4b14(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR_PTR_1126b4a88;
  _objc_alloc(PTR_PTR_1126b4a88);
  lVar2 = param_1;
  func_0x00010bdd5820(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bdd5820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b180(ppuVar1);
  _objc_release(lVar9);
  _objc_release(lVar2);
  func_0x00010beec800(*(undefined8 *)(param_1 + 0xc0));
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245080();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2451e0();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202180(ppuVar1);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf150c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fda0(ppuVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  lVar9 = *(long *)(param_1 + 0x140);
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
LAB_1050e4e30:
      _objc_release(lVar10);
      func_0x00010c1b5200(ppuVar1);
      func_0x00010bdf0360(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c95c0(ppuVar1);
      _objc_release(param_1);
      _objc_release(lVar10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
        return ppuVar1;
      }
      ___stack_chk_fail();
      func_0x00010c252440();
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110becf0;
      if (param_2 != 3) {
        ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bed08;
      }
      return ppuVar1;
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar10);
      }
      lVar14 = *(long *)(lVar15 * 8);
      lVar11 = lVar14;
      func_0x00010c074e40();
      if ((int)lVar11 != 0) {
        lVar11 = lVar14;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar11);
        if (lVar12 != 0) {
          func_0x00010c1164a0(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar14;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e4140(ppuVar1);
          _objc_release(lVar2);
          _objc_release(lVar14);
          goto LAB_1050e4e30;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar2 != lVar15);
    lVar2 = lVar10;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1050e4ebc; end: 1050e4eeb;  */

undefined ** FUN_1050e4ebc(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  
  func_0x00010c252440();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110becf0;
  if (param_2 != 3) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bed08;
  }
  return ppuVar1;
}



/* Entry: 1050e4eec; end: 1050e5803; -[SCMyProfileCondensedIdentitySectionDataProvider _createComponentContext] */

void FUN_1050e4eec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126b4a90;
  _objc_alloc_init();
  lVar2 = param_1;
  func_0x00010c275b20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4a98;
  _objc_alloc();
  func_0x00010c038ea0();
  uVar15 = *(undefined8 *)(param_1 + 0x160);
  *(undefined **)(param_1 + 0x160) = puVar3;
  _objc_release(uVar15);
  uVar4 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010c08b840(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b96a0(puVar1);
  _objc_release(uVar15);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b4aa0;
  _objc_alloc();
  func_0x00010c05c520();
  uVar15 = *(undefined8 *)(param_1 + 0x168);
  *(undefined **)(param_1 + 0x168) = puVar3;
  _objc_release(uVar15);
  uVar4 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c09b140(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181500(puVar1);
  _objc_release(uVar15);
  _objc_release(uVar4);
  uVar15 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bfe7700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1050e5804;
  puStack_90 = &UNK_110855710;
  _objc_retain(uVar15);
  uStack_88 = uVar15;
  func_0x00010c017a80(puVar5);
  func_0x00010c1aa2a0(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b4aa8;
  _objc_alloc();
  func_0x00010bff7fe0();
  puVar6 = PTR_PTR_1126b4ab0;
  _objc_alloc(PTR_PTR_1126b4ab0);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1050e580c;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_f8 = puVar3;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1050e5870;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c031520(puVar6);
  puStack_120 = puVar3;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1050e59c4;
  puStack_108 = &UNK_1108434b0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c1d40c0(puVar6);
  lVar7 = param_1 + 0x98;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d83e0(puVar6);
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar7);
  lVar9 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar7;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010c07b920();
    _objc_release(uVar10);
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x148);
      _objc_retain(uVar4);
      uVar10 = *(undefined8 *)(param_1 + 0xe8);
      _objc_retain(uVar10);
      lVar9 = lVar7;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126ae6b8;
      puStack_160 = puVar3;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_1050e59f0;
      puStack_148 = &UNK_110866f10;
      uStack_140 = uVar10;
      lStack_138 = lVar7;
      _objc_retain();
      lStack_130 = lVar9;
      uStack_128 = uVar4;
      func_0x00010bf54280(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5540(puVar6);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lStack_130);
      _objc_release(lVar9);
      _objc_release(uVar10);
      _objc_release(uVar4);
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar11 = PTR_PTR_1126afe50;
  _objc_alloc();
  func_0x00010c040b80();
  lVar9 = param_1;
  func_0x00010c275b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1bc0(puVar11);
  _objc_release(lVar9);
  puVar12 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  puStack_188 = puVar3;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1050e5c14;
  puStack_170 = &UNK_110855710;
  puStack_168 = puVar11;
  func_0x00010c017a80();
  func_0x00010c1cba60(puVar6);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  puStack_1b0 = puVar3;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x1050e5c3c;
  puStack_198 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_190,auStack_80);
  func_0x00010c017a80(puVar12);
  func_0x00010c1c66a0(puVar6);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  puStack_1d8 = puVar3;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_1050e5c90;
  puStack_1c0 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_1b8,auStack_80);
  func_0x00010c017a80(puVar12);
  func_0x00010c1e5880(puVar6);
  _objc_release(puVar12);
  func_0x00010c275b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126aff58;
  _objc_alloc();
  func_0x00010c038f60();
  puVar13 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  puStack_208 = puVar3;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_1050e5d00;
  puStack_1f0 = &UNK_110867030;
  _objc_copyWeak(auStack_1e0,auStack_80);
  puStack_1e8 = puVar12;
  func_0x00010c017a80(puVar13);
  func_0x00010c1e58e0(puVar6);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126b0fb8;
  _objc_alloc();
  func_0x00010c0093c0();
  puVar14 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  puStack_238 = puVar3;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_1050e5e24;
  puStack_220 = &UNK_110867030;
  _objc_copyWeak(auStack_210,auStack_80);
  puStack_218 = puVar13;
  func_0x00010c017a80(puVar14);
  func_0x00010c1c4a00(puVar6);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  puStack_260 = puVar3;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_1050e5e9c;
  puStack_248 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_240,auStack_80);
  func_0x00010c017a80(puVar14);
  func_0x00010c1cc960(puVar6);
  _objc_release(puVar14);
  puVar3 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  _objc_copyWeak(auStack_268,auStack_80);
  func_0x00010c017a80(puVar3);
  func_0x00010c171b20(puVar6);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_268);
  _objc_destroyWeak(auStack_240);
  _objc_destroyWeak(auStack_210);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_1e0);
  _objc_release(puVar12);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_release(puVar11);
  _objc_release(uVar4);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar5);
  _objc_release(uStack_88);
  _objc_release(uVar15);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1050e5804; end: 1050e580b;  */

void FUN_1050e5804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1050e580c; end: 1050e586f;  */

void FUN_1050e580c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be250a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050e5870; end: 1050e5997;  */

void FUN_1050e5870(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar4 = PTR_PTR_1126afdb8;
    _objc_alloc(PTR_PTR_1126afdb8);
    func_0x00010bff0880();
    func_0x00010c01b460(puVar3);
    _objc_release(puVar4);
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    func_0x00010be250a0();
    _objc_release(lVar5);
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x48);
    func_0x000108fab1a4();
    if (iVar1 != 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1050e5998;
      puStack_50 = &UNK_1108434b0;
      _objc_copyWeak(auStack_48,param_1 + 0x20);
      func_0x000100162d98("APPSTORE",&puStack_68);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1050e5998; end: 1050e59ef;  */

void FUN_1050e5998(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1a7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050e59f0; end: 1050e5abb;  */

void FUN_1050e59f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0f85e0(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050e5abc; end: 1050e5c13;  */

void FUN_1050e5abc(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b4a30;
  _objc_opt_class(PTR_PTR_1126b4a30);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    ppuVar8 = &PTR_PTR_1108670e0;
    if (param_3 != 0) {
      ppuVar8 = &PTR_PTR_1108670d8;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b4a38;
    _objc_alloc(PTR_PTR_1126b4a38);
    uVar3 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf8e2c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c250f80(param_2);
    uVar6 = param_2;
    func_0x00010bf8b2a0(param_2);
    uVar7 = param_2;
    func_0x00010bf26d00(param_2);
    func_0x00010c052f40((double)(long)uVar5,(double)(long)uVar6,(double)(long)uVar7,puVar2);
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    ppuVar8 = &PTR_PTR_1108670d0;
  }
  func_0x000108c7a174(*(undefined8 *)(param_1 + 0x28),*ppuVar8,1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050e5c14; end: 1050e5c8f;  */

void FUN_1050e5c14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050e5c90; end: 1050e5cff;  */

void FUN_1050e5c90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf580a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050e5d00; end: 1050e5e23;  */

void FUN_1050e5d00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b0e80;
    _objc_alloc(PTR_PTR_1126b0e80);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + 0x118;
    _objc_loadWeakRetained(lVar2);
    uVar9 = *(undefined8 *)(lVar1 + 0x120);
    uVar3 = *(undefined8 *)(lVar1 + 0x140);
    func_0x00010c2932e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + 0x48);
    lVar6 = lVar1 + 0x150;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c0585e0(puVar8,param_2,uVar7,lVar2,uVar9,uVar5,uVar10,lVar6,
                        *(undefined8 *)(lVar1 + 0x158),0);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1050e5e24; end: 1050e5e9b;  */

void FUN_1050e5e24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b7000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050e5e9c; end: 1050e5f33;  */

void FUN_1050e5e9c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050e5f34; end: 1050e612f; -[SCMyProfileCondensedIdentitySectionDataProvider _generateAddFriendLinkAndCopyToClipboard] */

void FUN_1050e5f34(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
  func_0x000108faa8ec();
  if (iVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010beec820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e7c0(puVar5);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126afde0;
    uVar4 = uVar6;
    FUN_1050e96d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340(uVar6);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _CACurrentMediaTime();
    uVar6 = *(undefined8 *)(param_2 + 200);
    uVar4 = uVar2;
    func_0x00010beec820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f9516c(param_1,0,0x19,0,0,0,uVar6,3,uVar4,0,0xc,0,6,0,0,0);
    _objc_release(uVar4);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be26140(param_2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1050e6130; end: 1050e6337; -[SCMyProfileCondensedIdentitySectionDataProvider _handleAutoCopyViaOPSServiceWithLink:] */

void FUN_1050e6130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1050e6338;
  puStack_78 = &UNK_110863958;
  uStack_70 = uVar1;
  uStack_68 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  puVar4 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  func_0x00010c0311a0();
  puVar5 = PTR_PTR_1126b3ee8;
  _objc_alloc(PTR_PTR_1126b3ee8);
  puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045aa0(puVar5,param_2,3,0,puVar3,param_1,puVar4,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf57580();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = uVar9;
  _objc_release(uVar10);
  _objc_release(uVar8);
  func_0x00010bfd26e0(*(undefined8 *)(param_1 + 0x188),param_2,0x19);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050e6338; end: 1050e63a7;  */

void FUN_1050e6338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  func_0x00010bfe9ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050e63a8; end: 1050e63bf;  */

void FUN_1050e63a8(void)

{
  return;
}



/* Entry: 1050e63c0; end: 1050e63c7; -[SCMyProfileCondensedIdentitySectionDataProvider handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1050e63c0(void)

{
  return 0;
}



/* Entry: 1050e63c8; end: 1050e63cb; -[SCMyProfileCondensedIdentitySectionDataProvider shareSheetDismissedWithShareDestination:] */

void FUN_1050e63c8(void)

{
  return;
}



/* Entry: 1050e63cc; end: 1050e6413; -[SCMyProfileCondensedIdentitySectionDataProvider _setSnapcodeExpandTimestamp] */

void FUN_1050e63cc(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
  func_0x00010c206000(uVar1,param_3,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050e6414; end: 1050e64d7; -[SCMyProfileCondensedIdentitySectionDataProvider _setSnapcodeTooltipLastImpressionTimestamp] */

void FUN_1050e6414(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
  func_0x00010c2060a0(uVar1,param_3,(long)param_1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3d60;
  func_0x00010c2451c0(PTR_PTR_1126b3d60);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050e64d8; end: 1050e658f; -[SCMyProfileCondensedIdentitySectionDataProvider _handleAction:fromSourceView:] */

void FUN_1050e64d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  pcStack_58 = FUN_1050e6590;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050e6590; end: 1050e65a3;  */

void FUN_1050e6590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a0),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}


